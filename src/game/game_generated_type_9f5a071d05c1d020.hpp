// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_9f5a071d05c1d020 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_9f5a071d05c1d020)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:kairo.unity.graphics.Rectangle.Equals(System.Object)";if(slot=="GetHashCode")return "M:kairo.unity.graphics.Rectangle.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.graphics.Rectangle";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_0a97cf487265056a{};
std::int32_t cs_4710c88d5a9d40f6{};
std::int32_t cs_219b8c78c2281560{};
std::int32_t cs_b03e120c72310813{};
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_9f5a071d05c1d020();

bool cs_a3399ea8077672e2(pls::cs::Ref<cs_9f5a071d05c1d020> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

std::int32_t cs_cdd09ba02ba5e5aa(pls::cs::Ref<cs_9f5a071d05c1d020> cs_this);
}
