// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_931908081ea62151 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_931908081ea62151)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_d1922bb59f7ed3bf")return "M:system.billing.ui.BillingItem.Init(System.Int32,System.Int32,System.String,System.String,System.String,System.Int32,System.String)";if(slot=="cs_virtual_eae24f37838268a3")return "M:system.billing.ui.BillingItem.Serialize(java.io.OutputStream)";if(slot=="cs_virtual_d1e3bc579a0b32eb")return "M:system.billing.ui.BillingItem.Deserialize(java.io.InputStream)";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.ui.BillingItem";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_bbde759dc3b81081{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_1947569898ac6eaf{};
pls::cs::String cs_e8fb66fe9cd2c6fa{};
std::int32_t cs_25ef515e28c2f1c3{};
pls::cs::String cs_18b42457ec8905ed{};
pls::cs::String cs_42e87afb27f20974{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_feae4d6092e68c7b{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_4ed7d84c1dce4799{};
bool cs_fd8816021d9a3386{};
pls::cs::Ref<cs_a42daea58251b089> cs_9e45a15cae334c64{};
bool cs_c121762e04d9e472{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_1bc5442ab3af463e{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_15351a5f19e951e7{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_5994cfa5fd307cd3{};
bool cs_ffd30ff59c7f2fa7{};
bool cs_041f0f865fe45ade{};
bool cs_cd268ae5907f6b9b{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_de33231c384fd439{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_689025ebd1ac5aa9{};
virtual void cs_virtual_d1922bb59f7ed3bf(std::int32_t v_id,std::int32_t v_flag,pls::cs::String v_productId,pls::cs::String v_name,pls::cs::String v_price,std::int32_t v_type,pls::cs::String v_explain);
virtual void cs_virtual_eae24f37838268a3(pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
virtual void cs_virtual_d1e3bc579a0b32eb(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);
};

void cs_init_931908081ea62151();

pls::cs::Ref<cs_931908081ea62151> cs_d9871f7e20992ddf();

void cs_d9871f7e20992ddf_init(pls::cs::Ref<cs_931908081ea62151> cs_this);

void cs_34602a275b94fc86(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_state);

bool cs_526dc02241eb9cf2(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_bit);

bool cs_fdc6ec3200ae7826(pls::cs::Ref<cs_931908081ea62151> cs_this);

bool cs_0becefd0b1d5e4cd(pls::cs::Ref<cs_931908081ea62151> cs_this);

void cs_d1e3bc579a0b32eb(pls::cs::Ref<cs_931908081ea62151> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

pls::cs::String cs_ef16a71fcdfd9b71(pls::cs::Ref<cs_931908081ea62151> cs_this);

std::int32_t cs_859e2922776eae2b(pls::cs::Ref<cs_931908081ea62151> cs_this);

std::int32_t cs_e33af97c9acf69d0(pls::cs::Ref<cs_931908081ea62151> cs_this);

pls::cs::String cs_d2976a74aad2ceb5(pls::cs::Ref<cs_931908081ea62151> cs_this);

pls::cs::String cs_61be1ca9ff48e486(pls::cs::String v_productID);

pls::cs::String cs_4c61a053b9c9bc8c(pls::cs::Ref<cs_931908081ea62151> cs_this);

pls::cs::String cs_dd481314101ac6b7(pls::cs::Ref<cs_931908081ea62151> cs_this);

pls::cs::String cs_f10af6d4bfbcc001(pls::cs::Ref<cs_931908081ea62151> cs_this);

std::int32_t cs_1d621b133c4f5a78(pls::cs::Ref<cs_931908081ea62151> cs_this);

pls::cs::String cs_ea3e9ac545c4eeff(pls::cs::Ref<cs_931908081ea62151> cs_this);

pls::cs::Ref<cs_a42daea58251b089> cs_02424c6036fcb3c9(pls::cs::Ref<cs_931908081ea62151> cs_this);

pls::cs::String cs_5455b0bdd2f57048(pls::cs::Ref<cs_931908081ea62151> cs_this);

std::int32_t cs_c94032c6dab33a1c(pls::cs::Ref<cs_931908081ea62151> cs_this);

std::int32_t cs_2311693c37cf23d0(pls::cs::Ref<cs_931908081ea62151> cs_this);

void cs_d1922bb59f7ed3bf(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_id,std::int32_t v_flag,pls::cs::String v_productId,pls::cs::String v_name,pls::cs::String v_price,std::int32_t v_type,pls::cs::String v_explain);

void cs_b3c80163ab846bc1(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_bit);

void cs_cea422709c0e739c(pls::cs::Ref<cs_931908081ea62151> cs_this,std::int32_t v_bit);

void cs_eae24f37838268a3(pls::cs::Ref<cs_931908081ea62151> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_86d43294891eab63(pls::cs::Ref<cs_931908081ea62151> cs_this,bool v_provision);

void cs_c1ebd2cf1827c239(pls::cs::Ref<cs_931908081ea62151> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase);

pls::cs::Ref<cs_931908081ea62151> cs_new_instance(pls::cs::Ref<cs_931908081ea62151>*);
}
