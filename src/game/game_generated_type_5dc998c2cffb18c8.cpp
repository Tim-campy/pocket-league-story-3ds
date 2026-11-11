// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_11e0490f60fdc166.hpp"
#include "game_generated_type_408ac5c74e5f3515.hpp"
#include "game_generated_type_4c145fe8f008af05.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
#include "game_generated_type_5dc998c2cffb18c8.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_a2cea92715051fa5.hpp"
#include "game_generated_type_b728593e3dcffe31.hpp"
#include "game_generated_type_c8e1f3d3f96670c6.hpp"
#include "game_generated_type_e315dac1df3b175d.hpp"
#include "game_generated_type_ed8eabc614ddcf9e.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

void cs_5dc998c2cffb18c8::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_5451b2154f09f4c5::trace_edges(visitor);pls::cs::trace_value(cs_29c88f84473383fb,visitor);pls::cs::trace_value(cs_10571fb04b30cc3f,visitor);pls::cs::trace_value(cs_4ec59762286c4307,visitor);pls::cs::trace_value(cs_88389be19ba33eb1,visitor);pls::cs::trace_value(cs_3ae23c92a69c00cc,visitor);pls::cs::trace_value(cs_c1863875b9b75cb4,visitor);pls::cs::trace_value(cs_bf94607445778940,visitor);pls::cs::trace_value(cs_e855bbf60b28c0af,visitor);}

void cs_5dc998c2cffb18c8::release_edges(){cs_5451b2154f09f4c5::release_edges();pls::cs::release_value(cs_29c88f84473383fb);pls::cs::release_value(cs_10571fb04b30cc3f);pls::cs::release_value(cs_4ec59762286c4307);pls::cs::release_value(cs_88389be19ba33eb1);pls::cs::release_value(cs_3ae23c92a69c00cc);pls::cs::release_value(cs_c1863875b9b75cb4);pls::cs::release_value(cs_bf94607445778940);pls::cs::release_value(cs_e855bbf60b28c0af);}

bool cs_5dc998c2cffb18c8::CheckMainWindow() {return cs_caae27da0b1b6167(pls::cs::static_pointer_cast<cs_5dc998c2cffb18c8>(shared_from_this()));}

void cs_5dc998c2cffb18c8::Draw(pls::cs::Ref<pls::kairo::Graphics> v_g) {cs_cf0a08b4237473bc(pls::cs::static_pointer_cast<cs_5dc998c2cffb18c8>(shared_from_this()),v_g);}

bool cs_5dc998c2cffb18c8::Finish() {return cs_03296355172125d8(pls::cs::static_pointer_cast<cs_5dc998c2cffb18c8>(shared_from_this()));}

bool cs_5dc998c2cffb18c8::Init() {return cs_879e1552c1bc0b54(pls::cs::static_pointer_cast<cs_5dc998c2cffb18c8>(shared_from_this()));}

void cs_5dc998c2cffb18c8::cs_virtual_6cb47d5f5df8e7cc() {cs_c5e84308fbc916b7(pls::cs::static_pointer_cast<cs_5dc998c2cffb18c8>(shared_from_this()));}

pls::cs::String cs_5dc998c2cffb18c8::ToString() {return cs_9c863e1edb2b5045(pls::cs::static_pointer_cast<cs_5dc998c2cffb18c8>(shared_from_this()));}

bool cs_5dc998c2cffb18c8::Update() {return cs_f76006a37a507361(pls::cs::static_pointer_cast<cs_5dc998c2cffb18c8>(shared_from_this()));}

static std::int32_t cs_6165a1c4f7bf45ea_value{};

static std::int32_t cs_4eda79c4b15c03ea_value{};

static std::int32_t cs_21099aafdcadb3e3_value{};

static std::int32_t cs_34052c1785c8754e_value{};

void cs_init_5dc998c2cffb18c8(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_6165a1c4f7bf45ea_value,visitor);pls::cs::trace_value(cs_4eda79c4b15c03ea_value,visitor);pls::cs::trace_value(cs_21099aafdcadb3e3_value,visitor);pls::cs::trace_value(cs_34052c1785c8754e_value,visitor);});static pls::cs::TypeInitState state;state.run("system.form.HttpForm",[](){
cs_21099aafdcadb3e3_value = pls::cs::evaluate_type_initializer_field("F:system.form.HttpForm.THSTATE_RUN",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));});
cs_34052c1785c8754e_value = pls::cs::evaluate_type_initializer_field("F:system.form.HttpForm.THSTATE_SUCCESS",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));});
cs_6165a1c4f7bf45ea_value = pls::cs::evaluate_type_initializer_field("F:system.form.HttpForm.THSTATE_FAILURE",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));});

});}

std::int32_t& cs_6165a1c4f7bf45ea(){cs_init_5dc998c2cffb18c8();return cs_6165a1c4f7bf45ea_value;}

std::int32_t& cs_4eda79c4b15c03ea(){cs_init_5dc998c2cffb18c8();return cs_4eda79c4b15c03ea_value;}

std::int32_t& cs_21099aafdcadb3e3(){cs_init_5dc998c2cffb18c8();return cs_21099aafdcadb3e3_value;}

std::int32_t& cs_34052c1785c8754e(){cs_init_5dc998c2cffb18c8();return cs_34052c1785c8754e_value;}

// M:system.form.HttpForm.#ctor(system.form.HttpForm.HttpMethod,system.form.HttpForm.HttpMethod)
pls::cs::Ref<cs_5dc998c2cffb18c8> cs_148ae4520ebf5819(pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_connectMethod,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_resultMethod) { cs_init_5dc998c2cffb18c8();
{ auto cs_this = pls::cs::make_ref<cs_5dc998c2cffb18c8>(); cs_148ae4520ebf5819_init(cs_this,v_connectMethod,v_resultMethod); return cs_this; }
}

void cs_148ae4520ebf5819_init(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_connectMethod,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_resultMethod) {
cs_this->cs_c1863875b9b75cb4 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/form/HttpForm.cs:M:system.form.HttpForm.#ctor(system.form.HttpForm.HttpMethod,system.form.HttpForm.HttpMethod):1427",pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<pls::cs::Object>>::make());
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38dull)); cs_1980f3b6859ab3da_init(pls::cs::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.#ctor(system.form.HttpForm.HttpMethod,system.form.HttpForm.HttpMethod)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_connectMethod; pls::game::cs_require(cs_target)->cs_29c88f84473383fb = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_resultMethod; pls::game::cs_require(cs_target)->cs_10571fb04b30cc3f = cs_value; return cs_value; }());
([&]() { auto cs_receiver = cs_this; auto cs_rhs = true; auto cs_value = cs_rhs; cs_7f2977d6d7eff4a2(static_cast<pls::cs::Ref<cs_5dc998c2cffb18c8>>(cs_receiver),cs_value); return cs_value; }());
}
}
}

// M:system.form.HttpForm.CheckMainWindow
bool cs_caae27da0b1b6167(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.CheckMainWindow",game);
{
return false;
}
}
}
}

// M:system.form.HttpForm.Draw(kairo.unity.ui.Graphics)
void cs_cf0a08b4237473bc(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.Draw(kairo.unity.ui.Graphics)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(pls::cs::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ec59762286c4307; }()); auto cs_right = cs_4eda79c4b15c03ea(); return (cs_left != cs_right); }())) {
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; cs_611b444a90ba63e4(cs_arg0); }());
}
}
}
}
}

// M:system.form.HttpForm.DrawConnect(kairo.unity.ui.Graphics)
void cs_611b444a90ba63e4(pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_5dc998c2cffb18c8();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.DrawConnect(kairo.unity.ui.Graphics)",game);
{
try {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushOrigin(cs_arg0,cs_arg1,cs_arg2); }());});
pls::cs::Ref<cs_e315dac1df3b175d> v_instance_2449 = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }());
std::int32_t v_num_2492 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_2449); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_num2_2535 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_2449); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_totalFrames_2580 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTotalFrames(); }());});
pls::cs::Ref<cs_b728593e3dcffe31> v_resource_2661 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_910a62f2dd3a48eb(cs_receiver); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = pls::game::cs_f32(0x3f000000u); float cs_arg1 = pls::game::cs_f32(0x3f000000u); auto cs_arg2 = pls::game::cs_f32(0x00000000u); auto cs_arg3 = pls::game::cs_f32(0x00000000u); return cs_e8ceb82625f5a10e(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(v_resource_2661); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_num_2492); float cs_arg2 = static_cast<float>(v_num2_2535); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bece04d9ec4c4353(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_totalFrames_2580; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return pls::cs::mul_i32(cs_left,cs_right); }())); auto cs_arg1 = pls::game::cs_f32(0x00000000u); auto cs_arg2 = pls::game::cs_f32(0x00000000u); return cs_54df3686b06bf8e3(cs_arg0,cs_arg1,cs_arg2); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(v_resource_2661); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_num_2492); float cs_arg2 = static_cast<float>(v_num2_2535); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bece04d9ec4c4353(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushFont(cs_arg0); }());});
pls::cs::String v_text_2980 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0072" u"\x0061" u"\x006e" u"\x0073" u"\x006d" u"\x0069" u"\x0073" u"\x0073" u"\x0069" u"\x006f" u"\x006e" u"",12);return cs_literal;}());
std::int32_t v_num3_3011 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_2980; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }());});
for (std::int32_t v_i_3052 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3052; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_totalFrames_2580; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3052; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3052 = cs_new; return cs_old; }())) {
pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/form/HttpForm.cs:M:system.form.HttpForm.DrawConnect(kairo.unity.ui.Graphics):3100",([&]() { auto cs_old = v_text_2980; auto cs_rhs = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002e" u"",1);return cs_literal;}()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_2980 = cs_value; return cs_value; }()));
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_2980; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_2492; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num3_3011; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_2535; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2aull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopFont(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopOrigin(); }());});
} catch(const pls::cs::Exception& cs_caught_878) {auto cs_exception_878=pls::cs::capture_exception(cs_caught_878);
if(pls::cs::exception_is(cs_exception_878,"System.Exception")) {{

}}
else {throw;} }
}
}
}

// M:system.form.HttpForm.Finish
bool cs_03296355172125d8(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.Finish",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(pls::cs::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2951e25803cf3104(cs_receiver); }());
return true;
}
}
}
}

// M:system.form.HttpForm.get_IsCancelable
bool cs_c94b8415150fa1bf(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.get_IsCancelable",game);
{return cs_this->cs_e855bbf60b28c0af;}
}
}
}

// M:system.form.HttpForm.get_ProcessError
bool cs_f102c933220ac9aa(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.get_ProcessError",game);
{return cs_this->cs_bf94607445778940;}
}
}
}

// M:system.form.HttpForm.Init
bool cs_879e1552c1bc0b54(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.Init",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(pls::cs::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = cs_21099aafdcadb3e3(); pls::game::cs_require(cs_target)->cs_4ec59762286c4307 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/form/HttpForm.cs:M:system.form.HttpForm.Init:2082",([&]() -> pls::cs::Ref<cs_408ac5c74e5f3515> { return cs_8aaa473de163f748(); }())); pls::game::cs_require(cs_target)->cs_3ae23c92a69c00cc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/form/HttpForm.cs:M:system.form.HttpForm.Init:2113",([&]() -> pls::cs::Ref<cs_89c0d586cfe20341> { pls::cs::Ref<cs_4c145fe8f008af05> cs_arg0 = cs_this; return cs_bab91f84bee2e3d9(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_88389be19ba33eb1 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_89c0d586cfe20341>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_88389be19ba33eb1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b9636031b790b537(cs_receiver); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = pls::cs::String(u""); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
return true;
}
}
}
}

// M:system.form.HttpForm.Run
void cs_c5e84308fbc916b7(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.Run",game);
{
pls::cs::run_finally([&]() -> void { try {
if (([&](){auto cs_left=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_29c88f84473383fb; }());auto cs_right=pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)>{};return cs_left!=cs_right;}())) {
([&](){auto cs_delegate=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_29c88f84473383fb; }());auto cs_arg0=cs_this;auto cs_arg1=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }());cs_delegate(cs_arg0,cs_arg1);}());
}
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); auto cs_rhs = true; auto cs_value = cs_rhs; cs_961e1edcb72ada4a(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = cs_34052c1785c8754e(); pls::game::cs_require(cs_target)->cs_4ec59762286c4307 = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_879) {auto cs_exception_879=pls::cs::capture_exception(cs_caught_879);
if(pls::cs::exception_is(cs_exception_879,"System.Exception")) {auto v_ex_4374=cs_exception_879;{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/form/HttpForm.cs:M:system.form.HttpForm.Run:4407",([&]() { auto cs_left = pls::cs::String(u""); auto cs_right = pls::game::cs_object_string(pls::cs::box(v_ex_4374)); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); auto cs_rhs = ([&]() -> pls::cs::String { return cs_42eaa879561f279c(); }()); auto cs_value = cs_rhs; cs_491eae3eae7d9573(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); auto cs_rhs = v_ex_4374; auto cs_value = cs_rhs; cs_8d58629cef163b32(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); auto cs_rhs = false; auto cs_value = cs_rhs; cs_961e1edcb72ada4a(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver),cs_value); return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = cs_6165a1c4f7bf45ea(); pls::game::cs_require(cs_target)->cs_4ec59762286c4307 = cs_value; return cs_value; }());
}}
else {throw;} } }, [&]() {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_89c0d586cfe20341>{}; pls::game::cs_require(cs_target)->cs_88389be19ba33eb1 = cs_value; return cs_value; }());
});
}
}
}
}

// M:system.form.HttpForm.set_IsCancelable(System.Boolean)
void cs_6454cbcccfc7db21(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,bool v_value) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.set_IsCancelable(System.Boolean)",game);
{cs_this->cs_e855bbf60b28c0af=v_value;}
}
}
}

// M:system.form.HttpForm.set_ProcessError(System.Boolean)
void cs_7f2977d6d7eff4a2(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,bool v_value) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.set_ProcessError(System.Boolean)",game);
{cs_this->cs_bf94607445778940=v_value;}
}
}
}

// M:system.form.HttpForm.SetConnectMethod(system.form.HttpForm.HttpMethod)
void cs_d35a505f9a32284f(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_method) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.SetConnectMethod(system.form.HttpForm.HttpMethod)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_method; pls::game::cs_require(cs_target)->cs_29c88f84473383fb = cs_value; return cs_value; }());
}
}
}
}

// M:system.form.HttpForm.SetResultMethod(system.form.HttpForm.HttpMethod)
void cs_eeccced648966040(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this,pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)> v_method) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.SetResultMethod(system.form.HttpForm.HttpMethod)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_method; pls::game::cs_require(cs_target)->cs_10571fb04b30cc3f = cs_value; return cs_value; }());
}
}
}
}

// M:system.form.HttpForm.ToString
pls::cs::String cs_9c863e1edb2b5045(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.ToString",game);
{
return ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0048" u"\x0074" u"\x0074" u"\x0070" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"",8);return cs_literal;}());
}
}
}
}

// M:system.form.HttpForm.Update
bool cs_f76006a37a507361(pls::cs::Ref<cs_5dc998c2cffb18c8> cs_this) { cs_init_5dc998c2cffb18c8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.Update",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(pls::cs::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_25913418bfe51bb8(cs_receiver); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ec59762286c4307; }()); auto cs_right = cs_4eda79c4b15c03ea(); return (cs_left != cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ec59762286c4307; }()); auto cs_right = cs_21099aafdcadb3e3(); return (cs_left == cs_right); }())) {
return true;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ec59762286c4307; }()); auto cs_right = cs_34052c1785c8754e(); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = cs_4eda79c4b15c03ea(); pls::game::cs_require(cs_target)->cs_4ec59762286c4307 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());});
if (([&](){auto cs_left=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10571fb04b30cc3f; }());auto cs_right=pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)>{};return cs_left!=cs_right;}())) {
([&](){auto cs_delegate=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10571fb04b30cc3f; }());auto cs_arg0=cs_this;auto cs_arg1=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }());cs_delegate(cs_arg0,cs_arg1);}());
}
return true;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4ec59762286c4307; }()); auto cs_right = cs_6165a1c4f7bf45ea(); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = cs_4eda79c4b15c03ea(); pls::game::cs_require(cs_target)->cs_4ec59762286c4307 = cs_value; return cs_value; }());
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); return cs_afca4e9abd6175de(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver)); }()); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());});
if (([&]() -> bool { auto cs_receiver = cs_this; return cs_f102c933220ac9aa(static_cast<pls::cs::Ref<cs_5dc998c2cffb18c8>>(cs_receiver)); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = ([&]() -> pls::cs::Ref<cs_a2cea92715051fa5> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }()); return cs_afca4e9abd6175de(static_cast<pls::cs::Ref<cs_408ac5c74e5f3515>>(cs_receiver)); }()); return cs_c99c9d4e5fd84a90(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());});
} else if (([&](){auto cs_left=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10571fb04b30cc3f; }());auto cs_right=pls::cs::Delegate<void(pls::cs::Ref<cs_5dc998c2cffb18c8>,pls::cs::Ref<cs_408ac5c74e5f3515>)>{};return cs_left!=cs_right;}())) {
([&](){auto cs_delegate=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_10571fb04b30cc3f; }());auto cs_arg0=cs_this;auto cs_arg1=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ae23c92a69c00cc; }());cs_delegate(cs_arg0,cs_arg1);}());
}
return true;
}
}
return true;
}
}
}
}
}
