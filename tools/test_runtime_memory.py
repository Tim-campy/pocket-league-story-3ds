"""Own Windows allocator-heap fixture; no claim of game managed residency."""
import hashlib,json,subprocess,sys,shutil
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import environment
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
 folder=ROOT/'build/runtime-memory-fixtures';folder.mkdir(parents=True,exist_ok=True);env=environment();compiler=Path(shutil.which('cl.exe',path=env['PATH']));exe=folder/'heap-fixtures.exe'
 sources=[ROOT/p for p in ['tests/kairo/runtime_memory_fixtures.cpp','src/kairo/platform/sdl/runtime_memory.cpp','src/kairo/common/semantic_runtime.cpp']]
 def run(cmd,label):
  r=subprocess.run([str(p)for p in cmd],cwd=ROOT,env=env,capture_output=True,timeout=90);(folder/(label+'.log')).write_bytes(r.stdout+r.stderr)
  if r.returncode:raise RuntimeError('Inspect '+str(folder/(label+'.log')))
  return r.stdout.decode('utf-8-sig')
 run([compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/common'),'/Fo'+str(folder)+'/', '/Fe'+str(exe),*sources],'compile')
 result=json.loads(run([exe],'run'))
 if result.get('status')!='PASS'or result.get('assertions')!=9:raise ValueError('Incomplete native heap fixture')
 inputs=[*sources,ROOT/'src/kairo/api/runtime_memory.hpp',ROOT/'src/kairo/platform/sdl/runtime_memory.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',Path(__file__)]
 receipt=dict(operation='own-native-Windows-allocator-heap-payload',status='PASS',assertions=result['assertions'],measurements=result,inputs_sha256={p.relative_to(ROOT).as_posix():sha(p)for p in inputs},native_executable=dict(path=exe.relative_to(ROOT).as_posix(),sha256=sha(exe)),compiler_sha256=sha(compiler),verified_boundary_ids=[],game_boot=False,limits=['All native process heaps, not a Java VM or Mono reserved pool.','HeapWalk payload excludes overhead and virtual reserve; it is not resident memory.','Heaps are sampled sequentially under their individual locks; this is not an atomic process snapshot.','Only Windows implemented; other platform providers fail explicitly.'])
 (ROOT/'config/phase2-runtime-memory-tests.json').write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps(result))
if __name__=='__main__':main()
