// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_86b804989f2a95bb.hpp"
namespace pls::game {

struct cs_0f74b892eb1cdde4 : cs_86b804989f2a95bb {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_0f74b892eb1cdde4)||target==typeid(cs_86b804989f2a95bb)||cs_86b804989f2a95bb::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_da04bc9883e88cc6")return "M:game.TBall.GetToGoalLineTime(game.Player)";return cs_86b804989f2a95bb::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "game.TBall";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_f1c0c27200e2218f{};
pls::cs::Ref<cs_4feff672b530e53a> cs_4089f400a6f819d5{};
std::int32_t cs_f931d68cae2f1f95{};
std::int32_t cs_8b709ea6377cb8b0{};
pls::cs::Ref<cs_63cc285eb997c6a4> cs_c363acf930474970{};
pls::cs::Ref<cs_63cc285eb997c6a4> cs_e60414f1d28e766b{};
pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_409f13300b9da5ca{};
pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_7caf816b84606c2b{};
virtual std::int32_t cs_virtual_da04bc9883e88cc6(pls::cs::Ref<cs_2ef6641b828546ac> v_player);
};

void cs_init_0f74b892eb1cdde4();

pls::cs::Array<std::int32_t>& cs_864b76c890b6c7c8();

pls::cs::Array<std::int32_t>& cs_6ad190858ba4c086();

pls::cs::Ref<cs_0f74b892eb1cdde4> cs_cc3d747d1ea58bfa(std::int32_t v_tId);

void cs_cc3d747d1ea58bfa_init(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,std::int32_t v_tId);

bool cs_ac9904952eb214d4(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,pls::cs::Ref<cs_63cc285eb997c6a4> v_tPlayer);

void cs_435c949c04c2e357(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_a1f11591a9dfbb0a(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this);

void cs_465acf71fbd941ce(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

std::int32_t cs_3aa033ec579e8873(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,pls::cs::Ref<cs_2ef6641b828546ac> v_player);

void cs_361886891363d109(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,pls::cs::Ref<cs_4feff672b530e53a> v_tGroupArea);

void cs_0c4f4f4bac387a24(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,pls::cs::Ref<cs_63cc285eb997c6a4> v_player);

void cs_33c30cd2ea71c16b(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,pls::cs::Ref<cs_63cc285eb997c6a4> v_player);

void cs_f5e36a40004f8b89(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_72d5e9eb7d8f13ba(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,pls::cs::Ref<cs_63cc285eb997c6a4> v_player,std::int32_t v_pass_mode,bool v_jamp);

void cs_2254a517c74d4df7(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this,pls::cs::Ref<cs_2ef6641b828546ac> v_player,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_goal_center);

void cs_67ed5411221af0fb(pls::cs::Ref<cs_0f74b892eb1cdde4> cs_this);
}
