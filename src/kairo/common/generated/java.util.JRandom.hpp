// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::util {

struct JRandom : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("java.util.JRandom", JRandom, pls::cs::Object)
    pls::cs::Ref<pls::cs::Random> random_{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<JRandom> self);

    static void create_init(pls::cs::Ref<JRandom> self, pls::cs::Int64 seed);

    static pls::cs::Ref<JRandom> create();

    static pls::cs::Ref<JRandom> create(pls::cs::Int64 seed);

    pls::cs::Int32 NextInt();
};
} // namespace java::util
}
