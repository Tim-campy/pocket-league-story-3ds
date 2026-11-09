"""Own CPU arc API admission, blending and state fixture; no Android oracle."""
import hashlib,json,subprocess
from pathlib import Path
from pc_compiler import CMAKE,environment
ROOT=Path(__file__).resolve().parents[1]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    build=ROOT/'build/pc';folder=ROOT/'build/graphics-arcs-tests';folder.mkdir(parents=True,exist_ok=True)
    paths=sorted({ROOT/'CMakeLists.txt',Path(__file__),ROOT/'tests/kairo/graphics_arcs_fixtures.cpp'}|{p for p in (ROOT/'src/kairo').rglob('*')if p.is_file()and p.suffix in ('.cpp','.hpp','.inc')}|set((ROOT/'build/generated/mono-collation').glob('*.inc')))
    inputs={p.relative_to(ROOT).as_posix():sha(p)for p in paths};env=environment()
    r=subprocess.run([str(CMAKE),'--build',str(build),'--target','graphics_arcs_test'],cwd=ROOT,env=env,capture_output=True);(folder/'compile.log').write_bytes(r.stdout+r.stderr)
    if r.returncode:raise RuntimeError('Configure native fixtures; inspect build/graphics-arcs-tests/compile.log')
    exe=build/'graphics_arcs_test.exe';r=subprocess.run([str(exe)],cwd=ROOT,env=env,capture_output=True,timeout=30);(folder/'run.log').write_bytes(r.stdout+r.stderr)
    if r.returncode:raise RuntimeError('See build/graphics-arcs-tests/run.log')
    report=json.loads(r.stdout)
    if report.get('status')!='PASS'or report.get('assertions')!=16:raise ValueError('Incomplete arc API fixture')
    if any(sha(ROOT/p)!=h for p,h in inputs.items()):raise ValueError('Native sources changed during arc API fixture')
    report.update(operation='own-CPU-arc-API-contract',inputs_sha256=inputs,native_executable=dict(path=exe.relative_to(ROOT).as_posix(),sha256=sha(exe)),verified_boundary_ids=[],limitations=['Own synthetic pixel/state invariants, not source raster or Android equivalence.','Historical geometry differences remain UNKNOWN Android by user decision.','Only bounded, finite, advancing geometry admitted; non-progressing domains explicitly unsupported.'])
    (ROOT/'config/phase2-graphics-arcs-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps({k:report[k]for k in ('status','assertions','game_executed')}))
if __name__=='__main__':main()
