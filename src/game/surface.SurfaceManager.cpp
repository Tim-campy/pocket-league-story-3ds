// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "form.FormManager.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.ad.AdMobView.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.SurfaceManagerBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "main.AppData.hpp"
#include "surface.GamePad.hpp"
#include "surface.GameView.hpp"
#include "surface.SurfaceManager.hpp"
#include "surface.TouchEffectManager.hpp"
#include "system.KairoService.hpp"
#include "system.billing.MyBilling.hpp"
#include "system.billing.ui.BillingItem.hpp"
#include "system.surface.GameBanner.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace surface {

void SurfaceManager::trace_edges(const pls::cs::EdgeVisitor&visitor)const {SurfaceManagerBase::trace_edges(visitor);}

static pls::cs::Ref<system::surface::GameBanner> SurfaceManager_gban__storage{};

static pls::cs::Ref<GamePad> SurfaceManager_gpad__storage{};

static pls::cs::Ref<SurfaceManager> SurfaceManager_instance__storage{};

static pls::cs::Ref<GameView> SurfaceManager_view__storage{};

static PLS_NOINLINE void cs_init_f9cfa6da3459412e_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(SurfaceManager_gban__storage,visitor);pls::cs::trace_value(SurfaceManager_gpad__storage,visitor);pls::cs::trace_value(SurfaceManager_instance__storage,visitor);pls::cs::trace_value(SurfaceManager_view__storage,visitor);});static pls::cs::TypeInitState state;state.run("surface.SurfaceManager",flag,[](){

});}

void SurfaceManager::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_f9cfa6da3459412e_slow(flag);}

pls::cs::Ref<system::surface::GameBanner>& SurfaceManager::gban_(){SurfaceManager::ensure_initialized();return SurfaceManager_gban__storage;}

pls::cs::Ref<GamePad>& SurfaceManager::gpad_(){SurfaceManager::ensure_initialized();return SurfaceManager_gpad__storage;}

pls::cs::Ref<SurfaceManager>& SurfaceManager::instance_(){SurfaceManager::ensure_initialized();return SurfaceManager_instance__storage;}

pls::cs::Ref<GameView>& SurfaceManager::view_(){SurfaceManager::ensure_initialized();return SurfaceManager_view__storage;}

void SurfaceManager::create_init(pls::cs::Ref<SurfaceManager> self) {
SurfaceManager::ensure_initialized();
SurfaceManagerBase::create_init(pls::cs::static_pointer_cast<SurfaceManagerBase>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.SurfaceManager.#ctor",game);
{

}

}

// M:surface.SurfaceManager.#ctor
pls::cs::Ref<SurfaceManager> SurfaceManager::create() {
SurfaceManager::ensure_initialized();
 auto self = pls::cs::make_ref<SurfaceManager>(); SurfaceManager::create_init(self); return self; 
}

// M:surface.SurfaceManager.Setup
void SurfaceManager::Setup() {
SurfaceManager::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.SurfaceManager.Setup",game);
{
if (!is_null(SurfaceManager::instance_())) {
return;
}
SurfaceManager::instance_() = SurfaceManager::create();
pls::cs::Ref<pls::kairo::IApplication> currentApp = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();});
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return require(currentApp)->IsSide();})) {
{ auto cs_target = SurfaceManager::instance_(); auto cs_value = ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(currentApp)->GetWidth();}); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(currentApp)->GetHeight();}); return cs_left > cs_right; }()); require(cs_target)->wide_ = cs_value; }
} else {
{ auto cs_target = SurfaceManager::instance_(); auto cs_value = ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(currentApp)->GetWidth();}); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(currentApp)->GetHeight();}); return cs_left < cs_right; }()); require(cs_target)->wide_ = cs_value; }
}
pls::cs::Ref<pls::kairo::Canvas> instance = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_canvas=instance;auto cs_source=SurfaceManager::instance_();if(!cs_canvas)throw pls::cs::NullReferenceException();if(!cs_source){cs_canvas->host_source_surface({},{});return;}pls::kairo::SurfaceCallbacks cs_bindings;cs_bindings.raw_key_down=pls::cs::Delegate<void(std::int32_t,pls::cs::Ref<pls::kairo::KeyEvent>)>::bind(cs_source,"source-surface:raw_key_down",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](std::int32_t cs_key,pls::cs::Ref<pls::kairo::KeyEvent> cs_event){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();require(cs_source)->OnKeyDown(cs_key,cs_event);});cs_bindings.key_down=pls::cs::Delegate<void(std::int32_t)>::bind(cs_source,"source-surface:key_down",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](std::int32_t cs_key){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();require(cs_source)->OnKeyDown(cs_key);});cs_bindings.key_up=pls::cs::Delegate<void(std::int32_t)>::bind(cs_source,"source-surface:key_up",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](std::int32_t cs_key){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();require(cs_source)->OnKeyUp(cs_key);});cs_bindings.clear_touch=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:clear_touch",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();require(cs_source)->ClearTouchComponent();});cs_bindings.do_events=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:do_events",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();require(cs_source)->DoEvents();});cs_bindings.adjust_layout=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:adjust_layout",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();require(cs_source)->AdjustSurfaceLayout();});cs_bindings.begin_touch=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:begin_touch",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();require(cs_source)->BeginTouchRegist(cs_graphics);});cs_bindings.draw=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:draw",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();require(cs_source)->Draw(cs_graphics);});cs_bindings.end_touch=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:end_touch",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();require(cs_source)->EndTouchRegist(cs_graphics);});cs_bindings.draw_components=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:draw_components",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();require(cs_source)->DrawComponents(cs_graphics);});cs_bindings.touch=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::MotionEvent>)>::bind(cs_source,"source-surface:touch",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](pls::cs::Ref<pls::kairo::MotionEvent> cs_event){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();auto cs_list=require(cs_source)->GetSurfaceList();for(std::int32_t cs_index=kl_java_util::Vector_2_Size(cs_list)-1;cs_index>=0;--cs_index){auto cs_surface=kl_java_util::Vector_2_ElementAt(cs_list,cs_index);require(cs_surface)->OnReceiveTouchEvent(cs_event);}});cs_bindings.clear_game_touch=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:clear_game_touch",[cs_weak=pls::cs::DelegateCapture<SurfaceManagerBase>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();auto cs_list=require(cs_source)->GetSurfaceList();for(std::int32_t cs_index=0;cs_index<kl_java_util::Vector_2_Size(cs_list);cs_index=cs_index+1){auto cs_surface=kl_java_util::Vector_2_ElementAt(cs_list,cs_index);if(require(cs_surface)->IsGameSurface())require(cs_surface)->ClearTouchComponent();}});cs_canvas->host_source_surface(pls::cs::box(cs_source),pls::cs::make_ref<pls::kairo::CallbackFormSurface>(std::move(cs_bindings)));}());});
pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
pls::cs::run_finally([&]() {try {
jarInflater = kl_unity_util::JarInflater::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Storage::Read(3, false, literal(u"system.dat"));}));
GameView::Load(jarInflater);
GamePad::Load(jarInflater);
} catch(const pls::cs::Exception& cs_caught_4) {pls::cs::capture_exception(cs_caught_4);
{

}}}, [&]() {
if (!is_null(jarInflater)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jarInflater)->Close();});
}
jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = require(SurfaceManager::instance_())->surfaceList_; pls::cs::Ref<kairo::unity::surface::SurfaceBase> cs_arg0 = ([&]() { auto cs_value = GameView::GetInstance(); SurfaceManager::view_() = cs_value; return cs_value; }()); require(cs_receiver)->Add_1(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = require(SurfaceManager::instance_())->surfaceList_; pls::cs::Ref<kairo::unity::surface::SurfaceBase> cs_arg0 = ([&]() { auto cs_value = GamePad::GetInstance(); SurfaceManager::gpad_() = cs_value; return cs_value; }()); require(cs_receiver)->Add_1(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = require(SurfaceManager::instance_())->surfaceList_; pls::cs::Ref<kairo::unity::surface::SurfaceBase> cs_arg0 = ([&]() { auto cs_value = system::surface::GameBanner::GetInstance(); SurfaceManager::gban_() = cs_value; return cs_value; }()); require(cs_receiver)->Add_1(cs_arg0); }());});
}

}

// M:surface.SurfaceManager.AdjustSurfaceLayout
void SurfaceManager::AdjustSurfaceLayout() {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.SurfaceManager.AdjustSurfaceLayout",game);
{
kl_cfg::Config::ensure_initialized();
GamePad::ensure_initialized();

pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
pls::cs::Ref<pls::kairo::Canvas> instance2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();});
pls::cs::Ref<TouchEffectManager> instance3 = TouchEffectManager::GetInstance();
pls::cs::Ref<form::FormManager> instance4 = form::FormManager::GetInstance();
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance4)->GetFormsNum();}) == 0) {
return;
}
pls::cs::Ref<pls::kairo::FormBase> form = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance4)->GetForm(0);});
bool flag = require(SurfaceManager::gpad_())->GetHeight() == 0;
UpdateAdMobView();
if (!kairo::unity::ui::Canvas::IsGetStatusBarHeight(require(instance2))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->GetStatusBarHeight();});
}
if (!kairo::unity::ui::Canvas::IsGetStatusBarPosition(require(instance2))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->GetStatusBarPosition();});
}
pls::cs::Ref<pls::kairo::IApplication> currentApp = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();});
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(currentApp)->GetWidth();});
pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(currentApp)->GetHeight();});
pls::cs::Int32 width = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->GetWidth2();});
pls::cs::Int32 num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->GetHeight2();});
if ((!wide_ && ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(currentApp)->IsSide();}))) ? ((num > num2)) : ((num < num2)))) || (wide_ && ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(currentApp)->IsSide();}))) ? ((num < num2)) : ((num > num2))))) {
pls::cs::Int32 num4 = num;
num = num2;
num2 = num4;
num4 = width;
width = num3;
num3 = num4;
}
if ((kl_cfg::Config::AD_SIZE() == 4 || num2 > num) && kl_cfg::Config::ADMOB_ENABLE()) {
num2 -= kairo::unity::ad::AdMobView::GetAdHeight();
num3 -= kairo::unity::ad::AdMobView::GetAdHeight();
}
pls::cs::Single scaleRatio = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(currentApp)->GetScaleRatio(true));});
pls::cs::Single num5 = 240.0f * scaleRatio / 100.0f;
pls::cs::Single num6 = 320.0f;
{ auto cs_receiver = SurfaceManager::view_(); pls::cs::Single cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(currentApp)->GetScaleRatio(false));}); require(cs_receiver)->SetScaleRatio(cs_arg0); }
require(SurfaceManager::gpad_())->SetScaleRatio(num5 * 100.0f / num6);
pls::cs::Int32 width2 = require(SurfaceManager::view_())->GetWidth();
pls::cs::Int32 height = require(SurfaceManager::view_())->GetHeight();
pls::cs::Int32 width3 = require(SurfaceManager::gpad_())->GetWidth();
pls::cs::Int32 height2 = require(SurfaceManager::gpad_())->GetHeight();
pls::cs::Single scaleRatio2 = require(SurfaceManager::view_())->GetScaleRatio();
pls::cs::Single scaleRatio3 = require(SurfaceManager::gpad_())->GetScaleRatio();
require(SurfaceManager::view_())->SetSize(pls::cs::to_int32((240.0f * scaleRatio2 / 100.0f + 0.01f)), pls::cs::to_int32((240.0f * scaleRatio2 / 100.0f + 0.01f)));
{ auto cs_receiver = SurfaceManager::gpad_(); pls::cs::Int32 cs_arg0 = require(SurfaceManager::view_())->GetWidth(); require(cs_receiver)->SetSize(cs_arg0, num3); }
pls::cs::Int32 num7 = pls::cs::to_int32((pls::cs::Single(GamePad::SIZE_FULL()) * scaleRatio3 / 100.0f + 0.01f));
pls::cs::Int32 num8 = pls::cs::to_int32((pls::cs::Single(GamePad::SIZE_PLAIN()) * scaleRatio3 / 100.0f + 0.01f));
pls::cs::Int32 num9 = pls::cs::to_int32((pls::cs::Single(GamePad::SIZE_PLAIN_MIN()) * scaleRatio3 / 100.0f + 0.01f));
pls::cs::Int32 num10 = num2 - require(SurfaceManager::view_())->GetHeight();
pls::cs::Int32 mode = require(SurfaceManager::gpad_())->GetMode();
if ((num10 < num9)) {
mode = 2;
} else {
if ((num10 < num7)) {
mode = 1;
} else {
mode = (((!is_null(require(instance)->sysSave_)) && (([&]() { auto cs_left = pls::cs::box(require(require(instance)->sysSave_)->ints); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()))) ? (require(require(instance)->sysSave_)->ints[15]) : pls::cs::Int32(1));
}
}
if (mode != require(SurfaceManager::gpad_())->GetMode()) {
require(SurfaceManager::gpad_())->SetMode(mode);
}
pls::cs::Int32 num11 = 0;
if ((mode == 0)) {
num11 = num7;
} else if ((mode == 1)) {
num10 -= pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->GetStatusBarHeight();});
num11 = ((num10 < num8) ? (num10) : (num8));
}
require(SurfaceManager::gpad_())->SetHeight(num11);
bool flag2 = false;
if (mode == 2) {
flag2 = true;
}
if (flag2 != pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->IsFullscreen();})) {
kairo::unity::ui::Canvas::Fullscreen(require(instance2), flag2);
if (flag) {
try {
java::lang::JThread::Sleep(100ll);
} catch(const pls::cs::Exception& cs_caught_194) {pls::cs::capture_exception(cs_caught_194);
{

}}
}
}
width = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->GetWidth2();});
num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance2)->GetHeight2();});
if ((kl_cfg::Config::AD_SIZE() == 4 || num2 > num) && kl_cfg::Config::ADMOB_ENABLE()) {
num3 -= kairo::unity::ad::AdMobView::GetAdHeight();
}
if (mode == 2) {
require(SurfaceManager::view_())->SetSize(width, num3);
require(SurfaceManager::view_())->SetLocation(0, 0);
} else {
pls::cs::Int32 num12 = 0;
if (layoutMode_) {
IntArray viewport = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(currentApp)->GetViewport();});
num12 = pls::cs::to_int32((pls::cs::Single(viewport[1]) * scaleRatio2 / 100.0f + 0.01f));
}
require(SurfaceManager::view_())->SetHeight(num3 - num11);
if (num12 > 0 && require(SurfaceManager::view_())->GetHeight() > num12) {
require(SurfaceManager::view_())->SetHeight(num12);
}
{ auto cs_receiver = SurfaceManager::view_(); pls::cs::Int32 cs_arg0 = (width - require(SurfaceManager::view_())->GetWidth()) / 2; pls::cs::Int32 cs_arg1 = num3 - (require(SurfaceManager::view_())->GetHeight() + num11); require(cs_receiver)->SetLocation(cs_arg0, cs_arg1); }
}
require(SurfaceManager::gpad_())->SetSize(width, num3);
{ auto cs_receiver = SurfaceManager::gpad_(); pls::cs::Int32 cs_arg0 = (width - require(SurfaceManager::gpad_())->GetWidth()) / 2; require(cs_receiver)->SetLocation(cs_arg0, 0); }
if (require(SurfaceManager::view_())->GetY() < 0) {
{ auto cs_receiver = SurfaceManager::view_(); pls::cs::Int32 cs_arg0 = require(SurfaceManager::view_())->GetX(); require(cs_receiver)->SetLocation(cs_arg0, 0); }
}
if (width3 != require(SurfaceManager::gpad_())->GetWidth() || height2 != require(SurfaceManager::gpad_())->GetHeight()) {
require(instance3)->RemoveSurface(SurfaceManager::gpad_());
}
if (width2 != require(SurfaceManager::view_())->GetWidth() || height != require(SurfaceManager::view_())->GetHeight()) {
require(instance3)->RemoveSurface(SurfaceManager::view_());
}
require(SurfaceManager::gban_())->SetLocation(0, num3);
{ auto cs_receiver = SurfaceManager::gban_(); pls::cs::Int32 cs_arg0 = num; pls::cs::Int32 cs_arg1 = kairo::unity::ad::AdMobView::GetAdHeight(); require(cs_receiver)->SetSize(cs_arg0, cs_arg1); }

}
}

// M:surface.SurfaceManager.Draw(kairo.unity.ui.Graphics)
void SurfaceManager::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.SurfaceManager.Draw(kairo.unity.ui.Graphics)",game);
{
pls::cs::Ref<pls::kairo::Canvas> instance = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();});
pls::cs::Ref<TouchEffectManager> instance2 = TouchEffectManager::GetInstance();
SurfaceManagerBase::Draw(g);
require(instance2)->Draw(g);
require(instance2)->Frame();
}
}

// M:surface.SurfaceManager.DrawComponents(kairo.unity.ui.Graphics)
void SurfaceManager::DrawComponents(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.SurfaceManager.DrawComponents(kairo.unity.ui.Graphics)",game);
{
if (require(SurfaceManager::gpad_())->visibleTouchRange_ && (require(SurfaceManager::gpad_())->IsTouch() || require(SurfaceManager::view_())->IsTouch())) {
SurfaceManagerBase::DrawComponents(g);
}
}
}

// M:surface.SurfaceManager.UpdateAdMobView
void SurfaceManager::UpdateAdMobView() {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.SurfaceManager.UpdateAdMobView",game);
{
kl_cfg::Config::ADMOB_ENABLE()=false;
GamePad::SIZE_PLAIN()=65;
return;
}
}

// M:surface.SurfaceManager.SetLayoutMode(System.Boolean)
void SurfaceManager::SetLayoutMode(bool enable) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.SurfaceManager.SetLayoutMode(System.Boolean)",game);
{
layoutMode_ = enable;
}
}

// M:surface.SurfaceManager.IsLayoutMode
bool SurfaceManager::IsLayoutMode() {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.SurfaceManager.IsLayoutMode",game);
{
return layoutMode_;
}
}
} // namespace surface
}
