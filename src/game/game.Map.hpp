// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace game {

struct Map : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("game.Map", Map, pls::cs::Object)
    pls::cs::Ref<main::AppData> apdat_{};
    pls::cs::Ref<UserData> udat_{};
    pls::cs::Int32 stadiumId_{};
    pls::cs::Array<pls::cs::Ref<MapObject>> mapObjects_{};
    pls::cs::Array<pls::cs::Int32> screen_pos{};
    pls::cs::Array<pls::cs::Int32> camera_pos{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> c_poss{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> GOAL1_CAMERA_POS{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> GOAL2_CAMERA_POS{};
    pls::cs::Int32 temp_frame{};
    pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> cameraRect_gpos{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> cameraRect_spos{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> cameraRectAddress{};
    pls::cs::Array<pls::cs::Int32> center_spos{};
    pls::cs::Array<pls::cs::Int32> mapchip_off{};
    pls::cs::Array<pls::cs::Int32> hit_rect{};
    pls::cs::Int32 goalBackNetNum_{};
    static constexpr pls::cs::Int32 STEP_W = 60;
    static constexpr pls::cs::Int32 STEP_H = 30;
    static constexpr pls::cs::Int32 MAP_GROUND_GROUND = 0;
    static constexpr pls::cs::Int32 MAP_GROUND_SNOW = 1;
    static constexpr pls::cs::Int32 MAP_GROUND_DESERT = 2;
    static constexpr pls::cs::Int32 MAP_GROUND_GRAVEL = 3;
    static constexpr pls::cs::Int32 BAR_H = 21;
    static constexpr pls::cs::Int32 LDEPTH = 1;
    static constexpr pls::cs::Int32 CCIRCLE_DEPTH = 0;
    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Int32>& COAT_BASEPOINT();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_CENTER();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_CONNER();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_GOAL1();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_GOAL1_ADDRESS();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>&
    COAT_GOAL1_GLOBALPOS();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>&
    COAT_GOAL1_GPOS_CAREA();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_GOAL1_IN();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_GOAL1_IN_ADDRESS();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>&
    COAT_GOAL1_IN_GLOBALPOS();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_GOAL2();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_GOAL2_ADDRESS();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>&
    COAT_GOAL2_GLOBALPOS();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>&
    COAT_GOAL2_GPOS_CAREA();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_GOAL2_IN();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COAT_GOAL2_IN_ADDRESS();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>&
    COAT_GOAL2_IN_GLOBALPOS();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& DIRECT_VEC();

    static pls::cs::Array<pls::cs::String>& GOAL_PARTS_NAME();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GOAL1();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& GOAL1_GLOBAL_POS();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GOAL1_PARTS_GRA();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GOAL1_PARTS_POS();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GOAL2();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& GOAL2_GLOBAL_POS();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GOAL2_PARTS_GRA();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& GOAL2_PARTS_POS();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& MAP_CONNER();

    static pls::cs::Int32& MAP_GROUND();

    static pls::cs::Array<pls::cs::String>& MAP_GROUND_NAME();

    static pls::cs::Int32& MAPCHIP_COAT_HNUM();

    static pls::cs::Int32& MAPCHIP_COAT_WNUM();

    static pls::cs::Int32& MAPCHIP_FIELD_HNUM();

    static pls::cs::Int32& MAPCHIP_FIELD_WNUM();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& MAPCHIP_IMG();

    static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>& MAPCHIP_SPOS();

    static pls::cs::Array<pls::cs::Ref<data::MapchipMatch>>& mapchipGrounds();

    static pls::cs::Array<pls::cs::Int32>& old_camera_pos();

    static void create_init(pls::cs::Ref<Map> self);

    static pls::cs::Ref<Map> create();

    void Init();

    static void Load2();

    void SetCoatLine();

    void SetDefaultCoatEva();

    static void CreateMap(pls::cs::Int32 stadiumId, pls::cs::String fileName);

    void LoadMap(pls::cs::Int32 stadiumId, pls::cs::Array<std::uint8_t> source);

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g, bool offscreen);

    void Draw_coat(pls::cs::Ref<pls::kairo::Graphics> g, bool offscreen);

    void Draw_lineAndGoal(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_copyArea(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Array<pls::cs::Int32> draw_rect);

    void Draw_coatLine(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 address_x,
                       pls::cs::Int32 address_y, pls::cs::Int32 dx, pls::cs::Int32 dy);

    void Draw_miniMap(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_goal(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_goalPoint(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_mapobject(pls::cs::Ref<pls::kairo::Graphics> g);

    pls::cs::Int32 GetGoalPartsDepth(pls::cs::Int32 parts_id);
};
} // namespace game
}
