// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_10edc785c24978fc.hpp"
#include "game_generated_type_fa01867c9c048464.hpp"
namespace pls::game {

struct cs_6ee7d14059be1acf : cs_fa01867c9c048464 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_6ee7d14059be1acf)||target==typeid(cs_fa01867c9c048464)||cs_fa01867c9c048464::source_reference_assignable(target)||target==typeid(cs_10edc785c24978fc);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_d3abbeacfed9ec8c")return "M:system.billing.ui.BillingManager.Init(System.String[][],System.String,System.String[])";if(slot=="cs_virtual_6a336d8e7a818aa0")return "M:system.billing.ui.BillingManager.Init``1(System.String[][],System.String,System.String[])";if(slot=="cs_virtual_f9baf743614aca01")return "M:system.billing.ui.BillingManager.Load(System.Byte[])";if(slot=="cs_virtual_9ea20ca469cb3e8b")return "M:system.billing.ui.BillingManager.Load``1(System.Byte[])";if(slot=="cs_virtual_0c7e726b5f1c3198")return "M:system.billing.ui.BillingManager.Write";if(slot=="cs_virtual_83421b64347901dd")return "M:system.billing.ui.BillingManager.NewGame(System.Boolean)";if(slot=="cs_virtual_52c48544109f9d2d")return "M:system.billing.ui.BillingManager.LoadGame(System.Byte[])";if(slot=="cs_virtual_9d8c67a5fdbb3c7d")return "M:system.billing.ui.BillingManager.WriteGame";if(slot=="cs_virtual_4ebd3696a44e4f6b")return "M:system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)";if(slot=="cs_virtual_0f79ffed5440eb44")return "M:system.billing.ui.BillingManager.GetItems";if(slot=="cs_virtual_39912b67b6e00cf6")return "M:system.billing.ui.BillingManager.ExecuteApplyTask(system.billing.ui.ApplyTask)";if(slot=="cs_virtual_219ebd8a0b10d8e7")return "M:system.billing.ui.BillingManager.Provisioning(system.billing.ui.ApplyTask)";if(slot=="cs_virtual_5255d4c2789eac48")return "M:system.billing.ui.BillingManager.Cancel(system.billing.ui.ApplyTask)";if(slot=="cs_virtual_6e47643190d08935")return "M:system.billing.ui.BillingManager.CheckPlayingGame";return cs_fa01867c9c048464::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.billing.ui.BillingManager";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_931908081ea62151> cs_94d79db9e67a6f5b{};
bool cs_d02d5ba1d437b82b{};
pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> cs_65e865503b8550da{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_83cb2d63bd6e7794{};
pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>>> cs_b5206026f8dde3f8{};
bool cs_336cd83725fe8f95{};
bool cs_ed52bb2c3b30e495{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_e5da0dc1a74717a1{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_a15dd0109485d6ae{};
bool cs_9e06fd4216962cc2{};
bool cs_0ad5c065f86902f7{};
pls::cs::Ref<pls::cs::Object> cs_712a37a136a3e228{};
pls::cs::Ref<pls::cs::Object> cs_7fef88b0a5547c46{};
virtual void cs_virtual_d3abbeacfed9ec8c(pls::cs::Array<pls::cs::Array<pls::cs::String>> v_data,pls::cs::String v_paymentProduct,pls::cs::Array<pls::cs::String> v_subscription);
virtual void cs_virtual_6a336d8e7a818aa0(pls::cs::Array<pls::cs::Array<pls::cs::String>> v_data,pls::cs::String v_paymentProduct,pls::cs::Array<pls::cs::String> v_subscription);
virtual void cs_virtual_f9baf743614aca01(pls::cs::Array<std::uint8_t> v_data);
virtual void cs_virtual_9ea20ca469cb3e8b(pls::cs::Array<std::uint8_t> v_data);
virtual pls::cs::Array<std::uint8_t> cs_virtual_0c7e726b5f1c3198();
virtual void cs_virtual_83421b64347901dd(bool v_take);
virtual void cs_virtual_52c48544109f9d2d(pls::cs::Array<std::uint8_t> v_data);
virtual pls::cs::Array<std::uint8_t> cs_virtual_9d8c67a5fdbb3c7d();
virtual void cs_virtual_4ebd3696a44e4f6b(bool v_detail);
virtual pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> cs_virtual_0f79ffed5440eb44();
virtual bool cs_virtual_39912b67b6e00cf6(pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);
virtual void cs_virtual_219ebd8a0b10d8e7(pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);
virtual void cs_virtual_5255d4c2789eac48(pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);
virtual bool cs_virtual_6e47643190d08935();
};

void cs_init_6ee7d14059be1acf();

pls::cs::Ref<pls::generated::cs_bb652fbb61000386>& cs_4ba6b876c86cbecd();

pls::cs::Ref<cs_6ee7d14059be1acf>& cs_33c160ec018e286a();

pls::cs::Ref<cs_6ee7d14059be1acf> cs_fb6a0b22d395f57f();

void cs_fb6a0b22d395f57f_init(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

bool cs_0fa7ac35adeb6144(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);

void cs_0c4347bd860d2f70(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::String v_productId,std::int32_t v_state,pls::cs::Ref<cs_a42daea58251b089> v_purchase);

void cs_5255d4c2789eac48(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);

bool cs_54b9118ddf48a0fd(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

bool cs_6e47643190d08935(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

bool cs_7f5d52ad795f2739(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type);

void cs_2fc4f3c7c0abe4f8(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_aa921fb14f112d41(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

void cs_ce96308860792979(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

bool cs_7063f796d848203b(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item);

bool cs_39912b67b6e00cf6(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);

void cs_fd462548e4e21992(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_606db2035b9b12ba(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,bool v_game);

pls::cs::Ref<cs_6ee7d14059be1acf> cs_f8eb247e2413618b();

pls::cs::Ref<cs_931908081ea62151> cs_eeb39a8b5e25b72e(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,std::int32_t v_id);

pls::cs::Ref<cs_931908081ea62151> cs_825e5e2cb902b87f(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::String v_productId);

pls::cs::Array<pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>>> cs_5e95ac080daeec46(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_308ebf95da3707b4(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,bool v_game);

pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> cs_a54604197e27ba6e(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_26628cac4dee43ab(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> cs_5ec95513c85ebc20(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

bool cs_f3ece5a1d40dcbef(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item);

void cs_52c48544109f9d2d(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Array<std::uint8_t> v_data);

void cs_83421b64347901dd(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,bool v_take);

void cs_219ebd8a0b10d8e7(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);

void cs_624524290cf44192(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item);

bool cs_4351661fbbfaa7c4(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,bool v_notice);

bool cs_10cbcc43cf78e9d4(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);

bool cs_18a3aa1d1ce4817d(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type);

std::int32_t cs_d0a172330455208b(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_feb7ae74aa59a27c> v_task);

std::int32_t cs_2e3d6ed8fe7f9f6e(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,pls::cs::Ref<cs_931908081ea62151> v_item,std::int32_t v_type);

void cs_1bfb44d4e16bae10(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,bool v_notice);

void cs_4ebd3696a44e4f6b(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this,bool v_detail);

pls::cs::Array<std::uint8_t> cs_0c7e726b5f1c3198(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);

pls::cs::Array<std::uint8_t> cs_9d8c67a5fdbb3c7d(pls::cs::Ref<cs_6ee7d14059be1acf> cs_this);
}
