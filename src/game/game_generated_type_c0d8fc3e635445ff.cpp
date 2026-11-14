// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_c0d8fc3e635445ff.hpp"
namespace pls::game {

void cs_init_c0d8fc3e635445ff(){static pls::cs::TypeInitState state;state.run("java.net.URLDecoder",[](){

});}

// M:java.net.URLDecoder.Decode(System.String,System.String)
pls::cs::String cs_cfedbb85c5954051(pls::cs::String v_s,pls::cs::String v_enc) { cs_init_c0d8fc3e635445ff();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.net.URLDecoder.Decode(System.String,System.String)",kairo);
{try{
pls::cs::Ref<pls::cs::RuntimeEncoding> v_encoding_268 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RuntimeEncoding> { auto cs_arg0 = v_enc; return pls::cs::RuntimeEncoding::GetEncoding(cs_arg0); }());});
pls::cs::String v_text_316 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"",0);return cs_literal;}());
pls::cs::Array<std::uint8_t> v_bytes_337 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = v_encoding_268; auto cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0020" u"",1);return cs_literal;}()); return pls::game::cs_require(cs_receiver)->GetBytes(cs_arg0); }());});
for (std::int32_t v_i_381 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_381; auto cs_right = (v_bytes_337).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_381; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_381 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/java/net/URLDecoder.cs:M:java.net.URLDecoder.Decode(System.String,System.String):427",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/java/net/URLDecoder.cs:M:java.net.URLDecoder.Decode(System.String,System.String):427",([&]() { auto cs_left = v_text_316; auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0025" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=([&]() { auto cs_array = v_bytes_337; auto cs_index = v_i_381; return cs_array.get_Item(cs_index); }());return pls::cs::format_i32_hex(static_cast<std::int32_t>(cs_value),2,true);}());}); return pls::cs::String::concat(cs_left,cs_right); }())); v_text_316 = cs_value; return cs_value; }());
}
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_s; auto cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002b" u"",1);return cs_literal;}()); auto cs_arg2 = v_text_316; return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }());}); v_s = cs_value; return cs_value; }());
{pls::cs::Ref<pls::cs::MemoryStream> v_memoryStream_522=pls::source_allocations::completed("new_object","src/KairoLibrary/java/net/URLDecoder.cs:M:java.net.URLDecoder.Decode(System.String,System.String):537",([&]() { return pls::cs::make_ref<pls::cs::MemoryStream>(); }()));pls::cs::run_finally([&](){{
std::int32_t v_num_570 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (([&]() -> bool { auto cs_left = v_num_570; auto cs_right = (v_s).length(); return (cs_left < cs_right); }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_s; auto cs_index = v_num_570; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(37)); return (cs_left == cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_memoryStream_522; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value=pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = v_s; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_570; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());});return pls::cs::byte_parse_hex_number(cs_value,true);}());}); pls::game::cs_require(cs_receiver)->WriteByte(cs_arg0); }());});
([&]() { auto cs_old = v_num_570; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_570 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = v_encoding_268; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_array = v_s; auto cs_index = v_num_570; return cs_array.at(cs_index); }()); return pls::game::cs_char_string(cs_arg0); }());}); return pls::game::cs_require(cs_receiver)->GetBytes(cs_arg0); }());}); v_bytes_337 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_memoryStream_522; auto cs_arg0 = v_bytes_337; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = (v_bytes_337).length(); pls::game::cs_require(cs_receiver)->Write(cs_arg0,cs_arg1,cs_arg2); }());});
([&]() { auto cs_old = v_num_570; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_570 = cs_new; return cs_old; }());
}
}
throw pls::cs::ReturnFlow<pls::cs::String>{pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = v_encoding_268; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = v_memoryStream_522; return pls::game::cs_require(cs_receiver)->ToArray(); }());}); return pls::game::cs_require(cs_receiver)->GetString(cs_arg0); }());})};
}},[&](){if(v_memoryStream_522){pls::game::cs_require(v_memoryStream_522)->Dispose();}});}
}catch(const pls::cs::ReturnFlow<pls::cs::String>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::String>();}
}
}

// M:java.net.URLDecoder.Decode(System.String)
pls::cs::String cs_eaac473e179adb19(pls::cs::String v_s) { cs_init_c0d8fc3e635445ff();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.net.URLDecoder.Decode(System.String)",kairo);
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_s; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0038" u"",5);return cs_literal;}()); return cs_cfedbb85c5954051(cs_arg0,cs_arg1); }());
}
}
}
}
