// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace main {

struct AppData : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("main.AppData", AppData, pls::cs::Object)
pls::cs::Ref<form::BootForm> frmBoot_{};
pls::cs::Ref<form::TitleForm> frmTitle_{};
pls::cs::Ref<form::SoccerForm> frmSoccer_{};
pls::cs::Ref<form::GameForm> frmGame_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resCom2_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resHuman2_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resHumanHead_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resMapChip_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resMapObject_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resMapChipMain_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resEvent_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resSound_{};
pls::cs::Ref<generated::kairo::unity::util::Property> sysSave_{};
pls::cs::Ref<generated::kairo::unity::util::Property> save_{};
pls::cs::Ref<generated::java::util::Vector> popupMessages_{};
pls::cs::Ref<generated::java::util::Vector> popupScriptBuffer_{};
pls::cs::Int32 NOWSTORE_INDEX{};
pls::cs::Array<pls::cs::Int32> newsTypes_{};
pls::cs::Array<pls::cs::String> newsTitles_{};
pls::cs::Array<pls::cs::String> newsTexts_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resChip_{};
pls::cs::Ref<kairo::unity::ui::ResourceManager> resChipSeason_{};
pls::cs::Int32 loadedChipResourceSeason_{};
pls::cs::Ref<generated::java::util::Vector> effect_{};
pls::cs::Array<pls::cs::String> manualTexts_{};
pls::cs::Int32 offSeason_{};
pls::cs::Int32 offYear_{};
pls::cs::Int32 offMonth_{};
pls::cs::Int32 offWeek_{};
pls::cs::Int32 offHour_{};
pls::cs::Int32 offSec_{};
pls::cs::Int64 offMoney_{};
pls::cs::Int32 offWeatherAlpha_{};
pls::cs::Int32 offScore1_{};
pls::cs::Int32 offScore2_{};
pls::cs::Array<pls::cs::Int32> tmpInt4_{};
pls::cs::Array<pls::cs::Ref<data::EventData>> eventData_{};
pls::cs::Array<pls::cs::Int32> eventNum_{};
pls::cs::Ref<generated::java::util::Vector> delayEvents_{};
pls::cs::Array<pls::cs::String> eventMsgs_{};
pls::cs::Array<pls::cs::String> systemMsgs_{};
pls::cs::Array<pls::cs::String> characterSource_{};
pls::cs::String platform_{};
bool alphaRectPossible_{};
pls::cs::Int32 scriptArgCharacter_{};
pls::cs::Int32 gameObjectPoolIndex_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> gameObjectPool_{};
pls::cs::Int32 zsortObjectStart_{};
pls::cs::Int32 zsortObjectLast_{};
pls::cs::Array<std::uint8_t> zsortObjectCount_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> zsortObjects_{};
pls::cs::Array<pls::cs::Int32> screen_pos{};
pls::cs::Array<pls::cs::Int32> camera_pos{};
pls::cs::Ref<game::Camera> camera{};
pls::cs::Ref<game::Map> map_{};
pls::cs::Ref<game::MapMain> mapMain_{};
pls::cs::Array<pls::cs::Ref<data::PlayerData>> pData_{};
pls::cs::Array<pls::cs::Ref<data::TeamData>> tData_{};
pls::cs::Array<pls::cs::Ref<data::SupervisorData>> svisorData_{};
pls::cs::Array<pls::cs::Ref<data::FormationData>> formationData_{};
pls::cs::Array<pls::cs::Ref<data::MapchipMatch>> mapchipMatch_{};
pls::cs::Array<pls::cs::Ref<data::MapchipMain>> mapchipMain_{};
pls::cs::Array<pls::cs::Ref<data::StadiumData>> stadiumData_{};
pls::cs::Array<pls::cs::Ref<data::FanActData>> fanActData_{};
pls::cs::Array<pls::cs::Ref<data::SponsorData>> sponsorData_{};
pls::cs::Array<pls::cs::Ref<data::FanBonusData>> fanBonus_{};
pls::cs::Array<pls::cs::Ref<data::QuestMatchData>> qmData_{};
pls::cs::Array<pls::cs::Ref<data::TenantData>> tenantData_{};
pls::cs::Array<pls::cs::Ref<data::TradeData>> tradeData_{};
pls::cs::Array<pls::cs::Ref<data::TrainingData>> trainingData_{};
pls::cs::Array<pls::cs::Ref<data::LeagueData>> leagueData_{};
pls::cs::Int32 saveLine_{};
pls::cs::Array<pls::cs::Int32> ef_cpos{};
pls::cs::Array<pls::cs::Int32> rotatePoint_tmp{};
pls::cs::Ref<pls::kairo::Image> imgOutline1_{};
pls::cs::Ref<pls::kairo::Graphics> graOutline1_{};
pls::cs::Ref<pls::kairo::Image> imgOutline2_{};
pls::cs::Ref<pls::kairo::Graphics> graOutline2_{};
pls::cs::Array<pls::cs::Int32> drawCommand_tmp{};
pls::cs::Array<pls::cs::Int32> getEvenlyDivisionArea_tmp_{};
pls::cs::Int32 settleX_{};
pls::cs::Int32 settleY_{};
pls::cs::Array<pls::cs::Int32> drawPopupMessage_heights{};
pls::cs::String temp_str{};
pls::cs::Array<pls::cs::Int32> draw_helpMessage_tmp1{};
pls::cs::Ref<generated::java::util::Vector> debugLog_{};
pls::cs::Int32 sendState_{};
static constexpr pls::cs::Int32 APPLI_VERSION = 202;static constexpr pls::cs::Int32 REGIST_WAIT = 30;static constexpr pls::cs::Int32 PID = 55;static constexpr pls::cs::Int32 CGI_REGIST = 0;static constexpr pls::cs::Int32 CGI_RANKING = 1;static constexpr pls::cs::Int32 CGI_REGIST_SCORE = 2;static constexpr pls::cs::Int32 CGI_GET_SCORE = 3;static constexpr pls::cs::Int32 FORMID_BOOT = 0;static constexpr pls::cs::Int32 FORMID_TITLE = 1;static constexpr pls::cs::Int32 FORMID_SOCCER = 2;static constexpr pls::cs::Int32 FORMID_RANK = 3;static constexpr pls::cs::Int32 FORMID_SUB = 4;static constexpr pls::cs::Int32 FORMID_DEBUG = 5;static constexpr pls::cs::Int32 FORMID_TEST = 6;static constexpr pls::cs::Int32 FORMID_RACE = 7;static constexpr pls::cs::Int32 FORMID_PRINT = 8;static constexpr pls::cs::Int32 FORMID_GAME = 9;static constexpr pls::cs::Int32 RS_SYSTEM = 0;static constexpr pls::cs::Int32 RS_RESOURCE = 1;static constexpr pls::cs::Int32 RSSYS_SYSSAVE = 0;static constexpr pls::cs::Int32 RSSYS_SAVE1 = 1;static constexpr pls::cs::Int32 RSSYS_SAVE2 = 2;static constexpr pls::cs::Int32 RSSYS_AUTO1 = 3;static constexpr pls::cs::Int32 RSSYS_AUTO2 = 4;static constexpr pls::cs::Int32 RSRES_TEST = 0;static constexpr pls::cs::Int32 RSRES_COM2 = 1;static constexpr pls::cs::Int32 RSRES_MAP = 2;static constexpr pls::cs::Int32 RSRES_EVENT = 3;static constexpr pls::cs::Int32 RSRES_MAPCHIP = 4;static constexpr pls::cs::Int32 RSRES_MAPOBJECT = 5;static constexpr pls::cs::Int32 RSRES_XLS = 6;static constexpr pls::cs::Int32 RSRES_TITLE = 7;static constexpr pls::cs::Int32 RSRES_MAPCHIPMAIN = 8;static constexpr pls::cs::Int32 RSRES_HUMAN2 = 9;static constexpr pls::cs::Int32 RSRES_HUMAN_HEAD = 10;static constexpr pls::cs::Int32 RSRES_SOUND = 11;static constexpr pls::cs::Int32 RSRES_END = 12;static constexpr pls::cs::Int32 RSSYS_SIZE_SYSSAME = 8192;static constexpr pls::cs::Int32 RSSYS_SIZE_SAVE1 = 46080;static constexpr pls::cs::Int32 RESHUMAN_IMG_PLAYER00 = 0;static constexpr pls::cs::Int32 RESHUMAN_IMG_PLAYER01 = 1;static constexpr pls::cs::Int32 RESHUMAN_SEB_DOWN = 0;static constexpr pls::cs::Int32 RESHUMAN_SEB_GOALGLAD0 = 4;static constexpr pls::cs::Int32 RESHUMAN_SEB_GOALGLAD1 = 8;static constexpr pls::cs::Int32 RESHUMAN_SEB_GOALGLAD2 = 12;static constexpr pls::cs::Int32 RESHUMAN_SEB_GOALSAD = 16;static constexpr pls::cs::Int32 RESHUMAN_SEB_HEAD = 20;static constexpr pls::cs::Int32 RESHUMAN_SEB_KICK = 24;static constexpr pls::cs::Int32 RESHUMAN_SEB_RUN = 28;static constexpr pls::cs::Int32 RESHUMAN_SEB_SLIDING = 32;static constexpr pls::cs::Int32 RESHUMAN_SEB_THROWIN = 36;static constexpr pls::cs::Int32 RESHUMAN_SEB_TRAP1 = 40;static constexpr pls::cs::Int32 RESHUMAN_SEB_TRAP2 = 44;static constexpr pls::cs::Int32 RESHUMAN_SEB_VOLLEY = 48;static constexpr pls::cs::Int32 RESHUMAN_SEB_WALK = 52;static constexpr pls::cs::Int32 RESHUMAN_SEB_SAVING = 56;static constexpr pls::cs::Int32 RESHUMAN_SEB_GK_KICK = 60;static constexpr pls::cs::Int32 RESHUMAN_SEB_GK_GOALGLAD0 = 64;static constexpr pls::cs::Int32 RESHUMAN_SEB_GK_RUN = 68;static constexpr pls::cs::Int32 RESHUMAN_SEB_GK_GOALSAD = 72;static constexpr pls::cs::Int32 RESHUMAN_SEB_GK_DOWN = 76;static constexpr pls::cs::Int32 RESHUMAN_SEB_FRONT = 80;static constexpr pls::cs::Int32 RESHUMAN_SEB_GOALGLAD0_SV = 81;static constexpr pls::cs::Int32 RESHUMANHEAD_SEB_FACE = 0;static constexpr pls::cs::Int32 RESCOM_IMG_PLAYER = 0;static constexpr pls::cs::Int32 RESCOM_IMG_GROUND00 = 100;static constexpr pls::cs::Int32 RESCOM_IMG_GROUND01 = 101;static constexpr pls::cs::Int32 RESCOM_SEB_GROUND00 = 0;static constexpr pls::cs::Int32 RESCOM2_IMG_GRASS00 = 0;static constexpr pls::cs::Int32 RESCOM2_IMG_GRASS01 = 1;static constexpr pls::cs::Int32 RESCOM2_IMG_BALL00 = 2;static constexpr pls::cs::Int32 RESCOM2_IMG_GOAL00_0 = 3;static constexpr pls::cs::Int32 RESCOM2_IMG_GOAL00_1 = 4;static constexpr pls::cs::Int32 RESCOM2_IMG_GOAL00_2 = 5;static constexpr pls::cs::Int32 RESCOM2_IMG_GOAL01_0 = 6;static constexpr pls::cs::Int32 RESCOM2_IMG_GOAL01_1 = 7;static constexpr pls::cs::Int32 RESCOM2_IMG_EF_SHOOT = 9;static constexpr pls::cs::Int32 RESCOM2_IMG_EF_SLIDING = 10;static constexpr pls::cs::Int32 RESCOM2_IMG_L_CONNER00 = 11;static constexpr pls::cs::Int32 RESCOM2_IMG_L_CONNER01 = 12;static constexpr pls::cs::Int32 RESCOM2_IMG_L_CONNER02 = 13;static constexpr pls::cs::Int32 RESCOM2_IMG_L_CONNER03 = 14;static constexpr pls::cs::Int32 RESCOM2_IMG_L_CENTER00 = 15;static constexpr pls::cs::Int32 RESCOM2_IMG_L_CENTER01 = 16;static constexpr pls::cs::Int32 RESCOM2_IMG_L_CENTER02 = 17;static constexpr pls::cs::Int32 RESCOM2_IMG_L_CENTER03 = 18;static constexpr pls::cs::Int32 RESCOM2_IMG_L_BASE00 = 19;static constexpr pls::cs::Int32 RESCOM2_IMG_L_BASE01 = 20;static constexpr pls::cs::Int32 RESCOM2_IMG_L_GOAL1_00 = 21;static constexpr pls::cs::Int32 RESCOM2_IMG_L_GOAL1_01 = 22;static constexpr pls::cs::Int32 RESCOM2_IMG_L_GOAL2_00 = 23;static constexpr pls::cs::Int32 RESCOM2_IMG_L_GOAL2_01 = 24;static constexpr pls::cs::Int32 RESCOM2_IMG_MENU = 25;static constexpr pls::cs::Int32 RESCOM2_IMG_TOP_BAR = 26;static constexpr pls::cs::Int32 RESCOM2_IMG_ARROW00 = 27;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_BACK = 28;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_BAR = 29;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_CONNER = 30;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_POINT = 31;static constexpr pls::cs::Int32 RESCOM2_IMG_TOP_BAR_SOCCER = 32;static constexpr pls::cs::Int32 RESCOM2_IMG_UNIFORM = 33;static constexpr pls::cs::Int32 RESCOM2_IMG_TIME_PEOPLE = 34;static constexpr pls::cs::Int32 RESCOM2_IMG_TIME_GRASS = 35;static constexpr pls::cs::Int32 RESCOM2_IMG_TIME_JUDGE = 36;static constexpr pls::cs::Int32 RESCOM2_IMG_TIME_MESSAGE = 37;static constexpr pls::cs::Int32 RESCOM2_IMG_MATCHSTR = 38;static constexpr pls::cs::Int32 RESCOM2_IMG_CORN = 39;static constexpr pls::cs::Int32 RESCOM2_IMG_BUS = 42;static constexpr pls::cs::Int32 RESCOM2_IMG_MINIGOAL00_0 = 43;static constexpr pls::cs::Int32 RESCOM2_IMG_MINIGOAL00_1 = 44;static constexpr pls::cs::Int32 RESCOM2_IMG_MINIGOAL00_2 = 45;static constexpr pls::cs::Int32 RESCOM2_IMG_MINIGOAL01_0 = 46;static constexpr pls::cs::Int32 RESCOM2_IMG_MINIGOAL01_1 = 47;static constexpr pls::cs::Int32 RESCOM2_IMG_MINIGOAL01_2 = 48;static constexpr pls::cs::Int32 RESCOM2_IMG_EDIT_GRASS = 49;static constexpr pls::cs::Int32 RESCOM2_IMG_BUS01 = 50;static constexpr pls::cs::Int32 RESCOM2_IMG_ICON_POSITION = 51;static constexpr pls::cs::Int32 RESCOM2_IMG_GAME_STRHALF = 52;static constexpr pls::cs::Int32 RESCOM2_IMG_GAME_AURAEXPLAIN = 53;static constexpr pls::cs::Int32 RESCOM2_IMG_GAME_AURABAR = 54;static constexpr pls::cs::Int32 RESCOM2_IMG_GAME_AURAMAX = 55;static constexpr pls::cs::Int32 RESCOM2_IMG_GAME_PLAYERBACK = 56;static constexpr pls::cs::Int32 RESCOM2_IMG_MATCH_RANK = 57;static constexpr pls::cs::Int32 RESCOM2_IMG_MATCH_VS = 58;static constexpr pls::cs::Int32 RESCOM2_IMG_MATCH_FLAG = 59;static constexpr pls::cs::Int32 RESCOM2_IMG_MATCH_HOMEAWAY = 60;static constexpr pls::cs::Int32 RESCOM2_IMG_EDIT_BUTTON = 61;static constexpr pls::cs::Int32 RESCOM2_IMG_CURSOR_ARROW = 62;static constexpr pls::cs::Int32 RESCOM2_IMG_MOJI00 = 63;static constexpr pls::cs::Int32 RESCOM2_IMG_MOJI01 = 64;static constexpr pls::cs::Int32 RESCOM2_IMG_MOJI02 = 65;static constexpr pls::cs::Int32 RESCOM2_IMG_MOJI03 = 66;static constexpr pls::cs::Int32 RESCOM2_IMG_MOJI04 = 67;static constexpr pls::cs::Int32 RESCOM2_IMG_MOJI05 = 68;static constexpr pls::cs::Int32 RESCOM2_IMG_MOJI06 = 69;static constexpr pls::cs::Int32 RESCOM2_IMG_FINGER_R = 70;static constexpr pls::cs::Int32 RESCOM2_IMG_FINGER_D = 71;static constexpr pls::cs::Int32 RESCOM2_IMG_ARROW01 = 72;static constexpr pls::cs::Int32 RESCOM2_IMG_ARROW02 = 74;static constexpr pls::cs::Int32 RESCOM2_IMG_RANK_GRADE = 75;static constexpr pls::cs::Int32 RESCOM2_IMG_AURA00 = 76;static constexpr pls::cs::Int32 RESCOM2_IMG_HISHO_TALK = 77;static constexpr pls::cs::Int32 RESCOM2_IMG_CURSOR = 80;static constexpr pls::cs::Int32 RESCOM2_IMG_VICTORY_RIBBON = 81;static constexpr pls::cs::Int32 RESCOM2_IMG_VICTORY_FIREWORKS = 82;static constexpr pls::cs::Int32 RESCOM2_IMG_VICTORY_LAUREL = 83;static constexpr pls::cs::Int32 RESCOM2_IMG_VICTORY_STADIUM = 84;static constexpr pls::cs::Int32 RESCOM2_IMG_VICTORY_NAMEBACK = 85;static constexpr pls::cs::Int32 RESCOM2_IMG_VICTORY_BODY = 86;static constexpr pls::cs::Int32 RESCOM2_IMG_VICTORY_VICTORY = 87;static constexpr pls::cs::Int32 RESCOM2_IMG_CONFETTI = 88;static constexpr pls::cs::Int32 RESCOM2_IMG_FADEOUT = 89;static constexpr pls::cs::Int32 RESCOM2_IMG_EF_CHARGE = 90;static constexpr pls::cs::Int32 RESCOM2_IMG_GAME_HOWOFFENCE = 91;static constexpr pls::cs::Int32 RESCOM2_IMG_GAME_MINICOAT = 92;static constexpr pls::cs::Int32 RESCOM2_IMG_GAME_MINICOATOBJ = 93;static constexpr pls::cs::Int32 RESCOM2_IMG_ICON_RESEARCH = 94;static constexpr pls::cs::Int32 RESCOM2_IMG_ICON_SEASON = 95;static constexpr pls::cs::Int32 RESCOM2_IMG_EF_LVUP = 96;static constexpr pls::cs::Int32 RESCOM2_IMG_ICON_TROPHY = 97;static constexpr pls::cs::Int32 RESCOM2_IMG_ICON_TENANTBUILD = 98;static constexpr pls::cs::Int32 RESCOM2_IMG_NUMBER01 = 100;static constexpr pls::cs::Int32 RESCOM2_IMG_NUMBER02 = 101;static constexpr pls::cs::Int32 RESCOM2_IMG_NUMBER03 = 102;static constexpr pls::cs::Int32 RESCOM2_IMG_NUMBER05 = 103;static constexpr pls::cs::Int32 RESCOM2_IMG_NUMBER06 = 104;static constexpr pls::cs::Int32 RESCOM2_IMG_NUMBER08 = 105;static constexpr pls::cs::Int32 RESCOM2_IMG_NUMBER09 = 106;static constexpr pls::cs::Int32 RESCOM2_IMG_NUMBER10 = 107;static constexpr pls::cs::Int32 RESCOM2_IMG_NUMBER11 = 108;static constexpr pls::cs::Int32 RESCOM2_IMG_NUMBER12 = 109;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_ATO = 115;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_CATEGORYICON = 116;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_EXP = 117;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_EXPBAR = 118;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_BAX = 119;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_METER = 120;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_PHYICON = 121;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_PHYSTR = 122;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_POSIBACK = 123;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_STAMEM = 124;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_STATUSBACK = 125;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_LV = 126;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_METER2 = 127;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_TYPEBACK = 128;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_ASSISTBAR = 129;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_FUKIDASHI = 130;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_PARSENT = 131;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_METER01 = 132;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_NEWSLOGO = 133;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_MENUBTMBACK = 134;static constexpr pls::cs::Int32 RESCOM2_IMG_MAIN_NEXTMATCH = 135;static constexpr pls::cs::Int32 RESCOM2_IMG_MAIN_PLAYERBACK = 136;static constexpr pls::cs::Int32 RESCOM2_IMG_MAIN_PLAYERCURSOR00 = 137;static constexpr pls::cs::Int32 RESCOM2_IMG_MAIN_PLAYERCURSOR01 = 138;static constexpr pls::cs::Int32 RESCOM2_IMG_MAIN_PLAYERCURSOR02 = 139;static constexpr pls::cs::Int32 RESCOM2_IMG_MAIN_TENANTCURSOR = 140;static constexpr pls::cs::Int32 RESCOM2_IMG_MAIN_BTMBAR = 141;static constexpr pls::cs::Int32 RESCOM2_IMG_MAIN_TENANTCURSOR2 = 142;static constexpr pls::cs::Int32 RESCOM2_IMG_MAIN_RESEARCHPOINT = 143;static constexpr pls::cs::Int32 RESCOM2_IMG_MAIN_NEXTMATCHWEEK = 144;static constexpr pls::cs::Int32 RESCOM2_IMG_BUILDING00 = 155;static constexpr pls::cs::Int32 RESCOM2_IMG_BUILDING01 = 156;static constexpr pls::cs::Int32 RESCOM2_IMG_BUILDING02 = 157;static constexpr pls::cs::Int32 RESCOM2_IMG_DESTRUCT = 158;static constexpr pls::cs::Int32 RESCOM2_IMG_MATCHPRI_ASSISTBAR = 159;static constexpr pls::cs::Int32 RESCOM2_IMG_MATCHPRI_ASSISTUP = 160;static constexpr pls::cs::Int32 RESCOM2_IMG_MATCHPRI_ENEMY = 161;static constexpr pls::cs::Int32 RESCOM2_IMG_BACK_TRAINING = 162;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_BONUS_GET = 163;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_BONUS_NOTGET = 164;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_BONUS_FUKIDASHI = 165;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_FAN_CHARABACK = 166;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_TRA_PBACK = 167;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_MENUICON = 168;static constexpr pls::cs::Int32 RESCOM2_IMG_SPONSOR_CHARA = 169;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_TENANTGETPT = 170;static constexpr pls::cs::Int32 RESCOM2_IMG_CHARA_PRESIDENT = 171;static constexpr pls::cs::Int32 RESCOM2_IMG_CHARA_HISHOKO = 172;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_TRAININGICON = 173;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_FANACTBACK = 174;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_SPONSORRESULT = 175;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_SVISOR_PT = 176;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_PLAYERPOPULARUP = 177;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_SPONSOR_CHECK = 178;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_FORMATION_GET = 179;static constexpr pls::cs::Int32 RESCOM2_IMG_EDIT_MEMCHANGEHELP = 180;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_NEW = 181;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_MEMCHANGEHELP = 182;static constexpr pls::cs::Int32 RESCOM2_IMG_ICON_NATIONAL_FLAG = 183;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_BATTLEBACK = 184;static constexpr pls::cs::Int32 RESCOM2_IMG_STADIUM00 = 185;static constexpr pls::cs::Int32 RESCOM2_IMG_STADIUM01 = 186;static constexpr pls::cs::Int32 RESCOM2_IMG_STADIUM02 = 187;static constexpr pls::cs::Int32 RESCOM2_IMG_WND_FINISH = 188;static constexpr pls::cs::Int32 RESCOM2_IMG_OFFENCE_DIRECT = 189;static constexpr pls::cs::Int32 RESCOM2_IMG_TROPHY = 190;static constexpr pls::cs::Int32 RESCOM2_IMG_VICTORY01 = 191;static constexpr pls::cs::Int32 RESCOM2_IMG_VICTORY02 = 192;static constexpr pls::cs::Int32 RESCOM2_IMG_SAVELOAD = 193;static constexpr pls::cs::Int32 RESCOM2_SEB_BALL00 = 0;static constexpr pls::cs::Int32 RESCOM2_SEB_GOAL00_0 = 1;static constexpr pls::cs::Int32 RESCOM2_SEB_GOAL00_1 = 2;static constexpr pls::cs::Int32 RESCOM2_SEB_GOAL00_2 = 3;static constexpr pls::cs::Int32 RESCOM2_SEB_GOAL01_0 = 4;static constexpr pls::cs::Int32 RESCOM2_SEB_GOAL01_1 = 5;static constexpr pls::cs::Int32 RESCOM2_SEB_EF_SHOOT = 6;static constexpr pls::cs::Int32 RESCOM2_SEB_EF_SLIDING = 7;static constexpr pls::cs::Int32 RESCOM2_SEB_L_CONNER00 = 8;static constexpr pls::cs::Int32 RESCOM2_SEB_L_CONNER01 = 9;static constexpr pls::cs::Int32 RESCOM2_SEB_L_CONNER02 = 10;static constexpr pls::cs::Int32 RESCOM2_SEB_L_CONNER03 = 11;static constexpr pls::cs::Int32 RESCOM2_SEB_L_CENTER00 = 12;static constexpr pls::cs::Int32 RESCOM2_SEB_L_CENTER01 = 13;static constexpr pls::cs::Int32 RESCOM2_SEB_L_CENTER02 = 14;static constexpr pls::cs::Int32 RESCOM2_SEB_L_CENTER03 = 15;static constexpr pls::cs::Int32 RESCOM2_SEB_L_BASE00 = 16;static constexpr pls::cs::Int32 RESCOM2_SEB_L_BASE01 = 17;static constexpr pls::cs::Int32 RESCOM2_SEB_L_GOAL1_00 = 18;static constexpr pls::cs::Int32 RESCOM2_SEB_L_GOAL1_01 = 19;static constexpr pls::cs::Int32 RESCOM2_SEB_L_GOAL2_00 = 20;static constexpr pls::cs::Int32 RESCOM2_SEB_L_GOAL2_01 = 21;static constexpr pls::cs::Int32 RESCOM2_SEB_MENU = 22;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER01 = 23;static constexpr pls::cs::Int32 RESCOM2_SEB_ARROW00 = 24;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_BACK = 25;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_BAR = 26;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_CONNER = 27;static constexpr pls::cs::Int32 RESCOM2_SEB_UNIFORM = 28;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER02 = 29;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER03 = 30;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER04 = 31;static constexpr pls::cs::Int32 RESCOM2_SEB_TIME_PEOPLE = 32;static constexpr pls::cs::Int32 RESCOM2_SEB_TIME_GRASS = 33;static constexpr pls::cs::Int32 RESCOM2_SEB_TIME_JUDGE = 34;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER05 = 35;static constexpr pls::cs::Int32 RESCOM2_SEB_MATCHSTR = 36;static constexpr pls::cs::Int32 RESCOM2_SEB_CORN = 37;static constexpr pls::cs::Int32 RESCOM2_SEB_BUS = 38;static constexpr pls::cs::Int32 RESCOM2_SEB_MINIGOAL00_0 = 39;static constexpr pls::cs::Int32 RESCOM2_SEB_MINIGOAL00_1 = 40;static constexpr pls::cs::Int32 RESCOM2_SEB_MINIGOAL00_2 = 41;static constexpr pls::cs::Int32 RESCOM2_SEB_MINIGOAL01_0 = 42;static constexpr pls::cs::Int32 RESCOM2_SEB_MINIGOAL01_1 = 43;static constexpr pls::cs::Int32 RESCOM2_SEB_MINIGOAL01_2 = 44;static constexpr pls::cs::Int32 RESCOM2_SEB_EDIT_GRASS = 45;static constexpr pls::cs::Int32 RESCOM2_SEB_BUS01 = 46;static constexpr pls::cs::Int32 RESCOM2_SEB_ICON_POSITION = 47;static constexpr pls::cs::Int32 RESCOM2_SEB_GAME_STRHALF = 48;static constexpr pls::cs::Int32 RESCOM2_SEB_GAME_AURAEXPLAIN = 49;static constexpr pls::cs::Int32 RESCOM2_SEB_MATCH_FLAG = 50;static constexpr pls::cs::Int32 RESCOM2_SEB_MATCH_HOMEAWAY = 51;static constexpr pls::cs::Int32 RESCOM2_SEB_CURSOR_ARROW = 52;static constexpr pls::cs::Int32 RESCOM2_SEB_MOJI00 = 53;static constexpr pls::cs::Int32 RESCOM2_SEB_MOJI01 = 54;static constexpr pls::cs::Int32 RESCOM2_SEB_MOJI02 = 55;static constexpr pls::cs::Int32 RESCOM2_SEB_MOJI03 = 56;static constexpr pls::cs::Int32 RESCOM2_SEB_MOJI04 = 57;static constexpr pls::cs::Int32 RESCOM2_SEB_MOJI05 = 58;static constexpr pls::cs::Int32 RESCOM2_SEB_MOJI06 = 59;static constexpr pls::cs::Int32 RESCOM2_SEB_FINGER_R = 60;static constexpr pls::cs::Int32 RESCOM2_SEB_FINGER_L = 61;static constexpr pls::cs::Int32 RESCOM2_SEB_FINGER_D = 62;static constexpr pls::cs::Int32 RESCOM2_SEB_ARROW01 = 63;static constexpr pls::cs::Int32 RESCOM2_SEB_ARROW02 = 64;static constexpr pls::cs::Int32 RESCOM2_SEB_RANK_GRADE = 65;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER06 = 66;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER07 = 67;static constexpr pls::cs::Int32 RESCOM2_SEB_AURA00 = 68;static constexpr pls::cs::Int32 RESCOM2_SEB_VICTORY_FIREWORKS = 69;static constexpr pls::cs::Int32 RESCOM2_SEB_VICTORY_BODY = 70;static constexpr pls::cs::Int32 RESCOM2_SEB_VICTORY_LAUREL = 71;static constexpr pls::cs::Int32 RESCOM2_SEB_CONFETTI = 72;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_CATEGORYICON = 73;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_PHYICON = 74;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_PHYSTR = 75;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_EXP = 76;static constexpr pls::cs::Int32 RESCOM2_SEB_MAIN_TENANTCURSOR = 77;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER08 = 78;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER09 = 79;static constexpr pls::cs::Int32 RESCOM2_SEB_MAIN_TENANTCURSOR2 = 80;static constexpr pls::cs::Int32 RESCOM2_SEB_EF_CHARGE = 81;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER10 = 82;static constexpr pls::cs::Int32 RESCOM2_SEB_ICON_RESEARCH = 83;static constexpr pls::cs::Int32 RESCOM2_SEB_ICON_SEASON = 84;static constexpr pls::cs::Int32 RESCOM2_SEB_BUILDING00 = 85;static constexpr pls::cs::Int32 RESCOM2_SEB_BUILDING01 = 86;static constexpr pls::cs::Int32 RESCOM2_SEB_BUILDING02 = 87;static constexpr pls::cs::Int32 RESCOM2_SEB_DESTRUCT = 88;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER11 = 89;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_PARSENT = 90;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER12 = 91;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_TRA_PBACK = 92;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_MENUICON = 93;static constexpr pls::cs::Int32 RESCOM2_SEB_EF_LVUP = 94;static constexpr pls::cs::Int32 RESCOM2_SEB_ICON_TROPHY = 95;static constexpr pls::cs::Int32 RESCOM2_SEB_CHARA = 96;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_SPONSORRESULT = 97;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_NEW = 98;static constexpr pls::cs::Int32 RESCOM2_SEB_WND_MEMCHANGEHELP = 99;static constexpr pls::cs::Int32 RESCOM2_SEB_ICON_NATIONAL_FLAG = 100;static constexpr pls::cs::Int32 RESCOM2_SEB_STADIUM00 = 101;static constexpr pls::cs::Int32 RESCOM2_SEB_STADIUM01 = 102;static constexpr pls::cs::Int32 RESCOM2_SEB_STADIUM02 = 103;static constexpr pls::cs::Int32 RESCOM2_SEB_NUMBER13 = 104;static constexpr pls::cs::Int32 RESCOM2_SEB_OFFENCE_DIRECT = 105;static constexpr pls::cs::Int32 RESCOM2_SEB_TROPHY = 106;static constexpr pls::cs::Int32 RESEVENT_IMG_BACK00 = 0;static constexpr pls::cs::Int32 RESEVENT_IMG_BACK01 = 1;static constexpr pls::cs::Int32 RESEVENT_IMG_BACK02 = 2;static constexpr pls::cs::Int32 RESEVENT_IMG_CHARA00 = 3;static constexpr pls::cs::Int32 RESEVENT_IMG_CHARA01 = 4;static constexpr pls::cs::Int32 RESEVENT_IMG_SURPORTER00 = 5;static constexpr pls::cs::Int32 RESEVENT_IMG_SURPORTER01 = 6;static constexpr pls::cs::Int32 RESEVENT_IMG_SPONSORBACK = 7;static constexpr pls::cs::Int32 RESEVENT_IMG_BACKMINI = 8;static constexpr pls::cs::Int32 RESEVENT_IMG_TRADEBACK = 9;static constexpr pls::cs::Int32 RESEVENT_IMG_FANBACK = 10;static constexpr pls::cs::Int32 RESEVENT_IMG_TRAININGBACK = 11;static constexpr pls::cs::Int32 RESEVENT_SEB_CHARA00 = 0;static constexpr pls::cs::Int32 RESEVENT_SEB_CHARA01 = 1;static constexpr pls::cs::Int32 RESEVENT_SEB_SURPORTER00 = 2;static constexpr pls::cs::Int32 RESEVENT_SEB_SURPORTER01 = 3;static constexpr pls::cs::Int32 RESSOUND_SND_BGM_MAIN1 = 0;static constexpr pls::cs::Int32 RESSOUND_SND_BGM_FORMATION = 1;static constexpr pls::cs::Int32 RESSOUND_SND_BGM_GAMEMAINA = 2;static constexpr pls::cs::Int32 RESSOUND_SND_BGM_GAMEMAINB = 3;static constexpr pls::cs::Int32 RESSOUND_SND_BGM_TITLE = 4;static constexpr pls::cs::Int32 RESSOUND_SND_06DECIDE = 5;static constexpr pls::cs::Int32 RESSOUND_SND_SE_CROSSBAR = 6;static constexpr pls::cs::Int32 RESSOUND_SND_SE_KANSEIA = 7;static constexpr pls::cs::Int32 RESSOUND_SND_SE_KICKA1 = 8;static constexpr pls::cs::Int32 RESSOUND_SND_SE_KICKA2 = 9;static constexpr pls::cs::Int32 RESSOUND_SND_SE_KICKA3 = 10;static constexpr pls::cs::Int32 RESSOUND_SND_SE_SLIDING = 11;static constexpr pls::cs::Int32 RESSOUND_SND_SE_WHISTLEA = 12;static constexpr pls::cs::Int32 RESSOUND_SND_SE_WHISTLEB = 13;static constexpr pls::cs::Int32 RESSOUND_SND_SE_WHISTLEC = 14;static constexpr pls::cs::Int32 RESSOUND_SND_SE_SHOOT = 15;static constexpr pls::cs::Int32 RESSOUND_SND_SE_SHOOT2 = 16;static constexpr pls::cs::Int32 RESSOUND_SND_SE_YOROKOBI = 17;static constexpr pls::cs::Int32 RESSOUND_SND_SE_GOAL = 18;static constexpr pls::cs::Int32 RESSOUND_SND_SE_GOAL2 = 19;static constexpr pls::cs::Int32 RESSOUND_SND_SE_FANFALE = 20;static constexpr pls::cs::Int32 RESSOUND_SND_SE_KANASHIMI = 21;static constexpr pls::cs::Int32 RESSOUND_SND_SE_KIRAN1 = 22;static constexpr pls::cs::Int32 RESSOUND_SND_SE_MISS = 23;static constexpr pls::cs::Int32 RESSOUND_SND_SE_BU = 24;static constexpr pls::cs::Int32 RESSOUND_SND_SE_LEVELUP = 25;static constexpr pls::cs::Int32 RESSOUND_SND_SE_01 = 26;static constexpr pls::cs::Int32 SOFT_NONE = 0;static constexpr pls::cs::Int32 SOFT_END = 1;static constexpr pls::cs::Int32 SOFT_MODORU = 2;static constexpr pls::cs::Int32 SOFT_SAVE = 3;static constexpr pls::cs::Int32 SOFT_MENU = 4;static constexpr pls::cs::Int32 SOFT_SITE = 5;static constexpr pls::cs::Int32 SOFT_CHANGE = 6;static constexpr pls::cs::Int32 SOFT_REMOVE = 7;static constexpr pls::cs::Int32 SOFT_EXPLAIN = 8;static constexpr pls::cs::Int32 SOFT_INFO = 9;static constexpr pls::cs::Int32 SOFT_DESTRUCT = 10;static constexpr pls::cs::Int32 SOFT_BENCH = 11;static constexpr pls::cs::Int32 SOFT_EDIT = 12;static constexpr pls::cs::Int32 SOFT_DECIDE = 13;static constexpr pls::cs::Int32 SYSSAVEP_END = 0;static constexpr pls::cs::Int32 SYSSAVEI_VER = 0;static constexpr pls::cs::Int32 SYSSAVEI_FLAG = 1;static constexpr pls::cs::Int32 SYSSAVEI_DLCNT = 2;static constexpr pls::cs::Int32 SYSSAVEI_BGM_LEVEL = 3;static constexpr pls::cs::Int32 SYSSAVEI_SE_LEVEL = 4;static constexpr pls::cs::Int32 SYSSAVEI_REGIST_WAIT = 5;static constexpr pls::cs::Int32 SYSSAVEI_SAVE1_DATE = 6;static constexpr pls::cs::Int32 SYSSAVEI_SAVE2_DATE = 7;static constexpr pls::cs::Int32 SYSSAVEI_CURRENT_SAVE = 8;static constexpr pls::cs::Int32 SYSSAVEI_OPEN_HIGHSPEED = 9;static constexpr pls::cs::Int32 SYSSAVEI_TROPHY = 10;static constexpr pls::cs::Int32 SYSSAVEI_AUTO1_DATE = 11;static constexpr pls::cs::Int32 SYSSAVEI_AUTO2_DATE = 12;static constexpr pls::cs::Int32 SYSSAVEI_SCREEN_ORIENTATION = 13;static constexpr pls::cs::Int32 SYSSAVEI_CURRENCY = 14;static constexpr pls::cs::Int32 SYSSAVEI_PADMODE = 15;static constexpr pls::cs::Int32 SYSSAVEI_RESTORATION_DATA = 16;static constexpr pls::cs::Int32 SYSSAVEI_END = 17;static constexpr pls::cs::Int32 SYSSAVEL_HIGHSCORE = 0;static constexpr pls::cs::Int32 SYSSAVEL_NET_HIGHSCORE = 1;static constexpr pls::cs::Int32 SYSSAVEL_MONEY_HIGHSCORE = 2;static constexpr pls::cs::Int32 SYSSAVEL_MONEY_NET_HIGHSCORE = 3;static constexpr pls::cs::Int32 SYSSAVEL_END = 4;static constexpr pls::cs::Int32 SYSSAVE_FLAG_RES_DOWNLOADED = 1;static constexpr pls::cs::Int32 SYSSAVES_HIGHSCORE_NAME = 0;static constexpr pls::cs::Int32 SYSSAVES_MONEY_HIGHSCORE_NAME = 1;static constexpr pls::cs::Int32 SYSSAVES_SAVE1_NAME = 2;static constexpr pls::cs::Int32 SYSSAVES_SAVE2_NAME = 3;static constexpr pls::cs::Int32 SYSSAVES_SAVE1_MONEY = 4;static constexpr pls::cs::Int32 SYSSAVES_SAVE2_MONEY = 5;static constexpr pls::cs::Int32 SYSSAVES_AUTO1_NAME = 6;static constexpr pls::cs::Int32 SYSSAVES_AUTO2_NAME = 7;static constexpr pls::cs::Int32 SYSSAVES_AUTO1_MONEY = 8;static constexpr pls::cs::Int32 SYSSAVES_AUTO2_MONEY = 9;static constexpr pls::cs::Int32 SYSSAVES_ERROR = 10;static constexpr pls::cs::Int32 SYSSAVES_ERROR_MATCH = 11;static constexpr pls::cs::Int32 SYSSAVES_END = 12;static constexpr pls::cs::Int32 SYSSAVEB_PLAYER_PARAM = 0;static constexpr pls::cs::Int32 SYSSAVEB_FORMATION = 1;static constexpr pls::cs::Int32 SYSSAVEB_TENANT_LV = 2;static constexpr pls::cs::Int32 SYSSAVEB_SVISOR_LV = 3;static constexpr pls::cs::Int32 SYSSAVEB_TRADE_LIST = 4;static constexpr pls::cs::Int32 SYSSAVEB_KAIROAD = 5;static constexpr pls::cs::Int32 SYSSAVEB_END = 6;static constexpr pls::cs::Int32 DATA_CHIP = 0;static constexpr pls::cs::Int32 DATA_EVENT = 1;static constexpr pls::cs::Int32 DATA_TALK = 2;static constexpr pls::cs::Int32 DATA_FURNITURE = 3;static constexpr pls::cs::Int32 DATA_FURNITURESET = 4;static constexpr pls::cs::Int32 SAVEP_EVENT_NUM = 0;static constexpr pls::cs::Int32 SAVEP_EVENT_NUM1 = 1;static constexpr pls::cs::Int32 SAVEP_EVENT_NUM2 = 2;static constexpr pls::cs::Int32 SAVEP_END = 3;static constexpr pls::cs::Int32 SAVEI_SAVEVER = 0;static constexpr pls::cs::Int32 SAVEI_YEAR = 1;static constexpr pls::cs::Int32 SAVEI_MONTH = 2;static constexpr pls::cs::Int32 SAVEI_WEEK = 3;static constexpr pls::cs::Int32 SAVEI_TIME = 4;static constexpr pls::cs::Int32 SAVEI_TIME_OLD = 5;static constexpr pls::cs::Int32 SAVEI_GAMESEC = 6;static constexpr pls::cs::Int32 SAVEI_CUSTOMER_INSTORE = 7;static constexpr pls::cs::Int32 SAVEI_FLAG = 8;static constexpr pls::cs::Int32 SAVEI_RIDE_TALK_CHARA = 9;static constexpr pls::cs::Int32 SAVEI_MAIN_BGM_GRADE = 10;static constexpr pls::cs::Int32 SAVEI_REPORT = 11;static constexpr pls::cs::Int32 SAVEI_QUALITY = 12;static constexpr pls::cs::Int32 SAVEI_GAME_SPEED = 13;static constexpr pls::cs::Int32 SAVEI_ENDING = 14;static constexpr pls::cs::Int32 SAVEI_SAVEDATA_VERSION = 15;static constexpr pls::cs::Int32 SAVEI_RESTORE_OLD_LOAD = 16;static constexpr pls::cs::Int32 SAVEI_END = 17;static constexpr pls::cs::Int32 FLAG_REPORTER = 1;static constexpr pls::cs::Int32 SAVEL_MONEY = 0;static constexpr pls::cs::Int32 SAVEL_PR = 1;static constexpr pls::cs::Int32 SAVEL_VTR = 2;static constexpr pls::cs::Int32 SAVEL_END = 3;static constexpr pls::cs::Int32 SAVES_NAME = 0;static constexpr pls::cs::Int32 SAVES_END = 1;static constexpr pls::cs::Int32 SAVEB_PLAYERDATA = 0;static constexpr pls::cs::Int32 SAVEB_QUESTMATCH = 1;static constexpr pls::cs::Int32 SAVEB_SPONSOR = 2;static constexpr pls::cs::Int32 SAVEB_FORMATION = 3;static constexpr pls::cs::Int32 SAVEB_STADIUM = 4;static constexpr pls::cs::Int32 SAVEB_SVISOR = 5;static constexpr pls::cs::Int32 SAVEB_TEAMDATA = 6;static constexpr pls::cs::Int32 SAVEB_TENANTDATA = 7;static constexpr pls::cs::Int32 SAVEB_FANACTDATA = 8;static constexpr pls::cs::Int32 SAVEB_FANBONUS = 9;static constexpr pls::cs::Int32 SAVEB_TRADE = 10;static constexpr pls::cs::Int32 SAVEB_TRAINING = 11;static constexpr pls::cs::Int32 SAVEB_LEAGUE = 12;static constexpr pls::cs::Int32 SAVEB_CAMERA = 13;static constexpr pls::cs::Int32 SAVEB_USERDATA = 14;static constexpr pls::cs::Int32 SAVEB_TENANT = 15;static constexpr pls::cs::Int32 SAVEB_DELAY_EVENTS = 16;static constexpr pls::cs::Int32 SAVEB_END = 17;static constexpr pls::cs::Int32 WEEK_SECOND = 10800;static constexpr pls::cs::Int32 ONE_DAY_WEEK = 4;static constexpr pls::cs::Int32 POPUP_ASSIST = 0;static constexpr pls::cs::Int32 SYSMSG_TABLESET = 0;static constexpr pls::cs::Int32 SYSMSG_TABLESET_SAME = 1;static constexpr pls::cs::Int32 SYSMSG_CLERK_TORESTROOM = 2;static constexpr pls::cs::Int32 SYSMSG_SET_GOING = 3;static constexpr pls::cs::Int32 MAP_MAX = 3;static constexpr pls::cs::Int32 CHIP_KOUZI = 0;static constexpr pls::cs::Int32 CHIP_GROUND = 4;static constexpr pls::cs::Int32 CHIP_LOBBY_OUTCOUNTER = 38;static constexpr pls::cs::Int32 CHIP_LOBBY_CORRIDOR = 39;static constexpr pls::cs::Int32 CHIP_LOBBY_INCOUNTER = 40;static constexpr pls::cs::Int32 CHIP_LOBBY_ENTRANCE = 41;static constexpr pls::cs::Int32 EFF_SHOOT = 0;static constexpr pls::cs::Int32 EFF_CHARGE = 1;static constexpr pls::cs::Int32 EFF_TRA_UP = 2;static constexpr pls::cs::Int32 EFF_TRA_LVUP = 3;static constexpr pls::cs::Int32 EFF_TRA_GETEXP = 4;static constexpr pls::cs::Int32 EFF_TRA_GETRP = 5;static constexpr pls::cs::Int32 EFF_TRA_GETMONEY = 6;static constexpr pls::cs::Int32 EFF_MAX = 7;static constexpr pls::cs::Int32 EVENT_NEWGAME = 0;static constexpr pls::cs::Int32 EVENT_TEST_EVENTMSG1 = 1;static constexpr pls::cs::Int32 EVENT_TEST_EVENTMSG2 = 2;static constexpr pls::cs::Int32 EVENT_ED_1 = 3;static constexpr pls::cs::Int32 EVENT_ED_HIGHSCORE_1 = 4;static constexpr pls::cs::Int32 EVENT_ED_HIGHSCORE_2 = 5;static constexpr pls::cs::Int32 EVENT_ED_2 = 6;static constexpr pls::cs::Int32 EVENT_TRA_NOTSETP = 10;static constexpr pls::cs::Int32 EVENT_MEM_NOTP = 11;static constexpr pls::cs::Int32 EVENT_TRA_NOTTRAP = 12;static constexpr pls::cs::Int32 EVENT_FAN_NOTFANP = 13;static constexpr pls::cs::Int32 EVENT_NOT_MONEY = 14;static constexpr pls::cs::Int32 EVENT_JOININNG_LEAGUE = 18;static constexpr pls::cs::Int32 EVENT_JOININIG_QUEST = 19;static constexpr pls::cs::Int32 EVENT_LEAGUE_AMA1 = 50;static constexpr pls::cs::Int32 EVENT_LEAGUE_REG1 = 51;static constexpr pls::cs::Int32 EVENT_LEAGUE_PRO1 = 52;static constexpr pls::cs::Int32 EVENT_LEAGUE_WOR1 = 53;static constexpr pls::cs::Int32 EVENT_LEAGUE_KAI1 = 54;static constexpr pls::cs::Int32 EVENT_LEAGUE_AMA2 = 55;static constexpr pls::cs::Int32 EVENT_LEAGUE_REG2 = 56;static constexpr pls::cs::Int32 EVENT_LEAGUE_PRO2 = 57;static constexpr pls::cs::Int32 EVENT_LEAGUE_WOR2 = 58;static constexpr pls::cs::Int32 EVENT_LEAGUE_KAI2 = 59;static constexpr pls::cs::Int32 EVENT_EDIT_F_COMMENT1 = 70;static constexpr pls::cs::Int32 EVENT_EDIT_F_COMMENT2 = 71;static constexpr pls::cs::Int32 EVENT_EDIT_F_COMMENT3 = 72;static constexpr pls::cs::Int32 EVENT_TRADE_COMMENT = 73;static constexpr pls::cs::Int32 EVENT_SPONSOR_SCCESS = 91;static constexpr pls::cs::Int32 EVENT_SPONSOR_FAIL = 92;static constexpr pls::cs::Int32 EVENT_SPONSOR_NOW = 93;static constexpr pls::cs::Int32 EVENT_TEST_SCRIPT = 100;static constexpr pls::cs::Int32 EVENT_TEST_RANK = 101;static constexpr pls::cs::Int32 EVENT_HUMAN_RESOURCE = 110;static constexpr pls::cs::Int32 EVENT_HR_SVISOR = 111;static constexpr pls::cs::Int32 EVENT_HR_SVISOR_SELECT = 112;static constexpr pls::cs::Int32 EVENT_HR_SVISOR_UPDATE = 113;static constexpr pls::cs::Int32 EVENT_HR_SVISOR_CONTINUE = 114;static constexpr pls::cs::Int32 EVENT_DIS_PLAYER_REPORT = 115;static constexpr pls::cs::Int32 EVENT_DIS_PLAYER_UPDATE = 116;static constexpr pls::cs::Int32 EVENT_DIS_PLAYER_SELECT = 117;static constexpr pls::cs::Int32 EVENT_DIS_PLAYER_M1 = 118;static constexpr pls::cs::Int32 EVENT_DIS_PLAYER_M2 = 119;static constexpr pls::cs::Int32 EVENT_DIS_PLAYER_M3 = 120;static constexpr pls::cs::Int32 EVENT_DIS_PLAYER_ELEVEN = 121;static constexpr pls::cs::Int32 EVENT_TRADE_FAIL = 122;static constexpr pls::cs::Int32 EVENT_TRADE_SELECT = 123;static constexpr pls::cs::Int32 EVENT_TRADE_LIST0 = 124;static constexpr pls::cs::Int32 EVENT_TENANT_BUILDLIST = 125;static constexpr pls::cs::Int32 EVENT_TENANT_STREN_ING = 126;static constexpr pls::cs::Int32 EVENT_FANACT_ACTIVE = 127;static constexpr pls::cs::Int32 EVENT_LEAGUE_SELECT = 128;static constexpr pls::cs::Int32 EVENT_LEAGUE_GO_NORMAL = 129;static constexpr pls::cs::Int32 EVENT_LEAGUE_GO_LAST = 130;static constexpr pls::cs::Int32 EVENT_LEAGUE_GO_LAST2 = 131;static constexpr pls::cs::Int32 EVENT_QUEST_SELECT = 132;static constexpr pls::cs::Int32 EVENT_QUEST_GO_NORMAL = 133;static constexpr pls::cs::Int32 EVENT_QUEST_WIN = 134;static constexpr pls::cs::Int32 EVENT_QUEST_DRAW = 135;static constexpr pls::cs::Int32 EVENT_QM_LOSE = 136;static constexpr pls::cs::Int32 EVENT_QM_LOSE2 = 137;static constexpr pls::cs::Int32 EVENT_GAME_INIT_GOAL = 138;static constexpr pls::cs::Int32 EVENT_GAME_INIT_MODELONGBALL = 139;static constexpr pls::cs::Int32 EVENT_GAME_INIT_MODEDRIBBLE = 140;static constexpr pls::cs::Int32 EVENT_CHANGE_TICKET = 141;static constexpr pls::cs::Int32 EVENT_SVISOR_LVUP = 142;static constexpr pls::cs::Int32 EVENT_EMPLOY_MAX = 143;static constexpr pls::cs::Int32 EVENT_SPONSOR_CONSTRUCT = 144;static constexpr pls::cs::Int32 EVENT_FADE_OUT = 145;static constexpr pls::cs::Int32 EVENT_FADE_IN = 146;static constexpr pls::cs::Int32 EVENT_TRAINING_INIT = 147;static constexpr pls::cs::Int32 EVENT_TRAINING_CHANGE = 148;static constexpr pls::cs::Int32 EVENT_TRA_CH_NORMAL = 149;static constexpr pls::cs::Int32 EVENT_TRA_CH_TRAINING = 150;static constexpr pls::cs::Int32 EVENT_TRA_CH_TENANT = 151;static constexpr pls::cs::Int32 EVENT_MATCH_NOTJOIN = 152;static constexpr pls::cs::Int32 EVENT_INIT_MATCH_LATE = 153;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_TRADE = 154;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_SPONSOR = 155;static constexpr pls::cs::Int32 EVENT_INIT_GO_MATCH = 156;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_VACANT = 157;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_TRA_TOP = 158;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_TRAINING = 159;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_TEAMEDIT = 160;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_FORMATION = 161;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_STAMEM = 162;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_MEMINFO = 163;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_TENANTSTREN = 164;static constexpr pls::cs::Int32 EVENT_INIT_SELECT_FANACT = 165;static constexpr pls::cs::Int32 EVENT_INIT_YEAREND_SVISOR = 166;static constexpr pls::cs::Int32 EVENT_INIT_LEAGUE_REGION = 167;static constexpr pls::cs::Int32 EVENT_INIT_LEAGUE_PRO = 168;static constexpr pls::cs::Int32 EVENT_INIT_LEAGUE_WORLD = 169;static constexpr pls::cs::Int32 EVENT_INIT_LEAGUE_KAIRO = 170;static constexpr pls::cs::Int32 EVENT_INIT_TENANT_GOODS = 171;static constexpr pls::cs::Int32 EVENT_INIT_AURAMAX = 172;static constexpr pls::cs::Int32 EVENT_INIT_TRADE_SUCCESS = 173;static constexpr pls::cs::Int32 EVENT_INIT_LEAGUE_SELECT_AMA = 174;static constexpr pls::cs::Int32 EVENT_NOT_SELECT_CLUB = 175;static constexpr pls::cs::Int32 EVENT_INIT_LEAGUEMATCH = 176;static constexpr pls::cs::Int32 EVENT_INIT_ASSISTMAX = 177;static constexpr pls::cs::Int32 EVENT_FANACT_HANDSHAKE = 178;static constexpr pls::cs::Int32 EVENT_FANACT_SIGN = 179;static constexpr pls::cs::Int32 EVENT_FANACT_SOCCER = 180;static constexpr pls::cs::Int32 EVENT_FANACT_COACH = 181;static constexpr pls::cs::Int32 EVENT_FANACT_TOURS = 182;static constexpr pls::cs::Int32 EVENT_FANACT_MAINTENANCE = 183;static constexpr pls::cs::Int32 EVENT_TSTREN_TAREA_LVUP1 = 184;static constexpr pls::cs::Int32 EVENT_TSTREN_TAREA_LVUP2 = 185;static constexpr pls::cs::Int32 EVENT_TSTREN_TAREA_SPRED = 186;static constexpr pls::cs::Int32 EVENT_TSTREN_STADIUM1 = 187;static constexpr pls::cs::Int32 EVENT_TSTREN_STADIUM2 = 188;static constexpr pls::cs::Int32 EVENT_INIT_PPARAM_1000 = 189;static constexpr pls::cs::Int32 EVENT_SELECT_HISTORY_NOTACHI = 190;static constexpr pls::cs::Int32 EVENT_163 = 191;static constexpr pls::cs::Int32 EVENT_164 = 184;static constexpr pls::cs::Int32 EVENT_165 = 184;static constexpr pls::cs::Int32 EVENT_166 = 184;static constexpr pls::cs::Int32 EVENT_167 = 184;static constexpr pls::cs::Int32 EVENT_168 = 184;static constexpr pls::cs::Int32 EVENT_169 = 184;static constexpr pls::cs::Int32 EVENT_170 = 184;static constexpr pls::cs::Int32 EVENT_171 = 184;static constexpr pls::cs::Int32 EVENT_172 = 184;static constexpr pls::cs::Int32 EVENT_173 = 184;static constexpr pls::cs::Int32 EVENT_174 = 184;static constexpr pls::cs::Int32 EVENT_175 = 184;static constexpr pls::cs::Int32 CTASK_CHARA = 0;static constexpr pls::cs::Int32 CTASK_REPEATER = 1;static constexpr pls::cs::Int32 CTASK_WAIT = 2;static constexpr pls::cs::Int32 CTASK_END = 3;static constexpr pls::cs::Int32 CHARA_MINAKO = 0;static constexpr pls::cs::Int32 CHARA_REPORTER = 1;static constexpr pls::cs::Int32 CHARA_WAITRESS = 2;static constexpr pls::cs::Int32 CHARA_ARCHITECT = 3;static constexpr pls::cs::Int32 CHARA_CUSTOMER_START = 4;static constexpr pls::cs::Int32 NODE_COST = 0;static constexpr pls::cs::Int32 NODE_HCOST = 1;static constexpr pls::cs::Int32 NODE_X = 2;static constexpr pls::cs::Int32 NODE_Y = 3;static constexpr pls::cs::Int32 NODE_FROM_X = 4;static constexpr pls::cs::Int32 NODE_FROM_Y = 5;static constexpr pls::cs::Int32 NODE_FIX = 6;static constexpr pls::cs::Int32 NODE_QUEUE = 7;static constexpr pls::cs::Int32 NODE_END = 8;static constexpr pls::cs::Int32 ENDING_YEAR = 8;static constexpr pls::cs::Int32 STAY_WEEK = 2;static constexpr pls::cs::Int32 EVA_MAX = 1000;static constexpr pls::cs::Int32 GAMEEVA_MAX = 100;static constexpr pls::cs::Int32 GOBJTYPE_FUKIDASHI = 0;static constexpr pls::cs::Int32 GOBJTYPE_PLAYER = 1;static constexpr pls::cs::Int32 GOBJTYPE_PLAYER_TRAINING = 2;static constexpr pls::cs::Int32 GOBJTYPE_PLAYER_SVISOR = 3;static constexpr pls::cs::Int32 GOBJTYPE_MAPCHIP = 4;static constexpr pls::cs::Int32 GOBJTYPE_MAPCHIPMAIN = 5;static constexpr pls::cs::Int32 GOBJTYPE_MAPCHIPMAIN_IMG = 6;static constexpr pls::cs::Int32 GOBJTYPE_MAPOBJECT = 7;static constexpr pls::cs::Int32 GOBJTYPE_COM2_SEB = 8;static constexpr pls::cs::Int32 GOBJTYPE_BALL = 9;static constexpr pls::cs::Int32 GOBJTYPE_TENANT_USE = 10;static constexpr pls::cs::Int32 GOBJTYPEBITS_ALL = 65535;static constexpr pls::cs::Int32 GOBJP_TYPE = 0;static constexpr pls::cs::Int32 GOBJP_ID = 1;static constexpr pls::cs::Int32 GOBJP_DEPTH = 2;static constexpr pls::cs::Int32 GOBJP_IMG = 3;static constexpr pls::cs::Int32 GOBJP_SEB = 4;static constexpr pls::cs::Int32 GOBJP_FRAME = 5;static constexpr pls::cs::Int32 GOBJP_X = 6;static constexpr pls::cs::Int32 GOBJP_Y = 7;static constexpr pls::cs::Int32 GOBJP_DARK = 8;static constexpr pls::cs::Int32 GOBJP_LAYER = 9;static constexpr pls::cs::Int32 GOBJP_END = 10;static constexpr pls::cs::Int32 ZSORT_PADDING = 360;static constexpr pls::cs::Int32 MAX_Z_PARALLEL = 30;static constexpr pls::cs::Int32 ERRMSG_LICENSE_00 = 0;static constexpr pls::cs::Int32 ERRMSG_LICENSE_01 = 1;static constexpr pls::cs::Int32 ERRMSG_LICENSE_02 = 2;static constexpr pls::cs::Int32 ERRMSG_LICENSE_03 = 3;static constexpr pls::cs::Int32 ERRMSG_LICENSE_04 = 4;static constexpr pls::cs::Int32 ERRMSG_LICENSE_05 = 5;static constexpr pls::cs::Int32 ERRMSG_LICENSE_CH = 6;static constexpr pls::cs::Int32 ERRMSG_LICENSE_ERROR = 7;static constexpr pls::cs::Int32 FILL_MARGIN_W = 4;static constexpr pls::cs::Int32 FILL_MARGIN_H = 1;static constexpr pls::cs::Int32 STEP_X = 30;static constexpr pls::cs::Int32 STEP_Y = 15;static constexpr pls::cs::Int32 SIZE_W = 60;static constexpr pls::cs::Int32 SIZE_H = 29;static constexpr pls::cs::Int32 POPUP_BASETIME = 60;static constexpr pls::cs::Int32 SENDSTATE_WAIT = 0;static constexpr pls::cs::Int32 SENDSTATE_CONNECTING = 1;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Int32>& APPLI_VERSION_RESOURCE();

static pls::cs::Array<pls::cs::Int32>& BGM();

static pls::cs::Ref<pls::kairo::Canvas>& canvas_();

static pls::cs::Array<pls::cs::String>& CGI();

static pls::cs::String& CGI_COMMON_QUERY();

static pls::cs::Int32& currentSaveSlot_();

static pls::cs::Array<pls::cs::Int32>& dateFileHead_();

static pls::cs::Array<pls::cs::Array<std::uint8_t>>& defSaveB_();

static pls::cs::Array<pls::cs::Int32>& defSaveI_();

static pls::cs::Array<pls::cs::Int64>& defSaveL_();

static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::util::Property>>& defSaveP_();

static pls::cs::Array<pls::cs::String>& defSaveS_();

static pls::cs::Array<pls::cs::Array<std::uint8_t>>& defSysSaveB_();

static pls::cs::Array<pls::cs::Int32>& defSysSaveI_();

static pls::cs::Array<pls::cs::Int64>& defSysSaveL_();

static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::util::Property>>& defSysSaveP_();

static pls::cs::Array<pls::cs::String>& defSysSaveS_();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& DIRECT1();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& DIRECT2();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& DIRECT3();

static pls::cs::Int32& EFF_CHARGE_TIME();

static pls::cs::Array<pls::cs::Int32>& EFF_EXPUP_DY();

static pls::cs::Array<pls::cs::Int32>& EFF_EXPUP_TIME();

static pls::cs::Array<pls::cs::Int32>& EFF_MONEYUP_DY();

static pls::cs::Array<pls::cs::Int32>& EFF_MONEYUP_TIME();

static pls::cs::Array<pls::cs::Int32>& EFF_RPUP_DY();

static pls::cs::Array<pls::cs::Int32>& EFF_RPUP_TIME();

static pls::cs::Int32& EFF_SHOOT_TIME();

static pls::cs::Int32& EFF_TLVUP_TIME();

static pls::cs::Array<pls::cs::Int32>& EFF_TUP_DY();

static pls::cs::Array<pls::cs::Int32>& EFF_TUP_TIME();

static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>& EFPOS_DATA();

static pls::cs::Int32& FLG_FUKIDASHI_DISP();

static pls::cs::Int32& FLG_NYUUKIN();

static pls::cs::Int32& FLG_SHOPPING_BAG();

static pls::cs::Int32& FRAME_TIME1();

static pls::cs::String& HOST();

static pls::cs::Ref<AppData>& instance_();

static pls::cs::Int32& NUM_MOVESEARCH();

static pls::cs::Array<pls::cs::String>& resourceString();

static pls::cs::Int32& ROOPCNT_MOVESEARCH();

static pls::cs::Array<pls::cs::Array<pls::cs::String>>& RSFILENAMESS();

static pls::cs::Array<pls::cs::Int32>& SE();

static pls::cs::String& SITE_URL();

static pls::cs::Array<pls::cs::String>& softLabels_();

static pls::cs::Array<pls::cs::Array<pls::cs::String>>& SOUND_FILENAME();

static pls::cs::Array<pls::cs::String>& strDatFileName_();

static pls::cs::Array<pls::cs::String>& talks_();

static pls::cs::Int64& TIME_MOVESEARCH();

static pls::cs::Ref<game::UserData>& udat_();

static pls::cs::String& URL();

static pls::cs::String& URL_CGI();

static pls::cs::String& URL_DAT();

static pls::cs::String& VERSIONUP_URL();

static void create_init(pls::cs::Ref<AppData> self);

static pls::cs::Ref<AppData> create();

void SetNowStoreIndex(pls::cs::Int32 nowStore_index);

pls::cs::Int32 GetNowStoreIndex();

static pls::cs::Ref<AppData> GetInstance();

void Init();

pls::cs::Array<pls::cs::Array<std::uint8_t>> PhpDlFile(pls::cs::String dir,pls::cs::String file);

pls::cs::Array<std::uint8_t> CgiRegist(pls::cs::String cm,pls::cs::String r);

pls::cs::String CgiRegistURL(pls::cs::String cm,pls::cs::String r);

pls::cs::Array<std::uint8_t> CgiRegistScore(pls::cs::String m,pls::cs::String s,pls::cs::String r);

pls::cs::String CgiRegistScoreURL(pls::cs::String m,pls::cs::String s,pls::cs::String r);

pls::cs::Array<std::uint8_t> CgiGetScore(pls::cs::String m);

pls::cs::String CgiGetScoreURL(pls::cs::String m);

pls::cs::Array<std::uint8_t> CgiRanking(pls::cs::String m,pls::cs::String r,pls::cs::String p);

pls::cs::String CgiRankingURL(pls::cs::String m,pls::cs::String r,pls::cs::String p);

static pls::cs::String MakeQuery(pls::cs::String query,pls::cs::String param);

bool IsPushSoftLabel(pls::cs::Int32 softlabel,pls::cs::Int32 key);

bool IsPushSoftLabel(pls::cs::Int32 softlabel);

bool IsPushStateSoftLabel(pls::cs::Int32 softlabel);

static pls::cs::Int32 Clamp(pls::cs::Int32 val,pls::cs::Int32 min_,pls::cs::Int32 max_);

static pls::cs::Single ClampFloat(pls::cs::Single val,pls::cs::Single min_,pls::cs::Single max_);

static pls::cs::Int64 ClampLong(pls::cs::Int64 val,pls::cs::Int64 min_,pls::cs::Int64 max_);

static pls::cs::Int32 ClampMin(pls::cs::Int32 val,pls::cs::Int32 min_);

static pls::cs::Int32 ClampMax(pls::cs::Int32 val,pls::cs::Int32 max_);

static pls::cs::Int64 ClampMinLong(pls::cs::Int64 val,pls::cs::Int64 min_);

static pls::cs::Int64 ClampMaxLong(pls::cs::Int64 val,pls::cs::Int64 max_);

static pls::cs::Int32 Max(pls::cs::Int32 v1,pls::cs::Int32 v2);

static pls::cs::Int32 Min(pls::cs::Int32 v1,pls::cs::Int32 v2);

void InitSystemSaveData();

bool LoadSystem();

void SaveSystem();

void NewGame(pls::cs::Int32 slot,pls::cs::String name);

void SaveGame();

void SaveGame(bool auto_);

void LoadGame(pls::cs::Int32 slot,bool auto_);

void LoadGame(pls::cs::Int32 slot);

void DrawWindow(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 GWidth,pls::cs::Int32 GHeight,pls::cs::Int32 GTop,pls::cs::String T_S,pls::cs::Int32 off_y);

void DrawWindow(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 GWidth,pls::cs::Int32 GHeight,pls::cs::Int32 GTop,pls::cs::String T_S);

void DrawWindow2(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 GWidth,pls::cs::Int32 GHeight,pls::cs::Int32 GTop,pls::cs::Int32 oy);

void DrawBox(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 BoxX1,pls::cs::Int32 BoxY1,pls::cs::Int32 BoxX2,pls::cs::Int32 BoxY2);

void DrawArcRect(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 r);

void FillArcRect(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 r);

void DrawFillArcRect(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 r,pls::cs::Int32 r0,pls::cs::Int32 g0,pls::cs::Int32 b0,pls::cs::Int32 r1,pls::cs::Int32 g1,pls::cs::Int32 b1);

void Draw3DBox(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 offset_x,pls::cs::Int32 offset_y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Array<pls::cs::Array<pls::cs::Int32>> colors);

bool IsTopForm(pls::cs::Ref<pls::kairo::FormBase> formBase);

void DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Ref<pls::kairo::Image> img,pls::cs::Int32 frame);

pls::cs::Int32 DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> imgs,pls::cs::Int32 frame,pls::cs::Int32 w1000,pls::cs::Int32 h1000,pls::cs::Int32 maxWidth,pls::cs::Int32 maxHeight);

pls::cs::Int32 DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> imgs,pls::cs::Int32 frame,pls::cs::Int32 w1000,pls::cs::Int32 h1000);

void DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> imgs,pls::cs::Int32 frame,pls::cs::Int32 ucnt);

void DrawSebV(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> imgs,pls::cs::Int32 frame,pls::cs::Int32 vcnt);

void DrawSebReverse(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Int32 frame,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> imgs);

static bool ColRect(pls::cs::Int32 left1,pls::cs::Int32 top1,pls::cs::Int32 right1,pls::cs::Int32 bottom1,pls::cs::Int32 left2,pls::cs::Int32 top2,pls::cs::Int32 right2,pls::cs::Int32 bottom2);

static bool ColRect(pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 left,pls::cs::Int32 top,pls::cs::Int32 right,pls::cs::Int32 bottom);

static bool ColRectFloat(pls::cs::Single left1,pls::cs::Single top1,pls::cs::Single right1,pls::cs::Single bottom1,pls::cs::Single left2,pls::cs::Single top2,pls::cs::Single right2,pls::cs::Single bottom2);

static pls::cs::String CommaSeparate(pls::cs::Int64 value);

static pls::cs::String CommaSeparate_en(pls::cs::Int64 value);

pls::cs::Array<pls::cs::Int32> GetBRectSeb(pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 frame);

void DrawVerticalScroll2(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 value,pls::cs::Int32 maximum,pls::cs::Int32 largeChange);

void DrawVerticalScroll3(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 value,pls::cs::Int32 maximum,pls::cs::Int32 largeChange);

void DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 value,pls::cs::Int32 x,pls::cs::Int32 y);

void DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::String header,pls::cs::Int64 value,pls::cs::String footer,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 anchor);

void DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::String header,pls::cs::Int64 value,pls::cs::String footer,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding);

void DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::String header,pls::cs::Int64 value,pls::cs::String footer,pls::cs::Int32 x,pls::cs::Int32 y);

void DrawNumImageLongIntInt(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 anchor);

void DrawNumImageComma(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 in_value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 comma_padding,pls::cs::Int32 anchor);

void DrawNumImageComma_en(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 in_value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 comma_padding,pls::cs::Int32 anchor);

void DrawMoney(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 in_value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 comma_padding,pls::cs::Int32 anchor,bool kmark);

void DrawMoney(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 in_value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 comma_padding,pls::cs::Int32 anchor);

void DrawMoney2(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 in_value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 comma_padding,pls::cs::Int32 anchor);

void DrawMoney3(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 in_value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 comma_padding,pls::cs::Int32 anchor);

void DrawMoney4(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 in_value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 comma_padding,pls::cs::Int32 anchor);

bool Push(pls::cs::Ref<pls::kairo::FormBase> form);

void AddEffectShoot(pls::cs::Int32 sx,pls::cs::Int32 sy);

void AddEffectCharge(pls::cs::Int32 sx,pls::cs::Int32 sy);

void AddEffectTUp(pls::cs::Int32 TAreaCoatNo,pls::cs::Int32 pId,pls::cs::Int32 t_index);

void AddEffectLvUp(pls::cs::Int32 wait,pls::cs::Int32 pId);

void AddEffectExpUp(pls::cs::Int32 pId,pls::cs::Int32 value);

void AddEffectRpUp(pls::cs::Int32 sx,pls::cs::Int32 sy,pls::cs::Int32 rId,pls::cs::Int32 value);

void AddEffectMoneyUp(pls::cs::Int32 sx,pls::cs::Int32 sy,pls::cs::Int32 value);

void DrawEffect(pls::cs::Ref<pls::kairo::Graphics> g);

void UpdateEffect();

void RemoveeEffect();

pls::cs::Int32 GetSeason();

pls::cs::Int32 GetSeason(pls::cs::Int32 month);

pls::cs::Array<pls::cs::Int32> IntegerVectorToIntAry(pls::cs::Ref<generated::java::util::Vector> ary);

void PlayBgm(pls::cs::Int32 bgm);

void PlaySe(pls::cs::Int32 se);

void PlayJingle(pls::cs::Int32 jingle);

pls::cs::String GetHttpErrorText();

bool ShowNews(pls::cs::Int32 id,pls::cs::String arg);

pls::cs::Int64 GetHighScore();

void SetHighScore(pls::cs::Int64 score);

pls::cs::Int64 GetNetHighScore();

void SetNetHighScore(pls::cs::Int64 score);

pls::cs::Int64 GetMoneyHighScore();

void SetMoneyHighScore(pls::cs::Int64 score);

pls::cs::Int64 GettMoneyNetHighScore();

void SettMoneyNetHighScore(pls::cs::Int64 score);

pls::cs::Int32 DateToTime(pls::cs::Int32 year,pls::cs::Int32 month,pls::cs::Int32 day,pls::cs::Int32 time);

pls::cs::Int32 DateToDays(pls::cs::Int32 year,pls::cs::Int32 month,pls::cs::Int32 week);

void DrawIcon(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 icon);

pls::cs::Int64 AddMoney(pls::cs::Int32 add,pls::cs::Int32 recordId);

pls::cs::Int64 SubMoney(pls::cs::Int32 sub,pls::cs::Int32 recordId);

bool ChPayMoney(pls::cs::Int32 cost);

pls::cs::Array<pls::cs::Int32> RotatePoint(pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 dir);

void UpdatePassiveScript();

bool RemoveAllMenuForms();

pls::cs::Array<pls::cs::Int32> GetNearNeighborNode(pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>> nodeMap,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Array<pls::cs::Int32> priority);

pls::cs::Array<pls::cs::Int32> GetNearNeighborNode(pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>> nodeMap,pls::cs::Int32 x,pls::cs::Int32 y);

pls::cs::Array<pls::cs::Array<pls::cs::Int32>> GetNeighborNodeList(pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>> nodeMap,pls::cs::Int32 x,pls::cs::Int32 y);

static pls::cs::Array<pls::cs::Int32> GetIntArray(pls::cs::String src);

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>> GetInt2Array(pls::cs::String src);

pls::cs::Array<std::uint8_t> BooleanToByteArray(pls::cs::Array<bool> bools);

pls::cs::Array<bool> SbyteArrayToBoolean(pls::cs::Array<std::uint8_t> src,pls::cs::Int32 size);

pls::cs::Array<bool> SbyteArrayToBoolean(pls::cs::Array<std::uint8_t> src);

pls::cs::Array<std::uint8_t> IntToByteArray(pls::cs::Array<pls::cs::Int32> ints);

pls::cs::Array<pls::cs::Int32> SbyteArrayToInt(pls::cs::Array<std::uint8_t> src,pls::cs::Int32 size);

pls::cs::Array<pls::cs::Int32> SbyteArrayToInt(pls::cs::Array<std::uint8_t> src);

pls::cs::Int32 FrameToMilliSecond(pls::cs::Int32 frame);

void DrawOutline(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<pls::kairo::Image> img,pls::cs::Int32 u,pls::cs::Int32 v,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 lineWidth,pls::cs::Int32 color);

void DrawOutline(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Ref<kairo::unity::ui::Seb> seb,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> images,pls::cs::Int32 frame,pls::cs::Int32 lineWidth,pls::cs::Int32 color);

static bool CheckTimeZone(pls::cs::Int32 time,pls::cs::Int32 start,pls::cs::Int32 end);

void ResourceReDownload();

void DrawMeter(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 value,pls::cs::Int32 max_,pls::cs::Int32 scaleNum,bool reverse,pls::cs::Int32 anchor,pls::cs::Int32 height);

void DrawMeter(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 value,pls::cs::Int32 max_,pls::cs::Int32 scaleNum,bool reverse,pls::cs::Int32 anchor);

pls::cs::Int32 GetAllStock(pls::cs::Int32 itemId);

pls::cs::Int32 GetStockTotal(pls::cs::Array<pls::cs::Int32> stock);

static pls::cs::Int32 SearchInteger(pls::cs::Array<pls::cs::Int32> array,pls::cs::Int32 key);

pls::cs::Array<pls::cs::Int32> DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 anchor,bool active,pls::cs::Int32 margin,bool cursor,pls::cs::Ref<pls::kairo::FormBase> form,pls::cs::Int32 frame);

void DrawCommandIntBool(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 anchor,bool active,bool cursor,pls::cs::Ref<pls::kairo::FormBase> form,pls::cs::Int32 frame);

pls::cs::Int32 GetMainBGM();

static void Gc();

static void Sort(pls::cs::Array<pls::cs::Int32> list);

pls::cs::Int32 GetTime(pls::cs::Int32 week,pls::cs::Int32 time);

bool CheckNightTime(pls::cs::Int32 time);

bool CheckSleepingTime(pls::cs::Int32 time);

bool CheckPointInPolygon(pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Array<pls::cs::Array<pls::cs::Int32>> aPoint);

void DrawFukidashiBalloon(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String text,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 color);

void DrawFukidashiKimochi(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 numValue,pls::cs::Int32 numSeb);

void DrawFukidashiKimochiOLD(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 numValue,pls::cs::Int32 numSeb);

void DrawFukidashiOLD(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 len,pls::cs::Int32 color);

void DrawFukidashiOLD(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 len);

void DrawFukidashiOLD(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 dx,pls::cs::Int32 dy);

pls::cs::Array<pls::cs::Int32> GetEvenlyDivisionArea(pls::cs::Int32 left,pls::cs::Int32 right,pls::cs::Int32 padding,pls::cs::Int32 index,pls::cs::Int32 max_);

void BubbleSort(pls::cs::Array<pls::cs::Int32> list);

pls::cs::Int32 GetIsometricX(pls::cs::Int32 xi,pls::cs::Int32 yi);

pls::cs::Int32 GetIsometricY(pls::cs::Int32 xi,pls::cs::Int32 yi);

pls::cs::Array<pls::cs::Ref<data::BaseData>> AdjustDataList(pls::cs::Array<pls::cs::Ref<data::BaseData>> list,pls::cs::Int32 id);

void SerializeScripts(pls::cs::Ref<generated::java::io::OutputStream> os,pls::cs::Ref<generated::java::util::Vector> scripts);

pls::cs::Ref<generated::java::util::Vector> DeserializeScripts(pls::cs::Ref<generated::java::io::InputStream> stream);

pls::cs::Ref<form::SubForm> ExecEvent(pls::cs::Int32 id,pls::cs::String args,pls::cs::Array<pls::cs::Int32> argi);

bool CheckAlreadyEvent(pls::cs::Int32 id);

pls::cs::Ref<form::SubForm> ExecuteScript(pls::cs::Array<pls::cs::Int32> scr,bool popup,pls::cs::String args,pls::cs::Array<pls::cs::Int32> argi);

pls::cs::Ref<form::SubForm> ExecuteScript(pls::cs::Array<pls::cs::Array<pls::cs::Int32>> script,bool popup,pls::cs::String args,pls::cs::Array<pls::cs::Int32> argi,pls::cs::Int32 line,pls::cs::Int32 talkCharaType,pls::cs::Int32 talkCharaIndex);

pls::cs::Ref<form::SubForm> ExecuteScript(pls::cs::Array<pls::cs::Array<pls::cs::Int32>> script,bool popup,pls::cs::String args,pls::cs::Array<pls::cs::Int32> argi,pls::cs::Int32 line);

pls::cs::Ref<form::SubForm> ExecuteScriptIntArrayIntArrayArray(pls::cs::Array<pls::cs::Int32> scr,bool popup,pls::cs::String args,pls::cs::Array<pls::cs::Int32> argi,pls::cs::Array<pls::cs::Array<pls::cs::Int32>> script);

bool CheckTermScript(pls::cs::Array<pls::cs::Array<pls::cs::Int32>> terms);

bool CheckTermScriptIntArray(pls::cs::Array<pls::cs::Int32> terms);

pls::cs::Int32 GetDelayId(pls::cs::Array<pls::cs::Array<pls::cs::Int32>> script);

pls::cs::Array<pls::cs::Array<pls::cs::Int32>> GetDelayScript(pls::cs::Int32 delayId);

static void Print(pls::cs::String str);

void ClearZSortObjects();

void InsertGameObject(pls::cs::Int32 type,pls::cs::Int32 id,pls::cs::Int32 depth,pls::cs::Int32 img,pls::cs::Int32 seb,pls::cs::Int32 frame,pls::cs::Int32 x,pls::cs::Int32 y,bool dark,pls::cs::Int32 layer);

void InsertGameObject(pls::cs::Int32 type,pls::cs::Int32 id,pls::cs::Int32 depth,pls::cs::Int32 img,pls::cs::Int32 seb,pls::cs::Int32 frame,pls::cs::Int32 x,pls::cs::Int32 y,bool dark);

void InsertGameObject(pls::cs::Int32 type,pls::cs::Int32 id,pls::cs::Int32 depth,pls::cs::Int32 img,pls::cs::Int32 seb,pls::cs::Int32 frame,pls::cs::Int32 x,pls::cs::Int32 y);

void InsertGameObject(pls::cs::Int32 type,pls::cs::Int32 id,pls::cs::Int32 depth,pls::cs::Int32 seb,pls::cs::Int32 frame,pls::cs::Int32 x,pls::cs::Int32 y);

void InsertGameObjectBool(pls::cs::Int32 type,pls::cs::Int32 id,pls::cs::Int32 depth,pls::cs::Int32 seb,pls::cs::Int32 frame,pls::cs::Int32 x,pls::cs::Int32 y,bool dark);

void DrawZSortObjects(pls::cs::Ref<pls::kairo::Graphics> g,bool offscreen,pls::cs::Int32 typeBits);

void DrawZSortObjects(pls::cs::Ref<pls::kairo::Graphics> g,bool offscreen);

void DrawZSortObjects(pls::cs::Ref<pls::kairo::Graphics> g);

void AddPopupScriptBuffer(pls::cs::Array<pls::cs::Int32> script,pls::cs::Int32 popId,pls::cs::String popMsg);

void ChangeMap(pls::cs::Int32 next_mapId);

void ClearPopupMessages();

void AddPopupMessage(pls::cs::Int32 id,pls::cs::String msg,pls::cs::Int32 wait,pls::cs::Int32 time);

void AddPopupMessage(pls::cs::Int32 id,pls::cs::String args);

void RemovePopupMessages(pls::cs::Int32 id);

void DrawPopupMessage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 bottom);

void Draw_helpMessage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String text,pls::cs::Int32 x,pls::cs::Int32 y);

void UpdatePopupMessage();

pls::cs::Array<pls::cs::Ref<pls::cs::Object>> GetPopupMessage(pls::cs::Int32 key);

bool ChExistPopup(pls::cs::Int32 id);

pls::cs::Int32 GetExistPopupNum(pls::cs::Int32 id);

void AddDebugLog(pls::cs::String debug_log);

void SendSaveData(pls::cs::String text,bool scratchpad,pls::cs::Ref<pls::cs::ExceptionObject> th);

void SendSaveData(pls::cs::String text,bool scratchpad);

void SendSaveData(pls::cs::String text);

void SendSaveDataInt(pls::cs::String text,pls::cs::Int32 type,pls::cs::Ref<pls::cs::ExceptionObject> th);

void SendSaveDataInt(pls::cs::String text,pls::cs::Int32 type);

void Draw(pls::cs::String err,bool copy);

void Draw(pls::cs::String err);

void Post(pls::cs::String url,pls::cs::String file,pls::cs::String index,pls::cs::String date,pls::cs::Array<std::uint8_t> data);

void Draw_trophy(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 frame);

void DrawTrophyEffect(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 trophy_id,pls::cs::Int32 subform_frame,pls::cs::Int32 px,pls::cs::Int32 py);

static pls::cs::Int32 Random(pls::cs::Int32 total);

static bool IsLanguageOther();

static bool IsLanguageJpBase(bool includeJP);

static pls::cs::Int32 GetFig(pls::cs::Int64 value);

void DrawExp(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y);

void DrawLv(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String text,pls::cs::Int32 x,pls::cs::Int32 y);

void DrawPositionStatus(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 index,pls::cs::Int32 rank,pls::cs::Int32 x,pls::cs::Int32 y);

static bool IsSC_LangCode();
};
} // namespace main
}
