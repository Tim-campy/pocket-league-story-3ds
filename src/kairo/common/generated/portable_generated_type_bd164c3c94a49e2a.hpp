// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_bd164c3c94a49e2a : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_bd164c3c94a49e2a)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:kairo.unity.util.SecureNumber.ToString";if(slot=="GetHashCode")return "M:kairo.unity.util.SecureNumber.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.SecureNumber";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int64_t cs_7e5e9d5195f577e0{};
std::int64_t cs_83418f44729261df{};
std::int64_t cs_79a097054602f289{};
virtual pls::cs::String ToString();
virtual std::int32_t GetHashCode();
};

void cs_init_bd164c3c94a49e2a();

std::int64_t& cs_a55a986dcce0645f();

pls::cs::Ref<cs_a0cf9aef6a251bfd>& cs_1e58df81cbed8f35();

pls::cs::Ref<cs_bd164c3c94a49e2a> cs_a55d2b3f0d930c1e();

void cs_a55d2b3f0d930c1e_init(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this);

pls::cs::Ref<cs_bd164c3c94a49e2a> cs_6a8c2e7be2327b6f(std::int64_t v_value);

void cs_6a8c2e7be2327b6f_init(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this,std::int64_t v_value);

std::int64_t cs_b952a8b36c6ec76a(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this,std::int64_t v_value);

std::int32_t cs_bf31ab7151677a25(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this);

std::int64_t cs_229565c5769360dd(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this);

pls::cs::Ref<cs_bd164c3c94a49e2a> cs_322ad21e82d893d1(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this,std::int64_t v_value);

pls::cs::String cs_67d34e7fd071e188(pls::cs::Ref<cs_bd164c3c94a49e2a> cs_this);
}
