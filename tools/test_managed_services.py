"""Verify the typed native adapter used by generated offline registration calls."""
import json
import tempfile
from pathlib import Path
from pc_compiler import VS,environment
from test_input import ROOT,sha,run


def main():
 folder=ROOT/'build/managed-services-tests';folder.mkdir(parents=True,exist_ok=True)
 cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';exe=folder/'managed-services.exe'
 sources=[ROOT/p for p in ['tests/kairo/managed_services.cpp','src/kairo/common/services.cpp','src/kairo/common/semantic_runtime.cpp']]
 run([cl,'/nologo','/std:c++17','/EHsc','/MD','/W4','/WX','/fp:strict','/O2','/utf-8','/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(exe),'/Fo:'+str(folder)+'\\',*sources],folder,'compile',environment())
 with tempfile.TemporaryDirectory(prefix='own-identity-',dir=folder) as temporary:
  result=json.loads(run([exe,temporary],folder,'native',environment()))
 inputs=sources+[ROOT/'src/kairo/api/services_managed.hpp',ROOT/'src/kairo/common/services.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'tools/test_managed_services.py',ROOT/'tools/test_input.py']
 report=dict(operation='managed-offline-registration-adapter',status='PASS',**result,
  inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},native_executable=dict(path=exe.relative_to(ROOT).as_posix(),sha256=sha(exe)),
  policy_sha256=sha(ROOT/'config/service-overrides.json'),
  intended_symbol='M:main.AppData.CgiRegist(System.String,System.String)',
  native_hook='pls::services::managed::register_local',
  integration_status='ADAPTER_TESTED; generated caller binding is separate evidence',
  game_assets_used=False,original_binaries_executed=False)
 (ROOT/'config/phase2-managed-services-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status='PASS',assertions=result['assertions'])))


if __name__=='__main__':main()
