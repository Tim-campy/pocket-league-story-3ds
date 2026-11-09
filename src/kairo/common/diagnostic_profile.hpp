#pragma once
// Diagnostic-only counters and exclusive wall-clock attribution. Normal builds
// compile the call sites out. Clock/registry overhead is not subtracted.
#include <array>
#include <atomic>
#include <chrono>
#include <cstdint>
#include <exception>
#include <mutex>
#include <ostream>
#include <memory>
#include <string>
#include <vector>
namespace pls::diagnostic {
enum class Area:unsigned {game,kairo,raster,composition};
using Clock=std::chrono::steady_clock;
struct Entry {std::string assembly,id;std::atomic<std::uint64_t> calls{0},completed{0},thrown{0},inclusive{0},exclusive{0};};
inline std::mutex registry_mutex;
inline std::vector<std::unique_ptr<Entry>> registry;
inline std::atomic<bool> enabled{false};
inline Entry* register_method(const char*assembly,const char*id){
    std::lock_guard<std::mutex> lock(registry_mutex);
    for(auto& e:registry)if(e->assembly==assembly&&e->id==id)return e.get();
    auto e=std::make_unique<Entry>();e->assembly=assembly;e->id=id;auto*p=e.get();registry.push_back(std::move(e));return p;
}
struct ThreadState {Area area=Area::kairo;Entry*entry=nullptr;Clock::time_point last=Clock::now();std::array<std::uint64_t,4> ns{};bool frame=false;};
inline thread_local ThreadState state;
inline void charge(Clock::time_point now){auto ns=std::chrono::duration_cast<std::chrono::nanoseconds>(now-state.last).count();if(ns>0){if(state.frame)state.ns[unsigned(state.area)]+=std::uint64_t(ns);if(state.entry)state.entry->exclusive.fetch_add(std::uint64_t(ns),std::memory_order_relaxed);}state.last=now;}
class Scope {
    bool active_;Area previous_;Entry*previous_entry_;Entry*entry_;Clock::time_point start_;int exceptions_;
public:
    Scope(Area area,Entry* entry=nullptr):active_(enabled.load(std::memory_order_relaxed)),previous_(state.area),previous_entry_(state.entry),entry_(entry),exceptions_(std::uncaught_exceptions()){
        if(!active_)return;start_=Clock::now();charge(start_);state.area=area;state.entry=entry;if(entry_)entry_->calls.fetch_add(1,std::memory_order_relaxed);
    }
    ~Scope(){if(!active_)return;const auto now=Clock::now();charge(now);state.area=previous_;state.entry=previous_entry_;if(entry_){entry_->inclusive.fetch_add(std::chrono::duration_cast<std::chrono::nanoseconds>(now-start_).count(),std::memory_order_relaxed);(std::uncaught_exceptions()>exceptions_?entry_->thrown:entry_->completed).fetch_add(1,std::memory_order_relaxed);}}
};
template<class F>decltype(auto) api_call(F&&call){
#if defined(PLS_DIAGNOSTIC_BUILD)
    Scope scope(Area::kairo);
#endif
    return call();
}
inline void begin_frame(){charge(Clock::now());state.ns={};state.frame=true;state.area=Area::kairo;}
inline std::array<std::uint64_t,4>end_frame(){charge(Clock::now());state.frame=false;return state.ns;}
inline void json_string(std::ostream&out,const std::string&s){out<<'"';for(unsigned char c:s){if(c=='"'||c=='\\')out<<'\\'<<c;else if(c<32){const char*h="0123456789abcdef";out<<"\\u00"<<h[c>>4]<<h[c&15];}else out<<c;}out<<'"';}
inline void dump(std::ostream&out){std::lock_guard<std::mutex>lock(registry_mutex);for(auto&e:registry){out<<"PLS_METHOD={\"assembly\":";json_string(out,e->assembly);out<<",\"id\":";json_string(out,e->id);out<<",\"calls\":"<<e->calls<<",\"completed\":"<<e->completed<<",\"thrown\":"<<e->thrown<<",\"inclusive_ns\":"<<e->inclusive<<",\"exclusive_ns\":"<<e->exclusive<<"}\n";}out.flush();}
}
#if defined(PLS_DIAGNOSTIC_BUILD)
#define PLS_METHOD_SCOPE(ASSEMBLY,ID,AREA) static auto*const pls_profile_entry=pls::diagnostic::register_method(ASSEMBLY,ID);pls::diagnostic::Scope pls_profile_scope(pls::diagnostic::Area::AREA,pls_profile_entry)
#define PLS_PROFILE_AREA(AREA) pls::diagnostic::Scope pls_area_scope(pls::diagnostic::Area::AREA)
#else
#define PLS_METHOD_SCOPE(ASSEMBLY,ID,AREA)
#define PLS_PROFILE_AREA(AREA)
#endif
