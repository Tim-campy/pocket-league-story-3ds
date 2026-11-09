// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_582a926e9c7748a6.hpp"
#include "portable_generated_type_83a7bc36395d16bd.hpp"
#include "portable_generated_type_e7d772862db62924.hpp"
namespace pls::generated {

static pls::cs::String cs_5dc81e2eacc2181a_value{};

void cs_init_83a7bc36395d16bd(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Log",[](){

});}

pls::cs::String& cs_5dc81e2eacc2181a(){cs_init_83a7bc36395d16bd();return cs_5dc81e2eacc2181a_value;}

// M:kairo.unity.util.Log.DebugLog(System.String)
void cs_4fdae576ed75d546(pls::cs::String v_text) { cs_init_83a7bc36395d16bd();
{
if (([&]() -> bool { auto cs_left = v_text; auto cs_right = cs_5dc81e2eacc2181a(); return (cs_left == cs_right); }())) {
([&]() { auto cs_old = v_text; auto cs_rhs = pls::cs::String(std::u16string(u"\x0020" u"",1)); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); v_text = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_text); pls::kairo::debug_log(cs_arg0); }());
([&]() { auto cs_value = v_text; cs_5dc81e2eacc2181a() = cs_value; return cs_value; }());
}
}

// M:kairo.unity.util.Log.GetThrowableLog(System.String,System.Exception)
pls::cs::String cs_a66c820e92bb7b9a(pls::cs::String v_text,pls::cs::Ref<pls::cs::ExceptionObject> v_t) { cs_init_83a7bc36395d16bd();
{
if (([&]() { auto cs_left = pls::cs::box(v_t); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::String v_throwableName_2402 = ([&]() -> pls::cs::String { pls::cs::Ref<pls::cs::ExceptionObject> cs_arg0 = v_t; return cs_b85f936b499334d9(cs_arg0); }());
if (([&]() { auto cs_left = pls::cs::box(v_text); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = v_throwableName_2402; v_text = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() { auto cs_left = ([&]() { auto cs_left = v_throwableName_2402; auto cs_right = pls::cs::String(std::u16string(u"\x003a" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = v_text; return pls::cs::String::concat(cs_left,cs_right); }())); v_text = cs_value; return cs_value; }());
}
}
return v_text;
}
}

// M:kairo.unity.util.Log.GetThrowableName(System.Exception)
pls::cs::String cs_b85f936b499334d9(pls::cs::Ref<pls::cs::ExceptionObject> v_t) { cs_init_83a7bc36395d16bd();
{
pls::cs::String v_recoveredPdbConstString_1744 = pls::cs::String(std::u16string(u"",0));
if (([&]() { auto cs_left = pls::cs::box(v_t); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::String(std::u16string(u"",0));
}
pls::cs::Ref<pls::cs::RuntimeType> v_type_1825 = ([&](){auto cs_receiver=pls::cs::box(v_t);return pls::cs::RuntimeType::for_name(pls::generated::cs_require(cs_receiver)->managed_type_name());}());
pls::cs::String v_text_1855 = pls::generated::cs_require(v_type_1825)->get_Name();
try {
std::int32_t v_num_1893 = ([&]() -> std::int32_t { auto cs_arg0 = v_text_1855; auto cs_arg1 = char16_t(46); return pls::generated::cs_last_index_char1(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = v_num_1893; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text_1855; auto cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num_1893; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return pls::generated::cs_substring1(cs_arg0,cs_arg1); }()); v_text_1855 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_arg0 = v_text_1855; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0045" u"\x0078" u"\x0063" u"\x0065" u"\x0070" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",9)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text_1855; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_1855; return cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0045" u"\x0078" u"\x0063" u"\x0065" u"\x0070" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",9)); return cs_8eed6765a32617b7(cs_arg0); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::generated::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); v_text_1855 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_arg0 = v_text_1855; auto cs_arg1 = pls::cs::String(std::u16string(u"\x0045" u"\x0072" u"\x0072" u"\x006f" u"\x0072" u"",5)); return pls::cs::culture_ends_with(cs_arg0,cs_arg1); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { auto cs_arg0 = v_text_1855; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_text_1855; return cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0045" u"\x0072" u"\x0072" u"\x006f" u"\x0072" u"",5)); return cs_8eed6765a32617b7(cs_arg0); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); return pls::generated::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }()); v_text_1855 = cs_value; return cs_value; }());
}
return v_text_1855;
} catch(const pls::cs::Exception& cs_caught_501) {auto cs_exception_501=pls::cs::capture_exception(cs_caught_501);
if(pls::cs::exception_is(cs_exception_501,"System.Exception")) {{
return pls::generated::cs_require(v_type_1825)->get_Name();
}}
else {throw;} }
}
}

// M:kairo.unity.util.Log.Info(System.Exception)
pls::cs::String cs_b686603f380b2527(pls::cs::Ref<pls::cs::ExceptionObject> v_t) { cs_init_83a7bc36395d16bd();
{
if ((cs_4cc76a7a43706693() && ([&]() { auto cs_left = pls::cs::box(v_t); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_t); pls::kairo::debug_log(cs_arg0); }());
}
return pls::cs::String(std::u16string(u"",0));
}
}

// M:kairo.unity.util.Log.Info(System.String,System.Exception)
pls::cs::String cs_812090ed79928522(pls::cs::String v_text,pls::cs::Ref<pls::cs::ExceptionObject> v_t) { cs_init_83a7bc36395d16bd();
{
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; pls::cs::Ref<pls::cs::ExceptionObject> cs_arg1 = v_t; return cs_a66c820e92bb7b9a(cs_arg0,cs_arg1); }()); v_text = cs_value; return cs_value; }());
if (cs_4cc76a7a43706693()) {
if (([&]() { auto cs_left = pls::cs::box(v_text); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { pls::cs::String cs_arg0 = v_text; cs_4fdae576ed75d546(cs_arg0); }());
}
if (([&]() { auto cs_left = pls::cs::box(v_t); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_t); pls::kairo::debug_log(cs_arg0); }());
}
}
if (([&]() { auto cs_left = pls::cs::box(v_text); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return pls::cs::String(std::u16string(u"",0));
}
return v_text;
}
}
}
