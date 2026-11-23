// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace data {

struct PlayerData : BaseData {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("data.PlayerData", PlayerData, BaseData)
pls::cs::String name_{};
pls::cs::String name2_{};
pls::cs::Int32 category_{};
pls::cs::Int32 faceImg_{};
pls::cs::Int32 initLv_{};
pls::cs::Array<pls::cs::Int32> paramPhysical_{};
pls::cs::Array<pls::cs::Int32> paramPhysicalMax_{};
pls::cs::Array<pls::cs::Int32> salary_{};
pls::cs::Int32 popularP_{};
pls::cs::Array<pls::cs::Int32> trainingPoint_{};
pls::cs::Int32 role_{};
pls::cs::Int32 auraPoint_{};
pls::cs::Int32 matchNum_{};
pls::cs::Array<pls::cs::Int32> actscoreNum_{};
pls::cs::Int32 actscoreSum_{};
pls::cs::Int32 actscoreScore_{};
pls::cs::Int32 game_goalConsecutive_{};
pls::cs::Int32 game_goalTotal_{};
pls::cs::Int32 game_goalInLeague_{};
pls::cs::Int32 exp_{};
pls::cs::Int32 expStock_{};
pls::cs::Int32 lv_{};
bool new_{};
pls::cs::Int32 onceMember_{};
pls::cs::Int32 param_speed{};
pls::cs::Int32 param_pass{};
pls::cs::Int32 param_throuhPass{};
pls::cs::Int32 param_longPass{};
pls::cs::Int32 param_shoot{};
pls::cs::Int32 param_v0y{};
pls::cs::Int32 param_hShootURR{};
pls::cs::Int32 param_charge_body{};
pls::cs::Int32 param_charge_sliding{};
pls::cs::Int32 param_physical{};
pls::cs::Int32 param_trap{};
pls::cs::Int32 param_catch{};
pls::cs::Int32 param_keeperJamp{};
pls::cs::Int32 param_slidingRate{};
pls::cs::Int32 param_jampdis{};
pls::cs::Int32 param_jampdistop{};
pls::cs::Int32 param_shootTrap{};
pls::cs::Int32 temp_lv{};
pls::cs::Int32 temp_exp{};
pls::cs::Int32 temp_anime{};
bool temp_lvUp{};
pls::cs::Array<pls::cs::Int32> bonus_research{};
pls::cs::Int32 auraCnt_{};
pls::cs::Int32 pri_game_goalTotal_{};
static constexpr pls::cs::Int32 FLG_INIT = 1;static constexpr pls::cs::Int32 FLG_TRAINING_KEEPER = 2;static constexpr pls::cs::Int32 FLG_CPUDATA1 = 4;static constexpr pls::cs::Int32 FLG_CPUDATA2 = 8;static constexpr pls::cs::Int32 PARAM_MAX = 1000;static constexpr pls::cs::Int32 EVA_SPEED = 0;static constexpr pls::cs::Int32 EVA_PASS = 1;static constexpr pls::cs::Int32 EVA_SHOOT = 2;static constexpr pls::cs::Int32 EVA_SHOOTV0Y = 3;static constexpr pls::cs::Int32 EVA_CHARGE_BODY = 4;static constexpr pls::cs::Int32 EVA_CHARGE_SLIDING = 5;static constexpr pls::cs::Int32 EVA_PHYSICAL = 6;static constexpr pls::cs::Int32 EVA_TRAP = 7;static constexpr pls::cs::Int32 EVA_CATCH = 8;static constexpr pls::cs::Int32 EVA_KEEPERJAMP = 9;static constexpr pls::cs::Int32 EVA_JAMPDIS = 10;static constexpr pls::cs::Int32 EVA_JAMPDISTOP = 11;static constexpr pls::cs::Int32 ACTSCORE_SHOOT = 0;static constexpr pls::cs::Int32 ACTSCORE_PASS = 1;static constexpr pls::cs::Int32 ACTSCORE_CLEAR = 2;static constexpr pls::cs::Int32 ACTSCORE_CENTERING = 3;static constexpr pls::cs::Int32 ACTSCORE_DRIBBLE = 4;static constexpr pls::cs::Int32 ACTSCORE_SHOOT_SCCESS = 5;static constexpr pls::cs::Int32 ACTSCORE_PASS_SCCESS = 6;static constexpr pls::cs::Int32 ACTSCORE_RECEIVE_BALL = 7;static constexpr pls::cs::Int32 ACTSCORE_RE_TACLE = 8;static constexpr pls::cs::Int32 ACTSCORE_RE_TACLE_SLD = 9;static constexpr pls::cs::Int32 ACTSCORE_BALL_RELEASE = 10;static constexpr pls::cs::Int32 ACTSCORE_TACLE = 11;static constexpr pls::cs::Int32 ACTSCORE_TACLE_SLD = 12;static constexpr pls::cs::Int32 ACTSCORE_BALL_GET = 13;static constexpr pls::cs::Int32 ACTSCORE_HEAD = 14;static constexpr pls::cs::Int32 ACTSCORE_GK_SAVE = 15;static constexpr pls::cs::Int32 ACTSCORE_GK_SCORE0 = 16;static constexpr pls::cs::Int32 ACTSCORE_END = 17;static constexpr pls::cs::Int32 AURAID_SHOOT = 0;static constexpr pls::cs::Int32 AURAID_PATH = 1;static constexpr pls::cs::Int32 AURAID_SPEED = 2;static constexpr pls::cs::Int32 AURAID_PHY_OFF = 3;static constexpr pls::cs::Int32 AURAID_PHY_OFF_HITRATE = 4;static constexpr pls::cs::Int32 AURAID_PHY_DEF = 5;static constexpr pls::cs::Int32 AURAID_PHY_DEF_HITRATE = 6;static constexpr pls::cs::Int32 AURAID_GK = 7;static constexpr pls::cs::Int32 AURAID_RECEIVEPOS = 8;static constexpr pls::cs::Int32 AURAID_DOWNTIME = 9;static constexpr pls::cs::Int32 AURA_MAX = 10000;static constexpr pls::cs::Int32 AURA_ADD_MIN = 50;static constexpr pls::cs::Int32 AURA_ADD_MAX = 200;static constexpr pls::cs::Int32 AURA_PROGRESSTIME = 50;static constexpr pls::cs::Int32 AURA_ADD_DOWN = 500;static constexpr pls::cs::Int32 AURA_ADD_DOWN_MIN = 300;static constexpr pls::cs::Int32 AURA_ADD_DOWN_MAX = 600;static constexpr pls::cs::Int32 AURA_TIME = 160;static constexpr pls::cs::Int32 TID_KICK = 0;static constexpr pls::cs::Int32 TID_SPD = 1;static constexpr pls::cs::Int32 TID_TEQ = 2;static constexpr pls::cs::Int32 TID_BODY = 3;static constexpr pls::cs::Int32 TID_KEEPER = 4;static constexpr pls::cs::Int32 TID_END = 5;static constexpr pls::cs::Int32 TRAINING_TUP_MIN = 4000;static constexpr pls::cs::Int32 POSITIONID_GK = 0;static constexpr pls::cs::Int32 POSITIONID_DF = 1;static constexpr pls::cs::Int32 POSITIONID_MF = 2;static constexpr pls::cs::Int32 POSITIONID_FW = 3;static constexpr pls::cs::Int32 LV_MIN = 0;static constexpr pls::cs::Int32 LV_MAX = 30;static constexpr pls::cs::Int32 BONUS_R_ROOT = 0;static constexpr pls::cs::Int32 BONUS_R_POINT = 1;static constexpr pls::cs::Int32 CPU_OFF = 22;static constexpr pls::cs::Int32 EMPLOY_MAX = 30;static constexpr pls::cs::Int32 TAREA_EXP_BONUS = 4;static constexpr pls::cs::Int32 PARAMID_SPEED = 0;static constexpr pls::cs::Int32 PARAMID_PASS = 1;static constexpr pls::cs::Int32 PARAMID_THROUHPASS = 2;static constexpr pls::cs::Int32 PARAMID_LONGPASS = 3;static constexpr pls::cs::Int32 PARAMID_SHOOT = 4;static constexpr pls::cs::Int32 PARAMID_VOY = 5;static constexpr pls::cs::Int32 PARAMID_HSHOOTURR = 6;static constexpr pls::cs::Int32 PARAMID_CHARGE_BODY = 7;static constexpr pls::cs::Int32 PARAMID_CHARGE_SLD = 8;static constexpr pls::cs::Int32 PARAMID_PHYSICAL = 9;static constexpr pls::cs::Int32 PARAMID_CATCH = 10;static constexpr pls::cs::Int32 PARAMID_KEEPERJAMP = 11;static constexpr pls::cs::Int32 PARAMID_SLIDINGRATE = 12;static constexpr pls::cs::Int32 PARAMID_JAMPDIS = 13;static constexpr pls::cs::Int32 PARAMID_JAMPDISSTOP = 14;static constexpr pls::cs::Int32 PARAMID_SHOOTTRAP = 15;static constexpr pls::cs::Single W_BALLHAVETIME = 0.3f;static constexpr pls::cs::Single W_PHYSICALHP = 0.7f;static constexpr pls::cs::Single W_CATCH = 0.4f;static constexpr pls::cs::Single W_V_LEN = 0.5f;static constexpr pls::cs::Single W_FRONT = 0.1f;static constexpr pls::cs::Int32 GPPBAR_DIV = 500;static constexpr pls::cs::Int32 GPPBAR_RATE = 70;static constexpr pls::cs::Int32 LVUP_RATE = 80;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Int32>& ACTSCORE_SCORE();

static pls::cs::Ref<main::AppData>& apdat_();

static pls::cs::Array<pls::cs::Single>& AURA_RATE();

static pls::cs::Array<pls::cs::String>& CATEGORY_STR();

static pls::cs::Int32& CHARGE_RATE_BODY();

static pls::cs::Int32& CHARGEDAMAGE_BODY_MAX();

static pls::cs::Int32& CHARGEDAMAGE_BODY_MIN();

static pls::cs::Int32& CHARGEDAMAGE_SLIDING_MAX();

static pls::cs::Int32& CHARGEDAMAGE_SLIDING_MIN();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& DEFAULT_DATA();

static pls::cs::Array<pls::cs::Int32>& eva_position();

static pls::cs::Int32& HSHOOT_URR_MAX();

static pls::cs::Int32& HSHOOT_URR_MIN();

static pls::cs::Single& JAMPDIS_MAX();

static pls::cs::Single& JAMPDIS_MIN();

static pls::cs::Single& JAMPDISTOP_MAX();

static pls::cs::Single& JAMPDISTOP_MIN();

static pls::cs::Single& KEEPERJAMP_MAX();

static pls::cs::Single& KEEPERJAMP_MIN();

static pls::cs::Single& LONGPASSSPEED_MAX();

static pls::cs::Single& LONGPASSSPEED_MIN();

static pls::cs::Array<pls::cs::Int32>& PARAM_EVA();

static pls::cs::Array<pls::cs::String>& PARAM_NAME();

static pls::cs::Array<pls::cs::Array<pls::cs::Single>>& PARAM_RATE();

static pls::cs::Single& PASSSPEED_MAX();

static pls::cs::Single& PASSSPEED_MIN();

static pls::cs::Single& PASSSPEED_THROUH_MAX();

static pls::cs::Single& PASSSPEED_THROUH_MIN();

static pls::cs::Int32& PHYSICALHP_MAX();

static pls::cs::Int32& PHYSICALHP_MIN();

static pls::cs::Array<pls::cs::Array<pls::cs::Single>>& POSIEVA_RATE();

static pls::cs::Array<pls::cs::String>& POSITION_NAME();

static pls::cs::Single& SHOOTMAX_MAX();

static pls::cs::Single& SHOOTMAX_MIN();

static pls::cs::Single& SHOOTMIN_MAX();

static pls::cs::Single& SHOOTMIN_MIN();

static pls::cs::Int32& SLIDING_RATE_MAX();

static pls::cs::Int32& SLIDING_RATE_MIN();

static pls::cs::Single& SLIDING_SPEED();

static pls::cs::Single& SPEEDMAX_MAX();

static pls::cs::Single& SPEEDMAX_MIN();

static pls::cs::Single& SPEEDMIN_MAX();

static pls::cs::Single& SPEEDMIN_MIN();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& TRAINING_TUP_GRAPH();

static pls::cs::Single& TRAPBALL_MAX();

static pls::cs::Single& TRAPBALL_MIN();

static pls::cs::Ref<game::UserData>& udat_();

static pls::cs::Single& V0YMAX_MAX();

static pls::cs::Single& V0YMAX_MIN();

static pls::cs::Single& V0YMIN_MAX();

static pls::cs::Single& V0YMIN_MIN();

static void create_init(pls::cs::Ref<PlayerData> self);

static void create_init(pls::cs::Ref<PlayerData> self,pls::cs::String src);

static pls::cs::Ref<PlayerData> create();

static pls::cs::Ref<PlayerData> create(pls::cs::String src);

void Init();

void Load(pls::cs::String src);

void NewGame();

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

void SetGameParamData(pls::cs::Array<pls::cs::Int32> paramPhysical);

void SetGameData(pls::cs::Ref<game::Player> player);

static pls::cs::Single GetSpeed(pls::cs::Ref<game::Player> player,pls::cs::Int32 eva);

static pls::cs::Single GetPassSpeed(pls::cs::Ref<game::Player> player);

static pls::cs::Single GetThroughPassSpeed(pls::cs::Ref<game::Player> player);

static pls::cs::Single GetLongPassSpeed(pls::cs::Ref<game::Player> player);

static pls::cs::Single GetClearSpeed(pls::cs::Ref<game::Player> player);

static pls::cs::Single GetShootSpeed(pls::cs::Ref<game::Player> player,pls::cs::Int32 eva);

static pls::cs::Single GetShootV0y(pls::cs::Ref<game::Player> player,pls::cs::Int32 eva);

static pls::cs::Int32 GetHeadShootUpRadRate(pls::cs::Ref<game::Player> player);

static pls::cs::Int32 GetChargeDamage(pls::cs::Ref<game::Player> player,bool flg_sliding);

static pls::cs::Int32 GetPhysicalHpMax(pls::cs::Ref<game::Player> player);

static pls::cs::Int32 GetBallShedRate(pls::cs::Ref<game::Player> dribbler_player,pls::cs::Ref<game::Player> charge_player);

static pls::cs::Int32 GetPlayerBodyPoseEva(pls::cs::Ref<game::Player> player,pls::cs::Int32 max_ballHaveTime);

static pls::cs::Single GetTrapBallV(pls::cs::Ref<game::Player> player);

static pls::cs::Int32 GetCatchProc(pls::cs::Ref<game::Player> player,pls::cs::Single v_len,bool front);

static pls::cs::Single GetKeeperJampMax(pls::cs::Ref<game::Player> player);

static pls::cs::Int32 GetSlidingRate(pls::cs::Ref<game::Player> player);

static pls::cs::Single GetHeadJampDis(pls::cs::Ref<game::Player> player);

static pls::cs::Single GetHeadJampDisTop(pls::cs::Ref<game::Player> player);

static pls::cs::Int32 GetParamEva(pls::cs::Int32 param);

static pls::cs::Int32 GetNextLvUpExp(pls::cs::Int32 nowLv);

void SetActScore(pls::cs::Int32 actscore_id);

static pls::cs::Single AuraUpdate(pls::cs::Ref<game::Player> player,pls::cs::Single value,pls::cs::Int32 auraActId);

static pls::cs::Int32 GetPhyParamBarW(pls::cs::Int32 param,pls::cs::Int32 BAR_W_MAX);

static pls::cs::Int32 GetPositionEva(pls::cs::Int32 positionId,pls::cs::Array<pls::cs::Int32> phyParam);

static pls::cs::Int32 GetPositionRank(pls::cs::Int32 positionId,pls::cs::Ref<PlayerData> p_data);

static pls::cs::Int32 GetMostEvaPosition(pls::cs::Array<pls::cs::Int32> phyParam);

void UpdatePhysicalParam();

void SetTrainingAddParam(pls::cs::Array<pls::cs::Int32> trainingAddEva,pls::cs::Array<pls::cs::Int32> var_out);

void SetLv(pls::cs::Int32 lv);

void LvUp();

void AddExp(pls::cs::Int32 add_exp,bool addLvUpPopUp);

void StockExp(pls::cs::Int32 addStockExp);

pls::cs::Int32 UpdateStockExp();

void AddPhysicalParam(pls::cs::Int32 eva,pls::cs::Int32 TID);

void AddPhysicalParam(pls::cs::Array<pls::cs::Int32> add_eva);

pls::cs::Int32 GetSallay();

void AddAuraPoint(pls::cs::Int32 add_point,bool isSoccerForm);

void Update_aura(pls::cs::Ref<game::Player> player);

void Start_aura(pls::cs::Ref<game::Player> player);

void AddPopular(pls::cs::Int32 add_popular);

static void Employ(pls::cs::Int32 pDataId);

static void Dismissal(pls::cs::Int32 pDataId);

static bool IsExistNew();

static void RemoveNew();

bool IsNew();
};
} // namespace data
}
