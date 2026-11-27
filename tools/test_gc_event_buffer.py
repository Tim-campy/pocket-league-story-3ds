"""Compile the actual event readers in isolation and check bounds, loss and allocation.

The collection engine is tested separately by tools/test_tracing_gc.py and full.
"""
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]


def definition(source, signature):
    start = source.index(signature)
    opening = source.index('{', start)
    depth = 1
    end = opening + 1
    while depth:
        depth += (source[end] == '{') - (source[end] == '}')
        end += 1
    return source[start:end]


def main():
    sys.path.insert(0, str(ROOT / 'tests/translator'))
    from run_semantic_fixtures import msvc_environment
    header = (ROOT / 'src/kairo/common/semantic_runtime.hpp').read_text(encoding='utf-8')
    bridge = (ROOT / 'src/runtime/managed_gc_bridge.inc').read_text(encoding='utf-8')
    declarations = definition(header, 'enum class GcTrigger') + ';\n' + definition(header, 'struct GcEvent') + ';\n'
    readers = definition(bridge, 'std::vector<GcEvent> gc_events_after(') + '\n' + definition(bridge, 'std::size_t gc_events_after(')
    fixture = r'''
#include <algorithm>
#include <array>
#include <cassert>
#include <cstdint>
#include <cstdlib>
#include <mutex>
#include <new>
#include <vector>
bool forbid_allocation=false;
void* operator new(std::size_t n){if(forbid_allocation)throw std::bad_alloc();if(auto* p=std::malloc(n))return p;throw std::bad_alloc();}
void operator delete(void* p)noexcept{std::free(p);}
void operator delete(void* p,std::size_t)noexcept{std::free(p);}
'''+declarations+r'''
std::mutex gc_event_mutex;
std::array<GcEvent,64> gc_event_ring{};
std::uint64_t gc_event_sequence=0;
'''+readers+r'''
int main(){
    std::array<GcEvent,64> out{};std::uint64_t lost=999;
    forbid_allocation=true;
    assert(gc_events_after(0,out.data(),out.size(),lost)==0&&lost==0);
    for(std::uint64_t n=1;n<=70;++n){auto& e=gc_event_ring[(n-1)%64];e.sequence=n;e.bytes_before=n*100;e.bytes_after=n*90;e.objects_before=n*10;e.objects_after=n*9;}
    gc_event_sequence=70;
    assert(gc_events_after(0,out.data(),out.size(),lost)==64&&lost==6);
    assert(out[0].sequence==7&&out[63].sequence==70&&out[63].bytes_before==7000&&out[63].bytes_after==6300&&out[63].objects_before==700&&out[63].objects_after==630);
    assert(gc_events_after(0,out.data(),3,lost)==3&&lost==67&&out[0].sequence==68&&out[2].sequence==70);
    assert(gc_events_after(68,out.data(),out.size(),lost)==2&&lost==0&&out[0].sequence==69);
    assert(gc_events_after(70,out.data(),out.size(),lost)==0&&lost==0);
    assert(gc_events_after(100,out.data(),out.size(),lost)==0&&lost==0);
    assert(gc_events_after(0,nullptr,64,lost)==0&&lost==70);
    assert(gc_events_after(0,out.data(),0,lost)==0&&lost==70);
    forbid_allocation=false;
    const auto old=gc_events_after(0);
    assert(old.size()==64&&old.front().sequence==7&&old.back().sequence==70);
    const auto count=gc_events_after(0,out.data(),out.size(),lost);
    for(std::size_t i=0;i<count;++i)assert(old[i].sequence==out[i].sequence&&old[i].bytes_after==out[i].bytes_after);
}
'''
    folder = ROOT / 'build/gc-event-buffer'
    folder.mkdir(exist_ok=True)
    source, executable = folder / 'fixture.cpp', folder / 'fixture.exe'
    source.write_text(fixture, encoding='utf-8')
    compiler, env = msvc_environment()
    with (folder / 'compile.log').open('wb') as log:
        subprocess.run([str(compiler), '/nologo', '/std:c++17', '/EHsc', '/O2', '/W4', '/WX',
                        '/Fe:' + str(executable), str(source)], cwd=folder, env=env,
                       stdout=log, stderr=subprocess.STDOUT, check=True)
    for _ in range(5):
        subprocess.run([str(executable)], cwd=folder, env=env, check=True, timeout=15)
    print('PASS: actual readers, five runs; zero allocation, bounds/loss, legacy results preserved')


if __name__ == '__main__':
    main()
