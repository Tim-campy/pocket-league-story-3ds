// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_c783ca99640a5ce3.hpp"
namespace pls::generated {

void cs_init_c783ca99640a5ce3(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.EncodeUtil",[](){

});}

// M:kairo.unity.util.EncodeUtil.ByteAryToFloat(System.Byte[],System.Boolean)
float cs_a5c8c88f3deaf88b(pls::cs::Array<std::uint8_t> v_data,bool v_endian) { cs_init_c783ca99640a5ce3();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.EncodeUtil.ByteAryToFloat(System.Byte[],System.Boolean)",kairo);
{
if (v_endian) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_95c81bd3d12349d3(cs_arg0,cs_arg1); }()); v_data = cs_value; return cs_value; }());
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_arg0 = v_data; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_bits_from<float>(cs_arg0,cs_arg1); }());});
}
}
}

// M:kairo.unity.util.EncodeUtil.ByteAryToInt(System.Byte[],System.Boolean)
std::int32_t cs_959917dd8cfcce1a(pls::cs::Array<std::uint8_t> v_data,bool v_endian) { cs_init_c783ca99640a5ce3();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.EncodeUtil.ByteAryToInt(System.Byte[],System.Boolean)",kairo);
{
if (v_endian) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_95c81bd3d12349d3(cs_arg0,cs_arg1); }()); v_data = cs_value; return cs_value; }());
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_data; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_bits_from<std::int32_t>(cs_arg0,cs_arg1); }());});
}
}
}

// M:kairo.unity.util.EncodeUtil.ByteAryToLong(System.Byte[],System.Boolean)
std::int64_t cs_a02a33f2a801ef0d(pls::cs::Array<std::uint8_t> v_data,bool v_endian) { cs_init_c783ca99640a5ce3();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.EncodeUtil.ByteAryToLong(System.Byte[],System.Boolean)",kairo);
{
if (v_endian) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_95c81bd3d12349d3(cs_arg0,cs_arg1); }()); v_data = cs_value; return cs_value; }());
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { auto cs_arg0 = v_data; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_bits_from<std::int64_t>(cs_arg0,cs_arg1); }());});
}
}
}

// M:kairo.unity.util.EncodeUtil.ByteAryToShort(System.Byte[],System.Boolean)
std::int16_t cs_b051b64c7d2bd23a(pls::cs::Array<std::uint8_t> v_data,bool v_endian) { cs_init_c783ca99640a5ce3();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.EncodeUtil.ByteAryToShort(System.Byte[],System.Boolean)",kairo);
{
if (v_endian) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_95c81bd3d12349d3(cs_arg0,cs_arg1); }()); v_data = cs_value; return cs_value; }());
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { auto cs_arg0 = v_data; auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::generated::cs_bits_from<std::int16_t>(cs_arg0,cs_arg1); }());});
}
}
}

// M:kairo.unity.util.EncodeUtil.ConvertEndian(System.Byte[],System.Int32)
pls::cs::Array<std::uint8_t> cs_95c81bd3d12349d3(pls::cs::Array<std::uint8_t> v_data,std::int32_t v_length) { cs_init_c783ca99640a5ce3();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.EncodeUtil.ConvertEndian(System.Byte[],System.Int32)",kairo);
{
if (pls::generated::cs_is_little_endian()) {
pls::cs::Array<std::uint8_t> v_array_5681 = v_data;
if (([&]() -> bool { auto cs_left = (v_array_5681).length(); auto cs_right = v_length; return (cs_left != cs_right); }())) {
([&]() { auto cs_value = pls::cs::Array<std::uint8_t>::make(v_length); v_array_5681 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_source = v_data; auto cs_dest = v_array_5681; auto cs_count = v_length; pls::cs::Array<std::uint8_t>::copy(cs_source,0,cs_dest,0,cs_count); }());});
}
for (std::int32_t v_num_5821 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (v_array_5681).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_5821; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_5821; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_5821 = cs_new; return cs_old; }())) {
std::uint8_t v_b_5882 = ([&]() { auto cs_array = v_array_5681; auto cs_index = v_num_5821; return cs_array.get_Item(cs_index); }());
([&]() { auto cs_target = v_array_5681; auto cs_index = v_num_5821; auto cs_value = ([&]() { auto cs_array = v_array_5681; auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (v_array_5681).length(); auto cs_right = v_num_5821; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = v_array_5681; auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (v_array_5681).length(); auto cs_right = v_num_5821; return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = v_b_5882;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_value = v_array_5681; v_data = cs_value; return cs_value; }());
}
return v_data;
}
}
}

// M:kairo.unity.util.EncodeUtil.FloatToByteAry(System.Single,System.Boolean)
pls::cs::Array<std::uint8_t> cs_bafe3629b7fca7f3(float v_data,bool v_endian) { cs_init_c783ca99640a5ce3();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.EncodeUtil.FloatToByteAry(System.Single,System.Boolean)",kairo);
{
pls::cs::Array<std::uint8_t> v_array_674 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_data; return pls::generated::cs_bit_bytes(cs_arg0); }());});
if (v_endian) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_674; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_95c81bd3d12349d3(cs_arg0,cs_arg1); }()); v_array_674 = cs_value; return cs_value; }());
}
return v_array_674;
}
}
}

// M:kairo.unity.util.EncodeUtil.IntToByteAry(System.Int32,System.Boolean)
pls::cs::Array<std::uint8_t> cs_650130ed3a48c8b1(std::int32_t v_data,bool v_endian) { cs_init_c783ca99640a5ce3();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.EncodeUtil.IntToByteAry(System.Int32,System.Boolean)",kairo);
{
pls::cs::Array<std::uint8_t> v_array_2182 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_data; return pls::generated::cs_bit_bytes(cs_arg0); }());});
if (v_endian) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_2182; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_95c81bd3d12349d3(cs_arg0,cs_arg1); }()); v_array_2182 = cs_value; return cs_value; }());
}
return v_array_2182;
}
}
}

// M:kairo.unity.util.EncodeUtil.LongToByteAry(System.Int64,System.Boolean)
pls::cs::Array<std::uint8_t> cs_afc3ba06e9b75538(std::int64_t v_data,bool v_endian) { cs_init_c783ca99640a5ce3();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.EncodeUtil.LongToByteAry(System.Int64,System.Boolean)",kairo);
{
pls::cs::Array<std::uint8_t> v_array_1178 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_data; return pls::generated::cs_bit_bytes(cs_arg0); }());});
if (v_endian) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_1178; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_95c81bd3d12349d3(cs_arg0,cs_arg1); }()); v_array_1178 = cs_value; return cs_value; }());
}
return v_array_1178;
}
}
}

// M:kairo.unity.util.EncodeUtil.ShortToByteAry(System.Int16,System.Boolean)
pls::cs::Array<std::uint8_t> cs_3271310f2199f07a(std::int16_t v_data,bool v_endian) { cs_init_c783ca99640a5ce3();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.EncodeUtil.ShortToByteAry(System.Int16,System.Boolean)",kairo);
{
pls::cs::Array<std::uint8_t> v_array_3184 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_arg0 = v_data; return pls::generated::cs_bit_bytes(cs_arg0); }());});
if (v_endian) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_array_3184; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_95c81bd3d12349d3(cs_arg0,cs_arg1); }()); v_array_3184 = cs_value; return cs_value; }());
}
return v_array_3184;
}
}
}
}
