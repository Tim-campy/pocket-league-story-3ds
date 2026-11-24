// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.KairoException.hpp"
#include "kairo.unity.util.NotPermitException.hpp"

namespace pls::game {
namespace kairo::unity::util {

void NotPermitException::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    KairoException::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_23a020152d468724_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.NotPermitException", flag, []() {

    });
}

void NotPermitException::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_23a020152d468724_slow(flag);
}

// M:kairo.unity.util.NotPermitException.ToString
pls::cs::String NotPermitException::ToString() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.NotPermitException.ToString", kairo);
    {
        if (!is_null(require(pls::cs::static_pointer_cast<KairoException>(this))->get_InnerException())) {
            return PLS_API(
                require(require(pls::cs::static_pointer_cast<KairoException>(this))->get_InnerException())
                    ->ToString());
        }
        return PLS_API(require(pls::cs::static_pointer_cast<KairoException>(this))->ToString());
    }
}
} // namespace kairo::unity::util
}
