#pragma once
#include "semantic_runtime.hpp"
#include "managed_shared_field.hpp"
#include "system.hpp"
#include <thread>
#include <future>
#include <deque>
#include <chrono>
#include <atomic>
namespace pls::kairo {
inline std::atomic<bool> host_finish_requested{false};
inline void request_host_finish(){host_finish_requested.store(true);}
class FormManagerBase;
// Own platform protocol, with the original ScreenOrientation numeric identities
// measured as metadata. This does not require or link a Unity binary.
enum class WindowOrientation:std::int32_t {unknown=0,portrait=1,portrait_upside_down=2,landscape_left=3,landscape_right=4,auto_rotation=5};
struct ApplicationInitializationBridge {
    std::function<void()> before_create; // Config.Create + platform/Canvas/library-resource initialization.
    std::function<void()> after_create;  // Original Language.Init, after Main.OnCreate.
    std::function<cs::Ref<cs::Object>()> library_resources;
};
// Lifecycle adapter for generated subclasses. Empty defaults correspond to the
// original empty virtual hooks; required game Update/Draw remain abstract.
class IApplication : public cs::Object {
    inline static cs::SharedField<cs::Ref<IApplication>> current_;
    inline static cs::SharedField<cs::String> platform_model_;
    inline static cs::Array<std::int32_t> viewport_result_=cs::Array<std::int32_t>::make(2);
    std::thread::id ui_thread_=std::this_thread::get_id();
    std::int32_t viewport_width_{240},viewport_height_{240},screen_width_{240},screen_height_{240},frames_{};
    float fixed_scale_=std::numeric_limits<float>::quiet_NaN(),resolution_scale_{100.0f};
    bool updating_{},created_{},rendering_{},focused_{true};
    std::int64_t update_ms_{},render_ms_{};
    std::mutex tasks_mutex_;
    std::deque<std::function<void()>> ui_tasks_,update_tasks_;
    std::function<void()> termination_handler_;
    // Installed only during host setup, before workers. Captures are native
    // state, never hidden managed references; each call is a separate read.
    std::function<WindowOrientation()> orientation_reader_;
    std::function<void()> orientation_reset_;
    std::function<void(bool)> fullscreen_writer_;
    ApplicationInitializationBridge initialization_;
    cs::Ref<cs::Object> initialization_owner_;
    cs::String data_path_;
    WindowOrientation read_orientation()const{if(!orientation_reader_)throw cs::InvalidOperationException("Host window orientation reader is not installed");return orientation_reader_();}
    void drain(std::deque<std::function<void()>>& tasks){
        for(;;){std::function<void()> task;{std::lock_guard<std::mutex> lock(tasks_mutex_);if(tasks.empty())break;task=std::move(tasks.front());tasks.pop_front();}try{task();}catch(const cs::Exception&){}}
    }
protected:
    bool termination_{},visible_{};
    virtual void OnCreate(){}virtual void OnStart(){}virtual void OnRestart(){}virtual void OnStop(){}
    virtual void OnResume(){}virtual void OnSuspend(){}virtual void OnRender(){}virtual void OnDestroy(){}
    virtual void OnUpdate()=0;virtual void OnDraw()=0;
    void Init(cs::Ref<IApplication> app){current_.store(std::move(app));}
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
    static cs::Ref<IApplication> GetCurrentApp(){return current_.load();}
    cs::String GetPackageName()const{return native_package_name();}
    // Original Awake stores SystemInfo.deviceModel before the library-resource
    // attempt and Main.OnCreate. The platform supplies its own device model.
    static void host_platform(cs::String model){platform_model_.store(std::move(model));}
    static cs::String GetProperty(cs::String key){
        if(key.is_null())throw cs::NullReferenceException();
        const auto& name=key.code_units();
        if(name==u"microedition.platform"||name==u"Platform")return platform_model_.load();
        // JSystem.GetProperty handles only those same two keys; all other
        // properties, including MIDlet-Jar-URL, return null in the source.
        return {};
    }
    void SetViewport(std::int32_t w,std::int32_t h){viewport_width_=w;viewport_height_=h;}
    cs::Array<std::int32_t> GetViewport(){viewport_result_.at(0)=viewport_width_;viewport_result_.at(1)=viewport_height_;return viewport_result_;}
    std::int32_t GetWidth()const{return screen_width_;}std::int32_t GetHeight()const{return screen_height_;}
    std::int32_t GetWidth2()const{return cs::conv_i32(float(screen_width_)*100.0f/resolution_scale_+0.01f);}
    std::int32_t GetHeight2()const{return cs::conv_i32(float(screen_height_)*100.0f/resolution_scale_+0.01f);}
    float GetResolutionScaleRatio()const{return resolution_scale_;}
    void host_orientation_reader(std::function<WindowOrientation()> reader){if(!reader)throw cs::ArgumentException("Host window orientation reader must be nonempty");if(created_)throw cs::InvalidOperationException("Window orientation reader is host-setup-only");orientation_reader_=std::move(reader);}
    void host_orientation_reset(std::function<void()> reset){if(!reset)throw cs::ArgumentException();if(created_)throw cs::InvalidOperationException("Window orientation reset is host-setup-only");orientation_reset_=std::move(reset);}
    void ResetOrientation(){if(!orientation_reset_)throw cs::InvalidOperationException("Host default window orientation reset is not installed");orientation_reset_();}
    void host_fullscreen_writer(std::function<void(bool)> writer){if(!writer)throw cs::ArgumentException();if(created_)throw cs::InvalidOperationException("Fullscreen writer is host-setup-only");fullscreen_writer_=std::move(writer);}
    void source_set_fullscreen(bool enabled){if(!CheckUiThread())throw cs::InvalidOperationException("Fullscreen update must run on the UI thread");if(!fullscreen_writer_)throw cs::InvalidOperationException("Host fullscreen writer is not installed");fullscreen_writer_(enabled);}
    bool IsSide()const{
        // Preserve both LandscapeLeft tests and the original 1/2/3 read counts.
        if(read_orientation()!=WindowOrientation::landscape_left&&read_orientation()!=WindowOrientation::landscape_left)return read_orientation()==WindowOrientation::landscape_right;
        return true;
    }
    std::int32_t GetOrientation()const{
        switch(read_orientation()){
        case WindowOrientation::portrait:return 0;
        case WindowOrientation::landscape_right:return 1;
        case WindowOrientation::portrait_upside_down:return 2;
        case WindowOrientation::landscape_left:return 3;
        default:return 0;
        }
    }
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
    void trace_edges(const cs::EdgeVisitor& visitor)const override{cs::Object::trace_edges(visitor);cs::trace_value(data_path_,visitor);cs::trace_value(initialization_owner_,visitor);}
    void release_edges()override{cs::Object::release_edges();cs::release_value(data_path_);cs::release_value(initialization_owner_);initialization_={};}
    void Terminate(){if(termination_)return;if(!termination_handler_)throw cs::InvalidOperationException("Termination event/finish bridge is not installed");termination_=true;termination_handler_();}
    static void Sleep(std::int32_t ms){if(ms<-1)throw cs::ArgumentOutOfRangeException();if(ms==-1)throw cs::NotSupportedException("Infinite app sleep needs a cancellation host");std::this_thread::sleep_for(std::chrono::milliseconds(ms));}
    void RunOnUiThread(cs::Delegate<void()> method,bool wait=false){
        if(CheckUiThread()){try{method();}catch(const cs::Exception&){if(wait)throw;}return;}
        auto task=std::make_shared<std::packaged_task<void()>>([method]{method();});auto done=task->get_future();
        {std::lock_guard<std::mutex> lock(tasks_mutex_);ui_tasks_.push_back([task]{(*task)();});}
        if(wait){{cs::GcNativeBlockingScope parked;done.wait();}done.get();}
    }
    cs::Ref<cs::Object> RunOnUiThread(UIMethod method,bool wait=false){
        if(CheckUiThread()){try{return method();}catch(const cs::Exception&){if(wait)throw;return {};}}
        auto task=std::make_shared<std::packaged_task<cs::Ref<cs::Object>()>>([method]{return method();});auto done=task->get_future();
        {std::lock_guard<std::mutex> lock(tasks_mutex_);ui_tasks_.push_back([task]{(*task)();});}
        if(!wait)return nullptr;
        {cs::GcNativeBlockingScope parked;done.wait();}return done.get();
    }
    bool RunOnUpdate(cs::Delegate<void()> method){if(updating_){method();return true;}std::lock_guard<std::mutex> lock(tasks_mutex_);update_tasks_.push_back([method]{method();});return false;}
    void host_configure(std::int32_t w,std::int32_t h,cs::String data_path,std::function<void()> terminate){screen_width_=w;screen_height_=h;data_path_=std::move(data_path);termination_handler_=std::move(terminate);if(!orientation_reader_)orientation_reader_=[this]{return screen_width_>screen_height_?WindowOrientation::landscape_left:WindowOrientation::portrait;};}
    void host_termination(std::function<void()> terminate){termination_handler_=std::move(terminate);}
    void host_initialization(ApplicationInitializationBridge bridge,cs::Ref<cs::Object> owner={}){initialization_=std::move(bridge);initialization_owner_=std::move(owner);}
    cs::Ref<cs::Object> source_resource_object()const{return initialization_.library_resources?initialization_.library_resources():cs::Ref<cs::Object>{};}
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
    void host_stop(){if(!created_)return;OnStop();OnDestroy();visible_=false;created_=false;current_.store(nullptr);}
};
inline void native_window_fullscreen(bool enabled){cs::nonnull(IApplication::GetCurrentApp())->source_set_fullscreen(enabled);}
inline cs::Ref<cs::Object> native_application_resource(cs::Ref<IApplication> app){return cs::nonnull(app)->source_resource_object();}
}
