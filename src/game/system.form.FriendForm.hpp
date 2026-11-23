// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace system::form {

struct FriendForm : pls::game::form::MyFormBase {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(MyFormBase,
    {"ToString", "M:system.form.FriendForm.ToString"},
    {"Init", "M:system.form.FriendForm.Init"},
    {"Update", "M:system.form.FriendForm.Update"},
    {"Draw", "M:system.form.FriendForm.Draw(kairo.unity.ui.Graphics)"},
    {"Resume", "M:system.form.FriendForm.Resume"},
    {"Finish", "M:system.form.FriendForm.Finish"},
    {"GetTouchValue", "M:system.form.FriendForm.GetTouchValue(System.Int32,System.Int32)"},
    {"SetTouchValue", "M:system.form.FriendForm.SetTouchValue(System.Int32,System.Int32)"},
    {"M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)", "M:system.form.FriendForm.OnTouchEvent(kairo.unity.surface.TouchEvent)"},
    {"GetHashCode", "M:system.form.FriendForm.GetHashCode"});
PLS_MANAGED_CLASS("system.form.FriendForm", FriendForm, MyFormBase, pls::kairo::TouchValueAccessor)
pls::cs::Int32 type_{};
pls::cs::Int32 frame_{};
pls::cs::Int32 select_{};
pls::cs::Int32 select2_{};
pls::cs::Int32 page_{};
pls::cs::Int32 value1_{};
pls::cs::Int32 loopCounter_{};
pls::cs::Ref<FriendForm> next_{};
pls::cs::String text_{};
pls::cs::String text2_{};
pls::cs::Ref<kairo::unity::ui::TextLayout> textLay_{};
pls::cs::Ref<friend_::ui::FriendData> friendData_{};
pls::cs::Ref<friend_::ui::Friend> friend_{};
pls::cs::Ref<java::lang::JThread> th_{};
pls::cs::String ToString() override;
bool Init() override;
bool Update() override;
void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
bool Resume() override;
bool Finish() override;
std::int32_t GetTouchValue(std::int32_t type,std::int32_t index) override;
void SetTouchValue(std::int32_t type,std::int32_t value) override;
bool OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) override;
std::int32_t GetHashCode() override;
static constexpr pls::cs::Int32 FORMID_FRIEND = 901;static constexpr pls::cs::Int32 TYPE_INPUT_NAME = 0;static constexpr pls::cs::Int32 TYPE_RENAME = 1;static constexpr pls::cs::Int32 TYPE_FRIEND_LIST = 2;static constexpr pls::cs::Int32 TYPE_SEARCH = 3;static constexpr pls::cs::Int32 TYPE_APPLY = 4;static constexpr pls::cs::Int32 TYPE_APPLY_CONFIRM = 5;static constexpr pls::cs::Int32 TYPE_APPROVE = 6;static constexpr pls::cs::Int32 TYPE_APPROVE2 = 7;static constexpr pls::cs::Int32 TYPE_REFUSE = 8;static constexpr pls::cs::Int32 TYPE_REFUSE2 = 9;static constexpr pls::cs::Int32 TYPE_ERROR_MSG = 10;static constexpr pls::cs::Int32 TYPE_ABOUT_FRIEND = 11;static constexpr pls::cs::Int32 TYPE_PLAY_BONUS1 = 12;static constexpr pls::cs::Int32 TYPE_PLAY_BONUS2 = 13;static constexpr pls::cs::Int32 TYPE_NEW_FRIEND_BONUS1 = 14;static constexpr pls::cs::Int32 TYPE_NEW_FRIEND_BONUS2 = 15;static constexpr pls::cs::Int32 PLAY_BONUS_END_FRAME = 24;static constexpr pls::cs::Int32 PLAY_BONUS2_END_FRAME = 50;static constexpr pls::cs::Int32 FRIEND_LIST_MAX = 5;static constexpr pls::cs::Int32 RESFRIEND_SEB_TRIAL = 0;static constexpr pls::cs::Int32 RESFRIEND_SEB_STUDENT = 1;static constexpr pls::cs::Int32 RESFRIEND_SEB_OBJ01 = 2;static constexpr pls::cs::Int32 RESFRIEND_SEB_EXCLAMATION_MARK00 = 3;static constexpr pls::cs::Int32 RESFRIEND_SEB_EFFECT00 = 4;static constexpr pls::cs::Int32 RESFRIEND_SEB_FOUNDATION = 5;static constexpr pls::cs::Int32 RESFRIEND_SEB_JUMP_ASSIST00 = 6;static constexpr pls::cs::Int32 RESFRIEND_SEB_JUMP_ASSIST01 = 7;static constexpr pls::cs::Int32 RESFRIEND_SEB_TALK_ASSIST00D = 8;static constexpr pls::cs::Int32 RESFRIEND_SEB_TALK_ASSIST00R = 9;static constexpr pls::cs::Int32 RESFRIEND_SEB_TALK_ASSIST01D = 10;static constexpr pls::cs::Int32 RESFRIEND_SEB_TALK_ASSIST01R = 11;static constexpr pls::cs::Int32 RESFRIEND_SEB_CLAP_ASSIST00D = 12;static constexpr pls::cs::Int32 RESFRIEND_SEB_CLAP_ASSIST00R = 13;static constexpr pls::cs::Int32 RESFRIEND_SEB_CLAP_ASSIST01D = 14;static constexpr pls::cs::Int32 RESFRIEND_SEB_CLAP_ASSIST01R = 15;static constexpr pls::cs::Int32 RESFRIEND_SEB_TICKET = 16;static constexpr pls::cs::Int32 RESFRIEND_SEB_NUM_TICKET = 17;static constexpr pls::cs::Int32 RESFRIEND_SEB_GET = 18;
bool _update();

static void ensure_initialized();

static pls::cs::Int32& COLOR_AQUA();

static pls::cs::Int32& COLOR_BLACK();

static pls::cs::Int32& COLOR_BLUE();

static pls::cs::Int32& COLOR_GREEN();

static pls::cs::Int32& COLOR_RED();

static pls::cs::Int32& COLOR_WHITE();

static pls::cs::Array<pls::cs::Int32>& drawRandomFriend_result();

static pls::cs::Ref<kairo::unity::ui::ResourceManager>& resFriend_();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& softLabels_();

static void create_init(pls::cs::Ref<FriendForm> self);

static void create_init(pls::cs::Ref<FriendForm> self,pls::cs::Int32 type);

static pls::cs::Ref<FriendForm> create();

static pls::cs::Ref<FriendForm> create(pls::cs::Int32 type);

static pls::cs::Ref<FriendForm> MakeErrorMsgForm(pls::cs::String msg,pls::cs::String msg_sub);

static void LoadResource();

void _draw(pls::cs::Ref<pls::kairo::Graphics> g);

pls::cs::Array<pls::cs::Int32> DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,bool active,bool cursor);

pls::cs::Array<pls::cs::Int32> DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 anchor,bool active,bool cursor);

pls::cs::Array<pls::cs::Int32> DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 anchor,bool active,pls::cs::Int32 margin,bool cursor);

pls::cs::Array<pls::cs::Int32> DrawCommandIntBool(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 anchor,bool active,bool cursor);

void SetSoftLabel(pls::cs::Int32 left,pls::cs::Int32 right);

static void DrawLine(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x1,pls::cs::Int32 y1,pls::cs::Int32 x2,pls::cs::Int32 y2,pls::cs::Int32 color);

static void DrawDotLine(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x1,pls::cs::Int32 y1,pls::cs::Int32 x2,pls::cs::Int32 y2,pls::cs::Int32 color);

static void DrawRect(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color);

static void DrawRect2(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2);

static void DrawRect3(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2,pls::cs::Int32 color3);

static void FillRect(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color);

static void FillRect2(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2);

static void FillRect3(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2,pls::cs::Int32 color3);

static void FillRect4(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2,pls::cs::Int32 color3,pls::cs::Int32 color4);

static void FillRectShadow(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2,pls::cs::Int32 color3);

static void DrawObi(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2);

static void DrawGradation(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 sx,pls::cs::Int32 sy,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 sr,pls::cs::Int32 sg,pls::cs::Int32 sb,pls::cs::Int32 dr,pls::cs::Int32 dg,pls::cs::Int32 db);

static void DrawBonusObi(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2,pls::cs::Int32 color3);

void DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 anchor);

void DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding);

void DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 value,pls::cs::Int32 x,pls::cs::Int32 y);

pls::cs::Ref<pls::kairo::FormBase> MakeErrorDialog();

pls::cs::Ref<pls::kairo::FormBase> MakeErrorDialog(pls::cs::String msg,pls::cs::String args);

static pls::cs::Array<pls::cs::Int32> DrawRandomFriend(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 center,pls::cs::Int32 top);
};
} // namespace system::form
}
