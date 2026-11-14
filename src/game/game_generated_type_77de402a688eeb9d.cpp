// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0286a0dbe9da0b33.hpp"
#include "game_generated_type_130519c307b90f46.hpp"
#include "game_generated_type_77de402a688eeb9d.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
#include "generated/portable_generated_type_3b41638e424b9ee0.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_51222df74ac70bab.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
#include "generated/portable_generated_type_a465028bea3432a3.hpp"
#include "generated/portable_generated_type_cbac662a28aa40b1.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f8b20a4d1d9d695f.hpp"
#include "generated/portable_generated_type_fb60578b3098a284.hpp"
#include "generated/portable_generated_type_51222df74ac70bab_templates.hpp"
#include "generated/portable_generated_type_cbac662a28aa40b1_templates.hpp"
namespace pls::game {

void cs_77de402a688eeb9d::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_d19c98fe2d601ad1,visitor);pls::cs::trace_value(cs_f78aa7a0d989fd7c,visitor);pls::cs::trace_value(cs_32388247d17bb567,visitor);pls::cs::trace_value(cs_0810a6bbdad8f652,visitor);pls::cs::trace_value(cs_37f984d70850be71,visitor);pls::cs::trace_value(cs_c3b53640b80e29dc,visitor);pls::cs::trace_value(cs_fa8defba521b90ce,visitor);pls::cs::trace_value(cs_7db6741aeec24156,visitor);}

void cs_77de402a688eeb9d::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_d19c98fe2d601ad1);pls::cs::release_value(cs_f78aa7a0d989fd7c);pls::cs::release_value(cs_32388247d17bb567);pls::cs::release_value(cs_0810a6bbdad8f652);pls::cs::release_value(cs_37f984d70850be71);pls::cs::release_value(cs_c3b53640b80e29dc);pls::cs::release_value(cs_fa8defba521b90ce);pls::cs::release_value(cs_7db6741aeec24156);}

void cs_init_77de402a688eeb9d(){static pls::cs::TypeInitState state;state.run("kairo.unity.io.HttpObject",[](){

});}

// M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean)
pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_d2a21b4a921597a9(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check,bool v_split) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean)",kairo);
{try{
pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_url_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(v_url);
pls::cs::Ref<pls::cs::Cell<pls::cs::Array<std::uint8_t>>> v_send_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::Array<std::uint8_t>>>(v_send);
pls::cs::Ref<pls::cs::Cell<bool>> v_check_cell=pls::cs::make_ref<pls::cs::Cell<bool>>(v_check);
pls::cs::Ref<pls::cs::Cell<bool>> v_split_cell=pls::cs::make_ref<pls::cs::Cell<bool>>(v_split);
{
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_fa8defba521b90ce = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0067" u"\x0065" u"\x0074" u"\x005f" u"\x0073" u"\x0063" u"\x006f" u"\x0072" u"\x0065" u"\x002e" u"\x0070" u"\x0068" u"\x0070" u"",13);return cs_literal;}()); return pls::cs::culture_index_of(cs_arg0,cs_arg1); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
throw pls::cs::ReturnFlow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>{pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):1777",([&](){auto cs_initial_array_347=pls::cs::Array<pls::cs::Array<std::uint8_t>>::make(1);cs_initial_array_347.at(0)=([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x004f" u"\x004b" u"\x000a" u"\x0030" u"\x002c" u"\x0030" u"",6);return cs_literal;}()); return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }());return cs_initial_array_347;}()))};
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_32388247d17bb567 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_37f984d70850be71 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_f78aa7a0d989fd7c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::cs::ExceptionObject>{}; pls::game::cs_require(cs_target)->cs_c3b53640b80e29dc = cs_value; return cs_value; }());
pls::cs::Ref<pls::cs::Cell<pls::cs::Array<pls::cs::Array<std::uint8_t>>>> v_recv_1939_cell = pls::cs::make_ref<pls::cs::Cell<pls::cs::Array<pls::cs::Array<std::uint8_t>>>>(pls::cs::Array<pls::cs::Array<std::uint8_t>>{});
pls::cs::Ref<pls::cs::Cell<std::int32_t>> v_totalSize_1959_cell = pls::cs::make_ref<pls::cs::Cell<std::int32_t>>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
pls::cs::Ref<pls::cs::Cell<std::int32_t>> v_recvSize_1981_cell = pls::cs::make_ref<pls::cs::Cell<std::int32_t>>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0072" u"\x0065" u"\x0067" u"\x0069" u"\x0073" u"\x0074" u"\x002e" u"\x0070" u"\x0068" u"\x0070" u"",10);return cs_literal;}()); return pls::cs::culture_index_of(cs_arg0,cs_arg1); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
if ((!(pls::generated::cs_19a8f436a39a237f()))) {
throw pls::cs::ReturnFlow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>{pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):2089",([&](){auto cs_initial_array_348=pls::cs::Array<pls::cs::Array<std::uint8_t>>::make(1);cs_initial_array_348.at(0)=([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0031" u"\x000a" u"\x0031" u"\x0030" u"\x0030" u"",5);return cs_literal;}()); return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }());return cs_initial_array_348;}()))};
}
std::int32_t v_recoveredLicenseStatus_2142 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { return pls::kairo::removed_license_check(); }());});
if (([&]() -> bool { auto cs_left = v_recoveredLicenseStatus_2142; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
throw pls::cs::ReturnFlow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>{pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):2237",([&](){auto cs_initial_array_349=pls::cs::Array<pls::cs::Array<std::uint8_t>>::make(1);cs_initial_array_349.at(0)=([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0031" u"\x000a" u"\x0031" u"\x0030" u"\x0030" u"",5);return cs_literal;}()); return pls::generated::cs_a8e45b955b78e04d(cs_arg0); }());return cs_initial_array_349;}()))};
}
switch (v_recoveredLicenseStatus_2142) {
case 4:
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffff9eull)); pls::game::cs_require(cs_target)->cs_32388247d17bb567 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x30b5" u"\x30fc" u"\x30d0" u"\x30fc" u"\x30a8" u"\x30e9" u"\x30fc" u"\x304c" u"\x767a" u"\x751f" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"",15);return cs_literal;}()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):2413",([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652; auto cs_rhs = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }()));
pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):2438",([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652; auto cs_rhs = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x8a8d" u"\x8a3c" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x8cfc" u"\x5165" u"\x6642" u"\x306e" u"\x30a2" u"\x30ab" u"\x30a6" u"\x30f3" u"\x30c8" u"\x3092" u"\x8a2d" u"\x5b9a" u"\x3057" u"\x3001" u"\x96fb" u"\x6ce2" u"\x72b6" u"\x614b" u"\x3092" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x304f" u"\x3060" u"\x3055" u"\x3044" u"\x3002" u"",38);return cs_literal;}()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }()));
break;
}
case 5:
case 257:
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffff9dull)); pls::game::cs_require(cs_target)->cs_32388247d17bb567 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x901a" u"\x4fe1" u"\x3092" u"\x8a31" u"\x53ef" u"\x3057" u"\x96fb" u"\x6ce2" u"\x72b6" u"\x614b" u"\x3092" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x4e0b" u"\x3055" u"\x3044" u"\x3002" u"",19);return cs_literal;}()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):2649",([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652; auto cs_rhs = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }()));
pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):2674",([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652; auto cs_rhs = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x8a8d" u"\x8a3c" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x8cfc" u"\x5165" u"\x6642" u"\x306e" u"\x30a2" u"\x30ab" u"\x30a6" u"\x30f3" u"\x30c8" u"\x3092" u"\x8a2d" u"\x5b9a" u"\x3057" u"\x3001" u"\x96fb" u"\x6ce2" u"\x72b6" u"\x614b" u"\x3092" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x304f" u"\x3060" u"\x3055" u"\x3044" u"\x3002" u"",38);return cs_literal;}()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }()));
break;
}
case 1:
case 2:
case 3:
default:
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_32388247d17bb567 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x8a8d" u"\x8a3c" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"",10);return cs_literal;}()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):2886",([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652; auto cs_rhs = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }()));
pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):2911",([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652; auto cs_rhs = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x8cfc" u"\x5165" u"\x6642" u"\x306e" u"\x30a2" u"\x30ab" u"\x30a6" u"\x30f3" u"\x30c8" u"\x3092" u"\x8a2d" u"\x5b9a" u"\x3057" u"\x3001" u"\x96fb" u"\x6ce2" u"\x72b6" u"\x614b" u"\x3092" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x304f" u"\x3060" u"\x3055" u"\x3044" u"\x3002" u"",28);return cs_literal;}()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());}); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }()));
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0810a6bbdad8f652; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})) {
pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):3076",([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652; auto cs_rhs = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0061" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x002f" u"\x0066" u"\x0061" u"\x0071" u"\x002e" u"\x0068" u"\x0074" u"\x006d" u"\x006c" u"\x0023" u"\x006c" u"\x0069" u"\x0063" u"\x0065" u"\x006e" u"\x0063" u"\x0065" u"",45);return cs_literal;}()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }()));
} else {
pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):3170",([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652; auto cs_rhs = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"\x0068" u"\x0074" u"\x0074" u"\x0070" u"\x003a" u"\x002f" u"\x002f" u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x0070" u"\x0061" u"\x0072" u"\x006b" u"\x002e" u"\x006a" u"\x0070" u"\x002f" u"\x0061" u"\x006e" u"\x0064" u"\x0072" u"\x006f" u"\x0069" u"\x0064" u"\x002f" u"\x0065" u"\x006e" u"\x002f" u"\x0066" u"\x0061" u"\x0071" u"\x002e" u"\x0068" u"\x0074" u"\x006d" u"\x006c" u"\x0023" u"\x006c" u"\x0069" u"\x0063" u"\x0065" u"\x006e" u"\x0063" u"\x0065" u"",48);return cs_literal;}()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }()));
}
}
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0810a6bbdad8f652; }()); pls::game::cs_require(cs_target)->cs_37f984d70850be71 = cs_value; return cs_value; }());
throw pls::cs::IOException();
}
while (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x004e" u"\x0055" u"\x004c" u"\x004c" u"\x0047" u"\x0057" u"\x0044" u"\x004f" u"\x0043" u"\x004f" u"\x004d" u"\x004f" u"",12);return cs_literal;}()); return pls::cs::culture_index_of(cs_arg0,cs_arg1); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {

}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_url_cell->value; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x003f" u"",1);return cs_literal;}()); return pls::game::cs_contains_string(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):3412",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):3412",([&]() { auto cs_left = v_url_cell->value; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0026" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c4f4767aa3a57458(cs_receiver); }()); return pls::cs::String::concat(cs_left,cs_right); }())); v_url_cell->value = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):3473",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):3473",([&]() { auto cs_left = v_url_cell->value; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x003f" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c4f4767aa3a57458(cs_receiver); }()); return pls::cs::String::concat(cs_left,cs_right); }())); v_url_cell->value = cs_value; return cs_value; }());
}
if ((pls::generated::cs_f15c6a3105cad248() && pls::generated::cs_4cc76a7a43706693())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):3570",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005b" u"\x0055" u"\x0052" u"\x004c" u"\x005d" u"\x0020" u"",6);return cs_literal;}()); auto cs_right = v_url_cell->value; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
if ((([&]() { auto cs_left = pls::cs::box(v_send_cell->value); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }()) && pls::generated::cs_a242c60cc463f683())) {
pls::cs::Ref<pls::generated::cs_fb60578b3098a284> v_byteArrayOutputStream_3664 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):3688",([&]() -> pls::cs::Ref<pls::generated::cs_fb60578b3098a284> { return pls::generated::cs_10f86e0fa81e1b57(); }()));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_3664; pls::cs::Array<std::uint8_t> cs_arg1 = v_send_cell->value; pls::generated::cs_242552fbbe53e929(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_3664; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x499602d2ull)); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_fb60578b3098a284>>(v_byteArrayOutputStream_3664); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c875afd29ab2966c(cs_receiver); }());}); v_send_cell->value = cs_value; return cs_value; }());
}
pls::cs::Ref<pls::cs::Cell<pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>>> v_bais_3905_cell = pls::cs::make_ref<pls::cs::Cell<pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>>>(pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{});
pls::cs::run_finally([&]() {try {
pls::cs::Ref<pls::cs::Cell<std::int32_t>> v_timeout_3938_cell = pls::cs::make_ref<pls::cs::Cell<std::int32_t>>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xea60ull)));
pls::cs::Ref<pls::cs::Cell<std::int64_t>> v_begin_3964_cell = pls::cs::make_ref<pls::cs::Cell<std::int64_t>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}));
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::unbox<pls::cs::Ref<pls::kairo::OfflineWebRequest>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = pls::source_allocations::completed("delegate_evaluation","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4061",pls::source_allocations::completed("closure_evaluation","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4061",([&](){struct cs_closure_f7c7285bde5ff151 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<pls::cs::Array<std::uint8_t>>> v_send_cell;pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_url_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_send_cell,v);pls::cs::trace_value(v_url_cell,v);}void release_edges()override{pls::cs::Object::release_edges();pls::cs::clear_ref(v_send_cell);pls::cs::clear_ref(v_url_cell);}pls::cs::Ref<pls::cs::Object> Invoke(){{ return pls::cs::box(((([&]() { auto cs_left = pls::cs::box(v_send_cell->value); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left != cs_right; }())) ? (pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4085",([&]() -> pls::cs::Ref<pls::kairo::OfflineWebRequest> { pls::cs::String cs_arg0 = v_url_cell->value; pls::cs::Array<std::uint8_t> cs_arg1 = v_send_cell->value; return pls::cs::make_ref<pls::kairo::OfflineWebRequest>(cs_arg0,cs_arg1); }()))) : (pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4108",([&]() -> pls::cs::Ref<pls::kairo::OfflineWebRequest> { pls::cs::String cs_arg0 = v_url_cell->value; return pls::cs::make_ref<pls::kairo::OfflineWebRequest>(cs_arg0); }()))))); }}};auto cs_closure=pls::cs::make_ref<cs_closure_f7c7285bde5ff151>();cs_closure->v_send_cell=v_send_cell;cs_closure->v_url_cell=v_url_cell;return pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::bind_identity(cs_closure,pls::cs::raw(v_send_cell),std::string("M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4061")+std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(v_url_cell))),[weak=pls::cs::DelegateCapture<cs_closure_f7c7285bde5ff151>(cs_closure)]()->pls::cs::Ref<pls::cs::Object>{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();return target->Invoke();});}()))); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());})); pls::game::cs_require(cs_target)->cs_d19c98fe2d601ad1 = cs_value; return cs_value; }());
while (true) {
bool v_completed_4163 = pls::cs::unbox<bool>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = pls::source_allocations::completed("delegate_evaluation","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4224",pls::source_allocations::completed("closure_evaluation","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4224",([&](){struct cs_closure_b26de02d5c7eafd4 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<std::int64_t>> v_begin_3964_cell;pls::cs::Ref<pls::cs::Cell<std::int32_t>> v_timeout_3938_cell;pls::cs::Ref<cs_77de402a688eeb9d> cs_this;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_begin_3964_cell,v);pls::cs::trace_value(v_timeout_3938_cell,v);pls::cs::trace_value(cs_this,v);}void release_edges()override{pls::cs::Object::release_edges();pls::cs::clear_ref(v_begin_3964_cell);pls::cs::clear_ref(v_timeout_3938_cell);pls::cs::clear_ref(cs_this);}pls::cs::Ref<pls::cs::Object> Invoke(){{
if (([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c98fe2d601ad1; }()); return pls::game::cs_require(cs_receiver)->get_isDone(); }())) {
return pls::source_allocations::completed("boxing","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4282",pls::cs::box(true));
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int64_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); auto cs_right = v_begin_3964_cell->value; return pls::cs::sub_i64(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(v_timeout_3938_cell->value); return (cs_left >= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::OfflineWebRequest>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c98fe2d601ad1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::kairo::OfflineWebRequest>{}; pls::game::cs_require(cs_target)->cs_d19c98fe2d601ad1 = cs_value; return cs_value; }());
return pls::source_allocations::completed("boxing","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4415",pls::cs::box(true));
}
return pls::source_allocations::completed("boxing","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4440",pls::cs::box(false));
}}};auto cs_closure=pls::cs::make_ref<cs_closure_b26de02d5c7eafd4>();cs_closure->v_begin_3964_cell=v_begin_3964_cell;cs_closure->v_timeout_3938_cell=v_timeout_3938_cell;cs_closure->cs_this=cs_this;return pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::bind_identity(cs_closure,pls::cs::raw(v_begin_3964_cell),std::string("M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4224")+std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(v_timeout_3938_cell))),[weak=pls::cs::DelegateCapture<cs_closure_b26de02d5c7eafd4>(cs_closure)]()->pls::cs::Ref<pls::cs::Object>{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();return target->Invoke();});}()))); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());}));
if (v_completed_4163) {
break;
}
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xaull)); cs_26244a61d0d2e16c(cs_arg0); }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); pls::cs::Delegate<void()> cs_arg0 = pls::source_allocations::completed("delegate_evaluation","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4586",pls::source_allocations::completed("closure_evaluation","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4586",([&](){struct cs_closure_f08d338e3ea27f97 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<std::int32_t>> v_totalSize_1959_cell;pls::cs::Ref<pls::cs::Cell<pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>>> v_bais_3905_cell;pls::cs::Ref<pls::cs::Cell<bool>> v_check_cell;pls::cs::Ref<pls::cs::Cell<std::int32_t>> v_recvSize_1981_cell;pls::cs::Ref<pls::cs::Cell<bool>> v_split_cell;pls::cs::Ref<pls::cs::Cell<pls::cs::Array<pls::cs::Array<std::uint8_t>>>> v_recv_1939_cell;pls::cs::Ref<cs_77de402a688eeb9d> cs_this;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_totalSize_1959_cell,v);pls::cs::trace_value(v_bais_3905_cell,v);pls::cs::trace_value(v_check_cell,v);pls::cs::trace_value(v_recvSize_1981_cell,v);pls::cs::trace_value(v_split_cell,v);pls::cs::trace_value(v_recv_1939_cell,v);pls::cs::trace_value(cs_this,v);}void release_edges()override{pls::cs::Object::release_edges();pls::cs::clear_ref(v_totalSize_1959_cell);pls::cs::clear_ref(v_bais_3905_cell);pls::cs::clear_ref(v_check_cell);pls::cs::clear_ref(v_recvSize_1981_cell);pls::cs::clear_ref(v_split_cell);pls::cs::clear_ref(v_recv_1939_cell);pls::cs::clear_ref(cs_this);}void Invoke(){{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c98fe2d601ad1; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4647",([&](){ auto cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0074" u"\x0069" u"\x006d" u"\x0065" u"\x006f" u"\x0075" u"\x0074" u"",7);return cs_literal;}()); return pls::cs::make_exception("System.IO.IOException",cs_arg0);}())); pls::game::cs_require(cs_target)->cs_c3b53640b80e29dc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { auto cs_receiver = cs_this; return cs_a14193378f92facc(static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_receiver)); }()); pls::game::cs_require(cs_target)->cs_fa8defba521b90ce = cs_value; return cs_value; }());
} else if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c98fe2d601ad1; }()); return pls::game::cs_require(cs_receiver)->get_error(); }()); return pls::cs::string_is_null_or_empty(cs_arg0); }());})))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4787",([&](){ auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c98fe2d601ad1; }()); return pls::game::cs_require(cs_receiver)->get_error(); }()); return pls::cs::make_exception("System.IO.IOException",cs_arg0);}())); pls::game::cs_require(cs_target)->cs_c3b53640b80e29dc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> bool { auto cs_receiver = cs_this; return cs_a14193378f92facc(static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_receiver)); }()); pls::game::cs_require(cs_target)->cs_fa8defba521b90ce = cs_value; return cs_value; }());
} else {
pls::cs::Array<std::uint8_t> v_bytes_4887 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c98fe2d601ad1; }()); return pls::game::cs_require(cs_receiver)->get_bytes(); }());
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_4915 = pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>{};
([&]() { auto cs_value = (v_bytes_4887).length(); v_totalSize_1959_cell->value = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4968",([&]() -> pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_bytes_4887; return pls::generated::cs_c3a84083a67ee263(cs_arg0); }())); v_bais_3905_cell->value = cs_value; return cs_value; }());
if (v_check_cell->value) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_right = v_totalSize_1959_cell->value; return (cs_left <= cs_right); }())) {
std::int8_t v_num_5076 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_bais_3905_cell->value; return pls::generated::cs_1207de83c3a46662(cs_arg0); }());});
std::int8_t v_b_5123 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_bais_3905_cell->value; return pls::generated::cs_1207de83c3a46662(cs_arg0); }());});
([&]() { auto cs_old = v_recvSize_1981_cell->value; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_recvSize_1981_cell->value = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_right = v_totalSize_1959_cell->value; return (cs_left <= cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int8_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_bais_3905_cell->value; return pls::generated::cs_1207de83c3a46662(cs_arg0); }());});
([&]() { auto cs_old = v_recvSize_1981_cell->value; auto cs_new = pls::cs::add_i32(cs_old,1); v_recvSize_1981_cell->value = cs_new; return cs_old; }());
}
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_num_5076); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4full)); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_b_5123); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4bull)); return (cs_left != cs_right); }()))) {
try {
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = v_bytes_4887; return pls::game::cs_require(cs_receiver)->GetString(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_37f984d70850be71 = cs_value; return cs_value; }());
} catch(const pls::cs::Exception& cs_caught_350) {auto cs_exception_350=pls::cs::capture_exception(cs_caught_350);
if(pls::cs::exception_is(cs_exception_350,"System.Exception")) {{

}}
else {throw;} }
pls::cs::Array<std::uint8_t> v_bytes2_5484 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_bais_3905_cell->value; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_totalSize_1959_cell->value; auto cs_right = v_recvSize_1981_cell->value; return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::generated::cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }());});
pls::cs::String v_value_5554 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = v_bytes2_5484; return pls::game::cs_require(cs_receiver)->GetString(cs_arg0); }());});
pls::cs::Array<pls::cs::String> v_array_5613 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_value_5554; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
try {
if (([&]() -> bool { auto cs_left = (v_array_5613).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_5613; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_32388247d17bb567 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = (v_array_5613).length(); return (cs_left < cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array_5613; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_arg1 = char16_t(124); auto cs_arg2 = char16_t(10); return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
}
} catch(const pls::cs::Exception& cs_caught_351) {auto cs_exception_351=pls::cs::capture_exception(cs_caught_351);
if(pls::cs::exception_is(cs_exception_351,"System.Exception")) {{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffff9eull)); pls::game::cs_require(cs_target)->cs_32388247d17bb567 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_value_5554; pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0810a6bbdad8f652; }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x003c" u"",1);return cs_literal;}()); pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0028" u"",1);return cs_literal;}()); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0810a6bbdad8f652; }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x003e" u"",1);return cs_literal;}()); pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0029" u"",1);return cs_literal;}()); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0810a6bbdad8f652; }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0020" u"",1);return cs_literal;}()); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
}}
else {throw;} }
if (pls::generated::cs_4cc76a7a43706693()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):6256",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):6256",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):6256",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0048" u"\x0074" u"\x0074" u"\x0070" u"\x0009" u"\x0009" u"\x005b" u"\x0065" u"\x0072" u"\x0072" u"\x006f" u"\x0072" u"\x005d" u"",13);return cs_literal;}()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_32388247d17bb567; }())); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x003a" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0810a6bbdad8f652; }()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return pls::generated::cs_812090ed79928522(cs_arg0,cs_arg1); }());});
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):6337",([&](){ return pls::cs::make_exception("System.IO.IOException");}())); pls::game::cs_require(cs_target)->cs_c3b53640b80e29dc = cs_value; return cs_value; }());
}
} else {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):6413",([&](){ auto cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):6429",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):6429",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0072" u"\x0065" u"\x0073" u"\x0070" u"\x006f" u"\x006e" u"\x0073" u"\x0065" u"\x0020" u"",9);return cs_literal;}()); auto cs_right = pls::game::cs_integer_string(v_totalSize_1959_cell->value); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0020" u"\x0062" u"\x0079" u"\x0074" u"\x0065" u"\x0073" u"",6);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); return pls::cs::make_exception("System.IO.IOException",cs_arg0);}())); pls::game::cs_require(cs_target)->cs_c3b53640b80e29dc = cs_value; return cs_value; }());
}
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c3b53640b80e29dc; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return;
}
{
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):6539",([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }())); v_vector_4915 = cs_value; return cs_value; }());
while (([&]() -> bool { auto cs_left = v_recvSize_1981_cell->value; auto cs_right = v_totalSize_1959_cell->value; return (cs_left < cs_right); }())) {
std::int32_t v_size_6603 = ([&]() -> std::int32_t { auto cs_left = v_totalSize_1959_cell->value; auto cs_right = v_recvSize_1981_cell->value; return pls::cs::sub_i32(cs_left,cs_right); }());
if (v_split_cell->value) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_bais_3905_cell->value; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); v_size_6603 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_recvSize_1981_cell->value; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_recvSize_1981_cell->value = cs_value; return cs_value; }());
}
pls::cs::Array<std::uint8_t> v_array2_6752 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_bais_3905_cell->value; std::int32_t cs_arg1 = v_size_6603; return pls::generated::cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4915); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array2_6752); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
([&]() { auto cs_old = v_recvSize_1981_cell->value; auto cs_rhs = (v_array2_6752).length(); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_recvSize_1981_cell->value = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4915); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (v_split_cell->value) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):6966",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)))); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::uint8_t>>>(cs_arg0); }());}); v_recv_1939_cell->value = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):7054",([&](){auto cs_initial_array_352=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_352.at(0)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_initial_array_352.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));return cs_initial_array_352;}())); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::uint8_t>>>(cs_arg0); }());}); v_recv_1939_cell->value = cs_value; return cs_value; }());
}
} else {
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):7131",pls::cs::Array<pls::cs::Array<std::uint8_t>>::make(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4915); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}))); v_recv_1939_cell->value = cs_value; return cs_value; }());
}
for (std::int32_t v_i_7183 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7183; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4915); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7183; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7183 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_recv_1939_cell->value; auto cs_index = v_i_7183; auto cs_value = pls::cs::unbox<pls::cs::Array<std::uint8_t>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_4915); std::int32_t cs_arg0 = v_i_7183; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}}};auto cs_closure=pls::cs::make_ref<cs_closure_f08d338e3ea27f97>();cs_closure->v_totalSize_1959_cell=v_totalSize_1959_cell;cs_closure->v_bais_3905_cell=v_bais_3905_cell;cs_closure->v_check_cell=v_check_cell;cs_closure->v_recvSize_1981_cell=v_recvSize_1981_cell;cs_closure->v_split_cell=v_split_cell;cs_closure->v_recv_1939_cell=v_recv_1939_cell;cs_closure->cs_this=cs_this;return pls::cs::Delegate<void()>::bind_identity(cs_closure,pls::cs::raw(v_totalSize_1959_cell),std::string("M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4586")+std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(v_bais_3905_cell)))+std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(v_check_cell)))+std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(v_recvSize_1981_cell)))+std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(v_split_cell)))+std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(v_recv_1939_cell))),[weak=pls::cs::DelegateCapture<cs_closure_f08d338e3ea27f97>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()))); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());});
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c3b53640b80e29dc; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::throw_exception(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c3b53640b80e29dc; }()));
}
} catch(const pls::cs::Exception& cs_caught_353) {auto cs_exception_353=pls::cs::capture_exception(cs_caught_353);
if(pls::cs::exception_is(cs_exception_353,"System.Exception")) {auto v_ex_7377=cs_exception_353;{
([&]() { auto cs_target = cs_this; auto cs_value = v_url_cell->value; pls::game::cs_require(cs_target)->cs_f78aa7a0d989fd7c = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_32388247d17bb567; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffff9eull)); pls::game::cs_require(cs_target)->cs_32388247d17bb567 = cs_value; return cs_value; }());
}
pls::cs::throw_exception(v_ex_7377);
}}
else {throw;} }}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_bais_3905_cell->value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
try {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b>>(v_bais_3905_cell->value); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());});
} catch(const pls::cs::Exception& cs_caught_354) {auto cs_exception_354=pls::cs::capture_exception(cs_caught_354);
if(pls::cs::exception_is(cs_exception_354,"System.Exception")) {{

}}
else {throw;} }
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_3b41638e424b9ee0>{}; v_bais_3905_cell->value = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c98fe2d601ad1; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); pls::cs::Delegate<void()> cs_arg0 = pls::source_allocations::completed("delegate_evaluation","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):7721",pls::source_allocations::completed("closure_evaluation","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):7721",([&](){struct cs_closure_00502fed1f329ecc : pls::cs::Object{pls::cs::Ref<cs_77de402a688eeb9d> cs_this;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(cs_this,v);}void release_edges()override{pls::cs::Object::release_edges();pls::cs::clear_ref(cs_this);}void Invoke(){{
try {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::OfflineWebRequest>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19c98fe2d601ad1; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Dispose(); }());});
} catch(const pls::cs::Exception& cs_caught_355) {auto cs_exception_355=pls::cs::capture_exception(cs_caught_355);
if(pls::cs::exception_is(cs_exception_355,"System.Exception")) {{

}}
else {throw;} }
}}};auto cs_closure=pls::cs::make_ref<cs_closure_00502fed1f329ecc>();cs_closure->cs_this=cs_this;return pls::cs::Delegate<void()>::bind_identity(cs_closure,pls::cs::raw(cs_this),std::string("M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):7721"),[weak=pls::cs::DelegateCapture<cs_closure_00502fed1f329ecc>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()))); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());});
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::kairo::OfflineWebRequest>{}; pls::game::cs_require(cs_target)->cs_d19c98fe2d601ad1 = cs_value; return cs_value; }());
});
throw pls::cs::ReturnFlow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>{v_recv_1939_cell->value};
}
}catch(const pls::cs::ReturnFlow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<pls::cs::Array<std::uint8_t>>>();}
}
}
}

// M:kairo.unity.io.HttpObject.#ctor(System.Boolean)
pls::cs::Ref<cs_77de402a688eeb9d> cs_e751bd24448f57f3(bool v_retryEnable) { cs_init_77de402a688eeb9d();
{ auto cs_this = pls::cs::make_ref<cs_77de402a688eeb9d>(); cs_e751bd24448f57f3_init(cs_this,v_retryEnable); return cs_this; }
}

void cs_e751bd24448f57f3_init(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,bool v_retryEnable) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.#ctor(System.Boolean)",kairo);
{
([&]() { auto cs_receiver = cs_this; auto cs_rhs = v_retryEnable; auto cs_value = cs_rhs; cs_2756d68ee4aaa074(static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_receiver),cs_value); return cs_value; }());
}
}
}

// M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean,System.Boolean)
pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_996b0c2cdd719ab2(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check,bool v_split) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean,System.Boolean)",kairo);
{
std::int32_t v_num_771{};
pls::cs::String v_title_966{};
pls::cs::String v_text_1033{};
pls::cs::String v_text2_1249{};
pls::cs::Ref<cs_0286a0dbe9da0b33> v_dialog_1379{};
{
v_num_771 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (true) {
try {
return ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_this); pls::cs::String cs_arg0 = v_url; pls::cs::Array<std::uint8_t> cs_arg1 = v_send; bool cs_arg2 = v_check; bool cs_arg3 = v_split; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d2a21b4a921597a9(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
} catch(const pls::cs::Exception& cs_caught_346) {auto cs_exception_346=pls::cs::capture_exception(cs_caught_346);
if(pls::cs::exception_is(cs_exception_346,"System.Exception")) {auto v_ex_878=cs_exception_346;{
if ((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_fa8defba521b90ce; }())))) {
goto cs_label_IL_00ab;
}
v_title_966 = ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());}) ? ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x63a5" u"\x7d9a" u"\x78ba" u"\x8a8d" u"",4);return cs_literal;}()) : ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0043" u"\x006f" u"\x006e" u"\x006e" u"\x0065" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",10);return cs_literal;}())));
v_text_1033 = ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());}) ? ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x30cd" u"\x30c3" u"\x30c8" u"\x30ef" u"\x30fc" u"\x30af" u"\x63a5" u"\x7d9a" u"\x306b" u"\x5931" u"\x6557" u"\x3057" u"\x307e" u"\x3057" u"\x305f" u"\x3002" u"\x000a" u"\x96fb" u"\x6ce2" u"\x304c" u"\x7121" u"\x3044" u"\x304b" u"\x3001" u"\x901a" u"\x4fe1" u"\x304c" u"\x8a31" u"\x53ef" u"\x3055" u"\x308c" u"\x3066" u"\x3044" u"\x306a" u"\x3044" u"\x53ef" u"\x80fd" u"\x6027" u"\x304c" u"\x3042" u"\x308a" u"\x307e" u"\x3059" u"\x3002" u"",44);return cs_literal;}()) : ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0046" u"\x0061" u"\x0069" u"\x006c" u"\x0075" u"\x0072" u"\x0065" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x006e" u"\x0065" u"\x0074" u"\x0077" u"\x006f" u"\x0072" u"\x006b" u"\x0020" u"\x0063" u"\x006f" u"\x006e" u"\x006e" u"\x0065" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x002e" u"\x0020" u"\x000a" u"\x004f" u"\x0072" u"\x0020" u"\x0072" u"\x0061" u"\x0064" u"\x0069" u"\x006f" u"\x0020" u"\x0077" u"\x0061" u"\x0076" u"\x0065" u"\x0073" u"\x0020" u"\x0064" u"\x006f" u"\x0020" u"\x006e" u"\x006f" u"\x0074" u"\x002c" u"\x0020" u"\x0074" u"\x0068" u"\x0065" u"\x0072" u"\x0065" u"\x0020" u"\x0069" u"\x0073" u"\x0020" u"\x0061" u"\x0020" u"\x0070" u"\x006f" u"\x0073" u"\x0073" u"\x0069" u"\x0062" u"\x0069" u"\x006c" u"\x0069" u"\x0074" u"\x0079" u"\x0020" u"\x0074" u"\x0068" u"\x0061" u"\x0074" u"\x0020" u"\x0074" u"\x0068" u"\x0065" u"\x0020" u"\x0063" u"\x006f" u"\x006d" u"\x006d" u"\x0075" u"\x006e" u"\x0069" u"\x0063" u"\x0061" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x0020" u"\x0069" u"\x0073" u"\x0020" u"\x006e" u"\x006f" u"\x0074" u"\x0020" u"\x0070" u"\x0065" u"\x0072" u"\x006d" u"\x0069" u"\x0074" u"\x0074" u"\x0065" u"\x0064" u"\x002e" u"",118);return cs_literal;}())));
v_text2_1249 = ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());}) ? ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x518d" u"\x63a5" u"\x7d9a" u"\x002c" u"\x4e2d" u"\x6b62" u"",6);return cs_literal;}()) : ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0052" u"\x0065" u"\x0074" u"\x0072" u"\x0079" u"\x002c" u"\x0043" u"\x0061" u"\x006e" u"\x0063" u"\x0065" u"\x006c" u"",12);return cs_literal;}())));
if (([&]() -> bool { auto cs_left = v_num_771; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x1f4ull)); cs_26244a61d0d2e16c(cs_arg0); }());
}
v_dialog_1379 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean,System.Boolean):1388",([&]() -> pls::cs::Ref<cs_0286a0dbe9da0b33> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); pls::cs::String cs_arg1 = v_title_966; return cs_63545d46c6887c12(cs_arg0,cs_arg1); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_1379); pls::cs::String cs_arg0 = v_text_1033; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d53653cbf2469429(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_1379); pls::cs::Array<pls::cs::String> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=v_text2_1249;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(44);return pls::cs::string_split(cs_text,cs_separators);}());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f93da55cc1dd9ec3(cs_receiver,cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_0286a0dbe9da0b33>>(v_dialog_1379); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1727d3688d4d03e6(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left != cs_right); }())) {
goto cs_label_IL_00ab;
}
([&]() { auto cs_old = v_num_771; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_771 = cs_new; return cs_old; }());
continue;
cs_label_IL_00ab: ;
pls::cs::throw_exception(v_ex_878);
}}
else {throw;} }
}
}
}
}
}
}

// M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean)
pls::cs::Array<std::uint8_t> cs_b9e6030919acf56d(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean)",kairo);
{
return ([&]() { auto cs_array = ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_this); pls::cs::String cs_arg0 = v_url; pls::cs::Array<std::uint8_t> cs_arg1 = v_send; bool cs_arg2 = v_check; bool cs_arg3 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_996b0c2cdd719ab2(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
}
}
}

// M:kairo.unity.io.HttpObject.get_IsRetryEnable
bool cs_a14193378f92facc(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.get_IsRetryEnable",kairo);
{return cs_this->cs_7db6741aeec24156;}
}
}
}

// M:kairo.unity.io.HttpObject.GetErrorCode
std::int32_t cs_bc4c613a89384b31(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.GetErrorCode",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_32388247d17bb567; }());
}
}
}
}

// M:kairo.unity.io.HttpObject.GetErrorText
pls::cs::String cs_a267b8503432886a(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.GetErrorText",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0810a6bbdad8f652; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());})))) {
return ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x004d" u"\x0061" u"\x006b" u"\x0065" u"\x0020" u"\x0073" u"\x0075" u"\x0072" u"\x0065" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x0061" u"\x006c" u"\x006c" u"\x006f" u"\x0077" u"\x0020" u"\x0063" u"\x006f" u"\x006e" u"\x006e" u"\x0065" u"\x0063" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"\x0020" u"\x0074" u"\x006f" u"\x0020" u"\x006e" u"\x0065" u"\x0074" u"\x0077" u"\x006f" u"\x0072" u"\x006b" u"\x0020" u"\x0061" u"\x006e" u"\x0064" u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"\x0063" u"\x0068" u"\x0065" u"\x0063" u"\x006b" u"\x0020" u"\x0079" u"\x006f" u"\x0075" u"\x0072" u"\x0020" u"\x0073" u"\x0069" u"\x0067" u"\x006e" u"\x0061" u"\x006c" u"\x0020" u"\x0071" u"\x0075" u"\x0061" u"\x006c" u"\x0069" u"\x0074" u"\x0079" u"\x002e" u"",74);return cs_literal;}());
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x901a" u"\x4fe1" u"\x3092" u"\x8a31" u"\x53ef" u"\x3057" u"\x96fb" u"\x6ce2" u"\x72b6" u"\x6cc1" u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"\x3092" u"\x78ba" u"\x8a8d" u"\x3057" u"\x3066" u"\x4e0b" u"\x3055" u"\x3044" u"",22);return cs_literal;}()); auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());});
}
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0810a6bbdad8f652; }());
}
}
}
}

// M:kairo.unity.io.HttpObject.GetErrorUrl
pls::cs::String cs_cab4479c3676c376(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.GetErrorUrl",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f78aa7a0d989fd7c; }());
}
}
}
}

// M:kairo.unity.io.HttpObject.GetTimeStampParam
pls::cs::String cs_c4f4767aa3a57458(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.GetTimeStampParam",kairo);
{
pls::cs::Ref<pls::generated::cs_a465028bea3432a3> v_instance_9019 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_a465028bea3432a3> { return pls::generated::cs_23a91b30234d4879(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); std::int64_t cs_arg0 = ([&]() -> std::int64_t { return cs_e285ad46e15aa69f(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_ab403c0b96bfdb59(cs_receiver,cs_arg0); }());});
pls::cs::String v_text_9115 = pls::source_allocations::completed("concat_call","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9122",pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::source_allocations::completed("boxing","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9136",pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}))); return pls::game::cs_object_string(cs_arg0); }());}));
pls::cs::String v_text2_9164 = pls::source_allocations::completed("concat_call","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9172",pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::source_allocations::completed("boxing","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9186",pls::cs::box(([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return pls::game::cs_object_string(cs_arg0); }());}));
pls::cs::String v_text3_9218 = pls::source_allocations::completed("concat_call","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9226",pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::source_allocations::completed("boxing","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9240",pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}))); return pls::game::cs_object_string(cs_arg0); }());}));
pls::cs::String v_text4_9268 = pls::source_allocations::completed("concat_call","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9276",pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::source_allocations::completed("boxing","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9290",pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}))); return pls::game::cs_object_string(cs_arg0); }());}));
pls::cs::String v_text5_9319 = pls::source_allocations::completed("concat_call","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9327",pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::source_allocations::completed("boxing","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9341",pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}))); return pls::game::cs_object_string(cs_arg0); }());}));
pls::cs::String v_text6_9370 = pls::source_allocations::completed("concat_call","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9378",pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::source_allocations::completed("boxing","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9392",pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_a465028bea3432a3>>(v_instance_9019); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_8d8ff05768cced2b(cs_receiver,cs_arg0); }());}))); return pls::game::cs_object_string(cs_arg0); }());}));
if (([&]() -> bool { auto cs_left = (v_text2_9164).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9454",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text2_9164; return pls::cs::String::concat(cs_left,cs_right); }())); v_text2_9164 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_text3_9218).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9515",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text3_9218; return pls::cs::String::concat(cs_left,cs_right); }())); v_text3_9218 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_text4_9268).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9576",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text4_9268; return pls::cs::String::concat(cs_left,cs_right); }())); v_text4_9268 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_text5_9319).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9637",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text5_9319; return pls::cs::String::concat(cs_left,cs_right); }())); v_text5_9319 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = (v_text6_9370).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9698",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text6_9370; return pls::cs::String::concat(cs_left,cs_right); }())); v_text6_9370 = cs_value; return cs_value; }());
}
return pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9726",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9726",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9726",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9726",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9726",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/io/HttpObject.cs:M:kairo.unity.io.HttpObject.GetTimeStampParam:9726",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"\x0074" u"\x0073" u"\x003d" u"",4);return cs_literal;}()); auto cs_right = v_text_9115; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text2_9164; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text3_9218; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text4_9268; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text5_9319; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = v_text6_9370; return pls::cs::String::concat(cs_left,cs_right); }()));
}
}
}
}

// M:kairo.unity.io.HttpObject.PopErrorCode
std::int32_t cs_82fd3d9e6535f380(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.PopErrorCode",kairo);
{
std::int32_t v_errorCode_8655 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bc4c613a89384b31(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_32388247d17bb567 = cs_value; return cs_value; }());
return v_errorCode_8655;
}
}
}
}

// M:kairo.unity.io.HttpObject.PopErrorText
pls::cs::String cs_0c1c941d76211aca(pls::cs::Ref<cs_77de402a688eeb9d> cs_this) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.PopErrorText",kairo);
{
pls::cs::String v_errorText_8773 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_77de402a688eeb9d>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a267b8503432886a(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String{}; pls::game::cs_require(cs_target)->cs_0810a6bbdad8f652 = cs_value; return cs_value; }());
return v_errorText_8773;
}
}
}
}

// M:kairo.unity.io.HttpObject.set_IsRetryEnable(System.Boolean)
void cs_2756d68ee4aaa074(pls::cs::Ref<cs_77de402a688eeb9d> cs_this,bool v_value) { cs_init_77de402a688eeb9d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.HttpObject.set_IsRetryEnable(System.Boolean)",kairo);
{cs_this->cs_7db6741aeec24156=v_value;}
}
}
}
}
