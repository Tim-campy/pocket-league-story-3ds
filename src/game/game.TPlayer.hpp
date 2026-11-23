// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game.Player.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct TPlayer : Player {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(Player,
    {"M:game.Player.Script", "M:game.TPlayer.Script"});
PLS_MANAGED_CLASS("game.TPlayer", TPlayer, Player)
pls::cs::Ref<TGroupArea> tGroupArea_{};
pls::cs::Array<pls::cs::Int32> trainingId_{};
pls::cs::Array<pls::cs::Int32> oldTrainingId_{};
pls::cs::Int32 useTenantCnt_{};
pls::cs::Int32 trainingPriority_{};
pls::cs::Int32 dcorn{};
pls::cs::Int32 dpoint{};
bool Script() override;
static constexpr pls::cs::Int32 SCR_MOVE = 0;static constexpr pls::cs::Int32 SCR_WAIT = 1;static constexpr pls::cs::Int32 SCR_CHANGE_STATE = 2;static constexpr pls::cs::Int32 SCR_CHANGE_SEB = 3;static constexpr pls::cs::Int32 SCR_CHANGE_DIRECT = 4;static constexpr pls::cs::Int32 SCR_FLAG = 5;static constexpr pls::cs::Int32 SCR_FLAG_ON = 6;static constexpr pls::cs::Int32 SCR_FLAG_OFF = 7;static constexpr pls::cs::Int32 SCR_KICK = 8;static constexpr pls::cs::Int32 SCR_SAVING = 9;static constexpr pls::cs::Int32 SCR_SLIDING = 10;static constexpr pls::cs::Int32 SCR_HEAD = 11;static constexpr pls::cs::Int32 SCR_VOLLEY = 12;static constexpr pls::cs::Int32 SCR_THROWIN = 13;static constexpr pls::cs::Int32 SCR_GOAL_GLAD = 14;static constexpr pls::cs::Int32 SCR_GOAL_SAD = 15;static constexpr pls::cs::Int32 SCR_DOWN = 16;static constexpr pls::cs::Int32 SCR_TRA_MOVEGOALPOS = 17;static constexpr pls::cs::Int32 SCR_TRA_MOVEGOALPOS_SET = 18;static constexpr pls::cs::Int32 SCR_TRA_BALLPASS = 19;static constexpr pls::cs::Int32 SCR_TRA_BALLWAIT = 20;static constexpr pls::cs::Int32 SCR_TRA_BALLCHASE = 21;static constexpr pls::cs::Int32 SCR_TRA_LIFTING = 22;static constexpr pls::cs::Int32 SCR_TRA_LIFTING_BALLCHASE = 23;static constexpr pls::cs::Int32 SCR_TRA_DRIBBLE = 24;static constexpr pls::cs::Int32 SCR_TRA_DRIBBLE_OLDER = 25;static constexpr pls::cs::Int32 SCR_TRA_DRIBBLE_OLDERREGIST = 26;static constexpr pls::cs::Int32 SCR_TRA_SHOOT = 27;static constexpr pls::cs::Int32 SCR_TRA_SHOOT_OLDER = 28;static constexpr pls::cs::Int32 SCR_TRA_SHOOT_OLDERREGIST = 29;static constexpr pls::cs::Int32 SCR_TRA_SHOOT_GK = 30;static constexpr pls::cs::Int32 SCR_TRA_SHOOT_SAVING = 31;static constexpr pls::cs::Int32 SCR_TRA_RUNNING_REGIST = 32;static constexpr pls::cs::Int32 SCR_TRA_RUNNING = 33;static constexpr pls::cs::Int32 SCR_TRA_GET_TPOINT = 34;static constexpr pls::cs::Int32 SCR_TRA_TENANT_IN = 35;static constexpr pls::cs::Int32 SCR_TRA_SVISOR_ACT = 36;static constexpr pls::cs::Int32 TID_ID = 0;static constexpr pls::cs::Int32 TID_AREA = 1;static constexpr pls::cs::Int32 TID_ROOT = 2;static constexpr pls::cs::Int32 TID_GROUPAREA = 3;static constexpr pls::cs::Int32 TID_GROUP = 4;static constexpr pls::cs::Int32 TID_MAX = 5;static constexpr pls::cs::Int32 LIFT_LEFTKICK = 0;static constexpr pls::cs::Int32 LIFT_RIGHTKICK = 1;static constexpr pls::cs::Int32 LIFT_HEAD = 2;static constexpr pls::cs::Int32 LIFT_END = 3;static constexpr pls::cs::Int32 LIFT_FAIL = -1;static constexpr pls::cs::Single LIFT_AY = -0.45f;static constexpr pls::cs::Int32 CORN_NUM = 4;static constexpr pls::cs::Single CORN_LEN_X = 20.0f;static constexpr pls::cs::Single CORN_LEN_Z = 40.0f;static constexpr pls::cs::Single GOAL_W = 80.0f;static constexpr pls::cs::Single GOAL_H = 24.0f;static constexpr pls::cs::Int32 TRAININT_PRIORITY_STAMEM = 40;static constexpr pls::cs::Int32 TRAININT_PRIORITY_SUB = 100;static constexpr pls::cs::Int32 GB_TYPE_PASS = 0;static constexpr pls::cs::Int32 GB_TYPE_PASS_WAIT = 1;static constexpr pls::cs::Int32 GB_TYPE_PASS_FAIL = 2;static constexpr pls::cs::Int32 GB_TYPE_LIFTING = 3;static constexpr pls::cs::Int32 GB_TYPE_LIFTING_FAIL = 4;static constexpr pls::cs::Int32 GB_TYPE_DRIBBLE_END = 5;static constexpr pls::cs::Int32 GB_TYPE_DRIBBLE_OLDER = 6;static constexpr pls::cs::Int32 GB_TYPE_SHOOT = 7;static constexpr pls::cs::Int32 GB_TYPE_SHOOT_OLDER = 8;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Int32>& camera_pos_shadow();

static pls::cs::Array<pls::cs::Int32>& camera_pos_sliding();

static pls::cs::Array<pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>>& CORN_AROUND_POS();

static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& LIFTING_POS();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& LIFTING_TIME();

static pls::cs::Array<pls::cs::Int32>& TEMP_TPOINT_UP();

static void create_init(pls::cs::Ref<TPlayer> self,pls::cs::Int32 obj_type);

static pls::cs::Ref<TPlayer> create(pls::cs::Int32 obj_type);

void Init_training(pls::cs::Int32 pId,pls::cs::Int32 pDataId);

void SetTrainingId(pls::cs::Int32 rootId,pls::cs::Int32 areaId,pls::cs::Int32 groupAreaId,pls::cs::Int32 groupId);

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

void Deserialize2();

void AddCommandTrainigMoveGoalPos();

void AddCommandTrainigMoveGoalPosSet(pls::cs::Int32 x,pls::cs::Int32 z);

void AddCommandTrainingBallKick();

void AddCommandTrainingBallWait();

void AddCommandTrainingBallChase();

void AddCommandTenantIn();

void AddCommandSvisorAct();

void AddCommandLifting(pls::cs::Int32 lift_id);

void AddCommandLiftingBallChase();

void AddCommandDribble();

void AddCommandDribbleOlder();

void AddCommandDribbleOlderRegist();

void AddCommandShoot();

void AddCommandShootOlder();

void AddCommandShootOlderRegist();

void AddCommandShootGK();

void AddCommandTraSaving();

void AddCommandRunningRegist();

void AddCommandRunning(pls::cs::Int32 next_point);

void AddCommandGetTPoint();

void Update_trainings();

void Draw_training(pls::cs::Ref<pls::kairo::Graphics> g);

void Draw_svisor(pls::cs::Ref<pls::kairo::Graphics> g);

void CollisionSaving(pls::cs::Ref<TBall> tball);

void EndTrainingScript();

void StopTraining();
};
} // namespace game
}
