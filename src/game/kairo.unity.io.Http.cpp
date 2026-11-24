// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.io.Http.HttpThread.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.io.HttpObject.hpp"

namespace kl_cfg = pls::generated::kairo::common::cfg;

using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace kairo::unity::io::Http {

static bool m_IsRetryEnable_k__BackingField_storage{};

static pls::cs::Ref<HttpObject> http__storage{};

static pls::cs::List<pls::cs::Ref<Http_HttpThread>> httpThreads__storage{};

static pls::cs::Ref<pls::cs::Object> lock__storage{};

static PLS_NOINLINE void cs_init_11e0490f60fdc166_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(m_IsRetryEnable_k__BackingField_storage, visitor);
        pls::cs::trace_value(http__storage, visitor);
        pls::cs::trace_value(httpThreads__storage, visitor);
        pls::cs::trace_value(lock__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.io.Http", flag, []() {
        http__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.io.Http.http_",
                                                                 [&]() { return HttpObject::create(false); });
        lock__storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.io.Http.lock_", [&]() { return pls::cs::make_ref<pls::cs::Object>(); });
        httpThreads__storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.unity.io.Http.httpThreads_", [&]() {
                return pls::cs::List<pls::cs::Ref<Http_HttpThread>>::make();
            });
    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_11e0490f60fdc166_slow(flag);
}

bool& m_IsRetryEnable_k__BackingField() {
    Http::ensure_initialized();
    return m_IsRetryEnable_k__BackingField_storage;
}

pls::cs::Ref<HttpObject>& http_() {
    Http::ensure_initialized();
    return http__storage;
}

pls::cs::List<pls::cs::Ref<Http_HttpThread>>& httpThreads_() {
    Http::ensure_initialized();
    return httpThreads__storage;
}

pls::cs::Ref<pls::cs::Object>& lock_() {
    Http::ensure_initialized();
    return lock__storage;
}

// M:kairo.unity.io.Http.Connect(System.String,System.Byte[],System.Boolean)
ByteArray Connect(pls::cs::String url, ByteArray send, bool check) {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.io.Http.Connect(System.String,System.Byte[],System.Boolean)", kairo);
    {
        return Http::Connect(url, send, check, false)[0];
    }
}

// M:kairo.unity.io.Http.Connect(System.String,System.Byte[],System.Boolean,System.Boolean)
pls::cs::Array<ByteArray> Connect(pls::cs::String url, ByteArray send, bool check, bool split) {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.io.Http.Connect(System.String,System.Byte[],System.Boolean,System.Boolean)", kairo);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Ref<Http_HttpThread> httpThread = Http::MakeHttp();
        {
            auto cs_flow_51 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<pls::cs::Array<ByteArray>> {
                    {
                        if (kl_cfg::Config::DEBUG() && pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return pls::kairo::IApplication::GetCurrentApp();
                                       }))
                                    ->CheckUiThread();
                            })) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return PlsPortGeneratedBootstrap::Source::ShowToast(
                                    pls::cs::String::concat(
                                        literal(
                                            u"UIスレッドで通信が行われました。\niOS版ではフリーズします。\n"),
                                        url),
                                    0);
                            });
                        }
                        return pls::cs::flow_return(
                            require(require(httpThread)->http_)->Connect(url, send, check, split));
                    }
                    return {};
                },
                [&]() {
                    {
                        pls::cs::MonitorScope cs_monitor_50(Http::lock_());
                        {
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return Http::httpThreads_().Remove(httpThread); });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return Http::httpThreads_().Insert(0, httpThread);
                            });
                        }
                    }
                    require(httpThread)->connect_ = false;
                });
            return cs_flow_51.value();
        }
    }
}

// M:kairo.unity.io.Http.GetErrorCode
pls::cs::Int32 GetErrorCode() {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.Http.GetErrorCode", kairo);
    {
        pls::cs::Ref<Http_HttpThread> http = Http::GetHttp();
        if (is_null(http)) {
            return 0;
        }
        return require(require(http)->http_)->GetErrorCode();
    }
}

// M:kairo.unity.io.Http.GetErrorText
pls::cs::String GetErrorText() {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.Http.GetErrorText", kairo);
    {
        pls::cs::Ref<Http_HttpThread> http = Http::GetHttp();
        if (is_null(http)) {
            return literal(u"");
        }
        return require(require(http)->http_)->GetErrorText();
    }
}

// M:kairo.unity.io.Http.GetErrorUrl
pls::cs::String GetErrorUrl() {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.Http.GetErrorUrl", kairo);
    {
        pls::cs::Ref<Http_HttpThread> http = Http::GetHttp();
        if (is_null(http)) {
            return literal(u"");
        }
        return require(require(http)->http_)->GetErrorUrl();
    }
}

// M:kairo.unity.io.Http.PopErrorCode
pls::cs::Int32 PopErrorCode() {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.Http.PopErrorCode", kairo);
    {
        pls::cs::Ref<Http_HttpThread> http = Http::GetHttp();
        if (is_null(http)) {
            return 0;
        }
        return require(require(http)->http_)->PopErrorCode();
    }
}

// M:kairo.unity.io.Http.PopErrorText
pls::cs::String PopErrorText() {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.Http.PopErrorText", kairo);
    {
        pls::cs::Ref<Http_HttpThread> http = Http::GetHttp();
        if (is_null(http)) {
            return literal(u"");
        }
        return require(require(http)->http_)->PopErrorText();
    }
}

// M:kairo.unity.io.Http.MakeHttp
pls::cs::Ref<Http_HttpThread> MakeHttp() {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.Http.MakeHttp", kairo);
    {
        pls::cs::Ref<java::lang::JThread> jThread = java::lang::JThread::CurrentThread();
        {
            pls::cs::MonitorScope cs_monitor_52(Http::lock_());
            {
                pls::cs::Ref<Http_HttpThread> httpThread = pls::cs::Ref<Http_HttpThread>{};
                for (pls::cs::Int32 i = 0; i < Http::httpThreads_().get_Count(); ++i) {
                    pls::cs::Ref<Http_HttpThread> httpThread2 = Http::httpThreads_().get_Item(i);
                    if (!(([&]() {
                            pls::cs::Ref<java::lang::JThread> cs_left = require(httpThread2)->thread_;
                            pls::cs::Ref<java::lang::JThread> cs_right = jThread;
                            return java::lang::JThread::op_Inequality(cs_left, cs_right);
                        }()))) {
                        if (i != 0) {
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return Http::httpThreads_().RemoveAt(i); });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return Http::httpThreads_().Insert(0, httpThread2);
                            });
                        }
                        httpThread = httpThread2;
                        break;
                    }
                }
                if (is_null(httpThread)) {
                    httpThread = Http_HttpThread::create();
                    {
                        auto cs_target = httpThread;
                        auto cs_value = HttpObject::create(Http::get_IsRetryEnable());
                        require(cs_target)->http_ = cs_value;
                    }
                    {
                        auto cs_receiver = require(httpThread)->http_;
                        auto cs_rhs = Http::get_IsRetryEnable();
                        auto cs_value = cs_rhs;
                        HttpObject::set_IsRetryEnable(cs_receiver, cs_value);
                    }
                    require(httpThread)->thread_ = jThread;
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return Http::httpThreads_().Insert(0, httpThread); });
                    if (Http::httpThreads_().get_Count() > 20) {
                        for (pls::cs::Int32 num = pls::cs::Int32(Http::httpThreads_().get_Count()) - 1;
                             num >= 0; --num) {
                            if (!require(Http::httpThreads_().get_Item(num))->connect_) {
                                pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return Http::httpThreads_().RemoveAt(num); });
                                break;
                            }
                        }
                    }
                }
                {
                    auto cs_target = httpThread;
                    auto cs_value = HttpObject::create(Http::get_IsRetryEnable());
                    require(cs_target)->http_ = cs_value;
                }
                require(httpThread)->connect_ = true;
                return httpThread;
            }
        }
    }
}

// M:kairo.unity.io.Http.GetHttp
pls::cs::Ref<Http_HttpThread> GetHttp() {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.Http.GetHttp", kairo);
    {
        if (Http::httpThreads_().get_Count() <= 0) {
            return pls::cs::Ref<Http_HttpThread>{};
        }
        pls::cs::Ref<java::lang::JThread> jThread = java::lang::JThread::CurrentThread();
        {
            pls::cs::MonitorScope cs_monitor_78(Http::lock_());
            {
                for (pls::cs::Int32 i = 0; i < Http::httpThreads_().get_Count(); ++i) {
                    pls::cs::Ref<Http_HttpThread> httpThread = Http::httpThreads_().get_Item(i);
                    if ([&]() {
                            pls::cs::Ref<java::lang::JThread> cs_left = require(httpThread)->thread_;
                            pls::cs::Ref<java::lang::JThread> cs_right = jThread;
                            return java::lang::JThread::op_Equality(cs_left, cs_right);
                        }()) {
                        return httpThread;
                    }
                }
                for (pls::cs::Int32 j = 0; j < Http::httpThreads_().get_Count(); ++j) {
                    pls::cs::Ref<Http_HttpThread> httpThread2 = Http::httpThreads_().get_Item(j);
                    if (!require(httpThread2)->connect_) {
                        return httpThread2;
                    }
                }
                return Http::httpThreads_().get_Item(0);
            }
        }
    }
}

// M:kairo.unity.io.Http.get_IsRetryEnable
bool get_IsRetryEnable() {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.Http.get_IsRetryEnable", kairo);
    {
        return Http::m_IsRetryEnable_k__BackingField();
    }
}

// M:kairo.unity.io.Http.set_IsRetryEnable(System.Boolean)
void set_IsRetryEnable(bool value) {
    Http::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.Http.set_IsRetryEnable(System.Boolean)", kairo);
    {
        Http::m_IsRetryEnable_k__BackingField() = value;
    }
}
} // namespace kairo::unity::io::Http
}
