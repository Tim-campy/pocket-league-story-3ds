// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0286a0dbe9da0b33.hpp"
#include "game_generated_type_487b2c2b346d5c73.hpp"
#include "game_generated_type_dd50df46561f4be9.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
namespace pls::game {

void cs_0286a0dbe9da0b33::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_6e5c685dce0d605a,visitor);pls::cs::trace_value(cs_ef63d4d4b6ab550f,visitor);pls::cs::trace_value(cs_7f418c9c27e5c628,visitor);pls::cs::trace_value(cs_7c40c7d83d91cf74,visitor);pls::cs::trace_value(cs_1931e59a708b44ff,visitor);pls::cs::trace_value(cs_71eb51b3f792969a,visitor);pls::cs::trace_value(cs_49c162566c3d94ef,visitor);}

void cs_0286a0dbe9da0b33::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_6e5c685dce0d605a);pls::cs::release_value(cs_ef63d4d4b6ab550f);pls::cs::release_value(cs_7f418c9c27e5c628);pls::cs::release_value(cs_7c40c7d83d91cf74);pls::cs::release_value(cs_1931e59a708b44ff);pls::cs::release_value(cs_71eb51b3f792969a);pls::cs::release_value(cs_49c162566c3d94ef);}

void cs_init_0286a0dbe9da0b33(){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.Dialog",[](){

});}

// M:kairo.unity.ui.Dialog.#ctor(System.Int32,System.String)
pls::cs::Ref<cs_0286a0dbe9da0b33> cs_63545d46c6887c12(std::int32_t v_type,pls::cs::String v_title) { cs_init_0286a0dbe9da0b33();
{ auto cs_this = pls::cs::make_ref<cs_0286a0dbe9da0b33>(); cs_63545d46c6887c12_init(cs_this,v_type,v_title); return cs_this; }
}

void cs_63545d46c6887c12_init(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this,std::int32_t v_type,pls::cs::String v_title) {
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_71eb51b3f792969a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_title; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_ef63d4d4b6ab550f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Font> { return pls::cs::make_ref<pls::kairo::Font>(); }()); pls::game::cs_require(cs_target)->cs_6e5c685dce0d605a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String(std::u16string(u"",0)); pls::game::cs_require(cs_target)->cs_7f418c9c27e5c628 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffff000000ull)); return cs_ca48ee9e5dbe6d98(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_1931e59a708b44ff = cs_value; return cs_value; }());
}
}

// M:kairo.unity.ui.Dialog.SetButtons(System.String[])
void cs_f93da55cc1dd9ec3(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this,pls::cs::Array<pls::cs::String> v_buttons) { cs_init_0286a0dbe9da0b33();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_buttons; pls::game::cs_require(cs_target)->cs_7c40c7d83d91cf74 = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.ui.Dialog.SetText(System.String)
void cs_d53653cbf2469429(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this,pls::cs::String v_msg) { cs_init_0286a0dbe9da0b33();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Array<pls::cs::String> v_array_920 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_msg; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_920; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_7f418c9c27e5c628 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7f418c9c27e5c628; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4)); pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x000a" u"",1)); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }()); pls::game::cs_require(cs_target)->cs_7f418c9c27e5c628 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_49c162566c3d94ef = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (v_array_920).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_920; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_49c162566c3d94ef = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.ui.Dialog.Show
std::int32_t cs_1727d3688d4d03e6(pls::cs::Ref<cs_0286a0dbe9da0b33> cs_this) { cs_init_0286a0dbe9da0b33();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::String v_text_1364 = pls::cs::String{};
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7c40c7d83d91cf74; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"",0)); v_text_1364 = cs_value; return cs_value; }());
for (std::int32_t v_i_1432 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1432; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7c40c7d83d91cf74; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1432; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1432 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = v_i_1432; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_old = v_text_1364; auto cs_rhs = pls::cs::String(std::u16string(u"\x002c" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1364 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_text_1364; auto cs_rhs = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7c40c7d83d91cf74; }()); auto cs_index = v_i_1432; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1364 = cs_value; return cs_value; }());
}
}
std::int32_t v_num_1559 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_71eb51b3f792969a; }()); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ef63d4d4b6ab550f; }()); pls::cs::String cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7f418c9c27e5c628; }()); pls::cs::String cs_arg3 = v_text_1364; return pls::kairo::show_dialog(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_49c162566c3d94ef; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ((([&]() -> bool { auto cs_left = v_num_1559; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num_1559; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()))))) {
([&]() -> bool { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_49c162566c3d94ef; }()); return cs_25bba6e14d51039b(cs_arg0); }());
}
return v_num_1559;
}
}
}
}
