// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_17bc7a5b28fcdc2a.hpp"
#include "game_generated_type_4c00a0e0c6e6e2e5.hpp"
#include "game_generated_type_4ccab99c775ca4c5.hpp"
#include "game_generated_type_5ad2213598dfcd5d.hpp"
#include "game_generated_type_d37bccc1c3814fc6.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

void cs_d37bccc1c3814fc6::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_0e31a9f06d96ef28,visitor);pls::cs::trace_value(cs_c7c45a9f1963614b,visitor);pls::cs::trace_value(cs_271d18d953230ddd,visitor);pls::cs::trace_value(cs_d79c777337d31004,visitor);pls::cs::trace_value(cs_b8eaf4c46c566a9c,visitor);}

void cs_d37bccc1c3814fc6::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_0e31a9f06d96ef28);pls::cs::release_value(cs_c7c45a9f1963614b);pls::cs::release_value(cs_271d18d953230ddd);pls::cs::release_value(cs_d79c777337d31004);pls::cs::release_value(cs_b8eaf4c46c566a9c);}

static pls::cs::Ref<cs_d37bccc1c3814fc6> cs_fff40af3d4f61c60_value{};

void cs_init_d37bccc1c3814fc6(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_fff40af3d4f61c60_value,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.panel.FepPanel",[](){

});}

pls::cs::Ref<cs_d37bccc1c3814fc6>& cs_fff40af3d4f61c60(){cs_init_d37bccc1c3814fc6();return cs_fff40af3d4f61c60_value;}

// M:kairo.unity.panel.FepPanel.#ctor
void cs_429433773226956d_init(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.#ctor",kairo);
{

}
}
}

// M:kairo.unity.panel.FepPanel.Add(kairo.unity.panel.Component)
void cs_79684de6b60057f5(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,pls::cs::Ref<cs_5ad2213598dfcd5d> v_component) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.Add(kairo.unity.panel.Component)",kairo);
{
if (pls::game::cs_is<pls::cs::Ref<cs_4c00a0e0c6e6e2e5>>(pls::cs::box(v_component))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_4c00a0e0c6e6e2e5>>(pls::cs::box(v_component)); pls::game::cs_require(cs_target)->cs_0e31a9f06d96ef28 = cs_value; return cs_value; }());
}
if (pls::game::cs_is<pls::cs::Ref<cs_4ccab99c775ca4c5>>(pls::cs::box(v_component))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_4ccab99c775ca4c5>>(pls::cs::box(v_component)); pls::game::cs_require(cs_target)->cs_c7c45a9f1963614b = cs_value; return cs_value; }());
}
if (pls::game::cs_is<pls::cs::Ref<cs_17bc7a5b28fcdc2a>>(pls::cs::box(v_component))) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_271d18d953230ddd; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_17bc7a5b28fcdc2a>>(pls::cs::box(v_component)); pls::game::cs_require(cs_target)->cs_271d18d953230ddd = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::unbox<pls::cs::Ref<cs_17bc7a5b28fcdc2a>>(pls::cs::box(v_component)); pls::game::cs_require(cs_target)->cs_d79c777337d31004 = cs_value; return cs_value; }());
}
}
}
}
}
}

// M:kairo.unity.panel.FepPanel.get_Current
pls::cs::Ref<cs_d37bccc1c3814fc6> cs_17329e66670990a9() { cs_init_d37bccc1c3814fc6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.get_Current",kairo);
{ return cs_fff40af3d4f61c60(); }
}
}

// M:kairo.unity.panel.FepPanel.GetHeight
std::int32_t cs_0c30c87ccedfd300(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.GetHeight",kairo);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull));
}
}
}
}

// M:kairo.unity.panel.FepPanel.GetStringLength(System.String)
std::int32_t cs_73f2425dc6862ef5(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,pls::cs::String v_s) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.GetStringLength(System.String)",kairo);
{
std::int32_t v_num_2814 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_i_2835 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2835; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_s; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2835; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2835 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); char16_t cs_arg0 = ([&]() -> char16_t { pls::cs::String cs_arg0 = v_s; std::int32_t cs_arg1 = v_i_2835; return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ce1d94fc60447e39(cs_receiver,cs_arg0); }())) {
([&]() { auto cs_value = (([&]() -> std::int32_t { auto cs_left = v_num_2814; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); v_num_2814 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() -> std::int32_t { auto cs_left = v_num_2814; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); v_num_2814 = cs_value; return cs_value; }());
}
}
return v_num_2814;
}
}
}
}

// M:kairo.unity.panel.FepPanel.GetWidth
std::int32_t cs_ebcec0cd656cdeae(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.GetWidth",kairo);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull));
}
}
}
}

// M:kairo.unity.panel.FepPanel.IsSimpleChara(System.Char)
bool cs_ce1d94fc60447e39(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,char16_t v_c) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.IsSimpleChara(System.Char)",kairo);
{
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(127)); return (cs_left >= cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(32)); return (cs_left < cs_right); }()))) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(65376)); return (cs_left > cs_right); }())) {
return ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(65439)); return (cs_left <= cs_right); }());
}
return false;
}
return true;
}
}
}
}

// M:kairo.unity.panel.FepPanel.SetComponentListener(System.Object)
void cs_d97b566e589c7a21(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.SetComponentListener(System.Object)",kairo);
{

}
}
}
}

// M:kairo.unity.panel.FepPanel.SetLayoutManager(System.Object)
void cs_c28309dd1ee0c605(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.SetLayoutManager(System.Object)",kairo);
{

}
}
}
}

// M:kairo.unity.panel.FepPanel.SetSoftLabel(System.Int32,System.String)
void cs_88ddecbed02f84a4(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,std::int32_t v_key,pls::cs::String v_text) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.SetSoftLabel(System.Int32,System.String)",kairo);
{

}
}
}
}

// M:kairo.unity.panel.FepPanel.Start
void cs_eb726d3fffc72be0(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.Start",kairo);
{
([&]() { auto cs_value = cs_this; cs_fff40af3d4f61c60() = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); pls::game::cs_require(cs_target)->cs_b8eaf4c46c566a9c = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e31a9f06d96ef28; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c02206d24c9889b2; }()); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c7c45a9f1963614b; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e7444216b8176cd4; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c7c45a9f1963614b; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_84f6d6bdc01421d0; }()); pls::cs::String cs_arg3 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_271d18d953230ddd; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba2d5e888232cb91; }()); pls::cs::String cs_arg4 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d79c777337d31004; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba2d5e888232cb91; }()); std::int32_t cs_arg5 = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c7c45a9f1963614b; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_03f115a488ad951b; }()); pls::kairo::start_text_panel(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());});
}
}
}
}

// M:kairo.unity.panel.FepPanel.Update
bool cs_c54513f5ba5b96e8(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this) { cs_init_d37bccc1c3814fc6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.FepPanel.Update",kairo);
{
if ((pls::generated::cs_191c63b05b3afe39() && ([&]() -> bool { auto cs_left = ([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_b8eaf4c46c566a9c; auto cs_new = pls::cs::sub_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_b8eaf4c46c566a9c = cs_new; return cs_new; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
return false;
}
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::kairo::text_panel_finished(); }());})))) {
return false;
}
([&]() { auto cs_value = pls::cs::Ref<cs_d37bccc1c3814fc6>{}; cs_fff40af3d4f61c60() = cs_value; return cs_value; }());
pls::cs::Array<pls::cs::String> v_fepPanelResult_2449 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { return pls::kairo::text_panel_result(); }());});
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c7c45a9f1963614b; }()); auto cs_value = ([&]() { auto cs_array = v_fepPanelResult_2449; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_e7444216b8176cd4 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_array = v_fepPanelResult_2449; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); pls::cs::Ref<cs_5ad2213598dfcd5d> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_271d18d953230ddd; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_24e6f1c38df06a63(cs_arg0,cs_arg1,cs_arg2); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); pls::cs::Ref<cs_5ad2213598dfcd5d> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d79c777337d31004; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_24e6f1c38df06a63(cs_arg0,cs_arg1,cs_arg2); }());
}
return true;
}
}
}
}
}
