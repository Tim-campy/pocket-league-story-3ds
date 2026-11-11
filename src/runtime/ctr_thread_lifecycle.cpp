// Restore C++ thread-local destruction on the pinned libctru/newlib target.
// Its pthread key hooks are absent, so libsupc++ cannot retain TLS destructors.
// All game workers use std::thread; no thread is interrupted for GC here.
#if defined(__3DS__)
#include <cstddef>
#include <cstdlib>
#include <cerrno>

namespace {
struct Destructor {
    void (*function)(void*);
    void* object;
    Destructor* next;
};
// Trivial TLS must not recursively register its own destructor.
thread_local Destructor* destructors = nullptr;
thread_local bool draining = false;

void finish_thread() noexcept {
    if (draining) return;
    draining = true;
    while (destructors) {
        auto* item = destructors;
        destructors = item->next;
        const auto function = item->function;
        void* object = item->object;
        std::free(item);
        function(object);
    }
    draining = false;
}

struct Start {
    void* (*function)(void*);
    void* argument;
};
void* start_thread(void* argument) {
    const Start start = *static_cast<Start*>(argument);
    std::free(argument);
    void* result = start.function(start.argument);
    finish_thread();
    return result;
}
}

extern "C" {
struct __pthread_t;
int __real___syscall_thread_create(__pthread_t**, void* (*)(void*), void*, void*, std::size_t);
[[noreturn]] void __real___syscall_thread_exit(void*);
[[noreturn]] void __real_exit(int);

int __wrap___cxa_thread_atexit(void (*function)(void*), void* object, void*) noexcept {
    // This executable is statically linked: no DSO can unload before its TLS.
    auto* item = static_cast<Destructor*>(std::malloc(sizeof(Destructor)));
    if (!item) return -1; // Preserve the ABI's registration-failure result.
    *item = Destructor{function, object, destructors};
    destructors = item;
    return 0;
}

int __wrap___syscall_thread_create(__pthread_t** thread, void* (*function)(void*),
                                  void* argument, void* stack, std::size_t bytes) {
    auto* start = static_cast<Start*>(std::malloc(sizeof(Start)));
    if (!start) return ENOMEM;
    *start = Start{function, argument};
    const int result = __real___syscall_thread_create(thread, start_thread, start, stack, bytes);
    if (result) std::free(start);
    return result;
}

[[noreturn]] void __wrap___syscall_thread_exit(void* result) {
    finish_thread();
    __real___syscall_thread_exit(result);
}

[[noreturn]] void __wrap_exit(int result) {
    // Main-thread TLS is retired before libc invokes static destructors.
    finish_thread();
    __real_exit(result);
}
}
#endif
