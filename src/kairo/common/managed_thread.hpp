#pragma once
#include "semantic_runtime.hpp"
#include <thread>

namespace pls::cs {
class ThreadStateException : public SystemException {
public:using SystemException::SystemException;
    const char* type_name()const noexcept override{return "System.Threading.ThreadStateException";}
};
class ThreadInterruptedException : public SystemException {
public:using SystemException::SystemException;
    const char* type_name()const noexcept override{return "System.Threading.ThreadInterruptedException";}
};
enum class ThreadPriority : std::int32_t {Lowest=0,BelowNormal=1,Normal=2,AboveNormal=3,Highest=4};
enum class ThreadState : std::int32_t {Running=0,StopRequested=1,SuspendRequested=2,Background=4,Unstarted=8,Stopped=16,WaitSleepJoin=32,Suspended=64,AbortRequested=128,Aborted=256};
using ThreadStart = Delegate<void()>;

// Only the modern contrast profile uses scheduling hooks. Mono 2.6's public
// Priority property is genuinely Lowest/no-op, confirmed by own oracle fixtures.
struct ThreadPriorityBackend {
    std::function<ThreadPriority(std::thread::native_handle_type)> get;
    std::function<void(std::thread::native_handle_type,ThreadPriority)> set;
    std::function<ThreadPriority()> get_current;
    std::function<void(ThreadPriority)> set_current;
};
void install_thread_priority_backend(ThreadPriorityBackend backend);

class Thread final : public Object {
    struct State;
    std::shared_ptr<State> state_;
    struct ExternalTag {};
    static void check_interrupt(const Ref<Thread>& thread);
    void entry();
public:
    explicit Thread(ExternalTag); // Private tag; allocation goes through the typed factory.
    explicit Thread(ThreadStart start);
    ~Thread() override;
    std::string managed_type_name()const override{return "System.Threading.Thread";}
    static Ref<Thread> get_CurrentThread();
    ThreadState get_ThreadState()const;
    bool get_IsAlive()const;
    ThreadPriority get_Priority();
    void set_Priority(ThreadPriority priority);
    void Start();
    void Interrupt();
    void Join();
    bool Join(std::int32_t milliseconds_timeout);
    static void Sleep(std::int32_t milliseconds_timeout);
    void trace_edges(const EdgeVisitor& visitor)const override;
    void release_edges()override;
};
} // namespace pls::cs
