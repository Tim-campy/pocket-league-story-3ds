// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::surface {

struct TouchEvent : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"ToString", "M:kairo.unity.surface.TouchEvent.ToString"},
    {"GetHashCode", "M:kairo.unity.surface.TouchEvent.GetHashCode"});
PLS_MANAGED_CLASS("kairo.unity.surface.TouchEvent", TouchEvent, pls::cs::Object)
pls::cs::Int32 type{};
pls::cs::Int32 x{};
pls::cs::Int32 y{};
pls::cs::Int32 dx{};
pls::cs::Int32 dy{};
pls::cs::Single speedX{};
pls::cs::Single speedY{};
pls::cs::Int32 pinch{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> pinchPointBegin_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> pinchPointNow_{};
pls::cs::Ref<TouchComponent> component{};
pls::cs::String ToString() override;
std::int32_t GetHashCode() override;
static constexpr pls::cs::Int32 TYPE_DOWN = 0;static constexpr pls::cs::Int32 TYPE_UP = 1;static constexpr pls::cs::Int32 TYPE_ENTER = 2;static constexpr pls::cs::Int32 TYPE_LEAVE = 3;static constexpr pls::cs::Int32 TYPE_MOVE = 4;static constexpr pls::cs::Int32 TYPE_CLICK = 5;static constexpr pls::cs::Int32 TYPE_LOST = 6;static constexpr pls::cs::Int32 TYPE_DRAG = 7;static constexpr pls::cs::Int32 TYPE_GRID_DRAG = 8;static constexpr pls::cs::Int32 TYPE_CELL_DRAG = 9;static constexpr pls::cs::Int32 TYPE_CANCEL = 10;static constexpr pls::cs::Int32 TYPE_PINCH_START = 11;static constexpr pls::cs::Int32 TYPE_PINCH = 12;static constexpr pls::cs::Int32 TYPE_ON = 13;
static void ensure_initialized();

static void create_init(pls::cs::Ref<TouchEvent> self);

static pls::cs::Ref<TouchEvent> create();

void Init();

bool IsPositive();

static bool IsPositive(pls::cs::Int32 type);
};
} // namespace kairo::unity::surface
}
