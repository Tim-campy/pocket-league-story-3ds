// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_5451b2154f09f4c5.hpp"
#include "game_generated_type_6ee7d14059be1acf.hpp"
#include "game_generated_type_7a8a85ab4c0396df.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "game_generated_type_f52c904bea265acc.hpp"
#include "game_generated_type_fa01867c9c048464.hpp"
namespace pls::game {

void cs_7a8a85ab4c0396df::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_5451b2154f09f4c5::trace_edges(visitor);pls::cs::trace_value(cs_2ad2f01fccd9369f,visitor);pls::cs::trace_value(cs_3e466a3cb07b200e,visitor);}

void cs_7a8a85ab4c0396df::release_edges(){cs_5451b2154f09f4c5::release_edges();pls::cs::release_value(cs_2ad2f01fccd9369f);pls::cs::release_value(cs_3e466a3cb07b200e);}

bool cs_7a8a85ab4c0396df::CheckMainWindow() {return cs_62510745d5314f43(std::static_pointer_cast<cs_7a8a85ab4c0396df>(shared_from_this()));}

void cs_7a8a85ab4c0396df::Draw(pls::cs::Ref<pls::kairo::Graphics> v_g) {cs_92c8ac080808b50a(std::static_pointer_cast<cs_7a8a85ab4c0396df>(shared_from_this()),v_g);}

bool cs_7a8a85ab4c0396df::Init() {return cs_c2191f4ad81242f9(std::static_pointer_cast<cs_7a8a85ab4c0396df>(shared_from_this()));}

pls::cs::String cs_7a8a85ab4c0396df::ToString() {return cs_6d5017124c1ae7a5(std::static_pointer_cast<cs_7a8a85ab4c0396df>(shared_from_this()));}

bool cs_7a8a85ab4c0396df::Update() {return cs_a5d5caa24a2ba6d6(std::static_pointer_cast<cs_7a8a85ab4c0396df>(shared_from_this()));}

void cs_init_7a8a85ab4c0396df(){static pls::cs::TypeInitState state;state.run("system.form.RestoreForm",[](){

});}

// M:system.form.RestoreForm.#ctor(kairo.unity.form.FormBase)
pls::cs::Ref<cs_7a8a85ab4c0396df> cs_972efb29b2f26070(pls::cs::Ref<pls::kairo::FormBase> v_next) { cs_init_7a8a85ab4c0396df();
{ auto cs_this = pls::cs::make_ref<cs_7a8a85ab4c0396df>(); cs_972efb29b2f26070_init(cs_this,v_next); return cs_this; }
}

void cs_972efb29b2f26070_init(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this,pls::cs::Ref<pls::kairo::FormBase> v_next) {
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38aull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.#ctor(kairo.unity.form.FormBase)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_next; pls::game::cs_require(cs_target)->cs_2ad2f01fccd9369f = cs_value; return cs_value; }());
}
}
}

// M:system.form.RestoreForm.CheckMainWindow
bool cs_62510745d5314f43(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this) { cs_init_7a8a85ab4c0396df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.CheckMainWindow",game);
{
return false;
}
}
}
}

// M:system.form.RestoreForm.Draw(kairo.unity.ui.Graphics)
void cs_92c8ac080808b50a(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_7a8a85ab4c0396df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.Draw(kairo.unity.ui.Graphics)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15e2ffc127d2f4c2; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; cs_0454fc66f95c3746(cs_arg0); }());
}
}
}
}
}

// M:system.form.RestoreForm.Init
bool cs_c2191f4ad81242f9(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this) { cs_init_7a8a85ab4c0396df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.Init",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = pls::cs::String(u""); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_15e2ffc127d2f4c2 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_89c0d586cfe20341>>(pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/form/RestoreForm.cs:M:system.form.RestoreForm.Init:533",([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { pls::cs::Delegate<void()> cs_arg0 = pls::source_allocations::completed("delegate_evaluation","src/Assembly-CSharp/system/form/RestoreForm.cs:M:system.form.RestoreForm.Init:545",pls::source_allocations::completed("closure_evaluation","src/Assembly-CSharp/system/form/RestoreForm.cs:M:system.form.RestoreForm.Init:545",([&](){struct cs_closure_8be9de4464439ca3 : pls::cs::Object{pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(cs_this,v);}void release_edges()override{pls::cs::Object::release_edges();cs_this.reset();}void Invoke(){{
pls::cs::Ref<cs_6ee7d14059be1acf> v_instance_578 = ([&]() -> pls::cs::Ref<cs_6ee7d14059be1acf> { return cs_f8eb247e2413618b(); }());
([&]() { auto cs_target = cs_this; auto cs_value = ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_fa01867c9c048464>>(v_instance_578); auto cs_value_storage_889_owner=cs_this;auto& cs_value_storage_889=pls::game::cs_require(cs_value_storage_889_owner)->cs_3e466a3cb07b200e;auto& cs_arg0 = cs_value_storage_889; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dabb624ad9818668(cs_receiver,cs_arg0); }()) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)))); pls::game::cs_require(cs_target)->cs_15e2ffc127d2f4c2 = cs_value; return cs_value; }());
}}};auto cs_closure=pls::cs::make_ref<cs_closure_8be9de4464439ca3>();cs_closure->cs_this=cs_this;return pls::cs::Delegate<void()>::bind_identity(cs_closure,cs_this.get(),std::string("M:system.form.RestoreForm.Init:545"),[weak=std::weak_ptr<cs_closure_8be9de4464439ca3>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()))); return cs_6ac8ad3def9eea9e(cs_arg0); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9636031b790b537(cs_receiver); }());
return true;
}
}
}
}

// M:system.form.RestoreForm.ToString
pls::cs::String cs_6d5017124c1ae7a5(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this) { cs_init_7a8a85ab4c0396df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.ToString",game);
{
return ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0052" u"\x0065" u"\x0073" u"\x0074" u"\x006f" u"\x0072" u"\x0065" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"",11);return cs_literal;}());
}
}
}
}

// M:system.form.RestoreForm.Update
bool cs_a5d5caa24a2ba6d6(pls::cs::Ref<cs_7a8a85ab4c0396df> cs_this) { cs_init_7a8a85ab4c0396df();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.RestoreForm.Update",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_25913418bfe51bb8(cs_receiver); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_15e2ffc127d2f4c2; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());});
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ad2f01fccd9369f; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2ad2f01fccd9369f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());});
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3e466a3cb07b200e; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3e466a3cb07b200e; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d659571885cb8cb8(cs_receiver,cs_arg0); }());
}
}
return true;
}
}
}
}
}
