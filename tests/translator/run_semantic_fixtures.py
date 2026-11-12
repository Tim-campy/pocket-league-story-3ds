"""Compile own C# and C++ language fixtures and compare their observable traces.

Uses installed compiler/runtime only. No game assembly, original binary, asset or
network is read by these fixtures. This validates runtime semantics independently
of production-translator syntax coverage, which has a separate receipt.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[2]
EXTRA_NATIVE_SOURCES={}
EXTRA_INPUTS={}
EXTRA_CSHARP_REFERENCES={}
EXTRA_MONO_REFERENCES={}
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import utf8_console;utf8_console()
FIXTURES={
    'SemanticFixtures':('semantic-fixtures','semantic_fixtures.cpp','runtime'),
    'CollectionFixtures':('collection-fixtures','collection_fixtures.cpp','collections'),
    'EncodingFixtures':('encoding-fixtures','encoding_fixtures.cpp','encoding'),
    'ConversionFixtures':('conversion-fixtures','conversion_fixtures.cpp','conversion'),
    'IntegerParseFixtures':('integer-parse-fixtures','integer_parse_fixtures.cpp','integer-parse'),
    'ArrayBridgeFixtures':('array-bridge-fixtures','array_bridge_fixtures.cpp','array-bridge'),
    'RandomFixtures':('random-fixtures','random_fixtures.cpp','random'),
    'StringBuilderFixtures':('string-builder-fixtures','string_builder_fixtures.cpp','string-builder'),
    'DictionaryFixtures':('dictionary-fixtures','dictionary_fixtures.cpp','dictionary'),
    'FloatingCastFixtures':('floating-cast-fixtures','floating_cast_fixtures.cpp','floating-cast'),
    'TimeFixtures':('time-fixtures','time_fixtures.cpp','time'),
    'ObjectDispatchFixtures':('object-dispatch-fixtures','object_dispatch_fixtures.cpp','object-dispatch'),
    'TimeZoneFixtures':('timezone-fixtures','timezone_fixtures.cpp','timezone'),
    'GcFixtures':('gc-fixtures','gc_fixtures.cpp','gc')}


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def execute(command,folder,name,env=None):
    result=subprocess.run([str(v) for v in command],cwd=folder,env=env,capture_output=True)
    (folder/(name+'.stdout')).write_bytes(result.stdout)
    (folder/(name+'.stderr')).write_bytes(result.stderr)
    if result.returncode:raise RuntimeError(name+' failed; inspect '+str(folder/(name+'.stderr'))+' and stdout')
    return result.stdout.decode('utf-8-sig').replace('\r\n','\n')


def msvc_environment():
    vs=Path('C:/Program Files/Microsoft Visual Studio/18/Community')
    script=vs/'VC/Auxiliary/Build/vcvars64.bat'
    if not script.is_file():raise ValueError('Existing MSVC x64 environment missing; no tool is installed')
    # Fixed trusted tool path; raw Windows command-line quoting avoids list2cmdline
    # escaping the nested cmd.exe quotes as literal backslashes.
    command='cmd.exe /d /s /c ""'+str(script)+'" >nul && set"'
    result=subprocess.run(command,capture_output=True,text=True,check=True)
    env=os.environ.copy()
    for line in result.stdout.splitlines():
        if '=' in line and not line.startswith('='):
            key,value=line.split('=',1);env[key]=value
    compiler=vs/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
    if not compiler.is_file():raise ValueError('Pinned existing MSVC missing')
    return compiler,env


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--fixture',choices=FIXTURES,default='SemanticFixtures')
    parser.add_argument('--output',type=Path)
    parser.add_argument('--tracing',action='store_true',help='Exercise the pointer-based runtime branch; receipt stays in build/')
    args=parser.parse_args();folder=(args.output or ROOT/'build'/FIXTURES[args.fixture][0]).resolve()
    if not folder.is_relative_to((ROOT/'build').resolve()):raise ValueError('Fixture output must stay in ignored build/')
    folder.mkdir(parents=True,exist_ok=True)
    csc,dotnet,framework=compiler_paths()
    cs_source=ROOT/('tests/translator/'+args.fixture+'.cs')
    oracle=folder/(args.fixture+'.dll')
    refs=[framework/(n+'.dll') for n in ('System.Private.CoreLib','System.Runtime','System.Console','System.Collections')]
    refs += [framework/(n+'.dll') for n in EXTRA_CSHARP_REFERENCES.get(args.fixture,[])]
    parameters=['/nologo','/nostdlib+','/target:exe','/optimize+','/checked-','/out:'+str(oracle)]
    parameters+=['/r:'+str(p) for p in refs]+[str(cs_source)]
    rsp=folder/'oracle.rsp';rsp.write_text('\n'.join('"'+p+'"' for p in parameters)+'\n',encoding='utf-8',newline='\n')
    execute([csc,'/noconfig','@'+str(rsp)],folder,'csharp-compile')
    (folder/(args.fixture+'.runtimeconfig.json')).write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
    expected=execute([dotnet,oracle],folder,'csharp-run')
    compiler,env=msvc_environment()
    source=ROOT/('tests/translator/'+FIXTURES[args.fixture][1])
    runtime=ROOT/'src/kairo/common/semantic_runtime.cpp'
    binary=folder/'semantic-fixtures.exe'
    command=[compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8',
             '/I'+str(runtime.parent),'/Fe:'+str(binary),source,runtime,*EXTRA_NATIVE_SOURCES.get(args.fixture,[])]
    if args.tracing:command+=['/DPLS_TRACING_GC=1']
    execute(command,folder,'cpp-compile',env)
    actual=execute([binary,'dotnet'],folder,'cpp-run',env)
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
    mono=unity/'Editor/Data/Mono/bin/mono.exe'
    smcs=unity/'Editor/Data/Mono/lib/mono/unity/smcs.exe'
    if not mono.is_file() or not smcs.is_file():raise ValueError('Historical oracle missing; no tool is installed')
    mono_env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
    old_oracle=folder/(args.fixture+'-mono.exe')
    mono_core=smcs.parent/'System.Core.dll'
    mono_extra=['-r:'+str(smcs.parent/(n+'.dll')) for n in EXTRA_MONO_REFERENCES.get(args.fixture,[])]
    execute([mono,smcs,'-nologo','-noconfig','-target:exe','-optimize+','-r:'+str(mono_core),*mono_extra,'-out:'+str(old_oracle),cs_source],folder,'mono-compile',mono_env)
    mono_expected=execute([mono,old_oracle],folder,'mono-run',mono_env).replace('\r\n','\n').replace('\r','')
    mono_actual=execute([binary,'mono'],folder,'cpp-mono-run',env)
    native_collector_tests=json.loads(execute([binary,'native-only'],folder,'cpp-native-collector-tests',env)) if args.fixture=='GcFixtures' else None
    rows=[]
    for left,right in zip(expected.splitlines(),actual.splitlines()):
        rows.append(dict(case=left.split('=',1)[0],expected=left,actual=right,passed=left==right))
    mono_rows=[dict(case=left.split('=',1)[0],expected=left,actual=right,passed=left==right)
               for left,right in zip(mono_expected.splitlines(),mono_actual.splitlines())]
    matched=expected==actual and mono_expected==mono_actual
    all_modern_rows=rows[:]
    modern_generation_contrast=[]
    if args.fixture=='GcFixtures':
        # The authorized production collector is nongenerational, as is the
        # historical Unity oracle. Preserve modern observations explicitly,
        # but do not require a generational .NET collector from this runtime.
        generation_cases={'max-generation','generation-zero','generation-one'}
        modern_generation_contrast=[r for r in rows if r['case'] in generation_cases]
        rows=[r for r in rows if r['case'] not in generation_cases]
        matched=(all(r['passed'] for r in rows+mono_rows)
                 and len(expected.splitlines())==len(actual.splitlines())
                 and mono_expected==mono_actual)
    report=dict(operation='own-source-CSharp-versus-Cpp-runtime-semantic-fixtures',status='PASS' if matched else 'FAIL',
        fixture_cases=len(rows)+len(mono_rows),passed=sum(r['passed'] for r in rows+mono_rows),expected_lines=len(expected.splitlines()),actual_lines=len(actual.splitlines()),
        native_collector_tests=native_collector_tests,production_methods_translated=0,production_translator_exercised=False,game_assets_used=False,game_binary_executed=False,
        compiler=dict(csharp=str(csc),csharp_sha256=sha(csc),cpp=str(compiler),cpp_sha256=sha(compiler)),
        inputs={str(p.relative_to(ROOT)):sha(p) for p in [cs_source,source,runtime,runtime.parent/'semantic_runtime.hpp',runtime.parent/'managed_collections.hpp',runtime.parent/'managed_random.hpp',runtime.parent/'managed_text.hpp',runtime.parent/'managed_dictionary.hpp',runtime.parent/'managed_time.hpp',Path(__file__),*EXTRA_NATIVE_SOURCES.get(args.fixture,[]),*EXTRA_INPUTS.get(args.fixture,[])]},
        historical_oracle=dict(runtime=str(mono),runtime_sha256=sha(mono),compiler=str(smcs),compiler_sha256=sha(smcs),framework_reference=str(mono_core),framework_reference_sha256=sha(mono_core),original_binaries_copied=False),
        default_runtime_profile='UnityMono265',cpp_flags=command[2:10],cases=rows,historical_cases=mono_rows,
        historical_profile_differences=[dict(case=a['case'],dotnet=a['expected'],unity_mono=b['expected'])
            for a,b in zip(all_modern_rows,mono_rows) if a['expected']!=b['expected']],
        limitations=['Native C++ fixtures are independently written synthetic language cases; they do not prove production emitter coverage.',
                    'Historical oracle is Unity Mono on Windows, not proof of Android-specific arithmetic/JIT corner cases.',
                    'CompareOrdinal tests compare sign/zero, its specified contract; exact magnitude differs across implementations.'])
    report['managed_reference_model']='tracing-raw-pointers'
    if args.fixture=='GcFixtures':
        report['modern_generation_contrast']=modern_generation_contrast
        report['limitations'].append('Modern .NET generation count/promotion are contrast-only, not implemented: the approved collector is nongenerational. All historical Unity GC observations remain mandatory.')
        report['inputs']['tests/translator/gc_test_support.hpp']=sha(ROOT/'tests/translator/gc_test_support.hpp')
    report['inputs'].update({p.relative_to(ROOT).as_posix():sha(p) for p in (ROOT/'src/runtime').rglob('*') if p.suffix in {'.cpp','.hpp','.inc'}})
    (folder/'receipt.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    target=folder/'tracing-receipt.json' if args.tracing else ROOT/('config/phase2-'+FIXTURES[args.fixture][2]+'-fixtures.json');target.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=report['status'],cases=report['fixture_cases'],passed=report['passed'],receipt=str(target.relative_to(ROOT)))))
    if not matched:
        for row in rows+mono_rows:
            if not row['passed']:print(json.dumps(row))
        return 1
    return 0


if __name__=='__main__':sys.exit(main())
