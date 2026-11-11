from pathlib import Path
import sys,subprocess,json,hashlib
ROOT=Path(__file__).resolve().parents[2];HERE=ROOT/'build/gc-prototype'
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import CMAKE,NINJA,environment
q=lambda p:'"'+Path(p).as_posix()+'"'
cmake='''cmake_minimum_required(VERSION 3.20)
project(GcPrototype LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreadedDLL)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(enable_threads OFF CACHE BOOL "" FORCE)
set(enable_parallel_mark OFF CACHE BOOL "" FORCE)
set(build_cord OFF CACHE BOOL "" FORCE)
set(enable_docs OFF CACHE BOOL "" FORCE)
'''
cmake+='add_subdirectory('+q(ROOT/'build/deps/bdwgc-8.2.12')+' bdwgc)\n'
for name in ['own','bdw']:
    cmake+=f'add_executable({name} harness.cpp kernels.cpp)\n'
    cmake+=f'target_include_directories({name} PRIVATE '+q(HERE)+' '+q(ROOT/'src/kairo/common')+')\n'
    cmake+=f'target_compile_options({name} PRIVATE /O2 /Zi /bigobj /EHsc /fp:strict /permissive- /utf-8 /we4715)\n'
    cmake+=f'target_link_options({name} PRIVATE /DEBUG /OPT:REF /OPT:ICF /MAP)\n'
    if name=='bdw':cmake+='target_compile_definitions(bdw PRIVATE PROBE_BDWGC=1 GC_NOT_DLL=1)\ntarget_link_libraries(bdw PRIVATE gc)\n'
cmake+='add_executable(heap_test heap_test.cpp)\ntarget_compile_options(heap_test PRIVATE /O2 /Zi /EHsc)\n'
(HERE/'CMakeLists.txt').write_text(cmake)
with (HERE/'build.log').open('wb') as log:
    subprocess.run([str(CMAKE),'-S',str(HERE),'-B',str(HERE/'out'),'-G','Ninja','-DCMAKE_BUILD_TYPE=Release','-DCMAKE_MAKE_PROGRAM='+str(NINJA)],env=environment(),stdout=log,stderr=subprocess.STDOUT,check=True)
    subprocess.run([str(CMAKE),'--build',str(HERE/'out'),'--parallel','1'],env=environment(),stdout=log,stderr=subprocess.STDOUT,check=True)
print('Build complete')
