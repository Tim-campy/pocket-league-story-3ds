// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_456d3d004decc356 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_456d3d004decc356)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "game.DelayEvent";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_c91865d620b9553c{};
std::int32_t cs_9530a87060fa0532{};
std::int32_t cs_338cf0660cb20211{};
std::int32_t cs_3bb9a4cf3da2e687{};
std::int32_t cs_ec6bc173286b73e8{};
pls::cs::String cs_eca097466f8cf377{};
pls::cs::Array<std::int32_t> cs_31f2cf075b1406f9{};
};

void cs_init_456d3d004decc356();

pls::cs::Ref<cs_456d3d004decc356> cs_42bd1e40ac82632c();

void cs_42bd1e40ac82632c_init(pls::cs::Ref<cs_456d3d004decc356> cs_this);

pls::cs::Ref<cs_456d3d004decc356> cs_da24e0fc27feed21(std::int32_t v_delayId,std::int32_t v_line,std::int32_t v_wait,std::int32_t v_hour,std::int32_t v_rideChara,pls::cs::String v_args,pls::cs::Array<std::int32_t> v_argi);

void cs_da24e0fc27feed21_init(pls::cs::Ref<cs_456d3d004decc356> cs_this,std::int32_t v_delayId,std::int32_t v_line,std::int32_t v_wait,std::int32_t v_hour,std::int32_t v_rideChara,pls::cs::String v_args,pls::cs::Array<std::int32_t> v_argi);

void cs_9415d955c0e9b9aa(pls::cs::Ref<cs_456d3d004decc356> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_4178ca56a2eb6f02(pls::cs::Ref<cs_456d3d004decc356> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
}
