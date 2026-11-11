#include "managed_thread.hpp"
#include "../../src/kairo/platform/sdl/thread_priority.hpp"
#include <atomic>
#include <iostream>
#include <string>

using namespace pls::cs;
namespace {
std::string text(const std::string& s){return s;}
std::string text(const char* s){return s;}
std::string text(bool x){return x?"True":"False";}
std::string text(std::int32_t x){return std::to_string(x);}
template<class F>void row(const std::string&id,F&&work){try{const auto result=work();std::cout<<id<<'\t'<<text(result)<<'\n';}catch(const Exception&e){std::cout<<id<<'\t'<<e.type_name()<<'\n';}}
template<class F>void wait(F&&test){int count=0;while(!test()){if(++count>3000)throw Exception("Probe timeout");Thread::Sleep(1);}}
template<class F>Ref<Thread> make_thread(F&&work){return make_ref<Thread>(ThreadStart::from_static("own-fixture",std::forward<F>(work)));}
}
int main(int argc,char**argv){
    if(argc>1 && std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    pls::sdl::install_thread_priority_backend();
    GcMutatorScope host;
    row("null-ctor",[]{make_ref<Thread>(ThreadStart{});return "unexpected";});
    auto unstarted=make_thread([]{});
    row("unstarted-state",[&]{return static_cast<std::int32_t>(unstarted->get_ThreadState());});row("unstarted-alive",[&]{return unstarted->get_IsAlive();});row("unstarted-priority",[&]{return static_cast<std::int32_t>(unstarted->get_Priority());});
    row("unstarted-join",[&]{return unstarted->Join(0);});row("unstarted-interrupt",[&]{unstarted->Interrupt();return "ok";});
    for(const int p:{-1,0,1,2,3,4,5})row("priority-"+std::to_string(p),[&]{unstarted->set_Priority(static_cast<ThreadPriority>(p));return static_cast<std::int32_t>(unstarted->get_Priority());});
    row("sleep-minus2",[]{Thread::Sleep(-2);return "ok";});row("sleep-zero",[]{Thread::Sleep(0);return "ok";});
    row("current-identity",[]{return Thread::get_CurrentThread()==Thread::get_CurrentThread();});row("current-state",[]{return static_cast<std::int32_t>(Thread::get_CurrentThread()->get_ThreadState());});row("current-alive",[]{return Thread::get_CurrentThread()->get_IsAlive();});
    std::string outcome="not-run";auto first=make_thread([&]{try{Thread::Sleep(0);outcome="normal";}catch(const ThreadInterruptedException&){outcome="interrupted";}});
    first->Interrupt();first->Start();first->Join();row("interrupt-beforestart",[&]{return outcome;});row("stopped-state",[&]{return static_cast<std::int32_t>(first->get_ThreadState());});row("stopped-alive",[&]{return first->get_IsAlive();});row("stopped-join",[&]{return first->Join(0);});row("stopped-interrupt",[&]{first->Interrupt();return "ok";});row("second-start",[&]{first->Start();return "ok";});row("stopped-priority",[&]{return static_cast<std::int32_t>(first->get_Priority());});row("stopped-setpriority",[&]{first->set_Priority(ThreadPriority::Normal);return "ok";});
    std::atomic<int> ready{0},go{0};std::string pending="none";Ref<Thread> worker{};bool same=false;
    worker=make_thread([&]{same=worker==Thread::get_CurrentThread();ready=1;while(go==0){gc_safepoint();std::this_thread::yield();}std::string a="ok",b="ok";try{Thread::Sleep(0);}catch(const ThreadInterruptedException&){a="interrupt";}try{Thread::Sleep(0);}catch(const ThreadInterruptedException&){b="interrupt";}pending=a+","+b;});
    worker->Start();wait([&]{return ready==1;});worker->Interrupt();worker->Interrupt();go=1;worker->Join();row("pending-interrupt",[&]{return pending;});row("worker-currentidentity",[&]{return same;});
    auto sleeping=make_thread([&]{try{Thread::Sleep(-1);outcome="normal";}catch(const ThreadInterruptedException&){outcome="interrupted";}});sleeping->Start();wait([&]{return sleeping->get_ThreadState()==ThreadState::WaitSleepJoin;});row("sleep-state",[&]{return static_cast<std::int32_t>(sleeping->get_ThreadState());});row("sleep-alive",[&]{return sleeping->get_IsAlive();});sleeping->Interrupt();sleeping->Join();row("interrupt-sleep",[&]{return outcome;});
    ready=0;go=0;auto target=make_thread([&]{while(go==0)Thread::Sleep(1);});target->Start();auto joiner=make_thread([&]{try{ready=1;target->Join();outcome="normal";}catch(const ThreadInterruptedException&){outcome="interrupted";}});joiner->Start();wait([&]{return ready==1 && joiner->get_ThreadState()==ThreadState::WaitSleepJoin;});joiner->Interrupt();joiner->Join();go=1;target->Join();row("interrupt-join",[&]{return outcome;});
}
