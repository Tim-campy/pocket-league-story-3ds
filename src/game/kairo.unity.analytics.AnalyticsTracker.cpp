// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.lang.JSystem.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.analytics.AnalyticsTracker.AnalyticsData.hpp"
#include "kairo.unity.analytics.AnalyticsTracker.hpp"
#include "kairo.unity.io.HttpObject.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace kairo::unity::analytics::AnalyticsTracker {

static pls::cs::List<pls::cs::Ref<AnalyticsTracker_AnalyticsData>> analyticsBuffer__storage{};

static StringArray HIT_TYPES_storage{};

static bool isSetup__storage{};

static pls::cs::Ref<pls::cs::Object> lock__storage{};

static pls::cs::Ref<java::lang::JThread> thread__storage{};

static PLS_NOINLINE void cs_init_68277163e843ed70_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(analyticsBuffer__storage,visitor);pls::cs::trace_value(HIT_TYPES_storage,visitor);pls::cs::trace_value(isSetup__storage,visitor);pls::cs::trace_value(lock__storage,visitor);pls::cs::trace_value(thread__storage,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.analytics.AnalyticsTracker",flag,[](){
HIT_TYPES_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.analytics.AnalyticsTracker.HIT_TYPES",[&](){return StringArray::from({literal(u"pageview"), literal(u"screenview"), literal(u"event"), literal(u"transaction"), literal(u"item"), literal(u"social"), literal(u"exception"), literal(u"timing")});});
analyticsBuffer__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.analytics.AnalyticsTracker.analyticsBuffer_",[&](){return pls::cs::List<pls::cs::Ref<AnalyticsTracker_AnalyticsData>>::make();});
lock__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.analytics.AnalyticsTracker.lock_",[&](){return pls::cs::make_ref<pls::cs::Object>();});

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_68277163e843ed70_slow(flag);}

pls::cs::List<pls::cs::Ref<AnalyticsTracker_AnalyticsData>>& analyticsBuffer_(){AnalyticsTracker::ensure_initialized();return analyticsBuffer__storage;}

StringArray& HIT_TYPES(){AnalyticsTracker::ensure_initialized();return HIT_TYPES_storage;}

bool& isSetup_(){AnalyticsTracker::ensure_initialized();return isSetup__storage;}

pls::cs::Ref<pls::cs::Object>& lock_(){AnalyticsTracker::ensure_initialized();return lock__storage;}

pls::cs::Ref<java::lang::JThread>& thread_(){AnalyticsTracker::ensure_initialized();return thread__storage;}

// M:kairo.unity.analytics.AnalyticsTracker.TrackPageView(System.Boolean,System.String,System.String[])
void TrackPageView(bool packageName,pls::cs::String id,StringArray p) {
AnalyticsTracker::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.TrackPageView(System.Boolean,System.String,System.String[])",kairo);
{
if (!AnalyticsTracker::isSetup_()) {
return;
}
pls::cs::String text = literal(u"");
for (pls::cs::Int32 i = 0; i < p.length(); ++i) {
if (i != 0) {
text = pls::cs::String::concat(text,literal(u"/"));
}
text = pls::cs::String::concat(text,p[i]);
}
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(text, literal(u"/"));})) {
text = pls::cs::String::concat(literal(u"/"), text);
}
if (packageName) {
text = pls::cs::String::concat(pls::cs::String::concat(literal(u"/"), pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->GetPackageName();})), text);
}
auto cs_left_1 = pls::cs::String::concat(([&]() { auto cs_left_1 = pls::cs::String::concat(([&]() { auto cs_left_1 = pls::cs::String::concat(([&]() { auto cs_left_1 = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"https://ssl.google-analytics.com/collect?&v="), integer_string(1)), literal(u"&tid=")), id), literal(u"&cid=")), AnalyticsTracker::MakeClientId()), literal(u"&t=")); auto cs_right_1 = AnalyticsTracker::HIT_TYPES()[0]; return pls::cs::String::concat(cs_left_1,cs_right_1); }()), literal(u"&dl=")); auto cs_right_1 = AnalyticsTracker::Encode(literal(u"http://kairopark.jp")); return pls::cs::String::concat(cs_left_1,cs_right_1); }()), literal(u"&an=")); auto cs_right_1 = AnalyticsTracker::GetApplicationName(); return pls::cs::String::concat(cs_left_1,cs_right_1); }()), literal(u"&dp=")); auto cs_right_1 = AnalyticsTracker::Encode(text);
pls::cs::String text2 = pls::cs::String::concat(cs_left_1,cs_right_1);
text2 = pls::cs::String::concat(pls::cs::String::concat(text2, literal(u"&z=")), integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(([&]() { auto cs_arg0 = pls::cs::to_int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();})); return pls::cs::make_ref<pls::cs::Random>(cs_arg0); }()))->Next();})));
{pls::cs::MonitorScope cs_monitor_0(AnalyticsTracker::lock_());{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = AnalyticsTracker::analyticsBuffer_(); auto cs_arg0 = AnalyticsTracker_AnalyticsData::create(text2); cs_receiver.Add(cs_arg0); }());});
}}
AnalyticsTracker::Save();
}

}

// M:kairo.unity.analytics.AnalyticsTracker.DispatchPageView
void DispatchPageView() {
AnalyticsTracker::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.DispatchPageView",kairo);
{
if (!AnalyticsTracker::isSetup_()) {
return;
}
if ((AnalyticsTracker::analyticsBuffer_().get_Count() <= 0) || ([&]() { pls::cs::Ref<java::lang::JThread> cs_left = AnalyticsTracker::thread_(); pls::cs::Ref<java::lang::JThread> cs_right = pls::cs::Ref<java::lang::JThread>{}; return java::lang::JThread::op_Inequality(cs_left,cs_right); }())) {
return;
}
AnalyticsTracker::thread_() = java::lang::JThread::create_2(([&](){return pls::cs::Delegate<void()>::from_static("M:kairo.unity.analytics.AnalyticsTracker.Run",[]()->void{AnalyticsTracker::Run();});}()));
require(AnalyticsTracker::thread_())->Start();
}

}

// M:kairo.unity.analytics.AnalyticsTracker.Run
void Run() {
AnalyticsTracker::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.Run",kairo);
{
pls::cs::run_finally([&]() {try {
while (AnalyticsTracker::analyticsBuffer_().get_Count() > 0) {
pls::cs::Ref<AnalyticsTracker_AnalyticsData> analyticsData = pls::cs::Ref<AnalyticsTracker_AnalyticsData>{};
pls::cs::Ref<io::HttpObject> httpObject = pls::cs::Ref<io::HttpObject>{};
{pls::cs::MonitorScope cs_monitor_169(AnalyticsTracker::lock_());{
if (AnalyticsTracker::analyticsBuffer_().get_Count() > 0) {
analyticsData = AnalyticsTracker::analyticsBuffer_().get_Item(0);
}
}}
if (!is_null(analyticsData)) {
httpObject = io::HttpObject::create(false);
try {
require(httpObject)->Connect(require(analyticsData)->Url, ByteArray{}, false);
} catch(const pls::cs::Exception& cs_caught_170) {pls::cs::capture_exception(cs_caught_170);
{
++require(analyticsData)->Retry;
AnalyticsTracker::Save();
throw;
}}
pls::diagnostic::api_call([&]() -> decltype(auto) {return AnalyticsTracker::analyticsBuffer_().Remove(analyticsData);});
AnalyticsTracker::Save();
continue;
}
break;
}
} catch(const pls::cs::Exception& cs_caught_171) {auto t=pls::cs::capture_exception(cs_caught_171);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Log::Info(t);});
}}}, [&]() {
AnalyticsTracker::thread_() = pls::cs::Ref<java::lang::JThread>{};
});
}

}

// M:kairo.unity.analytics.AnalyticsTracker.Encode(System.String)
pls::cs::String Encode(pls::cs::String url) {
AnalyticsTracker::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.Encode(System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::uri_escape_data_string(url);});
}

}

// M:kairo.unity.analytics.AnalyticsTracker.MakeClientId
pls::cs::String MakeClientId() {
AnalyticsTracker::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.MakeClientId",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Guid::NewGuid();}); return cs_receiver.ToString(); }());});
}

}

// M:kairo.unity.analytics.AnalyticsTracker.GetApplicationName
pls::cs::String GetApplicationName() {
AnalyticsTracker::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.GetApplicationName",kairo);
{
pls::cs::String packageName = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->GetPackageName();});
return pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(packageName, pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_last_index_of(packageName, literal(u"."));})) + 1);});
}

}

// M:kairo.unity.analytics.AnalyticsTracker.Save
void Save() {
AnalyticsTracker::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.Save",kairo);
{
if (!AnalyticsTracker::isSetup_()) {
return;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); pls::cs::Delegate<void()> cs_arg0 = pls::cs::Delegate<void()>::from_closure(nullptr,std::string("M:kairo.unity.analytics.AnalyticsTracker.Save:3526"),[]() -> void {{
try {
pls::cs::Ref<pls::cs::StringBuilder> stringBuilder = ([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }());
{pls::cs::MonitorScope cs_monitor_1(AnalyticsTracker::lock_());{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->Append(u'1');});
for (pls::cs::Int32 i = 0; i < AnalyticsTracker::analyticsBuffer_().get_Count(); ++i) {
pls::cs::Ref<AnalyticsTracker_AnalyticsData> analyticsData = AnalyticsTracker::analyticsBuffer_().get_Item(i);
if (!is_null(analyticsData)) {
if (i != 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->Append(char16_t(10));});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->Append(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(require(analyticsData)->Url, literal(u"\t")), integer_string(require(analyticsData)->Retry)), literal(u"\t")), integer_string(require(analyticsData)->Date)));});
}
}
}}
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::PlayerPrefs::SetString(literal(u"_AnalyticsTracker"), pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->ToString();}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::PlayerPrefs::Save();});
} catch(const pls::cs::Exception& cs_caught_2) {pls::cs::capture_exception(cs_caught_2);
{

}}
}}); require(cs_receiver)->RunOnUiThread(cs_arg0, true); }());});
}

}

// M:kairo.unity.analytics.AnalyticsTracker.Setup
void Setup() {
AnalyticsTracker::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.analytics.AnalyticsTracker.Setup",kairo);
{
if (AnalyticsTracker::isSetup_()) {
return;
}
AnalyticsTracker::isSetup_() = true;
try {
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::PlayerPrefs::GetString(literal(u"_AnalyticsTracker"), pls::cs::String{});});
if (!is_null(text) && (text.length() > 0)) {
{pls::cs::MonitorScope cs_monitor_184(AnalyticsTracker::lock_());{
AnalyticsTracker::analyticsBuffer_() = pls::cs::List<pls::cs::Ref<AnalyticsTracker_AnalyticsData>>::make();
text = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(text, 1);});
if (text.length() > 0) {
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=text;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(10);return pls::cs::string_split(cs_text,cs_separators);}());});
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
StringArray array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=array[i];auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(9);return pls::cs::string_split(cs_text,cs_separators);}());});
pls::cs::Ref<AnalyticsTracker_AnalyticsData> analyticsData = AnalyticsTracker_AnalyticsData::create();
{ auto cs_target = analyticsData; auto cs_value = array2[0]; require(cs_target)->Url = cs_value; }
{ auto cs_target = analyticsData; pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(array2[1]);}); require(cs_target)->Retry = cs_value; }
{ auto cs_target = analyticsData; pls::cs::Int64 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int64_parse(array2[2]);}); require(cs_target)->Date = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return AnalyticsTracker::analyticsBuffer_().Add(analyticsData);});
}
}
}}
} else {
pls::cs::String installReferrer = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_install_referrer(pls::cs::String{});});
{pls::cs::MonitorScope cs_monitor_185(AnalyticsTracker::lock_());{
AnalyticsTracker::analyticsBuffer_() = pls::cs::List<pls::cs::Ref<AnalyticsTracker_AnalyticsData>>::make();
if (!is_null(installReferrer) && (installReferrer.length() > 0)) {
{ bool cs_arg0 = true; pls::cs::String cs_arg1 = literal(u"UA-35228877-1"); auto cs_arg2 = StringArray::make(2); cs_arg2.at(0) = literal(u"referrer"); cs_arg2.at(1) = installReferrer; AnalyticsTracker::TrackPageView(cs_arg0,cs_arg1,cs_arg2); }
}
AnalyticsTracker::Save();
}}
}
AnalyticsTracker::DispatchPageView();
} catch(const pls::cs::Exception& cs_caught_186) {pls::cs::capture_exception(cs_caught_186);
{

}}
}

}
} // namespace kairo::unity::analytics::AnalyticsTracker
}
