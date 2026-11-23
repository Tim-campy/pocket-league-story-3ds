// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "java.lang.JRunnable.hpp"
namespace pls::game {
namespace form {

struct FormManager : pls::kairo::FormManagerBase {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::kairo::FormManagerBase,
    {"Resume", "M:form.FormManager.Resume"},
    {"PreUpdate", "M:form.FormManager.PreUpdate"},
    {"Updated", "M:form.FormManager.Updated"},
    {"PreDraw", "M:form.FormManager.PreDraw"},
    {"Drawn", "M:form.FormManager.Drawn"});
PLS_MANAGED_CLASS("form.FormManager", FormManager, pls::kairo::FormManagerBase, java::lang::JRunnable)
pls::cs::Int64 oldTime_{};
pls::cs::Int64 fpsTime_{};
bool fpsUnlimited_{};
pls::cs::Int32 tagFps_{};
pls::cs::Int32 fps_{};
pls::cs::Int32 frameCount_{};
pls::cs::Int32 vibeTime_{};
pls::cs::Int32 vibeFlag_{};
pls::cs::Int32 lastTopFormId_{};
pls::cs::Int32 lastTopFormType_{};
pls::cs::Int32 lastTopFormChara_{};
pls::cs::Int32 loopCounter_{};
void Resume() override;
void PreUpdate() override;
void Updated() override;
void PreDraw() override;
void Drawn() override;

static void ensure_initialized();

static pls::cs::Ref<FormManager>& instance_();

static void create_init(pls::cs::Ref<FormManager> self);

static pls::cs::Ref<FormManager> create();

static pls::cs::Ref<FormManager> GetInstance();

pls::cs::Int32 GetFps();

void StartVibrator(pls::cs::Int32 ms);

void StopVibrator();

void SetTargetFps(pls::cs::Int32 fps);

pls::cs::Int32 GetTargetFps();
};
} // namespace form
}
