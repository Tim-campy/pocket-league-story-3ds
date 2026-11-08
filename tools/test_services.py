"""Compile and execute synthetic offline-service policy fixtures; no game runs."""
import hashlib
import json
import os
import re
from pathlib import Path
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def msvc_environment(folder):
    vs=Path('C:/Program Files/Microsoft Visual Studio/18/Community')
    batch=vs/'VC/Auxiliary/Build/vcvars64.bat'
    if not batch.is_file():raise ValueError('Existing MSVC vcvars64.bat missing; no installation is performed')
    script=folder/'environment.cmd'
    script.write_text('@echo off\ncall "'+str(batch)+'" >nul\nif errorlevel 1 exit /b 1\nset\n',encoding='utf-8',newline='\n')
    result=subprocess.run([os.environ.get('COMSPEC','cmd.exe'),'/d','/c',str(script)],capture_output=True,text=True,check=True)
    env=os.environ.copy()
    for line in result.stdout.splitlines():
        if '=' in line and not line.startswith('='):
            name,value=line.split('=',1);env[name.upper()]=value
    return env


def main():
    # Device identity must never replace account identity or activate friends.
    account_source=(ROOT/'reference/src/KairoLibrary/kairo/unity/system/KairoBase.cs').read_text(encoding='utf-8-sig')
    if not re.search(r'public string GetUserId\(\)\s*\{\s*return SecureString.ToString\(userId_\);\s*\}',account_source):
        raise ValueError('Original account getter no longer matches the preserved contract')
    if not re.search(r'public bool CheckUserId\(\)\s*\{\s*return GetUserId\(\).Length\(\) > 0;\s*\}',account_source):
        raise ValueError('Original account check no longer matches the preserved contract')
    policy=json.loads((ROOT/'config/service-overrides.json').read_text(encoding='utf-8'))
    if any(p['symbol'].startswith('M:kairo.unity.system.KairoBase.GetUserId') or p['symbol']=='M:kairo.unity.system.KairoBase.CheckUserId' for p in policy['overrides']):
        raise ValueError('Device-service policy unexpectedly overrides account identity')
    folder=ROOT/'build/services-tests';folder.mkdir(parents=True,exist_ok=True)
    env=msvc_environment(folder)
    target=folder/'offline-services-tests.exe'
    sources=[ROOT/'src/kairo/common/services.cpp',ROOT/'tests/kairo/offline_services.cpp']
    compilers=sorted(Path('C:/Program Files/Microsoft Visual Studio/18/Community/VC/Tools/MSVC').glob('*/bin/Hostx64/x64/cl.exe'))
    if not compilers:raise ValueError('Existing MSVC compiler missing')
    command=[str(compilers[-1]),'/nologo','/std:c++17','/EHsc','/W4','/WX','/fp:strict','/I'+str(ROOT/'src/kairo/common'),
             '/Fe:'+str(target),'/Fo:'+str(folder)+'\\']+[str(p) for p in sources]
    build=subprocess.run(command,cwd=folder,env=env,capture_output=True)
    (folder/'compiler.log').write_bytes(build.stdout+build.stderr)
    if build.returncode:raise ValueError('Service fixture compile failed; see build/services-tests/compiler.log')
    # New folders per execution avoid replacing any previous identity evidence.
    import tempfile
    with tempfile.TemporaryDirectory(prefix='policy-',dir=folder) as temporary:
        root=Path(temporary)
        first=subprocess.run([str(target),'identity',str(root)],capture_output=True,check=True).stdout
        second=subprocess.run([str(target),'identity',str(root)],capture_output=True,check=True).stdout
        if len(first)!=32 or first!=second:raise ValueError('Identity changed after a real process restart')
        policy=subprocess.run([str(target),'policy',str(root)],capture_output=True,check=True)
        result=json.loads(policy.stdout)
        path=root/'port-services/device-id.txt'
        before=path.read_bytes();path.write_bytes(b'invalid-synthetic-identity')
        corrupted=path.read_bytes()
        subprocess.run([str(target),'corrupt',str(root)],capture_output=True,check=True)
        if path.read_bytes()!=corrupted:raise ValueError('Corrupt identity was overwritten')
    report=dict(operation='native-offline-services-policy-fixtures',status='PASS',
        policy_assertions=result['policy_assertions'],real_process_restart_identity_equal=True,
        account_getter_unchanged_and_empty_account_stays_empty=True,
        account_fixture_is_synthetic=True,original_account_source_contract_checked=True,account_override_absent=True,
        invalid_identity_rejected_without_replacement=True,synthetic_save_unchanged=result['save_unchanged'],
        native_binary_sha256=sha(target),
        policy_sha256=sha(ROOT/'config/service-overrides.json'),
        sources={p.relative_to(ROOT).as_posix():sha(p) for p in sources+[ROOT/'src/kairo/common/services.hpp']},
        original_game_executed=False,reference_modified=False,game_save_model_reimplemented=False,
        integration_into_translated_game='PENDING',producer_sha256=sha(Path(__file__)))
    (ROOT/'config/phase2-services-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(report))


if __name__=='__main__':main()
