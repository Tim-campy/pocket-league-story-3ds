// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.common.cfg.Config.hpp"
#include "kairo.unity.native.KairoPlugin.hpp"
namespace pls::game {
namespace kairo::unity::native::KairoPlugin {

static pls::cs::Int32 appHeight__storage{};

static pls::cs::Int32 appWidth__storage{};

static pls::cs::Int32 isTablet__storage{};

static pls::cs::Int32 sdk__storage{};

static pls::cs::Int32 statusBarHeight__storage{};

static pls::cs::Int32 statusBarPosition__storage{};

static pls::cs::Int32 systemBarHeight__storage{};

static pls::cs::Int32 unityVarsion__storage{};

static PLS_NOINLINE void cs_init_381ecfc7910ffbab_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(appHeight__storage,visitor);pls::cs::trace_value(appWidth__storage,visitor);pls::cs::trace_value(isTablet__storage,visitor);pls::cs::trace_value(sdk__storage,visitor);pls::cs::trace_value(statusBarHeight__storage,visitor);pls::cs::trace_value(statusBarPosition__storage,visitor);pls::cs::trace_value(systemBarHeight__storage,visitor);pls::cs::trace_value(unityVarsion__storage,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.native.KairoPlugin",flag,[](){
sdk__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.sdk_",[&](){return -1;});
isTablet__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.isTablet_",[&](){return -1;});
systemBarHeight__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.systemBarHeight_",[&](){return 2147483647 /* Int32.MaxValue */;});
statusBarHeight__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.statusBarHeight_",[&](){return 2147483647 /* Int32.MaxValue */;});
unityVarsion__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.unityVarsion_",[&](){return 2147483647 /* Int32.MaxValue */;});
statusBarPosition__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.statusBarPosition_",[&](){return 2147483647 /* Int32.MaxValue */;});
appWidth__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.appWidth_",[&](){return -1;});
appHeight__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.native.KairoPlugin.appHeight_",[&](){return -1;});

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_381ecfc7910ffbab_slow(flag);}

pls::cs::Int32& appHeight_(){KairoPlugin::ensure_initialized();return appHeight__storage;}

pls::cs::Int32& appWidth_(){KairoPlugin::ensure_initialized();return appWidth__storage;}

pls::cs::Int32& isTablet_(){KairoPlugin::ensure_initialized();return isTablet__storage;}

pls::cs::Int32& sdk_(){KairoPlugin::ensure_initialized();return sdk__storage;}

pls::cs::Int32& statusBarHeight_(){KairoPlugin::ensure_initialized();return statusBarHeight__storage;}

pls::cs::Int32& statusBarPosition_(){KairoPlugin::ensure_initialized();return statusBarPosition__storage;}

pls::cs::Int32& systemBarHeight_(){KairoPlugin::ensure_initialized();return systemBarHeight__storage;}

pls::cs::Int32& unityVarsion_(){KairoPlugin::ensure_initialized();return unityVarsion__storage;}

// M:kairo.unity.native.KairoPlugin.GetReleaseNumber
pls::cs::String GetReleaseNumber() {
KairoPlugin::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.GetReleaseNumber",kairo);
{
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_release();});
for (pls::cs::Int32 num = pls::cs::Int32(text.length()) - 1; num >= 0; --num) {
if (((pls::cs::cast_integral<pls::cs::Int32>(u'0') > pls::cs::cast_integral<pls::cs::Int32>(text.at(num))) || (pls::cs::cast_integral<pls::cs::Int32>(text.at(num)) >= pls::cs::cast_integral<pls::cs::Int32>(u'9'))) && (pls::cs::cast_integral<pls::cs::Int32>(text.at(num)) != pls::cs::cast_integral<pls::cs::Int32>(u'.'))) {
text = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_remove(text, num);});
}
}
if (text.length() == 0) {
text = literal(u"7.0");
}
return text;
}

}

// M:kairo.unity.native.KairoPlugin.SetClockTime(System.Int64,System.Int32)
void SetClockTime(pls::cs::Int64 time,pls::cs::Int32 precision) {
KairoPlugin::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.SetClockTime(System.Int64,System.Int32)",kairo);
{
return;
}

}

// M:kairo.unity.native.KairoPlugin.CancelNotifications(System.Boolean,System.Boolean)
void CancelNotifications(bool notify,bool ararm) {
KairoPlugin::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.CancelNotifications(System.Boolean,System.Boolean)",kairo);
{
return;
}

}

// M:kairo.unity.native.KairoPlugin.GetGCMRegistrationId
pls::cs::String GetGCMRegistrationId() {
KairoPlugin::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.GetGCMRegistrationId",kairo);
{
return pls::cs::String{};
}

}

// M:kairo.unity.native.KairoPlugin.GetNotificationFilter
pls::cs::Int32 GetNotificationFilter() {
KairoPlugin::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.GetNotificationFilter",kairo);
{
return 0;
}

}

// M:kairo.unity.native.KairoPlugin.SetNotificationBackground(System.Boolean)
void SetNotificationBackground(bool enable) {
KairoPlugin::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.SetNotificationBackground(System.Boolean)",kairo);
{
return;
}

}

// M:kairo.unity.native.KairoPlugin.IsWeakDrawDevice
bool IsWeakDrawDevice() {
KairoPlugin::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.native.KairoPlugin.IsWeakDrawDevice",kairo);
{
return false;
}

}
} // namespace kairo::unity::native::KairoPlugin
}
