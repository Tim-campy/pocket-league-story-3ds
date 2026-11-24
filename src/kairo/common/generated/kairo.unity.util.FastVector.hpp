// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "kairo.unity.util.FastVector_1.hpp"
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct FastVector : FastVector_2<pls::cs::Ref<pls::cs::Object>> {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.util.FastVector", FastVector, FastVector_2<pls::cs::Ref<pls::cs::Object>>)

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<FastVector> self);

    static pls::cs::Ref<FastVector> create();
};
} // namespace kairo::unity::util
}
