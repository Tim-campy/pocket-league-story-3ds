// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_15e3f7b692b3f380.hpp"
#include "portable_generated_type_1ff3292665c8e0c4.hpp"
#include "portable_generated_type_5098bfda9cf65745.hpp"
#include "portable_generated_type_52158c8b20364c2b.hpp"
#include "portable_generated_type_582a926e9c7748a6.hpp"
#include "portable_generated_type_67cd241ab51652f1.hpp"
#include "portable_generated_type_72d9658ed61145d6.hpp"
#include "portable_generated_type_7de6788b61a5af56.hpp"
#include "portable_generated_type_86e62a3c0e632a0f.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
#include "portable_generated_type_e7d772862db62924.hpp"
#include "portable_generated_type_67cd241ab51652f1_templates.hpp"
namespace pls::generated {

void cs_init_1ff3292665c8e0c4(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.StringUtil",[](){

});}

// M:kairo.unity.util.StringUtil.Escape(System.String)
pls::cs::String cs_d7ec43a7abb0b748(pls::cs::String v_text) { cs_init_1ff3292665c8e0c4();
{
pls::cs::Ref<pls::cs::StringBuilder> v_stringBuilder_3305 = ([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }());
std::int32_t v_num_3349 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (([&]() -> bool { auto cs_left = v_num_3349; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text; return cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }())) {
std::int32_t v_num2_3402 = ([&]() -> std::int32_t { auto cs_arg0 = v_text; auto cs_arg1 = char16_t(92); auto cs_arg2 = v_num_3349; return pls::generated::cs_index_char2(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num2_3402; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3305; auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = v_num_3349; return pls::generated::cs_substring1(cs_arg0,cs_arg1); }()); return pls::generated::cs_require(cs_receiver)->Append(cs_arg0); }());
break;
}
([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3305; auto cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; std::int32_t cs_arg1 = v_num_3349; std::int32_t cs_arg2 = v_num2_3402; return cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); return pls::generated::cs_require(cs_receiver)->Append(cs_arg0); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_3402; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text; return cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }())) {
char16_t v_c_3630 = ([&]() -> char16_t { pls::cs::String cs_arg0 = v_text; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num2_3402; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_3630); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(92)); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3305; auto cs_arg0 = char16_t(92); return pls::generated::cs_require(cs_receiver)->Append(cs_arg0); }());
} else if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_3630); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(116)); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3305; auto cs_arg0 = char16_t(9); return pls::generated::cs_require(cs_receiver)->Append(cs_arg0); }());
} else if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_c_3630); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(110)); return (cs_left == cs_right); }())) {
([&]() -> pls::cs::Ref<pls::cs::StringBuilder> { auto cs_receiver = v_stringBuilder_3305; auto cs_arg0 = char16_t(10); return pls::generated::cs_require(cs_receiver)->Append(cs_arg0); }());
}
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num2_3402; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); v_num_3349 = cs_value; return cs_value; }());
}
return ([&]() -> pls::cs::String { auto cs_receiver = v_stringBuilder_3305; return pls::generated::cs_require(cs_receiver)->ToString(); }());
}
}

// M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32,System.Char,System.Boolean)
pls::cs::String cs_b1be14b163e17dea(pls::cs::String v_value,std::int32_t v_len,char16_t v_padding,bool v_left) { cs_init_1ff3292665c8e0c4();
{
pls::cs::String v_text_4289 = pls::cs::String(std::u16string(u"",0));
std::int32_t v_num_4307 = (([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { char16_t cs_arg0 = v_padding; return cs_f8c13f883911de4b(cs_arg0); }()); return cs_a8e45b955b78e04d(cs_arg0); }())).length();
std::int32_t v_num2_4364 = ([&]() -> std::int32_t { auto cs_left = v_len; auto cs_right = (([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = v_value; return cs_a8e45b955b78e04d(cs_arg0); }())).length(); return pls::cs::sub_i32(cs_left,cs_right); }());
for (std::int32_t v_i_4414 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4414; auto cs_right = v_num2_4364; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4414; auto cs_rhs = v_num_4307; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_i_4414 = cs_value; return cs_value; }())) {
([&]() { auto cs_old = v_text_4289; auto cs_rhs = v_padding; auto cs_value = pls::cs::String::concat(cs_old,pls::generated::cs_char_string(cs_rhs)); v_text_4289 = cs_value; return cs_value; }());
}
if (v_left) {
return ([&]() { auto cs_left = v_value; auto cs_right = v_text_4289; return pls::cs::String::concat(cs_left,cs_right); }());
}
return ([&]() { auto cs_left = v_text_4289; auto cs_right = v_value; return pls::cs::String::concat(cs_left,cs_right); }());
}
}

// M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32,System.Char)
pls::cs::String cs_c6a612f36129f54a(pls::cs::String v_value,std::int32_t v_len,char16_t v_padding) { cs_init_1ff3292665c8e0c4();
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value; std::int32_t cs_arg1 = v_len; char16_t cs_arg2 = v_padding; bool cs_arg3 = false; return cs_b1be14b163e17dea(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}

// M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32)
pls::cs::String cs_17904ea55a78170d(pls::cs::String v_value,std::int32_t v_len) { cs_init_1ff3292665c8e0c4();
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value; std::int32_t cs_arg1 = v_len; char16_t cs_arg2 = char16_t(32); bool cs_arg3 = false; return cs_b1be14b163e17dea(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}

// M:kairo.unity.util.StringUtil.GetCode(System.Byte[])
pls::cs::String cs_4cdefdb4e661cd56(pls::cs::Array<std::uint8_t> v_bytes) { cs_init_1ff3292665c8e0c4();
{
std::uint8_t v_recoveredPdbConstByte_6203 = pls::cs::cast_integral<std::uint8_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
pls::cs::Array<pls::cs::String> v_array_6242 = ([&](){auto cs_initial_array_517=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_517.at(0)=pls::cs::String(std::u16string(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0038" u"",5));cs_initial_array_517.at(1)=pls::cs::String(std::u16string(u"\x0053" u"\x0068" u"\x0069" u"\x0066" u"\x0074" u"\x005f" u"\x004a" u"\x0049" u"\x0053" u"",9));return cs_initial_array_517;}());
if (([&]() -> bool { auto cs_left = (v_bytes).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return ([&]() { auto cs_array = v_array_6242; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
}
for (std::int32_t v_i_6359 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6359; auto cs_right = (v_array_6242).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6359; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6359 = cs_new; return cs_old; }())) {
pls::cs::String v_str_6405 = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_bytes; pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array_6242; auto cs_index = v_i_6359; return cs_array.get_Item(cs_index); }()); return cs_0b9238a3df4985af(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_str_6405; return cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
continue;
}
bool v_flag_6504 = false;
for (std::int32_t v_j_6531 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_6531; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_str_6405; return cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_6531; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_6531 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> char16_t { pls::cs::String cs_arg0 = v_str_6405; std::int32_t cs_arg1 = v_j_6531; return cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(65533)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag_6504 = cs_value; return cs_value; }());
break;
}
}
if ((!(v_flag_6504))) {
return ([&]() { auto cs_array = v_array_6242; auto cs_index = v_i_6359; return cs_array.get_Item(cs_index); }());
}
}
std::int32_t v_num_6716 = (v_bytes).length();
std::int32_t v_num2_6743 = std::int32_t{}, v_num3_6749 = std::int32_t{}, v_num4_6755 = std::int32_t{}, v_num5_6761 = std::int32_t{};
bool v_flag2_6775 = false;
for (std::int32_t v_k_6802 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_6802; auto cs_right = v_num_6716; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_6802; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_6802 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_k_6802; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
if (((([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return (cs_left <= cs_right); }()) || ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7full)); return (cs_left == cs_right); }())) || ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = true; v_flag2_6775 = cs_value; return cs_value; }());
if (((([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_k_6802; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_k_6802; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7full)); return (cs_left <= cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0031" u"\x0036" u"",6));
}
}
}
if (v_flag2_6775) {
return pls::cs::String{};
}
bool v_flag3_7094 = true;
for (std::int32_t v_l_7120 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_7120; auto cs_right = v_num_6716; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_7120; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_7120 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_l_7120; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1bull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()))) {
([&]() { auto cs_value = false; v_flag3_7094 = cs_value; return cs_value; }());
break;
}
}
if (v_flag3_7094) {
return pls::cs::String(std::u16string(u"\x0041" u"\x0053" u"\x0043" u"\x0049" u"\x0049" u"",5));
}
for (std::int32_t v_m_7314 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_7314; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_7314; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_7314 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_m_7314; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_m_7314; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num3_6749 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_m_7314; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num4_6755 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1bull)); return (cs_left != cs_right); }())) {
continue;
}
if ((([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x24ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
if ((([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x24ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
if ((([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return (cs_left == cs_right); }()) && ((([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4aull)); return (cs_left == cs_right); }()))))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
if ((([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x49ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
if (([&]() -> bool { auto cs_left = v_m_7314; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_m_7314; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num5_6761 = cs_value; return cs_value; }());
if (((([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x24ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = v_num5_6761; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x44ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
if ((((((([&]() -> bool { auto cs_left = v_m_7314; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x26ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = v_num5_6761; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1bull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_m_7314; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x24ull)); return (cs_left == cs_right); }())) && ([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_m_7314; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x42ull)); return (cs_left == cs_right); }()))) {
return pls::cs::String(std::u16string(u"\x004a" u"\x0049" u"\x0053" u"",3));
}
}
}
std::int32_t v_num6_8080 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num7_8097 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num8_8114 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_n_8136 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_n_8136; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_n_8136; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_8136 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_n_8136; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_n_8136; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num3_6749 = cs_value; return cs_value; }());
if ((((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x81ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9full)); return (cs_left <= cs_right); }()))) || ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe0ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfcull)); return (cs_left <= cs_right); }()))))) && ((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7eull)); return (cs_left <= cs_right); }()))) || ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfcull)); return (cs_left <= cs_right); }()))))))) {
([&]() { auto cs_old = v_num6_8080; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num6_8080 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_n_8136; auto cs_new = pls::cs::add_i32(cs_old,1); v_n_8136 = cs_new; return cs_old; }());
}
}
for (std::int32_t v_num9_8418 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num9_8418; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num9_8418; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_8418 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_num9_8418; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num9_8418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num3_6749 = cs_value; return cs_value; }());
if ((((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa1ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa1ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); return (cs_left <= cs_right); }()))) || (((([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8eull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa1ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdfull)); return (cs_left <= cs_right); }()))))) {
([&]() { auto cs_old = v_num7_8097; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num7_8097 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num9_8418; auto cs_new = pls::cs::add_i32(cs_old,1); v_num9_8418 = cs_new; return cs_old; }());
} else if (([&]() -> bool { auto cs_left = v_num9_8418; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num9_8418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num4_6755 = cs_value; return cs_value; }());
if (((((([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8full)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa1ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa1ull)); auto cs_right = v_num4_6755; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); return (cs_left <= cs_right); }()))) {
([&]() { auto cs_old = v_num7_8097; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num7_8097 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num9_8418; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num9_8418 = cs_value; return cs_value; }());
}
}
}
for (std::int32_t v_num10_8903 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num10_8903; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num10_8903; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_8903 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = v_num10_8903; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num2_6743 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num10_8903; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num3_6749 = cs_value; return cs_value; }());
if ((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc0ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdfull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbfull)); return (cs_left <= cs_right); }()))) {
([&]() { auto cs_old = v_num8_8114; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num8_8114 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num10_8903; auto cs_new = pls::cs::add_i32(cs_old,1); v_num10_8903 = cs_new; return cs_old; }());
} else if (([&]() -> bool { auto cs_left = v_num10_8903; auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num_6716; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_bytes; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num10_8903; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); v_num4_6755 = cs_value; return cs_value; }());
if ((((((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xe0ull)); auto cs_right = v_num2_6743; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num2_6743; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xefull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); auto cs_right = v_num3_6749; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num3_6749; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbfull)); return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); auto cs_right = v_num4_6755; return (cs_left <= cs_right); }())) && ([&]() -> bool { auto cs_left = v_num4_6755; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbfull)); return (cs_left <= cs_right); }()))) {
([&]() { auto cs_old = v_num8_8114; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num8_8114 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num10_8903; auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num10_8903 = cs_value; return cs_value; }());
}
}
}
pls::cs::Array<std::int32_t> v_array2_9360 = ([&](){auto cs_initial_array_518=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_518.at(0)=([&]() -> std::int32_t { auto cs_left = v_num8_8114; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::mul_i32(cs_left,cs_right); }());cs_initial_array_518.at(1)=([&]() -> std::int32_t { auto cs_left = v_num6_8080; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::mul_i32(cs_left,cs_right); }());return cs_initial_array_518;}());
pls::cs::Array<pls::cs::String> v_array3_9432 = ([&](){auto cs_initial_array_519=pls::cs::Array<pls::cs::String>::make(2);cs_initial_array_519.at(0)=pls::cs::String(std::u16string(u"\x0055" u"\x0054" u"\x0046" u"\x002d" u"\x0038" u"",5));cs_initial_array_519.at(1)=pls::cs::String(std::u16string(u"\x0053" u"\x0068" u"\x0069" u"\x0066" u"\x0074" u"\x005f" u"\x004a" u"\x0049" u"\x0053" u"",9));return cs_initial_array_519;}());
if (([&]() -> bool { auto cs_left = cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array2_9360; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
} else if (([&]() -> bool { auto cs_left = cs_fe98f159e1f0c2a7(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_array = v_array2_9360; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
} else {
([&]() { auto cs_array = v_array2_9360; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
}
for (std::int32_t v_num11_9649 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num11_9649; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_array2_9360).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num11_9649; auto cs_new = pls::cs::add_i32(cs_old,1); v_num11_9649 = cs_new; return cs_old; }())) {
for (std::int32_t v_num12_9714 = ([&]() -> std::int32_t { auto cs_left = (v_array2_9360).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num12_9714; auto cs_right = v_num11_9649; return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num12_9714; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num12_9714 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = v_array2_9360; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_9714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_array2_9360; auto cs_index = v_num12_9714; return cs_array.get_Item(cs_index); }()); return (cs_left < cs_right); }())) {
std::int32_t v_num13_9832 = ([&]() { auto cs_array = v_array2_9360; auto cs_index = v_num12_9714; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_array2_9360; auto cs_index = v_num12_9714; auto cs_value = ([&]() { auto cs_array = v_array2_9360; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_9714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array2_9360; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_9714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_num13_9832;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
pls::cs::String v_text_9942 = ([&]() { auto cs_array = v_array3_9432; auto cs_index = v_num12_9714; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_array3_9432; auto cs_index = v_num12_9714; auto cs_value = ([&]() { auto cs_array = v_array3_9432; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_9714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array3_9432; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_num12_9714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_text_9942;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
for (std::int32_t v_num14_10067 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num14_10067; auto cs_right = (v_array3_9432).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num14_10067; auto cs_new = pls::cs::add_i32(cs_old,1); v_num14_10067 = cs_new; return cs_old; }())) {
bool v_flag4_10124 = false;
pls::cs::String v_str2_10150 = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_bytes; pls::cs::String cs_arg1 = ([&]() { auto cs_array = v_array3_9432; auto cs_index = v_num14_10067; return cs_array.get_Item(cs_index); }()); return cs_0b9238a3df4985af(cs_arg0,cs_arg1); }());
for (std::int32_t v_num15_10205 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_num15_10205; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_str2_10150; return cs_8eed6765a32617b7(cs_arg0); }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_num15_10205; auto cs_new = pls::cs::add_i32(cs_old,1); v_num15_10205 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> char16_t { pls::cs::String cs_arg0 = v_str2_10150; std::int32_t cs_arg1 = v_num15_10205; return cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(65533)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag4_10124 = cs_value; return cs_value; }());
break;
}
}
if ((!(v_flag4_10124))) {
return ([&]() { auto cs_array = v_array3_9432; auto cs_index = v_num14_10067; return cs_array.get_Item(cs_index); }());
}
}
return pls::cs::String{};
}
}

// M:kairo.unity.util.StringUtil.GetString(System.Byte[])
pls::cs::String cs_5d8e9e8201c04369(pls::cs::Array<std::uint8_t> v_bytes) { cs_init_1ff3292665c8e0c4();
{
pls::cs::String v_code_5959 = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_bytes; return cs_4cdefdb4e661cd56(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_code_5959); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
try {
return ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_bytes; pls::cs::String cs_arg1 = v_code_5959; return cs_0b9238a3df4985af(cs_arg0,cs_arg1); }());
} catch(const pls::cs::Exception& cs_caught_516) {auto cs_exception_516=pls::cs::capture_exception(cs_caught_516);
if(pls::cs::exception_is(cs_exception_516,"System.Exception")) {{

}}
else {throw;} }
}
return ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_bytes; return cs_0062608f682073ef(cs_arg0); }());
}
}

// M:kairo.unity.util.StringUtil.LoadStringArray(java.io.InputStream,System.Boolean)
pls::cs::Array<pls::cs::String> cs_38c511d0555671a7(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream,bool v_zeroSkip) { cs_init_1ff3292665c8e0c4();
{
return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_328fe8bffc5f5352(cs_arg0); }()); return cs_0062608f682073ef(cs_arg0); }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x000a" u"",1)); bool cs_arg2 = false; bool cs_arg3 = v_zeroSkip; bool cs_arg4 = false; return cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}

// M:kairo.unity.util.StringUtil.LoadStringArray(kairo.unity.util.JarInflater,System.String,System.Boolean)
pls::cs::Array<pls::cs::String> cs_93446701c72d7a20(pls::cs::Ref<cs_52158c8b20364c2b> v_jar,pls::cs::String v_fileName,bool v_zeroSkip) { cs_init_1ff3292665c8e0c4();
{try{
pls::cs::Ref<cs_e7a5499b363ef51b> v_inputStream_4791 = pls::cs::Ref<cs_e7a5499b363ef51b>{};
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { auto cs_receiver = static_cast<pls::cs::Ref<cs_52158c8b20364c2b>>(v_jar); pls::cs::String cs_arg0 = v_fileName; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f410f19385e7fe89(cs_receiver,cs_arg0); }()); v_inputStream_4791 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_inputStream_4791); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
throw pls::cs::ReturnFlow<pls::cs::Array<pls::cs::String>>{pls::cs::Array<pls::cs::String>{}};
}
throw pls::cs::ReturnFlow<pls::cs::Array<pls::cs::String>>{([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_inputStream_4791; bool cs_arg1 = v_zeroSkip; return cs_38c511d0555671a7(cs_arg0,cs_arg1); }())};
}}, [&]() {
([&]() -> void { auto cs_conditional = v_inputStream_4791; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<cs_e7a5499b363ef51b>{}; v_inputStream_4791 = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::Array<pls::cs::String>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<pls::cs::String>>();}
}

// M:kairo.unity.util.StringUtil.LoadStringArray(kairo.unity.util.JarInflater,System.String)
pls::cs::Array<pls::cs::String> cs_aa767d3dce39dc9d(pls::cs::Ref<cs_52158c8b20364c2b> v_jar,pls::cs::String v_fileName) { cs_init_1ff3292665c8e0c4();
{
return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::Ref<cs_52158c8b20364c2b> cs_arg0 = v_jar; pls::cs::String cs_arg1 = v_fileName; bool cs_arg2 = false; return cs_93446701c72d7a20(cs_arg0,cs_arg1,cs_arg2); }());
}
}

// M:kairo.unity.util.StringUtil.Replace(System.String,System.String,System.String)
pls::cs::String cs_8857a152f901dbe0(pls::cs::String v_value,pls::cs::String v_oldStr,pls::cs::String v_newStr) { cs_init_1ff3292665c8e0c4();
{
while (true) {
std::int32_t v_num_567 = ([&]() -> std::int32_t { auto cs_arg0 = v_value; auto cs_arg1 = v_oldStr; return pls::cs::culture_index_of(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_567; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
break;
}
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = v_num_567; return cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_right = v_newStr; return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_567; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_oldStr; return cs_8eed6765a32617b7(cs_arg0); }()); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_51d6c186b8b049a1(cs_arg0,cs_arg1); }()); return pls::cs::String::concat(cs_left,cs_right); }()); v_value = cs_value; return cs_value; }());
}
return v_value;
}
}

// M:kairo.unity.util.StringUtil.Replace(System.String,System.String)
pls::cs::String cs_abfabf5a341e90ae(pls::cs::String v_value,pls::cs::String v_args) { cs_init_1ff3292665c8e0c4();
{
pls::cs::Array<pls::cs::String> v_array_253 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_args; pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0009" u"",1)); bool cs_arg2 = false; bool cs_arg3 = false; bool cs_arg4 = false; return cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
for (std::int32_t v_i_313 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_313; auto cs_right = (v_array_253).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_313; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_313 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value; pls::cs::String cs_arg1 = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x003c" u"",1)); auto cs_right = pls::generated::cs_integer_string(v_i_313); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x003e" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); pls::cs::String cs_arg2 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_253; auto cs_index = v_i_313; return cs_array.get_Item(cs_index); }()); bool cs_arg1 = false; return cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); return cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }()); v_value = cs_value; return cs_value; }());
}
return v_value;
}
}

// M:kairo.unity.util.StringUtil.Split(System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
pls::cs::Array<pls::cs::String> cs_0f7a7a73dac52ca4(pls::cs::String v_text,pls::cs::String v_sep,bool v_trim,bool v_excludeZeroLength,bool v_escape) { cs_init_1ff3292665c8e0c4();
{
pls::cs::Ref<cs_15e3f7b692b3f380> v_fastVector_1202{};
std::int32_t v_num_1218{};
pls::cs::String v_text2_1230{};
pls::cs::Array<pls::cs::String> v_array_1246{};
std::int32_t v_num2_1257{};
bool v_flag_1498{};
std::int32_t v_num3_1521{};
std::int32_t v_i_1974{};
std::int32_t v_num4_2067{};
std::int32_t v_j_2464{};
{
if ((([&]() { auto cs_left = pls::cs::box(v_text); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text; return cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
return pls::cs::Array<pls::cs::String>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));
}
v_fastVector_1202 = pls::cs::Ref<cs_15e3f7b692b3f380>{};
v_num_1218 = std::int32_t{};
v_text2_1230 = pls::cs::String{};
v_array_1246 = pls::cs::Array<pls::cs::String>{};
v_num2_1257 = std::int32_t{};
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_15e3f7b692b3f380> { return cs_617649d3cca73756(); }()); v_fastVector_1202 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num_1218 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::String(std::u16string(u"",0)); v_text2_1230 = cs_value; return cs_value; }());
do {
cs_label_IL_0020: ;
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_arg0 = v_text; auto cs_arg1 = v_sep; auto cs_arg2 = v_num_1218; return pls::cs::culture_index_of(cs_arg0,cs_arg1,cs_arg2); }()); v_num2_1257 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num2_1257; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_text2_1230; auto cs_rhs = ([&]() -> pls::cs::String { auto cs_arg0 = v_text; auto cs_arg1 = v_num_1218; return pls::generated::cs_substring1(cs_arg0,cs_arg1); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text2_1230 = cs_value; return cs_value; }());
} else {
if (v_escape) {
v_flag_1498 = true;
v_num3_1521 = ([&]() -> std::int32_t { auto cs_left = v_num2_1257; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
while (([&]() -> bool { auto cs_left = v_num3_1521; auto cs_right = v_num_1218; return (cs_left >= cs_right); }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() -> char16_t { pls::cs::String cs_arg0 = v_text; std::int32_t cs_arg1 = v_num3_1521; return cs_b5d1dc3a4e215d09(cs_arg0,cs_arg1); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(92)); return (cs_left != cs_right); }())) {
break;
}
([&]() { auto cs_value = (!(v_flag_1498)); v_flag_1498 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_1521; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num3_1521 = cs_new; return cs_old; }());
}
if ((!(v_flag_1498))) {
([&]() { auto cs_value = ([&]() { auto cs_left = ([&]() { auto cs_left = v_text2_1230; auto cs_right = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; std::int32_t cs_arg1 = v_num_1218; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_num2_1257; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_sep; return pls::cs::String::concat(cs_left,cs_right); }()); v_text2_1230 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num2_1257; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_sep; return cs_8eed6765a32617b7(cs_arg0); }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num_1218 = cs_value; return cs_value; }());
goto cs_label_IL_0020;
}
}
([&]() { auto cs_old = v_text2_1230; auto cs_rhs = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; std::int32_t cs_arg1 = v_num_1218; std::int32_t cs_arg2 = v_num2_1257; return cs_c8a33d0ecbcf0b78(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text2_1230 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = v_num2_1257; auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_sep; return cs_8eed6765a32617b7(cs_arg0); }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num_1218 = cs_value; return cs_value; }());
}
if (v_escape) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text2_1230; return cs_d7ec43a7abb0b748(cs_arg0); }()); v_text2_1230 = cs_value; return cs_value; }());
}
if (v_trim) {
v_i_1974 = std::int32_t{};
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_i_1974 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_i_1974; auto cs_right = (v_text2_1230).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1974; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1974 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text2_1230; auto cs_index = v_i_1974; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(32)); return (cs_left > cs_right); }())) {
break;
}
}
v_num4_2067 = ([&]() -> std::int32_t { auto cs_left = (v_text2_1230).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }());
while (([&]() -> bool { auto cs_left = v_num4_2067; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }())) {
if (([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_text2_1230; auto cs_index = v_num4_2067; return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(char16_t(32)); return (cs_left > cs_right); }())) {
break;
}
([&]() { auto cs_old = v_num4_2067; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num4_2067 = cs_new; return cs_old; }());
}
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num4_2067; auto cs_right = v_i_1974; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() { auto cs_value = pls::cs::String(std::u16string(u"",0)); v_text2_1230 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text2_1230; auto cs_arg1 = v_i_1974; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num4_2067; auto cs_right = v_i_1974; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); v_text2_1230 = cs_value; return cs_value; }());
}
}
if (((!(v_excludeZeroLength)) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text2_1230; return cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_1202); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_text2_1230); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b6a40aa7b6cac314(cs_receiver,cs_arg0); }());
}
([&]() { auto cs_value = pls::cs::String(std::u16string(u"",0)); v_text2_1230 = cs_value; return cs_value; }());
} while (([&]() -> bool { auto cs_left = v_num2_1257; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()));
([&]() { auto cs_value = pls::cs::Array<pls::cs::String>::make(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_1202); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_66a816fe45ab90e7(cs_receiver); }())); v_array_1246 = cs_value; return cs_value; }());
for (v_j_2464 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_2464; auto cs_right = (v_array_1246).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_2464; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_2464 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array_1246; auto cs_index = v_j_2464; auto cs_value = pls::cs::unbox<pls::cs::String>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_1202); std::int32_t cs_arg0 = v_j_2464; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_array_1246;
}
}
}

// M:kairo.unity.util.StringUtil.Split(System.String,System.String)
pls::cs::Array<pls::cs::String> cs_aed90764bf1359a3(pls::cs::String v_value,pls::cs::String v_sep) { cs_init_1ff3292665c8e0c4();
{
return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_value; pls::cs::String cs_arg1 = v_sep; bool cs_arg2 = true; bool cs_arg3 = false; bool cs_arg4 = false; return cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}

// M:kairo.unity.util.StringUtil.SplitIntegers(System.String,System.String)
pls::cs::Array<std::int32_t> cs_deba8d22dc04f33a(pls::cs::String v_src,pls::cs::String v_sep) { cs_init_1ff3292665c8e0c4();
{
pls::cs::Array<pls::cs::String> v_array_5692 = ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = v_sep; bool cs_arg2 = true; bool cs_arg3 = true; bool cs_arg4 = false; return cs_0f7a7a73dac52ca4(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
pls::cs::Array<std::int32_t> v_array2_5745 = pls::cs::Array<std::int32_t>::make((v_array_5692).length());
for (std::int32_t v_i_5789 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5789; auto cs_right = (v_array2_5745).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5789; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5789 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = v_array2_5745; auto cs_index = v_i_5789; auto cs_value = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_5692; auto cs_index = v_i_5789; return cs_array.get_Item(cs_index); }()); return cs_2dbfed27c63e8b3d(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_array2_5745;
}
}
}
