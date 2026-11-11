"""Relink a separate C++ allocation probe using authenticated game objects.

This is an instrumented diagnosis, never the uninstrumented CPU benchmark.
Recompile the host and runtime, then intercept global new; no frame timing claim.
Source-level allocation counters are not enabled in reused game objects.
"""
import argparse,hashlib,json,subprocess,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from pc_compiler import CMAKE,NINJA,environment
ROOT=Path(__file__).resolve().parents[2]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--output',type=Path,required=True);parser.add_argument('--snapshot',type=Path,required=True)
    args=parser.parse_args();folder=args.output.resolve();source=args.snapshot.resolve();base=ROOT/'build/null-pc-tracing'
    if not folder.is_relative_to(ROOT/'build') or folder.exists():raise ValueError('Use a fresh private directory')
    stamp=json.loads((base/'source-stamp.json').read_text())
    for path,digest in stamp.items():
        if sha(ROOT/path)!=digest:raise ValueError('Baseline input changed: '+path)
    edges=[line for line in (base/'build.ninja').read_text().splitlines() if line.startswith('build null_game.exe:')]
    if len(edges)!=1:raise ValueError('Expected one authenticated baseline link edge')
    objects=[base/token for token in edges[0].split() if token.endswith('.obj')]
    if not objects or any(not p.is_file() for p in objects):raise ValueError('Baseline game objects missing')
    folder.mkdir(parents=True)
    wrapper=folder/'semantic_allocations.cpp';wrapper.write_text('#define PLS_ALLOCATION_PROBE 1\n#include "'+(ROOT/'src/kairo/common/semantic_runtime.cpp').as_posix()+'"\n')
    objects=[p for p in objects if not p.name.endswith('null_main.cpp.obj')]
    extra=[ROOT/'src/main/null_main.cpp',ROOT/'src/main/allocation_probe.cpp']
    quote=lambda p:'"'+Path(p).as_posix()+'"'
    includes=[source,ROOT/'src',ROOT/'src/main',ROOT/'src/kairo/api',ROOT/'src/kairo/common',ROOT/'src/kairo/common/generated',ROOT/'src/kairo/platform/sdl',ROOT/'build/generated/mono-collation',ROOT/'build/generated/mono-numberformat']
    cmake='cmake_minimum_required(VERSION 3.20)\nproject(AllocationProbe LANGUAGES CXX)\nset(CMAKE_CXX_STANDARD 17)\nset(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreadedDLL)\nfind_package(freetype CONFIG REQUIRED)\n'
    cmake+='add_executable(allocation_game '+quote(wrapper)+' '+' '.join(map(quote,objects+extra))+')\n'
    cmake+='target_include_directories(allocation_game PRIVATE '+' '.join(map(quote,includes))+')\n'
    cmake+='target_compile_definitions(allocation_game PRIVATE PLS_NULL_BACKEND=1 PLS_TRACING_GC=1 PLS_ALLOCATION_PROBE=1)\n'
    cmake+='target_compile_options(allocation_game PRIVATE /O2 /Zi /bigobj /EHsc /fp:strict /permissive- /utf-8 /we4715)\ntarget_link_options(allocation_game PRIVATE /DEBUG /OPT:REF /OPT:ICF)\n'
    cmake+='target_link_libraries(allocation_game PRIVATE '+quote(base/'null_runtime.lib')+' Freetype::Freetype Psapi Advapi32)\n'
    (folder/'CMakeLists.txt').write_text(cmake)
    inputs=objects+extra+[ROOT/path for path in stamp]+[base/'null_runtime.lib',wrapper,folder/'CMakeLists.txt',base/'source-stamp.json',Path(__file__)]
    before={str(p.relative_to(ROOT)):sha(p) for p in inputs}
    env=environment()
    commands=[[CMAKE,'-S',folder,'-B',folder/'out','-G','Ninja','-DCMAKE_BUILD_TYPE=Release','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_PREFIX_PATH='+str(ROOT/'build/deps/native-media')],[CMAKE,'--build',folder/'out','--parallel','1']]
    with (folder/'build.log').open('wb') as log:
        for command in commands:subprocess.run(list(map(str,command)),env=env,stdout=log,stderr=subprocess.STDOUT,check=True)
    if {str(p.relative_to(ROOT)):sha(p) for p in inputs}!=before:raise ValueError('Probe input changed during compilation; rebuild in a fresh directory')
    report=dict(diagnostic_only=True,game_code_recompiled=False,source_allocation_counters=False,global_new_intercepted=True,inputs=before,executable_sha256=sha(folder/'out/allocation_game.exe'))
    (folder/'build-proof.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(dict(executable=str(folder/'out/allocation_game.exe'),sha256=report['executable_sha256'])))
if __name__=='__main__':main()
