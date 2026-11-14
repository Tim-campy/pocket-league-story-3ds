// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_d37bccc1c3814fc6 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_d37bccc1c3814fc6)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_24e6f1c38df06a63")return "M:kairo.unity.panel.FepPanel.ComponentAction(kairo.unity.panel.Component,System.Int32,System.Int32)";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.panel.FepPanel";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_4c00a0e0c6e6e2e5> cs_0e31a9f06d96ef28{};
pls::cs::Ref<cs_4ccab99c775ca4c5> cs_c7c45a9f1963614b{};
pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_271d18d953230ddd{};
pls::cs::Ref<cs_17bc7a5b28fcdc2a> cs_d79c777337d31004{};
std::int32_t cs_b8eaf4c46c566a9c{};
virtual void cs_virtual_24e6f1c38df06a63(pls::cs::Ref<cs_5ad2213598dfcd5d> v_c,std::int32_t v_type,std::int32_t v_param)=0;
};

void cs_init_d37bccc1c3814fc6();

pls::cs::Ref<cs_d37bccc1c3814fc6>& cs_fff40af3d4f61c60();

pls::cs::Ref<cs_d37bccc1c3814fc6> cs_429433773226956d();

void cs_429433773226956d_init(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this);

void cs_79684de6b60057f5(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,pls::cs::Ref<cs_5ad2213598dfcd5d> v_component);

pls::cs::Ref<cs_d37bccc1c3814fc6> cs_17329e66670990a9();

std::int32_t cs_0c30c87ccedfd300(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this);

std::int32_t cs_73f2425dc6862ef5(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,pls::cs::String v_s);

std::int32_t cs_ebcec0cd656cdeae(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this);

bool cs_ce1d94fc60447e39(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,char16_t v_c);

void cs_d97b566e589c7a21(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

void cs_c28309dd1ee0c605(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,pls::cs::Ref<pls::cs::Object> v_obj);

void cs_88ddecbed02f84a4(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this,std::int32_t v_key,pls::cs::String v_text);

void cs_d27ae7b1db5140b5(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this);

void cs_eb726d3fffc72be0(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this);

bool cs_c54513f5ba5b96e8(pls::cs::Ref<cs_d37bccc1c3814fc6> cs_this);
}
