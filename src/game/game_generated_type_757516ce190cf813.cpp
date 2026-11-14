// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_757516ce190cf813.hpp"
namespace pls::game {

void cs_757516ce190cf813::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_4c4f6c2ffd41c9ca,visitor);pls::cs::trace_value(cs_514f5ce520685c7d,visitor);pls::cs::trace_value(cs_5d55f15261994422,visitor);pls::cs::trace_value(cs_c6683c02c87c987a,visitor);pls::cs::trace_value(cs_62b3f795cc04ca10,visitor);pls::cs::trace_value(cs_4760729595bf56db,visitor);pls::cs::trace_value(cs_34b944f664f45179,visitor);pls::cs::trace_value(cs_c0fba19991e5dbf1,visitor);pls::cs::trace_value(cs_8d755a9f926cf434,visitor);pls::cs::trace_value(cs_1e8c6984f2271d7b,visitor);pls::cs::trace_value(cs_613db60c2c58fddc,visitor);}

void cs_757516ce190cf813::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_4c4f6c2ffd41c9ca);pls::cs::release_value(cs_514f5ce520685c7d);pls::cs::release_value(cs_5d55f15261994422);pls::cs::release_value(cs_c6683c02c87c987a);pls::cs::release_value(cs_62b3f795cc04ca10);pls::cs::release_value(cs_4760729595bf56db);pls::cs::release_value(cs_34b944f664f45179);pls::cs::release_value(cs_c0fba19991e5dbf1);pls::cs::release_value(cs_8d755a9f926cf434);pls::cs::release_value(cs_1e8c6984f2271d7b);pls::cs::release_value(cs_613db60c2c58fddc);}

pls::cs::String cs_757516ce190cf813::ToString() {return cs_94ac3fd922c20ee0(pls::cs::static_pointer_cast<cs_757516ce190cf813>(shared_from_this()));}

std::int32_t cs_757516ce190cf813::GetHashCode() {return cs_cffdde71a559d83c(pls::cs::static_pointer_cast<cs_757516ce190cf813>(shared_from_this()));}

void cs_init_757516ce190cf813(){static pls::cs::TypeInitState state;state.run("kairo.unity.surface.TouchEvent",[](){

});}

// M:kairo.unity.surface.TouchEvent.#ctor
pls::cs::Ref<cs_757516ce190cf813> cs_f7e61b586cae64ba() { cs_init_757516ce190cf813();
{ auto cs_this = pls::cs::make_ref<cs_757516ce190cf813>(); cs_f7e61b586cae64ba_init(cs_this); return cs_this; }
}

void cs_f7e61b586cae64ba_init(pls::cs::Ref<cs_757516ce190cf813> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchEvent.#ctor",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_757516ce190cf813>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_76be1a4ec43b41ef(cs_receiver); }());
}
}
}

// M:kairo.unity.surface.TouchEvent.GetHashCode
std::int32_t cs_cffdde71a559d83c(pls::cs::Ref<cs_757516ce190cf813> cs_this) { cs_init_757516ce190cf813();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchEvent.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:kairo.unity.surface.TouchEvent.Init
void cs_76be1a4ec43b41ef(pls::cs::Ref<cs_757516ce190cf813> cs_this) { cs_init_757516ce190cf813();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchEvent.Init",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_3a3d09f9e75a32d2>{}; pls::game::cs_require(cs_target)->cs_613db60c2c58fddc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4c4f6c2ffd41c9ca = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_514f5ce520685c7d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_5d55f15261994422 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c6683c02c87c987a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_62b3f795cc04ca10 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(pls::game::cs_f32(0x00000000u)); pls::game::cs_require(cs_target)->cs_4760729595bf56db = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(pls::game::cs_f32(0x00000000u)); pls::game::cs_require(cs_target)->cs_34b944f664f45179 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_c0fba19991e5dbf1 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_i_1270 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1270; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1270; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1270 = cs_new; return cs_old; }())) {
for (std::int32_t v_j_1341 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1341; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = v_i_1270; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1341; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1341 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d755a9f926cf434; }()); auto cs_index = v_i_1270; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_1341; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::int32_t>>{}); return cs_left != cs_right; }())) {
for (std::int32_t v_k_1513 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_1513; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_1513; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_1513 = cs_new; return cs_old; }())) {
for (std::int32_t v_l_1582 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_1582; auto cs_right = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_index = v_k_1513; return cs_array.get_Item(cs_index); }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_1582; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_1582 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1e8c6984f2271d7b; }()); auto cs_index = v_k_1513; return cs_array.get_Item(cs_index); }()); auto cs_index = v_l_1582; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}
}
}

// M:kairo.unity.surface.TouchEvent.IsPositive
bool cs_b85e74354de5635b(pls::cs::Ref<cs_757516ce190cf813> cs_this) { cs_init_757516ce190cf813();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchEvent.IsPositive",kairo);
{
return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); return cs_f8630b89ac30a6e6(cs_arg0); }());
}
}
}
}

// M:kairo.unity.surface.TouchEvent.IsPositive(System.Int32)
bool cs_f8630b89ac30a6e6(std::int32_t v_type) { cs_init_757516ce190cf813();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchEvent.IsPositive(System.Int32)",kairo);
{
switch (v_type) {
case 0:
case 2:
case 4:
case 7:
case 8:
case 9:
{
return true;
}
default:
{
return false;
}
}
}
}
}

// M:kairo.unity.surface.TouchEvent.ToString
pls::cs::String cs_94ac3fd922c20ee0(pls::cs::Ref<cs_757516ce190cf813> cs_this) { cs_init_757516ce190cf813();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchEvent.ToString",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return ([&]() -> pls::cs::String { auto cs_left = pls::source_allocations::completed("concat_call","src/KairoLibrary/kairo/unity/surface/TouchEvent.cs:M:kairo.unity.surface.TouchEvent.ToString:1783",pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::box(cs_this); auto cs_arg1 = pls::cs::box(([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x003a" u"\x0063" u"\x006f" u"\x006d" u"\x0070" u"\x006f" u"\x006e" u"\x0065" u"\x006e" u"\x0074" u"\x003d" u"",11);return cs_literal;}())); return pls::game::cs_concat_objects2(cs_arg0,cs_arg1); }());})); if(!cs_left.is_null())return cs_left; return ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}()); }());
}
pls::cs::String v_text_1840 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x0044" u"\x004f" u"\x0057" u"\x004e" u"",9);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x0055" u"\x0050" u"",7);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x0045" u"\x004e" u"\x0054" u"\x0045" u"\x0052" u"",10);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x004c" u"\x0045" u"\x0041" u"\x0056" u"\x0045" u"",10);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x004d" u"\x004f" u"\x0056" u"\x0045" u"",9);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x0043" u"\x004c" u"\x0049" u"\x0043" u"\x004b" u"",10);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x004c" u"\x004f" u"\x0053" u"\x0054" u"",9);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x0044" u"\x0052" u"\x0041" u"\x0047" u"",9);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x0047" u"\x0052" u"\x0049" u"\x0044" u"\x005f" u"\x0044" u"\x0052" u"\x0041" u"\x0047" u"",14);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x0043" u"\x0045" u"\x004c" u"\x004c" u"\x005f" u"\x0044" u"\x0052" u"\x0041" u"\x0047" u"",14);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x0043" u"\x0041" u"\x004e" u"\x0043" u"\x0045" u"\x004c" u"",11);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x0059" u"\x0050" u"\x0045" u"\x005f" u"\x004f" u"\x004e" u"",7);return cs_literal;}()); v_text_1840 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/surface/TouchEvent.cs:M:kairo.unity.surface.TouchEvent.ToString:2348",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/surface/TouchEvent.cs:M:kairo.unity.surface.TouchEvent.ToString:2348",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x004e" u"\x004f" u"\x004e" u"\x0045" u"\x005b" u"",5);return cs_literal;}()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }())); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005d" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); v_text_1840 = cs_value; return cs_value; }());
}
return pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/surface/TouchEvent.cs:M:kairo.unity.surface.TouchEvent.ToString:2377",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/surface/TouchEvent.cs:M:kairo.unity.surface.TouchEvent.ToString:2377",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/surface/TouchEvent.cs:M:kairo.unity.surface.TouchEvent.ToString:2377",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/surface/TouchEvent.cs:M:kairo.unity.surface.TouchEvent.ToString:2377",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/surface/TouchEvent.cs:M:kairo.unity.surface.TouchEvent.ToString:2377",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/surface/TouchEvent.cs:M:kairo.unity.surface.TouchEvent.ToString:2377",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0054" u"\x006f" u"\x0075" u"\x0063" u"\x0068" u"\x0045" u"\x0076" u"\x0065" u"\x006e" u"\x0074" u"\x003a" u"",11);return cs_literal;}()); auto cs_right = v_text_1840; return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0020" u"\x0028" u"",2);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }())); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002c" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }())); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0029" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }()));
}
}
}
}
}
