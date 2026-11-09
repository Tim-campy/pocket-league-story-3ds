// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_bfe2a01361163e7a : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_bfe2a01361163e7a)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.JarInflater+FileInfo";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_638e5d654c077b59{};
std::int32_t cs_6ec368f1de920152{};
std::int32_t cs_45a972d6cedcd20a{};
std::uint8_t cs_83fbaf866783c8ce{};
};

void cs_init_bfe2a01361163e7a();

pls::cs::Ref<cs_bfe2a01361163e7a> cs_b704c7698ceaf8f6();

void cs_b704c7698ceaf8f6_init(pls::cs::Ref<cs_bfe2a01361163e7a> cs_this);
}
