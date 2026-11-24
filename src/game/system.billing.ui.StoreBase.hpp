// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "UnityEngine.Purchasing.IStoreListener.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::ui {

struct StoreBase : pls::cs::Object, UnityEngine::Purchasing::IStoreListener {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(
        pls::cs::Object,
        {"M:system.billing.ui.StoreBase.Init(System.String[][],System.String,System.String[])",
         "M:system.billing.ui.StoreBase.Init(System.String[][],System.String,System.String[])"},
        {"M:system.billing.ui.StoreBase.GetItems", "M:system.billing.ui.StoreBase.GetItems"});
    PLS_MANAGED_CLASS("system.billing.ui.StoreBase", StoreBase, pls::cs::Object, IStoreListener)
    pls::cs::Ref<UnityEngine::Purchasing::IStoreController> storeController_{};
    pls::cs::Ref<UnityEngine::Purchasing::IExtensionProvider> storeExtensionProvider_{};
    pls::cs::List<pls::cs::Ref<Receipt>> receipts_{};
    pls::cs::Int32 restoreResult_{};
    bool isRestoreProcessed_{};
    virtual void Init(pls::cs::Array<pls::cs::Array<pls::cs::String>> data, pls::cs::String paymentProduct,
                      pls::cs::Array<pls::cs::String> subscription);
    virtual pls::cs::Array<pls::cs::Ref<BillingItem>> GetItems() = 0;
    static constexpr pls::cs::Int32 VERSION = 102;
    static pls::cs::Ref<StoreBase> create();

    static void ensure_initialized();

    static pls::cs::Ref<KairoService>& ks_();

    static pls::cs::String& PAYMENT_PRODUCT();

    static void create_init(pls::cs::Ref<StoreBase> self);

    void InitializePurchasing(pls::cs::Array<pls::cs::Array<pls::cs::String>> data,
                              pls::cs::String paymentProduct, pls::cs::Array<pls::cs::String> subscriptions);

    bool IsInitialized();

    void WaitForInitialized();

    pls::cs::Ref<util::Purchase> LaunchPurchaseFlow(pls::cs::String productId);

    pls::cs::Int32 Restore();

    pls::cs::Ref<util::Inventory> QueryInventory(bool querySkuDetails,
                                                 pls::cs::List<pls::cs::String> moreItemSkus,
                                                 pls::cs::List<pls::cs::String> moreSubsSkus);

    bool ConsumeItem(pls::cs::Ref<util::Purchase> purchase);

    pls::cs::Ref<Receipt> SearchReceipt(pls::cs::String json);

    pls::cs::Int32 GetProductType(pls::cs::String productID);

    pls::cs::List<pls::cs::Ref<Receipt>> GetIncompletePayments();

    bool HasIncompletePayments();

    pls::cs::Ref<util::Purchase> CompletePayment(pls::cs::Ref<util::Purchase> purchase);

    bool IsCompletePayment(pls::cs::Ref<util::Purchase> purchase);

    void ProcessIncompletePayment(pls::cs::Ref<BillingItem> item, pls::cs::Ref<util::Purchase> purchase);

    void ProcessIncompletePayments();

    pls::cs::Ref<util::Purchase> SetTime(pls::cs::Ref<Receipt> receipt);

    pls::cs::String GetUnityJson(pls::cs::String json, pls::cs::String orderId);

    bool CheckPaymentMaintenance();

    void Save(pls::cs::Ref<generated::java::io::OutputStream> stream);

    void Load(pls::cs::Ref<generated::java::io::InputStream> stream);

    static pls::cs::Int32 GetRestoreRequest();

    static void SetRestoreRequest(pls::cs::Int32 request);

    bool CallRestoreFlow(pls::cs::String& message);
};
} // namespace system::billing::ui
}
