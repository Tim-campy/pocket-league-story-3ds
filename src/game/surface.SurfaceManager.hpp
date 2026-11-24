// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.surface.SurfaceManagerBase.hpp"

namespace pls::game {
namespace surface {

struct SurfaceManager : kairo::unity::surface::SurfaceManagerBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(SurfaceManagerBase,
                       {"M:kairo.unity.surface.SurfaceManagerBase.AdjustSurfaceLayout",
                        "M:surface.SurfaceManager.AdjustSurfaceLayout"},
                       {"M:kairo.unity.surface.SurfaceManagerBase.Draw(kairo.unity.ui.Graphics)",
                        "M:surface.SurfaceManager.Draw(kairo.unity.ui.Graphics)"},
                       {"M:kairo.unity.surface.SurfaceManagerBase.DrawComponents(kairo.unity.ui.Graphics)",
                        "M:surface.SurfaceManager.DrawComponents(kairo.unity.ui.Graphics)"});
    PLS_MANAGED_CLASS("surface.SurfaceManager", SurfaceManager, SurfaceManagerBase)
    bool wide_{};
    bool layoutMode_{};
    void AdjustSurfaceLayout() override;
    void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
    void DrawComponents(pls::cs::Ref<pls::kairo::Graphics> g) override;

    static void ensure_initialized();

    static pls::cs::Ref<system::surface::GameBanner>& gban_();

    static pls::cs::Ref<GamePad>& gpad_();

    static pls::cs::Ref<SurfaceManager>& instance_();

    static pls::cs::Ref<GameView>& view_();

    static void create_init(pls::cs::Ref<SurfaceManager> self);

    static pls::cs::Ref<SurfaceManager> create();

    static void Setup();

    void UpdateAdMobView();

    void SetLayoutMode(bool enable);

    bool IsLayoutMode();
};
} // namespace surface
}
