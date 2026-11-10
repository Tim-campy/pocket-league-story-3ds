// Own synchronization fixture; contains no game content.
#include "platform_condition.hpp"
#include <thread>
#include <mutex>
#include <cstdio>
#if defined(__3DS__)
#include <3ds.h>
#endif
int main(){
#if defined(__3DS__)
    if(!std::freopen("sdmc:/pls-benchmark/platform-wait.log","w",stdout))return 2;
#endif
    for(int round=0;round<100;++round){
        std::mutex mutex;std::condition_variable condition;
        int ready=0,done=0;bool go=false;
        auto work=[&]{std::unique_lock<std::mutex>lock(mutex);++ready;condition.notify_all();
            pls::cs::platform_condition_wait(condition,lock,[&]{return go;});++done;condition.notify_all();};
        std::thread a(work),b(work);
        {std::unique_lock<std::mutex>lock(mutex);
            if(!condition.wait_for(lock,std::chrono::seconds(2),[&]{return ready==2;}))std::abort();
            go=true;condition.notify_all();
            if(!condition.wait_for(lock,std::chrono::seconds(2),[&]{return done==2;}))std::abort();}
        a.join();b.join();
        std::packaged_task<int()> task([]{return 42;});auto future=task.get_future();
        std::thread worker(std::move(task));pls::cs::platform_future_wait(future);
        const auto result=future.get();worker.join();if(result!=42)return 3;
        std::printf("PASS %d\n",round);std::fflush(stdout);
    }
    std::puts("ALL_PASS");std::fflush(stdout);return 0;
}
