// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.ui.UIException.hpp"

namespace pls::game {
namespace kairo::unity::ui {

void UIException::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::ExceptionObject::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_27b8baf7307cff9f_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ui.UIException", flag, []() {

    });
}

void UIException::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_27b8baf7307cff9f_slow(flag);
}

// M:kairo.unity.ui.UIException.GetStatus
pls::cs::Int32 UIException::GetStatus() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.UIException.GetStatus", kairo);
    {
        return -1;
    }
}
} // namespace kairo::unity::ui
}
