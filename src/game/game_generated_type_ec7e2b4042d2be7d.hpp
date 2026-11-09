// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_ec7e2b4042d2be7d : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_ec7e2b4042d2be7d)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:java.lang.JShort.ToString";if(slot=="Equals")return "M:java.lang.JShort.Equals(System.Object)";if(slot=="GetHashCode")return "M:java.lang.JShort.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.lang.JShort";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int16_t cs_5b36d01ce9e9d318{};
virtual pls::cs::String ToString();
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_ec7e2b4042d2be7d();

pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_99b0e4c5e8c0b01f(std::int16_t v_value);

void cs_99b0e4c5e8c0b01f_init(pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_this,std::int16_t v_value);

bool cs_38be50a793b5c23d(pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

std::int32_t cs_efd0cba326e67ad0(pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_this);

std::int16_t cs_f049644ef5a1dd50(pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_this);

pls::cs::String cs_178189360649c175(pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_this);
}
