// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.util.KairoException.hpp"

namespace pls::game {
namespace kairo::unity::util {

struct NotPermitException : KairoException {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(KairoException, {"ToString", "M:kairo.unity.util.NotPermitException.ToString"});
    PLS_MANAGED_CLASS("kairo.unity.util.NotPermitException", NotPermitException, KairoException)
    pls::cs::Int32 type_{};
    pls::cs::String ToString() override;

    static void ensure_initialized();
};
} // namespace kairo::unity::util
}
