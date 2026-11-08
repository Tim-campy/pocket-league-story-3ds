#include "managed_thread.hpp"
#include <atomic>
#include <chrono>
#include <iostream>
#include <memory>
#include <string>

using namespace pls::cs;
namespace {
int assertions=0;
void check(bool value,const char* message){++assertions;if(!value)throw Exception(message);}
template<class F>void wait(F&& test){int loops=0;while(!test()){if(++loops>3000)throw Exception("Thread GC fixture timeout");Thread::Sleep(1);}}
template<class F>Ref<Thread> make_thread(F&& body){return make_ref<Thread>(ThreadStart::from_static("own-thread-gc",std::forward<F>(body)));}
struct Node:Object {
    Ref<Node> peer;Ref<Thread> thread;
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(peer,visitor);trace_value(thread,visitor);}
    void release_edges()override{peer.reset();thread.reset();}
};
struct TraceBarrier:Object {
    std::atomic<bool>* entered;std::atomic<bool>* allow;std::atomic<bool>* complete;
    TraceBarrier(std::atomic<bool>*e,std::atomic<bool>*a,std::atomic<bool>*c):entered(e),allow(a),complete(c){}
    void trace_edges(const EdgeVisitor&)const override{*entered=true;while(!*allow)std::this_thread::sleep_for(std::chrono::milliseconds(1));*complete=true;}
};
}
int main(){
    try{
        GcMutatorScope host;
        auto node=make_ref<Node>();node->peer=node;std::weak_ptr<Node> weak_node=node;
        auto thread=make_ref<Thread>(ThreadStart::bind(node,"wait",[weak_node]{auto target=weak_node.lock();try{Thread::Sleep(-1);}catch(const ThreadInterruptedException&){}if(!target)throw Exception("Bound target was lost");}));
        node->thread=thread;std::weak_ptr<Thread> weak_thread=thread;node.reset();thread->Start();
        wait([&]{return thread->get_ThreadState()==ThreadState::WaitSleepJoin;});
        gc_collect(0);check(!weak_node.expired(),"Running thread lost target");check(thread->get_IsAlive(),"Sleep worker died during collection");
        thread->Interrupt();thread->Join();check(thread->get_ThreadState()==ThreadState::Stopped,"Worker did not stop after caught interrupt");thread.reset();
        gc_collect(0);check(weak_node.expired(),"Unrooted target/thread cycle survived");check(weak_thread.expired(),"Unrooted Thread delegate cycle survived");
        auto target=make_thread([]{try{Thread::Sleep(-1);}catch(const ThreadInterruptedException&){} });target->Start();
        auto joiner=make_thread([&]{try{target->Join();}catch(const ThreadInterruptedException&){} });joiner->Start();
        wait([&]{return target->get_ThreadState()==ThreadState::WaitSleepJoin && joiner->get_ThreadState()==ThreadState::WaitSleepJoin;});
        gc_collect(0);check(target->get_IsAlive(),"Sleep GC parking failed");check(joiner->get_IsAlive(),"Join GC parking failed");
        joiner->Interrupt();joiner->Join();target->Interrupt();target->Join();check(!joiner->get_IsAlive() && !target->get_IsAlive(),"Interrupted workers leaked");
        std::atomic<int> iterations{0},stop{0};std::atomic<bool> delivered{false};
        auto busy=make_thread([&]{while(stop==0){++iterations;gc_safepoint();}try{Thread::Sleep(0);}catch(const ThreadInterruptedException&){delivered=true;}});busy->Start();
        wait([&]{return iterations>100;});busy->Interrupt();const int before=iterations;wait([&]{return iterations>before+100;});
        check(busy->get_IsAlive(),"Interrupt aborted a running worker");gc_collect(0);check(busy->get_IsAlive(),"Busy cooperative worker failed to park");
        stop=1;busy->Join();check(delivered,"Pending interrupt was not delivered at managed wait");
        std::atomic<bool> collected{false};auto collector=make_thread([&]{auto cycle=make_ref<Node>();cycle->peer=cycle;std::weak_ptr<Node> weak=cycle;cycle.reset();gc_collect(0);collected=weak.expired();});collector->Start();collector->Join();
        check(collected,"Worker collector failed while host was in Join");
        std::atomic<bool> native_entered{false},inner_exited{false},release_native{false},native_reentered{false};
        auto native_worker=make_thread([&]{
            {GcNativeBlockingScope outer;native_entered=true;{GcNativeBlockingScope inner;}inner_exited=true;while(!release_native)std::this_thread::sleep_for(std::chrono::milliseconds(1));}
            native_reentered=true;
        });native_worker->Start();wait([&]{return inner_exited.load();});
        check(native_entered && !native_reentered,"Native scope did not block correctly");
        auto native_cycle=make_ref<Node>();native_cycle->peer=native_cycle;std::weak_ptr<Node> weak_native_cycle=native_cycle;native_cycle.reset();
        gc_collect(0);check(weak_native_cycle.expired(),"Nested native scope exit removed outer GC exemption");
        std::atomic<bool> tracing{false},allow_trace{false},trace_complete{false},gc_done{false};
        auto barrier=make_ref<TraceBarrier>(&tracing,&allow_trace,&trace_complete);
        auto concurrent_collector=make_thread([&]{gc_collect(0);gc_done=true;});concurrent_collector->Start();
        bool reentry_waited=false;
        {
            GcNativeBlockingScope host_native;
            while(!tracing)std::this_thread::sleep_for(std::chrono::milliseconds(1));
            release_native=true;
            // This native wait deliberately exceeds the collector's one-second
            // cooperative timeout. Neither mutator may reenter during tracing.
            std::this_thread::sleep_for(std::chrono::milliseconds(1200));
            reentry_waited=!native_reentered.load();allow_trace=true;
        }
        check(reentry_waited,"Native worker reentered during concurrent GC");
        check(trace_complete,"Host reentered before collector completed its trace");
        native_worker->Join();concurrent_collector->Join();check(native_reentered,"Native worker failed to reenter after GC");check(gc_done,"Concurrent native-blocking collection failed");
        bool denied_collect=false,denied_entry=false,denied_safepoint=false,denied_allocation=false;
        {
            GcNativeBlockingScope native;
            try{gc_collect(0);}catch(const InvalidOperationException&){denied_collect=true;}
            try{GcMutatorScope forbidden;}catch(const InvalidOperationException&){denied_entry=true;}
            try{gc_safepoint();}catch(const InvalidOperationException&){denied_safepoint=true;}
            try{make_ref<Node>();}catch(const InvalidOperationException&){denied_allocation=true;}
        }
        check(denied_collect && denied_entry && denied_safepoint && denied_allocation,"Native scope did not reject managed entry");
        {GcMutatorScope nested_managed;gc_safepoint();}gc_collect(0);check(trace_complete,"Managed execution did not resume after native scope");
        std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<"}\n";
    }catch(const Exception&e){std::cerr<<e.type_name()<<": "<<e.what()<<'\n';return 1;}
}
