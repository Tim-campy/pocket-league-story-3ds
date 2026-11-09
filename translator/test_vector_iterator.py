"""Differential fixture for source-backed Vector List/cast/yield fusion."""
import hashlib,json,subprocess,sys
from translate import ROOT,prepare,run
def main():
    folder,runtime,tool,producer=prepare();folder=folder/'vector-iterator';folder.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/VectorIteratorFixtures.cs';output=folder/'generated'
    framework=__import__('pathlib').Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    request=dict(assembly='VectorIteratorFixtures',sources=[str(source)],references=[str(framework/(n+'.dll'))for n in ('mscorlib','System','System.Core')],selected=[],select_all_source_methods=True,output=str(output),
        oracle_support='namespace java.util {public partial class Vector<T> {public System.Collections.IEnumerator GetEnumerator(){foreach(T item in list_){yield return item;}}}}')
    req=folder/'request.json';report_file=folder/'report.json';req.write_text(json.dumps(request),encoding='utf8')
    run([runtime,tool,req,report_file],folder/'translate.log')
    report=json.loads(report_file.read_text(encoding='utf8'))
    if set(report['rejected_methods'])!={'M:java.util.Vector`1.GetEnumerator'}:raise ValueError('Unexpected Vector fixture rejection: '+str(report['rejected_methods']))
    result_file=ROOT/'config/phase2-vector-iterator-fixtures.json'
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',report_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'differential','--result',result_file],cwd=ROOT,check=True)
    result=json.loads(result_file.read_text());result.update(producer=producer,fixture_source_sha256=hashlib.sha256(source.read_bytes()).hexdigest(),general_yield_support=False,limitations=['Admitted exact Vector List/cast/yield shape only; arbitrary IEnumerator and yield bodies remain unsupported.'])
    result_file.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')
if __name__=='__main__':main()
