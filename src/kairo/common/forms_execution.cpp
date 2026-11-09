#include "forms_execution.hpp"
#include "application.hpp"
#include "sound.hpp"
namespace pls::kairo {
namespace {
class RuntimeGameState : public FormGameState {
    cs::Ref<FormRuntime> runtime_;
public:
    explicit RuntimeGameState(cs::Ref<FormRuntime> runtime):runtime_(std::move(runtime)){}
    bool IsGamePlaying()override{auto source=runtime_->Kairo();return source&&source->IsGamePlaying();}
    void SetGameState(bool value)override{if(auto source=runtime_->Kairo())source->SetGameState(value);}
    void trace_edges(const cs::EdgeVisitor& v)const override{cs::trace_value(runtime_,v);}void release_edges()override{runtime_.reset();}
};
}
void install_form_runtime(cs::Ref<FormRuntime> runtime){
    if(!runtime){form_construction_hook={};return;}
    form_construction_hook=[runtime](FormManagerBase& manager){
        manager.host_execution(cs::make_ref<SourceFormExecution>(runtime));
        manager.host_game_state(cs::make_ref<RuntimeGameState>(runtime));
        manager.on_lifecycle_warning=[runtime](auto form,bool init){runtime->LifecycleWarning(std::move(form),init);};
    };
}
cs::Ref<FormSurface> SourceFormExecution::surface(cs::Ref<Canvas> canvas){
    auto value=canvas->GetSurfaceManager();if(!value)return {};
    auto result=std::dynamic_pointer_cast<FormSurface>(value);if(!result)throw cs::NotSupportedException("Canvas surface has no FormManager execution bridge");return result;
}
void SourceFormExecution::save_finally(cs::Ref<FormKairo> kairo){
    if(!kairo||!kairo->ReserveSaveEnabled()||kairo->ReserveSave()==0)return;
    const auto reserved=kairo->ReserveSave();kairo->SetReserveSave(0);
    for(int attempt=0;attempt<3;++attempt){try{if(reserved==1)kairo->Save();else if(reserved==2)kairo->SaveAll();}
        catch(const cs::Exception&){runtime_->Collect();runtime_->Sleep(500);continue;}break;}
}
bool SourceFormExecution::ExecuteStep(cs::Ref<FormManagerBase> manager){
    if(!manager)throw cs::NullReferenceException();auto kairo=runtime_->Kairo();
    return cs::run_finally([&]()->bool{try{
        auto canvas=Canvas::GetInstance();auto app=IApplication::GetCurrentApp();
        if(manager->stack_.empty())return true;if(!app)throw cs::NullReferenceException();
        if(app->IsTermination()){manager->stack_.clear();return true;}
        auto sound=SoundPlayer::GetInstance();auto recorder=runtime_->Recorder();
        const bool keyguard=false,visible=app->Visibe();
        if(recorder&&((keyguard!=manager->last_keyguard_)&keyguard))FormManagerBase::ProcessEvent(AppEventType::Sleep);
        manager->last_keyguard_=keyguard;manager->last_visible_=visible;
        if(keyguard||!visible){sound->Suspend();runtime_->Sleep(100);return true;}sound->Resume();
        auto view=surface(canvas);
        // NotifyManager.UpdateValues is explicitly removed by the service policy.
        while(manager->lock_update_.load()){if(manager->lock_update_time_.load()==0)manager->lock_update_time_=runtime_->Millis();runtime_->Sleep(1);}
        if(manager->update_start_time_==runtime_->Millis())manager->update_start_time_=cs::add_i64(manager->update_start_time_,1);else manager->update_start_time_=runtime_->Millis();
        if(recorder)recorder->Lock();
        if(manager->resume_){auto form=manager->GetTopForm();if(!form)throw cs::NullReferenceException();
            cs::run_finally([&]{manager->current_=form;if(form->Resume())manager->resume_=false;else if(!manager->warning_){manager->warning_=true;runtime_->ResumeWarning(form);}},[&]{manager->current_.reset();});}
        manager->source_ExecuteInitAndFinish();if(manager->loading_)manager->SetLoadingForm({});
        if(app->IsTermination()){manager->stack_.clear();return true;}
        if(manager->show_termination_){manager->show_termination_=false;if(runtime_->TerminationDialog()){FormManagerBase::ProcessEvent(AppEventType::Exit);manager->termination_=true;manager->RemoveAllForms();return true;}}
        if(view&&(manager->stack_.empty()||manager->GetTopForm()->mode_.load()==1))view->DoEvents();
        manager->source_ExecuteInitAndFinish();
        if(manager->pause_)manager->PreUpdate();
        else {
            if(!manager->service_update_){manager->service_update_=true;const auto before=manager->GetTopForm();if(kairo)kairo->Update();if(before!=manager->GetTopForm())return false;}
            for(std::size_t i=0;i+1<manager->stack_.size();++i)manager->stack_[i]->continuous_=0;
            const auto fep=runtime_->Fep();if(fep&&fep->Update())manager->source_ExecuteInitAndFinish();
            if(!manager->stack_.empty()){
                auto form=manager->GetTopForm();if(form->mode_.load()==1){manager->PreUpdate();form->mode_.store(2);}
                if(form->mode_.load()==2){cs::run_finally([&]{manager->current_=form;if((runtime_->Fep()!=nullptr||form->Update())&&form->mode_.load()==2)form->mode_.store(3);},[&]{manager->current_.reset();});form->continuous_=cs::add_i32(form->continuous_,1);return false;}
            }
        }
        if(recorder)recorder->Unlock(true);manager->wait_late_update_=false;manager->Updated();manager->service_update_=false;
        while(manager->request_sync_.load()){manager->synchronizing_=true;while(manager->request_sync_.load())try{runtime_->Sleep(1);}catch(const cs::Exception&){}manager->synchronizing_=false;try{runtime_->Yield();runtime_->Sleep(10);}catch(const cs::Exception&){};}
        if(app->IsTermination())manager->stack_.clear();return true;
    }catch(const cs::Exception&){if(kairo&&!kairo->ReserveSaveEnabled())kairo->SetReserveSaveEnabled(true);throw;}},[&]{save_finally(kairo);});
}
void SourceFormExecution::OnDraw(cs::Ref<FormManagerBase> manager){
    if(!manager)throw cs::NullReferenceException();auto canvas=Canvas::GetInstance();auto view=surface(canvas);if(manager->stack_.empty())return;
    manager->PreDraw();runtime_->BeginDrawCounters();if(view)view->ClearTouch();
    if(!manager->draw_skip_){if(view)view->AdjustSurfaceLayout();auto graphics=canvas->BeginPaint();if(graphics){
        if(manager->surface_changed_){manager->DrawAllForms();manager->surface_changed_=false;}
        if(view)view->BeginTouchRegist(graphics);if(view)view->Draw(graphics);
        if(manager->print_){graphics->SetOrigin(0,0);graphics->ClearClip();try{manager->print_->Draw(graphics);}catch(const cs::Exception&){};}
        if(view)view->EndTouchRegist(graphics);if(view)view->DrawComponents(graphics);
        // InterstitialAd.DrawLoading is removed by the advertisement policy.
        canvas->EndPaint();runtime_->ReleaseExpiredImages();
    }}
    if(!manager->stack_.empty()){auto form=manager->GetTopForm();if(form->mode_.load()!=0&&form->mode_.load()!=4)form->mode_.store(1);}
    manager->draw_skip_=false;manager->Drawn();runtime_->CloseJarCache();auto app=IApplication::GetCurrentApp();if(!app)throw cs::NullReferenceException();if(app->IsTermination())manager->stack_.clear();
}
}
