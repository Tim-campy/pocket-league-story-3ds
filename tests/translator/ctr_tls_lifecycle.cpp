// Own asset-free regression for the target's missing pthread TLS-key hooks.
#include <3ds.h>
#include <pthread.h>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <thread>
namespace {
std::atomic<int> constructed{0}, destroyed{0}, order_errors{0};
int checks=0, failures=0;
thread_local int order=0;
struct Marker {
    int number;
    explicit Marker(int value):number(value){++constructed;}
    ~Marker(){
        if ((number==2 && order!=0)||(number==1 && order!=2)) ++order_errors;
        order=number;
        ++destroyed;
    }
};
void touch(){thread_local Marker first(1);thread_local Marker second(2);}
void check(bool result){++checks;if(!result)++failures;}
void report(){
    check(constructed.load()==10);check(destroyed.load()==10);check(order_errors.load()==0);
    std::printf("{\"status\":\"%s\",\"checks\":%d,\"constructed\":%d,\"destroyed\":%d,\"lifo_errors\":%d}\n",
        failures?"FAIL":"PASS",checks,constructed.load(),destroyed.load(),order_errors.load());
    std::fflush(stdout);
}
}
int main(){
    if(!std::freopen("sdmc:/tls-probe.log","w",stdout))return 2;
    std::thread normal([]{touch();});normal.join();
    check(constructed.load()==2);check(destroyed.load()==2);check(order_errors.load()==0);
    std::thread explicit_exit([]{touch();pthread_exit(nullptr);});explicit_exit.join();
    check(constructed.load()==4);check(destroyed.load()==4);check(order_errors.load()==0);
    std::thread first([]{touch();std::this_thread::sleep_for(std::chrono::milliseconds(1));});
    std::thread second([]{touch();std::this_thread::sleep_for(std::chrono::milliseconds(1));});
    first.join();second.join();
    check(constructed.load()==8);check(destroyed.load()==8);check(order_errors.load()==0);
    touch();check(constructed.load()==10);check(destroyed.load()==8);
    std::atexit(report);
    return 0;
}
