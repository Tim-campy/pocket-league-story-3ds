"""Compare complete original paint/current lifecycle against the CPU backend."""
import json,os,sys
from pathlib import Path
from test_input import ROOT,sha,run,span,compile_modern
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

GRAPHICS=['public Graphics()','public Graphics(Image img, Camera camera = null)',
 'public static Graphics GetCurrent()','public bool IsGUI()','internal bool IsRenderGUIMode()',
 'public void ResetRender()','public void Dispose(bool keep = false)','public void EndGLRender(bool force = false)',
 'public void BeginGLRender(bool clipEnable = true)','public bool PushClipEnable(bool enable)',
 'public void PushClipEnable()','public void PopClipEnable()','public bool SetClipEnable(bool enable)','public bool IsClipEnable()']
CANVAS=['public Graphics BeginPaint()','internal Graphics BeginPaint(Graphics g, int meshId = -1)',
 'internal Graphics BeginAlterStaticRender(Graphics g, int meshId = -1)','public void EndPaint()',
 'internal void EndPaint(Graphics g, int meshId = -1)','internal void EndAlterStaticRender(Graphics g, int meshId = -1)']


def main():
 folder=ROOT/'build/graphics-current-tests';folder.mkdir(parents=True,exist_ok=True);csc,dotnet,framework=compiler_paths()
 original=ROOT/'reference/src/KairoLibrary';graphics=original/'kairo/unity/ui/Graphics.cs';canvas=original/'kairo/unity/ui/Canvas.cs'
 gt=graphics.read_text(encoding='utf-8-sig');ct=canvas.read_text(encoding='utf-8-sig');generated=folder/'OriginalPaintFragments.cs'
 generated.write_text('using System;using UnityEngine;using kairo.unity.graphics;namespace kairo.unity.ui {public partial class Graphics {\n'+'\n'.join(span(gt,s) for s in GRAPHICS)+'\n}public partial class Canvas {\n'+'\n'.join(span(ct,s) for s in CANVAS)+'\n}}\n',encoding='utf-8',newline='\n')
 source=ROOT/'tests/kairo/GraphicsCurrentOracle.cs';sources=[source,generated];oracle=folder/'GraphicsCurrentOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')));mono=unity/'Editor/Data/Mono/bin/mono.exe';smcs=unity/'Editor/Data/Mono/lib/mono/unity/smcs.exe';env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
 old=folder/'GraphicsCurrentOracle-mono.exe';run([mono,smcs,'-nologo','-noconfig','-optimize+','-r:'+str(unity/'Editor/Data/Mono/lib/mono/2.0/System.Core.dll'),'-out:'+str(old),*sources],folder,'mono-compile',env)
 native_sources=[ROOT/p for p in ['tests/kairo/graphics_current_fixtures.cpp','src/kairo/common/canvas.cpp','src/kairo/platform/sdl/input.cpp',
  'src/kairo/common/graphics.cpp','src/kairo/common/mesh.cpp','src/kairo/common/image_lifetime.cpp','src/kairo/common/font.cpp','src/kairo/platform/sdl/font.cpp','src/kairo/common/asset_catalog.cpp','src/kairo/common/semantic_runtime.cpp']]
 sdk=ROOT/'build/deps/native-media';sdl=ROOT/'build/deps/SDL2-2.32.10';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';native=folder/'graphics-current-fixtures.exe';objects=[]
 inputs=native_sources+[source,ROOT/'tools/test_graphics_current.py',ROOT/'tools/test_input.py']
 inputs += [ROOT/'tests/translator/gc_test_support.hpp']
 inputs += [ROOT/'src/kairo/api'/p for p in ['graphics.hpp','canvas.hpp','input.hpp','font.hpp','application.hpp']]
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
  if len(a)!=len(b):raise ValueError('Graphics lifecycle trace lengths differ')
  cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(a,b)]
 policy=json.loads(run([native,'policy'],folder,'native-policy',environment()));after={p.relative_to(ROOT).as_posix():sha(p) for p in inputs}
 if before!=after:raise ValueError('Graphics current inputs changed during compile/test; rerun before publishing')
 passed=all(c['passed'] for c in cases)
 report=dict(operation='original-Canvas-Graphics-current-paint-lifecycle',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(c['passed'] for c in cases),cases=cases,native_gc_thread_policy=policy,
  inputs=after,source_manifest=[dict(path=p.relative_to(ROOT/'reference').as_posix(),sha256=sha(p)) for p in [graphics,canvas]],original_methods={'Graphics':GRAPHICS,'Canvas':CANVAS},
  current_store_sites=['Canvas.BeginPaint:472','Canvas.BeginAlterStaticRender:502'],current_cleared_by_end_paint=False,current_restored_after_nested_paint=False,
  native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),verified_boundary_ids=[],
  limits=['Own mesh/font/Unity collaborators isolate lifecycle and represented render state; no original Unity binary executes.',
          'Graphics.Init backend leaf is synthetic; constructors, ResetRender and Canvas Begin/End bodies are complete original source.',
          'GL batch control/clip-enable nesting is exercised; deferred GPU meshes, multiple managers and retained static mesh rendering are not.',
          'Current reference loads/stores are synchronized; mutable graphics state/Canvas buffer are UI-owned, not declared generally thread safe.'],
  game_assets_used=False,game_boot=False,original_binaries_executed=False)
 (ROOT/'config/phase2-graphics-current-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status=report['status'],fixture_cases=len(cases),passed=report['passed'],native_policy=policy)))
 for case in cases:
  if not case['passed']:print(json.dumps(case))
 return 0 if passed else 1


if __name__=='__main__':sys.exit(main())
