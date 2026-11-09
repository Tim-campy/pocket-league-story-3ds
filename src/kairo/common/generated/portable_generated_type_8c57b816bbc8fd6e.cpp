// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_1ff3292665c8e0c4.hpp"
#include "portable_generated_type_3af9088680f95fb3.hpp"
#include "portable_generated_type_3b41638e424b9ee0.hpp"
#include "portable_generated_type_5098bfda9cf65745.hpp"
#include "portable_generated_type_582a926e9c7748a6.hpp"
#include "portable_generated_type_8c57b816bbc8fd6e.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
#include "portable_generated_type_fb60578b3098a284.hpp"
namespace pls::generated {

void cs_8c57b816bbc8fd6e::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_4fa0b3a7eea3a844,visitor);pls::cs::trace_value(cs_72da38f2b646e254,visitor);pls::cs::trace_value(cs_cfccd28f4d6b847a,visitor);pls::cs::trace_value(cs_d5b37f60e20607b6,visitor);pls::cs::trace_value(cs_ba76615c0cb37783,visitor);}

void cs_8c57b816bbc8fd6e::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_4fa0b3a7eea3a844);pls::cs::release_value(cs_72da38f2b646e254);pls::cs::release_value(cs_cfccd28f4d6b847a);pls::cs::release_value(cs_d5b37f60e20607b6);pls::cs::release_value(cs_ba76615c0cb37783);}

void cs_init_8c57b816bbc8fd6e(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Property",[](){

});}

// M:kairo.unity.util.Property.#ctor
pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_7a9ac0812c6bac9b() { cs_init_8c57b816bbc8fd6e();
{ auto cs_this = pls::cs::make_ref<cs_8c57b816bbc8fd6e>(); cs_7a9ac0812c6bac9b_init(cs_this); return cs_this; }
}

void cs_7a9ac0812c6bac9b_init(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this) {
{

}
}

// M:kairo.unity.util.Property.#ctor(kairo.unity.util.Property)
pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_908c27d4c8b0dafd(pls::cs::Ref<cs_8c57b816bbc8fd6e> v_property) { cs_init_8c57b816bbc8fd6e();
{ auto cs_this = pls::cs::make_ref<cs_8c57b816bbc8fd6e>(); cs_908c27d4c8b0dafd_init(cs_this,v_property); return cs_this; }
}

void cs_908c27d4c8b0dafd_init(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Ref<cs_8c57b816bbc8fd6e> v_property) {
{
if (([&]() { auto cs_left = pls::cs::box(v_property); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
return;
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Array<std::int32_t> cs_arg0 = ([&]() { auto cs_receiver = v_property; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_24b7db1f10b3afd6(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Array<std::int64_t> cs_arg0 = ([&]() { auto cs_receiver = v_property; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2df7da8ec260c971(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Array<pls::cs::String> cs_arg0 = ([&]() { auto cs_receiver = v_property; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_72451e36c1ffa133(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg0 = ([&]() { auto cs_receiver = v_property; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_960037fcb764cd47(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>> cs_arg0 = ([&]() { auto cs_receiver = v_property; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_429d9dc2b2289494(cs_receiver,cs_arg0); }());
}
}

// M:kairo.unity.util.Property.#ctor(kairo.unity.util.Property[],System.Int32[],System.Int64[],System.String[],System.Byte[][])
pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_e34104df98d3719c(pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>> v_pros,pls::cs::Array<std::int32_t> v_ints,pls::cs::Array<std::int64_t> v_lngs,pls::cs::Array<pls::cs::String> v_strs,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_bins) { cs_init_8c57b816bbc8fd6e();
{ auto cs_this = pls::cs::make_ref<cs_8c57b816bbc8fd6e>(); cs_e34104df98d3719c_init(cs_this,v_pros,v_ints,v_lngs,v_strs,v_bins); return cs_this; }
}

void cs_e34104df98d3719c_init(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>> v_pros,pls::cs::Array<std::int32_t> v_ints,pls::cs::Array<std::int64_t> v_lngs,pls::cs::Array<pls::cs::String> v_strs,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_bins) {
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Array<std::int32_t> cs_arg0 = v_ints; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_24b7db1f10b3afd6(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Array<std::int64_t> cs_arg0 = v_lngs; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2df7da8ec260c971(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Array<pls::cs::String> cs_arg0 = v_strs; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_72451e36c1ffa133(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_arg0 = v_bins; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_960037fcb764cd47(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>> cs_arg0 = v_pros; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_429d9dc2b2289494(cs_receiver,cs_arg0); }());
}
}

// M:kairo.unity.util.Property.GetTypeNum
std::int32_t cs_9bed1c1a7cdf0fd7(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull));
}
}
}

// M:kairo.unity.util.Property.Load(java.io.InputStream)
void cs_35c274628bb2d40e(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_num_2506 = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }());
for (std::int32_t v_i_2552 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2552; auto cs_right = v_num_2506; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2552; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2552 = cs_new; return cs_old; }())) {
std::int32_t v_type_2586 = std::int32_t{};
std::int32_t v_size_2596 = std::int32_t{};
pls::cs::Array<std::uint8_t> v_ids_2609 = pls::cs::Array<std::uint8_t>{};
([&]() { auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }()); v_type_2586 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }()); v_size_2596 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; std::int32_t cs_arg1 = v_type_2586; std::int32_t cs_arg2 = v_size_2596; pls::cs::Array<std::uint8_t> cs_arg3 = v_ids_2609; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_0f2f500f52fc5e3a(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
}

// M:kairo.unity.util.Property.Load(System.Byte[])
void cs_abffc02b85346a7d(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<std::uint8_t> v_data) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_3b41638e424b9ee0> v_byteArrayInputStream_2225 = pls::cs::Ref<cs_3b41638e424b9ee0>{};
pls::cs::run_finally([&]() -> void { {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_3b41638e424b9ee0> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return cs_c3a84083a67ee263(cs_arg0); }()); v_byteArrayInputStream_2225 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_byteArrayInputStream_2225; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_35c274628bb2d40e(cs_receiver,cs_arg0); }());
} }, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayInputStream_2225; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<cs_3b41638e424b9ee0>{}; v_byteArrayInputStream_2225 = cs_value; return cs_value; }());
});
}
}
}

// M:kairo.unity.util.Property.Read(java.io.InputStream,System.Int32,System.Int32,System.Byte[])
void cs_0f2f500f52fc5e3a(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream,std::int32_t v_type,std::int32_t v_size,pls::cs::Array<std::uint8_t> v_ids) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>>::make(v_size); pls::generated::cs_require(cs_target)->cs_4fa0b3a7eea3a844 = cs_value; return cs_value; }());
}
for (std::int32_t v_i_3536 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3536; auto cs_right = v_size; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3536; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3536 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8c57b816bbc8fd6e> v_property_3578 = ([&]() -> pls::cs::Ref<cs_8c57b816bbc8fd6e> { pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }()); auto cs_index = v_i_3536; return cs_array.get_Item(cs_index); }()); return cs_908c27d4c8b0dafd(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(v_property_3578); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; bool cs_arg1 = true; return cs_e0ccb4d263b167c0(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_abffc02b85346a7d(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_i_3536; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_i_3536; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }())).length(); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }()); auto cs_index = v_i_3536; auto cs_value = v_property_3578;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make(v_size); pls::generated::cs_require(cs_target)->cs_72da38f2b646e254 = cs_value; return cs_value; }());
}
for (std::int32_t v_j_3889 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_3889; auto cs_right = v_size; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_3889; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_3889 = cs_new; return cs_old; }())) {
std::int32_t v_num_3926 = ([&]() -> std::int32_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_3715f8f52a079812(cs_arg0); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_j_3889; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_j_3889; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())).length(); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = v_j_3889; auto cs_value = v_num_3926;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int64_t>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int64_t>::make(v_size); pls::generated::cs_require(cs_target)->cs_cfccd28f4d6b847a = cs_value; return cs_value; }());
}
for (std::int32_t v_k_4177 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_4177; auto cs_right = v_size; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_4177; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_4177 = cs_new; return cs_old; }())) {
std::int64_t v_num1_4215 = ([&]() -> std::int64_t { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_faab575a7db8f157(cs_arg0); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_k_4177; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_k_4177; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }())).length(); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = v_k_4177; auto cs_value = v_num1_4215;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::String>::make(v_size); pls::generated::cs_require(cs_target)->cs_d5b37f60e20607b6 = cs_value; return cs_value; }());
}
for (std::int32_t v_l_4471 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_4471; auto cs_right = v_size; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_4471; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_4471 = cs_new; return cs_old; }())) {
pls::cs::Array<std::uint8_t> v_numArray_4511 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; bool cs_arg1 = true; return cs_e0ccb4d263b167c0(cs_arg0,cs_arg1); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_l_4471; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_l_4471; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }())).length(); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = v_l_4471; auto cs_value = ([&]() -> pls::cs::String { pls::cs::Array<std::uint8_t> cs_arg0 = v_numArray_4511; return cs_5d8e9e8201c04369(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::uint8_t>>{}); return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Array<std::uint8_t>>::make(v_size); pls::generated::cs_require(cs_target)->cs_ba76615c0cb37783 = cs_value; return cs_value; }());
}
for (std::int32_t v_m_4799 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_4799; auto cs_right = v_size; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_4799; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_4799 = cs_new; return cs_old; }())) {
pls::cs::Array<std::uint8_t> v_numArray1_4839 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; bool cs_arg1 = true; return cs_e0ccb4d263b167c0(cs_arg0,cs_arg1); }());
if ((([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = v_m_4799; return (cs_left <= cs_right); }()) && ([&]() -> bool { auto cs_left = v_m_4799; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }())).length(); return (cs_left < cs_right); }()))) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = v_m_4799; auto cs_value = v_numArray1_4839;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}
}

// M:kairo.unity.util.Property.SetData(kairo.unity.util.Property[])
void cs_429d9dc2b2289494(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>> v_data) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>>{}; pls::generated::cs_require(cs_target)->cs_4fa0b3a7eea3a844 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_4fa0b3a7eea3a844 = cs_value; return cs_value; }());
for (std::int32_t v_i_2069 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2069; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2069; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2069 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }()); auto cs_index = v_i_2069; auto cs_value = ([&]() -> pls::cs::Ref<cs_8c57b816bbc8fd6e> { pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_arg0 = ([&]() { auto cs_array = v_data; auto cs_index = v_i_2069; return cs_array.get_Item(cs_index); }()); return cs_908c27d4c8b0dafd(cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}

// M:kairo.unity.util.Property.SetData(System.Byte[][])
void cs_960037fcb764cd47(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_data) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Array<std::uint8_t>>{}; pls::generated::cs_require(cs_target)->cs_ba76615c0cb37783 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::uint8_t>>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::Array<std::uint8_t>>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_ba76615c0cb37783 = cs_value; return cs_value; }());
for (std::int32_t v_i_1721 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1721; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1721; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1721 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = v_i_1721; auto cs_value = pls::cs::Array<std::uint8_t>::make((([&]() { auto cs_array = v_data; auto cs_index = v_i_1721; return cs_array.get_Item(cs_index); }())).length());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_array = v_data; auto cs_index = v_i_1721; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = v_i_1721; return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = v_i_1721; return cs_array.get_Item(cs_index); }())).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
}

// M:kairo.unity.util.Property.SetData(System.Int32[])
void cs_24b7db1f10b3afd6(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<std::int32_t> v_data) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::generated::cs_require(cs_target)->cs_72da38f2b646e254 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_72da38f2b646e254 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_data); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}

// M:kairo.unity.util.Property.SetData(System.Int64[])
void cs_2df7da8ec260c971(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<std::int64_t> v_data) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int64_t>{}; pls::generated::cs_require(cs_target)->cs_cfccd28f4d6b847a = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<std::int64_t>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int64_t>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_cfccd28f4d6b847a = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_data); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }())).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}

// M:kairo.unity.util.Property.SetData(System.String[])
void cs_72451e36c1ffa133(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<pls::cs::String> v_data) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::String>{}; pls::generated::cs_require(cs_target)->cs_d5b37f60e20607b6 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_data); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }())) {
return;
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<pls::cs::String>::make((v_data).length()); pls::generated::cs_require(cs_target)->cs_d5b37f60e20607b6 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_data); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }())).length(); cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}

// M:kairo.unity.util.Property.Size(System.Int32)
std::int32_t cs_ff354c4ba5c59c19(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,std::int32_t v_type) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>>{}); return cs_left != cs_right; }()))) {
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }())).length();
}
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }()))) {
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())).length();
}
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int64_t>{}); return cs_left != cs_right; }()))) {
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }())).length();
}
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left != cs_right; }()))) {
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }())).length();
}
if ((([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::uint8_t>>{}); return cs_left != cs_right; }()))) {
return (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }())).length();
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
}

// M:kairo.unity.util.Property.ToByteArray
pls::cs::Array<std::uint8_t> cs_944778f16504220d(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{try{
pls::cs::Ref<cs_fb60578b3098a284> v_byteArrayOutputStream_2803 = pls::cs::Ref<cs_fb60578b3098a284>{};
pls::cs::run_finally([&]() {{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_fb60578b3098a284> { return cs_10f86e0fa81e1b57(); }()); v_byteArrayOutputStream_2803 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_byteArrayOutputStream_2803; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_427aae041d90349e(cs_receiver,cs_arg0); }());
throw pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>{([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(v_byteArrayOutputStream_2803); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c875afd29ab2966c(cs_receiver); }())};
}}, [&]() {
([&]() -> void { auto cs_conditional = v_byteArrayOutputStream_2803; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }()); }());
([&]() { auto cs_value = pls::cs::Ref<cs_fb60578b3098a284>{}; v_byteArrayOutputStream_2803 = cs_value; return cs_value; }());
});
}catch(const pls::cs::ReturnFlow<pls::cs::Array<std::uint8_t>>& cs_return){return cs_return.value;}return pls::cs::invalid_return_flow<pls::cs::Array<std::uint8_t>>();}
}
}

// M:kairo.unity.util.Property.ToByteArray(java.io.OutputStream)
void cs_427aae041d90349e(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Ref<cs_ea324a0bbfe717fe> v_os) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
std::int32_t v_typeNum_3145 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9bed1c1a7cdf0fd7(cs_receiver); }());
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = v_typeNum_3145; cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
for (std::int32_t v_i_3218 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3218; auto cs_right = v_typeNum_3145; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3218; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3218 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = v_i_3218; cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); std::int32_t cs_arg0 = v_i_3218; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ff354c4ba5c59c19(cs_receiver,cs_arg0); }()); cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(cs_this); pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = v_i_3218; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_9c13460311212528(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}

// M:kairo.unity.util.Property.Write(java.io.OutputStream,System.Int32)
void cs_9c13460311212528(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int32_t v_type) { cs_init_8c57b816bbc8fd6e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_i_5132 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_5132; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_5132; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_5132 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_8c57b816bbc8fd6e>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4fa0b3a7eea3a844; }()); auto cs_index = v_i_5132; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_944778f16504220d(cs_receiver); }()); bool cs_arg2 = true; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_j_5349 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_5349; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_5349; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_5349 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = v_j_5349; return cs_array.get_Item(cs_index); }()); cs_b87bdf680540412f(cs_arg0,cs_arg1); }());
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int64_t>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_k_5549 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_5549; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_5549; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_5549 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int64_t cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cfccd28f4d6b847a; }()); auto cs_index = v_k_5549; return cs_array.get_Item(cs_index); }()); cs_6c6af002987d1423(cs_arg0,cs_arg1); }());
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_l_5750 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_l_5750; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_5750; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_5750 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = v_l_5750; return cs_array.get_Item(cs_index); }()); return cs_a8e45b955b78e04d(cs_arg0); }()); bool cs_arg2 = true; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
return;
}
if (([&]() -> bool { auto cs_left = v_type; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }())) {
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }())); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Array<std::uint8_t>>{}); return cs_left == cs_right; }())) {
return;
}
for (std::int32_t v_m_5964 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_m_5964; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_m_5964; auto cs_new = pls::cs::add_i32(cs_old,1); v_m_5964 = cs_new; return cs_old; }())) {
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ba76615c0cb37783; }()); auto cs_index = v_m_5964; return cs_array.get_Item(cs_index); }()); bool cs_arg2 = true; cs_850594681175a2d3(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}
}
}
