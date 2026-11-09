// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_bd164c3c94a49e2a.hpp"
namespace pls::generated {

struct cs_bb652fbb61000386 : cs_bd164c3c94a49e2a {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_bb652fbb61000386)||target==typeid(cs_bd164c3c94a49e2a)||cs_bd164c3c94a49e2a::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:kairo.unity.util.SecureString.ToString";if(slot=="Equals")return "M:kairo.unity.util.SecureString.Equals(System.Object)";if(slot=="GetHashCode")return "M:kairo.unity.util.SecureString.GetHashCode";return cs_bd164c3c94a49e2a::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.SecureString";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_3a4ab2d19bbedee8{};
pls::cs::Array<char16_t> cs_23af4da78e1ad81f{};
pls::cs::Array<char16_t> cs_3af0cc4416bce0e0{};
std::int32_t cs_fe44ec569b4e9ab5{};
virtual pls::cs::String ToString();
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_bb652fbb61000386();

pls::cs::Ref<cs_bb652fbb61000386> cs_54c6ff780bd91d97(pls::cs::Ref<cs_bb652fbb61000386> v_src);

void cs_54c6ff780bd91d97_init(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::Ref<cs_bb652fbb61000386> v_src);

pls::cs::Ref<cs_bb652fbb61000386> cs_ede7ead54c734d4c(pls::cs::String v_value);

void cs_ede7ead54c734d4c_init(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_value);

void cs_d3ffac04a047de61(pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>> v_srcArray,std::int32_t v_srcIndex,pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>> v_dstArray,std::int32_t v_dstIndex,std::int32_t v_length);

bool cs_8ebcc441a59bda9a(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_suffix);

bool cs_77a6541b4422f624(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::Ref<cs_bb652fbb61000386> v_anObject);

bool cs_145a142f07908920(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

bool cs_6dfda3f794a136b1(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_anObject);

char16_t cs_abc0bea20e9163ed(pls::cs::Ref<cs_bb652fbb61000386> cs_this,char16_t v_value);

void cs_f91a0cd22df6e95f(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::Array<char16_t> v_from,pls::cs::Array<char16_t> v_to);

pls::cs::String cs_6dd0b8d6220bd2b3(pls::cs::Ref<cs_bb652fbb61000386> cs_this);

pls::cs::Array<std::uint8_t> cs_14b03fdc4ae8f84c(pls::cs::Ref<cs_bb652fbb61000386> cs_this);

std::int32_t cs_0a77e2bc4ebc201e(pls::cs::Ref<cs_bb652fbb61000386> cs_this);

std::int32_t cs_9f636226b66780dc(pls::cs::Ref<cs_bb652fbb61000386> cs_this,std::int32_t v_ch);

std::int32_t cs_4b9659319b202661(pls::cs::Ref<cs_bb652fbb61000386> cs_this);

pls::cs::Ref<cs_bb652fbb61000386> cs_ac62509f5a77f0ac(pls::cs::Ref<cs_bb652fbb61000386> v_z,pls::cs::String v_w);

pls::cs::String cs_f1e3fe1dceee44d7(pls::cs::Ref<cs_bb652fbb61000386> v_s);

pls::cs::Ref<cs_bb652fbb61000386> cs_7047562b1e051211(pls::cs::String v_s);

pls::cs::Ref<cs_bb652fbb61000386> cs_fc11351e7d5d875d(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_value);

bool cs_eaf1659172f4a34c(pls::cs::Ref<cs_bb652fbb61000386> cs_this,pls::cs::String v_prefix);

pls::cs::String cs_f93784de5b5888a8(pls::cs::Ref<cs_bb652fbb61000386> cs_this);

pls::cs::String cs_1192c1f2378de3bb(pls::cs::Ref<cs_bb652fbb61000386> v_str);

pls::cs::Ref<cs_bb652fbb61000386> cs_376859ff51e2fc37(pls::cs::String v_str);
}
