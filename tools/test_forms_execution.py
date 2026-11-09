"""Differential the original form scheduler against native collaborator routing.

No game is manually simulated here: the synthetic forms and services record
calls, while the original unmodified _execute/OnDraw method bodies are the
oracle. Notification/ad leaves are removed under the explicit user policy.
"""
import json
import os
from pathlib import Path
import sys
from test_input import ROOT,sha,run,span,compile_modern
from test_forms import MANAGER
from native_api_proof import boundary_ids
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

EXTRA=[
 'protected FormManagerBase()','public bool Execute()','private bool _execute()',
 'public virtual void OnDraw()','public virtual void Resume()',
 'protected virtual bool DoTerminationDialog()',
 'protected virtual void PreUpdate()','protected virtual void Updated()',
 'protected virtual void PreDraw()','protected virtual void Drawn()',
 'public bool RemoveAllForms()','public void SetLoadingForm(FormBase form)',
 'public void SetPrintForm(FormBase form)','private void DrawPrintForm(kairo.unity.ui.Graphics g)',
 'public void SetPause(bool b)','public bool IsPause()','public void SurfaceChanged()',
 'private void BeginSynchronize()','private void EndSynchronize()',
 'internal static void ProcessEvent(AppEventType type, params object[] args)',
]


def main():
 folder=ROOT/'build/forms-execution-tests';folder.mkdir(parents=True,exist_ok=True)
 csc,dotnet,framework=compiler_paths()
 manager=ROOT/'reference/src/KairoLibrary/kairo/unity/form/FormManagerBase.cs';text=manager.read_text(encoding='utf-8-sig')
 prefix=text[:text.index('public FormBase GetForm(int index)')]
 # Retain source field declarations and source statements verbatim. The loading
 # thread is an explicitly unimplemented collaborator, outside these scenarios.
 methods=list(dict.fromkeys(MANAGER+EXTRA))
 generated=folder/'OriginalExecutionFragments.cs'
 generated.write_text(prefix+'\n'.join(span(text,s) for s in methods)+'\npublic void Run(){throw new NotSupportedException("Loading thread outside fixture");}\n}\n}\n',encoding='utf-8',newline='\n')
 source=ROOT/'tests/kairo/FormExecutionOracle.cs'
 # The original file imports UnityEngine even though selected bodies do not
 # require its implementation. A declared marker supplies that namespace only.
 marker=folder/'UnityMarker.cs';marker.write_text('namespace UnityEngine {public class Marker{}}\n',encoding='utf-8',newline='\n')
 originals=[ROOT/'reference/src/KairoLibrary'/p for p in ['kairo/unity/form/FormBase.cs','kairo/unity/ui/AppEvent.cs','kairo/unity/ui/AppEventType.cs','kairo/unity/surface/TouchValueAccessor.cs']]
 sources=[source,generated,marker,*originals];oracle=folder/'FormExecutionOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
 refs=unity/'Editor/Data/Mono/lib/mono/2.0';mono=unity/'Editor/Data/Mono/bin/mono.exe'
 env=dict(os.environ,MONO_PATH=str(refs),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
 old=folder/'FormExecutionOracle-mono.exe'
 args=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(old)]
 args+=['/r:'+str(refs/(p+'.dll')) for p in ['mscorlib','System','System.Core']]+[str(p) for p in sources]
 rsp=folder/'mono.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in args)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(rsp)],folder,'mono-compile')
 native_sources=[ROOT/p for p in ['tests/kairo/forms_execution_fixtures.cpp','src/kairo/common/forms_execution.cpp','src/kairo/common/forms.cpp','src/kairo/common/canvas.cpp',
  'src/kairo/common/graphics.cpp','src/kairo/common/mesh.cpp','src/kairo/common/image_lifetime.cpp','src/kairo/common/font.cpp','src/kairo/common/sound.cpp','src/kairo/common/semantic_runtime.cpp','src/kairo/common/asset_catalog.cpp',
  'src/kairo/platform/sdl/input.cpp','src/kairo/platform/sdl/font.cpp','src/kairo/platform/sdl/audio.cpp']]
 sdk=ROOT/'build/deps/native-media';sdl=ROOT/'build/deps/SDL2-2.32.10';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';native=folder/'forms-execution-fixtures.exe'
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
  if len(a)!=len(b):raise ValueError('Form scheduler trace lengths differ')
  cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(a,b)]
 policy=json.loads(run([native,'policy'],folder,'native-policy',environment()))
 passed=all(c['passed'] for c in cases)
 inputs=native_sources+[source,ROOT/'tools/test_forms_execution.py',ROOT/'tools/test_input.py',ROOT/'tools/test_forms.py',ROOT/'tools/native_api_proof.py']
 inputs += [ROOT/'src/kairo/api'/p for p in ['forms_execution.hpp','forms_callbacks.hpp','forms.hpp','touch_value_accessor.hpp','canvas.hpp','application.hpp','graphics.hpp','font.hpp','sound.hpp','input.hpp']]
 inputs += [ROOT/'src/kairo/common'/p for p in ['semantic_runtime.hpp','managed_shared_field.hpp','asset_catalog.hpp','sha256.hpp']]+[ROOT/'src/kairo/platform/sdl'/p for p in ['font.hpp','audio.hpp']]
 ids=boundary_ids(exact=['M:kairo.unity.form.FormManagerBase.'+s for s in ['Execute','OnDraw','Resume','SetPause(System.Boolean)','IsPause','Drawn','PreDraw','PreUpdate','Updated']])
 report=dict(operation='original-source-form-execute-render-order-differential',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(c['passed'] for c in cases),cases=cases,
  verified_boundary_ids=ids,native_callback_policy=policy,inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
  source_manifest=[dict(path=p.relative_to(ROOT/'reference').as_posix(),sha256=sha(p)) for p in [manager,*originals]],
  original_methods=methods,native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),
  limits=['Synthetic services prove call order, states, forced save unlock, retries/finally and rendering through SurfaceManager; not a game boot.',
          'Actual generated KairoBase/SaveRecorder/FEP/Surface/config/cache/expiration bindings must be installed before the game can execute.',
          'Loading-thread/capture/cross-thread handshake paths are not exercised; notification and advertising leaves follow explicit removal policy.'],
  game_assets_used=False,original_binaries_executed=False,game_boot=False)
 (ROOT/'config/phase2-forms-execution-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status=report['status'],fixture_cases=len(cases),passed=report['passed'])))
 for c in cases:
  if not c['passed']:print(json.dumps(c))
 return 0 if passed else 1


if __name__=='__main__':sys.exit(main())
