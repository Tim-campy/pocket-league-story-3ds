// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct Team : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("game.Team", Team, pls::cs::Object)
pls::cs::Ref<main::AppData> apdat_{};
pls::cs::Ref<UserData> udat_{};
pls::cs::Int32 team_id_{};
pls::cs::Int32 tDataId_{};
pls::cs::Int32 formationType_{};
pls::cs::Array<pls::cs::Ref<Player>> players_{};
pls::cs::Int32 lastKickeer_{};
pls::cs::Int32 amefto_pz{};
pls::cs::Int32 amefto_oneChargeTime{};
pls::cs::Array<pls::cs::Single> fPos_{};
pls::cs::Array<pls::cs::Int32> CORRECT_LINE{};
pls::cs::Array<pls::cs::Int32> NOW_LINE{};
pls::cs::Array<pls::cs::Int32> team_policyEva{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> team_eva{};
pls::cs::Array<pls::cs::Array<pls::cs::Single>> team_frect{};
pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> frect_pos{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> frect_cpos{};
pls::cs::Single startZ_{};
pls::cs::Single goalZ_{};
pls::cs::Int32 chargeNum_{};
pls::cs::Int32 chargeCnt_{};
pls::cs::Int32 eva_risk_{};
pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> amefto_goalPos_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> amefto_cameraPos_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> amefto_address_{};
pls::cs::Array<pls::cs::Int32> receiverPIdBox_{};
pls::cs::Array<pls::cs::Single> CEVA_PASSER_MP2{};
pls::cs::Array<pls::cs::Single> CEVA_PASSER_MP2_DIV{};
pls::cs::Array<pls::cs::Single> CEVA_PASSER_MP3{};
pls::cs::Array<pls::cs::Int32> CEVA_PASSER_AP{};
pls::cs::Array<pls::cs::Int32> CEVA_PASSER_ENEAP{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> coatEva_passer{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> coatEva_freeRun{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> coatEva_defence{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> coatEva_looseBall{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> coatEva_passer2{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> coatEva_freeRun2{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> coatEva_new_offence{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> coatEva_new_offence_passer{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> coatEva_new_deffence{};
pls::cs::Ref<generated::java::util::Vector> ballNearPlayer_{};
pls::cs::Ref<generated::java::util::Vector> players_receive_{};
bool ternCharge{};
pls::cs::Single w_disBoal{};
pls::cs::Single w_formation{};
static constexpr pls::cs::Int32 F_X = 0;static constexpr pls::cs::Int32 F_Y = 1;static constexpr pls::cs::Int32 F_W = 2;static constexpr pls::cs::Int32 F_H = 3;static constexpr pls::cs::Int32 F_END = 4;static constexpr pls::cs::Int32 ROLE_GK = 0;static constexpr pls::cs::Int32 ROLE_DF = 1;static constexpr pls::cs::Int32 ROLE_MF = 2;static constexpr pls::cs::Int32 ROLE_FW = 3;static constexpr pls::cs::Int32 ROLE_END = 4;static constexpr pls::cs::Single TEAM_FRECT_X_MIN = 0.0f;static constexpr pls::cs::Single TEAM_FRECT_X_MAX = 0.0f;static constexpr pls::cs::Single TEAM_FRECT_Y_MIN = -1530.0f;static constexpr pls::cs::Single TEAM_FRECT_Y_MAX = 360.0f;static constexpr pls::cs::Single TEAM_FRECT_W_MIN = 450.0f;static constexpr pls::cs::Single TEAM_FRECT_W_MAX = 450.0f;static constexpr pls::cs::Single TEAM_FRECT_H_MIN = 720.0f;static constexpr pls::cs::Single TEAM_FRECT_H_MAX = 1260.0f;static constexpr pls::cs::Single TEAM_FRECT_Y_ADD_CHARGE_MIN = 90.0f;static constexpr pls::cs::Single TEAM_FRECT_Y_ADD_CHARGE_MAX = 90.0f;static constexpr pls::cs::Single TEAM_FRECT_Y_ADD_DEFFENCE_MIN = -270.0f;static constexpr pls::cs::Single TEAM_FRECT_Y_ADD_DEFFENCE_MAX = -270.0f;static constexpr pls::cs::Single FRECT_FRONT_START_H = 450.0f;static constexpr pls::cs::Single FRECT_BACK_START_H = 540.0f;static constexpr pls::cs::Single FRECT_BACK_DEFENCE_H = 450.0f;static constexpr pls::cs::Int32 AMEFTO_ONECHARGETIME_MIN = 50;static constexpr pls::cs::Int32 AMEFTO_ONECHARGETIME_MAX = 10;static constexpr pls::cs::Int32 AMEFTO_PZID_NORMAL = 0;static constexpr pls::cs::Int32 AMEFTO_PZID_DRIBBLE = 1;static constexpr pls::cs::Int32 AMEFTO_PZID_LONGPASS = 2;static constexpr pls::cs::Int32 AMEFTO_PZID_END = 3;static constexpr pls::cs::Int32 RECIVERPIDBOX_MAX = 5;static constexpr pls::cs::Single CPM1 = 0.2f;static constexpr pls::cs::Single CPM2 = 0.4f;static constexpr pls::cs::Single CPM3 = 0.7f;static constexpr pls::cs::Int32 COATEVA_ROOT_NUM = 9;static constexpr pls::cs::Int32 COATEVA_PASSER_BASE = 30;static constexpr pls::cs::Int32 DEF1 = 100;static constexpr pls::cs::Int32 DEF2 = 80;static constexpr pls::cs::Int32 DEF3 = 60;static constexpr pls::cs::Int32 DEF4 = 40;static constexpr pls::cs::Int32 DEF5 = 20;static constexpr pls::cs::Int32 DEF6 = 0;static constexpr pls::cs::Int32 CALMODE_PYRAMID = 0;static constexpr pls::cs::Int32 CALMODE_RECT = 1;static constexpr pls::cs::Int32 CH_CEVA_PASSER_DEFAULT = 0;static constexpr pls::cs::Int32 CH_CEVA_PASSER_FRINDADD = 1;static constexpr pls::cs::Int32 CH_CEVA_PASSER_ENDDIV = 2;static constexpr pls::cs::Int32 CH_CEVA_FREERUN_DEFAULT = 3;static constexpr pls::cs::Int32 CH_CEVA_FREERUN_ENDDIV = 4;static constexpr pls::cs::Int32 CH_CEVA_FREERUN_PASSSUPORT = 5;static constexpr pls::cs::Int32 CH_CEVA_DEFENCE_DEFAULT = 6;static constexpr pls::cs::Int32 CH_CEVA_DEFENCE_PASSER = 7;static constexpr pls::cs::Int32 CH_CEVA_DEFENCE_ALLYDIV = 8;static constexpr pls::cs::Int32 CH_CEVA_LOOSEBALL_DEFAULT = 9;static constexpr pls::cs::Int32 CH_CEVA_LOOSEBALL_BALLPOS = 10;static constexpr pls::cs::Int32 CH_CEVA_LOOSEBALL_ALLYDIV = 11;static constexpr pls::cs::Int32 CH_CEVA_END = 12;static constexpr pls::cs::Int32 CH_DATA_POSEVA = 0;static constexpr pls::cs::Int32 CH_DATA_RECEIVEEVA = 1;static constexpr pls::cs::Int32 CH_DATA_ADDRESS = 2;static constexpr pls::cs::Int32 CH_DATA_POS = 3;static constexpr pls::cs::Int32 CH_DATA_FLAG = 4;static constexpr pls::cs::Int32 CH_DATA_COLISTATE = 5;static constexpr pls::cs::Int32 CH_DATA_END = 6;static constexpr pls::cs::Single w_coatEvaSum = 0.7f;static constexpr pls::cs::Single w_ballLine = 0.3f;
void SetPositionKickOff();

void SetPositionThrowIn();

static void ensure_initialized();

static pls::cs::Array<pls::cs::Int32>& AMEFTO_FRECT_GOALZ();

static pls::cs::Int32& AMEFTO_ONECHARGETIME_PLAYER();

static pls::cs::Array<pls::cs::Int32>& AMEFTO_PASSER_COATEVA();

static pls::cs::Array<pls::cs::Int32>& AMEFTO_PZ();

static pls::cs::Array<pls::cs::Int32>& ch_ceva();

static pls::cs::Array<pls::cs::String>& CH_COATEVA_STR();

static pls::cs::Array<pls::cs::String>& CH_DATA_STR();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& DEAFULT_FORMATION_EVA();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& DEAFULT_FORMATION_EVA_PENALTYAREA();

static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& FORMATION_KICKOFF();

static pls::cs::Int32& FORMATION_RATE_DEFFECNE();

static pls::cs::Array<pls::cs::Int32>& FORMATION_TYPE_RATE();

static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>& GOAL_GLAD_AROUND_POS();

static pls::cs::Array<pls::cs::Int32>& mostEva_address();

static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>& PANEL_DIRECT();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_1();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_2();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_3();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_4();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_5();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_6();

static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>& PANEL_DIRECT_R();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_R_1();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_R_2();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_R_3();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_R_4();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& PANEL_DIRECT_R_9BLOCK();

static pls::cs::Single& PRP_W_DIS();

static pls::cs::Single& RPP_W_AROUNDENEMY();

static pls::cs::Single& RPP_W_COATEVASUM();

static pls::cs::Single& RPP_W_DISTOGOAL_NORMAL();

static pls::cs::Single& RPP_W_DISTOGOAL_PAREA();

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& team_formationCenterPos();

static void create_init(pls::cs::Ref<Team> self);

static pls::cs::Ref<Team> create();

void Init(bool isUserTeam,pls::cs::Int32 team_id,pls::cs::Int32 tDataId);

void Update();

void Collision();

void Draw(pls::cs::Ref<pls::kairo::Graphics> g,bool offscreen);

void SetPosFPos(pls::cs::Ref<Player> player,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> var_out);

void SetFormationParam(pls::cs::Ref<Player> player);

void SetFormationRectParam();

void SetSortGroundBallNear();

void SetSortJampBallNear();

void Init_coatEva();

void Update_coatEva();

void Update_coatEvaNewOffence();

void Update_coatEvaNewDeffence();

void Update_coatEvaPasser();

void Update_coatEvaFreeRun();

void Update_coatEvaDefence();

void Update_coatEvaLooseBall();

pls::cs::Ref<Player> GetPasser();

pls::cs::Ref<Player> GetLastKicker();

pls::cs::Int32 GetSum(pls::cs::Array<pls::cs::Array<pls::cs::Int32>> data,pls::cs::Int32 cx,pls::cs::Int32 cy,bool div);

pls::cs::Array<pls::cs::Int32> GetMostEvaAddress(pls::cs::Array<pls::cs::Array<pls::cs::Int32>> data,pls::cs::Int32 cx,pls::cs::Int32 cy,pls::cs::Int32 num);

void SetMostEvaAddressFromMoveArea(pls::cs::Ref<Player> player,pls::cs::Array<pls::cs::Int32> var_out,bool isThroughPass);

void SetMostEvaAddressFromMoveArea_thrughPass(pls::cs::Ref<Player> player,pls::cs::Array<pls::cs::Int32> var_out,bool isThroughPass);

pls::cs::Int32 Get_playerPosEva(pls::cs::Ref<Player> player,pls::cs::Int32 xi,pls::cs::Int32 yi,bool div);

pls::cs::Int32 Get_playerPosEva(pls::cs::Ref<Player> player,pls::cs::Int32 xi,pls::cs::Int32 yi);

pls::cs::Int32 Get_playerReceivePosEva(pls::cs::Ref<Player> player,pls::cs::Int32 xi,pls::cs::Int32 yi);

void Cal_evaCoatMulti(pls::cs::Int32 mode,pls::cs::Array<pls::cs::Array<pls::cs::Int32>> data,pls::cs::Int32 cx,pls::cs::Int32 cy,pls::cs::Array<pls::cs::Single> muliti_param);

void Cal_evaCoatMulti9block(pls::cs::Array<pls::cs::Array<pls::cs::Int32>> data,pls::cs::Int32 cx,pls::cs::Int32 cy,pls::cs::Array<pls::cs::Single> muliti_param);

void Cal_evaCoatAdd(pls::cs::Int32 mode,pls::cs::Array<pls::cs::Array<pls::cs::Int32>> data,pls::cs::Int32 cx,pls::cs::Int32 cy,pls::cs::Array<pls::cs::Int32> add_param);

void Cal_evaCoatAdd9block(pls::cs::Array<pls::cs::Array<pls::cs::Int32>> data,pls::cs::Int32 cx,pls::cs::Int32 cy,pls::cs::Array<pls::cs::Int32> add_param);

void Amefto();

void Amefto_start();

void Update_formationRect2();

void SetPositionGoalKick();

void SetPositionConnerKick();

void SetGoalState();

bool ChWhichChargeTern();

bool ChPAreaLineOver();
};
} // namespace game
}
