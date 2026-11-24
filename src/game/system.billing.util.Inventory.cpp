// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "system.billing.util.Inventory.hpp"
#include "system.billing.util.Purchase.hpp"
#include "system.billing.util.SkuDetails.hpp"

namespace pls::game {
namespace system::billing::util {

void Inventory::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(mSkuMap, visitor);
    pls::cs::trace_value(mPurchaseMap, visitor);
}

static PLS_NOINLINE void cs_init_51fd12cb14e568f9_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("system.billing.util.Inventory", flag, []() {

    });
}

void Inventory::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_51fd12cb14e568f9_slow(flag);
}

void Inventory::create_init(pls::cs::Ref<Inventory> self) {
    Inventory::ensure_initialized();
    self->mSkuMap = pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<SkuDetails>>::make();
    self->mPurchaseMap = pls::cs::Dictionary<pls::cs::String, pls::cs::Ref<Purchase>>::make();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Inventory.#ctor", game);
    {
    }
}

// M:system.billing.util.Inventory.#ctor
pls::cs::Ref<Inventory> Inventory::create() {
    Inventory::ensure_initialized();
    auto self = pls::cs::make_ref<Inventory>();
    Inventory::create_init(self);
    return self;
}

// M:system.billing.util.Inventory.GetSkuDetails(System.String)
pls::cs::Ref<SkuDetails> Inventory::GetSkuDetails(pls::cs::String sku) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Inventory.GetSkuDetails(System.String)", game);
    {
        pls::cs::Ref<SkuDetails> value = pls::cs::Ref<SkuDetails>{};
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_dictionary = mSkuMap;
                auto cs_key = sku;
                return cs_dictionary.TryGetValue(cs_key, value);
            }());
        });
        return value;
    }
}

// M:system.billing.util.Inventory.GetPurchase(System.String)
pls::cs::Ref<Purchase> Inventory::GetPurchase(pls::cs::String sku) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Inventory.GetPurchase(System.String)", game);
    {
        pls::cs::Ref<Purchase> value = pls::cs::Ref<Purchase>{};
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_dictionary = mPurchaseMap;
                auto cs_key = sku;
                return cs_dictionary.TryGetValue(cs_key, value);
            }());
        });
        return value;
    }
}

// M:system.billing.util.Inventory.HasPurchase(System.String)
bool Inventory::HasPurchase(pls::cs::String sku) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Inventory.HasPurchase(System.String)", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return mPurchaseMap.ContainsKey(sku); });
    }
}

// M:system.billing.util.Inventory.HasDetails(System.String)
bool Inventory::HasDetails(pls::cs::String sku) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Inventory.HasDetails(System.String)", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return mSkuMap.ContainsKey(sku); });
    }
}

// M:system.billing.util.Inventory.ErasePurchase(System.String)
void Inventory::ErasePurchase(pls::cs::String sku) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Inventory.ErasePurchase(System.String)", game);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) { return mPurchaseMap.ContainsKey(sku); })) {
            pls::diagnostic::api_call([&]() -> decltype(auto) { return mPurchaseMap.Remove(sku); });
        }
    }
}

// M:system.billing.util.Inventory.GetAllOwnedSkus
pls::cs::List<pls::cs::String> Inventory::GetAllOwnedSkus() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Inventory.GetAllOwnedSkus", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_dictionary = mPurchaseMap;
                auto cs_items = cs_dictionary.KeysToArray();
                auto cs_list = pls::cs::List<pls::cs::String>::make(cs_items.length());
                for (std::int32_t cs_i = 0; cs_i < cs_items.length(); ++cs_i)
                    cs_list.Add(cs_items.at(cs_i));
                return cs_list;
            }());
        });
    }
}

// M:system.billing.util.Inventory.GetAllOwnedSkus(System.String)
pls::cs::List<pls::cs::String> Inventory::GetAllOwnedSkus(pls::cs::String itemType) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Inventory.GetAllOwnedSkus(System.String)",
                     game);
    {
        pls::cs::List<pls::cs::String> list = pls::cs::List<pls::cs::String>::make();
        {
            auto cs_view_enum231 = mPurchaseMap.GetEnumerator();

            struct cs_view_scope231 {
                decltype(cs_view_enum231)& e;

                ~cs_view_scope231() { e.Dispose(); }
            } cs_scope231{cs_view_enum231};

            while (cs_view_enum231.MoveNext()) {
                pls::cs::Ref<Purchase> value = cs_view_enum231.get_Current().get_Value();
                {
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return string_equals(require(value)->GetItemType(), itemType);
                        })) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                auto cs_receiver = list;
                                auto cs_arg0 = require(value)->GetSku();
                                cs_receiver.Add(cs_arg0);
                            }());
                        });
                    }
                }
            }
        }
        return list;
    }
}

// M:system.billing.util.Inventory.GetAllPurchases
pls::cs::List<pls::cs::Ref<Purchase>> Inventory::GetAllPurchases() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Inventory.GetAllPurchases", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_dictionary = mPurchaseMap;
                auto cs_items = cs_dictionary.ValuesToArray();
                auto cs_list = pls::cs::List<pls::cs::Ref<Purchase>>::make(cs_items.length());
                for (std::int32_t cs_i = 0; cs_i < cs_items.length(); ++cs_i)
                    cs_list.Add(cs_items.at(cs_i));
                return cs_list;
            }());
        });
    }
}

// M:system.billing.util.Inventory.AddSkuDetails(system.billing.util.SkuDetails)
void Inventory::AddSkuDetails(pls::cs::Ref<SkuDetails> d) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.util.Inventory.AddSkuDetails(system.billing.util.SkuDetails)", game);
    {
        {
            auto cs_target = mSkuMap;
            auto cs_index = require(d)->GetSku();
            auto cs_value = d;
            cs_target.set_Item(cs_index, cs_value);
        }
    }
}

// M:system.billing.util.Inventory.AddPurchase(system.billing.util.Purchase)
void Inventory::AddPurchase(pls::cs::Ref<Purchase> p) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.util.Inventory.AddPurchase(system.billing.util.Purchase)", game);
    {
        {
            auto cs_target = mPurchaseMap;
            auto cs_index = require(p)->GetSku();
            auto cs_value = p;
            cs_target.set_Item(cs_index, cs_value);
        }
    }
}
} // namespace system::billing::util
}
