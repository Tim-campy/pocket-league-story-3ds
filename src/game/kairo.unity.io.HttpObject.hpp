// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::io {

struct HttpObject : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.io.HttpObject", HttpObject, pls::cs::Object)
    pls::cs::Ref<pls::kairo::OfflineWebRequest> http_{};
    pls::cs::String errorUrl_{};
    pls::cs::Int32 errorCode_{};
    pls::cs::String errorText_{};
    pls::cs::String errorTextOrg_{};
    pls::cs::Ref<pls::cs::ExceptionObject> error_{};
    bool askRetry_{};
    bool m_IsRetryEnable_k__BackingField{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<HttpObject> self, bool retryEnable);

    static pls::cs::Ref<HttpObject> create(bool retryEnable);

    pls::cs::Array<pls::cs::Array<std::uint8_t>>
    Connect(pls::cs::String url, pls::cs::Array<std::uint8_t> send, bool check, bool split);

    pls::cs::Array<std::uint8_t> Connect(pls::cs::String url, pls::cs::Array<std::uint8_t> send, bool check);

    pls::cs::Array<pls::cs::Array<std::uint8_t>>
    _connect(pls::cs::String url, pls::cs::Array<std::uint8_t> send, bool check, bool split);

    pls::cs::Int32 GetErrorCode();

    pls::cs::String GetErrorText();

    pls::cs::String GetErrorUrl();

    pls::cs::Int32 PopErrorCode();

    pls::cs::String PopErrorText();

    pls::cs::String GetTimeStampParam();

    static bool get_IsRetryEnable(pls::cs::Ref<HttpObject> self);

    static void set_IsRetryEnable(pls::cs::Ref<HttpObject> self, bool value);
};
} // namespace kairo::unity::io
}
