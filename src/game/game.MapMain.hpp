// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace game {

struct MapMain : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("game.MapMain", MapMain, pls::cs::Object)
pls::cs::Ref<main::AppData> apdat_{};
pls::cs::Ref<UserData> udat_{};
pls::cs::Array<pls::cs::Ref<MapObject>> mapObjects_{};
pls::cs::Array<pls::cs::Int32> camera_pos{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> c_poss{};
pls::cs::Int32 temp_frame{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> TRAIN_COAT_CPOS{};
pls::cs::Array<pls::cs::Int32> hit_rect{};
static constexpr pls::cs::Int32 STEP_W = 60;static constexpr pls::cs::Int32 STEP_H = 30;static constexpr pls::cs::Int32 MAID_COAT1 = 0;static constexpr pls::cs::Int32 MAID_COAT2 = 1;static constexpr pls::cs::Int32 MAID_COAT3 = 2;static constexpr pls::cs::Int32 MAID_COAT4 = 3;static constexpr pls::cs::Int32 MAID_BUS_GO = 4;static constexpr pls::cs::Int32 MAID_BUS_STOP = 5;static constexpr pls::cs::Int32 MAID_SVISOR_P1 = 6;static constexpr pls::cs::Int32 MAID_SVISOR_P2 = 7;static constexpr pls::cs::Int32 MAID_END = 8;static constexpr pls::cs::Int32 MP_BUSGO = 0;static constexpr pls::cs::Int32 MP_BUSSTOP = 1;static constexpr pls::cs::Int32 MP_BUSSTOP2 = 2;static constexpr pls::cs::Int32 MP_BUSSTOP_C = 3;static constexpr pls::cs::Int32 MP_BUSSTOP_C2 = 4;static constexpr pls::cs::Int32 MP_BUSSTOP_R = 5;static constexpr pls::cs::Int32 MP_BUSSTOP_L = 6;static constexpr pls::cs::Int32 MP_TENANT = 7;static constexpr pls::cs::Int32 MP_SVISOR_P1 = 8;static constexpr pls::cs::Int32 MP_SVISOR_P2 = 9;static constexpr pls::cs::Int32 MP_MAX = 10;static constexpr pls::cs::Int32 MAP_GROUND_NORMAL = 0;static constexpr pls::cs::Int32 MAP_GROUND_GROUND = 1;static constexpr pls::cs::Int32 MAP_GROUND_SNOW = 2;static constexpr pls::cs::Int32 MAP_GROUND_GRAVEL = 3;static constexpr pls::cs::Int32 MAP_GROUND_GRASS2 = 4;static constexpr pls::cs::Int32 FENCE_NOTHING = -1;static constexpr pls::cs::Int32 FENCE_LOAD_OFF = 5;
static void ensure_initialized();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_BASEPOINT();

static pls::cs::Array<pls::cs::Int32>& DEFAULT_INIT_CAMERA_POS();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& FENCE_DATA();

static pls::cs::Array<pls::cs::String>& GOAL_PARTS_NAME();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GOAL1_PARTS_GRA();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GOAL1_PARTS_POS();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GOAL2_PARTS_GRA();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GOAL2_PARTS_POS();

static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& MA_POS();

static pls::cs::Int32& MAP_GROUND();

static pls::cs::Array<pls::cs::String>& MAP_GROUND_NAME();

static pls::cs::Ref<data::MapchipMain>& mapchip_fenceGrass();

static pls::cs::Int32& MAPCHIP_FIELD_HNUM();

static pls::cs::Int32& MAPCHIP_FIELD_WNUM();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& MAPCHIP_IMG();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& MAPCHIP_IMG_SAVE();

static pls::cs::Ref<data::MapchipMain>& mapchip_outMap();

static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>& MAPCHIP_SPOS();

static pls::cs::Ref<data::MapchipMain>& mapchip_tree();

static pls::cs::Ref<data::MapchipMain>& mapchip_vacant();

static pls::cs::Array<pls::cs::Ref<data::MapchipMain>>& mapchipGrounds();

static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& MOVE_POINT();

static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& SET_TMCHP_OFF();

static pls::cs::Array<pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>>& TRAIN_COAT_BLOCK();

static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& TRAIN_COAT_GPOS();

static pls::cs::Single& TRAIN_COAT_H();

static pls::cs::Single& TRAIN_COAT_W();

static void create_init(pls::cs::Ref<MapMain> self);

static pls::cs::Ref<MapMain> create();

void Init();

static void CreateMap();

void LoadMap(pls::cs::Array<std::uint8_t> source);

static void Load2();

void Draw(pls::cs::Ref<pls::kairo::Graphics> g,bool offscreen);

void Draw_coat(pls::cs::Ref<pls::kairo::Graphics> g,bool offscreen);

void Draw_copyArea(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Array<pls::cs::Int32> draw_rect);

void Draw_trainingCoat(pls::cs::Ref<pls::kairo::Graphics> g);

void UpdateTenantMapcip();

void Draw_tenantAround(pls::cs::Ref<pls::kairo::Graphics> g);

void UpdateMapGround();

void UpdateTrainingCoatNum();
};
} // namespace game
}
