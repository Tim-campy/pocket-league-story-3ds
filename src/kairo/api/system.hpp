#pragma once
#include "semantic_runtime.hpp"
#include <atomic>
#include <chrono>
#include <mutex>
#include <thread>
#include <iostream>

namespace pls::kairo {
inline std::mutex debug_log_mutex;
inline void debug_log(const cs::String& text){
    // Platform diagnostic leaf only; Config.PRINT/listener/deduplication remain
    // in the generated source Log implementation.
    auto output=text.is_null()?std::string("Null"):text.utf8();
    std::lock_guard<std::mutex> guard(debug_log_mutex);std::cerr<<output<<'\n';
}
inline void debug_log(const cs::Ref<cs::Object>& value){debug_log(value?value->ToString():cs::String(u"Null"));}
// Platform replacements for the two Unity setters reached by Main.OnUpdate.
// The host paces explicit positive target rates. A non-positive rate leaves
// pacing to the platform; it does not silently substitute a game frame rate.
class UnityApplication {
    inline static std::atomic<std::int32_t> target_{-1};
public:
    static void OpenURL(const cs::String&);
    static void set_targetFrameRate(std::int32_t value){target_.store(value);}
    static std::int32_t get_targetFrameRate(){return target_.load();}
    static void pace(std::chrono::steady_clock::time_point frame_start){
        const auto rate=target_.load();
        if(rate>0){
            const auto period=std::chrono::duration<double>(1.0/static_cast<double>(rate));
            std::this_thread::sleep_until(frame_start+std::chrono::duration_cast<std::chrono::steady_clock::duration>(period));
        }
    }
};
class QualitySettings {
public:
    static void set_vSyncCount(std::int32_t value){
        // Main sets zero: SDL presentation is software-driven and the explicit
        // target rate above controls this PC development backend.
        if(value!=0)throw cs::NotSupportedException("Nonzero vsync is not implemented by the PC software backend");
    }
    static std::int32_t get_vSyncCount(){return 0;}
};
struct NativePluginContext {std::int32_t language{};bool logging{};bool initialized{};};
// KairoPlugin._getPackageName's non-Android/non-UnityEditor result. SDL does
// not load UnityEditor.PlayerSettings or impersonate an Android package.
inline cs::String native_package_name(){return cs::String(u"");}
// KairoPlugin._getRelease non-Android branch, kept as the source platform
// compatibility value; this is not the Windows/3DS operating-system version.
inline cs::String native_release(){return cs::String(u"5.0");}
// KairoPlugin._getStatusBarHeight/_getStatusBarPosition non-Android branches.
inline std::int32_t native_status_bar_height(){return 0;}
inline std::int32_t native_status_bar_position(){return 0;}
inline std::mutex native_plugin_mutex;
inline NativePluginContext native_plugin_context;
inline void native_plugin_init(std::int32_t language,bool logging,const cs::String& license_key){
    // Licensing is removed by the user's service policy. The provided key is
    // neither retained, logged nor interpreted, and no success token is minted.
    (void)license_key;
    std::lock_guard<std::mutex> guard(native_plugin_mutex);
    native_plugin_context={language,logging,true};
}
inline NativePluginContext native_plugin_state(){
    std::lock_guard<std::mutex> guard(native_plugin_mutex);
    return native_plugin_context;
}
} // namespace pls::kairo
