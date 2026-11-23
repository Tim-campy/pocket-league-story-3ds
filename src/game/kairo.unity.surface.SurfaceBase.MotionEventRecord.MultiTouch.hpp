// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::surface {

struct SurfaceBase_MotionEventRecord_MultiTouch : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.surface.SurfaceBase+MotionEventRecord+MultiTouch", SurfaceBase_MotionEventRecord_MultiTouch, pls::cs::Object)
pls::cs::Ref<pls::kairo::MotionEvent> event_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<SurfaceBase_MotionEventRecord_MultiTouch> self);

static pls::cs::Ref<SurfaceBase_MotionEventRecord_MultiTouch> create();

void Set(pls::cs::Ref<pls::kairo::MotionEvent> evt);

pls::cs::Int32 GetPointerCount();

pls::cs::Int32 GetPointerId(pls::cs::Int32 index);

pls::cs::Single GetX(pls::cs::Int32 index);

pls::cs::Single GetY(pls::cs::Int32 index);

pls::cs::Single GetDeltaX(pls::cs::Int32 index);

pls::cs::Single GetDeltaY(pls::cs::Int32 index);

pls::cs::Single GetDeltaTime(pls::cs::Int32 index);
};
} // namespace kairo::unity::surface
}
