// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_15e3f7b692b3f380.hpp"
#include "portable_generated_type_18054fa8aeee43c7.hpp"
#include "portable_generated_type_3af9088680f95fb3.hpp"
#include "portable_generated_type_5098bfda9cf65745.hpp"
#include "portable_generated_type_67cd241ab51652f1.hpp"
#include "portable_generated_type_83a7bc36395d16bd.hpp"
#include "portable_generated_type_922b87749168eb15.hpp"
#include "portable_generated_type_c783ca99640a5ce3.hpp"
#include "portable_generated_type_e7d772862db62924.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
#include "portable_generated_type_fb60578b3098a284.hpp"
#include "portable_generated_type_67cd241ab51652f1_templates.hpp"
namespace pls::generated {

static pls::cs::Array<std::int32_t> cs_3591f84dd15a7131_value{};

static pls::cs::Array<std::uint8_t> cs_410b8666022ebeba_value{};

static std::int32_t cs_a175562839f44634_value{};

static pls::cs::Array<std::uint8_t> cs_5b2c53d265751d9b_value{};

static pls::cs::Array<pls::cs::Ref<cs_922b87749168eb15>> cs_06f52091d473e08c_value{};

static pls::cs::Array<std::uint8_t> cs_2184fc12b87895ce_value{};

static pls::cs::Array<std::int32_t> cs_615d3b682d6758f8_value{};

void cs_init_18054fa8aeee43c7(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Compressor",[](){
cs_615d3b682d6758f8_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Compressor.weights_",[&](){return pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):525",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull))));});
cs_06f52091d473e08c_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Compressor.nodeTbl_",[&](){return pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):575",pls::cs::Array<pls::cs::Ref<cs_922b87749168eb15>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull))));});
cs_5b2c53d265751d9b_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Compressor.bits_",[&](){return pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):623",pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull))));});
cs_2184fc12b87895ce_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Compressor.nullbits_",[&](){return pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):675",pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull))));});
cs_3591f84dd15a7131_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Compressor._getLowestNode_result",[&](){return pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):738",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))));});

});}

pls::cs::Array<std::int32_t>& cs_3591f84dd15a7131(){cs_init_18054fa8aeee43c7();return cs_3591f84dd15a7131_value;}

pls::cs::Array<std::uint8_t>& cs_410b8666022ebeba(){cs_init_18054fa8aeee43c7();return cs_410b8666022ebeba_value;}

std::int32_t& cs_a175562839f44634(){cs_init_18054fa8aeee43c7();return cs_a175562839f44634_value;}

pls::cs::Array<std::uint8_t>& cs_5b2c53d265751d9b(){cs_init_18054fa8aeee43c7();return cs_5b2c53d265751d9b_value;}

pls::cs::Array<pls::cs::Ref<cs_922b87749168eb15>>& cs_06f52091d473e08c(){cs_init_18054fa8aeee43c7();return cs_06f52091d473e08c_value;}

pls::cs::Array<std::uint8_t>& cs_2184fc12b87895ce(){cs_init_18054fa8aeee43c7();return cs_2184fc12b87895ce_value;}

pls::cs::Array<std::int32_t>& cs_615d3b682d6758f8(){cs_init_18054fa8aeee43c7();return cs_615d3b682d6758f8_value;}

// M:kairo.unity.util.Compressor._getBitBuffer
pls::cs::Array<std::uint8_t> cs_560fbd464452ab06() { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor._getBitBuffer",kairo);
{
pls::cs::Array<std::uint8_t> v_array_6377 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor._getBitBuffer:6385",pls::cs::Array<std::uint8_t>::make(([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = cs_a175562839f44634(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::div_i32(cs_left,cs_right); }())));
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(cs_410b8666022ebeba()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array_6377); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (v_array_6377).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
return v_array_6377;
}
}
}

// M:kairo.unity.util.Compressor._getLowestNode(kairo.unity.util.FastVector)
pls::cs::Array<std::int32_t> cs_1239dbf1c63653a5(pls::cs::Ref<cs_15e3f7b692b3f380> v_list) { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor._getLowestNode(kairo.unity.util.FastVector)",kairo);
{
std::int32_t v_num_5707 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
std::int32_t v_num2_5724 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
for (std::int32_t v_i_5747 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5747; auto cs_right = ([&]() { auto cs_receiver = v_list; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5747; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5747 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_left = v_num_5707; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_922b87749168eb15>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_list; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_num_5707; return cs_array.get_Item(cs_index); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b846f0fd1fb1aa0; }()); auto cs_right = ([&]() { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_922b87749168eb15>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_list; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_i_5747; return cs_array.get_Item(cs_index); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b846f0fd1fb1aa0; }()); return (cs_left >= cs_right); }()))) {
([&]() { auto cs_value = v_i_5747; v_num_5707 = cs_value; return cs_value; }());
}
}
for (std::int32_t v_j_5929 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5929; auto cs_right = ([&]() { auto cs_receiver = v_list; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5929; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5929 = cs_new; return cs_old; }())) {
if ((([&]() -> bool { auto cs_left = v_j_5929; auto cs_right = v_num_5707; return (cs_left != cs_right); }()) && ((([&]() -> bool { auto cs_left = v_num2_5724; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_922b87749168eb15>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_list; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_num2_5724; return cs_array.get_Item(cs_index); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b846f0fd1fb1aa0; }()); auto cs_right = ([&]() { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_922b87749168eb15>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_list; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = v_j_5929; return cs_array.get_Item(cs_index); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b846f0fd1fb1aa0; }()); return (cs_left >= cs_right); }()))))) {
([&]() { auto cs_value = v_j_5929; v_num2_5724 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_target = cs_3591f84dd15a7131(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_num_5707;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_3591f84dd15a7131(); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_num2_5724;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
return cs_3591f84dd15a7131();
}
}
}

// M:kairo.unity.util.Compressor._readBit
std::int32_t cs_bac9e060fc04efba() { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor._readBit",kairo);
{
std::int32_t v_result_7028 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = cs_410b8666022ebeba(); auto cs_index = ([&]() -> std::int32_t { auto cs_left = cs_a175562839f44634(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = cs_a175562839f44634(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left & cs_right); }())); auto cs_right = ([&]() -> std::int32_t { auto cs_left = cs_a175562839f44634(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); return pls::cs::shr_i32(cs_left,cs_right); }());
([&]() { auto cs_old = cs_a175562839f44634(); auto cs_new = pls::cs::add_i32(cs_old,1); cs_a175562839f44634() = cs_new; return cs_old; }());
return v_result_7028;
}
}
}

// M:kairo.unity.util.Compressor._readByte
std::int32_t cs_2a068e59f5256386() { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor._readByte",kairo);
{
std::int32_t v_num_7196 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_i_7217 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7217; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7217; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7217 = cs_new; return cs_old; }())) {
std::int32_t v_num2_7249 = ([&]() -> std::int32_t { return cs_bac9e060fc04efba(); }());
([&]() { auto cs_old = v_num_7196; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = v_num2_7249; auto cs_right = v_i_7217; return pls::cs::shl_i32(cs_left,cs_right); }()); auto cs_value = (cs_old | cs_rhs); v_num_7196 = cs_value; return cs_value; }());
}
return v_num_7196;
}
}
}

// M:kairo.unity.util.Compressor._readNodeFromBitBuffer
pls::cs::Ref<cs_922b87749168eb15> cs_d55770566d7a5dd6() { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor._readNodeFromBitBuffer",kairo);
{
pls::cs::Ref<cs_922b87749168eb15> v_node_5256 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor._readNodeFromBitBuffer:5263",([&]() -> pls::cs::Ref<cs_922b87749168eb15> { return cs_25fc81be857429d9(); }()));
std::int32_t v_num_5282 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
([&]() { auto cs_value = ([&]() -> std::int32_t { return cs_bac9e060fc04efba(); }()); v_num_5282 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_5282; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_node_5256; auto cs_value = ([&]() -> std::int32_t { return cs_2a068e59f5256386(); }()); pls::generated::cs_require(cs_target)->cs_57d6fb57c6af0de7 = cs_value; return cs_value; }());
} else {
if (([&]() -> bool { auto cs_left = v_num_5282; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_node_5256; auto cs_value = ([&]() -> pls::cs::Ref<cs_922b87749168eb15> { return cs_d55770566d7a5dd6(); }()); pls::generated::cs_require(cs_target)->cs_8e6817a8d663aa67 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_node_5256; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8e6817a8d663aa67; }()); auto cs_value = v_node_5256; pls::generated::cs_require(cs_target)->cs_51d08ca6eed04eda = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> std::int32_t { return cs_bac9e060fc04efba(); }()); v_num_5282 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = v_num_5282; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_target = v_node_5256; auto cs_value = ([&]() -> pls::cs::Ref<cs_922b87749168eb15> { return cs_d55770566d7a5dd6(); }()); pls::generated::cs_require(cs_target)->cs_0d73049ca9cd4bf6 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_node_5256; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0d73049ca9cd4bf6; }()); auto cs_value = v_node_5256; pls::generated::cs_require(cs_target)->cs_51d08ca6eed04eda = cs_value; return cs_value; }());
}
}
return v_node_5256;
}
}
}

// M:kairo.unity.util.Compressor._setBitBuffer(System.Byte[])
void cs_277fdced2c4e5018(pls::cs::Array<std::uint8_t> v_data) { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor._setBitBuffer(System.Byte[])",kairo);
{
([&]() { auto cs_value = v_data; cs_410b8666022ebeba() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_a175562839f44634() = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.util.Compressor._writeBit(System.Int32)
void cs_b4bc001e9edc179c(std::int32_t v_bit) { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor._writeBit(System.Int32)",kairo);
{
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_left = (cs_410b8666022ebeba()).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = cs_a175562839f44634(); return (cs_left <= cs_right); }())) {
pls::cs::Array<std::uint8_t> v_dst_6607 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor._writeBit(System.Int32):6613",pls::cs::Array<std::uint8_t>::make(([&]() -> std::int32_t { auto cs_left = (cs_410b8666022ebeba()).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }())));
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(cs_410b8666022ebeba()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_dst_6607); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (cs_410b8666022ebeba()).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_value = v_dst_6607; cs_410b8666022ebeba() = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_410b8666022ebeba(); auto cs_index = ([&]() -> std::int32_t { auto cs_left = cs_a175562839f44634(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::uint8_t>((([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = cs_410b8666022ebeba(); auto cs_index = ([&]() -> std::int32_t { auto cs_left = cs_a175562839f44634(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())); auto cs_right = (([&]() -> std::int32_t { auto cs_left = v_bit; auto cs_right = ([&]() -> std::int32_t { auto cs_left = cs_a175562839f44634(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left | cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_old = cs_a175562839f44634(); auto cs_new = pls::cs::add_i32(cs_old,1); cs_a175562839f44634() = cs_new; return cs_old; }());
}
}
}

// M:kairo.unity.util.Compressor._writeByte(System.Int32)
void cs_067486e1d5e125b1(std::int32_t v_v) { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor._writeByte(System.Int32)",kairo);
{
for (std::int32_t v_i_6915 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6915; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6915; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6915 = cs_new; return cs_old; }())) {
([&]() -> void { std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_v; auto cs_right = (([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_right = v_i_6915; return pls::cs::shl_i32(cs_left,cs_right); }())); return (cs_left & cs_right); }())); auto cs_right = v_i_6915; return pls::cs::shr_i32(cs_left,cs_right); }()); cs_b4bc001e9edc179c(cs_arg0); }());
}
}
}
}

// M:kairo.unity.util.Compressor._writeNodeToBitBuffer(kairo.unity.util.Compressor.Node)
void cs_a11a596a3ae3687e(pls::cs::Ref<cs_922b87749168eb15> v_node) { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor._writeNodeToBitBuffer(kairo.unity.util.Compressor.Node)",kairo);
{
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_node; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8e6817a8d663aa67; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_node; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0d73049ca9cd4bf6; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); cs_b4bc001e9edc179c(cs_arg0); }());
([&]() -> void { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_node; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57d6fb57c6af0de7; }()); cs_067486e1d5e125b1(cs_arg0); }());
return;
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_node; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8e6817a8d663aa67; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_b4bc001e9edc179c(cs_arg0); }());
([&]() -> void { pls::cs::Ref<cs_922b87749168eb15> cs_arg0 = ([&]() { auto cs_receiver = v_node; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8e6817a8d663aa67; }()); cs_a11a596a3ae3687e(cs_arg0); }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_node; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0d73049ca9cd4bf6; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_b4bc001e9edc179c(cs_arg0); }());
([&]() -> void { pls::cs::Ref<cs_922b87749168eb15> cs_arg0 = ([&]() { auto cs_receiver = v_node; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0d73049ca9cd4bf6; }()); cs_a11a596a3ae3687e(cs_arg0); }());
}
}
}
}

// M:kairo.unity.util.Compressor.Compress(System.Byte[])
pls::cs::Array<std::uint8_t> cs_e44260e02e247abd(pls::cs::Array<std::uint8_t> v_data) { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor.Compress(System.Byte[])",kairo);
{try{
if ((([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (v_data).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{v_data};
}
std::int64_t v_num_978 = ([&]() -> std::int64_t { return cs_55fcf3528750ae31(); }());
pls::cs::Ref<cs_15e3f7b692b3f380> v_fastVector_1052 = pls::cs::Ref<cs_15e3f7b692b3f380>{};
for (std::int32_t v_i_1074 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1074; auto cs_right = (cs_615d3b682d6758f8()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1074; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1074 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = cs_615d3b682d6758f8(); auto cs_index = v_i_1074; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (std::int32_t v_j_1150 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1150; auto cs_right = (cs_06f52091d473e08c()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1150; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1150 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = cs_06f52091d473e08c(); auto cs_index = v_j_1150; auto cs_value = pls::cs::Ref<cs_922b87749168eb15>{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(cs_2184fc12b87895ce()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(cs_5b2c53d265751d9b()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (cs_5b2c53d265751d9b()).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
for (std::int32_t v_k_1289 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_1289; auto cs_right = (v_data).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_1289; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_1289 = cs_new; return cs_old; }())) {
([&]() { auto cs_array = cs_615d3b682d6758f8(); auto cs_index = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = v_k_1289; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }()); auto cs_old = cs_array.at(cs_index); auto cs_new = pls::cs::add_i32(cs_old,1); cs_array.at(cs_index) = cs_new; return cs_old; }());
}
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):1376",([&]() -> pls::cs::Ref<cs_15e3f7b692b3f380> { return cs_617649d3cca73756(); }())); v_fastVector_1052 = cs_value; return cs_value; }());
for (std::int32_t v_l_1406 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_1406; auto cs_right = (cs_615d3b682d6758f8()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_1406; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_1406 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = cs_615d3b682d6758f8(); auto cs_index = v_l_1406; return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
pls::cs::Ref<cs_922b87749168eb15> v_node_1485 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):1492",([&]() -> pls::cs::Ref<cs_922b87749168eb15> { pls::cs::Ref<cs_922b87749168eb15> cs_arg0 = pls::cs::Ref<cs_922b87749168eb15>{}; pls::cs::Ref<cs_922b87749168eb15> cs_arg1 = pls::cs::Ref<cs_922b87749168eb15>{}; pls::cs::Ref<cs_922b87749168eb15> cs_arg2 = pls::cs::Ref<cs_922b87749168eb15>{}; std::int32_t cs_arg3 = ([&]() { auto cs_array = cs_615d3b682d6758f8(); auto cs_index = v_l_1406; return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = v_l_1406; return cs_87ec71db506764c9(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_1052); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_node_1485); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b6a40aa7b6cac314(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = cs_06f52091d473e08c(); auto cs_index = v_l_1406; auto cs_value = v_node_1485;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_fastVector_1052; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
pls::cs::Ref<cs_922b87749168eb15> v_node2_1657 = pls::cs::unbox<pls::cs::Ref<cs_922b87749168eb15>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_fastVector_1052; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()));
pls::cs::Ref<cs_922b87749168eb15> v_node3_1707 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):1715",([&]() -> pls::cs::Ref<cs_922b87749168eb15> { pls::cs::Ref<cs_922b87749168eb15> cs_arg0 = pls::cs::Ref<cs_922b87749168eb15>{}; pls::cs::Ref<cs_922b87749168eb15> cs_arg1 = v_node2_1657; pls::cs::Ref<cs_922b87749168eb15> cs_arg2 = v_node2_1657; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_node2_1657; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b846f0fd1fb1aa0; }()); auto cs_right = ([&]() { auto cs_receiver = v_node2_1657; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b846f0fd1fb1aa0; }()); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_87ec71db506764c9(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()));
([&]() { auto cs_target = v_node2_1657; auto cs_value = v_node3_1707; pls::generated::cs_require(cs_target)->cs_51d08ca6eed04eda = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_fastVector_1052; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::cs::box(v_node3_1707);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else {
while (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_fastVector_1052; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_965b7a32b9c12921; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left >= cs_right); }())) {
pls::cs::Array<std::int32_t> v_array_1917 = ([&]() -> pls::cs::Array<std::int32_t> { pls::cs::Ref<cs_15e3f7b692b3f380> cs_arg0 = v_fastVector_1052; return cs_1239dbf1c63653a5(cs_arg0); }());
pls::cs::Ref<cs_922b87749168eb15> v_node4_1963 = pls::cs::unbox<pls::cs::Ref<cs_922b87749168eb15>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_fastVector_1052; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = ([&]() { auto cs_array = v_array_1917; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()));
pls::cs::Ref<cs_922b87749168eb15> v_node5_2021 = pls::cs::unbox<pls::cs::Ref<cs_922b87749168eb15>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_fastVector_1052; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = ([&]() { auto cs_array = v_array_1917; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()));
pls::cs::Ref<cs_922b87749168eb15> v_recoveredCombinedNode_2079 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):2103",([&]() -> pls::cs::Ref<cs_922b87749168eb15> { pls::cs::Ref<cs_922b87749168eb15> cs_arg0 = pls::cs::Ref<cs_922b87749168eb15>{}; pls::cs::Ref<cs_922b87749168eb15> cs_arg1 = v_node4_1963; pls::cs::Ref<cs_922b87749168eb15> cs_arg2 = v_node5_2021; std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = v_node4_1963; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b846f0fd1fb1aa0; }()); auto cs_right = ([&]() { auto cs_receiver = v_node5_2021; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b846f0fd1fb1aa0; }()); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_87ec71db506764c9(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }()));
([&]() { auto cs_target = v_node4_1963; auto cs_value = v_recoveredCombinedNode_2079; pls::generated::cs_require(cs_target)->cs_51d08ca6eed04eda = cs_value; return cs_value; }());
([&]() { auto cs_target = v_node5_2021; auto cs_value = v_recoveredCombinedNode_2079; pls::generated::cs_require(cs_target)->cs_51d08ca6eed04eda = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_1052); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_recoveredCombinedNode_2079); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_b6a40aa7b6cac314(cs_receiver,cs_arg0); }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_1052); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_node4_1963); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dcec283a3ce35483(cs_receiver,cs_arg0); }());
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_67cd241ab51652f1<pls::cs::Ref<pls::cs::Object>>>>(v_fastVector_1052); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_node5_2021); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dcec283a3ce35483(cs_receiver,cs_arg0); }());
}
}
if (cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):2417",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x7b26" u"\x53f7" u"\x5316" u"\x6642" u"\x9593" u"\x003d" u"",6);return cs_literal;}()); auto cs_right = pls::generated::cs_integer_string((([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { return cs_55fcf3528750ae31(); }()); auto cs_right = v_num_978; return pls::cs::sub_i64(cs_left,cs_right); }()))); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
([&]() { auto cs_value = ([&]() -> std::int64_t { return cs_55fcf3528750ae31(); }()); v_num_978 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):2526",pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x400ull)))); cs_277fdced2c4e5018(cs_arg0); }());
([&]() -> void { pls::cs::Ref<cs_922b87749168eb15> cs_arg0 = pls::cs::unbox<pls::cs::Ref<cs_922b87749168eb15>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_fastVector_1052; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6d298c7f8339f4aa; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); cs_a11a596a3ae3687e(cs_arg0); }());
std::int32_t v_num2_2609 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
for (std::int32_t v_m_2631 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_2631; auto cs_right = (v_data).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_2631; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_2631 = cs_new; return cs_old; }())) {
std::int32_t v_num3_2673 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_data; auto cs_index = v_m_2631; return cs_array.get_Item(cs_index); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }());
pls::cs::Ref<cs_922b87749168eb15> v_node6_2705 = ([&]() { auto cs_array = cs_06f52091d473e08c(); auto cs_index = v_num3_2673; return cs_array.get_Item(cs_index); }());
while (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_node6_2705; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_51d08ca6eed04eda; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::cs::Ref<cs_922b87749168eb15> v_parent__2779 = ([&]() { auto cs_receiver = v_node6_2705; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_51d08ca6eed04eda; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_parent__2779; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8e6817a8d663aa67; }())); auto cs_right = pls::cs::box(v_node6_2705); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_5b2c53d265751d9b(); auto cs_index = ([&]() { auto cs_old = v_num2_2609; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_2609 = cs_new; return cs_old; }()); auto cs_value = pls::cs::cast_integral<std::uint8_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
} else if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_parent__2779; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0d73049ca9cd4bf6; }())); auto cs_right = pls::cs::box(v_node6_2705); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_5b2c53d265751d9b(); auto cs_index = ([&]() { auto cs_old = v_num2_2609; auto cs_new = pls::cs::add_i32(cs_old,1); v_num2_2609 = cs_new; return cs_old; }()); auto cs_value = pls::cs::cast_integral<std::uint8_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_value = ([&]() { auto cs_receiver = v_node6_2705; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_51d08ca6eed04eda; }()); v_node6_2705 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() { auto cs_receiver = v_node6_2705; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_51d08ca6eed04eda; }()); v_parent__2779 = cs_value; return cs_value; }());
}
std::int32_t v_length_3026 = v_num2_2609;
for (([&]() { auto cs_old = v_num2_2609; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_2609 = cs_new; return cs_old; }()); ([&]() -> bool { auto cs_left = v_num2_2609; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num2_2609; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num2_2609 = cs_new; return cs_old; }())) {
([&]() -> void { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = cs_5b2c53d265751d9b(); auto cs_index = v_num2_2609; return cs_array.get_Item(cs_index); }())); cs_b4bc001e9edc179c(cs_arg0); }());
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_2609 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(cs_2184fc12b87895ce()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(cs_5b2c53d265751d9b()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = v_length_3026; cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
if (cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):3231",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x5727" u"\x7e2e" u"\x6642" u"\x9593" u"\x003d" u"",5);return cs_literal;}()); auto cs_right = pls::generated::cs_integer_string((([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { return cs_55fcf3528750ae31(); }()); auto cs_right = v_num_978; return pls::cs::sub_i64(cs_left,cs_right); }()))); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
pls::cs::Array<std::uint8_t> v_array2_3294 = pls::cs::Array<std::uint8_t>{};
pls::cs::Ref<cs_fb60578b3098a284> v_byteArrayOutputStream_3334 = pls::cs::Ref<cs_fb60578b3098a284>{};
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Compress(System.Byte[]):3404",([&]() -> pls::cs::Ref<cs_fb60578b3098a284> { return cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_3334 = cs_value; return cs_value; }());
pls::cs::Array<std::uint8_t> v_data2_3444 = ([&]() -> pls::cs::Array<std::uint8_t> { return cs_560fbd464452ab06(); }());
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_3334; std::int32_t cs_arg1 = cs_a175562839f44634(); cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_3334; pls::cs::Array<std::uint8_t> cs_arg1 = v_data2_3444; cs_242552fbbe53e929(cs_arg0,cs_arg1); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_3334); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c875afd29ab2966c(cs_receiver); }()); v_array2_3294 = cs_value; return cs_value; }());
}}, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayOutputStream_3334; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<cs_fb60578b3098a284>{}; v_byteArrayOutputStream_3334 = cs_value; return cs_value; }());
});
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{v_array2_3294};
}catch(const pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<std::uint8_t>>();}
}
}

// M:kairo.unity.util.Compressor.Expand(System.Byte[])
pls::cs::Array<std::uint8_t> cs_76473a48703be5ba(pls::cs::Array<std::uint8_t> v_data) { cs_init_18054fa8aeee43c7();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor.Expand(System.Byte[])",kairo);
{try{
if ((([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (v_data).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{v_data};
}
std::int64_t v_num_3869 = ([&]() -> std::int64_t { return cs_55fcf3528750ae31(); }());
([&]() -> void { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; cs_277fdced2c4e5018(cs_arg0); }());
std::int32_t v_num2_3935 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; bool cs_arg1 = true; return cs_959917dd8cfcce1a(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::cs::add_i32(cs_left,cs_right); }());
([&]() { auto cs_old = cs_a175562839f44634(); auto cs_rhs = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); cs_a175562839f44634() = cs_value; return cs_value; }());
pls::cs::Ref<cs_922b87749168eb15> v_node_4012 = ([&]() -> pls::cs::Ref<cs_922b87749168eb15> { return cs_d55770566d7a5dd6(); }());
pls::cs::Ref<cs_fb60578b3098a284> v_byteArrayOutputStream_4070 = pls::cs::Ref<cs_fb60578b3098a284>{};
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Expand(System.Byte[]):4140",([&]() -> pls::cs::Ref<cs_fb60578b3098a284> { return cs_10f86e0fa81e1b57(); }())); v_byteArrayOutputStream_4070 = cs_value; return cs_value; }());
while (([&]() -> bool { auto cs_left = cs_a175562839f44634(); auto cs_right = v_num2_3935; return (cs_left < cs_right); }())) {
pls::cs::Ref<cs_922b87749168eb15> v_node2_4214 = v_node_4012;
while (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_node2_4214; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8e6817a8d663aa67; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
if ((!(((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return cs_bac9e060fc04efba(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }())))))) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = v_node2_4214; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8e6817a8d663aa67; }()); v_node2_4214 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = ([&]() { auto cs_receiver = v_node2_4214; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0d73049ca9cd4bf6; }()); v_node2_4214 = cs_value; return cs_value; }());
}
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(v_byteArrayOutputStream_4070); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(pls::cs::cast_integral<std::uint8_t>(([&]() { auto cs_receiver = v_node2_4214; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_57d6fb57c6af0de7; }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
if (cs_4cc76a7a43706693()) {
([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::source_allocations::completed("concat_operator","src/KairoLibrary/kairo/unity/util/Compressor.cs:M:kairo.unity.util.Compressor.Expand(System.Byte[]):4509",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x89e3" u"\x51cd" u"\x6642" u"\x9593" u"\x003d" u"",5);return cs_literal;}()); auto cs_right = pls::generated::cs_integer_string((([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { return cs_55fcf3528750ae31(); }()); auto cs_right = v_num_3869; return pls::cs::sub_i64(cs_left,cs_right); }()))); return pls::cs::String::concat(cs_left,cs_right); }())); auto cs_arg1 = pls::cs::Ref<pls::cs::ExceptionObject>{}; return cs_812090ed79928522(cs_arg0,cs_arg1); }());
}
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_4070); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c875afd29ab2966c(cs_receiver); }())};
}}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_byteArrayOutputStream_4070); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
try {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_4070); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
} catch(const pls::cs::Exception& cs_caught_502) {auto cs_exception_502=pls::cs::capture_exception(cs_caught_502);
if(pls::cs::exception_is(cs_exception_502,"System.Exception")) {{

}}
else {throw;} }
}
([&]() { auto cs_value = pls::cs::Ref<cs_fb60578b3098a284>{}; v_byteArrayOutputStream_4070 = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<std::uint8_t>>();}
}
}
}
