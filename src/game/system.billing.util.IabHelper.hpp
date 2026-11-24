// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::util {

struct IabHelper : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("system.billing.util.IabHelper", IabHelper, pls::cs::Object)

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<IabHelper> self);

    static pls::cs::Ref<IabHelper> create();
};
} // namespace system::billing::util
}
