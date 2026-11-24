// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::system::payment {

struct IllegalPurchaseException : pls::cs::ExceptionObject {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.system.payment.IllegalPurchaseException", IllegalPurchaseException,
                      pls::cs::ExceptionObject)

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<IllegalPurchaseException> self);

    static pls::cs::Ref<IllegalPurchaseException> create();
};
} // namespace kairo::unity::system::payment
}
