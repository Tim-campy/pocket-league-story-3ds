// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_0ca2ef5bfa869b6b.hpp"
#include "game_generated_type_dc09c88a279424b5.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
namespace pls::game {

void cs_dc09c88a279424b5::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_5352e54601bec7cb,visitor);pls::cs::trace_value(cs_110453e9e91b0c62,visitor);pls::cs::trace_value(cs_ee2adc9e2cf23dac,visitor);pls::cs::trace_value(cs_d7151221c9064cfc,visitor);}

void cs_dc09c88a279424b5::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_5352e54601bec7cb);pls::cs::release_value(cs_110453e9e91b0c62);pls::cs::release_value(cs_ee2adc9e2cf23dac);pls::cs::release_value(cs_d7151221c9064cfc);}

static pls::cs::Ref<cs_dc09c88a279424b5> cs_a0e59a75dec69092_value{};

void cs_init_dc09c88a279424b5(){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.TextFormat",[](){

});}

pls::cs::Ref<cs_dc09c88a279424b5>& cs_a0e59a75dec69092(){cs_init_dc09c88a279424b5();return cs_a0e59a75dec69092_value;}

// M:kairo.unity.ui.TextFormat.#ctor
pls::cs::Ref<cs_dc09c88a279424b5> cs_d337fafafa1bc98d() { cs_init_dc09c88a279424b5();
{ auto cs_this = pls::cs::make_ref<cs_dc09c88a279424b5>(); cs_d337fafafa1bc98d_init(cs_this); return cs_this; }
}

void cs_d337fafafa1bc98d_init(pls::cs::Ref<cs_dc09c88a279424b5> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.#ctor",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(cs_this); pls::cs::String cs_arg0 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_470e46d1c0096c27(cs_receiver,cs_arg0); }());
}
}
}

// M:kairo.unity.ui.TextFormat.Create(System.String)
pls::cs::Ref<cs_dc09c88a279424b5> cs_e5cc191a31275eff(pls::cs::String v_format) { cs_init_dc09c88a279424b5();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.Create(System.String)",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(cs_a0e59a75dec69092()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/ui/TextFormat.cs:M:kairo.unity.ui.TextFormat.Create(System.String):448",([&]() -> pls::cs::Ref<cs_dc09c88a279424b5> { return cs_d337fafafa1bc98d(); }())); cs_a0e59a75dec69092() = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(cs_a0e59a75dec69092()); pls::cs::String cs_arg0 = v_format; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_470e46d1c0096c27(cs_receiver,cs_arg0); }());
return cs_a0e59a75dec69092();
}
}
}

// M:kairo.unity.ui.TextFormat.GetAnchor(System.Int32)
std::int32_t cs_cb4539652f78b54c(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,std::int32_t v_anchor) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.GetAnchor(System.Int32)",kairo);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return v_anchor;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return pls::generated::cs_14daf94c5cc9a117(cs_arg0,cs_arg1); }());}); v_anchor = cs_value; return cs_value; }());
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x70ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x70ull)); return pls::generated::cs_14daf94c5cc9a117(cs_arg0,cs_arg1); }());}); v_anchor = cs_value; return cs_value; }());
}
return ([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d7151221c9064cfc; }()); return (cs_left | cs_right); }());
}
}
}
}

// M:kairo.unity.ui.TextFormat.GetFont
std::int32_t cs_5222c35a27bca506(pls::cs::Ref<cs_dc09c88a279424b5> cs_this) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.GetFont",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5352e54601bec7cb; }());
}
}
}
}

// M:kairo.unity.ui.TextFormat.GetX(System.Single)
float cs_4a7882bb12bfce3f(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,float v_x) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.GetX(System.Single)",kairo);
{
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(cs_this); float cs_arg0 = v_x; pls::cs::Array<std::int32_t> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_110453e9e91b0c62; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4217cc125b778a87(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}

// M:kairo.unity.ui.TextFormat.GetXY(System.Single,System.Int32[])
float cs_4217cc125b778a87(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,float v_basis,pls::cs::Array<std::int32_t> v_elem) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.GetXY(System.Single,System.Int32[])",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(v_elem); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
return v_basis;
}
float v_num_1833 = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::game::cs_f32(0x41200000u); return (cs_left / cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return v_num_1833;
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
return ([&]() -> float { auto cs_left = v_basis; auto cs_right = v_num_1833; return (cs_left + cs_right); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
return ([&]() -> float { auto cs_left = v_basis; auto cs_right = v_num_1833; return (cs_left - cs_right); }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_elem; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
return ([&]() -> float { auto cs_left = v_basis; auto cs_right = v_num_1833; return (cs_left * cs_right); }());
}
return ([&]() -> float { auto cs_left = v_basis; auto cs_right = v_num_1833; return (cs_left / cs_right); }());
}
}
}
}

// M:kairo.unity.ui.TextFormat.GetY(System.Single)
float cs_a6f2c13fea15a192(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,float v_y) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.GetY(System.Single)",kairo);
{
return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(cs_this); float cs_arg0 = v_y; pls::cs::Array<std::int32_t> cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ee2adc9e2cf23dac; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4217cc125b778a87(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}

// M:kairo.unity.ui.TextFormat.Init(System.String)
void cs_470e46d1c0096c27(pls::cs::Ref<cs_dc09c88a279424b5> cs_this,pls::cs::String v_format) { cs_init_dc09c88a279424b5();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.TextFormat.Init(System.String)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_5352e54601bec7cb = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_ee2adc9e2cf23dac = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_110453e9e91b0c62 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_d7151221c9064cfc = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_format); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return;
}
pls::cs::Array<pls::cs::String> v_array_677 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_format; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002c" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_728 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_728; auto cs_right = (v_array_677).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_728; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_728 = cs_new; return cs_old; }())) {
pls::cs::String v_text_774 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_array_677; auto cs_index = v_i_728; return cs_array.get_Item(cs_index); }()); return pls::cs::string_trim(cs_arg0); }());});
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_774; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
continue;
}
if ((([&]() -> bool { auto cs_left = v_i_728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_774; return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_5352e54601bec7cb = cs_value; return cs_value; }());
} else if (((([&]() -> bool { auto cs_left = v_i_728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) || (([&]() -> bool { auto cs_left = v_i_728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())))) {
{
char16_t v_c_959 = ([&]() -> char16_t { pls::cs::String cs_arg0 = v_text_774; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }());
if ((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(43)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(45)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(42)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(47)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_text_774; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::game::cs_substring1(cs_arg0,cs_arg1); }());}); v_text_774 = cs_value; return cs_value; }());
}
std::int32_t v_num_1089 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { pls::cs::String cs_arg0 = v_text_774; return cs_128bfc9b6545e4ca(cs_arg0); }()); auto cs_right = pls::game::cs_f32(0x41200000u); return (cs_left * cs_right); }())));
pls::cs::Array<std::int32_t> v_array2_1144 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/ui/TextFormat.cs:M:kairo.unity.ui.TextFormat.Init(System.String):1153",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))));
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(43)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array2_1144; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(45)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array2_1144; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(42)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array2_1144; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_959); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(47)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = v_array2_1144; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = v_array2_1144; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_num_1089;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
if (([&]() -> bool { auto cs_left = v_i_728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = v_array2_1144; pls::game::cs_require(cs_target)->cs_110453e9e91b0c62 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_value = v_array2_1144; pls::game::cs_require(cs_target)->cs_ee2adc9e2cf23dac = cs_value; return cs_value; }());
}
}
} else if ((([&]() -> bool { auto cs_left = v_i_728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_774; return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_d7151221c9064cfc = cs_value; return cs_value; }());
}
}
}
}
}
}
}
