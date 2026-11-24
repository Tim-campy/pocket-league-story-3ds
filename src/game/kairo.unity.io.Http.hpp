// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::io::Http {
inline constexpr pls::cs::Int32 HTTP_OK = 0;
inline constexpr pls::cs::Int32 HTTP_NOMYMENU = -1;
inline constexpr pls::cs::Int32 HTTP_NG = -98;
inline constexpr pls::cs::Int32 HTTP_PERMISSION = -99;

void ensure_initialized();

bool& m_IsRetryEnable_k__BackingField();

pls::cs::Ref<HttpObject>& http_();

pls::cs::List<pls::cs::Ref<Http_HttpThread>>& httpThreads_();

pls::cs::Ref<pls::cs::Object>& lock_();

pls::cs::Array<pls::cs::Array<std::uint8_t>> Connect(pls::cs::String url, pls::cs::Array<std::uint8_t> send,
                                                     bool check, bool split);

pls::cs::Array<std::uint8_t> Connect(pls::cs::String url, pls::cs::Array<std::uint8_t> send, bool check);

bool get_IsRetryEnable();

pls::cs::Int32 GetErrorCode();

pls::cs::String GetErrorText();

pls::cs::String GetErrorUrl();

pls::cs::Ref<Http_HttpThread> GetHttp();

pls::cs::Ref<Http_HttpThread> MakeHttp();

pls::cs::Int32 PopErrorCode();

pls::cs::String PopErrorText();

void set_IsRetryEnable(bool value);
} // namespace kairo::unity::io::Http
}
