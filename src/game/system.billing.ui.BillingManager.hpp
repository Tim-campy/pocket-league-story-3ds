// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "UnityEngine.Purchasing.IStoreListener.hpp"
#include "game_generated_forward.hpp"
#include "system.billing.ui.StoreBase.hpp"

namespace pls::game {
namespace system::billing::ui {

struct BillingManager : StoreBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(
        StoreBase,
        {"M:system.billing.ui.StoreBase.Init(System.String[][],System.String,System.String[])",
         "M:system.billing.ui.BillingManager.Init(System.String[][],System.String,System.String[])"},
        {"M:system.billing.ui.BillingManager.Load(System.Byte[])",
         "M:system.billing.ui.BillingManager.Load(System.Byte[])"},
        {"M:system.billing.ui.BillingManager.Write", "M:system.billing.ui.BillingManager.Write"},
        {"M:system.billing.ui.BillingManager.NewGame(System.Boolean)",
         "M:system.billing.ui.BillingManager.NewGame(System.Boolean)"},
        {"M:system.billing.ui.BillingManager.LoadGame(System.Byte[])",
         "M:system.billing.ui.BillingManager.LoadGame(System.Byte[])"},
        {"M:system.billing.ui.BillingManager.WriteGame", "M:system.billing.ui.BillingManager.WriteGame"},
        {"M:system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)",
         "M:system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)"},
        {"M:system.billing.ui.StoreBase.GetItems", "M:system.billing.ui.BillingManager.GetItems"},
        {"M:system.billing.ui.BillingManager.ExecuteApplyTask(system.billing.ui.ApplyTask)",
         "M:system.billing.ui.BillingManager.ExecuteApplyTask(system.billing.ui.ApplyTask)"},
        {"M:system.billing.ui.BillingManager.Provisioning(system.billing.ui.ApplyTask)",
         "M:system.billing.ui.BillingManager.Provisioning(system.billing.ui.ApplyTask)"},
        {"M:system.billing.ui.BillingManager.Cancel(system.billing.ui.ApplyTask)",
         "M:system.billing.ui.BillingManager.Cancel(system.billing.ui.ApplyTask)"},
        {"M:system.billing.ui.BillingManager.CheckPlayingGame",
         "M:system.billing.ui.BillingManager.CheckPlayingGame"});
    PLS_MANAGED_CLASS("system.billing.ui.BillingManager", BillingManager, StoreBase, IStoreListener)
    pls::cs::Ref<BillingItem> consumeItem_{};
    bool consumeResult_{};
    pls::cs::Array<pls::cs::Ref<BillingItem>> items_{};
    pls::cs::Ref<generated::java::util::Vector> itemList_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Ref<BillingItem>>> itemGroup_{};
    bool confirm_{};
    bool prepareGame_{};
    pls::cs::Ref<generated::java::util::Vector> applyTaskList_{};
    pls::cs::Ref<generated::java::util::Vector> purchaseLog_{};
    bool recoveryCheck_{};
    bool bootCheckRestore_{};
    pls::cs::Ref<pls::cs::Object> RegistApplyTask_lock{};
    pls::cs::Ref<pls::cs::Object> UpdateApplyTask_lock{};
    void Init(pls::cs::Array<pls::cs::Array<pls::cs::String>> data, pls::cs::String paymentProduct,
              pls::cs::Array<pls::cs::String> subscription) override;
    virtual void Load(pls::cs::Array<std::uint8_t> data);
    virtual pls::cs::Array<std::uint8_t> Write();
    virtual void NewGame(bool take);
    virtual void LoadGame(pls::cs::Array<std::uint8_t> data);
    virtual pls::cs::Array<std::uint8_t> WriteGame();
    virtual void UpdateBillingItems(bool detail);
    pls::cs::Array<pls::cs::Ref<BillingItem>> GetItems() override;
    virtual bool ExecuteApplyTask(pls::cs::Ref<ApplyTask> task);
    virtual void Provisioning(pls::cs::Ref<ApplyTask> task);
    virtual void Cancel(pls::cs::Ref<ApplyTask> task);
    virtual bool CheckPlayingGame();

    static pls::cs::Ref<BillingManager> create();

    template<typename T_T>
    static void InitOverload(pls::cs::Ref<BillingManager> self,
                             pls::cs::Array<pls::cs::Array<pls::cs::String>> data,
                             pls::cs::String paymentProduct, pls::cs::Array<pls::cs::String> subscription);

    template<typename T_T>
    static void LoadOverload(pls::cs::Ref<BillingManager> self, pls::cs::Array<std::uint8_t> data);

    static void ensure_initialized();

    static pls::cs::Ref<generated::kairo::unity::util::SecureString>& BASE64_PUBLIC_KEY();

    static pls::cs::Ref<BillingManager>& instance_();

    static void create_init(pls::cs::Ref<BillingManager> self);

    static pls::cs::Ref<BillingManager> GetInstance();

    void Init(pls::cs::Array<pls::cs::Array<pls::cs::String>> data);

    template<typename T_T>
    static void Init(pls::cs::Ref<BillingManager> self, pls::cs::Array<pls::cs::Array<pls::cs::String>> data);

    void Finish();

    pls::cs::Ref<BillingItem> GetItem(pls::cs::Int32 id);

    pls::cs::Ref<BillingItem> GetItemString(pls::cs::String productId);

    pls::cs::Array<pls::cs::Ref<BillingItem>> GetSales();

    bool LaunchPurchaseFlow(pls::cs::Ref<BillingItem> item);

    void Purchase(pls::cs::Ref<BillingItem> item);

    bool Consume(pls::cs::Ref<BillingItem> item);

    bool CheckRegistApply(pls::cs::Ref<BillingItem> item, pls::cs::Int32 type);

    bool CheckNextConsume();

    bool RegistApplyTask(bool notice);

    void UpdateApplyTask(bool notice);

    pls::cs::Ref<generated::java::util::Vector> GetPurchaseLog();

    void ClearPurchaseLog();

    void AddPurchaseLog(pls::cs::String productId, pls::cs::Int32 state,
                        pls::cs::Ref<util::Purchase> purchase);

    void ConnectRegistMarketPurchase();

    pls::cs::Array<pls::cs::Array<pls::cs::String>> ConnectGetMarketPurchase();

    bool AddApplyTask(pls::cs::Ref<ApplyTask> task);

    pls::cs::Int32 SearchApplyTask(pls::cs::Ref<ApplyTask> task);

    pls::cs::Int32 SearchApplyTask(pls::cs::Ref<BillingItem> item, pls::cs::Int32 type);

    bool RemoveApplyTask(pls::cs::Ref<ApplyTask> task);

    bool RemoveApplyTask(pls::cs::Ref<BillingItem> item, pls::cs::Int32 type);

    pls::cs::Ref<generated::java::util::Vector> GetApplyTaskList(bool game);

    pls::cs::Ref<generated::java::util::Vector> GetItemList(bool game);

    pls::cs::Array<pls::cs::Array<pls::cs::Ref<BillingItem>>> GetItemGroup();
};
} // namespace system::billing::ui
}
