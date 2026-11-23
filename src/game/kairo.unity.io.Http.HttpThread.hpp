// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::io {

struct Http_HttpThread : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.io.Http+HttpThread", Http_HttpThread, pls::cs::Object)
pls::cs::Ref<java::lang::JThread> thread_{};
pls::cs::Ref<HttpObject> http_{};
bool connect_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<Http_HttpThread> self);

static pls::cs::Ref<Http_HttpThread> create();
};
} // namespace kairo::unity::io
}
