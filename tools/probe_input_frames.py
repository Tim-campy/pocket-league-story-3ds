"""Verify aggregated SDL frames using the entire original DecideKeyState.

No Game/boundary method is automatically promoted. The previous four measured
DEBUG+Shift differences remain documented; the current run requires zero.
"""
import json,os,sys
from pathlib import Path
from test_input import ROOT,sha,run,span,compile_modern
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths


def main():
 folder=ROOT/'build/input-frame-probe';folder.mkdir(parents=True,exist_ok=True);csc,dotnet,framework=compiler_paths()
 request=json.loads((ROOT/'build/translator/KairoLibrary-input.json').read_text(encoding='utf-8'));unity=next(Path(p) for p in request['references'] if Path(p).name=='UnityEngine.dll')
 probe=folder/'EnumProbe.cs';probe.write_text('''using System;using System.IO;using System.Reflection.Metadata;using System.Reflection.PortableExecutable;
class Probe{static void Main(string[] a){using(var input=File.OpenRead(a[0]))using(var pe=new PEReader(input)){var m=pe.GetMetadataReader();foreach(var h in m.TypeDefinitions){var t=m.GetTypeDefinition(h);if(m.GetString(t.Namespace)!="UnityEngine"||m.GetString(t.Name)!="KeyCode")continue;foreach(var f in t.GetFields()){var d=m.GetFieldDefinition(f);if(d.GetDefaultValue().IsNil)continue;var c=m.GetConstant(d.GetDefaultValue());var b=m.GetBlobReader(c.Value);Console.WriteLine(m.GetString(d.Name)+"="+b.ReadInt32());}}}}}
''',encoding='utf-8',newline='\n');probe_exe=folder/'EnumProbe.dll';compile_modern([probe],probe_exe,folder,'enum',csc,framework)
 enums=','.join(run([dotnet,probe_exe,unity],folder,'enum-run').splitlines())
 original=ROOT/'reference/src/KairoLibrary/kairo/unity/ui/Canvas.cs';text=original.read_text(encoding='utf-8-sig');body=span(text,'public void DecideKeyState()');keyid=span(text,'protected int GetKeyID(KeyCode keyCode)')
 init=span(text,'private void Init()');valid=init[init.index('if (Config.DEBUG)'):init.index('onValidKeys_ =')]
 generated=folder/'OriginalCanvasFrame.cs';generated.write_text('''using UnityEngine;using kairo.common.cfg;using kairo.unity.ui;using java.lang;
namespace UnityEngine {public enum KeyCode {'''+enums+'''}}
public class FrameCanvas {
KeyCode[][] VALID_KEYS;bool[] onValidKeys_;int keyPulse_,keyState_,keyEventState_,keyStateWork_,keyPulseInvalid_,keyBufIndex_;bool invalidTouch_;
int[] keyBuffer_=new int[60];int onMouseButton_=-1;Vector3 onMousePosition_,onMouseBeginPosition_;bool onMouseRight_,onMousePinch_;float[] onMousePinchPointer_;long onMousePinchTime_;
public FrameCanvas(){'''+valid+'''onValidKeys_=new bool[VALID_KEYS.Length];}
public int GetKeypadState(){return keyStateWork_;}public int State(){return keyState_;}
public void OnTouchEvent(MotionEvent value){FrameProbe.Log("T"+value.action+":"+(int)value.xy[0]+":"+(int)value.xy[1]);}
public void OnKeyDown(KeyCode code,KeyEvent evt){FrameProbe.Log("D"+(int)code+":"+evt.GetAction());int id=GetKeyID(code);if(id!=-1)keyStateWork_|=1<<id;}
public void OnKeyUp(KeyCode code,KeyEvent evt){FrameProbe.Log("U"+(int)code+":"+evt.GetAction());int id=GetKeyID(code);if(id!=-1)keyStateWork_&=~(1<<id);}
'''+body+'\n'+keyid+'\n}\n',encoding='utf-8',newline='\n')
 source=ROOT/'tests/kairo/InputFrameOracle.cs';sources=[source,generated];oracle=folder/'InputFrameOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
 unity_root=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')));mono=unity_root/'Editor/Data/Mono/bin/mono.exe';smcs=unity_root/'Editor/Data/Mono/lib/mono/unity/smcs.exe'
 env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity_root/'Editor/Data/Mono/etc'));old=folder/'InputFrameOracle-mono.exe';run([mono,smcs,'-nologo','-noconfig','-optimize+','-r:'+str(unity_root/'Editor/Data/Mono/lib/mono/2.0/System.Core.dll'),'-out:'+str(old),*sources],folder,'mono-compile',env)
 native_sources=[ROOT/p for p in ['tests/kairo/input_frame_fixtures.cpp','src/kairo/platform/sdl/input.cpp','src/kairo/common/semantic_runtime.cpp']];native=folder/'input-frame-fixtures.exe';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
 run([cl,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/O2','/utf-8','/DSDL_MAIN_HANDLED',
      '/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'build/deps/SDL2-2.32.10/include'),'/Fe:'+str(native),'/Fo:'+str(folder)+'\\',*native_sources],folder,'cpp-compile',environment())
 actual=run([native],folder,'native-run',environment()).splitlines();cases=[];meta=[]
 for profile,command,env_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:
  rows=run(command,folder,profile+'-run',env_).splitlines();metadata=rows.pop();assert metadata.startswith('META=')
  edges,both=map(int,metadata[5:].split(':'));assert edges==0 and both>0
  meta.append(dict(profile=profile,edge_queries=edges,frames_with_both_mouse_edges=both))
  if len(rows)!=len(actual):raise ValueError('Frame diagnostic trace length differs')
  cases += [dict(profile=profile,case=x.split('=',1)[0],original=x,native=y,matched=x==y) for x,y in zip(rows,actual)]
 unexpected=[c for c in cases if not c['matched']]
 debug_actual=run([native,'initial-debug'],folder,'native-initial-debug',environment()).splitlines();debug_cases=[]
 for profile,command,env_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:
  rows=run([*command,'initial-debug'],folder,profile+'-initial-debug',env_).splitlines();metadata=rows.pop();assert metadata.startswith('META=') and int(metadata[5:].split(':')[0])==0
  if len(rows)!=17 or len(rows)!=len(debug_actual):raise ValueError('Initial DEBUG matrix corpus incomplete')
  debug_cases += [dict(profile=profile,case=x.split('=',1)[0],original=x,native=y,matched=x==y) for x,y in zip(rows,debug_actual)]
 unexpected += [c for c in debug_cases if not c['matched']]
 policy=json.loads(run([native,'policy'],folder,'native-config-policy',environment()));assert policy['status']=='PASS' and policy['assertions']==8
 normal_path=ROOT/'config/phase2-input-tests.json';normal=json.loads(normal_path.read_text(encoding='utf-8'))
 if normal['status']!='PASS' or normal['fixture_cases']!=56 or normal['passed']!=56 or normal['native_adapter_policy']['adapter_assertions']!=19 or normal['pulse_storage_instrumentation']['fixture_cases']!=4 or normal['pulse_storage_instrumentation']['passed']!=4:raise ValueError('Run the complete unchanged normal input/pulse regression first')
 if any(sha(ROOT/path)!=digest for path,digest in normal['inputs'].items()) or sha(ROOT/normal['native_executable']['path'])!=normal['native_executable']['sha256']:raise ValueError('Normal input regression evidence is stale; run tools/test_input.py before this probe')
 inputs=native_sources+[source,ROOT/'tools/probe_input_frames.py',ROOT/'tools/test_input.py',ROOT/'src/kairo/api/input.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/managed_shared_field.hpp',normal_path]
 report=dict(operation='original-full-Canvas-DecideKeyState-aggregated-frame-differential',status='PASS' if not unexpected else 'FAIL',cases=cases,observations=len(cases),matched=sum(c['matched'] for c in cases),differences=sum(not c['matched'] for c in cases),source_frame_metadata=meta,
  initial_debug_matrix=dict(cases=debug_cases,observations=len(debug_cases),matched=sum(c['matched'] for c in debug_cases),differences=sum(not c['matched'] for c in debug_cases)),
  native_config_policy=policy,
  normal_key_regression=dict(receipt=normal_path.relative_to(ROOT).as_posix(),sha256=sha(normal_path),fixture_cases=56,passed=56,native_adapter_assertions=19,pulse_cases=4,pulse_passed=4),
  previous_diagnostic=dict(observations=32,matched=28,differences=4,cases=['debug-shift-suppresses-mouse','release-shift-starts-touch'],history='Measured before Config.DEBUG reader and initial VALID_KEYS matrix integration; retained in repository history and docs/notes/phase2-input-frames.md'),
  hypothesis_mouse_edge_loss='REFUTED: original Canvas consumes held state, not GetMouseButtonDown/Up; complete clicks between polls are ignored there too',
  resolved_gap='Initial VALID_KEYS captures DEBUG once; live DEBUG plus held Shift suppresses mouse polling and preserves previous pointer history',
  inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},source_manifest=[dict(path=original.relative_to(ROOT/'reference').as_posix(),sha256=sha(original))],keycode_metadata_sha256=sha(unity),native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),
  original_methods=['public void DecideKeyState(): complete body','protected int GetKeyID(KeyCode keyCode): complete body','private void Init(): complete DEBUG if/else selecting VALID_KEYS'],
  limits=['Own frame facade supplies held/edge state; not a Unity event-pump observation on Android.',
          'Own OnKeyDown/Up leaves instrument calls and physical bit mutation, without Escape/dialog/surface handling.',
          'GetAxis=0 and touchCount=0: pinch/wheel/mobile paths are read but not runtime-tested.',
          'No boundary or Game method is automatically promoted by this polling proof.'],
  verified_boundary_ids=[],production_modified=True,game_boot=False,game_assets_used=False,original_binaries_executed=False)
 (ROOT/'config/phase2-input-frame-probe.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status=report['status'],observations=len(cases),matched=report['matched'],differences=report['differences'],initial_debug_observations=len(debug_cases),initial_debug_matched=report['initial_debug_matrix']['matched'],unexpected=unexpected)))
 return 1 if unexpected else 0


if __name__=='__main__':sys.exit(main())
