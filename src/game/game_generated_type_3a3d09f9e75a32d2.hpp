// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_3a3d09f9e75a32d2 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_3a3d09f9e75a32d2)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.surface.TouchComponent";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_9326c27a92cfea3a> cs_0c00171d2e322a58{};
std::int32_t cs_0203776c95852fed{};
std::int32_t cs_830652d422733c85{};
std::int32_t cs_1ec368037b30316d{};
std::int32_t cs_0dcfa10d1674b264{};
std::int32_t cs_2445e8abe98d39d6{};
std::int32_t cs_bf6f23b78c4832ac{};
pls::cs::Ref<cs_6517d63c01870958> cs_1d1d519d3428e730{};
std::int32_t cs_8c5afd45472d0f2e{};
std::int32_t cs_9019c7ffefab6ad8{};
std::int32_t cs_91c876c3ea20d77d{};
bool cs_ec0be04bf6c6d5ad{};
std::int32_t cs_48f24d93a00e0ab4{};
};

void cs_init_3a3d09f9e75a32d2();

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_4766c761098d0094();

void cs_4766c761098d0094_init(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_beb950d6aeeb844b(pls::cs::Ref<cs_3a3d09f9e75a32d2> v_copy);

void cs_beb950d6aeeb844b_init(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_copy);

bool cs_458dbabeee49f986(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,std::int32_t v_bit);

std::int32_t cs_864b2cef1e2afbf2(std::int64_t v_key);

std::int64_t cs_994ec0fb562812be(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this);

std::int64_t cs_e0f91f73482fc418(std::int32_t v_id,std::int32_t v_value);

std::int32_t cs_c6d10dc3c886403b(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this);

void cs_0541e8aace93207c(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this);

void cs_3b828f63c1e0892e(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,std::int32_t v_x,std::int32_t v_y,std::int32_t v_frame);

void cs_82cc310ddbc4a2ea(pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_this,std::int32_t v_x,std::int32_t v_y);
}
