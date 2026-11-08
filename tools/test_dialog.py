"""Verify dialog request/return contracts; no interactive answer is fabricated."""
import json
from pc_compiler import VS,environment
from test_input import ROOT,sha,run


def main():
 folder=ROOT/'build/dialog-tests';folder.mkdir(parents=True,exist_ok=True)
 cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';sdl=ROOT/'build/deps/SDL2-2.32.10';exe=folder/'dialog-fixtures.exe'
 sources=[ROOT/p for p in ['tests/kairo/dialog_fixtures.cpp','src/kairo/common/dialog_service.cpp','src/kairo/platform/sdl/dialog.cpp','src/kairo/common/semantic_runtime.cpp']]
 run([cl,'/nologo','/std:c++17','/EHsc','/MD','/W4','/WX','/fp:strict','/O2','/utf-8','/DSDL_MAIN_HANDLED','/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(sdl/'include'),'/Fe:'+str(exe),'/Fo:'+str(folder)+'\\',*sources,sdl/'lib/x64/SDL2.lib'],folder,'compile',environment())
 (folder/'SDL2.dll').write_bytes((sdl/'lib/x64/SDL2.dll').read_bytes());result=json.loads(run([exe],folder,'native',environment()))
 inputs=sources+[ROOT/p for p in ['src/kairo/api/dialog_service.hpp','src/kairo/api/application.hpp','src/kairo/platform/sdl/dialog.hpp','src/kairo/common/semantic_runtime.hpp','tools/test_dialog.py','tools/test_input.py']]
 original='src/KairoLibrary/kairo/unity/ui/Dialog.cs'
 report=dict(operation='native-platform-dialog-request-policy',status='PASS',**result,
  inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},source_manifest=[dict(path=original,sha256=sha(ROOT/'reference'/original))],
  native_executable=dict(path=exe.relative_to(ROOT).as_posix(),sha256=sha(exe)),verified_boundary_ids=[],
  intended_leaf='M:kairo.unity.native.KairoPlugin.ShowDialog(System.Int32,System.String,System.String,System.String)',
  limits=['Own request/presenter fixtures, no original JNI code or Android dialog execution.',
          'Localized default labels and real modal audio/input scope must be installed by the generated/host bridge.',
          'Custom button return mapping and Android dismissal code are UNKNOWN; custom mapping rejects, SDL dismissal remains -1.'],
  game_assets_used=False,original_binaries_executed=False)
 (ROOT/'config/phase2-dialog-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status='PASS',assertions=result['assertions'])))


if __name__=='__main__':main()
