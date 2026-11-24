// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.system.payment.IllegalPurchaseException.hpp"

namespace pls::game {
namespace kairo::unity::system::payment {

void IllegalPurchaseException::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::ExceptionObject::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_c10f171a3a4c8973_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.system.payment.IllegalPurchaseException", flag, []() {

    });
}

void IllegalPurchaseException::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_c10f171a3a4c8973_slow(flag);
}

void IllegalPurchaseException::create_init(pls::cs::Ref<IllegalPurchaseException> self) {
    IllegalPurchaseException::ensure_initialized();
    ([&]() {
        self->source_ctor("System.Exception");
    }());
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.payment.IllegalPurchaseException.#ctor", kairo);
    {
    }
}

// M:kairo.unity.system.payment.IllegalPurchaseException.#ctor
pls::cs::Ref<IllegalPurchaseException> IllegalPurchaseException::create() {
    IllegalPurchaseException::ensure_initialized();
    auto self = pls::cs::make_ref<IllegalPurchaseException>();
    IllegalPurchaseException::create_init(self);
    return self;
}
} // namespace kairo::unity::system::payment
}
