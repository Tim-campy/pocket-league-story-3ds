// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_1ab688350081022a.hpp"
namespace pls::game {

struct cs_e00832a42e12ec3b : cs_1ab688350081022a {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_e00832a42e12ec3b)||target==typeid(cs_1ab688350081022a)||cs_1ab688350081022a::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_1ab688350081022a::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.lineup.MyLineup";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_e00832a42e12ec3b();

pls::cs::Ref<cs_e00832a42e12ec3b> cs_1da4a6941cbe6a25();

void cs_1da4a6941cbe6a25_init(pls::cs::Ref<cs_e00832a42e12ec3b> cs_this);

pls::cs::Ref<cs_e00832a42e12ec3b> cs_9cfcc2afb24b5e63();

void cs_3a26b20c9b7c14af(pls::cs::Ref<cs_e00832a42e12ec3b> cs_this);
}
