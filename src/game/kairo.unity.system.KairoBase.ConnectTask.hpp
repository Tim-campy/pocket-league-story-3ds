// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::system {

struct KairoBase_ConnectTask : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.system.KairoBase+ConnectTask", KairoBase_ConnectTask, pls::cs::Object)
pls::cs::Ref<generated::kairo::unity::util::SecureString> url_{};
pls::cs::Array<std::uint8_t> send_{};
pls::cs::Int64 time_{};
pls::cs::Int32 count_{};
pls::cs::Int32 dayMax_{};
pls::cs::Int32 countMax_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<KairoBase_ConnectTask> self);

static pls::cs::Ref<KairoBase_ConnectTask> create();
};
} // namespace kairo::unity::system
}
