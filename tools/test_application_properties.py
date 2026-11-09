"""Exact reconstructed GetProperty spans against the native Awake model cache.

Only synthetic model strings are printed. The real Windows model is checked for
non-emptiness but never appears in logs, hashes, receipts or fixture source.
"""
import json,os,sys
from pathlib import Path
from test_input import ROOT,sha,run,span,compile_modern
from native_api_proof import boundary_ids
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

def main():
    folder=ROOT/'build/application-properties-tests';folder.mkdir(parents=True,exist_ok=True)
    originals=[ROOT/'reference/src/KairoLibrary/kairo/unity/ui/IApplication.cs',ROOT/'reference/src/KairoLibrary/java/lang/JSystem.cs']
    selected=[span(p.read_text(encoding='utf-8-sig'),'public static string GetProperty(string key)') for p in originals]
    prelude='''using System;using java.lang;using UnityEngine;
namespace UnityEngine {public enum RuntimePlatform {Android,IPhonePlayer} public static class Application {public static RuntimePlatform platform;} public static class SystemInfo {public static string deviceModel,deviceName;}}
namespace java.lang {public static class JSystem {'''
    generated=folder/'OriginalProperties.cs'
    generated.write_text(prelude+selected[1]+'''}}
namespace kairo.unity.ui {public class IApplication {static string platform_;public static string Cached {get{return platform_;}}public static void SetCached(string value){platform_=value;}
'''+selected[0]+'}}\n',encoding='utf-8',newline='\n')
    source=ROOT/'tests/kairo/ApplicationPropertiesOracle.cs';sources=[source,generated]
    csc,dotnet,framework=compiler_paths();modern=folder/'ApplicationPropertiesOracle.dll';compile_modern(sources,modern,folder,'dotnet',csc,framework)
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))/'Editor/Data/Mono';core=unity/'lib/mono/unity/mscorlib.dll';mono=unity/'bin/mono.exe'
    if sha(core)!='7f16171cf5f87ca1e4c229727526d2fbc786079fc0c960f36197013ea0d986e1':raise ValueError('Expected APK-identical external SDK managed core required')
    old=folder/'ApplicationPropertiesOracle-mono.exe';options=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(old),'/r:'+str(core),*[str(p) for p in sources]]
    response=folder/'mono.rsp';response.write_text('\n'.join('"'+p+'"' for p in options)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(response)],folder,'mono-compile')
    monoenv=dict(os.environ,MONO_PATH=str(core.parent),MONO_CFG_DIR=str(unity/'etc'))
    native_sources=[ROOT/p for p in ['tests/kairo/application_properties_fixtures.cpp','src/kairo/common/semantic_runtime.cpp','src/kairo/platform/sdl/globalization.cpp']]
    native=folder/'application-properties-fixtures.exe';compiler=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
    run([compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(native),'/Fo:'+str(folder)+'/',*native_sources,'Advapi32.lib'],folder,'native-compile',environment())
    actual=dict(line.split('\t',1) for line in run([native],folder,'native-cases',environment()).splitlines());cases=[];source_only=[]
    for profile,command,env in [('UnityMono265',[mono,old],monoenv),('DotNet',[dotnet,modern],None)]:
        expected=dict(line.split('\t',1) for line in run(command,folder,profile+'-oracle',env).splitlines())
        if len(expected)!=66 or expected.keys()!=actual.keys():raise ValueError('Incomplete application property source corpus')
        cases.extend(dict(profile=profile,case=k,expected=v,actual=actual[k],passed=v==actual[k]) for k,v in expected.items())
        context=dict(line.split('\t',1) for line in run([*command,'jsystem'],folder,profile+'-jsystem-source-only',env).splitlines())
        if len(context)!=22:raise ValueError('Incomplete JSystem source-only branch census')
        source_only.append(dict(profile=profile,observations=context,native_verified=False))
    backend=json.loads(run([native,'backend'],folder,'native-backend',environment()))
    if backend.get('status')!='PASS' or backend.get('assertions')!=21 or backend.get('hardware_value_logged') is not False:raise ValueError('Incomplete device model backend fixture')
    passed=all(row['passed'] for row in cases)
    inputs=native_sources+[source,ROOT/'tools/test_application_properties.py',ROOT/'tools/test_input.py',ROOT/'tools/native_api_proof.py',ROOT/'src/kairo/api/application.hpp',ROOT/'src/kairo/api/globalization.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/managed_shared_field.hpp',ROOT/'src/kairo/common/managed_time.hpp',ROOT/'src/kairo/platform/sdl/globalization.hpp']
    receipt=dict(operation='original-source-IApplication-GetProperty-cache-differential',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(row['passed'] for row in cases),cases=cases,native_backend=backend,
        verified_boundary_ids=boundary_ids(exact=['M:kairo.unity.ui.IApplication.GetProperty(System.String)']) if passed else [],
        source_manifest=[dict(path=p.relative_to(ROOT/'reference').as_posix(),sha256=sha(p)) for p in originals],
        original_method_spans=[dict(path=p.relative_to(ROOT/'reference').as_posix(),signature='public static string GetProperty(string key)',sha256=__import__('hashlib').sha256(body.encode('utf-8')).hexdigest()) for p,body in zip(originals,selected)],
        inputs_sha256={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),historical_core_sha256=sha(core),source_only_jsystem=source_only,
        limitations=['Only IApplication.GetProperty is a verified boundary identity; JSystem direct source observations are context, not native JSystem proof.',
                    'Cached model changes only through host_platform; real generated Awake ordering and platform initialization are separate integration obligations.',
                    'Windows SystemProductName is a native PC model, not an Android or Unity model; failed/empty/malformed/oversized reads use Windows.',
                    'The live hardware model value is not emitted or hashed in the fixture logs or public receipt.'],game_boot=False,game_assets_used=False,original_binaries_executed=False)
    (ROOT/'config/phase2-application-properties-tests.json').write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=receipt['status'],fixture_cases=len(cases),passed=receipt['passed'],native_backend_assertions=21,verified_boundary_ids=receipt['verified_boundary_ids'])))
    if not passed:
        print(json.dumps([c for c in cases if not c['passed']],indent=2));return 1
    return 0
if __name__=='__main__':sys.exit(main())
