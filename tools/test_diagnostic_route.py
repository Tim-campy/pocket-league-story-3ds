"""Own condition-driven route runner (diagnostic builds); no game or original device is executed."""
import json,shutil,subprocess
from pathlib import Path
from pc_compiler import environment
ROOT=Path(__file__).resolve().parents[1]
def main():
    import hashlib
    sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
    folder=ROOT/'build/diagnostic-route-tests';folder.mkdir(parents=True,exist_ok=True);env=environment();compiler=Path(shutil.which('cl.exe',path=env['PATH']));native=folder/'route.exe'
    inputs={p.relative_to(ROOT).as_posix():sha(p)for p in [ROOT/'src/main/diagnostic_route.hpp',ROOT/'tests/kairo/diagnostic_route_fixtures.cpp',Path(__file__)]}
    run=subprocess.run([str(p)for p in [compiler,'/nologo','/std:c++17','/EHsc','/O2','/W4','/WX','/utf-8','/Fe:'+str(native),'/Fo'+str(folder)+'/',ROOT/'tests/kairo/diagnostic_route_fixtures.cpp']],cwd=ROOT,env=env,capture_output=True);(folder/'compile.log').write_bytes(run.stdout+run.stderr)
    if run.returncode:raise RuntimeError('See build/diagnostic-route-tests/compile.log')
    run=subprocess.run([str(native)],env=env,capture_output=True,check=True);report=json.loads(run.stdout)
    if report['assertions']<35:raise ValueError('Incomplete route fixture')
    if any(sha(ROOT/p)!=value for p,value in inputs.items()):raise ValueError('Diagnostic input source changed during test')
    report.update(operation='own-PC-diagnostic-route-runner',inputs=inputs,native_executable_sha256=sha(native),compiler_sha256=sha(compiler),game_executed=False,verified_boundary_ids=[])
    (ROOT/'config/phase2-diagnostic-route-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps({key:report[key]for key in ('status','assertions')}))
if __name__=='__main__':main()
