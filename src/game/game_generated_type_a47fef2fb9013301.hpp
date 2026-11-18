// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_15d0c6400449da70.hpp"
#include "game_generated_type_500cf5d961e2c3a4.hpp"
namespace pls::game {

struct cs_a47fef2fb9013301 : cs_15d0c6400449da70 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_a47fef2fb9013301)||target==typeid(cs_15d0c6400449da70)||cs_15d0c6400449da70::source_reference_assignable(target)||target==typeid(cs_500cf5d961e2c3a4);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_15d0c6400449da70::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.tapjoy.MyTapjoy";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_a47fef2fb9013301();

pls::cs::Ref<cs_a47fef2fb9013301> cs_a4ea8d8a8cfcb812();

void cs_a4ea8d8a8cfcb812_init(pls::cs::Ref<cs_a47fef2fb9013301> cs_this);

pls::cs::Ref<cs_a47fef2fb9013301> cs_684884eb9c671af7();
}
