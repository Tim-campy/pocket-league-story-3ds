// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "form.MyFormBase.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace form {

struct SubForm : MyFormBase {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(MyFormBase,
    {"ToString", "M:form.SubForm.ToString"},
    {"Init", "M:form.SubForm.Init"},
    {"Draw", "M:form.SubForm.Draw(kairo.unity.ui.Graphics)"},
    {"Finish", "M:form.SubForm.Finish"},
    {"Resume", "M:form.SubForm.Resume"},
    {"Update", "M:form.SubForm.Update"},
    {"CheckMainWindow", "M:form.SubForm.CheckMainWindow"},
    {"GetTouchValue", "M:form.SubForm.GetTouchValue(System.Int32,System.Int32)"},
    {"SetTouchValue", "M:form.SubForm.SetTouchValue(System.Int32,System.Int32)"},
    {"M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)", "M:form.SubForm.OnTouchEvent(kairo.unity.surface.TouchEvent)"},
    {"GetHashCode", "M:form.SubForm.GetHashCode"});
PLS_MANAGED_CLASS("form.SubForm", SubForm, MyFormBase, pls::kairo::TouchValueAccessor)
pls::cs::String err_method{};
pls::cs::Int32 err_line{};
pls::cs::Ref<game::UserData> udat_{};
pls::cs::Int32 type_{};
pls::cs::Int32 scrollValue_{};
bool untilActiveHide_{};
pls::cs::Int32 select_{};
pls::cs::Int32 x_{};
pls::cs::Int32 y_{};
pls::cs::Int32 loopCounter_{};
pls::cs::Int32 frame_{};
pls::cs::Int32 frame2_{};
pls::cs::String name_{};
pls::cs::Ref<kairo::unity::ui::TextLayout> textLay_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> menus_{};
pls::cs::Array<pls::cs::String> selectButtons_{};
pls::cs::Int32 value1_{};
pls::cs::Int32 value2_{};
pls::cs::Int32 training_cnt{};
pls::cs::String text_{};
pls::cs::Array<pls::cs::String> textAry_{};
pls::cs::Int32 textIdx_{};
pls::cs::Int32 eventPage_{};
pls::cs::Int32 eventId_{};
pls::cs::Int32 pagesNum_{};
pls::cs::Int32 page_{};
pls::cs::Int32 page2_{};
pls::cs::Int32 eventRoot_{};
pls::cs::Int32 humanCharaType_{};
pls::cs::Int32 humanCharaIndex_{};
pls::cs::Ref<SubForm> dialog__SubForm{};
pls::cs::Ref<SubForm> subForm_{};
pls::cs::Ref<game::DelayEvent> delayEvent_{};
pls::cs::String talkArg_{};
pls::cs::Int32 nextIndex_{};
pls::cs::Array<pls::cs::Int32> eventIds_{};
pls::cs::Array<pls::cs::String> eventTexts_{};
pls::cs::Int32 jingle_{};
pls::cs::Array<pls::cs::Int32> EVENT_HAPPY_ANIME_OY{};
pls::cs::Array<pls::cs::Int32> EVENT_SAD_ANIME_OY{};
pls::cs::Int32 saveState_{};
pls::cs::Int32 dialogId_{};
pls::cs::Int32 result__SubForm{};
pls::cs::Int32 arg1_{};
pls::cs::Int32 arg2_{};
pls::cs::Int32 wait_{};
pls::cs::Int32 inputFig_{};
pls::cs::Array<pls::cs::Int32> ANIME_MATCH_RESULT{};
pls::cs::Array<pls::cs::Int32> temp_paramArray{};
pls::cs::Ref<generated::java::util::Vector> ary1{};
pls::cs::Ref<generated::java::util::Vector> ary2{};
pls::cs::Ref<data::FanActData> fanActData_{};
pls::cs::Ref<data::SponsorData> sponsorData_{};
pls::cs::Ref<data::PlayerData> playerData_{};
pls::cs::Ref<data::TradeData> tradeData_{};
pls::cs::Int32 tenantId_{};
pls::cs::Int32 tenantDataId_{};
pls::cs::Ref<data::QuestMatchData> qmData_{};
pls::cs::Ref<data::LeagueData> leagueData_{};
pls::cs::Int32 sponsor_income_{};
pls::cs::Int32 sponsor_num_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> MENUGRAPH_OFF{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> zsort_mhobj{};
pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> w_vic_pos{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> w_vic_data{};
pls::cs::Array<pls::cs::Int32> fw_goRate{};
pls::cs::Array<pls::cs::Int32> fw_cnt{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> fw_pos{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> fw_zsort{};
pls::cs::Int32 fw_commonWait{};
pls::cs::Int32 udArrowCnt{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> update_tmp1{};
pls::cs::Array<pls::cs::Int32> drawWindow_tmp_SubForm{};
pls::cs::Int32 clearPoint_mode{};
pls::cs::Int32 clearPoint_cnt{};
pls::cs::Int32 clearPoint_index{};
pls::cs::Int64 clearPoint_score{};
pls::cs::Int64 clearPoint_highScore{};
pls::cs::String ToString() override;
bool Init() override;
void Draw(pls::cs::Ref<pls::kairo::Graphics> g) override;
bool Finish() override;
bool Resume() override;
bool Update() override;
bool CheckMainWindow() override;
std::int32_t GetTouchValue(std::int32_t type,std::int32_t index) override;
void SetTouchValue(std::int32_t type,std::int32_t value) override;
bool OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) override;
std::int32_t GetHashCode() override;
static constexpr pls::cs::Int32 TYPE_TALK = 0;static constexpr pls::cs::Int32 TYPE_DIALOG = 1;static constexpr pls::cs::Int32 TYPE_DIALOG_CHARA = 2;static constexpr pls::cs::Int32 TYPE_MAIN_MENU = 3;static constexpr pls::cs::Int32 TYPE_MAIN_MENU_SOCCER = 4;static constexpr pls::cs::Int32 TYPE_GAME_MENU = 5;static constexpr pls::cs::Int32 TYPE_TEAM_MENU = 6;static constexpr pls::cs::Int32 TYPE_CLUB_MANAGE = 7;static constexpr pls::cs::Int32 TYPE_SETTING_MENU = 8;static constexpr pls::cs::Int32 TYPE_ACTION_MENU = 9;static constexpr pls::cs::Int32 TYPE_LIST_MENU = 10;static constexpr pls::cs::Int32 TYPE_INFO_MENU = 11;static constexpr pls::cs::Int32 TYPE_SYSTEM_MENU = 12;static constexpr pls::cs::Int32 TYPE_EVENT = 13;static constexpr pls::cs::Int32 TYPE_CONFIG = 14;static constexpr pls::cs::Int32 TYPE_MANUAL = 15;static constexpr pls::cs::Int32 TYPE_SAVE = 16;static constexpr pls::cs::Int32 TYPE_NEWS = 17;static constexpr pls::cs::Int32 TYPE_WAIT = 18;static constexpr pls::cs::Int32 TYPE_CLEARPOINT = 19;static constexpr pls::cs::Int32 TYPE_ENDING = 20;static constexpr pls::cs::Int32 TYPE_NO_MYMENU = 21;static constexpr pls::cs::Int32 TYPE_SAVE_MENU = 22;static constexpr pls::cs::Int32 TYPE_DIALOG_SYSTEM = 23;static constexpr pls::cs::Int32 TYPE_FADEIN = 24;static constexpr pls::cs::Int32 TYPE_FADEOUT = 25;static constexpr pls::cs::Int32 TYPE_TEAMEDIT = 26;static constexpr pls::cs::Int32 TYPE_MEMBERINFO = 27;static constexpr pls::cs::Int32 TYPE_MEMBERINFO_BENCH = 28;static constexpr pls::cs::Int32 TYPE_MEMBERINFO2 = 29;static constexpr pls::cs::Int32 TYPE_MEMBERINFO_MINI = 30;static constexpr pls::cs::Int32 TYPE_MEMBERINFO_DISMISSAL = 31;static constexpr pls::cs::Int32 TYPE_MEMBERINFO_EXPLAIN_P = 32;static constexpr pls::cs::Int32 TYPE_LEAGUEINFO = 33;static constexpr pls::cs::Int32 TYPE_LEAGUESELECT2 = 34;static constexpr pls::cs::Int32 TYPE_LEAGUESELECT3 = 35;static constexpr pls::cs::Int32 TYPE_MATCHNEXT = 36;static constexpr pls::cs::Int32 TYPE_MATCHEND = 37;static constexpr pls::cs::Int32 TYPE_MATCH_VICTORY = 38;static constexpr pls::cs::Int32 TYPE_FAN_FANACT = 39;static constexpr pls::cs::Int32 TYPE_FAN_FANACT2 = 40;static constexpr pls::cs::Int32 TYPE_FAN_FANACT_EF2 = 41;static constexpr pls::cs::Int32 TYPE_FAN_SPONSOR = 42;static constexpr pls::cs::Int32 TYPE_FAN_SPONSOR2 = 43;static constexpr pls::cs::Int32 TYPE_FAN_SPONSOR_EF2 = 44;static constexpr pls::cs::Int32 TYPE_FAN_TRAINING_TOP = 45;static constexpr pls::cs::Int32 TYPE_FAN_TRAINING_T = 46;static constexpr pls::cs::Int32 TYPE_FAN_TRAINING_P = 47;static constexpr pls::cs::Int32 TYPE_FAN_TRAINING_EF2 = 48;static constexpr pls::cs::Int32 TYPE_FAN_TRAINING_EF3 = 49;static constexpr pls::cs::Int32 TYPE_SUPERVISOR_DATA = 50;static constexpr pls::cs::Int32 TYPE_SUPERVISOR_CHANGE = 51;static constexpr pls::cs::Int32 TYPE_SUPERVISOR_YEAREND = 52;static constexpr pls::cs::Int32 TYPE_TRADELIST = 53;static constexpr pls::cs::Int32 TYPE_TRADELIST_CHECK = 54;static constexpr pls::cs::Int32 TYPE_TRADELIST_EF = 55;static constexpr pls::cs::Int32 TYPE_TRADELIST_SUCCESS = 56;static constexpr pls::cs::Int32 TYPE_EDITFORMATION_PRINT = 57;static constexpr pls::cs::Int32 TYPE_GAME_QUESTMATCH_LIST = 58;static constexpr pls::cs::Int32 TYPE_GAME_QUESTMATCH_LIST2 = 59;static constexpr pls::cs::Int32 TYPE_TENANT_STRENGTH = 60;static constexpr pls::cs::Int32 TYPE_TENANT_VAC = 61;static constexpr pls::cs::Int32 TYPE_TENANT_VAC2 = 62;static constexpr pls::cs::Int32 TYPE_TENANT_STRENGTH2 = 63;static constexpr pls::cs::Int32 TYPE_TENANT_LVUP = 64;static constexpr pls::cs::Int32 TYPE_TENANT_INFO = 65;static constexpr pls::cs::Int32 TYPE_TENANT_DESTRUCT = 66;static constexpr pls::cs::Int32 TYPE_TEAM_INFO = 67;static constexpr pls::cs::Int32 TYPE_TICKET_PRICE = 68;static constexpr pls::cs::Int32 TYPE_FADE_OUT = 69;static constexpr pls::cs::Int32 TYPE_FADE_IN = 70;static constexpr pls::cs::Int32 TYPE_NEWGAME = 71;static constexpr pls::cs::Int32 TYPE_HUMANR_PLAYER = 72;static constexpr pls::cs::Int32 TYPE_TRAINING_INIT = 73;static constexpr pls::cs::Int32 TYPE_INCOME = 74;static constexpr pls::cs::Int32 TYPE_FADE_OUT2 = 75;static constexpr pls::cs::Int32 TYPE_FADE_IN2 = 76;static constexpr pls::cs::Int32 TYPE_FANBONUS_HISTORY = 77;static constexpr pls::cs::Int32 TYPE_GAME_BUS = 78;static constexpr pls::cs::Int32 TYPE_GAME_TOMATCH = 79;static constexpr pls::cs::Int32 TYPE_GAME_CHANGESTATE = 80;static constexpr pls::cs::Int32 MENU_GAME = 0;static constexpr pls::cs::Int32 MENU_TRAINING = 1;static constexpr pls::cs::Int32 MENU_MANAGE = 2;static constexpr pls::cs::Int32 MENU_TEAM = 3;static constexpr pls::cs::Int32 MENU_INFO = 4;static constexpr pls::cs::Int32 MENU_SYSTEM = 5;static constexpr pls::cs::Int32 MENU_LEAGUE = 6;static constexpr pls::cs::Int32 MENU_EXHIBITION_MATCH = 7;static constexpr pls::cs::Int32 MENU_QUEST_MATCH = 8;static constexpr pls::cs::Int32 MENU_ABSTAIN = 9;static constexpr pls::cs::Int32 MENU_NEXTMATCH = 10;static constexpr pls::cs::Int32 MENU_MEMBER = 11;static constexpr pls::cs::Int32 MENU_TRADE = 12;static constexpr pls::cs::Int32 MENU_SVISOR = 13;static constexpr pls::cs::Int32 MENU_FAN_ACT = 14;static constexpr pls::cs::Int32 MENU_TENANT = 15;static constexpr pls::cs::Int32 MENU_SPONSOR = 16;static constexpr pls::cs::Int32 MENU_TEAMINFO = 17;static constexpr pls::cs::Int32 MENU_FANBONUS_HISTORY = 18;static constexpr pls::cs::Int32 MENU_INCOME = 19;static constexpr pls::cs::Int32 MENU_SAVE = 20;static constexpr pls::cs::Int32 MENU_CONFIG = 21;static constexpr pls::cs::Int32 MENU_TUTORIAL = 22;static constexpr pls::cs::Int32 MENU_RANKING = 23;static constexpr pls::cs::Int32 MENU_EXIT = 24;static constexpr pls::cs::Int32 MENU_SOCCEREND = 25;static constexpr pls::cs::Int32 MENU_CONTINUE = 26;static constexpr pls::cs::Int32 MENU_NEWGAME = 27;static constexpr pls::cs::Int32 MENU_DELETE = 28;static constexpr pls::cs::Int32 MENU_TITLE = 29;static constexpr pls::cs::Int32 EVENT_HAPPY = 0;static constexpr pls::cs::Int32 EVENT_UNHAPPY = 1;static constexpr pls::cs::Int32 EVENT_SPECIAL = 2;static constexpr pls::cs::Int32 EVENT_END = 3;static constexpr pls::cs::Int32 NEWS_LINES = 6;static constexpr pls::cs::Int32 TALK_CHARATYPE_CHARA = 0;static constexpr pls::cs::Int32 TALK_CHARATYPE_PLAYER = 1;static constexpr pls::cs::Int32 TALK_CHARATYPE_SPONSOR = 2;static constexpr pls::cs::Int32 TALK_CHARATYPE_SVISOR = 3;static constexpr pls::cs::Int32 TALK_CHARATYPE_SPCHARA = 4;static constexpr pls::cs::Int32 DEF_WSIZE_W1 = 228;static constexpr pls::cs::Int32 DEF_WSIZE_H1 = 204;static constexpr pls::cs::Int32 DEF_WSIZE_W2 = 228;static constexpr pls::cs::Int32 DEF_WSIZE_H2 = 176;static constexpr pls::cs::Int32 DEF_WSIZE_W3 = 228;static constexpr pls::cs::Int32 DEF_WSIZE_H3 = 176;static constexpr pls::cs::Int32 DEF_WSIZE_W4 = 231;static constexpr pls::cs::Int32 DEF_WSIZE_H4 = 185;static constexpr pls::cs::Int32 DEF_WSIZE_W5 = 188;static constexpr pls::cs::Int32 DEF_WSIZE_H5 = 110;static constexpr pls::cs::Int32 DEF_WSIZE_W6 = 223;static constexpr pls::cs::Int32 DEF_WSIZE_H6 = 199;static constexpr pls::cs::Int32 DEF_WSIZE_W7 = 210;static constexpr pls::cs::Int32 DEF_WSIZE_H7 = 110;static constexpr pls::cs::Int32 EVENTMSG_ANIME_TIME = 60;static constexpr pls::cs::Int32 FA_ANIME_JTIME = 12;static constexpr pls::cs::Int32 TARADE_ANIME_TIME = 50;static constexpr pls::cs::Int32 TRA_END = 25;static constexpr pls::cs::Int32 SP_NEGORESULT_ANIME = 10;static constexpr pls::cs::Int32 WNDFLAG_LEFT_ARW = 1;static constexpr pls::cs::Int32 WNDFLAG_RIGHT_ARW = 2;static constexpr pls::cs::Int32 WNDFLAG_BOX = 4;static constexpr pls::cs::Int32 WNDRET_TOP = 0;static constexpr pls::cs::Int32 WNDRET_RIGHT = 1;static constexpr pls::cs::Int32 WNDRET_BOTTOM = 2;static constexpr pls::cs::Int32 WNDRET_LEFT = 3;static constexpr pls::cs::Int32 WNDRET_BOX_TOP = 4;static constexpr pls::cs::Int32 WNDRET_BOX_RIGHT = 5;static constexpr pls::cs::Int32 WNDRET_BOX_BOTTOM = 6;static constexpr pls::cs::Int32 WNDRET_BOX_LEFT = 7;static constexpr pls::cs::Int32 WNDRET_BOX_END = 8;static constexpr pls::cs::Int32 TITLE_HEIGHT = 17;static constexpr pls::cs::Int32 CP2_MENU = 0;static constexpr pls::cs::Int32 CP2_KIT = 1;static constexpr pls::cs::Int32 CP2_HALL = 2;static constexpr pls::cs::Int32 CP2_SELE = 3;static constexpr pls::cs::Int32 CP2_STBODY = 5;static constexpr pls::cs::Int32 MEMBERINFO_PAGE_POS = 0;static constexpr pls::cs::Int32 MEMBERINFO_PAGE_PHY = 999;static constexpr pls::cs::Int32 MEMBERINFO_PAGE_CATE = 1;static constexpr pls::cs::Int32 MEMBERINFO_PAGE_SCORE = 2;static constexpr pls::cs::Int32 MEMBERINFO_PAGE_END = 3;static constexpr pls::cs::Int32 LEAGUE_FROM_MAIN = 0;static constexpr pls::cs::Int32 LEAGUE_FROM_SOCCER = 1;static constexpr pls::cs::Int32 WVIC_PDATAID = 0;static constexpr pls::cs::Int32 WVIC_WAIT = 1;static constexpr pls::cs::Int32 WVIC_END = 2;static constexpr pls::cs::Int32 FW_CWAIT_MAX = 35;static constexpr pls::cs::Int32 FW_CWAIT_MIN = 5;static constexpr pls::cs::Int32 FW_W = 192;static constexpr pls::cs::Int32 FW_H = 63;static constexpr pls::cs::Int32 FW_LEFT_X = 24;static constexpr pls::cs::Int32 FW_RIGHT_X = 216;static constexpr pls::cs::Int32 FW_TOP_Y = 28;static constexpr pls::cs::Int32 FW_BOTTOM_Y = 91;static constexpr pls::cs::Int32 SID_TA = 0;static constexpr pls::cs::Int32 SID_YO = 1;static constexpr pls::cs::Int32 SID_NA = 2;static constexpr pls::cs::Int32 ANIME_LEFT_X = 73;static constexpr pls::cs::Int32 ANIME_RIGHT_X = 168;static constexpr pls::cs::Int32 ANIME_Y = 146;static constexpr pls::cs::Int32 ANIME_ONEWAY_TIME = 28;static constexpr pls::cs::Int32 ANIME_KICK_TIME = 6;static constexpr pls::cs::Int32 ADD_TSIZE = 30;static constexpr pls::cs::Int32 UPARROW_OY = 13;static constexpr pls::cs::Int32 MOVETOBUS_START = 25;static constexpr pls::cs::Int32 MOVETOBUS_END = 165;static constexpr pls::cs::Int32 WC_SEB = 0;static constexpr pls::cs::Int32 WC_OY = 1;static constexpr pls::cs::Int32 WC_F = 2;static constexpr pls::cs::Int32 WC_END = 3;static constexpr pls::cs::Int32 JAMP_TIME = 14;static constexpr pls::cs::Int32 JAMP_WAIT = 6;static constexpr pls::cs::Int32 MP_TIME = 0;static constexpr pls::cs::Int32 MP_VALUE = 1;static constexpr pls::cs::Int32 MP_VALUEMAX = 2;static constexpr pls::cs::Int32 MP_RANK = 3;static constexpr pls::cs::Int32 MP_RANKMAX = 4;static constexpr pls::cs::Int32 MP_RANKUP = 5;static constexpr pls::cs::Int32 MP_ADD = 6;static constexpr pls::cs::Int32 MP_END_VALUE = 7;static constexpr pls::cs::Int32 MP_END_RANK = 8;static constexpr pls::cs::Int32 MP_DISP_ADD = 9;static constexpr pls::cs::Int32 MP_END = 10;static constexpr pls::cs::Int32 CHARA_SEB_TATI = 0;static constexpr pls::cs::Int32 CHARA_SEB_SAD = 1;static constexpr pls::cs::Int32 CHARA_SEB_APPLAUSE = 2;static constexpr pls::cs::Int32 C_WAIT = 15;static constexpr pls::cs::Int32 CLEARPOINT_MODE_INIT = 0;static constexpr pls::cs::Int32 CLEARPOINT_MODE_NAME = 1;static constexpr pls::cs::Int32 CLEARPOINT_MODE_CPOINT = 2;static constexpr pls::cs::Int32 CLEARPOINT_MODE_SCORE = 3;static constexpr pls::cs::Int32 CLEARPOINT_MODE_HIGHSCORE = 4;static constexpr pls::cs::Int32 CLEARPOINT_MODE_NEXT = 5;static constexpr pls::cs::Int32 CLEARPOINT_MODE_RESULT = 6;static constexpr pls::cs::Int32 CLEARPOINT_MODE_END = 7;
static void ensure_initialized();

static pls::cs::Int32& anime_ballY();

static pls::cs::Int32& anime_cnt();

static pls::cs::Int32& anime_mode();

static pls::cs::Array<pls::cs::Int32>& CLEARPOINT_ANIMETIME();

static pls::cs::Int32& CONFIG_BGM();

static pls::cs::Int32& CONFIG_EN_BGM();

static pls::cs::Int32& CONFIG_EN_CURRENCY();

static pls::cs::Array<pls::cs::String>& CONFIG_EN_NAMES();

static pls::cs::Int32& CONFIG_EN_ORIENTATION();

static pls::cs::Int32& CONFIG_EN_QUALITY();

static pls::cs::Int32& CONFIG_EN_SE();

static pls::cs::Int32& CONFIG_EN_SPEED();

static pls::cs::Array<pls::cs::Int32>& CONFIG_EN_VALUE_MAX();

static pls::cs::Array<pls::cs::Array<pls::cs::String>>& CONFIG_EN_VALUE_NAMES();

static pls::cs::Array<bool>& CONFIG_EN_VALUE_REVERSE();

static pls::cs::Array<pls::cs::Int32>& CONFIG_EN_VALUES();

static pls::cs::Array<pls::cs::String>& CONFIG_NAMES();

static pls::cs::Int32& CONFIG_ORIENTATION();

static pls::cs::Int32& CONFIG_QUALITY();

static pls::cs::Int32& CONFIG_SE();

static pls::cs::Int32& CONFIG_SPEED();

static pls::cs::Array<pls::cs::Int32>& CONFIG_VALUE_MAX();

static pls::cs::Array<pls::cs::Array<pls::cs::String>>& CONFIG_VALUE_NAMES();

static pls::cs::Array<bool>& CONFIG_VALUE_REVERSE();

static pls::cs::Array<pls::cs::Int32>& CONFIG_VALUES();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& DLGSEL_TRECT();

static pls::cs::Array<pls::cs::Int32>& FA_ANIME_TIME2();

static pls::cs::Array<pls::cs::Int32>& FA_ANIME_TIME3();

static pls::cs::Array<pls::cs::Int32>& FA2_ANIME_TIME();

static pls::cs::Int32& FADE_TIME_V();

static pls::cs::Int32& fontSize();

static pls::cs::Array<pls::cs::Int32>& FW_ANIME();

static pls::cs::Array<pls::cs::String>& MENU_STR();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& meterParam();

static pls::cs::Array<pls::cs::String>& PARAM_EXPLAIN1();

static pls::cs::Array<pls::cs::String>& PARAM_EXPLAIN2();

static pls::cs::Array<pls::cs::Int32>& S_ANIME_TIME();

static pls::cs::Array<pls::cs::Int32>& S_ANIME_TIME2();

static pls::cs::Array<pls::cs::Int32>& S_SNIME_ST();

static pls::cs::Int32& SC_MAINMENU_NOTSELECT();

static pls::cs::Int32& SC_MAINMENU_SELECT();

static pls::cs::Int32& SC_WINDOW_BLACK();

static pls::cs::Int32& SC_WINDOW_BLUE();

static pls::cs::Int32& SC_WINDOW_GRAY();

static pls::cs::Int32& SC_WINDOW_RED();

static pls::cs::Int32& SC_WINDOW_SELECT();

static pls::cs::Int32& SC_WINDOW_TITLE();

static pls::cs::Int32& SC_WINDOW_TITLE2();

static pls::cs::Int32& SC_WINDOW_WHITE();

static pls::cs::Array<pls::cs::String>& SCENE_CHANGE_NAME();

static pls::cs::Array<pls::cs::Int32>& SCENE_CHANGE_ONE();

static pls::cs::Array<pls::cs::Int32>& SCENE_CHANGE_TIME();

static pls::cs::Array<pls::cs::Int32>& SCENE_CHANGE_WAIT();

static pls::cs::Array<pls::cs::Int32>& SCENE_IMG_DIV_X();

static pls::cs::Array<pls::cs::Int32>& SCENE_IMG_DIV_Y();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& softLabels_();

static pls::cs::Array<pls::cs::Int32>& SP_ANIME_TIME();

static pls::cs::Array<pls::cs::Int32>& SP_MONEY();

static pls::cs::String& ticketPriceMessage();

static pls::cs::Array<pls::cs::Int32>& TLUP_ANIME_TIME();

static pls::cs::Array<pls::cs::Int32>& TLUP_ANIME_TIME2();

static pls::cs::Array<pls::cs::Int32>& TRA_ANIME_TIME2();

static pls::cs::Array<pls::cs::Int32>& TRA_AT();

static pls::cs::Array<pls::cs::Int32>& TRA_AT2();

static pls::cs::Array<pls::cs::String>& TROPHY_NAME();

static pls::cs::Array<pls::cs::String>& UNIFORM_NAME();

static pls::cs::Array<pls::cs::Int32>& VICTORY_ANIME_TIME();

static pls::cs::Array<pls::cs::Int32>& WIDTH();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& WIDTH_DATA();

static pls::cs::Array<pls::cs::Int32>& WIN_CHA();

static void create_init(pls::cs::Ref<SubForm> self);

static void create_init(pls::cs::Ref<SubForm> self,pls::cs::Int32 type,pls::cs::Int32 x,pls::cs::Int32 y);

static void create_init(pls::cs::Ref<SubForm> self,pls::cs::Int32 type,pls::cs::Int32 value1);

static void create_init(pls::cs::Ref<SubForm> self,pls::cs::Int32 type);

static pls::cs::Ref<SubForm> create();

static pls::cs::Ref<SubForm> create(pls::cs::Int32 type,pls::cs::Int32 x,pls::cs::Int32 y);

static pls::cs::Ref<SubForm> create(pls::cs::Int32 type,pls::cs::Int32 value1);

static pls::cs::Ref<SubForm> create(pls::cs::Int32 type);

void InitDialog(pls::cs::String text,pls::cs::String buttons);

static pls::cs::Ref<SubForm> MakeDialog(pls::cs::String text,pls::cs::String buttons,pls::cs::Int32 defaultSelect);

static pls::cs::Ref<SubForm> MakeDialog(pls::cs::String text,pls::cs::String buttons);

static pls::cs::Ref<SubForm> MakeDialog(pls::cs::String text);

static pls::cs::Ref<SubForm> MakeNoMymenu(pls::cs::String text);

static pls::cs::Ref<SubForm> MakeWait(pls::cs::Int32 wait);

static pls::cs::Ref<SubForm> MakeSystemDialog(pls::cs::String text);

static pls::cs::Ref<SubForm> MakeTalkForm(pls::cs::Int32 characterIndex,pls::cs::String text,pls::cs::String arg);

static pls::cs::Ref<SubForm> MakeTalkForm(pls::cs::Int32 msgId,pls::cs::String arg);

static pls::cs::Ref<SubForm> MakeEvent(pls::cs::String var_event,pls::cs::String arg,pls::cs::Int32 eventMsgId);

static pls::cs::Ref<SubForm> MakeNews(pls::cs::Int32 id,pls::cs::String arg);

bool Init2();

void _draw(pls::cs::Ref<pls::kairo::Graphics> g);

void _draw2(pls::cs::Ref<pls::kairo::Graphics> g);

void _draw3(pls::cs::Ref<pls::kairo::Graphics> g);

void _draw4(pls::cs::Ref<pls::kairo::Graphics> g);

void _draw5(pls::cs::Ref<pls::kairo::Graphics> g);

void _draw6(pls::cs::Ref<pls::kairo::Graphics> g);

bool Update2();

void ScrollControl(pls::cs::Int32 num,pls::cs::Int32 showMax);

void ScrollUpdate(pls::cs::Int32 num,pls::cs::Int32 showMax,pls::cs::Int32 value);

void ScrollUpdate(pls::cs::Int32 num,pls::cs::Int32 showMax);

void AddMenu(pls::cs::Int32 menuId,pls::cs::Int32 state);

void DrawMenu(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 type);

void DrawMenu_btmInfo(pls::cs::Ref<pls::kairo::Graphics> g);

pls::cs::Array<pls::cs::Int32> FrameMenu();

pls::cs::Array<pls::cs::Int32> FrameMenu(pls::cs::Int32 backResult);

void SetEvent(pls::cs::Int32 index);

void DrawInputValue(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 right,pls::cs::Int32 top,pls::cs::Int32 value,bool inputMode,bool active,pls::cs::Int32 color,pls::cs::Int32 fig);

bool IsMenu();

bool IsDrawWindow();

static pls::cs::Int32 GetBoxHeaderY(pls::cs::Int32 boxTop);

static pls::cs::Int32 GetBoxFooterY(pls::cs::Int32 boxBottom);

void DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,bool active,bool cursor);

void DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 anchor,bool active,bool cursor);

void DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 anchor,bool active,pls::cs::Int32 margin,bool cursor);

void DrawMeter(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 value,pls::cs::Int32 max_,pls::cs::Int32 scaleNum,bool rev);

void DrawMeter(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 value,pls::cs::Int32 max_,pls::cs::Int32 scaleNum);

void DrawMeter(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 value,pls::cs::Int32 max_);

static void Draw_moveToBus(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 frame);

static void Draw_battlePic(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 frame);

static void Draw_upParam(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 cnt,pls::cs::Int32 anchor);

static void Draw_upParam(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 cnt);

static void Draw_multiParam(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 cnt,pls::cs::Int32 anchor);

static void Draw_multiParam(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 cnt);

static void Draw_up(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 cnt,pls::cs::Int32 padding);

pls::cs::Array<pls::cs::Int32> DrawWindow2(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::String title,pls::cs::Int32 sideSpace,pls::cs::Int32 topSpace,pls::cs::Int32 bottomSpace,pls::cs::Int32 barArwSpace,pls::cs::Int32 flag);

pls::cs::Array<pls::cs::Int32> DrawWindow(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::String title,pls::cs::Int32 sideSpace,pls::cs::Int32 topSpace,pls::cs::Int32 bottomSpace,pls::cs::Int32 barArwSpace,pls::cs::Int32 flag,pls::cs::Int32 page,pls::cs::Int32 pageMax);

void SetWinCharaJamp(pls::cs::Int32 time,pls::cs::Int32 wait,pls::cs::Int32 JAMP_DIS,pls::cs::Int32 JAMP_TIME);

void SetWinCharaJamp(pls::cs::Int32 time);

void SetWinCharaTraining(pls::cs::Int32 time,pls::cs::Int32 tMode);

void SetMeterParamRank(pls::cs::Int32 line,pls::cs::Int32 TIME,pls::cs::Int32 value,pls::cs::Int32 valueMax,pls::cs::Int32 rank,pls::cs::Int32 rankMax,pls::cs::Int32 add);

void SetMeterParam(pls::cs::Int32 line,pls::cs::Int32 TIME,pls::cs::Int32 value,pls::cs::Int32 valueMax,pls::cs::Int32 add);

void SetMeterParamDispAdd(pls::cs::Int32 line,pls::cs::Int32 faId,pls::cs::Int32 nowValue);

void UpdateMeterParam(pls::cs::Int32 frame,pls::cs::Int32 line);

void FinishMeterParam(pls::cs::Int32 line);

pls::cs::Array<pls::cs::Int32> GetMeterParam(pls::cs::Int32 line);

static void Draw_chara(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 charaImg,pls::cs::Int32 charaSeb,pls::cs::Int32 direct,pls::cs::Int32 cnt,pls::cs::Int32 dx,pls::cs::Int32 dy);

void Draw_categoryIcon(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 iconId,pls::cs::Int32 dx,pls::cs::Int32 dy);

void Draw_tenantBuildIcon(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 iconId,pls::cs::Int32 dx,pls::cs::Int32 dy);

void Draw_trainingIcon(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 iconId,pls::cs::Int32 dx,pls::cs::Int32 dy);

void Draw_fanActBack(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 backId,pls::cs::Int32 dx,pls::cs::Int32 dy);

void SetTicketWindowBtmMsg(pls::cs::String msg);

static void Draw_newMark(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 frame_);

void Update_clearPoint();

void Draw_clearPoint(pls::cs::Ref<pls::kairo::Graphics> g);

static void Draw_backBlackAlpha(pls::cs::Ref<pls::kairo::Graphics> g);

void Draw_udArrow(pls::cs::Ref<pls::kairo::Graphics> g);

void DrawConfig_jp(pls::cs::Ref<pls::kairo::Graphics> g);

void DrawConfig_en(pls::cs::Ref<pls::kairo::Graphics> g);

static void SetFontSize(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 size);

static void ResetFontSize(pls::cs::Ref<pls::kairo::Graphics> g);

static bool En();

static void Draw_btmMsg(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dy,bool flgSelect,bool flgCursor);

static void Draw_btmMsg(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dx,pls::cs::Int32 dy,bool flgSelect,bool flgCursor);

static void Draw_btmMsg(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dx,pls::cs::Int32 dy);

static void Draw_btmMsg(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dy);

static pls::cs::Int32 GetStringLength(pls::cs::String s);

static bool IsSimpleChara(char16_t c);
};
} // namespace form
}
