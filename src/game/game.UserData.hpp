// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct UserData : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("game.UserData", UserData, pls::cs::Object)
pls::cs::Ref<main::AppData> apdat_{};
pls::cs::Ref<pls::kairo::Canvas> canvas_{};
pls::cs::Ref<form::FormManager> formMan_{};
pls::cs::Ref<GameManager> gm_{};
pls::cs::Array<pls::cs::Ref<Team>> teams_{};
pls::cs::Ref<Ball> ball_{};
pls::cs::Array<pls::cs::Array<pls::cs::Ref<data::PlayerData>>> cpuPlayerDatas_{};
pls::cs::Int32 teamEvaRank_{};
pls::cs::Int32 ticketPrice_{};
pls::cs::Int32 selectFormationId_{};
pls::cs::Int32 selectFormationType_{};
pls::cs::Int32 selectSupervisorId_{};
pls::cs::Int32 selectUniform_{};
pls::cs::Int32 selectLeagueId_{};
pls::cs::Int32 selectQmId_{};
pls::cs::Int32 selectTrainingPolicy_{};
pls::cs::Int32 battleQmIndex_{};
pls::cs::Int32 matchInfoJoin_{};
pls::cs::Int32 eventActFlg_{};
pls::cs::Int32 matchInfoWeek_{};
pls::cs::Int32 matchFlgVictory_{};
pls::cs::Ref<generated::java::util::Vector> memberPDataist_{};
pls::cs::Array<pls::cs::Int32> researchPoint_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> tpplay_stock{};
pls::cs::Int32 tpplay_battleNum{};
pls::cs::Ref<generated::java::util::Vector> tpplay_battleRecode{};
pls::cs::Array<pls::cs::Ref<Tenant>> tenants_{};
pls::cs::Int32 league_setu_{};
pls::cs::Int32 league_teamNum_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> league_fightCombi_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> league_fightResult_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> league_data_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> league_dispOlder_{};
pls::cs::Array<pls::cs::Int32> matchResult_{};
pls::cs::Int32 matchGetGoalTotal_{};
pls::cs::Int32 busState_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> busPos_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> busV_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> busGoalPos_{};
pls::cs::Ref<generated::java::util::Vector> busMovePoint_{};
pls::cs::Int32 busDirect_{};
pls::cs::Array<pls::cs::Int32> busSDirect{};
pls::cs::Array<pls::cs::Int32> busCPos{};
pls::cs::Int32 busCnt{};
pls::cs::Int32 game_winConsecutive_{};
pls::cs::Int64 customer_total_{};
pls::cs::Array<pls::cs::Int32> customer_month_{};
pls::cs::Int32 game_matchEva_{};
pls::cs::Array<pls::cs::Int32> fanParam_{};
pls::cs::Ref<TPlayer> tp_svisor_{};
pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>> records_{};
pls::cs::Ref<generated::java::util::Vector> record_customer{};
pls::cs::Array<pls::cs::Array<pls::cs::Ref<TArea>>> tAreas_{};
pls::cs::Array<pls::cs::Ref<TPlayer>> tPlayers_{};
pls::cs::Array<pls::cs::Ref<TBall>> tBalls_{};
pls::cs::Array<pls::cs::Int32> pDataIdOlderList_{};
pls::cs::Int32 save_tAreaRootNum_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> tModeList_{};
pls::cs::Int32 trainig_appearWait{};
pls::cs::Ref<generated::java::util::Vector> restTPlayers_{};
pls::cs::Int32 tAreaRootNum_{};
pls::cs::Int32 tAreaLv_{};
bool isSoccerForm_{};
pls::cs::Ref<Player> disp_player{};
pls::cs::Ref<generated::java::util::Vector> moveScreenPX{};
pls::cs::Ref<generated::java::util::Vector> moveScreenPY{};
pls::cs::Ref<generated::java::util::Vector> chMoveP_YOKO{};
pls::cs::Ref<generated::java::util::Vector> chMoveP_TATE{};
pls::cs::Array<pls::cs::Int32> temp_testTPlayersId_{};
pls::cs::Array<pls::cs::Int32> TALK_SCHARA_ID{};
pls::cs::Array<pls::cs::String> TALK_SCHARA_NAME{};
pls::cs::Array<pls::cs::Int32> TALK_SCHARA_IMGINDEX{};
pls::cs::Array<pls::cs::Int32> base_spos{};
pls::cs::Int64 chTime1{};
pls::cs::Int64 chTime2{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> temp_collisionData{};
pls::cs::Array<pls::cs::Int32> retNextBattleData{};
pls::cs::Int32 phase_{};
pls::cs::Int32 phaseCnt_{};
pls::cs::Array<pls::cs::Int32> et_cur{};
pls::cs::Int32 scrollValue_{};
pls::cs::Ref<generated::java::util::Vector> editTest_fw{};
pls::cs::Ref<generated::java::util::Vector> editTest_mf{};
pls::cs::Ref<generated::java::util::Vector> editTest_df{};
pls::cs::Ref<generated::java::util::Vector> editTest_gk{};
pls::cs::Array<pls::cs::Ref<generated::java::util::Vector>> editTest_team{};
pls::cs::Ref<generated::java::util::Vector> editTest_temp{};
pls::cs::Ref<generated::java::util::Vector> editTest_category{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> editForPos{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> editForPosEnemy{};
pls::cs::Int32 editMemDispMode{};
pls::cs::Int32 emdm_cnt{};
pls::cs::Array<pls::cs::Int32> EMDM_ANIME_TIME{};
pls::cs::Array<pls::cs::String> MENU_STR{};
pls::cs::Array<pls::cs::String> HELP_STR{};
pls::cs::Ref<generated::java::util::Vector> editTest_formation{};
pls::cs::Int32 dx{};
pls::cs::Int32 dy{};
pls::cs::Array<pls::cs::Int32> d1{};
pls::cs::Array<pls::cs::Int32> d2{};
pls::cs::Array<pls::cs::Int32> CR_COLOR{};
pls::cs::Ref<generated::java::util::Vector> tenantList{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> MENUGRAPH_POINTPOS{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> MENUGRAPH_OFF{};
pls::cs::Array<pls::cs::Int32> playerParam1{};
pls::cs::Array<pls::cs::Int32> playerParam2{};
pls::cs::Array<pls::cs::Array<pls::cs::Int64>> clear_point{};
pls::cs::Int64 ranking_point{};
static constexpr pls::cs::Int32 EVA_MAX = 1000;static constexpr pls::cs::Int32 EVA_MAX_FAN = 10000;static constexpr pls::cs::Int32 EVA_MAX_ASSIST = 1000;static constexpr pls::cs::Int32 EVA_MAX_NAMEVALUE = 10000;static constexpr pls::cs::Int32 DISP_MIN_FAN = 0;static constexpr pls::cs::Int32 DISP_MAX_FAN = 100000;static constexpr pls::cs::Int32 DISP_MAX_ASSIST = 100;static constexpr pls::cs::Int32 DISP_MAX_NAMEVALUE = 1000;static constexpr pls::cs::Int32 TAREA_PID_MAX = 4;static constexpr pls::cs::Int32 TAREA_PID_TENANT = 0;static constexpr pls::cs::Int32 TAREA_PID_RUNING = 1;static constexpr pls::cs::Int32 TAREA_PID_COAT1 = 2;static constexpr pls::cs::Int32 TAREA_PID_COAT2 = 3;static constexpr pls::cs::Int32 TMODE_PATH = 0;static constexpr pls::cs::Int32 TMODE_LIFTING = 1;static constexpr pls::cs::Int32 TMODE_DRIBBLE = 2;static constexpr pls::cs::Int32 TMODE_SHOOT = 3;static constexpr pls::cs::Int32 TMODE_RUNNING = 4;static constexpr pls::cs::Int32 TMODE_TENANT = 5;static constexpr pls::cs::Int32 RESEARCHP_FAN = 0;static constexpr pls::cs::Int32 RESEARCHP_IDEA = 1;static constexpr pls::cs::Int32 RESEARCHP_PHY = 2;static constexpr pls::cs::Int32 RESEARCHP_TAC = 3;static constexpr pls::cs::Int32 RESEARCHP_END = 4;static constexpr pls::cs::Int32 RESEARCHP_FAIL = -1;static constexpr pls::cs::Int32 RECORD_ID_MATCH = 0;static constexpr pls::cs::Int32 RECORD_ID_TENANT = 1;static constexpr pls::cs::Int32 RECORD_ID_SPONSOR = 2;static constexpr pls::cs::Int32 RECORD_ID_SALLARY = 3;static constexpr pls::cs::Int32 RECORD_ID_ELSE = 4;static constexpr pls::cs::Int32 RECORD_ID_END = 5;static constexpr pls::cs::Int32 BUSSTATE_MOVE = 0;static constexpr pls::cs::Int32 BUSSTATE_ARRIVE = 1;static constexpr pls::cs::Int32 COLLISIONID_PLAYER = 0;static constexpr pls::cs::Int32 COLLISIONID_BALL = 1;static constexpr pls::cs::Int32 COLLISIONID_MOVEPOINT = 2;static constexpr pls::cs::Int32 COLLISIONID_RECEIVE = 3;static constexpr pls::cs::Int32 COLLISIONID_HEADING = 4;static constexpr pls::cs::Int32 COLLISIONID_TRAINING = 5;static constexpr pls::cs::Int32 TENANT_MAX = 15;static constexpr pls::cs::Int32 LEAGUE_RESULT_WIN = 0;static constexpr pls::cs::Int32 LEAGUE_RESULT_DRAW = 1;static constexpr pls::cs::Int32 LEAGUE_RESULT_LOSE = 2;static constexpr pls::cs::Int32 LEAGUE_DATA_WINPOINT = 0;static constexpr pls::cs::Int32 LEAGUE_DATA_WIN = 1;static constexpr pls::cs::Int32 LEAGUE_DATA_DRAW = 2;static constexpr pls::cs::Int32 LEAGUE_DATA_LOSE = 3;static constexpr pls::cs::Int32 LEAGUE_DATA_GETSCORE = 4;static constexpr pls::cs::Int32 LEAGUE_DATA_LOSTSCORE = 5;static constexpr pls::cs::Int32 LEAGUE_DATA_SUBSCORE = 6;static constexpr pls::cs::Int32 LEAGUE_DATA_OLDER = 7;static constexpr pls::cs::Int32 LEAGUE_DATA_TEAMID = 8;static constexpr pls::cs::Int32 LEAGUE_DATA_END = 9;static constexpr pls::cs::Int32 LEAGUE_ID_AMATEUR = 0;static constexpr pls::cs::Int32 LEAGUE_ID_REGION = 1;static constexpr pls::cs::Int32 LEAGUE_ID_COUNTRY = 2;static constexpr pls::cs::Int32 LEAGUE_ID_WORLD = 3;static constexpr pls::cs::Int32 LEAGUE_ID_KAIRO = 4;static constexpr pls::cs::Int32 LEAGUE_ID_END = 5;static constexpr pls::cs::Int32 LEAGUE_PID = 0;static constexpr pls::cs::Int32 MATCH_WIN = 0;static constexpr pls::cs::Int32 MATCH_DRAW = 1;static constexpr pls::cs::Int32 MATCH_LOSE = 2;static constexpr pls::cs::Int32 ELEVEN = 11;static constexpr pls::cs::Int32 TPPLAY_ID_MONEY = 0;static constexpr pls::cs::Int32 TPPLAY_ID_WIN = 1;static constexpr pls::cs::Int32 TPPLAY_ID_DRAW = 2;static constexpr pls::cs::Int32 TPPLAY_ID_LOSE = 3;static constexpr pls::cs::Int32 TPPLAY_ID_RP_FAN = 4;static constexpr pls::cs::Int32 TPPLAY_ID_RP_IDEA = 5;static constexpr pls::cs::Int32 TPPLAY_ID_RP_PHY = 6;static constexpr pls::cs::Int32 TPPLAY_ID_RP_TAC = 7;static constexpr pls::cs::Int32 TPPLAY_ID_TEAMEVA = 8;static constexpr pls::cs::Int32 TPPLAY_ID_END = 9;static constexpr pls::cs::Int32 TPPLAY_STOCK_NUM = 15;static constexpr pls::cs::Int32 UNIFORM_SELECTNUM = 8;static constexpr pls::cs::Int32 UNIFORM_WHITE = 8;static constexpr pls::cs::Int32 TICKET_RANGE_MIN = 1000;static constexpr pls::cs::Int32 TICKET_RANGE_MAX = 30000;static constexpr pls::cs::Int32 TICKET_PRICE_MIN = 1000;static constexpr pls::cs::Int32 TICKET_PRICE_MAX = 10000;static constexpr pls::cs::Single TICKET_RATE_MIN = 3.0f;static constexpr pls::cs::Single TICKET_RATE_BASE = 1.0f;static constexpr pls::cs::Single TICKET_RATE_MAX = 0.33333334f;static constexpr pls::cs::Single TICKET_FB_RATE_MIN = 1.5f;static constexpr pls::cs::Single TICKET_FB_RATE_BASE = 1.0f;static constexpr pls::cs::Single TICKET_FB_RATE_MAX = 0.2f;static constexpr pls::cs::Int32 TICKET_EVA_BORDER = 700;static constexpr pls::cs::Int32 TICKET_IDEAL_MIN = 1000;static constexpr pls::cs::Int32 TICKET_IDEAL_BORDER = 3000;static constexpr pls::cs::Int32 TICKET_IDEAL_MAX = 6000;static constexpr pls::cs::Int32 TICKETSALSE_IDEAL_MIN = 65;static constexpr pls::cs::Int32 TICKETSALSE_IDEAL_BORDER = 12000;static constexpr pls::cs::Int32 TICKETSALSE_IDEAL_MAX = 50000;static constexpr pls::cs::Single TICKETSALSE_RATE_MIN = 0.8f;static constexpr pls::cs::Single TICKETSALSE_RATE_BORDER = 1.0f;static constexpr pls::cs::Single TICKETSALSE_RATE_MAX = 0.6f;static constexpr pls::cs::Int32 EVENTFLG_LEAGUE = 1;static constexpr pls::cs::Int32 EVENTFLG_FANACT = 2;static constexpr pls::cs::Int32 EVENTFLG_TENANTSTREN = 4;static constexpr pls::cs::Int32 EVENTFLG_QUESTMATCH = 8;static constexpr pls::cs::Int32 EVENTFLG_TRADE = 16;static constexpr pls::cs::Int32 EVENTFLG_SPONSOR = 32;static constexpr pls::cs::Int32 EVENTFLG_NUM = 6;static constexpr pls::cs::Int32 WARP_SUB_MIN = -300;static constexpr pls::cs::Int32 WARP_SUB_MAX = 300;static constexpr pls::cs::Int32 EDIT_PHASE_INIT = 0;static constexpr pls::cs::Int32 EDIT_PHASE_FORMATION = 1;static constexpr pls::cs::Int32 EDIT_PHASE_FCHANGE = 2;static constexpr pls::cs::Int32 EDIT_PHASE_FCHANGE2 = 3;static constexpr pls::cs::Int32 EDIT_PHASE_FMOVE = 4;static constexpr pls::cs::Int32 EDIT_PHASE_FTYPE = 5;static constexpr pls::cs::Int32 EDIT_PHASE_MEMCHANGE = 6;static constexpr pls::cs::Int32 EDIT_PHASE_MEMCHANGE2 = 7;static constexpr pls::cs::Int32 EDIT_PHASE_MEMMOVE = 8;static constexpr pls::cs::Int32 EDIT_PHASE_INIT_TO_F = 9;static constexpr pls::cs::Int32 EDIT_PHASE_INIT_TO_M = 10;static constexpr pls::cs::Int32 EDIT_PHASE_F_TO_INIT = 11;static constexpr pls::cs::Int32 EDIT_PHASE_F_TO_INIT2 = 12;static constexpr pls::cs::Int32 EDIT_PHASE_M_TO_INIT = 13;static constexpr pls::cs::Int32 EDIT_PHASE_ENEMY = 14;static constexpr pls::cs::Int32 EDIT_PHASE_INIT_TO_ENE = 15;static constexpr pls::cs::Int32 EDIT_PHASE_ENE_TO_INIT = 16;static constexpr pls::cs::Int32 EDIT_T1 = 4;static constexpr pls::cs::Int32 EDIT_T2 = 8;static constexpr pls::cs::Int32 EDIT_FOR_W = 214;static constexpr pls::cs::Int32 EDIT_FOR_W2 = 30;static constexpr pls::cs::Int32 EDIT_FOR_H = 94;static constexpr pls::cs::Int32 EDIT_FOR_RW = 144;static constexpr pls::cs::Int32 EDIT_FOR_RH = 90;static constexpr pls::cs::Int32 EDIT_MEM_W = 212;static constexpr pls::cs::Int32 EDIT_MEM_H = 100;static constexpr pls::cs::Int32 ECMTES_MENU = 0;static constexpr pls::cs::Int32 ECMTES_FORMENU = 1;static constexpr pls::cs::Int32 ECMTES_FCHA = 2;static constexpr pls::cs::Int32 ECMTES_FCHA2 = 3;static constexpr pls::cs::Int32 ECMTES_FTYPE = 4;static constexpr pls::cs::Int32 ECMTES_MEMCHA = 5;static constexpr pls::cs::Int32 ECMTES_MEMCHA2 = 6;static constexpr pls::cs::Int32 ECMTES_END = 7;static constexpr pls::cs::Int32 EMDM_NAME = 0;static constexpr pls::cs::Int32 EMDM_PARAM = 1;static constexpr pls::cs::Int32 EMDM_POSITION = 2;static constexpr pls::cs::Int32 EMDM_LV = 3;static constexpr pls::cs::Int32 EMDM_SALLARY = 4;static constexpr pls::cs::Int32 EMDM_END = 5;static constexpr pls::cs::Int32 E_F_W = 9;static constexpr pls::cs::Int32 E_F_H = 9;static constexpr pls::cs::Int32 MENUID_FORMATION = 0;static constexpr pls::cs::Int32 MENUID_STARTMEMBER = 1;static constexpr pls::cs::Int32 MENUID_PLAYERDATA = 2;static constexpr pls::cs::Int32 MENUID_COACH = 3;static constexpr pls::cs::Int32 MENUID_TRADE = 4;static constexpr pls::cs::Int32 MENUID_BATU = 5;static constexpr pls::cs::Int32 EDIT_MEMMOVE_TIME = 6;static constexpr pls::cs::Int32 P_W = 4;static constexpr pls::cs::Int32 N = 5;static constexpr pls::cs::Int32 MENUGRAPH_NUM = 5;static constexpr pls::cs::Single MENU_LEN = 16.0f;static constexpr pls::cs::Int32 MATCHINFOJOIN_LEAGUE = 0;static constexpr pls::cs::Int32 MATCHINFOJOIN_QUEST = 1;static constexpr pls::cs::Int32 MATCHINFOJOIN_NOTHING = 2;static constexpr pls::cs::Int32 POPUPMEM_ID_KEEPCOST = 0;static constexpr pls::cs::Int32 POPUPMEM_ID_E_MONEY = 1;static constexpr pls::cs::Int32 POPUPMEM_ID_E_TRADEG = 2;static constexpr pls::cs::Int32 POPUPMEM_ID_E_TRADE = 3;static constexpr pls::cs::Int32 POPUPMEM_ID_E_PLAYER = 4;static constexpr pls::cs::Int32 POPUPMEM_ID_E_LEAGUE = 5;static constexpr pls::cs::Int32 POPUPMEM_ID_E_QUEST = 6;static constexpr pls::cs::Int32 POPUPMEM_ID_E_EXP = 7;static constexpr pls::cs::Int32 POPUPMEM_ID_E_KICK = 8;static constexpr pls::cs::Int32 POPUPMEM_ID_E_SPD = 9;static constexpr pls::cs::Int32 POPUPMEM_ID_E_TEQ = 10;static constexpr pls::cs::Int32 POPUPMEM_ID_E_BODY = 11;static constexpr pls::cs::Int32 POPUPMEM_ID_E_GK = 12;static constexpr pls::cs::Int32 POPUPMEM_ID_E_AURA = 13;static constexpr pls::cs::Int32 POPUPMEM_ID_E_FAN = 14;static constexpr pls::cs::Int32 POPUPMEM_ID_E_FAN_DECRE = 15;static constexpr pls::cs::Int32 POPUPMEM_ID_E_ASSIST = 16;static constexpr pls::cs::Int32 POPUPMEM_ID_E_ASSIST_DECRE = 17;static constexpr pls::cs::Int32 POPUPMEM_ID_E_NVALUE = 18;static constexpr pls::cs::Int32 POPUPMEM_ID_E_NVALUE_DECRE = 19;static constexpr pls::cs::Int32 POPUPMEM_ID_E_TEVA = 20;static constexpr pls::cs::Int32 POPUPMEM_ID_E_TEVA_DECRE = 21;static constexpr pls::cs::Int32 POPUPMEM_ID_E_SPONSOR = 22;static constexpr pls::cs::Int32 POPUPMEM_ID_E_TRAINING = 23;static constexpr pls::cs::Int32 POPUPMEM_ID_E_TENANT = 24;static constexpr pls::cs::Int32 POPUPMEM_ID_E_FANACT = 25;static constexpr pls::cs::Int32 POPUPMEM_ID_E_SVISOR = 26;static constexpr pls::cs::Int32 POPUPMEM_ID_CON_SPONSOR = 27;static constexpr pls::cs::Int32 POPUPMEM_ID_LVUP_PLAYER = 28;static constexpr pls::cs::Int32 POPUPMEM_ID_FORMATION = 29;static constexpr pls::cs::Int32 POPUPMEM_ID_LVUP_TENANT = 30;static constexpr pls::cs::Int32 POPUPMEM_ID_BUILD_START = 31;static constexpr pls::cs::Int32 POPUPMEM_ID_STREN_START = 32;static constexpr pls::cs::Int32 POPUPMEM_ID_STREN_TAREA = 33;static constexpr pls::cs::Int32 POPUPMEM_ID_STREN_STADIUM = 34;static constexpr pls::cs::Int32 POPUPMEM_ID_FANACT_START = 35;static constexpr pls::cs::Int32 POPUPMEM_ID_REGARDS_YEAR = 36;static constexpr pls::cs::Int32 POPUPMEM_ID_CHANGE_POLICY = 37;static constexpr pls::cs::Int32 POPUPMEM_ID_SP_TENANT = 38;static constexpr pls::cs::Int32 FEELPT_MAX = 100;static constexpr pls::cs::Int32 FPT_UPRATE_MIN = 11;static constexpr pls::cs::Int32 FPT_UPRATE_CENTER = 60;static constexpr pls::cs::Int32 FPT_UPRATE_MAX = 90;static constexpr pls::cs::Int32 FPT_UP_CIR_MIN = 30;static constexpr pls::cs::Int32 FPT_UP_CIR_MAX = 45;static constexpr pls::cs::Int32 FPT_UP_RECT_MIN = 10;static constexpr pls::cs::Int32 FPT_UP_RECT_MAX = 20;static constexpr pls::cs::Int32 NEGOTIATE_RET_SUCCESS = 1;static constexpr pls::cs::Int32 NEGOTIATE_RET_FAIL = 0;static constexpr pls::cs::Int32 SPONSOR_EF_CNTANIME_TIME = 12;static constexpr pls::cs::Int32 SPONSOR_EF_ADDCNT_TIME = 20;static constexpr pls::cs::Int32 SPONSOR_EF_COMMENT_TIME = 20;static constexpr pls::cs::Int32 CPOINT_TOTALCUSTOMER = 0;static constexpr pls::cs::Int32 CPOINT_TOTAL_SCORE = 1;static constexpr pls::cs::Int32 CPOINT_ALL_PLAYERLV = 2;static constexpr pls::cs::Int32 CPOINT_WINNUM = 3;static constexpr pls::cs::Int32 CPOINT_TEAMEVA = 4;static constexpr pls::cs::Int32 CPOINT_SPONSOR_SATISFACT = 5;static constexpr pls::cs::Int32 CPOINT_FORMATIONNUM = 6;static constexpr pls::cs::Int32 CPOINT_MAX = 7;static constexpr pls::cs::Single MULTI_TOTALCUSTOMER = 0.01f;static constexpr pls::cs::Single MULTI_TOTAL_SCORE = 30.0f;static constexpr pls::cs::Single MULTI_ALL_PLAYERLV = 15.0f;static constexpr pls::cs::Single MULTI_WINNUM = 150.0f;static constexpr pls::cs::Single MULTI_TEAMEVA = 15.0f;static constexpr pls::cs::Single MULTI_SPONSOR_SATISFACT = 5.0f;static constexpr pls::cs::Single MULTI_FORMATIONNUM = 100.0f;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Array<pls::cs::Single>>& COLLISION_DATA();

static pls::cs::Array<pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>>& COLLISION_GPOS();

static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>& COLLISION_SPOS();

static pls::cs::Array<pls::cs::Array<pls::cs::String>>& CPOINT_STR();

static pls::cs::Int32& DEBUG_DISPFPS();

static pls::cs::Int32& DEBUG_MEMBERPARAM_DISP();

static pls::cs::Int32& DEBUG_SALLARY_MAX();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_ENE_FOR();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_ENE_HELP();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_ENE_MENU();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_FOR_ENE();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_FOR_F();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_FOR_M();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_MENU();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_MENU_ENE();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_MENU_F();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_MENU_M();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_MENU_SOC();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_TOPHELP_ENE();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_TOPHELP_F();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EDIT_POS_TOPHELP_M();

static pls::cs::Array<pls::cs::Int32>& EDITMEM_PARAM_COLOR();

static pls::cs::Array<pls::cs::Int32>& EF_COMMENT();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EF_COMMENT_SETTING();

static pls::cs::Array<pls::cs::Array<pls::cs::String>>& EF_FEELPT_COMMENT_();

static pls::cs::Array<pls::cs::Int32>& EF_VALUE();

static pls::cs::Array<pls::cs::Int32>& EVA_INIT();

static pls::cs::Int32& FLG_CONTROL_DISPPANEL();

static pls::cs::Array<pls::cs::String>& FORMATIONTYPE_STR();

static pls::cs::Array<pls::cs::String>& FPER_STR();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GRAPH_POS();

static pls::cs::Int32& HUMAN_DISP_MODE();

static pls::cs::Ref<UserData>& instance();

static pls::cs::Int32& NEGOTIATE_RESULT();

static pls::cs::Array<pls::cs::Int32>& NEGOTIATE_RESULT_DISPVALUE();

static pls::cs::Array<pls::cs::Int32>& NEGOTIATE_RESULT_TH();

static pls::cs::Array<pls::cs::Int32>& NEGOTIATE_RESULT_VALUE();

static pls::cs::Array<pls::cs::String>& POPUP_MEM();

static pls::cs::Array<pls::cs::String>& RANK_NAME();

static pls::cs::Array<pls::cs::Int32>& RANK_VALUE();

static pls::cs::Array<pls::cs::String>& RECORD_NAME();

static pls::cs::Array<pls::cs::Int32>& temp_param();

static pls::cs::Array<pls::cs::Int32>& temp_score();

static pls::cs::Array<pls::cs::Int32>& temp_scoreSum();

static pls::cs::Int32& TEST_3KEYSTOP();

static pls::cs::Int32& TEST_VALUE1();

static pls::cs::Int32& TEST_VALUE2();

static pls::cs::Int32& TEST_VALUE3();

static pls::cs::Array<pls::cs::Int32>& TMODE_KEEPER();

static pls::cs::Array<pls::cs::Int32>& TMODE_NONKEEPER();

static pls::cs::Array<pls::cs::Int32>& UNIFORM_KEEPER();

static pls::cs::Array<pls::cs::Int32>& WAIT_TIME();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& WARPSUB_BATTLESCORE_MINUS();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& WARPSUB_BATTLESCORE_PLUS();

static void create_init(pls::cs::Ref<UserData> self);

static pls::cs::Ref<UserData> create();

static pls::cs::Ref<UserData> GetInstance();

static void PrintOut();

static void Update_45v1();

static void Update_78v2();

static void Update_12v3();

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

void Deserialize2();

void Init();

void NewGame();

void ProcCommonMethod();

pls::cs::Ref<Player> GetPlayer(pls::cs::Int32 teamId,pls::cs::Int32 id);

pls::cs::Ref<TPlayer> GetTPlayer(pls::cs::Int32 id);

pls::cs::Ref<Player> GetDispPlayer();

void SetDispPlayerData(pls::cs::Int32 seb,pls::cs::Int32 bodyImg,pls::cs::Int32 faceImg,pls::cs::Int32 frame,pls::cs::Int32 direct,pls::cs::Int32 role,pls::cs::Int32 tData_id);

void SetDispPlayerData(pls::cs::Int32 seb,pls::cs::Int32 bodyImg,pls::cs::Int32 faceImg,pls::cs::Int32 frame,pls::cs::Int32 direct);

void DrawDispPlayer(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y);

void ChTime1();

void ChTime2();

void SetCollisionPos();

pls::cs::Array<pls::cs::Int32> GetCollisionData(pls::cs::Int32 retIndex,pls::cs::Int32 collisionId);

void League_init();

void SetFightCombi(pls::cs::Int32 setu);

pls::cs::Array<pls::cs::Int32> GetNextBattleLeagueIndex(pls::cs::Int32 setu);

pls::cs::Array<pls::cs::Int32> GetLeagueData(pls::cs::Int32 teamId);

pls::cs::Int32 GetLeagueDataIndex(pls::cs::Int32 teamId);

bool League_update();

void League_resetScore();

void League_finish();

void Qm_update();

void Update_league();

void League_setFightResult(pls::cs::Int32 league_result,pls::cs::Int32 team_id);

pls::cs::Int32 GetTeamScore(pls::cs::Int32 t1_offence,pls::cs::Int32 t2_deffence);

void Update_gameParam();

void ChangeEditPhase(pls::cs::Int32 next_phase,bool isSoccerForm);

void SetMemberChangeList();

bool Update_edit(bool isSoccerForm);

void Draw_edit(pls::cs::Ref<pls::kairo::Graphics> g,bool isSoccerForm);

void Draw_edit2(pls::cs::Ref<pls::kairo::Graphics> g,bool isSoccerForm);

void Draw_editButton(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 W,pls::cs::Int32 H,bool select,pls::cs::Int32 type,pls::cs::Int32 index,bool isTouch,bool isMarker);

void Draw_editButton(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 W,pls::cs::Int32 H,bool select,pls::cs::Int32 type,pls::cs::Int32 index);

void Draw_colorRect(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 ox,pls::cs::Int32 oy,pls::cs::Int32 cnt,pls::cs::Int32 W,pls::cs::Int32 H,pls::cs::Int32 speed);

void Draw_colorRect(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 ox,pls::cs::Int32 oy,pls::cs::Int32 cnt,pls::cs::Int32 W,pls::cs::Int32 H);

void GetPoint(pls::cs::Int32 ox,pls::cs::Int32 oy,pls::cs::Int32 cnt,pls::cs::Array<pls::cs::Int32> d,pls::cs::Int32 W,pls::cs::Int32 H);

void SetEditForPos(bool isSoccerForm);

void SetTrainingData3();

void SetTrainingCommonMethod(bool isInit);

bool SetTenantIn(pls::cs::Ref<TPlayer> tPlayer);

void ChangeTraining();

void Update_training();

void Draw_training(pls::cs::Ref<pls::kairo::Graphics> g);

void Init_bus();

void Update_bus();

void Draw_bus(pls::cs::Ref<pls::kairo::Graphics> g);

void SetPlayerParam(pls::cs::Array<pls::cs::Int32> p1,pls::cs::Array<pls::cs::Int32> p2);

void DrawGraph_menuElement(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 ox,pls::cs::Int32 oy,pls::cs::Array<pls::cs::Int32> param1,pls::cs::Array<pls::cs::Int32> param2,pls::cs::Int32 frame);

pls::cs::Int32 GetParamPlusNum(pls::cs::Int32 param_now,pls::cs::Int32 param_max);

pls::cs::Int32 GetRankIndex();

pls::cs::Int32 GetRankIndex(pls::cs::Int32 value);

void AddResearchPoint(pls::cs::Int32 researchId,pls::cs::Int32 add);

void SubResearchPoint(pls::cs::Int32 researchId,pls::cs::Int32 sub);

bool ChResearchPoin(pls::cs::Int32 researchId,pls::cs::Int32 cost);

void Training_init();

void SetMatchInfoJoin(pls::cs::Int32 matchInfoJoin);

pls::cs::Int32 GetMatchInfoJoin();

pls::cs::Int32 GetEvaWarPNameValue(pls::cs::Single w_warP,pls::cs::Single w_nameValue);

pls::cs::Single GetTicketPriceRate(pls::cs::Int32 eva);

pls::cs::Int32 GetStandartTicketPrice(pls::cs::Int32 eva);

pls::cs::Single GetTicketPriceFanBonusRate(pls::cs::Int32 eva);

pls::cs::Int32 GetIdealSalse(pls::cs::Int32 eva);

pls::cs::Single GetTicketSalseRate(pls::cs::Int32 eva);

void RotateTestPlayParam();

void AddTestPlayerParam(pls::cs::Int32 tppId,pls::cs::Int32 addValue);

void AddTPlayBattleRecode(pls::cs::Int32 teamId,pls::cs::Int32 user_score,pls::cs::Int32 enemy_score);

void OnEventFlg(pls::cs::Int32 id);

bool ChEventFlg(pls::cs::Int32 id);

void SetNegotiateResult(pls::cs::Int32 init_value,pls::cs::Int32 difficult);

static pls::cs::Int32 GetFeelPtEf(pls::cs::Int32 frame,pls::cs::Int32 TIME);

static pls::cs::Array<pls::cs::Int32> GetAddFeelPtEf(pls::cs::Int32 frame,pls::cs::Int32 TIME);

static pls::cs::String GetFeelPtEfRetStr(pls::cs::Int32 retFeelPt);

static pls::cs::Array<pls::cs::Int32> GetFeelPtEfCommentParam(pls::cs::Int32 frame,pls::cs::Int32 TIME);

static bool ChGetFeelPtEfCommentParam_dispRefresh(pls::cs::Int32 frame,pls::cs::Int32 TIME);

void RecordAddMoney(pls::cs::Int32 recordId,pls::cs::Int32 value);

void RecordSubMoney(pls::cs::Int32 recordId,pls::cs::Int32 value);

void RecordReset();

void RecordAddCustomerNum(pls::cs::Int32 value);

void CustomerNumReset();

void SetClearPoint();

void SetContinueGameData();

void ReflectContinueGameData();
};
} // namespace game
}
