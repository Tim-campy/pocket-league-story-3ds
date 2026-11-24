// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "kairo.unity.system.KairoBase.ConnectTask.hpp"

namespace pls::game {
namespace kairo::unity::system {

void KairoBase_ConnectTask::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(url_, visitor);
    pls::cs::trace_value(send_, visitor);
}

static PLS_NOINLINE void cs_init_88b206217a8b30c2_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.system.KairoBase.ConnectTask", flag, []() {

    });
}

void KairoBase_ConnectTask::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_88b206217a8b30c2_slow(flag);
}

void KairoBase_ConnectTask::create_init(pls::cs::Ref<KairoBase_ConnectTask> self) {
    KairoBase_ConnectTask::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.KairoBase.ConnectTask.#ctor", kairo);
    {
    }
}

// M:kairo.unity.system.KairoBase.ConnectTask.#ctor
pls::cs::Ref<KairoBase_ConnectTask> KairoBase_ConnectTask::create() {
    KairoBase_ConnectTask::ensure_initialized();
    auto self = pls::cs::make_ref<KairoBase_ConnectTask>();
    KairoBase_ConnectTask::create_init(self);
    return self;
}
} // namespace kairo::unity::system
}
