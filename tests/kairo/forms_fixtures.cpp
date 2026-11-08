#include "forms.hpp"
#include <iostream>
using namespace pls::kairo;using Str=pls::cs::String;
struct ProbeForm:FormBase {
 inline static std::string trace;
 explicit ProbeForm(int id):FormBase(id){}
 bool Init()override{trace+="I"+std::to_string(GetId())+",";return true;}
 bool Finish()override{trace+="F"+std::to_string(GetId())+",";return true;}
 void Draw(pls::cs::Ref<Graphics>)override{trace+="D"+std::to_string(GetId())+",";}
 bool ProcessEvent(pls::cs::Ref<AppEvent>)override{trace+="E"+std::to_string(GetId())+",";return GetId()==2;}
 bool CheckMainWindow()override{return GetId()!=2;}
};
template<class F>void P(const char* name,F&& f){std::cout<<name<<'=';try{std::cout<<f();}catch(const pls::cs::Exception& e){std::cout<<'!'<<e.type_name();}std::cout<<'\n';}
const char* T(bool v){return v?"True":"False";}
int policy(){
 unsigned int checks=0;auto require=[&](bool value){if(!value)throw std::runtime_error("Forms native policy failed");++checks;};
 auto rejects=[&](auto&& operation){bool failed=false;try{operation();}catch(const pls::cs::NotSupportedException&){failed=true;}require(failed);};
 auto manager=pls::cs::make_ref<FormManagerBase>();auto form=pls::cs::make_ref<FormBase>(27);
 rejects([&]{manager->ChangeCurrentForm(form);});require(manager->GetFormsNum()==0);
 rejects([&]{manager->Execute();});rejects([&]{manager->OnDraw();});rejects([&]{manager->Capture();});
 auto canvas=Canvas::GetInstance();bool absent=false;try{canvas->BeginPaint();}catch(const pls::cs::InvalidOperationException&){absent=true;}require(absent);
 auto image=Image::CreateImage(4,3);canvas->host_display(image,{});require(canvas->GetWidth()==4&&canvas->GetHeight()==3);
 canvas->SetAspectRatio(4,7);require(canvas->GetHeight()==7);canvas->SetAspectRatio();require(canvas->GetHeight()==3);
 auto graphics=canvas->BeginPaint();require(graphics&&canvas->GetGraphicsInstance()==graphics);require(canvas->BeginPaint()==graphics);require(!canvas->BeginPaint({}));
 graphics->SetColor(255,0,0);graphics->FillRect(0,0,1,1);require(image->pixels().at(0)==255);
 canvas->EndPaint();require(!canvas->GetGraphicsInstance());
 canvas->SetBackground(0x123456);require(canvas->GetBackColor()==0x123456);
 // Native FormBase<->FormManager references participate in the cooperative
 // collector; this cycle must not become an invisible permanent native root.
 std::weak_ptr<FormBase> weak;
 {auto cycle=pls::cs::make_ref<FormManagerBase>();auto child=pls::cs::make_ref<FormBase>(1);cycle->Push(child);weak=child;}
 pls::cs::gc_collect();require(weak.expired());
 std::cout<<"{\"policy_assertions\":"<<checks<<",\"unbound_effects_rejected\":true,\"native_form_cycle_collected\":true,\"game_boot\":false}\n";return 0;
}
int main(int argc,char**){
 if(argc==2)return policy();
 auto m=pls::cs::make_ref<FormManagerBase>();m->host_game_state(nullptr);
 auto S=[&]{std::string s;for(int i=0;i<m->GetFormsNum();++i){auto f=m->GetForm(i);s+=std::to_string(f->GetId())+":"+std::to_string(f->GetProcessMode())+",";}return s;};
 auto c=Canvas::GetInstance();auto a=pls::cs::make_ref<ProbeForm>(1),b=pls::cs::make_ref<ProbeForm>(2),d=pls::cs::make_ref<ProbeForm>(3);
 P("empty",[&]{return std::to_string(m->GetFormsNum())+":"+T(!m->GetTopForm())+":"+T(a->CheckUsable())+":"+T(a->IsAlive())+":"+T(a->Pop());});
 P("labels-before",[&]{c->SetSoftLabel(Str(u"L"),Str(u"R"));return c->GetSoftLabelL().utf8()+":"+c->GetSoftLabelR().utf8();});
 P("labels-publish",[&]{c->UpdateSoftLabel();return c->GetSoftLabelL().utf8()+":"+c->GetSoftLabelR().utf8()+":"+T(c->GetSoftLabel(2).is_null());});
 P("labels-index",[&]{c->SetSoftLabel(1,Str(u"r2"));return c->GetSoftLabelL().utf8()+":"+c->GetSoftLabelR().utf8();});
 P("push",[&]{m->Push(a);return S()+":"+T(a->CheckUsable())+":"+std::to_string(m->GetCurrentForm()->GetId());});
 P("init",[&]{m->source_ExecuteInitAndFinish();return S()+":"+ProbeForm::trace;});
 P("form-label",[&]{a->SetSoftLabel(Str(u"a"),Str(u"b"));c->UpdateSoftLabel();return a->GetLeftSoftLabel().utf8()+":"+c->GetSoftLabelL().utf8();});
 P("push-after",[&]{a->Push(b);return S();});
 P("push-before",[&]{m->Push(a,d,true);return S();});
 P("init-more",[&]{m->source_ExecuteInitAndFinish();return S()+":"+ProbeForm::trace;});
 P("event-stop",[&]{ProbeForm::trace="";m->ProcessEvent(pls::cs::make_ref<AppEvent>(AppEventType::Resume));return ProbeForm::trace;});
 P("exit-once",[&]{ProbeForm::trace="";m->ProcessEvent(pls::cs::make_ref<AppEvent>(AppEventType::Exit));m->ProcessEvent(pls::cs::make_ref<AppEvent>(AppEventType::Exit));return ProbeForm::trace;});
 P("form-bounds",[&]{return std::to_string(m->GetForm(-1)->GetId());});
 P("pop-reactivate",[&]{a->SetProcessMode(3);b->Pop();return S()+":"+T(b->IsAlive());});
 P("finish",[&]{m->source_ExecuteInitAndFinish();return S()+":"+ProbeForm::trace;});
 P("finished-label",[&]{b->SetSoftLabel(Str(u"blocked"),Str(u"blocked"));return b->GetLeftSoftLabel().utf8()+":"+T(b->CheckUsable());});
 P("move-top",[&]{m->MoveToTop(d);return S();});
 P("move-down",[&]{m->MoveToDown(d);return S()+":"+std::to_string(m->GetTopForm()->GetId())+":"+std::to_string(m->GetDownForm()->GetId());});
 P("reinsert-alive",[&]{m->Push(a,d);return S();});
 P("change-existing",[&]{m->ChangeCurrentForm(a);return S();});
 P("finish-old",[&]{m->source_ExecuteInitAndFinish();return S()+":"+ProbeForm::trace;});
 P("change-new",[&]{m->ChangeCurrentForm(b);return S();});
 P("init-finish-change",[&]{m->source_ExecuteInitAndFinish();return S()+":"+ProbeForm::trace;});
 P("draw",[&]{m->Draw({});return S()+":"+ProbeForm::trace;});
 P("back-intercept",[&]{b->SetProcessMode(3);m->ProcessBackKey();return std::string(T(m->CheckShowTerminationDialog()));});
 P("back-show-dialog",[&]{m->Pop();m->ProcessBackKey();return std::string(T(m->CheckShowTerminationDialog()));});
 P("index",[&]{return std::to_string(m->GetFormIndex(a))+":"+std::to_string(m->GetFormIndex(b));});
 P("app-event-default",[]{auto e=pls::cs::make_ref<AppEvent>(AppEventType::Exit);return std::to_string(static_cast<int>(e->Type))+":"+std::to_string(e->Args.length());});
}
