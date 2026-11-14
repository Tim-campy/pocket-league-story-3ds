// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_fd683372658feff4 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_fd683372658feff4)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.lineup.ui.LineupData";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_468796fb9827f5e6{};
pls::cs::String cs_7b5ebddf22953059{};
pls::cs::String cs_7033e8b866a8dda2{};
pls::cs::String cs_2f097db5779cd511{};
std::int32_t cs_8f7f3ca9485bb4f8{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_de1509021f22ef65{};
pls::cs::Ref<pls::kairo::Image> cs_de2327fcc8b4451b{};
};

void cs_init_fd683372658feff4();

pls::cs::Ref<cs_fd683372658feff4> cs_2d5c5c827d878352();

void cs_2d5c5c827d878352_init(pls::cs::Ref<cs_fd683372658feff4> cs_this);

pls::cs::String cs_0ee8c20531783d1b(pls::cs::Ref<cs_fd683372658feff4> cs_this);

pls::cs::String cs_84f73b20077879d7(pls::cs::Ref<cs_fd683372658feff4> cs_this);

pls::cs::Ref<pls::kairo::Image> cs_aeee5b62db0f8f41(pls::cs::Ref<cs_fd683372658feff4> cs_this);

std::int32_t cs_fa298d824c1e3b8d(pls::cs::Ref<cs_fd683372658feff4> cs_this);

std::int32_t cs_e9b3c6f1fee9d739(pls::cs::Ref<cs_fd683372658feff4> cs_this);

pls::cs::String cs_93bf009f197e5d4a(pls::cs::Ref<cs_fd683372658feff4> cs_this);

void cs_fec409ca1beaaa06(pls::cs::Ref<cs_fd683372658feff4> cs_this,std::int32_t v_gameId,pls::cs::String v_src);
}
