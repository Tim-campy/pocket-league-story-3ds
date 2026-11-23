// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::surface {

struct SurfaceBase_MotionEventRecord : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.surface.SurfaceBase+MotionEventRecord", SurfaceBase_MotionEventRecord, pls::cs::Object)
pls::cs::Int32 action{};
pls::cs::Single x{};
pls::cs::Single y{};
pls::cs::Single deltaX{};
pls::cs::Single deltaY{};
pls::cs::Single deltaTime{};
pls::cs::Int32 pointerCount{};
pls::cs::Array<pls::cs::Int32> pointerIds{};
pls::cs::Array<pls::cs::Single> pointerPos{};
pls::cs::Array<pls::cs::Single> pointerDelta{};
bool isMousePointer{};

static void ensure_initialized();

static pls::cs::Ref<SurfaceBase_MotionEventRecord_MultiTouch>& multiTouch_();

static void create_init(pls::cs::Ref<SurfaceBase_MotionEventRecord> self);

static pls::cs::Ref<SurfaceBase_MotionEventRecord> create();

bool IsEmpty();

void Clear();

void Copy(pls::cs::Ref<SurfaceBase> surface,pls::cs::Ref<pls::kairo::MotionEvent> evt);

void CopyMotionEventRecord(pls::cs::Ref<SurfaceBase> surface,pls::cs::Ref<SurfaceBase_MotionEventRecord> evt);

pls::cs::Int32 GetAction();

bool IsMousePointer();

pls::cs::Int32 GetPointerCount();

pls::cs::Int32 GetPointerId(pls::cs::Int32 pointerIndex);

pls::cs::Single GetX(pls::cs::Int32 index);

pls::cs::Single GetY(pls::cs::Int32 index);
};
} // namespace kairo::unity::surface
}
