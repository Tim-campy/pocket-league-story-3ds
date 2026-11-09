// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_80d72c9d6f5bfcfe : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_80d72c9d6f5bfcfe)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.EventData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_1fa16b1439554e13{};
std::int32_t cs_a874245b40e2af4b{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_3fa79636aa02329a{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_10e47a57597e3769{};
};

void cs_init_80d72c9d6f5bfcfe();

pls::cs::Array<pls::cs::String>& cs_a6acb1dbcdc3e821();

pls::cs::Ref<cs_80d72c9d6f5bfcfe> cs_e4bc487b2460253c();

void cs_e4bc487b2460253c_init(pls::cs::Ref<cs_80d72c9d6f5bfcfe> cs_this);

pls::cs::Ref<cs_80d72c9d6f5bfcfe> cs_142d416c03b7e0fe(pls::cs::String v_src);

void cs_142d416c03b7e0fe_init(pls::cs::Ref<cs_80d72c9d6f5bfcfe> cs_this,pls::cs::String v_src);

bool cs_55b54760dec5b18e(pls::cs::Array<pls::cs::Array<std::int32_t>> v_script,std::int32_t v_scrId);

void cs_8995abc98652335f(pls::cs::Ref<cs_80d72c9d6f5bfcfe> cs_this,pls::cs::String v_src);

void cs_d260a0b06ef6b3db(pls::cs::String v_src);

pls::cs::Array<pls::cs::Array<std::int32_t>> cs_8cff19a3e40ed58e(pls::cs::String v_source);

std::int32_t cs_329e10f2fd727358(pls::cs::Array<pls::cs::Ref<cs_80d72c9d6f5bfcfe>> v_events,std::int32_t v_id);
}
