// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.KairoException.hpp"

namespace pls::game {
namespace kairo::unity::util {

void KairoException::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::ExceptionObject::trace_edges(visitor);
    pls::cs::trace_value(displayMessage_, visitor);
}

static PLS_NOINLINE void cs_init_cd97eee87b3216c4_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.KairoException", flag, []() {

    });
}

void KairoException::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_cd97eee87b3216c4_slow(flag);
}

// M:kairo.unity.util.KairoException.get_DisplayMessage
pls::cs::String KairoException::get_DisplayMessage(pls::cs::Ref<KairoException> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.KairoException.get_DisplayMessage", kairo);
    {
        return self->displayMessage_;
    }
}
} // namespace kairo::unity::util
}
