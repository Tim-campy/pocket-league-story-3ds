// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::surface {

struct SurfaceManagerBase : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"M:kairo.unity.surface.SurfaceManagerBase.AdjustSurfaceLayout", "M:kairo.unity.surface.SurfaceManagerBase.AdjustSurfaceLayout"},
    {"M:kairo.unity.surface.SurfaceManagerBase.Draw(kairo.unity.ui.Graphics)", "M:kairo.unity.surface.SurfaceManagerBase.Draw(kairo.unity.ui.Graphics)"},
    {"M:kairo.unity.surface.SurfaceManagerBase.DrawComponents(kairo.unity.ui.Graphics)", "M:kairo.unity.surface.SurfaceManagerBase.DrawComponents(kairo.unity.ui.Graphics)"});
PLS_MANAGED_CLASS("kairo.unity.surface.SurfaceManagerBase", SurfaceManagerBase, pls::cs::Object)
pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<SurfaceBase>>> surfaceList_{};
pls::cs::Array<pls::cs::Ref<TouchComponent>> components_{};
pls::cs::List<pls::cs::Array<pls::kairo::Vector2>> paintRects_{};
pls::cs::Int32 currentPaintRect_{};
pls::cs::Int32 currentPaintPoint_{};
pls::cs::Array<pls::cs::Int32> getBoundingRect_tmp{};
virtual void AdjustSurfaceLayout()=0;
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> g);
virtual void DrawComponents(pls::cs::Ref<pls::kairo::Graphics> g);

static pls::cs::Ref<SurfaceManagerBase> create();

static void ensure_initialized();

static bool& autoGLRender_();

static bool& autoGLRenderClipEnable_();

static void create_init(pls::cs::Ref<SurfaceManagerBase> self);

pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<SurfaceBase>>> GetSurfaceList();

void ClearTouchComponent();

void DoEvents();

bool GetSelectPaintPoint(pls::cs::Single x,pls::cs::Single y,pls::cs::Int32& rectIndex,pls::cs::Int32& handleIndex);

pls::cs::Array<pls::cs::Int32> GetPaintRect(pls::cs::Array<pls::kairo::Vector2> points);

pls::cs::Array<pls::kairo::Vector2> GetPaintHandlePoint(pls::cs::Array<pls::kairo::Vector2> points);

void BeginTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g);

void EndTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g);

void CheckScreenRotation();

void CheckScreenRotation(bool skip);

void OnKeyDown(pls::cs::Int32 keyCode,pls::cs::Ref<pls::kairo::KeyEvent> evt);

void OnKeyDown(pls::cs::Int32 key);

void OnKeyUp(pls::cs::Int32 key);

static bool IsAutoGLRender();
};
} // namespace kairo::unity::surface
}
