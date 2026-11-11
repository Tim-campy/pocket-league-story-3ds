// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_3af9088680f95fb3.hpp"
#include "portable_generated_type_832d81e198eeeec2.hpp"
#include "portable_generated_type_cbac662a28aa40b1.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
#include "portable_generated_type_cbac662a28aa40b1_templates.hpp"
namespace pls::generated {

void cs_832d81e198eeeec2::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_ea324a0bbfe717fe::trace_edges(visitor);pls::cs::trace_value(cs_dc88a962e561cf72,visitor);pls::cs::trace_value(cs_96bf466f63c1692d,visitor);pls::cs::trace_value(cs_565b1ab091133717,visitor);pls::cs::trace_value(cs_bd6a014dfd6a30e7,visitor);}

void cs_832d81e198eeeec2::release_edges(){cs_ea324a0bbfe717fe::release_edges();pls::cs::release_value(cs_dc88a962e561cf72);pls::cs::release_value(cs_96bf466f63c1692d);pls::cs::release_value(cs_565b1ab091133717);pls::cs::release_value(cs_bd6a014dfd6a30e7);}

void cs_832d81e198eeeec2::cs_virtual_2adf924bd0d7d65a() {cs_5e27bc3565f1a832(pls::cs::static_pointer_cast<cs_832d81e198eeeec2>(shared_from_this()));}

void cs_832d81e198eeeec2::cs_virtual_a2a7e1a6575cae4c(std::int32_t v_b) {cs_f1d0001066598458(pls::cs::static_pointer_cast<cs_832d81e198eeeec2>(shared_from_this()),v_b);}

void cs_832d81e198eeeec2::cs_virtual_109456b2dd9e2d77(pls::cs::Array<std::uint8_t> v_b) {cs_43cbea7ccad9d4d6(pls::cs::static_pointer_cast<cs_832d81e198eeeec2>(shared_from_this()),v_b);}

void cs_832d81e198eeeec2::cs_virtual_eeffa75bcd0cd73d(pls::cs::Array<std::uint8_t> v_b,std::int32_t v_off,std::int32_t v_len) {cs_049fbfd8c1e94864(pls::cs::static_pointer_cast<cs_832d81e198eeeec2>(shared_from_this()),v_b,v_off,v_len);}

void cs_832d81e198eeeec2::cs_virtual_0d912191800a0b86() {cs_ee6ef7b3c5c52f4e(pls::cs::static_pointer_cast<cs_832d81e198eeeec2>(shared_from_this()));}

void cs_init_832d81e198eeeec2(){static pls::cs::TypeInitState state;state.run("kairo.unity.io.ByteListOutputStream",[](){

});}

// M:kairo.unity.io.ByteListOutputStream._expand
void cs_2c474068bf2bc8ac(pls::cs::Ref<cs_832d81e198eeeec2> cs_this) { cs_init_832d81e198eeeec2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream._expand",kairo);
{
pls::cs::Array<pls::cs::Array<std::uint8_t>> v_array_2907 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/io/ByteListOutputStream.cs:M:kairo.unity.io.ByteListOutputStream._expand:2915",pls::cs::Array<pls::cs::Array<std::uint8_t>>::make(([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())));
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_array_2907); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }())).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_target = v_array_2907; auto cs_index = ([&]() -> std::int32_t { auto cs_left = (v_array_2907).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/io/ByteListOutputStream.cs:M:kairo.unity.io.ByteListOutputStream._expand:3030",pls::cs::Array<std::uint8_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull))));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_value = v_array_2907; pls::generated::cs_require(cs_target)->cs_dc88a962e561cf72 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.io.ByteListOutputStream._init(System.Int32)
void cs_9a08c52e842b2bca(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,std::int32_t v_listNum) { cs_init_832d81e198eeeec2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream._init(System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::uint8_t>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/io/ByteListOutputStream.cs:M:kairo.unity.io.ByteListOutputStream._init(System.Int32):514",([&](){auto cs_initial_array_499=pls::cs::Array<std::int32_t>::make(2);cs_initial_array_499.at(0)=v_listNum;cs_initial_array_499.at(1)=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull));return cs_initial_array_499;}())); return cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::uint8_t>>>(cs_arg0); }()); pls::generated::cs_require(cs_target)->cs_dc88a962e561cf72 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_96bf466f63c1692d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_bd6a014dfd6a30e7 = cs_value; return cs_value; }())); pls::generated::cs_require(cs_target)->cs_565b1ab091133717 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.io.ByteListOutputStream.#ctor
pls::cs::Ref<cs_832d81e198eeeec2> cs_62c87c20be2abf48() { cs_init_832d81e198eeeec2();
{ auto cs_this = pls::cs::make_ref<cs_832d81e198eeeec2>(); cs_62c87c20be2abf48_init(cs_this); return cs_this; }
}

void cs_62c87c20be2abf48_init(pls::cs::Ref<cs_832d81e198eeeec2> cs_this) {
([&]() { cs_60f0f6dd217b8877_init(pls::cs::static_pointer_cast<cs_ea324a0bbfe717fe>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream.#ctor",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_832d81e198eeeec2>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9a08c52e842b2bca(cs_receiver,cs_arg0); }());
}
}
}

// M:kairo.unity.io.ByteListOutputStream.Close
void cs_ee6ef7b3c5c52f4e(pls::cs::Ref<cs_832d81e198eeeec2> cs_this) { cs_init_832d81e198eeeec2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream.Close",kairo);
{
for (std::int32_t v_num_635 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); ([&]() -> bool { auto cs_left = v_num_635; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left >= cs_right); }()); ([&]() { auto cs_old = v_num_635; auto cs_new = pls::cs::sub_i32(cs_old,1); v_num_635 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }()); auto cs_index = v_num_635; auto cs_value = pls::cs::Array<std::uint8_t>{};cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Array<std::uint8_t>>{}; pls::generated::cs_require(cs_target)->cs_dc88a962e561cf72 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_96bf466f63c1692d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_bd6a014dfd6a30e7 = cs_value; return cs_value; }())); pls::generated::cs_require(cs_target)->cs_565b1ab091133717 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.io.ByteListOutputStream.Flush
void cs_5e27bc3565f1a832(pls::cs::Ref<cs_832d81e198eeeec2> cs_this) { cs_init_832d81e198eeeec2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream.Flush",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(pls::cs::static_pointer_cast<cs_ea324a0bbfe717fe>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2adf924bd0d7d65a(cs_receiver); }());
}
}
}
}

// M:kairo.unity.io.ByteListOutputStream.Size
std::int32_t cs_de90486df5eaa436(pls::cs::Ref<cs_832d81e198eeeec2> cs_this) { cs_init_832d81e198eeeec2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream.Size",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_96bf466f63c1692d; }());
}
}
}
}

// M:kairo.unity.io.ByteListOutputStream.ToByteArray(System.Int32,System.Int32,System.Byte[])
pls::cs::Array<std::uint8_t> cs_03248748e929fa37(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,std::int32_t v_index,std::int32_t v_length,pls::cs::Array<std::uint8_t> v_dst) { cs_init_832d81e198eeeec2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream.ToByteArray(System.Int32,System.Int32,System.Byte[])",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(v_dst); auto cs_right = pls::cs::box(pls::cs::Array<std::uint8_t>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/io/ByteListOutputStream.cs:M:kairo.unity.io.ByteListOutputStream.ToByteArray(System.Int32,System.Int32,System.Byte[]):1624",pls::cs::Array<std::uint8_t>::make(v_length)); v_dst = cs_value; return cs_value; }());
}
std::int32_t v_num_1654 = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_num2_1680 = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull)); return pls::cs::mod_i32(cs_left,cs_right); }());
std::int32_t v_num3_1707 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num4_1724 = v_num_1654;
while ((([&]() -> bool { auto cs_left = v_num4_1724; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }())).length(); return (cs_left < cs_right); }()) && ([&]() -> bool { auto cs_left = v_num3_1707; auto cs_right = v_length; return (cs_left < cs_right); }()))) {
pls::cs::Array<std::uint8_t> v_array_1800 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }()); auto cs_index = v_num4_1724; return cs_array.get_Item(cs_index); }());
std::int32_t v_num5_1829 = ([&]() -> std::int32_t { auto cs_left = v_length; auto cs_right = v_num3_1707; return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num5_1829; auto cs_right = ([&]() -> std::int32_t { auto cs_left = (v_array_1800).length(); auto cs_right = v_num2_1680; return pls::cs::sub_i32(cs_left,cs_right); }()); return (cs_left > cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = (v_array_1800).length(); auto cs_right = v_num2_1680; return pls::cs::sub_i32(cs_left,cs_right); }()); v_num5_1829 = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_array_1800); std::int32_t cs_arg1 = v_num2_1680; pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_dst); std::int32_t cs_arg3 = v_num3_1707; std::int32_t cs_arg4 = v_num5_1829; cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_old = v_num3_1707; auto cs_rhs = v_num5_1829; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num3_1707 = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_num2_1680 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num4_1724; auto cs_new = pls::cs::add_i32(cs_old,1); v_num4_1724 = cs_new; return cs_old; }());
}
return v_dst;
}
}
}
}

// M:kairo.unity.io.ByteListOutputStream.ToByteArray(System.Int32,System.Int32)
pls::cs::Array<std::uint8_t> cs_a98d1e0db662120b(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,std::int32_t v_index,std::int32_t v_length) { cs_init_832d81e198eeeec2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream.ToByteArray(System.Int32,System.Int32)",kairo);
{
return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_832d81e198eeeec2>>(cs_this); std::int32_t cs_arg0 = v_index; std::int32_t cs_arg1 = v_length; pls::cs::Array<std::uint8_t> cs_arg2 = pls::cs::Array<std::uint8_t>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_03248748e929fa37(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[],System.Int32,System.Int32)
void cs_049fbfd8c1e94864(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,pls::cs::Array<std::uint8_t> v_b,std::int32_t v_off,std::int32_t v_len) { cs_init_832d81e198eeeec2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[],System.Int32,System.Int32)",kairo);
{
std::int32_t v_num_2122 = v_off;
while (([&]() -> bool { auto cs_left = v_len; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bd6a014dfd6a30e7; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull)); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_565b1ab091133717; auto cs_new = pls::cs::add_i32(cs_old,1); pls::generated::cs_require(cs_target)->cs_565b1ab091133717 = cs_new; return cs_old; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_bd6a014dfd6a30e7 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_565b1ab091133717; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }())).length(); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_832d81e198eeeec2>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2c474068bf2bc8ac(cs_receiver); }());
}
}
std::int32_t v_num2_2292 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull)); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bd6a014dfd6a30e7; }()); return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num2_2292; auto cs_right = v_len; return (cs_left > cs_right); }())) {
([&]() { auto cs_value = v_len; v_num2_2292 = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_b); std::int32_t cs_arg1 = v_num_2122; pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_565b1ab091133717; }()); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bd6a014dfd6a30e7; }()); std::int32_t cs_arg4 = v_num2_2292; cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_bd6a014dfd6a30e7; auto cs_rhs = v_num2_2292; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::generated::cs_require(cs_target)->cs_bd6a014dfd6a30e7 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_96bf466f63c1692d; auto cs_rhs = v_num2_2292; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::generated::cs_require(cs_target)->cs_96bf466f63c1692d = cs_value; return cs_value; }());
([&]() { auto cs_old = v_len; auto cs_rhs = v_num2_2292; auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_len = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num_2122; auto cs_rhs = v_num2_2292; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_2122 = cs_value; return cs_value; }());
}
}
}
}
}

// M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[])
void cs_43cbea7ccad9d4d6(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,pls::cs::Array<std::uint8_t> v_b) { cs_init_832d81e198eeeec2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[])",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_832d81e198eeeec2>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_b; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = (v_b).length(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_eeffa75bcd0cd73d(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:kairo.unity.io.ByteListOutputStream.Write(System.Int32)
void cs_f1d0001066598458(pls::cs::Ref<cs_832d81e198eeeec2> cs_this,std::int32_t v_b) { cs_init_832d81e198eeeec2();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.io.ByteListOutputStream.Write(System.Int32)",kairo);
{
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bd6a014dfd6a30e7; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull)); return (cs_left >= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_565b1ab091133717; auto cs_new = pls::cs::add_i32(cs_old,1); pls::generated::cs_require(cs_target)->cs_565b1ab091133717 = cs_new; return cs_old; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_require(cs_target)->cs_bd6a014dfd6a30e7 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_565b1ab091133717; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }())).length(); return (cs_left >= cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_832d81e198eeeec2>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2c474068bf2bc8ac(cs_receiver); }());
}
}
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc88a962e561cf72; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_565b1ab091133717; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bd6a014dfd6a30e7; }()); auto cs_value = pls::cs::cast_integral<std::uint8_t>((([&]() -> std::int32_t { auto cs_left = v_b; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); return (cs_left & cs_right); }())));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_bd6a014dfd6a30e7; auto cs_new = pls::cs::add_i32(cs_old,1); pls::generated::cs_require(cs_target)->cs_bd6a014dfd6a30e7 = cs_new; return cs_old; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_96bf466f63c1692d; auto cs_new = pls::cs::add_i32(cs_old,1); pls::generated::cs_require(cs_target)->cs_96bf466f63c1692d = cs_new; return cs_old; }());
}
}
}
}
}
