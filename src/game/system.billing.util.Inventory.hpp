// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::util {

struct Inventory : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("system.billing.util.Inventory", Inventory, pls::cs::Object)
    pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<SkuDetails>> mSkuMap{};
    pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<Purchase>> mPurchaseMap{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<Inventory> self);

    static pls::cs::Ref<Inventory> create();

    pls::cs::Ref<SkuDetails> GetSkuDetails(pls::cs::String sku);

    pls::cs::Ref<Purchase> GetPurchase(pls::cs::String sku);

    bool HasPurchase(pls::cs::String sku);

    bool HasDetails(pls::cs::String sku);

    void ErasePurchase(pls::cs::String sku);

    pls::cs::List<pls::cs::String> GetAllOwnedSkus();

    pls::cs::List<pls::cs::String> GetAllOwnedSkus(pls::cs::String itemType);

    pls::cs::List<pls::cs::Ref<Purchase>> GetAllPurchases();

    void AddSkuDetails(pls::cs::Ref<SkuDetails> d);

    void AddPurchase(pls::cs::Ref<Purchase> p);
};
} // namespace system::billing::util
}
