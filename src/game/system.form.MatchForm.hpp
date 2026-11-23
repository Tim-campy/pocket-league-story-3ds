// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
#include "java.lang.JRunnable.hpp"
namespace pls::game {
namespace system::form {

struct MatchForm : pls::game::form::MyFormBase, java::lang::JRunnable {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(MyFormBase,
    {"ToString", "M:system.form.MatchForm.ToString"},
    {"Init", "M:system.form.MatchForm.Init"},
    {"Draw", "M:system.form.MatchForm.Draw(kairo.unity.ui.Graphics)"},
    {"Finish", "M:system.form.MatchForm.Finish"},
    {"Resume", "M:system.form.MatchForm.Resume"},
    {"Update", "M:system.form.MatchForm.Update"},
    {"GetTouchValue", "M:system.form.MatchForm.GetTouchValue(System.Int32,System.Int32)"},
    {"SetTouchValue", "M:system.form.MatchForm.SetTouchValue(System.Int32,System.Int32)"},
    {"CheckMainWindow", "M:system.form.MatchForm.CheckMainWindow"},
    {"M:java.lang.JRunnable.Run", "M:system.form.MatchForm.Run"},
    {"GetHashCode", "M:system.form.MatchForm.GetHashCode"});
PLS_MANAGED_CLASS("system.form.MatchForm", MatchForm, MyFormBase, pls::kairo::TouchValueAccessor, JRunnable)
pls::cs::Int32 type_{};
bool untilActiveHide_{};
pls::cs::Int32 select_{};
pls::cs::Int32 command_{};
pls::cs::Int32 x_{};
pls::cs::Int32 y_{};
pls::cs::Int32 loopCounter_{};
bool draw__MatchForm{};
pls::cs::Array<pls::cs::Ref<MatchForm_UserRecord>> userList_{};
pls::cs::Ref<MatchForm_UserRecord> dlUser_{};
pls::cs::Int32 USER_MAX{};
pls::cs::Int32 TOPRANK_MAX{};
pls::cs::Array<pls::cs::Array<pls::cs::Ref<MatchForm_UserRecord>>> rankList_{};
pls::cs::Int32 threadType_{};
pls::cs::Int32 threadState_{};
pls::cs::String error_{};
pls::cs::Ref<java::lang::JThread> th_{};
pls::cs::String ToString() override;
bool Init() override;
void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
bool Finish() override;
bool Resume() override;
bool Update() override;
std::int32_t GetTouchValue(std::int32_t type,std::int32_t index) override;
void SetTouchValue(std::int32_t type,std::int32_t value) override;
bool CheckMainWindow() override;
void Run() override;
std::int32_t GetHashCode() override;
static constexpr pls::cs::Int32 FORMID_MATCH = 904;static constexpr pls::cs::Int32 TYPE_MATCHING = 0;static constexpr pls::cs::Int32 TYPE_RANKING = 1;static constexpr pls::cs::Int32 THTYPE_MATCHING = 0;static constexpr pls::cs::Int32 THTYPE_RANKING = 1;static constexpr pls::cs::Int32 THTYPE_DOWNLOAD = 2;static constexpr pls::cs::Int32 THSTATE_NONE = 0;static constexpr pls::cs::Int32 THSTATE_RUN = 1;static constexpr pls::cs::Int32 THSTATE_SUCCESS = 2;static constexpr pls::cs::Int32 THSTATE_FAILURE = 3;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& configData_();

static pls::cs::Array<std::uint8_t>& upload_();

static void create_init(pls::cs::Ref<MatchForm> self);

static void create_init(pls::cs::Ref<MatchForm> self,pls::cs::Int32 type);

static pls::cs::Ref<MatchForm> create();

static pls::cs::Ref<MatchForm> create(pls::cs::Int32 type);

void _draw(pls::cs::Ref<pls::kairo::Graphics> g);

bool _update();

pls::cs::Array<pls::cs::Int32> DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 anchor,bool active,pls::cs::Int32 margin,bool cursor);

void SetSoftlabel();

void ThreadStart(pls::cs::Int32 type);
};
} // namespace system::form
}
