// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_6803fd77f880b974 : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_6803fd77f880b974)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.SupervisorData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_36c6c105d3dcd2fb{};
pls::cs::String cs_328f612edb7663ed{};
pls::cs::String cs_13cf2db040de0658{};
std::int32_t cs_af7fda819ca3f44a{};
std::int32_t cs_f3990c0bf5327cf4{};
std::int32_t cs_4d52502083006db9{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_0b5fc70967b60f23{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_4c4f69f04b000ad0{};
std::int32_t cs_67db55faaa06700c{};
pls::cs::Array<std::int32_t> cs_b5312c1472ba36cb{};
std::int32_t cs_55e42816a0845a0c{};
std::int32_t cs_8ae5dfbc551a5cc1{};
std::int32_t cs_1c45dcf2a7e4ca49{};
std::int32_t cs_47099e1322bc71fb{};
pls::cs::Array<std::int32_t> cs_5d29f5a9131d52b7{};
pls::cs::Array<std::int32_t> cs_ff65a733703f405d{};
std::int32_t cs_f931f9254fb3ae26{};
};

void cs_init_6803fd77f880b974();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_ed1dc2e91da9d38f();

pls::cs::Array<pls::cs::String>& cs_10f1559f411c769a();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_79751f98a22fb1e2();

pls::cs::Ref<cs_6803fd77f880b974> cs_f2509d262d9e1e5a();

void cs_f2509d262d9e1e5a_init(pls::cs::Ref<cs_6803fd77f880b974> cs_this);

pls::cs::Ref<cs_6803fd77f880b974> cs_2d324a9760e19f9c(pls::cs::String v_src);

void cs_2d324a9760e19f9c_init(pls::cs::Ref<cs_6803fd77f880b974> cs_this,pls::cs::String v_src);

void cs_578ec07433e9ad4f(pls::cs::Ref<cs_6803fd77f880b974> cs_this,std::int32_t v_state);

void cs_a7e6c50a0edaac1d(std::int32_t v_svisorid,bool v_isContinue,bool v_formationAddPopUp);

void cs_262b508bafb7c194(pls::cs::Ref<cs_6803fd77f880b974> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

std::int32_t cs_28a821093e8a1a82(pls::cs::Ref<cs_6803fd77f880b974> cs_this);

std::int32_t cs_7a94080b5e29661b(pls::cs::Ref<cs_6803fd77f880b974> cs_this);

void cs_b430b8fe11cec357(pls::cs::Ref<cs_6803fd77f880b974> cs_this);

void cs_572f8cdf8c5d662a(pls::cs::Ref<cs_6803fd77f880b974> cs_this,pls::cs::String v_src);

bool cs_e7dbf2d73faf844e(pls::cs::Ref<cs_6803fd77f880b974> cs_this);

void cs_ed09d8c6b4b7e562(pls::cs::Ref<cs_6803fd77f880b974> cs_this);

void cs_d5cb91a571e7b87c(pls::cs::Ref<cs_6803fd77f880b974> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_346daee582b6d5d3(pls::cs::Ref<cs_6803fd77f880b974> cs_this,std::int32_t v_lv);

void cs_21dd9263e8c09863(pls::cs::Ref<cs_6803fd77f880b974> cs_this,std::int32_t v_gameResultEva,pls::cs::Ref<cs_8f8054b388e3f93e> v_p_data);
}
