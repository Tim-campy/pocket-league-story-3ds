// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_75beb3a42e16f9bd : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_75beb3a42e16f9bd)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "main.WebBox";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_75beb3a42e16f9bd();

pls::cs::Ref<cs_75beb3a42e16f9bd> cs_f09852df11161a25();

void cs_f09852df11161a25_init(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this);

pls::cs::Ref<cs_75beb3a42e16f9bd> cs_be5f253170ce03cf();

void cs_3b025ec44cfe2687(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this);

void cs_60f5bf4308fff459(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this,pls::cs::String v_url);

void cs_a222e1b8747d341d(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height);

void cs_f59a8fb575fe1f95(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height);

void cs_c43dd1186ee5b9ae(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this,bool v_visible);

bool cs_887b431bb9fdd04e(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this);
}
