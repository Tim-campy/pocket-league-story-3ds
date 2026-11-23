// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace system::form {

struct RestoreForm : pls::game::form::MyFormBase {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(MyFormBase,
    {"ToString", "M:system.form.RestoreForm.ToString"},
    {"Init", "M:system.form.RestoreForm.Init"},
    {"Draw", "M:system.form.RestoreForm.Draw(kairo.unity.ui.Graphics)"},
    {"Update", "M:system.form.RestoreForm.Update"},
    {"CheckMainWindow", "M:system.form.RestoreForm.CheckMainWindow"});
PLS_MANAGED_CLASS("system.form.RestoreForm", RestoreForm, MyFormBase, pls::kairo::TouchValueAccessor)
pls::cs::Ref<pls::kairo::FormBase> next_{};
pls::cs::String message_{};
pls::cs::String ToString() override;
bool Init() override;
void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
bool Update() override;
bool CheckMainWindow() override;
static constexpr pls::cs::Int32 FORMID_RESTORE = 906;
static void ensure_initialized();

static void create_init(pls::cs::Ref<RestoreForm> self,pls::cs::Ref<pls::kairo::FormBase> next);

static pls::cs::Ref<RestoreForm> create(pls::cs::Ref<pls::kairo::FormBase> next);
};
} // namespace system::form
}
