"""Regress the MIT collator core against the existing own 120-case Mono probe.

Both native drivers install the production historical BMP data, separately
licensed under GNU Library GPLv2. They never substitute a test-only character map.
"""
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment, compiler_paths

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def main():
    folder = ROOT/'build/mono-collation-fixtures'
    folder.mkdir(parents=True, exist_ok=True)
    def run(command, name, env=None):
        result = subprocess.run([str(x) for x in command],cwd=ROOT,env=env,capture_output=True,timeout=120)
        (folder/(name+'.stdout')).write_bytes(result.stdout)
        (folder/(name+'.stderr')).write_bytes(result.stderr)
        if result.returncode:
            raise RuntimeError('See build/mono-collation-fixtures/'+name+'.stdout/.stderr')
        return result.stdout.decode('utf-8-sig').replace('\r\n','\n').replace('\r','')
    run([sys.executable,ROOT/'tools/generate_mono_collator.py'],'generate')
    run([sys.executable,ROOT/'tools/probe_string_culture.py'],'oracle')
    oracle = json.loads((ROOT/'config/phase2-string-culture-probe.json').read_text(encoding='utf-8'))
    compiler, env = msvc_environment()
    binary = folder/'mono-collation-fixtures.exe'
    sources = [ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_collation.cpp',ROOT/'src/kairo/common/managed_mono_character_data.cpp',ROOT/'tests/translator/mono_collation_fixtures.cpp']
    command = [compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8',
               '/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'build/generated/mono-collation'),'/Fe:'+str(binary),'/Fo:'+str(folder)+'/',*sources]
    run(command,'compile',env)
    actual = dict(line.split('\t') for line in run([binary],'native',env).splitlines())
    rows = [dict(case=row['case'],expected=row['actual'],actual=actual.get(row['case']),passed=row['actual']==actual.get(row['case'])) for row in oracle['profiles']['UnityMono265']['cases']]
    if len(actual)!=120 or len(rows)!=120:
        raise ValueError('Incomplete native collation corpus')
    passed = sum(row['passed'] for row in rows)
    edge_source=ROOT/'tests/translator/MonoCollationEdgeFixtures.cs'
    csc,dotnet,framework=compiler_paths()
    edge_oracle=folder/'MonoCollationEdgeFixtures.dll'
    refs=[framework/(name+'.dll') for name in ['System.Private.CoreLib','System.Runtime','System.Console','System.Threading.Thread']]
    options=['/nologo','/nostdlib+','/target:exe','/optimize+','/out:'+str(edge_oracle)]+['/r:'+str(p) for p in refs]+[str(edge_source)]
    rsp=folder/'edge.rsp'
    rsp.write_text('\n'.join('"'+p+'"' for p in options)+'\n',encoding='utf-8',newline='\n')
    run([csc,'/noconfig','@'+str(rsp)],'edge-modern-compile')
    edge_oracle.with_suffix('.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
    modern_edges=dict(line.split('\t') for line in run([dotnet,edge_oracle],'edge-modern').splitlines())
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
    mono=unity/'Editor/Data/Mono/bin/mono.exe';smcs=unity/'Editor/Data/Mono/lib/mono/unity/smcs.exe'
    mono_env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
    old=folder/'MonoCollationEdgeFixtures-mono.exe'
    run([mono,smcs,'-nologo','-noconfig','-optimize+','-out:'+str(old),edge_source],'edge-mono-compile',mono_env)
    expected_edges=dict(line.split('\t') for line in run([mono,old],'edge-mono',mono_env).splitlines())
    edge_cpp=ROOT/'tests/translator/mono_collation_edge_fixtures.cpp'
    edge_binary=folder/'mono-collation-edge-fixtures.exe'
    edge_command=command.copy()
    edge_command[edge_command.index('/Fe:'+str(binary))]='/Fe:'+str(edge_binary)
    edge_command[-1]=edge_cpp
    run(edge_command,'edge-native-compile',env)
    actual_edges=dict(line.split('\t') for line in run([edge_binary],'edge-native',env).splitlines())
    if len(expected_edges)!=25704 or expected_edges.keys()!=actual_edges.keys() or expected_edges.keys()!=modern_edges.keys():
        raise ValueError('Incomplete edge fixture corpus')
    edge_mismatches=[dict(case=key,expected=value,actual=actual_edges[key]) for key,value in expected_edges.items() if value!=actual_edges[key]]
    edge_passed=len(expected_edges)-len(edge_mismatches)
    edge_differences=sum(value!=modern_edges[key] for key,value in expected_edges.items())
    bmp_source=ROOT/'tests/translator/MonoBmpFixtures.cs';bmp_oracle=folder/'MonoBmpFixtures.dll'
    bmp_options=options.copy();bmp_options[bmp_options.index('/out:'+str(edge_oracle))]='/out:'+str(bmp_oracle);bmp_options[-1]=str(bmp_source)
    bmp_rsp=folder/'bmp.rsp';bmp_rsp.write_text('\n'.join('"'+p+'"' for p in bmp_options)+'\n',encoding='utf-8',newline='\n')
    run([csc,'/noconfig','@'+str(bmp_rsp)],'bmp-modern-compile')
    bmp_oracle.with_suffix('.runtimeconfig.json').write_text(edge_oracle.with_suffix('.runtimeconfig.json').read_text(encoding='utf-8'),encoding='utf-8',newline='\n')
    bmp_modern=dict(line.split('\t') for line in run([dotnet,bmp_oracle],'bmp-modern').splitlines())
    bmp_old=folder/'MonoBmpFixtures-mono.exe'
    run([mono,smcs,'-nologo','-noconfig','-optimize+','-out:'+str(bmp_old),bmp_source],'bmp-mono-compile',mono_env)
    bmp_expected=dict(line.split('\t') for line in run([mono,bmp_old],'bmp-mono',mono_env).splitlines())
    bmp_cpp=ROOT/'tests/translator/mono_bmp_fixtures.cpp';bmp_binary=folder/'mono-bmp-fixtures.exe'
    bmp_command=command.copy();bmp_command[bmp_command.index('/Fe:'+str(binary))]='/Fe:'+str(bmp_binary);bmp_command[-1]=bmp_cpp
    run(bmp_command,'bmp-native-compile',env)
    bmp_actual=dict(line.split('\t') for line in run([bmp_binary],'bmp-native',env).splitlines())
    if len(bmp_expected)!=9 or bmp_expected.keys()!=bmp_actual.keys() or bmp_expected.keys()!=bmp_modern.keys():
        raise ValueError('Incomplete exhaustive BMP vector corpus')
    bmp_mismatches=[];bmp_differences=0;bmp_cases=0
    for key,expected_vector in bmp_expected.items():
        width=1 if key=='unassigned' else 4
        actual_vector=bmp_actual[key];modern_vector=bmp_modern[key]
        if len(expected_vector)!=65536*width or len(actual_vector)!=len(expected_vector) or len(modern_vector)!=len(expected_vector):raise ValueError('Incomplete BMP vector')
        for cp in range(65536):
            start=cp*width;expected_value=expected_vector[start:start+width];actual_value=actual_vector[start:start+width]
            bmp_cases+=1
            if expected_value!=actual_value:bmp_mismatches.append(dict(operation=key,code_unit=cp,expected=expected_value,actual=actual_value))
            if expected_value!=modern_vector[start:start+width]:bmp_differences+=1
    inputs = [*sources,ROOT/'src/kairo/common/managed_collation.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',
              ROOT/'src/kairo/common/mono_collator_methods.inc',ROOT/'src/kairo/common/mono_unicode_methods.inc',
              ROOT/'tools/generate_mono_collator.py',ROOT/'tools/setup_mono_collation.py',ROOT/'tests/translator/StringCultureProbe.cs',edge_source,edge_cpp,bmp_source,bmp_cpp,
              ROOT/'build/generated/mono-collation/mono_collation_tables.inc',ROOT/'build/generated/mono-collation/mono_character_tables.inc']
    report = dict(operation='historical-Mono-collation-own-source-differential',status='PASS' if passed==120 and not edge_mismatches and not bmp_mismatches else 'FAIL',
                  cases=120+len(expected_edges)+bmp_cases,passed=passed+edge_passed+bmp_cases-len(bmp_mismatches),original_120_cases=dict(cases=120,passed=passed,results=rows),
                  edge_cases=dict(cases=len(expected_edges),passed=edge_passed,mismatch_count=len(edge_mismatches),mismatches=edge_mismatches[:64],
                                  profile_differences=edge_differences,cultures=8,
                                  mono_stdout_sha256=sha(folder/'edge-mono.stdout'),modern_stdout_sha256=sha(folder/'edge-modern.stdout'),
                                  native_stdout_sha256=sha(folder/'edge-native.stdout')),
                  bmp=dict(cases=bmp_cases,passed=bmp_cases-len(bmp_mismatches),mismatch_count=len(bmp_mismatches),mismatches=bmp_mismatches[:64],
                           profile_differences=bmp_differences,vectors=9,code_units_per_vector=65536,
                           mono_stdout_sha256=sha(folder/'bmp-mono.stdout'),modern_stdout_sha256=sha(folder/'bmp-modern.stdout'),native_stdout_sha256=sha(folder/'bmp-native.stdout')),
                  existing_oracle_profiles={name:len(profile['cases']) for name,profile in oracle['profiles'].items()},
                  producer_sha256=sha(Path(__file__)),inputs_sha256={str(p.relative_to(ROOT)).replace('\\','/'):sha(p) for p in inputs},
                  native_executable=dict(path=str(binary.relative_to(ROOT)).replace('\\','/'),sha256=sha(binary)),
                  edge_native_executable=dict(path=str(edge_binary.relative_to(ROOT)).replace('\\','/'),sha256=sha(edge_binary)),
                  bmp_native_executable=dict(path=str(bmp_binary.relative_to(ROOT)).replace('\\','/'),sha256=sha(bmp_binary)),
                  compiler=dict(path=str(compiler),sha256=sha(compiler)),
                  official_resource_bytes=337358,character_data_bytes=46832,logical_table_payload_bytes=384190,
                  ctr_binary_footprint='NOT_MEASURED; Phase4 toolchain not installed',
                  character_provider='PRODUCTION historical official Mono BMP tables, separate GNU Library GPLv2',
                  production_methods_promoted=0,original_binary_copied=False,original_game_binary_executed=False,
                  limitations=['Differential corpus is synthetic and does not imply all Unicode combinations have been executed.',
                               'CurrentCulture must be supplied explicitly by the host; no default language/culture inference.',
                               'Android collation resource identity verified, Android CLR method execution is not verified.'])
    (ROOT/'config/phase2-mono-collation-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=report['status'],passed=report['passed'],cases=report['cases'],original120_passed=passed,edge_passed=edge_passed,edge_mismatches=len(edge_mismatches),bmp_cases=bmp_cases,bmp_mismatches=len(bmp_mismatches),production_methods_promoted=0)))
    if report['status']!='PASS':
        print(json.dumps([row for row in rows if not row['passed']]+edge_mismatches[:32]+bmp_mismatches[:32],indent=2))
        raise SystemExit(1)

if __name__=='__main__':
    main()
