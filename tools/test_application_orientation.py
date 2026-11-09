"""Exact source orientation getters, preserving successive provider reads.

Setter/autorotate observations remain context only. Default reset is exercised
through the host callback; SDL's actual window reset has a separate CTest.
"""
import hashlib,json,os,sys
from pathlib import Path
from test_input import ROOT,sha,run,span,compile_modern
from native_api_proof import boundary_ids
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

def main():
    folder=ROOT/'build/application-orientation-tests';folder.mkdir(parents=True,exist_ok=True)
    csc,dotnet,framework=compiler_paths();metadata_source=ROOT/'tests/kairo/UnityScreenMetadata.cs';metadata_exe=folder/'UnityScreenMetadata.dll'
    compile_modern([metadata_source],metadata_exe,folder,'metadata',csc,framework)
    request=json.loads((ROOT/'build/translator/KairoLibrary-input.json').read_text(encoding='utf-8'))
    external=next(Path(p).resolve() for p in request['references'] if Path(p).name=='UnityEngine.dll')
    if external.is_relative_to(ROOT):raise ValueError('Original Unity metadata must remain outside the port')
    metadata=run([dotnet,metadata_exe,external],folder,'metadata-read').splitlines()
    enums=dict(line.removeprefix('enum:').split('=',1) for line in metadata if line.startswith('enum:'))
    if enums!={'Unknown':'0','Portrait':'1','PortraitUpsideDown':'2','LandscapeLeft':'3','LandscapeRight':'4','AutoRotation':'5','Landscape':'3'}:raise ValueError('Original orientation numeric protocol changed')
    original=ROOT/'reference/src/KairoLibrary/kairo/unity/ui/IApplication.cs';text=original.read_text(encoding='utf-8-sig')
    signatures=['public bool IsSide()','public int GetOrientation()','public void SetOrientation(int orientation)','public bool IsAutoOrientation()','public void ResetOrientation()'];bodies=[span(text,s) for s in signatures]
    capture='defaultOrientation_ = Screen.orientation;'
    if capture not in text:raise ValueError('Original Awake capture absent')
    facade='''using System;using UnityEngine;
namespace UnityEngine {public enum ScreenOrientation {'''+','.join(k+'='+v for k,v in enums.items())+'''}
public static class Screen {
 static ScreenOrientation stored;static bool allowed;static int[] sequence;static int index;
 public static int reads,autoReads,writes;
 public static ScreenOrientation Stored {get{return stored;}}
 public static ScreenOrientation orientation {get{reads++;if(sequence!=null&&index<sequence.Length)stored=(ScreenOrientation)sequence[index++];return stored;}set{writes++;stored=value;}}
 public static bool autorotateToPortrait {get{autoReads++;return allowed;}}
 public static void Prepare(ScreenOrientation value,bool flag){stored=value;allowed=flag;sequence=null;index=reads=autoReads=writes=0;}
 public static void Sequence(int[] values){sequence=values;index=0;}
}}
public class OriginalOrientation {ScreenOrientation defaultOrientation_;public void CaptureDefault(){'''+capture+'}\n'+'\n'.join(bodies)+'}\n'
    generated=folder/'OriginalOrientation.cs';generated.write_text(facade,encoding='utf-8',newline='\n')
    source=ROOT/'tests/kairo/ApplicationOrientationOracle.cs';modern=folder/'ApplicationOrientationOracle.dll';compile_modern([generated,source],modern,folder,'dotnet',csc,framework)
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))/'Editor/Data/Mono';core=unity/'lib/mono/unity/mscorlib.dll';mono=unity/'bin/mono.exe'
    if sha(core)!='7f16171cf5f87ca1e4c229727526d2fbc786079fc0c960f36197013ea0d986e1':raise ValueError('APK-identical SDK managed core required')
    old=folder/'ApplicationOrientationOracle-mono.exe';options=['/nologo','/nostdlib+','/target:exe','/langversion:6','/out:'+str(old),'/r:'+str(core),str(generated),str(source)]
    response=folder/'mono.rsp';response.write_text('\n'.join('"'+s+'"' for s in options)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(response)],folder,'mono-compile')
    env=dict(os.environ,MONO_PATH=str(core.parent),MONO_CFG_DIR=str(unity/'etc'))
    native_sources=[ROOT/'tests/kairo/application_orientation_fixtures.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp'];native=folder/'application-orientation-fixtures.exe';compiler=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
    run([compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(native),'/Fo:'+str(folder)+'/',*native_sources],folder,'native-compile',environment())
    actual=dict(line.split('\t',1) for line in run([native],folder,'native-cases',environment()).splitlines())
    if len(actual)!=27:raise ValueError('Incomplete native getter/reset corpus')
    cases=[];context=[]
    for profile,command,childenv in [('UnityMono265',[mono,old],env),('DotNet',[dotnet,modern],None)]:
        observed=dict(line.split('\t',1) for line in run(command,folder,profile+'-source-oracle',childenv).splitlines())
        if len(observed)!=61 or not actual.keys()<=observed.keys():raise ValueError('Incomplete original source orientation corpus')
        cases.extend(dict(profile=profile,case=k,expected=observed[k],actual=v,passed=observed[k]==v) for k,v in actual.items())
        context.append(dict(profile=profile,native_verified=False,observations={k:v for k,v in observed.items() if k not in actual}))
    policy=json.loads(run([native,'policy'],folder,'native-policy',environment()))
    if policy.get('status')!='PASS' or policy.get('assertions')!=10 or policy.get('setter_autorotate_implemented') is not False or policy.get('default_reset_callback_implemented')is not True:raise ValueError('Incomplete own host orientation policy fixture')
    passed=all(row['passed'] for row in cases)
    inputs=[*native_sources,source,metadata_source,ROOT/'tools/test_application_orientation.py',ROOT/'tools/test_input.py',ROOT/'tools/native_api_proof.py',ROOT/'src/kairo/api/application.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/managed_shared_field.hpp']
    receipt=dict(operation='original-source-IApplication-orientation-getters-differential',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(c['passed'] for c in cases),cases=cases,native_policy=policy,
        verified_boundary_ids=boundary_ids(exact=['M:kairo.unity.ui.IApplication.IsSide','M:kairo.unity.ui.IApplication.GetOrientation']) if passed else [],
        source_manifest=[dict(path=original.relative_to(ROOT/'reference').as_posix(),sha256=sha(original))],original_method_spans=[dict(signature=s,sha256=hashlib.sha256(b.encode('utf-8')).hexdigest()) for s,b in zip(signatures,bodies)],
        inputs_sha256={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),historical_core_sha256=sha(core),external_unity_api_metadata=dict(sha256=sha(external),observations=metadata),source_only_context=context,
        limits=['IsSide/GetOrientation and default reset are source-differential observations. General setter/autorotate remain source-only context and are not implemented.',
                'Window aspect policy is explicit PC behavior, not evidence of original Unity desktop or Android sensor behavior.',
                'The provider is installed before managed workers; captures must be native only and synchronization of mutable provider state is the host obligation.',
                'No SDL monitor orientation, Android global configuration flag or Nintendo 3DS layout is selected.'],game_boot=False,game_assets_used=False,original_binaries_executed=False,original_unity_binary_copied=False)
    (ROOT/'config/phase2-application-orientation-tests.json').write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf-8',newline='\n');print(json.dumps(dict(status=receipt['status'],fixture_cases=len(cases),passed=receipt['passed'],native_assertions=policy['assertions'],verified_boundary_ids=receipt['verified_boundary_ids'])))
    if not passed:print(json.dumps([c for c in cases if not c['passed']],indent=2));return 1
    return 0
if __name__=='__main__':sys.exit(main())
