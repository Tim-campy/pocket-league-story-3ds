// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_3da6da0799f0bdf8.hpp"
#include "game_generated_type_83a7bc36395d16bd.hpp"
#include "generated/portable_generated_type_83a7bc36395d16bd.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
namespace pls::game {

static pls::cs::Ref<cs_3da6da0799f0bdf8> cs_8a995ef2c270d901_value{};

pls::cs::Ref<cs_3da6da0799f0bdf8>& cs_8a995ef2c270d901(){pls::generated::cs_init_83a7bc36395d16bd();return cs_8a995ef2c270d901_value;}

// M:kairo.unity.util.Log.Error(System.String,System.Exception)
pls::cs::String cs_68d38462ed74d43f(pls::cs::String v_text,pls::cs::Ref<pls::cs::ExceptionObject> v_t) { pls::generated::cs_init_83a7bc36395d16bd();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Log.Error(System.String,System.Exception)",kairo);
{
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; pls::cs::Ref<pls::cs::ExceptionObject> cs_arg1 = v_t; return pls::generated::cs_a66c820e92bb7b9a(cs_arg0,cs_arg1); }());}); v_text = cs_value; return cs_value; }());
if (pls::generated::cs_4cc76a7a43706693()) {
if (([&]() { auto cs_left = pls::cs::box(v_text); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = v_text; pls::generated::cs_4fdae576ed75d546(cs_arg0); }());});
}
if (([&]() { auto cs_left = pls::cs::box(v_t); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_t); pls::kairo::debug_log(cs_arg0); }());});
}
}
if (([&]() { auto cs_left = pls::cs::box(cs_8a995ef2c270d901()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3da6da0799f0bdf8>>(cs_8a995ef2c270d901()); pls::cs::String cs_arg0 = v_text; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_c0c7948ad6c9b04a(cs_arg0); }());
}
if (([&]() { auto cs_left = pls::cs::box(v_text); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());
}
return v_text;
}
}
}
}
