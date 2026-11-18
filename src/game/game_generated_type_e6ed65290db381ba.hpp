// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_e6ed65290db381ba : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_e6ed65290db381ba)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.util.Json";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_e6ed65290db381ba();

pls::cs::Ref<cs_e6ed65290db381ba> cs_44e98bc97ba8204b();

void cs_44e98bc97ba8204b_init(pls::cs::Ref<cs_e6ed65290db381ba> cs_this);

pls::cs::String cs_29cfbbc6ef724690(pls::cs::String v_receipt,pls::cs::String v_productID,pls::cs::String v_iOSPurchaseTime);

pls::cs::String cs_49d01ebea931c030(pls::cs::Ref<cs_efeeb7640894c95e> v_p);

pls::cs::String cs_85a3de06f9737452(pls::cs::Ref<cs_efeeb7640894c95e> v_p);

pls::cs::String cs_d22851d911e39653(pls::cs::Array<pls::cs::String> v_records);

pls::cs::String cs_14929f68cda1ed89(pls::cs::String v_json,pls::cs::String v_key);

pls::cs::String cs_e40f466cab31d73b(pls::cs::String v_type,pls::cs::String v_value);
}
