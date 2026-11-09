"""Test original input event source and pure Canvas key-state body fragments.

Unity enum values are read as PE metadata by an own-source helper, never by
loading/executing a Unity binary. Original mouse/touch/SDK callbacks are not
claimed to be exercised by the pure key-state differential.
"""
import hashlib
import json
from native_api_proof import input_ids
import os
from pathlib import Path
import subprocess
import sys

from pc_compiler import VS,environment
sys.path.insert(0,str(Path(__file__).resolve().parent/'csharp_subset'))
from inventory import compiler_paths
ROOT=Path(__file__).resolve().parents[1]
SIGNATURES=[
 'public int GetKeyState()', 'public int GetKeypadState()',
 'public bool CheckKeyState(int key)', 'public bool CheckKeyPulse(int key)',
 'public bool CheckKeyRepeat(int key)', 'public bool CheckKeyRepeat(int key, int interval)',
 'public bool CheckKeyDouble(int key)', 'public bool CheckKeyDouble(int key, int interval)',
 'public void SetKeyRepeatInterval(int frame)', 'public int GetKeyRepeatInterval()',
 'public void SetKeyDoubleInterval(int frame)', 'public int GetKeyDoubleInterval()',
 'public void KeyDown(int key, bool pulse = true)', 'public void KeyUp(int key)',
 'public void KeyClick(int key)', 'protected int GetKeyID(KeyCode keyCode)',
]


def sha(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def run(command,folder,name,env=None):
    result=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True,env=env)
    (folder/(name+'.stdout')).write_bytes(result.stdout);(folder/(name+'.stderr')).write_bytes(result.stderr)
    if result.returncode:raise RuntimeError(name+' failed; inspect '+str(folder/(name+'.stdout')))
    return result.stdout.decode('utf-8-sig').replace('\r\n','\n').replace('\r','')


def span(text,signature):
    start=text.index(signature);brace=text.index('{',start);depth=0
    # Selected method bodies contain no brace-bearing string/comment tokens.
    for i in range(brace,len(text)):
        if text[i]=='{':depth+=1
        elif text[i]=='}':
            depth-=1
            if depth==0:return text[start:i+1]
    raise ValueError('Unclosed original input method')


def compile_modern(source,target,folder,name,csc,framework):
    references=['System.Private.CoreLib','System.Runtime','System.Console','System.Collections','System.Reflection.Metadata','System.Collections.Immutable']
    args=['/nologo','/nostdlib+','/target:exe','/optimize+','/out:'+str(target)]+['/r:'+str(framework/(n+'.dll')) for n in references]+[str(p) for p in source]
    rsp=folder/(name+'.rsp');rsp.write_text('\n'.join('"'+a+'"' for a in args)+'\n',encoding='utf-8',newline='\n')
    run([csc,'/noconfig','@'+str(rsp)],folder,name+'-compile')
    target.with_suffix('.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10')))),encoding='utf-8',newline='\n')


def main():
    folder=ROOT/'build/input-tests';folder.mkdir(parents=True,exist_ok=True)
    csc,dotnet,framework=compiler_paths()
    request=json.loads((ROOT/'build/translator/KairoLibrary-input.json').read_text(encoding='utf-8'))
    unity=next(Path(p) for p in request['references'] if Path(p).name=='UnityEngine.dll')
    probe=folder/'EnumProbe.cs'
    probe.write_text('''using System;using System.IO;using System.Reflection.Metadata;using System.Reflection.PortableExecutable;
class Probe {static void Main(string[] args){using(var input=File.OpenRead(args[0]))using(var pe=new PEReader(input)){
var m=pe.GetMetadataReader();foreach(var h in m.TypeDefinitions){var t=m.GetTypeDefinition(h);if(m.GetString(t.Namespace)!="UnityEngine"||m.GetString(t.Name)!="KeyCode")continue;
foreach(var f in t.GetFields()){var d=m.GetFieldDefinition(f);if(d.GetDefaultValue().IsNil)continue;var c=m.GetConstant(d.GetDefaultValue());var b=m.GetBlobReader(c.Value);Console.WriteLine(m.GetString(d.Name)+"="+b.ReadInt32());}}}}}''',encoding='utf-8',newline='\n')
    probe_exe=folder/'EnumProbe.dll';compile_modern([probe],probe_exe,folder,'enum',csc,framework)
    values={line.split('=')[0]:int(line.split('=')[1]) for line in run([dotnet,probe_exe,unity],folder,'enum-metadata').splitlines()}
    checked={'Home':278,'Escape':27,'LeftWindows':311,'Keypad0':256,'Keypad9':265,'KeypadMultiply':268,'KeypadDivide':267,'KeypadEnter':271,
             'UpArrow':273,'DownArrow':274,'RightArrow':275,'LeftArrow':276,'LeftShift':304,'RightShift':303,'LeftControl':306,'RightControl':305}
    if any(values[k]!=v for k,v in checked.items()):raise ValueError('Measured Unity KeyCode constants differ from native mapping')
    original_canvas=ROOT/'reference/src/KairoLibrary/kairo/unity/ui/Canvas.cs';canvas=original_canvas.read_text(encoding='utf-8-sig')
    methods='\n'.join(span(canvas,s) for s in SIGNATURES)
    decide=span(canvas,'public void DecideKeyState()');tail=decide[decide.rindex('int num5 = GetKeypadState()'):]
    clear=span(canvas,'public void ClearKeyBuffer()');clear=clear[:clear.index('if (Input.touchCount > 0)')]+'}'
    enums=','.join(k+'='+str(v) for k,v in values.items())
    facades='''using System;using UnityEngine;
namespace UnityEngine {public enum KeyCode {'''+enums+'''}}
namespace kairo.common.cfg {public static class Config {public static bool DEBUG;}}
public class SurfaceStub {public void OnKeyDown(int n){}public void OnKeyUp(int n){}}
public class CanvasKeyOracle {
 int keyBufIndex_,keyPulse_,keyState_,keyEventState_,keyStateWork_,keyPulseInvalid_;bool invalidTouch_;
 int[] keyBuffer_=new int[60];int defaultKeyRepeatInterval_=10,defaultKeyDoubleInterval_=4;SurfaceStub surfaceManager_=null;
 public int KeyId(int code,bool debug){kairo.common.cfg.Config.DEBUG=debug;return GetKeyID((KeyCode)code);}
 public void DecideKeyState(){if(invalidTouch_)invalidTouch_=false;
'''+tail+'\n'+clear+'\n'+methods+'\n}'
    facades=facades.replace('if (Config.DEBUG)','if (kairo.common.cfg.Config.DEBUG)')
    generated=folder/'OriginalInputFragments.cs';generated.write_text(facades,encoding='utf-8',newline='\n')
    original_events=[ROOT/'reference/src/KairoLibrary/kairo/unity/surface/MotionEvent.cs',ROOT/'reference/src/KairoLibrary/kairo/unity/ui/KeyEvent.cs']
    sources=[ROOT/'tests/kairo/InputOracle.cs',generated,*original_events]
    oracle=folder/'InputOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
    oldroot=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
    mono=oldroot/'Editor/Data/Mono/bin/mono.exe';smcs=oldroot/'Editor/Data/Mono/lib/mono/unity/smcs.exe'
    env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(oldroot/'Editor/Data/Mono/etc'))
    old=folder/'InputOracle-mono.exe';run([mono,smcs,'-nologo','-noconfig','-optimize+','-out:'+str(old),*sources],folder,'mono-compile',env)
    pulse_source=folder/'InputPulseOracle.cs'
    pulse_source.write_text((ROOT/'tests/kairo/InputPulseOracle.cs').read_text(encoding='utf-8').replace('/* ORIGINAL_CHECK_KEY_PULSE */',span(canvas,'public bool CheckKeyPulse(int key)')),encoding='utf-8',newline='\n')
    pulse_modern=folder/'InputPulseOracle.dll';compile_modern([pulse_source],pulse_modern,folder,'pulse-dotnet',csc,framework)
    pulse_old=folder/'InputPulseOracle-mono.exe';run([mono,smcs,'-nologo','-noconfig','-optimize+','-out:'+str(pulse_old),pulse_source],folder,'pulse-mono-compile',env)
    native_sources=[ROOT/p for p in ['tests/kairo/input_fixtures.cpp','src/kairo/platform/sdl/input.cpp','src/kairo/common/semantic_runtime.cpp']]
    native=folder/'input-fixtures.exe';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
    run([cl,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/O2','/utf-8','/DSDL_MAIN_HANDLED',
         '/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'build/deps/SDL2-2.32.10/include'),'/Fe:'+str(native),'/Fo:'+str(folder)+'\\',*native_sources],folder,'cpp-compile',environment())
    actual=run([native],folder,'cpp-run',environment());cases=[]
    for profile,command,environment_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:
        expected=run(command,folder,profile+'-run',environment_);a,b=expected.splitlines(),actual.splitlines()
        if len(a)!=len(b):raise ValueError('Input trace length differs')
        cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(a,b)]
    adapter=json.loads(run([native,'adapter'],folder,'adapter-run',environment()))
    pulse_actual=run([native,'pulse'],folder,'pulse-native-run',environment());pulse_cases=[]
    for profile,command,environment_ in [('dotnet',[dotnet,pulse_modern],None),('mono',[mono,pulse_old],env)]:
        expected=run(command,folder,'pulse-'+profile+'-run',environment_)
        a,b=expected.splitlines(),pulse_actual.splitlines()
        if len(a)!=len(b):raise ValueError('Pulse storage trace length differs')
        pulse_cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(a,b)]
    if not all(c['passed'] for c in pulse_cases):raise ValueError('Cached pulse/lost-update contract differs')
    passed=all(c['passed'] for c in cases)
    inputs=native_sources+[ROOT/'src/kairo/api/input.hpp',ROOT/'tests/kairo/InputOracle.cs',ROOT/'tests/kairo/InputPulseOracle.cs',ROOT/'tools/test_input.py',ROOT/'tools/native_api_proof.py',ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/managed_shared_field.hpp',ROOT/'src/kairo/platform/sdl/backend.hpp']
    report=dict(verified_boundary_ids=input_ids(),operation='original-source-event-Canvas-key-state-differential',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(c['passed'] for c in cases),cases=cases,
        native_adapter_policy=adapter,pulse_storage_instrumentation=dict(cases=pulse_cases,fixture_cases=len(pulse_cases),passed=sum(c['passed'] for c in pulse_cases),source_body_unchanged=True,source_field_instrumented_as_property=True,production_uses_separate_load_store=True),native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
        source_manifest=[dict(path=p.relative_to(ROOT/'reference').as_posix(),sha256=sha(p)) for p in [original_canvas,*original_events]],
        keycode_metadata_sha256=sha(unity),checked_Unity_KeyCode_constants=checked,
        source_path_limits=['Canvas key-state bodies only; physical polling and full touch routing are not differential-tested.',
                            'ClearKeyBuffer tested with zero active touch pointers; no cancellation callback path asserted.'],
        original_binaries_executed=False,game_assets_used=False,game_boot=False)
    (ROOT/'config/phase2-input-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=report['status'],fixture_cases=report['fixture_cases'],passed=report['passed'],adapter_assertions=adapter['adapter_assertions'])))
    for c in cases:
        if not c['passed']:print(json.dumps(c))
    return 0 if passed else 1


if __name__=='__main__':sys.exit(main())
