// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct Ball : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"M:game.Ball.GetToGoalLineTime(game.Player)", "M:game.Ball.GetToGoalLineTime(game.Player)"});
PLS_MANAGED_CLASS("game.Ball", Ball, pls::cs::Object)
pls::cs::Ref<main::AppData> apdat_{};
pls::cs::Ref<pls::kairo::Canvas> canvas_{};
pls::cs::Ref<UserData> udat_{};
pls::cs::Int32 teamId_{};
pls::cs::Int32 frame_{};
pls::cs::Int32 direct_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> pos_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> shadowPos_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> fallPos_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> receiverPos_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> lineOutPos_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> v_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a_{};
pls::cs::Array<pls::cs::Int32> address_{};
pls::cs::Array<pls::cs::Int32> screen_pos_{};
pls::cs::Array<pls::cs::Int32> screen_shadowPos_{};
pls::cs::Array<pls::cs::Int32> camera_pos_{};
pls::cs::Single v_len_{};
pls::cs::Int32 flag_{};
pls::cs::Int32 state_{};
pls::cs::Int32 stateCnt_{};
pls::cs::Ref<Player> owner_{};
pls::cs::Ref<Player> lastOwner_{};
pls::cs::Int32 receive_wait{};
pls::cs::Int32 boundNum_{};
pls::cs::Int32 chInGoal_{};
pls::cs::Int32 rotate_{};
pls::cs::Int32 frameNum_{};
pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> savePos_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> saveV_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> saveA_{};
pls::cs::Int32 savePosFrame_{};
pls::cs::Int32 fallTime_{};
pls::cs::Int32 targetPId{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> old_pos{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> temp_pos{};
pls::cs::Array<pls::cs::Int32> temp_spos{};
pls::cs::Single MIN_AY{};
pls::cs::Array<pls::cs::Int32> camera_pos_shadow{};
pls::cs::Array<pls::cs::Int32> camera_pos_dribble{};
pls::cs::Array<pls::cs::Int32> rand_cos{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> g1{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> shoot_goalPos{};
pls::cs::Array<pls::cs::Int32> headableIndex{};
virtual pls::cs::Int32 GetToGoalLineTime(pls::cs::Ref<Player> player);
static constexpr pls::cs::Int32 FLG_NOTDISP = 1;static constexpr pls::cs::Int32 FLG_ANIME = 2;static constexpr pls::cs::Int32 FLG_HAVEBALL = 4;static constexpr pls::cs::Int32 FLG_RECEIVABLE = 8;static constexpr pls::cs::Int32 FLG_JAMP = 16;static constexpr pls::cs::Int32 FLG_SHOOT = 32;static constexpr pls::cs::Int32 FLG_CENTERING = 64;static constexpr pls::cs::Single TEMP_R11 = 1.0f;static constexpr pls::cs::Single TEMP_R12 = 2.0f;static constexpr pls::cs::Single TEMP_R21 = 3.0f;static constexpr pls::cs::Single TEMP_R22 = 12.0f;static constexpr pls::cs::Int32 DRIBBLE_DIRECT_CYCLE = 16;static constexpr pls::cs::Int32 DRIBBLE_DIRECT_ROTATETIME_MIN = 8;static constexpr pls::cs::Int32 DRIBBLE_DIRECT_ROTATETIME_MAX = 2;static constexpr pls::cs::Int32 PASSMODE_ALLY = 0;static constexpr pls::cs::Int32 PASSMODE_SPACE = 1;static constexpr pls::cs::Int32 PASSMODE_CLEAR = 2;static constexpr pls::cs::Int32 PASSMODE_CENTERING = 3;static constexpr pls::cs::Int32 PASSMODE_CENTERINGAREA = 4;static constexpr pls::cs::Int32 PASSMODE_THROWIN = 5;static constexpr pls::cs::Single CLEAR_DISY = 60.0f;static constexpr pls::cs::Single PASS_DISY_MIN = 5.0f;static constexpr pls::cs::Single PASS_DISY_MAX = 30.0f;static constexpr pls::cs::Single PASS_GRAVITY_NORMAL = -0.6f;static constexpr pls::cs::Single PASS_GRAVITY_LONG = -0.25f;static constexpr pls::cs::Single PASS_GRAVITY_LONG_PASS = -0.35f;static constexpr pls::cs::Single PASS_GRAVITY_CLEAR = -0.1f;static constexpr pls::cs::Single PASS_GRAVITY_SHOOT = -0.1f;static constexpr pls::cs::Single PASS_DIS_RATE = 1.12f;static constexpr pls::cs::Single PASS_DIS_RATE_LONG = 1.27f;static constexpr pls::cs::Single CENTERING_DECRERATE = 0.2f;static constexpr pls::cs::Single CENTERING_HEIGHT = 68.0f;static constexpr pls::cs::Int32 CENTERING_TIME = 36;static constexpr pls::cs::Int32 SHOOTMODE_KICK = 0;static constexpr pls::cs::Int32 SHOOTMODE_HEAD = 1;static constexpr pls::cs::Single FRICTION_START_VX = 0.99f;static constexpr pls::cs::Single FRICTION_START_VZ = 0.99f;static constexpr pls::cs::Single FRICTION_END_VX = 0.93f;static constexpr pls::cs::Single FRICTION_END_VZ = 0.93f;static constexpr pls::cs::Int32 FRICTION_GROUND_TIME = 60;static constexpr pls::cs::Single FRICTION_AIR_VX = 0.995f;static constexpr pls::cs::Single FRICTION_AIR_VY = 0.995f;static constexpr pls::cs::Single FRICTION_AIR_VZ = 0.995f;static constexpr pls::cs::Single FRICTION_AIR_VX2 = 0.97f;static constexpr pls::cs::Single FRICTION_AIR_VZ2 = 0.97f;static constexpr pls::cs::Single FRICTION_AIR_VX_LONG = 0.96f;static constexpr pls::cs::Single FRICTION_AIR_VZ_LONG = 0.96f;static constexpr pls::cs::Int32 FRICTION_AIR_F2TIME = 100;static constexpr pls::cs::Int32 FRICTION_AIR_F2TIME_LONG = 100;static constexpr pls::cs::Int32 SAVENUM_MAX = 300;static constexpr pls::cs::Int32 SAVEPOS_RATE = 4;static constexpr pls::cs::Int32 TARGETPID_NONE = -1;static constexpr pls::cs::Single TRAP_ABLE_H = 20.0f;static constexpr pls::cs::Single DISPOUT_LEN = 80.0f;static constexpr pls::cs::Single CENTERING_AREA_LEFT = -128.57143f;static constexpr pls::cs::Single CENTERING_AREA_RIGHT = 128.57143f;static constexpr pls::cs::Single CENTERING_AREA_G2_TOP = 846.0f;static constexpr pls::cs::Single CENTERING_AREA_G2_BOTTOM = 720.0f;static constexpr pls::cs::Single CENTERING_AREA_G1_TOP = -720.0f;static constexpr pls::cs::Single CENTERING_AREA_G1_BOTTOM = -846.0f;static constexpr pls::cs::Single HEADING_H_MAX = 40.0f;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Single>>>& DRIBBLE_DIRECT_DIS();

static pls::cs::Int32& RECEIVE_WAIT_MIN();

static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>& SAVING_OFF();

static pls::cs::Int32& SOUND_HEAD();

static pls::cs::Array<pls::cs::Int32>& SOUND_KICK();

static pls::cs::Array<pls::cs::String>& SOUND_NAME();

static pls::cs::Array<pls::cs::Int32>& SOUND_PASS();

static pls::cs::Int32& SOUND_RANDOM();

static pls::cs::Array<pls::cs::Int32>& SOUND_SHOOT();

static pls::cs::Int32& SOUND_SHOOT_HEAD();

static pls::cs::Int32& SOUND_SHOOT_KICK();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& THROWIN_OFF();

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& vec_GK();

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& vec1();

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& vec2();

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& vec3();

static void create_init(pls::cs::Ref<Ball> self);

static pls::cs::Ref<Ball> create();

void Init();

bool Update();

void ChGravity();

void ChangeState(pls::cs::Int32 next_state);

void Draw(pls::cs::Ref<pls::kairo::Graphics> g);

void ReceiveBall(pls::cs::Ref<Player> player,bool coatOut_ok);

void ReceiveBall(pls::cs::Ref<Player> player);

void ReleaseBall(pls::cs::Ref<Player> player);

void SetPassData(pls::cs::Ref<Player> player,pls::cs::Int32 pass_mode,pls::cs::Int32 data1,pls::cs::Int32 data2,bool jamp);

void SetShoot(pls::cs::Ref<Player> player,pls::cs::Int32 shoot_mode);

void SetHeadingData(pls::cs::Ref<Player> player);

bool ChBallDirectHere(pls::cs::Ref<Player> player);

void SetSavePos(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> init_pos,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> init_v,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> init_a);

pls::cs::Int32 GetHeadIndexFormSavePos2(pls::cs::Int32 headingStartFrame,pls::cs::Single headDisTop);

void SetStop();
};
} // namespace game
}
