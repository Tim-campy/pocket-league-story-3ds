// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game.Ball.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct TBall : Ball {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(Ball,
    {"M:game.Ball.GetToGoalLineTime(game.Player)", "M:game.TBall.GetToGoalLineTime(game.Player)"});
PLS_MANAGED_CLASS("game.TBall", TBall, Ball)
pls::cs::Int32 tId_{};
pls::cs::Ref<TGroupArea> tGroupArea_{};
pls::cs::Int32 ownerId_{};
pls::cs::Int32 lastOwnerId_{};
pls::cs::Ref<TPlayer> t_owner_{};
pls::cs::Ref<TPlayer> t_lastOwner_{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> g1_TBall{};
pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> shoot_goalPos_TBall{};
pls::cs::Int32 GetToGoalLineTime(pls::cs::Ref<Player> player) override;

static void ensure_initialized();

static pls::cs::Array<pls::cs::Int32>& camera_pos_dribble_2();

static pls::cs::Array<pls::cs::Int32>& camera_pos_shadow_2();

static void create_init(pls::cs::Ref<TBall> self,pls::cs::Int32 tId);

static pls::cs::Ref<TBall> create(pls::cs::Int32 tId);

void Init_training(pls::cs::Ref<TGroupArea> tGroupArea);

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

void Deserialize2();

void Update_training();

void Draw_training(pls::cs::Ref<pls::kairo::Graphics> g);

void ReceiveBall(pls::cs::Ref<TPlayer> player);

void ReleaseBall(pls::cs::Ref<TPlayer> player);

void SetPassDataTraining(pls::cs::Ref<TPlayer> player,pls::cs::Int32 pass_mode,bool jamp);

void SetShoot(pls::cs::Ref<Player> player,pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> goal_center);

bool ChBallDirectHere(pls::cs::Ref<TPlayer> tPlayer);
};
} // namespace game
}
