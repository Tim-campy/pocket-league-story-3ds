// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_a465028bea3432a3 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_a465028bea3432a3)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:java.util.JCalendar.Equals(System.Object)";if(slot=="GetHashCode")return "M:java.util.JCalendar.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.util.JCalendar";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_66dbad5679f8ab87> cs_03197f755fcefa4b{};
pls::cs::Ref<cs_f59223d2c773f078> cs_99f3f6ad5516299e{};
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_a465028bea3432a3();

pls::cs::Ref<cs_a465028bea3432a3> cs_d176e2e695c74782();

void cs_d176e2e695c74782_init(pls::cs::Ref<cs_a465028bea3432a3> cs_this);

bool cs_9f8cfce81641ea7a(pls::cs::Ref<cs_a465028bea3432a3> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

std::int32_t cs_8d8ff05768cced2b(pls::cs::Ref<cs_a465028bea3432a3> cs_this,std::int32_t v_field);

std::int32_t cs_26468f4a2c9b3470(pls::cs::Ref<cs_a465028bea3432a3> cs_this);

pls::cs::Ref<cs_a465028bea3432a3> cs_23a91b30234d4879();

std::int64_t cs_1e354cc0ba1a9ce0(pls::cs::Ref<cs_a465028bea3432a3> cs_this);

void cs_e2c62bcb22f058c9(pls::cs::Ref<cs_a465028bea3432a3> cs_this,pls::cs::Ref<cs_66dbad5679f8ab87> v_date);

void cs_ab403c0b96bfdb59(pls::cs::Ref<cs_a465028bea3432a3> cs_this,std::int64_t v_millis);
}
