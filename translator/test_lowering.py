"""Exercise actual Roslyn->C++ emission using synthetic semantic fixtures."""
import json
from pathlib import Path
import subprocess
import sys
from translate import prepare,run,ROOT


def main():
    folder,runtime,tool,producer=prepare()
    compiler,_,framework=__import__('inventory').compiler_paths()
    output=folder/'lowering-generated';output.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/LoweringFixtures.cs'
    request=dict(assembly='LoweringFixtures',sources=[str(source)],references=[str(framework/(n+'.dll')) for n in ['System.Private.CoreLib','System.Runtime','netstandard']],selected=[],select_all_source_methods=True,output=str(output))
    req=folder/'lowering-input.json';report_file=folder/'lowering-report.json'
    req.write_text(json.dumps(request),encoding='utf-8',newline='\n')
    run([runtime,tool,req,report_file],folder/'lowering-translator.log')
    report=json.loads(report_file.read_text(encoding='utf-8-sig'))
    rejected=report['rejected_methods']
    if set(rejected)!={'M:LoweringFixtures.UnsupportedClosure(System.Int32)'}:raise ValueError('Unexpected supported/unsupported fixture set: '+str(rejected))
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',report_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'lowering-differential','--result',ROOT/'config/phase2-lowering-fixtures.json'],check=True,cwd=ROOT)
    result_file=ROOT/'config/phase2-lowering-fixtures.json';result=json.loads(result_file.read_text())
    result.update(producer=producer,negative_control=dict(id=next(iter(rejected)),reason=rejected[next(iter(rejected))]['reason']),fixture_source_sha256=__import__('hashlib').sha256(source.read_bytes()).hexdigest())
    result_file.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')


if __name__=='__main__':main()
