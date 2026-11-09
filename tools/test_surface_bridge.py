"""Check source Canvas identity/routing against a native source/adapter bridge.

All collaborators are own fixtures. Complete selected original bodies are read
from reference; no Unity/original game binary or asset is executed.
"""
import json
import os
from pathlib import Path
import sys
from test_input import ROOT,sha,run,span,compile_modern
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

CANVAS=['public void SetSurfaceManager(SurfaceManagerBase surfaceManager)',
        'public SurfaceManagerBase GetSurfaceManager()',
        'public bool OnTouchEvent(MotionEvent evt)']
MANAGER=['public Vector<SurfaceBase> GetSurfaceList()', 'public void ClearTouchComponent()',
         'public void OnKeyDown(int key)', 'public void OnKeyUp(int key)',
         'public void OnKeyDown(int keyCode, KeyEvent evt)',
         'public void BeginTouchRegist(kairo.unity.ui.Graphics g)',
         'public void EndTouchRegist(kairo.unity.ui.Graphics g)']


def main():
 folder=ROOT/'build/surface-bridge-tests';folder.mkdir(parents=True,exist_ok=True)
 csc,dotnet,framework=compiler_paths()
 original=ROOT/'reference/src/KairoLibrary'
 canvas=original/'kairo/unity/ui/Canvas.cs';manager=original/'kairo/unity/surface/SurfaceManagerBase.cs';forms=original/'kairo/unity/form/FormManagerBase.cs'
 canvas_text=canvas.read_text(encoding='utf-8-sig');manager_text=manager.read_text(encoding='utf-8-sig');form_text=forms.read_text(encoding='utf-8-sig')
 # The full source Init/Finish method is read first. This exact if block is
 # extracted from the Finish path, preserving its forward loop and predicate.
 lifecycle=span(form_text,'private void ExecuteInitAndFinish()')
 clear_games=span(lifecycle,'if (surfaceManager != null)')
 if 'for (int j = 0; j < surfaceList.Size(); j++)' not in clear_games:raise ValueError('Original game-surface clear ordering changed')
 generated=folder/'OriginalSurfaceFragments.cs'
 generated.write_text('''using kairo.unity.surface;using kairo.unity.ui;using java.util;
namespace kairo.unity.ui {public class Canvas {SurfaceManagerBase surfaceManager_;
'''+ '\n'.join(span(canvas_text,s) for s in CANVAS)+'''
}}
namespace kairo.unity.surface {public abstract class SurfaceManagerBase {
protected Vector<SurfaceBase> surfaceList_=new Vector<SurfaceBase>();
public void Add(SurfaceBase item){surfaceList_.AddElement(item);}
public abstract void AdjustSurfaceLayout();public abstract void Draw(Graphics value);public abstract void DrawComponents(Graphics value);public abstract void DoEvents();
'''+ '\n'.join(span(manager_text,s) for s in MANAGER)+'''
}}
public static class OriginalFragments {public static void ClearGames(SurfaceManagerBase surfaceManager){
'''+clear_games+'\n}}\n',encoding='utf-8',newline='\n')
 source=ROOT/'tests/kairo/SurfaceBridgeOracle.cs';sources=[source,generated]
 oracle=folder/'SurfaceBridgeOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
 mono=unity/'Editor/Data/Mono/bin/mono.exe';smcs=unity/'Editor/Data/Mono/lib/mono/unity/smcs.exe'
 env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
 old=folder/'SurfaceBridgeOracle-mono.exe';run([mono,smcs,'-nologo','-noconfig','-optimize+','-out:'+str(old),*sources],folder,'mono-compile',env)
 native_sources=[ROOT/p for p in ['tests/kairo/surface_bridge_fixtures.cpp','src/kairo/common/canvas.cpp','src/kairo/platform/sdl/input.cpp',
   'src/kairo/common/graphics.cpp','src/kairo/common/image_lifetime.cpp','src/kairo/common/font.cpp','src/kairo/platform/sdl/font.cpp','src/kairo/common/asset_catalog.cpp','src/kairo/common/semantic_runtime.cpp']]
 sdk=ROOT/'build/deps/native-media';sdl=ROOT/'build/deps/SDL2-2.32.10';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';native=folder/'surface-bridge-fixtures.exe';objects=[]
 inputs=native_sources+[source,ROOT/'tools/test_surface_bridge.py',ROOT/'tools/test_input.py']
 inputs += [ROOT/'src/kairo/api'/p for p in ['forms_callbacks.hpp','forms_execution.hpp','forms.hpp','touch_value_accessor.hpp','canvas.hpp','input.hpp','graphics.hpp','font.hpp','application.hpp']]
 inputs += [ROOT/'src/kairo/common'/p for p in ['semantic_runtime.hpp','managed_shared_field.hpp','asset_catalog.hpp','sha256.hpp']]+[ROOT/'src/kairo/platform/sdl/font.hpp']
 before={p.relative_to(ROOT).as_posix():sha(p) for p in inputs}
 for index,unit in enumerate(native_sources):
  obj=folder/(str(index)+'-'+unit.stem+'.obj');objects.append(obj)
  run([cl,'/nologo','/c','/std:c++17','/EHsc','/MD','/fp:strict','/permissive-','/W4','/WX','/O2','/utf-8',
       '/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(sdl/'include'),'/I'+str(sdk/'include/freetype2'),'/Fo:'+str(obj),unit],folder,'cpp-compile-'+str(index),environment())
 run([cl,'/nologo','/Fe:'+str(native),*objects,sdk/'lib/freetype.lib'],folder,'cpp-link',environment())
 actual=run([native],folder,'native-run',environment());cases=[]
 for profile,command,env_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:
  expected=run(command,folder,profile+'-run',env_);a,b=expected.splitlines(),actual.splitlines()
  if len(a)!=len(b):raise ValueError('Source Surface bridge trace length differs')
  cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(a,b)]
 policy=json.loads(run([native,'policy'],folder,'native-policy',environment()))
 after={p.relative_to(ROOT).as_posix():sha(p) for p in inputs}
 if before!=after:raise ValueError('Surface bridge inputs changed during compile/test; rerun before publishing')
 passed=all(case['passed'] for case in cases)
 report=dict(operation='original-Canvas-Surface-source-adapter-identity-routing',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(c['passed'] for c in cases),cases=cases,native_gc_identity_policy=policy,
  inputs=after,source_manifest=[dict(path=p.relative_to(ROOT/'reference').as_posix(),sha256=sha(p)) for p in [canvas,manager,forms]],
  original_methods={'Canvas':CANVAS,'SurfaceManagerBase':MANAGER,'FormManagerBase':['private void ExecuteInitAndFinish(): exact entire Finish-path surface-clear if block']},
  native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),verified_boundary_ids=[],
  ordering=dict(touch='reverse',clear_all='reverse',raw_and_logical_key='reverse',clear_game_only='forward, IsGameSurface predicate retained'),
  limits=['Own source surface subclasses prove source identity, late list mutation, callback dispatch and Graphics/event identity, not generated game integration.',
          'DoEvents/Draw/DrawComponents/layout are synthetic virtual targets; their original game bodies are not replaced or claimed tested.',
          'BeginTouchRegist uses an empty synthetic TouchOption buffer; buffer unlocking semantics are outside this test.',
          'The game-surface clear helper retains the original Finish-path if block; other ExecuteInitAndFinish statements are tested separately.'],
  game_assets_used=False,game_boot=False,original_binaries_executed=False)
 (ROOT/'config/phase2-surface-bridge-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status=report['status'],fixture_cases=len(cases),passed=report['passed'],native_policy=policy)))
 for case in cases:
  if not case['passed']:print(json.dumps(case))
 return 0 if passed else 1


if __name__=='__main__':sys.exit(main())
