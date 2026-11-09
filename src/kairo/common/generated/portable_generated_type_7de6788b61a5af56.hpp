// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_7de6788b61a5af56 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_7de6788b61a5af56)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:java.lang.JInteger.ToString";if(slot=="Equals")return "M:java.lang.JInteger.Equals(System.Object)";if(slot=="GetHashCode")return "M:java.lang.JInteger.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.lang.JInteger";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_159529d7b41663da{};
virtual pls::cs::String ToString();
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_7de6788b61a5af56();

pls::cs::Ref<cs_7de6788b61a5af56> cs_6ebf505bf86af890(std::int32_t v_value);

void cs_6ebf505bf86af890_init(pls::cs::Ref<cs_7de6788b61a5af56> cs_this,std::int32_t v_value);

bool cs_ebd756e2a16440e5(pls::cs::Ref<cs_7de6788b61a5af56> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

std::int32_t cs_16762e09ddce2966(pls::cs::Ref<cs_7de6788b61a5af56> cs_this);

std::int32_t cs_b1fe1ec0a394cd44(pls::cs::Ref<cs_7de6788b61a5af56> cs_this);

std::int32_t cs_9c23d908aa6dc449(pls::cs::Ref<cs_7de6788b61a5af56> v_s);

std::int32_t cs_2dbfed27c63e8b3d(pls::cs::String v_s);

pls::cs::String cs_044a765a6989d563(pls::cs::Ref<cs_7de6788b61a5af56> cs_this);

pls::cs::Ref<cs_7de6788b61a5af56> cs_908687d09e1c5f78(pls::cs::String v_s);
}
