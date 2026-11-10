"""Compare captured inputs against locally reconstructed DLLs and linked C++.

All captures, oracle binaries and results remain in ignored build/. This is
an isolated kernel measurement, not a game-frame benchmark or Android proof.
"""
import hashlib
import io
import json
import os
from pathlib import Path
import re
import shutil
import statistics
import struct
import subprocess
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from pc_compiler import CMAKE, NINJA, environment

ROOT = Path(__file__).resolve().parents[2]


def static_signature(path, kind):
    r = io.BytesIO(path.read_bytes())
    def integer(): return struct.unpack('<i', r.read(4))[0]
    def array():
        n = integer()
        if n >= 0: r.read(4*n)
    def grid():
        n = integer()
        for _ in range(max(0, n)): array()
    if kind == 0:
        array(); array()
        return r.read()
    if kind in (1, 2):
        grid(); r.read(8)
        if kind == 1: array()
        else: r.read(4)
        return r.read()  # offsets, weights (GetSum), map dimensions
    return b''


def main():
    os.chdir(ROOT)
    folder=ROOT/'build/hot-methods'; folder.mkdir(exist_ok=True)
    captures=ROOT/'build/hot-input-capture/inputs'
    for kind in range(5):
        paths=[captures/f'{kind}-{i}.bin' for i in range(16)]
        if len({static_signature(p,kind) for p in paths}) != 1:
            raise ValueError('Batch requires identical captured static globals')
    mono=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono')
    original=ROOT.parent/'Pocket League Story'
    managed=[original/'build/Assembly-CSharp-mono-smcs/Assembly-CSharp.dll',
             original/'build/KairoLibrary-roslyn-1.1.0/KairoLibrary.dll',
             original/'original/extracted/assets/bin/Data/Managed/UnityEngine.dll']
    # Only rebuilt assemblies are copied for the oracle. Original Unity stays
    # outside the port tree and is never part of the native link/build.
    for path in managed[:2]: shutil.copyfile(path,folder/path.name)
    env=dict(os.environ, MONO_PATH=os.pathsep.join([str(mono/'lib/mono/unity'),str(managed[2].parent)]))
    command=[str(mono/'bin/mono.exe'),str(mono/'lib/mono/unity/smcs.exe'),'-optimize+',
             '-out:'+str(folder/'HotMethodsMono.exe')]
    command+=['-r:'+str(p) for p in managed]
    command+=[str(ROOT/'tools/profiling/HotMethodsMono.cs')]
    with (folder/'mono-compile.log').open('wb') as log:
        subprocess.run(command,env=env,stdout=log,stderr=subprocess.STDOUT,check=True)
    baseline=ROOT/'build/null-pc'
    link=next(l for l in (baseline/'build.ninja').read_text().splitlines() if l.startswith('build null_game.exe:'))
    objects=[baseline/t for t in link.split() if t.endswith('.obj') and not t.endswith('null_main.cpp.obj')]
    if not objects or any(not p.is_file() for p in objects): raise ValueError('Baseline objects absent')
    source=ROOT/'build/game-diagnostic-runtime-consolidated-20261110'
    q=lambda p:'"'+Path(p).as_posix()+'"'
    includes=[source,ROOT/'src',ROOT/'src/main',ROOT/'src/kairo/common',ROOT/'src/kairo/api',ROOT/'src/kairo/common/generated',ROOT/'src/kairo/platform/sdl']
    cmake='cmake_minimum_required(VERSION 3.20)\nproject(HotMethods LANGUAGES CXX)\nset(CMAKE_CXX_STANDARD 17)\nset(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreadedDLL)\nfind_package(freetype CONFIG REQUIRED)\n'
    cmake+='add_executable(hot_methods '+q(ROOT/'tools/profiling/hot_methods_native.cpp')+' '+' '.join(map(q,objects))+')\n'
    cmake+='target_include_directories(hot_methods PRIVATE '+' '.join(map(q,includes))+')\n'
    cmake+='target_compile_definitions(hot_methods PRIVATE PLS_NULL_BACKEND=1)\ntarget_compile_options(hot_methods PRIVATE /O2 /Zi /bigobj /EHsc /fp:strict /permissive- /utf-8 /we4715)\ntarget_link_options(hot_methods PRIVATE /DEBUG /OPT:REF /OPT:ICF)\n'
    cmake+='target_link_libraries(hot_methods PRIVATE '+q(baseline/'null_runtime.lib')+' Freetype::Freetype Psapi Advapi32)\n'
    (folder/'CMakeLists.txt').write_text(cmake)
    with (folder/'native-build.log').open('wb') as log:
        subprocess.run([str(CMAKE),'-S',str(folder),'-B',str(folder/'out'),'-G','Ninja','-DCMAKE_BUILD_TYPE=Release','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_PREFIX_PATH='+str(ROOT/'build/deps/native-media')],env=environment(),stdout=log,stderr=subprocess.STDOUT,check=True)
        subprocess.run([str(CMAKE),'--build',str(folder/'out'),'--parallel','1'],env=environment(),stdout=log,stderr=subprocess.STDOUT,check=True)
    for name,command in [('mono',[str(mono/'bin/mono.exe'),str(folder/'HotMethodsMono.exe')]),('native',[str(folder/'out/hot_methods.exe')])]:
        command += [str(captures),str(folder/(name+'-results'))]
        if name=='native': command += [str(ROOT/'assets')]
        with (folder/(name+'-output.log')).open('wb') as out, (folder/(name+'-error.log')).open('wb') as err:
            subprocess.run(command,env=env,stdout=out,stderr=err,timeout=180,check=True)
    files=[folder/'mono-results'/f'{k}-{i}.bin' for k in range(5) for i in range(16)]
    differences=[p.name for p in files if p.read_bytes()!=(folder/'native-results'/p.name).read_bytes()]
    rows=[]
    for kind in range(5):
        row={'kind':kind}
        for name in ['mono','native']:
            text=(folder/(name+'-output.log')).read_text()
            values=[float(x) for x in re.findall('method='+str(kind)+r' batch=\d+ calls=16000 gross_ns=([^\s]+)',text)]
            if len(values)!=5: raise ValueError('Missing timing batch')
            row[name+'_gross_ns']=statistics.median(values)
            row[name+'_batches']=values
            row[name+'_empty_ns']=float(re.search(r'empty_ns=([^\s]+)',text)[1])
            row[name+'_net_ns']=row[name+'_gross_ns']-row[name+'_empty_ns']
        row['gross_ratio']=row['native_gross_ns']/row['mono_gross_ns']
        row['net_ratio']=row['native_net_ns']/row['mono_net_ns'] if row['mono_net_ns']>0 else None
        rows.append(row)
    inputs=objects+managed+[baseline/'null_runtime.lib',folder/'out/hot_methods.exe',folder/'HotMethodsMono.exe',mono/'bin/mono.exe',ROOT/'tools/profiling/HotMethodsMono.cs',ROOT/'tools/profiling/hot_methods_native.cpp']+list(captures.glob('*.bin'))
    result=dict(output_cases=80,differences=differences,measurement='Median of five 16000-call batches; 16 independent captured states restored outside each timed group; static globals identical within a group.',rows=rows,inputs={str(p):hashlib.sha256(p.read_bytes()).hexdigest() for p in inputs})
    (folder/'comparison.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps({k:v for k,v in result.items() if k!='inputs'},indent=2))


if __name__=='__main__': main()
