// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0286a0dbe9da0b33.hpp"
#include "game_generated_type_17bc7a5b28fcdc2a.hpp"
#include "game_generated_type_4c00a0e0c6e6e2e5.hpp"
#include "game_generated_type_4ccab99c775ca4c5.hpp"
#include "game_generated_type_5ad2213598dfcd5d.hpp"
#include "game_generated_type_8bf13b560e1e05e9.hpp"
#include "game_generated_type_d37bccc1c3814fc6.hpp"
#include "game_generated_type_e57cdf426b59f0ee.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_86e62a3c0e632a0f.hpp"
namespace pls::game {

void cs_8bf13b560e1e05e9::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_d37bccc1c3814fc6::trace_edges(visitor);pls::cs::trace_value(cs_46fa0df374412b7f,visitor);pls::cs::trace_value(cs_09f89a2340f25102,visitor);pls::cs::trace_value(cs_39b4b25c748676d2,visitor);pls::cs::trace_value(cs_0cf6503d4b8e4210,visitor);pls::cs::trace_value(cs_5a49f60753ca2ee9,visitor);pls::cs::trace_value(cs_4be24738d1d8ef7a,visitor);pls::cs::trace_value(cs_dfad8621ad4f39fe,visitor);pls::cs::trace_value(cs_ce90b55fbd071e4f,visitor);pls::cs::trace_value(cs_cbcfd5b19b2bb127,visitor);pls::cs::trace_value(cs_210652685e2645f7,visitor);pls::cs::trace_value(cs_d89e7d5965fa0e1a,visitor);pls::cs::trace_value(cs_4c3b911964e18cd8,visitor);pls::cs::trace_value(cs_e45ed7f15498e8a3,visitor);pls::cs::trace_value(cs_d8dd36c416f7b528,visitor);pls::cs::trace_value(cs_6a51aa58c7ee0c73,visitor);pls::cs::trace_value(cs_3ec5e2b430b94a5f,visitor);pls::cs::trace_value(cs_be69170f8edbb93d,visitor);pls::cs::trace_value(cs_eeee6923a0bfab80,visitor);}

void cs_8bf13b560e1e05e9::release_edges(){cs_d37bccc1c3814fc6::release_edges();pls::cs::release_value(cs_46fa0df374412b7f);pls::cs::release_value(cs_09f89a2340f25102);pls::cs::release_value(cs_39b4b25c748676d2);pls::cs::release_value(cs_0cf6503d4b8e4210);pls::cs::release_value(cs_5a49f60753ca2ee9);pls::cs::release_value(cs_4be24738d1d8ef7a);pls::cs::release_value(cs_dfad8621ad4f39fe);pls::cs::release_value(cs_ce90b55fbd071e4f);pls::cs::release_value(cs_cbcfd5b19b2bb127);pls::cs::release_value(cs_210652685e2645f7);pls::cs::release_value(cs_d89e7d5965fa0e1a);pls::cs::release_value(cs_4c3b911964e18cd8);pls::cs::release_value(cs_e45ed7f15498e8a3);pls::cs::release_value(cs_d8dd36c416f7b528);pls::cs::release_value(cs_6a51aa58c7ee0c73);pls::cs::release_value(cs_3ec5e2b430b94a5f);pls::cs::release_value(cs_be69170f8edbb93d);pls::cs::release_value(cs_eeee6923a0bfab80);}

void cs_8bf13b560e1e05e9::cs_virtual_a3ffc1615f910b95(pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod) {cs_a3ffc1615f910b95(std::static_pointer_cast<cs_8bf13b560e1e05e9>(shared_from_this()),v_canvas,v_onFinishMethod);}

void cs_8bf13b560e1e05e9::cs_virtual_24e6f1c38df06a63(pls::cs::Ref<cs_5ad2213598dfcd5d> v_c,std::int32_t v_type,std::int32_t v_param) {cs_3e2739124195383e(std::static_pointer_cast<cs_8bf13b560e1e05e9>(shared_from_this()),v_c,v_type,v_param);}

void cs_init_8bf13b560e1e05e9(){static pls::cs::TypeInitState state;state.run("kfw.panel.MainPanel",[](){

});}

// M:kfw.panel.MainPanel.#ctor
pls::cs::Ref<cs_8bf13b560e1e05e9> cs_3afc5298ce4a3e84() { cs_init_8bf13b560e1e05e9();
{ auto cs_this = pls::cs::make_ref<cs_8bf13b560e1e05e9>(); cs_3afc5298ce4a3e84_init(cs_this); return cs_this; }
}

void cs_3afc5298ce4a3e84_init(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this) {
cs_this->cs_ce90b55fbd071e4f = ([&](){auto cs_initial_array_756=pls::cs::Array<char16_t>::make(4);cs_initial_array_756.at(0)=char16_t(47);cs_initial_array_756.at(1)=char16_t(124);cs_initial_array_756.at(2)=char16_t(60);cs_initial_array_756.at(3)=char16_t(62);return cs_initial_array_756;}());
cs_this->cs_cbcfd5b19b2bb127 = pls::cs::String(std::u16string(u"\x540d" u"\x524d" u"",2));
cs_this->cs_210652685e2645f7 = true;
cs_this->cs_4c3b911964e18cd8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
cs_this->cs_be69170f8edbb93d = pls::cs::Array<pls::cs::String>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
([&]() { cs_429433773226956d_init(std::static_pointer_cast<cs_d37bccc1c3814fc6>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kfw.panel.MainPanel.#ctor",kairo);
{

}
}
}

// M:kfw.panel.MainPanel.#ctor(System.String,System.String,System.Int32,System.Int32,System.String)
pls::cs::Ref<cs_8bf13b560e1e05e9> cs_6b53a5cdc402f43c(pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName) { cs_init_8bf13b560e1e05e9();
{ auto cs_this = pls::cs::make_ref<cs_8bf13b560e1e05e9>(); cs_6b53a5cdc402f43c_init(cs_this,v_label,v_defaultText,v_maxLength,v_inputMode,v_itemName); return cs_this; }
}

void cs_6b53a5cdc402f43c_init(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName) {
cs_this->cs_ce90b55fbd071e4f = ([&](){auto cs_initial_array_716=pls::cs::Array<char16_t>::make(4);cs_initial_array_716.at(0)=char16_t(47);cs_initial_array_716.at(1)=char16_t(124);cs_initial_array_716.at(2)=char16_t(60);cs_initial_array_716.at(3)=char16_t(62);return cs_initial_array_716;}());
cs_this->cs_cbcfd5b19b2bb127 = pls::cs::String(std::u16string(u"\x540d" u"\x524d" u"",2));
cs_this->cs_210652685e2645f7 = true;
cs_this->cs_4c3b911964e18cd8 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
cs_this->cs_be69170f8edbb93d = pls::cs::Array<pls::cs::String>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)));
([&]() { cs_429433773226956d_init(std::static_pointer_cast<cs_d37bccc1c3814fc6>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kfw.panel.MainPanel.#ctor(System.String,System.String,System.Int32,System.Int32,System.String)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8bf13b560e1e05e9>>(cs_this); pls::cs::String cs_arg0 = v_label; pls::cs::String cs_arg1 = v_defaultText; std::int32_t cs_arg2 = v_maxLength; std::int32_t cs_arg3 = v_inputMode; pls::cs::String cs_arg4 = v_itemName; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9ab4bec37ce639be(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}

// M:kfw.panel.MainPanel.ComponentAction(kairo.unity.panel.Component,System.Int32,System.Int32)
void cs_3e2739124195383e(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::Ref<cs_5ad2213598dfcd5d> v_c,std::int32_t v_type,std::int32_t v_param) { cs_init_8bf13b560e1e05e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kfw.panel.MainPanel.ComponentAction(kairo.unity.panel.Component,System.Int32,System.Int32)",kairo);
{
std::int32_t v_num_3332 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(v_c); auto cs_right = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39b4b25c748676d2; }())); return cs_left == cs_right; }())) {
pls::cs::String v_text_3400 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_4ccab99c775ca4c5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_09f89a2340f25102; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b39060ea994b3795(cs_receiver); }()); auto cs_arg1 = char16_t(10); auto cs_arg2 = char16_t(32); return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d89e7d5965fa0e1a; }())) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text_3400; return pls::cs::string_trim(cs_arg0); }());}); v_text_3400 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num_3332 = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); pls::cs::String cs_arg0 = v_text_3400; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_73f2425dc6862ef5(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be24738d1d8ef7a; }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); v_num_3332 = cs_value; return cs_value; }());
}
} else if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_8bf13b560e1e05e9>>(cs_this); pls::cs::String cs_arg0 = v_text_3400; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9dc7651e6c063ad0(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dfad8621ad4f39fe; }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); v_num_3332 = cs_value; return cs_value; }());
}
for (std::int32_t v_i_3727 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3727; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ce90b55fbd071e4f; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3727; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3727 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_text_3400; auto cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ce90b55fbd071e4f; }()); auto cs_index = v_i_3727; return cs_array.get_Item(cs_index); }()); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); v_num_3332 = cs_value; return cs_value; }());
break;
}
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=v_text_3400;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(8);return pls::cs::string_trim(cs_text,cs_separators);}());}); return pls::cs::string_trim(cs_arg0); }());}); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); v_num_3332 = cs_value; return cs_value; }());
}
if ((([&]() -> bool { auto cs_left = v_num_3332; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = v_text_3400; pls::game::cs_require(cs_target)->cs_d8dd36c416f7b528 = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8dd36c416f7b528; }()); auto cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a51aa58c7ee0c73; }()); return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3ec5e2b430b94a5f; }()); pls::game::cs_require(cs_target)->cs_d8dd36c416f7b528 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_d8dd36c416f7b528; auto cs_rhs = pls::cs::String(std::u16string(u"\x0008" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_d8dd36c416f7b528 = cs_value; return cs_value; }());
}
while (((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_210652685e2645f7; }()))) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8dd36c416f7b528; }()); auto cs_arg1 = pls::cs::String(std::u16string(u"\x0008" u"",1)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }());}))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8dd36c416f7b528; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8dd36c416f7b528; }()); return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::generated::cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); pls::game::cs_require(cs_target)->cs_d8dd36c416f7b528 = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::kairo::Canvas> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5a49f60753ca2ee9; }()); cs_64b0ec8193bbc6fd(cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_e45ed7f15498e8a3 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_num_3332; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
{
std::int32_t v_num2_4353 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be24738d1d8ef7a; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})) {
([&]() { auto cs_old = v_num2_4353; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::div_i32(cs_old,cs_rhs); v_num2_4353 = cs_value; return cs_value; }());
}
pls::cs::String v_text3_4450 = pls::cs::String(std::u16string(u"\x5168" u"\x89d2" u"\x003c" u"\x0030" u"\x003e" u"\x6587" u"\x5b57" u"\x4ee5" u"\x5185" u"\x306b" u"\x3057" u"\x3066" u"\x4e0b" u"\x3055" u"\x3044" u"",15));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c3b911964e18cd8; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x003c" u"\x0030" u"\x003e" u"\x6587" u"\x5b57" u"\x4ee5" u"\x5185" u"\x306b" u"\x3057" u"\x3066" u"\x4e0b" u"\x3055" u"\x3044" u"",13)); v_text3_4450 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be24738d1d8ef7a; }()); v_num2_4353 = cs_value; return cs_value; }());
}
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})))) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"\x5185" u"\x5bb9" u"\x3092" u"\x77ed" u"\x304f" u"\x3057" u"\x3066" u"\x4e0b" u"\x3055" u"\x3044" u"",10)); v_text3_4450 = cs_value; return cs_value; }());
}
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog3_4668 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\xff92" u"\xff6f" u"\xff7e" u"\xff70" u"\xff7c" u"\xff9e" u"",6)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog3_4668); pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text3_4450; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); pls::cs::String cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { std::int32_t cs_arg0 = v_num2_4353; return pls::generated::cs_420fb62b9e208a96(cs_arg0); }());}); return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog3_4668); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
}
} else if ((([&]() -> bool { auto cs_left = v_num_3332; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()))) {
{
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog2_4870 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\xff92" u"\xff6f" u"\xff7e" u"\xff70" u"\xff7c" u"\xff9e" u"",6)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
pls::cs::String v_text2_4918 = pls::cs::String(std::u16string(u"",0));
for (std::int32_t v_j_4945 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_4945; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ce90b55fbd071e4f; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_4945; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_4945 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text2_4918; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() { auto cs_old = v_text2_4918; auto cs_rhs = pls::cs::String(std::u16string(u"\x0020" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text2_4918 = cs_value; return cs_value; }());
}
([&]() { auto cs_old = v_text2_4918; auto cs_rhs = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ce90b55fbd071e4f; }()); auto cs_index = v_j_4945; return cs_array.get_Item(cs_index); }()); auto cs_value = pls::cs::String::concat(cs_old,pls::game::cs_char_string(cs_rhs)); v_text2_4918 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_4870); pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30b7" u"\x30b9" u"\x30c6" u"\x30e0" u"\x306e" u"\x90fd" u"\x5408" u"\x4e0a" u"\x0020" u"\x003c" u"\x0030" u"\x003e" u"\x0020" u"\x306f" u"\x4f7f" u"\x3048" u"\x307e" u"\x305b" u"\x3093" u"",19)); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); pls::cs::String cs_arg1 = v_text2_4918; return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog2_4870); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
}
} else if ((([&]() -> bool { auto cs_left = v_num_3332; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
{
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_5269 = ([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\xff92" u"\xff6f" u"\xff7e" u"\xff70" u"\xff7c" u"\xff9e" u"",6)); return cs_63545d46c6887c12(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_5269); pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x003c" u"\x0030" u"\x003e" u"\x3092" u"\x5165" u"\x529b" u"\x3057" u"\x3066" u"\x4e0b" u"\x3055" u"\x3044" u"",11)); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); pls::cs::String cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cbcfd5b19b2bb127; }()); return pls::generated::cs_abfabf5a341e90ae(cs_arg0,cs_arg1); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_5269); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }());
}
}
} else {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_d8dd36c416f7b528 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::kairo::Canvas> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5a49f60753ca2ee9; }()); cs_64b0ec8193bbc6fd(cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_e45ed7f15498e8a3 = cs_value; return cs_value; }());
}
}
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e45ed7f15498e8a3; }())) {
if (([&](){auto cs_left=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eeee6923a0bfab80; }());auto cs_right=pls::cs::Delegate<void(pls::cs::String)>{};return cs_left!=cs_right;}())) {
([&](){auto cs_delegate=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eeee6923a0bfab80; }());auto cs_arg0=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d8dd36c416f7b528; }());cs_delegate(cs_arg0);}());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5a49f60753ca2ee9; }())); pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_be69170f8edbb93d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_be69170f8edbb93d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg2 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_be69170f8edbb93d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg3 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_be69170f8edbb93d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_eb726d3fffc72be0(cs_receiver); }());
}
}
}
}
}

// M:kfw.panel.MainPanel.GetStringWidth(System.String)
std::int32_t cs_9dc7651e6c063ad0(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::String v_str) { cs_init_8bf13b560e1e05e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kfw.panel.MainPanel.GetStringWidth(System.String)",kairo);
{
pls::cs::Ref<pls::kairo::Font> v_font_6255 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { return pls::cs::make_ref<pls::kairo::Font>(); }());
std::int32_t v_result_6281 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6255); pls::cs::String cs_arg0 = v_str; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6255); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());});
return v_result_6281;
}
}
}
}

// M:kfw.panel.MainPanel.Init(System.String,System.String,System.Int32,System.Int32,System.String)
void cs_9ab4bec37ce639be(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::String v_label,pls::cs::String v_defaultText,std::int32_t v_maxLength,std::int32_t v_inputMode,pls::cs::String v_itemName) { cs_init_8bf13b560e1e05e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kfw.panel.MainPanel.Init(System.String,System.String,System.Int32,System.Int32,System.String)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_defaultText; pls::game::cs_require(cs_target)->cs_3ec5e2b430b94a5f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_maxLength; pls::game::cs_require(cs_target)->cs_4be24738d1d8ef7a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_inputMode; pls::game::cs_require(cs_target)->cs_4c3b911964e18cd8 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_itemName); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_itemName; pls::game::cs_require(cs_target)->cs_cbcfd5b19b2bb127 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_inputMode; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_210652685e2645f7 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_d89e7d5965fa0e1a = cs_value; return cs_value; }());
}
pls::cs::String v_text_1345 = pls::cs::String(std::u16string(u"",0));
for (std::int32_t v_i_1368 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1368; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be24738d1d8ef7a; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1368; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1368 = cs_new; return cs_old; }())) {
([&]() { auto cs_old = v_text_1345; auto cs_rhs = pls::cs::String(std::u16string(u"\x0077" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text_1345 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_8bf13b560e1e05e9>>(cs_this); pls::cs::String cs_arg0 = v_text_1345; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9dc7651e6c063ad0(cs_receiver,cs_arg0); }()); pls::game::cs_require(cs_target)->cs_dfad8621ad4f39fe = cs_value; return cs_value; }());
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})))) {
pls::cs::String v_text2_1505 = pls::cs::String(std::u16string(u"",0));
for (std::int32_t v_j_1530 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1530; auto cs_right = (v_defaultText).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1530; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1530 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() { auto cs_left = v_text2_1505; auto cs_right = pls::game::cs_char_string(([&]() { auto cs_array = v_defaultText; auto cs_index = v_j_1530; return cs_array.at(cs_index); }())); return pls::cs::String::concat(cs_left,cs_right); }()); v_text_1345 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_8bf13b560e1e05e9>>(cs_this); pls::cs::String cs_arg0 = v_text_1345; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9dc7651e6c063ad0(cs_receiver,cs_arg0); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dfad8621ad4f39fe; }()); return (cs_left > cs_right); }())) {
break;
}
([&]() { auto cs_value = v_text_1345; v_text2_1505 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = v_text2_1505; v_defaultText = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_4c00a0e0c6e6e2e5> { pls::cs::String cs_arg0 = v_label; return cs_80617835aa0d7a16(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_46fa0df374412b7f = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_4ccab99c775ca4c5> { pls::cs::String cs_arg0 = v_defaultText; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_86553cba2c357ac5(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); pls::game::cs_require(cs_target)->cs_09f89a2340f25102 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4ccab99c775ca4c5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_09f89a2340f25102; }())); std::int32_t cs_arg0 = v_inputMode; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a0d774261b152928(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4ccab99c775ca4c5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_09f89a2340f25102; }())); std::int32_t cs_arg0 = v_maxLength; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f48ad653747329a7(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_17bc7a5b28fcdc2a> { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x6c7a" u"\x5b9a" u"",2)); return cs_9474c24dbd210b11(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_39b4b25c748676d2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_17bc7a5b28fcdc2a> { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x623b" u"\x308b" u"",2)); return cs_9474c24dbd210b11(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_0cf6503d4b8e4210 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_4ccab99c775ca4c5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_09f89a2340f25102; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b39060ea994b3795(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_6a51aa58c7ee0c73 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::Ref<pls::cs::Object>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c28309dd1ee0c605(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4c00a0e0c6e6e2e5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46fa0df374412b7f; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ebcec0cd656cdeae(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_4c00a0e0c6e6e2e5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46fa0df374412b7f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_12272e051762a684(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0c30c87ccedfd300(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_4c00a0e0c6e6e2e5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46fa0df374412b7f; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_19774412e61c6647(cs_receiver); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e4a038175824c8ee(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4ccab99c775ca4c5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_09f89a2340f25102; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ebcec0cd656cdeae(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_4ccab99c775ca4c5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_09f89a2340f25102; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_db57ee312d172295(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0c30c87ccedfd300(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_60931973f98bba2d(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_17bc7a5b28fcdc2a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39b4b25c748676d2; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ebcec0cd656cdeae(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_17bc7a5b28fcdc2a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39b4b25c748676d2; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0acae95f4bbbd7a0(cs_receiver); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0c30c87ccedfd300(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_4ccab99c775ca4c5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_09f89a2340f25102; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a404deaded797ee7(cs_receiver); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f70438774efbbba8(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_17bc7a5b28fcdc2a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0cf6503d4b8e4210; }())); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ebcec0cd656cdeae(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0c30c87ccedfd300(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_4ccab99c775ca4c5>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_09f89a2340f25102; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a404deaded797ee7(cs_receiver); }()); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::add_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f70438774efbbba8(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); pls::cs::Ref<cs_5ad2213598dfcd5d> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46fa0df374412b7f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_79684de6b60057f5(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); pls::cs::Ref<cs_5ad2213598dfcd5d> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_09f89a2340f25102; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_79684de6b60057f5(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); pls::cs::Ref<cs_5ad2213598dfcd5d> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39b4b25c748676d2; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_79684de6b60057f5(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); pls::cs::Ref<cs_5ad2213598dfcd5d> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0cf6503d4b8e4210; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_79684de6b60057f5(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d97b566e589c7a21(cs_receiver,cs_arg0); }());
}
}
}
}

// M:kfw.panel.MainPanel.SetItemName(System.String)
void cs_b312c8d19342903d(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::String v_name) { cs_init_8bf13b560e1e05e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kfw.panel.MainPanel.SetItemName(System.String)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_name; pls::game::cs_require(cs_target)->cs_cbcfd5b19b2bb127 = cs_value; return cs_value; }());
}
}
}
}

// M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)
void cs_a3ffc1615f910b95(pls::cs::Ref<cs_8bf13b560e1e05e9> cs_this,pls::cs::Ref<pls::kairo::Canvas> v_canvas,pls::cs::Delegate<void(pls::cs::String)> v_onFinishMethod) { cs_init_8bf13b560e1e05e9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kfw.panel.MainPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_canvas; pls::game::cs_require(cs_target)->cs_5a49f60753ca2ee9 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_be69170f8edbb93d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_canvas); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSoftLabel(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_be69170f8edbb93d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_canvas); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSoftLabel(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_be69170f8edbb93d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_canvas); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSoftLabel(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_be69170f8edbb93d; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_canvas); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSoftLabel(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_canvas); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"",0)); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"",0)); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_canvas); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->UpdateSoftLabel(); }());});
([&]() -> void { pls::cs::Ref<cs_d37bccc1c3814fc6> cs_arg0 = cs_this; cs_73ded8dcd4fca440(cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_e45ed7f15498e8a3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_onFinishMethod; pls::game::cs_require(cs_target)->cs_eeee6923a0bfab80 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_eb726d3fffc72be0(cs_receiver); }());
}
}
}
}
}
