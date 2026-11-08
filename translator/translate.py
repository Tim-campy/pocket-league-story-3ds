"""Source-bound C# -> C++ driver. Never reports unsupported bodies as translated."""
import argparse
import csv
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths
from pc_compiler import environment

csv.field_size_limit(2_000_000)


def digest(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def run(command,log,env=None):
    p=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True,env=env)
    log.parent.mkdir(parents=True,exist_ok=True);log.write_bytes(p.stdout+p.stderr)
    if p.returncode:raise RuntimeError('Command failed: see '+str(log))
    return p


def prepare():
    compiler,runtime,framework=compiler_paths()
    folder=ROOT/'build/translator';folder.mkdir(parents=True,exist_ok=True)
    libraries=['System.Private.CoreLib','System.Runtime','System.Console','System.Linq','System.Collections',
               'System.Text.Json','System.Reflection.Metadata','System.Collections.Immutable','System.Memory',
               'System.Security.Cryptography','System.Text.RegularExpressions','netstandard']
    references=[framework/(name+'.dll') for name in libraries]+[compiler.parent/name for name in ['Microsoft.CodeAnalysis.dll','Microsoft.CodeAnalysis.CSharp.dll']]
    target=folder/'Translator.dll'
    args=['/nologo','/noconfig','/nostdlib+','/nullable:enable','/target:exe','/out:'+str(target)]
    args+=['/r:'+str(p) for p in references]+[str(ROOT/'translator/Translator.cs')]
    response=folder/'compile.rsp';response.write_text('\n'.join('"'+a+'"' for a in args if a!='/noconfig')+'\n',encoding='utf-8',newline='\n')
    run([compiler,'/noconfig','@'+str(response)],folder/'compiler.log')
    for p in references[-2:]:shutil.copy2(p,folder/p.name)
    (folder/'Translator.runtimeconfig.json').write_text(json.dumps({'runtimeOptions':{'tfm':'net10.0','framework':{'name':'Microsoft.NETCore.App','version':'10.0.10'}}})+'\n',encoding='utf-8',newline='\n')
    return folder,runtime,target,dict(compiler_sha256=digest(compiler),runtime_sha256=digest(runtime),
        translator_source_sha256=digest(ROOT/'translator/Translator.cs'),driver_sha256=digest(Path(__file__)))


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--assembly',choices=['KairoLibrary','Assembly-CSharp'],default='KairoLibrary')
    parser.add_argument('--original-managed',type=Path,required=True,help='External read-only metadata references; never copied')
    parser.add_argument('--compile',action='store_true')
    parser.add_argument('--diagnostics-only',action='store_true',help='Bind and attempt every source body, without writing C++ or promoting any status')
    parser.add_argument('--output',type=Path)
    parser.add_argument('--bootstrap-main',action='store_true',help='Declare Main factory even when its body remains unsupported, without emitting a stub')
    args=parser.parse_args()
    folder,runtime,target,producer=prepare()
    reference=ROOT/'reference'
    subprocess.run([sys.executable,ROOT/'tools/check_reference.py'],check=True,cwd=ROOT,capture_output=True)
    order=(reference/'config/compile-order'/f'{args.assembly}.txt').read_text(encoding='utf-8').splitlines()
    source_names=[p for p in order if p and not p.startswith('#')]
    assembly_info=f'src/{args.assembly}/AssemblyInfo.cs'
    if assembly_info not in source_names:source_names.append(assembly_info)
    if args.assembly=='KairoLibrary':
        vs=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1')
        refs=[Path('C:/Windows/Microsoft.NET/Framework/v2.0.50727/mscorlib.dll'),vs/'Editor/Data/Mono/lib/mono/2.0/System.Core.dll',args.original_managed/'UnityEngine.dll',vs/'Editor/Data/Mono/lib/mono/2.0/System.dll']
        with (ROOT/'config/boundary.csv').open(encoding='utf-8',newline='') as f: selected=[r['id'] for r in csv.DictReader(f) if r['classificacao']=='portavel']
        output=args.output or ROOT/'src/kairo/common/generated'
    else:
        refs=[args.original_managed/n for n in ['mscorlib.dll','KairoLibrary.dll','UnityEngine.dll','System.Core.dll','System.dll']]
        # Translation metadata uses original full signatures; Roslyn selectors are
        # taken from its bound source methods rather than hand-edited ledgers.
        selected=[];output=args.output or ROOT/'src/game'
    policies=json.loads((ROOT/'config/service-overrides.json').read_text(encoding='utf-8'))
    request=dict(assembly=args.assembly,sources=[str(reference/p) for p in source_names],references=[str(p.resolve()) for p in refs],selected=selected,output=str(output.resolve()),diagnostics_only=args.diagnostics_only,check_symbols=[p['symbol'] for p in policies['overrides']])
    request['source_root']=str(reference)
    if args.assembly=='Assembly-CSharp':
        portable=json.loads((ROOT/'config/phase2-translation.json').read_text(encoding='utf-8'))
        request.update(select_all_source_methods=True,
            external_types={c['id']:'pls::generated::'+c['cpp_name'].split('<')[0] for c in portable['generated_classes']},
            external_methods={m['id']:'pls::generated::'+m['cpp_name'] for m in portable['emitted_methods']},
            external_fields={f['id']:f['cpp_name'] for c in portable['generated_classes'] for f in c['fields'] if 'id' in f},
            bootstrap_method='M:main.Main.#ctor' if args.bootstrap_main else '')
        request['external_complete_bases']=list(request['external_types'])
        request['external_types']['T:kairo.unity.ui.IApplication']='pls::kairo::IApplication'
        request['external_types']['T:kairo.unity.form.FormManagerBase']='pls::kairo::FormManagerBase'
        request['external_complete_bases'].append('T:kairo.unity.ui.IApplication')
        request['native_includes']=['application.hpp','baked_arrays.hpp']
        baked=json.loads((ROOT/'config/baked-array-index.json').read_text(encoding='utf-8'))
        request['baked_arrays']={b['id']:b for b in baked['matched']}
        app='M:kairo.unity.ui.IApplication.'
        request['external_methods'].update({app+'Init(kairo.unity.ui.IApplication)':'member:source_Init',app+'GetCurrentApp':'pls::kairo::IApplication::GetCurrentApp',app+'SetViewport(System.Int32,System.Int32)':'member:SetViewport'})
        slots=['OnCreate','OnStart','OnRestart','OnStop','OnResume','OnSuspend','OnUpdate','OnDraw','OnRender','OnDestroy','GetFormManager']
        request['external_slots']={app+n:n for n in slots}
        request['external_methods'].update({app+n:'member:source_'+n for n in ['OnCreate','OnResume','OnSuspend','OnDestroy']})
        request['external_methods']['M:native.AppPlugin.Finish']='pls::kairo::request_host_finish'
    input_path=folder/(args.assembly+'-input.json');raw_path=folder/(args.assembly+'-translation.json')
    input_path.write_text(json.dumps(request,indent=2)+'\n',encoding='utf-8',newline='\n')
    run([runtime,target,input_path,raw_path],folder/(args.assembly+'-translator.log'))
    report=json.loads(raw_path.read_text(encoding='utf-8-sig'))
    if args.diagnostics_only:
        report.update(producer=producer,source_manifest=[dict(path=p,sha256=digest(reference/p)) for p in source_names],reference_metadata=[dict(filename=p.name,sha256=digest(p)) for p in refs])
        target_report=ROOT/'config'/('phase2-game-diagnostics.json' if args.assembly=='Assembly-CSharp' else 'phase2-portable-diagnostics.json')
        target_report.write_text(json.dumps(report,indent=2,ensure_ascii=True)+'\n',encoding='utf-8',newline='\n')
        print(json.dumps({k:report[k] for k in ['source_method_declarations','binding_errors','source_bodies_lowered_in_memory','generated_cpp_methods','compiled_methods','executed_methods']}))
        return
    # The source-only oracle is a test artifact, not public game output.
    oracle=output/'source_oracle.cs'
    if args.assembly=='Assembly-CSharp':
        # Game constant data comes from authenticated local assets, never from
        # a duplicated source-oracle initializer or a C++ literal payload.
        oracle.unlink(missing_ok=True)
        (folder/'Assembly-CSharp-source-oracle.cs').unlink(missing_ok=True)
    elif oracle.exists():shutil.move(str(oracle),folder/(args.assembly+'-source-oracle.cs'))
    compiled=False;compile_evidence=None
    if args.compile and report['emitted_method_count']:
        env=environment();native=folder/'native';native.mkdir(exist_ok=True)
        command=[shutil.which('cl.exe',path=env['PATH']),'/nologo','/std:c++17','/EHsc','/fp:strict','/utf-8','/W4','/c',
            '/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src'),'/Fo'+str(native/(args.assembly+'.obj')),str(output/('game_generated.cpp' if args.assembly=='Assembly-CSharp' else 'portable_generated.cpp'))]
        inputs=sorted(set((ROOT/'src/kairo/common').rglob('*.hpp'))|set((ROOT/'src/kairo/common').rglob('*.inc'))|set((ROOT/'src/kairo/api').rglob('*.hpp'))|set(output.glob('*.?pp'))|set(output.glob('*.inc')))
        before={p.relative_to(ROOT).as_posix():digest(p) for p in inputs}
        run(command,folder/('native-'+args.assembly+'-compile.log'),env)
        after={p.relative_to(ROOT).as_posix():digest(p) for p in inputs}
        if before!=after:raise RuntimeError('Native compile inputs changed concurrently; rerun translation before publishing a receipt')
        compiled=True
        object_file=native/(args.assembly+'.obj')
        compile_evidence=dict(compiler=dict(path=str(command[0]),sha256=digest(command[0])),object=dict(path=object_file.relative_to(ROOT).as_posix(),sha256=digest(object_file)),command=[str(c) for c in command],inputs=after)
    report.update(producer=producer,source_manifest=[dict(path=p,sha256=digest(reference/p)) for p in source_names],
        reference_commit='c7d097a847ca1f1a8e5fb7141ff11d338f5915c4',
        reference_metadata=[dict(filename=p.name,sha256=digest(p)) for p in refs],compiled=compiled,compile_evidence=compile_evidence,
        compiled_method_count=report['emitted_method_count'] if compiled else 0,
        game_translated_methods=report['emitted_method_count'] if args.assembly=='Assembly-CSharp' and compiled else 0,game_compiled_methods=report['emitted_method_count'] if args.assembly=='Assembly-CSharp' and compiled else 0,game_executed_methods=0,
        generated_files=[dict(path=p.relative_to(ROOT).as_posix(),sha256=digest(p)) for p in sorted(set(output.glob('*.?pp'))|set(output.glob('*.inc')))])
    report_target=ROOT/'config'/('phase2-game-translation.json' if args.assembly=='Assembly-CSharp' else 'phase2-translation.json')
    report_target.write_text(json.dumps(report,indent=2,ensure_ascii=True)+'\n',encoding='utf-8',newline='\n')
    measured=list(csv.DictReader((ROOT/'config/csharp-syntax.csv').open(encoding='utf-8')))
    covered=set(report['emitted_kind_occurrences'])
    syntax=[dict(kind=r['kind'],measured_count=r['count'],observed_in_emitted_body=r['kind'] in covered,
                 status='observed-in-emitted-body' if r['kind'] in covered else 'NOT_YET_VALIDATED') for r in measured]
    with (ROOT/'config'/('game-translator-syntax.csv' if args.assembly=='Assembly-CSharp' else 'translator-syntax.csv')).open('w',encoding='utf-8',newline='') as f:
        w=csv.DictWriter(f,fieldnames=list(syntax[0]),lineterminator='\n');w.writeheader();w.writerows(syntax)
    print(json.dumps({k:report[k] for k in ['requested_symbols','requested_methods','emitted_method_count','root_methods_emitted','compiled_method_count','executed_methods']}))


if __name__=='__main__':main()
