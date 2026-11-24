// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::lang {

struct JRuntime : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("java.lang.JRuntime", JRuntime, pls::cs::Object)

    static void ensure_initialized();

    static pls::cs::Ref<JRuntime>& instance();

    static void create_init(pls::cs::Ref<JRuntime> self);

    static pls::cs::Ref<JRuntime> create();

    static pls::cs::Ref<JRuntime> GetRuntime();

    void Gc();
};
} // namespace java::lang
}
