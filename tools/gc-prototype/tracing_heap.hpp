#pragma once
// Isolated single-mutator prototype. Not linked into the game runtime.
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <map>
#include <vector>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <new>
#include <stdexcept>
#include <algorithm>
#if defined(PROBE_BDWGC)
#include <gc.h>
#endif
namespace probe {
struct Layout {const std::size_t* offsets=nullptr;std::size_t count=0,stride=0,repeat=1;};
struct Block {void* base;std::size_t bytes;Layout layout;bool marked=false;};
class Heap {
    std::map<std::uintptr_t,Block> blocks_;
    std::vector<std::uintptr_t> work_;
    std::vector<void*> roots_; // Explicit fixture roots for std::function/native harness ownership.
    std::size_t bytes_=0,limit_=64*1024*1024;
    void mark(std::uintptr_t value){
        auto it=blocks_.upper_bound(value);if(it==blocks_.begin())return;--it;
        if(value-it->first>=it->second.bytes||it->second.marked)return;
        it->second.marked=true;work_.push_back(it->first);
    }
    void scan(std::uintptr_t begin,std::uintptr_t end){
        begin=(begin+sizeof(void*)-1)&~(sizeof(void*)-1);
        for(;begin+sizeof(void*)<=end;begin+=sizeof(void*)){
            std::uintptr_t word;std::memcpy(&word,reinterpret_cast<void*>(begin),sizeof(word));mark(word);
        }
    }
public:
    std::size_t collections=0,freed=0;
    Heap(){
#if defined(PROBE_BDWGC)
        GC_set_all_interior_pointers(1);GC_INIT();
#endif
    }
    ~Heap(){
#if !defined(PROBE_BDWGC)
        for(auto& row:blocks_)std::free(row.second.base);
#endif
    }
    void* allocate(std::size_t bytes,Layout layout={}){
        if(bytes>limit_-bytes_)throw std::bad_alloc();
#if defined(PROBE_BDWGC)
        void* p=layout.count?GC_MALLOC(bytes):GC_MALLOC_ATOMIC(bytes);
#else
        void* p=std::calloc(1,bytes);
#endif
        if(!p)throw std::bad_alloc();
        try{blocks_.emplace(reinterpret_cast<std::uintptr_t>(p),Block{p,bytes,layout});}
        catch(...){
#if defined(PROBE_BDWGC)
            GC_FREE(p);
#else
            std::free(p);
#endif
            throw;
        }
        bytes_+=bytes;return p;
    }
    void fixture_root(void* p){roots_.push_back(p);
#if defined(PROBE_BDWGC)
        // Register root slots explicitly: STL memory is not scanned by bdwgc.
        // Slots are individually allocated so vector reallocation cannot move them.
        auto slot=static_cast<void**>(GC_MALLOC_UNCOLLECTABLE(sizeof(void*)));*slot=p;bdw_roots.push_back(slot);
#endif
    }
    void clear_fixture_roots(){roots_.clear();
#if defined(PROBE_BDWGC)
        for(auto slot:bdw_roots){*slot=nullptr;GC_FREE(slot);}bdw_roots.clear();
#endif
    }
    bool contains(void* p)const{auto n=reinterpret_cast<std::uintptr_t>(p);auto i=blocks_.upper_bound(n);return i!=blocks_.begin()&&(n-(--i)->first<i->second.bytes);}
    std::size_t live_bytes()const{return bytes_;}
    std::size_t live_blocks()const{return blocks_.size();}
    void limit(std::size_t value){limit_=value;}
    // Caller stack and register snapshot supplied before entering this routine,
    // so collector's own traversal pointers do not become conservative roots.
    __declspec(noinline) void collect_impl(const CONTEXT* registers,std::uintptr_t low,std::uintptr_t high){
#if defined(PROBE_BDWGC)
        GC_gcollect();++collections;return;
#else
        for(auto& row:blocks_)row.second.marked=false;
        work_.clear();for(auto p:roots_)mark(reinterpret_cast<std::uintptr_t>(p));
        if(registers)scan(reinterpret_cast<std::uintptr_t>(registers),reinterpret_cast<std::uintptr_t>(registers)+sizeof(*registers));
        if(low)scan(low,high);
        while(!work_.empty()){
            auto key=work_.back();work_.pop_back();const auto& b=blocks_.at(key);
            for(std::size_t r=0;r<b.layout.repeat;++r)for(std::size_t j=0;j<b.layout.count;++j){
                auto off=r*b.layout.stride+b.layout.offsets[j];
                if(off>b.bytes||b.bytes-off<sizeof(void*))throw std::logic_error("Invalid exact pointer map");
                std::uintptr_t edge;std::memcpy(&edge,static_cast<char*>(b.base)+off,sizeof(edge));mark(edge);
            }
        }
        for(auto it=blocks_.begin();it!=blocks_.end();){
            if(it->second.marked){++it;continue;}
            bytes_-=it->second.bytes;std::free(it->second.base);it=blocks_.erase(it);++freed;
        }
        ++collections;
#endif
    }
    __declspec(noinline) void collect(){
        CONTEXT registers{};RtlCaptureContext(&registers);
        ULONG_PTR bottom,top;GetCurrentThreadStackLimits(&bottom,&top);
        auto low=static_cast<std::uintptr_t>(registers.Rsp);
        if(low<bottom||low>=top)throw std::runtime_error("Stack bounds invalid");
        collect_impl(&registers,low,top);
    }
private:
#if defined(PROBE_BDWGC)
    std::vector<void**> bdw_roots;
#endif
};
inline Heap& heap(){static Heap instance;return instance;}
}
