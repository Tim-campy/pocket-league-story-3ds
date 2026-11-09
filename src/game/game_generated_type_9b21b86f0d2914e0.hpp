// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_9b21b86f0d2914e0 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_9b21b86f0d2914e0)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "surface.TouchEffect";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_9326c27a92cfea3a> cs_d5047348b0759e4e{};
float cs_104e5f6a41bc31a2{};
float cs_4f23ff2646eb23aa{};
float cs_287f9edf5a6fc99a{};
float cs_85d4a94d45c5d889{};
float cs_b766893b7bb434f0{};
float cs_95b7593873c71ecc{};
std::int64_t cs_b9b3024a4bbf4537{};
std::int64_t cs_4f16085a44631993{};
std::int32_t cs_579f8976161c3a90{};
pls::cs::Ref<pls::cs::Object> cs_46524ed757f195c3{};
std::int64_t cs_f9be90c450193aae{};
};

void cs_init_9b21b86f0d2914e0();

pls::cs::Ref<cs_9b21b86f0d2914e0> cs_2a1179e902640c2a();

void cs_2a1179e902640c2a_init(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this);

void cs_fb03a4148f6cc986(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_2b7db73fe142457a(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this);

void cs_5e534500fa7e2dfa(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component,pls::cs::Ref<pls::cs::Object> v_arg);

void cs_e8150d06f5e6c2cc(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component);
}
