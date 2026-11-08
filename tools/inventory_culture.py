"""Measure bound culture operations and symbol provenance without publishing data."""
import argparse
from collections import Counter
import csv
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths,source_files
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--original-managed',required=True,type=Path);args=p.parse_args()
    managed=args.original_managed.resolve(strict=True)
    if managed.is_relative_to(ROOT):p.error('Original metadata references must remain external')
    csc,dotnet,framework=compiler_paths();folder=ROOT/'build/culture-inventory';folder.mkdir(parents=True,exist_ok=True)
    references=[framework/(n+'.dll') for n in ['System.Private.CoreLib','System.Runtime','System.Console','System.Linq','System.Collections','System.Text.Json','System.Collections.Immutable','System.Memory','netstandard']]
    references += [csc.parent/n for n in ['Microsoft.CodeAnalysis.dll','Microsoft.CodeAnalysis.CSharp.dll']]
    target=folder/'CultureInventory.dll';source=ROOT/'tools/CultureInventory.cs'
    options=['/nologo','/nostdlib+','/nullable:enable','/target:exe','/out:'+str(target)]+['/r:'+str(r) for r in references]+[str(source)]
    rsp=folder/'compile.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in options)+'\n',encoding='utf-8',newline='\n')
    def run(command,label):
        r=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True);(folder/(label+'.log')).write_bytes(r.stdout+r.stderr)
        if r.returncode:raise RuntimeError('Inspect build/culture-inventory/'+label+'.log')
    run([csc,'/noconfig','@'+str(rsp)],'compile')
    for lib in references[-2:]:shutil.copy2(lib,folder/lib.name)
    (folder/'CultureInventory.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
    run([dotnet,target,'--self-test'],'self-test')
    self_test=json.loads((folder/'self-test.log').read_text(encoding='utf-8-sig'))
    manifests={a:source_files(ROOT/'reference',a) for a in ['KairoLibrary','Assembly-CSharp']}
    refs=[managed/n for n in ['mscorlib.dll','UnityEngine.dll','System.Core.dll','System.dll']]
    request=dict(root=str(ROOT/'reference'),kairo_sources=[str(ROOT/'reference'/v['path']) for v in manifests['KairoLibrary']],game_sources=[str(ROOT/'reference'/v['path']) for v in manifests['Assembly-CSharp']],references=[str(v) for v in refs])
    input_path=folder/'input.json';output=folder/'result.json';input_path.write_text(json.dumps(request),encoding='utf-8',newline='\n')
    run([dotnet,target,input_path,output],'inventory')
    report=json.loads(output.read_text(encoding='utf-8-sig'))
    report.update(producer_sha256=sha(Path(__file__)),helper_sha256=sha(source),source_manifest=manifests,
        compiler_sha256=sha(csc),self_test=self_test,original_metadata=[dict(name=v.name,sha256=sha(v)) for v in refs],
        historical_overload_contract=dict(profile='UnityMono265',one_argument_string_indexof='Ordinal',
            source_url='https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System/String.cs',
            source_sha256='011015d86d73fe057f8eefbb8f84f600f112fe324b5d290fdc8cd14dfda26547'))
    # The call graph contains symbol IDs, never argument values. Keep its large
    # raw form private; publish direct calls and reachable method IDs only.
    graph=report.pop('source_call_graph');(folder/'source-call-graph.json').write_text(json.dumps(graph,indent=2)+'\n',encoding='utf-8',newline='\n')
    report['source_call_graph_sha256']=sha(folder/'source-call-graph.json')
    (ROOT/'config/culture-usage.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    columns=['assembly','caller','callee','source','line','operation','culture','origins']
    with (ROOT/'config/culture-usage.csv').open('w',encoding='utf-8',newline='') as file:
        writer=csv.DictWriter(file,fieldnames=columns,lineterminator='\n');writer.writeheader()
        writer.writerows({k:';'.join(row[k]) if k=='origins' else row[k] for k in columns} for row in report['direct_calls'])
    print(json.dumps(dict(direct_calls=len(report['direct_calls']),by_assembly=dict(Counter(v['assembly'] for v in report['direct_calls'])),by_operation=dict(Counter(v['operation'] for v in report['direct_calls'])),culture_assignments=report['culture_assignments'],unresolved=report['unresolved_invocations'])))
if __name__=='__main__':main()
