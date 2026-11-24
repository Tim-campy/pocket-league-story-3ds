#include "diagnostic_runtime.hpp"
// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "game_generated.hpp"
#include "bootstrap_bindings.hpp"
#include "forms_callbacks.hpp"
#include "font.hpp"
#include "canvas.hpp"
#include "graphics.hpp"
#include "display_metrics.hpp"
#include "kairo/platform/sdl/globalization.hpp"
#ifndef PLS_BOOTSTRAP_GAP
#define PLS_BOOTSTRAP_GAP(id) throw pls::kairo::BootstrapContractError(id)
#endif
namespace pls::game {
namespace cs = pls::cs;
namespace k = pls::kairo;

void native_install_bootstrap_bindings() {
    PlsPortGeneratedBootstrap::Source::DisableAds();
    k::Canvas::GetInstance()->host_input_config(
        []() -> bool { return PlsPortGeneratedBootstrap::Source::DebugFlag(); });
    k::IApplication::host_platform(pls::sdl::device_model());
    k::ImageRuntimeBindings images;
    images.check_count =
        cs::Delegate<std::int32_t()>::from_static("M:PlsPortGeneratedBootstrap.Source.CheckCount", []() {
            return PlsPortGeneratedBootstrap::Source::CheckCount();
        });
    images.count_enabled =
        cs::Delegate<bool()>::from_static("M:PlsPortGeneratedBootstrap.Source.CountEnabled",
                                          []() { return PlsPortGeneratedBootstrap::Source::CountEnabled(); });
    images.adjust_create_area = cs::Delegate<void(std::int32_t)>::from_static(
        "M:PlsPortGeneratedBootstrap.Source.AdjustCreateArea(System.Int32)",
        [](std::int32_t delta) { PlsPortGeneratedBootstrap::Source::AdjustCreateArea(delta); });
    images.read_source = cs::
        Delegate<cs::Array<std::uint8_t>(std::int32_t, std::int32_t, cs::String, cs::String)>::from_static(
            "M:PlsPortGeneratedBootstrap.Source.ReadImageData(System.Int32,System.Int32,System.String,System.String)",
            [](std::int32_t rs, std::int32_t rc, cs::String file, cs::String palette) {
                return PlsPortGeneratedBootstrap::Source::ReadImageData(rs, rc, file, palette);
            });
    images.measure_source = cs::Delegate<cs::Array<std::int32_t>(cs::Array<std::uint8_t>)>::from_static(
        "M:PlsPortGeneratedBootstrap.Source.MeasureImage(System.Byte[])",
        [](cs::Array<std::uint8_t> data) { return PlsPortGeneratedBootstrap::Source::MeasureImage(data); });
    k::install_image_runtime(std::move(images));
    k::GraphicsRuntimeBindings shapes;
    shapes.shape_drawn =
        cs::Delegate<void()>::from_static("M:PlsPortGeneratedBootstrap.Source.ShapeDrawn",
                                          []() { PlsPortGeneratedBootstrap::Source::ShapeDrawn(); });
    shapes.image_balloons = cs::Delegate<void(cs::Ref<k::Graphics>, cs::Ref<k::Image>, float, float, float,
                                              float, float, float, float, float)>::
        from_static(
            "M:PlsPortGeneratedBootstrap.Source.DrawImageBalloons(kairo.unity.ui.Graphics,kairo.unity.ui.Image,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)",
            [](cs::Ref<k::Graphics> g, cs::Ref<k::Image> image, float x, float y, float w, float h, float sx,
               float sy, float sw, float sh) {
                PlsPortGeneratedBootstrap::Source::DrawImageBalloons(g, image, x, y, w, h, sx, sy, sw, sh);
            });
    shapes.queue_text =
        cs::Delegate<void(cs::Ref<k::Graphics>, cs::String, float, float, std::int32_t)>::from_static(
            "M:PlsPortGeneratedBootstrap.Source.QueueImageText(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32)",
            [](cs::Ref<k::Graphics> g, cs::String text, float x, float y, std::int32_t anchor) {
                PlsPortGeneratedBootstrap::Source::QueueImageText(g, text, x, y, anchor);
            });
    shapes
        .image_touches = cs::Delegate<void(cs::Ref<k::Graphics>, cs::Ref<k::Image>, float, float)>::from_static(
        "M:PlsPortGeneratedBootstrap.Source.DrawImageTouches(kairo.unity.ui.Graphics,kairo.unity.ui.Image,System.Single,System.Single)",
        [](cs::Ref<k::Graphics> g, cs::Ref<k::Image> image, float x, float y) {
            PlsPortGeneratedBootstrap::Source::DrawImageTouches(g, image, x, y);
        });
    shapes.begin_image_tasks = cs::Delegate<cs::Ref<cs::Object>(cs::Ref<k::Image>)>::from_static(
        "M:PlsPortGeneratedBootstrap.Source.BeginImageTasks(kairo.unity.ui.Image)",
        [](cs::Ref<k::Image> image) { return PlsPortGeneratedBootstrap::Source::BeginImageTasks(image); });
    shapes.finish_image_tasks =
        cs::Delegate<void(cs::Ref<k::Image>, cs::Ref<cs::Object>, cs::Ref<k::Offscreen>, bool)>::from_static(
            "M:PlsPortGeneratedBootstrap.Source.FinishImageTasks(kairo.unity.ui.Image,System.Object,kairo.unity.graphics.Offscreen,System.Boolean)",
            [](cs::Ref<k::Image> image, cs::Ref<cs::Object> saved, cs::Ref<k::Offscreen> offscreen,
               bool commit) {
                PlsPortGeneratedBootstrap::Source::FinishImageTasks(image, saved, offscreen, commit);
            });
    k::install_graphics_runtime(std::move(shapes));
    k::TextServices fonts;
    fonts.translate = [](cs::String value) -> cs::String {
        return PlsPortGeneratedBootstrap::Source::Translate(value);
    };
    fonts.japanese = []() -> bool {
        return PlsPortGeneratedBootstrap::Source::Japanese();
    };
    fonts.localize_scale = []() -> bool {
        return PlsPortGeneratedBootstrap::Source::LocalizeScale();
    };
    fonts.application_scale = []() {
        return k::IApplication::GetCurrentApp()->GetScaleRatio();
    };
    fonts.markup_width = [](cs::Ref<k::Font> font, cs::String value) -> float {
        return PlsPortGeneratedBootstrap::Source::MarkupWidth(font, value);
    };
    fonts.markup_draw = [](cs::Ref<k::Graphics> g, cs::String value, float x, float y, std::int32_t anchor) {
        PlsPortGeneratedBootstrap::Source::MarkupDraw(g, value, x, y, anchor);
    };
    k::install_text_services(std::move(fonts));
}

void configure_application(cs::Ref<k::IApplication> app) {
    app->host_termination([]() { PlsPortGeneratedBootstrap::Source::TerminateApplication(); });
    k::FormCallbacks forms;
    forms.kairo =
        cs::Delegate<cs::Ref<k::FormKairo>()>::from_static("Bootstrap.Kairo", []() -> cs::Ref<k::FormKairo> {
            auto value = PlsPortGeneratedBootstrap::Source::GetKairo();
            if (!value)
                return {};
            class SourceKairoAdapter final : public k::FormKairo {
                using Target = decltype(value);
                Target value_;

            public:
                explicit SourceKairoAdapter(Target target) : value_(std::move(target)) {}
                bool IsGamePlaying() override { return PlsPortGeneratedBootstrap::Source::IsPlaying(value_); }
                void SetGameState(bool x) override {
                    PlsPortGeneratedBootstrap::Source::SetGameState(value_, x);
                }
                void Update() override { PlsPortGeneratedBootstrap::Source::UpdateKairo(value_); }
                bool ReserveSaveEnabled() override {
                    return PlsPortGeneratedBootstrap::Source::GetReserveEnabled(value_);
                }
                void SetReserveSaveEnabled(bool x) override {
                    PlsPortGeneratedBootstrap::Source::SetReserveEnabled(value_, x);
                }
                std::int32_t ReserveSave() override {
                    return PlsPortGeneratedBootstrap::Source::GetReserve(value_);
                }
                void SetReserveSave(std::int32_t x) override {
                    PlsPortGeneratedBootstrap::Source::SetReserve(value_, x);
                }
                void Save() override { PlsPortGeneratedBootstrap::Source::Save(value_); }
                void SaveAll() override { PlsPortGeneratedBootstrap::Source::SaveAll(value_); }
                void trace_edges(const cs::EdgeVisitor& visitor) const override {
                    cs::trace_value(value_, visitor);
                }
            };
            return cs::make_ref<SourceKairoAdapter>(value);
        });
    // Complete-corpus proof: no concrete SaveRecorder subclass/constructor call.
    forms.recorder = cs::Delegate<cs::Ref<k::FormRecorder>()>::from_static(
        "Bootstrap.Recorder", []() -> cs::Ref<k::FormRecorder> { return {}; });
    forms.fep =
        cs::Delegate<cs::Ref<k::FormFep>()>::from_static("Bootstrap.Fep", []() -> cs::Ref<k::FormFep> {
            auto value = PlsPortGeneratedBootstrap::Source::GetFep();
            if (!value)
                return {};
            auto update =
                cs::Delegate<bool()>::from_static("M:PlsPortGeneratedBootstrap.Source.UpdateFep", []() {
                    return PlsPortGeneratedBootstrap::Source::UpdateFep();
                });
            return cs::make_ref<k::CallbackFormFep>(std::move(update));
        });
    forms.millis =
        cs::Delegate<std::int64_t()>::from_static("M:PlsPortGeneratedBootstrap.Source.Millis", []() {
            return PlsPortGeneratedBootstrap::Source::Millis();
        });
    forms.sleep = cs::Delegate<void(std::int64_t)>::from_static(
        "M:PlsPortGeneratedBootstrap.Source.Pause(System.Int64)",
        [](std::int64_t value) { PlsPortGeneratedBootstrap::Source::Pause(value); });
    forms.yield = cs::Delegate<void()>::from_static("M:PlsPortGeneratedBootstrap.Source.Yield",
                                                    []() { PlsPortGeneratedBootstrap::Source::Yield(); });
    forms.collect = cs::Delegate<void()>::from_static("M:PlsPortGeneratedBootstrap.Source.Collect",
                                                      []() { PlsPortGeneratedBootstrap::Source::Collect(); });
    forms.begin_draw_counters =
        cs::Delegate<void()>::from_static("M:PlsPortGeneratedBootstrap.Source.DrawCounters",
                                          []() { PlsPortGeneratedBootstrap::Source::DrawCounters(); });
    forms.close_jar_cache =
        cs::Delegate<void()>::from_static("M:PlsPortGeneratedBootstrap.Source.CloseJarCache",
                                          []() { PlsPortGeneratedBootstrap::Source::CloseJarCache(); });
    forms.release_expired_images = cs::Delegate<void()>::from_static(
        "Image.UnuseExpirationImages", []() { k::Image::UnuseExpirationImages(); });
    forms.termination_dialog = cs::Delegate<bool()>::from_static(
        "M:kairo.unity.form.FormManagerBase.DoTerminationDialog", []() -> bool {
            auto dialog = kairo::unity::ui::Dialog::create(3, cs::String(u"\x78ba\x8a8d"));
            cs::nonnull(dialog)->SetText(
                cs::String(u"\x30b2\x30fc\x30e0\x3092\x7d42\x4e86\x3057\x307e\x3059"));
            return cs::nonnull(dialog)->Show() == 4;
        });
    forms.resume_warning = cs::Delegate<void(cs::Ref<k::FormBase>)>::from_static(
        "FormManager.ResumeWarning",
        [](cs::Ref<k::FormBase>) { PLS_BOOTSTRAP_GAP("FormManager.ResumeWarning"); });
    forms.lifecycle_warning = cs::Delegate<void(cs::Ref<k::FormBase>, bool)>::from_static(
        "FormManager.LifecycleWarning",
        [](cs::Ref<k::FormBase>, bool) { PLS_BOOTSTRAP_GAP("FormManager.LifecycleWarning"); });
    k::BootstrapBindings bindings;
    bindings.forms = cs::make_ref<k::CallbackFormRuntime>(std::move(forms));
    bindings.create_config = cs::Delegate<void()>::from_static("Config.Create<MyConfig>", []() {
        pls::generated::kairo::common::cfg::Config::ensure_initialized();
        PlsPortGeneratedBootstrap::Source::CreateConfig();
    });
    bindings.initialize_platform =
        cs::Delegate<void()>::from_static("M:PlsPortGeneratedBootstrap.Source.InitializePlatform",
                                          []() { PlsPortGeneratedBootstrap::Source::InitializePlatform(); });
    bindings.initialize_language =
        cs::Delegate<void()>::from_static("M:PlsPortGeneratedBootstrap.Source.InitializeLanguage",
                                          []() { PlsPortGeneratedBootstrap::Source::InitializeLanguage(); });
    bindings.load_library_resources = cs::Delegate<cs::Ref<cs::Object>()>::from_static(
        "Awake.LibraryResources",
        []() -> cs::Ref<cs::Object> { return PlsPortGeneratedBootstrap::Source::LoadLibraryResources(); });
    k::configure_bootstrap(std::move(app), std::move(bindings));
}
}
