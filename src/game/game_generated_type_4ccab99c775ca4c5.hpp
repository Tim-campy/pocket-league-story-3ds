// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5ad2213598dfcd5d.hpp"
namespace pls::game {

struct cs_4ccab99c775ca4c5 : cs_5ad2213598dfcd5d {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_4ccab99c775ca4c5)||target==typeid(cs_5ad2213598dfcd5d)||cs_5ad2213598dfcd5d::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_5ad2213598dfcd5d::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.panel.TextBox";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_e7444216b8176cd4{};
std::int32_t cs_4761156567811a9b{};
std::int32_t cs_84f6d6bdc01421d0{};
std::int32_t cs_03f115a488ad951b{};
};

void cs_init_4ccab99c775ca4c5();

pls::cs::Ref<cs_4ccab99c775ca4c5> cs_86553cba2c357ac5(pls::cs::String v_text,std::int32_t v_columns,std::int32_t v_rows,std::int32_t v_mode);

void cs_86553cba2c357ac5_init(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this,pls::cs::String v_text,std::int32_t v_columns,std::int32_t v_rows,std::int32_t v_mode);

std::int32_t cs_a404deaded797ee7(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this);

pls::cs::String cs_b39060ea994b3795(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this);

std::int32_t cs_db57ee312d172295(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this);

void cs_a0d774261b152928(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this,std::int32_t v_mode);

void cs_60931973f98bba2d(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this,std::int32_t v_x,std::int32_t v_y);

void cs_f48ad653747329a7(pls::cs::Ref<cs_4ccab99c775ca4c5> cs_this,std::int32_t v_length);
}
