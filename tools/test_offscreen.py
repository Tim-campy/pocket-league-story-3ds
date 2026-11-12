"""Own synthetic offscreen lifecycle and CPU mesh admission; no Android oracle."""
import hashlib,json,subprocess
from pathlib import Path
from pc_compiler import CMAKE,environment,build_jobs
ROOT=Path(__file__).resolve().parents[1]
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def main():
    folder=ROOT/'build/offscreen-tests';folder.mkdir(parents=True,exist_ok=True)
    paths={ROOT/'CMakeLists.txt',Path(__file__)}
    paths|={ROOT/'tests/kairo'/name for name in ('mesh_fixtures.cpp','offscreen_fixtures.cpp')}
    paths|={p for p in (ROOT/'src/kairo').rglob('*')if p.is_file()and p.suffix in ('.cpp','.hpp','.inc')}
    paths|=set((ROOT/'build/generated/mono-collation').glob('*.inc'))
    inputs={p.relative_to(ROOT).as_posix():sha(p)for p in sorted(paths)};env=environment()
    result=subprocess.run([str(CMAKE),'--build',str(ROOT/'build/pc'),'--target','offscreen_test','mesh_test','--parallel',str(build_jobs(2))],env=env,cwd=ROOT,capture_output=True)
    (folder/'compile.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('See build/offscreen-tests/compile.log')
    cases=[]
    for name,count in [('offscreen_test',23),('mesh_test',15)]:
        exe=ROOT/'build/pc'/(name+'.exe');result=subprocess.run([str(exe)],env=env,cwd=ROOT,capture_output=True,timeout=30)
        (folder/(name+'.log')).write_bytes(result.stdout+result.stderr)
        if result.returncode:raise RuntimeError('See own offscreen fixture log: '+name)
        report=json.loads(result.stdout)
        if report.get('status')!='PASS'or report.get('assertions')!=count:raise ValueError('Incomplete own admission: '+name)
        cases.append(dict(fixture=name,assertions=count,executable_sha256=sha(exe)))
    if any(sha(ROOT/p)!=h for p,h in inputs.items()):raise ValueError('Offscreen inputs changed during test')
    report=dict(operation='own-CPU-offscreen-mesh-admission',status='PASS',assertions=38,cases=cases,inputs_sha256=inputs,verified_boundary_ids=[],game_executed=False,
        limitations=['Own synthetic collaborators isolate lifecycle/depth/material replay; no Android raster equivalence.','Only source 24-bit-depth path and identity offscreen transform exercised by the current game path are admitted.','Generated text/touch/balloon transaction callbacks require separate source and game evidence.'])
    (ROOT/'config/phase2-offscreen-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps({k:report[k]for k in ('status','assertions','game_executed')}))
if __name__=='__main__':main()
