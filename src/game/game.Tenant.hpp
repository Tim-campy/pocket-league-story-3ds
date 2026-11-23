// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct Tenant : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("game.Tenant", Tenant, pls::cs::Object)
pls::cs::Ref<main::AppData> apdat_{};
pls::cs::Ref<UserData> udat_{};
pls::cs::Int32 id_{};
pls::cs::Array<pls::cs::Int32> address_{};
pls::cs::Int32 state_{};
pls::cs::Int32 stateCnt_{};
pls::cs::Int32 tenantDataId_{};
pls::cs::Int32 root_{};
pls::cs::Ref<generated::java::util::Vector> useTPlayers_{};
pls::cs::Array<pls::cs::Int32> useTPlayersId{};
pls::cs::Int32 draw_cnt{};
static constexpr pls::cs::Int32 STATE_VACANT = 0;static constexpr pls::cs::Int32 STATE_TENANT = 1;static constexpr pls::cs::Int32 STATE_BUILDING = 2;static constexpr pls::cs::Int32 STATE_DESTRUCT = 3;static constexpr pls::cs::Int32 STATE_STRENGH = 4;static constexpr pls::cs::Int32 USE_TPLAYER_MAX = 3;static constexpr pls::cs::Int32 USETENANT_BAR_W = 51;static constexpr pls::cs::Int32 USETENANT_BAR_H = 18;static constexpr pls::cs::Int32 DESTRUCT_TIME = 12;static constexpr pls::cs::Int32 DRAW_CNT = 4;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Int32>& camera_pos();

static pls::cs::Array<pls::cs::Int32>& USETENANT_TIME();

static void create_init(pls::cs::Ref<Tenant> self,pls::cs::Int32 id);

static pls::cs::Ref<Tenant> create(pls::cs::Int32 id);

void Init(pls::cs::Int32 root);

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream,pls::cs::Int32 index);

void Deserialize2();

void ChangeState(pls::cs::Int32 state);

void Update();

void Draw(pls::cs::Ref<pls::kairo::Graphics> g);

void Draw_tenantEffect(pls::cs::Ref<pls::kairo::Graphics> g);

void BuildTenant(pls::cs::Int32 tenantDataId);

void DestructTenant();

void StrenghTenant();

void OutUserTPlayers();
};
} // namespace game
}
