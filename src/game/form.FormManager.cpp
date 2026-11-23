// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "form.FormManager.hpp"
#include "form.SubForm.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "java.lang.JRunnable.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.surface.SurfaceManagerBase.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "main.AppData.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_cfg = pls::generated::kairo::common::cfg;

namespace pls::game {
namespace form {

void FormManager::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::kairo::FormManagerBase::trace_edges(visitor);}

static pls::cs::Ref<FormManager> FormManager_instance__storage{};

static PLS_NOINLINE void cs_init_6485f92c2f04639f_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(FormManager_instance__storage,visitor);});static pls::cs::TypeInitState state;state.run("form.FormManager",flag,[](){
FormManager_instance__storage = pls::cs::evaluate_type_initializer_field("F:form.FormManager.instance_",[&](){return pls::cs::Ref<FormManager>{};});

});}

void FormManager::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_6485f92c2f04639f_slow(flag);}

pls::cs::Ref<FormManager>& FormManager::instance_(){FormManager::ensure_initialized();return FormManager_instance__storage;}

void FormManager::create_init(pls::cs::Ref<FormManager> self) {
FormManager::ensure_initialized();
pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(self)->source_construct();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.#ctor",game);
{
self->oldTime_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();});
self->SetTargetFps(20);
self->fps_ = 1;
self->lastTopFormId_ = -1;
self->lastTopFormType_ = -1;
}

}

// M:form.FormManager.#ctor
pls::cs::Ref<FormManager> FormManager::create() {
FormManager::ensure_initialized();
 auto self = pls::cs::make_ref<FormManager>(); FormManager::create_init(self); return self; 
}

// M:form.FormManager.GetInstance
pls::cs::Ref<FormManager> FormManager::GetInstance() {
FormManager::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.GetInstance",game);
{
if (is_null(FormManager::instance_())) {
FormManager::instance_() = FormManager::create();
}
return FormManager::instance_();
}

}

// M:form.FormManager.Resume
void FormManager::Resume() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.Resume",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(this))->source_Resume();});
}
}

// M:form.FormManager.PreUpdate
void FormManager::PreUpdate() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.PreUpdate",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(this))->source_PreUpdate();});
pls::cs::Ref<pls::kairo::FormBase> topForm = pls::diagnostic::api_call([&]() -> decltype(auto) {return this->GetTopForm();});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(topForm)->GetId();}) == 4) {
pls::cs::Ref<SubForm> subForm = pls::cs::unbox<pls::cs::Ref<SubForm>>(pls::cs::box(topForm));
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(topForm)->GetId();}); auto cs_right = lastTopFormId_; return cs_left == cs_right; }()) && require(subForm)->type_ == 0 && require(subForm)->type_ == lastTopFormType_ && require(subForm)->humanCharaIndex_ != lastTopFormChara_) {
require(subForm)->wait_ = 5;
}
lastTopFormType_ = require(subForm)->type_;
lastTopFormChara_ = require(subForm)->humanCharaIndex_;
}
lastTopFormId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(topForm)->GetId();});
}
}

// M:form.FormManager.Updated
void FormManager::Updated() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.Updated",game);
{
kl_cfg::Config::ensure_initialized();

pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
pls::cs::Int32 num = tagFps_;
if (kl_cfg::Config::DEBUG_SLOW() && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();}))->CheckKeyState(1024);})) {
num = 1;
}
pls::cs::Int32 num2 = 1000 / num;
if (!fpsUnlimited_) {
try {
pls::cs::Ref<pls::kairo::Canvas> instance2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();});
pls::cs::Ref<kairo::unity::surface::SurfaceManagerBase> surfaceManager = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<kairo::unity::surface::SurfaceManagerBase> {auto cs_canvas=instance2;return pls::cs::unbox<pls::cs::Ref<kairo::unity::surface::SurfaceManagerBase>>(require(cs_canvas)->GetSourceSurfaceManager());}());});
while ((pls::cs::cast_integral<pls::cs::Int64>(0) <= ([&]() -> pls::cs::Int64 { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();}); auto cs_right = oldTime_; return cs_left - cs_right; }())) && (([&]() -> pls::cs::Int64 { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();}); auto cs_right = oldTime_; return cs_left - cs_right; }()) < pls::cs::cast_integral<pls::cs::Int64>(num2))) {
java::lang::JThread::Sleep(0ll);
require(surfaceManager)->CheckScreenRotation();
}
} catch(const pls::cs::Exception& cs_caught_100) {pls::cs::capture_exception(cs_caught_100);
{

}}
}
oldTime_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();});
auto cs_left_76 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();}); auto cs_right_76 = oldTime_;
pls::cs::Int64 num3 = cs_left_76 - cs_right_76;
if (num3 < pls::cs::cast_integral<pls::cs::Int64>(0)) {
num3 = pls::cs::cast_integral<pls::cs::Int64>(num2);
}
if (([&]() -> pls::cs::Int64 { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();}); auto cs_right = fpsTime_; return cs_left - cs_right; }()) >= pls::cs::cast_integral<pls::cs::Int64>(1000)) {
fps_ = frameCount_;
if (fps_ <= 0) {
fps_ = 1;
}
frameCount_ = 0;
fpsTime_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();});
} else {
++frameCount_;
}
loopCounter_ = ((loopCounter_ + 1) % 2147483647 /* Int32.MaxValue */);
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(this))->source_Updated();});

}
}

// M:form.FormManager.PreDraw
void FormManager::PreDraw() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.PreDraw",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(this))->source_PreDraw();});
}
}

// M:form.FormManager.Drawn
void FormManager::Drawn() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.Drawn",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(pls::cs::static_pointer_cast<pls::kairo::FormManagerBase>(this))->source_Drawn();});
}
}

// M:form.FormManager.GetFps
pls::cs::Int32 FormManager::GetFps() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.GetFps",game);
{
return fps_;
}
}

// M:form.FormManager.StartVibrator(System.Int32)
void FormManager::StartVibrator(pls::cs::Int32 ms) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.StartVibrator(System.Int32)",game);
{
kairo::unity::ui::Canvas::Vibrator(pls::cs::cast_integral<pls::cs::Int64>(ms));
}
}

// M:form.FormManager.StopVibrator
void FormManager::StopVibrator() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.StopVibrator",game);
{
vibeFlag_ = 0;
}
}

// M:form.FormManager.SetTargetFps(System.Int32)
void FormManager::SetTargetFps(pls::cs::Int32 fps) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.SetTargetFps(System.Int32)",game);
{
tagFps_ = fps + 1;
}
}

// M:form.FormManager.GetTargetFps
pls::cs::Int32 FormManager::GetTargetFps() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.FormManager.GetTargetFps",game);
{
return tagFps_ - 1;
}
}
} // namespace form
}
