#pragma once
#include "semantic_runtime.hpp"
#include <thread>
#include <future>
#include <deque>
#include <chrono>
#include <atomic>
namespace pls::kairo {
inline std::atomic<bool> host_finish_requested{false};
inline void request_host_finish(){host_finish_requested.store(true);}
class FormManagerBase;
struct ApplicationInitializationBridge {
    std::function<void()> before_create; // Config.Create + platform/Canvas/library-resource initialization.
    std::function<void()> after_create;  // Original Language.Init, after Main.OnCreate.
};
// Lifecycle adapter for generated subclasses. Empty defaults correspond to the
// original empty virtual hooks; required game Update/Draw remain abstract.
class IApplication : public cs::Object {
    inline static cs::Ref<IApplication> current_;
    inline static cs::Array<std::int32_t> viewport_result_=cs::Array<std::int32_t>::make(2);
    std::thread::id ui_thread_=std::this_thread::get_id();
    std::int32_t viewport_width_{240},viewport_height_{240},screen_width_{240},screen_height_{240},frames_{};
    float fixed_scale_=std::numeric_limits<float>::quiet_NaN(),resolution_scale_{100.0f};
    bool updating_{},created_{},rendering_{},focused_{true};
    std::int64_t update_ms_{},render_ms_{};
    std::mutex tasks_mutex_;
    std::deque<std::function<void()>> ui_tasks_,update_tasks_;
    std::function<void()> termination_handler_;
    ApplicationInitializationBridge initialization_;
    cs::String data_path_;
    void drain(std::deque<std::function<void()>>& tasks){
        for(;;){std::function<void()> task;{std::lock_guard<std::mutex> lock(tasks_mutex_);if(tasks.empty())break;task=std::move(tasks.front());tasks.pop_front();}try{task();}catch(const cs::Exception&){}}
    }
protected:
    bool termination_{},visible_{};
    virtual void OnCreate(){}virtual void OnStart(){}virtual void OnRestart(){}virtual void OnStop(){}
    virtual void OnResume(){}virtual void OnSuspend(){}virtual void OnRender(){}virtual void OnDestroy(){}
    virtual void OnUpdate()=0;virtual void OnDraw()=0;
    void Init(cs::Ref<IApplication> app){current_=std::move(app);}
public:
    using UIMethod=cs::Delegate<cs::Ref<cs::Object>()>;
    // Roslyn enforces C# accessibility; emitted free-function bodies use these
    // explicit bridges for protected, qualified base calls (never redispatch).
    void source_Init(cs::Ref<IApplication> app){Init(std::move(app));}
    void source_OnCreate(){IApplication::OnCreate();}void source_OnStart(){IApplication::OnStart();}
    void source_OnRestart(){IApplication::OnRestart();}void source_OnStop(){IApplication::OnStop();}
    void source_OnResume(){IApplication::OnResume();}void source_OnSuspend(){IApplication::OnSuspend();}
    void source_OnRender(){IApplication::OnRender();}void source_OnDestroy(){IApplication::OnDestroy();}
    virtual cs::Ref<FormManagerBase> GetFormManager()=0;
    static cs::Ref<IApplication> GetCurrentApp(){return current_;}
    void SetViewport(std::int32_t w,std::int32_t h){viewport_width_=w;viewport_height_=h;}
    cs::Array<std::int32_t> GetViewport(){viewport_result_.at(0)=viewport_width_;viewport_result_.at(1)=viewport_height_;return viewport_result_;}
    std::int32_t GetWidth()const{return screen_width_;}std::int32_t GetHeight()const{return screen_height_;}
    std::int32_t GetWidth2()const{return cs::conv_i32(float(screen_width_)*100.0f/resolution_scale_+0.01f);}
    std::int32_t GetHeight2()const{return cs::conv_i32(float(screen_height_)*100.0f/resolution_scale_+0.01f);}
    float GetResolutionScaleRatio()const{return resolution_scale_;}
    void SetScaleRatio(float value=std::numeric_limits<float>::quiet_NaN()){fixed_scale_=value;}
    float GetScaleRatio(bool forceAuto=false)const{
        if(forceAuto||std::isnan(fixed_scale_))return std::min(float(screen_width_)*100.0f/240.0f,float(screen_height_)*100.0f/240.0f);
        return fixed_scale_*resolution_scale_/100.0f;
    }
    bool CheckUiThread()const{return std::this_thread::get_id()==ui_thread_;}
    bool IsTermination()const{return termination_;}bool Visibe()const{return visible_;}
    bool Focus()const{return focused_;}bool HasWindowFocus()const{return focused_;}
    bool IsRendering()const{return rendering_;}
    std::int32_t GetTotalFrames()const{return frames_;}
    std::int64_t GetRenderTime()const{return render_ms_;}std::int64_t GetUpdateTime()const{return update_ms_;}
    cs::String GetDataPath()const{return data_path_;}
    void trace_edges(const cs::EdgeVisitor& visitor)const override{cs::Object::trace_edges(visitor);cs::trace_value(data_path_,visitor);}
    void release_edges()override{cs::Object::release_edges();cs::release_value(data_path_);}
    void Terminate(){if(termination_)return;if(!termination_handler_)throw cs::InvalidOperationException("Termination event/finish bridge is not installed");termination_=true;termination_handler_();}
    static void Sleep(std::int32_t ms){if(ms<-1)throw cs::ArgumentOutOfRangeException();if(ms==-1)throw cs::NotSupportedException("Infinite app sleep needs a cancellation host");std::this_thread::sleep_for(std::chrono::milliseconds(ms));}
    void RunOnUiThread(cs::Delegate<void()> method,bool wait=false){
        if(CheckUiThread()){try{method();}catch(const cs::Exception&){if(wait)throw;}return;}
        auto task=std::make_shared<std::packaged_task<void()>>([method]{method();});auto done=task->get_future();
        {std::lock_guard<std::mutex> lock(tasks_mutex_);ui_tasks_.push_back([task]{(*task)();});}if(wait)done.get();
    }
    cs::Ref<cs::Object> RunOnUiThread(UIMethod method,bool wait=false){
        if(CheckUiThread()){try{return method();}catch(const cs::Exception&){if(wait)throw;return {};}}
        auto task=std::make_shared<std::packaged_task<cs::Ref<cs::Object>()>>([method]{return method();});auto done=task->get_future();
        {std::lock_guard<std::mutex> lock(tasks_mutex_);ui_tasks_.push_back([task]{(*task)();});}return wait?done.get():nullptr;
    }
    bool RunOnUpdate(cs::Delegate<void()> method){if(updating_){method();return true;}std::lock_guard<std::mutex> lock(tasks_mutex_);update_tasks_.push_back([method]{method();});return false;}
    void host_configure(std::int32_t w,std::int32_t h,cs::String data_path,std::function<void()> terminate){screen_width_=w;screen_height_=h;data_path_=std::move(data_path);termination_handler_=std::move(terminate);}
    void host_initialization(ApplicationInitializationBridge bridge){initialization_=std::move(bridge);}
    void host_start(){
        if(!initialization_.before_create||!initialization_.after_create)throw cs::InvalidOperationException("Original Config/Awake/Language initialization bridge is not installed");
        ui_thread_=std::this_thread::get_id();initialization_.before_create();created_=true;OnCreate();initialization_.after_create();OnStart();visible_=true;
    }
    void host_update(){
        if(!created_||termination_)return;frames_=cs::add_i32(frames_,1);auto begin=std::chrono::steady_clock::now();updating_=true;
        cs::run_finally([&]{drain(ui_tasks_);drain(update_tasks_);OnUpdate();},[&]{updating_=false;});
        update_ms_=std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now()-begin).count();drain(ui_tasks_);
    }
    void host_draw(){if(!created_||termination_)return;auto begin=std::chrono::steady_clock::now();rendering_=true;cs::run_finally([&]{OnDraw();OnRender();},[&]{rendering_=false;});render_ms_=std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now()-begin).count();}
    void host_focus(bool focus){if(focused_==focus)return;focused_=focus;if(focus)OnResume();else OnSuspend();}
    void host_stop(){if(!created_)return;OnStop();OnDestroy();visible_=false;created_=false;current_.reset();}
};
}
