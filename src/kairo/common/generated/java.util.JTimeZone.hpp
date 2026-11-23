// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace java::util {

struct JTimeZone : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("java.util.JTimeZone", JTimeZone, pls::cs::Object)
pls::cs::String id_{};
pls::cs::Int64 utcOffset_{};
pls::cs::Ref<pls::cs::TimeZoneInfo> timezone_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<JTimeZone> self,pls::cs::String id);

static pls::cs::Ref<JTimeZone> create(pls::cs::String id);

static pls::cs::Ref<JTimeZone> GetDefault();

pls::cs::Ref<pls::cs::TimeZoneInfo> GetTimeZoneInfo();
};
} // namespace java::util
}
