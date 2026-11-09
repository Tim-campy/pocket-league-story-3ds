// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_f59223d2c773f078 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_f59223d2c773f078)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.util.JTimeZone";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_05e71bcde75517db{};
std::int64_t cs_0350607f8ec43af6{};
pls::cs::Ref<pls::cs::TimeZoneInfo> cs_59055747f3e8f843{};
};

void cs_init_f59223d2c773f078();

pls::cs::Ref<cs_f59223d2c773f078> cs_bcb3a1c31d9b5d23(pls::cs::String v_id);

void cs_bcb3a1c31d9b5d23_init(pls::cs::Ref<cs_f59223d2c773f078> cs_this,pls::cs::String v_id);

pls::cs::Ref<cs_f59223d2c773f078> cs_0ccfddc5d383b7b6();

pls::cs::Ref<pls::cs::TimeZoneInfo> cs_48f0684537101017(pls::cs::Ref<cs_f59223d2c773f078> cs_this);
}
