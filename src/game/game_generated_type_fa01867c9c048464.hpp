// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_10edc785c24978fc.hpp"
namespace pls::game {

struct cs_fa01867c9c048464 : pls::cs::Object, cs_10edc785c24978fc {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_fa01867c9c048464)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target)||target==typeid(cs_10edc785c24978fc);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_d3abbeacfed9ec8c")return "M:system.billing.ui.StoreBase.Init(System.String[][],System.String,System.String[])";if(slot=="cs_virtual_0f79ffed5440eb44")return "M:system.billing.ui.StoreBase.GetItems";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.ui.StoreBase";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_1fc419a676702252> cs_e92a9e2b4e70e8aa{};
pls::cs::Ref<cs_764e04aa5493d588> cs_02fc10f7a3f6285a{};
pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>> cs_7051bba65972fd27{};
std::int32_t cs_4826f2c7dff1307e{};
bool cs_6769193235ceb92f{};
virtual void cs_virtual_d3abbeacfed9ec8c(pls::cs::Array<pls::cs::Array<pls::cs::String>> v_data,pls::cs::String v_paymentProduct,pls::cs::Array<pls::cs::String> v_subscription);
virtual pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> cs_virtual_0f79ffed5440eb44()=0;
};

void cs_init_fa01867c9c048464();

pls::cs::Ref<cs_925b3cf054e42b78>& cs_d59ecb529d3c681c();

pls::cs::String& cs_e9c57a349e970656();

pls::cs::Ref<cs_fa01867c9c048464> cs_e3269488b9d47182();

void cs_e3269488b9d47182_init(pls::cs::Ref<cs_fa01867c9c048464> cs_this);

bool cs_dabb624ad9818668(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String& v_message);

bool cs_fbe88b493ebd35c6(pls::cs::Ref<cs_fa01867c9c048464> cs_this);

pls::cs::Ref<cs_a42daea58251b089> cs_9e9180120f7b6e3a(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase);

bool cs_0c2ef3da56499922(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase);

pls::cs::List<pls::cs::Ref<cs_15f31d4f046b09a8>> cs_880efa9ef8cb946d(pls::cs::Ref<cs_fa01867c9c048464> cs_this);

std::int32_t cs_a27b4a646a4f6288(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_productID);

std::int32_t cs_4e9bffcbfff0634b();

pls::cs::String cs_e8c6c1f01dcb9d31(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_json,pls::cs::String v_orderId);

bool cs_e407b08e50b1dd2c(pls::cs::Ref<cs_fa01867c9c048464> cs_this);

void cs_d3abbeacfed9ec8c(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Array<pls::cs::Array<pls::cs::String>> v_data,pls::cs::String v_paymentProduct,pls::cs::Array<pls::cs::String> v_subscription);

void cs_d5d483312d700179(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Array<pls::cs::Array<pls::cs::String>> v_data,pls::cs::String v_paymentProduct,pls::cs::Array<pls::cs::String> v_subscriptions);

bool cs_53ba148e029fe26b(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_purchase);

bool cs_4e71f3b66d66c79d(pls::cs::Ref<cs_fa01867c9c048464> cs_this);

pls::cs::Ref<cs_a42daea58251b089> cs_87e0519a7f6ab5fc(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_productId);

void cs_6fb7b668d4a70a0f(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_a616eb249ab21a38(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,pls::cs::Ref<cs_a42daea58251b089> v_purchase);

void cs_bd86849fa66817e5(pls::cs::Ref<cs_fa01867c9c048464> cs_this);

pls::cs::Ref<cs_51fd12cb14e568f9> cs_3d1833af62584b62(pls::cs::Ref<cs_fa01867c9c048464> cs_this,bool v_querySkuDetails,pls::cs::List<pls::cs::String> v_moreItemSkus,pls::cs::List<pls::cs::String> v_moreSubsSkus);

std::int32_t cs_59826646bf6d2707(pls::cs::Ref<cs_fa01867c9c048464> cs_this);

void cs_3784aca2bceecd36(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_stream);

pls::cs::Ref<cs_15f31d4f046b09a8> cs_9004764138986aa8(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::String v_json);

void cs_bf2b5138011e18f8(std::int32_t v_request);

pls::cs::Ref<cs_a42daea58251b089> cs_84f1e1cb3af4ded2(pls::cs::Ref<cs_fa01867c9c048464> cs_this,pls::cs::Ref<cs_15f31d4f046b09a8> v_receipt);

void cs_cbdd7a7dbb437bf3(pls::cs::Ref<cs_fa01867c9c048464> cs_this);
}
