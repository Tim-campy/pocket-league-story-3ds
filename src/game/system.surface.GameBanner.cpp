// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "form.BootForm.hpp"
#include "form.FormManager.hpp"
#include "form.TitleForm.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.util.JRandom.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "kairo.unity.ad.AdMobView.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.SurfaceManagerBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "main.AppData.hpp"
#include "surface.TouchEffectManager.hpp"
#include "system.billing.MyBilling.hpp"
#include "system.billing.ui.BillingItem.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.form.BillingForm.hpp"
#include "system.surface.GameBanner.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace system::surface {

void GameBanner::trace_edges(const pls::cs::EdgeVisitor&visitor)const {SurfaceBase::trace_edges(visitor);pls::cs::trace_value(app_,visitor);pls::cs::trace_value(canvas_,visitor);pls::cs::trace_value(effMan_,visitor);pls::cs::trace_value(random_,visitor);pls::cs::trace_value(friendBanner_,visitor);}

static StringArray GameBanner_FILENAMES_storage{};

static pls::cs::Ref<pls::kairo::Image> GameBanner_image__storage{};

static pls::cs::Ref<GameBanner> GameBanner_instance__storage{};

static PLS_NOINLINE void cs_init_af32d28251411c95_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(GameBanner_FILENAMES_storage,visitor);pls::cs::trace_value(GameBanner_image__storage,visitor);pls::cs::trace_value(GameBanner_instance__storage,visitor);});static pls::cs::TypeInitState state;state.run("system.surface.GameBanner",flag,[](){
GameBanner_FILENAMES_storage = pls::cs::evaluate_type_initializer_field("F:system.surface.GameBanner.FILENAMES",[&](){return StringArray::from({literal(u"friend_banner_00.png"), literal(u"ad_off_banner_00.png"), literal(u"park_banner_00.png"), literal(u"park_banner_01.png"), literal(u"park_banner_02.png"), literal(u"park_banner_03.png"), literal(u"park_banner_04.png")});});

});}

void GameBanner::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_af32d28251411c95_slow(flag);}

StringArray& GameBanner::FILENAMES(){GameBanner::ensure_initialized();return GameBanner_FILENAMES_storage;}

pls::cs::Ref<pls::kairo::Image>& GameBanner::image_(){GameBanner::ensure_initialized();return GameBanner_image__storage;}

pls::cs::Ref<GameBanner>& GameBanner::instance_(){GameBanner::ensure_initialized();return GameBanner_instance__storage;}

void GameBanner::create_init(pls::cs::Ref<GameBanner> self) {
GameBanner::ensure_initialized();
SurfaceBase::create_init(pls::cs::static_pointer_cast<SurfaceBase>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.#ctor",game);
{
self->app_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();});
self->canvas_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();});
self->effMan_ = pls::game::surface::TouchEffectManager::GetInstance();
self->random_ = kl_util::JRandom::create();
self->current_ = -1;
self->showBeginTime_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();});
self->useAdmob_ = true;
}

}

// M:system.surface.GameBanner.#ctor
pls::cs::Ref<GameBanner> GameBanner::create() {
GameBanner::ensure_initialized();
 auto self = pls::cs::make_ref<GameBanner>(); GameBanner::create_init(self); return self; 
}

// M:system.surface.GameBanner.GetInstance
pls::cs::Ref<GameBanner> GameBanner::GetInstance() {
GameBanner::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.GetInstance",game);
{
if (is_null(GameBanner::instance_())) {
GameBanner::instance_() = GameBanner::create();
}
return GameBanner::instance_();
}

}

// M:system.surface.GameBanner.IsGameSurface
bool GameBanner::IsGameSurface() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.IsGameSurface",game);
{
return false;
}
}

// M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent)
void GameBanner::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> evt) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent)",game);
{
kl_cfg::Config::ensure_initialized();

pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(evt)->component;
pls::cs::Int32 type = require(evt)->type;
if (type == 5) {
if (require(component)->value == 0) {
pls::cs::String text = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(friendBanner_, literal(u"\nhttp://kairopark.jp/friend/?gm=")); auto cs_right = integer_string(kl_cfg::Config::PID()); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"&dl=store\n\n"));
pls::cs::Ref<pls::kairo::IApplication> currentApp = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();});
} else if (require(component)->value == 1) {
pls::cs::Ref<pls::game::form::FormManager> instance = pls::game::form::FormManager::GetInstance();
pls::cs::Ref<billing::MyBilling> instance2 = billing::MyBilling::GetInstance();
pls::cs::Ref<form::BillingForm> billingForm = form::BillingForm::create(3);
{ auto cs_target = billingForm; auto cs_value = require(instance2)->GetItem(0); require(cs_target)->item_ = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Push(billingForm);});
} else {
kairo::unity::ui::Canvas::OpenBrowser(kl_cfg::Config::URL_SITE());
}
}

}
}

// M:system.surface.GameBanner.Draw(kairo.unity.ui.Graphics)
void GameBanner::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.Draw(kairo.unity.ui.Graphics)",game);
{
return;
}
}

// M:system.surface.GameBanner.RotateClear
void GameBanner::RotateClear() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.RotateClear",game);
{

}
}

// M:system.surface.GameBanner.Load
void GameBanner::Load() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.Load",game);
{
return;
}
}

// M:system.surface.GameBanner.Unload
void GameBanner::Unload() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.Unload",game);
{
if (!is_null(GameBanner::image_())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(GameBanner::image_())->Dispose();});
}
GameBanner::image_() = pls::cs::Ref<pls::kairo::Image>{};
current_ = -1;
}
}

// M:system.surface.GameBanner.Visible
bool GameBanner::Visible() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.surface.GameBanner.Visible",game);
{
if ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(app_)->GetHeight();}); auto cs_right = GetY(); return cs_left <= cs_right; }()) {
return false;
}
pls::cs::Ref<kairo::unity::ad::AdMobView> adMobView = kairo::unity::ui::Canvas::GetAdMobView(require(canvas_));
if (!is_null(adMobView) && require(adMobView)->IsLoad()) {
return false;
}
return true;
}
}
} // namespace system::surface
}
