// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "analytics.AnalyticsTracker.hpp"
#include "form.BootForm.hpp"
#include "form.FormManager.hpp"
#include "form.SpForm.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kairo.unity.util.KairoException.hpp"
#include "kairo.unity.util.Language.hpp"
#include "kairo.unity.util.NotPermitException.hpp"
#include "main.AppData.hpp"
#include "main.Main.hpp"
#include "native.AppPlugin.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;

namespace pls::game {
namespace main {

void Main::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::kairo::IApplication::trace_edges(visitor);}

static pls::cs::Ref<pls::kairo::SoundBase> Main_jingle__storage{};

static pls::cs::Int32 Main_jingleWait__storage{};

static PLS_NOINLINE void cs_init_bad15ea7469ee2b9_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(Main_jingle__storage,visitor);pls::cs::trace_value(Main_jingleWait__storage,visitor);});static pls::cs::TypeInitState state;state.run("main.Main",flag,[](){

});}

void Main::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_bad15ea7469ee2b9_slow(flag);}

pls::cs::Ref<pls::kairo::SoundBase>& Main::jingle_(){Main::ensure_initialized();return Main_jingle__storage;}

pls::cs::Int32& Main::jingleWait_(){Main::ensure_initialized();return Main_jingleWait__storage;}

void Main::create_init(pls::cs::Ref<Main> self) {
Main::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.#ctor",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return self->source_Init(self);});
}

}
} // namespace main

pls::cs::Ref<pls::kairo::IApplication> create_application(){return main::Main::create();}
namespace main {

// M:main.Main.#ctor
pls::cs::Ref<Main> Main::create() {
Main::ensure_initialized();
 auto self = pls::cs::make_ref<Main>(); Main::create_init(self); return self; 
}

// M:main.Main.GetInstance
pls::cs::Ref<Main> Main::GetInstance() {
Main::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.GetInstance",game);
{
return pls::cs::unbox<pls::cs::Ref<Main>>(pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();})));
}

}

// M:main.Main.OnCreate
void Main::OnCreate() {PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnCreate",game);
{
kl_cfg::Config::ensure_initialized();

pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::cs::static_pointer_cast<pls::kairo::IApplication>(this))->source_OnCreate();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::Get();}); bool cs_arg1 = kl_cfg::Config::PRINT(); pls::cs::String cs_arg2 = kl_cfg::Config::BASE64_PUBLIC_KEY(); native::AppPlugin::Init(cs_arg0, cs_arg1, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return this->SetViewport(240, 280);});
pls::cs::Ref<AppData> instance = AppData::GetInstance();
pls::cs::Ref<pls::kairo::Canvas> instance2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->SetBackground(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::cs::Ref<form::FormManager> instance3 = form::FormManager::GetInstance();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->SetDisplayCurrent(this);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance3)->ChangeCurrentForm(require(instance)->frmBoot_);});
pls::cs::Ref<kl_util::JarInflater> jarInflater = pls::cs::Ref<kl_util::JarInflater>{};
pls::cs::run_finally([&]() {try {
StringArray array = StringArray{};
StringArray2 array2 = StringArray2{};
jarInflater = kl_util::JarInflater::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::RecordStore::ReadRecord(1, 6);}));
array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::LoadStringArray(jarInflater, literal(u"softkey.txt"));});
if ([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(StringArray{}); return cs_left != cs_right; }()) {
array2 = StringArray2::make(array.length());
for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
array2[i] = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Split(array[i], literal(u"\t"), false, false, false);});
}
kairo::unity::util::Language::SetSoftLabelTable(array2);
}
array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::LoadStringArray(jarInflater, literal(u"text.txt"));});
if ([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(StringArray{}); return cs_left != cs_right; }()) {
array2 = StringArray2::make(array.length());
for (pls::cs::Int32 j = 0; j < array2.length(); ++j) {
array[j] = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Replace(array[j], literal(u"\\n"), literal(u"\n"));});
array2[j] = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Split(array[j], literal(u"\t"), false, false, false);});
}
kairo::unity::util::Language::SetTextTable(array2);
}
} catch(const pls::cs::Exception& cs_caught_150) {auto t=pls::cs::capture_exception(cs_caught_150);
{
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Log::Info(t);});
}
}}}, [&]() {
if (!is_null(jarInflater)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jarInflater)->Close();});
}
});

}
}

// M:main.Main.OnUpdate
void Main::OnUpdate() {PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnUpdate",game);
{
kl_cfg::Config::ensure_initialized();

pls::cs::Ref<AppData> instance = AppData::GetInstance();
pls::cs::Ref<pls::kairo::Canvas> instance2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();});
pls::cs::Ref<form::FormManager> instance3 = form::FormManager::GetInstance();
try {
require(instance3)->SetTargetFps(20);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance3)->Execute();});
if ((!is_null(Main::jingle_()) && (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(Main::jingle_())->GetState();}) == 3 || pls::diagnostic::api_call([&]() -> decltype(auto) {return require(Main::jingle_())->GetState();}) == 0)) && (Main::jingleWait_()-- <= 0)) {
Main::SetJingle(pls::cs::Ref<pls::kairo::SoundBase>{}, 20);
}
if (kl_cfg::Config::FPS_UNLIMITED()) {
require(instance3)->SetTargetFps(120);
}
if (kl_cfg::Config::DEBUG_FAST() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->CheckKeyState(16);})) {
require(instance3)->SetTargetFps(400);
}
if (kl_cfg::Config::DEBUG_SLOW() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->CheckKeyState(1024);})) {
require(instance3)->SetTargetFps(2);
}
pls::kairo::QualitySettings::set_vSyncCount(0);
pls::kairo::UnityApplication::set_targetFrameRate(require(instance3)->GetTargetFps());
} catch(const pls::cs::Exception& cs_caught_152) {auto cs_exception_152=pls::cs::capture_exception(cs_caught_152);
if(pls::cs::dynamic_pointer_cast<kairo::unity::util::NotPermitException>(cs_exception_152)) {auto ex=pls::cs::dynamic_pointer_cast<kairo::unity::util::NotPermitException>(cs_exception_152);{
pls::cs::Ref<kairo::unity::ui::Dialog> dialog = kairo::unity::ui::Dialog::create(0, literal(u"確認"));
{ auto cs_left_265 = pls::cs::String::concat(kairo::unity::util::Language::LT(literal(u"起動できません。"), pls::cs::String(u"")), literal(u"<br>")); auto cs_right_265 = kairo::unity::util::KairoException::get_DisplayMessage(ex);
pls::cs::String cs_arg0 = pls::cs::String::concat(cs_left_265,cs_right_265); require(dialog)->SetText(cs_arg0); }
require(dialog)->Show();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance3)->RemoveAllForms();});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance3)->GetFormsNum();}) == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return this->Terminate();});
}
}}
else if(pls::cs::exception_is(cs_exception_152,"System.Exception")) {auto ex2=cs_exception_152;{
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Log::Info(ex2);});
}
bool flag = false;
if (is_null(require(instance)->save_)) {
pls::cs::Ref<kairo::unity::ui::Dialog> dialog2 = kairo::unity::ui::Dialog::create(0, literal(u"ｴﾗｰ"));
{ pls::cs::String cs_arg0 = pls::cs::String::concat(literal(u"エラーが発生しました。"), ((kl_cfg::Config::DEBUG()) ? ((pls::cs::String::concat(literal(u"\n"), object_string(pls::cs::box(ex2))))) : (pls::cs::String(u"")))); require(dialog2)->SetText(cs_arg0); }
require(dialog2)->Show();
if ((pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->GetKeypadState();})) & 0x800) != 0) {
flag = true;
}
} else {
pls::cs::String text = pls::cs::String(u"");
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance3)->GetFormsNum();}); ++i) {
text = pls::diagnostic::api_call([&]() -> decltype(auto) {return concat_objects3(pls::cs::box(text), pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance3)->GetForm(i);})), pls::cs::box(literal(u"\n")));});
}
{ auto cs_target = require(require(instance)->sysSave_)->strs; auto cs_index = 10; auto cs_old = cs_target.at(cs_index); auto cs_rhs = pls::cs::String::concat(pls::cs::String::concat(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(ex2)->ToString();}), literal(u":")), text); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); cs_target.at(cs_index) = cs_value; }
if (kl_lang::StringEx::Length(require(require(instance)->sysSave_)->strs[10]) > 1024) {
{ auto cs_target = require(require(instance)->sysSave_)->strs; auto cs_index = 10; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = require(require(instance)->sysSave_)->strs[10]; pls::cs::Int32 cs_arg1 = kl_lang::StringEx::Length(require(require(instance)->sysSave_)->strs[10]) - 1024; return kl_lang::StringEx::SubstringJ(cs_arg0, cs_arg1); }());cs_target.set_Item(cs_index,cs_value);}
}
try {
require(instance)->SaveSystem();
} catch(const pls::cs::Exception& cs_caught_153) {pls::cs::capture_exception(cs_caught_153);
{

}}
pls::cs::Ref<kairo::unity::ui::Dialog> dialog3 = kairo::unity::ui::Dialog::create(0, literal(u"ｴﾗｰ"));
{ pls::cs::String cs_arg0 = pls::cs::String::concat(literal(u"エラーが発生しました。"), ((kl_cfg::Config::DEBUG()) ? ((pls::cs::String::concat(literal(u"\n"), object_string(pls::cs::box(ex2))))) : (pls::cs::String(u"")))); require(dialog3)->SetText(cs_arg0); }
require(dialog3)->Show();
if ((pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->GetKeypadState();})) & 0x800) != 0) {
flag = true;
}
}
if (flag) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance3)->RemoveAllForms();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = form::SpForm::create(ex2); return require(instance3)->Push(cs_arg0); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance3)->RemoveAllForms();});
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance3)->GetFormsNum();}) == 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return this->Terminate();});
}
}}
else {throw;} }

}
}

// M:main.Main.OnDraw
void Main::OnDraw() {PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnDraw",game);
{
try {
pls::cs::Ref<form::FormManager> instance = form::FormManager::GetInstance();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->OnDraw();});
} catch(const pls::cs::Exception& cs_caught_151) {auto t=pls::cs::capture_exception(cs_caught_151);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Log::Info(t);});
}}
}
}

// M:main.Main.OnResume
void Main::OnResume() {PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnResume",game);
{

}
}

// M:main.Main.OnSuspend
void Main::OnSuspend() {PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnSuspend",game);
{
analytics::AnalyticsTracker::DispatchPageView();
}
}

// M:main.Main.OnDestroy
void Main::OnDestroy() {PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.OnDestroy",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return native::AppPlugin::Finish();});
}
}

// M:main.Main.SetJingle(kairo.unity.ui.SoundBase,System.Int32)
void Main::SetJingle(pls::cs::Ref<pls::kairo::SoundBase> sound,pls::cs::Int32 wait) {
Main::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.SetJingle(kairo.unity.ui.SoundBase,System.Int32)",game);
{
pls::cs::Ref<AppData> instance = AppData::GetInstance();
pls::cs::Ref<pls::kairo::SoundPlayer> instance2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::SoundPlayer::GetInstance();});
Main::jingle_() = sound;
Main::jingleWait_() = wait;
if (is_null(Main::jingle_())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg1 = require(require(instance)->sysSave_)->ints[3] * 51; require(instance2)->SetVolume(0, cs_arg1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->SetVolume(0, 0);});
}
}

}

// M:main.Main.GetJingle
pls::cs::Ref<pls::kairo::SoundBase> Main::GetJingle() {
Main::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.GetJingle",game);
{
return Main::jingle_();
}

}

// M:main.Main.GetFormManager
pls::cs::Ref<pls::kairo::FormManagerBase> Main::GetFormManager() {PLS_METHOD_SCOPE("Assembly-CSharp","M:main.Main.GetFormManager",game);
{
return form::FormManager::GetInstance();
}
}
} // namespace main
}
