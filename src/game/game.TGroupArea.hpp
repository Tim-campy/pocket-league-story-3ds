// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct TGroupArea : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("game.TGroupArea", TGroupArea, pls::cs::Object)
pls::cs::Ref<main::AppData> apdat_{};
pls::cs::Ref<UserData> udat_{};
pls::cs::Int32 id_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> centerPos_{};
pls::cs::Single coatW_{};
pls::cs::Single coatH_{};
pls::cs::Ref<TArea> tArea_{};
pls::cs::Ref<generated::java::util::Vector> tPlayerList_{};
pls::cs::Ref<generated::java::util::Vector> tBallList_{};
pls::cs::Int32 state_{};
pls::cs::Int32 stateCnt_{};
pls::cs::Ref<generated::java::util::Vector> older_vec{};
pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> traPos_{};
pls::cs::Int32 ballIndex_{};
pls::cs::Int32 trainingWait_{};
pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> filed_gpos{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> filed_cpos{};
pls::cs::Array<pls::cs::Int32> cx{};
pls::cs::Array<pls::cs::Int32> cy{};
pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> goal_gpos{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> goal_cpos{};
pls::cs::Array<pls::cs::Int32> temp_olderVecId_{};
pls::cs::Array<pls::cs::Int32> temp_tPlayerListId_{};
pls::cs::Array<pls::cs::Int32> temp_tBallListId_{};
static constexpr pls::cs::Int32 STATE_NEW_STANDBY = 10;static constexpr pls::cs::Int32 STATE_NEW_GATHER = 11;static constexpr pls::cs::Int32 STATE_NEW_MAIN = 12;static constexpr pls::cs::Int32 STATE_NEW_TRAINING_STOP = 13;static constexpr pls::cs::Int32 STATE_NEW_TRAINING_CHANGE = 14;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Int32>& camera_pos();

static void create_init(pls::cs::Ref<TGroupArea> self,pls::cs::Int32 id,pls::cs::Ref<TArea> tArea);

static pls::cs::Ref<TGroupArea> create(pls::cs::Int32 id,pls::cs::Ref<TArea> tArea);

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream,pls::cs::Ref<TArea> tArea);

void Deserialize2();

void Init();

void Update();

void Draw_obj(pls::cs::Ref<pls::kairo::Graphics> g);

void ChangeState(pls::cs::Int32 next_state);

void SetCoatData();

void SetPosData();

pls::cs::Ref<TBall> GetBall(pls::cs::Ref<TPlayer> player,pls::cs::Int32 type);

void SetPlayerGatherPos();

static pls::cs::Int32 GetAreaMaxNum(pls::cs::Int32 trainingMode);
};
} // namespace game
}
