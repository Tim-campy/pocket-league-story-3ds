// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_6517d63c01870958 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_6517d63c01870958)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.surface.TouchOption";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_e751c7c04a2d6904{};
float cs_0ae43c28ac9b9a7a{};
float cs_9581916698464411{};
pls::cs::Array<std::int32_t> cs_bc3ed6e7ac2c682a{};
pls::cs::Array<std::int32_t> cs_b5f7390e18875f50{};
pls::cs::Array<std::int32_t> cs_907bdb29f23c20f6{};
std::int32_t cs_f1365c978e9c4cae{};
pls::cs::Array<std::int32_t> cs_58d9bdebab2ca99e{};
pls::cs::Array<std::int32_t> cs_4be9171376316f3b{};
pls::cs::Array<std::int32_t> cs_c71933e9bca11daa{};
bool cs_a404a90eff0aeb13{};
std::int32_t cs_4d04dab5735542a9{};
};

void cs_init_6517d63c01870958();

pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>& cs_6cb933168d711678();

pls::cs::Ref<cs_6517d63c01870958> cs_8d483d962b875686();

void cs_8d483d962b875686_init(pls::cs::Ref<cs_6517d63c01870958> cs_this);

pls::cs::Ref<cs_6517d63c01870958> cs_a791f152e6170c69(pls::cs::Ref<cs_6517d63c01870958> v_copy);

void cs_a791f152e6170c69_init(pls::cs::Ref<cs_6517d63c01870958> cs_this,pls::cs::Ref<cs_6517d63c01870958> v_copy);

pls::cs::Ref<cs_6517d63c01870958> cs_4b4ad350b14ef767();

pls::cs::Ref<cs_6517d63c01870958> cs_93c9e5f80bde9aac(std::int32_t v_flag);

pls::cs::Ref<cs_6517d63c01870958> cs_7ff4169f9e726138(pls::cs::Array<std::int32_t> v_args);

pls::cs::Ref<cs_6517d63c01870958> cs_5620e4317abf431d(std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_xcells,std::int32_t v_ycells,std::int32_t v_flag);

pls::cs::Ref<cs_6517d63c01870958> cs_6e486801eeb083a6(std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_xcells,std::int32_t v_ycells);

pls::cs::Ref<cs_6517d63c01870958> cs_b9a90c33bc9435da(std::int32_t v_gridX,std::int32_t v_gridY,std::int32_t v_flag);

pls::cs::Ref<cs_6517d63c01870958> cs_7d332928f9262a01(std::int32_t v_gridX,std::int32_t v_gridY);

pls::cs::Ref<cs_6517d63c01870958> cs_6f3af12bb51c6a25(pls::cs::Ref<cs_6517d63c01870958> cs_this,std::int32_t v_value);

pls::cs::Ref<cs_6517d63c01870958> cs_f8d0ca2ad798adff(pls::cs::Ref<cs_6517d63c01870958> cs_this,std::int32_t v_flag);

void cs_aeddbf9e363c37fe(pls::cs::Ref<cs_6517d63c01870958> cs_this);

pls::cs::Ref<cs_6517d63c01870958> cs_de6cd246e5da5ce1(pls::cs::Ref<cs_6517d63c01870958> cs_this,std::int32_t v_left,std::int32_t v_right,std::int32_t v_top,std::int32_t v_bottom);
}
