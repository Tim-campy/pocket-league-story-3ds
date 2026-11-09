// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_a9f43a9b869eaae8 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_a9f43a9b869eaae8)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "game.Tenant";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_2ffa6f51468590ea> cs_9241144b136b6bac{};
pls::cs::Ref<cs_75707aa3f1629c85> cs_5d47d7fe69dce647{};
std::int32_t cs_78bf2be30869260e{};
pls::cs::Array<std::int32_t> cs_963adf0f32ce52c2{};
std::int32_t cs_f5352adc7f753fdb{};
std::int32_t cs_6b681a754478bc8e{};
std::int32_t cs_ee720cf027eee557{};
std::int32_t cs_e8a1acb2c4451860{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_0c94bef6c8d02cb9{};
pls::cs::Array<std::int32_t> cs_642e4640c8d33a09{};
std::int32_t cs_60833bf7b5843e1d{};
};

void cs_init_a9f43a9b869eaae8();

pls::cs::Array<std::int32_t>& cs_e17d446828c8347f();

pls::cs::Array<std::int32_t>& cs_46614273bfe385be();

pls::cs::Ref<cs_a9f43a9b869eaae8> cs_f36e81cdbda57fca(std::int32_t v_id);

void cs_f36e81cdbda57fca_init(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this,std::int32_t v_id);

void cs_8618630b6f15283e(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this,std::int32_t v_tenantDataId);

void cs_418a88972e6a4f3f(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this,std::int32_t v_state);

void cs_dd3cfe0dec17e612(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream,std::int32_t v_index);

void cs_8790a2fb33468687(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this);

void cs_9647c9ce0bea3e71(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this);

void cs_9e6795770fbb2cfe(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_0587f33d15abe081(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_ad5f25b7a2b53d65(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this,std::int32_t v_root);

void cs_f7ac446438853525(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this);

void cs_3a0f6398a75c8024(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_48c7c2f220f3d1a7(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this);

void cs_fcf523fb11895255(pls::cs::Ref<cs_a9f43a9b869eaae8> cs_this);
}
