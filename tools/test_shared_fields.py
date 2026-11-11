"""Own field-access publication, split RMW and tracing fixtures."""
import hashlib,json,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def main():
    folder=ROOT/'build/shared-field-fixtures';folder.mkdir(parents=True,exist_ok=True)
    compiler,env=msvc_environment();output=folder/'shared-field-fixtures.exe'
    sources=[ROOT/'tests/translator/shared_field_fixtures.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_thread.cpp',ROOT/'src/kairo/platform/sdl/thread_priority.cpp']
    headers=[ROOT/'src/kairo/common/managed_shared_field.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/managed_thread.hpp',ROOT/'src/kairo/platform/sdl/thread_priority.hpp']
    command=[compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(output),'/Fo:'+str(folder)+'/',*sources]
    def run(cmd,label):
        r=subprocess.run([str(v) for v in cmd],cwd=ROOT,env=env,capture_output=True,timeout=90)
        (folder/(label+'.stdout')).write_bytes(r.stdout);(folder/(label+'.stderr')).write_bytes(r.stderr)
        if r.returncode:raise RuntimeError('See build/shared-field-fixtures/'+label+'.stdout/.stderr')
        return r.stdout.decode('utf-8-sig')
    run(command,'compile');result=json.loads(run([output],'native'))
    if result.get('status')!='PASS' or result.get('assertions')!=21 or result.get('lost_update_result')!=1:raise ValueError('Incomplete SharedField fixture proof')
    receipt=dict(operation='own-managed-shared-field-fixtures',status='PASS',assertions=21,results=result,producer_sha256=sha(Path(__file__)),inputs_sha256={str(p.relative_to(ROOT)).replace('\\','/'):sha(p) for p in [*sources,*headers]},native_executable=dict(path=str(output.relative_to(ROOT)).replace('\\','/'),sha256=sha(output)),production_methods_promoted=0,game_executed=False,
                 limitations=['Per-field accesses only; compound expressions and methods are not atomic.', 'Ref/out interior references and element access inside shared arrays are outside this wrapper.', 'Managed workers must participate in cooperative GC; this is not an operating-system thread suspension mechanism.', 'No ThreadSanitizer run or original Android schedule-equivalence claim is made.'])
    receipt['inputs_sha256']['tests/translator/gc_test_support.hpp']=sha(ROOT/'tests/translator/gc_test_support.hpp')
    (ROOT/'config/phase2-shared-field-tests.json').write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf-8',newline='\n');print(json.dumps(dict(status='PASS',assertions=21)))
if __name__=='__main__':main()
