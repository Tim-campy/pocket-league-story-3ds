// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_51fd12cb14e568f9 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_51fd12cb14e568f9)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.util.Inventory";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_b169f360ee9f1108>> cs_707c7a72abb82ec1{};
pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_a42daea58251b089>> cs_3bdfea24b8fa4dd4{};
};

void cs_init_51fd12cb14e568f9();

pls::cs::Ref<cs_51fd12cb14e568f9> cs_711d8c323ca1c807();

void cs_711d8c323ca1c807_init(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this);

void cs_83123998486200aa(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_p);

void cs_8655b0acd5de2cab(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::Ref<cs_b169f360ee9f1108> v_d);

void cs_dbd8e782b8e382eb(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku);

pls::cs::Ref<cs_a42daea58251b089> cs_a38e4a52b899543e(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku);

pls::cs::Ref<cs_b169f360ee9f1108> cs_dd2b0d12cb37519c(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku);

bool cs_490b3ef94c6ce903(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku);

bool cs_8976c462d0b51676(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku);
}
