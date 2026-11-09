#pragma once
#include "canvas.hpp"
#include "touch_value_accessor.hpp"
#include "managed_shared_field.hpp"
#include <optional>
#include <thread>
#include <atomic>
namespace pls::kairo {
enum class AppEventType:std::int32_t {Hidden=0,Sleep=1,Browser=2,Exit=3,Resume=4};
class AppEvent : public cs::Object {
public:
    AppEventType Type;
    cs::Array<cs::Ref<cs::Object>> Args;
    AppEvent(AppEventType type,cs::Array<cs::Ref<cs::Object>> args={}):Type(type),Args(args.is_null()?cs::Array<cs::Ref<cs::Object>>::make(0):args){}
    void trace_edges(const cs::EdgeVisitor& v)const override{cs::trace_value(Args,v);}void release_edges()override{cs::release_value(Args);}
};
class FormManagerBase;
class SourceFormExecution;
inline std::function<void(FormManagerBase&)> form_construction_hook;
class FormBase : public cs::Object, public TouchValueAccessor {
    friend class FormManagerBase;
    friend class SourceFormExecution;
    std::int32_t id_{},continuous_{};
    cs::SharedField<std::int32_t> mode_;
    cs::SharedField<cs::String> left_,right_,third_,fourth_;
    cs::Ref<FormManagerBase> manager_;
public:
    FormBase()=default;
    // Emitted allocation is separate from the C# base-constructor invocation.
    // Until this bridge runs, managed fields retain CLR-zero/default values.
    explicit FormBase(std::int32_t id){source_construct(id);}
    void source_construct(std::int32_t id){left_.store(cs::String(u""));right_.store(cs::String(u""));id_=id;}
    virtual bool Init(){return true;}virtual void Draw(cs::Ref<Graphics>){}virtual bool Update(){return true;}
    virtual bool Resume(){return true;}virtual void Suspend(){}virtual bool Finish(){return true;}
    std::int32_t GetTouchValue(std::int32_t,std::int32_t)override{return 0;}void SetTouchValue(std::int32_t,std::int32_t)override{}
    virtual bool CheckMainWindow(){return true;}virtual bool ProcessEvent(cs::Ref<AppEvent>){return false;}
    virtual bool ProcessBackKey(){return !CheckMainWindow();}
    // Qualified base calls from generated free-function bodies must bypass the
    // derived virtual override, while calls within each original body retain
    // their original virtual dispatch (notably ProcessBackKey).
    bool source_Init(){return FormBase::Init();}bool source_Update(){return FormBase::Update();}
    bool source_Resume(){return FormBase::Resume();}bool source_Finish(){return FormBase::Finish();}
    void source_Draw(cs::Ref<Graphics> g){FormBase::Draw(std::move(g));}void source_Suspend(){FormBase::Suspend();}
    std::int32_t source_GetTouchValue(std::int32_t t,std::int32_t i){return FormBase::GetTouchValue(t,i);}
    void source_SetTouchValue(std::int32_t t,std::int32_t v){FormBase::SetTouchValue(t,v);}
    bool source_CheckMainWindow(){return FormBase::CheckMainWindow();}
    bool source_ProcessEvent(cs::Ref<AppEvent> e){return FormBase::ProcessEvent(std::move(e));}
    bool source_ProcessBackKey(){return FormBase::ProcessBackKey();}
    void SetSoftLabel(cs::String,cs::String,cs::String={},cs::String={});
    cs::String GetLeftSoftLabel(){return left_.load();}cs::String GetRightSoftLabel(){return right_.load();}
    cs::String GetSoftLabel3(){return third_.load();}cs::String GetSoftLabel4(){return fourth_.load();}
    bool Push(cs::Ref<FormBase>);bool Pop();bool CheckUsable();
    std::int32_t GetId(){return id_;}std::int32_t GetProcessMode(){return mode_.load();}void SetProcessMode(std::int32_t value){mode_.store(value);}
    bool IsAlive(){return mode_.load()==3||mode_.load()==1||mode_.load()==2;}
    void trace_edges(const cs::EdgeVisitor&)const override;void release_edges()override;
};
// Platform bridges resolve real source collaborators. A null game-state bridge
// is useful only for isolated null-branch fixtures: the authenticated game
// getter creates KairoDummy when instance_ is absent, and must remain generated.
class FormGameState : public cs::Object {
public:virtual bool IsGamePlaying()=0;virtual void SetGameState(bool)=0;
};
class FormExecutionBridge : public cs::Object {
public:
    virtual bool ExecuteStep(cs::Ref<FormManagerBase>)=0;
    virtual void OnDraw(cs::Ref<FormManagerBase>)=0;
};
class FormManagerBase : public cs::Object {
    friend class FormBase;
    friend class SourceFormExecution;
    std::vector<cs::Ref<FormBase>> stack_;
    std::vector<std::pair<cs::Ref<FormBase>,bool>> game_states_;
    cs::Ref<FormBase> current_,loading_,print_;
    cs::Ref<FormGameState> game_state_;
    cs::Ref<FormExecutionBridge> execution_;
    bool game_state_configured_{},termination_{},notified_exit_{},draw_all_{},draw_skip_{},soft_label_{},show_termination_{},pause_{},resume_{},surface_changed_{},warning_{};
    bool service_update_{},last_keyguard_{},last_visible_{};
    std::atomic<bool> request_sync_{false},synchronizing_{false},wait_late_update_{false},lock_update_{false};
    std::atomic<std::int64_t> lock_update_time_{0};
    std::int64_t update_start_time_{};
    std::thread::id owner_;
    void owner();void labels(cs::Ref<FormBase>);
protected:
    virtual void PreUpdate(){Canvas::GetInstance()->DecideKeyState();}
    virtual void Updated(){if(soft_label_)Canvas::GetInstance()->UpdateSoftLabel();soft_label_=true;}
    virtual void PreDraw(){}virtual void Drawn(){}
public:
    FormManagerBase()=default;
    void source_construct(){stack_.clear();game_states_.clear();draw_all_=true;soft_label_=true;last_visible_=true;owner_=std::this_thread::get_id();if(form_construction_hook)form_construction_hook(*this);}
    void host_game_state(cs::Ref<FormGameState> state){game_state_=std::move(state);game_state_configured_=true;}
    void host_execution(cs::Ref<FormExecutionBridge> bridge){execution_=std::move(bridge);}
    cs::Ref<FormBase> GetForm(std::int32_t);std::int32_t GetFormIndex(cs::Ref<FormBase>);
    bool ChangeCurrentForm(cs::Ref<FormBase>);
    bool Push(cs::Ref<FormBase> form){return Push({},std::move(form),false);}
    bool Push(cs::Ref<FormBase> position,cs::Ref<FormBase> form,bool before=false);
    bool Pop(cs::Ref<FormBase> form={});
    std::int32_t GetFormsNum(){return static_cast<std::int32_t>(stack_.size());}
    cs::Ref<FormBase> GetTopForm(){return stack_.empty()?nullptr:stack_.back();}
    cs::Ref<FormBase> GetDownForm(){return stack_.empty()?nullptr:stack_.front();}
    cs::Ref<FormBase> GetCurrentForm(){return current_?current_:GetTopForm();}
    bool RemoveAllForms();void MoveToTop(cs::Ref<FormBase>);void MoveToDown(cs::Ref<FormBase>);
    bool CheckUsable(cs::Ref<FormBase> form){if(!form)throw cs::NullReferenceException();return form->mode_.load()!=4;}
    void DrawAllForms(bool=false){draw_all_=true;}void DrawSkip(){draw_skip_=true;}bool IsDrawSkip(){return draw_skip_;}
    void SetLoadingForm(cs::Ref<FormBase>);void SetPrintForm(cs::Ref<FormBase>);
    void Draw(cs::Ref<Graphics>);
    virtual bool Execute();virtual void OnDraw();virtual void Resume();
    // The execution bridge may call these source lifecycle portions; they do
    // not substitute for the SaveRecorder/KairoBase/SurfaceManager scheduler.
    void source_ExecuteInitAndFinish();void source_PreUpdate(){FormManagerBase::PreUpdate();}void source_Updated(){FormManagerBase::Updated();}
    void source_PreDraw(){FormManagerBase::PreDraw();}void source_Drawn(){FormManagerBase::Drawn();}
    void source_Resume(){FormManagerBase::Resume();}
    void ProcessEvent(cs::Ref<AppEvent>);static void ProcessEvent(AppEventType,cs::Array<cs::Ref<cs::Object>> args={});
    void ProcessBackKey();void ShowTerminationDialog(){show_termination_=true;}bool CheckShowTerminationDialog(){return show_termination_;}
    void SetPause(bool value){pause_=value;}bool IsPause(){return pause_;}void SurfaceChanged(){surface_changed_=true;}
    bool capturing_{};
    bool IsCapturing(){return capturing_;}
    void trace_edges(const cs::EdgeVisitor&)const override;void release_edges()override;
    // Source warning is observable; host must implement it before false Init /
    // Finish is accepted. The warning string remains a source-derived concern.
    std::function<void(cs::Ref<FormBase>,bool)> on_lifecycle_warning;
};
}
