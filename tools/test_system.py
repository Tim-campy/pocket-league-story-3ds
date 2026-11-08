"""Verify the native PC frame-control and removed-licensing leaf contracts."""
import hashlib
import json
from pathlib import Path
import subprocess
from pc_compiler import VS,environment

ROOT=Path(__file__).resolve().parents[1]
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def main():
    folder=ROOT/'build/system-tests';folder.mkdir(parents=True,exist_ok=True)
    compiler=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
    exe=folder/'system-tests.exe'
    sources=[ROOT/'tests/kairo/system_fixtures.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp']
    command=[str(compiler),'/nologo','/std:c++17','/EHsc','/MD','/fp:strict','/permissive-','/W4','/WX','/utf-8',
        '/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(exe),*[str(p) for p in sources]]
    env=environment();result=subprocess.run(command,cwd=folder,env=env,capture_output=True)
    (folder/'compile.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('See build/system-tests/compile.log')
    result=subprocess.run([str(exe)],cwd=ROOT,env=env,capture_output=True,timeout=30)
    (folder/'run.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('See build/system-tests/run.log')
    report=json.loads(result.stdout)
    inputs=sources+[Path(__file__),ROOT/'src/kairo/api/system.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp']
    report.update(operation='PC-native-frame-control-and-service-platform-leaves',
        inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
        compiler_sha256=sha(compiler),executable_sha256=sha(exe),
        original_source_methods=['main.Main.OnCreate','main.Main.OnUpdate','native.AppPlugin.Init'],
        limitations=['Native platform contract tests; not an Android frame scheduling comparison.',
                    'Nonzero vsync explicitly unsupported; Main requests zero.',
                    'No license key retained; licensing removed by the user decision.'])
    (ROOT/'config/phase2-system-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps({k:v for k,v in report.items() if k in ['status','native_assertions','game_boot']}))
if __name__=='__main__':main()
