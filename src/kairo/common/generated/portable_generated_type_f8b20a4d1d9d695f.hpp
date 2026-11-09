// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_51222df74ac70bab.hpp"
#include "portable_generated_type_a0dc211eb3feb56d.hpp"
namespace pls::generated {

struct cs_f8b20a4d1d9d695f : cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>> {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_f8b20a4d1d9d695f)||target==typeid(cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>)||cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>::source_reference_assignable(target)||target==typeid(cs_a0dc211eb3feb56d);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:java.util.Vector.Equals(System.Object)";return cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.util.Vector";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
};

void cs_init_f8b20a4d1d9d695f();

pls::cs::Ref<cs_f8b20a4d1d9d695f> cs_b5d75502f0a9aa7e();

void cs_b5d75502f0a9aa7e_init(pls::cs::Ref<cs_f8b20a4d1d9d695f> cs_this);

bool cs_673ba145a871a846(pls::cs::Ref<cs_f8b20a4d1d9d695f> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);
}
