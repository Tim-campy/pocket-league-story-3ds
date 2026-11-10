"""Check literal interning, concurrency, collection and allocation-free cached reads."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment


def main():
    folder=ROOT/'build/literal-runtime';folder.mkdir(exist_ok=True)
    compiler,env=msvc_environment();target=folder/'fixture.exe'
    sources=[ROOT/'tests/kairo/literal_runtime.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/main/allocation_probe.cpp']
    command=[str(compiler),'/nologo','/std:c++17','/EHsc','/O2','/W4','/WX','/utf-8',
             '/DPLS_ALLOCATION_PROBE=1','/I'+str(ROOT/'src/kairo/common'),
             '/I'+str(ROOT/'src/main'),'/Fe:'+str(target),*map(str,sources)]
    result=subprocess.run(command,cwd=folder,env=env,capture_output=True)
    (folder/'compile.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('Inspect '+str(folder/'compile.log'))
    result=subprocess.run([str(target)],cwd=folder,env=env,capture_output=True,timeout=30)
    (folder/'run.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('Literal fixture failed with exit '+str(result.returncode))
    measured=json.loads(result.stdout)
    inputs=[Path(__file__),*sources,ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/platform_condition.hpp',ROOT/'src/kairo/common/allocation_probe.hpp',ROOT/'src/main/native_allocation_sites.hpp']
    report=dict(operation='interned-literal-runtime',status='PASS',**measured,
                inputs={p.relative_to(ROOT).as_posix():hashlib.sha256(p.read_bytes()).hexdigest()for p in inputs})
    (ROOT/'config/phase2-literal-runtime-fixture.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(measured))


if __name__=='__main__':main()
