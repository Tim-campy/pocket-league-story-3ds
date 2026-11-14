// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_c10f171a3a4c8973 : pls::cs::ExceptionObject {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_c10f171a3a4c8973)||target==typeid(pls::cs::ExceptionObject)||pls::cs::ExceptionObject::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::ExceptionObject::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.payment.IllegalPurchaseException";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_c10f171a3a4c8973();

pls::cs::Ref<cs_c10f171a3a4c8973> cs_4541939614682a87();

void cs_4541939614682a87_init(pls::cs::Ref<cs_c10f171a3a4c8973> cs_this);
}
