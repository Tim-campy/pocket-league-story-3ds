// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_4a8bef2ab48b32d7.hpp"
#include "game_generated_type_4c145fe8f008af05.hpp"
#include "game_generated_type_6485f92c2f04639f.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "game_generated_type_a2cea92715051fa5.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

void cs_6485f92c2f04639f::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::kairo::FormManagerBase::trace_edges(visitor);pls::cs::trace_value(cs_f7c726d5f7453081,visitor);pls::cs::trace_value(cs_213b43c6313167d5,visitor);pls::cs::trace_value(cs_b1f64c12ee069ce4,visitor);pls::cs::trace_value(cs_67befa25cd8b724d,visitor);pls::cs::trace_value(cs_935c4effb0a9f4a2,visitor);pls::cs::trace_value(cs_c66d2c7306a933ee,visitor);pls::cs::trace_value(cs_54b129fa469a5123,visitor);pls::cs::trace_value(cs_e59b36fb7c335c88,visitor);pls::cs::trace_value(cs_b3ff53c3ce1a0ba1,visitor);pls::cs::trace_value(cs_fc84ac8886107388,visitor);pls::cs::trace_value(cs_b808145f1887387b,visitor);pls::cs::trace_value(cs_878ddfd231392189,visitor);}

void cs_6485f92c2f04639f::release_edges(){pls::kairo::FormManagerBase::release_edges();pls::cs::release_value(cs_f7c726d5f7453081);pls::cs::release_value(cs_213b43c6313167d5);pls::cs::release_value(cs_b1f64c12ee069ce4);pls::cs::release_value(cs_67befa25cd8b724d);pls::cs::release_value(cs_935c4effb0a9f4a2);pls::cs::release_value(cs_c66d2c7306a933ee);pls::cs::release_value(cs_54b129fa469a5123);pls::cs::release_value(cs_e59b36fb7c335c88);pls::cs::release_value(cs_b3ff53c3ce1a0ba1);pls::cs::release_value(cs_fc84ac8886107388);pls::cs::release_value(cs_b808145f1887387b);pls::cs::release_value(cs_878ddfd231392189);}

void cs_6485f92c2f04639f::Drawn() {cs_aef35d29fb0c05ad(pls::cs::static_pointer_cast<cs_6485f92c2f04639f>(shared_from_this()));}

void cs_6485f92c2f04639f::PreDraw() {cs_9676c9e84aa6f245(pls::cs::static_pointer_cast<cs_6485f92c2f04639f>(shared_from_this()));}

void cs_6485f92c2f04639f::PreUpdate() {cs_b0991735904063ea(pls::cs::static_pointer_cast<cs_6485f92c2f04639f>(shared_from_this()));}

void cs_6485f92c2f04639f::Resume() {cs_630e1ac8aa82b9e5(pls::cs::static_pointer_cast<cs_6485f92c2f04639f>(shared_from_this()));}

void cs_6485f92c2f04639f::Updated() {cs_4defd304e2135f12(pls::cs::static_pointer_cast<cs_6485f92c2f04639f>(shared_from_this()));}

static pls::cs::Ref<cs_6485f92c2f04639f> cs_84bcc52ce28bc88e_value{};

void cs_init_6485f92c2f04639f(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_84bcc52ce28bc88e_value,visitor);});static pls::cs::TypeInitState state;state.run("form.FormManager",[](){
cs_84bcc52ce28bc88e_value = pls::cs::evaluate_type_initializer_field("F:form.FormManager.instance_",[&](){return pls::cs::Ref<cs_6485f92c2f04639f>{};});

});}

pls::cs::Ref<cs_6485f92c2f04639f>& cs_84bcc52ce28bc88e(){cs_init_6485f92c2f04639f();return cs_84bcc52ce28bc88e_value;}

// M:form.FormManager.#ctor
pls::cs::Ref<cs_6485f92c2f04639f> cs_ec84f3d30b68a2f9() { cs_init_6485f92c2f04639f();
{ auto cs_this = pls::cs::make_ref<cs_6485f92c2f04639f>(); cs_ec84f3d30b68a2f9_init(cs_this); return cs_this; }
}

void cs_ec84f3d30b68a2f9_init(pls::cs::Ref<cs_6485f92c2f04639f> cs_this) {
([&]() { pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(cs_this)->source_construct(); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.#ctor",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); pls::game::cs_require(cs_target)->cs_f7c726d5f7453081 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6485f92c2f04639f>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_dc9257b0bbd34fc9(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_935c4effb0a9f4a2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_b3ff53c3ce1a0ba1 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_fc84ac8886107388 = cs_value; return cs_value; }());
}
}
}

// M:form.FormManager.Drawn
void cs_aef35d29fb0c05ad(pls::cs::Ref<cs_6485f92c2f04639f> cs_this) { cs_init_6485f92c2f04639f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.Drawn",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->source_Drawn(); }());});
}
}
}
}

// M:form.FormManager.GetFps
std::int32_t cs_3dd794f17d9de88a(pls::cs::Ref<cs_6485f92c2f04639f> cs_this) { cs_init_6485f92c2f04639f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.GetFps",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_935c4effb0a9f4a2; }());
}
}
}
}

// M:form.FormManager.GetInstance
pls::cs::Ref<cs_6485f92c2f04639f> cs_2daa26d559c2fca8() { cs_init_6485f92c2f04639f();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.GetInstance",game);
{
if (([&]() { auto cs_left = pls::cs::box(cs_84bcc52ce28bc88e()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/form/FormManager.cs:M:form.FormManager.GetInstance:841",([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_ec84f3d30b68a2f9(); }())); cs_84bcc52ce28bc88e() = cs_value; return cs_value; }());
}
return cs_84bcc52ce28bc88e();
}
}
}

// M:form.FormManager.GetTargetFps
std::int32_t cs_db89980015f74cec(pls::cs::Ref<cs_6485f92c2f04639f> cs_this) { cs_init_6485f92c2f04639f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.GetTargetFps",game);
{
return ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_67befa25cd8b724d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
}
}
}
}

// M:form.FormManager.PreDraw
void cs_9676c9e84aa6f245(pls::cs::Ref<cs_6485f92c2f04639f> cs_this) { cs_init_6485f92c2f04639f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.PreDraw",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->source_PreDraw(); }());});
}
}
}
}

// M:form.FormManager.PreUpdate
void cs_b0991735904063ea(pls::cs::Ref<cs_6485f92c2f04639f> cs_this) { cs_init_6485f92c2f04639f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.PreUpdate",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->source_PreUpdate(); }());});
pls::cs::Ref<pls::kairo::FormBase> v_topForm_1025 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetTopForm(); }());});
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_topForm_1025); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_a2cea92715051fa5> v_subForm_1095 = pls::cs::unbox<pls::cs::Ref<cs_a2cea92715051fa5>>(pls::cs::box(v_topForm_1025));
if ((((([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_topForm_1025); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }());}); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b3ff53c3ce1a0ba1; }()); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_subForm_1095; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f99225d8bef89680; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_subForm_1095; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f99225d8bef89680; }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fc84ac8886107388; }()); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_subForm_1095; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48681753fb5565a9; }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b808145f1887387b; }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = v_subForm_1095; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); pls::game::cs_require(cs_target)->cs_87d3f72b4c739f68 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_subForm_1095; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f99225d8bef89680; }()); pls::game::cs_require(cs_target)->cs_fc84ac8886107388 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_subForm_1095; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48681753fb5565a9; }()); pls::game::cs_require(cs_target)->cs_b808145f1887387b = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(v_topForm_1025); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetId(); }());}); pls::game::cs_require(cs_target)->cs_b3ff53c3ce1a0ba1 = cs_value; return cs_value; }());
}
}
}
}

// M:form.FormManager.Resume
void cs_630e1ac8aa82b9e5(pls::cs::Ref<cs_6485f92c2f04639f> cs_this) { cs_init_6485f92c2f04639f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.Resume",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->source_Resume(); }());});
}
}
}
}

// M:form.FormManager.SetTargetFps(System.Int32)
void cs_dc9257b0bbd34fc9(pls::cs::Ref<cs_6485f92c2f04639f> cs_this,std::int32_t v_fps) { cs_init_6485f92c2f04639f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.SetTargetFps(System.Int32)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_fps; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_67befa25cd8b724d = cs_value; return cs_value; }());
}
}
}
}

// M:form.FormManager.StopVibrator
void cs_c1e8dc738f793cd7(pls::cs::Ref<cs_6485f92c2f04639f> cs_this) { cs_init_6485f92c2f04639f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.StopVibrator",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_e59b36fb7c335c88 = cs_value; return cs_value; }());
}
}
}
}

// M:form.FormManager.Updated
void cs_4defd304e2135f12(pls::cs::Ref<cs_6485f92c2f04639f> cs_this) { cs_init_6485f92c2f04639f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.Updated",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_1496 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
std::int32_t v_num_1537 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_67befa25cd8b724d; }());
if ((pls::generated::cs_a0d04541596b7678() && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());})); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyState(cs_arg0); }());}))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); v_num_1537 = cs_value; return cs_value; }());
}
std::int32_t v_num2_1652 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull)); auto cs_right = v_num_1537; return pls::cs::div_i32(cs_left,cs_right); }());
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b1f64c12ee069ce4; }())))) {
try {
pls::cs::Ref<pls::kairo::Canvas> v_instance2_1725 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());});
pls::cs::Ref<cs_4a8bef2ab48b32d7> v_surfaceManager_1783 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_4a8bef2ab48b32d7> {auto cs_canvas=v_instance2_1725;return pls::cs::unbox<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(pls::game::cs_require(cs_canvas)->GetSourceSurfaceManager());}());});
while ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); auto cs_right = ([&]() -> std::int64_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f7c726d5f7453081; }()); return pls::cs::sub_i64(cs_left,cs_right); }()); return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f7c726d5f7453081; }()); return pls::cs::sub_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(v_num2_1652); return (cs_left < cs_right); }()))) {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); cs_26244a61d0d2e16c(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(v_surfaceManager_1783); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_70b3e83e4dd8bf96(cs_receiver); }());
}
} catch(const pls::cs::Exception& cs_caught_637) {auto cs_exception_637=pls::cs::capture_exception(cs_caught_637);
if(pls::cs::exception_is(cs_exception_637,"System.Exception")) {{

}}
else {throw;} }
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); pls::game::cs_require(cs_target)->cs_f7c726d5f7453081 = cs_value; return cs_value; }());
std::int64_t v_num3_2116 = ([&]() -> std::int64_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f7c726d5f7453081; }()); return pls::cs::sub_i64(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num3_2116; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(v_num2_1652); v_num3_2116 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_213b43c6313167d5; }()); return pls::cs::sub_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3e8ull))); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c66d2c7306a933ee; }()); pls::game::cs_require(cs_target)->cs_935c4effb0a9f4a2 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_935c4effb0a9f4a2; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::game::cs_require(cs_target)->cs_935c4effb0a9f4a2 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c66d2c7306a933ee = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); pls::game::cs_require(cs_target)->cs_213b43c6313167d5 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_c66d2c7306a933ee; auto cs_new = pls::cs::add_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_c66d2c7306a933ee = cs_new; return cs_old; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_878ddfd231392189; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_878ddfd231392189 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->source_Updated(); }());});
}
}
}
}
}
