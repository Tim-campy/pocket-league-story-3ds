"""Run own source Thread semantics against existing Unity Mono and .NET10.

No game binary is loaded. The historical Priority no-op is intentional and
measured; the modern contrast applies actual Windows scheduling APIs.
"""
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import compiler_paths,msvc_environment

def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()

def main():
    folder=ROOT/'build/thread-fixtures';folder.mkdir(parents=True,exist_ok=True)
    def run(command,label,env=None):
        result=subprocess.run([str(v) for v in command],cwd=ROOT,env=env,capture_output=True,timeout=60)
        (folder/(label+'.stdout')).write_bytes(result.stdout);(folder/(label+'.stderr')).write_bytes(result.stderr)
        if result.returncode:raise RuntimeError('See build/thread-fixtures/'+label+'.stdout/.stderr')
        return result.stdout.decode('utf-8-sig').replace('\r\n','\n').replace('\r','')
    csc,dotnet,framework=compiler_paths();source=ROOT/'tests/translator/ThreadProbe.cs';modern=folder/'ThreadProbe.dll'
    refs=[framework/(n+'.dll') for n in ['System.Private.CoreLib','System.Runtime','System.Console','System.Threading','System.Threading.Thread']]
    options=['/nologo','/nostdlib+','/target:exe','/out:'+str(modern)]+['/r:'+str(p) for p in refs]+[str(source)]
    response=folder/'probe.rsp';response.write_text('\n'.join('"'+p+'"' for p in options)+'\n',encoding='utf-8',newline='\n')
    run([csc,'/noconfig','@'+str(response)],'modern-compile')
    modern.with_suffix('.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))/'Editor/Data/Mono'
    mono=unity/'bin/mono.exe';smcs=unity/'lib/mono/unity/smcs.exe';old=folder/'ThreadProbe-mono.exe'
    mono_env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'etc'))
    run([mono,smcs,'-nologo','-noconfig','-out:'+str(old),source],'mono-compile',mono_env)
    compiler,env=msvc_environment();binary=folder/'thread-fixtures.exe'
    sources=[ROOT/'tests/translator/thread_fixtures.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_thread.cpp',ROOT/'src/kairo/platform/sdl/thread_priority.cpp']
    command=[compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(binary),'/Fo:'+str(folder)+'/',*sources]
    run(command,'native-compile',env)
    profiles={}
    for name,cmd,child_env,mode in [('UnityMono265',[mono,old],mono_env,'mono'),('DotNet',[dotnet,modern],None,'dotnet')]:
        expected=dict(line.split('\t') for line in run(cmd,name+'-oracle',child_env).splitlines())
        actual=dict(line.split('\t') for line in run([binary,mode],name+'-native',env).splitlines())
        if len(expected)!=32 or expected.keys()!=actual.keys():raise ValueError('Incomplete Thread fixture corpus')
        rows=[dict(case=key,expected=value,actual=actual[key],passed=value==actual[key]) for key,value in expected.items()]
        profiles[name]=dict(cases=len(rows),passed=sum(r['passed'] for r in rows),results=rows)
    cases=sum(p['cases'] for p in profiles.values());passed=sum(p['passed'] for p in profiles.values())
    differences=sum(a['expected']!=b['expected'] for a,b in zip(profiles['UnityMono265']['results'],profiles['DotNet']['results']))
    gc_source=ROOT/'tests/translator/thread_gc_fixtures.cpp';gc_binary=folder/'thread-gc-fixtures.exe'
    gc_command=command.copy();gc_command[gc_command.index('/Fe:'+str(binary))]='/Fe:'+str(gc_binary)
    gc_command[gc_command.index(sources[0])]=gc_source
    run(gc_command,'native-gc-compile',env)
    native_gc=json.loads(run([gc_binary],'native-gc',env))
    if native_gc['status']!='PASS' or native_gc['assertions']!=20:raise ValueError('Incomplete native Thread GC fixtures')
    culture_source=ROOT/'tests/translator/ThreadCultureProbe.cs';culture_modern=folder/'ThreadCultureProbe.dll'
    culture_options=options.copy();culture_options[culture_options.index('/out:'+str(modern))]='/out:'+str(culture_modern);culture_options[-1]=str(culture_source)
    culture_rsp=folder/'culture.rsp';culture_rsp.write_text('\n'.join('"'+p+'"' for p in culture_options)+'\n',encoding='utf-8',newline='\n')
    run([csc,'/noconfig','@'+str(culture_rsp)],'culture-modern-compile')
    culture_modern.with_suffix('.runtimeconfig.json').write_text(modern.with_suffix('.runtimeconfig.json').read_text(encoding='utf-8'),encoding='utf-8',newline='\n')
    modern_culture=dict(line.split('\t') for line in run([dotnet,culture_modern],'culture-modern').splitlines())
    culture_old=folder/'ThreadCultureProbe-mono.exe'
    run([mono,smcs,'-nologo','-noconfig','-out:'+str(culture_old),culture_source],'culture-mono-compile',mono_env)
    expected_culture=dict(line.split('\t') for line in run([mono,culture_old],'culture-mono',mono_env).splitlines())
    culture_cpp=ROOT/'tests/translator/thread_culture_fixtures.cpp';culture_binary=folder/'thread-culture-fixtures.exe'
    culture_sources=[culture_cpp,*sources[1:],ROOT/'src/kairo/common/managed_collation.cpp',ROOT/'src/kairo/common/managed_mono_character_data.cpp']
    culture_command=command[:command.index(sources[0])]+culture_sources
    culture_command[culture_command.index('/Fe:'+str(binary))]='/Fe:'+str(culture_binary)
    culture_command.insert(culture_command.index('/Fe:'+str(culture_binary)),'/I'+str(ROOT/'build/generated/mono-collation'))
    run(culture_command,'culture-native-compile',env)
    actual_culture=dict(line.split('\t') for line in run([culture_binary],'culture-native',env).splitlines())
    if len(expected_culture)!=7 or expected_culture.keys()!=actual_culture.keys() or expected_culture.keys()!=modern_culture.keys():raise ValueError('Incomplete Thread culture corpus')
    culture_rows=[dict(case=key,expected=value,actual=actual_culture[key],passed=value==actual_culture[key],modern=modern_culture[key]) for key,value in expected_culture.items()]
    culture_passed=sum(r['passed'] for r in culture_rows)
    inputs=[*sources,source,gc_source,culture_source,*culture_sources,ROOT/'src/kairo/common/managed_thread.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/platform/sdl/thread_priority.hpp',ROOT/'src/kairo/common/managed_collation.hpp',ROOT/'build/generated/mono-collation/mono_collation_tables.inc',ROOT/'build/generated/mono-collation/mono_character_tables.inc']
    report=dict(operation='own-managed-Thread-source-differential',status='PASS' if passed==cases and culture_passed==7 else 'FAIL',cases=cases+7,passed=passed+culture_passed,profiles=profiles,
        historical_culture=dict(cases=7,passed=culture_passed,profile_differences=sum(r['expected']!=r['modern'] for r in culture_rows),results=culture_rows),
        profile_differences=differences,native_gc=native_gc,producer_sha256=sha(Path(__file__)),inputs_sha256={str(p.relative_to(ROOT)).replace('\\','/'):sha(p) for p in inputs},
        compiler=dict(path=str(compiler),sha256=sha(compiler)),native_executable=dict(path=str(binary.relative_to(ROOT)).replace('\\','/'),sha256=sha(binary)),
        production_methods_promoted=0,game_binary_loaded=False,limitations=['Managed workers are cooperative GC mutators; arbitrary native workers cannot execute managed game code.',
        'Interrupt targets managed Sleep and Join; it is not abort or forced termination.',
        'Unhandled worker exceptions terminate the process, rather than being silently discarded.',
        'Modern priority backend implemented for Windows; other hosts explicitly unsupported for that contrast API.',
        'Historical CurrentCulture initializes per worker from explicit process default; modern ExecutionContext/culture inheritance is not implemented.',
        'Full CLR ExecutionContext, ThreadPool, monitors, Suspend and Abort are not implemented.'])
    (ROOT/'config/phase2-thread-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=report['status'],cases=report['cases'],passed=report['passed'],profile_differences=differences,culture_passed=culture_passed,native_gc_assertions=20)))
    if report['status']!='PASS':
        print(json.dumps({name:[r for r in data['results'] if not r['passed']] for name,data in profiles.items()},indent=2));raise SystemExit(1)

if __name__=='__main__':main()
