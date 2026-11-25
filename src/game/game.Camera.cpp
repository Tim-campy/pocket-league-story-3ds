// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.SoccerForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.Player.hpp"
#include "game.TArea.hpp"
#include "game.TGroupArea.hpp"
#include "game.TPlayer.hpp"
#include "game.Team.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.FastVector.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "circle_pad.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace game {

namespace {
constexpr float management_pan_pixels_per_frame = 6.0f;
constexpr float management_lot_margin_x = 120.0f;
constexpr float management_lot_margin_y = 60.0f;
}

void Camera::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(apdat_, visitor);
    pls::cs::trace_value(canvas_, visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(v, visitor);
    pls::cs::trace_value(a, visitor);
    pls::cs::trace_value(cameraLimitSPos, visitor);
    pls::cs::trace_value(subPlayer_, visitor);
    pls::cs::trace_value(subSvisor_, visitor);
    pls::cs::trace_value(subTenant_, visitor);
    pls::cs::trace_value(old_subPlayer_, visitor);
    pls::cs::trace_value(old_subSvisor_, visitor);
    pls::cs::trace_value(old_subTenant_, visitor);
    pls::cs::trace_value(CURSOR_LIMIT_OFF, visitor);
    pls::cs::trace_value(limit_pos_lt, visitor);
    pls::cs::trace_value(limit_pos_rb, visitor);
    pls::cs::trace_value(limit_pos_base, visitor);
    pls::cs::trace_value(chPos, visitor);
    pls::cs::trace_value(camera_pos1, visitor);
    pls::cs::trace_value(temp_cpos, visitor);
    pls::cs::trace_value(CAMERA_RECT, visitor);
}

static IntArray Camera_camera_address_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_CAMERA_ADS_GPOS_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_CAMERA_BASE_GPOS_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_camera_goalGPos_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_camera_gpos_storage{};

static bool Camera_CAMERA_LIMIT_storage{};

static pls::cs::Int32 Camera_CAMERA_R_W_storage{};

static IntArray Camera_camera_spos_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Camera_CAMERALIMIT_GPOS_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_ch_global_pos_storage{};

static IntArray Camera_ch_screen_pos_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_COATADDRESS_POS_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_cursor_pos_storage{};

static pls::cs::Int32 Camera_DRAW_CENTER_X_storage{};

static pls::cs::Int32 Camera_DRAW_CENTER_Y_storage{};

static pls::cs::Int32 Camera_DRAW_VIEW_H_storage{};

static pls::cs::Int32 Camera_DRAW_VIEW_W_storage{};

static pls::cs::Int32 Camera_DRAW_VIEW_X_storage{};

static pls::cs::Int32 Camera_DRAW_VIEW_Y_storage{};

static pls::cs::Int32 Camera_FLG_DISPHITRECT_storage{};

static pls::cs::Ref<Camera> Camera_instance_storage{};

static IntArray Camera_MAP_SCREEN_BASE_POS_storage{};

static pls::cs::Int32 Camera_MAP_SCREEN_BOTTOM_storage{};

static pls::cs::Int32 Camera_MAP_SCREEN_H_storage{};

static pls::cs::Int32 Camera_MAP_SCREEN_H1_storage{};

static pls::cs::Int32 Camera_MAP_SCREEN_H2_storage{};

static pls::cs::Int32 Camera_MAP_SCREEN_LEFT_storage{};

static pls::cs::Int32 Camera_MAP_SCREEN_RIGHT_storage{};

static pls::cs::Int32 Camera_MAP_SCREEN_TOP_storage{};

static pls::cs::Int32 Camera_MAP_SCREEN_W_storage{};

static pls::cs::Int32 Camera_MAP_SCREEN_W1_storage{};

static pls::cs::Int32 Camera_MAP_SCREEN_W2_storage{};

static pls::cs::Single Camera_OFF_SX_storage{};

static pls::cs::Single Camera_OFF_SY_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_old_pos_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_pos_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_save_cursorPos_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_save_pos_storage{};

static IntArray Camera_temp_address_storage{};

static IntArray Camera_temp_c_storage{};

static IntArray Camera_temp_cursorSPos_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Camera_temp_gpos_storage{};

static IntArray Camera_temp_s_storage{};

static IntArray Camera_temp_screen_pos_storage{};

static IntArray Camera_temp_spos_storage{};

static pls::cs::Single Camera_UPX_FROMX_storage{};

static pls::cs::Single Camera_UPX_FROMZ_storage{};

static pls::cs::Single Camera_UPZ_FROMX_storage{};

static pls::cs::Single Camera_UPZ_FROMZ_storage{};

static PLS_NOINLINE void cs_init_ca6f5bbc06a496a9_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(Camera_camera_address_storage, visitor);
        pls::cs::trace_value(Camera_CAMERA_ADS_GPOS_storage, visitor);
        pls::cs::trace_value(Camera_CAMERA_BASE_GPOS_storage, visitor);
        pls::cs::trace_value(Camera_camera_goalGPos_storage, visitor);
        pls::cs::trace_value(Camera_camera_gpos_storage, visitor);
        pls::cs::trace_value(Camera_CAMERA_LIMIT_storage, visitor);
        pls::cs::trace_value(Camera_CAMERA_R_W_storage, visitor);
        pls::cs::trace_value(Camera_camera_spos_storage, visitor);
        pls::cs::trace_value(Camera_CAMERALIMIT_GPOS_storage, visitor);
        pls::cs::trace_value(Camera_ch_global_pos_storage, visitor);
        pls::cs::trace_value(Camera_ch_screen_pos_storage, visitor);
        pls::cs::trace_value(Camera_COATADDRESS_POS_storage, visitor);
        pls::cs::trace_value(Camera_cursor_pos_storage, visitor);
        pls::cs::trace_value(Camera_DRAW_CENTER_X_storage, visitor);
        pls::cs::trace_value(Camera_DRAW_CENTER_Y_storage, visitor);
        pls::cs::trace_value(Camera_DRAW_VIEW_H_storage, visitor);
        pls::cs::trace_value(Camera_DRAW_VIEW_W_storage, visitor);
        pls::cs::trace_value(Camera_DRAW_VIEW_X_storage, visitor);
        pls::cs::trace_value(Camera_DRAW_VIEW_Y_storage, visitor);
        pls::cs::trace_value(Camera_FLG_DISPHITRECT_storage, visitor);
        pls::cs::trace_value(Camera_instance_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_BASE_POS_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_BOTTOM_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_H_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_H1_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_H2_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_LEFT_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_RIGHT_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_TOP_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_W_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_W1_storage, visitor);
        pls::cs::trace_value(Camera_MAP_SCREEN_W2_storage, visitor);
        pls::cs::trace_value(Camera_OFF_SX_storage, visitor);
        pls::cs::trace_value(Camera_OFF_SY_storage, visitor);
        pls::cs::trace_value(Camera_old_pos_storage, visitor);
        pls::cs::trace_value(Camera_pos_storage, visitor);
        pls::cs::trace_value(Camera_save_cursorPos_storage, visitor);
        pls::cs::trace_value(Camera_save_pos_storage, visitor);
        pls::cs::trace_value(Camera_temp_address_storage, visitor);
        pls::cs::trace_value(Camera_temp_c_storage, visitor);
        pls::cs::trace_value(Camera_temp_cursorSPos_storage, visitor);
        pls::cs::trace_value(Camera_temp_gpos_storage, visitor);
        pls::cs::trace_value(Camera_temp_s_storage, visitor);
        pls::cs::trace_value(Camera_temp_screen_pos_storage, visitor);
        pls::cs::trace_value(Camera_temp_spos_storage, visitor);
        pls::cs::trace_value(Camera_UPX_FROMX_storage, visitor);
        pls::cs::trace_value(Camera_UPX_FROMZ_storage, visitor);
        pls::cs::trace_value(Camera_UPZ_FROMX_storage, visitor);
        pls::cs::trace_value(Camera_UPZ_FROMZ_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.Camera", flag, []() {
        Camera_CAMERA_LIMIT_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.CAMERA_LIMIT", [&]() { return true; });
        Camera_CAMERALIMIT_GPOS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.CAMERALIMIT_GPOS", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                    {kl_util3d::Vector3D::create(-405.0f, 0.0f, 810.0f),
                     kl_util3d::Vector3D::create(405.0f, 0.0f, 810.0f),
                     kl_util3d::Vector3D::create(405.0f, 0.0f, -810.0f),
                     kl_util3d::Vector3D::create(-405.0f, 0.0f, -810.0f)});
            });
        Camera_MAP_SCREEN_W1_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.MAP_SCREEN_W1", [&]() { return 480; });
        Camera_MAP_SCREEN_W2_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.MAP_SCREEN_W2", [&]() { return 240; });
        Camera_MAP_SCREEN_W_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.MAP_SCREEN_W", [&]() {
                return ([&]() -> pls::cs::Int32 {
                    auto cs_left = Camera::MAP_SCREEN_W1();
                    auto cs_right = Camera::MAP_SCREEN_W2();
                    return cs_left + cs_right;
                }());
            });
        Camera_MAP_SCREEN_H1_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.MAP_SCREEN_H1", [&]() { return 240; });
        Camera_MAP_SCREEN_H2_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.MAP_SCREEN_H2", [&]() { return 120; });
        Camera_MAP_SCREEN_H_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.MAP_SCREEN_H", [&]() {
                return ([&]() -> pls::cs::Int32 {
                    auto cs_left = Camera::MAP_SCREEN_H1();
                    auto cs_right = Camera::MAP_SCREEN_H2();
                    return cs_left + cs_right;
                }());
            });
        Camera_MAP_SCREEN_LEFT_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.MAP_SCREEN_LEFT", [&]() { return (-Camera::MAP_SCREEN_W() / 2); });
        Camera_MAP_SCREEN_RIGHT_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.MAP_SCREEN_RIGHT", [&]() {
                return ([&]() -> pls::cs::Int32 {
                    auto cs_left = Camera::MAP_SCREEN_LEFT();
                    auto cs_right = Camera::MAP_SCREEN_W();
                    return cs_left + cs_right;
                }());
            });
        Camera_MAP_SCREEN_TOP_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.MAP_SCREEN_TOP", [&]() { return Camera::MAP_SCREEN_H() / 2; });
        Camera_MAP_SCREEN_BOTTOM_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.MAP_SCREEN_BOTTOM", [&]() {
                return ([&]() -> pls::cs::Int32 {
                    auto cs_left = Camera::MAP_SCREEN_TOP();
                    auto cs_right = Camera::MAP_SCREEN_H();
                    return cs_left - cs_right;
                }());
            });
        Camera_MAP_SCREEN_BASE_POS_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.MAP_SCREEN_BASE_POS", [&]() { return IntArray::make(2); });
        Camera_DRAW_CENTER_X_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.DRAW_CENTER_X", [&]() { return 0; });
        Camera_DRAW_CENTER_Y_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.DRAW_CENTER_Y", [&]() { return 0; });
        Camera_DRAW_VIEW_X_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.DRAW_VIEW_X", [&]() { return 0; });
        Camera_DRAW_VIEW_Y_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.DRAW_VIEW_Y", [&]() { return 0; });
        Camera_DRAW_VIEW_W_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.DRAW_VIEW_W", [&]() { return 0; });
        Camera_DRAW_VIEW_H_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.DRAW_VIEW_H", [&]() { return 0; });
        Camera_CAMERA_R_W_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.CAMERA_R_W", [&]() { return 6; });
        Camera_FLG_DISPHITRECT_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Camera.FLG_DISPHITRECT", [&]() { return 0; });
        Camera_ch_global_pos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.ch_global_pos", [&]() { return kl_util3d::Vector3D::create(); });
        Camera_ch_screen_pos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.ch_screen_pos", [&]() { return IntArray::make(2); });
        Camera_CAMERA_BASE_GPOS_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.CAMERA_BASE_GPOS", [&]() { return kl_util3d::Vector3D::create(); });
        Camera_CAMERA_ADS_GPOS_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.CAMERA_ADS_GPOS", [&]() { return kl_util3d::Vector3D::create(); });
        Camera_temp_c_storage = pls::cs::evaluate_type_initializer_field("F:game.Camera.temp_c",
                                                                         [&]() { return IntArray::make(2); });
        Camera_temp_s_storage = pls::cs::evaluate_type_initializer_field("F:game.Camera.temp_s",
                                                                         [&]() { return IntArray::make(2); });
        Camera_temp_screen_pos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.temp_screen_pos", [&]() { return IntArray::make(2); });
        Camera_COATADDRESS_POS_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.COATADDRESS_POS", [&]() { return kl_util3d::Vector3D::create(); });
        Camera_temp_cursorSPos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.temp_cursorSPos", [&]() { return IntArray::make(2); });
        Camera_temp_spos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.temp_spos", [&]() { return IntArray::make(2); });
        Camera_temp_gpos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.temp_gpos", [&]() { return kl_util3d::Vector3D::create(); });
        Camera_temp_address_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Camera.temp_address", [&]() { return IntArray::make(2); });
    });
}

void Camera::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_ca6f5bbc06a496a9_slow(flag);
}

IntArray& Camera::camera_address() {
    Camera::ensure_initialized();
    return Camera_camera_address_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::CAMERA_ADS_GPOS() {
    Camera::ensure_initialized();
    return Camera_CAMERA_ADS_GPOS_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::CAMERA_BASE_GPOS() {
    Camera::ensure_initialized();
    return Camera_CAMERA_BASE_GPOS_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::camera_goalGPos() {
    Camera::ensure_initialized();
    return Camera_camera_goalGPos_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::camera_gpos() {
    Camera::ensure_initialized();
    return Camera_camera_gpos_storage;
}

bool& Camera::CAMERA_LIMIT() {
    Camera::ensure_initialized();
    return Camera_CAMERA_LIMIT_storage;
}

pls::cs::Int32& Camera::CAMERA_R_W() {
    Camera::ensure_initialized();
    return Camera_CAMERA_R_W_storage;
}

IntArray& Camera::camera_spos() {
    Camera::ensure_initialized();
    return Camera_camera_spos_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Camera::CAMERALIMIT_GPOS() {
    Camera::ensure_initialized();
    return Camera_CAMERALIMIT_GPOS_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::ch_global_pos() {
    Camera::ensure_initialized();
    return Camera_ch_global_pos_storage;
}

IntArray& Camera::ch_screen_pos() {
    Camera::ensure_initialized();
    return Camera_ch_screen_pos_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::COATADDRESS_POS() {
    Camera::ensure_initialized();
    return Camera_COATADDRESS_POS_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::cursor_pos() {
    Camera::ensure_initialized();
    return Camera_cursor_pos_storage;
}

pls::cs::Int32& Camera::DRAW_CENTER_X() {
    Camera::ensure_initialized();
    return Camera_DRAW_CENTER_X_storage;
}

pls::cs::Int32& Camera::DRAW_CENTER_Y() {
    Camera::ensure_initialized();
    return Camera_DRAW_CENTER_Y_storage;
}

pls::cs::Int32& Camera::DRAW_VIEW_H() {
    Camera::ensure_initialized();
    return Camera_DRAW_VIEW_H_storage;
}

pls::cs::Int32& Camera::DRAW_VIEW_W() {
    Camera::ensure_initialized();
    return Camera_DRAW_VIEW_W_storage;
}

pls::cs::Int32& Camera::DRAW_VIEW_X() {
    Camera::ensure_initialized();
    return Camera_DRAW_VIEW_X_storage;
}

pls::cs::Int32& Camera::DRAW_VIEW_Y() {
    Camera::ensure_initialized();
    return Camera_DRAW_VIEW_Y_storage;
}

pls::cs::Int32& Camera::FLG_DISPHITRECT() {
    Camera::ensure_initialized();
    return Camera_FLG_DISPHITRECT_storage;
}

pls::cs::Ref<Camera>& Camera::instance() {
    Camera::ensure_initialized();
    return Camera_instance_storage;
}

IntArray& Camera::MAP_SCREEN_BASE_POS() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_BASE_POS_storage;
}

pls::cs::Int32& Camera::MAP_SCREEN_BOTTOM() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_BOTTOM_storage;
}

pls::cs::Int32& Camera::MAP_SCREEN_H() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_H_storage;
}

pls::cs::Int32& Camera::MAP_SCREEN_H1() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_H1_storage;
}

pls::cs::Int32& Camera::MAP_SCREEN_H2() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_H2_storage;
}

pls::cs::Int32& Camera::MAP_SCREEN_LEFT() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_LEFT_storage;
}

pls::cs::Int32& Camera::MAP_SCREEN_RIGHT() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_RIGHT_storage;
}

pls::cs::Int32& Camera::MAP_SCREEN_TOP() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_TOP_storage;
}

pls::cs::Int32& Camera::MAP_SCREEN_W() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_W_storage;
}

pls::cs::Int32& Camera::MAP_SCREEN_W1() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_W1_storage;
}

pls::cs::Int32& Camera::MAP_SCREEN_W2() {
    Camera::ensure_initialized();
    return Camera_MAP_SCREEN_W2_storage;
}

pls::cs::Single& Camera::OFF_SX() {
    Camera::ensure_initialized();
    return Camera_OFF_SX_storage;
}

pls::cs::Single& Camera::OFF_SY() {
    Camera::ensure_initialized();
    return Camera_OFF_SY_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::old_pos() {
    Camera::ensure_initialized();
    return Camera_old_pos_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::pos() {
    Camera::ensure_initialized();
    return Camera_pos_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::save_cursorPos() {
    Camera::ensure_initialized();
    return Camera_save_cursorPos_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::save_pos() {
    Camera::ensure_initialized();
    return Camera_save_pos_storage;
}

IntArray& Camera::temp_address() {
    Camera::ensure_initialized();
    return Camera_temp_address_storage;
}

IntArray& Camera::temp_c() {
    Camera::ensure_initialized();
    return Camera_temp_c_storage;
}

IntArray& Camera::temp_cursorSPos() {
    Camera::ensure_initialized();
    return Camera_temp_cursorSPos_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Camera::temp_gpos() {
    Camera::ensure_initialized();
    return Camera_temp_gpos_storage;
}

IntArray& Camera::temp_s() {
    Camera::ensure_initialized();
    return Camera_temp_s_storage;
}

IntArray& Camera::temp_screen_pos() {
    Camera::ensure_initialized();
    return Camera_temp_screen_pos_storage;
}

IntArray& Camera::temp_spos() {
    Camera::ensure_initialized();
    return Camera_temp_spos_storage;
}

pls::cs::Single& Camera::UPX_FROMX() {
    Camera::ensure_initialized();
    return Camera_UPX_FROMX_storage;
}

pls::cs::Single& Camera::UPX_FROMZ() {
    Camera::ensure_initialized();
    return Camera_UPX_FROMZ_storage;
}

pls::cs::Single& Camera::UPZ_FROMX() {
    Camera::ensure_initialized();
    return Camera_UPZ_FROMX_storage;
}

pls::cs::Single& Camera::UPZ_FROMZ() {
    Camera::ensure_initialized();
    return Camera_UPZ_FROMZ_storage;
}

void Camera::create_init(pls::cs::Ref<Camera> self) {
    Camera::ensure_initialized();
    self->CURSOR_LIMIT_OFF = IntArray::from({0, 5, 0, -5});
    self->flg_disp = true;
    self->TIME_AUTOFOCUS = 12;
    self->limit_pos_lt = kl_util3d::Vector3D::create();
    self->limit_pos_rb = kl_util3d::Vector3D::create();
    self->limit_pos_base = kl_util3d::Vector3D::create();
    self->camera_pos1 = kl_util3d::Vector3D::create();
    self->temp_cpos = IntArray::make(2);
    self->CAMERA_RECT = IntArray2::from({IntArray::from({300, 200}), IntArray::from({1200, -350})});
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.#ctor", game);
    {
        self->apdat_ = main::AppData::GetInstance();
        self->canvas_ = PLS_API(pls::kairo::Canvas::GetInstance());
        self->udat_ = UserData::GetInstance();
        Camera::pos() = kl_util3d::Vector3D::create();
        Camera::old_pos() = kl_util3d::Vector3D::create();
        Camera::save_pos() = kl_util3d::Vector3D::create();
        Camera::save_cursorPos() = kl_util3d::Vector3D::create();
        Camera::cursor_pos() = kl_util3d::Vector3D::create();
        self->v = kl_util3d::Vector3D::create();
        self->a = kl_util3d::Vector3D::create();
        Camera::camera_spos() = IntArray::make(2);
        Camera::camera_gpos() = kl_util3d::Vector3D::create();
        Camera::camera_address() = IntArray::make(2);
        Camera::camera_goalGPos() = kl_util3d::Vector3D::create();
        self->cameraLimitSPos = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        for (pls::cs::Int32 i = 0; i < self->cameraLimitSPos.length(); ++i) {
            {
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Camera::CAMERALIMIT_GPOS().get_Item(i);
                IntArray cs_arg1 = self->cameraLimitSPos[i];
                Camera::ConvertGlobalToScreen(cs_arg0, cs_arg1);
            }
        }
        Camera::SetScreenData();
        PLS_API(require(Camera::pos())->Set(0.0f, 0.0f, 0.0f));
        self->SetCameraLimitData();
        self->mode_ = 0;
        IntArray screen_pos = IntArray::make(2);
        Camera::ConvertScreenToGlobal(screen_pos, Camera::CAMERA_BASE_GPOS());
        self->chPos = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
        for (pls::cs::Int32 j = 0; j < self->chPos.length(); ++j) {
            {
                auto cs_target = self->chPos;
                auto cs_index = j;
                auto cs_value = kl_util3d::Vector3D::create();
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:game.Camera.#ctor
pls::cs::Ref<Camera> Camera::create() {
    Camera::ensure_initialized();
    auto self = pls::cs::make_ref<Camera>();
    Camera::create_init(self);
    return self;
}

// M:game.Camera.GetInstance
pls::cs::Ref<Camera> Camera::GetInstance() {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.GetInstance", game);
    {
        if (is_null(Camera::instance())) {
            Camera::instance() = Camera::create();
        }
        return Camera::instance();
    }
}

// M:game.Camera.SetMapMainBasePos
void Camera::SetMapMainBasePos() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.SetMapMainBasePos", game);
    {
        require(Camera::pos())->x_ = require(Camera::save_pos())->x_;
        require(Camera::pos())->y_ = require(Camera::save_pos())->y_;
        require(Camera::cursor_pos())->x_ = require(Camera::save_cursorPos())->x_;
        require(Camera::cursor_pos())->y_ = require(Camera::save_cursorPos())->y_;
        PLS_API(require(Camera::old_pos())->Set(Camera::pos()));
    }
}

// M:game.Camera.SaveMapMainBasePos
void Camera::SaveMapMainBasePos() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.SaveMapMainBasePos", game);
    {
        require(Camera::save_pos())->x_ = require(Camera::pos())->x_;
        require(Camera::save_pos())->y_ = require(Camera::pos())->y_;
        require(Camera::save_cursorPos())->x_ = require(Camera::cursor_pos())->x_;
        require(Camera::save_cursorPos())->y_ = require(Camera::cursor_pos())->y_;
    }
}

// M:game.Camera.SetScreenData
void Camera::SetScreenData() {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.SetScreenData", game);
    {
        Map::ensure_initialized();

        Camera::MAP_SCREEN_W1() = 30 * Map::MAPCHIP_COAT_HNUM();
        Camera::MAP_SCREEN_W2() = 30 * Map::MAPCHIP_COAT_WNUM();
        Camera::MAP_SCREEN_W() = Camera::MAP_SCREEN_W1() + Camera::MAP_SCREEN_W2();
        Camera::MAP_SCREEN_H1() = 15 * Map::MAPCHIP_COAT_HNUM();
        Camera::MAP_SCREEN_H2() = 15 * Map::MAPCHIP_COAT_WNUM();
        Camera::MAP_SCREEN_H() = Camera::MAP_SCREEN_H1() + Camera::MAP_SCREEN_H2();
        Camera::MAP_SCREEN_LEFT() = (-Camera::MAP_SCREEN_W() / 2);
        Camera::MAP_SCREEN_RIGHT() = Camera::MAP_SCREEN_LEFT() + Camera::MAP_SCREEN_W();
        Camera::MAP_SCREEN_TOP() = Camera::MAP_SCREEN_H() / 2;
        Camera::MAP_SCREEN_BOTTOM() = Camera::MAP_SCREEN_TOP() - Camera::MAP_SCREEN_H();
        pls::cs::Int32 num = Map::MAPCHIP_COAT_HNUM() * 80 / 100;
        if (num > Map::MAPCHIP_COAT_HNUM() - 1) {
            num = Map::MAPCHIP_COAT_HNUM() - 1;
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = kl_util3d::Vector3D::create();
            Camera::ConvertGlobalToScreen(cs_arg0, Camera::MAP_SCREEN_BASE_POS());
        }
    }
}

// M:game.Camera.Update_pos
void Camera::Update_pos() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.Update_pos", game);
    {
        form::SoccerForm::ensure_initialized();
        GameManager::ensure_initialized();

        bool flag = PLS_API(require(canvas_)->CheckKeyState(131072));
        bool flag2 = PLS_API(require(canvas_)->CheckKeyState(524288));
        bool flag3 = PLS_API(require(canvas_)->CheckKeyState(65536));
        bool flag4 = PLS_API(require(canvas_)->CheckKeyState(262144));
        if (form::SoccerForm::DEBUG_PLAYER_NOTACT() == 1) {
            pls::cs::Ref<Player> player = require(udat_)->GetPlayer(0, 0);
            PLS_API(require(require(player)->v_)->Set(0.0f, 0.0f, 0.0f));
            if (flag) {
                require(require(player)->v_)->z_ = 35.0f;
                require(player)->direct_ = 0;
            }
            if (flag2) {
                require(require(player)->v_)->z_ = -35.0f;
                require(player)->direct_ = 2;
            }
            if (flag3) {
                require(require(player)->v_)->x_ = -35.0f;
                require(player)->direct_ = 3;
            }
            if (flag4) {
                require(require(player)->v_)->x_ = 35.0f;
                require(player)->direct_ = 1;
            }
            {
                auto cs_target = require(player)->pos_;
                auto cs_old = require(cs_target)->x_;
                auto cs_rhs = require(require(player)->v_)->x_;
                pls::cs::Single cs_value = cs_old + cs_rhs;
                require(cs_target)->x_ = cs_value;
            }
            {
                auto cs_target = require(player)->pos_;
                auto cs_old = require(cs_target)->z_;
                auto cs_rhs = require(require(player)->v_)->z_;
                pls::cs::Single cs_value = cs_old + cs_rhs;
                require(cs_target)->z_ = cs_value;
            }
            Camera::ConvertGlobalToScreen(require(player)->pos_, require(player)->screen_pos_);
            {
                auto cs_target = Camera::pos();
                pls::cs::Single cs_value = require(player)->screen_pos_[0];
                require(cs_target)->x_ = cs_value;
            }
            {
                auto cs_target = Camera::pos();
                pls::cs::Single cs_value = require(player)->screen_pos_[1];
                require(cs_target)->y_ = cs_value;
            }
        } else {
            if (require(require(udat_)->gm_)->state_ == 3 &&
                (([&]() -> bool {
                     auto cs_left = require(require(udat_)->gm_)->stateCnt_;
                     auto cs_right = GameManager::WAIT_THROWIN()[0];
                     return cs_left >= cs_right;
                 }()) ||
                 ([&]() -> bool {
                     auto cs_left = require(require(udat_)->gm_)->stateCnt_;
                     auto cs_right = GameManager::WAIT_GK()[0];
                     return cs_left >= cs_right;
                 }()) ||
                 ([&]() -> bool {
                     auto cs_left = require(require(udat_)->gm_)->stateCnt_;
                     auto cs_right = GameManager::WAIT_CK()[0];
                     return cs_left >= cs_right;
                 }()))) {
                require(Camera::camera_gpos())->x_ =
                    pls::cs::to_int32(require(require(require(udat_)->ball_)->shadowPos_)->x_);
                require(Camera::camera_gpos())->z_ =
                    pls::cs::to_int32(require(require(require(udat_)->ball_)->shadowPos_)->z_);
                if ([&]() -> bool {
                        auto cs_left = require(Camera::camera_gpos())->x_;
                        auto cs_right = require(Camera::CAMERALIMIT_GPOS().get_Item(1))->x_;
                        return cs_left > cs_right;
                    }()) {
                    {
                        auto cs_target = Camera::camera_gpos();
                        pls::cs::Single cs_value = require(Camera::CAMERALIMIT_GPOS().get_Item(1))->x_;
                        require(cs_target)->x_ = cs_value;
                    }
                }
                if ([&]() -> bool {
                        auto cs_left = require(Camera::camera_gpos())->x_;
                        auto cs_right = require(Camera::CAMERALIMIT_GPOS().get_Item(0))->x_;
                        return cs_left < cs_right;
                    }()) {
                    {
                        auto cs_target = Camera::camera_gpos();
                        pls::cs::Single cs_value = require(Camera::CAMERALIMIT_GPOS().get_Item(0))->x_;
                        require(cs_target)->x_ = cs_value;
                    }
                }
                if ([&]() -> bool {
                        auto cs_left = require(Camera::camera_gpos())->z_;
                        auto cs_right = require(Camera::CAMERALIMIT_GPOS().get_Item(0))->z_;
                        return cs_left > cs_right;
                    }()) {
                    {
                        auto cs_target = Camera::camera_gpos();
                        pls::cs::Single cs_value = require(Camera::CAMERALIMIT_GPOS().get_Item(0))->z_;
                        require(cs_target)->z_ = cs_value;
                    }
                }
                if ([&]() -> bool {
                        auto cs_left = require(Camera::camera_gpos())->z_;
                        auto cs_right = require(Camera::CAMERALIMIT_GPOS().get_Item(2))->z_;
                        return cs_left < cs_right;
                    }()) {
                    {
                        auto cs_target = Camera::camera_gpos();
                        pls::cs::Single cs_value = require(Camera::CAMERALIMIT_GPOS().get_Item(2))->z_;
                        require(cs_target)->z_ = cs_value;
                    }
                }
                Camera::ConvertGlobalToScreen(Camera::camera_gpos(), Camera::camera_spos());
                {
                    auto cs_target = Camera::pos();
                    pls::cs::Single cs_value = Camera::camera_spos()[0];
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = Camera::pos();
                    pls::cs::Single cs_value = Camera::camera_spos()[1];
                    require(cs_target)->y_ = cs_value;
                }
                return;
            }
            if (mode_ == 0) {
                pls::cs::Single recoveredUnusedSingleA;
                pls::cs::Int32 recoveredSelector = 0;
                pls::cs::Single recoveredUnusedSingleB;
                if (recoveredSelector == 0) {
                    Update_normal();
                    SetCameraRect();
                    Camera::camera_spos()[0] = pls::cs::to_int32(require(Camera::cursor_pos())->x_);
                    Camera::camera_spos()[1] = pls::cs::to_int32(require(Camera::cursor_pos())->y_);
                    Camera::ConvertScreenToGlobal(Camera::camera_spos(), Camera::camera_gpos());
                    PLS_API(require(Camera::CAMERA_ADS_GPOS())
                                ->Set(require(Camera::camera_gpos())->x_ -
                                          require(Camera::CAMERA_BASE_GPOS())->x_,
                                      0.0f,
                                      require(Camera::camera_gpos())->z_ -
                                          require(Camera::CAMERA_BASE_GPOS())->z_));
                    Camera::ConvertGlobalToAddressMain(Camera::CAMERA_ADS_GPOS(), Camera::camera_address());
                    if (cursorCnt_ < 80) {
                        ++cursorCnt_;
                    }
                    if (flag || flag2 || flag3 || flag4) {
                        subPlayer_ = pls::cs::Ref<TPlayer>{};
                        subSvisor_ = pls::cs::Ref<TPlayer>{};
                        cursorCnt_ = 0;
                    }
                    if (subCursorCnt_ < 100 && !is_null(subPlayer_)) {
                        ++subCursorCnt_;
                    }
                    if (subCursorCnt_ >= 100) {
                        subCursorCnt_ = 0;
                        subPlayer_ = pls::cs::Ref<TPlayer>{};
                        subSvisor_ = pls::cs::Ref<TPlayer>{};
                    }
                    if (!flg_disp) {
                        return;
                    }
                    Collision(pls::cs::to_int32(require(Camera::cursor_pos())->x_),
                              pls::cs::to_int32(require(Camera::cursor_pos())->y_));
                } else if (recoveredSelector == 1) {
                    if (flag) {
                        {
                            auto cs_target = Camera::ch_global_pos();
                            auto cs_old = require(cs_target)->z_;
                            auto cs_rhs = 10.0f;
                            pls::cs::Single cs_value = cs_old + cs_rhs;
                            require(cs_target)->z_ = cs_value;
                        }
                    }
                    if (flag2) {
                        {
                            auto cs_target = Camera::ch_global_pos();
                            auto cs_old = require(cs_target)->z_;
                            auto cs_rhs = 10.0f;
                            pls::cs::Single cs_value = cs_old - cs_rhs;
                            require(cs_target)->z_ = cs_value;
                        }
                    }
                    if (flag3) {
                        {
                            auto cs_target = Camera::ch_global_pos();
                            auto cs_old = require(cs_target)->x_;
                            auto cs_rhs = 10.0f;
                            pls::cs::Single cs_value = cs_old - cs_rhs;
                            require(cs_target)->x_ = cs_value;
                        }
                    }
                    if (flag4) {
                        {
                            auto cs_target = Camera::ch_global_pos();
                            auto cs_old = require(cs_target)->x_;
                            auto cs_rhs = 10.0f;
                            pls::cs::Single cs_value = cs_old + cs_rhs;
                            require(cs_target)->x_ = cs_value;
                        }
                    }
                    Camera::ConvertGlobalToScreen(Camera::ch_global_pos(), Camera::ch_screen_pos());
                    {
                        auto cs_target = Camera::pos();
                        pls::cs::Single cs_value = Camera::ch_screen_pos()[0];
                        require(cs_target)->x_ = cs_value;
                    }
                    {
                        auto cs_target = Camera::pos();
                        pls::cs::Single cs_value = Camera::ch_screen_pos()[1];
                        require(cs_target)->y_ = cs_value;
                    }
                }
            } else if (mode_ == 1) {
                {
                    auto cs_target = Camera::pos();
                    pls::cs::Single cs_value = require(require(udat_)->ball_)->screen_shadowPos_[0];
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = Camera::pos();
                    pls::cs::Single cs_value = require(require(udat_)->ball_)->screen_shadowPos_[1];
                    require(cs_target)->y_ = cs_value;
                }
            } else if (mode_ == 2) {
                if (require(require(apdat_)->frmSoccer_)->state_ == 8) {
                    return;
                }
                pls::cs::Int32 num = 0;
                pls::cs::Int32 num2 = 0;
                pls::cs::Int32 num3 = 0;
                pls::cs::Int32 num4 = 0;
                if (require(require(udat_)->gm_)->state_ == 8 && ([&]() -> bool {
                        auto cs_left = require(require(udat_)->gm_)->stateCnt_;
                        auto cs_right = GameManager::WAIT_GOAL()[0];
                        return cs_left >= cs_right;
                    }())) {
                    if (require(require(udat_)->ball_)->chInGoal_ != 2) {
                        pls::cs::Ref<Team> team =
                            require(udat_)->teams_.get_Item(1 - require(require(udat_)->ball_)->chInGoal_);
                        if (require(team)->lastKickeer_ != -1) {
                            pls::cs::Ref<Player> player2 =
                                require(team)->players_.get_Item(require(team)->lastKickeer_);
                            num = pls::cs::to_int32(
                                PLS_API(pls::cs::Single(kl_lang::JMath::Abs(([&]() -> pls::cs::FloatEval {
                                    auto cs_left = pls::cs::Single(require(player2)->screen_pos_[0]);
                                    auto cs_right = require(Camera::pos())->x_;
                                    return cs_left - cs_right;
                                }())))));
                            num2 = pls::cs::to_int32(
                                PLS_API(pls::cs::Single(kl_lang::JMath::Abs(([&]() -> pls::cs::FloatEval {
                                    auto cs_left = pls::cs::Single(require(player2)->screen_pos_[1]);
                                    auto cs_right = require(Camera::pos())->y_;
                                    return cs_left - cs_right;
                                }())))));
                            num3 = GameUtil::RateConvert(num, 20, 90, 0, 10, true);
                            if ([&]() -> bool {
                                    auto cs_left = pls::cs::Single(require(player2)->screen_pos_[0]);
                                    auto cs_right = require(Camera::pos())->x_;
                                    return cs_left < cs_right;
                                }()) {
                                num3 *= -1;
                            }
                            num4 = GameUtil::RateConvert(num2, 20, 90, 0, 10, true);
                            if ([&]() -> bool {
                                    auto cs_left = pls::cs::Single(require(player2)->screen_pos_[1]);
                                    auto cs_right = require(Camera::pos())->y_;
                                    return cs_left < cs_right;
                                }()) {
                                num4 *= -1;
                            }
                        }
                    }
                } else {
                    pls::cs::Ref<Ball> ball_ = require(udat_)->ball_;
                    if (!is_null(ball_)) {
                        num = pls::cs::to_int32(
                            PLS_API(pls::cs::Single(kl_lang::JMath::Abs(([&]() -> pls::cs::FloatEval {
                                auto cs_left = pls::cs::Single(require(ball_)->screen_shadowPos_[0]);
                                auto cs_right = require(Camera::pos())->x_;
                                return cs_left - cs_right;
                            }())))));
                        num2 = pls::cs::to_int32(
                            PLS_API(pls::cs::Single(kl_lang::JMath::Abs(([&]() -> pls::cs::FloatEval {
                                auto cs_left = pls::cs::Single(require(ball_)->screen_shadowPos_[1]);
                                auto cs_right = require(Camera::pos())->y_;
                                return cs_left - cs_right;
                            }())))));
                        num3 = GameUtil::RateConvert(num, 20, 90, 0, 13, true);
                        if ([&]() -> bool {
                                auto cs_left = pls::cs::Single(require(ball_)->screen_shadowPos_[0]);
                                auto cs_right = require(Camera::pos())->x_;
                                return cs_left < cs_right;
                            }()) {
                            num3 *= -1;
                        }
                        num4 = GameUtil::RateConvert(num2, 20, 90, 0, 13, true);
                        if ([&]() -> bool {
                                auto cs_left = pls::cs::Single(require(ball_)->screen_shadowPos_[1]);
                                auto cs_right = require(Camera::pos())->y_;
                                return cs_left < cs_right;
                            }()) {
                            num4 *= -1;
                        }
                    }
                }
                if (require(require(udat_)->gm_)->state_ == 8 && ([&]() -> bool {
                        auto cs_left = require(require(udat_)->gm_)->stateCnt_;
                        auto cs_right = GameManager::WAIT_GOAL()[0];
                        return cs_left >= cs_right;
                    }())) {
                    {
                        auto cs_target = Camera::pos();
                        auto cs_old = require(cs_target)->x_;
                        auto cs_rhs = num3;
                        pls::cs::Single cs_value = cs_old + cs_rhs;
                        require(cs_target)->x_ = cs_value;
                    }
                    {
                        auto cs_target = Camera::pos();
                        auto cs_old = require(cs_target)->y_;
                        auto cs_rhs = num4;
                        pls::cs::Single cs_value = cs_old + cs_rhs;
                        require(cs_target)->y_ = cs_value;
                    }
                } else {
                    {
                        auto cs_target = chPos.get_Item(0);
                        pls::cs::Single cs_value = require(Camera::pos())->x_;
                        require(cs_target)->x_ = cs_value;
                    }
                    {
                        auto cs_target = chPos.get_Item(0);
                        pls::cs::Single cs_value = require(Camera::pos())->y_;
                        require(cs_target)->z_ = cs_value;
                    }
                    {
                        auto cs_target = chPos.get_Item(1);
                        pls::cs::Single cs_value = require(Camera::pos())->x_ + pls::cs::Single(num3);
                        require(cs_target)->x_ = cs_value;
                    }
                    {
                        auto cs_target = chPos.get_Item(1);
                        pls::cs::Single cs_value = require(Camera::pos())->y_ + pls::cs::Single(num4);
                        require(cs_target)->z_ = cs_value;
                    }
                    Camera::camera_spos()[0] = pls::cs::to_int32(require(Camera::pos())->x_) + num3;
                    Camera::camera_spos()[1] = pls::cs::to_int32(require(Camera::pos())->y_) + num4;
                    Camera::ConvertScreenToGlobal(Camera::camera_spos(), Camera::camera_gpos());
                    bool flag5 = false;
                    for (pls::cs::Int32 i = 0; i < 4; ++i) {
                        {
                            auto cs_target = chPos.get_Item(2);
                            pls::cs::Single cs_value = cameraLimitSPos[i][0];
                            require(cs_target)->x_ = cs_value;
                        }
                        {
                            auto cs_target = chPos.get_Item(2);
                            pls::cs::Single cs_value = cameraLimitSPos[i][1];
                            require(cs_target)->z_ = cs_value;
                        }
                        {
                            auto cs_target = chPos.get_Item(3);
                            pls::cs::Single cs_value = cameraLimitSPos[(i + 1) % 4][0];
                            require(cs_target)->x_ = cs_value;
                        }
                        {
                            auto cs_target = chPos.get_Item(3);
                            pls::cs::Single cs_value = cameraLimitSPos[(i + 1) % 4][1];
                            require(cs_target)->z_ = cs_value;
                        }
                        bool recoveredIntersection = GameUtil::ChCrossLine(
                            chPos.get_Item(0), chPos.get_Item(1), chPos.get_Item(2), chPos.get_Item(3));
                        if (recoveredIntersection) {
                            pls::cs::Ref<kl_util3d::Vector3D> crossPoint = GameUtil::GetCrossPointBool(
                                chPos.get_Item(2), chPos.get_Item(3), chPos.get_Item(1), true);
                            require(Camera::pos())->x_ = require(crossPoint)->x_;
                            require(Camera::pos())->y_ = require(crossPoint)->z_;
                            flag5 = true;
                            break;
                        }
                    }
                    if (!flag5) {
                        {
                            auto cs_target = Camera::pos();
                            auto cs_old = require(cs_target)->x_;
                            auto cs_rhs = num3;
                            pls::cs::Single cs_value = cs_old + cs_rhs;
                            require(cs_target)->x_ = cs_value;
                        }
                        {
                            auto cs_target = Camera::pos();
                            auto cs_old = require(cs_target)->y_;
                            auto cs_rhs = num4;
                            pls::cs::Single cs_value = cs_old + cs_rhs;
                            require(cs_target)->y_ = cs_value;
                        }
                    }
                }
            }
        }
    }
}

// M:game.Camera.ConvertGlobalToScreen(kairo.unity.m3d4.util3d.Vector3D,System.Int32[])
void Camera::ConvertGlobalToScreen(pls::cs::Ref<kl_util3d::Vector3D> global_pos, IntArray screen_pos) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Camera.ConvertGlobalToScreen(kairo.unity.m3d4.util3d.Vector3D,System.Int32[])",
                     game);
    {
        pls::cs::Single num =
            (require(global_pos)->x_ - -450.0f) * pls::cs::Single(Camera::MAP_SCREEN_W2()) / 900.0f +
            (require(global_pos)->z_ - 900.0f) * pls::cs::Single((-Camera::MAP_SCREEN_W1())) / -1800.0f;
        pls::cs::Single num2 =
            (require(global_pos)->z_ - 900.0f) * pls::cs::Single((-Camera::MAP_SCREEN_H1())) / -1800.0f +
            (require(global_pos)->x_ - -450.0f) * pls::cs::Single((-Camera::MAP_SCREEN_H2())) / 900.0f;
        num2 += require(global_pos)->y_;
        screen_pos[0] = pls::cs::to_int32(num);
        screen_pos[1] = pls::cs::to_int32(num2);
    }
}

// M:game.Camera.ConvertScreenToCamera(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)
void Camera::ConvertScreenToCamera(pls::cs::Ref<kl_util3d::Vector3D> screen_pos,
                                   pls::cs::Ref<kl_util3d::Vector3D> camera_pos) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Camera.ConvertScreenToCamera(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)",
        game);
    {
        pls::cs::Int32 num = pls::cs::to_int32(require(screen_pos)->x_) + Camera::DRAW_CENTER_X() -
                             pls::cs::to_int32(require(Camera::pos())->x_);
        pls::cs::Int32 num2 = pls::cs::to_int32(require(screen_pos)->y_) + Camera::DRAW_CENTER_Y() -
                              pls::cs::to_int32(require(Camera::pos())->y_);
        num2 = Camera::DRAW_VIEW_Y() + Camera::DRAW_VIEW_H() - num2;
        require(camera_pos)->x_ = num;
        require(camera_pos)->y_ = num2;
    }
}

// M:game.Camera.ConvertScreenToCamera(kairo.unity.m3d4.util3d.Vector3D,System.Int32[])
void Camera::ConvertScreenToCameraVector3DIntArray(pls::cs::Ref<kl_util3d::Vector3D> screen_pos,
                                                   IntArray camera_pos) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Camera.ConvertScreenToCamera(kairo.unity.m3d4.util3d.Vector3D,System.Int32[])",
                     game);
    {
        pls::cs::Int32 num = pls::cs::to_int32(require(screen_pos)->x_) + Camera::DRAW_CENTER_X() -
                             pls::cs::to_int32(require(Camera::pos())->x_);
        pls::cs::Int32 num2 = pls::cs::to_int32(require(screen_pos)->y_) + Camera::DRAW_CENTER_Y() -
                              pls::cs::to_int32(require(Camera::pos())->y_);
        num2 = Camera::DRAW_VIEW_Y() + Camera::DRAW_VIEW_H() - num2;
        camera_pos[0] = num;
        camera_pos[1] = num2;
    }
}

// M:game.Camera.ConvertScreenToCamera(System.Int32,System.Int32,System.Int32[])
void Camera::ConvertScreenToCamera(pls::cs::Int32 sx, pls::cs::Int32 sy, IntArray camera_pos) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Camera.ConvertScreenToCamera(System.Int32,System.Int32,System.Int32[])", game);
    {
        pls::cs::Int32 num = sx + Camera::DRAW_CENTER_X() - pls::cs::to_int32(require(Camera::pos())->x_);
        pls::cs::Int32 num2 = sy + Camera::DRAW_CENTER_Y() - pls::cs::to_int32(require(Camera::pos())->y_);
        num2 = Camera::DRAW_VIEW_Y() + Camera::DRAW_VIEW_H() - num2;
        camera_pos[0] = num;
        camera_pos[1] = num2;
    }
}

// M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[])
void Camera::ConvertScreenToCameraIntArray(IntArray screen_pos, IntArray camera_pos) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.ConvertScreenToCamera(System.Int32[],System.Int32[])",
                     game);
    {
        auto cs_left_80 = screen_pos[0] + Camera::DRAW_CENTER_X();
        auto cs_right_80 = pls::cs::to_int32(require(Camera::pos())->x_);
        pls::cs::Int32 num = cs_left_80 - cs_right_80;
        auto cs_left_81 = screen_pos[1] + Camera::DRAW_CENTER_Y();
        auto cs_right_81 = pls::cs::to_int32(require(Camera::pos())->y_);
        pls::cs::Int32 num2 = cs_left_81 - cs_right_81;
        num2 = Camera::DRAW_VIEW_Y() + Camera::DRAW_VIEW_H() - num2;
        camera_pos[0] = num;
        camera_pos[1] = num2;
    }
}

// M:game.Camera.ConvertGlobalToCamera(kairo.unity.m3d4.util3d.Vector3D,System.Int32[])
void Camera::ConvertGlobalToCamera(pls::cs::Ref<kl_util3d::Vector3D> global_pos, IntArray var_out) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Camera.ConvertGlobalToCamera(kairo.unity.m3d4.util3d.Vector3D,System.Int32[])",
                     game);
    {
        Camera::ConvertGlobalToScreen(global_pos, Camera::temp_s());
        Camera::ConvertScreenToCameraIntArray(Camera::temp_s(), var_out);
    }
}

// M:game.Camera.ConvertAddressToScreen(System.Int32,System.Int32,System.Int32[])
void Camera::ConvertAddressToScreen(pls::cs::Int32 xi, pls::cs::Int32 yi, IntArray screen_pos) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Camera.ConvertAddressToScreen(System.Int32,System.Int32,System.Int32[])", game);
    {
        screen_pos[0] = xi * 60 / 2 + yi * 60 / 2 - Camera::MAP_SCREEN_W1();
        screen_pos[1] = xi * 60 / 2 - yi * 30 / 2 - Camera::MAP_SCREEN_H1();
    }
}

// M:game.Camera.ConvertAddressToGlobal(System.Int32,System.Int32,kairo.unity.m3d4.util3d.Vector3D)
void Camera::ConvertAddressToGlobal(pls::cs::Int32 xi, pls::cs::Int32 yi,
                                    pls::cs::Ref<kl_util3d::Vector3D> global_pos) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Camera.ConvertAddressToGlobal(System.Int32,System.Int32,kairo.unity.m3d4.util3d.Vector3D)",
        game);
    {
        Map::ensure_initialized();

        require(global_pos)->x_ = pls::cs::Single(xi) * (900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM())) +
                                  900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM()) / 2.0f - 450.0f;
        require(global_pos)->y_ = 0.0f;
        require(global_pos)->z_ =
            pls::cs::Single(yi) * (1800.0f / pls::cs::Single(Map::MAPCHIP_COAT_HNUM())) +
            1800.0f / pls::cs::Single(Map::MAPCHIP_COAT_HNUM()) / 2.0f - 900.0f;
    }
}

// M:game.Camera.ConvertGlobalToAddress(kairo.unity.m3d4.util3d.Vector3D,System.Int32[])
void Camera::ConvertGlobalToAddress(pls::cs::Ref<kl_util3d::Vector3D> global_pos, IntArray out_address) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Camera.ConvertGlobalToAddress(kairo.unity.m3d4.util3d.Vector3D,System.Int32[])",
                     game);
    {
        Map::ensure_initialized();

        out_address[0] = pls::cs::to_int32(((require(global_pos)->x_ - 1.0f + 450.0f) /
                                            (900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM()))));
        out_address[1] = pls::cs::to_int32(((require(global_pos)->z_ - 1.0f + 900.0f) /
                                            (1800.0f / pls::cs::Single(Map::MAPCHIP_COAT_HNUM()))));
    }
}

// M:game.Camera.ConvertGlobalToAddressMain(kairo.unity.m3d4.util3d.Vector3D,System.Int32[])
void Camera::ConvertGlobalToAddressMain(pls::cs::Ref<kl_util3d::Vector3D> global_pos, IntArray out_address) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Camera.ConvertGlobalToAddressMain(kairo.unity.m3d4.util3d.Vector3D,System.Int32[])", game);
    {
        Map::ensure_initialized();

        out_address[0] = pls::cs::to_int32(
            (require(global_pos)->x_ / (900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM()))));
        out_address[1] = pls::cs::to_int32(
            (require(global_pos)->z_ / (1800.0f / pls::cs::Single(Map::MAPCHIP_COAT_HNUM()))));
    }
}

// M:game.Camera.ConvertScreenToGlobal(System.Int32[],kairo.unity.m3d4.util3d.Vector3D)
void Camera::ConvertScreenToGlobal(IntArray screen_pos, pls::cs::Ref<kl_util3d::Vector3D> var_out) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Camera.ConvertScreenToGlobal(System.Int32[],kairo.unity.m3d4.util3d.Vector3D)",
                     game);
    {
        pls::cs::Single num = screen_pos[0] - 480;
        pls::cs::Single num2 = screen_pos[1] - 480;
        pls::cs::Single num3 = pls::cs::Single(Camera::MAP_SCREEN_W2()) / 900.0f;
        pls::cs::Single num4 = pls::cs::Single((-Camera::MAP_SCREEN_W1())) / -1800.0f;
        pls::cs::Single num5 = pls::cs::Single((-Camera::MAP_SCREEN_H1())) / -1800.0f;
        pls::cs::Single num6 = pls::cs::Single((-Camera::MAP_SCREEN_H2())) / 900.0f;
        pls::cs::Single num7 = 1.0f / (num3 * num5 - num4 * num6);
        auto cs_left_12 = (-(num6)) * num7 * pls::cs::Single(screen_pos[0]);
        auto cs_right_12 = num3 * num7 * pls::cs::Single(screen_pos[1]);
        pls::cs::Single num8 = cs_left_12 + cs_right_12;
        pls::cs::Single num9 = pls::cs::Single(screen_pos[0]) / num3 - num4 * num8 / num3;
        require(var_out)->z_ = num8 + 900.0f;
        require(var_out)->x_ = num9 + -450.0f;
    }
}

// M:game.Camera.ChDisplayable(System.Int32,System.Int32,System.Int32,System.Int32)
bool Camera::ChDisplayable(pls::cs::Int32 c_x, pls::cs::Int32 c_y, pls::cs::Int32 w, pls::cs::Int32 h) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Camera.ChDisplayable(System.Int32,System.Int32,System.Int32,System.Int32)",
                     game);
    {
        form::SoccerForm::ensure_initialized();

        if (c_x + w < 0) {
            return false;
        }
        if (c_x - w > 240) {
            return false;
        }
        if (c_y + h < form::SoccerForm::VIEW_Y()) {
            return false;
        }
        if (c_y - h > form::SoccerForm::VIEW_Y() + form::SoccerForm::VIEW_H()) {
            return false;
        }
        return true;
    }
}

// M:game.Camera.SetMapPosData
void Camera::SetMapPosData() {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.SetMapPosData", game);
    {
        Camera::MAP_SCREEN_LEFT() = (-Camera::MAP_SCREEN_W() / 2);
        Camera::MAP_SCREEN_RIGHT() = Camera::MAP_SCREEN_LEFT() + Camera::MAP_SCREEN_W();
        Camera::MAP_SCREEN_TOP() = Camera::MAP_SCREEN_H() / 2;
        Camera::MAP_SCREEN_BOTTOM() = Camera::MAP_SCREEN_TOP() - Camera::MAP_SCREEN_H();
    }
}

// M:game.Camera.SetCameraLimitData
void Camera::SetCameraLimitData() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.SetCameraLimitData", game);
    {
    }
}

// M:game.Camera.Serialize(java.io.OutputStream)
void Camera::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.Serialize(java.io.OutputStream)", game);
    {
        PLS_API(kl_unity_util::StreamUtil::WriteVector3D(os, Camera::pos()));
        PLS_API(kl_unity_util::StreamUtil::WriteVector3D(os, Camera::old_pos()));
        PLS_API(kl_unity_util::StreamUtil::WriteVector3D(os, Camera::save_pos()));
        PLS_API(kl_unity_util::StreamUtil::WriteVector3D(os, Camera::save_cursorPos()));
        PLS_API(kl_unity_util::StreamUtil::WriteVector3D(os, Camera::cursor_pos()));
    }
}

// M:game.Camera.Deserialize(java.io.InputStream)
void Camera::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.Deserialize(java.io.InputStream)", game);
    {
        Camera::pos() = PLS_API(kl_unity_util::StreamUtil::ReadVector3D(stream));
        Camera::old_pos() = PLS_API(kl_unity_util::StreamUtil::ReadVector3D(stream));
        Camera::save_pos() = PLS_API(kl_unity_util::StreamUtil::ReadVector3D(stream));
        Camera::save_cursorPos() = PLS_API(kl_unity_util::StreamUtil::ReadVector3D(stream));
        Camera::cursor_pos() = PLS_API(kl_unity_util::StreamUtil::ReadVector3D(stream));
    }
}

// M:game.Camera.ChangeMode(System.Int32)
void Camera::ChangeMode(pls::cs::Int32 next_mode) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.ChangeMode(System.Int32)", game);
    {
        mode_ = next_mode;
    }
}

// M:game.Camera.GetPosFromAddress(System.Int32,System.Int32)
pls::cs::Ref<kl_util3d::Vector3D> Camera::GetPosFromAddress(pls::cs::Int32 xi, pls::cs::Int32 yi) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.GetPosFromAddress(System.Int32,System.Int32)", game);
    {
        Map::ensure_initialized();

        require(Camera::COATADDRESS_POS())->x_ =
            (-450.0f + pls::cs::Single(xi) * 900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM()));
        require(Camera::COATADDRESS_POS())->y_ = 0.0f;
        require(Camera::COATADDRESS_POS())->z_ =
            (-900.0f + pls::cs::Single(yi) * 1800.0f / pls::cs::Single(Map::MAPCHIP_COAT_HNUM()));
        return Camera::COATADDRESS_POS();
    }
}

// M:game.Camera.DrawTest(kairo.unity.ui.Graphics)
void Camera::DrawTest(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.DrawTest(kairo.unity.ui.Graphics)", game);
    {
    }
}

// M:game.Camera.DrawCursor(kairo.unity.ui.Graphics)
void Camera::DrawCursor(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.DrawCursor(kairo.unity.ui.Graphics)", game);
    {
        if (!(flg_disp)) {
            return;
        }
        if (!(cursorCnt_ < 80)) {
            return;
        }
        pls::cs::Ref<surface::GameView> gameView = surface::GameView::GetInstance();
        pls::cs::Int32 scale_ = require(require(apdat_)->frmGame_)->scale_;
        Camera::temp_cursorSPos()[0] = pls::cs::to_int32(
            (require(Camera::pos())->x_ + (require(Camera::cursor_pos())->x_ - require(Camera::pos())->x_) *
                                              pls::cs::Single(scale_) / 100.0f));
        Camera::temp_cursorSPos()[1] = pls::cs::to_int32(
            (require(Camera::pos())->y_ + (require(Camera::cursor_pos())->y_ - require(Camera::pos())->y_) *
                                              pls::cs::Single(scale_) / 100.0f));
        Camera::ConvertScreenToCameraIntArray(Camera::temp_cursorSPos(), temp_cpos);
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(80);
            pls::cs::Single cs_arg1 = temp_cpos[0];
            pls::cs::Single cs_arg2 = temp_cpos[1];
            require(g)->DrawImage(cs_arg0, cs_arg1, cs_arg2);
        }()));
        return;
    }
}

// M:game.Camera.SetCameraRect
void Camera::SetCameraRect() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.SetCameraRect", game);
    {
        form::GameForm::ensure_initialized();

        if (!(Camera::CAMERA_LIMIT())) {

        } else {
            if ([&]() -> bool {
                    auto cs_left = require(Camera::pos())->x_;
                    auto cs_right = pls::cs::Single((CAMERA_RECT[0][0]));
                    return cs_left < cs_right;
                }()) {
                {
                    auto cs_target = Camera::pos();
                    pls::cs::Single cs_value = CAMERA_RECT[0][0];
                    require(cs_target)->x_ = cs_value;
                }
            }
            if ([&]() -> bool {
                    auto cs_left = require(Camera::pos())->x_;
                    auto cs_right = pls::cs::Single((CAMERA_RECT[1][0]));
                    return cs_left > cs_right;
                }()) {
                {
                    auto cs_target = Camera::pos();
                    pls::cs::Single cs_value = CAMERA_RECT[1][0];
                    require(cs_target)->x_ = cs_value;
                }
            }
            if ([&]() -> bool {
                    auto cs_left = require(Camera::pos())->y_;
                    auto cs_right = pls::cs::Single((CAMERA_RECT[1][1]));
                    return cs_left < cs_right;
                }()) {
                {
                    auto cs_target = Camera::pos();
                    pls::cs::Single cs_value = CAMERA_RECT[1][1];
                    require(cs_target)->y_ = cs_value;
                }
            }
            if ([&]() -> bool {
                    auto cs_left = require(Camera::pos())->y_;
                    auto cs_right = pls::cs::Single((CAMERA_RECT[0][1]));
                    return cs_left > cs_right;
                }()) {
                {
                    auto cs_target = Camera::pos();
                    pls::cs::Single cs_value = CAMERA_RECT[0][1];
                    require(cs_target)->y_ = cs_value;
                }
            }
            if ([&]() -> bool {
                    auto cs_left = require(Camera::cursor_pos())->x_;
                    auto cs_right = pls::cs::Single((([&]() -> pls::cs::Int32 {
                        auto cs_left = CAMERA_RECT[0][0];
                        auto cs_right = CURSOR_LIMIT_OFF[2];
                        return cs_left + cs_right;
                    }())));
                    return cs_left < cs_right;
                }()) {
                {
                    auto cs_target = Camera::cursor_pos();
                    auto cs_left_123 = CAMERA_RECT[0][0];
                    auto cs_right_123 = CURSOR_LIMIT_OFF[2];
                    pls::cs::Single cs_value = pls::cs::Int32(cs_left_123 + cs_right_123);
                    require(cs_target)->x_ = cs_value;
                }
            }
            if ([&]() -> bool {
                    auto cs_left = require(Camera::cursor_pos())->x_;
                    auto cs_right = pls::cs::Single((([&]() -> pls::cs::Int32 {
                        auto cs_left = CAMERA_RECT[1][0];
                        auto cs_right = CURSOR_LIMIT_OFF[3];
                        return cs_left + cs_right;
                    }())));
                    return cs_left > cs_right;
                }()) {
                {
                    auto cs_target = Camera::cursor_pos();
                    auto cs_left_124 = CAMERA_RECT[1][0];
                    auto cs_right_124 = CURSOR_LIMIT_OFF[3];
                    pls::cs::Single cs_value = pls::cs::Int32(cs_left_124 + cs_right_124);
                    require(cs_target)->x_ = cs_value;
                }
            }
            if ([&]() -> bool {
                    auto cs_left = require(Camera::cursor_pos())->y_;
                    auto cs_right = pls::cs::Single((([&]() -> pls::cs::Int32 {
                        auto cs_left = CAMERA_RECT[1][1];
                        auto cs_right = CURSOR_LIMIT_OFF[1];
                        return cs_left + cs_right;
                    }())));
                    return cs_left < cs_right;
                }()) {
                {
                    auto cs_target = Camera::cursor_pos();
                    auto cs_left_125 = CAMERA_RECT[1][1];
                    auto cs_right_125 = CURSOR_LIMIT_OFF[1];
                    pls::cs::Single cs_value = pls::cs::Int32(cs_left_125 + cs_right_125);
                    require(cs_target)->y_ = cs_value;
                }
            }
            if ([&]() -> bool {
                    auto cs_left = require(Camera::cursor_pos())->y_;
                    auto cs_right = pls::cs::Single((([&]() -> pls::cs::Int32 {
                                                         auto cs_left = CAMERA_RECT[0][1];
                                                         auto cs_right = CURSOR_LIMIT_OFF[0];
                                                         return cs_left + cs_right;
                                                     }()) -
                                                     form::GameForm::VIEW_Y()));
                    return cs_left > cs_right;
                }()) {
                {
                    auto cs_target = Camera::cursor_pos();
                    pls::cs::Single cs_value = ([&]() -> pls::cs::Int32 {
                                                   auto cs_left = CAMERA_RECT[0][1];
                                                   auto cs_right = CURSOR_LIMIT_OFF[0];
                                                   return cs_left + cs_right;
                                               }()) -
                                               form::GameForm::VIEW_Y();
                    require(cs_target)->y_ = cs_value;
                }
            }
        }
    }
}

// M:game.Camera.PanManagement
void Camera::PanManagement() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.PanManagement", game);
    const auto pad = PLS_API(pls::kairo::read_circle_pad());
    if (pad.x == 0 && pad.y == 0)
        return;
    const auto gameForm = require(apdat_)->frmGame_;
    const pls::cs::Single step = management_pan_pixels_per_frame * 100.0f / require(gameForm)->scale_;
    require(Camera::pos())->x_ += step * pls::cs::Single(pad.x) / pls::kairo::circle_pad_max;
    require(Camera::pos())->y_ -= step * pls::cs::Single(pad.y) / pls::kairo::circle_pad_max;
    SetCameraRect();
}

// M:game.Camera.ReframeManagementCursor
void Camera::ReframeManagementCursor() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.ReframeManagementCursor", game);
    const auto gameForm = require(apdat_)->frmGame_;
    const auto view = surface::GameView::GetInstance();
    const pls::cs::Single zoom = require(gameForm)->scale_ / 100.0f;
    const pls::cs::Single left = (require(view)->GetGameWidth() / 2 - form::GameForm::VIEW_X()) / zoom;
    const pls::cs::Single right = (require(view)->GetGameWidth() / 2) / zoom;
    const pls::cs::Single above = (require(view)->GetGameHeight() / 2 - form::GameForm::VIEW_Y()) / zoom;
    const pls::cs::Single below = (require(view)->GetGameHeight() / 2) / zoom;
    const pls::cs::Single margin_x = management_lot_margin_x;
    const pls::cs::Single margin_y = management_lot_margin_y;
    const auto cursor = Camera::cursor_pos();
    const auto camera = Camera::pos();
    if (require(cursor)->x_ < require(camera)->x_ - left)
        require(camera)->x_ = require(cursor)->x_ + left - margin_x;
    else if (require(cursor)->x_ >= require(camera)->x_ + right)
        require(camera)->x_ = require(cursor)->x_ - right + margin_x;
    if (require(cursor)->y_ > require(camera)->y_ + above)
        require(camera)->y_ = require(cursor)->y_ - above + margin_y;
    else if (require(cursor)->y_ <= require(camera)->y_ - below)
        require(camera)->y_ = require(cursor)->y_ + below - margin_y;
    SetCameraRect();
}

// M:game.Camera.Update_normal
void Camera::Update_normal() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.Update_normal", game);
    {
        PLS_API(require(v)->Set(0.0f, 0.0f, 0.0f));
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = 0;
        pls::cs::Int32 num3;
        pls::cs::Int32 num4;
        if (cursorPressCnt_ <= 6) {
            num3 = 3;
            num4 = 4;
        } else if (cursorPressCnt_ <= 20) {
            num3 = 6;
            num4 = 8;
        } else {
            num3 = 8;
            num4 = 10;
        }
        bool flag = PLS_API(require(canvas_)->CheckKeyState(131072));
        bool flag2 = PLS_API(require(canvas_)->CheckKeyState(524288));
        bool flag3 = PLS_API(require(canvas_)->CheckKeyState(65536));
        bool flag4 = PLS_API(require(canvas_)->CheckKeyState(262144));
        if (flag4 && flag) {
            num = num4 / 1;
            num2 = num4 / 2;
        } else if (flag4 && flag2) {
            num = num4 / 1;
            num2 = (-num4 / 2);
        } else if (flag3 && flag) {
            num = (-num4 / 1);
            num2 = num4 / 2;
        } else if (flag3 && flag2) {
            num = (-num4 / 1);
            num2 = (-num4 / 2);
        } else if (flag) {
            num2 = num3;
        } else if (flag2) {
            num2 = -num3;
        } else if (flag4) {
            num = num3;
        } else if (flag3) {
            num = -num3;
        }
        PLS_API(require(v)->Set(num, num2, 0.0f));
        PLS_API(require(Camera::cursor_pos())->Add(v));
        if (num == 0 && num2 == 0) {
            cursorPressCnt_ = 0;
            pls::cs::Ref<kl_util3d::Vector3D> touchCameraSpeed_ =
                require(require(apdat_)->frmGame_)->touchCameraSpeed_;
            pls::cs::Ref<kl_util3d::Vector3D> touchCameraDecimal_ =
                require(require(apdat_)->frmGame_)->touchCameraDecimal_;
            pls::cs::Ref<kl_unity_util::FastVector> touchCameraPoint_ =
                require(require(apdat_)->frmGame_)->touchCameraPoint_;
            bool touchDragCamera_ = require(require(apdat_)->frmGame_)->touchDragCamera_;
            bool touchBuildDrag_ = require(require(apdat_)->frmGame_)->touchBuildDrag_;
            if (require(touchCameraSpeed_)->x_ != 0.0f || require(touchCameraSpeed_)->z_ != 0.0f) {
                PLS_API(require(touchCameraDecimal_)->Add(touchCameraSpeed_));
                PLS_API(require(touchCameraSpeed_)
                            ->Set(require(touchCameraSpeed_)->x_ / 1.75f,
                                  require(touchCameraSpeed_)->y_ / 1.75f,
                                  require(touchCameraSpeed_)->z_ / 1.75f));
                if (PLS_API(pls::cs::Single(kl_lang::JMath::Abs(require(touchCameraSpeed_)->x_))) < 0.5f) {
                    require(touchCameraSpeed_)->x_ = 0.0f;
                }
                if (PLS_API(pls::cs::Single(kl_lang::JMath::Abs(require(touchCameraSpeed_)->z_))) < 0.5f) {
                    require(touchCameraSpeed_)->z_ = 0.0f;
                }
                num = pls::cs::to_int32(require(touchCameraDecimal_)->x_);
                num2 = pls::cs::to_int32(require(touchCameraDecimal_)->z_);
                PLS_API(require(touchCameraDecimal_)->Add(-num, 0.0f, -num2));
                PLS_API(require(Camera::cursor_pos())->Add(num, -num2, 0.0f));
                ++cursorPressCnt_;
                flg_disp = false;
                PLS_API(require(Camera::pos())->Set(Camera::cursor_pos()));
            }
        } else {
            ++cursorPressCnt_;
            flg_disp = true;
            SetCameraRect();
            ReframeManagementCursor();
        }
    }
}

// M:game.Camera.SetDrawCenter(System.Int32,System.Int32,System.Int32,System.Int32)
void Camera::SetDrawCenter(pls::cs::Int32 viewX, pls::cs::Int32 viewY, pls::cs::Int32 viewW,
                           pls::cs::Int32 viewH) {
    Camera::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Camera.SetDrawCenter(System.Int32,System.Int32,System.Int32,System.Int32)",
                     game);
    {
        Camera::DRAW_CENTER_X() = (viewX + viewW) / 2;
        Camera::DRAW_CENTER_Y() = (viewY + viewH) / 2;
        Camera::DRAW_VIEW_X() = viewX;
        Camera::DRAW_VIEW_Y() = viewY;
        Camera::DRAW_VIEW_W() = viewW;
        Camera::DRAW_VIEW_H() = viewH;
    }
}

// M:game.Camera.Collision(System.Int32,System.Int32)
void Camera::Collision(pls::cs::Int32 cursor_sx, pls::cs::Int32 cursor_sy) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Camera.Collision(System.Int32,System.Int32)", game);
    {
        Camera::temp_spos()[0] = cursor_sx;
        Camera::temp_spos()[1] = cursor_sy;
        Camera::ConvertScreenToGlobal(Camera::temp_spos(), Camera::temp_gpos());
        PLS_API(require(Camera::CAMERA_ADS_GPOS())
                    ->Set(require(Camera::temp_gpos())->x_ - require(Camera::CAMERA_BASE_GPOS())->x_, 0.0f,
                          require(Camera::temp_gpos())->z_ - require(Camera::CAMERA_BASE_GPOS())->z_));
        Camera::ConvertGlobalToAddressMain(Camera::CAMERA_ADS_GPOS(), Camera::temp_address());
        pls::cs::Ref<form::FormManager> formManager = form::FormManager::GetInstance();
        pls::cs::Ref<pls::kairo::FormBase> currentForm = PLS_API(require(formManager)->GetCurrentForm());
        if (PLS_API(require(currentForm)->GetId()) == 9) {
            bool flag = false;
            for (pls::cs::Int32 i = 0; i < require(udat_)->tAreas_.length() && !flag; ++i) {
                for (pls::cs::Int32 j = 0; j < require(udat_)->tAreas_[i].length() && !flag; ++j) {
                    pls::cs::Ref<TArea> tArea = require(udat_)->tAreas_[i].get_Item(j);
                    for (pls::cs::Int32 k = 0; k < require(tArea)->tGroupAreas_.length() && !flag; ++k) {
                        pls::cs::Ref<TGroupArea> tGroupArea = require(tArea)->tGroupAreas_.get_Item(k);
                        for (pls::cs::Int32 l = 0;
                             l <
                             PLS_API(kl_java_util::Vector_2_Size(require(require(tGroupArea)->tPlayerList_)));
                             ++l) {
                            pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(tGroupArea)->tPlayerList_), l)));
                            if (PLS_API(kl_unity_util::BitUtil::Check(require(tPlayer)->flag_, 1))) {
                                continue;
                            }
                            if ([&]() -> bool {
                                    pls::cs::Int32 cs_arg4 = require(tPlayer)->screen_pos_[0] - 7;
                                    pls::cs::Int32 cs_arg5 = require(tPlayer)->screen_pos_[1] + 28;
                                    return GameUtil::ChRectHitRect(cursor_sx - 4, cursor_sy + 4, 8, 8,
                                                                   cs_arg4, cs_arg5, 14, 28, true);
                                }()) {
                                flag = true;
                                subPlayer_ = tPlayer;
                                break;
                            }
                        }
                    }
                }
                if (!flag && ([&]() -> bool {
                        pls::cs::Int32 cs_arg4 = require(require(udat_)->tp_svisor_)->screen_pos_[0] - 7;
                        pls::cs::Int32 cs_arg5 = require(require(udat_)->tp_svisor_)->screen_pos_[1] + 28;
                        return GameUtil::ChRectHitRect(cursor_sx - 4, cursor_sy + 4, 8, 8, cs_arg4, cs_arg5,
                                                       14, 28, true);
                    }())) {
                    flag = true;
                    subSvisor_ = require(udat_)->tp_svisor_;
                }
            }
            subTenant_ = pls::cs::Ref<Tenant>{};
            for (pls::cs::Int32 m = 0; m < require(udat_)->tenants_.length(); ++m) {
                pls::cs::Ref<Tenant> tenant = require(udat_)->tenants_.get_Item(m);
                if (require(tenant)->root_ == 1 && require(udat_)->tAreaRootNum_ == 1) {
                    continue;
                }
                if ((([&]() -> bool {
                         auto cs_left = Camera::temp_address()[0];
                         auto cs_right = require(tenant)->address_[0];
                         return cs_left == cs_right;
                     }()) ||
                     ([&]() -> bool {
                         auto cs_left = Camera::temp_address()[0];
                         auto cs_right = require(tenant)->address_[0] + 1;
                         return cs_left == cs_right;
                     }())) &&
                    (([&]() -> bool {
                         auto cs_left = Camera::temp_address()[1];
                         auto cs_right = require(tenant)->address_[1];
                         return cs_left == cs_right;
                     }()) ||
                     ([&]() -> bool {
                         auto cs_left = Camera::temp_address()[1];
                         auto cs_right = require(tenant)->address_[1] - 1;
                         return cs_left == cs_right;
                     }()))) {
                    subTenant_ = tenant;
                }
            }
        }
    }
}
} // namespace game
}
