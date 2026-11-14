// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_6d8b1b9c55c43b83.hpp"
#include "game_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
namespace pls::game {

void cs_init_6d8b1b9c55c43b83(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.MD5",[](){

});}

// M:kairo.unity.util.MD5.GetValue(System.Byte[])
pls::cs::String cs_56eb66aa3df24706(pls::cs::Array<std::uint8_t> v_buf) { cs_init_6d8b1b9c55c43b83();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.MD5.GetValue(System.Byte[])",kairo);
{
pls::cs::Array<std::uint8_t> v_array_206 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_buffer=v_buf;return pls::cs::md5_compute_hash(cs_buffer);}());});
pls::cs::Ref<pls::cs::StringBuilder> v_stringBuilder_291 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/MD5.cs:M:kairo.unity.util.MD5.GetValue(System.Byte[]):307",([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }()));
for (std::int32_t v_i_340 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_340; auto cs_right = (v_array_206).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_340; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_340 = cs_new; return cs_old; }())) {
pls::cs::String v_text_386 = ([&]() -> pls::cs::String { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_array_206; auto cs_index = v_i_340; return cs_array.get_Item(cs_index); }())); return (cs_left & cs_right); }()); return cs_4f16d65e85f49d6f(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_386; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/MD5.cs:M:kairo.unity.util.MD5.GetValue(System.Byte[]):478",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0030" u"",1);return cs_literal;}()); auto cs_right = v_text_386; return pls::cs::String::concat(cs_left,cs_right); }())); v_text_386 = cs_value; return cs_value; }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_291; auto cs_arg0 = v_text_386; return pls::game::cs_require(cs_receiver)->Append(cs_arg0); }());});
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = v_stringBuilder_291; return pls::game::cs_require(cs_receiver)->ToString(); }());});
}
}
}
}
