// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_6517d63c01870958.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_f3ea616d36334b95.hpp"
namespace pls::game {

void cs_3a3d09f9e75a32d2::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_0c00171d2e322a58,visitor);pls::cs::trace_value(cs_0203776c95852fed,visitor);pls::cs::trace_value(cs_830652d422733c85,visitor);pls::cs::trace_value(cs_1ec368037b30316d,visitor);pls::cs::trace_value(cs_0dcfa10d1674b264,visitor);pls::cs::trace_value(cs_2445e8abe98d39d6,visitor);pls::cs::trace_value(cs_bf6f23b78c4832ac,visitor);pls::cs::trace_value(cs_1d1d519d3428e730,visitor);pls::cs::trace_value(cs_8c5afd45472d0f2e,visitor);pls::cs::trace_value(cs_9019c7ffefab6ad8,visitor);pls::cs::trace_value(cs_91c876c3ea20d77d,visitor);pls::cs::trace_value(cs_ec0be04bf6c6d5ad,visitor);pls::cs::trace_value(cs_48f24d93a00e0ab4,visitor);}

void cs_3a3d09f9e75a32d2::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_0c00171d2e322a58);pls::cs::release_value(cs_0203776c95852fed);pls::cs::release_value(cs_830652d422733c85);pls::cs::release_value(cs_1ec368037b30316d);pls::cs::release_value(cs_0dcfa10d1674b264);pls::cs::release_value(cs_2445e8abe98d39d6);pls::cs::release_value(cs_bf6f23b78c4832ac);pls::cs::release_value(cs_1d1d519d3428e730);pls::cs::release_value(cs_8c5afd45472d0f2e);pls::cs::release_value(cs_9019c7ffefab6ad8);pls::cs::release_value(cs_91c876c3ea20d77d);pls::cs::release_value(cs_ec0be04bf6c6d5ad);pls::cs::release_value(cs_48f24d93a00e0ab4);}

void cs_init_3a3d09f9e75a32d2(){static pls::cs::TypeInitState state;state.run("kairo.unity.surface.TouchComponent",[](){

});}

// M:kairo.unity.surface.TouchComponent.#ctor
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_4766c761098d0094() { cs_init_3a3d09f9e75a32d2();
{ auto cs_this = pls::cs::make_ref<cs_3a3d09f9e75a32d2>(); cs_4766c761098d0094_init(cs_this); return cs_this; }
}

void cs_4766c761098d0094_init(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchComponent.#ctor",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0541e8aace93207c(cs_receiver); }());
}
}
}

// M:kairo.unity.surface.TouchComponent.#ctor(kairo.unity.surface.TouchComponent)
pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_beb950d6aeeb844b(pls::cs::Ref<cs_3a3d09f9e75a32d2> v_copy) { cs_init_3a3d09f9e75a32d2();
{ auto cs_this = pls::cs::make_ref<cs_3a3d09f9e75a32d2>(); cs_beb950d6aeeb844b_init(cs_this,v_copy); return cs_this; }
}

void cs_beb950d6aeeb844b_init(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_copy) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchComponent.#ctor(kairo.unity.surface.TouchComponent)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0541e8aace93207c(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8c5afd45472d0f2e; }()); pls::game::cs_require(cs_target)->cs_8c5afd45472d0f2e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9019c7ffefab6ad8; }()); pls::game::cs_require(cs_target)->cs_9019c7ffefab6ad8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c00171d2e322a58; }()); pls::game::cs_require(cs_target)->cs_0c00171d2e322a58 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); pls::game::cs_require(cs_target)->cs_0203776c95852fed = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }()); pls::game::cs_require(cs_target)->cs_830652d422733c85 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }()); pls::game::cs_require(cs_target)->cs_1ec368037b30316d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0dcfa10d1674b264; }()); pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2445e8abe98d39d6; }()); pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); pls::game::cs_require(cs_target)->cs_bf6f23b78c4832ac = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/surface/TouchComponent.cs:M:kairo.unity.surface.TouchComponent.#ctor(kairo.unity.surface.TouchComponent):737",([&]() -> pls::cs::Ref<cs_6517d63c01870958> { pls::cs::Ref<cs_6517d63c01870958> cs_arg0 = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); return cs_a791f152e6170c69(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_1d1d519d3428e730 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_91c876c3ea20d77d; }()); pls::game::cs_require(cs_target)->cs_91c876c3ea20d77d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_ec0be04bf6c6d5ad = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.surface.TouchComponent.Check(System.Int32)
bool cs_458dbabeee49f986(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,std::int32_t v_bit) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchComponent.Check(System.Int32)",kairo);
{
std::int32_t v_num_1600 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); v_num_1600 = cs_value; return cs_value; }());
}
return ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_num_1600; auto cs_right = v_bit; return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }());
}
}
}
}

// M:kairo.unity.surface.TouchComponent.GetId(System.Int64)
std::int32_t cs_864b2cef1e2afbf2(std::int64_t v_key) { cs_init_3a3d09f9e75a32d2();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchComponent.GetId(System.Int64)",kairo);
{
return ([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::int32_t> { std::int64_t cs_arg0 = v_key; return cs_b37fd969c7a5953c(cs_arg0); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
}
}

// M:kairo.unity.surface.TouchComponent.GetKey
std::int64_t cs_994ec0fb562812be(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchComponent.GetKey",kairo);
{
return ([&]() -> std::int64_t { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); return cs_e0f91f73482fc418(cs_arg0,cs_arg1); }());
}
}
}
}

// M:kairo.unity.surface.TouchComponent.GetKey(System.Int32,System.Int32)
std::int64_t cs_e0f91f73482fc418(std::int32_t v_id,std::int32_t v_value) { cs_init_3a3d09f9e75a32d2();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchComponent.GetKey(System.Int32,System.Int32)",kairo);
{
return ([&]() -> std::int64_t { std::int32_t cs_arg0 = v_id; std::int32_t cs_arg1 = v_value; return cs_d08f1252d303b1f0(cs_arg0,cs_arg1); }());
}
}
}

// M:kairo.unity.surface.TouchComponent.GetPriority
std::int32_t cs_c6d10dc3c886403b(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchComponent.GetPriority",kairo);
{
std::int32_t v_result_1736 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_48f24d93a00e0ab4; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff6ull)); v_result_1736 = cs_value; return cs_value; }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_result_1736 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); v_result_1736 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); v_result_1736 = cs_value; return cs_value; }());
}
}
return v_result_1736;
}
}
}
}

// M:kairo.unity.surface.TouchComponent.Init
void cs_0541e8aace93207c(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchComponent.Init",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); pls::game::cs_require(cs_target)->cs_9019c7ffefab6ad8 = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_8c5afd45472d0f2e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_9326c27a92cfea3a>{}; pls::game::cs_require(cs_target)->cs_0c00171d2e322a58 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_0203776c95852fed = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_830652d422733c85 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_1ec368037b30316d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_0dcfa10d1674b264 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_2445e8abe98d39d6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_bf6f23b78c4832ac = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_6517d63c01870958>{}; pls::game::cs_require(cs_target)->cs_1d1d519d3428e730 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_91c876c3ea20d77d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_ec0be04bf6c6d5ad = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_48f24d93a00e0ab4 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32,System.Int32)
void cs_3b828f63c1e0892e(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,std::int32_t v_x,std::int32_t v_y,std::int32_t v_frame) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32,System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_8c5afd45472d0f2e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_9019c7ffefab6ad8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_frame; pls::game::cs_require(cs_target)->cs_91c876c3ea20d77d = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32)
void cs_82cc310ddbc4a2ea(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,std::int32_t v_x,std::int32_t v_y) { cs_init_3a3d09f9e75a32d2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchComponent.SetPaint(System.Int32,System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_8c5afd45472d0f2e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_9019c7ffefab6ad8 = cs_value; return cs_value; }());
}
}
}
}
}
