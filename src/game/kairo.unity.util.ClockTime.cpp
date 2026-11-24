// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.lang.JSystem.hpp"
#include "kairo.unity.native.KairoPlugin.hpp"
#include "kairo.unity.util.ClockTime.hpp"

namespace kl_lang = pls::generated::java::lang;

namespace pls::game {
namespace kairo::unity::util::ClockTime {

static bool isSetTime__storage{};

static PLS_NOINLINE void cs_init_130519c307b90f46_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots(
        [](const pls::cs::EdgeVisitor& visitor) { pls::cs::trace_value(isSetTime__storage, visitor); });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.ClockTime", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_130519c307b90f46_slow(flag);
}

bool& isSetTime_() {
    ClockTime::ensure_initialized();
    return isSetTime__storage;
}

// M:kairo.unity.util.ClockTime.SetTime(System.Int64,System.Int32)
void SetTime(pls::cs::Int64 time, pls::cs::Int32 precision) {
    ClockTime::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.ClockTime.SetTime(System.Int64,System.Int32)",
                     kairo);
    {
        native::KairoPlugin::SetClockTime(time, precision);
        ClockTime::isSetTime_() = true;
    }
}

// M:kairo.unity.util.ClockTime.GetTime
pls::cs::Int64 GetTime() {
    ClockTime::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.ClockTime.GetTime", kairo);
    {
        if (!ClockTime::isSetTime_()) {
            return pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_lang::JSystem::CurrentTimeMillis(); });
        }
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JSystem::CurrentTimeMillis(); });
    }
}

// M:kairo.unity.util.ClockTime.Destroy
void Destroy() {
    ClockTime::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.ClockTime.Destroy", kairo);
    {
    }
}
} // namespace kairo::unity::util::ClockTime
}
