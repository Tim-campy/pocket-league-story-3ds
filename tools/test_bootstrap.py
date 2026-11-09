"""Differential original Awake ordering against the typed bootstrap adapter.

This is an own collaborator fixture, not evidence that a game boot succeeded.
Original game binaries are inspected as metadata elsewhere, never executed.
"""
import json
import os
from pathlib import Path
import sys
from test_input import ROOT,sha,run,span,compile_modern
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths


def main():
 folder=ROOT/'build/bootstrap-tests';folder.mkdir(parents=True,exist_ok=True)
 csc,dotnet,framework=compiler_paths()
 original=ROOT/'reference/src/KairoLibrary/kairo/unity/ui/IApplication.cs'
 text=original.read_text(encoding='utf-8-sig')
 prelude='''using System;using System.Reflection;using System.IO;
using java.lang;using kairo.common.cfg;using kairo.unity.native;
using kairo.unity.analytics;using kairo.unity.util;using kairo.unity.io;using UnityEngine;
namespace kairo.unity.ui {public class IApplication {
 static IApplication instance_;JThread uiThread_;string dataPath_,platform_;
 bool created_;DisplayMetrics metrics_;ResourceManager resource_;ScreenOrientation defaultOrientation_;
 public IApplication(){instance_=this;}public bool HasResources{get{return resource_!=null;}}
 public void RunAwake(){Awake();}
 static void CopyDirectory(string a,string b){throw new NotSupportedException();}
 void OnCreate(){Hooks.Log("main");if(Hooks.failMain)throw new Exception();}
 void Error(Exception e){Hooks.Log("error:"+e.GetType().FullName);}
'''
 generated=folder/'OriginalAwake.cs'
 generated.write_text(prelude+span(text,'private void Awake()')+'\n}}\n',encoding='utf-8',newline='\n')
 source=ROOT/'tests/kairo/BootstrapOracle.cs';sources=[source,generated]
 oracle=folder/'BootstrapOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
 refs=unity/'Editor/Data/Mono/lib/mono/2.0';mono=unity/'Editor/Data/Mono/bin/mono.exe'
 env=dict(os.environ,MONO_PATH=str(refs),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
 old=folder/'BootstrapOracle-mono.exe'
 args=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(old)]
 args+=['/r:'+str(refs/(p+'.dll')) for p in ['mscorlib','System','System.Core']]+[str(p) for p in sources]
 rsp=folder/'mono.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in args)+'\n',encoding='utf-8',newline='\n')
 run([csc,'/noconfig','@'+str(rsp)],folder,'mono-compile')
 units=['tests/kairo/bootstrap_fixtures.cpp','src/kairo/common/bootstrap.cpp','src/kairo/common/forms_execution.cpp',
 'src/kairo/common/forms.cpp','src/kairo/common/canvas.cpp','src/kairo/common/graphics.cpp','src/kairo/common/image_lifetime.cpp','src/kairo/common/font.cpp',
 'src/kairo/common/sound.cpp','src/kairo/common/semantic_runtime.cpp','src/kairo/common/asset_catalog.cpp',
 'src/kairo/platform/sdl/input.cpp','src/kairo/platform/sdl/font.cpp','src/kairo/platform/sdl/audio.cpp']
 native_sources=[ROOT/p for p in units]
 sdk=ROOT/'build/deps/native-media';sdl=ROOT/'build/deps/SDL2-2.32.10';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';native=folder/'bootstrap-fixtures.exe'
 objects=[]
 for i,unit in enumerate(native_sources):
  obj=folder/(str(i)+'-'+unit.stem+'.obj');objects.append(obj)
  run([cl,'/nologo','/c','/std:c++17','/EHsc','/MD','/fp:strict','/permissive-','/W4','/WX','/O2','/utf-8','/DSDL_MAIN_HANDLED',
   '/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(sdl/'include'),'/I'+str(sdk/'include'),'/I'+str(sdk/'include/freetype2'),'/Fo:'+str(obj),unit],folder,'cpp-compile-'+str(i),environment())
 run([cl,'/nologo','/Fe:'+str(native),*objects,*[sdk/'lib'/p for p in ['freetype.lib','vorbisfile.lib','vorbis.lib','ogg.lib']],sdl/'lib/x64/SDL2.lib'],folder,'cpp-link',environment())
 (folder/'SDL2.dll').write_bytes((sdl/'lib/x64/SDL2.dll').read_bytes())
 actual=run([native],folder,'native-run',environment());cases=[]
 for profile,command,env_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:
  expected=run(command,folder,profile+'-run',env_);a,b=expected.splitlines(),actual.splitlines()
  if len(a)!=len(b):raise ValueError('Bootstrap trace lengths differ')
  cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(a,b)]
 policy=json.loads(run([native,'policy'],folder,'native-policy',environment()))
 passed=all(c['passed'] for c in cases)
 inputs=native_sources+[source,ROOT/'tools/test_bootstrap.py',ROOT/'tools/test_input.py']
 inputs += [ROOT/'src/kairo/api'/p for p in ['bootstrap.hpp','forms_execution.hpp','forms_callbacks.hpp','forms.hpp','touch_value_accessor.hpp','canvas.hpp','application.hpp','graphics.hpp','font.hpp','sound.hpp','input.hpp']]
 inputs += [ROOT/'src/kairo/common'/p for p in ['semantic_runtime.hpp','managed_shared_field.hpp','asset_catalog.hpp','sha256.hpp']]+[ROOT/'src/kairo/platform/sdl'/p for p in ['font.hpp','audio.hpp']]
 report=dict(operation='original-source-awake-bootstrap-order-differential',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(c['passed'] for c in cases),cases=cases,
  verified_boundary_ids=[],native_callback_policy=policy,inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
  source_manifest=[dict(path=original.relative_to(ROOT/'reference').as_posix(),sha256=sha(original))],
  original_methods=['private void Awake()'],native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),
  limits=['Own collaborators with the exact original Awake body prove callback ordering, optional-resource exception behavior and ownership only.',
  'Generated Config/MyConfig, resource parser, actual Main and Language callbacks are separate integration obligations.',
  'iPhone migration, camera behavior, Android/JNI and a real game boot are not exercised.'],
  game_assets_used=False,original_binaries_executed=False,game_boot=False)
 (ROOT/'config/phase2-bootstrap-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status=report['status'],fixture_cases=len(cases),passed=report['passed'],native_policy=policy)))
 for c in cases:
  if not c['passed']:print(json.dumps(c))
 return 0 if passed else 1


if __name__=='__main__':sys.exit(main())
