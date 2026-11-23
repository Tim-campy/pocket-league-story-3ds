// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace surface {

struct TouchEffect : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("surface.TouchEffect", TouchEffect, pls::cs::Object)
pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface_{};
pls::cs::Single x_{};
pls::cs::Single y_{};
pls::cs::Single vx_{};
pls::cs::Single vy_{};
pls::cs::Single ax_{};
pls::cs::Single ay_{};
pls::cs::Int64 time_{};
pls::cs::Int64 key_{};
pls::cs::Int32 id_{};
pls::cs::Ref<pls::cs::Object> arg_{};
pls::cs::Int64 lastFrameTime_{};
static constexpr pls::cs::Int32 ID_BUTTON = 0;static constexpr pls::cs::Int32 ID_BUILDTAB = 1;static constexpr pls::cs::Int32 ID_HUMAN = 2;static constexpr pls::cs::Int32 ID_MAPCHIP = 3;
static void ensure_initialized();

static void create_init(pls::cs::Ref<TouchEffect> self);

static pls::cs::Ref<TouchEffect> create();

void Init(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface,pls::cs::Int32 id,pls::cs::Single x,pls::cs::Single y,pls::cs::Ref<kairo::unity::surface::TouchComponent> component,pls::cs::Ref<pls::cs::Object> arg);

void Init(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface,pls::cs::Int32 id,pls::cs::Single x,pls::cs::Single y,pls::cs::Ref<kairo::unity::surface::TouchComponent> component);

bool Frame();

void Draw(pls::cs::Ref<pls::kairo::Graphics> g);
};
} // namespace surface
}
