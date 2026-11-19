"""Readable emission mode: sample generation and equivalence evidence.

  python translator/readable.py lowering
      Lowering fixtures (tests/translator/LoweringFixtures.cs) emitted with
      "readable": true, formatted, then the same Mono differential as
      translator/test_lowering.py (compile generated C++, compare outputs).
  python translator/readable.py sample --apk APK --original-managed MANAGED
      KairoLibrary and Assembly-CSharp emitted with "readable": true into
      build/readable-sample/, formatted; three classes copied to
      docs/readable-sample/ and compiled with MSVC (/std:c++17 /permissive-
      /W4 /fp:strict), single process.

Nothing here writes to config/ or src/; the normal emission is untouched.
"""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
import time

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'translator'));sys.path.insert(0,str(ROOT/'tools'))
from translate import prepare,run  # noqa: E402
from pc_compiler import environment  # noqa: E402

CLANG_FORMAT=Path('C:/Program Files/Microsoft Visual Studio/18/Community/VC/Tools/Llvm/x64/bin/clang-format.exe')
STYLE=ROOT/'translator/readable.clang-format'
SAMPLE_CLASSES=('data.SponsorData','game.Team','form.TitleForm')
# Excerpt of SubForm (per-screen dispatch on type_): Draw and the start of _draw.
# The whole unit is compiled; only the excerpt is copied to docs/readable-sample.
EXCERPT_UNIT='form.SubForm'
EXCERPT_METHODS=('M:form.SubForm.Draw(kairo.unity.ui.Graphics)','M:form.SubForm._draw(kairo.unity.ui.Graphics)')
EXCERPT_MAX_LINES=160

def excerpt(cpp_text):
    lines=cpp_text.splitlines();out=['// Excerpt of form.SubForm.cpp (readable mode, generated): the per-screen',
        '// dispatch on type_. Whole unit: build/readable-sample/game/form.SubForm.cpp.','']
    for method in EXCERPT_METHODS:
        start=lines.index('// '+method)
        end=next((i for i in range(start+1,len(lines)) if lines[i].startswith('// M:')),len(lines))
        body=lines[start:end]
        if len(body)>EXCERPT_MAX_LINES:body=body[:EXCERPT_MAX_LINES]+['    // ... ('+str(end-start-EXCERPT_MAX_LINES)+' more lines in the full unit)','}']
        out+=body+['']
    return '\n'.join(out)


def digest(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def clang_format(folder):
    files=sorted(p for p in Path(folder).iterdir() if p.suffix in ('.cpp','.hpp','.inc'))
    for start in range(0,len(files),40):
        subprocess.run([str(CLANG_FORMAT),'-i','--style=file:'+str(STYLE),*[str(p) for p in files[start:start+40]]],check=True,cwd=ROOT)
    return len(files)


def lowering(args):
    folder,runtime,tool,producer=prepare()
    output=ROOT/'build/translator/readable-lowering-generated';output.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/LoweringFixtures.cs'
    framework=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    # Same request as translator/test_lowering.py, plus the readable flag.
    request=dict(assembly='LoweringFixtures',sources=[str(source)],references=[str(framework/(n+'.dll')) for n in ['mscorlib','System','System.Core']],selected=[],select_all_source_methods=True,output=str(output),readable=True)
    request['external_methods']={'M:Synthetic.SourceAdapterTarget.Read(System.Int32)':'source-adapter:M:Synthetic.SourceAdapters.Read(Synthetic.SourceAdapterTarget,System.Int32)'}
    request['external_methods']['M:Synthetic.SourceStaticTarget.Read(System.Int32)']='source-static:M:Synthetic.SourceStaticAdapters.Read(System.Int32)'
    request['external_methods']['M:Synthetic.SourceAdapterTarget.Next(System.Int32@)']='source-adapter:M:Synthetic.SourceAdapters.Next(Synthetic.SourceAdapterTarget,System.Int32@)'
    req=folder/'readable-lowering-input.json';report_file=folder/'readable-lowering-report.json'
    req.write_text(json.dumps(request),encoding='utf-8',newline='\n')
    run([runtime,tool,req,report_file],folder/'readable-lowering-translator.log')
    report=json.loads(report_file.read_text(encoding='utf-8-sig'))
    expected_rejected={'M:LoweringFixtures.UnsupportedClosureGoto(System.Int32)','M:Synthetic.IRun.Run','M:Synthetic.ImplicitScope.NeverCalled(System.Int32)','M:Synthetic.AbstractBase.Read',
                       'M:LoweringFixtures.GenericVirtualOverridden(System.Int32)','M:Synthetic.GenericVirtualBase.Make``1','M:Synthetic.GenericVirtualDerived.Make``1'}
    if set(report['rejected_methods'])!=expected_rejected:raise ValueError('Readable mode changed the supported fixture set: '+str(sorted(report['rejected_methods'])))
    if report.get('readable_unresolved_tokens'):raise ValueError('Unresolved hashed tokens: '+str(report['readable_unresolved_tokens'][:20]))
    formatted=0 if args.no_format else clang_format(output)
    result=ROOT/'build/readable-work/readable-lowering-result.json'
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',report_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'readable-lowering-differential','--result',result],check=True,cwd=ROOT)
    data=json.loads(result.read_text(encoding='utf-8'))
    hashes=[p for p in output.iterdir() if p.suffix in ('.cpp','.hpp','.inc') and __import__('re').search(r'\bcs_[0-9a-f]{16}',p.read_text(encoding='utf-8'))]
    summary=dict(cases=data['cases'],passed=data['passed'],failures=len(data.get('failures',[])),emitted_methods=len(report['emitted_methods']),formatted_files=formatted,files_with_hashed_identifiers=[p.name for p in hashes])
    (ROOT/'build/readable-work/readable-lowering-summary.json').write_text(json.dumps(summary,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(summary))


def sample(args):
    out=ROOT/'build/readable-sample';portable=out/'include/generated';game=out/'game'
    for folder in (portable,game):folder.mkdir(parents=True,exist_ok=True)
    common=[sys.executable,str(ROOT/'translator/translate.py'),'--original-managed',str(args.original_managed),'--readable']
    if not args.skip_translate:
        started=time.time()
        subprocess.run(common+['--assembly','KairoLibrary','--output',str(portable)],check=True,cwd=ROOT)
        # --bootstrap-main: same request as the normal game build (src/game).
        subprocess.run(common+['--assembly','Assembly-CSharp','--bootstrap-main','--output',str(game),'--readable-portable',str(portable)],check=True,cwd=ROOT)
        print('translated in',round(time.time()-started),'s')
    if not args.no_format:print('formatted',clang_format(portable)+clang_format(game),'files')
    docs=ROOT/'docs/readable-sample';docs.mkdir(parents=True,exist_ok=True)
    copied=[]
    for name in SAMPLE_CLASSES:
        for suffix in ('.hpp','.cpp'):
            source=game/(name+suffix)
            if not source.exists():raise FileNotFoundError(source)
            shutil.copy2(source,docs/source.name);copied.append(docs/source.name)
    target=docs/(EXCERPT_UNIT+'.excerpt.cpp')
    target.write_text(excerpt((game/(EXCERPT_UNIT+'.cpp')).read_text(encoding='utf-8')),encoding='utf-8',newline='\n');copied.append(target)
    compile_results=[]
    if not args.no_compile:
        env=environment();cl=shutil.which('cl.exe',path=env['PATH'])
        objects=out/'objects';objects.mkdir(exist_ok=True)
        for name in SAMPLE_CLASSES+(EXCERPT_UNIT,):
            cpp=game/(name+'.cpp')
            command=[cl,'/nologo','/c','/std:c++17','/permissive-','/EHsc','/W4','/fp:strict','/utf-8','/bigobj','/Od',
                     '/I'+str(game),'/I'+str(out/'include'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src'),
                     '/I'+str(ROOT/'build/generated/mono-collation'),'/I'+str(ROOT/'build/generated/mono-numberformat'),'/Fo'+str(objects/(name+'.obj')),str(cpp)]
            started=time.time();p=subprocess.run(command,capture_output=True,env=env,cwd=ROOT);elapsed=time.time()-started
            log=objects/(name+'.log');log.write_bytes(p.stdout+p.stderr)
            text=(p.stdout+p.stderr).decode('utf-8','replace')
            warnings=sum(1 for line in text.splitlines() if ': warning ' in line)
            errors=sum(1 for line in text.splitlines() if ': error ' in line)
            compile_results.append(dict(unit=cpp.name,returncode=p.returncode,warnings=warnings,errors=errors,seconds=round(elapsed,1),object_sha256=digest(objects/(name+'.obj')) if p.returncode==0 else None))
            print(json.dumps(compile_results[-1]))
    summary=dict(classes=SAMPLE_CLASSES,files=[dict(path=p.relative_to(ROOT).as_posix(),sha256=digest(p),lines=sum(1 for _ in p.open(encoding='utf-8'))) for p in copied],compile=compile_results,
                 portable_report=json.loads((portable/'readable-report.json').read_text(encoding='utf-8')).get('readable_unresolved_tokens'),
                 game_report=json.loads((game/'readable-report.json').read_text(encoding='utf-8')).get('readable_unresolved_tokens'))
    (ROOT/'build/readable-work/readable-sample-summary.json').write_text(json.dumps(summary,indent=2)+'\n',encoding='utf-8')
    if any(r['returncode'] for r in compile_results):raise SystemExit('sample compile failed; see build/readable-sample/objects/*.log')


def diagnostic(args):
    """C6b: the readable game and KairoLibrary with the per-method diagnostic
    instrumentation, in a new folder below build/, plus a manifest that
    tools/build_pc.py --readable-diagnostic validates. Never public output."""
    import hashlib
    out=args.output.resolve()
    if not out.is_relative_to((ROOT/'build').resolve()):raise SystemExit('output must stay below build/')
    if out.exists() and any(out.iterdir()):raise SystemExit('use a new empty folder')
    portable=out/'include/generated';game=out/'game'
    for folder in (portable,game):folder.mkdir(parents=True,exist_ok=True)
    common=[sys.executable,str(ROOT/'translator/translate.py'),'--original-managed',str(args.original_managed),'--readable','--readable-diagnostic']
    subprocess.run(common+['--assembly','KairoLibrary','--output',str(portable)],check=True,cwd=ROOT)
    subprocess.run(common+['--assembly','Assembly-CSharp','--bootstrap-main','--output',str(game),'--readable-portable',str(portable)],check=True,cwd=ROOT)
    # The same gap helper as translator/diagnostic_snapshot.py: a bootstrap gap is a
    # flushed PLS_TRANSLATION_GAP= marker, which the route supervisor stops on.
    import diagnostic_snapshot as snapshot_module
    (game/'diagnostic_runtime.hpp').write_bytes(snapshot_module.GAP_HELPER.encode('utf-8'))
    boot=game/'bootstrap_generated.cpp'
    if boot.exists():boot.write_bytes(b'#include "diagnostic_runtime.hpp"\n'+boot.read_bytes())
    def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
    files=[dict(path=p.relative_to(out).as_posix(),sha256=sha(p)) for p in sorted(out.rglob('*')) if p.is_file() and p.suffix in ('.cpp','.hpp','.inc')]
    producer={name:sha(ROOT/name) for name in ('translator/Translator.cs','translator/EmissionUnits.cs','translator/ReadableNames.cs','translator/ReadableUnits.cs','translator/translate.py','translator/bootstrap_source.py','translator/readable.py')}
    game_report=json.loads((game/'readable-report.json').read_text(encoding='utf-8'))
    manifest=dict(kind='readable-diagnostic',diagnostic_only=True,normal_coverage_promoted=0,producer=producer,
                  game_methods=game_report.get('emitted_method_count'),files=files,
                  note='Private C6b variant: readable C++ with PLS_METHOD_SCOPE; its executions never promote the canonical ledger.')
    (out/'readable-diagnostic-manifest.json').write_text(json.dumps(manifest,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(output=str(out),files=len(files),game_methods=manifest['game_methods'])))


def main():
    parser=argparse.ArgumentParser(description=__doc__,formatter_class=argparse.RawDescriptionHelpFormatter)
    sub=parser.add_subparsers(dest='command',required=True)
    p=sub.add_parser('lowering');p.add_argument('--no-format',action='store_true')
    p=sub.add_parser('sample');p.add_argument('--original-managed',type=Path,required=True);p.add_argument('--apk',type=Path)
    p.add_argument('--skip-translate',action='store_true');p.add_argument('--no-format',action='store_true');p.add_argument('--no-compile',action='store_true')
    p=sub.add_parser('diagnostic');p.add_argument('--original-managed',type=Path,required=True);p.add_argument('--output',type=Path,required=True)
    args=parser.parse_args()
    {'lowering':lowering,'sample':sample,'diagnostic':diagnostic}[args.command](args)


if __name__=='__main__':main()
