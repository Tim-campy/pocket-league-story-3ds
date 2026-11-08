"""Compare own Stream/MemoryStream C++ fixtures with .NET10 and Unity Mono.

This is a memory-only standard-library foundation, not game translation or boot.
All programs are compiled from this repository's own synthetic fixture source.
Existing external runtimes are invoked in place; no original binary is copied.
"""
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT/'tools/csharp_subset'))
sys.path.insert(0, str(ROOT/'tools'))
from inventory import compiler_paths
from pc_compiler import environment, VS


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def execute(command, folder, label, env=None):
    result = subprocess.run([str(v) for v in command], cwd=folder, capture_output=True, env=env)
    (folder/(label+'.stdout')).write_bytes(result.stdout)
    (folder/(label+'.stderr')).write_bytes(result.stderr)
    if result.returncode:
        raise RuntimeError(label+' failed; inspect '+str(folder/(label+'.stdout')))
    return result.stdout.decode('utf-8-sig').replace('\r\n', '\n').replace('\r', '')


def main():
    folder = ROOT/'build/streams-fixtures'
    folder.mkdir(parents=True, exist_ok=True)
    source = ROOT/'tests/kairo/ManagedStreams.cs'
    csc, dotnet, framework = compiler_paths()
    oracle = folder/'ManagedStreams.dll'
    refs = [framework/(n+'.dll') for n in ['System.Private.CoreLib','System.Runtime','System.Console','System.IO']]
    args = ['/nologo','/nostdlib+','/target:exe','/optimize+','/out:'+str(oracle)]
    args += ['/r:'+str(p) for p in refs]+[str(source)]
    rsp = folder/'oracle.rsp'
    rsp.write_text('\n'.join('"'+a+'"' for a in args)+'\n',encoding='utf-8',newline='\n')
    execute([csc,'/noconfig','@'+str(rsp)],folder,'dotnet-compile')
    (folder/'ManagedStreams.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10')))),encoding='utf-8',newline='\n')
    modern = execute([dotnet,oracle],folder,'dotnet-run')
    unity = Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
    mono = unity/'Editor/Data/Mono/bin/mono.exe'
    smcs = unity/'Editor/Data/Mono/lib/mono/unity/smcs.exe'
    if not mono.is_file() or not smcs.is_file():
        raise RuntimeError('Existing historical oracle is missing; nothing is installed')
    mono_env = dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
    old_oracle = folder/'ManagedStreams-mono.exe'
    execute([mono,smcs,'-nologo','-noconfig','-optimize+','-out:'+str(old_oracle),source],folder,'mono-compile',mono_env)
    historical = execute([mono,old_oracle],folder,'mono-run',mono_env)
    runtime = ROOT/'src/kairo/common/semantic_runtime.cpp'
    impl = ROOT/'src/kairo/common/managed_streams.cpp'
    cpp_source = ROOT/'tests/kairo/managed_streams_fixtures.cpp'
    compiler = VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
    native = folder/'managed-streams.exe'
    command = [compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8',
               '/I'+str(runtime.parent),'/Fe:'+str(native),cpp_source,runtime,impl]
    execute(command,folder,'cpp-compile',environment())
    outputs = dict(dotnet=execute([native,'dotnet'],folder,'cpp-dotnet-run'),
                   mono=execute([native,'mono'],folder,'cpp-mono-run'))
    oracles = dict(dotnet=modern,mono=historical)
    results = {}
    for profile, expected in oracles.items():
        left, right = expected.splitlines(), outputs[profile].splitlines()
        if len(left)!=len(right):
            raise RuntimeError('Fixture trace length mismatch for '+profile)
        results[profile] = [dict(case=a.split('=',1)[0],expected=a,actual=b,passed=a==b) for a,b in zip(left,right)]
    differences = [dict(case=a.split('=',1)[0],dotnet=a,mono=b) for a,b in zip(modern.splitlines(),historical.splitlines()) if a!=b]
    passed = all(r['passed'] for cases in results.values() for r in cases)
    inputs = [source,cpp_source,impl,impl.with_suffix('.hpp'),runtime,runtime.with_suffix('.hpp'),Path(__file__)]
    report = dict(operation='own-source-SystemIO-Stream-MemoryStream-differential',status='PASS' if passed else 'FAIL',
        fixture_cases=sum(len(rows) for rows in results.values()),passed=sum(r['passed'] for rows in results.values() for r in rows),
        default_profile='UnityMono265',profiles=results,measured_runtime_differences=differences,
        inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},
        compiler=dict(csharp=str(csc),csharp_sha256=sha(csc),cpp=str(compiler),cpp_sha256=sha(compiler)),
        oracles=dict(dotnet=dict(runtime=str(dotnet),sha256=sha(dotnet),version='10.0.10'),
                     mono=dict(runtime=str(mono),sha256=sha(mono),compiler=str(smcs),compiler_sha256=sha(smcs),version='Unity5.3.4f1 Mono2.6.5')),
        filesystem_streams_implemented=False,game_assets_used=False,original_binaries_copied=False,
        game_executed=False,production_emitter_exercised=False,android_behavior='UNKNOWN',
        limitations=['Own source oracle/native foundation only; emitted java.io and game call sites require separate tests.',
                     'Capacity allocations near Int32 limits are not exercised; platform out-of-memory behavior is not measured.'])
    output = ROOT/'config/phase2-streams-fixtures.json'
    output.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=report['status'],fixture_cases=report['fixture_cases'],passed=report['passed'],runtime_differences=len(differences))))
    if not passed:
        for profile, rows in results.items():
            for row in rows:
                if not row['passed']: print(json.dumps(dict(profile=profile,**row)))
        return 1
    return 0


if __name__ == '__main__':
    sys.exit(main())
