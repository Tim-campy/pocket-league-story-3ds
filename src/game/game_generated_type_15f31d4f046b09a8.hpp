// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_15f31d4f046b09a8 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_15f31d4f046b09a8)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Equals")return "M:system.billing.ui.Receipt.Equals(System.Object)";if(slot=="GetHashCode")return "M:system.billing.ui.Receipt.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.ui.Receipt";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_faf2053d989419ff{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_519713e3b629623c{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_b713199635bb1058{};
std::int32_t cs_59d0e1ae203981e5{};
bool cs_d6ae59bf543478aa{};
pls::cs::Ref<pls::generated::cs_924db3d974bae2af> cs_6541be3d4c391c46{};
std::int32_t cs_10794726de973b56{};
virtual bool Equals(pls::cs::Ref<pls::cs::Object> const& v_o);
virtual std::int32_t GetHashCode();
};

void cs_init_15f31d4f046b09a8();

pls::cs::Array<std::uint8_t>& cs_0ab9b09ba01c1501();

pls::cs::Ref<cs_15f31d4f046b09a8> cs_9c5286d2f0a31d6e();

void cs_9c5286d2f0a31d6e_init(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

pls::cs::Ref<cs_15f31d4f046b09a8> cs_086496be2a9fbcc0(pls::cs::Ref<cs_efeeb7640894c95e> v_p,pls::cs::String v_receipt);

void cs_086496be2a9fbcc0_init(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<cs_efeeb7640894c95e> v_p,pls::cs::String v_receipt);

void cs_dd397613cdc03211(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

void cs_caaec83cd1923ea7(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<cs_15f31d4f046b09a8> v_r);

void cs_82519cef4853816c(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

void cs_c3cd5afb73d8cc54(pls::cs::String v_token);

bool cs_f86548878598ca1e(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<pls::cs::Object> v_o);

std::int32_t cs_d860de92f53afc6c(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

pls::cs::String cs_f1b1730a73f8deed(pls::cs::Ref<cs_efeeb7640894c95e> v_p);

pls::cs::String cs_9f1744905f403ec8(std::int32_t v_type);

pls::cs::String cs_f228db45ed90d23f(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

pls::cs::String cs_3401b30298b4eb96(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::String v_tag);

pls::cs::String cs_e8fea88a1ccd74d6(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

pls::cs::String cs_69ca60609ca07561(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

std::int32_t cs_b16954dcc18f83e4(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

pls::cs::Ref<cs_a42daea58251b089> cs_9766d64ee1bba541(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

pls::cs::String cs_76d45a6ec5e37940(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

bool cs_f1c17b9cbfeb6ace(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

bool cs_b38ac404eaec0f92(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this);

pls::cs::Ref<cs_15f31d4f046b09a8> cs_fb33e792a02d6245(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

pls::cs::Array<std::uint8_t> cs_942b8b55f6cc61e8(pls::cs::String v_src);

pls::cs::String cs_0e8660e32789ac5b(pls::cs::String v_src);

pls::cs::String cs_74c5b1f087d67cd2(pls::cs::Array<std::uint8_t> v_src);

pls::cs::String cs_09009d99b892ed75(pls::cs::String v_src);

void cs_aafe7f3e366450c4(pls::cs::Ref<cs_15f31d4f046b09a8> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream);
}
