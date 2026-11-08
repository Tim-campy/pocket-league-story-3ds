#include "managed_thread.hpp"
#include <chrono>
#include <condition_variable>
#include <mutex>
#include <utility>

namespace pls::cs {
namespace {
thread_local Ref<Thread> current_thread;
ThreadPriorityBackend priority_backend;
using Clock = std::chrono::steady_clock;
const auto poll_interval = std::chrono::milliseconds(1);
}
struct Thread::State {
    mutable std::mutex mutex;
    std::condition_variable changed;
    std::mutex join_mutex;
    ThreadStart start;
    std::thread worker;
    ThreadState state=ThreadState::Unstarted;
    ThreadPriority priority=ThreadPriority::Normal;
    bool interrupted=false;
    bool external=false;
    explicit State(ThreadStart delegate):start(std::move(delegate)){}
    ~State(){if(worker.joinable())worker.detach();}
};
void install_thread_priority_backend(ThreadPriorityBackend backend){
    if(!backend.get || !backend.set || !backend.get_current || !backend.set_current)throw ArgumentException();
    priority_backend=std::move(backend);
}
Thread::Thread(ThreadStart start):state_(std::make_shared<State>(std::move(start))){if(state_->start.is_null())throw ArgumentNullException();}
Thread::Thread(ExternalTag):state_(std::make_shared<State>(ThreadStart{})){state_->external=true;state_->state=ThreadState::Running;}
Thread::~Thread()=default;
Ref<Thread> Thread::get_CurrentThread(){
    if(!current_thread){current_thread=Ref<Thread>(new Thread(ExternalTag{}));register_managed_object(current_thread);}
    return current_thread;
}
ThreadState Thread::get_ThreadState()const{std::lock_guard<std::mutex> lock(state_->mutex);return state_->state;}
bool Thread::get_IsAlive()const{const auto state=get_ThreadState();return state!=ThreadState::Unstarted && state!=ThreadState::Stopped;}
ThreadPriority Thread::get_Priority(){
    if(runtime_profile==RuntimeProfile::UnityMono265)return ThreadPriority::Lowest;
    std::lock_guard<std::mutex> lock(state_->mutex);
    if(state_->state==ThreadState::Stopped)throw ThreadStateException();
    if(state_->state==ThreadState::Unstarted)return state_->priority;
    if(state_->external){if(!priority_backend.get_current)throw NotSupportedException("Thread priority backend missing");if(current_thread.get()!=this)throw NotSupportedException("External thread priority access from another worker");return priority_backend.get_current();}
    if(!priority_backend.get)throw NotSupportedException("Thread priority backend missing");
    return priority_backend.get(state_->worker.native_handle());
}
void Thread::set_Priority(ThreadPriority priority){
    if(runtime_profile==RuntimeProfile::UnityMono265)return;
    const auto value=static_cast<std::int32_t>(priority);if(value<0 || value>4)throw ArgumentOutOfRangeException();
    std::lock_guard<std::mutex> lock(state_->mutex);
    if(state_->state==ThreadState::Stopped)throw ThreadStateException();
    if(state_->state!=ThreadState::Unstarted){
        if(state_->external){if(!priority_backend.set_current)throw NotSupportedException("Thread priority backend missing");if(current_thread.get()!=this)throw NotSupportedException("External thread priority access from another worker");priority_backend.set_current(priority);}
        else{if(!priority_backend.set)throw NotSupportedException("Thread priority backend missing");priority_backend.set(state_->worker.native_handle(),priority);}
    }
    state_->priority=priority;
}
void Thread::Start(){
    Ref<Thread> self;
    try{self=std::static_pointer_cast<Thread>(shared_from_this());}catch(const std::bad_weak_ptr&){throw InvalidOperationException("Managed Thread requires make_ref ownership");}
    std::lock_guard<std::mutex> lock(state_->mutex);
    if(state_->state!=ThreadState::Unstarted)throw ThreadStateException();
    if(runtime_profile==RuntimeProfile::DotNet && !priority_backend.set)throw NotSupportedException("Thread priority backend missing");
    state_->state=ThreadState::Running;
    try{
        state_->worker=std::thread([self]{self->entry();});
        if(runtime_profile==RuntimeProfile::DotNet)priority_backend.set(state_->worker.native_handle(),state_->priority);
    }catch(const std::system_error&){state_->state=ThreadState::Unstarted;throw OutOfMemoryException("Native thread creation failed");}
}
void Thread::entry(){
    current_thread=std::static_pointer_cast<Thread>(shared_from_this());
    {
        GcMutatorScope mutator;
        // Start publishes the native handle/priority while holding this mutex.
        {std::lock_guard<std::mutex> lock(state_->mutex);}
        gc_safepoint();
        try{state_->start();}catch(...){std::terminate();}
        current_thread.reset();
    }
    {std::lock_guard<std::mutex> lock(state_->mutex);state_->state=ThreadState::Stopped;}
    state_->changed.notify_all();
}
void Thread::Interrupt(){std::lock_guard<std::mutex> lock(state_->mutex);state_->interrupted=true;state_->changed.notify_all();}
void Thread::check_interrupt(const Ref<Thread>& thread){
    std::lock_guard<std::mutex> lock(thread->state_->mutex);
    if(thread->state_->interrupted){thread->state_->interrupted=false;throw ThreadInterruptedException();}
}
void Thread::Sleep(std::int32_t milliseconds){
    if(milliseconds< -1)throw ArgumentOutOfRangeException();
    const auto self=get_CurrentThread();gc_safepoint();check_interrupt(self);
    if(milliseconds==0){std::this_thread::yield();gc_safepoint();check_interrupt(self);return;}
    const auto deadline=milliseconds<0?Clock::time_point::max():Clock::now()+std::chrono::milliseconds(milliseconds);
    {std::lock_guard<std::mutex> lock(self->state_->mutex);self->state_->state=ThreadState::WaitSleepJoin;}
    try{
        for(;;){
            std::unique_lock<std::mutex> lock(self->state_->mutex);
            if(self->state_->interrupted){self->state_->interrupted=false;throw ThreadInterruptedException();}
            const auto now=Clock::now();if(now>=deadline)break;
            self->state_->changed.wait_until(lock,std::min(deadline,now+poll_interval));lock.unlock();
            gc_safepoint();
        }
    }catch(...){std::lock_guard<std::mutex> lock(self->state_->mutex);self->state_->state=ThreadState::Running;throw;}
    {std::lock_guard<std::mutex> lock(self->state_->mutex);self->state_->state=ThreadState::Running;}
}
void Thread::Join(){(void)Join(-1);}
bool Thread::Join(std::int32_t milliseconds){
    if(milliseconds< -1)throw ArgumentOutOfRangeException();
    {std::lock_guard<std::mutex> lock(state_->mutex);if(state_->state==ThreadState::Unstarted)throw ThreadStateException();}
    const auto self=get_CurrentThread();gc_safepoint();check_interrupt(self);
    const auto deadline=milliseconds<0?Clock::time_point::max():Clock::now()+std::chrono::milliseconds(milliseconds);
    {std::lock_guard<std::mutex> lock(self->state_->mutex);self->state_->state=ThreadState::WaitSleepJoin;}
    bool finished=false;
    try{
        for(;;){
            check_interrupt(self);
            std::unique_lock<std::mutex> lock(state_->mutex);
            if(state_->state==ThreadState::Stopped){finished=true;break;}
            const auto now=Clock::now();if(now>=deadline)break;
            state_->changed.wait_until(lock,std::min(deadline,now+poll_interval));lock.unlock();gc_safepoint();
        }
    }catch(...){std::lock_guard<std::mutex> lock(self->state_->mutex);self->state_->state=ThreadState::Running;throw;}
    {std::lock_guard<std::mutex> lock(self->state_->mutex);self->state_->state=ThreadState::Running;}
    if(finished){std::lock_guard<std::mutex> lock(state_->join_mutex);if(state_->worker.joinable())state_->worker.join();}
    return finished;
}
void Thread::trace_edges(const EdgeVisitor& visitor)const{std::lock_guard<std::mutex> lock(state_->mutex);state_->start.trace_edges(visitor);}
void Thread::release_edges(){std::lock_guard<std::mutex> lock(state_->mutex);state_->start.release_edges();}
} // namespace pls::cs
