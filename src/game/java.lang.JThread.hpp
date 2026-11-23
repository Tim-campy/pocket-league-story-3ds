// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace java::lang {

struct JThread : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"Equals", "M:java.lang.JThread.Equals(System.Object)"},
    {"GetHashCode", "M:java.lang.JThread.GetHashCode"});
PLS_MANAGED_CLASS("java.lang.JThread", JThread, pls::cs::Object)
pls::cs::Ref<pls::cs::Thread> thread_{};
pls::cs::Int32 priority_{};
bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
std::int32_t GetHashCode() override;
static constexpr pls::cs::Int32 MAX_PRIORITY = 1;static constexpr pls::cs::Int32 MIN_PRIORITY = 2;static constexpr pls::cs::Int32 NORM_PRIORITY = 0;
static bool Equals(pls::cs::Ref<JThread> self,pls::cs::Ref<pls::cs::Object> obj);

static void ensure_initialized();

static pls::cs::List<pls::cs::Ref<JThread>>& threadBuffer_();

static void create_init(pls::cs::Ref<JThread> self);

static void create_init(pls::cs::Ref<JThread> self,pls::cs::Ref<JRunnable> target);

static void create_2_init(pls::cs::Ref<JThread> self,pls::cs::Delegate<void()> start);

static bool op_Equality(pls::cs::Ref<JThread> obj1,pls::cs::Ref<JThread> obj2);

static bool op_Inequality(pls::cs::Ref<JThread> obj1,pls::cs::Ref<JThread> obj2);

static pls::cs::Ref<JThread> create();

static pls::cs::Ref<JThread> create(pls::cs::Ref<JRunnable> target);

static pls::cs::Ref<JThread> create_2(pls::cs::Delegate<void()> start);

void Start();

static void Sleep(pls::cs::Int64 millis);

static void Yield();

static pls::cs::Ref<JThread> CurrentThread();
};
} // namespace java::lang
}
