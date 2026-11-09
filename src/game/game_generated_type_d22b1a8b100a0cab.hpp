// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
namespace pls::game {

struct cs_d22b1a8b100a0cab : cs_b08d770c239489bf {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_d22b1a8b100a0cab)||target==typeid(cs_b08d770c239489bf)||cs_b08d770c239489bf::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return cs_b08d770c239489bf::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "data.StadiumData";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_65da99c9869d3471{};
pls::cs::String cs_c230b5b8d577333e{};
std::int32_t cs_58dffb600270e76f{};
std::int32_t cs_51227c768469b61d{};
};

void cs_init_d22b1a8b100a0cab();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_b055e8ddf387ad3d();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_46c7acf5933b0c38();

pls::cs::Ref<cs_d22b1a8b100a0cab> cs_0e93480fefec290e();

void cs_0e93480fefec290e_init(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this);

pls::cs::Ref<cs_d22b1a8b100a0cab> cs_e583025a7e423ba2(pls::cs::String v_src);

void cs_e583025a7e423ba2_init(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this,pls::cs::String v_src);

void cs_efc96767f554942e(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_93d29dd1f2b7d527(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this,pls::cs::String v_src);

void cs_cfe75fe0fd4737f7(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this);

void cs_65e6e8cf5fc4699e(pls::cs::Ref<cs_d22b1a8b100a0cab> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
}
