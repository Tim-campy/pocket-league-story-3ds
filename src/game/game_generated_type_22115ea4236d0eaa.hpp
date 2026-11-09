// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_22115ea4236d0eaa : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_22115ea4236d0eaa)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.friend.ui.FriendPlayTimeData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_2940d449a6dc2c58{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_db96c721c151249c{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_0ba613afa6875a18{};
};

void cs_init_22115ea4236d0eaa();

pls::cs::Ref<cs_22115ea4236d0eaa> cs_624a0425464d274a();

void cs_624a0425464d274a_init(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this);

pls::cs::Ref<cs_22115ea4236d0eaa> cs_d95d2ae3639f5d06(pls::cs::String v_friendId,std::int32_t v_minute,std::int32_t v_state);

void cs_d95d2ae3639f5d06_init(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::String v_friendId,std::int32_t v_minute,std::int32_t v_state);

void cs_9b78afe85b06708d(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_2044571a728aaa71(pls::cs::Ref<cs_22115ea4236d0eaa> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
}
