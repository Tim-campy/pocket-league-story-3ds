// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "UnityEngine.Purchasing.Product.hpp"

namespace pls::game {
namespace UnityEngine::Purchasing {

void Product::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_efeeb7640894c95e_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("UnityEngine.Purchasing.Product", flag, []() {

    });
}

void Product::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_efeeb7640894c95e_slow(flag);
}

void Product::create_init(pls::cs::Ref<Product> self) {
    Product::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:UnityEngine.Purchasing.Product.#ctor", game);
    {
    }
}

// M:UnityEngine.Purchasing.Product.#ctor
pls::cs::Ref<Product> Product::create() {
    Product::ensure_initialized();
    auto self = pls::cs::make_ref<Product>();
    Product::create_init(self);
    return self;
}
} // namespace UnityEngine::Purchasing
}
