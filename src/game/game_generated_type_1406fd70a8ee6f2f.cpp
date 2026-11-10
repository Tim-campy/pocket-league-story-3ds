// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_1406fd70a8ee6f2f.hpp"
namespace pls::game {

static pls::cs::Dictionary<char16_t,pls::cs::String> cs_e521319fd884a9af_value{};

void cs_init_1406fd70a8ee6f2f(){static pls::cs::TypeInitState state;state.run("java.net.URLEncoder",[](){
{
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/java/net/URLEncoder.cs:M:java.net.URLEncoder.Encode(System.String):213",pls::cs::Dictionary<char16_t,pls::cs::String>::make()); cs_e521319fd884a9af() = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_e521319fd884a9af(); cs_receiver.Clear(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_e521319fd884a9af(); auto cs_arg0 = char16_t(32); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002b" u"",1);return cs_literal;}()); cs_receiver.Add(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_e521319fd884a9af(); auto cs_arg0 = char16_t(42); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002a" u"",1);return cs_literal;}()); cs_receiver.Add(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_e521319fd884a9af(); auto cs_arg0 = char16_t(45); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002d" u"",1);return cs_literal;}()); cs_receiver.Add(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_e521319fd884a9af(); auto cs_arg0 = char16_t(46); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002e" u"",1);return cs_literal;}()); cs_receiver.Add(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = cs_e521319fd884a9af(); auto cs_arg0 = char16_t(95); auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005f" u"",1);return cs_literal;}()); cs_receiver.Add(cs_arg0,cs_arg1); }());});
}
});}

pls::cs::Dictionary<char16_t,pls::cs::String>& cs_e521319fd884a9af(){cs_init_1406fd70a8ee6f2f();return cs_e521319fd884a9af_value;}

// M:java.net.URLEncoder.Encode(System.String,System.String)
pls::cs::String cs_b22fe40aa09785ca(pls::cs::String v_s,pls::cs::String v_enc) { cs_init_1406fd70a8ee6f2f();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.net.URLEncoder.Encode(System.String,System.String)",kairo);
{
pls::cs::Ref<pls::cs::RuntimeEncoding> v_encoding_583 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RuntimeEncoding> { auto cs_arg0 = v_enc; return pls::cs::RuntimeEncoding::GetEncoding(cs_arg0); }());});
pls::cs::Ref<pls::cs::StringBuilder> v_stringBuilder_638 = pls::source_allocations::completed("new_object","src/KairoLibrary/java/net/URLEncoder.cs:M:java.net.URLEncoder.Encode(System.String,System.String):654",([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }()));
pls::cs::Array<char16_t> v_array_685 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<char16_t> { auto cs_arg0 = v_s; return pls::game::cs_to_chars(cs_arg0); }());});
for (std::int32_t v_i_722 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_722; auto cs_right = (v_array_685).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_722; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_722 = cs_new; return cs_old; }())) {
char16_t v_c_766 = ([&]() { auto cs_array = v_array_685; auto cs_index = v_i_722; return cs_array.get_Item(cs_index); }());
pls::cs::String v_value_791 = pls::cs::String{};
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=cs_e521319fd884a9af();auto cs_key=v_c_766;return cs_dictionary.TryGetValue(cs_key,v_value_791);}());})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_638; auto cs_arg0 = v_c_766; return pls::game::cs_require(cs_receiver)->Append(cs_arg0); }());});
continue;
}
pls::cs::Array<std::uint8_t> v_bytes_922 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = v_encoding_583; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_c_766; return pls::game::cs_char_string(cs_arg0); }());}); return pls::game::cs_require(cs_receiver)->GetBytes(cs_arg0); }());});
for (std::int32_t v_j_976 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_976; auto cs_right = (v_bytes_922).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_976; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_976 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_638; auto cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/java/net/URLEncoder.cs:M:java.net.URLEncoder.Encode(System.String,System.String):1038",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0025" u"",1);return cs_literal;}()); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=([&]() { auto cs_array = v_bytes_922; auto cs_index = v_j_976; return cs_array.get_Item(cs_index); }());return pls::cs::format_i32_hex(static_cast<std::int32_t>(cs_value),2,true);}());}); return pls::cs::String::concat(cs_left,cs_right); }())); return pls::game::cs_require(cs_receiver)->Append(cs_arg0); }());});
}
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = v_stringBuilder_638; return pls::game::cs_require(cs_receiver)->ToString(); }());});
}
}
}

// M:java.net.URLEncoder.Encode(System.String)
pls::cs::String cs_4eef7fc5ca116b40(pls::cs::String v_s) { cs_init_1406fd70a8ee6f2f();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.net.URLEncoder.Encode(System.String)",kairo);
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_s; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0038" u"",5);return cs_literal;}()); return cs_b22fe40aa09785ca(cs_arg0,cs_arg1); }());
}
}
}
}
