"""Compare the native form stack with immutable original C# method bodies.

The oracle uses null SurfaceManager/KairoBase and synchronous own-source
facades. The full Execute/OnDraw scheduler, captures, loading thread, Android
toast and Surface routing are deliberately not claimed by this differential.
"""
import json
from native_api_proof import forms_ids
import os
from pathlib import Path
import sys
from test_input import ROOT,sha,run,span,compile_modern
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

MANAGER=[
 'public FormBase GetForm(int index)','public int GetFormIndex(FormBase form)',
 'public bool ChangeCurrentForm(FormBase form)',
 'public bool Push(FormBase form)','public bool Push(FormBase position, FormBase form)',
 'public bool Push(FormBase position, FormBase form, bool before)',
 'public bool Pop()','public bool Pop(FormBase form)','private void ExecuteInitAndFinish()',
 'public void DrawAllForms()','public void DrawAllForms(bool flush)',
 'public void DrawSkip()','public bool IsDrawSkip()','public int GetFormsNum()',
 'public FormBase GetTopForm()','public FormBase GetDownForm()','public FormBase GetCurrentForm()',
 'public void MoveToTop(FormBase form)','public void MoveToDown(FormBase form)',
 'public bool CheckUsable(FormBase form)','public void Draw(kairo.unity.ui.Graphics g)',
 'public void ShowTerminationDialog()','public bool CheckShowTerminationDialog()',
 'internal void ProcessBackKey()','internal void ProcessEvent(AppEvent evt)',
]
CANVAS=[
 'public void SetSoftLabel(string sk1, string sk2, string sk3 = null, string sk4 = null)',
 'public void SetSoftLabel(int type, string label)','public string GetSoftLabelL()',
 'public string GetSoftLabelR()','public string GetSoftLabel(int id)','public void UpdateSoftLabel()',
]


def main():
 folder=ROOT/'build/forms-tests';folder.mkdir(parents=True,exist_ok=True)
 csc,dotnet,framework=compiler_paths()
 original=ROOT/'reference/src/KairoLibrary'
 manager=original/'kairo/unity/form/FormManagerBase.cs';canvas=original/'kairo/unity/ui/Canvas.cs'
 m=manager.read_text(encoding='utf-8-sig');c=canvas.read_text(encoding='utf-8-sig')
 fragments='\n'.join(span(m,s).replace('private void ExecuteInitAndFinish()','public void ExecuteInitAndFinish()') for s in MANAGER)
 facade='''using System;using System.Collections.Generic;using java.util;using java.lang;using kairo.unity.ui;using kairo.unity.surface;using kairo.unity.system;using kairo.unity.native;using kairo.common.cfg;using kairo.unity.util;
namespace java.lang {public static class JThread {public static bool IsCurrentThread(object t){return true;}}}
namespace java.util {
 public class Vector {List<object> l=new List<object>();public int Size(){return l.Count;}public object ElementAt(int i){return l[i];}public int IndexOf(object o){return l.IndexOf(o);}public void AddElement(object o){l.Add(o);}public void InsertElementAt(object o,int i){l.Insert(i,o);}public void RemoveElementAt(int i){l.RemoveAt(i);}public void RemoveElement(object o){l.Remove(o);}public object FirstElement(){return l[0];}public object LastElement(){return l[l.Count-1];}}
 public class Vector<T> {public int Size(){return 0;}public T ElementAt(int i){throw new Exception();}}
}
namespace kairo.common.cfg {public static class Config {public static bool PRINT=false;}}
namespace kairo.unity.native {public static class KairoPlugin {public static void ShowToast(string s,int n){throw new NotSupportedException();}}}
namespace kairo.unity.system {public class KairoBase {public static KairoBase GetInstance(){return null;}public bool IsGamePlaying(){return false;}public void SetGameState(bool v){throw new Exception();}}}
namespace kairo.unity.surface {public class SurfaceBase {public bool IsGameSurface(){return true;}public void ClearTouchComponent(){}}public class SurfaceManagerBase {public Vector<SurfaceBase> GetSurfaceList(){return new Vector<SurfaceBase>();}public static bool IsAutoGLRender(){return false;}}}
namespace kairo.unity.util {public static class Log {public static void Info(object o){}}}
namespace kairo.unity.ui {
 public class Graphics {public void BeginGLRender(){}public void EndGLRender(){}}
 public class IApplication {public static IApplication GetCurrentApp(){return null;}}
 public class Canvas {static Canvas value=new Canvas();public static Canvas GetInstance(){return value;}string[] softLabel_=new string[]{"","",null,null},showSoftLabel_=new string[]{"","",null,null};public SurfaceManagerBase GetSurfaceManager(){return null;}public void ClearKeyBuffer(){}
'''+ '\n'.join(span(c,s) for s in CANVAS)+'''
 }
}
namespace kairo.unity.form {
 public class FormManagerBase {
 Vector formStack_=new Vector();object thread_;bool termination_,drawall_=true,drawskip_,softlabel_=true,showTerminationDialog_,warning_,notifiedExitEvent_;FormBase currentForm_;
 List<KeyValuePair<FormBase,bool>> formIsGame_=new List<KeyValuePair<FormBase,bool>>();
 void BeginSynchronize(){throw new NotSupportedException();}void EndSynchronize(){throw new NotSupportedException();}
'''+fragments+''' }
}
'''
 generated=folder/'OriginalFormFragments.cs';generated.write_text(facade,encoding='utf-8',newline='\n')
 originals=[original/'kairo/unity/form/FormBase.cs',original/'kairo/unity/ui/AppEvent.cs',original/'kairo/unity/ui/AppEventType.cs',original/'kairo/unity/surface/TouchValueAccessor.cs']
 source=ROOT/'tests/kairo/FormsOracle.cs';sources=[source,generated,*originals]
 oracle=folder/'FormsOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
 mono=unity/'Editor/Data/Mono/bin/mono.exe';smcs=unity/'Editor/Data/Mono/lib/mono/unity/smcs.exe'
 env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
 old=folder/'FormsOracle-mono.exe';run([mono,smcs,'-nologo','-noconfig','-optimize+','-r:'+str(unity/'Editor/Data/Mono/lib/mono/2.0/System.Core.dll'),'-out:'+str(old),*sources],folder,'mono-compile',env)
 native_sources=[ROOT/p for p in ['tests/kairo/forms_fixtures.cpp','src/kairo/common/canvas.cpp','src/kairo/common/forms.cpp','src/kairo/platform/sdl/input.cpp',
   'src/kairo/common/graphics.cpp','src/kairo/common/mesh.cpp','src/kairo/common/image_lifetime.cpp','src/kairo/common/font.cpp','src/kairo/platform/sdl/font.cpp','src/kairo/common/asset_catalog.cpp','src/kairo/common/semantic_runtime.cpp']]
 native=folder/'forms-fixtures.exe';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
 sdk=ROOT/'build/deps/native-media'
 objects=[]
 for index,unit in enumerate(native_sources):
  obj=folder/(str(index)+'-'+unit.stem+'.obj');objects.append(obj)
  run([cl,'/nologo','/c','/std:c++17','/EHsc','/MD','/fp:strict','/permissive-','/W4','/WX','/O2','/utf-8',
       '/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'build/deps/SDL2-2.32.10/include'),
       '/I'+str(sdk/'include/freetype2'),'/Fo:'+str(obj),unit],folder,'cpp-compile-'+str(index),environment())
 run([cl,'/nologo','/Fe:'+str(native),*objects,sdk/'lib/freetype.lib'],folder,'cpp-link',environment())
 actual=run([native],folder,'cpp-run',environment());cases=[]
 for profile,command,env_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:
  expected=run(command,folder,profile+'-run',env_)
  a,b=expected.splitlines(),actual.splitlines()
  if len(a)!=len(b):raise ValueError('Form trace lengths differ')
  cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(a,b)]
 policy=json.loads(run([native,'policy'],folder,'native-policy',environment()))
 concurrency=json.loads(run([native,'concurrent'],folder,'native-concurrent',environment()))
 passed=all(x['passed'] for x in cases)
 inputs=native_sources+[source,ROOT/'tools/test_forms.py',ROOT/'tools/native_api_proof.py',ROOT/'tools/test_input.py']+[ROOT/'src/kairo/api'/p for p in ['canvas.hpp','forms.hpp','touch_value_accessor.hpp','input.hpp','graphics.hpp','font.hpp','application.hpp']]+[ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/managed_shared_field.hpp',ROOT/'src/kairo/common/asset_catalog.hpp',ROOT/'src/kairo/platform/sdl/font.hpp']
 report=dict(verified_boundary_ids=forms_ids(),operation='original-source-FormBase-stack-Canvas-label-differential',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(x['passed'] for x in cases),cases=cases,native_platform_policy=policy,native_concurrent_fields=concurrency,
  inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},source_manifest=[dict(path=p.relative_to(ROOT/'reference').as_posix(),sha256=sha(p)) for p in [manager,canvas,*originals]],
  original_methods={'FormManagerBase':MANAGER,'Canvas':CANVAS,'FormBase':'entire original class'},
  native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),
  limits=['KairoBase and SurfaceManager null, same-thread source fixtures; Execute and OnDraw require explicit execution bridge.',
          'No game boot, no SurfaceManager render routing, no capture/loading thread, no Android warning toast.',
          'Draw has CPU-immediate GL-equivalent commands; tests only instrument form order and skip state.'],
  game_boot=False,game_assets_used=False,original_binaries_executed=False)
 (ROOT/'config/phase2-forms-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status=report['status'],fixture_cases=len(cases),passed=report['passed'])))
 for x in cases:
  if not x['passed']:print(json.dumps(x))
 return 0 if passed else 1


if __name__=='__main__':sys.exit(main())
