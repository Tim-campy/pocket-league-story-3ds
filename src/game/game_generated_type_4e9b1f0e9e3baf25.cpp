// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_4e9b1f0e9e3baf25.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_9b21b86f0d2914e0.hpp"
#include "generated/portable_generated_type_67cd241ab51652f1.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
#include "generated/portable_generated_type_67cd241ab51652f1_templates.hpp"
namespace pls::game {

void cs_4e9b1f0e9e3baf25::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_7532de0b2467e888,visitor);pls::cs::trace_value(cs_7cc420fdd246795c,visitor);}

void cs_4e9b1f0e9e3baf25::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_7532de0b2467e888);pls::cs::release_value(cs_7cc420fdd246795c);}

static pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_f0c6ab846fbc94dd_value{};

void cs_init_4e9b1f0e9e3baf25(){static pls::cs::TypeInitState state;state.run("surface.TouchEffectManager",[](){

});}

pls::cs::Ref<cs_4e9b1f0e9e3baf25>& cs_f0c6ab846fbc94dd(){cs_init_4e9b1f0e9e3baf25();return cs_f0c6ab846fbc94dd_value;}

// M:surface.TouchEffectManager.#ctor
pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_58437f0f251471b8() { cs_init_4e9b1f0e9e3baf25();
{ auto cs_this = pls::cs::make_ref<cs_4e9b1f0e9e3baf25>(); cs_58437f0f251471b8_init(cs_this); return cs_this; }
}

void cs_58437f0f251471b8_init(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this) {
cs_this->cs_7532de0b2467e888 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/surface/TouchEffectManager.cs:M:surface.TouchEffectManager.#ctor:260",([&]() -> pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>> { return pls::generated::cs_f349692afe9e225e<pls::cs::Ref<cs_9b21b86f0d2914e0>>(); }()));
cs_this->cs_7cc420fdd246795c = pls::source_allocations::completed("new_object","src/Assembly-CSharp/surface/TouchEffectManager.cs:M:surface.TouchEffectManager.#ctor:343",([&]() -> pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>> { return pls::generated::cs_f349692afe9e225e<pls::cs::Ref<cs_9b21b86f0d2914e0>>(); }()));
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.#ctor",game);
{

}
}
}

// M:surface.TouchEffectManager.Add(surface.TouchEffect)
void cs_95d1f01cac020884(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9b21b86f0d2914e0> v_effect) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.Add(surface.TouchEffect)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); pls::cs::Ref<cs_9b21b86f0d2914e0> cs_arg0 = v_effect; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_7969ffc067486ca6(cs_receiver,cs_arg0); }());});
}
}
}
}

// M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)
pls::cs::Ref<cs_9b21b86f0d2914e0> cs_2be5d3359f23ac72(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component,pls::cs::Ref<pls::cs::Object> v_arg) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)",game);
{
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_2818 = pls::cs::Ref<cs_9b21b86f0d2914e0>{};
for (std::int32_t v_i_2850 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2850; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7cc420fdd246795c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2850; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2850 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect2_2910 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7cc420fdd246795c; }())); std::int32_t cs_arg0 = v_i_2850; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); pls::cs::Ref<cs_9b21b86f0d2914e0> cs_arg0 = v_touchEffect2_2910; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c08c9d3910849f27(cs_receiver,cs_arg0); }());})) {
continue;
}
([&]() { auto cs_value = v_touchEffect2_2910; v_touchEffect_2818 = cs_value; return cs_value; }());
break;
}
if (([&]() { auto cs_left = pls::cs::box(v_touchEffect_2818); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7cc420fdd246795c; }())); pls::cs::Ref<cs_9b21b86f0d2914e0> cs_arg0 = ([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/surface/TouchEffectManager.cs:M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object):3118",([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { return cs_2a1179e902640c2a(); }())); v_touchEffect_2818 = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_7969ffc067486ca6(cs_receiver,cs_arg0); }());});
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(v_touchEffect_2818); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = v_surface; std::int32_t cs_arg1 = v_id; float cs_arg2 = v_x; float cs_arg3 = v_y; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component; pls::cs::Ref<pls::cs::Object> cs_arg5 = v_arg; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5e534500fa7e2dfa(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); pls::cs::Ref<cs_9b21b86f0d2914e0> cs_arg0 = v_touchEffect_2818; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_95d1f01cac020884(cs_receiver,cs_arg0); }());
return v_touchEffect_2818;
}
}
}
}

// M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)
pls::cs::Ref<cs_9b21b86f0d2914e0> cs_0f9186fdb6403602(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)",game);
{
return ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = v_surface; std::int32_t cs_arg1 = v_id; float cs_arg2 = v_x; float cs_arg3 = v_y; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component; pls::cs::Ref<pls::cs::Object> cs_arg5 = pls::cs::Ref<pls::cs::Object>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2be5d3359f23ac72(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
}

// M:surface.TouchEffectManager.Clear
void cs_8bb33e3a9f88735c(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.Clear",game);
{
for (std::int32_t v_num_1184 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1184; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1184; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1184 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); std::int32_t cs_arg0 = v_num_1184; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_8e64ae9ae7382110(cs_receiver); }());});
}
}
}
}

// M:surface.TouchEffectManager.Draw(kairo.unity.ui.Graphics)
void cs_1fafefacc1319a3f(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.Draw(kairo.unity.ui.Graphics)",game);
{
for (std::int32_t v_i_952 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_952; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_952; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_952 = cs_new; return cs_old; }())) {
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_i_952; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());})); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fb03a4148f6cc986(cs_receiver,cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_809) {auto cs_exception_809=pls::cs::capture_exception(cs_caught_809);
if(pls::cs::exception_is(cs_exception_809,"System.Exception")) {auto v_t_1054=cs_exception_809;{
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t_1054; return pls::generated::cs_b686603f380b2527(cs_arg0); }());});
}
}}
else {throw;} }
}
}
}
}
}

// M:surface.TouchEffectManager.Frame
void cs_27b32c30d93592bb(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.Frame",game);
{
for (std::int32_t v_num_702 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_702; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_702; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_702 = cs_new; return cs_old; }())) {
{
bool v_recoveredCondition_793_761 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_702; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());})); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b7db73fe142457a(cs_receiver); }());
if (v_recoveredCondition_793_761) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_702; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_cc1549d9ed88f4a6(cs_receiver,cs_arg0); }());});
}
}
}
}
}
}
}

// M:surface.TouchEffectManager.GetInstance
pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_81e284f6e842da85() { cs_init_4e9b1f0e9e3baf25();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.GetInstance",game);
{
if (([&]() { auto cs_left = pls::cs::box(cs_f0c6ab846fbc94dd()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return cs_f0c6ab846fbc94dd();
}
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/surface/TouchEffectManager.cs:M:surface.TouchEffectManager.GetInstance:541",([&]() -> pls::cs::Ref<cs_4e9b1f0e9e3baf25> { return cs_58437f0f251471b8(); }())); cs_f0c6ab846fbc94dd() = cs_value; return cs_value; }());
return cs_f0c6ab846fbc94dd();
}
}
}

// M:surface.TouchEffectManager.RemoveComponentId(kairo.unity.surface.SurfaceBase,System.Int32)
void cs_e4ad1dff02a4bcf7(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_componentId) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveComponentId(kairo.unity.surface.SurfaceBase,System.Int32)",game);
{
for (std::int32_t v_num_1953 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1953; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1953; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1953 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_2017 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_1953; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());});
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_touchEffect_2017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); auto cs_right = pls::cs::box(v_surface); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { std::int64_t cs_arg0 = ([&]() { auto cs_receiver = v_touchEffect_2017; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4f16085a44631993; }()); return cs_864b2cef1e2afbf2(cs_arg0); }()); auto cs_right = v_componentId; return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); std::int32_t cs_arg0 = v_num_1953; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
}
}
}
}
}

// M:surface.TouchEffectManager.RemoveComponentKey(kairo.unity.surface.SurfaceBase,System.Int64)
void cs_a36c657b19114aa4(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int64_t v_componentKey) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveComponentKey(kairo.unity.surface.SurfaceBase,System.Int64)",game);
{
for (std::int32_t v_num_2288 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_2288; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_2288; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_2288 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_9b21b86f0d2914e0> v_touchEffect_2352 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_2288; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());});
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_touchEffect_2352; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); auto cs_right = pls::cs::box(v_surface); return cs_left == cs_right; }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_touchEffect_2352; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4f16085a44631993; }()); auto cs_right = v_componentKey; return (cs_left == cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); std::int32_t cs_arg0 = v_num_2288; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
}
}
}
}
}

// M:surface.TouchEffectManager.RemoveEffect(surface.TouchEffect)
void cs_d673003b2f08f29f(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9b21b86f0d2914e0> v_effect) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveEffect(surface.TouchEffect)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); pls::cs::Ref<cs_9b21b86f0d2914e0> cs_arg0 = v_effect; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_dcec283a3ce35483(cs_receiver,cs_arg0); }());});
}
}
}
}

// M:surface.TouchEffectManager.RemoveEffect(System.Int32)
void cs_186b1c2eff63e43a(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,std::int32_t v_index) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveEffect(System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_cc1549d9ed88f4a6(cs_receiver,cs_arg0); }());});
}
}
}
}

// M:surface.TouchEffectManager.RemoveId(System.Int32)
void cs_bb7358e468d1296c(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,std::int32_t v_id) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveId(System.Int32)",game);
{
for (std::int32_t v_num_1731 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1731; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1731; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1731 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_1731; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); std::int32_t cs_arg0 = v_num_1731; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
}
}
}
}
}

// M:surface.TouchEffectManager.RemoveSurface(kairo.unity.surface.SurfaceBase)
void cs_71533940ab051be6(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface) { cs_init_4e9b1f0e9e3baf25();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveSurface(kairo.unity.surface.SurfaceBase)",game);
{
for (std::int32_t v_num_1538 = ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_1538; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_1538; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_1538 = cs_new; return cs_old; }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_9b21b86f0d2914e0> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7532de0b2467e888; }())); std::int32_t cs_arg0 = v_num_1538; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); auto cs_right = pls::cs::box(v_surface); return cs_left == cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(cs_this); std::int32_t cs_arg0 = v_num_1538; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_186b1c2eff63e43a(cs_receiver,cs_arg0); }());
}
}
}
}
}
}
}
