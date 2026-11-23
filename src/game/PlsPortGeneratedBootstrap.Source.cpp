// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "PlsPortGeneratedBootstrap.Source.ImageTaskState.hpp"
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "cfg.MyConfig.hpp"
#include "generated/java.lang.JRuntime.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.common.cfg.Config.hpp"
#include "kairo.unity.analytics.AnalyticsTracker.hpp"
#include "kairo.unity.graphics.RectangleF.hpp"
#include "kairo.unity.native.KairoPlugin.hpp"
#include "kairo.unity.panel.FepPanel.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.ui.Balloon.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.Image.BalloonRenderTask.hpp"
#include "kairo.unity.ui.Image.TextRenderTask.hpp"
#include "kairo.unity.ui.Image.TouchTask.hpp"
#include "kairo.unity.ui.Image.hpp"
#include "kairo.unity.ui.Matrix.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.TextFormat.hpp"
#include "kairo.unity.ui.TextLayout.hpp"
#include "kairo.unity.util.ClockTime.hpp"
#include "kairo.unity.util.Language.hpp"
#include "managed_math.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using FloatArray = pls::cs::Array<pls::cs::Single>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace PlsPortGeneratedBootstrap::Source {

static pls::cs::Ref<pls::kairo::Font> drawBitmapFont_storage{};

static PLS_NOINLINE void cs_init_ed8eabc614ddcf9e_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(drawBitmapFont_storage,visitor);});static pls::cs::TypeInitState state;state.run("PlsPortGeneratedBootstrap.Source",flag,[](){

});}

void ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_ed8eabc614ddcf9e_slow(flag);}

pls::cs::Ref<pls::kairo::Font>& drawBitmapFont(){Source::ensure_initialized();return drawBitmapFont_storage;}

// M:PlsPortGeneratedBootstrap.Source.Capture(kairo.unity.form.FormManagerBase,kairo.unity.surface.SurfaceBase,System.String[],kairo.unity.form.FormManagerBase.OnCaptureCompleted,System.Boolean)
void Capture(pls::cs::Ref<pls::kairo::FormManagerBase> manager,pls::cs::Ref<kairo::unity::surface::SurfaceBase> view,StringArray tables,pls::cs::Delegate<void(StringArray)> completed,bool temporary) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.Capture(kairo.unity.form.FormManagerBase,kairo.unity.surface.SurfaceBase,System.String[],kairo.unity.form.FormManagerBase.OnCaptureCompleted,System.Boolean)",kairo);
{
if (is_null(view)) throw pls::cs::NullReferenceException();
if ([&]() { auto cs_left = pls::cs::box(tables); auto cs_right = pls::cs::box(StringArray{}); return cs_left == cs_right; }()) tables = StringArray::from({literal(u"768:1024,_768_1024_ipad"), literal(u"640:960,_640_960_35inch"), literal(u"640:1136,_640_1136_40inch"), literal(u"750:1334,_750_1334_47inch"), literal(u"1242:2208,_1242_2208_55inch"), literal(u"2048:2732,_2048_2732_129inch")});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::FormManagerBase> cs_arg0 = manager; pls::cs::Int32 cs_arg1 = require(view)->GetX(); pls::cs::Int32 cs_arg2 = require(view)->GetY(); pls::cs::Int32 cs_arg3 = require(view)->GetWidth(); pls::cs::Int32 cs_arg4 = require(view)->GetHeight(); pls::kairo::queue_capture(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, tables, completed, temporary); }());});
}

}

// M:PlsPortGeneratedBootstrap.Source.CreateConfig
void CreateConfig() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.CreateConfig",kairo);
{
cfg::MyConfig::ensure_initialized();
kl_cfg::Config::ensure_initialized();

{ auto cs_value = cfg::MyConfig::DEBUG(); kl_cfg::Config::DEBUG() = cs_value; }
{ auto cs_value = cfg::MyConfig::PTW(); kl_cfg::Config::PTW() = cs_value; }
{ auto cs_value = cfg::MyConfig::COUNT_ENABLE(); kl_cfg::Config::COUNT_ENABLE() = cs_value; }
{ auto cs_value = cfg::MyConfig::PRINT(); kl_cfg::Config::PRINT() = cs_value; }
{ auto cs_value = cfg::MyConfig::USE_UNUSE_CHECK(); kl_cfg::Config::USE_UNUSE_CHECK() = cs_value; }
{ pls::cs::Int32 cs_value = cfg::MyConfig::LANGUAGE(); kl_cfg::Config::LANGUAGE() = cs_value; }
{ auto cs_value = cfg::MyConfig::LOWDEPTH_TEST(); kl_cfg::Config::LOWDEPTH_TEST() = cs_value; }
{ auto cs_value = cfg::MyConfig::FULLSCREEN(); kl_cfg::Config::FULLSCREEN() = cs_value; }
{ pls::cs::Int32 cs_value = cfg::MyConfig::AD_SIZE(); kl_cfg::Config::AD_SIZE() = cs_value; }
{ auto cs_value = cfg::MyConfig::LOCALIZE_FONT_SCALE(); kl_cfg::Config::LOCALIZE_FONT_SCALE() = cs_value; }
{ auto cs_value = cfg::MyConfig::ICLOUD(); kl_cfg::Config::ICLOUD() = cs_value; }
{ auto cs_value = cfg::MyConfig::BASE64_PUBLIC_KEY(); kl_cfg::Config::BASE64_PUBLIC_KEY() = cs_value; }
{ auto cs_value = cfg::MyConfig::AD_UNIT_ID(); kl_cfg::Config::AD_UNIT_ID() = cs_value; }
{ auto cs_value = cfg::MyConfig::TRACE_URL(); kl_cfg::Config::TRACE_URL() = cs_value; }
{ auto cs_value = cfg::MyConfig::DEBUG_UID(); kl_cfg::Config::DEBUG_UID() = cs_value; }
{ auto cs_value = cfg::MyConfig::UID(); kl_cfg::Config::UID() = cs_value; }
{ auto cs_value = cfg::MyConfig::REGIST_ENABLE(); kl_cfg::Config::REGIST_ENABLE() = cs_value; }
{ auto cs_value = cfg::MyConfig::TRIAL_VERSION(); kl_cfg::Config::TRIAL_VERSION() = cs_value; }
{ auto cs_value = cfg::MyConfig::ADMOB_ENABLE(); kl_cfg::Config::ADMOB_ENABLE() = cs_value; }
{ auto cs_value = cfg::MyConfig::DEBUG_CMD(); kl_cfg::Config::DEBUG_CMD() = cs_value; }
{ auto cs_value = cfg::MyConfig::SHOW_DEBUG(); kl_cfg::Config::SHOW_DEBUG() = cs_value; }
{ auto cs_value = cfg::MyConfig::SHOW_FPS(); kl_cfg::Config::SHOW_FPS() = cs_value; }
{ auto cs_value = cfg::MyConfig::SHOW_MEM(); kl_cfg::Config::SHOW_MEM() = cs_value; }
{ auto cs_value = cfg::MyConfig::UNITY_EDITOR(); kl_cfg::Config::UNITY_EDITOR() = cs_value; }
{ pls::cs::Int32 cs_value = cfg::MyConfig::PID(); kl_cfg::Config::PID() = cs_value; }
{ auto cs_value = cfg::MyConfig::APPLI_NAME(); kl_cfg::Config::APPLI_NAME() = cs_value; }
{ auto cs_value = cfg::MyConfig::OUTPUT_CSV_NAME(); kl_cfg::Config::OUTPUT_CSV_NAME() = cs_value; }

}

}

// M:PlsPortGeneratedBootstrap.Source.InitializePlatform
void InitializePlatform() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.InitializePlatform",kairo);
{
kl_cfg::Config::ensure_initialized();

pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::Get();}); bool cs_arg1 = kl_cfg::Config::PRINT(); pls::cs::String cs_arg2 = kl_cfg::Config::BASE64_PUBLIC_KEY(); pls::kairo::native_plugin_init(cs_arg0, cs_arg1, cs_arg2); }());});
kairo::unity::native::KairoPlugin::CancelNotifications(true, false);
kairo::unity::native::KairoPlugin::SetNotificationBackground(false);
kairo::unity::analytics::AnalyticsTracker::Setup();
if (!kl_cfg::Config::FULLSCREEN()) pls::diagnostic::api_call([&]() -> decltype(auto) {return Source::SetWindowFullscreen(false);});
pls::cs::Ref<pls::kairo::DisplayMetrics> metrics = pls::cs::make_ref<pls::kairo::DisplayMetrics>();
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();}); pls::cs::Ref<pls::kairo::IApplication> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); require(cs_receiver)->SetDisplayCurrent(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::game::native_install_bootstrap_bindings();});

}

}

// M:PlsPortGeneratedBootstrap.Source.LoadLibraryResources
pls::cs::Ref<pls::cs::Object> LoadLibraryResources() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.LoadLibraryResources",kairo);
{
pls::cs::Ref<kairo::unity::ui::ResourceManager> manager = kairo::unity::ui::ResourceManager::create(pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{});
{ ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Storage::Read(3, false, literal(u"kairolib.dat"));}); require(manager)->Load(cs_arg0, 3); }
{ auto cs_each187 = require(manager)->img; for (std::int32_t cs_i187=0; cs_i187<cs_each187.length(); ++cs_i187) { pls::cs::Ref<pls::kairo::Image> image = cs_each187.get_Item(cs_i187); {
if (!is_null(image)) pls::diagnostic::api_call([&]() -> decltype(auto) {return require(image)->SetExpiration(true, 40);});
} } }
return pls::cs::box(manager);
}

}

// M:PlsPortGeneratedBootstrap.Source.InitializeLanguage
void InitializeLanguage() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.InitializeLanguage",kairo);
{
kairo::unity::util::Language::Init();
}

}

// M:PlsPortGeneratedBootstrap.Source.GetApplicationResource(kairo.unity.ui.IApplication)
pls::cs::Ref<kairo::unity::ui::ResourceManager> GetApplicationResource(pls::cs::Ref<pls::kairo::IApplication> app) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.GetApplicationResource(kairo.unity.ui.IApplication)",kairo);
{
return pls::cs::unbox<pls::cs::Ref<kairo::unity::ui::ResourceManager>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_application_resource(app);}));
}

}

// M:PlsPortGeneratedBootstrap.Source.FreeHeapMemory
pls::cs::Int64 FreeHeapMemory() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.FreeHeapMemory",kairo);
{
return pls::cs::unbox<pls::cs::Int64>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::from_closure(nullptr,std::string("M:PlsPortGeneratedBootstrap.Source.FreeHeapMemory:5347"),[]() -> pls::cs::Ref<pls::cs::Object> {{ return pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_heap_free();})); }}); return require(cs_receiver)->RunOnUiThread(cs_arg0, true); }());}));
}

}

// M:PlsPortGeneratedBootstrap.Source.TotalHeapMemory
pls::cs::Int64 TotalHeapMemory() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.TotalHeapMemory",kairo);
{
return pls::cs::unbox<pls::cs::Int64>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::from_closure(nullptr,std::string("M:PlsPortGeneratedBootstrap.Source.TotalHeapMemory:5476"),[]() -> pls::cs::Ref<pls::cs::Object> {{ return pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_heap_total();})); }}); return require(cs_receiver)->RunOnUiThread(cs_arg0, true); }());}));
}

}

// M:PlsPortGeneratedBootstrap.Source.ShowToast(System.String,System.Int32)
void ShowToast(pls::cs::String text,pls::cs::Int32 duration) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.ShowToast(System.String,System.Int32)",kairo);
{
pls::cs::Ref<pls::cs::Cell<pls::cs::String>> text_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(text);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); pls::cs::Delegate<void()> cs_arg0 = pls::cs::Delegate<void()>::from_closure(pls::cs::raw(text_cell),std::string("M:PlsPortGeneratedBootstrap.Source.ShowToast(System.String,System.Int32):5611"),[text_cell]() -> void {{
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::debug_log(pls::cs::box(text_cell->value));});
}},text_cell); require(cs_receiver)->RunOnUiThread(cs_arg0, true); }());});
}
}

}

// M:PlsPortGeneratedBootstrap.Source.SetWindowFullscreen(System.Boolean)
void SetWindowFullscreen(bool enabled) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.SetWindowFullscreen(System.Boolean)",kairo);
{
pls::cs::Ref<pls::cs::Cell<bool>> enabled_cell=pls::cs::make_ref<pls::cs::Cell<bool>>(enabled);
{
kl_cfg::Config::ensure_initialized();

if (kl_cfg::Config::FULLSCREEN()) return;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); pls::cs::Delegate<void()> cs_arg0 = pls::cs::Delegate<void()>::from_closure(pls::cs::raw(enabled_cell),std::string("M:PlsPortGeneratedBootstrap.Source.SetWindowFullscreen(System.Boolean):5792"),[enabled_cell]() -> void {{
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_window_fullscreen(enabled_cell->value);});
}},enabled_cell); require(cs_receiver)->RunOnUiThread(cs_arg0, true); }());});

}
}

}

// M:PlsPortGeneratedBootstrap.Source.TerminateApplication
void TerminateApplication() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.TerminateApplication",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::FormManagerBase::ProcessEvent(static_cast<pls::kairo::AppEventType>(3) /* AppEventType.Exit */, pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(0));});
pls::cs::Ref<kairo::unity::system::KairoBase> kairo = kairo::unity::system::KairoBase::GetInstance();
if (!is_null(kairo)) require(kairo)->Finish();
kairo::unity::util::ClockTime::Destroy();
}

}

// M:PlsPortGeneratedBootstrap.Source.ReadImageData(System.Int32,System.Int32,System.String,System.String)
ByteArray ReadImageData(pls::cs::Int32 rs,pls::cs::Int32 rc,pls::cs::String file,pls::cs::String palette) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.ReadImageData(System.Int32,System.Int32,System.String,System.String)",kairo);
{
ByteArray data;
if (rs == -1) {
data = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Storage::Read(3, false, file);});
if (!is_null(palette)) kairo::unity::ui::Image::OverwritePaletteData(data, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Storage::Read(3, false, palette);}));
} else {
pls::cs::Ref<kl_util::JarInflater> jar = kairo::unity::ui::ResourceManager::OpenJarCache(rs, rc);
data = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jar)->GetData(file);});
if (!is_null(palette)) kairo::unity::ui::Image::OverwritePaletteData(data, pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jar)->GetData(palette);}));
}
return data;
}

}

// M:PlsPortGeneratedBootstrap.Source.MeasureImage(System.Byte[])
IntArray MeasureImage(ByteArray data) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.MeasureImage(System.Byte[])",kairo);
{
return kairo::unity::ui::Image::GetAreaSize(data);
}

}

// M:PlsPortGeneratedBootstrap.Source.MatrixValues(kairo.unity.ui.Matrix)
FloatArray MatrixValues(pls::cs::Ref<kairo::unity::ui::Matrix> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.MatrixValues(kairo.unity.ui.Matrix)",kairo);
{
if (is_null(value)) return FloatArray{};
FloatArray values = FloatArray::make(9);
require(value)->GetValues(values);
return values;
}

}

// M:PlsPortGeneratedBootstrap.Source.DrawGraphicsText(kairo.unity.ui.Graphics,kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32)
void DrawGraphicsText(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::TextFormat> lf,pls::cs::String str,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.DrawGraphicsText(kairo.unity.ui.Graphics,kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32)",kairo);
{
str = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::TranslateText(str, true);});
if ((pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::PeekAutoTextLayout();}) && pls::diagnostic::api_call([&]() -> decltype(auto) {return index_char1(str, u'<');}) != -1) || (kairo::unity::ui::Graphics::GetLineSpace() != 0 && pls::diagnostic::api_call([&]() -> decltype(auto) {return index_char1(str, char16_t(10));}) != -1)) {
kairo::unity::ui::TextLayout::Draw(pls::cs::Ref<kairo::unity::ui::TextFormat>{}, g, str, x, y, pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetColor();}), anchor);
return;
}
pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_graphics_read_font(g);});
pls::cs::Int32 previous = -1;
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::Japanese();}) && !is_null(lf)) {
if (require(lf)->GetFont() != -1 && ([&]() -> bool { auto cs_left = require(lf)->GetFont(); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetSize();}); return cs_left != cs_right; }())) {
previous = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetSize();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = require(lf)->GetFont(); require(font)->SetSize(cs_arg0, true); }());});
}
x = require(lf)->GetX(x);
y = require(lf)->GetY(y);
anchor = require(lf)->GetAnchor(anchor);
}
bool localize = (is_null(lf) || require(lf)->GetFont() == -1) && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->IsNeedLocalizeScale();});
if (localize) {
previous = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetSize();});
pls::cs::Int32 height = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetHeight();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetLocalizeScale();}); require(font)->SetSize(cs_arg0, true); }());});
if ((anchor & 0x60) == 0) y += pls::cs::Single((height - pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetHeight();}))) / 2.0f;
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Font::LockLocalizeSetting();});
}
pls::cs::run_finally([&]() {{
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_graphics_draw_prepared(g, str, x, y, anchor);});
}}, [&]() {
if (localize) pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Font::UnlockLocalizeSetting();});
if (previous != -1) pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->SetSize(previous, true);});
});
}

}

// M:PlsPortGeneratedBootstrap.Source.PushGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
void PushGraphicsMatrix(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::Matrix> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.PushGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_graphics_push_matrix(g, Source::MatrixValues(value));});
}

}

// M:PlsPortGeneratedBootstrap.Source.SetGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
void SetGraphicsMatrix(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::Matrix> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.SetGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_graphics_set_matrix(g, Source::MatrixValues(value));});
}

}

// M:PlsPortGeneratedBootstrap.Source.GetGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
pls::cs::Ref<kairo::unity::ui::Matrix> GetGraphicsMatrix(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::Matrix> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.GetGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)",kairo);
{
if (is_null(value)) value = kairo::unity::ui::Matrix::create();
{ FloatArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_graphics_read_matrix(g, 0);}); require(value)->SetValues(cs_arg0);}
return value;
}

}

// M:PlsPortGeneratedBootstrap.Source.GetGraphicsLocalMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
pls::cs::Ref<kairo::unity::ui::Matrix> GetGraphicsLocalMatrix(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::Matrix> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.GetGraphicsLocalMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)",kairo);
{
if (is_null(value)) value = kairo::unity::ui::Matrix::create();
{ FloatArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_graphics_read_matrix(g, 1);}); require(value)->SetValues(cs_arg0);}
return value;
}

}

// M:PlsPortGeneratedBootstrap.Source.GetGraphicsScreenMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
pls::cs::Ref<kairo::unity::ui::Matrix> GetGraphicsScreenMatrix(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<kairo::unity::ui::Matrix> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.GetGraphicsScreenMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)",kairo);
{
if (is_null(value)) value = kairo::unity::ui::Matrix::create();
{ FloatArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_graphics_read_matrix(g, 2);}); require(value)->SetValues(cs_arg0);}
return value;
}

}

// M:PlsPortGeneratedBootstrap.Source.GetGraphicsTransRectGUI(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,kairo.unity.graphics.RectangleF)
pls::cs::Ref<kairo::unity::graphics::RectangleF> GetGraphicsTransRectGUI(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Single width,pls::cs::Single height,pls::cs::Ref<kairo::unity::graphics::RectangleF> dst) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.GetGraphicsTransRectGUI(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,kairo.unity.graphics.RectangleF)",kairo);
{
if (is_null(dst)) dst = kairo::unity::graphics::RectangleF::create();
require(dst)->Set(x, y, x + width, y + height);
pls::cs::Single left = require(dst)->left, top = require(dst)->top, right = require(dst)->right, bottom = require(dst)->bottom;
pls::cs::Ref<kairo::unity::ui::Matrix> matrix = pls::diagnostic::api_call([&]() -> decltype(auto) {return Source::GetGraphicsScreenMatrix(require(g), pls::cs::Ref<kairo::unity::ui::Matrix>{});});
{ auto cs_receiver = static_cast<pls::cs::Ref<kairo::unity::ui::Matrix>>(matrix); if(!cs_receiver)throw pls::cs::NullReferenceException(); auto& cs_arg0 = left; auto& cs_arg1 = top; cs_receiver->MapPoints(cs_arg0,cs_arg1); }
{ auto cs_receiver = static_cast<pls::cs::Ref<kairo::unity::ui::Matrix>>(matrix); if(!cs_receiver)throw pls::cs::NullReferenceException(); auto& cs_arg0 = right; auto& cs_arg1 = bottom; cs_receiver->MapPoints(cs_arg0,cs_arg1); }
require(dst)->Set(left, top, right, bottom);
FloatArray clip = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::native_graphics_read_clip(g);});
{ auto cs_target = dst; auto cs_old = require(cs_target)->left; auto cs_rhs = clip[0]; pls::cs::Single cs_value = cs_old - cs_rhs; require(cs_target)->left = cs_value; }
{ auto cs_target = dst; auto cs_old = require(cs_target)->right; auto cs_rhs = clip[0]; pls::cs::Single cs_value = cs_old - cs_rhs; require(cs_target)->right = cs_value; }
{ auto cs_target = dst; auto cs_old = require(cs_target)->top; auto cs_rhs = clip[1]; pls::cs::Single cs_value = cs_old - cs_rhs; require(cs_target)->top = cs_value; }
{ auto cs_target = dst; auto cs_old = require(cs_target)->bottom; auto cs_rhs = clip[1]; pls::cs::Single cs_value = cs_old - cs_rhs; require(cs_target)->bottom = cs_value; }
return dst;
}

}

// M:PlsPortGeneratedBootstrap.Source.GetKairo
pls::cs::Ref<kairo::unity::system::KairoBase> GetKairo() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.GetKairo",kairo);
{
return kairo::unity::system::KairoBase::GetInstance();
}

}

// M:PlsPortGeneratedBootstrap.Source.IsPlaying(kairo.unity.system.KairoBase)
bool IsPlaying(pls::cs::Ref<kairo::unity::system::KairoBase> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.IsPlaying(kairo.unity.system.KairoBase)",kairo);
{
return require(value)->IsGamePlaying();
}

}

// M:PlsPortGeneratedBootstrap.Source.SetGameState(kairo.unity.system.KairoBase,System.Boolean)
void SetGameState(pls::cs::Ref<kairo::unity::system::KairoBase> value,bool playing) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.SetGameState(kairo.unity.system.KairoBase,System.Boolean)",kairo);
{
require(value)->SetGameState(playing);
}

}

// M:PlsPortGeneratedBootstrap.Source.UpdateKairo(kairo.unity.system.KairoBase)
void UpdateKairo(pls::cs::Ref<kairo::unity::system::KairoBase> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.UpdateKairo(kairo.unity.system.KairoBase)",kairo);
{
require(value)->Update();
}

}

// M:PlsPortGeneratedBootstrap.Source.GetReserveEnabled(kairo.unity.system.KairoBase)
bool GetReserveEnabled(pls::cs::Ref<kairo::unity::system::KairoBase> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.GetReserveEnabled(kairo.unity.system.KairoBase)",kairo);
{
return require(value)->reserveSaveEnable;
}

}

// M:PlsPortGeneratedBootstrap.Source.SetReserveEnabled(kairo.unity.system.KairoBase,System.Boolean)
void SetReserveEnabled(pls::cs::Ref<kairo::unity::system::KairoBase> value,bool enabled) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.SetReserveEnabled(kairo.unity.system.KairoBase,System.Boolean)",kairo);
{
require(value)->reserveSaveEnable = enabled;
}

}

// M:PlsPortGeneratedBootstrap.Source.GetReserve(kairo.unity.system.KairoBase)
pls::cs::Int32 GetReserve(pls::cs::Ref<kairo::unity::system::KairoBase> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.GetReserve(kairo.unity.system.KairoBase)",kairo);
{
return require(value)->reserveSave;
}

}

// M:PlsPortGeneratedBootstrap.Source.SetReserve(kairo.unity.system.KairoBase,System.Int32)
void SetReserve(pls::cs::Ref<kairo::unity::system::KairoBase> value,pls::cs::Int32 reserved) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.SetReserve(kairo.unity.system.KairoBase,System.Int32)",kairo);
{
require(value)->reserveSave = reserved;
}

}

// M:PlsPortGeneratedBootstrap.Source.Save(kairo.unity.system.KairoBase)
void Save(pls::cs::Ref<kairo::unity::system::KairoBase> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.Save(kairo.unity.system.KairoBase)",kairo);
{
require(value)->Save();
}

}

// M:PlsPortGeneratedBootstrap.Source.SaveAll(kairo.unity.system.KairoBase)
void SaveAll(pls::cs::Ref<kairo::unity::system::KairoBase> value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.SaveAll(kairo.unity.system.KairoBase)",kairo);
{
require(value)->SaveAll();
}

}

// M:PlsPortGeneratedBootstrap.Source.GetFep
pls::cs::Ref<kairo::unity::panel::FepPanel> GetFep() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.GetFep",kairo);
{
return kairo::unity::panel::FepPanel::get_Current();
}

}

// M:PlsPortGeneratedBootstrap.Source.UpdateFep
bool UpdateFep() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.UpdateFep",kairo);
{
return require(kairo::unity::panel::FepPanel::get_Current())->Update();
}

}

// M:PlsPortGeneratedBootstrap.Source.DrawCounters
void DrawCounters() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.DrawCounters",kairo);
{
kl_cfg::Config::ensure_initialized();

if (kl_cfg::Config::COUNT_ENABLE()) {
{ pls::cs::Int32 cs_value = 0; kairo::common::cfg::Config::drawImageCount_() = cs_value; }
{ pls::cs::Int32 cs_value = 0; kairo::common::cfg::Config::drawStringCount_() = cs_value; }
{ pls::cs::Int32 cs_value = 0; kairo::common::cfg::Config::drawShapeCount_() = cs_value; }
{ pls::cs::Int32 cs_value = 0; kairo::common::cfg::Config::drawImageArea_() = cs_value; }
{ pls::cs::Int32 cs_value = 0; kairo::common::cfg::Config::drawSourceImageArea_() = cs_value; }
}
{ pls::cs::Int32 cs_value = ((pls::cs::Int32(kairo::common::cfg::Config::checkCount_()) + 1) % 2147483647 /* Int32.MaxValue */); kairo::common::cfg::Config::checkCount_() = cs_value; }

}

}

// M:PlsPortGeneratedBootstrap.Source.CheckCount
pls::cs::Int32 CheckCount() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.CheckCount",kairo);
{
kl_cfg::Config::ensure_initialized();

return kairo::common::cfg::Config::checkCount_();

}

}

// M:PlsPortGeneratedBootstrap.Source.CountEnabled
bool CountEnabled() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.CountEnabled",kairo);
{
kl_cfg::Config::ensure_initialized();

return kl_cfg::Config::COUNT_ENABLE();

}

}

// M:PlsPortGeneratedBootstrap.Source.ShapeDrawn
void ShapeDrawn() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.ShapeDrawn",kairo);
{
kl_cfg::Config::ensure_initialized();

if (kl_cfg::Config::COUNT_ENABLE()) kairo::common::cfg::Config::drawShapeCount_()++;

}

}

// M:PlsPortGeneratedBootstrap.Source.BeginImageTasks(kairo.unity.ui.Image)
pls::cs::Ref<pls::cs::Object> BeginImageTasks(pls::cs::Ref<pls::kairo::Image> image) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.BeginImageTasks(kairo.unity.ui.Image)",kairo);
{
pls::cs::Ref<Source_ImageTaskState> saved = Source_ImageTaskState::create();
{ auto cs_target = saved; auto cs_value = require(image)->source_text_tasks<kairo::unity::ui::Image_TextRenderTask>(); require(cs_target)->texts = cs_value; }
{ auto cs_target = saved; auto cs_value = require(image)->source_balloon_tasks<kairo::unity::ui::Image_BalloonRenderTask>(); require(cs_target)->balloons = cs_value; }
{ auto cs_target = saved; auto cs_value = require(image)->source_touch_tasks<kairo::unity::ui::Image_TouchTask>(); require(cs_target)->touches = cs_value; }
{ auto cs_target = image; auto cs_value = pls::cs::List<kairo::unity::ui::Image_TextRenderTask>::make(); require(cs_target)->source_text_tasks<kairo::unity::ui::Image_TextRenderTask>() = cs_value; }
{ auto cs_target = image; auto cs_value = pls::cs::List<kairo::unity::ui::Image_BalloonRenderTask>::make(); require(cs_target)->source_balloon_tasks<kairo::unity::ui::Image_BalloonRenderTask>() = cs_value; }
{ auto cs_target = image; auto cs_value = pls::cs::List<kairo::unity::ui::Image_TouchTask>::make(); require(cs_target)->source_touch_tasks<kairo::unity::ui::Image_TouchTask>() = cs_value; }
return pls::cs::box(saved);
}

}

// M:PlsPortGeneratedBootstrap.Source.FinishImageTasks(kairo.unity.ui.Image,System.Object,kairo.unity.graphics.Offscreen,System.Boolean)
void FinishImageTasks(pls::cs::Ref<pls::kairo::Image> image,pls::cs::Ref<pls::cs::Object> value,pls::cs::Ref<pls::kairo::Offscreen> offscreen,bool commit) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.FinishImageTasks(kairo.unity.ui.Image,System.Object,kairo.unity.graphics.Offscreen,System.Boolean)",kairo);
{
pls::cs::Ref<Source_ImageTaskState> saved = pls::cs::unbox<pls::cs::Ref<Source_ImageTaskState>>(value);
if (!commit) {
{ auto cs_target = image; auto cs_value = require(saved)->texts; require(cs_target)->source_text_tasks<kairo::unity::ui::Image_TextRenderTask>() = cs_value; }
{ auto cs_target = image; auto cs_value = require(saved)->balloons; require(cs_target)->source_balloon_tasks<kairo::unity::ui::Image_BalloonRenderTask>() = cs_value; }
{ auto cs_target = image; auto cs_value = require(saved)->touches; require(cs_target)->source_touch_tasks<kairo::unity::ui::Image_TouchTask>() = cs_value; }
return;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(saved)->texts.Clear();});
for (pls::cs::Int32 i = 0; i < require(saved)->touches.get_Count(); ++i) require(require(saved)->touches.get_Item(i).Component)->hasCount--;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(saved)->touches.Clear();});
for (pls::cs::Int32 i_2 = 0; i_2 < (require(image)->source_text_tasks<kairo::unity::ui::Image_TextRenderTask>()).get_Count(); ++i_2) {
kairo::unity::ui::Image_TextRenderTask task = require(image)->source_text_tasks<kairo::unity::ui::Image_TextRenderTask>().get_Item(i_2);
pls::kairo::Vector3 point = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value_storage_156_owner=offscreen;auto& cs_value_storage_156=require(cs_value_storage_156_owner)->dynamicTransform_;auto cs_arg0=([&]() { auto cs_arg0 = task.X; auto cs_arg1 = -(task.Y); auto cs_arg2 = 0.0f; return pls::kairo::Vector3(cs_arg0,cs_arg1,cs_arg2); }());return cs_value_storage_156.MultiplyPoint(cs_arg0);}());});
{ pls::cs::Single cs_value = point.x; task.X = cs_value; }
{ pls::cs::Single cs_value = -(point.y); task.Y = cs_value; }
{ auto cs_target = require(image)->source_text_tasks<kairo::unity::ui::Image_TextRenderTask>(); auto cs_index = i_2; auto cs_value = task; cs_target.set_Item(cs_index,cs_value); }
}
for (pls::cs::Int32 i_3 = 0; i_3 < (require(image)->source_balloon_tasks<kairo::unity::ui::Image_BalloonRenderTask>()).get_Count(); ++i_3) {
kairo::unity::ui::Image_BalloonRenderTask task_2 = require(image)->source_balloon_tasks<kairo::unity::ui::Image_BalloonRenderTask>().get_Item(i_3);
pls::kairo::Vector3 point_2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_value_storage_159_owner=offscreen;auto& cs_value_storage_159=require(cs_value_storage_159_owner)->dynamicTransform_;auto cs_arg0=([&]() { auto cs_arg0 = task_2.X; auto cs_arg1 = -(task_2.Y); auto cs_arg2 = 0.0f; return pls::kairo::Vector3(cs_arg0,cs_arg1,cs_arg2); }());return cs_value_storage_159.MultiplyPoint(cs_arg0);}());});
{ pls::cs::Single cs_value = point_2.x; task_2.X = cs_value; }
{ pls::cs::Single cs_value = -(point_2.y); task_2.Y = cs_value; }
{ auto cs_target = require(image)->source_balloon_tasks<kairo::unity::ui::Image_BalloonRenderTask>(); auto cs_index = i_3; auto cs_value = task_2; cs_target.set_Item(cs_index,cs_value); }
}
}

}

// M:PlsPortGeneratedBootstrap.Source.QueueImageText(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32)
void QueueImageText(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String text,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.QueueImageText(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32)",kairo);
{
if (is_null(require(g)->source_render_)) return;
pls::cs::Ref<pls::kairo::Font> font = pls::cs::make_ref<pls::kairo::Font>(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});}));
pls::cs::Ref<kairo::unity::graphics::RectangleF> rectangle = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<kairo::unity::graphics::RectangleF> { pls::cs::Single cs_arg2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(font)->GetWidth());}); pls::cs::Single cs_arg3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetHeight();}); return Source::GetGraphicsTransRectGUI(require(g), 0.0f, 0.0f, cs_arg2, cs_arg3, pls::cs::Ref<kairo::unity::graphics::RectangleF>{}); }());});
pls::cs::Single a = ([&]() -> pls::cs::FloatEval { auto cs_left = require(rectangle)->Width(); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(font)->GetWidth());}); return cs_left / cs_right; }()), b = ([&]() -> pls::cs::FloatEval { auto cs_left = require(rectangle)->Height(); auto cs_right = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetHeight();})); return cs_left / cs_right; }()), scale = (a < b ? a : b);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = pls::cs::to_int32((pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetHeight();})) * scale)); require(font)->SetSize(cs_arg0, false); }());});
y += (([&]() -> pls::cs::FloatEval { auto cs_left = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetHeight();})); auto cs_right = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetHeight();})) * scale / b; return cs_left - cs_right; }())) / 2.0f;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = require(require(g)->source_render_)->source_text_tasks<kairo::unity::ui::Image_TextRenderTask>(); auto cs_arg0 = kairo::unity::ui::Image_TextRenderTask::create(text, x, y, anchor, pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetColor();}), font); cs_receiver.Add(cs_arg0); }());});
}

}

// M:PlsPortGeneratedBootstrap.Source.DrawImageTouches(kairo.unity.ui.Graphics,kairo.unity.ui.Image,System.Single,System.Single)
void DrawImageTouches(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<pls::kairo::Image> image,pls::cs::Single dx,pls::cs::Single dy) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.DrawImageTouches(kairo.unity.ui.Graphics,kairo.unity.ui.Image,System.Single,System.Single)",kairo);
{
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->IsGUI();})) return;
for (pls::cs::Int32 i = 0; i < (require(image)->source_touch_tasks<kairo::unity::ui::Image_TouchTask>()).get_Count(); ++i) {
kairo::unity::ui::Image_TouchTask task = require(image)->source_touch_tasks<kairo::unity::ui::Image_TouchTask>().get_Item(i);
if (!([&]() -> bool { auto cs_receiver = task.Surface; pls::cs::Ref<kairo::unity::surface::TouchComponent> cs_arg0 = task.Component; return require(cs_receiver)->ExistTouchComponent(cs_arg0); }())) {
pls::cs::Ref<kairo::unity::surface::TouchComponent> component = kairo::unity::surface::TouchComponent::create(task.Component);
require(component)->x = pls::cs::to_int32((pls::cs::Single(require(component)->x) + dx));
require(component)->y = pls::cs::to_int32((pls::cs::Single(require(component)->y) + dy));
require(component)->hasCount = 0;
if (!is_null(require(component)->option)) require(require(component)->option)->hasCount = 0;
require(task.Surface)->AddTouchComponent(component);
}
}
}

}

// M:PlsPortGeneratedBootstrap.Source.DrawImageBalloons(kairo.unity.ui.Graphics,kairo.unity.ui.Image,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
void DrawImageBalloons(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Ref<pls::kairo::Image> image,pls::cs::Single dx,pls::cs::Single dy,pls::cs::Single width,pls::cs::Single height,pls::cs::Single sx,pls::cs::Single sy,pls::cs::Single sw,pls::cs::Single sh) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.DrawImageBalloons(kairo.unity.ui.Graphics,kairo.unity.ui.Image,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)",kairo);
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->IsGUI();}) && ((require(image)->source_text_tasks<kairo::unity::ui::Image_TextRenderTask>()).get_Count() > 0)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(dx, dy, width, height, true);});
pls::cs::Int32 oldColor = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetColor();});
pls::cs::Ref<pls::kairo::Font> oldFont = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
pls::cs::run_finally([&]() {{
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Font::PushLocalizeSetting(false);});
for (pls::cs::Int32 i = 0; i < (require(image)->source_text_tasks<kairo::unity::ui::Image_TextRenderTask>()).get_Count(); ++i) {
kairo::unity::ui::Image_TextRenderTask task = require(image)->source_text_tasks<kairo::unity::ui::Image_TextRenderTask>().get_Item(i);
pls::cs::Single ratio = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::math_min_single(width / sw, height / sh);});
if (is_null(Source::drawBitmapFont())) Source::drawBitmapFont() = pls::cs::make_ref<pls::kairo::Font>();
pls::cs::Ref<pls::kairo::Font> font = Source::drawBitmapFont();
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Font> cs_arg0 = task.Font; require(font)->Copy(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = pls::cs::to_int32((pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->GetHeight();})) * ratio + 0.01f)); require(font)->SetSize(cs_arg0, false); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetFont(font);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = task.Color; require(g)->SetColor(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = task.Text; pls::cs::Single cs_arg1 = dx + ((task.X - sx)) * ratio; pls::cs::Single cs_arg2 = dy + ((task.Y - sy)) * ratio; pls::cs::Int32 cs_arg3 = task.Anchor; require(g)->DrawString(cs_arg0, cs_arg1, cs_arg2, cs_arg3); }());});
}
}}, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(oldColor);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetFont(oldFont);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Font::PopLocalizeSetting();});
});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
}
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->IsGUI();}) || ((require(image)->source_balloon_tasks<kairo::unity::ui::Image_BalloonRenderTask>()).get_Count() == 0)) return;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClipRect(dx, dy, width, height, true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetColor();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
pls::cs::run_finally([&]() {{
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Font::PushLocalizeSetting(false);});
for (pls::cs::Int32 i_2 = 0; i_2 < (require(image)->source_balloon_tasks<kairo::unity::ui::Image_BalloonRenderTask>()).get_Count(); ++i_2) {
kairo::unity::ui::Image_BalloonRenderTask task_2 = require(image)->source_balloon_tasks<kairo::unity::ui::Image_BalloonRenderTask>().get_Item(i_2);
pls::cs::Single scale = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::math_min_single(width / sw, height / sh);});
pls::kairo::Matrix4x4 matrix = pls::kairo::Matrix4x4::identity();
if (!is_null(task_2.Offscreen)) {
matrix = require(task_2.Offscreen)->dynamicTransform_;
{ pls::cs::Single cs_value = -(matrix.m13); matrix.m13 = cs_value; }
}
pls::cs::Single previous = require(task_2.Balloon)->scale2_;
{ auto cs_target = task_2.Balloon; auto cs_old = require(cs_target)->scale2_; auto cs_rhs = scale; pls::cs::Single cs_value = cs_old * cs_rhs; require(cs_target)->scale2_ = cs_value; }
{ auto cs_receiver = task_2.Balloon; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Single cs_arg1 = dx + ((task_2.X - sx)) * scale; pls::cs::Single cs_arg2 = dy + ((task_2.Y - sy)) * scale; require(cs_receiver)->Draw(cs_arg0, cs_arg1, cs_arg2, matrix); }
require(task_2.Balloon)->scale2_ = previous;
}
}}, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Font::PopLocalizeSetting();});
});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopClip();});
}

}

// M:PlsPortGeneratedBootstrap.Source.AdjustCreateArea(System.Int32)
void AdjustCreateArea(pls::cs::Int32 delta) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.AdjustCreateArea(System.Int32)",kairo);
{
kl_cfg::Config::ensure_initialized();

{ auto cs_old = kairo::common::cfg::Config::createImageArea_(); auto cs_rhs = delta; pls::cs::Int32 cs_value = cs_old + cs_rhs; kairo::common::cfg::Config::createImageArea_() = cs_value; }

}

}

// M:PlsPortGeneratedBootstrap.Source.DebugFlag
bool DebugFlag() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.DebugFlag",kairo);
{
kl_cfg::Config::ensure_initialized();

return kl_cfg::Config::DEBUG();

}

}

// M:PlsPortGeneratedBootstrap.Source.DisableAds
void DisableAds() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.DisableAds",kairo);
{
kl_cfg::Config::ensure_initialized();

{ auto cs_value = false; kl_cfg::Config::ADMOB_ENABLE() = cs_value; }

}

}

// M:PlsPortGeneratedBootstrap.Source.CloseJarCache
void CloseJarCache() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.CloseJarCache",kairo);
{
kairo::unity::ui::ResourceManager::CloseJarCache();
}

}

// M:PlsPortGeneratedBootstrap.Source.Translate(System.String)
pls::cs::String Translate(pls::cs::String value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.Translate(System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::TranslateText(value, true);});
}

}

// M:PlsPortGeneratedBootstrap.Source.MarkupWidth(kairo.unity.ui.Font,System.String)
pls::cs::Single MarkupWidth(pls::cs::Ref<pls::kairo::Font> font,pls::cs::String value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.MarkupWidth(kairo.unity.ui.Font,System.String)",kairo);
{
return kairo::unity::ui::TextLayout::StringWidthF(pls::cs::Ref<kairo::unity::ui::TextFormat>{}, font, value);
}

}

// M:PlsPortGeneratedBootstrap.Source.MarkupDraw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32)
void MarkupDraw(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String value,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.MarkupDraw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32)",kairo);
{
kairo::unity::ui::TextLayout::Draw(pls::cs::Ref<kairo::unity::ui::TextFormat>{}, g, value, x, y, pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetColor();}), anchor);
}

}

// M:PlsPortGeneratedBootstrap.Source.Japanese
bool Japanese() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.Japanese",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::Japanese();});
}

}

// M:PlsPortGeneratedBootstrap.Source.LocalizeScale
bool LocalizeScale() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.LocalizeScale",kairo);
{
kl_cfg::Config::ensure_initialized();

return kl_cfg::Config::LOCALIZE_FONT_SCALE();

}

}

// M:PlsPortGeneratedBootstrap.Source.Millis
pls::cs::Int64 Millis() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.Millis",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();});
}

}

// M:PlsPortGeneratedBootstrap.Source.Pause(System.Int64)
void Pause(pls::cs::Int64 value) {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.Pause(System.Int64)",kairo);
{
java::lang::JThread::Sleep(value);
}

}

// M:PlsPortGeneratedBootstrap.Source.Yield
void Yield() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.Yield",kairo);
{
java::lang::JThread::Yield();
}

}

// M:PlsPortGeneratedBootstrap.Source.Collect
void Collect() {
Source::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:PlsPortGeneratedBootstrap.Source.Collect",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JRuntime::GetRuntime();}))->Gc();});
}

}
} // namespace PlsPortGeneratedBootstrap::Source
}
