// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::util {

struct Json : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("system.billing.util.Json", Json, pls::cs::Object)

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<Json> self);

    static pls::cs::Ref<Json> create();

    static pls::cs::String ReadJSon(pls::cs::String json, pls::cs::String key);

    static pls::cs::String GetDetailJson(pls::cs::Ref<UnityEngine::Purchasing::Product> p);

    static pls::cs::String Record(pls::cs::String type, pls::cs::String value);

    static pls::cs::String MakeJson(pls::cs::Array<pls::cs::String> records);

    static pls::cs::String AdjustJson(pls::cs::String receipt, pls::cs::String productID,
                                      pls::cs::String iOSPurchaseTime);

    static pls::cs::String AdjustJson(pls::cs::Ref<UnityEngine::Purchasing::Product> p);
};
} // namespace system::billing::util
}
