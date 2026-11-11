#include "forms_execution.hpp"
#include "../translator/gc_test_support.hpp"
#include "forms_callbacks.hpp"
#include "application.hpp"
#include "sound.hpp"
#include <iostream>
using namespace pls::kairo;
namespace {
std::string trace;
void log(const std::string& value){trace+=value+";";}
struct App:IApplication {
    pls::cs::Ref<FormManagerBase> manager{};
    void OnUpdate()override{}void OnDraw()override{}pls::cs::Ref<FormManagerBase> GetFormManager()override{return manager;}
    void visible(bool value){visible_=value;}void terminated(bool value){termination_=value;}
};
struct Output:SoundOutput {
    void SetClip(std::int32_t,pls::cs::Ref<SoundData>)override{throw pls::cs::NotSupportedException();}
    bool IsPlaying(std::int32_t)override{return false;}void Play(std::int32_t)override{throw pls::cs::NotSupportedException();}void Rewind(std::int32_t)override{throw pls::cs::NotSupportedException();}
    void Stop(std::int32_t)override{}void SetVolume(std::int32_t,float)override{}void SetLoop(std::int32_t,bool)override{}void Pump()override{}
};
struct Kairo:FormKairo {
    bool enabled=true,throw_update=false;int reserve{},failures{};std::function<void()> on_update;
    bool IsGamePlaying()override{return false;}void SetGameState(bool)override{}
    void Update()override{log("ku");if(on_update)on_update();if(throw_update)throw pls::cs::Exception();}
    bool ReserveSaveEnabled()override{return enabled;}void SetReserveSaveEnabled(bool b)override{enabled=b;}
    std::int32_t ReserveSave()override{return reserve;}void SetReserveSave(std::int32_t n)override{reserve=n;}
    void save(const char* name){log(name);if(failures-->0)throw pls::cs::Exception();}
    void Save()override{save("save");}void SaveAll()override{save("saveAll");}
};
struct Recorder:FormRecorder {void Lock()override{log("lock");}void Unlock(bool force)override{log(std::string("unlock")+(force?"1":"0"));}};
struct Fep:FormFep {bool Update()override{log("fep");return true;}};
struct Runtime:FormRuntime {
    pls::cs::Ref<struct Kairo> kairo=pls::cs::make_ref<struct Kairo>();
    pls::cs::Ref<FormRecorder> recorder=pls::cs::make_ref<struct Recorder>();
    pls::cs::Ref<FormFep> fep{};
    pls::cs::Ref<FormKairo> kairo_adapter{};
    bool dialog{};std::int32_t count{};
    Runtime(){
        KairoCallbacks b;auto target=pls::cs::raw(kairo);
        b.is_game_playing=pls::cs::Delegate<bool()>::bind(kairo,"IsGamePlaying",[target]{return target->IsGamePlaying();});
        b.set_game_state=pls::cs::Delegate<void(bool)>::bind(kairo,"SetGameState",[target](bool n){target->SetGameState(n);});
        b.reserve_enabled=pls::cs::Delegate<bool()>::bind(kairo,"ReserveEnabled",[target]{return target->ReserveSaveEnabled();});
        b.set_reserve_enabled=pls::cs::Delegate<void(bool)>::bind(kairo,"SetReserveEnabled",[target](bool n){target->SetReserveSaveEnabled(n);});
        b.reserve=pls::cs::Delegate<std::int32_t()>::bind(kairo,"Reserve",[target]{return target->ReserveSave();});
        b.set_reserve=pls::cs::Delegate<void(std::int32_t)>::bind(kairo,"SetReserve",[target](auto n){target->SetReserveSave(n);});
        b.update=pls::cs::Delegate<void()>::bind(kairo,"Update",[target]{target->Update();});
        b.save=pls::cs::Delegate<void()>::bind(kairo,"Save",[target]{target->Save();});
        b.save_all=pls::cs::Delegate<void()>::bind(kairo,"SaveAll",[target]{target->SaveAll();});
        kairo_adapter=pls::cs::make_ref<CallbackFormKairo>(std::move(b));
    }
    pls::cs::Ref<FormKairo> Kairo()override{log("K");return kairo_adapter;}pls::cs::Ref<FormRecorder> Recorder()override{log("R");return recorder;}pls::cs::Ref<FormFep> Fep()override{return fep;}
    std::int64_t Millis()override{return 100;}void Sleep(std::int64_t n)override{log("sleep"+std::to_string(n));}void Yield()override{log("yield");}void Collect()override{log("gc");}
    bool TerminationDialog()override{log("dialog");return dialog;}
    void ResumeWarning(pls::cs::Ref<FormBase>)override{log("warnResume");}void LifecycleWarning(pls::cs::Ref<FormBase>,bool init)override{log(init?"warnInit":"warnFinish");}
    void BeginDrawCounters()override{count=pls::cs::mod_i32(pls::cs::add_i32(count,1),std::numeric_limits<std::int32_t>::max());}
    void CloseJarCache()override{log("cache");}void ReleaseExpiredImages()override{log("expired");}
};
struct Surface:FormSurface {
    pls::cs::Weak<FormManagerBase> manager;
    void RawKeyDown(std::int32_t,pls::cs::Ref<KeyEvent>)override{}void KeyDown(std::int32_t)override{}void KeyUp(std::int32_t)override{}void Touch(pls::cs::Ref<MotionEvent>)override{}
    void ClearTouch()override{log("clear");}void ClearGameTouch()override{log("clearGame");}
    void DoEvents()override{log("events");}void AdjustSurfaceLayout()override{log("layout");}
    void BeginTouchRegist(pls::cs::Ref<Graphics>)override{log("begin");}
    void Draw(pls::cs::Ref<Graphics> graphics)override{log("surfaceDraw");manager.lock()->Draw(graphics);}
    void EndTouchRegist(pls::cs::Ref<Graphics>)override{log("end");}void DrawComponents(pls::cs::Ref<Graphics>)override{log("components");}
};
struct Manager:FormManagerBase {
    Manager(){source_construct();}
    void PreUpdate()override{log("pre");FormManagerBase::PreUpdate();}void Updated()override{log("updated");FormManagerBase::Updated();}
    void PreDraw()override{log("preDraw");FormManagerBase::PreDraw();}void Drawn()override{log("drawn");FormManagerBase::Drawn();}
};
struct Form:FormBase {
    bool throw_init{},throw_update{},throw_draw{},init_ok{true},finish_ok{true},resume_ok{true};int pending{},updates{},update_mode{-1};explicit Form(int id):FormBase(id){}
    bool Init()override{log("init"+std::to_string(GetId()));if(throw_init)throw pls::cs::Exception();return init_ok;}
    bool Finish()override{log("finish"+std::to_string(GetId()));return finish_ok;}
    bool Update()override{log("update"+std::to_string(GetId()));if(throw_update)throw pls::cs::Exception();if(update_mode>=0)SetProcessMode(update_mode);return updates++>=pending;}
    bool Resume()override{log("resume"+std::to_string(GetId()));return resume_ok;}void Draw(pls::cs::Ref<Graphics>)override{log("draw"+std::to_string(GetId()));if(throw_draw)throw pls::cs::Exception();}
    bool ProcessEvent(pls::cs::Ref<AppEvent> e)override{log("event"+std::to_string(static_cast<int>(e->Type))+":"+std::to_string(GetId()));return false;}
};
template<class F>void run(const char* name,F&& scenario){
    trace.clear();auto runtime=pls::cs::make_ref<Runtime>();FormCallbacks bindings;auto r=pls::cs::raw(runtime);
    bindings.kairo=pls::cs::Delegate<pls::cs::Ref<FormKairo>()>::bind(runtime,"Kairo",[r]{return r->Kairo();});
    bindings.recorder=pls::cs::Delegate<pls::cs::Ref<FormRecorder>()>::bind(runtime,"Recorder",[r]{return r->Recorder();});
    bindings.fep=pls::cs::Delegate<pls::cs::Ref<FormFep>()>::bind(runtime,"Fep",[r]{return r->Fep();});
    bindings.millis=pls::cs::Delegate<std::int64_t()>::bind(runtime,"Millis",[r]{return r->Millis();});
    bindings.sleep=pls::cs::Delegate<void(std::int64_t)>::bind(runtime,"Sleep",[r](auto n){r->Sleep(n);});
    bindings.yield=pls::cs::Delegate<void()>::bind(runtime,"Yield",[r]{r->Yield();});
    bindings.collect=pls::cs::Delegate<void()>::bind(runtime,"Collect",[r]{r->Collect();});
    bindings.termination_dialog=pls::cs::Delegate<bool()>::bind(runtime,"TerminationDialog",[r]{return r->TerminationDialog();});
    bindings.resume_warning=pls::cs::Delegate<void(pls::cs::Ref<FormBase>)>::bind(runtime,"ResumeWarning",[r](auto f){r->ResumeWarning(f);});
    bindings.lifecycle_warning=pls::cs::Delegate<void(pls::cs::Ref<FormBase>,bool)>::bind(runtime,"LifecycleWarning",[r](auto f,bool n){r->LifecycleWarning(f,n);});
    bindings.begin_draw_counters=pls::cs::Delegate<void()>::bind(runtime,"BeginDrawCounters",[r]{r->BeginDrawCounters();});
    bindings.close_jar_cache=pls::cs::Delegate<void()>::bind(runtime,"CloseJarCache",[r]{r->CloseJarCache();});
    bindings.release_expired_images=pls::cs::Delegate<void()>::bind(runtime,"ReleaseExpiredImages",[r]{r->ReleaseExpiredImages();});
    install_form_runtime(pls::cs::make_ref<CallbackFormRuntime>(std::move(bindings)));
    auto app=pls::cs::make_ref<App>();app->source_Init(app);app->visible(true);configure_sound(nullptr,pls::cs::make_ref<Output>());
    auto canvas=Canvas::GetInstance();canvas->host_display(Image::CreateImage(4,3),{});
    auto manager=pls::cs::make_ref<Manager>();app->manager=manager;auto surface=pls::cs::make_ref<Surface>();surface->manager=manager;
    SurfaceCallbacks surface_bindings;auto s=pls::cs::raw(surface);
    surface_bindings.raw_key_down=pls::cs::Delegate<void(std::int32_t,pls::cs::Ref<KeyEvent>)>::bind(surface,"RawKeyDown",[s](auto k,auto e){s->RawKeyDown(k,e);});
    surface_bindings.key_down=pls::cs::Delegate<void(std::int32_t)>::bind(surface,"KeyDown",[s](auto k){s->KeyDown(k);});
    surface_bindings.key_up=pls::cs::Delegate<void(std::int32_t)>::bind(surface,"KeyUp",[s](auto k){s->KeyUp(k);});
    surface_bindings.touch=pls::cs::Delegate<void(pls::cs::Ref<MotionEvent>)>::bind(surface,"Touch",[s](auto e){s->Touch(e);});
    surface_bindings.clear_touch=pls::cs::Delegate<void()>::bind(surface,"ClearTouch",[s]{s->ClearTouch();});
    surface_bindings.clear_game_touch=pls::cs::Delegate<void()>::bind(surface,"ClearGameTouch",[s]{s->ClearGameTouch();});
    surface_bindings.do_events=pls::cs::Delegate<void()>::bind(surface,"DoEvents",[s]{s->DoEvents();});
    surface_bindings.adjust_layout=pls::cs::Delegate<void()>::bind(surface,"AdjustLayout",[s]{s->AdjustSurfaceLayout();});
    surface_bindings.begin_touch=pls::cs::Delegate<void(pls::cs::Ref<Graphics>)>::bind(surface,"Begin",[s](auto g){s->BeginTouchRegist(g);});
    surface_bindings.draw=pls::cs::Delegate<void(pls::cs::Ref<Graphics>)>::bind(surface,"Draw",[s](auto g){s->Draw(g);});
    surface_bindings.end_touch=pls::cs::Delegate<void(pls::cs::Ref<Graphics>)>::bind(surface,"End",[s](auto g){s->EndTouchRegist(g);});
    surface_bindings.draw_components=pls::cs::Delegate<void(pls::cs::Ref<Graphics>)>::bind(surface,"Components",[s](auto g){s->DrawComponents(g);});
    canvas->host_source_surface(surface,pls::cs::make_ref<CallbackFormSurface>(std::move(surface_bindings)));
    auto form=pls::cs::make_ref<Form>(1);manager->Push(form);std::string error;
    try{scenario(manager,form,runtime,app);}catch(const pls::cs::Exception& e){error=e.type_name();}
    std::cout<<name<<'='<<trace<<'/'<<error<<'/';for(int i=0;i<manager->GetFormsNum();++i){auto f=manager->GetForm(i);std::cout<<f->GetId()<<':'<<f->GetProcessMode()<<',';}
    std::cout<<'/'<<runtime->count<<'/'<<(runtime->kairo->enabled?1:0)<<':'<<runtime->kairo->reserve<<'\n';
}
}
int policy(){
    unsigned int count=0;auto require=[&](bool value){if(!value)throw std::runtime_error("Form callback policy failed");++count;};
    auto missing=pls::cs::make_ref<CallbackFormRuntime>(FormCallbacks{});bool rejected=false;try{missing->Kairo();}catch(const pls::cs::InvalidOperationException&){rejected=true;}require(rejected);
    auto no_kairo=pls::cs::make_ref<CallbackFormKairo>(KairoCallbacks{});rejected=false;try{no_kairo->Update();}catch(const pls::cs::InvalidOperationException&){rejected=true;}require(rejected);
    auto no_surface=pls::cs::make_ref<CallbackFormSurface>(SurfaceCallbacks{});rejected=false;try{no_surface->Draw({});}catch(const pls::cs::InvalidOperationException&){rejected=true;}require(rejected);
    auto no_fep=pls::cs::make_ref<CallbackFormFep>(pls::cs::Delegate<bool()>{});rejected=false;try{no_fep->Update();}catch(const pls::cs::InvalidOperationException&){rejected=true;}require(rejected);
    struct Target:pls::cs::Object {pls::cs::Ref<FormKairo> adapter{};void trace_edges(const pls::cs::EdgeVisitor& v)const override{pls::cs::trace_value(adapter,v);}void release_edges()override{pls::cs::clear_ref(adapter);}};
    pls::cs::Weak<Target> weak;
    isolated_gc_mutator([&]{auto target=pls::cs::make_ref<Target>();weak=target;KairoCallbacks bindings;bindings.update=pls::cs::Delegate<void()>::bind(target,"synthetic-update",[]{});target->adapter=pls::cs::make_ref<CallbackFormKairo>(std::move(bindings));});
    pls::cs::gc_collect();require(weak.expired());
    std::cout<<"{\"assertions\":"<<count<<",\"missing_bindings_rejected\":true,\"managed_callback_cycle_collected\":true,\"game_boot\":false}\n";return 0;
}
int main(int argc,char**){
    if(argc==2)return policy();
    run("execute-complete",[](auto m,auto,auto,auto){m->Execute();});
    run("execute-pending-twice",[](auto m,auto f,auto,auto){f->pending=2;m->Execute();});
    run("update-mode-reread",[](auto m,auto f,auto,auto){f->update_mode=4;m->Execute();});
    run("hidden",[](auto m,auto,auto,auto a){a->visible(false);m->Execute();});
    run("terminated",[](auto m,auto,auto,auto a){a->terminated(true);m->Execute();});
    run("paused",[](auto m,auto,auto,auto){m->SetPause(true);m->Execute();});
    run("fep-present",[](auto m,auto,auto r,auto){auto target=pls::cs::make_ref<Fep>();auto ptr=pls::cs::raw(target);r->fep=pls::cs::make_ref<CallbackFormFep>(pls::cs::Delegate<bool()>::bind(target,"Update",[ptr]{return ptr->Update();}));m->Execute();});
    run("resume",[](auto m,auto,auto,auto){m->Resume();m->Execute();});
    run("reserve-retry",[](auto m,auto,auto r,auto){r->kairo->reserve=1;r->kairo->failures=2;m->Execute();});
    run("reserve-three-failures",[](auto m,auto,auto r,auto){r->kairo->reserve=2;r->kairo->failures=4;m->Execute();});
    run("update-exception-finally",[](auto m,auto f,auto r,auto){r->kairo->enabled=false;r->kairo->reserve=2;f->throw_update=true;m->Execute();});
    run("kairo-exception-finally",[](auto m,auto,auto r,auto){r->kairo->enabled=false;r->kairo->reserve=1;r->kairo->throw_update=true;m->Execute();});
    run("init-exception-finally",[](auto m,auto f,auto r,auto){r->kairo->reserve=1;f->throw_init=true;m->Execute();});
    run("kairo-changes-top",[](auto m,auto,auto r,auto){r->kairo->on_update=[m]{m->Push(pls::cs::make_ref<Form>(2));};m->Execute();});
    run("termination-dialog-no",[](auto m,auto,auto,auto){m->ShowTerminationDialog();m->Execute();});
    run("termination-dialog-yes",[](auto m,auto,auto r,auto){r->dialog=true;m->ShowTerminationDialog();m->Execute();});
    run("recorder-null",[](auto m,auto,auto r,auto){pls::cs::clear_ref(r->recorder);m->Execute();});
    run("init-false",[](auto m,auto f,auto,auto){f->init_ok=false;m->Execute();});
    run("finish-false",[](auto m,auto f,auto,auto){f->finish_ok=false;m->Pop();m->Execute();});
    run("resume-false",[](auto m,auto f,auto,auto){f->resume_ok=false;m->Resume();m->Execute();});
    run("execute-draw",[](auto m,auto,auto,auto){m->Execute();m->OnDraw();});
    run("draw-skip",[](auto m,auto,auto,auto){m->Execute();m->DrawSkip();m->OnDraw();});
    run("print-form",[](auto m,auto,auto,auto){m->Execute();m->SetPrintForm(pls::cs::make_ref<Form>(9));m->OnDraw();});
    run("surface-null",[](auto m,auto,auto,auto){Canvas::GetInstance()->SetSurfaceManager({});m->Execute();m->OnDraw();});
    run("draw-exception",[](auto m,auto f,auto,auto){m->Execute();f->throw_draw=true;m->OnDraw();m->OnDraw();});
}
