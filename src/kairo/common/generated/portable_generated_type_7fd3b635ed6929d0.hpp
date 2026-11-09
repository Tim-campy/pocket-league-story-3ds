// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_bd164c3c94a49e2a.hpp"
namespace pls::generated {

struct cs_7fd3b635ed6929d0 : cs_bd164c3c94a49e2a {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_7fd3b635ed6929d0)||target==typeid(cs_bd164c3c94a49e2a)||cs_bd164c3c94a49e2a::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:kairo.unity.util.SecureInt.Equals(System.Object)";if(slot=="GetHashCode")return "M:kairo.unity.util.SecureInt.GetHashCode";return cs_bd164c3c94a49e2a::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.SecureInt";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_7fd3b635ed6929d0();

pls::cs::Ref<cs_7fd3b635ed6929d0> cs_26fc017eba499603();

void cs_26fc017eba499603_init(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this);

pls::cs::Ref<cs_7fd3b635ed6929d0> cs_112e7bd8029af781(pls::cs::Ref<cs_7fd3b635ed6929d0> v_src);

void cs_112e7bd8029af781_init(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this,pls::cs::Ref<cs_7fd3b635ed6929d0> v_src);

pls::cs::Ref<cs_7fd3b635ed6929d0> cs_891849d99054b970(std::int32_t v_value);

void cs_891849d99054b970_init(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this,std::int32_t v_value);

pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>> cs_5d4aff714c1aa3f1(std::int32_t v_n);

bool cs_286beec6ddeed9d7(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

std::int32_t cs_59fd81cb225539c6(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this);

std::int32_t cs_f1365e1209ff8d97(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this);

std::int32_t cs_d940a557e2a81257(pls::cs::Ref<cs_7fd3b635ed6929d0> v_s);

pls::cs::Ref<cs_7fd3b635ed6929d0> cs_9aee68341f2c87b1(std::int32_t v_s);

pls::cs::Ref<cs_7fd3b635ed6929d0> cs_f863ec11d99c7a7d(pls::cs::Ref<cs_7fd3b635ed6929d0> cs_this,std::int32_t v_value);
}
