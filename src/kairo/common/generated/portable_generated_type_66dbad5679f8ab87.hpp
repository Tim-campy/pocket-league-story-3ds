// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_66dbad5679f8ab87 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_66dbad5679f8ab87)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:java.util.JDate.Equals(System.Object)";if(slot=="GetHashCode")return "M:java.util.JDate.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.util.JDate";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::DateTime cs_672aeddf6395a59c{};
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_66dbad5679f8ab87();

pls::cs::DateTime& cs_fa93015d6ad485b9();

pls::cs::Ref<cs_66dbad5679f8ab87> cs_f437b6bb4cf7b2a6();

void cs_f437b6bb4cf7b2a6_init(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this);

pls::cs::Ref<cs_66dbad5679f8ab87> cs_bbcadd583a6daacb(std::int64_t v_date);

void cs_bbcadd583a6daacb_init(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this,std::int64_t v_date);

bool cs_8682e14f5d0030c8(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

pls::cs::DateTime cs_d6f2aad1fde7cbfd(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this);

std::int32_t cs_bc050b58fd51f9b2(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this);

std::int64_t cs_f91743457814379a(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this);

void cs_d5b7c3d10f4ecec3(pls::cs::Ref<cs_66dbad5679f8ab87> cs_this,std::int64_t v_time);
}
