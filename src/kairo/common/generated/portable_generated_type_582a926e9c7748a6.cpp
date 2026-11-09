// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_582a926e9c7748a6.hpp"
namespace pls::generated {

void cs_init_582a926e9c7748a6(){static pls::cs::TypeInitState state;state.run("java.lang.StringEx",[](){

});}

// M:java.lang.StringEx.CharAt(System.String,System.Int32)
char16_t cs_b5d1dc3a4e215d09(pls::cs::String v_str,std::int32_t v_index) { cs_init_582a926e9c7748a6();
{
return ([&]() { auto cs_array = v_str; auto cs_index = v_index; return cs_array.at(cs_index); }());
}
}

// M:java.lang.StringEx.EqualsIgnoreCase(System.String,System.String)
bool cs_f9dd1affe68f18d5(pls::cs::String v_str,pls::cs::String v_anotherString) { cs_init_582a926e9c7748a6();
{
if (([&]() -> bool { auto cs_left = (v_str).length(); auto cs_right = (v_anotherString).length(); return (cs_left != cs_right); }())) {
return false;
}
return ([&](){auto cs_receiver=v_str;auto cs_argument=v_anotherString;cs_receiver.length();return pls::cs::culture_equals_ignore_case(cs_receiver,cs_argument);}());
}
}

// M:java.lang.StringEx.GetBytes(System.String)
pls::cs::Array<std::uint8_t> cs_a8e45b955b78e04d(pls::cs::String v_str) { cs_init_582a926e9c7748a6();
{
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = v_str; return pls::generated::cs_require(cs_receiver)->GetBytes(cs_arg0); }());
}
}

// M:java.lang.StringEx.IndexOf(System.String,System.Int32)
std::int32_t cs_54a151f146e7cda1(pls::cs::String v_str,std::int32_t v_ch) { cs_init_582a926e9c7748a6();
{
return ([&]() -> std::int32_t { auto cs_arg0 = v_str; auto cs_arg1 = pls::cs::cast_integral<char16_t>(v_ch); return pls::generated::cs_index_char1(cs_arg0,cs_arg1); }());
}
}

// M:java.lang.StringEx.Length(System.String)
std::int32_t cs_8eed6765a32617b7(pls::cs::String v_str) { cs_init_582a926e9c7748a6();
{
return (v_str).length();
}
}

// M:java.lang.StringEx.StartsWith(System.String,System.String,System.Int32)
bool cs_9edf4346f293871d(pls::cs::String v_str,pls::cs::String v_prefix,std::int32_t v_toffset) { cs_init_582a926e9c7748a6();
{
for (std::int32_t v_i_1247 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1247; auto cs_right = (v_prefix).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1247; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1247 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_1247; auto cs_right = v_toffset; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = (v_str).length(); return (cs_left >= cs_right); }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_str; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_i_1247; auto cs_right = v_toffset; return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.at(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_prefix; auto cs_index = v_i_1247; return cs_array.at(cs_index); }())); return (cs_left != cs_right); }()))) {
return false;
}
}
return true;
}
}

// M:java.lang.StringEx.SubstringJ(System.String,System.Int32,System.Int32)
pls::cs::String cs_c8a33d0ecbcf0b78(pls::cs::String v_str,std::int32_t v_beginIndex,std::int32_t v_endIndex) { cs_init_582a926e9c7748a6();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = v_str; auto cs_arg1 = v_beginIndex; auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_endIndex; auto cs_right = v_beginIndex; return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::generated::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());
}
}

// M:java.lang.StringEx.SubstringJ(System.String,System.Int32)
pls::cs::String cs_51d6c186b8b049a1(pls::cs::String v_str,std::int32_t v_beginIndex) { cs_init_582a926e9c7748a6();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = v_str; auto cs_arg1 = v_beginIndex; return pls::generated::cs_substring1(cs_arg0,cs_arg1); }());
}
}

// M:java.lang.StringEx.ToLowerCase(System.String)
pls::cs::String cs_69fdc17c11a6247b(pls::cs::String v_str) { cs_init_582a926e9c7748a6();
{
return ([&]() -> pls::cs::String { auto cs_arg0 = v_str; return pls::cs::culture_to_lower(cs_arg0); }());
}
}
}
