// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace form {

struct RankForm : MyFormBase {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(MyFormBase,
    {"ToString", "M:form.RankForm.ToString"},
    {"Init", "M:form.RankForm.Init"},
    {"Update", "M:form.RankForm.Update"},
    {"Draw", "M:form.RankForm.Draw(kairo.unity.ui.Graphics)"},
    {"Resume", "M:form.RankForm.Resume"},
    {"Finish", "M:form.RankForm.Finish"},
    {"GetTouchValue", "M:form.RankForm.GetTouchValue(System.Int32,System.Int32)"},
    {"SetTouchValue", "M:form.RankForm.SetTouchValue(System.Int32,System.Int32)"},
    {"GetHashCode", "M:form.RankForm.GetHashCode"});
PLS_MANAGED_CLASS("form.RankForm", RankForm, MyFormBase, pls::kairo::TouchValueAccessor)
pls::cs::Int32 frame_{};
pls::cs::Int32 frame2_{};
pls::cs::Int32 page_{};
pls::cs::Int32 chara_{};
pls::cs::Ref<generated::java::util::Vector> charaList_{};
pls::cs::Int32 state_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resEvent_{};
pls::cs::String ToString() override;
bool Init() override;
bool Update() override;
void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
bool Resume() override;
bool Finish() override;
std::int32_t GetTouchValue(std::int32_t type,std::int32_t index) override;
void SetTouchValue(std::int32_t type,std::int32_t value) override;
std::int32_t GetHashCode() override;
static constexpr pls::cs::Int32 STATE_TOP = 0;static constexpr pls::cs::Int32 RESEVENT_SEB_BG = 0;static constexpr pls::cs::Int32 RESEVENT_SEB_CHARA = 1;static constexpr pls::cs::Int32 RESEVENT_SEB_BOX = 1;static constexpr pls::cs::Int32 RESEVENT_SEB_MINIHAPPY = 2;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& softLabels_();

static void create_init(pls::cs::Ref<RankForm> self);

static pls::cs::Ref<RankForm> create();

void _draw(pls::cs::Ref<pls::kairo::Graphics> g);

void ChangeState(pls::cs::Int32 state);

void SetSoftLabel();
};
} // namespace form
}
