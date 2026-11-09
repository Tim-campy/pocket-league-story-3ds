// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_a0cf9aef6a251bfd : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_a0cf9aef6a251bfd)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.util.JRandom";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::cs::Random> cs_51f4a63dee24d947{};
};

void cs_init_a0cf9aef6a251bfd();

pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_783c2dc4bd688739();

void cs_783c2dc4bd688739_init(pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_this);

pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_8d402734b0c5f510(std::int64_t v_seed);

void cs_8d402734b0c5f510_init(pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_this,std::int64_t v_seed);

std::int32_t cs_1811bb4f9e389c4b(pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_this);
}
