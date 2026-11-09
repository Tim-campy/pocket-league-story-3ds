#include "forms.hpp"
#include <iostream>
#include <atomic>
#include <thread>
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
struct ConstructorProbe:FormBase {
 inline static std::string trace;int value{};
 static int mark(const char* phase){trace+=std::string(phase)+",";return std::string(phase)=="basearg"?23:17;}
 void source_ctor(){value=mark("field");source_construct(mark("basearg"));mark("body");}
};
struct TouchProbe:FormBase {
 std::int32_t received_type{},received_value{};TouchProbe():FormBase(42){}
 std::int32_t GetTouchValue(std::int32_t type,std::int32_t index)override{return pls::cs::add_i32(pls::cs::add_i32(pls::cs::add_i32(pls::cs::mul_i32(type,31),index),received_type),received_value);}
 void SetTouchValue(std::int32_t type,std::int32_t value)override{received_type=type;received_value=value;}
};
struct ModeProbe:FormBase {ModeProbe():FormBase(71){}bool Init()override{SetProcessMode(4);return true;}bool Finish()override{SetProcessMode(1);return true;}};
int concurrent_policy(){
 pls::cs::GcMutatorScope mutator;unsigned int checks=0;auto require=[&](bool v){if(!v)throw std::runtime_error("Native UI shared field policy failed");++checks;};
 auto manager=pls::cs::make_ref<FormManagerBase>();manager->source_construct();auto form=pls::cs::make_ref<FormBase>(13);manager->Push(form);form->SetProcessMode(1);auto canvas=Canvas::GetInstance();
 std::atomic<bool> ready{false},warm{false},resume{false},done{false};std::exception_ptr error;
 std::thread writer([&]{try{pls::cs::GcMutatorScope worker;ready=true;for(int i=0;i<2000;++i){
  auto value=Str(std::u16string{u'L',char16_t(0xd800),u'\0',static_cast<char16_t>(i&255)});form->SetSoftLabel(value,value,value,value);pls::cs::gc_safepoint();
  if(i==99){warm=true;while(!resume.load()){pls::cs::gc_safepoint();std::this_thread::yield();}}
 }done=true;}catch(...){error=std::current_exception();ready=true;warm=true;done=true;}});
 while(!ready.load()){pls::cs::gc_safepoint();std::this_thread::yield();}
 auto valid=[&](Str value){return value.is_null()||value==Str(u"")||(value.length()==4&&value.code_units()[0]==u'L'&&value.code_units()[1]==char16_t(0xd800)&&value.code_units()[2]==0);};
 unsigned int collections=0;
 while(!warm.load()){pls::cs::gc_safepoint();std::this_thread::yield();}
 require(form->GetLeftSoftLabel().length()==4);canvas->UpdateSoftLabel();require(canvas->GetSoftLabelL().length()==4);
 pls::cs::gc_collect();++collections;resume=true;
 while(!done.load()){
  require(valid(form->GetLeftSoftLabel()));require(valid(form->GetRightSoftLabel()));require(valid(form->GetSoftLabel3()));require(valid(form->GetSoftLabel4()));
  form->SetProcessMode(4);require(!form->CheckUsable());form->SetProcessMode(1);canvas->UpdateSoftLabel();require(valid(canvas->GetSoftLabelL()));require(valid(canvas->GetSoftLabelR()));
  pls::cs::gc_collect();++collections;
 }
 {pls::cs::GcNativeBlockingScope blocked;writer.join();}if(error)std::rethrow_exception(error);
 require(collections>0);auto snapshot=form->GetLeftSoftLabel();form->SetSoftLabel(Str(u"replacement"),{}, {}, {});require(valid(snapshot));
 std::weak_ptr<pls::cs::Object> weak=snapshot.as_object();pls::cs::gc_collect();require(!weak.expired());snapshot={};pls::cs::gc_collect();
 bool bounds=false;try{canvas->SetSoftLabel(-1,{});}catch(const pls::cs::IndexOutOfRangeException&){bounds=true;}require(bounds);
 std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<checks<<",\"writer_iterations\":2000,\"collections_while_writer_registered\":"<<collections<<",\"whole_method_lock\":false,\"game_boot\":false}\n";return 0;
}
template<class F>void P(const char* name,F&& f){std::cout<<name<<'=';try{std::cout<<f();}catch(const pls::cs::Exception& e){std::cout<<'!'<<e.type_name();}std::cout<<'\n';}
const char* T(bool v){return v?"True":"False";}
int policy(){
 unsigned int checks=0;auto require=[&](bool value){if(!value)throw std::runtime_error("Forms native policy failed");++checks;};
 auto rejects=[&](auto&& operation){bool failed=false;try{operation();}catch(const pls::cs::NotSupportedException&){failed=true;}require(failed);};
 auto manager=pls::cs::make_ref<FormManagerBase>();manager->source_construct();auto form=pls::cs::make_ref<FormBase>(27);
 rejects([&]{manager->ChangeCurrentForm(form);});require(manager->GetFormsNum()==0);
 rejects([&]{manager->Execute();});rejects([&]{manager->OnDraw();});require(!manager->IsCapturing());
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
 {auto cycle=pls::cs::make_ref<FormManagerBase>();cycle->source_construct();auto child=pls::cs::make_ref<FormBase>(1);cycle->Push(child);weak=child;}
 pls::cs::gc_collect();require(weak.expired());
 unsigned int constructions=0;int derived_field=0;
 form_construction_hook=[&](FormManagerBase&){require(derived_field==41);++constructions;};
 auto deferred=pls::cs::make_ref<FormManagerBase>();require(constructions==0);
 derived_field=41;deferred->source_construct();require(constructions==1);form_construction_hook={};
 auto bare=pls::cs::make_ref<FormBase>();require(bare->GetId()==0&&bare->GetLeftSoftLabel().is_null());bare->source_construct(9);require(bare->GetId()==9&&bare->GetLeftSoftLabel()==Str(u""));
 struct Adapter:CanvasSurface {void RawKeyDown(std::int32_t,pls::cs::Ref<KeyEvent>)override{}void KeyDown(std::int32_t)override{}void KeyUp(std::int32_t)override{}void Touch(pls::cs::Ref<MotionEvent>)override{}void ClearTouch()override{}void ClearGameTouch()override{}};
 auto original=pls::cs::make_ref<pls::cs::Object>();auto adapter=pls::cs::make_ref<Adapter>();canvas->host_source_surface(original,adapter);require(canvas->GetSourceSurfaceManager()==original&&canvas->GetSurfaceManager()==adapter);
 bool mismatch=false;try{canvas->host_source_surface(original,{});}catch(const pls::cs::InvalidOperationException&){mismatch=true;}require(mismatch);
 canvas->SetSurfaceManager({});require(!canvas->GetSourceSurfaceManager()&&!canvas->GetSurfaceManager());
 std::cout<<"{\"policy_assertions\":"<<checks<<",\"unbound_effects_rejected\":true,\"native_form_cycle_collected\":true,\"game_boot\":false}\n";return 0;
}
int main(int argc,char**argv){
 if(argc==2&&std::string(argv[1])=="concurrent")return concurrent_policy();
 if(argc==2)return policy();
 auto m=pls::cs::make_ref<FormManagerBase>();m->source_construct();m->host_game_state(nullptr);
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
 P("constructor-order",[]{ConstructorProbe::trace.clear();auto p=pls::cs::make_ref<ConstructorProbe>();p->source_ctor();return ConstructorProbe::trace+"/"+std::to_string(p->GetId())+":"+std::to_string(p->value)+":"+p->GetLeftSoftLabel().utf8();});
 P("touch-base-default",[]{pls::cs::Ref<TouchValueAccessor> touch=pls::cs::make_ref<FormBase>(9);touch->SetTouchValue(1,2);return std::to_string(touch->GetTouchValue(3,4))+":"+T(bool(std::dynamic_pointer_cast<FormBase>(touch)));});
 P("touch-derived-dispatch",[]{auto p=pls::cs::make_ref<TouchProbe>();pls::cs::Ref<TouchValueAccessor> touch=p;touch->SetTouchValue(5,7);p->source_SetTouchValue(5,6);return std::to_string(touch->GetTouchValue(3,4))+":"+std::to_string(p->source_GetTouchValue(3,4))+":"+std::to_string(p->received_type)+":"+std::to_string(p->received_value);});
 P("touch-object-identity",[]{auto p=pls::cs::make_ref<TouchProbe>();pls::cs::Ref<TouchValueAccessor> touch=p;auto boxed=std::dynamic_pointer_cast<pls::cs::Object>(touch);return std::string(T(boxed==std::static_pointer_cast<pls::cs::Object>(p)))+":"+T(std::dynamic_pointer_cast<TouchValueAccessor>(std::dynamic_pointer_cast<TouchProbe>(boxed))==touch);});
 P("init-mode-reread",[]{auto manager=pls::cs::make_ref<FormManagerBase>();manager->source_construct();auto form=pls::cs::make_ref<ModeProbe>();manager->Push(form);manager->source_ExecuteInitAndFinish();return std::to_string(manager->GetFormsNum())+":"+std::to_string(form->GetProcessMode());});
 P("finish-mode-reread",[]{auto manager=pls::cs::make_ref<FormManagerBase>();manager->source_construct();auto form=pls::cs::make_ref<ModeProbe>();manager->Push(form);manager->source_ExecuteInitAndFinish();manager->source_ExecuteInitAndFinish();return std::to_string(manager->GetFormsNum())+":"+std::to_string(form->GetProcessMode());});
}
