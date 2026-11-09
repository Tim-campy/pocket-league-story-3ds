// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_4e9b1f0e9e3baf25 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_4e9b1f0e9e3baf25)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "surface.TouchEffectManager";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>> cs_7532de0b2467e888{};
pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_9b21b86f0d2914e0>>> cs_7cc420fdd246795c{};
};

void cs_init_4e9b1f0e9e3baf25();

pls::cs::Ref<cs_4e9b1f0e9e3baf25>& cs_f0c6ab846fbc94dd();

pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_58437f0f251471b8();

void cs_58437f0f251471b8_init(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this);

void cs_95d1f01cac020884(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9b21b86f0d2914e0> v_effect);

pls::cs::Ref<cs_9b21b86f0d2914e0> cs_2be5d3359f23ac72(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component,pls::cs::Ref<pls::cs::Object> v_arg);

pls::cs::Ref<cs_9b21b86f0d2914e0> cs_0f9186fdb6403602(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component);

void cs_8bb33e3a9f88735c(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this);

void cs_1fafefacc1319a3f(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_27b32c30d93592bb(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this);

pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_81e284f6e842da85();

void cs_e4ad1dff02a4bcf7(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_componentId);

void cs_a36c657b19114aa4(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int64_t v_componentKey);

void cs_d673003b2f08f29f(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9b21b86f0d2914e0> v_effect);

void cs_186b1c2eff63e43a(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,std::int32_t v_index);

void cs_bb7358e468d1296c(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,std::int32_t v_id);

void cs_71533940ab051be6(pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface);
}
