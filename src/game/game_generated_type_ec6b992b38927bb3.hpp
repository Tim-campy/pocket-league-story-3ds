// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_ec6b992b38927bb3 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_ec6b992b38927bb3)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ui.Pictograph";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_ce73d1503e9234b0{};
pls::cs::Ref<cs_9cade6927d6e0bf3> cs_619bf37d2a3827ee{};
std::int32_t cs_1ba2c52a921cb7ec{};
std::int32_t cs_df0d978c8b9bee8d{};
std::int32_t cs_ac10bd1fd4407364{};
std::int32_t cs_bbec3199a0864e22{};
std::int32_t cs_89c1dc1eeea9127f{};
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_eabfe8b32a83efad{};
};

void cs_init_ec6b992b38927bb3();

std::int32_t cs_421aa514c9c5d059(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this);

std::int32_t cs_f42f663f078ddc9a(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this);

pls::cs::Ref<cs_9cade6927d6e0bf3> cs_a7b9da8fd8e2e224(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this);

pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_f7a1a6d38de745a1(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this);

std::int32_t cs_4d3996d16d3c5e25(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this);

std::int32_t cs_9e317dd489a1ce8e(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this);

std::int32_t cs_18bd61ecb1024b36(pls::cs::Ref<cs_ec6b992b38927bb3> cs_this);
}
