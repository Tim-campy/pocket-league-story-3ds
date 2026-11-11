"""Own tests for exact roots crossing native exception and closure storage."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment

def main():
    folder=ROOT/'build/tracing-runtime';folder.mkdir(exist_ok=True)
    compiler,env=msvc_environment()
    sources=[ROOT/'tests/translator/tracing_runtime_fixtures.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_exceptions.cpp']
    binary=folder/'fixture.exe'
    command=[str(compiler),'/nologo','/std:c++17','/EHsc','/O2','/fp:strict','/W4','/WX','/utf-8','/DPLS_TRACING_GC=1','/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(binary),*[str(p)for p in sources]]
    result=subprocess.run(command,cwd=folder,env=env,capture_output=True)
    (folder/'compile.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('Inspect build/tracing-runtime/compile.log')
    result=subprocess.run([binary],cwd=folder,env=env,capture_output=True,timeout=30)
    (folder/'run.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('Inspect build/tracing-runtime/run.log')
    data=json.loads(result.stdout)
    files=set(sources+[Path(__file__)])
    for base in ['src/runtime','src/kairo/common']:
        files.update(p for p in (ROOT/base).glob('*')if p.suffix in {'.hpp','.inc'})
    data.update(status='PASS',inputs={p.relative_to(ROOT).as_posix():hashlib.sha256(p.read_bytes()).hexdigest()for p in sorted(files)})
    (folder/'receipt.json').write_text(json.dumps(data,indent=2)+'\n',encoding='utf8')
    print(json.dumps({k:v for k,v in data.items()if k!='inputs'}))
if __name__=='__main__':main()
