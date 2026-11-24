// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::util {

struct Purchase : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"ToString", "M:system.billing.util.Purchase.ToString"},
                       {"GetHashCode", "M:system.billing.util.Purchase.GetHashCode"});
    PLS_MANAGED_CLASS("system.billing.util.Purchase", Purchase, pls::cs::Object)
    pls::cs::String mItemType{};
    pls::cs::String mOrderId{};
    pls::cs::String mPackageName{};
    pls::cs::String mSku{};
    pls::cs::Int64 mPurchaseTime{};
    pls::cs::Int32 mPurchaseState{};
    pls::cs::String mDeveloperPayload{};
    pls::cs::String mToken{};
    pls::cs::String mOriginalJson{};
    pls::cs::String mSignature{};
    pls::cs::String ToString() override;
    std::int32_t GetHashCode() override;

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<Purchase> self);

    static void create_init(pls::cs::Ref<Purchase> self, pls::cs::String itemType,
                            pls::cs::String jsonPurchaseInfo, pls::cs::String signature);

    static pls::cs::Ref<Purchase> create();

    static pls::cs::Ref<Purchase> create(pls::cs::String itemType, pls::cs::String jsonPurchaseInfo,
                                         pls::cs::String signature);

    pls::cs::String GetItemType();

    pls::cs::String GetOrderId();

    pls::cs::String GetPackageName();

    pls::cs::String GetSku();

    pls::cs::Int64 GetPurchaseTime();

    pls::cs::Int32 GetPurchaseState();

    pls::cs::String GetDeveloperPayload();

    pls::cs::String GetToken();

    pls::cs::String GetOriginalJson();

    pls::cs::String GetSignature();

    static pls::cs::String ReadJSon(pls::cs::String json, pls::cs::String key);
};
} // namespace system::billing::util
}
