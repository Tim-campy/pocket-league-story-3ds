// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace system::form {

struct LanguageForm : pls::game::form::MyFormBase {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(MyFormBase,
    {"ToString", "M:system.form.LanguageForm.ToString"},
    {"Init", "M:system.form.LanguageForm.Init"},
    {"Update", "M:system.form.LanguageForm.Update"},
    {"Finish", "M:system.form.LanguageForm.Finish"},
    {"CheckMainWindow", "M:system.form.LanguageForm.CheckMainWindow"});
PLS_MANAGED_CLASS("system.form.LanguageForm", LanguageForm, MyFormBase, pls::kairo::TouchValueAccessor)
pls::cs::Array<pls::cs::Array<pls::cs::String>> languages_{};
pls::cs::String langPackFile_{};
bool langPackJapanese_{};
pls::cs::Array<std::uint8_t> langDownloadData_{};
bool start_{};
pls::cs::Int32 mode_{};
pls::cs::String ToString() override;
bool Init() override;
bool Update() override;
bool Finish() override;
bool CheckMainWindow() override;
static constexpr pls::cs::Int32 FORMID_LANGUAGE = 908;
static pls::cs::Delegate<void()>& callback_();

static void ensure_initialized();

static pls::cs::String& langDownloadUrl_();

static bool& warningTextLayout_();

static void create_init(pls::cs::Ref<LanguageForm> self);

static pls::cs::Ref<LanguageForm> create();

static void DrawButton(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Delegate<void()> callback);

static void DrawButton(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Delegate<void()> callback,pls::cs::Int32 anchor);

static bool OnTouchEventStatic(pls::cs::Ref<kairo::unity::surface::TouchEvent> e);
};
} // namespace system::form
}
