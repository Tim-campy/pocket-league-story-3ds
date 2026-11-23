// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "UnityEngine.Purchasing.IStoreListener.hpp"
#include "game_generated_forward.hpp"
#include "system.billing.ui.BillingManager.hpp"
namespace pls::game {
namespace system::billing {

struct MyBilling : ui::BillingManager {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(BillingManager,
    {"M:system.billing.ui.BillingManager.ExecuteApplyTask(system.billing.ui.ApplyTask)", "M:system.billing.MyBilling.ExecuteApplyTask(system.billing.ui.ApplyTask)"},
    {"M:system.billing.ui.BillingManager.Provisioning(system.billing.ui.ApplyTask)", "M:system.billing.MyBilling.Provisioning(system.billing.ui.ApplyTask)"},
    {"M:system.billing.ui.BillingManager.Cancel(system.billing.ui.ApplyTask)", "M:system.billing.MyBilling.Cancel(system.billing.ui.ApplyTask)"},
    {"M:system.billing.ui.BillingManager.CheckPlayingGame", "M:system.billing.MyBilling.CheckPlayingGame"});
PLS_MANAGED_CLASS("system.billing.MyBilling", MyBilling, BillingManager, IStoreListener)
bool ExecuteApplyTask(pls::cs::Ref<ui::ApplyTask> task) override;
void Provisioning(pls::cs::Ref<ui::ApplyTask> task) override;
void Cancel(pls::cs::Ref<ui::ApplyTask> task) override;
bool CheckPlayingGame() override;
static constexpr pls::cs::Int32 ITEM_AD_OFF = 0;static constexpr pls::cs::Int32 TICKET_MAX = 999;static constexpr pls::cs::Int32 SHOP_OWNER = 4;
static void ensure_initialized();

static pls::cs::Ref<main::AppData>& apdat_();

static pls::cs::Ref<pls::kairo::IApplication>& app_();

static pls::cs::Ref<pls::game::form::FormManager>& fm_();

static void create_init(pls::cs::Ref<MyBilling> self);

static pls::cs::Ref<MyBilling> create();

pls::cs::Array<pls::cs::Array<pls::cs::String>> GetBillingTable();

static pls::cs::Ref<MyBilling> GetInstance();

void Init();
};
} // namespace system::billing
}
