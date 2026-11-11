#pragma once
#include <cstddef>
#if defined(__3DS__) && defined(PLS_NULL_BACKEND)
#include <array>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <mutex>
namespace pls::diagnostic {
struct ResourceEvent {const char* stage;unsigned id;unsigned long long ns,bytes;};
inline std::array<ResourceEvent,512> resource_events{};
inline std::size_t resource_event_count{},resource_event_dropped{};
struct ResourceAggregate {const char* stage{};unsigned long long count{},ns{},maximum_ns{},bytes{};unsigned maximum_id{};};
inline std::array<ResourceAggregate,32> resource_aggregates{};
inline std::size_t resource_aggregate_count{},resource_aggregate_dropped{};
inline std::mutex resource_event_mutex;
inline std::atomic<unsigned> resource_id{};
inline std::atomic<bool> resource_enabled{false};
inline void enable_resource_events(bool enabled){resource_enabled.store(enabled,std::memory_order_relaxed);}
inline void resource_event(const char* stage,unsigned id,unsigned long long ns,std::size_t bytes){
    std::lock_guard<std::mutex> lock(resource_event_mutex);
    std::size_t slot=0;while(slot<resource_aggregate_count&&std::strcmp(resource_aggregates[slot].stage,stage))++slot;
    if(slot<resource_aggregates.size()){
        if(slot==resource_aggregate_count){resource_aggregates[slot]={};resource_aggregates[slot].stage=stage;++resource_aggregate_count;}
        auto& aggregate=resource_aggregates[slot];++aggregate.count;aggregate.ns+=ns;aggregate.bytes+=bytes;
        if(ns>aggregate.maximum_ns){aggregate.maximum_ns=ns;aggregate.maximum_id=id;}
    }else ++resource_aggregate_dropped;
    if(resource_event_count<resource_events.size())resource_events[resource_event_count++]={stage,id,ns,static_cast<unsigned long long>(bytes)};
    else ++resource_event_dropped;
}
class ResourceTimer {
    using Clock=std::chrono::steady_clock;
    Clock::time_point start_{},previous_{};
    const char* name_;std::size_t bytes_;unsigned id_{};bool enabled_{};
public:
    ResourceTimer(const char* name,std::size_t bytes):name_(name),bytes_(bytes),enabled_(resource_enabled.load(std::memory_order_relaxed)){if(enabled_){start_=previous_=Clock::now();id_=++resource_id;}}
    void step(const char* label){if(!enabled_)return;const auto now=Clock::now();resource_event(label,id_,static_cast<unsigned long long>(std::chrono::duration_cast<std::chrono::nanoseconds>(now-previous_).count()),bytes_);previous_=Clock::now();}
    void finish(){if(enabled_)resource_event(name_,id_,static_cast<unsigned long long>(std::chrono::duration_cast<std::chrono::nanoseconds>(Clock::now()-start_).count()),bytes_);}
};
inline void flush_resource_events(){
    if(!resource_enabled.load(std::memory_order_relaxed))return;
    // Output happens after the measured update/draw and LoadStart's time test.
    // A separate consumer lock permits concurrent callers without large ARM
    // stack frames. Producers never wait for SD I/O under the event lock.
    static std::mutex consumer_mutex;
    static std::array<ResourceEvent,512> snapshot;
    static std::array<ResourceAggregate,32> aggregates;
    std::lock_guard<std::mutex> consumer(consumer_mutex);
    std::size_t count,dropped,aggregate_count,aggregate_dropped;
    {
        std::lock_guard<std::mutex> lock(resource_event_mutex);
        count=resource_event_count;dropped=resource_event_dropped;
        aggregate_count=resource_aggregate_count;aggregate_dropped=resource_aggregate_dropped;
        for(std::size_t i=0;i<count;++i)snapshot[i]=resource_events[i];
        for(std::size_t i=0;i<aggregate_count;++i)aggregates[i]=resource_aggregates[i];
        resource_event_count=resource_event_dropped=resource_aggregate_count=resource_aggregate_dropped=0;
    }
    for(std::size_t i=0;i<count;++i){const auto& e=snapshot[i];std::fprintf(stderr,"PLS_RESOURCE_STAGE={\"stage\":\"%s\",\"id\":%u,\"ns\":%llu,\"bytes\":%llu}\n",e.stage,e.id,e.ns,e.bytes);}
    for(std::size_t i=0;i<aggregate_count;++i){const auto& a=aggregates[i];std::fprintf(stderr,"PLS_RESOURCE_AGGREGATE={\"stage\":\"%s\",\"count\":%llu,\"ns\":%llu,\"maximum_ns\":%llu,\"maximum_id\":%u,\"bytes\":%llu}\n",a.stage,a.count,a.ns,a.maximum_ns,a.maximum_id,a.bytes);}
    if(dropped)std::fprintf(stderr,"PLS_RESOURCE_DROPPED=%llu\n",static_cast<unsigned long long>(dropped));
    if(aggregate_dropped)std::fprintf(stderr,"PLS_RESOURCE_AGGREGATE_DROPPED=%llu\n",static_cast<unsigned long long>(aggregate_dropped));
    if(count||dropped||aggregate_count||aggregate_dropped)std::fflush(stderr);
}
}
#else
namespace pls::diagnostic {
struct ResourceTimer {ResourceTimer(const char*,std::size_t){}void step(const char*){}void finish(){}};
inline void flush_resource_events(){}
inline void enable_resource_events(bool){}
}
#endif
