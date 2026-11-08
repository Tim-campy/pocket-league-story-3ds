"""Characterize original Setup/queue/retry/persistence with a failed WWW leaf.

The synthetic JThread executes synchronously to make call order reproducible;
thread scheduling itself has separate runtime proofs. No network is contacted.
"""
import json
import os
from pathlib import Path
import sys
from test_input import ROOT,sha,run
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths


def main():
 folder=ROOT/'build/analytics-offline-tests';folder.mkdir(parents=True,exist_ok=True)
 csc,dotnet,framework=compiler_paths();source=ROOT/'tests/kairo/AnalyticsOfflineOracle.cs'
 original=[ROOT/'reference/src/KairoLibrary/kairo/unity/analytics/AnalyticsTracker.cs',ROOT/'reference/src/KairoLibrary/kairo/unity/io/HttpObject.cs']
 fixture=ROOT/'tests/kairo/OfflineHttpOracle.cs';facades=fixture.read_text(encoding='utf-8').split('class OfflineHttpOracle{',1)[0]
 facades=facades.replace('public static class JThread{public static void Sleep(long n)',
  'public class JThread{readonly System.Threading.ThreadStart target;public JThread(System.Threading.ThreadStart target){this.target=target;}public void Start(){AnalyticsOwnHooks.threads++;target();}public static void Sleep(long n)')
 facades=facades.replace('public static int LicenseCheck(){',
  'public static string GetInstallReferrer(string key=null){AnalyticsOwnHooks.referrers++;return null;}public static int LicenseCheck(){')
 facades=facades.replace('public delegate object UIMethod();','public string GetPackageName(){return "synthetic.fixture";}public delegate object UIMethod();')
 generated=folder/'OwnHttpFacades.cs';generated.write_text(facades,encoding='utf-8',newline='\n');sources=[source,generated,*original]
 oracle=folder/'AnalyticsOfflineOracle.dll'
 args=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(oracle)]
 args+=['/r:'+str(framework/(p+'.dll')) for p in ['System.Private.CoreLib','System.Runtime','System.Console','System.Collections','System.Private.Uri','System.Threading.Thread']]+[str(p) for p in sources]
 rsp=folder/'dotnet.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in args)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(rsp)],folder,'dotnet-compile')
 (folder/'AnalyticsOfflineOracle.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
 refs=unity/'Editor/Data/Mono/lib/mono/2.0';mono=unity/'Editor/Data/Mono/bin/mono.exe';old=folder/'AnalyticsOfflineOracle-mono.exe'
 env=dict(os.environ,MONO_PATH=str(refs),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
 args=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(old)]+['/r:'+str(refs/(p+'.dll')) for p in ['mscorlib','System','System.Core']]+[str(p) for p in sources]
 rsp=folder/'mono.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in args)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(rsp)],folder,'mono-compile')
 profiles={}
 for name,command,env_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:profiles[name]=run(command,folder,name+'-run',env_).splitlines()
 expected=['fresh=True:0:::True:0:0:0:1:1:True:1',
 'second-setup=True:True:0:::True:0:0:0:1:1',
 'retained-offline=True:2:3,0:100,200:True:1:1:1:1:1:True',
 'repeat-failure=True:2:4,0:100,200:True:2:2:2:2:2:True',
 'malformed-retained=True:0:::True:0:0:0:0:0:True']
 if any(rows!=expected for rows in profiles.values()):raise ValueError('Source analytics contract differs; inspect build/analytics-offline-tests run logs')
 inputs=[source,fixture,ROOT/'tools/test_analytics_offline.py',ROOT/'tools/test_input.py']
 report=dict(operation='original-source-analytics-setup-queue-offline-characterization',status='PASS',source_cases=2*len(expected),profiles=profiles,
 verified_boundary_ids=[],generated_analytics_integration='PENDING',inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
 source_manifest=[dict(path=p.relative_to(ROOT/'reference').as_posix(),sha256=sha(p)) for p in original],
 transport_attempts=0,game_assets_used=False,original_binaries_executed=False,game_boot=False,
 limits=['Synchronous own JThread facade makes order deterministic; it does not validate translated thread scheduling.',
 'Fresh setup persists an empty queue; loaded queue is retained with original Retry increments on failed dispatch.',
 'These are unchanged original-source observations; generated AnalyticsTracker execution remains a separate obligation.'])
 (ROOT/'config/phase2-analytics-offline-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status='PASS',source_cases=report['source_cases'],transport_attempts=0)))


if __name__=='__main__':main()
