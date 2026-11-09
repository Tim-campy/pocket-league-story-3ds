"""Own branch fixture: precise fatal guard, preserved arguments, zero promotion."""
import hashlib,json,subprocess,sys
from pathlib import Path
from translate import ROOT,prepare,run
from diagnostic_leaves import CPP_NAME,package
sys.path.insert(0,str(ROOT/'tools'))
from generated_build import compile_objects
from pc_compiler import environment,VS
from run_native_process import run_native_process
from test_input import compile_modern
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def main():
    _,runtime,tool,producer=prepare();folder=ROOT/'build/diagnostic-leaf-fixture';folder.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/DiagnosticLeafFixtures.cs';framework=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    root_id='M:DiagnosticLeafFixtures.Run(System.Int32)';leaf_id='M:DiagnosticNativeLeaf.Missing(System.Int32)'
    request=dict(assembly='DiagnosticLeafFixtures',sources=[str(source)],references=[str(framework/(n+'.dll'))for n in ('mscorlib','System','System.Core')],selected=[root_id],external_types={'T:DiagnosticNativeLeaf':'pls::fixture::NativeLeaf'},oracle_support='public static class DiagnosticNativeLeaf {public static void Missing(int value){throw new System.NotSupportedException();}}')
    request['oracle_external_methods']={leaf_id:'DiagnosticNativeLeaf.Missing'}
    request['output']=str(folder/'normal');path=folder/'normal-request.json';path.write_text(json.dumps(request),encoding='utf8');normal=folder/'normal-report.json'
    run([runtime,tool,path,normal],folder/'normal.log');normal_report=json.loads(normal.read_text())
    if root_id in {r['id']for r in normal_report['emitted_methods']}or root_id not in normal_report['rejected_methods']:raise ValueError('Normal emission accepted unavailable native API')
    output=folder/'candidate';request.update(output=str(output),external_methods={leaf_id:CPP_NAME})
    path=folder/'candidate-request.json';path.write_text(json.dumps(request),encoding='utf8');report_file=folder/'candidate-report.json'
    run([runtime,tool,path,report_file],folder/'candidate.log');report=json.loads(report_file.read_text())
    method=next(r for r in report['emitted_methods']if r['id']==root_id);trace=next(r for r in report['static_fields']if r['id']=='F:DiagnosticLeafFixtures.trace_')
    callers=package(output,leaf_id)
    if len(callers)!=1:raise ValueError('Fatal leaf include must affect only the calling type')
    harness=folder/'main.cpp';harness.write_text('#include "portable_generated.hpp"\n#include <cstdio>\n#include <exception>\nint main(int argc,char**){if(argc>1){try{(void)pls::generated::'+method['cpp_name']+'(1);}catch(const std::exception&){std::printf("trace=%d\\n",pls::generated::'+trace['cpp_accessor']+');return 0;}return 2;}std::printf("%d\\n",pls::generated::'+method['cpp_name']+'(0));}\n',encoding='utf8')
    proof=compile_objects([*output.glob('*.cpp'),harness],folder/'objects',[output,ROOT/'src/kairo/common',ROOT/'src/kairo/api'],jobs=2)
    compiler=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';exe=folder/'fixture.exe'
    run([compiler,'/nologo','/Fe:'+str(exe),*[r['path']for r in proof['objects']],ROOT/'build/pc/pls_semantics.lib','Advapi32.lib'],folder/'link.log',environment())
    actual=run([exe],folder/'safe.log',environment()).stdout.decode().strip()
    csc,dotnet,core=__import__('inventory').compiler_paths();oracle_harness=folder/'Oracle.cs';oracle_harness.write_text('class Oracle {static void Main(){System.Console.WriteLine(SourceOracle.'+method['cpp_name']+'(0));}}',encoding='utf8');oracle=folder/'Oracle.dll'
    compile_modern([output/'source_oracle.cs',oracle_harness],oracle,folder,'oracle',csc,core)
    expected=run([dotnet,oracle],folder/'oracle.log').stdout.decode().strip()
    if actual!=expected or actual!='5':raise ValueError('Available branch differs from source')
    unsafe=run([exe,'guard'],folder/'guard.log',environment())
    if unsafe.stdout.decode().strip()!='trace=3'or ('PLS_TRANSLATION_GAP='+leaf_id).encode()not in unsafe.stderr:raise ValueError('Guard did not preserve argument evaluation or abort the unavailable call')
    supervised=run_native_process([exe,'guard'],cwd=ROOT,env=environment(),stdout_path=folder/'supervised.stdout',stderr_path=folder/'supervised.stderr',timeout_seconds=10,diagnostic=True)
    if not supervised['translation_gap_detected']or supervised['stopped_reason']!='translation-gap':raise ValueError('A caught guard was not fatal to the supervisor')
    result=dict(status='PASS',operation='private-fatal-native-leaf-guard',safe_branch_matches_source=True,guard_preserves_argument_order=True,caught_guard_is_fatal=True,normal_method_rejected=True,affected_cpp_units=len(callers),game_methods_promoted=0,game_executed=False,producer=producer,inputs_sha256={p.relative_to(ROOT).as_posix():sha(p)for p in [source,Path(__file__),ROOT/'translator/diagnostic_leaves.py',ROOT/'tools/run_native_process.py']},native_executable_sha256=sha(exe))
    (ROOT/'config/phase2-diagnostic-leaf-tests.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps({k:result[k]for k in ('status','affected_cpp_units','game_methods_promoted')}))
if __name__=='__main__':main()
