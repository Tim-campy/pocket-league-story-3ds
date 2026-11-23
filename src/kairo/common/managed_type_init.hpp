#pragma once
#include "semantic_runtime.hpp"
#include "platform_condition.hpp"
#include <condition_variable>
#include <thread>
#include <unordered_map>
#include <cstdio>
#include <atomic>
#include <string_view>

namespace pls::cs {
template<class F>auto evaluate_type_initializer_field(const char* id,F&& body)->std::invoke_result_t<F>{
    (void)id;try{return body();}catch(...){
#if defined(PLS_DIAGNOSTIC_BUILD)
        std::fprintf(stderr,"PLS_TYPE_INIT_FIELD=%s\n",id);std::fflush(stderr);
#endif
        throw;
    }
}
class TypeInitializationException : public SystemException {
    std::string initializing_type_;
    std::exception_ptr inner_;
public:
    TypeInitializationException(std::string name,std::exception_ptr inner)
        :SystemException(runtime_profile==RuntimeProfile::UnityMono265?
            "An exception was thrown by the type initializer for "+name:
            "The type initializer for '"+name+"' threw an exception."),
         initializing_type_(std::move(name)),inner_(std::move(inner)){}
    const char* type_name()const noexcept override{return "System.TypeInitializationException";}
    const std::string& initializing_type()const noexcept{return initializing_type_;}
    const std::exception_ptr& inner_exception()const noexcept{return inner_;}
};

namespace type_init_detail {
struct Coordinator {
    std::mutex mutex;
    std::condition_variable changed;
    std::unordered_map<std::thread::id,std::thread::id> waits;
};
inline Coordinator& coordinator(){static Coordinator instance;return instance;}
inline bool would_cycle(const Coordinator& engine,std::thread::id waiting,std::thread::id owner){
    for(std::size_t hops=0;hops<=engine.waits.size();++hops){
        if(owner==waiting)return true;
        auto next=engine.waits.find(owner);if(next==engine.waits.end())return false;
        owner=next->second;
    }
    return true;
}
}

// Fast path of one generated type initializer (performance round 2026-11-21).
// The generated cs_init_X() keeps this flag as a constant-initialized local
// (no guard variable) and tests it before calling the slow path; the flag is
// published, with release order, only after the initializer completed.
//
// Reading it costs one plain load: no barrier instruction on the fast path.
// That is sound where a thread that sees the flag also sees the initializer's
// writes without a fence:
//   * x86/x64 (PC): loads are not reordered with older loads (TSO); the signal
//     fence keeps the compiler from hoisting the static-field reads above it.
//   * Nintendo 3DS: every managed thread runs on the application core (checked
//     when each managed thread starts, managed_thread.cpp), so no other core
//     can observe the writes out of order.
// Any other target keeps the acquire load.
// A build can force either path (-DPLS_TYPE_INIT_UNFENCED_READ=0 or 1); the
// type-init test runs the PC build with both (docs/maintaining-game-code.md).
#ifndef PLS_TYPE_INIT_UNFENCED_READ
#if defined(__3DS__) || defined(__x86_64__) || defined(_M_X64) || defined(__i386__) || defined(_M_IX86)
#define PLS_TYPE_INIT_UNFENCED_READ 1
#else
#define PLS_TYPE_INIT_UNFENCED_READ 0
#endif
#endif
#if defined(_MSC_VER)
#define PLS_NOINLINE __declspec(noinline)
#else
#define PLS_NOINLINE __attribute__((noinline))
#endif
inline constexpr const char* type_init_read_path=PLS_TYPE_INIT_UNFENCED_READ?"unfenced":"acquire";
struct TypeInitFlag {
    std::atomic<bool> done{false};
    bool ready()const noexcept{
#if PLS_TYPE_INIT_UNFENCED_READ
        const bool value=done.load(std::memory_order_relaxed);
        std::atomic_signal_fence(std::memory_order_acquire);
        return value;
#else
        return done.load(std::memory_order_acquire);
#endif
    }
};

// One state per generated closed type, not per field. Storage is zeroed before
// any initializer; the generated lambda executes field initializers and the
// explicit cctor in source order. User code runs outside the coordinator lock.
class TypeInitState {
    enum class Status {fresh,running,done,failed};
    Status status_{Status::fresh};
    std::atomic<bool> completed_{false};
    std::thread::id owner_;
    std::exception_ptr failure_;
public:
    TypeInitState()=default;
    TypeInitState(const TypeInitState&)=delete;
    TypeInitState& operator=(const TypeInitState&)=delete;
    template<class F>void run(std::string_view name,TypeInitFlag& flag,F&& action){
        run(name,std::forward<F>(action));
        // Publish the fast path only for a completed initializer (not for a
        // recursive or cyclic access that returned early).
        if(completed_.load(std::memory_order_acquire))flag.done.store(true,std::memory_order_release);
    }
    template<class F>void run(std::string_view name,F&& action){
        // Publish successful initialization only after all initializer writes.
        // Recursion, failure caching and cross-thread cycles keep the slow path.
        if(completed_.load(std::memory_order_acquire))return;
        auto& engine=type_init_detail::coordinator();const auto thread=std::this_thread::get_id();
        std::unique_lock<std::mutex> guard(engine.mutex);
        for(;;){
            if(status_==Status::done)return;
            if(status_==Status::failed)std::rethrow_exception(failure_);
            if(status_==Status::fresh){status_=Status::running;owner_=thread;break;}
            if(owner_==thread)return; // Recursive access observes partial zero/init state.
            // CLI type-init locks avoid cycles between initializers. This does
            // not claim to detect arbitrary user mutex/Join deadlocks.
            if(type_init_detail::would_cycle(engine,thread,owner_))return;
            engine.waits[thread]=owner_;
            // end_native_wait blocks until a running collection ends: release the
            // coordinator mutex first, or other mutators block on it outside a
            // native wait and the collector's rendezvous never completes.
            {GcNativeBlockingScope parked;
            platform_condition_wait(engine.changed,guard,[&]{return status_!=Status::running;});guard.unlock();}
            guard.lock();
            engine.waits.erase(thread);
        }
        guard.unlock();std::exception_ptr failed;
        try{std::forward<F>(action)();}
        catch(...){
            auto inner=std::current_exception();
            try{throw TypeInitializationException(std::string(name),std::move(inner));}
            catch(...){failed=std::current_exception();}
        }
        guard.lock();owner_={};failure_=failed;status_=failed?Status::failed:Status::done;
        if(!failed)completed_.store(true,std::memory_order_release);
        guard.unlock();engine.changed.notify_all();
        if(failed)std::rethrow_exception(failed);
    }
};
} // namespace pls::cs
