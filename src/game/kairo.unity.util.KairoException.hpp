// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::util {

struct KairoException : pls::cs::ExceptionObject {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.util.KairoException", KairoException, pls::cs::ExceptionObject)
    pls::cs::String displayMessage_{};

    static void ensure_initialized();

    static pls::cs::String get_DisplayMessage(pls::cs::Ref<KairoException> self);
};
} // namespace kairo::unity::util
}
