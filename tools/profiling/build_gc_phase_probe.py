"""Relink an optional collector-phase probe using already compiled game objects.

This is an instrumented diagnosis, never the uninstrumented CPU benchmark.
Only the native semantic-runtime translation unit is recompiled.
"""
import argparse,hashlib,json,re,subprocess,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from pc_compiler import CMAKE,NINJA,environment
ROOT=Path(__file__).resolve().parents[2]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--output',type=Path,required=True);parser.add_argument('--snapshot',type=Path,required=True)
    parser.add_argument('--inventory-dynamic',action='store_true',help='Count dynamic-buffer descriptors outside timed frames')
    parser.add_argument('--runtime-source',type=Path,help='Private collector candidate under build/, no product source replacement')
    parser.add_argument('--pause-only',action='store_true',help='Record existing total-pause clock after collection, without per-lookup timers')
    parser.add_argument('--phase-timers-only',action='store_true',help='Time collector phases without inserting a clock at every address lookup')
    parser.add_argument('--frozen-base-proof',type=Path,help='Existing proof binding old object/library/stamp hashes; validate all recompiled header dependencies')
    args=parser.parse_args();folder=args.output.resolve();source=args.snapshot.resolve();base=ROOT/'build/null-pc-tracing'
    if not folder.is_relative_to(ROOT/'build') or folder.exists():raise ValueError('Use a fresh private directory')
    stamp=json.loads((base/'source-stamp.json').read_text())
    if not args.frozen_base_proof:
        for path,digest in stamp.items():
            if path.replace('\\','/')=='src/runtime/tracing_gc.cpp':continue # replaced by the phase-enabled object below
            if sha(ROOT/path)!=digest:raise ValueError('Baseline input changed: '+path)
    edges=[line for line in (base/'build.ninja').read_text().splitlines() if line.startswith('build null_game.exe:')]
    if len(edges)!=1:raise ValueError('Expected one authenticated baseline link edge')
    objects=[base/token for token in edges[0].split() if token.endswith('.obj')]
    if not objects or any(not p.is_file() for p in objects):raise ValueError('Baseline game objects missing')
    frozen={}
    if args.frozen_base_proof:
        frozen={p.replace('\\','/'):h for p,h in json.loads(args.frozen_base_proof.read_text())['inputs'].items()}
        for path in objects+[base/'null_runtime.lib',base/'source-stamp.json']:
            if frozen.get(path.relative_to(ROOT).as_posix())!=sha(path):raise ValueError('Frozen link input differs: '+str(path))
    candidate=args.runtime_source.resolve() if args.runtime_source else ROOT/'src/runtime/tracing_gc.cpp'
    if args.runtime_source and not candidate.is_relative_to(ROOT/'build'):raise ValueError('Experimental collector must remain under build/')
    folder.mkdir(parents=True)
    original_candidate=candidate
    if args.phase_timers_only:
        if args.pause_only:raise ValueError('Choose phase timing or total-pause timing')
        contents=candidate.read_text()
        if contents.count('LookupProbe lookup_probe;')!=2:raise ValueError('Unexpected lookup instrumentation sites')
        contents=contents.replace('LookupProbe lookup_probe;','/* Lookup clocks deliberately disabled for phase attribution. */')
        begin=contents.index('    void account_retained(')
        end=contents.index('    Thread& current()',begin)
        account=contents[begin:end].replace('#if defined(PLS_GC_PHASE_PROFILE)','#if 0 // Detailed accounting probes excluded from phase-only measurement')
        contents=contents[:begin]+account+contents[end:]
        def relocate_phase(match):
            path=original_candidate.parent/match[1]
            if not path.is_file():path=ROOT/'src/runtime'/match[1]
            if not path.is_file():raise ValueError('Unresolved collector include: '+match[1])
            return '#include "'+path.resolve().as_posix()+'"'
        contents=re.sub(r'^#include "([^\"]+)"',relocate_phase,contents,flags=re.M)
        candidate=folder/'gc_phase_candidate.cpp';candidate.write_text(contents)
    if args.pause_only:
        contents=candidate.read_text()
        anchor='s.stats.interval_max_pause_ns=std::max(s.stats.interval_max_pause_ns,s.stats.last_pause_ns);'
        if contents.count(anchor)!=1:raise ValueError('Expected one existing final pause clock')
        recorder=r'''
#include <cstdio>
namespace {
struct PrivatePauseRecorder {
    struct Row { unsigned long long ns, before, after, objects; } rows[512]{};
    unsigned count=0, dropped=0;
    void record(unsigned long long ns,unsigned long long before,unsigned long long after,unsigned long long objects) noexcept {
        if(count<512)rows[count++]={ns,before,after,objects};else ++dropped;
    }
    ~PrivatePauseRecorder(){
        for(unsigned i=0;i<count;++i){const auto&r=rows[i];
            std::fprintf(stderr,"PLS_GC_PAUSE={\"pause_ns\":%llu,\"retained_before\":%llu,\"retained_after\":%llu,\"objects_after\":%llu}\n",r.ns,r.before,r.after,r.objects);
        }
        std::fprintf(stderr,"PLS_GC_PAUSE_DROPPED=%u\n",dropped);
    }
} private_pause_recorder;
}
'''
        # Only called under the existing heap lock, after its existing pause
        # timer. No per-object clocks, allocation or I/O inside collection.
        contents=recorder+contents.replace(anchor,anchor+'\n        private_pause_recorder.record(s.stats.last_pause_ns,bytes_before,s.stats.bytes,s.stats.objects);')
        candidate=folder/'gc_pause_candidate.cpp'
        def relocate_gc(match):
            path=original_candidate.parent/match[1]
            if not path.is_file():path=ROOT/'src/runtime'/match[1]
            if not path.is_file():raise ValueError('Unresolved collector include: '+match[1])
            return '#include "'+path.resolve().as_posix()+'"'
        contents=re.sub(r'^#include "([^"]+)"',relocate_gc,contents,flags=re.M)
        candidate.write_text(contents)
    semantic=ROOT/'src/kairo/common/semantic_runtime.cpp'
    text=semantic.read_text()
    def relocate(match):
        target=(semantic.parent/match[1]).resolve()
        if target==ROOT/'src/runtime/tracing_gc.cpp':target=candidate
        if not target.is_file():raise ValueError('Unresolved runtime include: '+match[1])
        return '#include "'+target.as_posix()+'"'
    text=re.sub(r'^#include "([^"]+)"',relocate,text,flags=re.M)
    wrapper=folder/'semantic_profile.cpp';wrapper.write_text(('' if args.pause_only else '#define PLS_GC_PHASE_PROFILE 1\n')+text)
    extra=[]
    if args.inventory_dynamic:
        host=ROOT/'src/main/null_main.cpp';text=host.read_text()
        anchor='gc_measurement("after_window");'
        if text.count(anchor)!=1:raise ValueError('Expected one final diagnostic memory report')
        inventory=r'''{
            std::map<std::string,std::size_t> dynamic_types;
            pls::cs::tracing_heap().inspect([&](void* object,std::size_t,const pls::gc::Descriptor& d){
                if(!d.stable_ranges&&(d.ranges||d.retained_ranges)&&d.managed_base){
                    auto base=static_cast<pls::cs::Object*>(d.managed_base(object));
                    ++dynamic_types[typeid(*base).name()];
                }
            });
            for(const auto& row:dynamic_types)std::fprintf(stderr,"PLS_GC_DYNAMIC_TYPE=%zu:%s\n",row.second,row.first.c_str());
        }'''
        private=folder/'inventory_main.cpp';private.write_text('#include <map>\n#include <typeinfo>\n'+text.replace(anchor,anchor+inventory))
        objects=[p for p in objects if not p.name.endswith('null_main.cpp.obj')]
        extra=[private]
    quote=lambda p:'"'+Path(p).as_posix()+'"'
    includes=[source,ROOT/'src',ROOT/'src/main',ROOT/'src/kairo/api',ROOT/'src/kairo/common',ROOT/'src/kairo/common/generated',ROOT/'src/kairo/platform/sdl',ROOT/'build/generated/mono-collation',ROOT/'build/generated/mono-numberformat']
    includes.append(ROOT/'src/runtime')
    dependencies=set()
    def visit(path):
        if path in dependencies:return
        dependencies.add(path)
        for name in re.findall(r'^\s*#\s*include\s+"([^"]+)"',path.read_text(encoding='utf8'),re.M):
            choices=[(path.parent/name).resolve()]+[(directory/name).resolve() for directory in includes]
            found=next((p for p in choices if p.is_file()),None)
            if found is None:raise ValueError('Unresolved transitive include: '+name)
            visit(found)
    visit(wrapper)
    if args.frozen_base_proof:
        expected={p.replace('\\','/'):h for p,h in stamp.items()}
        for path in dependencies|{semantic}:
            if path in {wrapper,candidate}:continue
            key=path.relative_to(ROOT).as_posix()
            if expected.get(key)!=sha(path):raise ValueError('Recompiled dependency differs from frozen ABI/source: '+key)
    cmake='cmake_minimum_required(VERSION 3.20)\nproject(GcPhaseProbe LANGUAGES CXX)\nset(CMAKE_CXX_STANDARD 17)\nset(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreadedDLL)\nfind_package(freetype CONFIG REQUIRED)\n'
    cmake+='add_executable(gc_phase_game '+quote(wrapper)+' '+' '.join(map(quote,objects+extra))+')\n'
    cmake+='target_include_directories(gc_phase_game PRIVATE '+' '.join(map(quote,includes))+')\n'
    cmake+='target_compile_definitions(gc_phase_game PRIVATE PLS_NULL_BACKEND=1 PLS_TRACING_GC=1)\n'
    cmake+='target_compile_options(gc_phase_game PRIVATE /O2 /Zi /bigobj /EHsc /fp:strict /permissive- /utf-8 /we4715)\ntarget_link_options(gc_phase_game PRIVATE /DEBUG /OPT:REF /OPT:ICF)\n'
    cmake+='target_link_libraries(gc_phase_game PRIVATE '+quote(base/'null_runtime.lib')+' Freetype::Freetype Psapi Advapi32)\n'
    (folder/'CMakeLists.txt').write_text(cmake)
    inputs=objects+extra+list(dependencies)+[original_candidate,semantic,base/'null_runtime.lib',wrapper,folder/'CMakeLists.txt',base/'source-stamp.json',Path(__file__)]
    if args.frozen_base_proof:inputs.append(args.frozen_base_proof.resolve())
    before={str(p.relative_to(ROOT)):sha(p) for p in inputs}
    env=environment()
    commands=[[CMAKE,'-S',folder,'-B',folder/'out','-G','Ninja','-DCMAKE_BUILD_TYPE=Release','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_PREFIX_PATH='+str(ROOT/'build/deps/native-media')],[CMAKE,'--build',folder/'out','--parallel','1']]
    with (folder/'build.log').open('wb') as log:
        for command in commands:subprocess.run(list(map(str,command)),env=env,stdout=log,stderr=subprocess.STDOUT,check=True)
    if {str(p.relative_to(ROOT)):sha(p) for p in inputs}!=before:raise ValueError('Probe input changed during compilation; rebuild in a fresh directory')
    report=dict(diagnostic_only=True,pause_only=args.pause_only,phase_timers_only=args.phase_timers_only,game_code_recompiled=False,inputs=before,executable_sha256=sha(folder/'out/gc_phase_game.exe'))
    (folder/'build-proof.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(dict(executable=str(folder/'out/gc_phase_game.exe'),sha256=report['executable_sha256'])))
if __name__=='__main__':main()
