// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_f1dd8f2aa583774c : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_f1dd8f2aa583774c)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:kairo.unity.graphics.RectangleF.Equals(System.Object)";if(slot=="GetHashCode")return "M:kairo.unity.graphics.RectangleF.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.graphics.RectangleF";}
std::string managed_type_name()const override{return source_managed_type_name();}
float cs_8d4cf7374fb757c0{};
float cs_046578c7b896a653{};
float cs_06ef4703cb291a79{};
float cs_c8b58e9490836581{};
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_obj);
virtual std::int32_t GetHashCode();
};

void cs_init_f1dd8f2aa583774c();

pls::cs::Ref<cs_f1dd8f2aa583774c> cs_811ec9500127b493();

void cs_811ec9500127b493_init(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this);

bool cs_d7701387e8f8c44a(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

std::int32_t cs_140e188d0a82c8b7(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this);

float cs_43d7fa04d81da9ff(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this);

void cs_2c480e787ab8f385(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this,pls::cs::Ref<cs_f1dd8f2aa583774c> v_rc);

void cs_20c48a456cf53f6e(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this,float v_left,float v_top,float v_right,float v_bottom);

float cs_bacff363ff8ad693(pls::cs::Ref<cs_f1dd8f2aa583774c> cs_this);
}
