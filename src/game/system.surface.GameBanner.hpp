// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"

namespace pls::game {
namespace system::surface {

struct GameBanner : kairo::unity::surface::SurfaceBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(SurfaceBase,
                       {"M:kairo.unity.surface.SurfaceBase.IsGameSurface",
                        "M:system.surface.GameBanner.IsGameSurface"},
                       {"M:kairo.unity.surface.SurfaceBase.OnTouchEvent(kairo.unity.surface.TouchEvent)",
                        "M:system.surface.GameBanner.OnTouchEvent(kairo.unity.surface.TouchEvent)"},
                       {"M:kairo.unity.surface.SurfaceBase.Draw(kairo.unity.ui.Graphics)",
                        "M:system.surface.GameBanner.Draw(kairo.unity.ui.Graphics)"},
                       {"M:kairo.unity.surface.SurfaceBase.RotateClear",
                        "M:system.surface.GameBanner.RotateClear"});
    PLS_MANAGED_CLASS("system.surface.GameBanner", GameBanner, SurfaceBase)
    pls::cs::Ref<pls::kairo::IApplication> app_{};
    pls::cs::Ref<pls::kairo::Canvas> canvas_{};
    pls::cs::Ref<pls::game::surface::TouchEffectManager> effMan_{};
    pls::cs::Int32 current_{};
    pls::cs::Int64 currentBeginTime_{};
    pls::cs::Int64 showBeginTime_{};
    pls::cs::Ref<generated::java::util::JRandom> random_{};
    bool useAdmob_{};
    pls::cs::String friendBanner_{};
    bool IsGameSurface() override;
    void OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> evt) override;
    void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
    void RotateClear() override;

    static void ensure_initialized();

    static pls::cs::Array<pls::cs::String>& FILENAMES();

    static pls::cs::Ref<pls::kairo::Image>& image_();

    static pls::cs::Ref<GameBanner>& instance_();

    static void create_init(pls::cs::Ref<GameBanner> self);

    static pls::cs::Ref<GameBanner> create();

    static pls::cs::Ref<GameBanner> GetInstance();

    void Load();

    void Unload();

    bool Visible();
};
} // namespace system::surface
}
