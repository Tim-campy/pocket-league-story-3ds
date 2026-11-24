// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.io.ConnectionException.hpp"

namespace pls::generated {
namespace kairo::unity::io {

void ConnectionException::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::ExceptionObject::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_7254e4706a01e4e7_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.io.ConnectionException", flag, []() {

    });
}

void ConnectionException::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_7254e4706a01e4e7_slow(flag);
}

// M:kairo.unity.io.ConnectionException.GetStatus
pls::cs::Int32 ConnectionException::GetStatus() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.ConnectionException.GetStatus", kairo);
    {
        return -1;
    }
}
} // namespace kairo::unity::io
}
