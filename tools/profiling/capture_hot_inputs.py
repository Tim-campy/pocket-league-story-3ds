"""Generate a private capture-only variant from the authenticated diagnostic snapshot.

Only entry probes and host window selection are added. Canonical generated game
files are never modified. Captured values stay under build/, never in the repo.
"""
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from pc_compiler import CMAKE,NINJA,environment
from build_pc import validate_diagnostic_manifest

ROOT=Path(__file__).resolve().parents[2]


def field(id):return 'cs_'+hashlib.sha256(('F:'+id).encode()).hexdigest()[:16]


def main():
    source=ROOT/'build/game-diagnostic-runtime-consolidated-20261110'
    validate_diagnostic_manifest(source)
    folder=ROOT/'build/hot-input-capture';generated=folder/'generated';generated.mkdir(parents=True,exist_ok=True)
    output=folder/'inputs';output.mkdir(exist_ok=True)
    report=json.loads((ROOT/'config/phase2-game-translation.json').read_text())
    methods={m['cpp_name']:m for m in report['emitted_methods']}
    selected=['cs_ce67d59af0bdb552','cs_440a39169e42578b','cs_885d2f23113de984','cs_75873ce2f7c043dd','cs_e2cc7be9866cb657']
    bodies={
        selected[0]:'put(o,v_screen_pos);put(o,v_camera_pos);put(o,cs_9bf7f8f14a7b18c8());put(o,cs_0b895d788cf303f2());put(o,cs_56196b1ca040e8ab());put(o,cs_011e7ba02b8a8647());auto camera=cs_026b8db91320700d();put(o,camera->cs_5940b7db44d7fcc3);put(o,camera->cs_3f971496b3e90e07);',
        selected[1]:'put(o,v_data);put(o,v_cx);put(o,v_cy);put(o,v_muliti_param);put(o,cs_ad318f24aaa1750d());put(o,cs_4f935210abbc9091());put(o,cs_3618bfacb06c987c());',
        selected[2]:'put(o,v_data);put(o,v_cx);put(o,v_cy);put(o,v_div);put(o,cs_ad318f24aaa1750d());put(o,cs_this->'+field('game.Team.CEVA_PASSER_MP2')+');put(o,cs_4f935210abbc9091());put(o,cs_3618bfacb06c987c());',
        selected[3]:''.join('put(o,v_'+p['name']+');'for p in methods[selected[3]]['parameters']),
        selected[4]:''.join('put(o,v_'+p['name']+');'for p in methods[selected[4]]['parameters'])+''.join('put(o,cs_this->'+field('main.AppData.'+f)+');' for f in ['gameObjectPoolIndex_','gameObjectPool_','zsortObjectCount_','zsortObjects_','zsortObjectStart_','zsortObjectLast_'])}
    changed=[];hits={name:0 for name in selected}
    for path in source.iterdir():
        if path.suffix not in ('.cpp','.hpp','.inc'):continue
        text=path.read_text(encoding='utf8');old=text
        for index,name in enumerate(selected):
            marker='PLS_METHOD_SCOPE("Assembly-CSharp",'+json.dumps(methods[name]['id'])+',game);'
            if marker in text:
                hits[name]+=text.count(marker)
                probe='pls_capture::record('+str(index)+',[&](std::ostream&o){using pls_capture::put;'+bodies[name]+'});'
                text=text.replace(marker,marker+'\n'+probe)
        if text!=old:
            changed.append(path.name)
        (generated/path.name).write_text(text,encoding='utf8')
    if any(n!=1 for n in hits.values()):raise ValueError('Non-unique method entry capture: '+str(hits))
    affected=[]
    for path in generated.glob('*.cpp'):
        text=path.read_text()
        if path.name in changed or any(name in text for name in changed):
            affected.append(path)
            path.write_text('#include "hot_capture.hpp"\n'+text)
    header=r'''#pragma once
#include "semantic_runtime.hpp"
#include <fstream>
#include <atomic>
#include <mutex>
namespace pls_capture {
inline std::atomic<bool> enabled{false};inline std::mutex gate;inline unsigned counts[5]{};
inline void put(std::ostream&o,std::int32_t v){o.write(reinterpret_cast<const char*>(&v),4);}
inline void put(std::ostream&o,float v){static_assert(sizeof(v)==4);o.write(reinterpret_cast<const char*>(&v),4);}
inline void put(std::ostream&o,bool v){put(o,std::int32_t(v));}
template<class T>void put(std::ostream&o,const pls::cs::Array<T>&v){if(v.is_null()){put(o,std::int32_t(-1));return;}put(o,v.length());for(int i=0;i<v.length();++i)put(o,v.at(i));}
template<class F>void record(unsigned kind,F&&write){if(!enabled.load())return;std::lock_guard<std::mutex>lock(gate);if(counts[kind]>=16)return;
std::ofstream o("OUTPUT/"+std::to_string(kind)+"-"+std::to_string(counts[kind]++)+".bin",std::ios::binary);write(o);if(!o)throw std::runtime_error("Input capture failed");}
}
'''.replace('OUTPUT',output.as_posix())
    (folder/'hot_capture.hpp').write_text(header)
    host=(ROOT/'src/main/null_main.cpp').read_text()
    needle='const auto before=pls::allocation_probe::snapshot();'
    if host.count(needle)!=1:raise ValueError('Host window marker differs')
    host=host.replace(needle,'pls_capture::enabled.store(completed+1>=1201&&completed+1<=1500);'+needle)
    (folder/'host.cpp').write_text('#include "hot_capture.hpp"\n'+host)
    link_lines=[line for line in (ROOT/'build/null-pc/build.ninja').read_text().splitlines() if line.startswith('build null_game.exe:')]
    if len(link_lines)!=1:raise ValueError('Baseline link edge is not unique')
    objects=[ROOT/'build/null-pc'/token for token in link_lines[0].split() if token.endswith('.obj')]
    if any(not p.is_file() for p in objects):raise ValueError('Baseline link object absent')
    excluded={p.name+'.obj' for p in affected}|{'null_main.cpp.obj'}
    objects=[p for p in objects if p.name not in excluded]
    if not objects:raise ValueError('Baseline compiled objects absent')
    quote=lambda p:'"'+Path(p).as_posix()+'"'
    includes=[folder,generated,ROOT/'src',ROOT/'src/main',ROOT/'src/kairo/api',ROOT/'src/kairo/common',ROOT/'src/kairo/common/generated',ROOT/'src/kairo/platform/sdl']
    cmake='cmake_minimum_required(VERSION 3.20)\nproject(CaptureHotInputs LANGUAGES CXX)\nset(CMAKE_CXX_STANDARD 17)\nset(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreadedDLL)\nfind_package(freetype CONFIG REQUIRED)\n'
    cmake+='add_executable(capture_game '+quote(folder/'host.cpp')+' '+' '.join(map(quote,affected+objects))+')\n'
    cmake+='target_include_directories(capture_game PRIVATE '+' '.join(map(quote,includes))+')\n'
    cmake+='target_compile_definitions(capture_game PRIVATE PLS_NULL_BACKEND=1)\ntarget_compile_options(capture_game PRIVATE /O2 /Zi /bigobj /EHsc /fp:strict /permissive- /utf-8 /we4715)\ntarget_link_options(capture_game PRIVATE /DEBUG /OPT:REF /OPT:ICF)\n'
    cmake+='target_link_libraries(capture_game PRIVATE '+quote(ROOT/'build/null-pc/null_runtime.lib')+' Freetype::Freetype Psapi Advapi32)\n'
    (folder/'CMakeLists.txt').write_text(cmake)
    proof=dict(operation='private-entry-input-capture',methods=[methods[n]['id']for n in selected],window=[1201,1500],max_per_method=16,changed_units=[p.name for p in affected],
        inputs={str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest()for p in source.iterdir()if p.suffix in ['.cpp','.inc','.hpp']},timing_valid=False)
    (folder/'proof.json').write_text(json.dumps(proof,indent=2)+'\n')
    env=environment()
    with (folder/'build.log').open('wb')as log:
        subprocess.run([str(CMAKE),'-S',str(folder),'-B',str(folder/'out'),'-G','Ninja','-DCMAKE_BUILD_TYPE=Release','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_PREFIX_PATH='+str(ROOT/'build/deps/native-media')],env=env,stdout=log,stderr=subprocess.STDOUT,check=True)
        subprocess.run([str(CMAKE),'--build',str(folder/'out'),'--parallel','1'],env=env,stdout=log,stderr=subprocess.STDOUT,check=True)
    print(json.dumps(dict(changed_units=proof['changed_units'],output=str(folder/'out/capture_game.exe'))))


if __name__=='__main__':main()
