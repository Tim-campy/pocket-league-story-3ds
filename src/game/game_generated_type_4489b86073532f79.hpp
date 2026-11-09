// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_4489b86073532f79 : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_4489b86073532f79)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.TrainingData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_33497b4bf95ea17d{};
std::int32_t cs_fac79ffb07acaaa9{};
std::int32_t cs_615b022e6d4f3411{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_7ef89a4385d82e88{};
std::int32_t cs_06b59428a9b9dfa2{};
std::int32_t cs_6f534bf5e33e413b{};
pls::cs::String cs_e09416a0f920ad4d{};
std::int32_t cs_6b0563ed7fd65c34{};
bool cs_9b228d050db54a04{};
};

void cs_init_4489b86073532f79();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_5f399ea9f5649963();

std::int32_t& cs_5559eb56fc750675();

pls::cs::Array<std::int32_t>& cs_a6d46787f3454c35();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_7212096907b82ef3();

pls::cs::Array<std::int32_t>& cs_b9530d25c36c1b9e();

std::int32_t& cs_b0a9eba788d7c363();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_d8a965f8fa560531();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_011fe1a6332af6ab();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_9377a45754031ea8();

pls::cs::Ref<cs_4489b86073532f79> cs_ba0b2666b0bd54f7();

void cs_ba0b2666b0bd54f7_init(pls::cs::Ref<cs_4489b86073532f79> cs_this);

pls::cs::Ref<cs_4489b86073532f79> cs_07a2366478a6bbe4(pls::cs::String v_src);

void cs_07a2366478a6bbe4_init(pls::cs::Ref<cs_4489b86073532f79> cs_this,pls::cs::String v_src);

void cs_2fae0b3104f15757(pls::cs::Ref<cs_4489b86073532f79> cs_this,std::int32_t v_state);

void cs_509e7280c21e82b2(pls::cs::Ref<cs_4489b86073532f79> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

std::int32_t cs_e6dc988e67f249da(std::int32_t v_eva);

void cs_5c67c62b72274748(pls::cs::Ref<cs_4489b86073532f79> cs_this);

bool cs_0cbbaa6d32d59194();

bool cs_577663212c2a26b1(pls::cs::Ref<cs_4489b86073532f79> cs_this);

void cs_4c83acf089199fdb(pls::cs::Ref<cs_4489b86073532f79> cs_this,pls::cs::String v_src);

void cs_e9345014443797ef();

void cs_9b3e704be722e0bd(pls::cs::Ref<cs_4489b86073532f79> cs_this);

void cs_9a6a2d927c588c93();

void cs_4feb02c73e4cf20f(pls::cs::Ref<cs_4489b86073532f79> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
}
