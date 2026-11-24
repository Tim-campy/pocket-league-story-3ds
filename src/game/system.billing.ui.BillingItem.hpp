// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::ui {

struct BillingItem : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(
        pls::cs::Object,
        {"M:system.billing.ui.BillingItem.Init(System.Int32,System.Int32,System.String,System.String,System.String,System.Int32,System.String)",
         "M:system.billing.ui.BillingItem.Init(System.Int32,System.Int32,System.String,System.String,System.String,System.Int32,System.String)"},
        {"M:system.billing.ui.BillingItem.Serialize(java.io.OutputStream)",
         "M:system.billing.ui.BillingItem.Serialize(java.io.OutputStream)"},
        {"M:system.billing.ui.BillingItem.Deserialize(java.io.InputStream)",
         "M:system.billing.ui.BillingItem.Deserialize(java.io.InputStream)"});
    PLS_MANAGED_CLASS("system.billing.ui.BillingItem", BillingItem, pls::cs::Object)
    pls::cs::Int32 id_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> productId_{};
    pls::cs::String name_{};
    pls::cs::Int32 type_{};
    pls::cs::String price_{};
    pls::cs::String explain_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureInt> flag_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureInt> state_{};
    bool provision_{};
    pls::cs::Ref<util::Purchase> purchase_{};
    bool purchaseNow_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> provisionType_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> provisionValueS_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureInt> provisionValueI_{};
    bool testProduct_{};
    bool consuming_{};
    bool recovery_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> seriesName_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureInt> seriesNumber_{};
    virtual void Init(pls::cs::Int32 id, pls::cs::Int32 flag, pls::cs::String productId, pls::cs::String name,
                      pls::cs::String price, pls::cs::Int32 type, pls::cs::String explain);
    virtual void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);
    virtual void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);
    static constexpr pls::cs::Int32 TYPE_INAPP = 0;
    static constexpr pls::cs::Int32 TYPE_SUBSCRIPTION = 1;
    static constexpr pls::cs::Int32 STATE_SALE = 0;
    static constexpr pls::cs::Int32 STATE_PURCHASED = 1;
    static constexpr pls::cs::Int32 FLAG_CONSUME = 1;
    static constexpr pls::cs::Int32 FLAG_GAMEONLY = 2;
    static constexpr pls::cs::Int32 FLAG_NOTSALE = 4;
    static constexpr pls::cs::Int32 FLAG_NEW = 8;
    static void ensure_initialized();

    static void create_init(pls::cs::Ref<BillingItem> self);

    static pls::cs::Ref<BillingItem> create();

    pls::cs::Int32 GetId();

    pls::cs::String GetProductId();

    pls::cs::String GetName();

    pls::cs::Int32 GetItemType();

    pls::cs::String GetPrice();

    pls::cs::String GetExplain();

    pls::cs::Int32 GetState();

    void ChangeState(pls::cs::Int32 state);

    pls::cs::String GetProvisionType();

    pls::cs::Int32 GetProvisionValue();

    pls::cs::String GetProvisionValueText();

    pls::cs::String GetSeriesName();

    pls::cs::Int32 GetSeriesNumber();

    bool CheckTestProduct();

    bool CheckProvision();

    void SetProvision(bool provision);

    pls::cs::Ref<util::Purchase> GetPurchase();

    void SetPurchase(pls::cs::Ref<util::Purchase> purchase);

    bool Check(pls::cs::Int32 bit);

    void On(pls::cs::Int32 bit);

    void Off(pls::cs::Int32 bit);

    static pls::cs::String GetPlatformProductID(pls::cs::String productID);
};

pls::cs::Ref<BillingItem> new_instance(pls::cs::Ref<BillingItem>*);
} // namespace system::billing::ui
}
