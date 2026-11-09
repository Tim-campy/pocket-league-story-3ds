// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_feb7ae74aa59a27c : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_feb7ae74aa59a27c)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.ui.ApplyTask";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_931908081ea62151> cs_88b3d0bc7988e77a{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_48404c380c305c6b{};
bool cs_1f1b271de448ce48{};
bool cs_625190bccd0d0fa4{};
std::int32_t cs_9764b5b60381a8b6{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_ccc8fd33eda36b9e{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_7d0600ed44e25c28{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_924ce9254cf3db30{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_f369b68d3e3a2183{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_9fc1ef5d1c5e7bde{};
std::int32_t cs_cea09c6a91d7c902{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_26183201ac982bca{};
};

void cs_init_feb7ae74aa59a27c();

pls::cs::Ref<cs_feb7ae74aa59a27c> cs_6dc2344fc05b41a8();

void cs_6dc2344fc05b41a8_init(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this);

pls::cs::Ref<cs_feb7ae74aa59a27c> cs_be1899f5ff576e9b(pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type,bool v_notice);

void cs_be1899f5ff576e9b_init(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type,bool v_notice);

pls::cs::Ref<cs_feb7ae74aa59a27c> cs_c9ca6e1962944643(pls::cs::String v_gift);

void cs_c9ca6e1962944643_init(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::String v_gift);

void cs_af5dfade08dc055d(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

bool cs_6fab53a6524e00ce(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this);

bool cs_616854ea5e666f2f(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_obj);

void cs_845c3c904983102e(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,pls::cs::String v_gift,std::int32_t v_type,bool v_notice);

bool cs_d75c2e1895552ab6(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this);

bool cs_bd823728f9e6fafc(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this);

bool cs_bb022c37b48392ad(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this);

bool cs_d4b12a9d78baa416(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this);

void cs_7248c0ef7932886f(pls::cs::Ref<cs_feb7ae74aa59a27c> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
}
