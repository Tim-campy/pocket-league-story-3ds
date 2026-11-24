// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "native.AppPlugin.hpp"

namespace pls::game {
namespace native::AppPlugin {

// M:native.AppPlugin.Init(System.Int32,System.Boolean,System.String)
void Init(pls::cs::Int32 language, bool log, pls::cs::String licenseKey) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:native.AppPlugin.Init(System.Int32,System.Boolean,System.String)",
                     game);
    {
        pls::kairo::native_plugin_init(language, log, licenseKey);
        return;
    }
}

// M:native.AppPlugin.Finish
void Finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:native.AppPlugin.Finish", game);
    {
        pls::kairo::request_host_finish();
        return;
    }
}

// M:native.AppPlugin.ShowPurchaseLog(System.String,System.Int32,System.String,System.Boolean)
pls::cs::Int32 ShowPurchaseLog(pls::cs::String title, pls::cs::Int32 num, pls::cs::String text, bool log) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:native.AppPlugin.ShowPurchaseLog(System.String,System.Int32,System.String,System.Boolean)", game);
    {
        return 0;
    }
}

// M:native.AppPlugin.LaunchMailer(System.String,System.String)
void LaunchMailer(pls::cs::String subject, pls::cs::String text) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:native.AppPlugin.LaunchMailer(System.String,System.String)", game);
    {
        return;
    }
}
} // namespace native::AppPlugin
}
