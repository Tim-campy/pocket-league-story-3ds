"""Headless SDL synthetic-event snapshot and original coordinate expressions.

Does not run the game, remove DEBUG, use physical input or claim full DoEvents.
"""
import hashlib,json,os,sys
from pathlib import Path
from test_input import ROOT,sha,run,compile_modern
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

def main():
    folder=ROOT/'build/debug-input-tests';folder.mkdir(parents=True,exist_ok=True)
    csc,dotnet,framework=compiler_paths();metadata_source=ROOT/'tests/kairo/UnityDebugInputMetadata.cs';metadata=folder/'UnityDebugInputMetadata.dll';compile_modern([metadata_source],metadata,folder,'metadata',csc,framework)
    request=json.loads((ROOT/'build/translator/KairoLibrary-input.json').read_text(encoding='utf-8'));external=next(Path(p).resolve() for p in request['references'] if Path(p).name=='UnityEngine.dll')
    if external.is_relative_to(ROOT):raise ValueError('Original API metadata must remain external')
    observations=run([dotnet,metadata,external],folder,'metadata-read').splitlines()
    expected={'key:LeftShift=304','key:RightShift=303','field:Vector3.x=060c','field:Vector3.y=060c','field:Vector3.z=060c'}
    if not expected<=set(observations):raise ValueError('Original key/Vector3 field protocol changed')
    original=ROOT/'reference/src/KairoLibrary/kairo/unity/surface/SurfaceManagerBase.cs';text=original.read_text(encoding='utf-8-sig')
    expressions=[]
    for prefix in ['float num6 = (Input.mousePosition.x','float num7 = ((float)Screen.height']:
        start=text.index(prefix);end=text.index(';',start)+1;expressions.append(text[start:end])
    generated=folder/'OriginalDebugProjection.cs';generated.write_text('using UnityEngine;public static class OriginalDebugProjection {public static string Project(Surface surfaceBase2){\n'+'\n'.join(expressions)+'\nreturn DebugInputOracle.Bits(num6)+","+DebugInputOracle.Bits(num7);}}\n',encoding='utf-8',newline='\n')
    source=ROOT/'tests/kairo/DebugInputOracle.cs';modern=folder/'DebugInputOracle.dll';compile_modern([source,generated],modern,folder,'dotnet',csc,framework)
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))/'Editor/Data/Mono';core=unity/'lib/mono/unity/mscorlib.dll';mono=unity/'bin/mono.exe'
    if sha(core)!='7f16171cf5f87ca1e4c229727526d2fbc786079fc0c960f36197013ea0d986e1':raise ValueError('APK-identical SDK core required')
    old=folder/'DebugInputOracle-mono.exe';options=['/nologo','/nostdlib+','/target:exe','/langversion:6','/out:'+str(old),'/r:'+str(core),str(source),str(generated)]
    response=folder/'mono.rsp';response.write_text('\n'.join('"'+v+'"' for v in options)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(response)],folder,'mono-compile')
    monoenv=dict(os.environ,MONO_PATH=str(core.parent),MONO_CFG_DIR=str(unity/'etc'))
    native_sources=[ROOT/p for p in ['tests/kairo/debug_input_fixtures.cpp','src/kairo/platform/sdl/backend.cpp','src/kairo/platform/sdl/debug_input.cpp','src/kairo/common/semantic_runtime.cpp']]
    compiler=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';sdl=ROOT/'build/deps/SDL2-2.32.10';native=folder/'debug-input-fixtures.exe'
    run([compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/DSDL_MAIN_HANDLED','/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'src/kairo/platform/sdl'),'/I'+str(sdl/'include'),'/Fe:'+str(native),'/Fo:'+str(folder)+'/',*native_sources,sdl/'lib/x64/SDL2.lib'],folder,'native-compile',environment())
    (folder/'SDL2.dll').write_bytes((sdl/'lib/x64/SDL2.dll').read_bytes())
    actual=dict(line.split('\t',1) for line in run([native],folder,'native-cases',environment()).splitlines());cases=[]
    if len(actual)!=12:raise ValueError('Incomplete synthetic-frame corpus')
    for profile,command,env in [('UnityMono265',[mono,old],monoenv),('DotNet',[dotnet,modern],None)]:
        oracle=dict(line.split('\t',1) for line in run(command,folder,profile+'-oracle',env).splitlines())
        if oracle.keys()!=actual.keys():raise ValueError('Incomplete original source projection observations')
        cases.extend(dict(profile=profile,case=k,expected=v,actual=actual[k],passed=v==actual[k]) for k,v in oracle.items())
    policy=json.loads(run([native,'policy'],folder,'native-policy',environment()))
    if policy.get('status')!='PASS' or policy.get('assertions')!=24:raise ValueError('Incomplete SDK snapshot invariant corpus')
    passed=all(c['passed'] for c in cases)
    inputs=[*native_sources,source,metadata_source,ROOT/'tools/test_debug_input.py',ROOT/'tools/test_input.py',ROOT/'src/kairo/api/debug_input.hpp',ROOT/'src/kairo/api/vector3.hpp',ROOT/'src/kairo/platform/sdl/debug_input.hpp',ROOT/'src/kairo/platform/sdl/backend.hpp',ROOT/'src/kairo/api/platform.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp']
    receipt=dict(operation='SDL-debug-input-snapshot-original-coordinate-expressions',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(c['passed'] for c in cases),cases=cases,native_policy=policy,verified_boundary_ids=[],
        source_manifest=[dict(path=original.relative_to(ROOT/'reference').as_posix(),sha256=sha(original))],original_expression_sha256=[hashlib.sha256(e.encode('utf-8')).hexdigest() for e in expressions],
        inputs_sha256={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),external_api_metadata=dict(sha256=sha(external),observations=observations),
        limitations=['Exact original coordinate expressions plus own Input collaborator; not full SurfaceManagerBase.DoEvents/Draw proof.',
                    'SDL synthetic headless events prove native snapshot policy; no original Unity native Input, Android or physical user input exercised.',
                    'Only Shift GetKey, mouse buttons0/1 held/down, mousePosition fields and render height are admitted; other APIs/keys/buttons remain refused.',
                    'The existing Canvas pulse and mouse aggregation consumer is separate and unchanged.'],game_boot=False,game_assets_used=False,physical_user_input_used=False,original_binaries_executed=False)
    (ROOT/'config/phase2-debug-input-tests.json').write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf-8',newline='\n');print(json.dumps(dict(status=receipt['status'],fixture_cases=len(cases),passed=receipt['passed'],native_assertions=24)))
    if not passed:print(json.dumps([c for c in cases if not c['passed']],indent=2));return 1
    return 0
if __name__=='__main__':sys.exit(main())
