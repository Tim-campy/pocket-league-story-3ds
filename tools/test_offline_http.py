"""Prove the source HTTP failure state machine without contacting any host.

The own native leaf is checked separately. Source-level HttpObject integration
is not promoted until the translator compiles and runs those exact bodies.
"""
import json
import os
from pathlib import Path
import sys
from test_input import ROOT,sha,run,compile_modern
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths


def main():
 folder=ROOT/'build/offline-http-tests';folder.mkdir(parents=True,exist_ok=True)
 csc,dotnet,framework=compiler_paths();source=ROOT/'tests/kairo/OfflineHttpOracle.cs'
 original=ROOT/'reference/src/KairoLibrary/kairo/unity/io/HttpObject.cs';sources=[source,original]
 oracle=folder/'OfflineHttpOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
 refs=unity/'Editor/Data/Mono/lib/mono/2.0';mono=unity/'Editor/Data/Mono/bin/mono.exe'
 env=dict(os.environ,MONO_PATH=str(refs),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'));old=folder/'OfflineHttpOracle-mono.exe'
 args=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(old)]+['/r:'+str(refs/(p+'.dll')) for p in ['mscorlib','System','System.Core']]+[str(p) for p in sources]
 rsp=folder/'mono.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in args)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(rsp)],folder,'mono-compile')
 profiles={}
 for name,command,env_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:profiles[name]=run(command,folder,name+'-run',env_).splitlines()
 if profiles['dotnet']!=profiles['mono']:raise ValueError('Source failure states differ between runtimes')
 expected=[]
 for name,retry,dialogs,post in [('get-no-retry',False,0,-1),('get-retry-cancel',True,1,-1),('post-no-mark',False,0,3),('post-with-mark',False,0,7)]:
  expected += [name+'=System.IO.IOException:-98:'+str(retry)+':True:True:True:False:1:1:'+str(dialogs)+':'+str(post),name+'-pop=-98:0:True:True',name+'-interrupt=-98:False:True']
 if profiles['mono']!=expected:raise ValueError('Original HttpObject failure state contract changed; inspect build logs')
 units=[ROOT/'tests/kairo/offline_http_fixtures.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp'];native=folder/'offline-http-fixtures.exe';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
 run([cl,'/nologo','/std:c++17','/EHsc','/MD','/fp:strict','/permissive-','/W4','/WX','/O2','/utf-8','/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(native),'/Fo:'+str(folder)+'\\',*units],folder,'cpp-compile',environment())
 leaf=json.loads(run([native],folder,'native-run',environment()))
 inputs=units+[source,ROOT/'tools/test_offline_http.py',ROOT/'tools/test_input.py',ROOT/'src/kairo/api/offline_http.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp']
 report=dict(operation='original-source-HttpObject-offline-failure-characterization',status='PASS',source_cases_per_profile=len(expected),source_profiles=profiles,native_leaf=leaf,
 verified_boundary_ids=[],generated_http_integration='PENDING',inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
 source_manifest=[dict(path=original.relative_to(ROOT/'reference').as_posix(),sha256=sha(original))],
 native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),game_assets_used=False,original_binaries_executed=False,game_boot=False,
 limits=['Own WWW facade supplies completed failure, never a real request; original HttpObject bodies are compiled unmodified.',
 'Native leaf assertions and source-state characterization are separate proofs until generated HttpObject execution.',
 'WWW.error exact text varies by platform and is UNKNOWN on the original Android player; nonempty failure is the observed contract.',
 'Retry dialog fixture always returns explicit synthetic cancel; it does not validate Android custom-button result mapping.'])
 (ROOT/'config/phase2-offline-http-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status='PASS',source_cases=2*len(expected),native_assertions=leaf['assertions'],transport_attempts=0)))


if __name__=='__main__':main()
