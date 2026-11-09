// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_cd85e7c847ae4598 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_cd85e7c847ae4598)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.billing.ui.PurchaseRecord.ToString";if(slot=="GetHashCode")return "M:system.billing.ui.PurchaseRecord.GetHashCode";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.ui.PurchaseRecord";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::String cs_08330cbc7084da66{};
pls::cs::String cs_84fc06b76c121945{};
pls::cs::Array<std::int32_t> cs_6decd46ca925e986{};
std::int32_t cs_a614ab58777a40a1{};
bool cs_06683c451efa1973{};
virtual pls::cs::String ToString();
virtual std::int32_t GetHashCode();
};

void cs_init_cd85e7c847ae4598();

pls::cs::Ref<cs_cd85e7c847ae4598> cs_77c1e405abfca250();

void cs_77c1e405abfca250_init(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this);

pls::cs::Ref<cs_cd85e7c847ae4598> cs_f82de0fa574740fa(pls::cs::String v_productId,pls::cs::String v_orderId);

void cs_f82de0fa574740fa_init(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,pls::cs::String v_productId,pls::cs::String v_orderId);

void cs_c1bab19e556927b9(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,std::int32_t v_state,pls::cs::Ref<cs_a42daea58251b089> v_purchase);

void cs_9df67280b402af5e(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

std::int32_t cs_a2ebcb9a739953bd(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this);

pls::cs::String cs_357cc1e956f91fea(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this);

pls::cs::String cs_9bd032e02c3f6f2a(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this);

std::int32_t cs_1c95224fba0dddd6(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this);

pls::cs::String cs_f917ec3f98c48427(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,std::int32_t v_state);

pls::cs::String cs_049aa2baa5783de5(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,std::int32_t v_state);

void cs_d407a71ebcad197a(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

pls::cs::String cs_ad7fb776daed3dde(pls::cs::Ref<cs_cd85e7c847ae4598> cs_this);
}
