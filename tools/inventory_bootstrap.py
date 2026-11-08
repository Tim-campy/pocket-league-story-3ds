"""Read-only bootstrap plan/type proof from the authenticated user's own APK."""
import argparse
import json
import os
from pathlib import Path
import sys
from test_input import ROOT,sha,run,span,compile_modern
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths
from inventory_assets import EXPECTED


def main():
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--apk',required=True,type=Path);args=parser.parse_args()
 if sha(args.apk)!=EXPECTED:raise ValueError('Authenticated own APK required')
 folder=ROOT/'build/bootstrap-inventory';folder.mkdir(parents=True,exist_ok=True)
 csc,dotnet,framework=compiler_paths();source=ROOT/'tools/BootstrapMetadata.cs';exe=folder/'BootstrapMetadata.dll'
 arguments=['/nologo','/nostdlib+','/target:exe','/optimize+','/out:'+str(exe)]
 names=['System.Private.CoreLib','System.Runtime','System.Console','System.Collections','System.Linq','System.Reflection','System.Reflection.Emit','System.Reflection.Emit.ILGeneration','System.Reflection.Emit.Lightweight',
  'System.Reflection.Metadata','System.Collections.Immutable','System.IO.Compression','System.IO.Compression.ZipFile','System.Security.Cryptography','System.Text.Json','System.Memory']
 arguments+=['/r:'+str(framework/(n+'.dll')) for n in names]+[str(source)]
 rsp=folder/'compiler.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in arguments)+'\n',encoding='utf-8',newline='\n')
 run([csc,'/noconfig','@'+str(rsp)],folder,'compile')
 (folder/'BootstrapMetadata.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10')))),encoding='utf-8',newline='\n')
 result=json.loads(run([dotnet,exe,args.apk],folder,'metadata'))
 if sha(args.apk)!=EXPECTED:raise ValueError('APK changed during metadata inventory')
 # Compile the exact original field declarations/Create body and MyConfig as
 # new own-source oracles. Only field names and assertion results are emitted;
 # no license key, field payload or asset is copied into the public receipt.
 config_path=ROOT/'reference/src/KairoLibrary/kairo/common/cfg/Config.cs'
 myconfig_path=ROOT/'reference/src/Assembly-CSharp/cfg/MyConfig.cs'
 config_text=config_path.read_text(encoding='utf-8-sig');start=config_text.index('public class Config')
 fields=config_text[start:config_text.index('protected Config()')]
 generated=folder/'ConfigCreateOriginal.cs'
 generated.write_text('using System;using System.Reflection;namespace kairo.common.cfg {\n'+fields+span(config_text,'protected Config()')+'\n'+span(config_text,'public static void Create(Type config)')+'\n}}\n',encoding='utf-8',newline='\n')
 harness=folder/'ConfigCreateOracle.cs'
 harness.write_text('''using System;using System.Reflection;using kairo.common.cfg;using cfg;
class ConfigCreateOracle {
 static void Main(){Config.APPLI_TYPE=73;MyConfig.APPLI_TYPE=42;Config.DEBUG=true;Config.UNITY_EDITOR=true;Config.PID=-1;Config.Create(typeof(MyConfig));
 if(Config.APPLI_TYPE!=73)throw new Exception("APPLI_TYPE was copied");
 int count=0;foreach(var source in typeof(MyConfig).GetFields(BindingFlags.Static|BindingFlags.Public|BindingFlags.NonPublic)){
 if(source.Name=="APPLI_TYPE")continue;var target=typeof(Config).GetField(source.Name);if(target==null)continue;
 if(!Object.Equals(source.GetValue(null),target.GetValue(null)))throw new Exception("Source Config.Create field mismatch");
 Console.WriteLine("copy:"+source.Name);count++;
 }Console.WriteLine("matched:"+count);Console.WriteLine("APPLI_TYPE_excluded:True");}
}
''',encoding='utf-8',newline='\n')
 oracle=folder/'ConfigCreateOracle.dll';oracle_sources=[generated,harness,myconfig_path]
 compile_modern(oracle_sources,oracle,folder,'source-dotnet',csc,framework)
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
 mono=unity/'Editor/Data/Mono/bin/mono.exe';refs=unity/'Editor/Data/Mono/lib/mono/2.0';old=folder/'ConfigCreateOracle-mono.exe'
 compiler_args=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(old)]
 compiler_args+=['/r:'+str(refs/(name+'.dll')) for name in ['mscorlib','System','System.Core']]+[str(p) for p in oracle_sources]
 old_rsp=folder/'mono.rsp';old_rsp.write_text('\n'.join('"'+v+'"' for v in compiler_args)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(old_rsp)],folder,'source-mono-compile')
 expected=sorted(row['source'].rsplit('.',1)[1] for row in result['config_copy_plan']);profiles=[]
 for name,command,env in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],dict(os.environ,MONO_PATH=str(refs),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc')))]:
  trace=run(command,folder,'source-'+name,env).splitlines();copied=[line[5:] for line in trace if line.startswith('copy:')]
  if sorted(copied)!=expected or trace[-2:]!=['matched:'+str(len(expected)),'APPLI_TYPE_excluded:True']:raise ValueError('Source Config.Create does not match the metadata specialization plan')
  profiles.append(dict(profile=name,copied_fields=copied,matched_fields=len(copied),APPLI_TYPE_excluded=True,executable_sha256=sha(command[-1])))
 derived=[v for v in result['direct_derived_types'] if v['parent']=='kairo.unity.ui.SaveRecorder']
 writes=result['save_recorder_singleton_writes']
 proven=not derived and not result['save_recorder_constructor_calls'] and len(writes)==1 and writes[0]['caller']=='kairo.unity.ui.SaveRecorder::.ctor'
 report=dict(operation='authenticated-bootstrap-CLI-inventory',apk_sha256=EXPECTED,**result,
  save_recorder_null_proof=dict(proven=proven,scope='The two complete managed assemblies; no target code loaded/executed',
   evidence=['No type derives directly from abstract SaveRecorder, so there is no derived chain.',
             'No call/newobj targets SaveRecorder constructor.',
             'The singleton has one compiled store, solely within that uncalled constructor.'],
   exceptions='Runtime type injection/reflection emission or external code outside the authenticated corpus is outside the port scope'),
  config_plan_status='READY_FOR_GENERATED_SPECIALIZATION; no hand-coded MyConfig values',
  source_copy_oracle=profiles,
  inputs={p.relative_to(ROOT).as_posix():sha(p) for p in [source,ROOT/'tools/inventory_bootstrap.py',ROOT/'tools/test_input.py']},
  source_manifest=[dict(path=p,sha256=sha(ROOT/'reference'/p)) for p in ['src/KairoLibrary/kairo/common/cfg/Config.cs','src/Assembly-CSharp/cfg/MyConfig.cs','src/KairoLibrary/kairo/unity/ui/IApplication.cs','src/KairoLibrary/kairo/unity/ui/SaveRecorder.cs','src/KairoLibrary/kairo/unity/panel/FepPanel.cs']],
  native_game_boot=False,original_binaries_executed=False)
 (ROOT/'config/phase2-bootstrap-plan.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status='PASS',config_field_copies=len(result['config_copy_plan']),config_fields_skipped=len(result['config_skipped_fields']),save_recorder_null_proven=proven,fep_current_writes=len(result['fep_current_writes']))))


if __name__=='__main__':main()
