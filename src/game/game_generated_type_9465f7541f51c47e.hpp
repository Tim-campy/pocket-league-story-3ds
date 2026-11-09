// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_9465f7541f51c47e : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_9465f7541f51c47e)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.friend.ui.Friend";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_8c0cc3bea061f0cd{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_aaefb5b9fae0397e{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_617d9d7e65ae6487{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_2b38757bf00583cf{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_c9cc587d986ccc18{};
};

void cs_init_9465f7541f51c47e();

pls::cs::Ref<cs_9465f7541f51c47e> cs_2ce578f5724575d0();

void cs_2ce578f5724575d0_init(pls::cs::Ref<cs_9465f7541f51c47e> cs_this);

pls::cs::Ref<cs_9465f7541f51c47e> cs_0f10e92aa7924479(pls::cs::String v_friendId,pls::cs::String v_name,std::int32_t v_state,std::int32_t v_minute,std::int32_t v_updated);

void cs_0f10e92aa7924479_init(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::String v_friendId,pls::cs::String v_name,std::int32_t v_state,std::int32_t v_minute,std::int32_t v_updated);

void cs_ab2f2c9f1fce2e02(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_440d2f888a8888df(pls::cs::Ref<cs_9465f7541f51c47e> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
}
