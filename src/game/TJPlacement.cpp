// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "TJPlacement.hpp"

namespace pls::game {

void TJPlacement::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_f8053a3d49df91b7_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("TJPlacement", flag, []() {

    });
}

void TJPlacement::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_f8053a3d49df91b7_slow(flag);
}

void TJPlacement::create_init(pls::cs::Ref<TJPlacement> self) {
    TJPlacement::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:TJPlacement.#ctor", game);
    {
    }
}

// M:TJPlacement.#ctor
pls::cs::Ref<TJPlacement> TJPlacement::create() {
    TJPlacement::ensure_initialized();
    auto self = pls::cs::make_ref<TJPlacement>();
    TJPlacement::create_init(self);
    return self;
}
}
