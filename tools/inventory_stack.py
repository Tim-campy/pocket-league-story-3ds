"""Inventory the exact generic Stack members used by both original sources."""
import argparse,json,shutil,subprocess,sys
from collections import Counter
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths,source_files
from test_input import sha
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--original-managed',required=True,type=Path);args=parser.parse_args();managed=args.original_managed.resolve(strict=True)
    if managed.is_relative_to(ROOT):parser.error('Original metadata references must remain external')
    folder=ROOT/'build/stack-inventory';folder.mkdir(parents=True,exist_ok=True);csc,dotnet,framework=compiler_paths();source=ROOT/'tools/StackInventory.cs';target=folder/'StackInventory.dll'
    refs=[framework/(n+'.dll') for n in ['System.Private.CoreLib','System.Runtime','System.Console','System.Linq','System.Collections','System.Text.Json','System.Collections.Immutable','System.Memory','netstandard']]+[csc.parent/n for n in ['Microsoft.CodeAnalysis.dll','Microsoft.CodeAnalysis.CSharp.dll']]
    options=['/nologo','/nostdlib+','/nullable:enable','/target:exe','/out:'+str(target)]+['/r:'+str(p) for p in refs]+[str(source)];response=folder/'compile.rsp';response.write_text('\n'.join('"'+v+'"' for v in options)+'\n',encoding='utf-8',newline='\n')
    def run(command,label):
        r=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True,timeout=120);(folder/(label+'.log')).write_bytes(r.stdout+r.stderr)
        if r.returncode:raise RuntimeError('See build/stack-inventory/'+label+'.log')
    run([csc,'/noconfig','@'+str(response)],'compile')
    for p in refs[-2:]:shutil.copy2(p,folder/p.name)
    target.with_suffix('.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
    manifests={a:source_files(ROOT/'reference',a) for a in ['KairoLibrary','Assembly-CSharp']};metadata=[managed/name for name in ['mscorlib.dll','UnityEngine.dll','System.Core.dll','System.dll']]
    request=dict(root=str(ROOT/'reference'),kairo_sources=[str(ROOT/'reference'/v['path']) for v in manifests['KairoLibrary']],game_sources=[str(ROOT/'reference'/v['path']) for v in manifests['Assembly-CSharp']],references=[str(p) for p in metadata]);request_path=folder/'input.json';request_path.write_text(json.dumps(request)+'\n',encoding='utf-8',newline='\n');output=folder/'result.json';run([dotnet,target,request_path,output],'inventory')
    report=json.loads(output.read_text(encoding='utf-8'));report.update(producer_sha256=sha(Path(__file__)),helper_sha256=sha(source),source_manifest=manifests,original_metadata=[dict(name=p.name,sha256=sha(p)) for p in metadata]);(ROOT/'config/stack-usage.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(fields=len(report['fields']),calls=len(report['calls']),by_member=dict(Counter(v['callee'] for v in report['calls'])),semantic_errors=report['semantic_errors'])))
if __name__=='__main__':main()
