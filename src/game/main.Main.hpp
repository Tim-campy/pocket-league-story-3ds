// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace main {

struct Main : pls::kairo::IApplication {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::kairo::IApplication,
    {"OnCreate", "M:main.Main.OnCreate"},
    {"OnUpdate", "M:main.Main.OnUpdate"},
    {"OnDraw", "M:main.Main.OnDraw"},
    {"OnResume", "M:main.Main.OnResume"},
    {"OnSuspend", "M:main.Main.OnSuspend"},
    {"OnDestroy", "M:main.Main.OnDestroy"},
    {"GetFormManager", "M:main.Main.GetFormManager"});
PLS_MANAGED_CLASS("main.Main", Main, pls::kairo::IApplication)
void OnCreate() override;
void OnUpdate() override;
void OnDraw() override;
void OnResume() override;
void OnSuspend() override;
void OnDestroy() override;
pls::cs::Ref<pls::kairo::FormManagerBase> GetFormManager() override;

static void ensure_initialized();

static pls::cs::Ref<pls::kairo::SoundBase>& jingle_();

static pls::cs::Int32& jingleWait_();

static void create_init(pls::cs::Ref<Main> self);

static pls::cs::Ref<Main> create();

static pls::cs::Ref<Main> GetInstance();

static void SetJingle(pls::cs::Ref<pls::kairo::SoundBase> sound,pls::cs::Int32 wait);

static pls::cs::Ref<pls::kairo::SoundBase> GetJingle();
};
} // namespace main
}
