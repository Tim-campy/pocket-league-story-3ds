// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_8c57b816bbc8fd6e : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_8c57b816bbc8fd6e)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.Property";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>> cs_4fa0b3a7eea3a844{};
pls::cs::Array<std::int32_t> cs_72da38f2b646e254{};
pls::cs::Array<std::int64_t> cs_cfccd28f4d6b847a{};
pls::cs::Array<pls::cs::String> cs_d5b37f60e20607b6{};
pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_ba76615c0cb37783{};
};

void cs_init_8c57b816bbc8fd6e();

pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_7a9ac0812c6bac9b();

void cs_7a9ac0812c6bac9b_init(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this);

pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_908c27d4c8b0dafd(pls::cs::Ref<cs_8c57b816bbc8fd6e> v_property);

void cs_908c27d4c8b0dafd_init(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Ref<cs_8c57b816bbc8fd6e> v_property);

pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_e34104df98d3719c(pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>> v_pros,pls::cs::Array<std::int32_t> v_ints,pls::cs::Array<std::int64_t> v_lngs,pls::cs::Array<pls::cs::String> v_strs,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_bins);

void cs_e34104df98d3719c_init(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>> v_pros,pls::cs::Array<std::int32_t> v_ints,pls::cs::Array<std::int64_t> v_lngs,pls::cs::Array<pls::cs::String> v_strs,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_bins);

std::int32_t cs_9bed1c1a7cdf0fd7(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this);

void cs_35c274628bb2d40e(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream);

void cs_abffc02b85346a7d(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<std::uint8_t> v_data);

void cs_0f2f500f52fc5e3a(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream,std::int32_t v_type,std::int32_t v_size,pls::cs::Array<std::uint8_t> v_ids);

void cs_429d9dc2b2289494(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<pls::cs::Ref<cs_8c57b816bbc8fd6e>> v_data);

void cs_960037fcb764cd47(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_data);

void cs_24b7db1f10b3afd6(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<std::int32_t> v_data);

void cs_2df7da8ec260c971(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<std::int64_t> v_data);

void cs_72451e36c1ffa133(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Array<pls::cs::String> v_data);

std::int32_t cs_ff354c4ba5c59c19(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,std::int32_t v_type);

pls::cs::Array<std::uint8_t> cs_944778f16504220d(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this);

void cs_427aae041d90349e(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Ref<cs_ea324a0bbfe717fe> v_os);

void cs_9c13460311212528(pls::cs::Ref<cs_8c57b816bbc8fd6e> cs_this,pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int32_t v_type);
}
