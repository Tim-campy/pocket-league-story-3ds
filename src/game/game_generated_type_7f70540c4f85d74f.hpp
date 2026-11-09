// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_7f70540c4f85d74f : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_7f70540c4f85d74f)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:kairo.unity.system.KairoBase.AccessCount.ToString";if(slot=="GetHashCode")return "M:kairo.unity.system.KairoBase.AccessCount.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.KairoBase+AccessCount";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_59ca359e3d3d712d{};
std::int64_t cs_0d03485f6b953700{};
virtual pls::cs::String ToString();
virtual std::int32_t GetHashCode();
};

void cs_init_7f70540c4f85d74f();

pls::cs::Ref<cs_7f70540c4f85d74f> cs_b544d4afdbad19e4(pls::cs::String v_name,std::int64_t v_value);

void cs_b544d4afdbad19e4_init(pls::cs::Ref<cs_7f70540c4f85d74f> cs_this,pls::cs::String v_name,std::int64_t v_value);

std::int32_t cs_6853b87e6d3191df(pls::cs::Ref<cs_7f70540c4f85d74f> cs_this);

pls::cs::String cs_9eab9ded735366ec(pls::cs::Ref<cs_7f70540c4f85d74f> cs_this);
}
