// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_bd164c3c94a49e2a.hpp"
namespace pls::generated {

struct cs_924db3d974bae2af : cs_bd164c3c94a49e2a {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_924db3d974bae2af)||target==typeid(cs_bd164c3c94a49e2a)||cs_bd164c3c94a49e2a::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:kairo.unity.util.SecureLong.Equals(System.Object)";if(slot=="GetHashCode")return "M:kairo.unity.util.SecureLong.GetHashCode";return cs_bd164c3c94a49e2a::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.SecureLong";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_924db3d974bae2af();

pls::cs::Ref<cs_924db3d974bae2af> cs_74758feb8d7ec688();

void cs_74758feb8d7ec688_init(pls::cs::Ref<cs_924db3d974bae2af> cs_this);

pls::cs::Ref<cs_924db3d974bae2af> cs_8b6e6e5ae1d900bd(std::int64_t v_value);

void cs_8b6e6e5ae1d900bd_init(pls::cs::Ref<cs_924db3d974bae2af> cs_this,std::int64_t v_value);

pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>> cs_6f0c7cad5125d866(std::int32_t v_n);

bool cs_682c2d787a0c6c7f(pls::cs::Ref<cs_924db3d974bae2af> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

std::int64_t cs_b3c751b9e91311fd(pls::cs::Ref<cs_924db3d974bae2af> cs_this);

std::int32_t cs_f8a6bf38dd75ef58(pls::cs::Ref<cs_924db3d974bae2af> cs_this);

std::int64_t cs_b0c8f3d2fe942bf1(pls::cs::Ref<cs_924db3d974bae2af> v_s);

pls::cs::Ref<cs_924db3d974bae2af> cs_867c5dd84cdc90b1(std::int64_t v_s);

pls::cs::Ref<cs_924db3d974bae2af> cs_1658bba34982ce50(pls::cs::Ref<cs_924db3d974bae2af> cs_this,std::int64_t v_value);
}
