// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::graphics {

struct RectangleF : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"Equals", "M:kairo.unity.graphics.RectangleF.Equals(System.Object)"},
    {"GetHashCode", "M:kairo.unity.graphics.RectangleF.GetHashCode"});
PLS_MANAGED_CLASS("kairo.unity.graphics.RectangleF", RectangleF, pls::cs::Object)
pls::cs::Single bottom{};
pls::cs::Single left{};
pls::cs::Single right{};
pls::cs::Single top{};
bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
std::int32_t GetHashCode() override;

static bool Equals(pls::cs::Ref<RectangleF> self,pls::cs::Ref<pls::cs::Object> obj);

static void ensure_initialized();

static void create_init(pls::cs::Ref<RectangleF> self);

static pls::cs::Ref<RectangleF> create();

void Set(pls::cs::Ref<RectangleF> rc);

void Set(pls::cs::Single left,pls::cs::Single top,pls::cs::Single right,pls::cs::Single bottom);

pls::cs::Single Width();

pls::cs::Single Height();
};
} // namespace kairo::unity::graphics
}
