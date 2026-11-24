// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "kairo.unity.util.Log.hpp"
#include "kairo.unity.util.LogListener.hpp"

namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::util::Log {

static pls::cs::Ref<LogListener> listener__storage{};
} // namespace kairo::unity::util::Log

namespace kairo::unity::util {

static pls::cs::GcRootProvider cs_init_83a7bc36395d16bd_unit_roots =
    pls::cs::GcRootProvider([](const pls::cs::EdgeVisitor& visitor) -> void {
        pls::cs::trace_value(Log::listener__storage, visitor);
    });
} // namespace kairo::unity::util

namespace kairo::unity::util::Log {

pls::cs::Ref<LogListener>& listener_() {
    kl_util::Log::ensure_initialized();
    return listener__storage;
}

// M:kairo.unity.util.Log.Error(System.String,System.Exception)
pls::cs::String Error(pls::cs::String text, pls::cs::Ref<pls::cs::ExceptionObject> t) {
    kl_util::Log::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Log.Error(System.String,System.Exception)", kairo);
    {
        kl_cfg::Config::ensure_initialized();

        text = PLS_API(kl_util::Log::GetThrowableLog(text, t));
        if (kl_cfg::Config::PRINT()) {
            if (!is_null(text)) {
                PLS_API(kl_util::Log::DebugLog(text));
            }
            if (!is_null(t)) {
                PLS_API(pls::kairo::debug_log(pls::cs::box(t)));
            }
        }
        if (!is_null(Log::listener_())) {
            require(Log::listener_())->OnRecvLog(text);
        }
        if (is_null(text)) {
            return literal(u"");
        }
        return text;
    }
}
} // namespace kairo::unity::util::Log
}
