// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_851a96be86c28dd2 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_851a96be86c28dd2)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.KairoText";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_851a96be86c28dd2();

bool& cs_66520490d812bf5b();

pls::cs::Array<pls::cs::Array<pls::cs::String>>& cs_99f86cd66d5ccef0();

pls::cs::Ref<cs_851a96be86c28dd2> cs_fb860c1d341fcefd();

void cs_fb860c1d341fcefd_init(pls::cs::Ref<cs_851a96be86c28dd2> cs_this);

pls::cs::String cs_62153521fbb1f7f8(pls::cs::String v_text,std::int32_t v_arg);

pls::cs::String cs_f026ffcc06857429(pls::cs::String v_text,pls::cs::String v_arg);

pls::cs::String cs_f54ac89fce23e89b(pls::cs::String v_text);
}
