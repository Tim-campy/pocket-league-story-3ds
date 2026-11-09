"""Prove nearest-owner integral/enum goto case/default and scope entry."""
import hashlib,json,subprocess,sys
from pathlib import Path
from translate import ROOT,prepare,run


def main():
    folder,runtime,tool,producer=prepare();output=folder/'goto-case-generated';output.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/GotoCaseFixtures.cs';unity=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    request=dict(assembly='GotoCaseFixtures',sources=[str(source)],references=[str(unity/(name+'.dll'))for name in ['mscorlib','System','System.Core']],selected=[],select_all_source_methods=True,output=str(output))
    request_file=folder/'goto-case-input.json';report_file=folder/'goto-case-report.json';request_file.write_text(json.dumps(request)+'\n',encoding='utf8',newline='\n')
    run([runtime,tool,request_file,report_file],folder/'goto-case-translator.log');report=json.loads(report_file.read_text());negative='M:OwnSwitchPlan.Fixture.ProtectedNegative(System.Int32)'
    if set(report['rejected_methods'])!={negative}or'finally with branch propagation'not in report['rejected_methods'][negative]['reason']:raise ValueError('Unexpected switch supported/unsupported set: '+str(report['rejected_methods']))
    target=ROOT/'config/phase2-goto-case-lowering-fixtures.json'
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',report_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'goto-case-differential','--result',target],check=True,cwd=ROOT)
    result=json.loads(target.read_text());result.update(producer=producer,runner_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),fixture_sha256=hashlib.sha256(source.read_bytes()).hexdigest(),negative_control=dict(id=negative,reason=report['rejected_methods'][negative]['reason']))
    target.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')


if __name__=='__main__':main()
