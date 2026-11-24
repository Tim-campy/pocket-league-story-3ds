// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.FastVector.hpp"
#include "kairo.unity.util.FastVector_1.hpp"
#include "kairo.unity.util.FastVector_1_templates.hpp"

namespace pls::generated {
namespace kairo::unity::util {

void FastVector::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    FastVector_2<pls::cs::Ref<pls::cs::Object>>::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_15e3f7b692b3f380_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.FastVector", flag, []() {

    });
}

void FastVector::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_15e3f7b692b3f380_slow(flag);
}

void FastVector::create_init(pls::cs::Ref<FastVector> self) {
    FastVector::ensure_initialized();
    util::FastVector_2_create_init(
        pls::cs::static_pointer_cast<FastVector_2<pls::cs::Ref<pls::cs::Object>>>(self));
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.FastVector.#ctor", kairo);
    {
    }
}

// M:kairo.unity.util.FastVector.#ctor
pls::cs::Ref<FastVector> FastVector::create() {
    FastVector::ensure_initialized();
    auto self = pls::cs::make_ref<FastVector>();
    FastVector::create_init(self);
    return self;
}
} // namespace kairo::unity::util
}
