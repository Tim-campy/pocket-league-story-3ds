// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_1ff3292665c8e0c4.hpp"
#include "portable_generated_type_3c64e1d398f2e00f.hpp"
#include "portable_generated_type_5098bfda9cf65745.hpp"
#include "portable_generated_type_64732f8c8acf2fd3.hpp"
#include "portable_generated_type_bb652fbb61000386.hpp"
#include "portable_generated_type_c783ca99640a5ce3.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
#include "portable_generated_type_fb60578b3098a284.hpp"
namespace pls::generated {

void cs_init_5098bfda9cf65745(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.StreamUtil",[](){

});}

// M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Boolean)
pls::cs::Array<std::uint8_t> cs_e0ccb4d263b167c0(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream,bool v_size) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Boolean)",kairo);
{
if (v_size) {
return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }()); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }());
}
return ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_328fe8bffc5f5352(cs_arg0); }());
}
}
}

// M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32)
pls::cs::Array<std::uint8_t> cs_d2d344ef3c486f90(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream,std::int32_t v_size) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32)",kairo);
{
if (([&]() -> bool { auto cs_left = v_size; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return pls::cs::Array<std::uint8_t>{};
}
pls::cs::Ref<cs_fb60578b3098a284> v_byteArrayOutputStream_328 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/StreamUtil.cs:M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32):352",([&]() -> pls::cs::Ref<cs_fb60578b3098a284> { return cs_10f86e0fa81e1b57(); }()));
pls::cs::Array<std::uint8_t> v_b_391 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/StreamUtil.cs:M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32):395",pls::cs::Array<std::uint8_t>::make(v_size));
std::int32_t v_num_418 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num2_434 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
while (([&]() -> bool { auto cs_left = v_num2_434; auto cs_right = v_size; return (cs_left < cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(v_stream); pls::cs::Array<std::uint8_t> cs_arg0 = v_b_391; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_size; auto cs_right = v_num2_434; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_4614e302bc22aa99(cs_arg0,cs_arg1,cs_arg2); }()); v_num_418 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
break;
}
([&]() { auto cs_old = v_num2_434; auto cs_rhs = v_num_418; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num2_434 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_418; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_byteArrayOutputStream_328); pls::cs::Array<std::uint8_t> cs_arg0 = v_b_391; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = v_num_418; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_eeffa75bcd0cd73d(cs_arg0,cs_arg1,cs_arg2); }());
}
}
if (([&]() -> bool { auto cs_left = v_num2_434; auto cs_right = v_size; return (cs_left < cs_right); }())) {
pls::cs::throw_exception(pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/StreamUtil.cs:M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32):686",([&]() -> pls::cs::Ref<cs_64732f8c8acf2fd3> { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/StreamUtil.cs:M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32):703",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/StreamUtil.cs:M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32):703",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/StreamUtil.cs:M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32):703",([&]() { auto cs_left = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/StreamUtil.cs:M:kairo.unity.util.StreamUtil.Read(java.io.InputStream,System.Int32):703",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0072" u"\x0065" u"\x0071" u"\x0075" u"\x0065" u"\x0073" u"\x0074" u"\x005b" u"",8);return cs_literal;}()); auto cs_right = pls::generated::cs_integer_string(v_size); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005d" u"\x0020" u"\x0072" u"\x0065" u"\x0061" u"\x0064" u"\x005b" u"",7);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = pls::generated::cs_integer_string(v_num2_434); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_right = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x005d" u"",1);return cs_literal;}()); return pls::cs::String::concat(cs_left,cs_right); }())); return cs_a8c0bbab413528f7(cs_arg0); }())));
}
([&]() { auto cs_value = pls::cs::Array<std::uint8_t>{}; v_b_391 = cs_value; return cs_value; }());
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_328); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c875afd29ab2966c(cs_receiver); }());
}
}
}

// M:kairo.unity.util.StreamUtil.Read(java.io.InputStream)
pls::cs::Array<std::uint8_t> cs_328fe8bffc5f5352(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.Read(java.io.InputStream)",kairo);
{
pls::cs::Ref<cs_fb60578b3098a284> v_byteArrayOutputStream_1441 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/StreamUtil.cs:M:kairo.unity.util.StreamUtil.Read(java.io.InputStream):1465",([&]() -> pls::cs::Ref<cs_fb60578b3098a284> { return cs_10f86e0fa81e1b57(); }()));
pls::cs::Array<std::uint8_t> v_array_1504 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/StreamUtil.cs:M:kairo.unity.util.StreamUtil.Read(java.io.InputStream):1512",pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull))));
while (true) {
std::int32_t v_num_1557 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(v_stream); pls::cs::Array<std::uint8_t> cs_arg0 = v_array_1504; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = (v_array_1504).length(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_4614e302bc22aa99(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num_1557; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
break;
}
if (([&]() -> bool { auto cs_left = v_num_1557; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_byteArrayOutputStream_1441); pls::cs::Array<std::uint8_t> cs_arg0 = v_array_1504; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = v_num_1557; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_eeffa75bcd0cd73d(cs_arg0,cs_arg1,cs_arg2); }());
}
}
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_1441); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c875afd29ab2966c(cs_receiver); }());
}
}
}

// M:kairo.unity.util.StreamUtil.ReadBoolean(java.io.InputStream)
bool cs_5cff189cd1a7d066(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.ReadBoolean(java.io.InputStream)",kairo);
{
return ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }());
}
}
}

// M:kairo.unity.util.StreamUtil.ReadByte(java.io.InputStream)
std::int8_t cs_1207de83c3a46662(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.ReadByte(java.io.InputStream)",kairo);
{
return pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()));
}
}
}

// M:kairo.unity.util.StreamUtil.ReadFloat(java.io.InputStream)
float cs_92c2775ee2dbf38f(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.ReadFloat(java.io.InputStream)",kairo);
{
return static_cast<float>(([&]() -> float { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); bool cs_arg1 = true; return cs_a5c8c88f3deaf88b(cs_arg0,cs_arg1); }()));
}
}
}

// M:kairo.unity.util.StreamUtil.ReadInt(java.io.InputStream)
std::int32_t cs_3715f8f52a079812(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.ReadInt(java.io.InputStream)",kairo);
{
return ([&]() -> std::int32_t { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); bool cs_arg1 = true; return cs_959917dd8cfcce1a(cs_arg0,cs_arg1); }());
}
}
}

// M:kairo.unity.util.StreamUtil.ReadLong(java.io.InputStream)
std::int64_t cs_faab575a7db8f157(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.ReadLong(java.io.InputStream)",kairo);
{
return ([&]() -> std::int64_t { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); bool cs_arg1 = true; return cs_a02a33f2a801ef0d(cs_arg0,cs_arg1); }());
}
}
}

// M:kairo.unity.util.StreamUtil.ReadShort(java.io.InputStream)
std::int16_t cs_1368899db48b4fc9(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.ReadShort(java.io.InputStream)",kairo);
{
return ([&]() -> std::int16_t { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_d2d344ef3c486f90(cs_arg0,cs_arg1); }()); bool cs_arg1 = true; return cs_b051b64c7d2bd23a(cs_arg0,cs_arg1); }());
}
}
}

// M:kairo.unity.util.StreamUtil.ReadString(java.io.InputStream)
pls::cs::String cs_50da92fdb560017f(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.ReadString(java.io.InputStream)",kairo);
{
pls::cs::Array<std::uint8_t> v_array_4109 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; bool cs_arg1 = true; return cs_e0ccb4d263b167c0(cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = pls::cs::box(v_array_4109); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
return pls::cs::String{};
}
return ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_4109; return cs_5d8e9e8201c04369(cs_arg0); }());
}
}
}

// M:kairo.unity.util.StreamUtil.ReadVector3D(java.io.InputStream)
pls::cs::Ref<cs_3c64e1d398f2e00f> cs_44850fa25c576879(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.ReadVector3D(java.io.InputStream)",kairo);
{
pls::cs::Ref<cs_3c64e1d398f2e00f> v_vector3D_3609 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/StreamUtil.cs:M:kairo.unity.util.StreamUtil.ReadVector3D(java.io.InputStream):3620",([&]() -> pls::cs::Ref<cs_3c64e1d398f2e00f> { return cs_f0250768de698879(); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_vector3D_3609); float cs_arg0 = static_cast<float>(([&]() -> float { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_92c2775ee2dbf38f(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_456e4aca00a0b62a(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_vector3D_3609); float cs_arg0 = static_cast<float>(([&]() -> float { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_92c2775ee2dbf38f(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_229657731d66863f(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_vector3D_3609); float cs_arg0 = static_cast<float>(([&]() -> float { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_92c2775ee2dbf38f(cs_arg0); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ed44f0a0e2f6832a(cs_receiver,cs_arg0); }());
return v_vector3D_3609;
}
}
}

// M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[],System.Boolean)
void cs_850594681175a2d3(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,pls::cs::Array<std::uint8_t> v_data,bool v_size) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[],System.Boolean)",kairo);
{
if (v_size) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)) : (v_data).length()); cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
return;
}
}
if (([&]() -> bool { auto cs_left = (v_data).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); pls::cs::Array<std::uint8_t> cs_arg0 = v_data; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_109456b2dd9e2d77(cs_arg0); }());
}
}
}
}

// M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[])
void cs_242552fbbe53e929(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,pls::cs::Array<std::uint8_t> v_data) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.Write(java.io.OutputStream,System.Byte[])",kairo);
{
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = v_data; bool cs_arg2 = false; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}

// M:kairo.unity.util.StreamUtil.WriteBoolean(java.io.OutputStream,System.Boolean)
void cs_7c02733ae541274e(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,bool v_data) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.WriteBoolean(java.io.OutputStream,System.Boolean)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::int8_t>(((v_data ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)))))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}

// M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.Byte)
void cs_c43b9bbf725f702e(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::uint8_t v_data) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.Byte)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_data); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}

// M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.SByte)
void cs_e6e935ad4dd232ab(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int8_t v_data) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.WriteByte(java.io.OutputStream,System.SByte)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_data); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}

// M:kairo.unity.util.StreamUtil.WriteFloat(java.io.OutputStream,System.Single)
void cs_07583f591da8d9cb(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,float v_data) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.WriteFloat(java.io.OutputStream,System.Single)",kairo);
{
pls::cs::Array<std::uint8_t> v_array_6774 = ([&]() -> pls::cs::Array<std::uint8_t> { float cs_arg0 = static_cast<float>(v_data); bool cs_arg1 = true; return cs_bafe3629b7fca7f3(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_6833 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6833; auto cs_right = (v_array_6774).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6833; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6833 = cs_new; return cs_old; }())) {
std::int8_t v_b_6878 = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array_6774; auto cs_index = v_i_6833; return cs_array.get_Item(cs_index); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_b_6878); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}
}

// M:kairo.unity.util.StreamUtil.WriteInt(java.io.OutputStream,System.Int32)
void cs_b87bdf680540412f(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int32_t v_data) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.WriteInt(java.io.OutputStream,System.Int32)",kairo);
{
pls::cs::Array<std::uint8_t> v_array_5771 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = v_data; bool cs_arg1 = true; return cs_650130ed3a48c8b1(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_5828 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5828; auto cs_right = (v_array_5771).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5828; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5828 = cs_new; return cs_old; }())) {
std::int8_t v_b_5873 = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array_5771; auto cs_index = v_i_5828; return cs_array.get_Item(cs_index); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_b_5873); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}
}

// M:kairo.unity.util.StreamUtil.WriteLong(java.io.OutputStream,System.Int64)
void cs_6c6af002987d1423(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int64_t v_data) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.WriteLong(java.io.OutputStream,System.Int64)",kairo);
{
pls::cs::Array<std::uint8_t> v_array_6216 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int64_t cs_arg0 = v_data; bool cs_arg1 = true; return cs_afc3ba06e9b75538(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_6274 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6274; auto cs_right = (v_array_6216).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6274; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6274 = cs_new; return cs_old; }())) {
std::int8_t v_b_6319 = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array_6216; auto cs_index = v_i_6274; return cs_array.get_Item(cs_index); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_b_6319); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}
}

// M:kairo.unity.util.StreamUtil.WriteShort(java.io.OutputStream,System.Int16)
void cs_74e8efcd697e2e61(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int16_t v_data) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.WriteShort(java.io.OutputStream,System.Int16)",kairo);
{
pls::cs::Array<std::uint8_t> v_array_5320 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int16_t cs_arg0 = v_data; bool cs_arg1 = true; return cs_3271310f2199f07a(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_5379 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5379; auto cs_right = (v_array_5320).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5379; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5379 = cs_new; return cs_old; }())) {
std::int8_t v_b_5424 = pls::cs::cast_integral<std::int8_t>(([&]() { auto cs_array = v_array_5320; auto cs_index = v_i_5379; return cs_array.get_Item(cs_index); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_os); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_b_5424); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}
}

// M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,kairo.unity.util.SecureString)
void cs_be114d9236ab5d44(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,pls::cs::Ref<cs_bb652fbb61000386> v_data) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,kairo.unity.util.SecureString)",kairo);
{
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? pls::cs::Array<std::uint8_t>{} : pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(v_data); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6dd0b8d6220bd2b3(cs_receiver); }()); return pls::generated::cs_require(cs_receiver)->GetBytes(cs_arg0); }());})); bool cs_arg2 = true; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}

// M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,System.String)
void cs_c3baaa92859d30c1(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,pls::cs::String v_data) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.WriteString(java.io.OutputStream,System.String)",kairo);
{
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? pls::cs::Array<std::uint8_t>{} : pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = v_data; return pls::generated::cs_require(cs_receiver)->GetBytes(cs_arg0); }());})); bool cs_arg2 = true; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}

// M:kairo.unity.util.StreamUtil.WriteVector3D(java.io.OutputStream,kairo.unity.m3d4.util3d.Vector3D)
void cs_e29edfec53fd6e1a(pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,pls::cs::Ref<cs_3c64e1d398f2e00f> v_value) { cs_init_5098bfda9cf65745();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StreamUtil.WriteVector3D(java.io.OutputStream,kairo.unity.m3d4.util3d.Vector3D)",kairo);
{
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; float cs_arg1 = static_cast<float>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_057460bc67f561ff(cs_receiver); }())); cs_07583f591da8d9cb(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; float cs_arg1 = static_cast<float>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b09e372c7963bada(cs_receiver); }())); cs_07583f591da8d9cb(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; float cs_arg1 = static_cast<float>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_8c6fe63f0a32cc25(cs_receiver); }())); cs_07583f591da8d9cb(cs_arg0,cs_arg1); }());
}
}
}
}
