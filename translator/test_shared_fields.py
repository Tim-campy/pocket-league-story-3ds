"""Exercise generated load/store, initializer and tracing of shared C# fields."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys
from translate import ROOT,prepare,run


def main():
    folder,runtime,tool,producer=prepare()
    output=folder/'shared-field-generated';output.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/SharedFieldFixtures.cs'
    unity=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    fields=['F:SyntheticSharedFields.Counter.'+name for name in ['value','state','text','payload','link']]
    request=dict(assembly='SharedFieldFixtures',sources=[str(source)],references=[str(unity/(name+'.dll'))for name in ['mscorlib','System','System.Core']],selected=[],select_all_source_methods=True,output=str(output),shared_fields=fields)
    request_file=folder/'shared-field-input.json';report_file=folder/'shared-field-report.json'
    request_file.write_text(json.dumps(request)+'\n',encoding='utf8',newline='\n')
    run([runtime,tool,request_file,report_file],folder/'shared-field-translator.log')
    report=json.loads(report_file.read_text())
    if report['rejected_methods']:raise ValueError('Unexpected unsupported shared-field fixture: '+str(report['rejected_methods']))
    if set(report['shared_instance_fields'])!=set(fields):raise ValueError('Incomplete storage selection')
    target=ROOT/'config/phase2-shared-field-lowering-fixtures.json'
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',report_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'shared-field-differential','--result',target],check=True,cwd=ROOT)
    result=json.loads(target.read_text());result.update(operation='generated-shared-field-load-store-fixtures',producer=producer,
        runner_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),fixture_sha256=hashlib.sha256(source.read_bytes()).hexdigest(),shared_fields=fields,
        limitations=['Sequential source differentials prove evaluation order, individual operations, aliases and tracing. They do not prove scheduling or an entire game payload race-free.','Compound assignment remains a separate load and store; the runtime foundation separately tests a deterministic lost update.'])
    target.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')


if __name__=='__main__':main()
