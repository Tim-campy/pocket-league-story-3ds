#pragma once
#include "semantic_runtime.hpp"
namespace pls::kairo {
// Replacement only for the Unity WWW transport leaf. HttpObject's original
// reset, error construction, retry, timestamp and finally bodies stay emitted.
// A completed failed request is not a server response or license result.
class OfflineWebRequest : public cs::Object {
    bool disposed_{};
public:
    explicit OfflineWebRequest(const cs::String& url){(void)url;}
    OfflineWebRequest(const cs::String& url,const cs::Array<std::uint8_t>& post){(void)url;(void)post;}
    bool get_isDone()const{return true;}
    cs::String get_error()const{return cs::String(u"Network transport is unavailable in this port");}
    cs::Array<std::uint8_t> get_bytes()const{return cs::Array<std::uint8_t>::make(0);}
    void Dispose(){disposed_=true;}
    bool native_disposed()const{return disposed_;}
};
// KairoPlugin.GetInstallReferrer's non-Android branch leaves text == null.
inline cs::String native_install_referrer(const cs::String& key={}){(void)key;return {};}
// Registration is intercepted by CgiRegist's authorized local policy. Keep an
// explicit failure on the removed transitive API, never a fake license status.
[[noreturn]] inline std::int32_t removed_license_check(){throw cs::NotSupportedException("Licensing integration has been removed; use the local registration route");}
}
