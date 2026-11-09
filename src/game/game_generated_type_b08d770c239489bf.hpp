// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_b08d770c239489bf : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_b08d770c239489bf)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.BaseData";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_18df8a841fecdd70{};
std::int32_t cs_77b7447583c10f78{};
};

void cs_init_b08d770c239489bf();

pls::cs::Ref<cs_b08d770c239489bf> cs_0c4b303cde7d7a27();

void cs_0c4b303cde7d7a27_init(pls::cs::Ref<cs_b08d770c239489bf> cs_this);

bool cs_c0d738dcc0a5bec7(pls::cs::Ref<cs_b08d770c239489bf> cs_this,std::int32_t v_bit);
}
