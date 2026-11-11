// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_8b851671e0d8b17f.hpp"
namespace pls::generated {

static pls::cs::Array<std::int64_t> cs_f9196b08a328bd32_value{};

void cs_init_8b851671e0d8b17f(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_f9196b08a328bd32_value,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.util.CRC64",[](){
cs_f9196b08a328bd32_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.CRC64.crcTable_",[&](){return pls::cs::Array<std::int64_t>{};});

});}

pls::cs::Array<std::int64_t>& cs_f9196b08a328bd32(){cs_init_8b851671e0d8b17f();return cs_f9196b08a328bd32_value;}

// M:kairo.unity.util.CRC64.GetValue(System.Byte[])
std::int64_t cs_4d36dd315e2118af(pls::cs::Array<std::uint8_t> v_buf) { cs_init_8b851671e0d8b17f();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.CRC64.GetValue(System.Byte[])",kairo);
{
return ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0xffffffffull)); pls::cs::Array<std::uint8_t> cs_arg1 = v_buf; std::int32_t cs_arg2 = (v_buf).length(); return cs_cb749cec81c9fbdd(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffffffffull))); return (cs_left ^ cs_right); }());
}
}
}

// M:kairo.unity.util.CRC64.MakeCrcTable
void cs_6d14bc0d20253aa7() { cs_init_8b851671e0d8b17f();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.CRC64.MakeCrcTable",kairo);
{
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/CRC64.cs:M:kairo.unity.util.CRC64.MakeCrcTable:208",pls::cs::Array<std::int64_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull)))); cs_f9196b08a328bd32_value = cs_value; return cs_value; }());
std::int64_t v_num_231 = std::int64_t{};
for (std::int32_t v_i_245 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_245; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_245; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_245 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int64_t>(v_i_245); v_num_231 = cs_value; return cs_value; }());
for (std::int32_t v_j_297 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_297; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_297; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_297 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = (([&]() -> std::int64_t { auto cs_left = v_num_231; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull))); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = (([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xedb88320ull))); auto cs_right = (([&]() -> std::int64_t { auto cs_left = v_num_231; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::shr_i64(cs_left,cs_right); }())); return (cs_left ^ cs_right); }())); v_num_231 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (([&]() -> std::int64_t { auto cs_left = v_num_231; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::shr_i64(cs_left,cs_right); }())); v_num_231 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_target = cs_f9196b08a328bd32_value; auto cs_index = v_i_245; auto cs_value = v_num_231;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}

// M:kairo.unity.util.CRC64.Update(System.Int64,System.Byte[],System.Int32)
std::int64_t cs_cb749cec81c9fbdd(std::int64_t v_crc,pls::cs::Array<std::uint8_t> v_buf,std::int32_t v_len) { cs_init_8b851671e0d8b17f();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.CRC64.Update(System.Int64,System.Byte[],System.Int32)",kairo);
{
std::int64_t v_num_525 = v_crc;
if (([&]() { auto cs_left = pls::cs::box(cs_f9196b08a328bd32_value); auto cs_right = pls::cs::box(pls::cs::Array<std::int64_t>{}); return cs_left == cs_right; }())) {
([&]() -> void { cs_6d14bc0d20253aa7(); }());
}
for (std::int32_t v_i_604 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_604; auto cs_right = v_len; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_604; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_604 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_left = ([&]() { auto cs_array = cs_f9196b08a328bd32_value; auto cs_index = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(v_num_525); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_buf; auto cs_index = v_i_604; return cs_array.get_Item(cs_index); }())); return (cs_left ^ cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_right = (([&]() -> std::int64_t { auto cs_left = v_num_525; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::shr_i64(cs_left,cs_right); }())); return (cs_left ^ cs_right); }()); v_num_525 = cs_value; return cs_value; }());
}
return v_num_525;
}
}
}
}
