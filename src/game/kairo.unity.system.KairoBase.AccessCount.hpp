// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::system {

struct KairoBase_AccessCount : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"ToString", "M:kairo.unity.system.KairoBase.AccessCount.ToString"},
    {"GetHashCode", "M:kairo.unity.system.KairoBase.AccessCount.GetHashCode"});
PLS_MANAGED_CLASS("kairo.unity.system.KairoBase+AccessCount", KairoBase_AccessCount, pls::cs::Object)
pls::cs::String name_{};
pls::cs::Int64 value_{};
pls::cs::String ToString() override;
std::int32_t GetHashCode() override;

static void ensure_initialized();

static void create_init(pls::cs::Ref<KairoBase_AccessCount> self,pls::cs::String name,pls::cs::Int64 value);

static pls::cs::Ref<KairoBase_AccessCount> create(pls::cs::String name,pls::cs::Int64 value);
};
} // namespace kairo::unity::system
}
