// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::util {

struct SkuDetails : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"ToString", "M:system.billing.util.SkuDetails.ToString"},
                       {"GetHashCode", "M:system.billing.util.SkuDetails.GetHashCode"});
    PLS_MANAGED_CLASS("system.billing.util.SkuDetails", SkuDetails, pls::cs::Object)
    pls::cs::String mItemType{};
    pls::cs::String mSku{};
    pls::cs::String mType{};
    pls::cs::String mPrice{};
    pls::cs::String mTitle{};
    pls::cs::String mDescription{};
    pls::cs::String mJson{};
    pls::cs::String ToString() override;
    std::int32_t GetHashCode() override;

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<SkuDetails> self);

    static void create_init(pls::cs::Ref<SkuDetails> self, pls::cs::String itemType,
                            pls::cs::String jsonSkuDetails);

    static void create_init(pls::cs::Ref<SkuDetails> self, pls::cs::String jsonSkuDetails);

    static pls::cs::Ref<SkuDetails> create();

    static pls::cs::Ref<SkuDetails> create(pls::cs::String itemType, pls::cs::String jsonSkuDetails);

    static pls::cs::Ref<SkuDetails> create(pls::cs::String jsonSkuDetails);

    pls::cs::String GetSku();

    pls::cs::String GetTypeA();

    pls::cs::String GetPrice();

    pls::cs::String GetTitle();

    pls::cs::String GetDescription();

    static pls::cs::String ReadJSon(pls::cs::String json, pls::cs::String key);
};
} // namespace system::billing::util
}
