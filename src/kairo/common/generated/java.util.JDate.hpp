// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace java::util {

struct JDate : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"Equals", "M:java.util.JDate.Equals(System.Object)"},
    {"GetHashCode", "M:java.util.JDate.GetHashCode"});
PLS_MANAGED_CLASS("java.util.JDate", JDate, pls::cs::Object)
pls::cs::DateTime date_{};
bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
std::int32_t GetHashCode() override;

static bool Equals(pls::cs::Ref<JDate> self,pls::cs::Ref<pls::cs::Object> obj);

static void ensure_initialized();

static pls::cs::DateTime& UNIX_TIME();

static void create_init(pls::cs::Ref<JDate> self);

static void create_init(pls::cs::Ref<JDate> self,pls::cs::Int64 date);

static pls::cs::Int32 GetHashCode(pls::cs::Ref<JDate> self);

static pls::cs::Ref<JDate> create();

static pls::cs::Ref<JDate> create(pls::cs::Int64 date);

pls::cs::Int64 GetTime();

void SetTime(pls::cs::Int64 time);

pls::cs::DateTime GetDateTime();
};
} // namespace java::util
}
