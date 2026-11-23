// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace form {

struct DebugForm : MyFormBase {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(MyFormBase,
    {"Init", "M:form.DebugForm.Init"},
    {"Finish", "M:form.DebugForm.Finish"},
    {"Update", "M:form.DebugForm.Update"},
    {"Draw", "M:form.DebugForm.Draw(kairo.unity.ui.Graphics)"},
    {"Resume", "M:form.DebugForm.Resume"},
    {"GetTouchValue", "M:form.DebugForm.GetTouchValue(System.Int32,System.Int32)"},
    {"SetTouchValue", "M:form.DebugForm.SetTouchValue(System.Int32,System.Int32)"});
PLS_MANAGED_CLASS("form.DebugForm", DebugForm, MyFormBase, pls::kairo::TouchValueAccessor)
pls::cs::Ref<game::UserData> udat_{};
pls::cs::Int32 mode{};
pls::cs::Int32 state_{};
pls::cs::Int32 select_{};
pls::cs::Int32 frame_{};
pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> formationRect_global_pos{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> formationRect_camera_pos{};
pls::cs::Ref<game::Player> temp_player{};
pls::cs::Int32 PLAYER_FACE{};
pls::cs::Int32 PLAYER_BODY{};
pls::cs::Int32 PLAYER_SEB{};
pls::cs::Int32 PLAYER_DIRECT{};
pls::cs::Int32 PLAYER_FRAME{};
pls::cs::Int32 PLAYER_ANIME{};
pls::cs::Int32 PLAYER_TEAM{};
pls::cs::Int32 BALL{};
pls::cs::Int32 PLAYER_EFINDEX{};
pls::cs::Int32 SHADOW{};
pls::cs::Int32 GOAL{};
pls::cs::Int32 GOAL_INDEX{};
pls::cs::Int32 TEST_P1_TEAM{};
pls::cs::Int32 TEST_P1_POTENTIAL{};
pls::cs::Int32 TEST_P1_FORMATION{};
pls::cs::Int32 TEST_P2_TEAM{};
pls::cs::Int32 TEST_P2_POTENTIAL{};
pls::cs::Int32 TEST_P2_FORMATION{};
pls::cs::Int32 TEST_STADIUM{};
pls::cs::Int32 TEST_GROUND{};
pls::cs::Int32 ch_bgmIndex{};
pls::cs::Int32 ch_seIndex{};
pls::cs::Int32 ch_bgmVolumeIndex{};
pls::cs::Int32 ch_seVolumeIndex{};
pls::cs::Array<pls::cs::Int32> ch_kickSound{};
pls::cs::Array<pls::cs::Int32> ch_shootSound{};
pls::cs::Int32 ch_formationId{};
pls::cs::Int32 ch_ameftoId{};
pls::cs::Int32 ch_sChangeId{};
pls::cs::Int32 tpp_scrollValue_{};
pls::cs::Int32 vCH_DATA_INDEX{};
pls::cs::Int32 fukidashiIndex_{};
pls::cs::Int32 fukidashiFeel_{};
pls::cs::Array<pls::cs::String> on_off{};
pls::cs::Array<pls::cs::String> str_direct{};
pls::cs::Array<pls::cs::String> waku{};
pls::cs::Array<pls::cs::String> player_param{};
pls::cs::Ref<generated::java::util::Vector> sortDraw{};
pls::cs::Array<pls::cs::Int32> camera_pos{};
bool Init() override;
bool Finish() override;
bool Update() override;
void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
bool Resume() override;
std::int32_t GetTouchValue(std::int32_t type,std::int32_t index) override;
void SetTouchValue(std::int32_t type,std::int32_t value) override;
static constexpr pls::cs::Int32 MODE_PARAM = 0;static constexpr pls::cs::Int32 MODE_GAMEPARAM = 1;static constexpr pls::cs::Int32 MODE_WINDOW = 2;static constexpr pls::cs::Int32 TPP_DISPMAX = 13;static constexpr pls::cs::Int32 PARAM_1 = 1;static constexpr pls::cs::Int32 PARAM_2 = 2;static constexpr pls::cs::Int32 PARAM_3 = 3;static constexpr pls::cs::Int32 PARAM_4 = 4;static constexpr pls::cs::Int32 PARAM_6 = 6;static constexpr pls::cs::Int32 PARAM_9 = 9;static constexpr pls::cs::Int32 PARAM_TEAMPLAYER = 11;
static void ensure_initialized();

static pls::cs::Int32& CH_DATA_INDEX();

static pls::cs::Int32& CH_DATA_INDEX2();

static pls::cs::Int32& ch_elements();

static pls::cs::Int32& ch_eventMsgs();

static pls::cs::Int32& ch_news();

static pls::cs::Int32& ch_popUp();

static pls::cs::Int32& ch_talks();

static pls::cs::Int32& chFanBonusIndex();

static pls::cs::Int32& COATEVA_PLAYER_ID();

static pls::cs::Int32& COATEVA_ROOT_INDEX();

static pls::cs::Int32& COATEVA_TEAM_ID();

static pls::cs::Int32& COATEVA_WAKU();

static pls::cs::Ref<generated::java::util::Vector>& debug_scorevec();

static pls::cs::Array<pls::cs::Int32>& debug_testscore();

static pls::cs::Int32& flg_fanPMax();

static pls::cs::Int32& flg_formationMax();

static pls::cs::Int32& flg_leagueMax();

static pls::cs::Int32& flg_loadCheck();

static pls::cs::Int32& flg_LVMAX_fanAct();

static pls::cs::Int32& flg_LVMAX_sponsor();

static pls::cs::Int32& flg_LVMAX_svisor();

static pls::cs::Int32& flg_LVMAX_tenant();

static pls::cs::Int32& flg_menuOpen();

static pls::cs::Int32& flg_playerAll();

static pls::cs::Int32& flg_playerLvMax();

static pls::cs::Int32& flg_playerTPMax();

static pls::cs::Int32& flg_qmMax();

static pls::cs::Int32& flg_researchPointMax();

static pls::cs::Int32& flg_sponsorMax();

static pls::cs::Int32& flg_svisorMax();

static pls::cs::Int32& flg_tenantMax();

static pls::cs::Int32& flg_tradeMax();

static pls::cs::Int32& flg_trainingMax();

static pls::cs::Int32& flg_warPMax();

static pls::cs::Int32& max_assist();

static pls::cs::Int32& max_fan();

static pls::cs::Int32& max_nameValue();

static pls::cs::Int32& TEST_STATE();

static pls::cs::Int32& tpp_index();

static void create_init(pls::cs::Ref<DebugForm> self);

static pls::cs::Ref<DebugForm> create();

bool Update_param();

bool Update_gameParam();

bool Update_window();

void Draw_param(pls::cs::Ref<pls::kairo::Graphics> g);

void Draw_gameParam(pls::cs::Ref<pls::kairo::Graphics> g);

void Draw_window(pls::cs::Ref<pls::kairo::Graphics> g);

void Draw_coatEva(pls::cs::Ref<pls::kairo::Graphics> g);

void Draw_moveArea(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 team_id,pls::cs::Int32 p_id);

void Draw_player(pls::cs::Ref<pls::kairo::Graphics> g);

void Draw_goal(pls::cs::Ref<pls::kairo::Graphics> g);

void Draw_goalMini(pls::cs::Ref<pls::kairo::Graphics> g);

void UpdateTestParam();
};
} // namespace form
}
