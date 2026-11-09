// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_3855bfc5096e5e16 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_3855bfc5096e5e16)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.form.MatchForm+UserRecord";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_ec233325df5f0df9{};
std::int32_t cs_9d8d435682e73399{};
std::int32_t cs_f38fc5acee52d7d7{};
std::int32_t cs_084006de2c02c6b9{};
pls::cs::String cs_40ce7d011479b207{};
std::int32_t cs_c545f936895733b9{};
std::int32_t cs_4a8e92eb36c3a7a0{};
std::int32_t cs_623bcebe2a0703ca{};
std::int64_t cs_78b7aac57b279e7b{};
pls::cs::String cs_b4b1d410d46a2933{};
pls::cs::String cs_b5ce9137008c708d{};
pls::cs::Ref<pls::kairo::Image> cs_ddce1bf3232442d7{};
};
}
