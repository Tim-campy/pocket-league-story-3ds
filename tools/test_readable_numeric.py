"""Readable numeric types (criterion 5, C1): C# wrap/exception/float-narrowing semantics."""
import json
from pc_compiler import VS,environment
from test_input import ROOT,sha,run


def main():
 folder=ROOT/'build/readable-numeric-tests';folder.mkdir(parents=True,exist_ok=True)
 cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';exe=folder/'numeric-fixtures.exe'
 sources=[ROOT/p for p in ['tests/kairo/numeric_types_fixtures.cpp','src/kairo/common/semantic_runtime.cpp','src/kairo/common/managed_exceptions.cpp']]
 run([cl,'/nologo','/std:c++17','/EHsc','/MD','/W4','/WX','/fp:strict','/O2','/utf-8','/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/Fo'+str(folder)+chr(92),'/Fe:'+str(exe)]+[str(s) for s in sources],folder,'compile',environment())
 result=json.loads(run([exe],folder,'native',environment()))
 if result['failures']:raise ValueError('Readable numeric fixtures failed')
 inputs=sources+[ROOT/'src/runtime/numeric_types.hpp']
 report=dict(operation='readable-numeric-types',status='PASS',**result,inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
  native_executable=dict(path=exe.relative_to(ROOT).as_posix(),sha256=sha(exe)),game_assets_used=False,original_binaries_executed=False)
 (ROOT/'config/phase2-readable-numeric-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status='PASS',checks=result['checks'])))


if __name__=='__main__':main()
