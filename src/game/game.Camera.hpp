// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace game {

struct Camera : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("game.Camera", Camera, pls::cs::Object)
    pls::cs::Ref<main::AppData> apdat_{};
    pls::cs::Ref<pls::kairo::Canvas> canvas_{};
    pls::cs::Ref<UserData> udat_{};
    pls::cs::Int32 mode_{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> v{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> a{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> cameraLimitSPos{};
    pls::cs::Int32 cursorCnt_{};
    pls::cs::Int32 subCursorCnt_{};
    pls::cs::Ref<TPlayer> subPlayer_{};
    pls::cs::Ref<TPlayer> subSvisor_{};
    pls::cs::Ref<Tenant> subTenant_{};
    pls::cs::Ref<TPlayer> old_subPlayer_{};
    pls::cs::Ref<TPlayer> old_subSvisor_{};
    pls::cs::Ref<Tenant> old_subTenant_{};
    pls::cs::Array<pls::cs::Int32> CURSOR_LIMIT_OFF{};
    bool flg_disp{};
    pls::cs::Int32 cnt_autoFocus{};
    pls::cs::Int32 TIME_AUTOFOCUS{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> limit_pos_lt{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> limit_pos_rb{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> limit_pos_base{};
    pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> chPos{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> camera_pos1{};
    pls::cs::Array<pls::cs::Int32> temp_cpos{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> CAMERA_RECT{};
    pls::cs::Int32 cursorPressCnt_{};
    static constexpr pls::cs::Int32 CAMERA_MODE_FREE = 0;
    static constexpr pls::cs::Int32 CAMERA_MODE_BALL = 1;
    static constexpr pls::cs::Int32 CAMERA_MODE_AUTO = 2;
    static constexpr pls::cs::Single MAP_GLOBAL_W = 900.0f;
    static constexpr pls::cs::Single MAP_GLOBAL_H = 1800.0f;
    static constexpr pls::cs::Single MAP_GLOBAL_LEFT = -450.0f;
    static constexpr pls::cs::Single MAP_GLOBAL_RIGHT = 450.0f;
    static constexpr pls::cs::Single MAP_GLOBAL_TOP = 900.0f;
    static constexpr pls::cs::Single MAP_GLOBAL_BOTTOM = -900.0f;
    static constexpr pls::cs::Int32 CURSOR_MAX = 80;
    static constexpr pls::cs::Int32 SUBCURSOR_MAX = 100;
    static void ensure_initialized();

    static pls::cs::Array<pls::cs::Int32>& camera_address();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& CAMERA_ADS_GPOS();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& CAMERA_BASE_GPOS();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& camera_goalGPos();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& camera_gpos();

    static bool& CAMERA_LIMIT();

    static pls::cs::Int32& CAMERA_R_W();

    static pls::cs::Array<pls::cs::Int32>& camera_spos();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& CAMERALIMIT_GPOS();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& ch_global_pos();

    static pls::cs::Array<pls::cs::Int32>& ch_screen_pos();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& COATADDRESS_POS();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& cursor_pos();

    static pls::cs::Int32& DRAW_CENTER_X();

    static pls::cs::Int32& DRAW_CENTER_Y();

    static pls::cs::Int32& DRAW_VIEW_H();

    static pls::cs::Int32& DRAW_VIEW_W();

    static pls::cs::Int32& DRAW_VIEW_X();

    static pls::cs::Int32& DRAW_VIEW_Y();

    static pls::cs::Int32& FLG_DISPHITRECT();

    static pls::cs::Ref<Camera>& instance();

    static pls::cs::Array<pls::cs::Int32>& MAP_SCREEN_BASE_POS();

    static pls::cs::Int32& MAP_SCREEN_BOTTOM();

    static pls::cs::Int32& MAP_SCREEN_H();

    static pls::cs::Int32& MAP_SCREEN_H1();

    static pls::cs::Int32& MAP_SCREEN_H2();

    static pls::cs::Int32& MAP_SCREEN_LEFT();

    static pls::cs::Int32& MAP_SCREEN_RIGHT();

    static pls::cs::Int32& MAP_SCREEN_TOP();

    static pls::cs::Int32& MAP_SCREEN_W();

    static pls::cs::Int32& MAP_SCREEN_W1();

    static pls::cs::Int32& MAP_SCREEN_W2();

    static pls::cs::Single& OFF_SX();

    static pls::cs::Single& OFF_SY();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& old_pos();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& pos();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& save_cursorPos();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& save_pos();

    static pls::cs::Array<pls::cs::Int32>& temp_address();

    static pls::cs::Array<pls::cs::Int32>& temp_c();

    static pls::cs::Array<pls::cs::Int32>& temp_cursorSPos();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& temp_gpos();

    static pls::cs::Array<pls::cs::Int32>& temp_s();

    static pls::cs::Array<pls::cs::Int32>& temp_screen_pos();

    static pls::cs::Array<pls::cs::Int32>& temp_spos();

    static pls::cs::Single& UPX_FROMX();

    static pls::cs::Single& UPX_FROMZ();

    static pls::cs::Single& UPZ_FROMX();

    static pls::cs::Single& UPZ_FROMZ();

    static void create_init(pls::cs::Ref<Camera> self);

    static pls::cs::Ref<Camera> create();

    static pls::cs::Ref<Camera> GetInstance();

    void SetMapMainBasePos();

    void SaveMapMainBasePos();

    static void SetScreenData();

    void Update_pos();

    static void
    ConvertGlobalToScreen(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> global_pos,
                          pls::cs::Array<pls::cs::Int32> screen_pos);

    static void
    ConvertScreenToCamera(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> screen_pos,
                          pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> camera_pos);

    static void ConvertScreenToCamera(pls::cs::Int32 sx, pls::cs::Int32 sy,
                                      pls::cs::Array<pls::cs::Int32> camera_pos);

    static void ConvertScreenToCameraVector3DIntArray(
        pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> screen_pos,
        pls::cs::Array<pls::cs::Int32> camera_pos);

    static void ConvertScreenToCameraIntArray(pls::cs::Array<pls::cs::Int32> screen_pos,
                                              pls::cs::Array<pls::cs::Int32> camera_pos);

    static void
    ConvertGlobalToCamera(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> global_pos,
                          pls::cs::Array<pls::cs::Int32> var_out);

    static void ConvertAddressToScreen(pls::cs::Int32 xi, pls::cs::Int32 yi,
                                       pls::cs::Array<pls::cs::Int32> screen_pos);

    static void
    ConvertAddressToGlobal(pls::cs::Int32 xi, pls::cs::Int32 yi,
                           pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> global_pos);

    static void
    ConvertGlobalToAddress(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> global_pos,
                           pls::cs::Array<pls::cs::Int32> out_address);

    static void
    ConvertGlobalToAddressMain(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> global_pos,
                               pls::cs::Array<pls::cs::Int32> out_address);

    static void ConvertScreenToGlobal(pls::cs::Array<pls::cs::Int32> screen_pos,
                                      pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> var_out);

    static bool ChDisplayable(pls::cs::Int32 c_x, pls::cs::Int32 c_y, pls::cs::Int32 w, pls::cs::Int32 h);

    static void SetMapPosData();

    void SetCameraLimitData();

    void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

    void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

    void ChangeMode(pls::cs::Int32 next_mode);

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> GetPosFromAddress(pls::cs::Int32 xi,
                                                                                           pls::cs::Int32 yi);

    void DrawTest(pls::cs::Ref<pls::kairo::Graphics> g);

    void DrawCursor(pls::cs::Ref<pls::kairo::Graphics> g);

    void SetCameraRect();

    void Update_normal();

    static void SetDrawCenter(pls::cs::Int32 viewX, pls::cs::Int32 viewY, pls::cs::Int32 viewW,
                              pls::cs::Int32 viewH);

    void Collision(pls::cs::Int32 cursor_sx, pls::cs::Int32 cursor_sy);
};
} // namespace game
}
