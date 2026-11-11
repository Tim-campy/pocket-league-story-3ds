#include "application.hpp"
#include <atomic>
#include <iostream>
using namespace pls;
struct Value:cs::Object{int value;explicit Value(int n):value(n){}};
class App:public kairo::IApplication {
    void OnUpdate()override{}void OnDraw()override{}
public:cs::Ref<kairo::FormManagerBase>GetFormManager()override{return {};}
};
int main(){
    cs::GcMutatorScope host;auto app=cs::make_ref<App>();app->source_Init(app);
    app->host_initialization({[]{},[]{}});app->host_start();
    int assertions=0;auto check=[&](bool passed){if(!passed)throw cs::InvalidOperationException("UI/GC fixture failed");++assertions;};
    auto worker=[&](auto action){
        std::atomic<bool> complete{false};std::exception_ptr error;
        std::thread thread([&]{try{cs::GcMutatorScope active;action();}catch(...){error=std::current_exception();}complete.store(true);});
        const auto start=std::chrono::steady_clock::now();
        while(!complete.load()){cs::gc_safepoint();app->host_update();std::this_thread::yield();if(std::chrono::steady_clock::now()-start>std::chrono::seconds(5))std::terminate();}
        thread.join();if(error)std::rethrow_exception(error);
    };
    for(int i=0;i<8;++i){
        bool called=false;
        worker([&]{app->RunOnUiThread(cs::Delegate<void()>::from_static("own-ui-void",[&]{called=app->CheckUiThread();cs::gc_collect();}),true);});
        check(called);
        cs::Ref<cs::Object> result{};
        worker([&]{result=app->RunOnUiThread(kairo::IApplication::UIMethod::from_static("own-ui-object",[&]()->cs::Ref<cs::Object>{auto value=cs::make_ref<Value>(37);cs::gc_collect();return value;}),true);});
        check(cs::dynamic_pointer_cast<Value>(result)->value==37);
        bool caught=false,reentered=false;
        worker([&]{try{app->RunOnUiThread(cs::Delegate<void()>::from_static("own-ui-error",[]{throw cs::IOException("own-ui-error");}),true);}catch(const cs::IOException&e){caught=std::string(e.what())=="own-ui-error";}reentered=bool(cs::make_ref<Value>(1));});
        check(caught&&reentered);
    }
    check(kairo::IApplication::GetCurrentApp()==app);
    std::atomic<bool> reading{false},finish_reading{false},bad_identity{false};
    std::atomic<std::size_t> reads{0};
    std::thread reader([&]{cs::GcMutatorScope active;
        while(!finish_reading.load()){
            auto loaded=kairo::IApplication::GetCurrentApp();
            if(loaded&&loaded!=app)bad_identity=true;
            ++reads;reading=true;cs::gc_safepoint();
        }
    });
    while(!reading.load()){cs::gc_safepoint();std::this_thread::yield();}
    for(int i=0;i<10000;++i){app->source_Init(nullptr);app->source_Init(app);}
    finish_reading=true;reader.join();check(reads.load()!=0&&!bad_identity.load());
    bool held_identity=false,observed_clear=false;
    worker([&]{auto held=kairo::IApplication::GetCurrentApp();
        app->RunOnUiThread(cs::Delegate<void()>::from_static("own-ui-stop",[&]{app->host_stop();cs::gc_collect();}),true);
        held_identity=held==app&&held->GetWidth()==240;
        observed_clear=!kairo::IApplication::GetCurrentApp();
    });
    check(held_identity);check(observed_clear);check(!kairo::IApplication::GetCurrentApp());
    std::cout<<"{\"assertions\":"<<assertions<<",\"ui_gc_collections\":17,\"game_boot\":false}\n";
}
