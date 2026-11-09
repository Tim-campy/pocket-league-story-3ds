// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_672083a5397f2913 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_672083a5397f2913)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ui.Seb+WorkStaticValue";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> cs_892fee32e48ccc2a{};
pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> cs_46be5d13750c48b7{};
pls::cs::Array<std::int32_t> cs_af8004110cb79aa4{};
pls::cs::Array<std::int16_t> cs_adf957d75456082a{};
pls::cs::Array<std::int32_t> cs_868c2bf8c835789a{};
pls::cs::Array<std::int32_t> cs_13421d3977fbd718{};
};

void cs_init_672083a5397f2913();

pls::cs::Ref<cs_672083a5397f2913> cs_0fb4b76eec65aa76();

void cs_0fb4b76eec65aa76_init(pls::cs::Ref<cs_672083a5397f2913> cs_this);
}
