#pragma once
#include <atomic>
#include <chrono>
#include <cstdint>
namespace pls::allocation_probe {
struct Snapshot{std::uint64_t allocations{},bytes{},collections{},collection_ns{},longest_collection_ns{};};
#if defined(PLS_ALLOCATION_PROBE)
inline std::atomic<bool> enabled{false};
inline std::atomic<std::uint64_t> allocations{},bytes{},collections{},collection_ns{},longest_collection_ns{};
inline void allocated(std::size_t n){if(enabled.load(std::memory_order_relaxed)){allocations.fetch_add(1,std::memory_order_relaxed);bytes.fetch_add(n,std::memory_order_relaxed);}}
inline Snapshot snapshot(){return {allocations.load(),bytes.load(),collections.load(),collection_ns.load(),longest_collection_ns.load()};}
class Collection {
    bool active_=enabled.load();std::chrono::steady_clock::time_point start_=std::chrono::steady_clock::now();
public:~Collection(){if(!active_)return;const auto ns=std::uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now()-start_).count());collections.fetch_add(1);collection_ns.fetch_add(ns);auto old=longest_collection_ns.load();while(old<ns&&!longest_collection_ns.compare_exchange_weak(old,ns)){}}
};
#else
inline Snapshot snapshot(){return {};}
class Collection {};
#endif
}
