"""Differentially prove generated source ref/out address evaluation and aliases."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys
from translate import ROOT,prepare,run


def main():
    folder,runtime,tool,producer=prepare();output=folder/'ref-generated';output.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/RefFixtures.cs';unity=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    request=dict(assembly='RefFixtures',sources=[str(source)],references=[str(unity/(name+'.dll'))for name in ['mscorlib','System','System.Core']],selected=[],select_all_source_methods=True,output=str(output),shared_fields=['F:SyntheticRefs.Holder.shared'])
    request_file=folder/'ref-input.json';report_file=folder/'ref-report.json'
    request_file.write_text(json.dumps(request)+'\n',encoding='utf8',newline='\n');run([runtime,tool,request_file,report_file],folder/'ref-translator.log')
    report=json.loads(report_file.read_text());negative='M:SyntheticRefs.Source.SharedAddressForbidden'
    if set(report['rejected_methods'])!={negative}:raise ValueError('Unexpected ref/out supported set: '+str(report['rejected_methods']))
    target=ROOT/'config/phase2-ref-lowering-fixtures.json'
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',report_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'ref-differential','--result',target],check=True,cwd=ROOT)
    result=json.loads(target.read_text());result.update(operation='generated-source-ref-out-fixtures',producer=producer,runner_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),fixture_sha256=hashlib.sha256(source.read_bytes()).hexdigest(),negative_control=dict(id=negative,reason=report['rejected_methods'][negative]['reason']),limitations=['Ref/out lowerings apply to source method signatures and addressable local, mutable field and array element storage. Shared fields, readonly address escape, external APIs and ref/out delegates remain unsupported.'])
    target.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')


if __name__=='__main__':main()
