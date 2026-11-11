#include "forms.hpp"
#include "application.hpp"
namespace pls::kairo {
void FormBase::SetSoftLabel(cs::String a,cs::String b,cs::String c,cs::String d){if(!CheckUsable())return;left_.store(a);right_.store(b);third_.store(c);fourth_.store(d);Canvas::GetInstance()->SetSoftLabel(a,b,c,d);}
bool FormBase::Push(cs::Ref<FormBase> form){if(manager_)manager_->Push(pls::cs::static_pointer_cast<FormBase>(shared_from_this()),std::move(form));return true;}
bool FormBase::Pop(){if(manager_)manager_->Pop(pls::cs::static_pointer_cast<FormBase>(shared_from_this()));return true;}
bool FormBase::CheckUsable(){return manager_&&manager_->CheckUsable(pls::cs::static_pointer_cast<FormBase>(shared_from_this()));}
void FormBase::trace_edges(const cs::EdgeVisitor& v)const{cs::trace_value(left_,v);cs::trace_value(right_,v);cs::trace_value(third_,v);cs::trace_value(fourth_,v);cs::trace_value(manager_,v);}
void FormBase::release_edges(){cs::release_value(left_);cs::release_value(right_);cs::release_value(third_);cs::release_value(fourth_);pls::cs::clear_ref(manager_);}
void FormManagerBase::owner(){if(std::this_thread::get_id()!=owner_)throw cs::NotSupportedException("FormManager cross-thread synchronization bridge is not implemented");}
void FormManagerBase::labels(cs::Ref<FormBase> form){if(!form)throw cs::NullReferenceException();auto left=form->left_.load();auto right=form->right_.load();auto third=form->third_.load();auto fourth=form->fourth_.load();Canvas::GetInstance()->SetSoftLabel(left,right,third,fourth);}
cs::Ref<FormBase> FormManagerBase::GetForm(std::int32_t index){if(index<0||static_cast<std::size_t>(index)>=stack_.size())throw cs::ArgumentOutOfRangeException();return stack_[static_cast<std::size_t>(index)];}
std::int32_t FormManagerBase::GetFormIndex(cs::Ref<FormBase> form){const auto found=std::find(stack_.begin(),stack_.end(),form);return found==stack_.end()?-1:static_cast<std::int32_t>(found-stack_.begin());}
bool FormManagerBase::Push(cs::Ref<FormBase> position,cs::Ref<FormBase> form,bool before){
    if(termination_)return true;owner();if(!form)throw cs::NullReferenceException();
    const auto found=GetFormIndex(form);if(found!=-1)stack_.erase(stack_.begin()+found);
    auto index=position&&position->mode_.load()!=0&&position->mode_.load()!=4?GetFormIndex(position):-1;
    if(found==-1)form->mode_.store(0);
    if(before){if(index==-1)index=0;stack_.insert(stack_.begin()+index,form);}
    else if(index!=-1)stack_.insert(stack_.begin()+index+1,form);else stack_.push_back(form);
    DrawAllForms();if(stack_.size()==1||stack_.front()->mode_.load()==4)Canvas::GetInstance()->SetSoftLabel(cs::String(u""),cs::String(u""));
    labels(GetTopForm());form->manager_=pls::cs::static_pointer_cast<FormManagerBase>(shared_from_this());return true;
}
bool FormManagerBase::ChangeCurrentForm(cs::Ref<FormBase> form){
    if(termination_)return true;owner();
    if(!game_state_configured_)throw cs::NotSupportedException("FormManager KairoBase game-state bridge is not configured");
    const auto found=GetFormIndex(form);if(found!=-1)stack_.erase(stack_.begin()+found);
    for(auto& item:stack_)item->mode_.store(4);
    if(found==-1)Push(form);else{stack_.push_back(form);labels(form);}
    const auto prior=std::find_if(game_states_.begin(),game_states_.end(),[&](const auto& item){return item.first==form;});
    if(game_state_&&prior!=game_states_.end())game_state_->SetGameState(prior->second);
    else if(prior==game_states_.end())game_states_.push_back({form,game_state_&&game_state_->IsGamePlaying()});
    return true;
}
bool FormManagerBase::Pop(cs::Ref<FormBase> form){
    if(stack_.empty())return true;owner();if(!form)form=stack_.back();form->mode_.store(4);DrawAllForms();
    if(stack_.size()>1)for(auto it=stack_.rbegin();it!=stack_.rend();++it)if((*it)->mode_.load()!=4){labels(*it);if((*it)->mode_.load()==3)(*it)->mode_.store(1);break;}
    return true;
}
bool FormManagerBase::RemoveAllForms(){ProcessEvent(AppEventType::Exit);for(auto& form:stack_)form->mode_.store(4);return true;}
void FormManagerBase::MoveToTop(cs::Ref<FormBase> form){owner();const auto found=GetFormIndex(form);if(found!=-1)stack_.erase(stack_.begin()+found);stack_.push_back(form);labels(form);DrawAllForms();soft_label_=false;}
void FormManagerBase::MoveToDown(cs::Ref<FormBase> form){owner();const auto found=GetFormIndex(form);if(found!=-1)stack_.erase(stack_.begin()+found);stack_.insert(stack_.begin(),form);labels(stack_.back());DrawAllForms();soft_label_=false;}
void FormManagerBase::SetLoadingForm(cs::Ref<FormBase> form){owner();if(loading_)try{loading_->Finish();}catch(const cs::Exception&){}loading_=form;if(loading_)try{loading_->Init();}catch(const cs::Exception&){};}
void FormManagerBase::SetPrintForm(cs::Ref<FormBase> form){owner();if(print_)print_->Finish();print_=form;if(print_)print_->Init();}
void FormManagerBase::source_ExecuteInitAndFinish(){
    owner();const auto canvas=Canvas::GetInstance();
    bool transitioned=false;
    auto clear=[&]{const auto surface=canvas->GetSurfaceManager();if(surface)surface->ClearGameTouch();canvas->ClearKeyBuffer();};
    auto warn=[&](cs::Ref<FormBase> form,bool init){if(!warning_){if(!on_lifecycle_warning)throw cs::NotSupportedException("FormManager lifecycle warning bridge is not installed");warning_=true;on_lifecycle_warning(form,init);}};
    for(auto i=static_cast<std::int32_t>(stack_.size())-1;i>=0;--i){auto form=GetForm(i);if(form->mode_.load()!=4)continue;
        transitioned=true;
        cs::run_finally([&]{current_=form;if(form->Finish()){if(form->mode_.load()==4)stack_.erase(stack_.begin()+i);}else warn(form,false);},[&]{pls::cs::clear_ref(current_);});clear();}
    for(std::size_t i=0;i<stack_.size();++i){auto form=stack_[i];if(form->mode_.load()!=0)continue;
        transitioned=true;
        cs::run_finally([&]{current_=form;if(form->Init()){if(form->mode_.load()==0)form->mode_.store(1);}else warn(form,true);},[&]{pls::cs::clear_ref(current_);});clear();}
    if(transitioned)cs::gc_request_collection();
}
void FormManagerBase::Draw(cs::Ref<Graphics> graphics){
    try{for(std::size_t i=0;i<stack_.size();++i){auto form=stack_[i];if(!draw_all_&&i!=stack_.size()-1&&!form->CheckMainWindow())continue;
        cs::run_finally([&]{current_=form;if(form->mode_.load()!=0&&form->mode_.load()!=4)form->Draw(graphics);},[&]{pls::cs::clear_ref(current_);});}}
    catch(const cs::Exception&){}draw_all_=false;
}
bool FormManagerBase::Execute(){owner();if(!execution_)throw cs::NotSupportedException("FormManager SaveRecorder/KairoBase/FEP/Surface scheduler bridge is not installed");auto self=pls::cs::static_pointer_cast<FormManagerBase>(shared_from_this());while(!execution_->ExecuteStep(self)){}return true;}
void FormManagerBase::OnDraw(){owner();if(!execution_)throw cs::NotSupportedException("FormManager surface/render scheduler bridge is not installed");execution_->OnDraw(pls::cs::static_pointer_cast<FormManagerBase>(shared_from_this()));}
void FormManagerBase::Resume(){resume_=true;const auto canvas=Canvas::GetInstance();if(auto surface=canvas->GetSurfaceManager())surface->ClearTouch();canvas->ClearKeyBuffer();}
void FormManagerBase::ProcessEvent(cs::Ref<AppEvent> event){if(!event)throw cs::NullReferenceException();if(event->Type==AppEventType::Exit){if(notified_exit_)return;notified_exit_=true;}
    for(auto i=static_cast<std::int32_t>(stack_.size())-1;i>=0;--i){auto form=GetForm(i);if(form&&form->IsAlive()&&form->ProcessEvent(event))break;}}
void FormManagerBase::ProcessEvent(AppEventType type,cs::Array<cs::Ref<cs::Object>> args){auto app=IApplication::GetCurrentApp();if(!app)return;auto manager=app->GetFormManager();if(manager)manager->ProcessEvent(cs::make_ref<AppEvent>(type,args));}
void FormManagerBase::ProcessBackKey(){for(auto i=static_cast<std::int32_t>(stack_.size())-1;i>=0;--i){auto form=GetForm(i);if(form&&form->IsAlive()&&form->ProcessBackKey())return;}ShowTerminationDialog();}
void FormManagerBase::trace_edges(const cs::EdgeVisitor& v)const{for(const auto& f:stack_)cs::trace_value(f,v);for(const auto& state:game_states_)cs::trace_value(state.first,v);cs::trace_value(current_,v);cs::trace_value(loading_,v);cs::trace_value(print_,v);cs::trace_value(game_state_,v);cs::trace_value(execution_,v);}
void FormManagerBase::release_edges(){stack_.clear();game_states_.clear();pls::cs::clear_ref(current_);pls::cs::clear_ref(loading_);pls::cs::clear_ref(print_);pls::cs::clear_ref(game_state_);pls::cs::clear_ref(execution_);on_lifecycle_warning={};}
}
