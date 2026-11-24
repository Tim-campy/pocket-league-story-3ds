// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.StringEx.hpp"
#include "kairo.common.cfg.Config.hpp"
#include "kairo.unity.util.Log.hpp"

namespace pls::generated {
namespace kairo::unity::util::Log {

static pls::cs::String lastLog__storage{};

static PLS_NOINLINE void cs_init_83a7bc36395d16bd_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots(
        [](const pls::cs::EdgeVisitor& visitor) { pls::cs::trace_value(lastLog__storage, visitor); });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.Log", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_83a7bc36395d16bd_slow(flag);
}

pls::cs::String& lastLog_() {
    Log::ensure_initialized();
    return lastLog__storage;
}

// M:kairo.unity.util.Log.Info(System.String,System.Exception)
pls::cs::String Info(pls::cs::String text, pls::cs::Ref<pls::cs::ExceptionObject> t) {
    Log::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Log.Info(System.String,System.Exception)", kairo);
    {
        common::cfg::Config::ensure_initialized();

        text = Log::GetThrowableLog(text, t);
        if (common::cfg::Config::PRINT()) {
            if (!is_null(text)) {
                Log::DebugLog(text);
            }
            if (!is_null(t)) {
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::debug_log(pls::cs::box(t)); });
            }
        }
        if (is_null(text)) {
            return literal(u"");
        }
        return text;
    }
}

// M:kairo.unity.util.Log.Info(System.Exception)
pls::cs::String Info(pls::cs::Ref<pls::cs::ExceptionObject> t) {
    Log::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Log.Info(System.Exception)", kairo);
    {
        common::cfg::Config::ensure_initialized();

        if (common::cfg::Config::PRINT() && !is_null(t)) {
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::debug_log(pls::cs::box(t)); });
        }
        return literal(u"");
    }
}

// M:kairo.unity.util.Log.DebugLog(System.String)
void DebugLog(pls::cs::String text) {
    Log::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Log.DebugLog(System.String)", kairo);
    {
        if (text == Log::lastLog_()) {
            text = pls::cs::String::concat(text, literal(u" "));
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::debug_log(pls::cs::box(text)); });
        Log::lastLog_() = text;
    }
}

// M:kairo.unity.util.Log.GetThrowableName(System.Exception)
pls::cs::String GetThrowableName(pls::cs::Ref<pls::cs::ExceptionObject> t) {
    Log::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Log.GetThrowableName(System.Exception)", kairo);
    {
        pls::cs::String recoveredPdbConstString = literal(u"");
        if (is_null(t)) {
            return literal(u"");
        }
        pls::cs::Ref<pls::cs::RuntimeType> type = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(t);
                return pls::cs::RuntimeType::for_name(require(cs_receiver)->managed_type_name());
            }());
        });
        pls::cs::String text = require(type)->get_Name();
        try {
            pls::cs::Int32 num =
                pls::diagnostic::api_call([&]() -> decltype(auto) { return last_index_char1(text, u'.'); });
            if (num != -1) {
                text =
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return substring1(text, num + 1); });
            }
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::cs::culture_ends_with(text, literal(u"Exception"));
                })) {
                text = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return substring2(text, 0, ([&]() -> pls::cs::Int32 {
                                          auto cs_left = java::lang::StringEx::Length(text);
                                          auto cs_right = java::lang::StringEx::Length(literal(u"Exception"));
                                          return cs_left - cs_right;
                                      }()));
                });
            }
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::cs::culture_ends_with(text, literal(u"Error"));
                })) {
                text = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return substring2(text, 0, ([&]() -> pls::cs::Int32 {
                                          auto cs_left = java::lang::StringEx::Length(text);
                                          auto cs_right = java::lang::StringEx::Length(literal(u"Error"));
                                          return cs_left - cs_right;
                                      }()));
                });
            }
            return text;
        } catch (const pls::cs::Exception& cs_caught_1) {
            pls::cs::capture_exception(cs_caught_1);
            {
                return require(type)->get_Name();
            }
        }
    }
}

// M:kairo.unity.util.Log.GetThrowableLog(System.String,System.Exception)
pls::cs::String GetThrowableLog(pls::cs::String text, pls::cs::Ref<pls::cs::ExceptionObject> t) {
    Log::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Log.GetThrowableLog(System.String,System.Exception)",
                     kairo);
    {
        if (!is_null(t)) {
            pls::cs::String throwableName = Log::GetThrowableName(t);
            if (is_null(text)) {
                text = throwableName;
            } else {
                text = (pls::cs::String::concat(pls::cs::String::concat(throwableName, literal(u":")), text));
            }
        }
        return text;
    }
}
} // namespace kairo::unity::util::Log
}
