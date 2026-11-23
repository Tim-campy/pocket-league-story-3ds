// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace system::form {

struct ConnectForm : pls::game::form::MyFormBase {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(MyFormBase,
    {"ToString", "M:system.form.ConnectForm.ToString"},
    {"Init", "M:system.form.ConnectForm.Init"},
    {"Update", "M:system.form.ConnectForm.Update"},
    {"Draw", "M:system.form.ConnectForm.Draw(kairo.unity.ui.Graphics)"},
    {"Resume", "M:system.form.ConnectForm.Resume"},
    {"Finish", "M:system.form.ConnectForm.Finish"},
    {"GetHashCode", "M:system.form.ConnectForm.GetHashCode"});
PLS_MANAGED_CLASS("system.form.ConnectForm", ConnectForm, MyFormBase, pls::kairo::TouchValueAccessor)
pls::cs::String ToString() override;
bool Init() override;
bool Update() override;
void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
bool Resume() override;
bool Finish() override;
std::int32_t GetHashCode() override;

static void ensure_initialized();

static bool& close_();

static pls::cs::Ref<ConnectForm>& form_();

static pls::cs::Int32& FORMID_CONNECT();

static pls::cs::Int32& frame_();

static pls::cs::Ref<kairo::unity::ui::ResourceManager>& resConnect_();

static void create_init(pls::cs::Ref<ConnectForm> self);

static pls::cs::Ref<ConnectForm> create();

void _draw(pls::cs::Ref<pls::kairo::Graphics> g);

static void DrawConnect(pls::cs::Ref<pls::kairo::Graphics> g);
};
} // namespace system::form
}
