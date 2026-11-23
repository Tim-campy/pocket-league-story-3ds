// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "form.MyFormBase.hpp"
#include "java.lang.JThread.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.billing.ui.StoreBase.hpp"
#include "system.form.ConnectForm.hpp"
#include "system.form.RestoreForm.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"
#include "system.billing.ui.StoreBase_templates.hpp"
namespace pls::game {
namespace system::form {

void RestoreForm::trace_edges(const pls::cs::EdgeVisitor&visitor)const {MyFormBase::trace_edges(visitor);pls::cs::trace_value(next_,visitor);pls::cs::trace_value(message_,visitor);}

static PLS_NOINLINE void cs_init_7a8a85ab4c0396df_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.form.RestoreForm",flag,[](){

});}

void RestoreForm::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_7a8a85ab4c0396df_slow(flag);}

void RestoreForm::create_init(pls::cs::Ref<RestoreForm> self,pls::cs::Ref<pls::kairo::FormBase> next) {
RestoreForm::ensure_initialized();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 906);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.#ctor(kairo.unity.form.FormBase)",game);
{
self->next_ = next;
}

}

// M:system.form.RestoreForm.#ctor(kairo.unity.form.FormBase)
pls::cs::Ref<RestoreForm> RestoreForm::create(pls::cs::Ref<pls::kairo::FormBase> next) {
RestoreForm::ensure_initialized();
 auto self = pls::cs::make_ref<RestoreForm>(); RestoreForm::create_init(self,next); return self; 
}

// M:system.form.RestoreForm.ToString
pls::cs::String RestoreForm::ToString() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.ToString",game);
{
return literal(u"RestoreForm");
}
}

// M:system.form.RestoreForm.Init
bool RestoreForm::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.Init",game);
{
MyFormBase::Init();
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = pls::cs::String(u""); this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
result_ = -1;
require(java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(pls::cs::raw(this),std::string("M:system.form.RestoreForm.Init:545"),[self=this]() -> void {{
pls::cs::Ref<billing::ui::BillingManager> instance = billing::ui::BillingManager::GetInstance();
self->result_ = (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<billing::ui::StoreBase>>(instance); auto cs_value_storage_278_owner=self;if(!cs_receiver)throw pls::cs::NullReferenceException(); auto& cs_arg0 = require(cs_value_storage_278_owner)->message_; return cs_receiver->CallRestoreFlow(cs_arg0); }()) ? 1 : 0);
}},this)))->Start();
return true;
}
}

// M:system.form.RestoreForm.Draw(kairo.unity.ui.Graphics)
void RestoreForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.Draw(kairo.unity.ui.Graphics)",game);
{
MyFormBase::Draw(g);
if (result_ == -1) {
ConnectForm::DrawConnect(g);
}
}
}

// M:system.form.RestoreForm.Update
bool RestoreForm::Update() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.Update",game);
{
MyFormBase::Update();
if (result_ != -1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
if (!is_null(next_)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(next_);});
}
if (!is_null(message_)) {
Push(message_);
}
}
return true;
}
}

// M:system.form.RestoreForm.CheckMainWindow
bool RestoreForm::CheckMainWindow() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.CheckMainWindow",game);
{
return false;
}
}
} // namespace system::form
}
