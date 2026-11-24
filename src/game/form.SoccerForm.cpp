// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.FanActData.hpp"
#include "data.FanBonusData.hpp"
#include "data.FormationData.hpp"
#include "data.LeagueData.hpp"
#include "data.PlayerData.hpp"
#include "data.QuestMatchData.hpp"
#include "data.SponsorData.hpp"
#include "data.StadiumData.hpp"
#include "data.SupervisorData.hpp"
#include "data.TeamData.hpp"
#include "data.TenantData.hpp"
#include "form.DebugForm.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.SoccerForm.hpp"
#include "form.SubForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.Player.hpp"
#include "game.Team.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.FastVector.hpp"
#include "generated/kairo.unity.util.FastVector_1.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"
#include "generated/kairo.unity.util.FastVector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace form {

void SoccerForm::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    MyFormBase::trace_edges(visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(statusPlayer_, visitor);
    pls::cs::trace_value(dialog__SoccerForm, visitor);
    pls::cs::trace_value(menu_, visitor);
    pls::cs::trace_value(editCursor, visitor);
    pls::cs::trace_value(editStock, visitor);
    pls::cs::trace_value(script_, visitor);
    pls::cs::trace_value(bonus_p_list, visitor);
    pls::cs::trace_value(bonus_in_param, visitor);
    pls::cs::trace_value(offscreenDayTimeString_, visitor);
    pls::cs::trace_value(offscreenMoneyString_, visitor);
    pls::cs::trace_value(offUpdateSRect, visitor);
    pls::cs::trace_value(customerNum, visitor);
    pls::cs::trace_value(touchCameraSpeed_, visitor);
    pls::cs::trace_value(touchCameraDecimal_, visitor);
    pls::cs::trace_value(touchCameraPoint_, visitor);
    pls::cs::trace_value(getScaleRange_tmp, visitor);
}

static IntArray SoccerForm_BONUS_F_CYCLE_storage{};

static IntArray SoccerForm_BONUS_F_CYCLE_MAIN_storage{};

static IntArray SoccerForm_BONUS_IN_CYCLE_storage{};

static IntArray SoccerForm_BONUS_P_CYCLE_storage{};

static pls::cs::Int32 SoccerForm_BOTTOM_INFO_BAR_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_1KEYSTOP_MODE_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_1KEYSTOP_MODE2_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_3KEY_KICKTEST_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_8KEY_FAST_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_BALLPLAYER_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_BALLTEST_MODE_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_GAMEMODE_5KEY_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_GAMETIMESTOP_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_GK_MODE_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_PASSSTOP_MODE_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_PLAYER_NOTACT_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_SCREENTRAVEL_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_START_P1_TEAMID_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_START_P2_TEAMID_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_START_STATE_storage{};

static pls::cs::Int32 SoccerForm_DEBUG_WALLREFRECT_storage{};

static pls::cs::Int32 SoccerForm_DISP_COPAREA_storage{};

static pls::cs::Int32 SoccerForm_FLG_PROCESSTIME_storage{};

static pls::cs::Ref<pls::kairo::Offscreen> SoccerForm_offGameScreen__storage{};

static IntArray SoccerForm_PBONUS_NP_LV_POPULAR_storage{};

static IntArray SoccerForm_PBONUS_NP_LV_T_GET_storage{};

static IntArray SoccerForm_PBONUS_NP_LV_TIME_storage{};

static IntArray SoccerForm_PBONUS_NP_LV_TRAINING1_storage{};

static bool SoccerForm_resetOffscreen__storage{};

static pls::cs::Int32 SoccerForm_SHOW_DEBUGDRAW_storage{};

static pls::cs::Int32 SoccerForm_SHOW_DEBUGDRAW2_storage{};

static pls::cs::Int32 SoccerForm_SHOW_DRAWNUM_storage{};

static pls::cs::Int32 SoccerForm_SHOW_FPS_storage{};

static pls::cs::Int32 SoccerForm_SHOW_MEMORY_storage{};

static pls::cs::Int32 SoccerForm_SHOW_PDTIME_storage{};

static IntArray2 SoccerForm_softLabels__storage{};

static IntArray SoccerForm_STADIUM_BTMINFO_TIME_storage{};

static pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>>
    SoccerForm_STADIUM_CAERA_BASE_POS_storage{};

static IntArray SoccerForm_STADIUM_CAMERA_TIME_storage{};

static IntArray SoccerForm_STATUS_AMEFTO_ANIME_storage{};

static IntArray SoccerForm_STATUS_AMEFTO_COLOR_storage{};

static StringArray SoccerForm_STATUS_AMEFTO_NAME_storage{};

static IntArray SoccerForm_TBAR_SX_storage{};

static IntArray SoccerForm_TBAR_W_storage{};

static IntArray SoccerForm_TEST_STATE_storage{};

static pls::cs::Int32 SoccerForm_VIEW_H_storage{};

static pls::cs::Int32 SoccerForm_VIEW_W_storage{};

static pls::cs::Int32 SoccerForm_VIEW_X_storage{};

static pls::cs::Int32 SoccerForm_VIEW_Y_storage{};

static PLS_NOINLINE void cs_init_65bcdaa7ea8c7d7a_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(SoccerForm_BONUS_F_CYCLE_storage, visitor);
        pls::cs::trace_value(SoccerForm_BONUS_F_CYCLE_MAIN_storage, visitor);
        pls::cs::trace_value(SoccerForm_BONUS_IN_CYCLE_storage, visitor);
        pls::cs::trace_value(SoccerForm_BONUS_P_CYCLE_storage, visitor);
        pls::cs::trace_value(SoccerForm_BOTTOM_INFO_BAR_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_1KEYSTOP_MODE_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_1KEYSTOP_MODE2_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_3KEY_KICKTEST_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_8KEY_FAST_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_BALLPLAYER_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_BALLTEST_MODE_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_GAMEMODE_5KEY_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_GAMETIMESTOP_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_GK_MODE_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_PASSSTOP_MODE_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_PLAYER_NOTACT_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_SCREENTRAVEL_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_START_P1_TEAMID_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_START_P2_TEAMID_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_START_STATE_storage, visitor);
        pls::cs::trace_value(SoccerForm_DEBUG_WALLREFRECT_storage, visitor);
        pls::cs::trace_value(SoccerForm_DISP_COPAREA_storage, visitor);
        pls::cs::trace_value(SoccerForm_FLG_PROCESSTIME_storage, visitor);
        pls::cs::trace_value(SoccerForm_offGameScreen__storage, visitor);
        pls::cs::trace_value(SoccerForm_PBONUS_NP_LV_POPULAR_storage, visitor);
        pls::cs::trace_value(SoccerForm_PBONUS_NP_LV_T_GET_storage, visitor);
        pls::cs::trace_value(SoccerForm_PBONUS_NP_LV_TIME_storage, visitor);
        pls::cs::trace_value(SoccerForm_PBONUS_NP_LV_TRAINING1_storage, visitor);
        pls::cs::trace_value(SoccerForm_resetOffscreen__storage, visitor);
        pls::cs::trace_value(SoccerForm_SHOW_DEBUGDRAW_storage, visitor);
        pls::cs::trace_value(SoccerForm_SHOW_DEBUGDRAW2_storage, visitor);
        pls::cs::trace_value(SoccerForm_SHOW_DRAWNUM_storage, visitor);
        pls::cs::trace_value(SoccerForm_SHOW_FPS_storage, visitor);
        pls::cs::trace_value(SoccerForm_SHOW_MEMORY_storage, visitor);
        pls::cs::trace_value(SoccerForm_SHOW_PDTIME_storage, visitor);
        pls::cs::trace_value(SoccerForm_softLabels__storage, visitor);
        pls::cs::trace_value(SoccerForm_STADIUM_BTMINFO_TIME_storage, visitor);
        pls::cs::trace_value(SoccerForm_STADIUM_CAERA_BASE_POS_storage, visitor);
        pls::cs::trace_value(SoccerForm_STADIUM_CAMERA_TIME_storage, visitor);
        pls::cs::trace_value(SoccerForm_STATUS_AMEFTO_ANIME_storage, visitor);
        pls::cs::trace_value(SoccerForm_STATUS_AMEFTO_COLOR_storage, visitor);
        pls::cs::trace_value(SoccerForm_STATUS_AMEFTO_NAME_storage, visitor);
        pls::cs::trace_value(SoccerForm_TBAR_SX_storage, visitor);
        pls::cs::trace_value(SoccerForm_TBAR_W_storage, visitor);
        pls::cs::trace_value(SoccerForm_TEST_STATE_storage, visitor);
        pls::cs::trace_value(SoccerForm_VIEW_H_storage, visitor);
        pls::cs::trace_value(SoccerForm_VIEW_W_storage, visitor);
        pls::cs::trace_value(SoccerForm_VIEW_X_storage, visitor);
        pls::cs::trace_value(SoccerForm_VIEW_Y_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("form.SoccerForm", flag, []() {
        SoccerForm_STATUS_AMEFTO_ANIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.STATUS_AMEFTO_ANIME", [&]() { return IntArray::from({20, 30}); });
        SoccerForm_STATUS_AMEFTO_NAME_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.STATUS_AMEFTO_NAME", [&]() {
                return StringArray::from({literal(u"通常"), literal(u"ﾄﾞﾘﾌﾞﾙ中心"), literal(u"ﾛﾝｸﾞﾊﾟｽ中心")});
            });
        SoccerForm_STATUS_AMEFTO_COLOR_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.STATUS_AMEFTO_COLOR", [&]() {
                return IntArray::from({PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0)),
                                       PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 84)),
                                       PLS_API(pls::kairo::Graphics::GetColorOfRGB(31, 143, 255))});
            });
        SoccerForm_softLabels__storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.softLabels_", [&]() {
                return IntArray2::from(
                    {IntArray::from({0, 4}), IntArray::make(2),      IntArray::make(2),
                     IntArray::make(2),      IntArray::make(2),      IntArray::make(2),
                     IntArray::make(2),      IntArray::make(2),      IntArray::make(2),
                     IntArray::make(2),      IntArray::make(2),      IntArray::make(2),
                     IntArray::make(2),      IntArray::make(2),      IntArray::from({6, 0}),
                     IntArray::from({6, 0}), IntArray::from({6, 0}), IntArray::make(2),
                     IntArray::make(2),      IntArray::make(2),      IntArray::make(2),
                     IntArray::make(2)});
            });
        SoccerForm_BOTTOM_INFO_BAR_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.BOTTOM_INFO_BAR", [&]() { return 0; });
        SoccerForm_VIEW_X_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.VIEW_X", [&]() { return 0; });
        SoccerForm_VIEW_Y_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.VIEW_Y", [&]() { return 21; });
        SoccerForm_VIEW_W_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.VIEW_W", [&]() { return 240; });
        SoccerForm_VIEW_H_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.VIEW_H", [&]() {
                return ([&]() -> pls::cs::Int32 {
                    auto cs_left = 240 - SoccerForm::VIEW_Y();
                    auto cs_right = SoccerForm::BOTTOM_INFO_BAR();
                    return cs_left - cs_right;
                }());
            });
        SoccerForm_BONUS_P_CYCLE_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.BONUS_P_CYCLE", [&]() { return IntArray::from({20, 50, 70, 95}); });
        SoccerForm_BONUS_F_CYCLE_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.BONUS_F_CYCLE", [&]() { return IntArray::from({30, 42, 102, 114, 144}); });
        SoccerForm_BONUS_F_CYCLE_MAIN_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.BONUS_F_CYCLE_MAIN", [&]() { return IntArray::from({25, 40, 55, 60}); });
        SoccerForm_BONUS_IN_CYCLE_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.BONUS_IN_CYCLE", [&]() { return IntArray::from({22, 44, 66, 88, 110, 130}); });
        SoccerForm_STADIUM_CAMERA_TIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.STADIUM_CAMERA_TIME", [&]() { return IntArray::from({20, 185, 205}); });
        SoccerForm_STADIUM_CAERA_BASE_POS_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.STADIUM_CAERA_BASE_POS", [&]() {
                return pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>>::from(
                    {pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                         {kl_util3d::Vector3D::create(-480.0f, -171.0f, 0.0f),
                          kl_util3d::Vector3D::create(0.0f, 69.0f, 0.0f)}),
                     pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                         {kl_util3d::Vector3D::create(-480.0f, -210.0f, 0.0f),
                          kl_util3d::Vector3D::create(0.0f, 30.0f, 0.0f)}),
                     pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                         {kl_util3d::Vector3D::create(-480.0f, -143.0f, 0.0f),
                          kl_util3d::Vector3D::create(0.0f, 97.0f, 0.0f)})});
            });
        SoccerForm_STADIUM_BTMINFO_TIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.STADIUM_BTMINFO_TIME", [&]() { return IntArray::from({20, 65, 95, 115}); });
        SoccerForm_PBONUS_NP_LV_TIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.PBONUS_NP_LV_TIME", [&]() { return IntArray::from({0, 40, 55, 95}); });
        SoccerForm_PBONUS_NP_LV_POPULAR_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.PBONUS_NP_LV_POPULAR", [&]() { return IntArray::from({10, 22, 47, 77}); });
        SoccerForm_PBONUS_NP_LV_TRAINING1_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.PBONUS_NP_LV_TRAINING1", [&]() { return IntArray::from({10, 232}); });
        SoccerForm_PBONUS_NP_LV_T_GET_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.PBONUS_NP_LV_T_GET", [&]() { return IntArray::from({42, 62}); });
        SoccerForm_DISP_COPAREA_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.DISP_COPAREA", [&]() { return 1; });
        SoccerForm_FLG_PROCESSTIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.FLG_PROCESSTIME", [&]() { return 0; });
        SoccerForm_SHOW_FPS_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.SHOW_FPS", [&]() { return 1; });
        SoccerForm_SHOW_MEMORY_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.SHOW_MEMORY", [&]() { return 0; });
        SoccerForm_SHOW_PDTIME_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.SHOW_PDTIME", [&]() { return 1; });
        SoccerForm_SHOW_DRAWNUM_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.SHOW_DRAWNUM", [&]() { return 0; });
        SoccerForm_SHOW_DEBUGDRAW_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.SHOW_DEBUGDRAW", [&]() { return 0; });
        SoccerForm_SHOW_DEBUGDRAW2_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.SHOW_DEBUGDRAW2", [&]() { return 0; });
        SoccerForm_DEBUG_GK_MODE_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.DEBUG_GK_MODE", [&]() { return 0; });
        SoccerForm_DEBUG_PLAYER_NOTACT_storage =
            pls::cs::evaluate_type_initializer_field("F:form.SoccerForm.DEBUG_PLAYER_NOTACT", [&]() {
                return ((SoccerForm::DEBUG_GK_MODE() == 1) ? 1 : 0);
            });
        SoccerForm_DEBUG_PASSSTOP_MODE_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_PASSSTOP_MODE", [&]() { return 0; });
        SoccerForm_DEBUG_1KEYSTOP_MODE_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_1KEYSTOP_MODE", [&]() { return 0; });
        SoccerForm_DEBUG_WALLREFRECT_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_WALLREFRECT", [&]() { return 0; });
        SoccerForm_DEBUG_3KEY_KICKTEST_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_3KEY_KICKTEST", [&]() { return 1; });
        SoccerForm_DEBUG_BALLTEST_MODE_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_BALLTEST_MODE", [&]() { return 0; });
        SoccerForm_DEBUG_BALLPLAYER_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_BALLPLAYER", [&]() { return 0; });
        SoccerForm_DEBUG_1KEYSTOP_MODE2_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_1KEYSTOP_MODE2", [&]() { return 1; });
        SoccerForm_DEBUG_8KEY_FAST_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_8KEY_FAST", [&]() { return 1; });
        SoccerForm_DEBUG_SCREENTRAVEL_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_SCREENTRAVEL", [&]() { return 0; });
        SoccerForm_DEBUG_START_STATE_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_START_STATE", [&]() { return -1; });
        SoccerForm_DEBUG_START_P1_TEAMID_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_START_P1_TEAMID", [&]() { return -1; });
        SoccerForm_DEBUG_START_P2_TEAMID_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_START_P2_TEAMID", [&]() { return -1; });
        SoccerForm_DEBUG_GAMETIMESTOP_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_GAMETIMESTOP", [&]() { return 0; });
        SoccerForm_DEBUG_GAMEMODE_5KEY_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.DEBUG_GAMEMODE_5KEY", [&]() { return 0; });
        SoccerForm_TEST_STATE_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.TEST_STATE", [&]() { return IntArray::from({0, 6, 7}); });
        SoccerForm_TBAR_SX_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.TBAR_SX", [&]() { return IntArray::from({99, 0, 14, 99, 141, 226, 1}); });
        SoccerForm_TBAR_W_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.SoccerForm.TBAR_W", [&]() { return IntArray::from({17, 14, 85, 42, 85, 14, 12}); });
    });
}

void SoccerForm::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_65bcdaa7ea8c7d7a_slow(flag);
}

IntArray& SoccerForm::BONUS_F_CYCLE() {
    SoccerForm::ensure_initialized();
    return SoccerForm_BONUS_F_CYCLE_storage;
}

IntArray& SoccerForm::BONUS_F_CYCLE_MAIN() {
    SoccerForm::ensure_initialized();
    return SoccerForm_BONUS_F_CYCLE_MAIN_storage;
}

IntArray& SoccerForm::BONUS_IN_CYCLE() {
    SoccerForm::ensure_initialized();
    return SoccerForm_BONUS_IN_CYCLE_storage;
}

IntArray& SoccerForm::BONUS_P_CYCLE() {
    SoccerForm::ensure_initialized();
    return SoccerForm_BONUS_P_CYCLE_storage;
}

pls::cs::Int32& SoccerForm::BOTTOM_INFO_BAR() {
    SoccerForm::ensure_initialized();
    return SoccerForm_BOTTOM_INFO_BAR_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_1KEYSTOP_MODE() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_1KEYSTOP_MODE_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_1KEYSTOP_MODE2() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_1KEYSTOP_MODE2_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_3KEY_KICKTEST() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_3KEY_KICKTEST_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_8KEY_FAST() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_8KEY_FAST_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_BALLPLAYER() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_BALLPLAYER_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_BALLTEST_MODE() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_BALLTEST_MODE_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_GAMEMODE_5KEY() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_GAMEMODE_5KEY_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_GAMETIMESTOP() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_GAMETIMESTOP_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_GK_MODE() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_GK_MODE_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_PASSSTOP_MODE() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_PASSSTOP_MODE_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_PLAYER_NOTACT() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_PLAYER_NOTACT_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_SCREENTRAVEL() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_SCREENTRAVEL_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_START_P1_TEAMID() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_START_P1_TEAMID_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_START_P2_TEAMID() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_START_P2_TEAMID_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_START_STATE() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_START_STATE_storage;
}

pls::cs::Int32& SoccerForm::DEBUG_WALLREFRECT() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DEBUG_WALLREFRECT_storage;
}

pls::cs::Int32& SoccerForm::DISP_COPAREA() {
    SoccerForm::ensure_initialized();
    return SoccerForm_DISP_COPAREA_storage;
}

pls::cs::Int32& SoccerForm::FLG_PROCESSTIME() {
    SoccerForm::ensure_initialized();
    return SoccerForm_FLG_PROCESSTIME_storage;
}

pls::cs::Ref<pls::kairo::Offscreen>& SoccerForm::offGameScreen_() {
    SoccerForm::ensure_initialized();
    return SoccerForm_offGameScreen__storage;
}

IntArray& SoccerForm::PBONUS_NP_LV_POPULAR() {
    SoccerForm::ensure_initialized();
    return SoccerForm_PBONUS_NP_LV_POPULAR_storage;
}

IntArray& SoccerForm::PBONUS_NP_LV_T_GET() {
    SoccerForm::ensure_initialized();
    return SoccerForm_PBONUS_NP_LV_T_GET_storage;
}

IntArray& SoccerForm::PBONUS_NP_LV_TIME() {
    SoccerForm::ensure_initialized();
    return SoccerForm_PBONUS_NP_LV_TIME_storage;
}

IntArray& SoccerForm::PBONUS_NP_LV_TRAINING1() {
    SoccerForm::ensure_initialized();
    return SoccerForm_PBONUS_NP_LV_TRAINING1_storage;
}

bool& SoccerForm::resetOffscreen_() {
    SoccerForm::ensure_initialized();
    return SoccerForm_resetOffscreen__storage;
}

pls::cs::Int32& SoccerForm::SHOW_DEBUGDRAW() {
    SoccerForm::ensure_initialized();
    return SoccerForm_SHOW_DEBUGDRAW_storage;
}

pls::cs::Int32& SoccerForm::SHOW_DEBUGDRAW2() {
    SoccerForm::ensure_initialized();
    return SoccerForm_SHOW_DEBUGDRAW2_storage;
}

pls::cs::Int32& SoccerForm::SHOW_DRAWNUM() {
    SoccerForm::ensure_initialized();
    return SoccerForm_SHOW_DRAWNUM_storage;
}

pls::cs::Int32& SoccerForm::SHOW_FPS() {
    SoccerForm::ensure_initialized();
    return SoccerForm_SHOW_FPS_storage;
}

pls::cs::Int32& SoccerForm::SHOW_MEMORY() {
    SoccerForm::ensure_initialized();
    return SoccerForm_SHOW_MEMORY_storage;
}

pls::cs::Int32& SoccerForm::SHOW_PDTIME() {
    SoccerForm::ensure_initialized();
    return SoccerForm_SHOW_PDTIME_storage;
}

IntArray2& SoccerForm::softLabels_() {
    SoccerForm::ensure_initialized();
    return SoccerForm_softLabels__storage;
}

IntArray& SoccerForm::STADIUM_BTMINFO_TIME() {
    SoccerForm::ensure_initialized();
    return SoccerForm_STADIUM_BTMINFO_TIME_storage;
}

pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>>& SoccerForm::STADIUM_CAERA_BASE_POS() {
    SoccerForm::ensure_initialized();
    return SoccerForm_STADIUM_CAERA_BASE_POS_storage;
}

IntArray& SoccerForm::STADIUM_CAMERA_TIME() {
    SoccerForm::ensure_initialized();
    return SoccerForm_STADIUM_CAMERA_TIME_storage;
}

IntArray& SoccerForm::STATUS_AMEFTO_ANIME() {
    SoccerForm::ensure_initialized();
    return SoccerForm_STATUS_AMEFTO_ANIME_storage;
}

IntArray& SoccerForm::STATUS_AMEFTO_COLOR() {
    SoccerForm::ensure_initialized();
    return SoccerForm_STATUS_AMEFTO_COLOR_storage;
}

StringArray& SoccerForm::STATUS_AMEFTO_NAME() {
    SoccerForm::ensure_initialized();
    return SoccerForm_STATUS_AMEFTO_NAME_storage;
}

IntArray& SoccerForm::TBAR_SX() {
    SoccerForm::ensure_initialized();
    return SoccerForm_TBAR_SX_storage;
}

IntArray& SoccerForm::TBAR_W() {
    SoccerForm::ensure_initialized();
    return SoccerForm_TBAR_W_storage;
}

IntArray& SoccerForm::TEST_STATE() {
    SoccerForm::ensure_initialized();
    return SoccerForm_TEST_STATE_storage;
}

pls::cs::Int32& SoccerForm::VIEW_H() {
    SoccerForm::ensure_initialized();
    return SoccerForm_VIEW_H_storage;
}

pls::cs::Int32& SoccerForm::VIEW_W() {
    SoccerForm::ensure_initialized();
    return SoccerForm_VIEW_W_storage;
}

pls::cs::Int32& SoccerForm::VIEW_X() {
    SoccerForm::ensure_initialized();
    return SoccerForm_VIEW_X_storage;
}

pls::cs::Int32& SoccerForm::VIEW_Y() {
    SoccerForm::ensure_initialized();
    return SoccerForm_VIEW_Y_storage;
}

void SoccerForm::create_init(pls::cs::Ref<SoccerForm> self) {
    SoccerForm::ensure_initialized();
    self->editCursor = IntArray::make(7);
    self->editStock = IntArray::make(7);
    self->bonus_p_list = kl_java_util::Vector::create();
    self->bonus_in_param = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({6, 2})));
    self->offscreenDayTime_ = -1;
    self->offscreenDayTimeString_ = pls::cs::String(u"");
    self->offscreenMoneyString_ = literal(u"0");
    self->offUpdateSRect = IntArray::make(4);
    self->COAT_X = 131;
    self->COAT_Y = 10;
    self->customerNum = IntArray::make(2);
    self->touchCameraSpeed_ = kl_util3d::Vector3D::create();
    self->touchCameraDecimal_ = kl_util3d::Vector3D::create();
    self->touchCameraPoint_ = kl_unity_util::FastVector::create();
    self->getScaleRange_tmp = IntArray::make(2);
    MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 2);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.#ctor", game);
    {
    }
}

// M:form.SoccerForm.#ctor
pls::cs::Ref<SoccerForm> SoccerForm::create() {
    SoccerForm::ensure_initialized();
    auto self = pls::cs::make_ref<SoccerForm>();
    SoccerForm::create_init(self);
    return self;
}

// M:form.SoccerForm.ToString
pls::cs::String SoccerForm::ToString() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.ToString", game);
    {
        return pls::cs::String::concat(literal(u"SoccerForm:"), integer_string(state_));
    }
}

// M:form.SoccerForm.Init
bool SoccerForm::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Init", game);
    {
        DebugForm::ensure_initialized();

        MyFormBase::Init();
        udat_ = game::UserData::GetInstance();
        menu_ = SubForm::create(4, 1, 24);
        script_ = kl_java_util::Vector::create();
        if (SoccerForm::DEBUG_START_P1_TEAMID() != -1 || SoccerForm::DEBUG_START_P2_TEAMID() != -1) {
            IntArray nextBattleLeagueIndex =
                require(udat_)->GetNextBattleLeagueIndex(require(udat_)->league_setu_);
            {
                auto cs_receiver = require(udat_)->gm_;
                pls::cs::Int32 cs_arg2 = nextBattleLeagueIndex[1];
                require(cs_receiver)
                    ->SetBattleTeamId(SoccerForm::DEBUG_START_P1_TEAMID(),
                                      SoccerForm::DEBUG_START_P2_TEAMID(), cs_arg2);
            }
        }
        require(require(apdat_)->camera)->ChangeMode(2);
        require(require(udat_)->gm_)->StartSoccerMatch();
        if (PLS_API(kl_java_util::Vector_2_Size(require(require(require(udat_)->gm_)->scorerListUserTeam))) >
            0) {
            PLS_API(kl_java_util::Vector_2_RemoveAllElements(
                require(require(require(udat_)->gm_)->scorerListUserTeam)));
        }
        pls::cs::Int32 state = 7;
        if (SoccerForm::DEBUG_START_STATE() == -1) {
            ChangeState(state);
        } else {
            require(require(udat_)->gm_)->score_[0] = DebugForm::debug_testscore()[0];
            require(require(udat_)->gm_)->score_[1] = DebugForm::debug_testscore()[1];
            for (pls::cs::Int32 i = 0;
                 i < PLS_API(kl_java_util::Vector_2_Size(require(DebugForm::debug_scorevec()))); ++i) {
                pls::cs::Ref<kl_lang::JInteger> obj = pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(
                    PLS_API(kl_java_util::Vector_2_ElementAt(require(DebugForm::debug_scorevec()), i)));
                PLS_API(kl_java_util::Vector_2_AddElement(
                    require(require(require(udat_)->gm_)->scorerListUserTeam), pls::cs::box(obj)));
            }
            ChangeState(SoccerForm::DEBUG_START_STATE());
            SoccerForm::DEBUG_START_STATE() = -1;
        }
        if (!is_null(require(apdat_)->resMapChip_)) {
            require(require(apdat_)->resMapChip_)->Dispose();
        }
        {
            auto cs_target = apdat_;
            auto cs_value = kairo::unity::ui::ResourceManager::create(
                pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                pls::cs::String{}, pls::cs::String{});
            require(cs_target)->resMapChip_ = cs_value;
        }
        {
            auto cs_receiver = require(apdat_)->resMapChip_;
            ByteArray cs_arg0 = PLS_API(pls::kairo::RecordStore::ReadRecord(1, 4));
            require(cs_receiver)->Load(cs_arg0, 3);
        }
        if (!is_null(require(apdat_)->resMapObject_)) {
            require(require(apdat_)->resMapObject_)->Dispose();
        }
        {
            auto cs_target = apdat_;
            auto cs_value = kairo::unity::ui::ResourceManager::create(
                pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                pls::cs::String{}, pls::cs::String{});
            require(cs_target)->resMapObject_ = cs_value;
        }
        {
            auto cs_receiver = require(apdat_)->resMapObject_;
            ByteArray cs_arg0 = PLS_API(pls::kairo::RecordStore::ReadRecord(1, 5));
            require(cs_receiver)->Load(cs_arg0, 3);
        }
        try {
            pls::cs::Ref<data::TeamData> teamData = pls::cs::Ref<data::TeamData>{};
            if (require(require(udat_)->gm_)->homeAway_ == 0) {
                teamData = require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[0]);
            } else {
                teamData = require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
            }
            stadiumId_ = require(teamData)->stadium_;
            {
                pls::cs::Int32 cs_arg0 = stadiumId_;
                pls::cs::String cs_arg1 =
                    require(require(apdat_)->stadiumData_.get_Item(stadiumId_))->fileName_;
                game::Map::CreateMap(cs_arg0, cs_arg1);
            }
            SetAllDraw();
        } catch (const pls::cs::Exception& cs_caught_106) {
            auto t = pls::cs::capture_exception(cs_caught_106);
            {
                PLS_API(kl_unity_util::Log::Info(t));
            }
        }
        SetCustomerNum();
        scale_ = 100;
        pinchScaleValue_ = 120;
        InitOffscreen();
        pls::cs::Ref<pls::kairo::SoundPlayer> instance = PLS_API(pls::kairo::SoundPlayer::GetInstance());
        PLS_API(([&]() -> void {
            pls::cs::Int32 cs_arg1 = require(require(apdat_)->sysSave_)->ints[4] * 51;
            require(instance)->SetVolume(1, cs_arg1);
        }()));
        pls::cs::Int32 num = 0;
        if (num == 1) {
            require(require(require(udat_)->ball_)->pos_)->z_ = 0.0f;
            SoccerForm::DEBUG_GK_MODE() = 0;
            SoccerForm::DEBUG_PLAYER_NOTACT() = ((SoccerForm::DEBUG_GK_MODE() == 1) ? 1 : 0);
            SoccerForm::DEBUG_PASSSTOP_MODE() = 0;
            SoccerForm::DEBUG_1KEYSTOP_MODE() = 0;
            SoccerForm::DEBUG_WALLREFRECT() = 0;
            SoccerForm::DEBUG_3KEY_KICKTEST() = 1;
            pls::cs::Int32 num2 = 0;
            pls::cs::Int32 num3 = 0;
            pls::cs::Int32 num4 = 1;
            if (num2 == 1) {
                require(require(apdat_)->camera)->ChangeMode(0);
            }
            if (num3 == 1) {
                require(require(apdat_)->camera)->ChangeMode(1);
            }
            if (num4 == 1) {
                require(require(apdat_)->camera)->ChangeMode(2);
            }
            if (SoccerForm::DEBUG_BALLTEST_MODE() == 1) {
                require(require(apdat_)->camera)->ChangeMode(1);
            }
            if (SoccerForm::DEBUG_BALLPLAYER() == 1) {
                require(require(apdat_)->camera)->ChangeMode(1);
            }
        }
        return true;
    }
}

// M:form.SoccerForm.GameScreenLayout(System.Int32@,System.Int32@,kairo.unity.ui.Image.Format@,kairo.unity.ui.Image.Filter@)
void SoccerForm::GameScreenLayout(pls::cs::Int32& width, pls::cs::Int32& height,
                                  pls::kairo::Image::Format& format, pls::kairo::Image::Filter& filterMode) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.SoccerForm.GameScreenLayout(System.Int32@,System.Int32@,kairo.unity.ui.Image.Format@,kairo.unity.ui.Image.Filter@)",
        game);
    {
        width = require(view_)->GetGameWidth() * 100 / 60 + 1;
        height = require(view_)->GetGameHeight() * 100 / 60 + 1;
        format = static_cast<pls::kairo::Image::Format>(5) /* Format.ARGB32 */;
        filterMode = static_cast<pls::kairo::Image::Filter>(0) /* Filter.Point */;
    }
}

// M:form.SoccerForm.StaticRender(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)
bool SoccerForm::StaticRender(pls::cs::Ref<pls::kairo::Graphics> g,
                              pls::cs::Ref<pls::kairo::Offscreen> offscreen) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.SoccerForm.StaticRender(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)",
                     game);
    {
        require(apdat_)->ClearZSortObjects();
        SoccerForm::resetOffscreen_() = false;
        return true;
    }
}

// M:form.SoccerForm.RenderGameScreen(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)
bool SoccerForm::RenderGameScreen(pls::cs::Ref<pls::kairo::Graphics> g,
                                  pls::cs::Ref<pls::kairo::Offscreen> offscreen) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.SoccerForm.RenderGameScreen(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)", game);
    {
        SoccerForm::VIEW_W() = GetGameWidth();
        SoccerForm::VIEW_H() = GetGameHeight();
        game::Camera::SetDrawCenter(SoccerForm::VIEW_X(), SoccerForm::VIEW_Y(), SoccerForm::VIEW_W(),
                                    SoccerForm::VIEW_H());
        UpdateOffscreen(g);
        bool flag = true;
        if (state_ == 6 || state_ == 7 || state_ == 8) {
            flag = false;
        }
        PLS_API(require(g)->SetClip(SoccerForm::VIEW_X(), SoccerForm::VIEW_Y(), SoccerForm::VIEW_W(),
                                    SoccerForm::VIEW_H()));
        kairo::unity::ui::Seb::SetClip(SoccerForm::VIEW_X(), SoccerForm::VIEW_Y(), SoccerForm::VIEW_W(),
                                       SoccerForm::VIEW_H());
        if (flag) {
            require(apdat_)->ClearZSortObjects();
            require(require(apdat_)->map_)->Draw(g, false);
            for (pls::cs::Int32 i = 0; i < require(udat_)->teams_.length(); ++i) {
                require(require(udat_)->teams_.get_Item(i))->Draw(g, false);
            }
            require(require(udat_)->ball_)->Draw(g);
            require(apdat_)->DrawZSortObjects(g, false);
            require(apdat_)->DrawEffect(g);
        } else {
            require(apdat_)->ClearZSortObjects();
            require(require(apdat_)->map_)->Draw(g, false);
            require(apdat_)->DrawZSortObjects(g, false);
        }
        kairo::unity::ui::Seb::ClearClip();
        PLS_API(require(g)->ClearClip());
        return true;
    }
}

// M:form.SoccerForm.ResetOffscreen
void SoccerForm::ResetOffscreen() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.ResetOffscreen", game);
    {
        SetAllDraw();
    }
}

// M:form.SoccerForm.InitOffscreen
void SoccerForm::InitOffscreen() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.InitOffscreen", game);
    {
        SoccerForm::offGameScreen_() = PLS_API(([&]() -> pls::cs::Ref<pls::kairo::Offscreen> {
            pls::cs::Delegate<bool(pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Ref<pls::kairo::Offscreen>)>
                cs_arg0 = ([&]() {
                    auto cs_target = static_cast<pls::cs::Ref<SoccerForm>>(this);
                    if (!cs_target)
                        throw pls::cs::ArgumentException();
                    return pls::cs::Delegate<bool(pls::cs::Ref<pls::kairo::Graphics>,
                                                  pls::cs::Ref<pls::kairo::Offscreen>)>::
                        bind(
                            cs_target,
                            "M:form.SoccerForm.RenderGameScreen(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)",
                            [cs_weak = pls::cs::DelegateCapture<SoccerForm>(cs_target)](
                                pls::cs::Ref<pls::kairo::Graphics> cs_param0,
                                pls::cs::Ref<pls::kairo::Offscreen> cs_param1) -> bool {
                                auto cs_receiver = cs_weak.lock();
                                if (!cs_receiver)
                                    throw pls::cs::NullReferenceException();
                                return cs_receiver->RenderGameScreen(cs_param0, cs_param1);
                            });
                }());
            pls::cs::Delegate<bool(pls::cs::Ref<pls::kairo::Graphics>, pls::cs::Ref<pls::kairo::Offscreen>)>
                cs_arg1 = ([&]() {
                    auto cs_target = static_cast<pls::cs::Ref<SoccerForm>>(this);
                    if (!cs_target)
                        throw pls::cs::ArgumentException();
                    return pls::cs::Delegate<bool(pls::cs::Ref<pls::kairo::Graphics>,
                                                  pls::cs::Ref<pls::kairo::Offscreen>)>::
                        bind(
                            cs_target,
                            "M:form.SoccerForm.StaticRender(kairo.unity.ui.Graphics,kairo.unity.graphics.Offscreen)",
                            [cs_weak = pls::cs::DelegateCapture<SoccerForm>(cs_target)](
                                pls::cs::Ref<pls::kairo::Graphics> cs_param0,
                                pls::cs::Ref<pls::kairo::Offscreen> cs_param1) -> bool {
                                auto cs_receiver = cs_weak.lock();
                                if (!cs_receiver)
                                    throw pls::cs::NullReferenceException();
                                return cs_receiver->StaticRender(cs_param0, cs_param1);
                            });
                }());
            pls::cs::Delegate<void(std::int32_t&, std::int32_t&, pls::kairo::Image::Format&,
                                   pls::kairo::Image::Filter&)>
                cs_arg2 = ([&]() {
                    auto cs_target = static_cast<pls::cs::Ref<SoccerForm>>(this);
                    if (!cs_target)
                        throw pls::cs::ArgumentException();
                    return pls::cs::Delegate<void(std::int32_t&, std::int32_t&, pls::kairo::Image::Format&,
                                                  pls::kairo::Image::Filter&)>::
                        bind(
                            cs_target,
                            "M:form.SoccerForm.GameScreenLayout(System.Int32@,System.Int32@,kairo.unity.ui.Image.Format@,kairo.unity.ui.Image.Filter@)",
                            [cs_weak = pls::cs::DelegateCapture<SoccerForm>(cs_target)](
                                std::int32_t& cs_param0, std::int32_t& cs_param1,
                                pls::kairo::Image::Format& cs_param2,
                                pls::kairo::Image::Filter& cs_param3) -> void {
                                auto cs_receiver = cs_weak.lock();
                                if (!cs_receiver)
                                    throw pls::cs::NullReferenceException();
                                pls::cs::Int32 cs_ref0 = cs_param0;
                                pls::cs::Int32 cs_ref1 = cs_param1;
                                cs_receiver->GameScreenLayout(cs_ref0, cs_ref1, cs_param2, cs_param3);
                                cs_param0 = cs_ref0;
                                cs_param1 = cs_ref1;
                            });
                }());
            return pls::kairo::Offscreen::CreateOffscreen(cs_arg0, cs_arg1, cs_arg2, 0);
        }()));
        require(apdat_)->offSeason_ = -1;
        require(apdat_)->offYear_ = -1;
        require(apdat_)->offMonth_ = -1;
        require(apdat_)->offWeek_ = -1;
        require(apdat_)->offHour_ = -1;
        require(apdat_)->offSec_ = -1;
        require(apdat_)->offMoney_ = -2147483648ll;
        require(apdat_)->offScore1_ = -1;
        require(apdat_)->offScore2_ = -1;
    }
}

// M:form.SoccerForm.GetTopBarOffN
pls::cs::Int32 SoccerForm::GetTopBarOffN() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetTopBarOffN", game);
    {
        pls::cs::Int32 result = 0;
        if (require(surface::GameView::GetInstance())->GetGameWidth() > 240) {
            result = 30;
        }
        return result;
    }
}

// M:form.SoccerForm.GetDrawTBAROff(System.Int32)
pls::cs::Int32 SoccerForm::GetDrawTBAROff(pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetDrawTBAROff(System.Int32)", game);
    {
        pls::cs::Int32 topBarOffN = GetTopBarOffN();
        pls::cs::Int32 num =
            main::AppData::ClampMin((require(view_)->GetGameWidth() - (240 + topBarOffN * 2)) / 2, 0);
        if (type == 1) {
            return num;
        }
        num += SoccerForm::TBAR_W()[1];
        if (type == 2) {
            return num + topBarOffN / 2 + 43;
        }
        num += SoccerForm::TBAR_W()[2] + topBarOffN;
        num += SoccerForm::TBAR_W()[3];
        if (type == 4) {
            return num + topBarOffN / 2 + 43;
        }
        num += SoccerForm::TBAR_W()[4] + topBarOffN;
        if (type == 5) {
            return num;
        }
        return num;
    }
}

// M:form.SoccerForm.Draw_topBarParts(kairo.unity.ui.Graphics,System.Int32,System.Int32)
void SoccerForm::Draw_topBarParts(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 type,
                                  pls::cs::Int32 dx) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.SoccerForm.Draw_topBarParts(kairo.unity.ui.Graphics,System.Int32,System.Int32)",
                     game);
    {
        Draw_topBarParts(g, type, dx, SoccerForm::TBAR_W()[type]);
    }
}

// M:form.SoccerForm.Draw_topBarParts(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)
void SoccerForm::Draw_topBarParts(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 type,
                                  pls::cs::Int32 dx, pls::cs::Int32 w) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.SoccerForm.Draw_topBarParts(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Int32 height = SoccerForm::VIEW_Y() - 1;
        if (type == 0) {
            if (w <= SoccerForm::TBAR_W()[type]) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(32);
                    pls::cs::Int32 cs_arg3 = SoccerForm::TBAR_SX()[type];
                    require(g)->DrawImage(cs_arg0, dx, 0.0f, cs_arg3, 0, w, height);
                }()));
            } else {
                pls::cs::Int32 num7 = w;
                pls::cs::Int32 num8 = 0;
                while (num7 > 0) {
                    pls::cs::Int32 num9 = main::AppData::Clamp(num7, 1, SoccerForm::TBAR_W()[type]);
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(32);
                        pls::cs::Int32 cs_arg3 = SoccerForm::TBAR_SX()[type];
                        require(g)->DrawImage(cs_arg0, dx + num8, 0.0f, cs_arg3, 0, num9, height);
                    }()));
                    num7 -= num9;
                    num8 += num9;
                }
            }
        } else if (type == 1 || type == 5 || type == 3) {
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(32);
                pls::cs::Int32 cs_arg3 = SoccerForm::TBAR_SX()[type];
                require(g)->DrawImage(cs_arg0, dx, 0.0f, cs_arg3, 0, w, height);
            }()));
            if (type == 1) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(32);
                    pls::cs::Int32 cs_arg3 = SoccerForm::TBAR_SX()[type] + 1;
                    require(g)->DrawImage(cs_arg0, dx - 1, 0.0f, cs_arg3, 0, 3, height);
                }()));
            } else if (type == 5) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(32);
                    pls::cs::Int32 cs_arg3 = SoccerForm::TBAR_SX()[type] + 1;
                    require(g)->DrawImage(cs_arg0, dx - 1 + w, 0.0f, cs_arg3, 0, 3, height);
                }()));
            }
        } else if (type == 2 || type == 4) {
            if (w <= SoccerForm::TBAR_W()[type]) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(32);
                    pls::cs::Int32 cs_arg3 = SoccerForm::TBAR_SX()[type];
                    require(g)->DrawImage(cs_arg0, dx, 0.0f, cs_arg3, 0, w, height);
                }()));
            } else {
                pls::cs::Int32 num4 = w;
                pls::cs::Int32 num5 = 0;
                while (num4 > 0) {
                    pls::cs::Int32 num6 = main::AppData::Clamp(num4, 1, SoccerForm::TBAR_W()[type]);
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(32);
                        pls::cs::Int32 cs_arg3 = SoccerForm::TBAR_SX()[type];
                        require(g)->DrawImage(cs_arg0, dx + num5, 0.0f, cs_arg3, 0, num6, height);
                    }()));
                    num4 -= num6;
                    num5 += num6;
                }
            }
        } else if (type == 6) {
            if (w <= SoccerForm::TBAR_W()[type]) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(32);
                    pls::cs::Int32 cs_arg3 = SoccerForm::TBAR_SX()[type];
                    require(g)->DrawImage(cs_arg0, dx, 0.0f, cs_arg3, 0, w, height);
                }()));
            } else {
                pls::cs::Int32 num = w;
                pls::cs::Int32 num2 = 0;
                while (num > 0) {
                    pls::cs::Int32 num3 = main::AppData::Clamp(num, 1, SoccerForm::TBAR_W()[type]);
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(32);
                        pls::cs::Int32 cs_arg3 = SoccerForm::TBAR_SX()[type];
                        require(g)->DrawImage(cs_arg0, dx + num2, 0.0f, cs_arg3, 0, num3, height);
                    }()));
                    num -= num3;
                    num2 += num3;
                }
            }
        }
    }
}

// M:form.SoccerForm.GetFirstScript
IntArray SoccerForm::GetFirstScript() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetFirstScript", game);
    {
        if (PLS_API(kl_java_util::Vector_2_Size(require(script_))) == 0) {
            return IntArray{};
        }
        return pls::cs::unbox<IntArray>(PLS_API(kl_java_util::Vector_2_FirstElement(require(script_))));
    }
}

// M:form.SoccerForm.ClearScript
void SoccerForm::ClearScript() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.ClearScript", game);
    {
        PLS_API(kl_java_util::Vector_2_RemoveAllElements(require(script_)));
    }
}

// M:form.SoccerForm.AddCommandWait(System.Int32)
void SoccerForm::AddCommandWait(pls::cs::Int32 wait) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.AddCommandWait(System.Int32)", game);
    {
        PLS_API(([&]() -> void {
            auto cs_receiver = script_;
            pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({1, wait}));
            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
        }()));
    }
}

// M:form.SoccerForm.AddCommandEvent(System.Int32)
void SoccerForm::AddCommandEvent(pls::cs::Int32 evtId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.AddCommandEvent(System.Int32)", game);
    {
        PLS_API(([&]() -> void {
            auto cs_receiver = script_;
            pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({0, evtId}));
            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
        }()));
    }
}

// M:form.SoccerForm.AddCommandScene(System.Int32)
void SoccerForm::AddCommandScene(pls::cs::Int32 on) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.AddCommandScene(System.Int32)", game);
    {
        PLS_API(([&]() -> void {
            auto cs_receiver = script_;
            pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({2, on}));
            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
        }()));
    }
}

// M:form.SoccerForm.AddCommandSpecial(System.Int32[])
void SoccerForm::AddCommandSpecial(IntArray arg) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.AddCommandSpecial(System.Int32[])", game);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(arg);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            arg = IntArray::make(0);
        }
        IntArray array = IntArray::make(pls::cs::Int32(arg.length()) + 1);
        array[0] = 3;
        if (arg.length() > 0) {
            PLS_API(kl_lang::JSystem::Arraycopy(pls::cs::box(arg), 0, pls::cs::box(array), 1, arg.length()));
        }
        PLS_API(kl_java_util::Vector_2_AddElement(require(script_), pls::cs::box(array)));
    }
}

// M:form.SoccerForm.AddCommandCard(System.Int32,System.Int32,System.Int32)
void SoccerForm::AddCommandCard(pls::cs::Int32 card, pls::cs::Int32 team, pls::cs::Int32 p_id) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.SoccerForm.AddCommandCard(System.Int32,System.Int32,System.Int32)", game);
    {
        PLS_API(([&]() -> void {
            auto cs_receiver = script_;
            pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({4, 0, card, team, p_id}));
            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
        }()));
    }
}

// M:form.SoccerForm.AddCommandGMChangeState(System.Int32)
void SoccerForm::AddCommandGMChangeState(pls::cs::Int32 gm_state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.AddCommandGMChangeState(System.Int32)", game);
    {
        PLS_API(([&]() -> void {
            auto cs_receiver = script_;
            pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({5, gm_state}));
            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
        }()));
    }
}

// M:form.SoccerForm.Script
void SoccerForm::Script() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Script", game);
    {
        game::GameManager::ensure_initialized();

        while (PLS_API(kl_java_util::Vector_2_Size(require(script_))) > 0) {
            IntArray firstScript = GetFirstScript();
            pls::cs::Int32 recoveredScriptKind = firstScript[0];
            if (recoveredScriptKind == 1) {
                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                    SubForm::MakeWait(firstScript[1])));
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
            } else if (recoveredScriptKind == 0) {
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
            } else if (recoveredScriptKind == 2) {
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                continue;
            } else if (recoveredScriptKind == 3) {
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
            } else if (recoveredScriptKind == 4) {
                if (firstScript[1] == 0) {
                    require(require(udat_)->gm_)->ChangeState(10);
                    {
                        auto cs_target = require(udat_)->gm_;
                        pls::cs::Int32 cs_value = firstScript[2];
                        require(cs_target)->time_card = cs_value;
                    }
                    {
                        auto cs_target = require(udat_)->gm_;
                        pls::cs::Int32 cs_value = firstScript[3];
                        require(cs_target)->time_team = cs_value;
                    }
                    {
                        auto cs_target = require(udat_)->gm_;
                        pls::cs::Int32 cs_value = firstScript[4];
                        require(cs_target)->time_pId = cs_value;
                    }
                    {
                        auto cs_target = require(udat_)->gm_;
                        pls::cs::Int32 cs_value = game::GameUtil::Random(4);
                        require(cs_target)->time_animePattern = cs_value;
                    }
                }
                firstScript[1]++;
                if ([&]() -> bool {
                        auto cs_left = firstScript[1];
                        auto cs_right = game::GameManager::WAIT_CARD()
                            [pls::cs::Int32(game::GameManager::WAIT_CARD().length()) - 1];
                        return cs_left >= cs_right;
                    }()) {
                    require(require(udat_)->gm_)->ChangeState(0);
                    PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                    continue;
                }
            } else if (recoveredScriptKind == 5) {
                {
                    auto cs_receiver = require(udat_)->gm_;
                    pls::cs::Int32 cs_arg0 = firstScript[1];
                    require(cs_receiver)->ChangeState(cs_arg0);
                }
                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                continue;
            }
            break;
        }
    }
}

// M:form.SoccerForm.Resume
bool SoccerForm::Resume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Resume", game);
    {
        return true;
    }
}

// M:form.SoccerForm.Finish
bool SoccerForm::Finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Finish", game);
    {
        if (!is_null(require(apdat_)->resMapChip_)) {
            require(require(apdat_)->resMapChip_)->Dispose();
        }
        require(apdat_)->resMapChip_ = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
        if (!is_null(require(apdat_)->resMapObject_)) {
            require(require(apdat_)->resMapObject_)->Dispose();
        }
        require(apdat_)->resMapObject_ = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
        if (!is_null(SoccerForm::offGameScreen_())) {
            PLS_API(require(SoccerForm::offGameScreen_())->Dispose());
            SoccerForm::offGameScreen_() = pls::cs::Ref<pls::kairo::Offscreen>{};
        }
        require(apdat_)->map_ = pls::cs::Ref<game::Map>{};
        require(udat_)->teams_ = pls::cs::Array<pls::cs::Ref<game::Team>>{};
        {
            pls::cs::GcCallSite gc_site("M:form.SoccerForm.Finish");
            PLS_API(kl_lang::JSystem::Gc());
        }
        return true;
    }
}

// M:form.SoccerForm.ChangeState(System.Int32)
void SoccerForm::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.ChangeState(System.Int32)", game);
    {
        main::AppData::ensure_initialized();
        data::FanBonusData::ensure_initialized();

        IntArray array = SoccerForm::softLabels_()[state];
        if ([&]() {
                auto cs_left = pls::cs::box(array);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }()) {
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 = main::AppData::softLabels_()[array[0]];
                pls::cs::String cs_arg1 = main::AppData::softLabels_()[array[1]];
                this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
            }()));
        }
        state_ = state;
        stateCnt_ = 0;
        if (state_ == 0) {
            if (SoccerForm::DEBUG_START_P1_TEAMID() == -1 && SoccerForm::DEBUG_START_P2_TEAMID() == -1) {
                require(require(udat_)->gm_)->StartSoccerForm(true);
            } else {
                require(require(udat_)->gm_)->StartSoccerForm(false);
            }
            SetAllDraw();
            pls::cs::Int32 matchInfoJoin = require(udat_)->GetMatchInfoJoin();
            pls::cs::Int32 bgm = 3;
            if ((matchInfoJoin == 0)) {
                if (data::LeagueData::IsVictoryMatch()) {
                    bgm = 2;
                }
            } else if ((matchInfoJoin == 1)) {
                pls::cs::Ref<data::QuestMatchData> questMatchData =
                    require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
                if (PLS_API(kl_unity_util::BitUtil::Check(require(questMatchData)->flag_, 2)) &&
                    data::QuestMatchData::IsVictoryQuestMatch()) {
                    bgm = 2;
                }
            }
            require(apdat_)->PlayBgm(bgm);
            drawTopBar = false;
        } else if (state_ == 6) {
            if (PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->editTest_formation))) > 0) {
                PLS_API(
                    kl_java_util::Vector_2_RemoveAllElements(require(require(udat_)->editTest_formation)));
            }
            for (pls::cs::Int32 i = 0; i < require(apdat_)->formationData_.length(); ++i) {
                pls::cs::Ref<data::FormationData> formationData = require(apdat_)->formationData_.get_Item(i);
                if (require(formationData)->state_ == 1) {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = require(udat_)->editTest_formation;
                        pls::cs::Ref<pls::cs::Object> cs_arg0 =
                            pls::cs::box(require(apdat_)->formationData_.get_Item(i));
                        kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                    }()));
                }
            }
            pls::cs::Ref<data::FormationData> elem =
                require(apdat_)->formationData_.get_Item(require(udat_)->selectFormationId_);
            pls::cs::Int32 num = PLS_API(kl_java_util::Vector_2_IndexOf(
                require(require(udat_)->editTest_formation), pls::cs::box(elem)));
            if (num != -1) {
                require(udat_)->et_cur[1] = num;
            }
            for (pls::cs::Int32 j = 0; j < editCursor.length(); ++j) {
                editCursor[j] = 0;
            }
            require(udat_)->SetEditForPos(true);
            require(udat_)->et_cur[0] = 1;
            require(apdat_)->PlayBgm(1);
            pls::cs::Ref<data::TeamData> teamData =
                require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
            require(udat_)->SetPlayerParam(require(teamData)->warP_paramPhysical_,
                                           require(teamData)->warP_paramPhysical_);
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 = main::AppData::softLabels_()[0];
                pls::cs::String cs_arg1 = main::AppData::softLabels_()[0];
                this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
            }()));
        } else if (state_ == 7) {
            stadiumMoveCnt_ = 0;
            SetAllDraw();
        } else if (state_ == 9) {
            if (PLS_API(kl_java_util::Vector_2_Size(require(data::FanBonusData::bonus_f_data1()))) > 0) {
                PLS_API(
                    kl_java_util::Vector_2_RemoveAllElements(require(data::FanBonusData::bonus_f_data1())));
            }
            bonus_f_cnt = 0;
            bonus_f_index = 0;
            data::FanBonusData::ChBonusEvent();
            if (PLS_API(kl_java_util::Vector_2_Size(require(data::FanBonusData::bonus_f_data1()))) == 0) {
                ChangeState(14);
            } else {
                temp_fan = data::FanActData::GetFanEva(0);
                temp_assist = data::FanActData::GetFanEva(1);
                temp_nameValue = data::FanActData::GetFanEva(2);
                pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array2 =
                    pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(PLS_API(
                        kl_java_util::Vector_2_ElementAt(require(data::FanBonusData::bonus_f_data1()), 0)));
                IntArray array3 = pls::cs::unbox<IntArray>(array2.get_Item(2));
                temp_addFan = array3[0];
                temp_addAssist = array3[1];
                temp_addNameValue = array3[2];
            }
        } else if (state_ == 10) {
            bonus_in_param[0][0] = ([&]() -> pls::cs::Int32 {
                                       auto cs_left = require(udat_)->ticketPrice_;
                                       auto cs_right = customerNum[0];
                                       return cs_left * cs_right;
                                   }()) /
                                   10000;
            bonus_in_param[0][1] = 0;
            {
                auto cs_target = bonus_in_param[1];
                auto cs_index = 0;
                auto cs_value = GetMatchPrice();
                cs_target.set_Item(cs_index, cs_value);
            }
            bonus_in_param[1][1] = 0;
            {
                auto cs_target = bonus_in_param[2];
                auto cs_index = 0;
                auto cs_value = GetGoodsPrice();
                cs_target.set_Item(cs_index, cs_value);
            }
            bonus_in_param[2][1] = 0;
            {
                auto cs_target = bonus_in_param[3];
                auto cs_index = 0;
                auto cs_value = GetSponsorPrice();
                cs_target.set_Item(cs_index, cs_value);
            }
            bonus_in_param[3][1] = 0;
            bonus_in_param[4][0] = 0;
            {
                auto cs_target = bonus_in_param[4];
                auto cs_index = 1;
                auto cs_value = GetPlayersSalary();
                cs_target.set_Item(cs_index, cs_value);
            }
            bonus_in_cnt = 0;
            bonus_in_index = 0;
            bonus_softKey = 0;
            bonus_sponsorNum = GetSponsorNum();
        } else {
            if (state_ == 2) {

            } else {
                if (state_ == 14) {
                    for (pls::cs::Int32 k = 0;
                         k < PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_)));
                         ++k) {
                        pls::cs::Ref<data::PlayerData> playerData =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(udat_)->memberPDataist_), k)));
                        require(playerData)->temp_lv = require(playerData)->lv_;
                        require(playerData)->temp_exp = require(playerData)->exp_;
                        require(playerData)->temp_anime = 0;
                        require(playerData)->temp_lvUp = false;
                    }
                    pls::cs::Ref<data::TeamData> teamData2 =
                        require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[0]);
                    pls::cs::Ref<data::TeamData> teamData3 =
                        require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
                    PBONUS_NP_LV_ADDEXP = game::GameUtil::RateConvert(require(teamData3)->warPotential_, 50,
                                                                      700, 150, 2200, false);
                    PBONUS_NP_LV_ADDEXP = main::AppData::Clamp(PBONUS_NP_LV_ADDEXP, 150, 5000);
                    if ([&]() -> bool {
                            auto cs_left = require(require(udat_)->gm_)->score_[0];
                            auto cs_right = require(require(udat_)->gm_)->score_[1];
                            return cs_left == cs_right;
                        }()) {
                        PBONUS_NP_LV_ADDEXP = (PBONUS_NP_LV_ADDEXP) / 2;
                    } else if ([&]() -> bool {
                                   auto cs_left = require(require(udat_)->gm_)->score_[0];
                                   auto cs_right = require(require(udat_)->gm_)->score_[1];
                                   return cs_left < cs_right;
                               }()) {
                        PBONUS_NP_LV_ADDEXP = (PBONUS_NP_LV_ADDEXP) / 4;
                    }
                    PBONUS_NP_LV_GETPOPULAR =
                        game::GameUtil::RateConvert(require(teamData3)->warPotential_, 50, 700, 0, 15, false);
                    PBONUS_NP_LV_GETTRAINING =
                        game::GameUtil::RateConvert(require(teamData3)->warPotential_, 50, 700, 5, 15, false);
                    pls::cs::Int32 num2 = 2147483647 /* Int32.MaxValue */;
                    pls::cs::Int32 num3 = 0;
                    pls::cs::Int32 num4 = 0;
                    pls::cs::Int32 num5 = 0;
                    for (pls::cs::Int32 l = 0;
                         l < PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_)));
                         ++l) {
                        pls::cs::Ref<data::PlayerData> playerData2 =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(udat_)->memberPDataist_), l)));
                        if (num2 > require(playerData2)->actscoreSum_) {
                            num2 = require(playerData2)->actscoreSum_;
                        } else if (num3 < require(playerData2)->actscoreSum_) {
                            num3 = require(playerData2)->actscoreSum_;
                        }
                        num5 += require(playerData2)->actscoreSum_;
                    }
                    num4 =
                        num5 / PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_)));
                    pls::cs::Int32 num6 = 0;
                    if ((([&]() -> bool {
                            auto cs_left = require(require(udat_)->gm_)->score_[0];
                            auto cs_right = require(require(udat_)->gm_)->score_[1];
                            return cs_left > cs_right;
                        }()))) {
                        num6 = 0;
                    } else {
                        if ((([&]() -> bool {
                                auto cs_left = require(require(udat_)->gm_)->score_[0];
                                auto cs_right = require(require(udat_)->gm_)->score_[1];
                                return cs_left == cs_right;
                            }()))) {
                            num6 = 1;
                        } else {
                            num6 = 2;
                        }
                    }
                    pls::cs::Int32 num7 = 100 - num6 * 20;
                    pls::cs::Int32 x = require(teamData2)->warPotential_ - require(teamData3)->warPotential_;
                    pls::cs::Int32 num8 = game::GameUtil::RateConvert(x, 100, -100, 80, 120, true);
                    pls::cs::Int32 x2 = num7 / 2 + num8 / 2 + game::GameUtil::Random(10) - 5;
                    pls::cs::Int32 c2max = game::GameUtil::RateConvert(x2, 0, 100, 0, 100, true);
                    pls::cs::Int32 c2min = game::GameUtil::RateConvert(x2, 0, 100, 0, 30, true);
                    for (pls::cs::Int32 m = 0;
                         m < PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_)));
                         ++m) {
                        pls::cs::Ref<data::PlayerData> playerData3 =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(udat_)->memberPDataist_), m)));
                        {
                            auto cs_target = playerData3;
                            pls::cs::Int32 cs_value = game::GameUtil::RateConvert(
                                require(playerData3)->actscoreSum_, num2, num3, c2min, c2max, true);
                            require(cs_target)->actscoreScore_ = cs_value;
                        }
                    }
                } else if (state_ == 16) {
                    pls::cs::Ref<data::SupervisorData> supervisorData =
                        require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
                    for (pls::cs::Int32 n = 0; n < 11; ++n) {
                        pls::cs::Ref<data::PlayerData> p_data =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(udat_)->memberPDataist_), n)));
                        require(supervisorData)->SetResearchData(require(udat_)->game_matchEva_, p_data);
                    }
                }
            }
        }
    }
}

// M:form.SoccerForm.Update
bool SoccerForm::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Update", game);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Int64 num = PLS_API(kl_lang::JSystem::CurrentTimeMillis());
        frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
        pls::cs::Int32 num2 = 1;
        if (require(require(apdat_)->save_)->ints[13] == 1) {
            num2 = 2;
        }
        if (state_ != 0) {
            num2 = 1;
        }
        if (kl_cfg::Config::DEBUG_CMD() || kl_cfg::Config::PTW()) {
            if (PLS_API(require(canvas_)->CheckKeyState(16))) {
                num2 = 2;
            } else if (PLS_API(require(canvas_)->CheckKeyState(32))) {
                num2 = 20;
            } else if (PLS_API(require(canvas_)->CheckKeyState(64))) {
                num2 = 10;
            }
            if (!PLS_API(require(canvas_)->CheckKeyRepeat(16)) ||
                PLS_API(require(canvas_)->CheckKeyRepeat(32))) {
            }
            if (SoccerForm::DEBUG_GAMEMODE_5KEY() == 1) {
                num2 = 20;
            }
        }
        if (kl_cfg::Config::DEBUG_CMD()) {
            if (PLS_API(require(canvas_)->CheckKeyRepeat(2))) {
                SoccerForm::SHOW_DEBUGDRAW() = 1 - SoccerForm::SHOW_DEBUGDRAW();
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(4))) {
                SoccerForm::SHOW_DEBUGDRAW2() = 1 - SoccerForm::SHOW_DEBUGDRAW2();
            }
        }
        if (state_ == 0) {
            require(require(apdat_)->camera)->Update_pos();
        }
        for (pls::cs::Int32 i = 0; (i < num2); ++i) {
            if ((_update(i))) {
                break;
            }
        }
        proc_time = PLS_API(kl_lang::JSystem::CurrentTimeMillis()) - num;
        return true;
    }
}

// M:form.SoccerForm._update(System.Int32)
bool SoccerForm::_update(pls::cs::Int32 frameCount) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm._update(System.Int32)", game);
    {
        kl_cfg::Config::ensure_initialized();
        game::Team::ensure_initialized();
        game::Camera::ensure_initialized();
        data::FanBonusData::ensure_initialized();

        if (kl_cfg::Config::DEBUG_CMD() && PLS_API(require(canvas_)->CheckKeyPulse(1))) {
            return PLS_API(([&]() -> bool {
                auto cs_receiver = formMan_;
                pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = DebugForm::create();
                return require(cs_receiver)->Push(cs_arg0);
            }()));
        }
        stateCnt_ = ((stateCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
        Script();
        require(apdat_)->UpdateEffect();
        pls::cs::Int32 num = 5;
        if (state_ == 0) {
            Update_main();
            SetStatusPlayer();
            if (!is_null(statusPlayer_) && PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                pls::cs::Ref<data::PlayerData> playerData =
                    require(apdat_)->pData_.get_Item(require(statusPlayer_)->pData_id_);
                if (require(playerData)->auraPoint_ == 10000 &&
                    !PLS_API(kl_unity_util::BitUtil::Check(require(statusPlayer_)->flag_, 262144)) &&
                    require(require(udat_)->gm_)->state_ == 0) {
                    require(playerData)->Start_aura(statusPlayer_);
                }
            }
            for (pls::cs::Int32 i = 0; i < require(require(udat_)->teams_.get_Item(0))->players_.length();
                 ++i) {
                pls::cs::Ref<game::Player> player =
                    require(require(udat_)->teams_.get_Item(0))->players_.get_Item(i);
                pls::cs::Ref<data::PlayerData> playerData2 =
                    require(apdat_)->pData_.get_Item(require(player)->pData_id_);
                require(playerData2)->Update_aura(player);
            }
            if (require(require(udat_)->gm_)->state_ != 1 && statusAmeftoCnt_ > 0) {
                --statusAmeftoCnt_;
            }
            pls::cs::Int32 num2 = statusAmeftoMode_;
            if (statusAmeftoCnt_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    statusAmeftoCnt_ = SoccerForm::STATUS_AMEFTO_ANIME()[1];
                }
            } else {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    statusAmeftoMode_ = (statusAmeftoMode_ - 1 + 3) % 3;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    statusAmeftoMode_ = (statusAmeftoMode_ + 1 + 3) % 3;
                }
            }
            if (num2 != statusAmeftoMode_) {
                if (!require(require(udat_)->gm_)->halfTime) {
                    {
                        auto cs_target = require(udat_)->teams_.get_Item(0);
                        pls::cs::Int32 cs_value = game::Team::AMEFTO_PZ()[statusAmeftoMode_];
                        require(cs_target)->amefto_pz = cs_value;
                    }
                } else {
                    {
                        auto cs_target = require(udat_)->teams_.get_Item(1);
                        pls::cs::Int32 cs_value = game::Team::AMEFTO_PZ()[statusAmeftoMode_];
                        require(cs_target)->amefto_pz = cs_value;
                    }
                }
                statusAmeftoCnt_ = SoccerForm::STATUS_AMEFTO_ANIME()[1];
                if (statusAmeftoMode_ == 2) {
                    if (!require(apdat_)->CheckAlreadyEvent(139)) {
                        require(apdat_)->ExecEvent(139, pls::cs::String{}, IntArray{});
                    }
                } else if (statusAmeftoMode_ == 1 && !require(apdat_)->CheckAlreadyEvent(140)) {
                    require(apdat_)->ExecEvent(140, pls::cs::String{}, IntArray{});
                }
            }
            if (kl_cfg::Config::DEBUG_CMD() && PLS_API(require(canvas_)->CheckKeyPulse(128))) {
                AddCommandCard(game::GameUtil::Random(2), 0, 0);
            }
            if (require(apdat_)->IsPushSoftLabel(4)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(menu_));
            }
        } else if (state_ == 1) {
            if (stateCnt_ >= 2) {
                ChangeState(0);
            }
        } else if (state_ == 2) {
            if ([&]() -> bool {
                    auto cs_left = require(require(udat_)->gm_)->score_[0];
                    auto cs_right = require(require(udat_)->gm_)->score_[1];
                    return cs_left > cs_right;
                }()) {
                require(udat_)->matchResult_[0]++;
            } else if ([&]() -> bool {
                           auto cs_left = require(require(udat_)->gm_)->score_[0];
                           auto cs_right = require(require(udat_)->gm_)->score_[1];
                           return cs_left < cs_right;
                       }()) {
                require(udat_)->matchResult_[2]++;
            } else {
                require(udat_)->matchResult_[1]++;
            }
            {
                auto cs_target = udat_;
                auto cs_old = require(cs_target)->matchGetGoalTotal_;
                auto cs_rhs = require(require(udat_)->gm_)->score_[0];
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                require(cs_target)->matchGetGoalTotal_ = cs_value;
            }
            pls::cs::Int32 matchInfoJoin = require(udat_)->GetMatchInfoJoin();
            if (matchInfoJoin == 0) {
                require(udat_)->Update_league();
            }
            require(udat_)->Update_gameParam();
            ChangeState(3);
            if ((matchInfoJoin == 0)) {
                if (data::LeagueData::IsVictoryLeague()) {
                    PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(75)));
                    PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(38)));
                }
            } else if ((matchInfoJoin == 1)) {
                {
                    pls::cs::Ref<data::QuestMatchData> questMatchData =
                        require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
                    if (PLS_API(kl_unity_util::BitUtil::Check(require(questMatchData)->flag_, 2)) &&
                        data::QuestMatchData::IsVictoryQuestMatch()) {
                        PLS_API(
                            static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(75)));
                        PLS_API(
                            static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(38)));
                    }
                }
            }
            PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(37)));
        } else if (state_ == 3) {
            ChangeState(9);
        } else if (state_ == 4) {
            require(udat_)->matchInfoWeek_ = 0;
            require(udat_)->Init_bus();
            require(require(apdat_)->camera)->SetMapMainBasePos();
            pls::cs::Int32 recoveredMatchInfoJoin4 = require(udat_)->GetMatchInfoJoin();
            if (recoveredMatchInfoJoin4 == 0) {
                if (data::LeagueData::IsVictoryLeague()) {
                    require(udat_)->matchFlgVictory_ = 1;
                }
                ++require(udat_)->league_setu_;
                require(udat_)->League_finish();
            } else {
                if (data::QuestMatchData::IsVictoryQuestMatch()) {
                    require(udat_)->matchFlgVictory_ = 1;
                }
                require(udat_)->Qm_update();
            }
            ChangeState(5);
        } else if (state_ == 5) {
            PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmGame_));
            require(require(apdat_)->frmGame_)->ChangeState(0);
        } else if (state_ == 6) {
            require(require(require(apdat_)->resCom2_)->seb.get_Item(61))->Frame();
            require(require(require(apdat_)->resCom2_)->seb.get_Item(60))->Frame();
            require(require(require(apdat_)->resCom2_)->seb.get_Item(62))->Frame();
            if (require(udat_)->Update_edit(true)) {
                ChangeState(0);
            }
        } else if (state_ == 7) {
            ++stadiumMoveCnt_;
            SetAllDraw();
            if ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = SoccerForm::STADIUM_CAMERA_TIME()[0];
                    return cs_left < cs_right;
                }()) {
                PLS_API(([&]() -> void {
                    auto cs_receiver = game::Camera::pos();
                    pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 =
                        SoccerForm::STADIUM_CAERA_BASE_POS()[stadiumId_].get_Item(0);
                    require(cs_receiver)->Set(cs_arg0);
                }()));
            } else if ([&]() -> bool {
                           auto cs_left = stateCnt_;
                           auto cs_right = SoccerForm::STADIUM_CAMERA_TIME()[1];
                           return cs_left < cs_right;
                       }()) {
                pls::cs::Single x_ = require(game::Camera::pos())->x_;
                pls::cs::Single y_ = require(game::Camera::pos())->y_;
                {
                    auto cs_target = game::Camera::pos();
                    pls::cs::Single cs_arg0_142 = stateCnt_;
                    pls::cs::Single cs_arg1_142 = SoccerForm::STADIUM_CAMERA_TIME()[0];
                    pls::cs::Single cs_arg2_142 = SoccerForm::STADIUM_CAMERA_TIME()[1];
                    pls::cs::Single cs_arg3_142 =
                        require(SoccerForm::STADIUM_CAERA_BASE_POS()[stadiumId_].get_Item(0))->x_;
                    pls::cs::Single cs_arg4_142 =
                        require(SoccerForm::STADIUM_CAERA_BASE_POS()[stadiumId_].get_Item(1))->x_;
                    pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(
                        cs_arg0_142, cs_arg1_142, cs_arg2_142, cs_arg3_142, cs_arg4_142, true);
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = game::Camera::pos();
                    pls::cs::Single cs_arg0_143 = stateCnt_;
                    pls::cs::Single cs_arg1_143 = SoccerForm::STADIUM_CAMERA_TIME()[0];
                    pls::cs::Single cs_arg2_143 = SoccerForm::STADIUM_CAMERA_TIME()[1];
                    pls::cs::Single cs_arg3_143 =
                        require(SoccerForm::STADIUM_CAERA_BASE_POS()[stadiumId_].get_Item(0))->y_;
                    pls::cs::Single cs_arg4_143 =
                        require(SoccerForm::STADIUM_CAERA_BASE_POS()[stadiumId_].get_Item(1))->y_;
                    pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(
                        cs_arg0_143, cs_arg1_143, cs_arg2_143, cs_arg3_143, cs_arg4_143, true);
                    require(cs_target)->y_ = cs_value;
                }
            } else {
                PLS_API(([&]() -> void {
                    auto cs_receiver = game::Camera::pos();
                    pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 =
                        SoccerForm::STADIUM_CAERA_BASE_POS()[stadiumId_].get_Item(1);
                    require(cs_receiver)->Set(cs_arg0);
                }()));
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576)) && ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = SoccerForm::STADIUM_BTMINFO_TIME()[1];
                    return cs_left >= cs_right;
                }())) {
                stateCnt_ = SoccerForm::STADIUM_CAMERA_TIME()[2];
            }
            if ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = SoccerForm::STADIUM_CAMERA_TIME()[2];
                    return cs_left >= cs_right;
                }()) {
                ChangeState(8);
            }
        } else if (state_ == 8) {
            if (stateCnt_ >= 25) {
                ChangeState(6);
                pls::cs::Ref<kl_util3d::Vector3D> global_pos = kl_util3d::Vector3D::create();
                IntArray array = IntArray::make(2);
                game::Camera::ConvertGlobalToScreen(global_pos, array);
                {
                    auto cs_target = game::Camera::pos();
                    pls::cs::Single cs_value = array[0];
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = game::Camera::pos();
                    pls::cs::Single cs_value = array[1];
                    require(cs_target)->y_ = cs_value;
                }
            }
        } else if (state_ == 9) {
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if ([&]() -> bool {
                        auto cs_left = bonus_f_cnt;
                        auto cs_right = ([&]() -> pls::cs::Int32 {
                            auto cs_left = SoccerForm::BONUS_F_CYCLE()[1];
                            auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[0];
                            return cs_left + cs_right;
                        }());
                        return cs_left < cs_right;
                    }()) {
                    bonus_f_cnt = ([&]() -> pls::cs::Int32 {
                        auto cs_left = SoccerForm::BONUS_F_CYCLE()[1];
                        auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[0];
                        return cs_left + cs_right;
                    }());
                } else {
                    bonus_f_cnt =
                        SoccerForm::BONUS_F_CYCLE()[pls::cs::Int32(SoccerForm::BONUS_F_CYCLE().length()) - 1];
                }
            }
            ++bonus_f_cnt;
            if ([&]() -> bool {
                    auto cs_left = bonus_f_cnt;
                    auto cs_right =
                        SoccerForm::BONUS_F_CYCLE()[pls::cs::Int32(SoccerForm::BONUS_F_CYCLE().length()) - 1];
                    return cs_left >= cs_right;
                }()) {
                bonus_f_cnt = 0;
                ++bonus_f_index;
                if ([&]() -> bool {
                        auto cs_left = bonus_f_index;
                        auto cs_right = PLS_API(
                            kl_java_util::Vector_2_Size(require(data::FanBonusData::bonus_f_data1())));
                        return cs_left < cs_right;
                    }()) {
                    temp_fan = temp_fan + temp_addFan;
                    temp_assist = temp_assist + temp_addAssist;
                    temp_nameValue = temp_nameValue + temp_addNameValue;
                    pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array2 =
                        pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(
                            PLS_API(kl_java_util::Vector_2_ElementAt(
                                require(data::FanBonusData::bonus_f_data1()), bonus_f_index)));
                    IntArray array3 = pls::cs::unbox<IntArray>(array2.get_Item(2));
                    temp_addFan = array3[0];
                    temp_addAssist = array3[1];
                    temp_addNameValue = array3[2];
                }
                if ([&]() -> bool {
                        auto cs_left = bonus_f_index;
                        auto cs_right = PLS_API(
                            kl_java_util::Vector_2_Size(require(data::FanBonusData::bonus_f_data1())));
                        return cs_left >= cs_right;
                    }()) {
                    ChangeState(14);
                    for (pls::cs::Int32 j = 0;
                         j <
                         PLS_API(kl_java_util::Vector_2_Size(require(data::FanBonusData::bonus_f_data1())));
                         ++j) {
                        pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array4 =
                            pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(data::FanBonusData::bonus_f_data1()), j)));
                        IntArray array5 = pls::cs::unbox<IntArray>(array4.get_Item(2));
                        pls::cs::Int32 num3 = PLS_API(
                            require((pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(array4.get_Item(3))))
                                ->IntValue());
                        IntArray array6 = pls::cs::unbox<IntArray>(array4.get_Item(4));
                        pls::cs::Int32 num4 = PLS_API(
                            require((pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(array4.get_Item(5))))
                                ->IntValue());
                        data::FanActData::AddFanParam(array5[0], 0);
                        data::FanActData::AddFanParam(array5[1], 1);
                        data::FanActData::AddFanParam(array5[2], 2);
                        pls::cs::Int32 fanEva = data::FanActData::GetFanEva(0);
                        if (num4 == 1) {
                            if ((num3 == 0)) {
                                {
                                    for (pls::cs::Int32 l = 0; l < array6.length(); ++l) {
                                        pls::cs::Ref<data::PlayerData> playerData4 =
                                            require(apdat_)->pData_.get_Item(array6[l]);
                                        require(playerData4)->AddPopular(1);
                                    }
                                }
                            } else if ((num3 == 1)) {
                                {
                                    for (pls::cs::Int32 k = 0; k < array6.length(); ++k) {
                                        pls::cs::Ref<data::PlayerData> playerData3 =
                                            require(apdat_)->pData_.get_Item(array6[k]);
                                        require(playerData3)->AddPopular(3);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if (state_ == 10) {
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                bonus_in_cnt =
                    SoccerForm::BONUS_IN_CYCLE()[pls::cs::Int32(SoccerForm::BONUS_IN_CYCLE().length()) - 1];
            }
            for (pls::cs::Int32 m = 0; m < SoccerForm::BONUS_IN_CYCLE().length(); ++m) {
                if ([&]() -> bool {
                        auto cs_left = bonus_in_cnt;
                        auto cs_right = SoccerForm::BONUS_IN_CYCLE()[m];
                        return cs_left < cs_right;
                    }()) {
                    if (bonus_in_param[m][0] == 0 && bonus_in_param[m][1] == 0) {
                        bonus_in_cnt = SoccerForm::BONUS_IN_CYCLE()[m];
                    }
                    break;
                }
            }
            ++bonus_in_cnt;
            if ([&]() -> bool {
                    auto cs_left = bonus_in_cnt;
                    auto cs_right =
                        SoccerForm::BONUS_IN_CYCLE()[pls::cs::Int32(SoccerForm::BONUS_IN_CYCLE().length()) -
                                                     1];
                    return cs_left >= cs_right;
                }()) {
                ++bonus_in_index;
                if (bonus_in_index >= 1) {
                    ChangeState(11);
                    for (pls::cs::Int32 n = 0; n < bonus_in_param.length(); ++n) {
                        if ((n == 0) || (n == 1) || (n == 2)) {
                            {
                                pls::cs::Int32 cs_arg0 = bonus_in_param[n][0];
                                require(apdat_)->AddMoney(cs_arg0, 0);
                            }
                            {
                                pls::cs::Int32 cs_arg0 = bonus_in_param[n][1];
                                require(apdat_)->SubMoney(cs_arg0, 0);
                            }
                        } else if ((n == 3)) {
                            {
                                pls::cs::Int32 cs_arg0 = bonus_in_param[n][0];
                                require(apdat_)->AddMoney(cs_arg0, 2);
                            }
                            {
                                pls::cs::Int32 cs_arg0 = bonus_in_param[n][1];
                                require(apdat_)->SubMoney(cs_arg0, 2);
                            }
                        } else if ((n == 4)) {
                            {
                                pls::cs::Int32 cs_arg0 = bonus_in_param[n][0];
                                require(apdat_)->AddMoney(cs_arg0, 3);
                            }
                            {
                                pls::cs::Int32 cs_arg0 = bonus_in_param[n][1];
                                require(apdat_)->SubMoney(cs_arg0, 3);
                            }
                        } else {
                            {
                                pls::cs::Int32 cs_arg0 = bonus_in_param[n][0];
                                require(apdat_)->AddMoney(cs_arg0, 4);
                            }
                            {
                                pls::cs::Int32 cs_arg0 = bonus_in_param[n][1];
                                require(apdat_)->SubMoney(cs_arg0, 4);
                            }
                        }
                    }
                }
            }
        } else if (state_ == 11) {
            require(require(require(apdat_)->resCom2_)->seb.get_Item(60))->Frame();
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576)) && select_ == 0) {
                ChangeState(12);
                pls::cs::Int32 recoveredMatchInfoJoin11 = require(udat_)->GetMatchInfoJoin();
                if (recoveredMatchInfoJoin11 == 0) {
                    ChangeState(12);
                } else {
                    ChangeState(4);
                }
            }
        } else if (state_ == 12) {
            require(require(require(apdat_)->resCom2_)->seb.get_Item(60))->Frame();
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576)) && select_ == 0) {
                ChangeState(4);
                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(33, 1)));
            }
        } else if (state_ == 14) {
            require(require(require(apdat_)->resCom2_)->seb.get_Item(60))->Frame();
            for (pls::cs::Int32 num5 = 0;
                 num5 < PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_)));
                 ++num5) {
                pls::cs::Ref<data::PlayerData> playerData5 =
                    pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(PLS_API(
                        kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), num5)));
                if (require(playerData5)->temp_anime > 0) {
                    --require(playerData5)->temp_anime;
                }
            }
            if (([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = SoccerForm::PBONUS_NP_LV_TIME()[2];
                    return cs_left >= cs_right;
                }()) &&
                ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = SoccerForm::PBONUS_NP_LV_TIME()[3];
                    return cs_left < cs_right;
                }())) {
                for (pls::cs::Int32 num6 = 0;
                     num6 < PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_)));
                     ++num6) {
                    pls::cs::Ref<data::PlayerData> playerData6 =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_),
                                                                     num6)));
                    pls::cs::Int32 cs_arg0_144 = stateCnt_ - 1;
                    pls::cs::Int32 cs_arg1_144 = SoccerForm::PBONUS_NP_LV_TIME()[2];
                    pls::cs::Int32 cs_arg2_144 = SoccerForm::PBONUS_NP_LV_TIME()[3];
                    pls::cs::Int32 cs_arg4_144 = PBONUS_NP_LV_ADDEXP;
                    pls::cs::Int32 num7 = game::GameUtil::RateConvert(cs_arg0_144, cs_arg1_144, cs_arg2_144,
                                                                      0, cs_arg4_144, true);
                    pls::cs::Int32 cs_arg0_145 = stateCnt_;
                    pls::cs::Int32 cs_arg1_145 = SoccerForm::PBONUS_NP_LV_TIME()[2];
                    pls::cs::Int32 cs_arg2_145 = SoccerForm::PBONUS_NP_LV_TIME()[3];
                    pls::cs::Int32 cs_arg4_145 = PBONUS_NP_LV_ADDEXP;
                    pls::cs::Int32 num8 = game::GameUtil::RateConvert(cs_arg0_145, cs_arg1_145, cs_arg2_145,
                                                                      0, cs_arg4_145, true);
                    pls::cs::Int32 num9 = num8 - num7;
                    require(playerData6)->temp_exp = require(playerData6)->temp_exp + num9;
                    pls::cs::Int32 nextLvUpExp =
                        data::PlayerData::GetNextLvUpExp(require(playerData6)->temp_lv);
                    if (require(playerData6)->temp_exp > nextLvUpExp) {
                        require(playerData6)->temp_exp = require(playerData6)->temp_exp - nextLvUpExp;
                        {
                            auto cs_target = playerData6;
                            pls::cs::Int32 cs_value =
                                main::AppData::ClampMax(require(playerData6)->temp_lv + 1, 30);
                            require(cs_target)->temp_lv = cs_value;
                        }
                        require(playerData6)->temp_lvUp = true;
                        require(playerData6)->temp_anime = 12;
                    }
                }
            }
            if ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = SoccerForm::PBONUS_NP_LV_TIME()[3];
                    return cs_left >= cs_right;
                }()) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    select_ = (select_ - 1 + 2) % 2;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    select_ = (select_ + 1) % 2;
                }
            }
            if ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = SoccerForm::PBONUS_NP_LV_TIME()[3];
                    return cs_left == cs_right;
                }()) {
                for (pls::cs::Int32 num10 = 0; num10 < 11; ++num10) {
                    pls::cs::Ref<data::PlayerData> playerData7 =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_),
                                                                     num10)));
                    require(playerData7)->AddExp(PBONUS_NP_LV_ADDEXP, false);
                    require(playerData7)->temp_exp = require(playerData7)->exp_;
                    if (require(playerData7)->temp_lv != require(playerData7)->lv_) {
                        require(playerData7)->temp_lvUp = true;
                    }
                    require(playerData7)->temp_lv = require(playerData7)->lv_;
                }
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if ([&]() -> bool {
                        auto cs_left = stateCnt_;
                        auto cs_right = SoccerForm::PBONUS_NP_LV_TIME()[3];
                        return cs_left < cs_right;
                    }()) {
                    stateCnt_ = SoccerForm::PBONUS_NP_LV_TIME()[3] - 1;
                } else if (([&]() -> bool {
                               auto cs_left = stateCnt_;
                               auto cs_right = SoccerForm::PBONUS_NP_LV_TIME()[3];
                               return cs_left >= cs_right;
                           }()) &&
                           select_ == 0) {
                    ChangeState(16);
                } else {
                }
            } else if (require(apdat_)->IsPushSoftLabel(6)) {
                bonus_softKey = 1 - bonus_softKey;
            }
        } else if (state_ == 15) {
            require(require(require(apdat_)->resCom2_)->seb.get_Item(60))->Frame();
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if ([&]() -> bool {
                        auto cs_left = stateCnt_;
                        auto cs_right = SoccerForm::PBONUS_NP_LV_POPULAR()[3];
                        return cs_left < cs_right;
                    }()) {
                    stateCnt_ = SoccerForm::PBONUS_NP_LV_POPULAR()[3] - 1;
                } else if (select_ == 0) {
                    for (pls::cs::Int32 num11 = 0;
                         num11 <
                         PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_)));
                         ++num11) {
                        pls::cs::Ref<data::PlayerData> playerData8 =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(udat_)->memberPDataist_), num11)));
                        require(playerData8)->AddPopular(PBONUS_NP_LV_GETPOPULAR);
                    }
                    ChangeState(16);
                } else {
                }
            } else if (require(apdat_)->IsPushSoftLabel(6)) {
                bonus_softKey = 1 - bonus_softKey;
            }
        } else if (state_ == 16) {
            require(require(require(apdat_)->resCom2_)->seb.get_Item(60))->Frame();
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if ([&]() -> bool {
                        auto cs_left = stateCnt_;
                        auto cs_right = SoccerForm::PBONUS_NP_LV_TRAINING1()[1];
                        return cs_left < cs_right;
                    }()) {
                    stateCnt_ = SoccerForm::PBONUS_NP_LV_TRAINING1()[1];
                } else if (select_ == 0) {
                    for (pls::cs::Int32 num12 = 0; num12 < 11; ++num12) {
                        pls::cs::Ref<data::PlayerData> playerData9 =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(udat_)->memberPDataist_), num12)));
                        if (require(playerData9)->bonus_research[0] == -1) {
                            continue;
                        }
                        {
                            pls::cs::Int32 cs_arg0 = require(playerData9)->bonus_research[0];
                            pls::cs::Int32 cs_arg1 = require(playerData9)->bonus_research[1];
                            require(udat_)->AddResearchPoint(cs_arg0, cs_arg1);
                        }
                    }
                    ChangeState(10);
                } else {
                }
            } else if (require(apdat_)->IsPushSoftLabel(6)) {
                bonus_softKey = 1 - bonus_softKey;
            }
        }
        if (state_ == 0) {
        }
        return false;
    }
}

// M:form.SoccerForm.Update_main
bool SoccerForm::Update_main() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Update_main", game);
    {
        require(require(udat_)->ball_)->Update();
        for (pls::cs::Int32 i = 0; i < require(udat_)->teams_.length(); ++i) {
            require(require(udat_)->teams_.get_Item(i))->Update();
        }
        require(require(udat_)->gm_)->Collision();
        require(require(udat_)->gm_)->Update();
        return false;
    }
}

// M:form.SoccerForm.UpdateOffscreenTopBar(kairo.unity.ui.Graphics,System.Boolean)
void SoccerForm::UpdateOffscreenTopBar(pls::cs::Ref<pls::kairo::Graphics> g, bool all_update) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.SoccerForm.UpdateOffscreenTopBar(kairo.unity.ui.Graphics,System.Boolean)", game);
    {
        if (all_update) {
            require(apdat_)->offYear_ = -1;
            require(apdat_)->offMonth_ = -1;
            require(apdat_)->offHour_ = -1;
            require(apdat_)->offSec_ = -1;
            require(apdat_)->offMoney_ = -1ll;
            require(apdat_)->offWeatherAlpha_ = -1;
            require(apdat_)->offScore1_ = -1;
            require(apdat_)->offScore2_ = -1;
        }
        pls::cs::Int32 num2, num5, num3, num4;
        pls::cs::Ref<data::TeamData> teamData =
            require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[0]);
        pls::cs::Ref<data::TeamData> teamData2 =
            require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
        pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
        pls::cs::Int32 topBarOffN = GetTopBarOffN();
        pls::cs::Int32 num =
            main::AppData::ClampMin((require(instance)->GetGameWidth() - (240 + topBarOffN * 2)) / 2, 0);
        if (num > 0) {
            Draw_topBarParts(g, 6, 0, num);
            Draw_topBarParts(g, 6, require(instance)->GetGameWidth() - num, num);
        }
        num2 = num;
        Draw_topBarParts(g, 1, num, SoccerForm::TBAR_W()[1]);
        num += SoccerForm::TBAR_W()[1];
        num3 = num;
        Draw_topBarParts(g, 2, num, SoccerForm::TBAR_W()[2] + topBarOffN);
        num += SoccerForm::TBAR_W()[2] + topBarOffN;
        Draw_topBarParts(g, 3, num, SoccerForm::TBAR_W()[3]);
        num += SoccerForm::TBAR_W()[3];
        num4 = num;
        Draw_topBarParts(g, 4, num, SoccerForm::TBAR_W()[4] + topBarOffN);
        num += SoccerForm::TBAR_W()[4] + topBarOffN;
        num5 = num;
        Draw_topBarParts(g, 5, num, SoccerForm::TBAR_W()[5]);
        num += SoccerForm::TBAR_W()[5];
        {
            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                require(require(apdat_)->resCom2_)->seb.get_Item(28);
            pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(33);
            pls::cs::Int32 cs_arg5 = require(udat_)->selectUniform_;
            require(apdat_)->DrawSeb(g, num2 + 1, 4, cs_arg3, cs_arg4, cs_arg5);
        }
        {
            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                require(require(apdat_)->resCom2_)->seb.get_Item(28);
            pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(33);
            pls::cs::Int32 cs_arg5 = require(teamData2)->uniform_;
            require(apdat_)->DrawSeb(g, num5 + 1, 4, cs_arg3, cs_arg4, cs_arg5);
        }
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(214, 241, 255))));
        PLS_API(require(g)->DrawString(require(teamData)->name_, num3 + topBarOffN / 2 + 43, 4.0f, 2));
        PLS_API(require(g)->DrawString(require(teamData2)->name_, num4 + topBarOffN / 2 + 43, 4.0f, 2));
        pls::cs::Int32 x, num6;
        num6 = 0;
        x = num6;
        if (([&]() -> bool {
                auto cs_left = require(apdat_)->offScore1_;
                auto cs_right = require(require(udat_)->gm_)->score_[0];
                return cs_left != cs_right;
            }()) ||
            ([&]() -> bool {
                auto cs_left = require(apdat_)->offScore2_;
                auto cs_right = require(require(udat_)->gm_)->score_[1];
                return cs_left != cs_right;
            }())) {
            {
                auto cs_target = apdat_;
                pls::cs::Int32 cs_value = require(require(udat_)->gm_)->score_[0];
                require(cs_target)->offScore1_ = cs_value;
            }
            x = require(instance)->GetGameWidth() / 2 - 13;
            num6 = 4;
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(32);
                pls::cs::Single cs_arg1 = require(instance)->GetGameWidth() / 2 - 21;
                require(g)->DrawImage(cs_arg0, cs_arg1, 3.0f, 99, 3, 17, 16);
            }()));
            if ([&]() -> bool {
                    auto cs_left = require(require(udat_)->gm_)->score_[0];
                    auto cs_right = require(require(udat_)->gm_)->score_[1];
                    return cs_left > cs_right;
                }()) {
                {
                    pls::cs::Int64 cs_arg2 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(require(udat_)->gm_)->score_[0]);
                    require(apdat_)->DrawNumImageLongIntInt(g, 31, cs_arg2, x, num6, 0, 2);
                }
            } else {
                {
                    pls::cs::Int64 cs_arg2 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(require(udat_)->gm_)->score_[0]);
                    require(apdat_)->DrawNumImageLongIntInt(g, 30, cs_arg2, x, num6, 0, 2);
                }
            }
        }
        if ([&]() -> bool {
                auto cs_left = require(apdat_)->offScore2_;
                auto cs_right = require(require(udat_)->gm_)->score_[1];
                return cs_left != cs_right;
            }()) {
            {
                auto cs_target = apdat_;
                pls::cs::Int32 cs_value = require(require(udat_)->gm_)->score_[1];
                require(cs_target)->offScore2_ = cs_value;
            }
            x = require(instance)->GetGameWidth() / 2 + 13;
            num6 = 4;
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(32);
                pls::cs::Single cs_arg1 = require(instance)->GetGameWidth() / 2 + 4;
                require(g)->DrawImage(cs_arg0, cs_arg1, 3.0f, 124, 3, 17, 16);
            }()));
            {
                pls::cs::Int64 cs_arg2 =
                    pls::cs::cast_integral<pls::cs::Int64>(require(require(udat_)->gm_)->score_[1]);
                require(apdat_)->DrawNumImageLongIntInt(g, 30, cs_arg2, x, num6, 0, 2);
            }
        }
    }
}

// M:form.SoccerForm.Draw_watch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Double,System.Int32)
void SoccerForm::Draw_watch(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 cx, pls::cs::Int32 cy,
                            pls::cs::Double len, pls::cs::Int32 angle) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.SoccerForm.Draw_watch(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Double,System.Int32)",
        game);
    {
        pls::cs::Single num = game::GameUtil::Cos(angle);
        pls::cs::Single num2 = game::GameUtil::Sin(angle);
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0))));
        PLS_API(require(g)->DrawLine(cx, cy, cx + pls::cs::to_int32((len * pls::cs::Double(num))),
                                     cy - pls::cs::to_int32((len * pls::cs::Double(num2))), 1.0f));
    }
}

// M:form.SoccerForm.UpdateOffscreen(kairo.unity.ui.Graphics)
void SoccerForm::UpdateOffscreen(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.UpdateOffscreen(kairo.unity.ui.Graphics)", game);
    {
        game::Camera::ensure_initialized();

        pls::cs::Int32 num = 0;
        if (require(game::Camera::old_pos())->x_ != require(game::Camera::pos())->x_ ||
            require(game::Camera::old_pos())->y_ != require(game::Camera::pos())->y_) {
            num = 1;
            if (SoccerForm::DISP_COPAREA() == 0) {
                num = 2;
            }
        }
        if (flg_allDraw) {
            flg_allDraw = false;
            num = 2;
        }
        pls::cs::Int32 vIEW_W = SoccerForm::VIEW_W();
        pls::cs::Int32 vIEW_H = SoccerForm::VIEW_H();
        SoccerForm::VIEW_W() = GetGameWidth();
        SoccerForm::VIEW_H() = GetGameHeight();
        game::Camera::SetDrawCenter(SoccerForm::VIEW_X(), SoccerForm::VIEW_Y(), SoccerForm::VIEW_W(),
                                    SoccerForm::VIEW_H());
        PLS_API(require(g)->ClipRect(SoccerForm::VIEW_X(), SoccerForm::VIEW_Y(), SoccerForm::VIEW_W(),
                                     SoccerForm::VIEW_H(), true));
        kairo::unity::ui::Seb::SetClip(SoccerForm::VIEW_X(), SoccerForm::VIEW_Y(), SoccerForm::VIEW_W(),
                                       SoccerForm::VIEW_H());
        require(apdat_)->ClearZSortObjects();
        num = 2;
        if (num == 2) {
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 255))));
            PLS_API(require(g)->FillRect(SoccerForm::VIEW_X(), SoccerForm::VIEW_Y(), SoccerForm::VIEW_W(),
                                         SoccerForm::VIEW_H()));
            require(require(apdat_)->map_)->Draw(g, true);
            require(game::Camera::old_pos())->x_ = require(game::Camera::pos())->x_;
            require(game::Camera::old_pos())->y_ = require(game::Camera::pos())->y_;
        } else {
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 255))));
            pls::cs::Int32 num2 = pls::cs::to_int32(require(game::Camera::pos())->x_);
            pls::cs::Int32 num3 = pls::cs::to_int32(require(game::Camera::old_pos())->x_);
            pls::cs::Int32 num4 = -(num2 - num3);
            num2 = pls::cs::to_int32(require(game::Camera::pos())->y_);
            num3 = pls::cs::to_int32(require(game::Camera::old_pos())->y_);
            pls::cs::Int32 num5 = num2 - num3;
            require(game::Camera::old_pos())->x_ = require(game::Camera::pos())->x_;
            require(game::Camera::old_pos())->y_ = require(game::Camera::pos())->y_;
            PLS_API(require(g)->CopyArea(SoccerForm::VIEW_X(), SoccerForm::VIEW_Y(), SoccerForm::VIEW_W(),
                                         SoccerForm::VIEW_H(), num4, num5));
            for (pls::cs::Int32 i = 0; i < offUpdateSRect.length(); ++i) {
                offUpdateSRect[i] = 0;
            }
            if (num4 > 0) {
                offUpdateSRect[3] = num4;
            } else {
                offUpdateSRect[1] = -num4;
            }
            if (num5 > 0) {
                offUpdateSRect[0] = num5;
            } else {
                offUpdateSRect[2] = -num5;
            }
            pls::cs::Int32 colorOfRGB = PLS_API(pls::kairo::Graphics::GetColorOfRGB(128, 210, 255));
            if (offUpdateSRect[0] > 0) {
                PLS_API(require(g)->SetColor(colorOfRGB));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg3 = offUpdateSRect[0];
                    require(g)->FillRect(0.0f, SoccerForm::VIEW_Y(), 240.0f, cs_arg3);
                }()));
            }
            if (offUpdateSRect[1] > 0) {
                PLS_API(require(g)->SetColor(colorOfRGB));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = SoccerForm::VIEW_W() - offUpdateSRect[1];
                    pls::cs::Single cs_arg2 = offUpdateSRect[1];
                    require(g)->FillRect(cs_arg0, SoccerForm::VIEW_Y(), cs_arg2, SoccerForm::VIEW_H());
                }()));
            }
            if (offUpdateSRect[2] > 0) {
                PLS_API(require(g)->SetColor(colorOfRGB));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg1 = SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - offUpdateSRect[2];
                    pls::cs::Single cs_arg3 = offUpdateSRect[2];
                    require(g)->FillRect(0.0f, cs_arg1, 240.0f, cs_arg3);
                }()));
            }
            if (offUpdateSRect[3] > 0) {
                PLS_API(require(g)->SetColor(colorOfRGB));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg2 = offUpdateSRect[3];
                    require(g)->FillRect(SoccerForm::VIEW_X(), SoccerForm::VIEW_Y(), cs_arg2,
                                         SoccerForm::VIEW_H());
                }()));
            }
            require(require(apdat_)->map_)->Draw_copyArea(g, offUpdateSRect);
        }
        require(apdat_)->DrawZSortObjects(g, true);
        kairo::unity::ui::Seb::ClearClip();
        PLS_API(require(g)->PopClip());
        SoccerForm::VIEW_W() = vIEW_W;
        SoccerForm::VIEW_H() = vIEW_H;
    }
}

// M:form.SoccerForm.SetAllDraw
void SoccerForm::SetAllDraw() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.SetAllDraw", game);
    {
        game::Camera::ensure_initialized();

        flg_allDraw = true;
        PLS_API(require(game::Camera::old_pos())->Set(game::Camera::pos()));
    }
}

// M:form.SoccerForm.Draw(kairo.unity.ui.Graphics)
void SoccerForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Draw(kairo.unity.ui.Graphics)", game);
    {
        SoccerForm::VIEW_W() = ([&]() -> pls::cs::Int32 {
            auto cs_left = require(view_)->GetGameWidth();
            auto cs_right = SoccerForm::VIEW_X();
            return cs_left - cs_right;
        }());
        SoccerForm::VIEW_H() = ([&]() -> pls::cs::Int32 {
            auto cs_left = require(view_)->GetGameHeight();
            auto cs_right = SoccerForm::VIEW_Y();
            return cs_left - cs_right;
        }());
        pls::cs::Int32 cs_arg0_185 = scale_;
        pls::cs::Int32 cs_arg1_185 = GetScaleMin();
        pls::cs::Int32 cs_arg2_185 = GetScaleMax() + 40;
        pls::cs::Int32 num = main::AppData::Clamp(cs_arg0_185, cs_arg1_185, cs_arg2_185);
        if (num != scale_) {
            SetScale(num);
        }
        try {
            _draw(g);
        } catch (const pls::cs::Exception& cs_caught_105) {
            auto ex = pls::cs::capture_exception(cs_caught_105);
            {
                pls::cs::throw_exception(ex);
            }
        }
    }
}

// M:form.SoccerForm._draw(kairo.unity.ui.Graphics)
void SoccerForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm._draw(kairo.unity.ui.Graphics)", game);
    {
        pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
        game::Camera::SetDrawCenter(SoccerForm::VIEW_X(), SoccerForm::VIEW_Y(), SoccerForm::VIEW_W(),
                                    SoccerForm::VIEW_H());
        if (state_ != 7 && state_ != 8 && state_ != 6 && state_ != 4 && state_ != 5) {
            Draw_main(g);
        }
        pls::cs::Int32 originX = PLS_API(require(g)->GetOriginX());
        pls::cs::Int32 originY = PLS_API(require(g)->GetOriginY());
        if (state_ == 9 || state_ == 10 || state_ == 11 || state_ == 12 || state_ == 13 || state_ == 14 ||
            state_ == 15 || state_ == 16) {
            pls::cs::Int32 x = (require(instance)->GetGameWidth() - 240) / 2;
            pls::cs::Int32 y = (require(instance)->GetGameHeight() - 240) / 2;
            PLS_API(require(g)->SetOrigin(x, y));
            SubForm::Draw_backBlackAlpha(g);
        }
        if (state_ == 0) {
            if (require(instance)->CheckFirstTouch(17)) {
                surface::GameView::AddTouch(
                    g, 17, -1000, -1000, 2000, 2000, 0,
                    require(kairo::unity::surface::TouchOption::Drag(1, 1))->Flag(40));
            } else {
                {
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::Int32 cs_arg2 = SoccerForm::VIEW_X();
                    pls::cs::Int32 cs_arg3 = SoccerForm::VIEW_Y();
                    pls::cs::Int32 cs_arg4 = SoccerForm::VIEW_W();
                    pls::cs::Int32 cs_arg5 = SoccerForm::VIEW_H();
                    pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 =
                        kairo::unity::surface::TouchOption::Drag(1, 1);
                    surface::GameView::AddTouch(cs_arg0, 17, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 0, cs_arg7);
                }
            }
            if (statusAmeftoCnt_ > 0) {
                auto cs_left_127 = SoccerForm::STATUS_AMEFTO_ANIME()[1];
                auto cs_right_127 = statusAmeftoCnt_;
                pls::cs::Int32 x2 = cs_left_127 - cs_right_127;
                pls::cs::Int32 cs_arg1_128 = SoccerForm::STATUS_AMEFTO_ANIME()[0];
                pls::cs::Int32 cs_arg2_128 = SoccerForm::STATUS_AMEFTO_ANIME()[1];
                pls::cs::Int32 num = game::GameUtil::RateConvert(x2, cs_arg1_128, cs_arg2_128, 0, 110, true);
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(91);
                    pls::cs::Single cs_arg1 = require(instance)->GetGameWidth() - 103 + num;
                    require(g)->DrawImage(cs_arg0, cs_arg1, 22.0f);
                }()));
                {
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::Int32 cs_arg2 = require(instance)->GetGameWidth() - 99 + num;
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(24);
                    surface::GameView::AddTouchSeb(cs_arg0, 1, cs_arg2, 33, cs_arg4, 0, 16);
                }
                {
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::Int32 cs_arg2 = require(instance)->GetGameWidth() - 9 + num;
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(24);
                    surface::GameView::AddTouchSeb(cs_arg0, 1, cs_arg2, 33, cs_arg4, 1, 18);
                }
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(245, 255, 139))));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = SoccerForm::STATUS_AMEFTO_NAME()[statusAmeftoMode_];
                    pls::cs::Single cs_arg1 = require(instance)->GetGameWidth() - 52 + num;
                    require(g)->DrawString(cs_arg0, cs_arg1, 27.0f, 2);
                }()));
            } else {
                surface::GameView::AddTouch(g, 2, require(instance)->GetGameWidth() - 120, 0, 120, 60, 65554);
            }
            if (!is_null(statusPlayer_)) {
                pls::cs::Int32 sideSoftWidth = require(instance)->GetSideSoftWidth();
                pls::cs::Ref<data::PlayerData> playerData =
                    require(apdat_)->pData_.get_Item(require(statusPlayer_)->pData_id_);
                bool flag = false;
                if (require(playerData)->auraPoint_ == 10000) {
                    flag = true;
                }
                if (flag && require(require(udat_)->gm_)->state_ == 0) {
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(55);
                        pls::cs::Single cs_arg2 = SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - 29 -
                                                  require(statusPlayer_)->frame_ % 10 / 5;
                        require(g)->DrawImage(cs_arg0, 2 + sideSoftWidth, cs_arg2);
                    }()));
                    {
                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                            require(require(apdat_)->resCom2_)->seb.get_Item(49);
                        pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                            require(require(apdat_)->resCom2_)->img.get_Item(53);
                        require(apdat_)->DrawSeb(g, 87 + sideSoftWidth,
                                                 SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - 23, cs_arg3,
                                                 cs_arg4, 0);
                    }
                    if (require(statusPlayer_)->frame_ % 10 / 5 == 1) {
                        {
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(require(apdat_)->resCom2_)->seb.get_Item(49);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(require(apdat_)->resCom2_)->img.get_Item(53);
                            require(apdat_)->DrawSeb(g, 94 + sideSoftWidth,
                                                     SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - 17,
                                                     cs_arg3, cs_arg4, 1);
                        }
                    }
                    {
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        pls::cs::Int32 cs_arg3 = require(instance)->GetGameHeight() / 2;
                        pls::cs::Int32 cs_arg4 = require(instance)->GetGameWidth();
                        pls::cs::Int32 cs_arg5 = require(instance)->GetGameHeight() / 2;
                        surface::GameView::AddTouch(cs_arg0, 2, 0, cs_arg3, cs_arg4, cs_arg5, 131072);
                    }
                }
            }
            if (stateCnt_ < 50) {
                if (!require(require(udat_)->gm_)->halfTime) {
                    {
                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                            require(require(apdat_)->resCom2_)->seb.get_Item(105);
                        pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                            require(require(apdat_)->resCom2_)->img.get_Item(189);
                        require(apdat_)->DrawSeb(g, 77, 21, cs_arg3, cs_arg4, 0);
                    }
                } else {
                    {
                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                            require(require(apdat_)->resCom2_)->seb.get_Item(105);
                        pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                            require(require(apdat_)->resCom2_)->img.get_Item(189);
                        require(apdat_)->DrawSeb(g, 77, 21, cs_arg3, cs_arg4, 1);
                    }
                }
            }
            if (require(require(udat_)->gm_)->state_ == 8) {
                surface::GameView::AddTouch(2);
            }
        } else if (state_ == 1) {
            Draw_topBar(g);
        } else if (state_ == 6) {
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(SoccerForm::offGameScreen_())->get_Image();
                pls::cs::Single cs_arg1 = SoccerForm::VIEW_X();
                pls::cs::Single cs_arg2 = SoccerForm::VIEW_Y();
                pls::cs::Single cs_arg3 = SoccerForm::VIEW_W();
                pls::cs::Single cs_arg4 = SoccerForm::VIEW_H();
                pls::cs::Int32 cs_arg5 = SoccerForm::VIEW_X();
                pls::cs::Int32 cs_arg6 = SoccerForm::VIEW_Y();
                pls::cs::Int32 cs_arg7 = GetGameWidth();
                pls::cs::Int32 cs_arg8 = GetGameHeight();
                require(g)->DrawScaledImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6,
                                            cs_arg7, cs_arg8);
            }()));
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(32);
                require(g)->DrawImage(cs_arg0, 0.0f, 20.0f, 0, 20, 81, 13);
            }()));
            if (!require(require(udat_)->gm_)->halfTime) {
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(48);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(52);
                    require(apdat_)->DrawSeb(g, 4, 20, cs_arg3, cs_arg4, 0);
                }
            } else {
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(48);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(52);
                    require(apdat_)->DrawSeb(g, 4, 20, cs_arg3, cs_arg4, 1);
                }
            }
            pls::cs::Int32 num2 = pls::cs::to_int32(require(require(udat_)->gm_)->gameTime_);
            pls::cs::Int32 num3 = 41;
            pls::cs::Int32 y2 = 21;
            require(apdat_)->DrawNumImageLongIntInt(g, 29, pls::cs::cast_integral<pls::cs::Int64>(num2 / 60),
                                                    num3, y2, 0, 4);
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(29);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(101);
                require(apdat_)->DrawSeb(g, num3, y2, cs_arg3, cs_arg4, 10);
            }
            require(apdat_)->DrawNumImageLongIntInt(
                g, 29, pls::cs::cast_integral<pls::cs::Int64>(num2 % 60 / 10), num3 + 13, y2, 0, 4);
            require(apdat_)->DrawNumImageLongIntInt(
                g, 29, pls::cs::cast_integral<pls::cs::Int64>(num2 % 60 % 10), num3 + 21, y2, 0, 4);
            pls::cs::Int32 x3 = (require(instance)->GetGameWidth() - 240) / 2;
            pls::cs::Int32 y3 = (require(instance)->GetGameHeight() - 240) / 2;
            PLS_API(require(g)->SetOrigin(x3, y3));
            require(udat_)->Draw_edit(g, true);
            require(udat_)->Draw_edit2(g, true);
            PLS_API(require(g)->SetOrigin(originX, originY));
        } else if (state_ == 7 || state_ == 8) {
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(SoccerForm::offGameScreen_())->get_Image();
                pls::cs::Single cs_arg1 = SoccerForm::VIEW_X();
                pls::cs::Single cs_arg2 = SoccerForm::VIEW_Y();
                pls::cs::Single cs_arg3 = SoccerForm::VIEW_W();
                pls::cs::Single cs_arg4 = SoccerForm::VIEW_H();
                pls::cs::Int32 cs_arg5 = SoccerForm::VIEW_X();
                pls::cs::Int32 cs_arg6 = SoccerForm::VIEW_Y();
                pls::cs::Int32 cs_arg7 = GetGameWidth();
                pls::cs::Int32 cs_arg8 = GetGameHeight();
                require(g)->DrawScaledImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6,
                                            cs_arg7, cs_arg8);
            }()));
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(32);
                require(g)->DrawImage(cs_arg0, 0.0f, 20.0f, 0, 20, 81, 13);
            }()));
            if (!require(require(udat_)->gm_)->halfTime) {
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(48);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(52);
                    require(apdat_)->DrawSeb(g, 4, 20, cs_arg3, cs_arg4, 0);
                }
            } else {
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(48);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(52);
                    require(apdat_)->DrawSeb(g, 4, 20, cs_arg3, cs_arg4, 1);
                }
            }
            pls::cs::Int32 num4 = pls::cs::to_int32(require(require(udat_)->gm_)->gameTime_);
            pls::cs::Int32 num5 = 41;
            pls::cs::Int32 y4 = 21;
            require(apdat_)->DrawNumImageLongIntInt(g, 29, pls::cs::cast_integral<pls::cs::Int64>(num4 / 60),
                                                    num5, y4, 0, 4);
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(29);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(101);
                require(apdat_)->DrawSeb(g, num5, y4, cs_arg3, cs_arg4, 10);
            }
            require(apdat_)->DrawNumImageLongIntInt(
                g, 29, pls::cs::cast_integral<pls::cs::Int64>(num4 % 60 / 10), num5 + 13, y4, 0, 4);
            require(apdat_)->DrawNumImageLongIntInt(
                g, 29, pls::cs::cast_integral<pls::cs::Int64>(num4 % 60 % 10), num5 + 21, y4, 0, 4);
            Draw_stadiumCamera(g);
            if (state_ == 8) {
                pls::cs::Int32 num6 = stateCnt_;
                pls::cs::Int32 num7 = game::GameUtil::RateConvert(stateCnt_, 0, 17, 0, 255, true);
                if (num7 >= 0 && num6 >= 0) {
                    pls::cs::Int32 num8 = SoccerForm::VIEW_Y() - 3;
                    PLS_API(
                        require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0, num7))));
                    PLS_API(([&]() -> void {
                        pls::cs::Single cs_arg1 = num8;
                        pls::cs::Single cs_arg2 = require(instance)->GetGameWidth();
                        pls::cs::Single cs_arg3 = require(instance)->GetGameHeight() - num8;
                        require(g)->FillRect(0.0f, cs_arg1, cs_arg2, cs_arg3);
                    }()));
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0))));
                }
            }
            surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (state_ == 9) {
            Draw_bonusFan(g);
        } else if (state_ == 10 || state_ == 11) {
            Draw_bonusIncome(g);
        } else if (state_ == 12) {
            Draw_matchElse(g);
        } else if (state_ == 13) {

        } else {
            if (state_ == 14) {
                Draw_newPlayerLv(g);
            } else if (state_ == 15) {
                Draw_newPlayerPopular(g);
            } else if (state_ == 16) {
                Draw_newPlayerReserach(g);
            }
        }
        if (state_ == 9 || state_ == 10 || state_ == 11 || state_ == 12 || state_ == 13 || state_ == 14 ||
            state_ == 15 || state_ == 16) {
            PLS_API(require(g)->SetOrigin(originX, originY));
        }
        UpdateOffscreenTopBar(g, true);
    }
}

// M:form.SoccerForm.Draw_main(kairo.unity.ui.Graphics)
void SoccerForm::Draw_main(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Draw_main(kairo.unity.ui.Graphics)", game);
    {
        kl_cfg::Config::ensure_initialized();
        game::UserData::ensure_initialized();

        pls::cs::Int64 num = PLS_API(kl_lang::JSystem::CurrentTimeMillis());
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(SoccerForm::offGameScreen_())->get_Image();
            pls::cs::Single cs_arg1 = SoccerForm::VIEW_X();
            pls::cs::Single cs_arg2 = SoccerForm::VIEW_Y();
            pls::cs::Single cs_arg3 = SoccerForm::VIEW_W();
            pls::cs::Single cs_arg4 = SoccerForm::VIEW_H();
            pls::cs::Int32 cs_arg5 = SoccerForm::VIEW_X();
            pls::cs::Int32 cs_arg6 = SoccerForm::VIEW_Y();
            pls::cs::Int32 cs_arg7 = GetGameWidth();
            pls::cs::Int32 cs_arg8 = GetGameHeight();
            require(g)->DrawScaledImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6,
                                        cs_arg7, cs_arg8);
        }()));
        if (require(require(apdat_)->save_)->ints[12] == 1) {
            require(require(apdat_)->map_)->Draw_miniMap(g);
        }
        if (!is_null(statusPlayer_)) {
            pls::cs::Int32 sideSoftWidth = require(view_)->GetSideSoftWidth();
            pls::cs::Ref<data::PlayerData> playerData =
                require(apdat_)->pData_.get_Item(require(statusPlayer_)->pData_id_);
            if (MyFormBase::Jp()) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(56);
                    require(g)->DrawImage(cs_arg0, 0 + sideSoftWidth,
                                          SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - 20);
                }()));
            } else {
                pls::cs::Int32 num2 = 15;
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(56);
                    require(g)->DrawImage(cs_arg0, 0 + sideSoftWidth,
                                          SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - 20, 0, 0, 80, 20);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(56);
                    require(g)->DrawImage(cs_arg0, 0 + sideSoftWidth + 80,
                                          SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - 20, 102 - (22 + num2),
                                          0, 22 + num2, 20);
                }()));
            }
            PLS_API(require(g)->ClipRect(0 + sideSoftWidth, SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - 20,
                                         20.0f, 19.0f, true));
            require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_,
                                              require(playerData)->faceImg_, 0, 1);
            require(udat_)->DrawDispPlayer(g, 10 + sideSoftWidth,
                                           SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() + 3);
            PLS_API(require(g)->PopClip());
            pls::cs::Int32 num3 =
                game::GameUtil::RateConvert(require(playerData)->auraPoint_, 0, 10000, 0, 17, true);
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(54);
                require(g)->DrawImage(cs_arg0, 18 + sideSoftWidth,
                                      SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - 1 - num3, 0, 17 - num3, 2,
                                      num3);
            }()));
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(47);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(51);
                pls::cs::Int32 cs_arg5 = require(statusPlayer_)->role_;
                require(apdat_)->DrawSeb(g, 23 + sideSoftWidth,
                                         SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - 15, cs_arg3, cs_arg4,
                                         cs_arg5);
            }
            pls::cs::Ref<data::PlayerData> playerData2 =
                require(apdat_)->pData_.get_Item(require(statusPlayer_)->pData_id_);
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(246, 255, 225))));
            PLS_API(require(g)->DrawString(require(playerData2)->name_, 47 + sideSoftWidth,
                                           SoccerForm::VIEW_Y() + SoccerForm::VIEW_H() - 15));
        }
        require(require(udat_)->gm_)->Draw(g);
        pls::cs::Int32 num4 = 21;
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(32);
            require(g)->DrawImage(cs_arg0, 0.0f, num4, 0, 20, 81, 13);
        }()));
        if (!require(require(udat_)->gm_)->halfTime) {
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(48);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(52);
                require(apdat_)->DrawSeb(g, 4, num4, cs_arg3, cs_arg4, 0);
            }
        } else {
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(48);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(52);
                require(apdat_)->DrawSeb(g, 4, num4, cs_arg3, cs_arg4, 1);
            }
        }
        pls::cs::Int32 num5 = pls::cs::to_int32(require(require(udat_)->gm_)->gameTime_);
        pls::cs::Int32 num6 = 41;
        require(apdat_)->DrawNumImageLongIntInt(g, 29, pls::cs::cast_integral<pls::cs::Int64>(num5 / 60),
                                                num6, num4 + 1, 0, 4);
        {
            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                require(require(apdat_)->resCom2_)->seb.get_Item(29);
            pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(101);
            require(apdat_)->DrawSeb(g, num6, num4 + 1, cs_arg3, cs_arg4, 10);
        }
        require(apdat_)->DrawNumImageLongIntInt(g, 29, pls::cs::cast_integral<pls::cs::Int64>(num5 % 60 / 10),
                                                num6 + 13, num4 + 1, 0, 4);
        require(apdat_)->DrawNumImageLongIntInt(g, 29, pls::cs::cast_integral<pls::cs::Int64>(num5 % 60 % 10),
                                                num6 + 21, num4 + 1, 0, 4);
        require(require(apdat_)->camera)->DrawTest(g);
        draw_time = PLS_API(kl_lang::JSystem::CurrentTimeMillis()) - num;
        if (kl_cfg::Config::DEBUG_CMD() && game::UserData::DEBUG_DISPFPS() == 1) {
            {
                auto cs_receiver = apdat_;
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                pls::cs::String cs_arg2 = pls::cs::String(u"");
                pls::cs::Int64 cs_arg3 =
                    pls::cs::cast_integral<pls::cs::Int64>(require(FormManager::GetInstance())->GetFps());
                pls::cs::String cs_arg4 = pls::cs::String(u"");
                require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 25, 0);
            }
        }
        if (kl_cfg::Config::DEBUG_CMD() && SoccerForm::SHOW_DEBUGDRAW2() == 1) {
            if (SoccerForm::SHOW_FPS() == 1) {
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(FormManager::GetInstance())->GetFps());
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 25, 0);
                }
            }
            if (SoccerForm::SHOW_PDTIME() == 1) {
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 = proc_time;
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 40, 0);
                }
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 = draw_time;
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)->DrawNumImage(cs_arg0, 23, cs_arg2, cs_arg3, cs_arg4, 5, 55, 0);
                }
            }
        }
        if (kl_cfg::Config::DEBUG_CMD() && SoccerForm::SHOW_DRAWNUM() == 1) {
        }
    }
}

// M:form.SoccerForm.SetStatusPlayer
void SoccerForm::SetStatusPlayer() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.SetStatusPlayer", game);
    {
        if (statusPlayerChangeWait_ > 0) {
            --statusPlayerChangeWait_;
            return;
        }
        statusPlayer_ = pls::cs::Ref<game::Player>{};
        if (require(require(udat_)->gm_)->state_ == 8) {
            if (!require(require(udat_)->gm_)->halfTime && require(require(udat_)->gm_)->gameState_ == 1) {
                statusPlayer_ =
                    require(require(udat_)->teams_.get_Item(0))
                        ->players_.get_Item(require(require(udat_)->teams_.get_Item(0))->lastKickeer_);
            } else if (require(require(udat_)->gm_)->halfTime &&
                       require(require(udat_)->gm_)->gameState_ == 0) {
                statusPlayer_ =
                    require(require(udat_)->teams_.get_Item(1))
                        ->players_.get_Item(require(require(udat_)->teams_.get_Item(1))->lastKickeer_);
            }
            return;
        }
        if (!require(require(udat_)->gm_)->halfTime) {
            if (require(require(udat_)->gm_)->gameState_ == 0) {
                statusPlayer_ = require(require(udat_)->teams_.get_Item(0))->GetPasser();
            } else if (require(require(udat_)->gm_)->gameState_ == 1) {
                for (pls::cs::Int32 i = 0; i < require(require(udat_)->teams_.get_Item(0))->players_.length();
                     ++i) {
                    if (require(require(require(udat_)->teams_.get_Item(0))->players_.get_Item(i))->actId_ ==
                        2) {
                        statusPlayer_ = require(require(udat_)->teams_.get_Item(0))->players_.get_Item(i);
                        break;
                    }
                }
            } else if (PLS_API(kl_java_util::Vector_2_Size(
                           require(require(require(udat_)->teams_.get_Item(0))->players_receive_))) > 0) {
                statusPlayer_ =
                    pls::cs::unbox<pls::cs::Ref<game::Player>>(PLS_API(kl_java_util::Vector_2_FirstElement(
                        require(require(require(udat_)->teams_.get_Item(0))->players_receive_))));
            }
        } else if (require(require(udat_)->gm_)->gameState_ == 0) {
            for (pls::cs::Int32 j = 0; j < require(require(udat_)->teams_.get_Item(1))->players_.length();
                 ++j) {
                if (require(require(require(udat_)->teams_.get_Item(1))->players_.get_Item(j))->actId_ == 2) {
                    statusPlayer_ = require(require(udat_)->teams_.get_Item(1))->players_.get_Item(j);
                    break;
                }
            }
        } else if (require(require(udat_)->gm_)->gameState_ == 1) {
            statusPlayer_ = require(require(udat_)->teams_.get_Item(1))->GetPasser();
        } else if (PLS_API(kl_java_util::Vector_2_Size(
                       require(require(require(udat_)->teams_.get_Item(1))->players_receive_))) > 0) {
            statusPlayer_ =
                pls::cs::unbox<pls::cs::Ref<game::Player>>(PLS_API(kl_java_util::Vector_2_FirstElement(
                    require(require(require(udat_)->teams_.get_Item(1))->players_receive_))));
        }
        if (!is_null(statusPlayer_)) {
            statusPlayerChangeWait_ = 5;
        }
        if (!is_null(statusPlayer_)) {
            pls::cs::Int32 pData_id_ = require(statusPlayer_)->pData_id_;
            if (pData_id_ < 22 || pData_id_ >= require(apdat_)->pData_.length()) {
                statusPlayer_ = pls::cs::Ref<game::Player>{};
            }
        }
    }
}

// M:form.SoccerForm.Draw_stadiumCamera(kairo.unity.ui.Graphics)
void SoccerForm::Draw_stadiumCamera(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Draw_stadiumCamera(kairo.unity.ui.Graphics)",
                     game);
    {
        SubForm::ensure_initialized();

        pls::cs::Ref<surface::GameView> instance = pls::cs::Ref<surface::GameView>{};
        pls::cs::Int32 num4, num, num2, num3;
        pls::cs::Ref<data::TeamData> teamData = pls::cs::Ref<data::TeamData>{},
                                     teamData2 = pls::cs::Ref<data::TeamData>{};
        instance = surface::GameView::GetInstance();
        num3 = 0;
        num2 = num3;
        num = num2;
        num4 = num;
        num4 = require(instance)->GetGameWidth() / 2 - 87;
        num = require(instance)->GetGameHeight() - 78;
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(46, 168, 59))));
        PLS_API(require(g)->FillRect(num4, num, 174.0f, 72.0f));
        teamData = require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[0]);
        teamData2 = require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
        num3 = 39;
        {
            auto cs_receiver = require(apdat_)->frmGame_;
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            pls::cs::Int32 cs_arg1 = num3;
            pls::cs::Int32 cs_arg2 = require(instance)->GetGameWidth() / 2;
            require(cs_receiver)->Draw_stadiumName(cs_arg0, cs_arg1, cs_arg2);
        }
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(159);
            require(g)->DrawImage(cs_arg0, num4 + 5 - 1, num + 3 - 1, 0, 0, 166, 12);
        }()));
        if ([&]() -> bool {
                auto cs_left = stadiumMoveCnt_;
                auto cs_right = SoccerForm::STADIUM_BTMINFO_TIME()[2];
                return cs_left < cs_right;
            }()) {
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(159);
                require(g)->DrawImage(cs_arg0, num4 + 5, num + 3, 1, 12, 82, 10);
            }()));
        } else {
            pls::cs::Int32 c2min = 82;
            pls::cs::Int32 num5 = 0;
            pls::cs::Int32 num6 = 0;
            num5 =
                game::GameUtil::RateConvert(customerNum[0], 0, customerNum[0] + customerNum[1], 0, 164, true);
            num6 = ([&]() -> pls::cs::Int32 {
                pls::cs::Int32 cs_arg0 = stadiumMoveCnt_;
                pls::cs::Int32 cs_arg1 = SoccerForm::STADIUM_BTMINFO_TIME()[2];
                pls::cs::Int32 cs_arg2 = SoccerForm::STADIUM_BTMINFO_TIME()[3];
                return game::GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, c2min, num5, true);
            }());
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(159);
                require(g)->DrawImage(cs_arg0, num4 + 5, num + 3, 1, 12, num6, 10);
            }()));
        }
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(251, 251, 97))));
        {
            pls::cs::Single cs_arg1 = require(instance)->GetGameWidth() / 2;
            kairo::unity::ui::Graphics::DrawString2(require(g), literal(u"観客数"), cs_arg1, num + 17, 2);
        }
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(161);
            pls::cs::Single cs_arg1 = require(instance)->GetGameWidth() / 2 + 50;
            require(g)->DrawImage(cs_arg0, cs_arg1, num + 15);
        }()));
        pls::cs::Int32 num7 = stateCnt_ % 10 / 5;
        if (([&]() -> bool {
                auto cs_left = stadiumMoveCnt_;
                auto cs_right = SoccerForm::STADIUM_BTMINFO_TIME()[1];
                return cs_left < cs_right;
            }()) ||
            customerNum[0] < customerNum[1]) {
            num7 = 0;
        }
        for (pls::cs::Int32 i = 0; i < 2; ++i) {
            if (num7 == 0) {
                {
                    pls::cs::Int32 cs_arg1 = require(teamData)->bodyImg_;
                    pls::cs::Int32 cs_arg2 = require(teamData)->memberFaceId_[i];
                    require(udat_)->SetDispPlayerData(0, cs_arg1, cs_arg2, num7, 1);
                }
            } else {
                {
                    pls::cs::Int32 cs_arg1 = require(teamData)->bodyImg_;
                    pls::cs::Int32 cs_arg2 = require(teamData)->memberFaceId_[i];
                    require(udat_)->SetDispPlayerData(4, cs_arg1, cs_arg2, 0, 1);
                }
            }
            {
                auto cs_receiver = udat_;
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                pls::cs::Int32 cs_arg1 = require(instance)->GetGameWidth() / 2 - 54 + i * 20;
                require(cs_receiver)->DrawDispPlayer(cs_arg0, cs_arg1, num + 52);
            }
        }
        num7 = stadiumMoveCnt_ % 10 / 5;
        if (([&]() -> bool {
                auto cs_left = stadiumMoveCnt_;
                auto cs_right = SoccerForm::STADIUM_BTMINFO_TIME()[1];
                return cs_left < cs_right;
            }()) ||
            customerNum[1] < customerNum[0]) {
            num7 = 0;
        }
        for (pls::cs::Int32 j = 0; j < 2; ++j) {
            if (num7 == 0) {
                {
                    pls::cs::Int32 cs_arg1 = require(teamData2)->bodyImg_;
                    pls::cs::Int32 cs_arg2 = require(teamData2)->memberFaceId_[j];
                    require(udat_)->SetDispPlayerData(0, cs_arg1, cs_arg2, num7, 2);
                }
            } else {
                {
                    pls::cs::Int32 cs_arg1 = require(teamData2)->bodyImg_;
                    pls::cs::Int32 cs_arg2 = require(teamData2)->memberFaceId_[j];
                    require(udat_)->SetDispPlayerData(4, cs_arg1, cs_arg2, 0, 2);
                }
            }
            {
                auto cs_receiver = udat_;
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                pls::cs::Int32 cs_arg1 = require(instance)->GetGameWidth() / 2 + 23 + j * 20;
                require(cs_receiver)->DrawDispPlayer(cs_arg0, cs_arg1, num + 52);
            }
        }
        if (([&]() -> bool {
                auto cs_left = stadiumMoveCnt_;
                auto cs_right = SoccerForm::STADIUM_BTMINFO_TIME()[1];
                return cs_left >= cs_right;
            }()) &&
            customerNum[0] >= customerNum[1]) {
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(160);
                pls::cs::Single cs_arg1 = require(instance)->GetGameWidth() / 2 - 66;
                require(g)->DrawImage(cs_arg0, cs_arg1, num + 20);
            }()));
        }
        num3 = num + 58;
        if ([&]() -> bool {
                auto cs_left = stadiumMoveCnt_;
                auto cs_right = SoccerForm::STADIUM_BTMINFO_TIME()[0];
                return cs_left < cs_right;
            }()) {
            num2 = require(instance)->GetGameWidth() / 2 - 45;
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(78);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(105);
                require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, 15);
            }
            num2 = require(instance)->GetGameWidth() / 2 + 41;
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(78);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(105);
                require(apdat_)->DrawSeb(g, num2, num3, cs_arg3, cs_arg4, 15);
            }
        } else if ([&]() -> bool {
                       auto cs_left = stadiumMoveCnt_;
                       auto cs_right = SoccerForm::STADIUM_BTMINFO_TIME()[1];
                       return cs_left < cs_right;
                   }()) {
            pls::cs::Int32 num8 = game::GameUtil::Random(1000000);
            num2 = require(instance)->GetGameWidth() / 2 - 8;
            require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(num8), num2 - 12,
                                               num3, 0, 0, 4);
            num8 = game::GameUtil::Random(1000000);
            num2 = require(instance)->GetGameWidth() / 2 + 74;
            require(apdat_)->DrawNumImageComma(g, 78, pls::cs::cast_integral<pls::cs::Int64>(num8), num2 - 12,
                                               num3, 0, 0, 4);
        } else {
            num2 = require(instance)->GetGameWidth() / 2 - 8;
            {
                pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(customerNum[0]);
                require(apdat_)->DrawNumImageComma(g, 78, cs_arg2, num2 - 12, num3, 0, 0, 4);
            }
            num2 = require(instance)->GetGameWidth() / 2 + 74;
            {
                pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(customerNum[1]);
                require(apdat_)->DrawNumImageComma(g, 78, cs_arg2, num2 - 12, num3, 0, 0, 4);
            }
        }
        if ([&]() -> bool {
                auto cs_left = stadiumMoveCnt_;
                auto cs_right = SoccerForm::STADIUM_BTMINFO_TIME()[0];
                return cs_left >= cs_right;
            }()) {
            num2 = require(instance)->GetGameWidth() / 2 - 8;
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(78);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(105);
                require(apdat_)->DrawSeb(g, num2 - 11, num3, cs_arg3, cs_arg4, 18);
            }
            num2 = require(instance)->GetGameWidth() / 2 + 74;
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(78);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(105);
                require(apdat_)->DrawSeb(g, num2 - 11, num3, cs_arg3, cs_arg4, 18);
            }
        }
    }
}

// M:form.SoccerForm.Draw_bonusFan(kairo.unity.ui.Graphics)
void SoccerForm::Draw_bonusFan(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Draw_bonusFan(kairo.unity.ui.Graphics)", game);
    {
        data::FanBonusData::ensure_initialized();
        SubForm::ensure_initialized();
        game::Player::ensure_initialized();
        data::FanActData::ensure_initialized();

        if ([&]() -> bool {
                auto cs_left = bonus_f_index;
                auto cs_right =
                    PLS_API(kl_java_util::Vector_2_Size(require(data::FanBonusData::bonus_f_data1())));
                return cs_left >= cs_right;
            }()) {
            return;
        }
        pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array =
            pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(data::FanBonusData::bonus_f_data1()),
                                                         bonus_f_index)));
        pls::cs::String str = pls::cs::unbox<pls::cs::String>(array.get_Item(0));
        pls::cs::Int32 num = PLS_API(
            require((pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(array.get_Item(1))))->IntValue());
        IntArray array2 = pls::cs::unbox<IntArray>(array.get_Item(2));
        pls::cs::Int32 num2 = PLS_API(
            require((pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(array.get_Item(3))))->IntValue());
        IntArray array3 = pls::cs::unbox<IntArray>(array.get_Item(4));
        pls::cs::Int32 num3 = PLS_API(
            require((pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(array.get_Item(5))))->IntValue());
        pls::cs::Int32 num13, num4, num5, num6, num7, num8, num9, num10, num11, num12;
        num12 = 0;
        num11 = num12;
        num10 = num11;
        num9 = num10;
        num8 = num9;
        num7 = num8;
        num6 = num7;
        num5 = num6;
        num4 = num5;
        num13 = num4;
        num13 = 20;
        num4 = 72;
        pls::cs::Int32 num14 = 43;
        pls::cs::Int32 num15 = 7;
        pls::cs::Int32 num16 = 120;
        pls::cs::Int32 num17 = 232;
        pls::cs::Int32 num18 = 0;
        pls::cs::Int32 frame = 0;
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(162, 204, 153, 128))));
        PLS_API(require(g)->FillRect(5.0f, 34.0f, 231.0f, 199.0f));
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(106, 129, 78, 128))));
        PLS_API(require(g)->DrawRect(7.0f, 36.0f, 226.0f, 194.0f));
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(108, 158, 107, 128))));
        PLS_API(require(g)->FillRect(8.0f, 37.0f, 225.0f, 193.0f));
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(178, 236, 179, 128))));
        PLS_API(require(g)->FillRect(10.0f, 94.0f, 220.0f, 80.0f));
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0))));
        for (pls::cs::Int32 i = 0; i < 3; ++i) {
            require(require(udat_)->gm_)->Draw_timeMessageWindow(g, 40 + 17 * i, 222, i % 2, 120);
        }
        for (pls::cs::Int32 j = 0; j < 3; ++j) {
            require(require(udat_)->gm_)->Draw_timeMessageWindow(g, 176 + 17 * j, 222, 1 - j % 2, 120);
        }
        pls::cs::Ref<data::TeamData> teamData =
            require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[0]);
        pls::cs::Ref<data::TeamData> teamData2 =
            require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
        num12 = 43;
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
        PLS_API(require(g)->DrawString(literal(u"試合ボーナス"), 120.0f, num12, 2));
        num12 += 17;
        PLS_API(require(g)->DrawString(require(teamData)->name_, 60.0f, num12, 2));
        PLS_API(require(g)->DrawString(require(teamData2)->name_, 180.0f, num12, 2));
        num12 += 17;
        {
            pls::cs::Int64 cs_arg2 =
                pls::cs::cast_integral<pls::cs::Int64>(require(require(udat_)->gm_)->score_[0]);
            require(apdat_)->DrawNumImageLongIntInt(g, 30, cs_arg2, 60, num12, 0, 2);
        }
        {
            pls::cs::Int64 cs_arg2 =
                pls::cs::cast_integral<pls::cs::Int64>(require(require(udat_)->gm_)->score_[1]);
            require(apdat_)->DrawNumImageLongIntInt(g, 30, cs_arg2, 180, num12, 0, 2);
        }
        {
            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                require(require(apdat_)->resCom2_)->seb.get_Item(35);
            pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(103);
            require(apdat_)->DrawSeb(g, 116, num12, cs_arg3, cs_arg4, 15);
        }
        num13 = 120;
        num4 = 97;
        pls::cs::Int32 num19 = num;
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(223, 223, 220))));
        PLS_API(require(g)->DrawRect(num13 - num19 / 2, num4, num19 - 1, 19.0f));
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(153, 152, 145))));
        PLS_API(require(g)->DrawRect(num13 - num19 / 2 + 1, num4 + 1, num19 - 1 - 2, 17.0f));
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(224, 255, 255))));
        PLS_API(require(g)->FillRect(num13 - num19 / 2 + 2, num4 + 2, num19 - 1 - 3, 16.0f));
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        PLS_API(require(g)->DrawString(str, 120.0f, num4 + 4, 2));
        if (num3 == 1) {
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(apdat_)->resCom2_)->img.get_Item(177);
                require(g)->DrawImage(cs_arg0, 88.0f, 119.0f);
            }()));
        }
        PLS_API(require(g)->ClipRect(14.0f, 84.0f, 211.0f, 94.0f, true));
        pls::cs::Int32 num20 = array2[3];
        pls::cs::Int32 num21 = game::GameUtil::RateConvert(num20, 3, 7, 5, 1, true);
        pls::cs::Int32 num22 = num20 * 14 + (num20 - 1) * num21;
        pls::cs::Int32 num23 = 0;
        num4 = 163;
        if ([&]() -> bool {
                auto cs_left = bonus_f_cnt;
                auto cs_right = SoccerForm::BONUS_F_CYCLE()[0];
                return cs_left < cs_right;
            }()) {
            num5 = ([&]() -> pls::cs::Int32 {
                pls::cs::Int32 cs_arg0 = bonus_f_cnt;
                pls::cs::Int32 cs_arg2 = SoccerForm::BONUS_F_CYCLE()[0];
                return game::GameUtil::RateConvert(cs_arg0, 0, cs_arg2, num15 - num22 / 2, num16, true);
            }());
            num6 = num4;
            num18 = 10;
            frame = bonus_f_cnt % 16 / 4;
        } else if ([&]() -> bool {
                       auto cs_left = bonus_f_cnt;
                       auto cs_right = SoccerForm::BONUS_F_CYCLE()[1];
                       return cs_left < cs_right;
                   }()) {
            num5 = num16;
            num6 = num4;
            num18 = 0;
            frame = 0;
        } else if ([&]() -> bool {
                       auto cs_left = bonus_f_cnt;
                       auto cs_right = SoccerForm::BONUS_F_CYCLE()[2];
                       return cs_left < cs_right;
                   }()) {
            num5 = num16;
            pls::cs::Int32 recoveredBonusKind = array2[4];
            if ((recoveredBonusKind == 0)) {
                {
                    pls::cs::Int32 num25 = 14;
                    pls::cs::Int32 num26 = 6;
                    pls::cs::Int32 num27 = (([&]() -> pls::cs::Int32 {
                                               auto cs_left = bonus_f_cnt;
                                               auto cs_right = SoccerForm::BONUS_F_CYCLE()[1];
                                               return cs_left - cs_right;
                                           }())) %
                                           (num25 + num26);
                    num27 -= num26 / 2;
                    pls::cs::Single num28 = game::GameUtil::SetVStop(-10.0f, num25 / 2);
                    pls::cs::Single num29 = game::GameUtil::SetAStop(-10.0f, num25 / 2);
                    num6 = pls::cs::to_int32(
                        (pls::cs::Single(num4) + num28 * pls::cs::Single(num27) +
                         num29 * pls::cs::Single(num27) * pls::cs::Single((num27 + 1)) / 2.0f));
                    if (num6 > num4) {
                        num6 = num4;
                    }
                    if ((num6 < num4)) {
                        num18 = 3;
                    } else {
                        num18 = 0;
                    }
                    frame = 0;
                }
            } else if ((recoveredBonusKind == 1)) {
                num6 = num4;
                num18 = 11;
                frame = 0;
                num23 = -1;
            } else if ((recoveredBonusKind == 2)) {
                {
                    num6 = num4;
                    num18 = 1;
                    auto cs_left_133 = (([&]() -> pls::cs::Int32 {
                        auto cs_left_133 = bonus_f_cnt;
                        auto cs_right_133 = SoccerForm::BONUS_F_CYCLE()[1];
                        return cs_left_133 - cs_right_133;
                    }()));
                    auto cs_right_133 = game::Player::SEB_H_KICK_ANIME()
                        [pls::cs::Int32(game::Player::SEB_H_KICK_ANIME().length()) - 1];
                    pls::cs::Int32 num24 = cs_left_133 % cs_right_133;
                    if (num24 < game::Player::SEB_H_KICK_ANIME()[0]) {
                        frame = 0;
                    } else if (num24 < game::Player::SEB_H_KICK_ANIME()[1]) {
                        frame = 1;
                    } else if (num24 < game::Player::SEB_H_KICK_ANIME()[2]) {
                        frame = 2;
                    }
                }
            }
        } else if ([&]() -> bool {
                       auto cs_left = bonus_f_cnt;
                       auto cs_right = SoccerForm::BONUS_F_CYCLE()[3];
                       return cs_left < cs_right;
                   }()) {
            num5 = num16;
            num6 = num4;
            num18 = 0;
            frame = 0;
        } else if ([&]() -> bool {
                       auto cs_left = bonus_f_cnt;
                       auto cs_right = SoccerForm::BONUS_F_CYCLE()[4];
                       return cs_left < cs_right;
                   }()) {
            num5 = ([&]() -> pls::cs::Int32 {
                pls::cs::Int32 cs_arg0 = bonus_f_cnt;
                pls::cs::Int32 cs_arg1 = SoccerForm::BONUS_F_CYCLE()[3];
                pls::cs::Int32 cs_arg2 = SoccerForm::BONUS_F_CYCLE()[4];
                return game::GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, num16, num17 + num22 / 2, true);
            }());
            num6 = num4;
            num18 = 10;
            frame = bonus_f_cnt % 16 / 4;
        }
        pls::cs::Int32 faceImg = 0;
        pls::cs::Int32 bodyImg = 0;
        pls::cs::Int32 num30 = num18;
        for (pls::cs::Int32 k = 0; k < num20; ++k) {
            num30 = num18;
            if ((num2 == 0) || (num2 == 1)) {
                {
                    pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(array3[k]);
                    faceImg = require(playerData)->faceImg_;
                    bodyImg = require(udat_)->selectUniform_;
                }
            } else if ((num2 == 2)) {
                {
                    pls::cs::Ref<data::SupervisorData> supervisorData =
                        require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
                    faceImg = require(supervisorData)->headImg_;
                    bodyImg = require(supervisorData)->bodyImg_;
                    if ((num18 == 10)) {
                        num30 = 0;
                    } else if ((num18 == 3)) {
                        num30 = 16;
                    }
                }
            }
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(0);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2);
                require(apdat_)->DrawSeb(g, num5 - num22 / 2 + 7 + k * (14 + num21) - 1, num4 + 1 + num23,
                                         cs_arg3, cs_arg4, 4);
            }
            require(udat_)->SetDispPlayerData(num30, bodyImg, faceImg, frame, 1);
            require(udat_)->DrawDispPlayer(g, num5 - num22 / 2 + 7 + k * (14 + num21), num6);
        }
        PLS_API(require(g)->PopClip());
        num4 = 174;
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        num13 = 18;
        for (pls::cs::Int32 l = 0; l < data::FanActData::element_name2().length(); ++l) {
            num12 = num4 + 4 + l * 17;
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            if (!MyFormBase::En()) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = data::FanActData::element_name()[l];
                    require(g)->DrawString(cs_arg0, num13 + 18, num12 + 2);
                }()));
            } else {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = data::FanActData::element_name()[l];
                    require(g)->DrawString(cs_arg0, num13 + 18 - 12, num12 + 2);
                }()));
            }
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(37, 193, 173))));
            PLS_API(require(g)->FillRect(num13 + 64, num12, 87.0f, 14.0f));
            pls::cs::Int32 num31 = 0;
            pls::cs::Int32 num32 = 0;
            num11 = 141;
            if ((l == 0)) {
                {
                    num31 = data::FanActData::GetFanDispParam(temp_fan, 0);
                    num32 = data::FanActData::GetFanDispParam(temp_fan + temp_addFan, 0);
                    pls::cs::Int32 num34 = 0;
                    if ((([&]() -> bool {
                            auto cs_left = bonus_f_cnt;
                            auto cs_right = ([&]() -> pls::cs::Int32 {
                                auto cs_left = SoccerForm::BONUS_F_CYCLE()[0];
                                auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[1];
                                return cs_left + cs_right;
                            }());
                            return cs_left < cs_right;
                        }()))) {
                        num34 = num31;
                    } else {
                        if (((([&]() -> bool {
                                 auto cs_left = bonus_f_cnt;
                                 auto cs_right = ([&]() -> pls::cs::Int32 {
                                     auto cs_left = SoccerForm::BONUS_F_CYCLE()[0];
                                     auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[1];
                                     return cs_left + cs_right;
                                 }());
                                 return cs_left >= cs_right;
                             }())) &&
                             (([&]() -> bool {
                                 auto cs_left = bonus_f_cnt;
                                 auto cs_right = ([&]() -> pls::cs::Int32 {
                                     auto cs_left = SoccerForm::BONUS_F_CYCLE()[0];
                                     auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[2];
                                     return cs_left + cs_right;
                                 }());
                                 return cs_left < cs_right;
                             }())))) {
                            num34 = (([&]() -> pls::cs::Int32 {
                                pls::cs::Int32 cs_arg0 = ([&]() -> pls::cs::Int32 {
                                    auto cs_left = bonus_f_cnt;
                                    auto cs_right = SoccerForm::BONUS_F_CYCLE()[0];
                                    return cs_left - cs_right;
                                }());
                                pls::cs::Int32 cs_arg1 = SoccerForm::BONUS_F_CYCLE_MAIN()[1];
                                pls::cs::Int32 cs_arg2 = SoccerForm::BONUS_F_CYCLE_MAIN()[2];
                                return game::GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, num31, num32,
                                                                   true);
                            }()));
                        } else {
                            num34 = (num32);
                        }
                    }
                    if (MyFormBase::Jp()) {
                        require(apdat_)->DrawNumImageComma(g, 78,
                                                           pls::cs::cast_integral<pls::cs::Int64>(num34),
                                                           num11 + 14 - 2, num12 + 2, 0, 0, 4);
                        {
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(require(apdat_)->resCom2_)->seb.get_Item(78);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(require(apdat_)->resCom2_)->img.get_Item(105);
                            require(apdat_)->DrawSeb(g, num11 + 15, num12 + 3, cs_arg3, cs_arg4, 18);
                        }
                    } else {
                        require(apdat_)->DrawNumImageComma(g, 78,
                                                           pls::cs::cast_integral<pls::cs::Int64>(num34),
                                                           num11 + 14 - 2 + 10, num12 + 2, 0, 0, 4);
                        {
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(require(apdat_)->resCom2_)->seb.get_Item(78);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(require(apdat_)->resCom2_)->img.get_Item(105);
                            require(apdat_)->DrawSeb(g, num11 + 15 + 10, num12 + 3, cs_arg3, cs_arg4, 18);
                        }
                    }
                }
            } else if ((l == 1)) {
                {
                    num31 = data::FanActData::GetFanDispParam(temp_assist, 1);
                    num32 = data::FanActData::GetFanDispParam(temp_assist + temp_addAssist, 1);
                    pls::cs::Int32 num35 = 52;
                    pls::cs::Int32 num36 = 0;
                    pls::cs::Int32 num37 = 0;
                    if ((([&]() -> bool {
                            auto cs_left = bonus_f_cnt;
                            auto cs_right = ([&]() -> pls::cs::Int32 {
                                auto cs_left = SoccerForm::BONUS_F_CYCLE()[0];
                                auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[1];
                                return cs_left + cs_right;
                            }());
                            return cs_left < cs_right;
                        }()))) {
                        num37 = num31;
                    } else {
                        if (((([&]() -> bool {
                                 auto cs_left = bonus_f_cnt;
                                 auto cs_right = ([&]() -> pls::cs::Int32 {
                                     auto cs_left = SoccerForm::BONUS_F_CYCLE()[0];
                                     auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[1];
                                     return cs_left + cs_right;
                                 }());
                                 return cs_left >= cs_right;
                             }())) &&
                             (([&]() -> bool {
                                 auto cs_left = bonus_f_cnt;
                                 auto cs_right = ([&]() -> pls::cs::Int32 {
                                     auto cs_left = SoccerForm::BONUS_F_CYCLE()[0];
                                     auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[2];
                                     return cs_left + cs_right;
                                 }());
                                 return cs_left < cs_right;
                             }())))) {
                            num37 = (([&]() -> pls::cs::Int32 {
                                pls::cs::Int32 cs_arg0 = ([&]() -> pls::cs::Int32 {
                                    auto cs_left = bonus_f_cnt;
                                    auto cs_right = SoccerForm::BONUS_F_CYCLE()[0];
                                    return cs_left - cs_right;
                                }());
                                pls::cs::Int32 cs_arg1 = SoccerForm::BONUS_F_CYCLE_MAIN()[1];
                                pls::cs::Int32 cs_arg2 = SoccerForm::BONUS_F_CYCLE_MAIN()[2];
                                return game::GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, num31, num32,
                                                                   true);
                            }()));
                        } else {
                            num37 = (num32);
                        }
                    }
                    require(apdat_)->DrawNumImageLongIntInt(
                        g, 78, pls::cs::cast_integral<pls::cs::Int64>(num37), num11 + 22, num12 + 2, 0, 4);
                    num36 = game::GameUtil::RateConvert(num37, 0, 100, 0, num35 - 2, true);
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(129);
                        require(g)->DrawImage(cs_arg0, num11 + 48 - 101, num12 + 4 - 2, 0, 0, 52, 10);
                    }()));
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(129);
                        require(g)->DrawImage(cs_arg0, num11 + 48 + 1 - 101, num12 + 5 - 2, 1, 10, num36, 8);
                    }()));
                }
            } else if ((l == 2)) {
                {
                    num31 = data::FanActData::GetFanDispParam(temp_nameValue, 2);
                    num32 = data::FanActData::GetFanDispParam(temp_nameValue + temp_addNameValue, 2);
                    pls::cs::Int32 num33 = 0;
                    if ((([&]() -> bool {
                            auto cs_left = bonus_f_cnt;
                            auto cs_right = ([&]() -> pls::cs::Int32 {
                                auto cs_left = SoccerForm::BONUS_F_CYCLE()[0];
                                auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[1];
                                return cs_left + cs_right;
                            }());
                            return cs_left < cs_right;
                        }()))) {
                        num33 = num31;
                    } else {
                        if (((([&]() -> bool {
                                 auto cs_left = bonus_f_cnt;
                                 auto cs_right = ([&]() -> pls::cs::Int32 {
                                     auto cs_left = SoccerForm::BONUS_F_CYCLE()[0];
                                     auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[1];
                                     return cs_left + cs_right;
                                 }());
                                 return cs_left >= cs_right;
                             }())) &&
                             (([&]() -> bool {
                                 auto cs_left = bonus_f_cnt;
                                 auto cs_right = ([&]() -> pls::cs::Int32 {
                                     auto cs_left = SoccerForm::BONUS_F_CYCLE()[0];
                                     auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[2];
                                     return cs_left + cs_right;
                                 }());
                                 return cs_left < cs_right;
                             }())))) {
                            num33 = (([&]() -> pls::cs::Int32 {
                                pls::cs::Int32 cs_arg0 = ([&]() -> pls::cs::Int32 {
                                    auto cs_left = bonus_f_cnt;
                                    auto cs_right = SoccerForm::BONUS_F_CYCLE()[0];
                                    return cs_left - cs_right;
                                }());
                                pls::cs::Int32 cs_arg1 = SoccerForm::BONUS_F_CYCLE_MAIN()[1];
                                pls::cs::Int32 cs_arg2 = SoccerForm::BONUS_F_CYCLE_MAIN()[2];
                                return game::GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, num31, num32,
                                                                   true);
                            }()));
                        } else {
                            num33 = (num32);
                        }
                    }
                    if (MyFormBase::Jp()) {
                        require(apdat_)->DrawNumImageLongIntInt(
                            g, 78, pls::cs::cast_integral<pls::cs::Int64>(num33), 123, num12 + 2, 0, 2);
                    } else {
                        require(apdat_)->DrawNumImageLongIntInt(
                            g, 78, pls::cs::cast_integral<pls::cs::Int64>(num33), 163, num12 + 2, 0, 4);
                    }
                }
            }
            if ([&]() -> bool {
                    auto cs_left = bonus_f_cnt;
                    auto cs_right = SoccerForm::BONUS_F_CYCLE()[0];
                    return cs_left >= cs_right;
                }()) {
                pls::cs::Int32 num38 = num32 - num31;
                if (num38 == 0) {
                    continue;
                }
                if ([&]() -> bool {
                        auto cs_left = bonus_f_cnt;
                        auto cs_right = ([&]() -> pls::cs::Int32 {
                            auto cs_left = SoccerForm::BONUS_F_CYCLE()[0];
                            auto cs_right = SoccerForm::BONUS_F_CYCLE_MAIN()[0];
                            return cs_left + cs_right;
                        }());
                        return cs_left < cs_right;
                    }()) {
                    pls::cs::Int32 num39 = 12;
                    pls::cs::Int32 num40 = 10 - 5 * l;
                    auto cs_left_134 = ([&]() -> pls::cs::Int32 {
                        auto cs_left_134 = bonus_f_cnt;
                        auto cs_right_134 = SoccerForm::BONUS_F_CYCLE()[0];
                        return cs_left_134 - cs_right_134;
                    }());
                    auto cs_right_134 = (SoccerForm::BONUS_F_CYCLE_MAIN()[0] - num40 - num39);
                    pls::cs::Int32 num41 = cs_left_134 - cs_right_134;
                    if (num41 >= 0) {
                        pls::cs::Single num42 = game::GameUtil::SetVStop(-6.0f, num39 / 2);
                        pls::cs::Single num43 = game::GameUtil::SetAStop(-6.0f, num39 / 2);
                        num10 = pls::cs::to_int32(
                            (pls::cs::Single((num12 + 2)) + num42 * pls::cs::Single(num41) +
                             num43 * pls::cs::Single(num41) * pls::cs::Single((num41 + 1)) / 2.0f));
                        if (num10 >= num12 + 2) {
                            num10 = num12 + 2;
                        }
                        SubForm::Draw_upParam(g, 35, num13 + 201, num10, num38);
                    }
                } else {
                    SubForm::Draw_upParam(g, 35, num13 + 201, num12 + 2, num38);
                }
            }
        }
        surface::GameView::AddTouch(2);
    }
}

// M:form.SoccerForm.Draw_bonusIncome(kairo.unity.ui.Graphics)
void SoccerForm::Draw_bonusIncome(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Draw_bonusIncome(kairo.unity.ui.Graphics)", game);
    {
        SubForm::ensure_initialized();

        require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"収支情報"));
        require(apdat_)->DrawBox(g, 15, 55, 225, 201);
        pls::cs::Int32 num5;
        pls::cs::Int32 num;
        pls::cs::Int32 num2;
        pls::cs::Int32 num3;
        num3 = 0;
        num2 = num3;
        num = num2;
        num5 = num;
        pls::cs::Ref<pls::kairo::Font> font = PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
        pls::cs::String text = literal(u"観客数");
        pls::cs::Int32 num4 =
            ([&]() -> pls::cs::Int32 {
                auto cs_left = pls::cs::Int32(PLS_API(require(font)->StringWidth(text))) + 10;
                auto cs_right =
                    main::AppData::GetFig(pls::cs::cast_integral<pls::cs::Int64>(customerNum[0])) * 8;
                return cs_left + cs_right;
            }()) +
            10 + 8;
        if (MyFormBase::En()) {
            num4 -= 18;
        }
        num = 51;
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLUE()));
        PLS_API(require(g)->DrawString(text, 120 - num4 / 2, num));
        num2 = 158;
        num3 = num;
        {
            auto cs_receiver = apdat_;
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(customerNum[0]);
            pls::cs::Int32 cs_arg3 =
                120 - num4 / 2 + (pls::cs::Int32(PLS_API(require(font)->StringWidth(text))) + 10);
            require(cs_receiver)->DrawNumImageComma(cs_arg0, 78, cs_arg2, cs_arg3, num3 + 1, 0, 0, 1);
        }
        {
            auto cs_receiver = apdat_;
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            pls::cs::Int32 cs_arg1 =
                120 - num4 / 2 + 46 +
                (main::AppData::GetFig(pls::cs::cast_integral<pls::cs::Int64>(customerNum[0])) * 8 + 10);
            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                require(require(apdat_)->resCom2_)->seb.get_Item(78);
            pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(105);
            require(cs_receiver)->DrawSeb(cs_arg0, cs_arg1, num3 + 2, cs_arg3, cs_arg4, 18);
        }
        num5 = 20;
        num = 72;
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLUE()));
        PLS_API(require(g)->DrawString(literal(u"項目一覧"), 42.0f, num));
        PLS_API(require(g)->DrawString(literal(u"収支"), 191.0f, num, 2));
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(146, 184, 247))));
        PLS_API(require(g)->DrawLine(num5, num + 12 + 2, num5 + 210 - 12, num + 12 + 2, 1.0f));
        num5 = 20;
        num = 95;
        StringArray array = StringArray::from({literal(u"チケット"), literal(u"賞金"), literal(u"ｸﾞｯｽﾞ販売"),
                                               literal(u"ｽﾎﾟﾝｻｰ"), literal(u"選手給料")});
        pls::cs::Int32 num6 = 216;
        pls::cs::String empty = pls::cs::String(u"");
        for (pls::cs::Int32 i = 0; i < 5; ++i) {
            num3 = num + 18 * i;
            empty = MyFormBase::LT(array[i]);
            if (i == 3) {
                empty = pls::cs::String::concat(
                    empty, MyFormBase::LTLong(literal(u"(<0>社)"),
                                              pls::cs::cast_integral<pls::cs::Int64>(bonus_sponsorNum)));
            }
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
            PLS_API(require(g)->DrawString(empty, num5, num3));
            if (i == 0) {
                if (!MyFormBase::En()) {
                    SubForm::Draw_multiParam(g, 35, num5 + 51, num3 + 1, require(udat_)->ticketPrice_, 1);
                    pls::cs::Int32 num7 = main::AppData::GetFig(pls::cs::cast_integral<pls::cs::Int64>(
                                              require(udat_)->ticketPrice_)) *
                                              8 +
                                          8 + 5;
                    {
                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                            require(require(apdat_)->resCom2_)->seb.get_Item(35);
                        pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                            require(require(apdat_)->resCom2_)->img.get_Item(103);
                        require(apdat_)->DrawSeb(g, num5 + 51 + num7, num3 + 1, cs_arg3, cs_arg4, 12);
                    }
                } else {
                    {
                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                            require(require(apdat_)->resCom2_)->seb.get_Item(35);
                        pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                            require(require(apdat_)->resCom2_)->img.get_Item(103);
                        require(apdat_)->DrawSeb(g, num5 + 51, num3 + 1, cs_arg3, cs_arg4, 16);
                    }
                    require(apdat_)->DrawMoney(
                        g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->ticketPrice_ / 100),
                        num5 + 51 + 10 + 4, num3 + 1, 0, 0, 1, false);
                }
            }
            if (i != 4) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(199, 223, 148))));
                PLS_API(require(g)->DrawLine(num5, num3 + 12 + 2, num5 + 210 - 12, num3 + 12 + 2, 1.0f));
            }
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
            if (i == 0) {
                if ([&]() -> bool {
                        auto cs_left = bonus_in_cnt;
                        auto cs_right = SoccerForm::BONUS_IN_CYCLE()[i];
                        return cs_left < cs_right;
                    }()) {
                    pls::cs::Int32 cs_arg0_135 = bonus_in_cnt;
                    pls::cs::Int32 cs_arg2_135 = SoccerForm::BONUS_IN_CYCLE()[i];
                    pls::cs::Int32 cs_arg4_135 = bonus_in_param[i][0];
                    pls::cs::Int32 num8 =
                        game::GameUtil::RateConvert(cs_arg0_135, 0, cs_arg2_135, 0, cs_arg4_135, true);
                    pls::cs::Int32 cs_arg0_136 = bonus_in_cnt;
                    pls::cs::Int32 cs_arg2_136 = SoccerForm::BONUS_IN_CYCLE()[i];
                    pls::cs::Int32 cs_arg4_136 = bonus_in_param[i][1];
                    pls::cs::Int32 num9 =
                        game::GameUtil::RateConvert(cs_arg0_136, 0, cs_arg2_136, 0, cs_arg4_136, true);
                    PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLUE()));
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 =
                            MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(num8));
                        require(g)->DrawString(cs_arg0, num6, num3, 4);
                    }()));
                } else {
                    PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLUE()));
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = MyFormBase::YEN(
                            literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(bonus_in_param[i][0]));
                        require(g)->DrawString(cs_arg0, num6, num3, 4);
                    }()));
                }
            } else if ([&]() -> bool {
                           auto cs_left = bonus_in_cnt;
                           auto cs_right = SoccerForm::BONUS_IN_CYCLE()[i - 1];
                           return cs_left < cs_right;
                       }()) {
                if (i == 4) {
                    PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_RED()));
                } else {
                    PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLUE()));
                }
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = MyFormBase::YEN(literal(u"万"), 0ll);
                    require(g)->DrawString(cs_arg0, num6, num3, 4);
                }()));
            } else if (([&]() -> bool {
                           auto cs_left = bonus_in_cnt;
                           auto cs_right = SoccerForm::BONUS_IN_CYCLE()[i - 1];
                           return cs_left >= cs_right;
                       }()) &&
                       ([&]() -> bool {
                           auto cs_left = bonus_in_cnt;
                           auto cs_right = SoccerForm::BONUS_IN_CYCLE()[i];
                           return cs_left < cs_right;
                       }())) {
                pls::cs::Int32 cs_arg0_137 = bonus_in_cnt;
                pls::cs::Int32 cs_arg1_137 = SoccerForm::BONUS_IN_CYCLE()[i - 1];
                pls::cs::Int32 cs_arg2_137 = SoccerForm::BONUS_IN_CYCLE()[i];
                pls::cs::Int32 cs_arg4_137 = bonus_in_param[i][0];
                pls::cs::Int32 num10 =
                    game::GameUtil::RateConvert(cs_arg0_137, cs_arg1_137, cs_arg2_137, 0, cs_arg4_137, true);
                pls::cs::Int32 cs_arg0_138 = bonus_in_cnt;
                pls::cs::Int32 cs_arg1_138 = SoccerForm::BONUS_IN_CYCLE()[i - 1];
                pls::cs::Int32 cs_arg2_138 = SoccerForm::BONUS_IN_CYCLE()[i];
                pls::cs::Int32 cs_arg4_138 = bonus_in_param[i][1];
                pls::cs::Int32 num11 =
                    game::GameUtil::RateConvert(cs_arg0_138, cs_arg1_138, cs_arg2_138, 0, cs_arg4_138, true);
                if (i == 4) {
                    PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_RED()));
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 =
                            MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(num11));
                        require(g)->DrawString(cs_arg0, num6, num3, 4);
                    }()));
                } else {
                    PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLUE()));
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 =
                            MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(num10));
                        require(g)->DrawString(cs_arg0, num6, num3, 4);
                    }()));
                }
            } else if (i == 4) {
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_RED()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = MyFormBase::YEN(
                        literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(bonus_in_param[i][1]));
                    require(g)->DrawString(cs_arg0, num6, num3, 4);
                }()));
            } else {
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLUE()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = MyFormBase::YEN(
                        literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(bonus_in_param[i][0]));
                    require(g)->DrawString(cs_arg0, num6, num3, 4);
                }()));
            }
        }
        num5 = 20;
        num = 189;
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(146, 184, 247))));
        PLS_API(require(g)->DrawLine(num5, num - 4, num5 + 210 - 12, num - 4, 1.0f));
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        PLS_API(require(g)->DrawString(literal(u"合計"), num5, num));
        pls::cs::Int32 num12 = 0;
        for (pls::cs::Int32 j = 0; j < SoccerForm::BONUS_IN_CYCLE().length(); ++j) {
            if (([&]() -> bool {
                    auto cs_left = bonus_in_cnt;
                    auto cs_right = SoccerForm::BONUS_IN_CYCLE()[j];
                    return cs_left < cs_right;
                }()) ||
                j == pls::cs::Int32(SoccerForm::BONUS_IN_CYCLE().length()) - 1) {
                num12 = j;
                break;
            }
        }
        pls::cs::Int32 num13 = 0;
        for (pls::cs::Int32 k = 0; k < num12; ++k) {
            if (num12 >= bonus_in_param.length()) {
                break;
            }
            num13 += bonus_in_param[k][0];
            num13 -= bonus_in_param[k][1];
        }
        if (num13 >= 0) {
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLUE()));
        } else {
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_RED()));
        }
        PLS_API(([&]() -> void {
            pls::cs::String cs_arg0 =
                MyFormBase::YEN(literal(u"万"), pls::cs::cast_integral<pls::cs::Int64>(num13));
            require(g)->DrawString(cs_arg0, num6, num, 4);
        }()));
        if (state_ == 11) {
            num5 = 120;
            num = 214;
            if (select_ == 0) {
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_SELECT()));
                PLS_API(require(g)->FillRect(num5 - 20, num, 40.0f, 16.0f));
            }
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
            PLS_API(require(g)->DrawString(literal(u"次へ"), num5, num + 2, 2));
            if (select_ == 0 && state_ == 11) {
                {
                    auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                    pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                        require(require(apdat_)->resCom2_)->img;
                    require(cs_receiver)->Draw(g, num5 - 20 - 4, num + 9, cs_arg3, -1);
                }
            }
        }
        surface::GameView::AddTouch(2);
    }
}

// M:form.SoccerForm.Draw_topBar(kairo.unity.ui.Graphics)
void SoccerForm::Draw_topBar(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Draw_topBar(kairo.unity.ui.Graphics)", game);
    {
        pls::cs::Ref<data::TeamData> teamData =
            require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[0]);
        pls::cs::Ref<data::TeamData> teamData2 =
            require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
        pls::cs::Int32 num = 4;
        pls::cs::Int32 drawTBAROff = GetDrawTBAROff(2);
        pls::cs::Int32 drawTBAROff2 = GetDrawTBAROff(4);
        pls::cs::Ref<pls::kairo::Graphics> gAlias = g;
        if (state_ == 0 || state_ == 1 || state_ == 7 || state_ == 8) {
            PLS_API(require(gAlias)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(214, 241, 255))));
            PLS_API(require(gAlias)->DrawString(require(teamData)->name_, drawTBAROff, num, 2));
            PLS_API(require(gAlias)->DrawString(require(teamData2)->name_, drawTBAROff2, num, 2));
        } else if (require(udat_)->phase_ == 14 || require(udat_)->phase_ == 15) {
            PLS_API(require(gAlias)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(128, 128, 128))));
            PLS_API(require(gAlias)->DrawString(require(teamData)->name_, drawTBAROff, num, 2));
            PLS_API(require(gAlias)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(214, 241, 255))));
            PLS_API(require(gAlias)->DrawString(require(teamData2)->name_, drawTBAROff2, num, 2));
        } else {
            PLS_API(require(gAlias)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(214, 241, 255))));
            PLS_API(require(gAlias)->DrawString(require(teamData)->name_, drawTBAROff, num, 2));
            PLS_API(require(gAlias)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(128, 128, 128))));
            PLS_API(require(gAlias)->DrawString(require(teamData2)->name_, drawTBAROff2, num, 2));
        }
        UpdateOffscreenTopBar(g, false);
    }
}

// M:form.SoccerForm.Draw_matchElse(kairo.unity.ui.Graphics)
void SoccerForm::Draw_matchElse(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Draw_matchElse(kairo.unity.ui.Graphics)", game);
    {
        SubForm::ensure_initialized();

        require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"試合結果"));
        require(apdat_)->DrawBox(g, 15, 55, 225, 201);
        pls::cs::Int32 num8;
        pls::cs::Int32 num;
        pls::cs::Int32 num2;
        pls::cs::Int32 num3;
        num3 = 0;
        num2 = num3;
        num = num2;
        num8 = num;
        IntArray nextBattleLeagueIndex =
            require(udat_)->GetNextBattleLeagueIndex(require(udat_)->league_setu_);
        if ([&]() {
                auto cs_left = pls::cs::box(nextBattleLeagueIndex);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            num = 50;
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
            PLS_API(require(g)->DrawString(literal(u"終節"), 51.0f, num, 2));
            return;
        }
        num = 51;
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        PLS_API(([&]() -> void {
            pls::cs::String cs_arg0 =
                MyFormBase::LTLong(literal(u"第<0>節"),
                                   pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->league_setu_ + 1));
            require(g)->DrawString(cs_arg0, 120.0f, num, 2);
        }()));
        num = 72;
        bool flag = false;
        bool flag2 = false;
        for (pls::cs::Int32 i = 0; i < require(udat_)->league_fightCombi_.length(); ++i) {
            flag = false;
            flag2 = false;
            if ([&]() -> bool {
                    auto cs_left = require(udat_)->league_fightResult_[i][0];
                    auto cs_right = require(udat_)->league_fightResult_[i][1];
                    return cs_left > cs_right;
                }()) {
                flag = true;
            }
            if ([&]() -> bool {
                    auto cs_left = require(udat_)->league_fightResult_[i][0];
                    auto cs_right = require(udat_)->league_fightResult_[i][1];
                    return cs_left < cs_right;
                }()) {
                flag2 = true;
            }
            num3 = num + 20 * i;
            pls::cs::Ref<data::LeagueData> leagueData =
                require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
            pls::cs::Int32 num4 = require(udat_)->league_fightCombi_[i][0];
            pls::cs::Int32 num5 = require(udat_)->league_fightCombi_[i][1];
            pls::cs::Int32 num6 = require(leagueData)->matchEnemy_[num4];
            pls::cs::Int32 num7 = require(leagueData)->matchEnemy_[num5];
            pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(num6);
            pls::cs::Ref<data::TeamData> teamData2 = require(apdat_)->tData_.get_Item(num7);
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(28);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(33);
                pls::cs::Int32 cs_arg5 = require(teamData)->uniform_;
                require(apdat_)->DrawSeb(g, 20, num3, cs_arg3, cs_arg4, cs_arg5);
            }
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(28);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(33);
                pls::cs::Int32 cs_arg5 = require(teamData2)->uniform_;
                require(apdat_)->DrawSeb(g, 209, num3, cs_arg3, cs_arg4, cs_arg5);
            }
            if (num6 == 0) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(210, 255, 158))));
                PLS_API(require(g)->FillRect(32.0f, num3 - 2, 60.0f, 16.0f));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(67, 72, 255))));
            } else if (flag) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(92, 51, 31))));
            } else {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(144, 144, 144))));
            }
            PLS_API(require(g)->DrawString(require(teamData)->name2_, 62.0f, num3, 2));
            if (num7 == 0) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(210, 255, 158))));
                PLS_API(require(g)->FillRect(148.0f, num3 - 2, 60.0f, 16.0f));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(67, 72, 255))));
            } else if (flag2) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(92, 51, 31))));
            } else {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(144, 144, 144))));
            }
            PLS_API(require(g)->DrawString(require(teamData2)->name2_, 178.0f, num3, 2));
            if (flag) {
                {
                    pls::cs::Int64 cs_arg2 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->league_fightResult_[i][0]);
                    require(apdat_)->DrawNumImageLongIntInt(g, 35, cs_arg2, 106, num3 + 2, 0, 2);
                }
            } else {
                {
                    pls::cs::Int64 cs_arg2 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->league_fightResult_[i][0]);
                    require(apdat_)->DrawNumImageLongIntInt(g, 78, cs_arg2, 106, num3 + 2, 0, 2);
                }
            }
            if (flag2) {
                {
                    pls::cs::Int64 cs_arg2 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->league_fightResult_[i][1]);
                    require(apdat_)->DrawNumImageLongIntInt(g, 35, cs_arg2, 135, num3 + 2, 0, 2);
                }
            } else {
                {
                    pls::cs::Int64 cs_arg2 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(udat_)->league_fightResult_[i][1]);
                    require(apdat_)->DrawNumImageLongIntInt(g, 78, cs_arg2, 135, num3 + 2, 0, 2);
                }
            }
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(78);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(103);
                require(apdat_)->DrawSeb(g, 116, num3 + 2, cs_arg3, cs_arg4, 15);
            }
        }
        num8 = 120;
        num = 214;
        if (select_ == 0) {
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_SELECT()));
            PLS_API(require(g)->FillRect(num8 - 20, num, 40.0f, 16.0f));
        }
        surface::GameView::AddTouch(2);
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        PLS_API(require(g)->DrawString(literal(u"次へ"), num8, num + 2, 2));
        if (select_ == 0) {
            {
                auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                    require(require(apdat_)->resCom2_)->img;
                require(cs_receiver)->Draw(g, num8 - 20 - 4, num + 9, cs_arg3, -1);
            }
        }
    }
}

// M:form.SoccerForm.Draw_newPlayerLv(kairo.unity.ui.Graphics)
void SoccerForm::Draw_newPlayerLv(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Draw_newPlayerLv(kairo.unity.ui.Graphics)", game);
    {
        SubForm::ensure_initialized();

        require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"ボーナス"));
        require(apdat_)->DrawBox(g, 15, 55, 225, 201);
        pls::cs::Int32 num5, num, num2, num3, num4;
        num3 = 0;
        num2 = num3;
        num = num2;
        num5 = num;
        num = 51;
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        require(apdat_)->DrawExp(g, 81, num + 2);
        PLS_API(require(g)->DrawString(literal(u"獲得"), 140.0f, num));
        num4 = ([&]() -> pls::cs::Int32 {
            pls::cs::Int32 cs_arg0 = stateCnt_;
            pls::cs::Int32 cs_arg1 = SoccerForm::PBONUS_NP_LV_TIME()[0];
            pls::cs::Int32 cs_arg2 = SoccerForm::PBONUS_NP_LV_TIME()[1];
            pls::cs::Int32 cs_arg4 = PBONUS_NP_LV_ADDEXP;
            return game::GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, 0, cs_arg4, true);
        }());
        {
            auto cs_receiver = apdat_;
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            pls::cs::String cs_arg2 = pls::cs::String(u"");
            pls::cs::Int64 cs_arg3 = pls::cs::cast_integral<pls::cs::Int64>(num4);
            pls::cs::String cs_arg4 = pls::cs::String(u"");
            require(cs_receiver)->DrawNumImage(cs_arg0, 35, cs_arg2, cs_arg3, cs_arg4, 120, num + 1, 0, 2);
        }
        num5 = 19;
        num = 70;
        for (pls::cs::Int32 i = 0; i < 11; ++i) {
            num2 = num5 + i / 6 * 100;
            num3 = num + i % 6 * 23;
            pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), i)));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(199, 223, 148))));
            PLS_API(require(g)->DrawRect(num2, num3, 100.0f, 23.0f));
            if (bonus_softKey == 0) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(192, 212, 153))));
                PLS_API(require(g)->FillRect(num2 + 5, num3 + 4, 16.0f, 16.0f));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(233, 240, 219))));
                PLS_API(require(g)->DrawRect(num2 + 5, num3 + 4, 15.0f, 15.0f));
                PLS_API(require(g)->ClipRect(num2 + 5, num3 + 4, 13.0f, 15.0f, true));
                require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_,
                                                  require(playerData)->faceImg_, 0, 1);
                require(udat_)->DrawDispPlayer(g, num2 + 13, num3 + 25);
                PLS_API(require(g)->PopClip());
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(47);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(51);
                    pls::cs::Int32 cs_arg5 = require(playerData)->role_;
                    require(apdat_)->DrawSeb(g, num2 + 21, num3 + 6, cs_arg3, cs_arg4, cs_arg5);
                }
            } else {
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
                SubForm::SetFontSize(g, 10);
                if (!MyFormBase::En()) {
                    PLS_API(require(g)->DrawString(require(playerData)->name_, num2 + 5 + 1, num3 + 5 + 1));
                } else {
                    PLS_API(require(g)->DrawString(require(playerData)->name_, num2 + 5 + 1 - 2,
                                                   num3 + 5 + 1 + 1));
                }
                SubForm::ResetFontSize(g);
            }
            if (select_ == 0) {
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg1 =
                        pls::cs::String::concat(MyFormBase::LT(literal(u"Lv")), literal(u":"));
                    require(cs_receiver)->DrawLv(cs_arg0, cs_arg1, num2 + 50, num3 + 4);
                }
                if (require(playerData)->temp_anime > 0) {
                    pls::cs::Int32 num6 =
                        game::GameUtil::RateConvert(require(playerData)->temp_anime, 12, 0, -12, 0, true);
                    if (require(playerData)->temp_lv % 10 == 0) {
                        PLS_API(require(g)->ClipRect(num2 + 89 - 20, num3 + 4, 20.0f, 12.0f, true));
                        {
                            auto cs_receiver = apdat_;
                            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                            pls::cs::String cs_arg2 = pls::cs::String(u"");
                            pls::cs::Int64 cs_arg3 =
                                pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->temp_lv);
                            pls::cs::String cs_arg4 = pls::cs::String(u"");
                            require(cs_receiver)
                                ->DrawNumImage(cs_arg0, 79, cs_arg2, cs_arg3, cs_arg4, num2 + 89,
                                               num3 + 4 + num6, 0, 4);
                        }
                        PLS_API(require(g)->PopClip());
                    } else {
                        if (require(playerData)->temp_lv / 10 > 0) {
                            {
                                auto cs_receiver = apdat_;
                                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                pls::cs::Int64 cs_arg3 =
                                    pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->temp_lv / 10);
                                pls::cs::String cs_arg4 = pls::cs::String(u"");
                                require(cs_receiver)
                                    ->DrawNumImage(cs_arg0, 79, cs_arg2, cs_arg3, cs_arg4, num2 + 89 - 10,
                                                   num3 + 4, 0, 4);
                            }
                        }
                        PLS_API(require(g)->ClipRect(num2 + 89 - 10, num3 + 4, 10.0f, 12.0f, true));
                        {
                            auto cs_receiver = apdat_;
                            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                            pls::cs::String cs_arg2 = pls::cs::String(u"");
                            pls::cs::Int64 cs_arg3 =
                                pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->temp_lv);
                            pls::cs::String cs_arg4 = pls::cs::String(u"");
                            require(cs_receiver)
                                ->DrawNumImage(cs_arg0, 79, cs_arg2, cs_arg3, cs_arg4, num2 + 89,
                                               num3 + 4 + num6, 0, 4);
                        }
                        PLS_API(require(g)->PopClip());
                    }
                } else {
                    {
                        auto cs_receiver = apdat_;
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        pls::cs::String cs_arg2 = pls::cs::String(u"");
                        pls::cs::Int64 cs_arg3 =
                            pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->temp_lv);
                        pls::cs::String cs_arg4 = pls::cs::String(u"");
                        require(cs_receiver)
                            ->DrawNumImage(cs_arg0, 79, cs_arg2, cs_arg3, cs_arg4, num2 + 89, num3 + 4, 0, 4);
                    }
                }
                pls::cs::Int32 c1min = 0;
                pls::cs::Int32 nextLvUpExp = data::PlayerData::GetNextLvUpExp(require(playerData)->temp_lv);
                pls::cs::Int32 num7 = 0;
                num7 = game::GameUtil::RateConvert(require(playerData)->temp_exp, c1min, nextLvUpExp, 0, 42,
                                                   true);
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0))));
                PLS_API(require(g)->FillRect(num2 + 50, num3 + 15 + 2, 44.0f, 4.0f));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(10, 149, 46))));
                PLS_API(require(g)->DrawRect(num2 + 50, num3 + 15 + 2, 43.0f, 3.0f));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(92, 255, 7))));
                PLS_API(require(g)->FillRect(num2 + 50 + 1, num3 + 15 + 1 + 2, num7, 2.0f));
            } else {
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
                if (!MyFormBase::En()) {
                    {
                        auto cs_receiver = apdat_;
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        pls::cs::String cs_arg2 = pls::cs::String(u"");
                        pls::cs::Int64 cs_arg3 =
                            pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->actscoreScore_);
                        pls::cs::String cs_arg4 = pls::cs::String(u"");
                        require(cs_receiver)
                            ->DrawNumImage(cs_arg0, 79, cs_arg2, cs_arg3, cs_arg4, num2 + 62 + 2 + 16,
                                           num3 + 6, 0, 4);
                    }
                    PLS_API(require(g)->DrawString(literal(u"点"), num2 + 62 + 2 + 16 + 2, num3 + 6));
                } else {
                    {
                        auto cs_receiver = apdat_;
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        pls::cs::String cs_arg2 = pls::cs::String(u"");
                        pls::cs::Int64 cs_arg3 =
                            pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->actscoreScore_);
                        pls::cs::String cs_arg4 = pls::cs::String(u"");
                        require(cs_receiver)
                            ->DrawNumImage(cs_arg0, 79, cs_arg2, cs_arg3, cs_arg4, num2 + 62 + 2 + 16 - 2,
                                           num3 + 6, 0, 4);
                    }
                    PLS_API(require(g)->DrawString(literal(u"点"), num2 + 62 + 2 + 16 + 2 - 2, num3 + 6));
                }
            }
            if (require(playerData)->temp_lvUp && stateCnt_ % 20 / 10 == 0) {
                require(require(apdat_)->resCom2_)->DrawSeb(g, num2 + 23, num3 + 25 - 1, 94, 0);
            }
        }
        num5 = 80;
        num = 214;
        if (select_ == 0) {
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_SELECT()));
            PLS_API(require(g)->FillRect(num5 - 20, num, 40.0f, 16.0f));
        }
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        PLS_API(require(g)->DrawString(literal(u"次へ"), num5, num + 2, 2));
        if (select_ == 0 && ([&]() -> bool {
                auto cs_left = stateCnt_;
                auto cs_right = SoccerForm::PBONUS_NP_LV_TIME()[3];
                return cs_left >= cs_right;
            }())) {
            {
                auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                    require(require(apdat_)->resCom2_)->img;
                require(cs_receiver)->Draw(g, num5 - 20 - 4, num + 9, cs_arg3, -1);
            }
        }
        if (!MyFormBase::En()) {
            num5 = 160;
            if (select_ == 1) {
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_SELECT()));
                PLS_API(require(g)->FillRect(num5 - 20, num, 40.0f, 16.0f));
            }
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
            PLS_API(require(g)->DrawString(literal(u"採点"), num5, num + 2, 2));
        } else {
            num5 = 170;
            if (select_ == 1) {
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_SELECT()));
                PLS_API(require(g)->FillRect(num5 - 25, num, 50.0f, 16.0f));
            }
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
            PLS_API(require(g)->DrawString(literal(u"採点"), num5, num + 2, 2));
        }
        if (select_ == 1 && ([&]() -> bool {
                auto cs_left = stateCnt_;
                auto cs_right = SoccerForm::PBONUS_NP_LV_TIME()[3];
                return cs_left >= cs_right;
            }())) {
            {
                auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                    require(require(apdat_)->resCom2_)->img;
                require(cs_receiver)->Draw(g, num5 - 20 - 4, num + 9, cs_arg3, -1);
            }
        }
        if ([&]() -> bool {
                auto cs_left = stateCnt_;
                auto cs_right = SoccerForm::PBONUS_NP_LV_TIME()[3];
                return cs_left < cs_right;
            }()) {
            surface::GameView::AddTouch(2);
        } else {
            pls::cs::Int32 num8 = 50;
            for (pls::cs::Int32 j = 0; j < 2; ++j) {
                num2 = 80 - num8 / 2 + 80 * j;
                {
                    pls::cs::Int32 cs_arg2 = num2 + SubForm::DLGSEL_TRECT()[j][0];
                    pls::cs::Int32 cs_arg3 = num + SubForm::DLGSEL_TRECT()[j][1];
                    pls::cs::Int32 cs_arg4 = num8 + SubForm::DLGSEL_TRECT()[j][2];
                    pls::cs::Int32 cs_arg5 = 16 + SubForm::DLGSEL_TRECT()[j][3];
                    surface::GameView::AddTouch(g, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 0x20000 | j);
                }
            }
            surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
        }
    }
}

// M:form.SoccerForm.Draw_newPlayerPopular(kairo.unity.ui.Graphics)
void SoccerForm::Draw_newPlayerPopular(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Draw_newPlayerPopular(kairo.unity.ui.Graphics)",
                     game);
    {
        SubForm::ensure_initialized();

        require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"ボーナス"));
        require(apdat_)->DrawBox(g, 15, 55, 225, 201);
        pls::cs::Int32 num4;
        pls::cs::Int32 num;
        pls::cs::Int32 num2;
        pls::cs::Int32 num3;
        num3 = 0;
        num2 = num3;
        num = num2;
        num4 = num;
        num = 51;
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        PLS_API(require(g)->DrawString(literal(u"人気UP"), 120.0f, num, 2));
        num4 = 19;
        num = 70;
        for (pls::cs::Int32 i = 0; i < 11; ++i) {
            num2 = num4 + i / 6 * 100;
            num3 = num + i % 6 * 23;
            pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), i)));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(199, 223, 148))));
            PLS_API(require(g)->DrawRect(num2, num3, 100.0f, 23.0f));
            if (bonus_softKey == 0) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(192, 212, 153))));
                PLS_API(require(g)->FillRect(num2 + 5, num3 + 4, 16.0f, 16.0f));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(233, 240, 219))));
                PLS_API(require(g)->DrawRect(num2 + 5, num3 + 4, 15.0f, 15.0f));
                PLS_API(require(g)->ClipRect(num2 + 5, num3 + 4, 13.0f, 15.0f, true));
                require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_,
                                                  require(playerData)->faceImg_, 0, 1);
                require(udat_)->DrawDispPlayer(g, num2 + 13, num3 + 25);
                PLS_API(require(g)->PopClip());
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(47);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(51);
                    pls::cs::Int32 cs_arg5 = require(playerData)->role_;
                    require(apdat_)->DrawSeb(g, num2 + 21, num3 + 6, cs_arg3, cs_arg4, cs_arg5);
                }
            } else {
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
                PLS_API(require(g)->DrawString(require(playerData)->name_, num2 + 5 + 1, num3 + 5 + 1));
            }
            if (select_ == 0) {
                if ([&]() -> bool {
                        auto cs_left = stateCnt_;
                        auto cs_right = SoccerForm::PBONUS_NP_LV_POPULAR()[0];
                        return cs_left < cs_right;
                    }()) {

                } else {
                    if (([&]() -> bool {
                            auto cs_left = stateCnt_;
                            auto cs_right = SoccerForm::PBONUS_NP_LV_POPULAR()[0];
                            return cs_left >= cs_right;
                        }()) &&
                        ([&]() -> bool {
                            auto cs_left = stateCnt_;
                            auto cs_right = SoccerForm::PBONUS_NP_LV_POPULAR()[2];
                            return cs_left < cs_right;
                        }())) {
                        pls::cs::Int32 cs_arg0_139 = stateCnt_;
                        pls::cs::Int32 cs_arg1_139 = SoccerForm::PBONUS_NP_LV_POPULAR()[0];
                        pls::cs::Int32 cs_arg2_139 = SoccerForm::PBONUS_NP_LV_POPULAR()[1];
                        pls::cs::Int32 num5 =
                            game::GameUtil::RateConvert(cs_arg0_139, cs_arg1_139, cs_arg2_139, -12, 0, true);
                        PLS_API(require(g)->ClipRect(num2 + 52, num3 + 5, 40.0f, 16.0f, true));
                        SubForm::Draw_upParam(g, 35, num2 + 89, num3 + 7 + num5, PBONUS_NP_LV_GETPOPULAR);
                        PLS_API(require(g)->PopClip());
                    } else {
                        pls::cs::Int32 cs_arg0_140 = stateCnt_;
                        pls::cs::Int32 cs_arg1_140 = SoccerForm::PBONUS_NP_LV_POPULAR()[2];
                        pls::cs::Int32 cs_arg2_140 = SoccerForm::PBONUS_NP_LV_POPULAR()[3];
                        pls::cs::Int32 cs_arg3_140 = require(playerData)->popularP_;
                        pls::cs::Int32 cs_arg4_140 = require(playerData)->popularP_ + PBONUS_NP_LV_GETPOPULAR;
                        pls::cs::Int32 num6 = game::GameUtil::RateConvert(
                            cs_arg0_140, cs_arg1_140, cs_arg2_140, cs_arg3_140, cs_arg4_140, true);
                        {
                            auto cs_receiver = apdat_;
                            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                            pls::cs::String cs_arg2 = pls::cs::String(u"");
                            pls::cs::Int64 cs_arg3 = pls::cs::cast_integral<pls::cs::Int64>(num6);
                            pls::cs::String cs_arg4 = pls::cs::String(u"");
                            require(cs_receiver)
                                ->DrawNumImage(cs_arg0, 35, cs_arg2, cs_arg3, cs_arg4, num2 + 89, num3 + 7, 0,
                                               4);
                        }
                    }
                }
            } else {
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->actscoreScore_);
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)
                        ->DrawNumImage(cs_arg0, 30, cs_arg2, cs_arg3, cs_arg4, num2 + 62 + 2 + 16, num3 + 6,
                                       0, 4);
                }
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
                PLS_API(require(g)->DrawString(literal(u"点"), num2 + 62 + 2 + 16 + 2, num3 + 6));
            }
        }
        num4 = 120;
        num = 214;
        if (select_ == 0) {
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_SELECT()));
            PLS_API(require(g)->FillRect(num4 - 20, num, 40.0f, 16.0f));
        }
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        PLS_API(require(g)->DrawString(literal(u"次へ"), num4, num + 2, 2));
        if (select_ == 0) {
            {
                auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                    require(require(apdat_)->resCom2_)->img;
                require(cs_receiver)->Draw(g, num4 - 20 - 4, num + 9, cs_arg3, -1);
            }
        }
    }
}

// M:form.SoccerForm.Draw_newPlayerReserach(kairo.unity.ui.Graphics)
void SoccerForm::Draw_newPlayerReserach(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.Draw_newPlayerReserach(kairo.unity.ui.Graphics)",
                     game);
    {
        SubForm::ensure_initialized();

        require(apdat_)->DrawWindow(g, 228, 204, 0, literal(u"ボーナス"));
        require(apdat_)->DrawBox(g, 15, 55, 225, 201);
        pls::cs::Int32 num4;
        pls::cs::Int32 num;
        pls::cs::Int32 num2;
        pls::cs::Int32 num3;
        num3 = 0;
        num2 = num3;
        num = num2;
        num4 = num;
        num = 51;
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        PLS_API(require(g)->DrawString(literal(u"研究ﾎﾟｲﾝﾄの獲得"), 120.0f, num, 2));
        num4 = 19;
        num = 70;
        for (pls::cs::Int32 i = 0; i < 11; ++i) {
            num2 = num4 + i / 6 * 100;
            num3 = num + i % 6 * 23;
            pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), i)));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(199, 223, 148))));
            PLS_API(require(g)->DrawRect(num2, num3, 100.0f, 23.0f));
            if (bonus_softKey == 0) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(192, 212, 153))));
                PLS_API(require(g)->FillRect(num2 + 5, num3 + 4, 16.0f, 16.0f));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(233, 240, 219))));
                PLS_API(require(g)->DrawRect(num2 + 5, num3 + 4, 15.0f, 15.0f));
                PLS_API(require(g)->ClipRect(num2 + 5, num3 + 4, 13.0f, 15.0f, true));
                require(udat_)->SetDispPlayerData(0, require(udat_)->selectUniform_,
                                                  require(playerData)->faceImg_, 0, 1);
                require(udat_)->DrawDispPlayer(g, num2 + 13, num3 + 25);
                PLS_API(require(g)->PopClip());
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(47);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(51);
                    pls::cs::Int32 cs_arg5 = require(playerData)->role_;
                    require(apdat_)->DrawSeb(g, num2 + 21, num3 + 6, cs_arg3, cs_arg4, cs_arg5);
                }
            } else {
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
                SubForm::SetFontSize(g, 9);
                if (!MyFormBase::En()) {
                    PLS_API(require(g)->DrawString(require(playerData)->name_, num2 + 5 + 1, num3 + 5 + 1));
                } else {
                    PLS_API(require(g)->DrawString(require(playerData)->name_, num2 + 5 + 1 - 4,
                                                   num3 + 5 + 1 + 1));
                }
                SubForm::ResetFontSize(g);
            }
            if (select_ == 0) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(165);
                    require(g)->DrawImage(cs_arg0, num2 + 43, num3 + 2);
                }()));
                pls::cs::Int32 num5 = ([&]() -> pls::cs::Int32 {
                                          auto cs_left = stateCnt_;
                                          auto cs_right = SoccerForm::PBONUS_NP_LV_TRAINING1()[0];
                                          return cs_left - cs_right;
                                      }()) -
                                      i * 16;
                if (num5 < 0) {

                } else {
                    if (num5 < SoccerForm::PBONUS_NP_LV_T_GET()[0]) {
                        pls::cs::Int32 num6 = game::GameUtil::RateConvert(
                            num5, 0, SoccerForm::PBONUS_NP_LV_T_GET()[0], 0, 4, true);
                        if (num6 >= 4) {
                            num6 = 3;
                        }
                        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
                        for (pls::cs::Int32 j = 0; j < num6; ++j) {
                            PLS_API(require(g)->DrawString(literal(u"・"), num2 + 56 + j * 12, num3 + 7));
                        }
                    } else if (require(playerData)->bonus_research[0] != -1) {
                        pls::cs::Int32 cs_arg1_141 = SoccerForm::PBONUS_NP_LV_T_GET()[0];
                        pls::cs::Int32 cs_arg2_141 = SoccerForm::PBONUS_NP_LV_T_GET()[1];
                        pls::cs::Int32 num7 =
                            game::GameUtil::RateConvert(num5, cs_arg1_141, cs_arg2_141, -20, 0, true);
                        PLS_API(require(g)->ClipRect(num2 + 43, num3 + 2, 56.0f, 20.0f, true));
                        {
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(require(apdat_)->resCom2_)->seb.get_Item(83);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(require(apdat_)->resCom2_)->img.get_Item(94);
                            pls::cs::Int32 cs_arg5 = require(playerData)->bonus_research[0];
                            require(apdat_)->DrawSeb(g, num2 + 52, num3 + 4 + num7, cs_arg3, cs_arg4,
                                                     cs_arg5);
                        }
                        {
                            pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(
                                require(playerData)->bonus_research[1]);
                            require(apdat_)->DrawNumImageLongIntInt(g, 78, cs_arg2, num2 + 82,
                                                                    num3 + 7 + num7, 0, 2);
                        }
                        PLS_API(require(g)->PopClip());
                        PLS_API(([&]() -> void {
                            pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                require(require(apdat_)->resCom2_)->img.get_Item(163);
                            require(g)->DrawImage(cs_arg0, num2 + 62, num3 + 16);
                        }()));
                    } else {
                        PLS_API(([&]() -> void {
                            pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                require(require(apdat_)->resCom2_)->img.get_Item(164);
                            require(g)->DrawImage(cs_arg0, num2 + 47, num3 + 6);
                        }()));
                    }
                }
            } else {
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                    pls::cs::Int64 cs_arg3 =
                        pls::cs::cast_integral<pls::cs::Int64>(require(playerData)->actscoreScore_);
                    pls::cs::String cs_arg4 = pls::cs::String(u"");
                    require(cs_receiver)
                        ->DrawNumImage(cs_arg0, 79, cs_arg2, cs_arg3, cs_arg4, num2 + 62 + 2 + 16, num3 + 6,
                                       0, 4);
                }
                PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
                PLS_API(require(g)->DrawString(literal(u"点"), num2 + 62 + 2 + 16 + 2, num3 + 6));
            }
        }
        num4 = 120;
        num = 214;
        if (select_ == 0) {
            PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_SELECT()));
            PLS_API(require(g)->FillRect(num4 - 20, num, 40.0f, 16.0f));
        }
        PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLACK()));
        PLS_API(require(g)->DrawString(literal(u"次へ"), num4, num + 2, 2));
        if (select_ == 0) {
            {
                auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                    require(require(apdat_)->resCom2_)->img;
                require(cs_receiver)->Draw(g, num4 - 20 - 4, num + 9, cs_arg3, -1);
            }
        }
        surface::GameView::AddTouch(2);
    }
}

// M:form.SoccerForm.SetCustomerNum
void SoccerForm::SetCustomerNum() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.SetCustomerNum", game);
    {
        pls::cs::Int32 evaCumstomer = GetEvaCumstomer(true);
        pls::cs::Int32 idealSalse = require(udat_)->GetIdealSalse(evaCumstomer);
        pls::cs::Single ticketSalseRate = require(udat_)->GetTicketSalseRate(evaCumstomer);
        pls::cs::Int32 num = pls::cs::to_int32((pls::cs::Single(idealSalse) * ticketSalseRate));
        pls::cs::Int64 num2 = pls::cs::Int64(num) * 10000ll / pls::cs::Int64(require(udat_)->ticketPrice_);
        customerNum[0] = pls::cs::to_int32(num2);
        pls::cs::Ref<data::TeamData> teamData =
            require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
        {
            auto cs_target = customerNum;
            auto cs_index = 1;
            auto cs_value = game::GameUtil::RateConvert(require(teamData)->fan_, 0, 1000, 0, 100000, true);
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = customerNum;
            auto cs_index = 0;
            auto cs_value = ([&]() -> pls::cs::Int32 {
                auto cs_left = ([&]() -> pls::cs::Int32 {
                    auto cs_left = customerNum[0];
                    auto cs_right = customerNum[0] * 10 / 100;
                    return cs_left - cs_right;
                }());
                auto cs_right = ([&]() -> pls::cs::Int32 {
                                    auto cs_left = customerNum[0];
                                    auto cs_right = game::GameUtil::Random(20);
                                    return cs_left * cs_right;
                                }()) /
                                100;
                return cs_left + cs_right;
            }());
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = customerNum;
            auto cs_index = 1;
            auto cs_value = ([&]() -> pls::cs::Int32 {
                auto cs_left = ([&]() -> pls::cs::Int32 {
                    auto cs_left = customerNum[1];
                    auto cs_right = customerNum[1] * 10 / 100;
                    return cs_left - cs_right;
                }());
                auto cs_right = ([&]() -> pls::cs::Int32 {
                                    auto cs_left = customerNum[1];
                                    auto cs_right = game::GameUtil::Random(20);
                                    return cs_left * cs_right;
                                }()) /
                                100;
                return cs_left + cs_right;
            }());
            cs_target.set_Item(cs_index, cs_value);
        }
        pls::cs::Int32 num3 = 0;
        if ((stadiumId_ == 0)) {
            num3 = 40000;
        } else {
            if (stadiumId_ == 1) {
                num3 = 20000;
            } else {
                num3 = 2147483647 /* Int32.MaxValue */;
            }
        }
        {
            auto cs_target = customerNum;
            auto cs_index = 0;
            auto cs_value = main::AppData::ClampMax(customerNum[0], num3);
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = customerNum;
            auto cs_index = 1;
            auto cs_value = main::AppData::ClampMax(customerNum[1], num3);
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = customerNum;
            auto cs_index = 0;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = customerNum[0] % 10;
            pls::cs::Int32 cs_value = cs_old - cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = customerNum;
            auto cs_index = 1;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = customerNum[1] % 10;
            pls::cs::Int32 cs_value = cs_old - cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
    }
}

// M:form.SoccerForm.GetEvaCumstomer(System.Boolean)
pls::cs::Int32 SoccerForm::GetEvaCumstomer(bool isMatch) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetEvaCumstomer(System.Boolean)", game);
    {
        if (is_null(udat_)) {
            udat_ = game::UserData::GetInstance();
        }
        if (is_null(apdat_)) {
            apdat_ = main::AppData::GetInstance();
        }
        pls::cs::Ref<data::TeamData> teamData =
            require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < 11; ++i) {
            pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), i)));
            num += require(playerData)->popularP_;
        }
        pls::cs::Int32 fanEvaToCommonValue = data::FanActData::GetFanEvaToCommonValue(0);
        pls::cs::Int32 fanEvaToCommonValue2 = data::FanActData::GetFanEvaToCommonValue(1);
        pls::cs::Int32 fanEvaToCommonValue3 = data::FanActData::GetFanEvaToCommonValue(2);
        pls::cs::Int32 num2 = 0;
        pls::cs::Int32 num3 = num / 11;
        if (isMatch) {
            num2 = require(teamData)->warPotential_;
        }
        pls::cs::Single num4 = 0.0f;
        if (isMatch && require(require(udat_)->gm_)->homeAway_ == 0) {
            num4 = game::GameUtil::RateConvertFloat(fanEvaToCommonValue2, 0.0f, 1000.0f, 0.75f, 1.0f, true);
            fanEvaToCommonValue = pls::cs::to_int32((pls::cs::Single(fanEvaToCommonValue) * num4));
        } else {
            num4 = game::GameUtil::RateConvertFloat(fanEvaToCommonValue2, 0.0f, 1000.0f, 0.5f, 1.0f, true);
            fanEvaToCommonValue = pls::cs::to_int32((pls::cs::Single(fanEvaToCommonValue) * num4));
        }
        {
            pls::cs::Int32 recoveredReturn = pls::cs::to_int32(
                ((0.5f * pls::cs::Single(fanEvaToCommonValue) + 0.1f * pls::cs::Single(fanEvaToCommonValue3) +
                  0.05f * pls::cs::Single(num2) + 0.1f * pls::cs::Single(num3)) /
                 0.75000006f));
            return recoveredReturn;
        }
    }
}

// M:form.SoccerForm.GetMatchPrice
pls::cs::Int32 SoccerForm::GetMatchPrice() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetMatchPrice", game);
    {
        pls::cs::Int32 matchInfoJoin = require(udat_)->GetMatchInfoJoin();
        pls::cs::Int32 num = 0;
        if ((matchInfoJoin == 0)) {
            {
                pls::cs::Ref<data::LeagueData> leagueData =
                    require(apdat_)->leagueData_.get_Item(require(udat_)->selectLeagueId_);
                if ([&]() -> bool {
                        auto cs_left = require(require(udat_)->gm_)->score_[0];
                        auto cs_right = require(require(udat_)->gm_)->score_[1];
                        return cs_left > cs_right;
                    }()) {
                    num += require(leagueData)->matchPrize_;
                }
                if (data::LeagueData::IsVictoryLeague()) {
                    num += require(leagueData)->victoryPrize_;
                }
                return num;
            }
        } else if ((matchInfoJoin == 1)) {
            {
                pls::cs::Ref<data::QuestMatchData> questMatchData =
                    require(apdat_)->qmData_.get_Item(require(udat_)->selectQmId_);
                if ([&]() -> bool {
                        auto cs_left = require(require(udat_)->gm_)->score_[0];
                        auto cs_right = require(require(udat_)->gm_)->score_[1];
                        return cs_left > cs_right;
                    }()) {
                    num += require(questMatchData)->matchPrize_;
                }
                if (data::QuestMatchData::IsVictoryQuestMatch()) {
                    num += require(questMatchData)->victoryPrize_;
                }
                return num;
            }
        } else {
            return 0;
        }
    }
}

// M:form.SoccerForm.GetGoodsPrice
pls::cs::Int32 SoccerForm::GetGoodsPrice() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetGoodsPrice", game);
    {
        data::TenantData::ensure_initialized();

        bool flag = false;
        for (pls::cs::Int32 i = 0; i < require(udat_)->tenants_.length(); ++i) {
            pls::cs::Ref<game::Tenant> tenant = require(udat_)->tenants_.get_Item(i);
            if (require(tenant)->tenantDataId_ == data::TenantData::TENANT_ID_GOODS()) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            return 0;
        }
        pls::cs::Ref<data::TenantData> tenantData =
            require(apdat_)->tenantData_.get_Item(data::TenantData::TENANT_ID_GOODS());
        pls::cs::Single goodsIncomeRate = require(tenantData)->GetGoodsIncomeRate();
        {
            pls::cs::Int32 recoveredReturn =
                pls::cs::to_int32((pls::cs::Single(customerNum[0]) * goodsIncomeRate / 10000.0f));
            return recoveredReturn;
        }
    }
}

// M:form.SoccerForm.GetSponsorPrice
pls::cs::Int32 SoccerForm::GetSponsorPrice() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetSponsorPrice", game);
    {
        if (is_null(apdat_)) {
            apdat_ = main::AppData::GetInstance();
        }
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < require(apdat_)->sponsorData_.length(); ++i) {
            pls::cs::Ref<data::SponsorData> sponsorData = require(apdat_)->sponsorData_.get_Item(i);
            if (require(sponsorData)->state_ == 2) {
                num += require(sponsorData)->GetIncome();
            }
        }
        return num;
    }
}

// M:form.SoccerForm.GetSponsorNum
pls::cs::Int32 SoccerForm::GetSponsorNum() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetSponsorNum", game);
    {
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < require(apdat_)->sponsorData_.length(); ++i) {
            pls::cs::Ref<data::SponsorData> sponsorData = require(apdat_)->sponsorData_.get_Item(i);
            if (require(sponsorData)->state_ == 2) {
                ++num;
            }
        }
        return num;
    }
}

// M:form.SoccerForm.GetPlayersSalary
pls::cs::Int32 SoccerForm::GetPlayersSalary() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetPlayersSalary", game);
    {
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < 11; ++i) {
            pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), i)));
            num += require(playerData)->GetSallay();
        }
        return num;
    }
}

// M:form.SoccerForm.GetScaleRange
IntArray SoccerForm::GetScaleRange() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetScaleRange", game);
    {
        {
            auto cs_target = getScaleRange_tmp;
            auto cs_index = 0;
            auto cs_value = GetScaleMin();
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = getScaleRange_tmp;
            auto cs_index = 1;
            auto cs_value = GetScaleMax();
            cs_target.set_Item(cs_index, cs_value);
        }
        return getScaleRange_tmp;
    }
}

// M:form.SoccerForm.GetScaleMin
pls::cs::Int32 SoccerForm::GetScaleMin() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetScaleMin", game);
    {
        if (require(view_)->GetGameWidth() > 240) {
            return 75;
        }
        return 60;
    }
}

// M:form.SoccerForm.GetScaleMax
pls::cs::Int32 SoccerForm::GetScaleMax() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetScaleMax", game);
    {
        return 200;
    }
}

// M:form.SoccerForm.SetScale(System.Int32)
void SoccerForm::SetScale(pls::cs::Int32 scale) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.SetScale(System.Int32)", game);
    {
        IntArray scaleRange = GetScaleRange();
        scale = main::AppData::Clamp(scale, scaleRange[0], scaleRange[1]);
        if (scale == scale_) {
            return;
        }
        {
            pls::cs::Int32 gameWidth = GetGameWidth();
            pls::cs::Int32 gameHeight = GetGameHeight();
            scale_ = scale;
            ResetOffscreen();
        }
    }
}

// M:form.SoccerForm.GetGameWidth
pls::cs::Int32 SoccerForm::GetGameWidth() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetGameWidth", game);
    {
        {
            auto cs_left_129 = (([&]() -> pls::cs::Int32 {
                                   auto cs_left_129 = require(view_)->GetGameWidth();
                                   auto cs_right_129 = SoccerForm::VIEW_X();
                                   return cs_left_129 - cs_right_129;
                               }())) *
                               100;
            auto cs_right_129 = scale_;
            return cs_left_129 / cs_right_129;
        }
    }
}

// M:form.SoccerForm.GetGameHeight
pls::cs::Int32 SoccerForm::GetGameHeight() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetGameHeight", game);
    {
        {
            auto cs_left_130 = (([&]() -> pls::cs::Int32 {
                                   auto cs_left_130 = require(view_)->GetGameHeight();
                                   auto cs_right_130 = SoccerForm::VIEW_Y();
                                   return cs_left_130 - cs_right_130;
                               }())) *
                               100;
            auto cs_right_130 = scale_;
            return cs_left_130 / cs_right_130;
        }
    }
}

// M:form.SoccerForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t SoccerForm::GetTouchValue(std::int32_t type_raw, std::int32_t index_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 index = index_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetTouchValue(System.Int32,System.Int32)", game);
    {
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        switch (type) {
        case 131072: {
            return select_;
        }
        case 262144: {
            if (state_ == 6) {
                return require(udat_)->scrollValue_;
            }
            return scrollValue_;
        }
        default: {
            return MyFormBase::GetTouchValue(type, index);
        }
        }
    }
}

// M:form.SoccerForm.SetTouchValue(System.Int32,System.Int32)
void SoccerForm::SetTouchValue(std::int32_t type_raw, std::int32_t value_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 value = value_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.SetTouchValue(System.Int32,System.Int32)", game);
    {
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        switch (type) {
        case 131072: {
            select_ = value;
            break;
        }
        case 262144: {
            scrollValue_ = value;
            break;
        }
        default: {
            MyFormBase::SetTouchValue(type, value);
            break;
        }
        }
    }
}

// M:form.SoccerForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool SoccerForm::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.OnTouchEvent(kairo.unity.surface.TouchEvent)",
                     game);
    {
        if (require(require(e)->component)->id == 17) {
            OnTouchCamera(require(e)->type, require(require(e)->component)->value, e);
            return false;
        }
        return true;
    }
}

// M:form.SoccerForm.OnTouchCamera(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)
void SoccerForm::OnTouchCamera(pls::cs::Int32 type, pls::cs::Int32 v,
                               pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.SoccerForm.OnTouchCamera(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)", game);
    {
        pls::cs::Single num = require(e)->dx * 100 / scale_;
        pls::cs::Single num2 = require(e)->dy * 100 / scale_;
        switch (type) {
        case 0: {
            break;
        }
        case 8: {
            break;
        }
        case 5: {
            if (PLS_API(kl_unity_util::FastVector_2_Size(require(touchCameraPoint_))) == 0) {
            }
            break;
        }
        case 1: {
            if (PLS_API(kl_unity_util::FastVector_2_Size(require(touchCameraPoint_))) > 0 &&
                touchDragCamera_) {
                IntArray array = pls::cs::unbox<IntArray>(
                    PLS_API(kl_unity_util::FastVector_2_FirstElement(require(touchCameraPoint_))));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = pls::cs::to_int32(num) - array[0];
                    pls::cs::Single cs_arg2 = pls::cs::to_int32(num2) - array[1];
                    require(touchCameraSpeed_)->Set(cs_arg0, 0.0f, cs_arg2);
                }()));
                PLS_API(require(touchCameraDecimal_)->Set(0.0f, 0.0f, 0.0f));
            }
            break;
        }
        case 12: {
            {
                touchBuildDrag_ = false;
                pinchScaleValue_ = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = pinchScaleValue_ + require(e)->pinch;
                    pls::cs::Int32 cs_arg1 = GetScaleMin();
                    pls::cs::Int32 cs_arg2 = GetScaleMax() + 40;
                    return main::AppData::Clamp(cs_arg0, cs_arg1, cs_arg2);
                }());
                pls::cs::Int32 num3 = pinchScaleValue_;
                if (num3 > 100) {
                    num3 = main::AppData::ClampMin(num3 - 40, 100);
                }
                SetScale(num3);
                touchDragCamera_ = false;
                break;
            }
        }
        }
    }
}

// M:form.SoccerForm.GetHashCode
std::int32_t SoccerForm::GetHashCode() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SoccerForm.GetHashCode", game);
    {
        return PLS_API(([&]() {
            auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));
            return require(cs_receiver)->pls::cs::Object::GetHashCode();
        }()));
    }
}
} // namespace form
}
