// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.system.appli.GameAppli.hpp"
#include "kairo.unity.system.lineup.ui.LineupData.hpp"
#include "generated/java.util.JTool_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace kairo::unity::system::lineup::ui {

void LineupData::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(explain_,visitor);pls::cs::trace_value(url_,visitor);pls::cs::trace_value(file_,visitor);pls::cs::trace_value(ratio_,visitor);pls::cs::trace_value(image_,visitor);}

static PLS_NOINLINE void cs_init_fd683372658feff4_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.system.lineup.ui.LineupData",flag,[](){

});}

void LineupData::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_fd683372658feff4_slow(flag);}

void LineupData::create_init(pls::cs::Ref<LineupData> self) {
LineupData::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.#ctor",kairo);
{}

}

// M:kairo.unity.system.lineup.ui.LineupData.#ctor
pls::cs::Ref<LineupData> LineupData::create() {
LineupData::ensure_initialized();
 auto self = pls::cs::make_ref<LineupData>(); LineupData::create_init(self); return self; 
}

// M:kairo.unity.system.lineup.ui.LineupData.Load(System.Int32,System.String)
void LineupData::Load(pls::cs::Int32 gameId,pls::cs::String src) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.Load(System.Int32,System.String)",kairo);
{
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(src, literal(u"@"));});
gameId_ = gameId;
explain_ = array[0];
url_ = array[1];
file_ = array[2];
priority_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[3]);});
StringArray array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(array[4], literal(u"&"));});
ratio_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({array2.length(), 2}));});
for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
StringArray array3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(array2[i], literal(u","));});
{ auto cs_target = ratio_; auto cs_index = i; auto cs_value = IntArray::from({pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array3[0]);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array3[1]);})});cs_target.set_Item(cs_index,cs_value);}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetExplain
pls::cs::String LineupData::GetExplain() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetExplain",kairo);
{
return explain_;
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetURL
pls::cs::String LineupData::GetURL() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetURL",kairo);
{
return url_;
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetPriority
pls::cs::Int32 LineupData::GetPriority() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetPriority",kairo);
{
return priority_;
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetFileName
pls::cs::String LineupData::GetFileName() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetFileName",kairo);
{
if (kl_lang::StringEx::Length(file_) > 0) {
return pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"gm"), integer_string(gameId_)), file_), literal(u".png"));
}
return pls::cs::String::concat(pls::cs::String::concat(literal(u"gm"), integer_string(gameId_)), literal(u".png"));
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetImage
pls::cs::Ref<pls::kairo::Image> LineupData::GetImage() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetImage",kairo);
{
return image_;
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetRatio
pls::cs::Int32 LineupData::GetRatio() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetRatio",kairo);
{
kl_cfg::Config::ensure_initialized();

if (kl_lang::StringEx::Length(explain_) == 0 || kl_lang::StringEx::Length(url_) == 0) {
return 0;
}
if (([&]() -> bool { auto cs_left = gameId_; auto cs_right = kl_cfg::Config::PID(); return cs_left == cs_right; }()) && !kl_cfg::Config::TRIAL_VERSION()) {
return 0;
}
pls::cs::Ref<KairoBase> instance = KairoBase::GetInstance();
bool flag = false;
pls::cs::Int32 num;
pls::cs::Array<appli::GameAppli> appList = require(instance)->GetAppList(true, true);
for (pls::cs::Int32 i = 0; i < appList.length(); ++i) {
appli::GameAppli recoveredApp = appList[i];
if ([&]() -> bool { auto cs_left = recoveredApp.Pid; auto cs_right = gameId_; return cs_left == cs_right; }()) {
flag = true;
}
}
if (!flag) {
return 0;
}
for (pls::cs::Int32 j = 1; j < ratio_.length(); ++j) {
if (([&]() -> bool { auto cs_left = ratio_[j][0]; auto cs_right = kl_cfg::Config::PID(); return cs_left == cs_right; }()) && ratio_[j][1] != -1) {
return ratio_[j][1];
}
}
num = ratio_[0][1];
if (num < 0) {
num = 0;
}
return num;

}
}
} // namespace kairo::unity::system::lineup::ui
}
