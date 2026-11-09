"""Inventory bound Unity input leaves without argument strings or game data."""
from collections import Counter
import argparse,json,shutil,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths,source_files
from test_input import sha
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--original-managed',type=Path);args=parser.parse_args()
    folder=ROOT/'build/debug-input-inventory';folder.mkdir(parents=True,exist_ok=True)
    csc,dotnet,framework=compiler_paths();source=ROOT/'tools/DebugInputInventory.cs';target=folder/'DebugInputInventory.dll'
    refs=[framework/(n+'.dll') for n in ['System.Private.CoreLib','System.Runtime','System.Console','System.Linq','System.Collections','System.Text.Json','System.Collections.Immutable','System.Memory','netstandard']]+[csc.parent/n for n in ['Microsoft.CodeAnalysis.dll','Microsoft.CodeAnalysis.CSharp.dll']]
    options=['/nologo','/nostdlib+','/nullable:enable','/target:exe','/out:'+str(target)]+['/r:'+str(p) for p in refs]+[str(source)]
    response=folder/'compile.rsp';response.write_text('\n'.join('"'+v+'"' for v in options)+'\n',encoding='utf-8',newline='\n')
    def run(command,name):
        r=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True,timeout=120);(folder/(name+'.log')).write_bytes(r.stdout+r.stderr)
        if r.returncode:raise RuntimeError('See build/debug-input-inventory/'+name+'.log')
    run([csc,'/noconfig','@'+str(response)],'compile')
    for p in refs[-2:]:shutil.copy2(p,folder/p.name)
    target.with_suffix('.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
    if args.original_managed:
        managed=args.original_managed.resolve(strict=True)
        baseline=dict(root=str(ROOT/'reference'),kairo_sources=[str(ROOT/'reference'/v['path']) for v in source_files(ROOT/'reference','KairoLibrary')],game_sources=[str(ROOT/'reference'/v['path']) for v in source_files(ROOT/'reference','Assembly-CSharp')],references=[str(managed/n) for n in ['mscorlib.dll','UnityEngine.dll','System.Core.dll','System.dll']])
    else:
        previous=ROOT/'build/culture-inventory/input.json'
        if not previous.is_file():parser.error('Provide the external original API metadata directory with --original-managed')
        baseline=json.loads(previous.read_text(encoding='utf-8'))
    if any(Path(p).resolve().is_relative_to(ROOT) for p in baseline['references']):raise ValueError('Original metadata must remain external')
    request=folder/'input.json';request.write_text(json.dumps(baseline)+'\n',encoding='utf-8',newline='\n');output=folder/'result.json';run([dotnet,target,request,output],'inventory')
    report=json.loads(output.read_text(encoding='utf-8'));report.update(producer_sha256=sha(Path(__file__)),helper_sha256=sha(source),source_manifest={assembly:source_files(ROOT/'reference',assembly) for assembly in ['KairoLibrary','Assembly-CSharp']},original_metadata=[dict(name=Path(p).name,sha256=sha(p)) for p in baseline['references']])
    (ROOT/'config/debug-input-usage.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n');print(json.dumps(dict(calls=len(report['calls']),by_assembly=dict(Counter(r['assembly'] for r in report['calls'])),by_leaf=dict(Counter(r['callee'] for r in report['calls'])),by_state=dict(Counter(r['leaf_binding'] for r in report['calls'])),unresolved=report['unresolved_input_members'])))
if __name__=='__main__':main()
