"""Own Stack<T> corpus-subset differential and reference/GC invariants."""
import hashlib,importlib.util,json,os,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
def sha(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()
def main():
    runner=ROOT/'tests/translator/run_semantic_fixtures.py';spec=importlib.util.spec_from_file_location('stack_semantic_runner',runner);module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)
    module.FIXTURES['StackFixtures']=('stack-fixtures','stack_fixtures.cpp','stack');module.EXTRA_MONO_REFERENCES['StackFixtures']=['System']
    sys.argv=[str(runner),'--fixture','StackFixtures'];result=module.main()
    if result:return result
    folder=ROOT/'build/stack-fixtures';target=ROOT/'config/phase2-stack-fixtures.json';report=json.loads(target.read_text(encoding='utf-8'))
    compiler,env=module.msvc_environment();gc_source=ROOT/'tests/translator/stack_gc_fixtures.cpp';gc_binary=folder/'stack-gc-fixtures.exe';runtime=ROOT/'src/kairo/common/semantic_runtime.cpp'
    def run(command,name,childenv=None):
        r=subprocess.run([str(v) for v in command],cwd=ROOT,env=childenv,capture_output=True,timeout=60);(folder/(name+'.stdout')).write_bytes(r.stdout);(folder/(name+'.stderr')).write_bytes(r.stderr)
        if r.returncode:raise RuntimeError('See build/stack-fixtures/'+name+'.stdout/.stderr')
        return r.stdout.decode('utf-8-sig').replace('\r\n','\n')
    run([compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/I'+str(runtime.parent),'/Fe:'+str(gc_binary),'/Fo:'+str(folder)+'/',gc_source,runtime],'native-gc-compile',env)
    gc=json.loads(run([gc_binary],'native-gc',env))
    if gc.get('status')!='PASS' or gc.get('assertions')!=14:raise ValueError('Incomplete Stack GC invariants')
    csc,dotnet,framework=module.compiler_paths();unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))/'Editor/Data/Mono';mono=unity/'bin/mono.exe';core=unity/'lib/mono/unity';monoenv=dict(os.environ,MONO_PATH=str(core),MONO_CFG_DIR=str(unity/'etc'))
    capacities={}
    for profile,command,childenv in [('DotNet',[dotnet,folder/'StackFixtures.dll','capacity'],None),('UnityMono265',[mono,folder/'StackFixtures-mono.exe','capacity'],monoenv)]:
        rows=dict(line.split('=',1) for line in run(command,profile+'-capacity',childenv).splitlines());assembly=Path(rows.pop('framework'))
        capacities[profile]=dict(observations={k:int(v) for k,v in rows.items()},framework_path=str(assembly),framework_sha256=sha(assembly),native_private_reflection_supported=False)
    system=core/'System.dll';report['historical_stack_framework']=dict(path=str(system),sha256=sha(system),expected_apk_framework_sha256='7e72b92ddcd6b7b791ab24dd5756544f2da81f65e7ba7d1ebe8223123720d0ac')
    if sha(system)!=report['historical_stack_framework']['expected_apk_framework_sha256']:raise ValueError('Historical System.dll identity changed')
    if capacities['UnityMono265']['framework_sha256']!=sha(system):raise ValueError('Historical Stack oracle resolved a different framework')
    report['inputs']['tools/test_stack.py']=sha(Path(__file__));report['inputs']['tests/translator/stack_gc_fixtures.cpp']=sha(gc_source)
    report.update(operation='own-Stack-corpus-subset-source-differential',native_gc=gc,source_only_backing_capacity=capacities,implemented_members=['.ctor()','Count','Push(T)','Pop()','Peek()'],unsupported_members=['capacity/collection constructors','GetEnumerator','Clear','Contains','ToArray','CopyTo','TrimExcess'],gc_executable=dict(path=gc_binary.relative_to(ROOT).as_posix(),sha256=sha(gc_binary)),native_executable=dict(path=(folder/'semantic-fixtures.exe').relative_to(ROOT).as_posix(),sha256=sha(folder/'semantic-fixtures.exe')))
    report['limitations']+=['Only the Stack members used by the immutable corpus are implemented; no enumerator/version contract is claimed.', 'Historical Stack<T> is in the installed SDK System.dll, not mscorlib; its complete file hash equals the authenticated APK member measured separately.', 'Capacity probes inspect only own synthetic stacks; the native port does not implement private BCL reflection.']
    target.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n');print(json.dumps(dict(status='PASS',fixture_cases=report['fixture_cases'],passed=report['passed'],gc_assertions=14)))
    return 0
if __name__=='__main__':sys.exit(main())
