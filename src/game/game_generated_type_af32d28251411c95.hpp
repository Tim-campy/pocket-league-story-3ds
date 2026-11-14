// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
namespace pls::game {

struct cs_af32d28251411c95 : cs_9326c27a92cfea3a {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_af32d28251411c95)||target==typeid(cs_9326c27a92cfea3a)||cs_9326c27a92cfea3a::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_9b7c686ee42b269b")return "M:system.surface.GameBanner.IsGameSurface";if(slot=="cs_virtual_9f5fde625f99aa16")return "M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent)";if(slot=="cs_virtual_07a0bb2e4afc307c")return "M:system.surface.GameBanner.Draw(kairo.unity.ui.Graphics)";if(slot=="cs_virtual_acea3de130dbb7cd")return "M:system.surface.GameBanner.RotateClear";return cs_9326c27a92cfea3a::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.surface.GameBanner";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::kairo::IApplication> cs_449a72c816bc8b81{};
pls::cs::Ref<pls::kairo::Canvas> cs_7098c1837eb30f29{};
pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_f7b1fd704bdd2c8a{};
std::int32_t cs_a6d9872478ce823a{};
std::int64_t cs_d08ec7df0a5c34ee{};
std::int64_t cs_522c8c247df0b8bb{};
pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd> cs_790b10da4e9ff66f{};
bool cs_9104d50d4078e9c9{};
pls::cs::String cs_6c5020fb7ea0a4fb{};
virtual bool cs_virtual_9b7c686ee42b269b();
virtual void cs_virtual_9f5fde625f99aa16(pls::cs::Ref<cs_757516ce190cf813> v_evt);
virtual void cs_virtual_07a0bb2e4afc307c(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual void cs_virtual_acea3de130dbb7cd();
};

void cs_init_af32d28251411c95();

pls::cs::Array<pls::cs::String>& cs_3f7ae294e0213a46();

pls::cs::Ref<pls::kairo::Image>& cs_de24cebe7367b9a6();

pls::cs::Ref<cs_af32d28251411c95>& cs_49cf94cd1a414d1f();

pls::cs::Ref<cs_af32d28251411c95> cs_11534d928e8399e4();

void cs_11534d928e8399e4_init(pls::cs::Ref<cs_af32d28251411c95> cs_this);

void cs_9d38c5ec25140485(pls::cs::Ref<cs_af32d28251411c95> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Ref<cs_af32d28251411c95> cs_cb8c524e1144420f();

bool cs_ad96de4fc5954f60(pls::cs::Ref<cs_af32d28251411c95> cs_this);

void cs_e60d8493ba30ab4c(pls::cs::Ref<cs_af32d28251411c95> cs_this);

void cs_826469405b7c0a34(pls::cs::Ref<cs_af32d28251411c95> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_evt);

void cs_98117d8ad36b8cc1(pls::cs::Ref<cs_af32d28251411c95> cs_this);

void cs_2fc41a4e0b75b7e8(pls::cs::Ref<cs_af32d28251411c95> cs_this);

bool cs_b327d9f17774e75f(pls::cs::Ref<cs_af32d28251411c95> cs_this);
}
