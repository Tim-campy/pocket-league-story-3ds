// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_1ff3292665c8e0c4.hpp"
#include "portable_generated_type_3af9088680f95fb3.hpp"
#include "portable_generated_type_3b41638e424b9ee0.hpp"
#include "portable_generated_type_5098bfda9cf65745.hpp"
#include "portable_generated_type_7fd3b635ed6929d0.hpp"
#include "portable_generated_type_924db3d974bae2af.hpp"
#include "portable_generated_type_bb652fbb61000386.hpp"
#include "portable_generated_type_bd164c3c94a49e2a.hpp"
#include "portable_generated_type_c20c229ea63037d8.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
#include "portable_generated_type_fb60578b3098a284.hpp"
namespace pls::generated {

void cs_c20c229ea63037d8::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_3a492b4165f9d5db,visitor);pls::cs::trace_value(cs_6747c51e21a34296,visitor);pls::cs::trace_value(cs_1393912ba87bd2f6,visitor);pls::cs::trace_value(cs_4e32a5d73d9793f0,visitor);pls::cs::trace_value(cs_26072971e2305223,visitor);}

void cs_c20c229ea63037d8::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_3a492b4165f9d5db);pls::cs::release_value(cs_6747c51e21a34296);pls::cs::release_value(cs_1393912ba87bd2f6);pls::cs::release_value(cs_4e32a5d73d9793f0);pls::cs::release_value(cs_26072971e2305223);}

void cs_init_c20c229ea63037d8(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.SecureProperty",[](){

});}

// M:kairo.unity.util.SecureProperty.#ctor(kairo.unity.util.SecureProperty)
pls::cs::Ref<cs_c20c229ea63037d8> cs_5d0efd71eb31c332(pls::cs::Ref<cs_c20c229ea63037d8> v_property) { cs_init_c20c229ea63037d8();
{ auto cs_this = pls::cs::make_ref<cs_c20c229ea63037d8>(); cs_5d0efd71eb31c332_init(cs_this,v_property); return cs_this; }
}

void cs_5d0efd71eb31c332_init(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Ref<cs_c20c229ea63037d8> v_property) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.#ctor(kairo.unity.util.SecureProperty)",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(v_property); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>> cs_arg0 = ([&]() { auto cs_receiver = v_property; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2b44d4f7409d5877(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>> cs_arg0 = ([&]() { auto cs_receiver = v_property; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c010944179b54e7f(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>> cs_arg0 = ([&]() { auto cs_receiver = v_property; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_efb9e536801e85d4(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg0 = ([&]() { auto cs_receiver = v_property; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bfb5dba687727afb(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>> cs_arg0 = ([&]() { auto cs_receiver = v_property; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_200d272a8eaa4ac4(cs_receiver,cs_arg0); }());
}
}
}

// M:kairo.unity.util.SecureProperty.#ctor(kairo.unity.util.SecureProperty[],System.Int32[],System.Int64[],System.String[],System.Byte[][])
pls::cs::Ref<cs_c20c229ea63037d8> cs_1ec84b4dfcd94394(pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>> v_pros,pls::cs::Array<std::int32_t> v_ints,pls::cs::Array<std::int64_t> v_lngs,pls::cs::Array<pls::cs::String> v_strs,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_bins) { cs_init_c20c229ea63037d8();
{ auto cs_this = pls::cs::make_ref<cs_c20c229ea63037d8>(); cs_1ec84b4dfcd94394_init(cs_this,v_pros,v_ints,v_lngs,v_strs,v_bins); return cs_this; }
}

void cs_1ec84b4dfcd94394_init(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>> v_pros,pls::cs::Array<std::int32_t> v_ints,pls::cs::Array<std::int64_t> v_lngs,pls::cs::Array<pls::cs::String> v_strs,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_bins) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.#ctor(kairo.unity.util.SecureProperty[],System.Int32[],System.Int64[],System.String[],System.Byte[][])",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Array<std::int32_t> cs_arg0 = v_ints; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e2efbe60a722c41f(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Array<std::int64_t> cs_arg0 = v_lngs; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4c0e8a7c7f726363(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Array<pls::cs::String> cs_arg0 = v_strs; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_80cc4827894ac539(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg0 = v_bins; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bfb5dba687727afb(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>> cs_arg0 = v_pros; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_200d272a8eaa4ac4(cs_receiver,cs_arg0); }());
}
}
}

// M:kairo.unity.util.SecureProperty.GetTypeNum
std::int32_t cs_38e558d47271c1b8(pls::cs::Ref<cs_c20c229ea63037d8> cs_this) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.GetTypeNum",kairo);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull));
}
}
}
}

// M:kairo.unity.util.SecureProperty.Load(java.io.InputStream)
void cs_99629a76ecf66de7(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.Load(java.io.InputStream)",kairo);
{
std::int32_t v_num_3632 = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }());
for (std::int32_t v_i_3678 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3678; auto cs_right = v_num_3632; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3678; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3678 = cs_new; return cs_old; }())) {
std::int32_t v_type_3712 = std::int32_t{};
std::int32_t v_size_3722 = std::int32_t{};
pls::cs::Array<std::uint8_t> v_ids_3735 = pls::cs::Array<std::uint8_t>{};
([&]() { auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }()); v_type_3712 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }()); v_size_3722 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = v_type_3712; std::int32_t cs_arg2 = v_size_3722; pls::cs::Array<std::uint8_t> cs_arg3 = v_ids_3735; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4a85f8f915bb71be(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
}
}

// M:kairo.unity.util.SecureProperty.Load(System.Byte[])
void cs_f3dde7064a66be23(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<std::uint8_t> v_data) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.Load(System.Byte[])",kairo);
{
pls::cs::Ref<cs_3b41638e424b9ee0> v_byteArrayInputStream_3351 = pls::cs::Ref<cs_3b41638e424b9ee0>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_3351 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_3351; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_99629a76ecf66de7(cs_receiver,cs_arg0); }());
} }, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayInputStream_3351; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<cs_3b41638e424b9ee0>{}; v_byteArrayInputStream_3351 = cs_value; return cs_value; }());
});
}
}
}
}

// M:kairo.unity.util.SecureProperty.Read(java.io.InputStream,System.Int32,System.Int32,System.Byte[])
void cs_4a85f8f915bb71be(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream,std::int32_t v_type,std::int32_t v_size,pls::cs::Array<std::uint8_t> v_ids) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.Read(java.io.InputStream,System.Int32,System.Int32,System.Byte[])",kairo);
{
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>>::make(v_size); pls::generated::cs_require(cs_target)->cs_3a492b4165f9d5db = cs_value; return cs_value; }());
}
for (std::int32_t v_i_4668 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4668; auto cs_right = v_size; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4668; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_4668 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_c20c229ea63037d8> v_secureProperty_4716 = ([&]() -> pls::cs::Ref<cs_c20c229ea63037d8> { pls::cs::Ref<cs_c20c229ea63037d8> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }()); auto cs_index = v_i_4668; return cs_array.get_Item(cs_index); }()); return cs_5d0efd71eb31c332(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(v_secureProperty_4716); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; bool cs_arg1 = true; return cs_e0ccb4d263b167c0(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f3dde7064a66be23(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_i_4668; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_i_4668; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }())).length(); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }()); auto cs_index = v_i_4668; auto cs_value = v_secureProperty_4716;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>> { std::int32_t cs_arg0 = v_size; return cs_5d4aff714c1aa3f1(cs_arg0); }()); pls::generated::cs_require(cs_target)->cs_6747c51e21a34296 = cs_value; return cs_value; }());
}
for (std::int32_t v_j_5059 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5059; auto cs_right = v_size; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5059; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5059 = cs_new; return cs_old; }())) {
std::int32_t v_num_5096 = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_j_5059; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_j_5059; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }())).length(); return (cs_left < cs_right); }()))) {
([&]() -> pls::cs::Ref<cs_7fd3b635ed6929d0> { auto cs_receiver = static_cast<pls::cs::Ref<cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = v_j_5059; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg0 = v_num_5096; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f863ec11d99c7a7d(cs_receiver,cs_arg0); }());
}
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>> { std::int32_t cs_arg0 = v_size; return cs_6f0c7cad5125d866(cs_arg0); }()); pls::generated::cs_require(cs_target)->cs_1393912ba87bd2f6 = cs_value; return cs_value; }());
}
for (std::int32_t v_k_5358 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_5358; auto cs_right = v_size; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_5358; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_5358 = cs_new; return cs_old; }())) {
std::int64_t v_num1_5396 = ([&]() -> std::int64_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_faab575a7db8f157(cs_arg0); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_k_5358; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_k_5358; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }())).length(); return (cs_left < cs_right); }()))) {
([&]() -> pls::cs::Ref<cs_924db3d974bae2af> { auto cs_receiver = static_cast<pls::cs::Ref<cs_924db3d974bae2af>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }()); auto cs_index = v_k_5358; return cs_array.get_Item(cs_index); }())); std::int64_t cs_arg0 = v_num1_5396; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1658bba34982ce50(cs_receiver,cs_arg0); }());
}
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>>::make(v_size); pls::generated::cs_require(cs_target)->cs_4e32a5d73d9793f0 = cs_value; return cs_value; }());
}
for (std::int32_t v_l_5661 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_5661; auto cs_right = v_size; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_5661; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_5661 = cs_new; return cs_old; }())) {
pls::cs::Array<std::uint8_t> v_numArray_5701 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; bool cs_arg1 = true; return cs_e0ccb4d263b167c0(cs_arg0,cs_arg1); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_l_5661; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_l_5661; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }())).length(); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = v_l_5661; auto cs_value = ([&]() -> pls::cs::Ref<cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_numArray_5701; return cs_5d8e9e8201c04369(cs_arg0); }()); return cs_ede7ead54c734d4c(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::uint8_t>>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Array<std::uint8_t>>::make(v_size); pls::generated::cs_require(cs_target)->cs_26072971e2305223 = cs_value; return cs_value; }());
}
for (std::int32_t v_m_6007 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_6007; auto cs_right = v_size; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_6007; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_6007 = cs_new; return cs_old; }())) {
pls::cs::Array<std::uint8_t> v_numArray1_6047 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; bool cs_arg1 = true; return cs_e0ccb4d263b167c0(cs_arg0,cs_arg1); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_m_6007; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_m_6007; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }())).length(); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = v_m_6007; auto cs_value = v_numArray1_6047;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}
}
}

// M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureInt[])
void cs_2b44d4f7409d5877(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>> v_data) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureInt[])",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>>{}; pls::generated::cs_require(cs_target)->cs_6747c51e21a34296 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_6747c51e21a34296 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_data); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }())).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
}

// M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureLong[])
void cs_c010944179b54e7f(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>> v_data) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureLong[])",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>>{}; pls::generated::cs_require(cs_target)->cs_1393912ba87bd2f6 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_1393912ba87bd2f6 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_data); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }())).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
}

// M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureProperty[])
void cs_200d272a8eaa4ac4(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>> v_data) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureProperty[])",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>>{}; pls::generated::cs_require(cs_target)->cs_3a492b4165f9d5db = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_3a492b4165f9d5db = cs_value; return cs_value; }());
for (std::int32_t v_i_3189 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3189; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3189; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3189 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }()); auto cs_index = v_i_3189; auto cs_value = ([&]() -> pls::cs::Ref<cs_c20c229ea63037d8> { pls::cs::Ref<cs_c20c229ea63037d8> cs_arg0 = ([&]() { auto cs_array = v_data; auto cs_index = v_i_3189; return cs_array.get_Item(cs_index); }()); return cs_5d0efd71eb31c332(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureString[])
void cs_efb9e536801e85d4(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>> v_data) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureString[])",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>>{}; pls::generated::cs_require(cs_target)->cs_4e32a5d73d9793f0 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_4e32a5d73d9793f0 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>> cs_arg0 = v_data; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>> cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }())).length(); cs_d3ffac04a047de61(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
}

// M:kairo.unity.util.SecureProperty.SetData(System.Byte[][])
void cs_bfb5dba687727afb(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_data) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.SetData(System.Byte[][])",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Array<std::uint8_t>>{}; pls::generated::cs_require(cs_target)->cs_26072971e2305223 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::uint8_t>>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Array<std::uint8_t>>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_26072971e2305223 = cs_value; return cs_value; }());
for (std::int32_t v_i_2829 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2829; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2829; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2829 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = v_i_2829; auto cs_value = pls::cs::Array<std::uint8_t>::make((([&]() { auto cs_array = v_data; auto cs_index = v_i_2829; return cs_array.get_Item(cs_index); }())).length());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = v_data; auto cs_index = v_i_2829; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = v_i_2829; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = v_i_2829; return cs_array.get_Item(cs_index); }())).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
}
}

// M:kairo.unity.util.SecureProperty.SetData(System.Int32[])
void cs_e2efbe60a722c41f(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<std::int32_t> v_data) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.SetData(System.Int32[])",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>>{}; pls::generated::cs_require(cs_target)->cs_6747c51e21a34296 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_6747c51e21a34296 = cs_value; return cs_value; }());
for (std::int32_t v_i_1570 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1570; auto cs_right = (v_data).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1570; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1570 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = v_i_1570; auto cs_value = ([&]() -> pls::cs::Ref<cs_7fd3b635ed6929d0> { std::int32_t cs_arg0 = ([&]() { auto cs_array = v_data; auto cs_index = v_i_1570; return cs_array.get_Item(cs_index); }()); return cs_891849d99054b970(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:kairo.unity.util.SecureProperty.SetData(System.Int64[])
void cs_4c0e8a7c7f726363(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<std::int64_t> v_data) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.SetData(System.Int64[])",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>>{}; pls::generated::cs_require(cs_target)->cs_1393912ba87bd2f6 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::int64_t>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_1393912ba87bd2f6 = cs_value; return cs_value; }());
for (std::int32_t v_i_2057 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2057; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2057; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2057 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }()); auto cs_index = v_i_2057; auto cs_value = ([&]() -> pls::cs::Ref<cs_924db3d974bae2af> { std::int64_t cs_arg0 = ([&]() { auto cs_array = v_data; auto cs_index = v_i_2057; return cs_array.get_Item(cs_index); }()); return cs_8b6e6e5ae1d900bd(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:kairo.unity.util.SecureProperty.SetData(System.String[])
void cs_80cc4827894ac539(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::String> v_data) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.SetData(System.String[])",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>>{}; pls::generated::cs_require(cs_target)->cs_4e32a5d73d9793f0 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_4e32a5d73d9793f0 = cs_value; return cs_value; }());
for (std::int32_t v_i_2563 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2563; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2563; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2563 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = v_i_2563; auto cs_value = ([&]() -> pls::cs::Ref<cs_bb652fbb61000386> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_data; auto cs_index = v_i_2563; return cs_array.get_Item(cs_index); }()); return cs_376859ff51e2fc37(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:kairo.unity.util.SecureProperty.Size(System.Int32)
std::int32_t cs_c3f290ad9c4c778b(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,std::int32_t v_type) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.Size(System.Int32)",kairo);
{
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>>{}); return cs_left != cs_right; }()))) {
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }())).length();
}
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>>{}); return cs_left != cs_right; }()))) {
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }())).length();
}
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>>{}); return cs_left != cs_right; }()))) {
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }())).length();
}
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>>{}); return cs_left != cs_right; }()))) {
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }())).length();
}
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::uint8_t>>{}); return cs_left != cs_right; }()))) {
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }())).length();
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
}
}

// M:kairo.unity.util.SecureProperty.ToByteArray
pls::cs::Array<std::uint8_t> cs_1dc2914985e48e1c(pls::cs::Ref<cs_c20c229ea63037d8> cs_this) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.ToByteArray",kairo);
{try{
pls::cs::Ref<cs_fb60578b3098a284> v_byteArrayOutputStream_3929 = pls::cs::Ref<cs_fb60578b3098a284>{};
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_fb60578b3098a284> { return cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_3929 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_3929; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d22c20b5f1d8a8cf(cs_receiver,cs_arg0); }());
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_3929); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c875afd29ab2966c(cs_receiver); }())};
}}, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayOutputStream_3929; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<cs_fb60578b3098a284>{}; v_byteArrayOutputStream_3929 = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<std::uint8_t>>();}
}
}
}

// M:kairo.unity.util.SecureProperty.ToByteArray(java.io.OutputStream)
void cs_d22c20b5f1d8a8cf(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Ref<cs_ea324a0bbfe717fe> v_os) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.ToByteArray(java.io.OutputStream)",kairo);
{
std::int32_t v_typeNum_4271 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_38e558d47271c1b8(cs_receiver); }());
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = v_typeNum_4271; cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_4344 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_4344; auto cs_right = v_typeNum_4271; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_4344; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_4344 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = v_i_4344; cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); std::int32_t cs_arg0 = v_i_4344; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c3f290ad9c4c778b(cs_receiver,cs_arg0); }()); cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(cs_this); pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = v_i_4344; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1235f27d1e326536(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
}

// M:kairo.unity.util.SecureProperty.Write(java.io.OutputStream,System.Int32)
void cs_1235f27d1e326536(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int32_t v_type) { cs_init_c20c229ea63037d8();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureProperty.Write(java.io.OutputStream,System.Int32)",kairo);
{
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_i_6340 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_6340; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_6340; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_6340 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c20c229ea63037d8>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a492b4165f9d5db; }()); auto cs_index = v_i_6340; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1dc2914985e48e1c(cs_receiver); }()); bool cs_arg2 = true; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_j_6557 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_6557; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_6557; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_6557 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_7fd3b635ed6929d0>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6747c51e21a34296; }()); auto cs_index = v_j_6557; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_59fd81cb225539c6(cs_receiver); }()); cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_k_6763 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_6763; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_6763; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_6763 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int64_t cs_arg1 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_924db3d974bae2af>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1393912ba87bd2f6; }()); auto cs_index = v_k_6763; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b3c751b9e91311fd(cs_receiver); }()); cs_6c6af002987d1423(cs_arg0,cs_arg1); }());
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_l_6970 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_6970; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_6970; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_6970 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_bb652fbb61000386>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4e32a5d73d9793f0; }()); auto cs_index = v_l_6970; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_14b03fdc4ae8f84c(cs_receiver); }()); bool cs_arg2 = true; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::uint8_t>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_m_7184 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_7184; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_7184; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_7184 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_26072971e2305223; }()); auto cs_index = v_m_7184; return cs_array.get_Item(cs_index); }()); bool cs_arg2 = true; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
}
}
}
