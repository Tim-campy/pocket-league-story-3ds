// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.FanActData.hpp"
#include "data.FanBonusData.hpp"
#include "data.FormationData.hpp"
#include "data.LeagueData.hpp"
#include "data.PlayerData.hpp"
#include "data.QuestMatchData.hpp"
#include "data.SponsorData.hpp"
#include "data.SupervisorData.hpp"
#include "data.TeamData.hpp"
#include "data.TenantData.hpp"
#include "data.TradeData.hpp"
#include "data.TrainingData.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.SoccerForm.hpp"
#include "form.SubForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.MapMain.hpp"
#include "game.Player.hpp"
#include "game.TArea.hpp"
#include "game.TBall.hpp"
#include "game.TGroupArea.hpp"
#include "game.TPlayer.hpp"
#include "game.Team.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.ByteArrayOutputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.util.Language.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using BoolArray = pls::cs::Array<bool>;
using FloatArray = pls::cs::Array<pls::cs::Single>;
using FloatArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Single>>;
using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;
using LongArray = pls::cs::Array<pls::cs::Int64>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;
using IntArray3 = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>;

namespace pls::game {
namespace game {

void UserData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(apdat_, visitor);
    pls::cs::trace_value(canvas_, visitor);
    pls::cs::trace_value(formMan_, visitor);
    pls::cs::trace_value(gm_, visitor);
    pls::cs::trace_value(teams_, visitor);
    pls::cs::trace_value(ball_, visitor);
    pls::cs::trace_value(cpuPlayerDatas_, visitor);
    pls::cs::trace_value(memberPDataist_, visitor);
    pls::cs::trace_value(researchPoint_, visitor);
    pls::cs::trace_value(tpplay_stock, visitor);
    pls::cs::trace_value(tpplay_battleRecode, visitor);
    pls::cs::trace_value(tenants_, visitor);
    pls::cs::trace_value(league_fightCombi_, visitor);
    pls::cs::trace_value(league_fightResult_, visitor);
    pls::cs::trace_value(league_data_, visitor);
    pls::cs::trace_value(league_dispOlder_, visitor);
    pls::cs::trace_value(matchResult_, visitor);
    pls::cs::trace_value(busPos_, visitor);
    pls::cs::trace_value(busV_, visitor);
    pls::cs::trace_value(busGoalPos_, visitor);
    pls::cs::trace_value(busMovePoint_, visitor);
    pls::cs::trace_value(busSDirect, visitor);
    pls::cs::trace_value(busCPos, visitor);
    pls::cs::trace_value(customer_month_, visitor);
    pls::cs::trace_value(fanParam_, visitor);
    pls::cs::trace_value(tp_svisor_, visitor);
    pls::cs::trace_value(records_, visitor);
    pls::cs::trace_value(record_customer, visitor);
    pls::cs::trace_value(tAreas_, visitor);
    pls::cs::trace_value(tPlayers_, visitor);
    pls::cs::trace_value(tBalls_, visitor);
    pls::cs::trace_value(pDataIdOlderList_, visitor);
    pls::cs::trace_value(tModeList_, visitor);
    pls::cs::trace_value(restTPlayers_, visitor);
    pls::cs::trace_value(disp_player, visitor);
    pls::cs::trace_value(moveScreenPX, visitor);
    pls::cs::trace_value(moveScreenPY, visitor);
    pls::cs::trace_value(chMoveP_YOKO, visitor);
    pls::cs::trace_value(chMoveP_TATE, visitor);
    pls::cs::trace_value(temp_testTPlayersId_, visitor);
    pls::cs::trace_value(TALK_SCHARA_ID, visitor);
    pls::cs::trace_value(TALK_SCHARA_NAME, visitor);
    pls::cs::trace_value(TALK_SCHARA_IMGINDEX, visitor);
    pls::cs::trace_value(base_spos, visitor);
    pls::cs::trace_value(temp_collisionData, visitor);
    pls::cs::trace_value(retNextBattleData, visitor);
    pls::cs::trace_value(et_cur, visitor);
    pls::cs::trace_value(editTest_fw, visitor);
    pls::cs::trace_value(editTest_mf, visitor);
    pls::cs::trace_value(editTest_df, visitor);
    pls::cs::trace_value(editTest_gk, visitor);
    pls::cs::trace_value(editTest_team, visitor);
    pls::cs::trace_value(editTest_temp, visitor);
    pls::cs::trace_value(editTest_category, visitor);
    pls::cs::trace_value(editForPos, visitor);
    pls::cs::trace_value(editForPosEnemy, visitor);
    pls::cs::trace_value(EMDM_ANIME_TIME, visitor);
    pls::cs::trace_value(MENU_STR, visitor);
    pls::cs::trace_value(HELP_STR, visitor);
    pls::cs::trace_value(editTest_formation, visitor);
    pls::cs::trace_value(d1, visitor);
    pls::cs::trace_value(d2, visitor);
    pls::cs::trace_value(CR_COLOR, visitor);
    pls::cs::trace_value(tenantList, visitor);
    pls::cs::trace_value(MENUGRAPH_POINTPOS, visitor);
    pls::cs::trace_value(MENUGRAPH_OFF, visitor);
    pls::cs::trace_value(playerParam1, visitor);
    pls::cs::trace_value(playerParam2, visitor);
    pls::cs::trace_value(clear_point, visitor);
}

static FloatArray2 UserData_COLLISION_DATA_storage{};

static pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>> UserData_COLLISION_GPOS_storage{};

static IntArray3 UserData_COLLISION_SPOS_storage{};

static StringArray2 UserData_CPOINT_STR_storage{};

static pls::cs::Int32 UserData_DEBUG_DISPFPS_storage{};

static pls::cs::Int32 UserData_DEBUG_MEMBERPARAM_DISP_storage{};

static pls::cs::Int32 UserData_DEBUG_SALLARY_MAX_storage{};

static IntArray2 UserData_EDIT_POS_ENE_FOR_storage{};

static IntArray2 UserData_EDIT_POS_ENE_HELP_storage{};

static IntArray2 UserData_EDIT_POS_ENE_MENU_storage{};

static IntArray2 UserData_EDIT_POS_FOR_ENE_storage{};

static IntArray2 UserData_EDIT_POS_FOR_F_storage{};

static IntArray2 UserData_EDIT_POS_FOR_M_storage{};

static IntArray2 UserData_EDIT_POS_MENU_storage{};

static IntArray2 UserData_EDIT_POS_MENU_ENE_storage{};

static IntArray2 UserData_EDIT_POS_MENU_F_storage{};

static IntArray2 UserData_EDIT_POS_MENU_M_storage{};

static IntArray2 UserData_EDIT_POS_MENU_SOC_storage{};

static IntArray2 UserData_EDIT_POS_TOPHELP_ENE_storage{};

static IntArray2 UserData_EDIT_POS_TOPHELP_F_storage{};

static IntArray2 UserData_EDIT_POS_TOPHELP_M_storage{};

static IntArray UserData_EDITMEM_PARAM_COLOR_storage{};

static IntArray UserData_EF_COMMENT_storage{};

static IntArray2 UserData_EF_COMMENT_SETTING_storage{};

static StringArray2 UserData_EF_FEELPT_COMMENT__storage{};

static IntArray UserData_EF_VALUE_storage{};

static IntArray UserData_EVA_INIT_storage{};

static pls::cs::Int32 UserData_FLG_CONTROL_DISPPANEL_storage{};

static StringArray UserData_FORMATIONTYPE_STR_storage{};

static StringArray UserData_FPER_STR_storage{};

static IntArray2 UserData_GRAPH_POS_storage{};

static pls::cs::Int32 UserData_HUMAN_DISP_MODE_storage{};

static pls::cs::Ref<UserData> UserData_instance_storage{};

static pls::cs::Int32 UserData_NEGOTIATE_RESULT_storage{};

static IntArray UserData_NEGOTIATE_RESULT_DISPVALUE_storage{};

static IntArray UserData_NEGOTIATE_RESULT_TH_storage{};

static IntArray UserData_NEGOTIATE_RESULT_VALUE_storage{};

static StringArray UserData_POPUP_MEM_storage{};

static StringArray UserData_RANK_NAME_storage{};

static IntArray UserData_RANK_VALUE_storage{};

static StringArray UserData_RECORD_NAME_storage{};

static IntArray UserData_temp_param_storage{};

static IntArray UserData_temp_score_storage{};

static IntArray UserData_temp_scoreSum_storage{};

static pls::cs::Int32 UserData_TEST_3KEYSTOP_storage{};

static pls::cs::Int32 UserData_TEST_VALUE1_storage{};

static pls::cs::Int32 UserData_TEST_VALUE2_storage{};

static pls::cs::Int32 UserData_TEST_VALUE3_storage{};

static IntArray UserData_TMODE_KEEPER_storage{};

static IntArray UserData_TMODE_NONKEEPER_storage{};

static IntArray UserData_UNIFORM_KEEPER_storage{};

static IntArray UserData_WAIT_TIME_storage{};

static IntArray2 UserData_WARPSUB_BATTLESCORE_MINUS_storage{};

static IntArray2 UserData_WARPSUB_BATTLESCORE_PLUS_storage{};

static PLS_NOINLINE void cs_init_75707aa3f1629c85_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(UserData_COLLISION_DATA_storage, visitor);
        pls::cs::trace_value(UserData_COLLISION_GPOS_storage, visitor);
        pls::cs::trace_value(UserData_COLLISION_SPOS_storage, visitor);
        pls::cs::trace_value(UserData_CPOINT_STR_storage, visitor);
        pls::cs::trace_value(UserData_DEBUG_DISPFPS_storage, visitor);
        pls::cs::trace_value(UserData_DEBUG_MEMBERPARAM_DISP_storage, visitor);
        pls::cs::trace_value(UserData_DEBUG_SALLARY_MAX_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_ENE_FOR_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_ENE_HELP_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_ENE_MENU_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_FOR_ENE_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_FOR_F_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_FOR_M_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_MENU_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_MENU_ENE_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_MENU_F_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_MENU_M_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_MENU_SOC_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_TOPHELP_ENE_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_TOPHELP_F_storage, visitor);
        pls::cs::trace_value(UserData_EDIT_POS_TOPHELP_M_storage, visitor);
        pls::cs::trace_value(UserData_EDITMEM_PARAM_COLOR_storage, visitor);
        pls::cs::trace_value(UserData_EF_COMMENT_storage, visitor);
        pls::cs::trace_value(UserData_EF_COMMENT_SETTING_storage, visitor);
        pls::cs::trace_value(UserData_EF_FEELPT_COMMENT__storage, visitor);
        pls::cs::trace_value(UserData_EF_VALUE_storage, visitor);
        pls::cs::trace_value(UserData_EVA_INIT_storage, visitor);
        pls::cs::trace_value(UserData_FLG_CONTROL_DISPPANEL_storage, visitor);
        pls::cs::trace_value(UserData_FORMATIONTYPE_STR_storage, visitor);
        pls::cs::trace_value(UserData_FPER_STR_storage, visitor);
        pls::cs::trace_value(UserData_GRAPH_POS_storage, visitor);
        pls::cs::trace_value(UserData_HUMAN_DISP_MODE_storage, visitor);
        pls::cs::trace_value(UserData_instance_storage, visitor);
        pls::cs::trace_value(UserData_NEGOTIATE_RESULT_storage, visitor);
        pls::cs::trace_value(UserData_NEGOTIATE_RESULT_DISPVALUE_storage, visitor);
        pls::cs::trace_value(UserData_NEGOTIATE_RESULT_TH_storage, visitor);
        pls::cs::trace_value(UserData_NEGOTIATE_RESULT_VALUE_storage, visitor);
        pls::cs::trace_value(UserData_POPUP_MEM_storage, visitor);
        pls::cs::trace_value(UserData_RANK_NAME_storage, visitor);
        pls::cs::trace_value(UserData_RANK_VALUE_storage, visitor);
        pls::cs::trace_value(UserData_RECORD_NAME_storage, visitor);
        pls::cs::trace_value(UserData_temp_param_storage, visitor);
        pls::cs::trace_value(UserData_temp_score_storage, visitor);
        pls::cs::trace_value(UserData_temp_scoreSum_storage, visitor);
        pls::cs::trace_value(UserData_TEST_3KEYSTOP_storage, visitor);
        pls::cs::trace_value(UserData_TEST_VALUE1_storage, visitor);
        pls::cs::trace_value(UserData_TEST_VALUE2_storage, visitor);
        pls::cs::trace_value(UserData_TEST_VALUE3_storage, visitor);
        pls::cs::trace_value(UserData_TMODE_KEEPER_storage, visitor);
        pls::cs::trace_value(UserData_TMODE_NONKEEPER_storage, visitor);
        pls::cs::trace_value(UserData_UNIFORM_KEEPER_storage, visitor);
        pls::cs::trace_value(UserData_WAIT_TIME_storage, visitor);
        pls::cs::trace_value(UserData_WARPSUB_BATTLESCORE_MINUS_storage, visitor);
        pls::cs::trace_value(UserData_WARPSUB_BATTLESCORE_PLUS_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.UserData", flag, []() {
        UserData_EVA_INIT_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.EVA_INIT", [&]() { return IntArray::from({25, 500, 30}); });
        UserData_TMODE_KEEPER_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.TMODE_KEEPER", [&]() { return IntArray::from({0, 1, 2, 3}); });
        UserData_TMODE_NONKEEPER_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.TMODE_NONKEEPER", [&]() { return IntArray::from({0, 1, 2}); });
        UserData_RECORD_NAME_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.RECORD_NAME", [&]() {
                return StringArray::from({literal(u"試合"), literal(u"施設"), literal(u"ｽﾎﾟﾝｻｰ"),
                                          literal(u"給料"), literal(u"その他")});
            });
        UserData_COLLISION_DATA_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.COLLISION_DATA", [&]() {
                return FloatArray2::from({FloatArray::from({-12.0f, 12.0f, 24.0f, 24.0f}),
                                          FloatArray::from({-10.0f, 10.0f, 20.0f, 20.0f}),
                                          FloatArray::from({-50.0f, 50.0f, 100.0f, 100.0f}),
                                          FloatArray::from({-6.0f, 6.0f, 12.0f, 12.0f}),
                                          FloatArray::from({-30.0f, 30.0f, 60.0f, 60.0f}),
                                          FloatArray::from({-3.0f, 3.0f, 6.0f, 6.0f})});
            });
        UserData_TEST_3KEYSTOP_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.TEST_3KEYSTOP", [&]() { return 0; });
        UserData_HUMAN_DISP_MODE_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.HUMAN_DISP_MODE", [&]() { return 0; });
        UserData_RANK_NAME_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.RANK_NAME", [&]() {
                return StringArray::from({literal(u"素人ﾁｰﾑ"), literal(u"初級ﾁｰﾑ"), literal(u"町内会ﾚﾍﾞﾙ"),
                                          literal(u"ｱﾏﾁｭｱﾚﾍﾞﾙ"), literal(u"地方ｸﾗﾌﾞ"), literal(u"ﾌﾟﾛﾚﾍﾞﾙ"),
                                          literal(u"強豪ｸﾗﾌﾞ"), literal(u"世界ﾚﾍﾞﾙ"), literal(u"名門ｸﾗﾌﾞ"),
                                          literal(u"銀河系軍団")});
            });
        UserData_RANK_VALUE_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.RANK_VALUE", [&]() {
                return IntArray::from({25, 55, 90, 120, 200, 350, 450, 550, 650, 1010});
            });
        UserData_UNIFORM_KEEPER_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.UNIFORM_KEEPER", [&]() {
                return IntArray::from({0, 2, 2, 0, 2, 0, 1, 1, 0, 0});
            });
        UserData_FLG_CONTROL_DISPPANEL_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.FLG_CONTROL_DISPPANEL", [&]() { return 0; });
        UserData_TEST_VALUE1_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.TEST_VALUE1", [&]() { return 0; });
        UserData_TEST_VALUE2_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.TEST_VALUE2", [&]() { return 0; });
        UserData_TEST_VALUE3_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.TEST_VALUE3", [&]() { return 0; });
        UserData_DEBUG_MEMBERPARAM_DISP_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.DEBUG_MEMBERPARAM_DISP", [&]() { return 1; });
        UserData_DEBUG_DISPFPS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.DEBUG_DISPFPS", [&]() { return 0; });
        UserData_DEBUG_SALLARY_MAX_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.DEBUG_SALLARY_MAX", [&]() { return 0; });
        UserData_WARPSUB_BATTLESCORE_PLUS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.WARPSUB_BATTLESCORE_PLUS", [&]() {
                return IntArray2::from({IntArray::from({100, 200}), IntArray::from({300, 400}),
                                        IntArray::from({15, 10}), IntArray::from({10, 25}),
                                        IntArray::from({10, 25}), IntArray::from({15, 10})});
            });
        UserData_WARPSUB_BATTLESCORE_MINUS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.WARPSUB_BATTLESCORE_MINUS", [&]() {
                return IntArray2::from({IntArray::from({0, 100}), IntArray::from({200, 300}),
                                        IntArray::from({30, 10}), IntArray::from({10, 15}),
                                        IntArray::from({10, 15}), IntArray::from({30, 10})});
            });
        UserData_temp_score_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.temp_score", [&]() { return IntArray::make(10); });
        UserData_temp_scoreSum_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.temp_scoreSum", [&]() { return IntArray::make(10); });
        UserData_temp_param_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.temp_param", [&]() { return IntArray::make(6); });
        UserData_EDIT_POS_MENU_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_MENU", [&]() {
                return IntArray2::from({IntArray::from({16, 41}), IntArray::from({16, -13})});
            });
        UserData_EDIT_POS_MENU_SOC_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_MENU_SOC", [&]() {
                return IntArray2::from({IntArray::from({16, 28}), IntArray::from({16, -53})});
            });
        UserData_EDIT_POS_MENU_F_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_MENU_F", [&]() {
                return IntArray2::from({IntArray::from({26, 36}), IntArray::from({26, -40})});
            });
        UserData_EDIT_POS_MENU_M_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_MENU_M", [&]() {
                return IntArray2::from({IntArray::from({14, 22}), IntArray::from({14, -90})});
            });
        UserData_EDIT_POS_MENU_ENE_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_MENU_ENE", [&]() {
                return IntArray2::from({IntArray::from({16, 34}), IntArray::from({-204, 34})});
            });
        UserData_EDIT_POS_FOR_F_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_FOR_F", [&]() {
                return IntArray2::from({IntArray::from({13, 90}), IntArray::from({13, 107})});
            });
        UserData_EDIT_POS_FOR_M_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_FOR_M", [&]() {
                return IntArray2::from({IntArray::from({13, 90}), IntArray::from({13, 133})});
            });
        UserData_EDIT_POS_FOR_ENE_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_FOR_ENE", [&]() {
                return IntArray2::from({IntArray::from({13, 90}), IntArray::from({-208, 90})});
            });
        UserData_EDIT_POS_TOPHELP_F_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_TOPHELP_F", [&]() {
                return IntArray2::from({IntArray::from({16, 197}), IntArray::from({16, 208})});
            });
        UserData_EDIT_POS_TOPHELP_M_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_TOPHELP_M", [&]() {
                return IntArray2::from({IntArray::from({16, 197}), IntArray::from({16, 238})});
            });
        UserData_EDIT_POS_TOPHELP_ENE_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_TOPHELP_ENE", [&]() {
                return IntArray2::from({IntArray::from({16, 197}), IntArray::from({-204, 197})});
            });
        UserData_EDIT_POS_ENE_MENU_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_ENE_MENU", [&]() {
                return IntArray2::from({IntArray::from({236, 28}), IntArray::from({16, 28})});
            });
        UserData_EDIT_POS_ENE_FOR_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_ENE_FOR", [&]() {
                return IntArray2::from({IntArray::from({233, 107}), IntArray::from({13, 107})});
            });
        UserData_EDIT_POS_ENE_HELP_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDIT_POS_ENE_HELP", [&]() {
                return IntArray2::from({IntArray::from({236, 208}), IntArray::from({16, 208})});
            });
        UserData_EDITMEM_PARAM_COLOR_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EDITMEM_PARAM_COLOR", [&]() {
                return IntArray::from({pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return pls::kairo::Graphics::GetColorOfRGB(255, 84, 84);
                                       }),
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return pls::kairo::Graphics::GetColorOfRGB(0, 128, 255);
                                       }),
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return pls::kairo::Graphics::GetColorOfRGB(191, 255, 127);
                                       }),
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return pls::kairo::Graphics::GetColorOfRGB(207, 143, 79);
                                       }),
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return pls::kairo::Graphics::GetColorOfRGB(224, 224, 0);
                                       })});
            });
        UserData_FORMATIONTYPE_STR_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.FORMATIONTYPE_STR", [&]() {
                return StringArray::from({literal(u"通常"), literal(u"攻め重視"), literal(u"守り重視")});
            });
        UserData_GRAPH_POS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.GRAPH_POS", [&]() {
                return IntArray2::from({IntArray::from({-7, -28}), IntArray::from({17, -15}),
                                        IntArray::from({10, 10}), IntArray::from({-27, 10}),
                                        IntArray::from({-37, -15})});
            });
        UserData_POPUP_MEM_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.POPUP_MEM", [&]() {
                return StringArray::from({literal(u"維持費 <0>支払いました"),
                                          literal(u"臨時収入<0>ｹﾞｯﾄ"),
                                          literal(u"選手の獲得リストが追加!"),
                                          literal(u"選手の獲得リストが追加!"),
                                          literal(u"<0>選手が加入しました"),
                                          literal(u"<0>に参戦可能です。"),
                                          literal(u"参戦可能なｶｯﾌﾟ戦が増加!"),
                                          literal(u"全選手の経験値が<0>増加!"),
                                          literal(u"全選手のｷｯｸ力が<0>増加!"),
                                          literal(u"全選手のｽﾋﾟｰﾄﾞが<0>増加!"),
                                          literal(u"全選手のﾃｸﾆｯｸが<0>増加!"),
                                          literal(u"全選手のﾎﾞﾃﾞｨが<0>増加!"),
                                          literal(u"全選手のｷｰﾊﾟｰ力が<0>増加!"),
                                          literal(u"全選手のｵｰﾗが<0>増加!"),
                                          literal(u"ﾌｧﾝが<0>人増えました"),
                                          literal(u"ﾌｧﾝが<0>人減りました…"),
                                          literal(u"応援熱が<0>増加!"),
                                          literal(u"応援熱が<0>減少…"),
                                          literal(u"知名度が<0>上がりました"),
                                          literal(u"知名度が<0>下がりました"),
                                          literal(u"ﾁｰﾑ評価が<0>上がりました"),
                                          literal(u"ﾁｰﾑ評価が<0>下がりました"),
                                          literal(u"スポンサー候補が追加!"),
                                          literal(u"特訓 <0>が追加!"),
                                          literal(u"<0>が建設可能です。"),
                                          literal(u"地域活動 <co=0064FF><0></co>を発見"),
                                          literal(u"監督候補が追加!"),
                                          literal(u"<0>と正式契約"),
                                          literal(u"<0>さんLv<1>にｱｯﾌﾟ!"),
                                          literal(u"ﾌｫｰﾒｰｼｮﾝ <0>が追加"),
                                          literal(u"<0>がLv<1>にｱｯﾌﾟ!"),
                                          literal(u"<0>の建設開始!"),
                                          literal(u"<0>の研究開始!"),
                                          literal(u"<0>を実行しました!!"),
                                          literal(u"<0>を実行しました!"),
                                          literal(u"<0>の活動開始!"),
                                          literal(u"今年もよろしくお願いします。"),
                                          literal(u"練習方針を切り替えました。"),
                                          literal(u"施設の強化 <0>が追加!")});
            });
        UserData_NEGOTIATE_RESULT_TH_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.NEGOTIATE_RESULT_TH", [&]() { return IntArray::make(3); });
        UserData_NEGOTIATE_RESULT_VALUE_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.NEGOTIATE_RESULT_VALUE", [&]() { return IntArray::make(3); });
        UserData_NEGOTIATE_RESULT_DISPVALUE_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.NEGOTIATE_RESULT_DISPVALUE", [&]() { return IntArray::make(4); });
        UserData_WAIT_TIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.WAIT_TIME", [&]() { return IntArray::from({15, 50, 85}); });
        UserData_EF_VALUE_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.EF_VALUE", [&]() { return IntArray::make(2); });
        UserData_FPER_STR_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.FPER_STR", [&]() {
                return StringArray::from({literal(u"成功!"), literal(u"あともう少し!"),
                                          literal(u"手ごたえあり"), literal(u"まだまだ"),
                                          literal(u"かなり厳しい…。")});
            });
        UserData_EF_COMMENT_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.UserData.EF_COMMENT", [&]() { return IntArray::make(3); });
        UserData_EF_COMMENT_SETTING_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EF_COMMENT_SETTING", [&]() {
                return pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({3, 2}));
                });
            });
        UserData_EF_FEELPT_COMMENT__storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.EF_FEELPT_COMMENT_", [&]() {
                return StringArray2::from(
                    {StringArray::from(
                         {literal(u"お願いです!"), literal(u"いかがですか"), literal(u"どうでしょう")}),
                     StringArray::from(
                         {literal(u"お願いです!"), literal(u"いかがですか"), literal(u"どうでしょう")})});
            });
        UserData_CPOINT_STR_storage =
            pls::cs::evaluate_type_initializer_field("F:game.UserData.CPOINT_STR", [&]() {
                return StringArray2::from(
                    {StringArray::from({literal(u"累計観客数は…"), literal(u"人")}),
                     StringArray::from({literal(u"全得点数は…"), literal(u"点")}),
                     StringArray::from({literal(u"獲得した全選手のレベル"), literal(u"ﾚﾍﾞﾙ")}),
                     StringArray::from({literal(u"累計勝利数は…"), literal(u"勝")}),
                     StringArray::from({literal(u"ﾁｰﾑ評価は…"), pls::cs::String(u"")}),
                     StringArray::from({literal(u"全ｽﾎﾟﾝｻｰ満足度は…"), pls::cs::String(u"")}),
                     StringArray::from({literal(u"発見したﾌｫｰﾒｰｼｮﾝは…"), literal(u"個")})});
            });
    });
}

void UserData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_75707aa3f1629c85_slow(flag);
}

FloatArray2& UserData::COLLISION_DATA() {
    UserData::ensure_initialized();
    return UserData_COLLISION_DATA_storage;
}

pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>>& UserData::COLLISION_GPOS() {
    UserData::ensure_initialized();
    return UserData_COLLISION_GPOS_storage;
}

IntArray3& UserData::COLLISION_SPOS() {
    UserData::ensure_initialized();
    return UserData_COLLISION_SPOS_storage;
}

StringArray2& UserData::CPOINT_STR() {
    UserData::ensure_initialized();
    return UserData_CPOINT_STR_storage;
}

pls::cs::Int32& UserData::DEBUG_DISPFPS() {
    UserData::ensure_initialized();
    return UserData_DEBUG_DISPFPS_storage;
}

pls::cs::Int32& UserData::DEBUG_MEMBERPARAM_DISP() {
    UserData::ensure_initialized();
    return UserData_DEBUG_MEMBERPARAM_DISP_storage;
}

pls::cs::Int32& UserData::DEBUG_SALLARY_MAX() {
    UserData::ensure_initialized();
    return UserData_DEBUG_SALLARY_MAX_storage;
}

IntArray2& UserData::EDIT_POS_ENE_FOR() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_ENE_FOR_storage;
}

IntArray2& UserData::EDIT_POS_ENE_HELP() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_ENE_HELP_storage;
}

IntArray2& UserData::EDIT_POS_ENE_MENU() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_ENE_MENU_storage;
}

IntArray2& UserData::EDIT_POS_FOR_ENE() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_FOR_ENE_storage;
}

IntArray2& UserData::EDIT_POS_FOR_F() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_FOR_F_storage;
}

IntArray2& UserData::EDIT_POS_FOR_M() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_FOR_M_storage;
}

IntArray2& UserData::EDIT_POS_MENU() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_MENU_storage;
}

IntArray2& UserData::EDIT_POS_MENU_ENE() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_MENU_ENE_storage;
}

IntArray2& UserData::EDIT_POS_MENU_F() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_MENU_F_storage;
}

IntArray2& UserData::EDIT_POS_MENU_M() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_MENU_M_storage;
}

IntArray2& UserData::EDIT_POS_MENU_SOC() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_MENU_SOC_storage;
}

IntArray2& UserData::EDIT_POS_TOPHELP_ENE() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_TOPHELP_ENE_storage;
}

IntArray2& UserData::EDIT_POS_TOPHELP_F() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_TOPHELP_F_storage;
}

IntArray2& UserData::EDIT_POS_TOPHELP_M() {
    UserData::ensure_initialized();
    return UserData_EDIT_POS_TOPHELP_M_storage;
}

IntArray& UserData::EDITMEM_PARAM_COLOR() {
    UserData::ensure_initialized();
    return UserData_EDITMEM_PARAM_COLOR_storage;
}

IntArray& UserData::EF_COMMENT() {
    UserData::ensure_initialized();
    return UserData_EF_COMMENT_storage;
}

IntArray2& UserData::EF_COMMENT_SETTING() {
    UserData::ensure_initialized();
    return UserData_EF_COMMENT_SETTING_storage;
}

StringArray2& UserData::EF_FEELPT_COMMENT_() {
    UserData::ensure_initialized();
    return UserData_EF_FEELPT_COMMENT__storage;
}

IntArray& UserData::EF_VALUE() {
    UserData::ensure_initialized();
    return UserData_EF_VALUE_storage;
}

IntArray& UserData::EVA_INIT() {
    UserData::ensure_initialized();
    return UserData_EVA_INIT_storage;
}

pls::cs::Int32& UserData::FLG_CONTROL_DISPPANEL() {
    UserData::ensure_initialized();
    return UserData_FLG_CONTROL_DISPPANEL_storage;
}

StringArray& UserData::FORMATIONTYPE_STR() {
    UserData::ensure_initialized();
    return UserData_FORMATIONTYPE_STR_storage;
}

StringArray& UserData::FPER_STR() {
    UserData::ensure_initialized();
    return UserData_FPER_STR_storage;
}

IntArray2& UserData::GRAPH_POS() {
    UserData::ensure_initialized();
    return UserData_GRAPH_POS_storage;
}

pls::cs::Int32& UserData::HUMAN_DISP_MODE() {
    UserData::ensure_initialized();
    return UserData_HUMAN_DISP_MODE_storage;
}

pls::cs::Ref<UserData>& UserData::instance() {
    UserData::ensure_initialized();
    return UserData_instance_storage;
}

pls::cs::Int32& UserData::NEGOTIATE_RESULT() {
    UserData::ensure_initialized();
    return UserData_NEGOTIATE_RESULT_storage;
}

IntArray& UserData::NEGOTIATE_RESULT_DISPVALUE() {
    UserData::ensure_initialized();
    return UserData_NEGOTIATE_RESULT_DISPVALUE_storage;
}

IntArray& UserData::NEGOTIATE_RESULT_TH() {
    UserData::ensure_initialized();
    return UserData_NEGOTIATE_RESULT_TH_storage;
}

IntArray& UserData::NEGOTIATE_RESULT_VALUE() {
    UserData::ensure_initialized();
    return UserData_NEGOTIATE_RESULT_VALUE_storage;
}

StringArray& UserData::POPUP_MEM() {
    UserData::ensure_initialized();
    return UserData_POPUP_MEM_storage;
}

StringArray& UserData::RANK_NAME() {
    UserData::ensure_initialized();
    return UserData_RANK_NAME_storage;
}

IntArray& UserData::RANK_VALUE() {
    UserData::ensure_initialized();
    return UserData_RANK_VALUE_storage;
}

StringArray& UserData::RECORD_NAME() {
    UserData::ensure_initialized();
    return UserData_RECORD_NAME_storage;
}

IntArray& UserData::temp_param() {
    UserData::ensure_initialized();
    return UserData_temp_param_storage;
}

IntArray& UserData::temp_score() {
    UserData::ensure_initialized();
    return UserData_temp_score_storage;
}

IntArray& UserData::temp_scoreSum() {
    UserData::ensure_initialized();
    return UserData_temp_scoreSum_storage;
}

pls::cs::Int32& UserData::TEST_3KEYSTOP() {
    UserData::ensure_initialized();
    return UserData_TEST_3KEYSTOP_storage;
}

pls::cs::Int32& UserData::TEST_VALUE1() {
    UserData::ensure_initialized();
    return UserData_TEST_VALUE1_storage;
}

pls::cs::Int32& UserData::TEST_VALUE2() {
    UserData::ensure_initialized();
    return UserData_TEST_VALUE2_storage;
}

pls::cs::Int32& UserData::TEST_VALUE3() {
    UserData::ensure_initialized();
    return UserData_TEST_VALUE3_storage;
}

IntArray& UserData::TMODE_KEEPER() {
    UserData::ensure_initialized();
    return UserData_TMODE_KEEPER_storage;
}

IntArray& UserData::TMODE_NONKEEPER() {
    UserData::ensure_initialized();
    return UserData_TMODE_NONKEEPER_storage;
}

IntArray& UserData::UNIFORM_KEEPER() {
    UserData::ensure_initialized();
    return UserData_UNIFORM_KEEPER_storage;
}

IntArray& UserData::WAIT_TIME() {
    UserData::ensure_initialized();
    return UserData_WAIT_TIME_storage;
}

IntArray2& UserData::WARPSUB_BATTLESCORE_MINUS() {
    UserData::ensure_initialized();
    return UserData_WARPSUB_BATTLESCORE_MINUS_storage;
}

IntArray2& UserData::WARPSUB_BATTLESCORE_PLUS() {
    UserData::ensure_initialized();
    return UserData_WARPSUB_BATTLESCORE_PLUS_storage;
}

void UserData::create_init(pls::cs::Ref<UserData> self) {
    UserData::ensure_initialized();
    self->cpuPlayerDatas_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<pls::cs::Ref<data::PlayerData>>>>(
            IntArray::from({2, 11}));
    });
    self->memberPDataist_ = kl_java_util::Vector::create();
    self->tpplay_stock = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({15, 9}));
    });
    self->tpplay_battleRecode = kl_java_util::Vector::create();
    self->matchResult_ = IntArray::make(3);
    self->busSDirect = IntArray::make(2);
    self->busCPos = IntArray::make(2);
    self->customer_month_ = IntArray::make(12);
    self->records_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<IntArray3>(IntArray::from({12, 5, 2}));
    });
    self->record_customer = kl_java_util::Vector::create();
    self->moveScreenPX = kl_java_util::Vector::create();
    self->moveScreenPY = kl_java_util::Vector::create();
    self->chMoveP_YOKO = kl_java_util::Vector::create();
    self->chMoveP_TATE = kl_java_util::Vector::create();
    self->base_spos = IntArray::make(2);
    self->temp_collisionData = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({10, 4}));
    });
    self->retNextBattleData = IntArray::make(2);
    self->et_cur = IntArray::make(7);
    self->editTest_fw = kl_java_util::Vector::create();
    self->editTest_mf = kl_java_util::Vector::create();
    self->editTest_df = kl_java_util::Vector::create();
    self->editTest_gk = kl_java_util::Vector::create();
    self->editTest_temp = kl_java_util::Vector::create();
    self->editTest_category = kl_java_util::Vector::create();
    self->editForPos = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({11, 3}));
    });
    self->editForPosEnemy = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({11, 3}));
    });
    self->EMDM_ANIME_TIME = IntArray::from({4, 49});
    self->MENU_STR = StringArray::from({literal(u"ﾌｫｰﾒｰｼｮﾝ"), literal(u"試合ﾒﾝﾊﾞｰ"), literal(u"ﾒﾝﾊﾞｰ情報")});
    self->HELP_STR =
        StringArray::from({literal(u"ﾌｫｰﾒｰｼｮﾝを変更します。"), literal(u"試合のﾒﾝﾊﾞｰを変更します。"),
                           literal(u"選手情報です。"), literal(u"監督情報です。"),
                           literal(u"選手を獲得します。"), pls::cs::String(u"")});
    self->editTest_formation = kl_java_util::Vector::create();
    self->d1 = IntArray::make(2);
    self->d2 = IntArray::make(2);
    self->CR_COLOR = IntArray::from({pls::diagnostic::api_call([&]() -> decltype(auto) {
                                         return pls::kairo::Graphics::GetColorOfRGB(255, 164, 0);
                                     }),
                                     pls::diagnostic::api_call([&]() -> decltype(auto) {
                                         return pls::kairo::Graphics::GetColorOfRGB(255, 206, 16);
                                     }),
                                     pls::diagnostic::api_call([&]() -> decltype(auto) {
                                         return pls::kairo::Graphics::GetColorOfRGB(255, 248, 64);
                                     }),
                                     pls::diagnostic::api_call([&]() -> decltype(auto) {
                                         return pls::kairo::Graphics::GetColorOfRGB(255, 206, 16);
                                     })});
    self->tenantList = kl_java_util::Vector::create();
    self->MENUGRAPH_POINTPOS = IntArray2::from(
        {IntArray::from({0, -16}),
         IntArray::from({pls::cs::to_int32((16.0 * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return kl_lang::JMath::Cos(0.3141592653589793);
                                            }))),
                         -pls::cs::to_int32((16.0 * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                 return kl_lang::JMath::Sin(0.3141592653589793);
                                             })))}),
         IntArray::from({pls::cs::to_int32((16.0 * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return kl_lang::JMath::Cos(-0.9424777960769379);
                                            }))),
                         -pls::cs::to_int32((16.0 * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                 return kl_lang::JMath::Sin(-0.9424777960769379);
                                             })))}),
         IntArray::from({pls::cs::to_int32((16.0 * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return kl_lang::JMath::Cos(-2.199114857512855);
                                            }))),
                         -pls::cs::to_int32((16.0 * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                 return kl_lang::JMath::Sin(-2.199114857512855);
                                             })))}),
         IntArray::from({pls::cs::to_int32((16.0 * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return kl_lang::JMath::Cos(-3.455751918948773);
                                            }))),
                         -pls::cs::to_int32((16.0 * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                 return kl_lang::JMath::Sin(-3.455751918948773);
                                             })))}),
         IntArray::make(2)});
    self->MENUGRAPH_OFF = IntArray2::from(
        {IntArray::from({0, -1}), IntArray::from({1, 0}), IntArray::from({0, 1}), IntArray::from({-1, 0})});
    self->playerParam1 = IntArray::make(5);
    self->playerParam2 = IntArray::make(5);
    self->clear_point = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<pls::cs::Array<LongArray>>(IntArray::from({7, 2}));
    });
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.#ctor", game);
    {
        self->Init();
    }
}

// M:game.UserData.#ctor
pls::cs::Ref<UserData> UserData::create() {
    UserData::ensure_initialized();
    auto self = pls::cs::make_ref<UserData>();
    UserData::create_init(self);
    return self;
}

// M:game.UserData.GetInstance
pls::cs::Ref<UserData> UserData::GetInstance() {
    UserData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetInstance", game);
    {
        if (is_null(UserData::instance())) {
            UserData::instance() = UserData::create();
        }
        return UserData::instance();
    }
}

// M:game.UserData.PrintOut
void UserData::PrintOut() {
    UserData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.PrintOut", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::Log::Info(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(
                                pls::cs::String::concat(literal(u"VALUE1="),
                                                        integer_string(UserData::TEST_VALUE1())),
                                literal(u", VALUE2=")),
                            integer_string(UserData::TEST_VALUE2())),
                        literal(u", VALUE3 = ")),
                    integer_string(UserData::TEST_VALUE3())),
                pls::cs::Ref<pls::cs::ExceptionObject>{});
        });
    }
}

// M:game.UserData.Update_45v1
void UserData::Update_45v1() {
    UserData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Update_45v1", game);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(pls::diagnostic::api_call(
                                   [&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); }))
                    ->CheckKeyRepeat(16);
            })) {
            --UserData::TEST_VALUE1();
        }
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(pls::diagnostic::api_call(
                                   [&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); }))
                    ->CheckKeyRepeat(32);
            })) {
            ++UserData::TEST_VALUE1();
        }
    }
}

// M:game.UserData.Update_78v2
void UserData::Update_78v2() {
    UserData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Update_78v2", game);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(pls::diagnostic::api_call(
                                   [&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); }))
                    ->CheckKeyRepeat(128);
            })) {
            --UserData::TEST_VALUE2();
        }
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(pls::diagnostic::api_call(
                                   [&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); }))
                    ->CheckKeyRepeat(256);
            })) {
            ++UserData::TEST_VALUE2();
        }
    }
}

// M:game.UserData.Update_12v3
void UserData::Update_12v3() {
    UserData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Update_12v3", game);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(pls::diagnostic::api_call(
                                   [&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); }))
                    ->CheckKeyRepeat(2);
            })) {
            --UserData::TEST_VALUE3();
        }
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(pls::diagnostic::api_call(
                                   [&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); }))
                    ->CheckKeyRepeat(4);
            })) {
            ++UserData::TEST_VALUE3();
        }
    }
}

// M:game.UserData.Serialize(java.io.OutputStream)
void UserData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Serialize(java.io.OutputStream)", game);
    {
        data::TrainingData::ensure_initialized();

        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os,
                                                         pls::cs::cast_integral<std::int16_t>(teamEvaRank_));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, ticketPrice_); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(selectFormationId_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(selectFormationType_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(selectSupervisorId_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(selectUniform_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(selectLeagueId_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os,
                                                         pls::cs::cast_integral<std::int16_t>(selectQmId_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(selectTrainingPolicy_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(battleQmIndex_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(matchInfoJoin_));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, eventActFlg_); });
        for (pls::cs::Int32 i = 0; i < data::TrainingData::TRA_PLAYER().length(); ++i) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteShort(
                    os, pls::cs::cast_integral<std::int16_t>(data::TrainingData::TRA_PLAYER()[i]));
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(data::TrainingData::TRA_SELECT_TRA()));
        });
        for (pls::cs::Int32 j = 0; j < researchPoint_.length(); ++j) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteShort(
                    os, pls::cs::cast_integral<std::int16_t>(researchPoint_[j]));
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(memberPDataist_));
                })));
        });
        for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(memberPDataist_));
                                   });
             ++k) {
            pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(memberPDataist_), k);
                }));
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteShort(
                    os, pls::cs::cast_integral<std::int16_t>(require(playerData)->id_));
            });
        }
        for (pls::cs::Int32 l = 0; l < tpplay_stock.length(); ++l) {
            for (pls::cs::Int32 m = 0; m < tpplay_stock[l].length(); ++m) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::StreamUtil::WriteInt(os, tpplay_stock[l][m]);
                });
            }
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, tpplay_battleNum); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                           return kl_java_util::Vector_2_Size(
                                                               require(tpplay_battleRecode));
                                                       }));
        });
        for (pls::cs::Int32 n = 0; n < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(tpplay_battleRecode));
                                   });
             ++n) {
            IntArray array = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_ElementAt(require(tpplay_battleRecode), n);
            }));
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, array[0]); });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, array[1]); });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(matchInfoWeek_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(matchFlgVictory_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os,
                                                         pls::cs::cast_integral<std::int16_t>(league_setu_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(league_teamNum_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(league_data_.length()));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(league_data_[0].length()));
        });
        for (pls::cs::Int32 num = 0; num < league_data_.length(); ++num) {
            for (pls::cs::Int32 num2 = 0; num2 < league_data_[num].length(); ++num2) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::StreamUtil::WriteInt(os, league_data_[num][num2]);
                });
            }
        }
        for (pls::cs::Int32 num3 = 0; num3 < league_dispOlder_.length(); ++num3) {
            for (pls::cs::Int32 num4 = 0; num4 < league_dispOlder_[num3].length(); ++num4) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::StreamUtil::WriteInt(os, league_dispOlder_[num3][num4]);
                });
            }
        }
        for (pls::cs::Int32 num5 = 0; num5 < matchResult_.length(); ++num5) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteInt(os, matchResult_[num5]);
            });
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, matchGetGoalTotal_); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, busState_); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteVector3D(os, busPos_); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteVector3D(os, busV_); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteVector3D(os, busGoalPos_); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(busMovePoint_));
                })));
        });
        for (pls::cs::Int32 num6 = 0; num6 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                          return kl_java_util::Vector_2_Size(require(busMovePoint_));
                                      });
             ++num6) {
            pls::cs::Ref<kl_util3d::Vector3D> value = pls::cs::unbox<pls::cs::Ref<kl_util3d::Vector3D>>(
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(busMovePoint_), num6);
                }));
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteVector3D(os, value); });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os,
                                                         pls::cs::cast_integral<std::int16_t>(busDirect_));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, busSDirect[0]); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, busSDirect[1]); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, busCPos[0]); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, busCPos[1]); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, busCnt); });
        for (pls::cs::Int32 num7 = 0; num7 < fanParam_.length(); ++num7) {
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, fanParam_[num7]); });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteInt(os, game_winConsecutive_);
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteLong(os, customer_total_); });
        for (pls::cs::Int32 num8 = 0; num8 < customer_month_.length(); ++num8) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteInt(os, customer_month_[num8]);
            });
        }
        require(tp_svisor_)->Serialize(os);
        for (pls::cs::Int32 num9 = 0; num9 < records_.length(); ++num9) {
            for (pls::cs::Int32 num10 = 0; num10 < records_[num9].length(); ++num10) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::StreamUtil::WriteInt(os, records_[num9][num10][0]);
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::StreamUtil::WriteInt(os, records_[num9][num10][1]);
                });
            }
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                           return kl_java_util::Vector_2_Size(
                                                               require(record_customer));
                                                       }));
        });
        for (pls::cs::Int32 num11 = 0; num11 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(record_customer));
                                       });
             ++num11) {
            pls::cs::Ref<kl_lang::JInteger> jInteger = pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(record_customer), num11);
                }));
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteInt(os,
                                                           pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                               return require(jInteger)->IntValue();
                                                           }));
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os,
                                                         pls::cs::cast_integral<std::int16_t>(tAreaRootNum_));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(tAreaLv_));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, tModeList_.length()); });
        if (tModeList_.length() > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteInt(os, tModeList_[0].length());
            });
        } else {
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, 0); });
        }
        for (pls::cs::Int32 num12 = 0; num12 < tModeList_.length(); ++num12) {
            for (pls::cs::Int32 num13 = 0; num13 < tModeList_[num12].length(); ++num13) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::StreamUtil::WriteInt(os, tModeList_[num12][num13]);
                });
            }
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, tAreas_.length()); });
        if (tModeList_.length() > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteInt(os, tAreas_[0].length());
            });
        } else {
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, 0); });
        }
        for (pls::cs::Int32 num14 = 0; num14 < tAreas_.length(); ++num14) {
            for (pls::cs::Int32 num15 = 0; num15 < tAreas_[num14].length(); ++num15) {
                require(tAreas_[num14].get_Item(num15))->Serialize(os);
            }
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, tPlayers_.length()); });
        for (pls::cs::Int32 num16 = 0; num16 < tPlayers_.length(); ++num16) {
            require(tPlayers_.get_Item(num16))->Serialize(os);
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, tBalls_.length()); });
        for (pls::cs::Int32 num17 = 0; num17 < tBalls_.length(); ++num17) {
            require(tBalls_.get_Item(num17))->Serialize(os);
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteInt(os, pDataIdOlderList_.length());
        });
        for (pls::cs::Int32 num18 = 0; num18 < pDataIdOlderList_.length(); ++num18) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteInt(os, pDataIdOlderList_[num18]);
            });
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, save_tAreaRootNum_); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, trainig_appearWait); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                           return kl_java_util::Vector_2_Size(
                                                               require(restTPlayers_));
                                                       }));
        });
        for (pls::cs::Int32 num19 = 0; num19 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(restTPlayers_));
                                       });
             ++num19) {
            pls::cs::Ref<TPlayer> tPlayer =
                pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(restTPlayers_), num19);
                }));
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteInt(os, require(tPlayer)->trainingId_[0]);
            });
        }
    }
}

// M:game.UserData.Deserialize(java.io.InputStream)
void UserData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Deserialize(java.io.InputStream)", game);
    {
        data::TrainingData::ensure_initialized();

        teamEvaRank_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        ticketPrice_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        selectFormationId_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        selectFormationType_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        selectSupervisorId_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        selectUniform_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        selectLeagueId_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        selectQmId_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        selectTrainingPolicy_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        battleQmIndex_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        matchInfoJoin_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        eventActFlg_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        for (pls::cs::Int32 i = 0; i < data::TrainingData::TRA_PLAYER().length(); ++i) {
            {
                auto cs_target = data::TrainingData::TRA_PLAYER();
                auto cs_index = i;
                auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        data::TrainingData::TRA_SELECT_TRA() =
            pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        for (pls::cs::Int32 j = 0; j < researchPoint_.length(); ++j) {
            {
                auto cs_target = researchPoint_;
                auto cs_index = j;
                auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        memberPDataist_ = kl_java_util::Vector::create();
        pls::cs::Int32 num = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        for (pls::cs::Int32 k = 0; k < num; ++k) {
            auto cs_array_248 = require(apdat_)->pData_;
            auto cs_index_248 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); });
            pls::cs::Ref<data::PlayerData> obj = cs_array_248.get_Item(cs_index_248);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(memberPDataist_), pls::cs::box(obj));
            });
        }
        for (pls::cs::Int32 l = 0; l < tpplay_stock.length(); ++l) {
            for (pls::cs::Int32 m = 0; m < tpplay_stock[l].length(); ++m) {
                {
                    auto cs_target = tpplay_stock[l];
                    auto cs_index = m;
                    auto cs_value = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        tpplay_battleNum = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        tpplay_battleRecode = kl_java_util::Vector::create();
        pls::cs::Int32 num2 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        for (pls::cs::Int32 n = 0; n < num2; ++n) {
            IntArray obj2 = IntArray::make(2);
            obj2[0] = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
            obj2[1] = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(tpplay_battleRecode), pls::cs::box(obj2));
            });
        }
        League_init();
        matchInfoWeek_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        matchFlgVictory_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        league_setu_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        league_teamNum_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        pls::cs::Int32 num3 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        pls::cs::Int32 num4 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        league_data_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({num3, num4}));
        });
        for (pls::cs::Int32 num5 = 0; num5 < league_data_.length(); ++num5) {
            for (pls::cs::Int32 num6 = 0; num6 < league_data_[num5].length(); ++num6) {
                {
                    auto cs_target = league_data_[num5];
                    auto cs_index = num6;
                    auto cs_value = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        league_dispOlder_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({num3, 3}));
        });
        for (pls::cs::Int32 num7 = 0; num7 < league_dispOlder_.length(); ++num7) {
            for (pls::cs::Int32 num8 = 0; num8 < league_dispOlder_[num7].length(); ++num8) {
                {
                    auto cs_target = league_dispOlder_[num7];
                    auto cs_index = num8;
                    auto cs_value = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        for (pls::cs::Int32 num9 = 0; num9 < matchResult_.length(); ++num9) {
            {
                auto cs_target = matchResult_;
                auto cs_index = num9;
                auto cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        matchGetGoalTotal_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        busState_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        busPos_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadVector3D(stream); });
        busV_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadVector3D(stream); });
        busGoalPos_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadVector3D(stream); });
        busMovePoint_ = kl_java_util::Vector::create();
        pls::cs::Int32 num10 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        for (pls::cs::Int32 num11 = 0; num11 < num10; ++num11) {
            pls::cs::Ref<kl_util3d::Vector3D> obj3 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadVector3D(stream); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(busMovePoint_), pls::cs::box(obj3));
            });
        }
        busDirect_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        {
            auto cs_target = busSDirect;
            auto cs_index = 0;
            auto cs_value = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = busSDirect;
            auto cs_index = 1;
            auto cs_value = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = busCPos;
            auto cs_index = 0;
            auto cs_value = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = busCPos;
            auto cs_index = 1;
            auto cs_value = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
            cs_target.set_Item(cs_index, cs_value);
        }
        busCnt = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        fanParam_ = IntArray::make(3);
        for (pls::cs::Int32 num12 = 0; num12 < fanParam_.length(); ++num12) {
            {
                auto cs_target = fanParam_;
                auto cs_index = num12;
                auto cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        game_winConsecutive_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        customer_total_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadLong(stream); });
        for (pls::cs::Int32 num13 = 0; num13 < customer_month_.length(); ++num13) {
            {
                auto cs_target = customer_month_;
                auto cs_index = num13;
                auto cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        tp_svisor_ = TPlayer::create(2);
        require(tp_svisor_)->Init_training(0, 0);
        require(tp_svisor_)->Deserialize(stream);
        {
            auto cs_receiver = require(apdat_)->pData_.get_Item(0);
            pls::cs::Ref<Player> cs_arg0 = tp_svisor_;
            require(cs_receiver)->SetGameData(cs_arg0);
        }
        for (pls::cs::Int32 num14 = 0; num14 < records_.length(); ++num14) {
            for (pls::cs::Int32 num15 = 0; num15 < records_[num14].length(); ++num15) {
                {
                    auto cs_target = records_[num14][num15];
                    auto cs_index = 0;
                    auto cs_value = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                    cs_target.set_Item(cs_index, cs_value);
                }
                {
                    auto cs_target = records_[num14][num15];
                    auto cs_index = 1;
                    auto cs_value = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        pls::cs::Int32 num16 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        record_customer = kl_java_util::Vector::create();
        for (pls::cs::Int32 num17 = 0; num17 < num16; ++num17) {
            pls::cs::Int32 value = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    auto cs_receiver = record_customer;
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(kl_lang::JInteger::create(value));
                    kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                }());
            });
        }
        tAreaRootNum_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        tAreaLv_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        pls::cs::Int32 num18 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        pls::cs::Int32 num19 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        tModeList_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({num18, num19}));
        });
        for (pls::cs::Int32 num20 = 0; num20 < tModeList_.length(); ++num20) {
            for (pls::cs::Int32 num21 = 0; num21 < tModeList_[num20].length(); ++num21) {
                {
                    auto cs_target = tModeList_[num20];
                    auto cs_index = num21;
                    auto cs_value = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        pls::cs::Int32 num22 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        pls::cs::Int32 num23 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        tAreas_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<pls::cs::Ref<TArea>>>>(
                IntArray::from({num22, num23}));
        });
        for (pls::cs::Int32 num24 = 0; num24 < tAreas_.length(); ++num24) {
            for (pls::cs::Int32 num25 = 0; num25 < tAreas_[num24].length(); ++num25) {
                {
                    auto cs_target = tAreas_[num24];
                    auto cs_index = num25;
                    auto cs_value = TArea::create();
                    cs_target.set_Item(cs_index, cs_value);
                }
                require(tAreas_[num24].get_Item(num25))->Init(num24, num25);
                {
                    auto cs_receiver = tAreas_[num24].get_Item(num25);
                    pls::cs::Int32 cs_arg0 = tModeList_[num24][num25];
                    require(cs_receiver)->SetTrainingArea(cs_arg0);
                }
            }
        }
        for (pls::cs::Int32 num26 = 0; num26 < tAreas_.length(); ++num26) {
            for (pls::cs::Int32 num27 = 0; num27 < tAreas_[num26].length(); ++num27) {
                require(tAreas_[num26].get_Item(num27))->Deserialize(stream);
            }
        }
        pls::cs::Int32 num28 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        tPlayers_ = pls::cs::Array<pls::cs::Ref<TPlayer>>::make(num28);
        for (pls::cs::Int32 num29 = 0; num29 < tPlayers_.length(); ++num29) {
            {
                auto cs_target = tPlayers_;
                auto cs_index = num29;
                auto cs_value = TPlayer::create(1);
                cs_target.set_Item(cs_index, cs_value);
            }
            require(tPlayers_.get_Item(num29))->Init_training(0, 0);
            require(tPlayers_.get_Item(num29))->Deserialize(stream);
        }
        pls::cs::Int32 num30 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        tBalls_ = pls::cs::Array<pls::cs::Ref<TBall>>::make(num30);
        for (pls::cs::Int32 num31 = 0; num31 < tBalls_.length(); ++num31) {
            {
                auto cs_target = tBalls_;
                auto cs_index = num31;
                auto cs_value = TBall::create(num31);
                cs_target.set_Item(cs_index, cs_value);
            }
            require(tBalls_.get_Item(num31))->Init();
            require(tBalls_.get_Item(num31))->Deserialize(stream);
        }
        pls::cs::Int32 num32 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        pDataIdOlderList_ = IntArray::make(num32);
        for (pls::cs::Int32 num33 = 0; num33 < pDataIdOlderList_.length(); ++num33) {
            {
                auto cs_target = pDataIdOlderList_;
                auto cs_index = num33;
                auto cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        save_tAreaRootNum_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        trainig_appearWait = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        num32 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        temp_testTPlayersId_ = IntArray::make(num32);
        for (pls::cs::Int32 num34 = 0; num34 < temp_testTPlayersId_.length(); ++num34) {
            {
                auto cs_target = temp_testTPlayersId_;
                auto cs_index = num34;
                auto cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        require(require(apdat_)->mapMain_)->UpdateTenantMapcip();
    }
}

// M:game.UserData.Deserialize2
void UserData::Deserialize2() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Deserialize2", game);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(restTPlayers_));
            }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(restTPlayers_));
            });
        }
        for (pls::cs::Int32 i = 0; i < temp_testTPlayersId_.length(); ++i) {
            pls::cs::Ref<TPlayer> obj = tPlayers_.get_Item(temp_testTPlayersId_[i]);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(restTPlayers_), pls::cs::box(obj));
            });
        }
        for (pls::cs::Int32 j = 0; j < tAreas_.length(); ++j) {
            for (pls::cs::Int32 k = 0; k < tAreas_[j].length(); ++k) {
                require(tAreas_[j].get_Item(k))->Deserialize2();
            }
        }
        for (pls::cs::Int32 l = 0; l < tPlayers_.length(); ++l) {
            require(tPlayers_.get_Item(l))->Deserialize2();
        }
        for (pls::cs::Int32 m = 0; m < tBalls_.length(); ++m) {
            require(tBalls_.get_Item(m))->Deserialize2();
        }
    }
}

// M:game.UserData.Init
void UserData::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Init", game);
    {
        GameManager::ensure_initialized();

        apdat_ = main::AppData::GetInstance();
        canvas_ =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); });
        formMan_ = form::FormManager::GetInstance();
        gm_ = GameManager::GetInstance();
        GameManager::udat_() = this;
        disp_player = Player::create(0);
        researchPoint_ = IntArray::make(4);
        tenants_ = pls::cs::Array<pls::cs::Ref<Tenant>>::make(15);
        for (pls::cs::Int32 i = 0; i < tenants_.length(); ++i) {
            {
                auto cs_target = tenants_;
                auto cs_index = i;
                auto cs_value = Tenant::create(i);
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        busPos_ = kl_util3d::Vector3D::create();
        busV_ = kl_util3d::Vector3D::create();
        busGoalPos_ = kl_util3d::Vector3D::create();
        busMovePoint_ = kl_java_util::Vector::create();
        pls::cs::Ref<GameUtil> gameUtil = GameUtil::create();
        SetCollisionPos();
        Training_init();
    }
}

// M:game.UserData.NewGame
void UserData::NewGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.NewGame", game);
    {
        data::TenantData::ensure_initialized();
        MapMain::ensure_initialized();
        Camera::ensure_initialized();

        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(memberPDataist_));
            }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(memberPDataist_));
            });
        }
        for (pls::cs::Int32 i = 0; i < require(apdat_)->pData_.length(); ++i) {
            pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(i);
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Check(require(playerData)->flag_, 1);
                })) {
                data::PlayerData::Employ(require(playerData)->id_);
                require(playerData)->new_ = false;
            }
        }
        pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
        require(teamData)->AddTeamEva(0);
        ticketPrice_ = 1000;
        selectTrainingPolicy_ = 0;
        {
            auto cs_target = require(apdat_)->tData_.get_Item(0);
            pls::cs::Int32 cs_value = selectUniform_;
            require(cs_target)->bodyImg_ = cs_value;
        }
        {
            auto cs_target = require(apdat_)->tData_.get_Item(0);
            pls::cs::Int32 cs_value = UserData::UNIFORM_KEEPER()[selectUniform_];
            require(cs_target)->keeperImg_ = cs_value;
        }
        {
            auto cs_target = require(apdat_)->tData_.get_Item(0);
            pls::cs::Int32 cs_value = selectUniform_;
            require(cs_target)->uniform_ = cs_value;
        }
        for (pls::cs::Int32 j = 0; j < require(apdat_)->tData_.length(); ++j) {
            if (j == 0) {
                continue;
            }
            pls::cs::Ref<data::TeamData> teamData2 = require(apdat_)->tData_.get_Item(j);
            if (require(teamData2)->uniform_ == selectUniform_) {
                require(teamData2)->bodyImg_ = 8;
                {
                    auto cs_target = teamData2;
                    pls::cs::Int32 cs_value = UserData::UNIFORM_KEEPER()[8];
                    require(cs_target)->keeperImg_ = cs_value;
                }
                require(teamData2)->uniform_ = 8;
            }
        }
        matchInfoJoin_ = 2;
        selectLeagueId_ = 0;
        for (pls::cs::Int32 k = 0; k < require(apdat_)->leagueData_.length(); ++k) {
            pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(k);
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Check(require(leagueData)->flag_, 1);
                })) {
                selectLeagueId_ = k;
                break;
            }
        }
        League_init();
        fanParam_ = IntArray::make(3);
        for (pls::cs::Int32 l = 0; l < fanParam_.length(); ++l) {
            fanParam_[l] = UserData::EVA_INIT()[l];
        }
        for (pls::cs::Int32 m = 0; m < researchPoint_.length(); ++m) {
            AddResearchPoint(m, 10);
        }
        tAreaRootNum_ = 1;
        tAreaLv_ = 0;
        selectQmId_ = -1;
        battleQmIndex_ = 0;
        for (pls::cs::Int32 n = 0; n < tenants_.length(); ++n) {
            {
                auto cs_receiver = tenants_.get_Item(n);
                pls::cs::Int32 cs_arg0 = data::TenantData::TENANT_ROOT()[n];
                require(cs_receiver)->Init(cs_arg0);
            }
            if (data::TenantData::INIT_TENANTID()[n] != -1) {
                {
                    auto cs_receiver = tenants_.get_Item(n);
                    pls::cs::Int32 cs_arg0 = data::TenantData::INIT_TENANTID()[n];
                    require(cs_receiver)->BuildTenant(cs_arg0);
                }
                require(tenants_.get_Item(n))->ChangeState(1);
            }
        }
        for (pls::cs::Int32 num = 0; num < require(apdat_)->formationData_.length(); ++num) {
            require(require(apdat_)->formationData_.get_Item(num))->NewGame();
        }
        for (pls::cs::Int32 num2 = 0; num2 < require(apdat_)->tradeData_.length(); ++num2) {
            require(require(apdat_)->tradeData_.get_Item(num2))->NewGame();
        }
        for (pls::cs::Int32 num3 = 0; num3 < require(apdat_)->sponsorData_.length(); ++num3) {
            require(require(apdat_)->sponsorData_.get_Item(num3))->NewGame();
        }
        for (pls::cs::Int32 num4 = 0; num4 < require(apdat_)->svisorData_.length(); ++num4) {
            require(require(apdat_)->svisorData_.get_Item(num4))->NewGame();
        }
        for (pls::cs::Int32 num5 = 0; num5 < require(apdat_)->qmData_.length(); ++num5) {
            require(require(apdat_)->qmData_.get_Item(num5))->NewGame();
        }
        for (pls::cs::Int32 num6 = 0; num6 < require(apdat_)->trainingData_.length(); ++num6) {
            require(require(apdat_)->trainingData_.get_Item(num6))->NewGame();
        }
        for (pls::cs::Int32 num7 = 0; num7 < require(apdat_)->fanActData_.length(); ++num7) {
            require(require(apdat_)->fanActData_.get_Item(num7))->NewGame();
        }
        for (pls::cs::Int32 num8 = 0; num8 < require(apdat_)->fanBonus_.length(); ++num8) {
            require(require(apdat_)->fanBonus_.get_Item(num8))->NewGame();
        }
        for (pls::cs::Int32 num9 = 0; num9 < require(apdat_)->tenantData_.length(); ++num9) {
            require(require(apdat_)->tenantData_.get_Item(num9))->NewGame();
        }
        for (pls::cs::Int32 num10 = 0; num10 < require(apdat_)->leagueData_.length(); ++num10) {
            require(require(apdat_)->leagueData_.get_Item(num10))->NewGame();
        }
        try {
            ReflectContinueGameData();
        } catch (const pls::cs::Exception& cs_caught_130) {
            auto t = pls::cs::capture_exception(cs_caught_130);
            {
                pls::diagnostic::api_call([&]() -> decltype(auto) { return kl_unity_util::Log::Info(t); });
            }
        }
        data::FormationData::UpdateStamemRole();
        require(require(apdat_)->frmGame_)->ChangeState(0);
        Init_bus();
        require(require(apdat_)->mapMain_)->UpdateTenantMapcip();
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = MapMain::MOVE_POINT().get_Item(3);
            IntArray cs_arg1 = base_spos;
            Camera::ConvertGlobalToScreen(cs_arg0, cs_arg1);
        }
        {
            auto cs_target = Camera::save_pos();
            pls::cs::Single cs_value = base_spos[0];
            require(cs_target)->x_ = cs_value;
        }
        {
            auto cs_target = Camera::save_pos();
            pls::cs::Single cs_value = base_spos[1];
            require(cs_target)->y_ = cs_value;
        }
        {
            auto cs_target = Camera::save_cursorPos();
            pls::cs::Single cs_value = base_spos[0];
            require(cs_target)->x_ = cs_value;
        }
        {
            auto cs_target = Camera::save_cursorPos();
            pls::cs::Single cs_value = base_spos[1];
            require(cs_target)->y_ = cs_value;
        }
        require(require(apdat_)->camera)->SetMapMainBasePos();
        pls::cs::Ref<data::SupervisorData> supervisorData =
            require(apdat_)->svisorData_.get_Item(selectSupervisorId_);
        tp_svisor_ = TPlayer::create(2);
        require(tp_svisor_)->Init_training(0, 0);
        require(tp_svisor_)->faceImg_ = require(supervisorData)->headImg_;
        require(tp_svisor_)->bodyImg_ = require(supervisorData)->bodyImg_;
        require(tp_svisor_)->tData_id_ = 0;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = require(tp_svisor_)->pos_;
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = MapMain::MOVE_POINT().get_Item(8);
                require(cs_receiver)->Set(cs_arg0);
            }());
        });
        require(tp_svisor_)->direct_ = 2;
        require(tp_svisor_)->role_ = 3;
        require(tp_svisor_)->AddCommandSvisorAct();
        require(tp_svisor_)->pData_id_ = 0;
        {
            auto cs_receiver = require(apdat_)->pData_.get_Item(0);
            pls::cs::Ref<Player> cs_arg0 = tp_svisor_;
            require(cs_receiver)->SetGameData(cs_arg0);
        }
    }
}

// M:game.UserData.ProcCommonMethod
void UserData::ProcCommonMethod() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.ProcCommonMethod", game);
    {
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = 0;
        for (pls::cs::Int32 i = 0; i < require(apdat_)->pData_.length(); ++i) {
            pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(i);
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Check(require(playerData)->flag_, 4);
                })) {
                {
                    auto cs_target = cpuPlayerDatas_[0];
                    auto cs_index = num++;
                    auto cs_value = playerData;
                    cs_target.set_Item(cs_index, cs_value);
                }
            } else if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                           return kl_unity_util::BitUtil::Check(require(playerData)->flag_, 8);
                       })) {
                {
                    auto cs_target = cpuPlayerDatas_[1];
                    auto cs_index = num2++;
                    auto cs_value = playerData;
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
    }
}

// M:game.UserData.GetPlayer(System.Int32,System.Int32)
pls::cs::Ref<Player> UserData::GetPlayer(pls::cs::Int32 teamId, pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetPlayer(System.Int32,System.Int32)", game);
    {
        return require(teams_.get_Item(teamId))->players_.get_Item(id);
    }
}

// M:game.UserData.GetTPlayer(System.Int32)
pls::cs::Ref<TPlayer> UserData::GetTPlayer(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetTPlayer(System.Int32)", game);
    {
        return tPlayers_.get_Item(id);
    }
}

// M:game.UserData.GetDispPlayer
pls::cs::Ref<Player> UserData::GetDispPlayer() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetDispPlayer", game);
    {
        return disp_player;
    }
}

// M:game.UserData.SetDispPlayerData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void UserData::SetDispPlayerData(pls::cs::Int32 seb, pls::cs::Int32 bodyImg, pls::cs::Int32 faceImg,
                                 pls::cs::Int32 frame, pls::cs::Int32 direct) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.UserData.SetDispPlayerData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        SetDispPlayerData(seb, bodyImg, faceImg, frame, direct, 3, 0);
    }
}

// M:game.UserData.SetDispPlayerData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void UserData::SetDispPlayerData(pls::cs::Int32 seb, pls::cs::Int32 bodyImg, pls::cs::Int32 faceImg,
                                 pls::cs::Int32 frame, pls::cs::Int32 direct, pls::cs::Int32 role,
                                 pls::cs::Int32 tData_id) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.UserData.SetDispPlayerData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        require(disp_player)->seb_ = seb;
        require(disp_player)->bodyImg_ = bodyImg;
        require(disp_player)->faceImg_ = faceImg;
        require(disp_player)->frame_ = frame;
        require(disp_player)->direct_ = direct;
        require(disp_player)->role_ = role;
        require(disp_player)->tData_id_ = tData_id;
    }
}

// M:game.UserData.DrawDispPlayer(kairo.unity.ui.Graphics,System.Int32,System.Int32)
void UserData::DrawDispPlayer(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.UserData.DrawDispPlayer(kairo.unity.ui.Graphics,System.Int32,System.Int32)",
                     game);
    {
        pls::cs::Int32 layer_id =
            require(disp_player)
                ->SetDrawParam(require(disp_player)->faceImg_, require(disp_player)->bodyImg_,
                               require(disp_player)->seb_, require(disp_player)->frame_);
        require(disp_player)->Draw(g, x, y, layer_id, false);
    }
}

// M:game.UserData.ChTime1
void UserData::ChTime1() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.ChTime1", game);
    {
        chTime1 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JSystem::CurrentTimeMillis(); });
    }
}

// M:game.UserData.ChTime2
void UserData::ChTime2() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.ChTime2", game);
    {
        chTime2 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JSystem::CurrentTimeMillis(); });
    }
}

// M:game.UserData.SetCollisionPos
void UserData::SetCollisionPos() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetCollisionPos", game);
    {
        UserData::COLLISION_GPOS() = pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>>::make(
            UserData::COLLISION_DATA().length());
        UserData::COLLISION_SPOS() = IntArray3::make(UserData::COLLISION_DATA().length());
        for (pls::cs::Int32 i = 0; i < UserData::COLLISION_DATA().length(); ++i) {
            {
                auto cs_target = UserData::COLLISION_GPOS();
                auto cs_index = i;
                auto cs_value = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                    {([&]() -> pls::cs::Ref<kl_util3d::Vector3D> {
                         pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                             auto cs_left = UserData::COLLISION_DATA()[i][0];
                             auto cs_right = UserData::COLLISION_DATA()[i][2] / 2.0f;
                             return cs_left - cs_right;
                         }());
                         pls::cs::Single cs_arg2 = ([&]() -> pls::cs::FloatEval {
                             auto cs_left = UserData::COLLISION_DATA()[i][1];
                             auto cs_right = UserData::COLLISION_DATA()[i][3] / 2.0f;
                             return cs_left + cs_right;
                         }());
                         return kl_util3d::Vector3D::create(cs_arg0, 0.0f, cs_arg2);
                     }()),
                     ([&]() -> pls::cs::Ref<kl_util3d::Vector3D> {
                         pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                             auto cs_left = UserData::COLLISION_DATA()[i][0];
                             auto cs_right = UserData::COLLISION_DATA()[i][2] / 2.0f;
                             return cs_left + cs_right;
                         }());
                         pls::cs::Single cs_arg2 = ([&]() -> pls::cs::FloatEval {
                             auto cs_left = UserData::COLLISION_DATA()[i][1];
                             auto cs_right = UserData::COLLISION_DATA()[i][3] / 2.0f;
                             return cs_left + cs_right;
                         }());
                         return kl_util3d::Vector3D::create(cs_arg0, 0.0f, cs_arg2);
                     }()),
                     ([&]() -> pls::cs::Ref<kl_util3d::Vector3D> {
                         pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                             auto cs_left = UserData::COLLISION_DATA()[i][0];
                             auto cs_right = UserData::COLLISION_DATA()[i][2] / 2.0f;
                             return cs_left + cs_right;
                         }());
                         pls::cs::Single cs_arg2 = ([&]() -> pls::cs::FloatEval {
                             auto cs_left = UserData::COLLISION_DATA()[i][1];
                             auto cs_right = UserData::COLLISION_DATA()[i][3] / 2.0f;
                             return cs_left - cs_right;
                         }());
                         return kl_util3d::Vector3D::create(cs_arg0, 0.0f, cs_arg2);
                     }()),
                     ([&]() -> pls::cs::Ref<kl_util3d::Vector3D> {
                         pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                             auto cs_left = UserData::COLLISION_DATA()[i][0];
                             auto cs_right = UserData::COLLISION_DATA()[i][2] / 2.0f;
                             return cs_left - cs_right;
                         }());
                         pls::cs::Single cs_arg2 = ([&]() -> pls::cs::FloatEval {
                             auto cs_left = UserData::COLLISION_DATA()[i][1];
                             auto cs_right = UserData::COLLISION_DATA()[i][3] / 2.0f;
                             return cs_left - cs_right;
                         }());
                         return kl_util3d::Vector3D::create(cs_arg0, 0.0f, cs_arg2);
                     }())});
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = UserData::COLLISION_SPOS();
                auto cs_index = i;
                auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2}));
                });
                cs_target.set_Item(cs_index, cs_value);
            }
            for (pls::cs::Int32 j = 0; j < UserData::COLLISION_SPOS()[i].length(); ++j) {
                {
                    pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = UserData::COLLISION_GPOS()[i].get_Item(j);
                    IntArray cs_arg1 = UserData::COLLISION_SPOS()[i][j];
                    Camera::ConvertGlobalToScreen(cs_arg0, cs_arg1);
                }
            }
        }
    }
}

// M:game.UserData.GetCollisionData(System.Int32,System.Int32)
IntArray UserData::GetCollisionData(pls::cs::Int32 retIndex, pls::cs::Int32 collisionId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetCollisionData(System.Int32,System.Int32)", game);
    {
        temp_collisionData[retIndex][0] =
            pls::cs::to_int32(require(UserData::COLLISION_GPOS()[collisionId].get_Item(0))->x_);
        temp_collisionData[retIndex][1] =
            pls::cs::to_int32(require(UserData::COLLISION_GPOS()[collisionId].get_Item(0))->z_);
        temp_collisionData[retIndex][2] = pls::cs::to_int32(UserData::COLLISION_DATA()[collisionId][2]);
        temp_collisionData[retIndex][3] = pls::cs::to_int32(UserData::COLLISION_DATA()[collisionId][3]);
        return temp_collisionData[retIndex];
    }
}

// M:game.UserData.League_init
void UserData::League_init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.League_init", game);
    {
        pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(selectLeagueId_);
        matchInfoWeek_ = 0;
        league_setu_ = 0;
        league_teamNum_ = require(leagueData)->matchEnemy_.length();
        league_fightCombi_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({league_teamNum_ / 2, 2}));
        });
        league_fightResult_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({league_teamNum_ / 2, 2}));
        });
        league_data_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({league_teamNum_, 9}));
        });
        league_dispOlder_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({league_teamNum_, 3}));
        });
        for (pls::cs::Int32 i = 0; i < league_dispOlder_.length(); ++i) {
            league_dispOlder_[i][0] = require(leagueData)->matchEnemyNext_[i];
        }
        for (pls::cs::Int32 j = 0; j < league_data_.length(); ++j) {
            pls::cs::Ref<data::TeamData> teamData =
                require(apdat_)->tData_.get_Item(require(leagueData)->matchEnemy_[j]);
            league_data_[j][8] = require(leagueData)->matchEnemy_[j];
            league_data_[j][7] = j + 1;
        }
        SetFightCombi(league_setu_);
    }
}

// M:game.UserData.SetFightCombi(System.Int32)
void UserData::SetFightCombi(pls::cs::Int32 setu) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetFightCombi(System.Int32)", game);
    {
        for (pls::cs::Int32 i = 0; i < league_fightCombi_.length(); ++i) {
            league_fightCombi_[i][0] = i;
            league_fightCombi_[i][1] = league_teamNum_ - 1 - i;
        }
        pls::cs::Int32 num;
        for (pls::cs::Int32 j = 0; j < league_fightCombi_.length(); ++j) {
            if (j != 0) {
                num = league_fightCombi_[j][0] - setu;
                if (num <= 0) {
                    num += league_teamNum_ - 1;
                }
                league_fightCombi_[j][0] = num;
            }
            num = league_fightCombi_[j][1] - setu;
            if (num <= 0) {
                num += league_teamNum_ - 1;
            }
            league_fightCombi_[j][1] = num;
        }
    }
}

// M:game.UserData.GetNextBattleLeagueIndex(System.Int32)
IntArray UserData::GetNextBattleLeagueIndex(pls::cs::Int32 setu) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetNextBattleLeagueIndex(System.Int32)", game);
    {
        if (setu == league_teamNum_ - 1) {
            return IntArray{};
        }
        pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(selectLeagueId_);
        SetFightCombi(setu);
        for (pls::cs::Int32 i = 0; i < league_fightCombi_.length(); ++i) {
            if (require(leagueData)->matchEnemy_[league_fightCombi_[i][0]] == 0) {
                retNextBattleData[0] = league_fightCombi_[i][1];
                retNextBattleData[1] = 0;
                return retNextBattleData;
            }
            if (require(leagueData)->matchEnemy_[league_fightCombi_[i][1]] == 0) {
                retNextBattleData[0] = league_fightCombi_[i][0];
                retNextBattleData[1] = 1;
                return retNextBattleData;
            }
        }
        return IntArray{};
    }
}

// M:game.UserData.GetLeagueData(System.Int32)
IntArray UserData::GetLeagueData(pls::cs::Int32 teamId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetLeagueData(System.Int32)", game);
    {
        pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(selectLeagueId_);
        for (pls::cs::Int32 i = 0; i < require(leagueData)->matchEnemy_.length(); ++i) {
            if (require(leagueData)->matchEnemy_[i] == teamId) {
                return league_data_[i];
            }
        }
        return IntArray{};
    }
}

// M:game.UserData.GetLeagueDataIndex(System.Int32)
pls::cs::Int32 UserData::GetLeagueDataIndex(pls::cs::Int32 teamId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetLeagueDataIndex(System.Int32)", game);
    {
        pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(selectLeagueId_);
        for (pls::cs::Int32 i = 0; i < require(leagueData)->matchEnemy_.length(); ++i) {
            if (require(leagueData)->matchEnemy_[i] == teamId) {
                return i;
            }
        }
        return -1;
    }
}

// M:game.UserData.League_update
bool UserData::League_update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.League_update", game);
    {
        Update_league();
        ++league_setu_;
        if (league_setu_ == league_teamNum_ - 1) {
            League_finish();
            return true;
        }
        return false;
    }
}

// M:game.UserData.League_resetScore
void UserData::League_resetScore() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.League_resetScore", game);
    {
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(memberPDataist_));
                                   });
             ++i) {
            pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(memberPDataist_), i);
                }));
            require(playerData)->game_goalInLeague_ = 0;
        }
        for (pls::cs::Int32 j = 0; j < require(apdat_)->tData_.length(); ++j) {
            pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(j);
            for (pls::cs::Int32 k = 0; k < require(teamData)->goalScore_.length(); ++k) {
                require(teamData)->goalScore_[k] = 0;
            }
        }
    }
}

// M:game.UserData.League_finish
void UserData::League_finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.League_finish", game);
    {
        kl_cfg::Config::ensure_initialized();
        data::FanBonusData::ensure_initialized();

        pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(selectLeagueId_);
        if (league_setu_ == league_teamNum_ - 1) {
            League_resetScore();
            IntArray leagueData2 = GetLeagueData(0);
            if (leagueData2[7] == 1) {
                if (require(leagueData)->trophy_ != 4) {
                    require(apdat_)->ExecuteScript(require(leagueData)->execsScript_, true, pls::cs::String{},
                                                   IntArray{}, 0, 0, -1);
                } else {
                    require(apdat_)->ExecuteScript(require(leagueData)->execsScript2_, true,
                                                   pls::cs::String{}, IntArray{}, 0, 0, -1);
                }
                if (kl_cfg::Config::DEBUG_CMD()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::Log::Info(
                            pls::cs::String::concat(
                                literal(u"■UserData.java league_finish() league_data.trophy_ = "),
                                integer_string(require(leagueData)->trophy_)),
                            pls::cs::Ref<pls::cs::ExceptionObject>{});
                    });
                }
                pls::cs::Ref<data::FanBonusData> fanBonusData = pls::cs::Ref<data::FanBonusData>{};
                if (require(leagueData)->id_ == 0) {
                    fanBonusData = require(apdat_)->fanBonus_.get_Item(data::FanBonusData::FB_LEAGUE_AMA());
                } else if (require(leagueData)->id_ == 1) {
                    fanBonusData = require(apdat_)->fanBonus_.get_Item(data::FanBonusData::FB_LEAGUE_REGI());
                } else if (require(leagueData)->id_ == 2) {
                    fanBonusData = require(apdat_)->fanBonus_.get_Item(data::FanBonusData::FB_LEAGUE_ALL());
                } else if (require(leagueData)->id_ == 3) {
                    fanBonusData = require(apdat_)->fanBonus_.get_Item(data::FanBonusData::FB_LEAGUE_WORLD());
                } else if (require(leagueData)->id_ == 4) {
                    fanBonusData = require(apdat_)->fanBonus_.get_Item(data::FanBonusData::FB_LEAGUE_KAIRO());
                }
                if (!is_null(fanBonusData) && require(fanBonusData)->state_ == 0) {
                    require(fanBonusData)->ChangeState(1);
                    require(fanBonusData)->achiveDay_[0] = require(require(apdat_)->save_)->ints[1];
                    require(fanBonusData)->achiveDay_[1] = require(require(apdat_)->save_)->ints[2];
                    require(fanBonusData)->achiveDay_[2] = require(require(apdat_)->save_)->ints[3];
                }
            } else {
                ([&]() -> pls::cs::Ref<form::SubForm> {
                    auto cs_receiver = apdat_;
                    IntArray2 cs_arg0 = require(leagueData)->execsScript3_;
                    pls::cs::String cs_arg2 = ([&]() {
                        auto cs_left = integer_string(leagueData2[7]);
                        auto cs_right = pls::cs::String(u"");
                        return pls::cs::String::concat(cs_left, cs_right);
                    }());
                    return require(cs_receiver)->ExecuteScript(cs_arg0, true, cs_arg2, IntArray{}, 0, 0, -1);
                }());
            }
            require(leagueData)->SetGetTrophy(1);
            if (leagueData2[7] >= 1 && leagueData2[7] <= 3) {
                if (leagueData2[7] == 1) {
                    require(leagueData)->SetGetTrophy(4);
                } else if (leagueData2[7] == 2) {
                    require(leagueData)->SetGetTrophy(3);
                } else if (leagueData2[7] == 3) {
                    require(leagueData)->SetGetTrophy(2);
                }
            }
            if (kl_cfg::Config::DEBUG_CMD()) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::Log::Info(
                        pls::cs::String::concat(literal(u"■UserData.java league_finish() 最終順位 = "),
                                                integer_string(leagueData2[7])),
                        pls::cs::Ref<pls::cs::ExceptionObject>{});
                });
            }
            {
                auto cs_target = leagueData;
                pls::cs::Int32 cs_value = leagueData2[7];
                require(cs_target)->userPriOlder_ = cs_value;
            }
            for (pls::cs::Int32 i = 0; i < league_data_.length(); ++i) {
                pls::cs::Int32 num = league_data_[i][8];
                pls::cs::Int32 num2 = league_data_[i][7];
                require(leagueData)->matchEnemyNext_[num2 - 1] = num;
            }
            SetMatchInfoJoin(2);
        }
    }
}

// M:game.UserData.Qm_update
void UserData::Qm_update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Qm_update", game);
    {
        ++battleQmIndex_;
        pls::cs::Ref<data::QuestMatchData> questMatchData = require(apdat_)->qmData_.get_Item(selectQmId_);
        require(questMatchData)->SetGetTrophy(1);
        if ([&]() -> bool {
                auto cs_left = require(gm_)->score_[0];
                auto cs_right = require(gm_)->score_[1];
                return cs_left > cs_right;
            }()) {
            if (battleQmIndex_ == require(questMatchData)->matchEnemy_.length()) {
                selectQmId_ = -1;
                require(require(apdat_)->frmGame_)->ChangeState(0);
                if ([&]() -> bool {
                        auto cs_left = require(gm_)->score_[0];
                        auto cs_right = require(gm_)->score_[1];
                        return cs_left > cs_right;
                    }()) {
                    if (require(questMatchData)->trophy_ != 4) {
                        require(apdat_)->ExecuteScript(require(questMatchData)->execsScript_, true,
                                                       pls::cs::String{}, IntArray{}, 0, 0, -1);
                    } else {
                        require(apdat_)->ExecuteScript(require(questMatchData)->execsScript2_, true,
                                                       pls::cs::String{}, IntArray{}, 0, 0, -1);
                    }
                    require(questMatchData)->SetGetTrophy(4);
                }
                SetMatchInfoJoin(2);
            } else {
                require(apdat_)->ExecEvent(134, require(questMatchData)->name_, IntArray{});
            }
        } else if ([&]() -> bool {
                       auto cs_left = require(gm_)->score_[0];
                       auto cs_right = require(gm_)->score_[1];
                       return cs_left == cs_right;
                   }()) {
            require(apdat_)->ExecEvent(135, pls::cs::String{}, IntArray{});
            SetMatchInfoJoin(2);
        } else {
            if (!require(apdat_)->CheckAlreadyEvent(136)) {
                require(apdat_)->ExecEvent(136, pls::cs::String{}, IntArray{});
            } else {
                require(apdat_)->ExecEvent(137, pls::cs::String{}, IntArray{});
            }
            SetMatchInfoJoin(2);
        }
    }
}

// M:game.UserData.Update_league
void UserData::Update_league() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Update_league", game);
    {
        pls::cs::Ref<data::LeagueData> leagueData = require(apdat_)->leagueData_.get_Item(selectLeagueId_);
        SetFightCombi(league_setu_);
        pls::cs::Int32 num5;
        pls::cs::Int32 num6;
        for (pls::cs::Int32 i = 0; i < league_fightCombi_.length(); ++i) {
            pls::cs::Int32 num = league_fightCombi_[i][0];
            pls::cs::Int32 num2 = league_fightCombi_[i][1];
            pls::cs::Int32 num3 = require(leagueData)->matchEnemy_[num];
            pls::cs::Int32 num4 = require(leagueData)->matchEnemy_[num2];
            pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(num3);
            pls::cs::Ref<data::TeamData> teamData2 = require(apdat_)->tData_.get_Item(num4);
            num5 = GetTeamScore(require(teamData)->war_offence_, require(teamData2)->war_deffence_);
            num6 = GetTeamScore(require(teamData2)->war_offence_, require(teamData)->war_deffence_);
            if (require(leagueData)->matchEnemy_[num] == 0 || require(leagueData)->matchEnemy_[num2] == 0) {
                if (require(leagueData)->matchEnemy_[num] == 0) {
                    num5 = require(gm_)->score_[0];
                    num6 = require(gm_)->score_[1];
                } else {
                    num5 = require(gm_)->score_[1];
                    num6 = require(gm_)->score_[0];
                }
            }
            league_fightResult_[i][0] = num5;
            league_fightResult_[i][1] = num6;
            {
                auto cs_target = league_data_[num];
                auto cs_index = 4;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = num5;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            {
                auto cs_target = league_data_[num];
                auto cs_index = 5;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = num6;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            league_data_[num][6] = ([&]() -> pls::cs::Int32 {
                auto cs_left = league_data_[num][4];
                auto cs_right = league_data_[num][5];
                return cs_left - cs_right;
            }());
            {
                auto cs_target = league_data_[num2];
                auto cs_index = 4;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = num6;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            {
                auto cs_target = league_data_[num2];
                auto cs_index = 5;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = num5;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            league_data_[num2][6] = ([&]() -> pls::cs::Int32 {
                auto cs_left = league_data_[num2][4];
                auto cs_right = league_data_[num2][5];
                return cs_left - cs_right;
            }());
            if (num5 > num6) {
                League_setFightResult(0, num);
                League_setFightResult(2, num2);
            } else if (num5 == num6) {
                League_setFightResult(1, num);
                League_setFightResult(1, num2);
            } else {
                League_setFightResult(0, num2);
                League_setFightResult(2, num);
            }
            if (num3 == 0) {
                require(teamData)->SetScore(num5, true);
            } else {
                require(teamData)->SetScore(num5, false);
            }
            if (num4 == 0) {
                require(teamData2)->SetScore(num6, true);
            } else {
                require(teamData2)->SetScore(num6, false);
            }
        }
        for (pls::cs::Int32 j = 0; j < league_dispOlder_.length(); ++j) {
            league_dispOlder_[j][0] = require(leagueData)->matchEnemy_[j];
            league_dispOlder_[j][1] = league_data_[j][0];
            league_dispOlder_[j][2] = league_data_[j][6];
        }
        for (pls::cs::Int32 k = 0; k < pls::cs::Int32(league_dispOlder_.length()) - 1; ++k) {
            for (pls::cs::Int32 num7 = pls::cs::Int32(league_dispOlder_.length()) - 1; num7 > k; --num7) {
                if (([&]() -> bool {
                        auto cs_left = league_dispOlder_[num7][1];
                        auto cs_right = league_dispOlder_[k][1];
                        return cs_left > cs_right;
                    }()) ||
                    (([&]() -> bool {
                         auto cs_left = league_dispOlder_[num7][1];
                         auto cs_right = league_dispOlder_[k][1];
                         return cs_left == cs_right;
                     }()) &&
                     ([&]() -> bool {
                         auto cs_left = league_dispOlder_[num7][2];
                         auto cs_right = league_dispOlder_[k][2];
                         return cs_left > cs_right;
                     }()))) {
                    pls::cs::Int32 num8 = league_dispOlder_[k][0];
                    league_dispOlder_[k][0] = league_dispOlder_[num7][0];
                    league_dispOlder_[num7][0] = num8;
                    num8 = league_dispOlder_[k][1];
                    league_dispOlder_[k][1] = league_dispOlder_[num7][1];
                    league_dispOlder_[num7][1] = num8;
                    num8 = league_dispOlder_[k][2];
                    league_dispOlder_[k][2] = league_dispOlder_[num7][2];
                    league_dispOlder_[num7][2] = num8;
                }
            }
        }
        for (pls::cs::Int32 l = 0; l < league_dispOlder_.length(); ++l) {
            pls::cs::Int32 teamId = league_dispOlder_[l][0];
            IntArray leagueData2 = GetLeagueData(teamId);
            leagueData2[7] = l + 1;
        }
    }
}

// M:game.UserData.League_setFightResult(System.Int32,System.Int32)
void UserData::League_setFightResult(pls::cs::Int32 league_result, pls::cs::Int32 team_id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.League_setFightResult(System.Int32,System.Int32)",
                     game);
    {
        if ((league_result == 0)) {
            {
                auto cs_target = league_data_[team_id];
                auto cs_index = 0;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = 3;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            league_data_[team_id][1]++;
        } else if ((league_result == 1)) {
            league_data_[team_id][0]++;
            league_data_[team_id][2]++;
        } else if ((league_result == 2)) {
            league_data_[team_id][3]++;
        }
    }
}

// M:game.UserData.GetTeamScore(System.Int32,System.Int32)
pls::cs::Int32 UserData::GetTeamScore(pls::cs::Int32 t1_offence, pls::cs::Int32 t2_deffence) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetTeamScore(System.Int32,System.Int32)", game);
    {
        pls::cs::Int32 num = t1_offence - t2_deffence;
        pls::cs::Int32 num2 = 0;
        for (pls::cs::Int32 i = 0; i < UserData::temp_param().length(); ++i) {
            if (num >= 0) {
                {
                    auto cs_target = UserData::temp_param();
                    auto cs_index = i;
                    auto cs_value = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg3 = UserData::WARPSUB_BATTLESCORE_PLUS()[i][0];
                        pls::cs::Int32 cs_arg4 = UserData::WARPSUB_BATTLESCORE_PLUS()[i][1];
                        return GameUtil::RateConvert(num, 0, 300, cs_arg3, cs_arg4, true);
                    }());
                    cs_target.set_Item(cs_index, cs_value);
                }
            } else {
                {
                    auto cs_target = UserData::temp_param();
                    auto cs_index = i;
                    auto cs_value = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg3 = UserData::WARPSUB_BATTLESCORE_MINUS()[i][0];
                        pls::cs::Int32 cs_arg4 = UserData::WARPSUB_BATTLESCORE_MINUS()[i][1];
                        return GameUtil::RateConvert(num, -300, 0, cs_arg3, cs_arg4, true);
                    }());
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        num2 = ([&]() -> pls::cs::Int32 {
            auto cs_left = GameUtil::Random(([&]() -> pls::cs::Int32 {
                auto cs_left = UserData::temp_param()[1];
                auto cs_right = UserData::temp_param()[0];
                return cs_left - cs_right;
            }()));
            auto cs_right = UserData::temp_param()[0];
            return cs_left + cs_right;
        }());
        if ([&]() -> bool {
                auto cs_left = GameUtil::Random(100);
                auto cs_right = UserData::temp_param()[2];
                return cs_left < cs_right;
            }()) {
            num2 /= 2;
        }
        if ([&]() -> bool {
                auto cs_left = GameUtil::Random(100);
                auto cs_right = UserData::temp_param()[3];
                return cs_left < cs_right;
            }()) {
            num2 *= 2;
        }
        if ([&]() -> bool {
                auto cs_left = GameUtil::Random(100);
                auto cs_right = UserData::temp_param()[4];
                return cs_left < cs_right;
            }()) {
            num2 += 100;
        }
        if ([&]() -> bool {
                auto cs_left = GameUtil::Random(100);
                auto cs_right = UserData::temp_param()[5];
                return cs_left < cs_right;
            }()) {
            num2 -= 100;
        }
        num2 = main::AppData::ClampMin(num2 / 100, 0);
        if (num2 >= 8) {
            num2 = 7;
        }
        return num2;
    }
}

// M:game.UserData.Update_gameParam
void UserData::Update_gameParam() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Update_gameParam", game);
    {
        pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(require(gm_)->teamId_[0]);
        pls::cs::Ref<data::TeamData> teamData2 = require(apdat_)->tData_.get_Item(require(gm_)->teamId_[1]);
        bool flag = false;
        bool flag2 = false;
        bool flag3 = false;
        if ([&]() -> bool {
                auto cs_left = require(gm_)->score_[0];
                auto cs_right = require(gm_)->score_[1];
                return cs_left > cs_right;
            }()) {
            flag = true;
        } else if ([&]() -> bool {
                       auto cs_left = require(gm_)->score_[0];
                       auto cs_right = require(gm_)->score_[1];
                       return cs_left == cs_right;
                   }()) {
            flag2 = true;
        } else {
            flag3 = true;
        }
        pls::cs::Int32 matchInfoJoin = GetMatchInfoJoin();
        pls::cs::Int32 num = require(teamData)->warPotential_ - require(teamData2)->warPotential_;
        pls::cs::Int32 warPotential_ = require(teamData)->warPotential_;
        pls::cs::Int32 num2 = 0;
        if (flag) {
            if (num >= 0) {
                num2 = num2 + GameUtil::RateConvert(num, 0, 50, 5, 1, true);
            } else {
                num2 = num2 + GameUtil::RateConvert(num, 0, -50, 5, 30, true);
            }
        } else if (flag2) {
            num2 = num2 + GameUtil::RateConvert(num, -50, 50, 6, -3, true);
        } else {
            num2 = num2 + GameUtil::RateConvert(num, -50, 50, 0, -6, true);
        }
        require(teamData)->AddTeamEva(num2);
        game_matchEva_ =
            GameUtil::RateConvert(require(teamData)->warPotential_ - warPotential_, -20, 20, 0, 1000, true);
        if (flag) {
            ++game_winConsecutive_;
        } else {
            game_winConsecutive_ = 0;
        }
        customer_total_ = customer_total_ + require(require(apdat_)->frmSoccer_)->customerNum[0];
        {
            auto cs_target = customer_month_;
            auto cs_index = require(require(apdat_)->save_)->ints[2];
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = require(require(apdat_)->frmSoccer_)->customerNum[0];
            pls::cs::Int32 cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        for (pls::cs::Int32 i = 0; i < 11; ++i) {
            pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(memberPDataist_), i);
                }));
            ++require(playerData)->matchNum_;
            pls::cs::Int32 num3 = 0;
            for (pls::cs::Int32 j = 0;
                 j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                     return kl_java_util::Vector_2_Size(require(require(gm_)->scorerListUserTeam));
                 });
                 ++j) {
                pls::cs::Int32 num4 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require((pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_ElementAt(
                                               require(require(gm_)->scorerListUserTeam), j);
                                       }))))
                        ->IntValue();
                });
                if (num4 == require(playerData)->id_) {
                    ++num3;
                }
            }
            if (num3 > 0) {
                ++require(playerData)->game_goalConsecutive_;
            } else {
                require(playerData)->game_goalConsecutive_ = 0;
            }
            if (matchInfoJoin == 0) {
                require(playerData)->game_goalInLeague_ = require(playerData)->game_goalInLeague_ + num3;
            }
            require(playerData)->game_goalTotal_ = require(playerData)->game_goalTotal_ + num3;
        }
        if (flag) {
            require(require(apdat_)->svisorData_.get_Item(selectSupervisorId_))->winTotal_++;
        }
        data::SponsorData::UpdateSatisFactPoint();
        if (flag) {
            AddTestPlayerParam(1, 1);
        } else if (flag2) {
            AddTestPlayerParam(2, 1);
        } else {
            AddTestPlayerParam(3, 1);
        }
        {
            pls::cs::Int32 cs_arg0 = require(gm_)->teamId_[1];
            pls::cs::Int32 cs_arg1 = require(gm_)->score_[0];
            pls::cs::Int32 cs_arg2 = require(gm_)->score_[1];
            AddTPlayBattleRecode(cs_arg0, cs_arg1, cs_arg2);
        }
        RecordAddCustomerNum(require(require(apdat_)->frmSoccer_)->customerNum[0]);
    }
}

// M:game.UserData.ChangeEditPhase(System.Int32,System.Boolean)
void UserData::ChangeEditPhase(pls::cs::Int32 next_phase, bool isSoccerForm) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.ChangeEditPhase(System.Int32,System.Boolean)", game);
    {
        main::AppData::ensure_initialized();

        phase_ = next_phase;
        phaseCnt_ = 0;
        if (phase_ == 10) {
            SetMemberChangeList();
            editMemDispMode = 0;
        }
        if (phase_ == 0) {
            data::FormationData::UpdateStamemRole();
            if (!isSoccerForm) {
                pls::cs::Ref<pls::kairo::FormBase> topForm = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::String cs_arg0 = main::AppData::softLabels_()[0];
                        pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                        require(topForm)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{},
                                                       pls::cs::String{});
                    }());
                });
            } else {
                pls::cs::Ref<pls::kairo::FormBase> topForm2 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::String cs_arg0 = main::AppData::softLabels_()[0];
                        pls::cs::String cs_arg1 = main::AppData::softLabels_()[0];
                        require(topForm2)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{},
                                                        pls::cs::String{});
                    }());
                });
            }
        } else if (phase_ == 6) {
            pls::cs::Ref<pls::kairo::FormBase> topForm3 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg0 = main::AppData::softLabels_()[6];
                    pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                    require(topForm3)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
                }());
            });
            emdm_cnt = 0;
        } else if (phase_ == 7) {
            pls::cs::Ref<pls::kairo::FormBase> topForm4 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg0 = main::AppData::softLabels_()[11];
                    pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                    require(topForm4)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
                }());
            });
        } else if (phase_ == 1) {
            pls::cs::Ref<pls::kairo::FormBase> topForm5 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::String cs_arg0 = main::AppData::softLabels_()[0];
                    pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                    require(topForm5)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
                }());
            });
        }
        if (phase_ == 0) {
            pls::cs::Ref<data::FormationData> elem =
                require(apdat_)->formationData_.get_Item(selectFormationId_);
            pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_IndexOf(require(editTest_formation), pls::cs::box(elem));
            });
            if (num != -1) {
                et_cur[1] = num;
                pls::cs::Int32 num2 = 3;
                if ([&]() -> bool {
                        auto cs_left = scrollValue_;
                        auto cs_right = et_cur[1] / 3;
                        return cs_left > cs_right;
                    }()) {
                    scrollValue_ = et_cur[1] / 3;
                }
                if ([&]() -> bool {
                        auto cs_left = scrollValue_ + num2;
                        auto cs_right = et_cur[1] / 3;
                        return cs_left <= cs_right;
                    }()) {
                    scrollValue_ = et_cur[1] / 3 - num2 + 1;
                }
            }
        } else if (phase_ == 9) {
            pls::cs::Ref<data::FormationData> elem2 =
                require(apdat_)->formationData_.get_Item(selectFormationId_);
            pls::cs::Int32 num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_IndexOf(require(editTest_formation), pls::cs::box(elem2));
            });
            if (num3 != -1) {
                et_cur[1] = num3;
                pls::cs::Int32 num4 = 3;
                if ([&]() -> bool {
                        auto cs_left = scrollValue_;
                        auto cs_right = et_cur[1] / 3;
                        return cs_left > cs_right;
                    }()) {
                    scrollValue_ = et_cur[1] / 3;
                }
                if ([&]() -> bool {
                        auto cs_left = scrollValue_ + num4;
                        auto cs_right = et_cur[1] / 3;
                        return cs_left <= cs_right;
                    }()) {
                    scrollValue_ = et_cur[1] / 3 - num4 + 1;
                }
            }
        }
        if (phase_ == 1 && ([&]() -> bool {
                auto cs_left = et_cur[1];
                auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(editTest_formation));
                });
                return cs_left < cs_right;
            }())) {
            pls::cs::Ref<data::FormationData> formationData =
                pls::cs::unbox<pls::cs::Ref<data::FormationData>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                            pls::cs::Int32 cs_arg0 = et_cur[1];
                            return kl_java_util::Vector_2_ElementAt(require(editTest_formation), cs_arg0);
                        }());
                    }));
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Check(require(formationData)->flag_, 2);
                })) {
                pls::cs::Ref<pls::kairo::FormBase> topForm6 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::String cs_arg0 = main::AppData::softLabels_()[12];
                        pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                        require(topForm6)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{},
                                                        pls::cs::String{});
                    }());
                });
            } else {
                pls::cs::Ref<pls::kairo::FormBase> topForm7 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::String cs_arg0 = main::AppData::softLabels_()[13];
                        pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                        require(topForm7)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{},
                                                        pls::cs::String{});
                    }());
                });
            }
        }
    }
}

// M:game.UserData.SetMemberChangeList
void UserData::SetMemberChangeList() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetMemberChangeList", game);
    {
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(editTest_fw)); }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(editTest_fw));
            });
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(editTest_mf)); }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(editTest_mf));
            });
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(editTest_df)); }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(editTest_df));
            });
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(editTest_gk)); }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(editTest_gk));
            });
        }
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(editTest_temp));
            }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(editTest_temp));
            });
        }
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(editTest_category));
            }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(editTest_category));
            });
        }
        IntArray2 formation_ =
            require(require(apdat_)->formationData_.get_Item(selectFormationId_))->formation_;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = editTest_gk;
                pls::cs::Ref<pls::cs::Object> cs_arg0 =
                    pls::cs::box(IntArray::from({formation_[0][0], formation_[0][1], 0}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
        for (pls::cs::Int32 i = 1; i < formation_.length(); ++i) {
            if (formation_[i][1] >= 6 && formation_[i][1] <= 8) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = editTest_df;
                        pls::cs::Ref<pls::cs::Object> cs_arg0 =
                            pls::cs::box(IntArray::from({formation_[i][0], formation_[i][1], i}));
                        kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                    }());
                });
            }
            if (formation_[i][1] >= 3 && formation_[i][1] <= 5) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = editTest_mf;
                        pls::cs::Ref<pls::cs::Object> cs_arg0 =
                            pls::cs::box(IntArray::from({formation_[i][0], formation_[i][1], i}));
                        kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                    }());
                });
            }
            if (formation_[i][1] >= 0 && formation_[i][1] <= 2) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = editTest_fw;
                        pls::cs::Ref<pls::cs::Object> cs_arg0 =
                            pls::cs::box(IntArray::from({formation_[i][0], formation_[i][1], i}));
                        kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                    }());
                });
            }
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(editTest_df)); }) == 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    auto cs_receiver = editTest_df;
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({0, 0, -1}));
                    kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                }());
            });
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(editTest_mf)); }) == 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    auto cs_receiver = editTest_mf;
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({0, 0, -1}));
                    kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                }());
            });
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(editTest_fw)); }) == 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    auto cs_receiver = editTest_fw;
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({0, 0, -1}));
                    kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                }());
            });
        }
        pls::cs::Int32 num = 4;
        for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(editTest_df));
                                       }) - 1;
             ++j) {
            for (pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(editTest_df));
                                       }) -
                                       1;
                 num2 > j; --num2) {
                IntArray array = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(editTest_df), j);
                }));
                IntArray array2 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(editTest_df), num2);
                }));
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_df));
                    }) <= num) {
                    if (([&]() -> bool {
                            auto cs_left = array2[0];
                            auto cs_right = array[0];
                            return cs_left < cs_right;
                        }()) ||
                        (([&]() -> bool {
                             auto cs_left = array2[0];
                             auto cs_right = array[0];
                             return cs_left == cs_right;
                         }()) &&
                         ([&]() -> bool {
                             auto cs_left = array2[1];
                             auto cs_right = array[1];
                             return cs_left < cs_right;
                         }()))) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_SetElementAt(require(editTest_df),
                                                                       pls::cs::box(array2), j);
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_SetElementAt(require(editTest_df),
                                                                       pls::cs::box(array), num2);
                        });
                    }
                } else if (([&]() -> bool {
                               auto cs_left = array2[1];
                               auto cs_right = array[1];
                               return cs_left < cs_right;
                           }()) ||
                           (([&]() -> bool {
                                auto cs_left = array2[1];
                                auto cs_right = array[1];
                                return cs_left == cs_right;
                            }()) &&
                            ([&]() -> bool {
                                auto cs_left = array2[0];
                                auto cs_right = array[0];
                                return cs_left < cs_right;
                            }()))) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(editTest_df), pls::cs::box(array2),
                                                                   j);
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(editTest_df), pls::cs::box(array),
                                                                   num2);
                    });
                }
            }
        }
        for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(editTest_mf));
                                       }) - 1;
             ++k) {
            for (pls::cs::Int32 num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(editTest_mf));
                                       }) -
                                       1;
                 num3 > k; --num3) {
                IntArray array3 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(editTest_mf), k);
                }));
                IntArray array4 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(editTest_mf), num3);
                }));
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_mf));
                    }) <= num) {
                    if (([&]() -> bool {
                            auto cs_left = array4[0];
                            auto cs_right = array3[0];
                            return cs_left < cs_right;
                        }()) ||
                        (([&]() -> bool {
                             auto cs_left = array4[0];
                             auto cs_right = array3[0];
                             return cs_left == cs_right;
                         }()) &&
                         ([&]() -> bool {
                             auto cs_left = array4[1];
                             auto cs_right = array3[1];
                             return cs_left < cs_right;
                         }()))) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_SetElementAt(require(editTest_mf),
                                                                       pls::cs::box(array4), k);
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_SetElementAt(require(editTest_mf),
                                                                       pls::cs::box(array3), num3);
                        });
                    }
                } else if (([&]() -> bool {
                               auto cs_left = array4[1];
                               auto cs_right = array3[1];
                               return cs_left < cs_right;
                           }()) ||
                           (([&]() -> bool {
                                auto cs_left = array4[1];
                                auto cs_right = array3[1];
                                return cs_left == cs_right;
                            }()) &&
                            ([&]() -> bool {
                                auto cs_left = array4[0];
                                auto cs_right = array3[0];
                                return cs_left < cs_right;
                            }()))) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(editTest_mf), pls::cs::box(array4),
                                                                   k);
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(editTest_mf), pls::cs::box(array3),
                                                                   num3);
                    });
                }
            }
        }
        for (pls::cs::Int32 l = 0; l < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(editTest_fw));
                                       }) - 1;
             ++l) {
            for (pls::cs::Int32 num4 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(editTest_fw));
                                       }) -
                                       1;
                 num4 > l; --num4) {
                IntArray array5 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(editTest_fw), l);
                }));
                IntArray array6 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(editTest_fw), num4);
                }));
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_fw));
                    }) <= num) {
                    if (([&]() -> bool {
                            auto cs_left = array6[0];
                            auto cs_right = array5[0];
                            return cs_left < cs_right;
                        }()) ||
                        (([&]() -> bool {
                             auto cs_left = array6[0];
                             auto cs_right = array5[0];
                             return cs_left == cs_right;
                         }()) &&
                         ([&]() -> bool {
                             auto cs_left = array6[1];
                             auto cs_right = array5[1];
                             return cs_left < cs_right;
                         }()))) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_SetElementAt(require(editTest_fw),
                                                                       pls::cs::box(array6), l);
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_SetElementAt(require(editTest_fw),
                                                                       pls::cs::box(array5), num4);
                        });
                    }
                } else if (([&]() -> bool {
                               auto cs_left = array6[1];
                               auto cs_right = array5[1];
                               return cs_left < cs_right;
                           }()) ||
                           (([&]() -> bool {
                                auto cs_left = array6[1];
                                auto cs_right = array5[1];
                                return cs_left == cs_right;
                            }()) &&
                            ([&]() -> bool {
                                auto cs_left = array6[0];
                                auto cs_right = array5[0];
                                return cs_left < cs_right;
                            }()))) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(editTest_fw), pls::cs::box(array6),
                                                                   l);
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(editTest_fw), pls::cs::box(array5),
                                                                   num4);
                    });
                }
            }
        }
        bool flag = true;
        pls::cs::Int32 num5 = 4;
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(editTest_df));
            }) > num ||
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(editTest_mf));
            }) > num ||
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(editTest_fw));
            }) > num) {
            num5 = 5;
            flag = false;
        }
        editTest_team = pls::cs::Array<pls::cs::Ref<kl_java_util::Vector>>::make(num5);
        pls::cs::Int32 num6 = 0;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = editTest_category;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(kl_lang::JInteger::create(0));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
        {
            auto cs_target = editTest_team;
            auto cs_index = num6++;
            auto cs_value = editTest_gk;
            cs_target.set_Item(cs_index, cs_value);
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = editTest_category;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(kl_lang::JInteger::create(1));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(editTest_df));
            }) > num &&
            !flag) {
            for (pls::cs::Int32 m = 0; m < 3; ++m) {
                for (pls::cs::Int32 num7 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(editTest_df));
                                           }) -
                                           1;
                     num7 >= 0; --num7) {
                    IntArray array7 =
                        pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(editTest_df), num7);
                        }));
                    if (array7[1] == 8 - m) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                auto cs_receiver = editTest_temp;
                                pls::cs::Ref<pls::cs::Object> cs_arg0 =
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_ElementAt(require(editTest_df), num7);
                                    });
                                kl_java_util::Vector_2_InsertElementAt(require(cs_receiver), cs_arg0, 0);
                            }());
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_RemoveElementAt(require(editTest_df), num7);
                        });
                    }
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(editTest_temp));
                        }) == 5) {
                        break;
                    }
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(editTest_df));
                        }) == 1) {
                        break;
                    }
                }
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_temp));
                    }) == 5) {
                    break;
                }
                if ((pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return kl_java_util::Vector_2_Size(require(editTest_temp));
                     }) > 0 &&
                     pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return kl_java_util::Vector_2_Size(require(editTest_df));
                     }) <= 5)) {
                    break;
                }
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    auto cs_receiver = editTest_category;
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(kl_lang::JInteger::create(1));
                    kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                }());
            });
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(editTest_temp));
                }) > 0) {
                {
                    auto cs_target = editTest_team;
                    auto cs_index = num6++;
                    auto cs_value = editTest_temp;
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
            {
                auto cs_target = editTest_team;
                auto cs_index = num6++;
                auto cs_value = editTest_df;
                cs_target.set_Item(cs_index, cs_value);
            }
            flag = true;
        } else {
            {
                auto cs_target = editTest_team;
                auto cs_index = num6++;
                auto cs_value = editTest_df;
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = editTest_category;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(kl_lang::JInteger::create(2));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(editTest_mf));
            }) > num &&
            !flag) {
            for (pls::cs::Int32 n = 0; n < 3; ++n) {
                for (pls::cs::Int32 num8 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(editTest_mf));
                                           }) -
                                           1;
                     num8 >= 0; --num8) {
                    IntArray array8 =
                        pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(editTest_mf), num8);
                        }));
                    if (array8[1] == 5 - n) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                auto cs_receiver = editTest_temp;
                                pls::cs::Ref<pls::cs::Object> cs_arg0 =
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_ElementAt(require(editTest_mf), num8);
                                    });
                                kl_java_util::Vector_2_InsertElementAt(require(cs_receiver), cs_arg0, 0);
                            }());
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_RemoveElementAt(require(editTest_mf), num8);
                        });
                    }
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(editTest_temp));
                        }) == 5) {
                        break;
                    }
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(editTest_mf));
                        }) == 1) {
                        break;
                    }
                }
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_temp));
                    }) == 5) {
                    break;
                }
                if ((pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return kl_java_util::Vector_2_Size(require(editTest_temp));
                     }) > 0 &&
                     pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return kl_java_util::Vector_2_Size(require(editTest_mf));
                     }) <= 5)) {
                    break;
                }
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    auto cs_receiver = editTest_category;
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(kl_lang::JInteger::create(2));
                    kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                }());
            });
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(editTest_temp));
                }) > 0) {
                {
                    auto cs_target = editTest_team;
                    auto cs_index = num6++;
                    auto cs_value = editTest_temp;
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
            {
                auto cs_target = editTest_team;
                auto cs_index = num6++;
                auto cs_value = editTest_mf;
                cs_target.set_Item(cs_index, cs_value);
            }
            flag = true;
        } else {
            {
                auto cs_target = editTest_team;
                auto cs_index = num6++;
                auto cs_value = editTest_mf;
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = editTest_category;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(kl_lang::JInteger::create(3));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(editTest_fw));
            }) > num &&
            !flag) {
            for (pls::cs::Int32 num9 = 0; num9 < 3; ++num9) {
                for (pls::cs::Int32 num10 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return kl_java_util::Vector_2_Size(require(editTest_fw));
                                            }) -
                                            1;
                     num10 >= 0; --num10) {
                    IntArray array9 =
                        pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(editTest_fw), num10);
                        }));
                    if (array9[1] == 2 - num9) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                auto cs_receiver = editTest_temp;
                                pls::cs::Ref<pls::cs::Object> cs_arg0 =
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_ElementAt(require(editTest_fw), num10);
                                    });
                                kl_java_util::Vector_2_InsertElementAt(require(cs_receiver), cs_arg0, 0);
                            }());
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_RemoveElementAt(require(editTest_fw), num10);
                        });
                    }
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(editTest_temp));
                        }) == 5) {
                        break;
                    }
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(editTest_fw));
                        }) == 1) {
                        break;
                    }
                }
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_temp));
                    }) == 5) {
                    break;
                }
                if ((pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return kl_java_util::Vector_2_Size(require(editTest_temp));
                     }) > 0 &&
                     pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return kl_java_util::Vector_2_Size(require(editTest_fw));
                     }) <= 5)) {
                    break;
                }
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    auto cs_receiver = editTest_category;
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(kl_lang::JInteger::create(3));
                    kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                }());
            });
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(editTest_temp));
                }) > 0) {
                {
                    auto cs_target = editTest_team;
                    auto cs_index = num6++;
                    auto cs_value = editTest_temp;
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
            {
                auto cs_target = editTest_team;
                auto cs_index = num6++;
                auto cs_value = editTest_fw;
                cs_target.set_Item(cs_index, cs_value);
            }
            flag = true;
        } else {
            {
                auto cs_target = editTest_team;
                auto cs_index = num6++;
                auto cs_value = editTest_fw;
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:game.UserData.Update_edit(System.Boolean)
bool UserData::Update_edit(bool isSoccerForm) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Update_edit(System.Boolean)", game);
    {
        main::AppData::ensure_initialized();

        isSoccerForm_ = isSoccerForm;
        phaseCnt_ = ((phaseCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (phase_ == 0) {
            if (!isSoccerForm) {
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(65536); })) {
                    if (et_cur[0] % 3 == 0) {
                        {
                            auto cs_target = et_cur;
                            auto cs_index = 0;
                            auto cs_old = cs_target.at(cs_index);
                            auto cs_rhs = 2;
                            pls::cs::Int32 cs_value = cs_old + cs_rhs;
                            cs_target.at(cs_index) = cs_value;
                        }
                    } else {
                        et_cur[0] = ([&]() -> pls::cs::Int32 {
                            auto cs_left = (([&]() -> pls::cs::Int32 {
                                auto cs_left = et_cur[0] - 1;
                                auto cs_right = MENU_STR.length();
                                return cs_left + cs_right;
                            }()));
                            auto cs_right = MENU_STR.length();
                            return cs_left % cs_right;
                        }());
                    }
                }
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(262144); })) {
                    if (et_cur[0] % 3 == 2) {
                        {
                            auto cs_target = et_cur;
                            auto cs_index = 0;
                            auto cs_old = cs_target.at(cs_index);
                            auto cs_rhs = 2;
                            pls::cs::Int32 cs_value = cs_old - cs_rhs;
                            cs_target.at(cs_index) = cs_value;
                        }
                    } else {
                        et_cur[0] = ([&]() -> pls::cs::Int32 {
                            auto cs_left = (([&]() -> pls::cs::Int32 {
                                auto cs_left = et_cur[0] + 1;
                                auto cs_right = MENU_STR.length();
                                return cs_left + cs_right;
                            }()));
                            auto cs_right = MENU_STR.length();
                            return cs_left % cs_right;
                        }());
                    }
                }
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); })) {
                    if (et_cur[0] == 4) {
                        pls::cs::Ref<pls::kairo::FormBase> topForm = pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> bool {
                                pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = form::SubForm::create(53);
                                return require(topForm)->Push(cs_arg0);
                            }());
                        });
                        return false;
                    }
                    if (et_cur[0] == 2) {
                        if (!require(apdat_)->CheckAlreadyEvent(163)) {
                            require(apdat_)->ExecEvent(163, pls::cs::String{}, IntArray{});
                        }
                        {
                            auto cs_receiver = apdat_;
                            pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = form::SubForm::create(27);
                            require(cs_receiver)->Push(cs_arg0);
                        }
                        return false;
                    }
                    if (et_cur[0] == 5) {

                    } else {
                        if (et_cur[0] == 0) {
                            if (!require(apdat_)->CheckAlreadyEvent(161)) {
                                require(apdat_)->ExecEvent(161, pls::cs::String{}, IntArray{});
                            }
                            ChangeEditPhase(9, isSoccerForm);
                        } else if (et_cur[0] == 1) {
                            if (!require(apdat_)->CheckAlreadyEvent(162)) {
                                require(apdat_)->ExecEvent(162, pls::cs::String{}, IntArray{});
                            }
                            ChangeEditPhase(10, isSoccerForm);
                        } else if (et_cur[0] == 3) {
                            pls::cs::Ref<pls::kairo::FormBase> topForm2 = pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> bool {
                                    pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = form::SubForm::create(50);
                                    return require(topForm2)->Push(cs_arg0);
                                }());
                            });
                            return false;
                        }
                    }
                } else if (require(apdat_)->IsPushSoftLabel(2)) {
                    data::FormationData::RemoveNew();
                    return true;
                }
            } else {
                if (et_cur[0] == 0) {
                    et_cur[0] = 1;
                }
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(131072); }) &&
                    et_cur[0] >= 2) {
                    et_cur[0] = 1;
                }
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(524288); })) {
                    if (et_cur[0] == 0) {
                        et_cur[0] = 1;
                    } else if (et_cur[0] == 1) {
                        et_cur[0] = 2;
                    }
                }
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(65536); }) &&
                    et_cur[0] >= 3) {
                    et_cur[0]--;
                }
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(262144); })) {
                    if (et_cur[0] == 1) {
                        ChangeEditPhase(15, isSoccerForm);
                    } else if (et_cur[0] == 2 || et_cur[0] == 3) {
                        et_cur[0]++;
                    }
                }
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); })) {
                    if (et_cur[0] == 0) {
                        ChangeEditPhase(15, isSoccerForm);
                    } else {
                        if (et_cur[0] == 1) {
                            data::FormationData::RemoveNew();
                            return true;
                        }
                        if (et_cur[0] == 2) {
                            ChangeEditPhase(9, isSoccerForm);
                        } else if (et_cur[0] == 3) {
                            ChangeEditPhase(10, isSoccerForm);
                        } else if (et_cur[0] == 4) {
                            pls::cs::Ref<pls::kairo::FormBase> topForm3 = pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> bool {
                                    pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = form::SubForm::create(27);
                                    return require(topForm3)->Push(cs_arg0);
                                }());
                            });
                            return false;
                        }
                    }
                }
            }
        } else if (phase_ == 1) {
            pls::cs::Int32 num = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(editTest_formation)); });
            pls::cs::Int32 num2 = et_cur[1];
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(131072); }) &&
                et_cur[1] / 3 > 0) {
                {
                    auto cs_target = et_cur;
                    auto cs_index = 1;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = 3;
                    pls::cs::Int32 cs_value = cs_old - cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(524288); })) {
                pls::cs::Int32 num3 = et_cur[1] / 3;
                pls::cs::Int32 num4 = et_cur[1];
                {
                    auto cs_target = et_cur;
                    auto cs_index = 1;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = 3;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
                if (et_cur[1] >= num) {
                    et_cur[1] = num - 1;
                }
                if (et_cur[1] / 3 == num3) {
                    et_cur[1] = num4;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(65536); }) &&
                et_cur[1] % 3 != 0) {
                et_cur[1]--;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(262144); })) {
                et_cur[1]++;
                if (et_cur[1] >= num) {
                    et_cur[1] = num - 1;
                }
            }
            pls::cs::Int32 num5 = 3;
            if ([&]() -> bool {
                    auto cs_left = scrollValue_;
                    auto cs_right = et_cur[1] / 3;
                    return cs_left > cs_right;
                }()) {
                scrollValue_ = et_cur[1] / 3;
            }
            if ([&]() -> bool {
                    auto cs_left = scrollValue_ + num5;
                    auto cs_right = et_cur[1] / 3;
                    return cs_left <= cs_right;
                }()) {
                scrollValue_ = et_cur[1] / 3 - num5 + 1;
            }
            if (num2 != et_cur[1]) {
                SetEditForPos(isSoccerForm);
                pls::cs::Ref<data::FormationData> formationData =
                    pls::cs::unbox<pls::cs::Ref<data::FormationData>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                                pls::cs::Int32 cs_arg0 = et_cur[1];
                                return kl_java_util::Vector_2_ElementAt(require(editTest_formation), cs_arg0);
                            }());
                        }));
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::Check(require(formationData)->flag_, 2);
                    })) {
                    pls::cs::Ref<pls::kairo::FormBase> topForm4 = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::String cs_arg0 = main::AppData::softLabels_()[12];
                            pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                            require(topForm4)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{},
                                                            pls::cs::String{});
                        }());
                    });
                } else {
                    pls::cs::Ref<pls::kairo::FormBase> topForm5 = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::String cs_arg0 = main::AppData::softLabels_()[13];
                            pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                            require(topForm5)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{},
                                                            pls::cs::String{});
                        }());
                    });
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); }) ||
                require(apdat_)->IsPushSoftLabel(13)) {
                ChangeEditPhase(5, isSoccerForm);
            } else if (require(apdat_)->IsPushSoftLabel(2)) {
                ChangeEditPhase(11, isSoccerForm);
            } else if (require(apdat_)->IsPushSoftLabel(12)) {
                pls::cs::Ref<data::FormationData> formationData2 =
                    pls::cs::unbox<pls::cs::Ref<data::FormationData>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                                pls::cs::Int32 cs_arg0 = et_cur[1];
                                return kl_java_util::Vector_2_ElementAt(require(editTest_formation), cs_arg0);
                            }());
                        }));
                selectFormationId_ = require(formationData2)->id_;
                ChangeEditPhase(2, isSoccerForm);
            }
        } else if (phase_ == 2) {
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(131072); }) &&
                et_cur[2] / 10 > 0) {
                {
                    auto cs_target = et_cur;
                    auto cs_index = 2;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = 10;
                    pls::cs::Int32 cs_value = cs_old - cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(524288); }) &&
                et_cur[2] + 10 < 90) {
                {
                    auto cs_target = et_cur;
                    auto cs_index = 2;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = 10;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(65536); }) &&
                et_cur[2] % 10 != 8) {
                et_cur[2]++;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(262144); }) &&
                et_cur[2] % 10 != 0) {
                et_cur[2]--;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); })) {
                et_cur[3] = et_cur[2];
                ChangeEditPhase(3, isSoccerForm);
            } else if (require(apdat_)->IsPushSoftLabel(2)) {
                ChangeEditPhase(1, isSoccerForm);
            }
        } else if (phase_ == 3) {
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(131072); }) &&
                et_cur[3] / 10 > 0) {
                {
                    auto cs_target = et_cur;
                    auto cs_index = 3;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = 10;
                    pls::cs::Int32 cs_value = cs_old - cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(524288); }) &&
                et_cur[3] + 10 < 90) {
                {
                    auto cs_target = et_cur;
                    auto cs_index = 3;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = 10;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(65536); }) &&
                et_cur[3] % 10 != 8) {
                et_cur[3]++;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(262144); }) &&
                et_cur[3] % 10 != 0) {
                et_cur[3]--;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); })) {
                pls::cs::Ref<data::FormationData> formationData3 =
                    pls::cs::unbox<pls::cs::Ref<data::FormationData>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                                pls::cs::Int32 cs_arg0 = et_cur[1];
                                return kl_java_util::Vector_2_ElementAt(require(editTest_formation), cs_arg0);
                            }());
                        }));
                IntArray2 formation_ = require(formationData3)->formation_;
                IntArray array = IntArray{};
                IntArray array2 = IntArray{};
                for (pls::cs::Int32 i = 1; i < formation_.length(); ++i) {
                    if (([&]() -> bool {
                            auto cs_left = formation_[i][0];
                            auto cs_right = et_cur[2] / 10;
                            return cs_left == cs_right;
                        }()) &&
                        ([&]() -> bool {
                            auto cs_left = formation_[i][1];
                            auto cs_right = et_cur[2] % 10;
                            return cs_left == cs_right;
                        }())) {
                        array = formation_[i];
                    }
                    if (([&]() -> bool {
                            auto cs_left = formation_[i][0];
                            auto cs_right = et_cur[3] / 10;
                            return cs_left == cs_right;
                        }()) &&
                        ([&]() -> bool {
                            auto cs_left = formation_[i][1];
                            auto cs_right = et_cur[3] % 10;
                            return cs_left == cs_right;
                        }())) {
                        array2 = formation_[i];
                    }
                }
                if (([&]() {
                        auto cs_left = pls::cs::box(array);
                        auto cs_right = pls::cs::box(IntArray{});
                        return cs_left != cs_right;
                    }()) ||
                    ([&]() {
                        auto cs_left = pls::cs::box(array2);
                        auto cs_right = pls::cs::box(IntArray{});
                        return cs_left != cs_right;
                    }())) {
                    ChangeEditPhase(4, isSoccerForm);
                } else {
                    et_cur[2] = et_cur[3];
                    ChangeEditPhase(2, isSoccerForm);
                }
            } else if (require(apdat_)->IsPushSoftLabel(2)) {
                et_cur[2] = et_cur[3];
                ChangeEditPhase(2, isSoccerForm);
            }
        } else if (phase_ == 4) {
            SetEditForPos(isSoccerForm);
            if (phaseCnt_ >= 6) {
                pls::cs::Ref<data::FormationData> formationData4 =
                    pls::cs::unbox<pls::cs::Ref<data::FormationData>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                                pls::cs::Int32 cs_arg0 = et_cur[1];
                                return kl_java_util::Vector_2_ElementAt(require(editTest_formation), cs_arg0);
                            }());
                        }));
                IntArray2 formation_2 = require(formationData4)->formation_;
                IntArray array3 = IntArray{};
                IntArray array4 = IntArray{};
                for (pls::cs::Int32 j = 1; j < formation_2.length(); ++j) {
                    if (([&]() -> bool {
                            auto cs_left = formation_2[j][0];
                            auto cs_right = et_cur[2] / 10;
                            return cs_left == cs_right;
                        }()) &&
                        ([&]() -> bool {
                            auto cs_left = formation_2[j][1];
                            auto cs_right = et_cur[2] % 10;
                            return cs_left == cs_right;
                        }())) {
                        array3 = formation_2[j];
                    }
                    if (([&]() -> bool {
                            auto cs_left = formation_2[j][0];
                            auto cs_right = et_cur[3] / 10;
                            return cs_left == cs_right;
                        }()) &&
                        ([&]() -> bool {
                            auto cs_left = formation_2[j][1];
                            auto cs_right = et_cur[3] % 10;
                            return cs_left == cs_right;
                        }())) {
                        array4 = formation_2[j];
                    }
                }
                if (([&]() {
                        auto cs_left = pls::cs::box(array3);
                        auto cs_right = pls::cs::box(IntArray{});
                        return cs_left != cs_right;
                    }()) &&
                    ([&]() {
                        auto cs_left = pls::cs::box(array4);
                        auto cs_right = pls::cs::box(IntArray{});
                        return cs_left != cs_right;
                    }())) {
                    pls::cs::Int32 num6 = array3[0];
                    array3[0] = array4[0];
                    array4[0] = num6;
                    num6 = array3[1];
                    array3[1] = array4[1];
                    array4[1] = num6;
                } else if ([&]() {
                               auto cs_left = pls::cs::box(array3);
                               auto cs_right = pls::cs::box(IntArray{});
                               return cs_left != cs_right;
                           }()) {
                    array3[0] = et_cur[3] / 10;
                    array3[1] = et_cur[3] % 10;
                } else if ([&]() {
                               auto cs_left = pls::cs::box(array4);
                               auto cs_right = pls::cs::box(IntArray{});
                               return cs_left != cs_right;
                           }()) {
                    array4[0] = et_cur[2] / 10;
                    array4[1] = et_cur[2] % 10;
                } else {
                }
                et_cur[2] = et_cur[3];
                ChangeEditPhase(2, isSoccerForm);
            }
        } else if (phase_ == 5) {
            pls::cs::Int32 num7 = 3;
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(131072); })) {
                et_cur[4] = (et_cur[4] - 1 + 3) % 3;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(524288); })) {
                et_cur[4] = (et_cur[4] + 1 + 3) % 3;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); }) ||
                require(apdat_)->IsPushSoftLabel(13)) {
                pls::cs::Ref<data::FormationData> formationData5 =
                    pls::cs::unbox<pls::cs::Ref<data::FormationData>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                                pls::cs::Int32 cs_arg0 = et_cur[1];
                                return kl_java_util::Vector_2_ElementAt(require(editTest_formation), cs_arg0);
                            }());
                        }));
                selectFormationId_ = require(formationData5)->id_;
                selectFormationType_ = et_cur[4];
                SetEditForPos(isSoccerForm);
                ChangeEditPhase(12, isSoccerForm);
                ([&]() -> pls::cs::Ref<form::SubForm> {
                    pls::cs::Int32 cs_arg0 = 70 + selectFormationType_;
                    pls::cs::String cs_arg1 = ([&]() {
                        auto cs_left =
                            pls::cs::String::concat(require(formationData5)->name_, literal(u"\t"));
                        auto cs_right = UserData::FORMATIONTYPE_STR()[selectFormationType_];
                        return pls::cs::String::concat(cs_left, cs_right);
                    }());
                    return require(apdat_)->ExecEvent(cs_arg0, cs_arg1, IntArray{});
                }());
            } else if (require(apdat_)->IsPushSoftLabel(2)) {
                ChangeEditPhase(1, isSoccerForm);
            }
        } else if (phase_ == 6) {
            ++emdm_cnt;
            pls::cs::Ref<pls::kairo::FormBase> topForm6 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(topForm6)->GetLeftSoftLabel();
                }) == literal(u"ベンチ")) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::String cs_arg0 = main::AppData::softLabels_()[6];
                        pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                        require(topForm6)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{},
                                                        pls::cs::String{});
                    }());
                });
            }
            pls::cs::Int32 num8 = et_cur[5] / 10;
            if (num8 >= editTest_team.length()) {
                num8 = pls::cs::Int32(editTest_team.length()) - 1;
            }
            et_cur[5] = et_cur[5] % 10 + num8 * 10;
            num8 = et_cur[5] % 10;
            if (num8 >= pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(et_cur[5] / 10)));
                })) {
                num8 =
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(et_cur[5] / 10)));
                    }) -
                    1;
                et_cur[5] = et_cur[5] / 10 * 10 + num8;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(131072); })) {
                pls::cs::Int32 num9 = et_cur[5] / 10;
                et_cur[5] = et_cur[5] % 10;
                {
                    auto cs_target = et_cur;
                    auto cs_index = 5;
                    auto cs_value = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = et_cur[5] - 1;
                            auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(num9)));
                            });
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(num9)));
                        });
                        return cs_left % cs_right;
                    }());
                    cs_target.set_Item(cs_index, cs_value);
                }
                {
                    auto cs_target = et_cur;
                    auto cs_index = 5;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = num9 * 10;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(524288); })) {
                pls::cs::Int32 num10 = et_cur[5] / 10;
                et_cur[5] = et_cur[5] % 10;
                {
                    auto cs_target = et_cur;
                    auto cs_index = 5;
                    auto cs_value = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = et_cur[5] + 1;
                            auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(num10)));
                            });
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(num10)));
                        });
                        return cs_left % cs_right;
                    }());
                    cs_target.set_Item(cs_index, cs_value);
                }
                {
                    auto cs_target = et_cur;
                    auto cs_index = 5;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = num10 * 10;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(65536); })) {
                pls::cs::Int32 num11 = et_cur[5] % 10;
                et_cur[5] = et_cur[5] / 10;
                et_cur[5] = ([&]() -> pls::cs::Int32 {
                    auto cs_left = (([&]() -> pls::cs::Int32 {
                        auto cs_left = et_cur[5] - 1;
                        auto cs_right = editTest_team.length();
                        return cs_left + cs_right;
                    }()));
                    auto cs_right = editTest_team.length();
                    return cs_left % cs_right;
                }());
                et_cur[5] = et_cur[5] * 10;
                if (num11 >= pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(et_cur[5] / 10)));
                    })) {
                    num11 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_Size(
                                    require(editTest_team.get_Item(et_cur[5] / 10)));
                            }) -
                            1;
                }
                {
                    auto cs_target = et_cur;
                    auto cs_index = 5;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = num11;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(262144); })) {
                pls::cs::Int32 num12 = et_cur[5] % 10;
                et_cur[5] = et_cur[5] / 10;
                et_cur[5] = ([&]() -> pls::cs::Int32 {
                    auto cs_left = (([&]() -> pls::cs::Int32 {
                        auto cs_left = et_cur[5] + 1;
                        auto cs_right = editTest_team.length();
                        return cs_left + cs_right;
                    }()));
                    auto cs_right = editTest_team.length();
                    return cs_left % cs_right;
                }());
                et_cur[5] = et_cur[5] * 10;
                if (num12 >= pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(et_cur[5] / 10)));
                    })) {
                    num12 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_Size(
                                    require(editTest_team.get_Item(et_cur[5] / 10)));
                            }) -
                            1;
                }
                {
                    auto cs_target = et_cur;
                    auto cs_index = 5;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = num12;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); })) {
                IntArray array5 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                        auto cs_receiver = editTest_team.get_Item(et_cur[5] / 10);
                        pls::cs::Int32 cs_arg0 = et_cur[5] % 10;
                        return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                    }());
                }));
                if (array5[2] != -1) {
                    ChangeEditPhase(7, isSoccerForm);
                    et_cur[6] = et_cur[5];
                }
            } else if (require(apdat_)->IsPushSoftLabel(2)) {
                ChangeEditPhase(13, isSoccerForm);
            } else if (require(apdat_)->IsPushSoftLabel(6)) {
                editMemDispMode = (editMemDispMode + 1) % 5;
                emdm_cnt = 0;
            }
        } else if (phase_ == 7) {
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(131072); })) {
                pls::cs::Int32 num13 = et_cur[6] / 10;
                et_cur[6] = et_cur[6] % 10;
                {
                    auto cs_target = et_cur;
                    auto cs_index = 6;
                    auto cs_value = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = et_cur[6] - 1;
                            auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(num13)));
                            });
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(num13)));
                        });
                        return cs_left % cs_right;
                    }());
                    cs_target.set_Item(cs_index, cs_value);
                }
                {
                    auto cs_target = et_cur;
                    auto cs_index = 6;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = num13 * 10;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(524288); })) {
                pls::cs::Int32 num14 = et_cur[6] / 10;
                et_cur[6] = et_cur[6] % 10;
                {
                    auto cs_target = et_cur;
                    auto cs_index = 6;
                    auto cs_value = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = et_cur[6] + 1;
                            auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(num14)));
                            });
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(num14)));
                        });
                        return cs_left % cs_right;
                    }());
                    cs_target.set_Item(cs_index, cs_value);
                }
                {
                    auto cs_target = et_cur;
                    auto cs_index = 6;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = num14 * 10;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(65536); })) {
                pls::cs::Int32 num15 = et_cur[6] % 10;
                et_cur[6] = et_cur[6] / 10;
                et_cur[6] = ([&]() -> pls::cs::Int32 {
                    auto cs_left = (([&]() -> pls::cs::Int32 {
                        auto cs_left = et_cur[6] - 1;
                        auto cs_right = editTest_team.length();
                        return cs_left + cs_right;
                    }()));
                    auto cs_right = editTest_team.length();
                    return cs_left % cs_right;
                }());
                et_cur[6] = et_cur[6] * 10;
                if (num15 >= pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(et_cur[6] / 10)));
                    })) {
                    num15 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_Size(
                                    require(editTest_team.get_Item(et_cur[6] / 10)));
                            }) -
                            1;
                }
                {
                    auto cs_target = et_cur;
                    auto cs_index = 6;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = num15;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(262144); })) {
                pls::cs::Int32 num16 = et_cur[6] % 10;
                et_cur[6] = et_cur[6] / 10;
                et_cur[6] = ([&]() -> pls::cs::Int32 {
                    auto cs_left = (([&]() -> pls::cs::Int32 {
                        auto cs_left = et_cur[6] + 1;
                        auto cs_right = editTest_team.length();
                        return cs_left + cs_right;
                    }()));
                    auto cs_right = editTest_team.length();
                    return cs_left % cs_right;
                }());
                et_cur[6] = et_cur[6] * 10;
                if (num16 >= pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(et_cur[6] / 10)));
                    })) {
                    num16 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_Size(
                                    require(editTest_team.get_Item(et_cur[6] / 10)));
                            }) -
                            1;
                }
                {
                    auto cs_target = et_cur;
                    auto cs_index = 6;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = num16;
                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); })) {
                IntArray array6 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                        auto cs_receiver = editTest_team.get_Item(et_cur[6] / 10);
                        pls::cs::Int32 cs_arg0 = et_cur[6] % 10;
                        return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                    }());
                }));
                if (array6[2] != -1) {
                    ChangeEditPhase(8, isSoccerForm);
                }
            } else if (require(apdat_)->IsPushSoftLabel(2)) {
                ChangeEditPhase(6, isSoccerForm);
            } else if (require(apdat_)->IsPushSoftLabel(11)) {
                pls::cs::Ref<pls::kairo::FormBase> topForm7 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
                pls::cs::Ref<form::SubForm> subForm = form::SubForm::create(28);
                pls::cs::Int32 num17 = et_cur[5] / 10;
                pls::cs::Int32 index = et_cur[5] % 10;
                pls::cs::Ref<kl_java_util::Vector> vector = editTest_team.get_Item(num17);
                IntArray array7 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(vector), index);
                }));
                if (array7[2] != -1) {
                    pls::cs::Int32 index2 = array7[2];
                    pls::cs::Ref<data::PlayerData> playerData_ =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(require(memberPDataist_), index2);
                            }));
                    require(subForm)->playerData_ = playerData_;
                }
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(topForm7)->Push(subForm); });
            }
        } else if (phase_ == 8) {
            SetEditForPos(isSoccerForm);
            if (phaseCnt_ >= 6) {
                IntArray array8 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                        auto cs_receiver = editTest_team.get_Item(et_cur[6] / 10);
                        pls::cs::Int32 cs_arg0 = et_cur[6] % 10;
                        return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                    }());
                }));
                if (array8[2] != -1) {
                    IntArray array9 =
                        pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                                auto cs_receiver = editTest_team.get_Item(et_cur[6] / 10);
                                pls::cs::Int32 cs_arg0 = et_cur[6] % 10;
                                return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                            }());
                        }));
                    pls::cs::Int32 index3 = array9[2];
                    array9 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                            auto cs_receiver = editTest_team.get_Item(et_cur[5] / 10);
                            pls::cs::Int32 cs_arg0 = et_cur[5] % 10;
                            return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                        }());
                    }));
                    pls::cs::Int32 index4 = array9[2];
                    pls::cs::Ref<data::PlayerData> obj = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(memberPDataist_), index4);
                        }));
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            auto cs_receiver = memberPDataist_;
                            pls::cs::Ref<pls::cs::Object> cs_arg0 =
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(memberPDataist_), index3);
                                });
                            kl_java_util::Vector_2_SetElementAt(require(cs_receiver), cs_arg0, index4);
                        }());
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(memberPDataist_),
                                                                   pls::cs::box(obj), index3);
                    });
                    SetMemberChangeList();
                    ChangeEditPhase(6, isSoccerForm);
                    SetEditForPos(isSoccerForm);
                    et_cur[5] = et_cur[6];
                }
            }
        } else if (phase_ == 14) {
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(65536); })) {
                ChangeEditPhase(16, isSoccerForm);
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); })) {
                ChangeEditPhase(16, isSoccerForm);
            }
        }
        if (phase_ == 9 || phase_ == 10 || phase_ == 11 || phase_ == 12 || phase_ == 13 || phase_ == 15 ||
            phase_ == 16) {
            SetEditForPos(isSoccerForm);
            if (phaseCnt_ > 8) {
                if (phase_ == 9) {
                    ChangeEditPhase(1, isSoccerForm);
                }
                if (phase_ == 10) {
                    ChangeEditPhase(6, isSoccerForm);
                }
                if (phase_ == 11) {
                    ChangeEditPhase(0, isSoccerForm);
                }
                if (phase_ == 12) {
                    ChangeEditPhase(0, isSoccerForm);
                }
                if (phase_ == 13) {
                    ChangeEditPhase(0, isSoccerForm);
                }
                if (phase_ == 15) {
                    ChangeEditPhase(14, isSoccerForm);
                }
                if (phase_ == 16) {
                    ChangeEditPhase(0, isSoccerForm);
                }
            }
        }
        return false;
    }
}

// M:game.UserData.Draw_edit(kairo.unity.ui.Graphics,System.Boolean)
void UserData::Draw_edit(pls::cs::Ref<pls::kairo::Graphics> g, bool isSoccerForm) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Draw_edit(kairo.unity.ui.Graphics,System.Boolean)",
                     game);
    {
        form::SoccerForm::ensure_initialized();
        form::GameForm::ensure_initialized();
        form::SubForm::ensure_initialized();

        pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(require(gm_)->teamId_[0]);
        pls::cs::Int32 num9, num, num2, num3;
        num3 = 0;
        num2 = num3;
        num = num2;
        num9 = num;
        pls::cs::Int32 num4 = 0;
        if (isSoccerForm) {
            num4 = form::SoccerForm::VIEW_Y();
            require(apdat_)->DrawWindow2(g, 240, 240 - form::SoccerForm::VIEW_Y() + 2 + 2, 9, num4);
        } else {
            num4 = form::GameForm::VIEW_Y();
            require(apdat_)->DrawWindow2(g, 240, 240 - form::GameForm::VIEW_Y(), 11, num4);
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->ClipRect(4.0f, num4, 232.0f, 236 - num4, true); });
        if (phase_ == 0 || phase_ == 9 || phase_ == 10 || phase_ == 11 || phase_ == 12 || phase_ == 13 ||
            phase_ == 14 || phase_ == 15 || phase_ == 16) {
            pls::cs::Int32 num5 = 64;
            pls::cs::Int32 num6 = 8;
            pls::cs::Int32 num7 = 20;
            pls::cs::Int32 num8 = 2;
            if (!isSoccerForm) {
                num9 = UserData::EDIT_POS_MENU()[0][0];
                num = UserData::EDIT_POS_MENU()[0][1];
                if (phase_ == 9 || phase_ == 10) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_MENU()[0][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_MENU()[1][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 11 || phase_ == 12 || phase_ == 13) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_MENU()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_MENU()[0][1];
                        return GameUtil::RateConvert(cs_arg0, 4, 8, cs_arg3, cs_arg4, true);
                    }());
                }
                for (pls::cs::Int32 i = 0; i < MENU_STR.length(); ++i) {
                    num2 = num9 + (num5 + num6) * (i % 3);
                    num3 = num + (num7 + num8) * (i / 3);
                    if (i == et_cur[0]) {
                        Draw_editButton(g, num2, num3, num5, num7, true, 0, i, true, false);
                    } else {
                        Draw_editButton(g, num2, num3, num5, num7, false, 0, i, true, false);
                    }
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                    });
                    form::SubForm::SetFontSize(g, 10);
                    if (kairo::unity::util::Language::English()) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::String cs_arg0 = MENU_STR[i];
                                require(g)->DrawString(cs_arg0, num2 + num5 / 2, num3 + 4 + 1, 2);
                            }());
                        });
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::String cs_arg0 = MENU_STR[i];
                                require(g)->DrawString(cs_arg0, num2 + num5 / 2, num3 + 4, 2);
                            }());
                        });
                    }
                    form::SubForm::ResetFontSize(g);
                    if (i == 0 && data::FormationData::IsExistNew()) {
                        form::SubForm::Draw_newMark(g, num2 + 20, num3 - 5, phaseCnt_);
                    } else if (i == 2 && data::PlayerData::IsExistNew()) {
                        form::SubForm::Draw_newMark(g, num2 + 20, num3 - 5, phaseCnt_);
                    }
                    if (i == et_cur[0]) {
                        {
                            auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                                require(require(apdat_)->resCom2_)->img;
                            require(cs_receiver)->Draw(g, num2 - 1, num3 + 10, cs_arg3, -1);
                        }
                    }
                }
            } else {
                num9 = UserData::EDIT_POS_MENU_SOC()[0][0];
                num = UserData::EDIT_POS_MENU_SOC()[0][1];
                if (phase_ == 9 || phase_ == 10) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_MENU_SOC()[0][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_MENU_SOC()[1][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 11 || phase_ == 12 || phase_ == 13) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_MENU_SOC()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_MENU_SOC()[0][1];
                        return GameUtil::RateConvert(cs_arg0, 4, 8, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 14) {
                    num9 = UserData::EDIT_POS_MENU_ENE()[1][0];
                } else if (phase_ == 15) {
                    num9 = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_MENU_ENE()[0][0];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_MENU_ENE()[1][0];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 16) {
                    num9 = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_MENU_ENE()[1][0];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_MENU_ENE()[0][0];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                }
                num2 = num9 + 26;
                num3 = num;
                if (et_cur[0] == 0) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(form::SubForm::SC_WINDOW_SELECT());
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->FillRect(num2, num3 + 2, 164.0f, 17.0f);
                    });
                    {
                        auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                            require(require(apdat_)->resCom2_)->img;
                        require(cs_receiver)->Draw(g, num2 - 1, num3 + 10, cs_arg3, -1);
                    }
                }
                pls::cs::Ref<data::TeamData> teamData2 =
                    require(apdat_)->tData_.get_Item(require(gm_)->teamId_[1]);
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawString(require(teamData)->name_, num2 + 81, num3 + 4, 2);
                });
                if (phase_ == 0) {
                    if (et_cur[0] == 1) {
                        {
                            pls::cs::Int32 cs_arg2 = num2 + 171 + phaseCnt_ % 16 / 8 * 4;
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 =
                                require(require(apdat_)->resCom2_)->seb.get_Item(24);
                            surface::GameView::AddTouchSeb(g, 1, cs_arg2, num3 + 10 + 26, cs_arg4, 1, 18);
                        }
                    } else {
                        {
                            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                            pls::cs::Int32 cs_arg2 = num2 + 171 + phaseCnt_ % 16 / 8 * 4;
                            pls::cs::Int32 cs_arg3 = num3 + 10 + 26;
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 =
                                require(require(apdat_)->resCom2_)->seb.get_Item(24);
                            pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 =
                                require(kairo::unity::surface::TouchOption::Create())->ExtendValues(65554);
                            surface::GameView::AddTouchSeb(cs_arg0, 26, cs_arg2, cs_arg3, cs_arg4, 1, 786433,
                                                           cs_arg7);
                        }
                    }
                }
                num2 = num9 + 26;
                num3 = num + 26;
                if (et_cur[0] == 1) {
                    Draw_editButton(g, num2, num3, 164, 21, true, 0, 1, true, false);
                    {
                        auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                            require(require(apdat_)->resCom2_)->img;
                        require(cs_receiver)->Draw(g, num2 - 1, num3 + 10, cs_arg3, -1);
                    }
                } else {
                    Draw_editButton(g, num2, num3, 164, 21, false, 0, 1, true, false);
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(0, 60, 183); }));
                });
                if (!require(gm_)->halfTime) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->DrawString(literal(u"前半キックオフ"), num2 + 81, num3 + 4, 2);
                    });
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->DrawString(literal(u"後半キックオフ"), num2 + 81, num3 + 4, 2);
                    });
                }
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(0);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(2);
                    require(apdat_)->DrawSeb(g, num2 + 19, num3 + 16, cs_arg3, cs_arg4, 0);
                }
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(0);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(2);
                    require(apdat_)->DrawSeb(g, num2 + 144, num3 + 16, cs_arg3, cs_arg4, 0);
                }
                num3 = num + 52;
                for (pls::cs::Int32 j = 0; j < 3; ++j) {
                    num2 = num9 + (num5 + num6) * (j % 3);
                    if (j + 2 == et_cur[0]) {
                        Draw_editButton(g, num2, num3, num5, num7, true, 0, j + 2, true, false);
                    } else {
                        Draw_editButton(g, num2, num3, num5, num7, false, 0, j + 2, true, false);
                    }
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                    });
                    form::SubForm::SetFontSize(g, 10);
                    if (kairo::unity::util::Language::English()) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::String cs_arg0 = MENU_STR[j];
                                require(g)->DrawString(cs_arg0, num2 + num5 / 2, num3 + 4 + 1, 2);
                            }());
                        });
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::String cs_arg0 = MENU_STR[j];
                                require(g)->DrawString(cs_arg0, num2 + num5 / 2, num3 + 4, 2);
                            }());
                        });
                    }
                    form::SubForm::ResetFontSize(g);
                    if (j == 0 && data::FormationData::IsExistNew()) {
                        form::SubForm::Draw_newMark(g, num2 + 20, num3 - 5, phaseCnt_);
                    } else if (j == 2 && data::PlayerData::IsExistNew()) {
                        form::SubForm::Draw_newMark(g, num2 + 20, num3 - 5, phaseCnt_);
                    }
                    if (j + 2 == et_cur[0]) {
                        {
                            auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                                require(require(apdat_)->resCom2_)->img;
                            require(cs_receiver)->Draw(g, num2 - 1, num3 + 10, cs_arg3, -1);
                        }
                    }
                }
            }
            if (phase_ == 14) {
                surface::GameView::AddTouchTouchOption(2, kairo::unity::surface::TouchOption::CreateInt(2));
            }
        }
        if (phase_ == 0 || phase_ == 1 || phase_ == 9 || phase_ == 10 || phase_ == 11 || phase_ == 12 ||
            phase_ == 13 || phase_ == 2 || phase_ == 3 || phase_ == 4 || phase_ == 5 || phase_ == 14 ||
            phase_ == 16 || phase_ == 15) {
            if (!isSoccerForm) {
                num9 = UserData::EDIT_POS_TOPHELP_F()[0][0];
                num = UserData::EDIT_POS_TOPHELP_F()[0][1];
                if (phase_ == 1 || phase_ == 2 || phase_ == 3 || phase_ == 4 || phase_ == 5) {
                    num9 = UserData::EDIT_POS_TOPHELP_F()[1][0];
                    num = UserData::EDIT_POS_TOPHELP_F()[1][1];
                } else if (phase_ == 9) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_TOPHELP_F()[0][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_TOPHELP_F()[1][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 11 || phase_ == 12) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_TOPHELP_F()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_TOPHELP_F()[0][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 10) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_TOPHELP_M()[0][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_TOPHELP_M()[1][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 13) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_TOPHELP_M()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_TOPHELP_M()[0][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                }
            } else {
                num9 = UserData::EDIT_POS_TOPHELP_F()[1][0];
                num = UserData::EDIT_POS_TOPHELP_F()[1][1];
                if (phase_ == 10) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_TOPHELP_F()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_TOPHELP_M()[1][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 13) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_TOPHELP_M()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_TOPHELP_F()[1][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                }
            }
            require(apdat_)->DrawBox(g, num9 - 2, num - 11, num9 - 2 + 213, num - 11 + 22);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(172);
                    require(g)->DrawImage(cs_arg0, num9 + 5, num, 0, 0, 16, 21);
                }());
            });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK()); });
            if (phase_ == 1 || phase_ == 2 || phase_ == 3 || phase_ == 4 || phase_ == 5 || phase_ == 12) {
                if (phase_ == 5 || phase_ == 12) {
                    pls::cs::String empty = pls::cs::String(u"");
                    if (et_cur[4] == 0) {
                        empty = literal(u"ﾊﾞﾗﾝｽ重視で試合に臨みます。");
                    } else if (et_cur[4] == 1) {
                        empty = literal(u"攻める意識がやや高くなります。");
                    } else {
                        empty = literal(u"下がり目でﾃﾞｨﾌｪﾝｽします。");
                    }
                    kairo::unity::ui::Graphics::DrawString2(require(g), empty, num9 + 28, num + 6);
                } else if (phase_ == 1) {
                    pls::cs::Ref<data::FormationData> formationData =
                        pls::cs::unbox<pls::cs::Ref<data::FormationData>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                                    pls::cs::Int32 cs_arg0 = et_cur[1];
                                    return kl_java_util::Vector_2_ElementAt(require(editTest_formation),
                                                                            cs_arg0);
                                }());
                            }));
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(require(formationData)->flag_, 2);
                        })) {
                        kairo::unity::ui::Graphics::DrawString2(
                            require(g), literal(u"左ｿﾌﾄｷｰで編集できます。"), num9 + 28, num + 6);
                    } else {
                        kairo::unity::ui::Graphics::DrawString2(require(g), require(formationData)->explain_,
                                                                num9 + 28, num + 6);
                    }
                } else if (phase_ == 2) {
                    kairo::unity::ui::Graphics::DrawString2(
                        require(g), literal(u"移動元を選択してください。"), num9 + 28, num + 6);
                } else {
                    kairo::unity::ui::Graphics::DrawString2(
                        require(g), literal(u"移動先を選択してください。"), num9 + 28, num + 6);
                }
            } else if (!isSoccerForm) {
                {
                    pls::cs::String cs_arg0 = HELP_STR[et_cur[0]];
                    kairo::unity::ui::Graphics::DrawString2(require(g), cs_arg0, num9 + 28, num + 6);
                }
            } else if (phase_ == 14 || phase_ == 16 || phase_ == 15) {
                kairo::unity::ui::Graphics::DrawString2(require(g), literal(u"相手ﾁｰﾑの情報です。"),
                                                        num9 + 28, num + 6);
            } else if (et_cur[0] == 0) {
                kairo::unity::ui::Graphics::DrawString2(require(g), literal(u"相手ﾁｰﾑの情報です。"),
                                                        num9 + 28, num + 6);
            } else if (et_cur[0] == 1) {
                if (!require(gm_)->halfTime) {
                    kairo::unity::ui::Graphics::DrawString2(require(g), literal(u"試合開始です!"), num9 + 28,
                                                            num + 6);
                } else {
                    kairo::unity::ui::Graphics::DrawString2(require(g), literal(u"後半キックオフです!"),
                                                            num9 + 28, num + 6);
                }
            } else {
                {
                    pls::cs::String cs_arg0 = HELP_STR[et_cur[0] - 2];
                    kairo::unity::ui::Graphics::DrawString2(require(g), cs_arg0, num9 + 28, num + 6);
                }
            }
        }
        if (phase_ == 1 || phase_ == 9 || phase_ == 11 || phase_ == 12 || phase_ == 2 || phase_ == 3 ||
            phase_ == 4 || phase_ == 5) {
            pls::cs::Int32 num10 = 60;
            pls::cs::Int32 num11 = 4;
            pls::cs::Int32 num12 = 18;
            pls::cs::Int32 num13 = 2;
            num9 = UserData::EDIT_POS_MENU_F()[0][0];
            num = UserData::EDIT_POS_MENU_F()[0][1];
            if (phase_ == 9) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_MENU_F()[1][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_MENU_F()[0][1];
                    return GameUtil::RateConvert(cs_arg0, 4, 8, cs_arg3, cs_arg4, true);
                }());
            } else if (phase_ == 11 || phase_ == 12) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_MENU_F()[0][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_MENU_F()[1][1];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            }
            bool isTouch = false;
            if (phase_ == 1) {
                isTouch = true;
            }
            for (pls::cs::Int32 k = scrollValue_ * 3;
                 k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                     return kl_java_util::Vector_2_Size(require(editTest_formation));
                 });
                 ++k) {
                pls::cs::Int32 num14 = k - scrollValue_ * 3;
                if (num14 / 3 >= 3) {
                    break;
                }
                pls::cs::Ref<data::FormationData> formationData2 =
                    pls::cs::unbox<pls::cs::Ref<data::FormationData>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(editTest_formation), k);
                        }));
                num2 = num9 + (num10 + num11) * (num14 % 3);
                num3 = num + (num12 + num13) * (num14 / 3);
                if (k == et_cur[1]) {
                    Draw_editButton(g, num2, num3, num10, num12, true, 1, k, isTouch, true);
                } else {
                    Draw_editButton(g, num2, num3, num10, num12, false, 1, k, isTouch, true);
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawString(require(formationData2)->name_, num2 + num10 / 2, num3 + 4,
                                                  2);
                });
                if (require(formationData2)->IsNew()) {
                    form::SubForm::Draw_newMark(g, num2 + 20, num3 - 5, phaseCnt_);
                }
                if (k == et_cur[1]) {
                    if (phase_ == 2 || phase_ == 3 || phase_ == 4 || phase_ == 5) {
                        {
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(require(apdat_)->resCom2_)->seb.get_Item(60);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(require(apdat_)->resCom2_)->img.get_Item(70);
                            require(apdat_)->DrawSeb(g, num2 - 4, num3 + 9, cs_arg3, cs_arg4, 0);
                        }
                    } else {
                        {
                            auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                                require(require(apdat_)->resCom2_)->img;
                            require(cs_receiver)->Draw(g, num2 - 4, num3 + 9, cs_arg3, -1);
                        }
                    }
                }
            }
            if (phase_ == 1) {
                {
                    auto cs_receiver = apdat_;
                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                    pls::cs::Int32 cs_arg2 = num;
                    pls::cs::Int32 cs_arg5 = scrollValue_;
                    pls::cs::Int32 cs_arg6 =
                        (pls::diagnostic::api_call([&]() -> decltype(auto) {
                             return kl_java_util::Vector_2_Size(require(editTest_formation));
                         }) +
                         2) /
                        3;
                    require(cs_receiver)
                        ->DrawVerticalScroll3(cs_arg0, 221, cs_arg2, 3, 59, cs_arg5, cs_arg6, 3);
                }
            }
        }
        if (phase_ == 6 || phase_ == 7 || phase_ == 8 || phase_ == 10 || phase_ == 13) {
            num9 = UserData::EDIT_POS_MENU_M()[0][0];
            num = UserData::EDIT_POS_MENU_M()[0][1];
            if (phase_ == 10) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_MENU_M()[1][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_MENU_M()[0][1];
                    return GameUtil::RateConvert(cs_arg0, 4, 8, cs_arg3, cs_arg4, true);
                }());
            } else if (phase_ == 13) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_MENU_M()[0][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_MENU_M()[1][1];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            }
            pls::cs::Int32 num15 = 18;
            pls::cs::Int32 num16 = 0;
            pls::cs::Int32 num17 = 0;
            pls::cs::Int32 num18 = 0;
            for (pls::cs::Int32 l = 0; l < editTest_team.length(); ++l) {
                pls::cs::Int32 cs_arg2_132 = pls::cs::Int32(editTest_team.length()) - 1;
                pls::cs::Int32 cs_arg3_132 = num9 + pls::cs::Int32(212) / editTest_team.length() / 2;
                pls::cs::Int32 cs_arg4_132 = num9 + 212 - pls::cs::Int32(212) / editTest_team.length() / 2;
                pls::cs::Int32 num19 =
                    GameUtil::RateConvert(l, 0, cs_arg2_132, cs_arg3_132, cs_arg4_132, true);
                pls::cs::Ref<kl_java_util::Vector> vector = editTest_team.get_Item(l);
                num17 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require((pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_ElementAt(require(editTest_category),
                                                                                   l);
                                       }))))
                        ->IntValue();
                });
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(47);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(51);
                    require(apdat_)->DrawSeb(g, num19 - 12, num + 3, cs_arg3, cs_arg4, num17);
                }
                pls::cs::Int32 num20 = pls::cs::Int32(212) / editTest_team.length() - 2;
                for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(vector));
                                           });
                     ++m) {
                    IntArray array =
                        pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(vector), m);
                        }));
                    num2 = num19 - num20 / 2;
                    num3 = num + (num15 + num16) * (m + 1) - 2;
                    if (array[2] != -1) {
                        pls::cs::Int32 num21 = array[2];
                        if (phase_ == 8) {
                            IntArray array2 =
                                pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                                        auto cs_receiver = editTest_team.get_Item(et_cur[5] / 10);
                                        pls::cs::Int32 cs_arg0 = et_cur[5] % 10;
                                        return kl_java_util::Vector_2_ElementAt(require(cs_receiver),
                                                                                cs_arg0);
                                    }());
                                }));
                            IntArray array3 =
                                pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                                        auto cs_receiver = editTest_team.get_Item(et_cur[6] / 10);
                                        pls::cs::Int32 cs_arg0 = et_cur[6] % 10;
                                        return kl_java_util::Vector_2_ElementAt(require(cs_receiver),
                                                                                cs_arg0);
                                    }());
                                }));
                            if (num21 == array2[2]) {
                                num21 = array3[2];
                            } else if (num21 == array3[2]) {
                                num21 = array2[2];
                            }
                        }
                        pls::cs::Ref<data::PlayerData> playerData =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(memberPDataist_), num21);
                                }));
                        bool flag = false;
                        if (editMemDispMode == 0) {
                            if (phase_ == 6 && l == et_cur[5] / 10 && m == et_cur[5] % 10) {
                                Draw_editButton(g, num2, num3, num20, num15, true, 5, l * 10 + m, true, flag);
                            } else if (phase_ == 7 && l == et_cur[6] / 10 && m == et_cur[6] % 10) {
                                Draw_editButton(g, num2, num3, num20, num15, true, 6, l * 10 + m, true, flag);
                            } else {
                                pls::cs::Int32 type = 5;
                                if (phase_ == 7) {
                                    type = 6;
                                }
                                Draw_editButton(g, num2, num3, num20, num15, false, type, l * 10 + m, true,
                                                flag);
                            }
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                            });
                            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::Language::Japanese();
                                })) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return require(g)->DrawString(require(playerData)->name_,
                                                                  num2 + num20 / 2, num3 + 3, 2);
                                });
                            } else {
                                if (editTest_team.length() == 4) {
                                    form::SubForm::SetFontSize(g, 10);
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return require(g)->DrawString(require(playerData)->name_,
                                                                      num2 + num20 / 2, num3 + 3 + 1, 2);
                                    });
                                } else {
                                    form::SubForm::SetFontSize(g, 8);
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return require(g)->DrawString(require(playerData)->name_,
                                                                      num2 + num20 / 2, num3 + 3 + 1 + 1, 2);
                                    });
                                }
                                form::SubForm::ResetFontSize(g);
                            }
                        } else if (editMemDispMode == 1) {
                            if (editTest_team.length() == 4) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                            require(require(apdat_)->resCom2_)->img.get_Item(127);
                                        require(g)->DrawImage(cs_arg0, num2, num3, 0, 0, 51, 18);
                                    }());
                                });
                            } else {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                            require(require(apdat_)->resCom2_)->img.get_Item(127);
                                        require(g)->DrawImage(cs_arg0, num2, num3, 51, 0, 40, 18);
                                    }());
                                });
                            }
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(g)->ClipRect(num2, num3, 13.0f, 17.0f, true);
                            });
                            SetDispPlayerData(0, selectUniform_, require(playerData)->faceImg_, 0, 1,
                                              require(playerData)->role_, 0);
                            DrawDispPlayer(g, num2 + 7, num3 + 16 + 5);
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(g)->PopClip(); });
                            if (num21 == 0) {
                                num18 = data::PlayerData::GetPhyParamBarW(
                                    require(playerData)->paramPhysical_[4], num20 - 11);
                                if (editTest_team.length() == 4) {
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return ([&]() -> void {
                                            pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                                require(require(apdat_)->resCom2_)->img.get_Item(127);
                                            require(g)->DrawImage(cs_arg0, num2 + 13, num3 + 1 + 5, 13, 52,
                                                                  num18, 6);
                                        }());
                                    });
                                } else {
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return ([&]() -> void {
                                            pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                                require(require(apdat_)->resCom2_)->img.get_Item(127);
                                            require(g)->DrawImage(cs_arg0, num2 + 13, num3 + 1 + 5, 64, 52,
                                                                  num18, 6);
                                        }());
                                    });
                                }
                            } else {
                                num18 = 0;
                                for (pls::cs::Int32 n = 0; n < 4; ++n) {
                                    num18 = data::PlayerData::GetPhyParamBarW(
                                        require(playerData)->paramPhysical_[n], num20 - 11);
                                    if (editTest_team.length() == 4) {
                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return ([&]() -> void {
                                                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                                    require(require(apdat_)->resCom2_)->img.get_Item(127);
                                                require(g)->DrawImage(cs_arg0, num2 + 13, num3 + 1 + n * 4,
                                                                      13, 36 + n * 4, num18, 4);
                                            }());
                                        });
                                    } else {
                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return ([&]() -> void {
                                                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                                    require(require(apdat_)->resCom2_)->img.get_Item(127);
                                                require(g)->DrawImage(cs_arg0, num2 + 13, num3 + 1 + n * 4,
                                                                      64, 36 + n * 4, num18, 4);
                                            }());
                                        });
                                    }
                                }
                            }
                        } else if (editMemDispMode == 2) {
                            if (editTest_team.length() == 4) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                            require(require(apdat_)->resCom2_)->img.get_Item(127);
                                        require(g)->DrawImage(cs_arg0, num2, num3, 0, 18, 51, 18);
                                    }());
                                });
                            } else if (kairo::unity::util::Language::English()) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                            require(require(apdat_)->resCom2_)->img.get_Item(127);
                                        require(g)->DrawImage(cs_arg0, num2, num3, 51, 18, 40, 18);
                                    }());
                                });
                            } else {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                            require(require(apdat_)->resCom2_)->img.get_Item(127);
                                        require(g)->DrawImage(cs_arg0, num2, num3, 51, 18, 51, 18);
                                    }());
                                });
                            }
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(g)->ClipRect(num2, num3, 13.0f, 17.0f, true);
                            });
                            SetDispPlayerData(0, selectUniform_, require(playerData)->faceImg_, 0, 1,
                                              require(playerData)->role_, 0);
                            DrawDispPlayer(g, num2 + 7, num3 + 16 + 5);
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(g)->PopClip(); });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(g)->SetColor(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::Graphics::GetColorOfRGB(208, 237, 246);
                                    }));
                            });
                            require(apdat_)->DrawPositionStatus(g, num17, -1, num2 + 13 + 2, num3 + 3);
                            pls::cs::Int32 positionRank =
                                data::PlayerData::GetPositionRank(num17, playerData);
                            if (editTest_team.length() == 4) {
                                {
                                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                        require(require(apdat_)->resCom2_)->seb.get_Item(65);
                                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                        require(require(apdat_)->resCom2_)->img.get_Item(75);
                                    require(apdat_)->DrawSeb(g, num2 + num20 - 8 - 6, num3 + 15, cs_arg3,
                                                             cs_arg4, positionRank);
                                }
                            } else {
                                {
                                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                        require(require(apdat_)->resCom2_)->seb.get_Item(65);
                                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                        require(require(apdat_)->resCom2_)->img.get_Item(75);
                                    require(apdat_)->DrawSeb(g, num2 + num20 - 8, num3 + 15, cs_arg3, cs_arg4,
                                                             positionRank);
                                }
                            }
                        } else if (editMemDispMode == 3) {
                            if (editTest_team.length() == 4) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                            require(require(apdat_)->resCom2_)->img.get_Item(127);
                                        require(g)->DrawImage(cs_arg0, num2, num3, 0, 18, 51, 18);
                                    }());
                                });
                            } else if (kairo::unity::util::Language::English()) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                            require(require(apdat_)->resCom2_)->img.get_Item(127);
                                        require(g)->DrawImage(cs_arg0, num2, num3, 51, 18, 40, 18);
                                    }());
                                });
                            } else {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                            require(require(apdat_)->resCom2_)->img.get_Item(127);
                                        require(g)->DrawImage(cs_arg0, num2, num3, 51, 18, 51, 18);
                                    }());
                                });
                            }
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(g)->ClipRect(num2, num3, 13.0f, 17.0f, true);
                            });
                            SetDispPlayerData(0, selectUniform_, require(playerData)->faceImg_, 0, 1,
                                              require(playerData)->role_, 0);
                            DrawDispPlayer(g, num2 + 7, num3 + 16 + 5);
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(g)->PopClip(); });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(g)->SetColor(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::Graphics::GetColorOfRGB(208, 237, 246);
                                    }));
                            });
                            if (editTest_team.length() == 4) {
                                {
                                    auto cs_receiver = apdat_;
                                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                                    pls::cs::String cs_arg1 = form::MyFormBase::LT(literal(u"Lv"));
                                    require(cs_receiver)
                                        ->DrawLv(cs_arg0, cs_arg1, num2 + 13 + 2 + 2, num3 + 3);
                                }
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        pls::cs::String cs_arg0 = ([&]() {
                                            auto cs_left = integer_string(require(playerData)->lv_);
                                            auto cs_right = pls::cs::String(u"");
                                            return pls::cs::String::concat(cs_left, cs_right);
                                        }());
                                        require(g)->DrawString(cs_arg0, num2 + num20 - 1 - 3, num3 + 3, 4);
                                    }());
                                });
                            } else {
                                {
                                    auto cs_receiver = apdat_;
                                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                                    pls::cs::String cs_arg1 = form::MyFormBase::LT(literal(u"Lv"));
                                    pls::cs::Int32 cs_arg2 =
                                        num2 + 15 - (kairo::unity::util::Language::English() ? 2 : 0);
                                    require(cs_receiver)->DrawLv(cs_arg0, cs_arg1, cs_arg2, num3 + 3);
                                }
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        pls::cs::String cs_arg0 = ([&]() {
                                            auto cs_left = integer_string(require(playerData)->lv_);
                                            auto cs_right = pls::cs::String(u"");
                                            return pls::cs::String::concat(cs_left, cs_right);
                                        }());
                                        require(g)->DrawString(cs_arg0, num2 + num20 - 1, num3 + 3, 4);
                                    }());
                                });
                            }
                        } else if (editMemDispMode == 4) {
                            Draw_editButton(g, num2, num3, num20, num15, false, 0, m, false, false);
                            pls::cs::Int32 sallay = require(playerData)->GetSallay();
                            if (editTest_team.length() == 4) {
                                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_unity_util::Language::Japanese();
                                    })) {
                                    require(apdat_)->DrawNumImageLongIntInt(
                                        g, 78, pls::cs::cast_integral<pls::cs::Int64>(sallay),
                                        num2 + num20 - 2 - 9 - 2, num3 + 4, 0, 4);
                                    {
                                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                            require(require(apdat_)->resCom2_)->seb.get_Item(78);
                                        pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                            require(require(apdat_)->resCom2_)->img.get_Item(105);
                                        require(apdat_)->DrawSeb(g, num2 + num20 - 2 - 9 + 1 - 2, num3 + 4,
                                                                 cs_arg3, cs_arg4, 17);
                                    }
                                } else if (main::AppData::IsLanguageOther()) {
                                    require(apdat_)->DrawMoney(
                                        g, 78, pls::cs::cast_integral<pls::cs::Int64>(sallay),
                                        num2 + num20 - 2 - 9 - 2 + 10, num3 + 4, 0, 0, 4);
                                } else {
                                    bool flag2 =
                                        require(require(main::AppData::GetInstance())->sysSave_)->ints[14] ==
                                        1;
                                    pls::cs::Int32 num22 = 0;
                                    if (!flag2) {
                                        num22 = 1;
                                    }
                                    if (sallay >= 1000 && !flag2) {
                                        require(apdat_)->DrawMoney3(
                                            g, 78, pls::cs::cast_integral<pls::cs::Int64>(sallay),
                                            num2 + num20 - 2 - 9 - 2 + 10 + num22, num3 + 4, 0, 0, 4);
                                    } else {
                                        require(apdat_)->DrawMoney(
                                            g, 78, pls::cs::cast_integral<pls::cs::Int64>(sallay),
                                            num2 + num20 - 2 - 9 - 2 + 10 + num22, num3 + 4, 0, 0, 4);
                                    }
                                }
                            } else if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_unity_util::Language::Japanese();
                                       })) {
                                require(apdat_)->DrawNumImageLongIntInt(
                                    g, 78, pls::cs::cast_integral<pls::cs::Int64>(sallay),
                                    num2 + num20 - 2 - 2, num3 + 4, 0, 4);
                            } else if (main::AppData::IsLanguageOther()) {
                                require(apdat_)->DrawMoney2(g, 78,
                                                            pls::cs::cast_integral<pls::cs::Int64>(sallay),
                                                            num2 + num20 - 2 - 2, num3 + 4, -1, 0, 4);
                            } else {
                                bool recoveredMoneyStyle =
                                    require(require(main::AppData::GetInstance())->sysSave_)->ints[14] == 1;
                                if (recoveredMoneyStyle) {
                                    require(apdat_)->DrawMoney2(
                                        g, 78, pls::cs::cast_integral<pls::cs::Int64>(sallay),
                                        num2 + num20 - 2 - 2 + 2, num3 + 4, 0, 0, 4);
                                } else if (sallay >= 1000) {
                                    require(apdat_)->DrawMoney2(
                                        g, 78, pls::cs::cast_integral<pls::cs::Int64>(sallay),
                                        num2 + num20 - 2 - 2 - 8 + 5, num3 + 4, -1, 0, 4);
                                } else {
                                    require(apdat_)->DrawMoney2(
                                        g, 78, pls::cs::cast_integral<pls::cs::Int64>(sallay),
                                        num2 + num20 - 2 - 2 - 8 + 3, num3 + 4, -1, 0, 4);
                                }
                            }
                        }
                        if (editMemDispMode == 1 || editMemDispMode == 2 || editMemDispMode == 3 ||
                            editMemDispMode == 4) {
                            pls::cs::Int32 num23 = 1114112;
                            if (phase_ == 7) {
                                num23 = 1179648;
                            }
                            if (flag) {
                                surface::GameView::AddTouch(
                                    g, 23, num2, num3, num20, num15, num23 | (l * 10 + m),
                                    require(kairo::unity::surface::TouchOption::CreateInt(16))
                                        ->Margin(5, 5, 5, 5));
                            } else {
                                surface::GameView::AddTouch(g, 23, num2, num3, num20, num15,
                                                            num23 | (l * 10 + m));
                            }
                        }
                    }
                    if (phase_ == 7 && l == et_cur[5] / 10 && m == et_cur[5] % 10) {
                        Draw_colorRect(g, num2, num3, phaseCnt_, num20 - 1, num15 - 1);
                    }
                    if (phase_ == 6 && l == et_cur[5] / 10 && m == et_cur[5] % 10) {
                        {
                            auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                                require(require(apdat_)->resCom2_)->img;
                            require(cs_receiver)->Draw(g, num2 - 3, num3 + 9, cs_arg3, -1);
                        }
                    } else if (phase_ == 7 && l == et_cur[6] / 10 && m == et_cur[6] % 10) {
                        {
                            auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                                require(require(apdat_)->resCom2_)->img;
                            require(cs_receiver)->Draw(g, num2 - 3, num3 + 9, cs_arg3, -1);
                        }
                    }
                }
            }
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->PopClip(); });
    }
}

// M:game.UserData.Draw_edit2(kairo.unity.ui.Graphics,System.Boolean)
void UserData::Draw_edit2(pls::cs::Ref<pls::kairo::Graphics> g, bool isSoccerForm) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Draw_edit2(kairo.unity.ui.Graphics,System.Boolean)",
                     game);
    {
        form::SoccerForm::ensure_initialized();
        form::GameForm::ensure_initialized();
        form::SubForm::ensure_initialized();

        pls::cs::Int32 coalescedValue, num, num2, num3;
        num3 = 0;
        num2 = num3;
        num = num2;
        coalescedValue = num;
        pls::cs::Int32 num4 = 0;
        if (isSoccerForm) {
            num4 = form::SoccerForm::VIEW_Y();
        } else {
            num4 = form::GameForm::VIEW_Y();
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->ClipRect(13.0f, num4, 221.0f, 236 - num4, true); });
        if (phase_ == 0 || phase_ == 1 || phase_ == 9 || phase_ == 11 || phase_ == 12 || phase_ == 6 ||
            phase_ == 10 || phase_ == 13 || phase_ == 7 || phase_ == 8 || phase_ == 2 || phase_ == 3 ||
            phase_ == 4 || phase_ == 5 || phase_ == 14 || phase_ == 16 || phase_ == 15) {
            if (!isSoccerForm) {
                coalescedValue = UserData::EDIT_POS_FOR_F()[0][0];
                num = UserData::EDIT_POS_FOR_F()[0][1];
                if (phase_ == 1) {
                    num = UserData::EDIT_POS_FOR_F()[1][1];
                } else if (phase_ == 9) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_F()[0][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_F()[1][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 11) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_F()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_F()[0][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 12) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_F()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_F()[0][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 2) {
                    num = UserData::EDIT_POS_FOR_F()[1][1];
                } else if (phase_ == 3) {
                    num = UserData::EDIT_POS_FOR_F()[1][1];
                } else if (phase_ == 4) {
                    num = UserData::EDIT_POS_FOR_F()[1][1];
                } else if (phase_ == 5) {
                    num = UserData::EDIT_POS_FOR_F()[1][1];
                } else if (phase_ == 6) {
                    num = UserData::EDIT_POS_FOR_M()[1][1];
                } else if (phase_ == 7) {
                    num = UserData::EDIT_POS_FOR_M()[1][1];
                } else if (phase_ == 8) {
                    num = UserData::EDIT_POS_FOR_M()[1][1];
                } else if (phase_ == 10) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_M()[0][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_M()[1][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 13) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_M()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_M()[0][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                }
            } else {
                coalescedValue = UserData::EDIT_POS_FOR_F()[1][0];
                num = UserData::EDIT_POS_FOR_F()[1][1];
                if (phase_ == 6) {
                    num = UserData::EDIT_POS_FOR_M()[1][1];
                } else if (phase_ == 7) {
                    num = UserData::EDIT_POS_FOR_M()[1][1];
                } else if (phase_ == 8) {
                    num = UserData::EDIT_POS_FOR_M()[1][1];
                } else if (phase_ == 14) {
                    coalescedValue = UserData::EDIT_POS_FOR_ENE()[1][0];
                } else if (phase_ == 10) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_F()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_M()[1][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 13) {
                    num = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_M()[1][1];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_F()[1][1];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 15) {
                    coalescedValue = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_F()[1][0];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_ENE()[1][0];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 16) {
                    coalescedValue = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_ENE()[1][0];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_F()[1][0];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                }
            }
            for (pls::cs::Int32 i = 0; i < 6; ++i) {
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(45);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(49);
                    require(apdat_)->DrawSeb(g, coalescedValue + 107 - 107 + 33 * i, num, cs_arg3, cs_arg4,
                                             0);
                }
            }
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(45);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(49);
                require(apdat_)->DrawSeb(g, coalescedValue + 107 - 107 + 198, num, cs_arg3, cs_arg4, 1);
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255); }));
            });
            pls::cs::Int32 num6 = 16;
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->DrawArc(coalescedValue + 107 - 1 - num6 / 2 - 1, num + 47 - num6 / 2 - 1,
                                           num6 + 2, num6 + 2, 0.0f, 360.0f, 1.0f);
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->DrawLine(coalescedValue + 107 - 1, num, coalescedValue + 107 - 1,
                                            num + 94 - 1, 1.0f);
            });
            pls::cs::Int32 num7 = 35;
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255); }));
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->DrawRect(coalescedValue, num + 47 - 32, num7, 65.0f);
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->DrawRect(coalescedValue, num + 47 - 16, num7 / 2, 32.0f);
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->DrawRect(coalescedValue + 214 - num7, num + 47 - 32, num7 - 1, 65.0f);
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->DrawRect(coalescedValue + 214 - num7 / 2, num + 47 - 16, num7 / 2 - 1,
                                            32.0f);
            });
            if (phase_ == 2 || phase_ == 3 || phase_ == 4) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(219, 255, 109);
                    }));
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->FillRect(coalescedValue + 35, num + 2, 48.0f, 90.0f);
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(255, 156, 40);
                    }));
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->FillRect(coalescedValue + 35 + 48, num + 2, 48.0f, 90.0f);
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(255, 56, 49);
                    }));
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->FillRect(coalescedValue + 35 + 96, num + 2, 48.0f, 90.0f);
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(85, 85, 85); }));
                });
                for (pls::cs::Int32 unusedOriginalSlot8, j = 0; j <= 9; ++j) {
                    num3 = GameUtil::RateConvert(j, 0, 9, num + 2, num + 94 - 1 - 2, true);
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->DrawLine(coalescedValue + 35, num3, coalescedValue + 214 - 1 - 35,
                                                    num3, 1.0f);
                    });
                }
                for (pls::cs::Int32 k = 0; k <= 9; ++k) {
                    num2 = GameUtil::RateConvert(k, 0, 9, coalescedValue + 214 - 1 - 35, coalescedValue + 35,
                                                 true);
                    if (k % 3 == 0 && k != 0 && k != 9) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::kairo::Graphics::GetColorOfRGB(59, 228, 255);
                            }));
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->FillRect(coalescedValue - 13 + num2 - 1, num + 2, 3.0f, 90.0f);
                        });
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::kairo::Graphics::GetColorOfRGB(85, 85, 85);
                            }));
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->DrawLine(coalescedValue - 13 + num2, num + 2, num2,
                                                        num + 94 - 1 - 2, 1.0f);
                        });
                    }
                }
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255); }));
            });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->DrawRect(coalescedValue, num, 213.0f, 93.0f); });
            IntArray array = IntArray{};
            IntArray array2 = IntArray{};
            if (phase_ == 6 && ([&]() -> bool {
                    auto cs_left = et_cur[5] / 10;
                    auto cs_right = editTest_team.length();
                    return cs_left < cs_right;
                }()) &&
                ([&]() -> bool {
                    auto cs_left = et_cur[5] % 10;
                    auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(editTest_team.get_Item(et_cur[5] / 10)));
                    });
                    return cs_left < cs_right;
                }())) {
                array = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                        auto cs_receiver = editTest_team.get_Item(et_cur[5] / 10);
                        pls::cs::Int32 cs_arg0 = et_cur[5] % 10;
                        return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                    }());
                }));
            }
            if (phase_ == 7) {
                if (([&]() -> bool {
                        auto cs_left = et_cur[5] / 10;
                        auto cs_right = editTest_team.length();
                        return cs_left < cs_right;
                    }()) &&
                    ([&]() -> bool {
                        auto cs_left = et_cur[5] % 10;
                        auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(
                                require(editTest_team.get_Item(et_cur[5] / 10)));
                        });
                        return cs_left < cs_right;
                    }())) {
                    array2 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                            auto cs_receiver = editTest_team.get_Item(et_cur[5] / 10);
                            pls::cs::Int32 cs_arg0 = et_cur[5] % 10;
                            return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                        }());
                    }));
                }
                if (([&]() -> bool {
                        auto cs_left = et_cur[6] / 10;
                        auto cs_right = editTest_team.length();
                        return cs_left < cs_right;
                    }()) &&
                    ([&]() -> bool {
                        auto cs_left = et_cur[6] % 10;
                        auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(
                                require(editTest_team.get_Item(et_cur[6] / 10)));
                        });
                        return cs_left < cs_right;
                    }())) {
                    array = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                            auto cs_receiver = editTest_team.get_Item(et_cur[6] / 10);
                            pls::cs::Int32 cs_arg0 = et_cur[6] % 10;
                            return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                        }());
                    }));
                }
            }
            if (phase_ == 2 || phase_ == 3) {
                num2 = GameUtil::RateConvert(et_cur[2] % 10, 0, 9, coalescedValue + 214 - 1 - 35,
                                             coalescedValue + 35, true);
                num3 = GameUtil::RateConvert(et_cur[2] / 10, 0, 9, num + 2, num + 94 - 1 - 2, true);
                num2 += coalescedValue - 13;
                pls::cs::Int32 num8 = 15;
                pls::cs::Int32 num9 = 9;
                pls::cs::Int32 num10 = 200;
                if (phase_ == 3) {
                    num10 = 100;
                    Draw_colorRect(g, num2 - num8, num3, phaseCnt_, num8 - 1, num9 - 1, num10);
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Graphics::GetColorOfRGB(154, 234, 255);
                        }));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->FillRect(num2 - num8, num3 + 1, num8, num9);
                    });
                }
                if (phase_ == 3 && et_cur[2] != et_cur[3]) {
                    num2 = GameUtil::RateConvert(et_cur[3] % 10, 0, 9, coalescedValue + 214 - 1 - 35,
                                                 coalescedValue + 35, true);
                    num3 = GameUtil::RateConvert(et_cur[3] / 10, 0, 9, num + 2, num + 94 - 1 - 2, true);
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Graphics::GetColorOfRGB(154, 234, 255);
                        }));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->FillRect(num2 - num8, num3 + 1, num8, num9);
                    });
                }
                pls::cs::Int32 num11 = 0;
                pls::cs::Int32 num12 = 0;
                pls::cs::Int32 num13 = 0;
                pls::cs::Int32 num14 = 0;
                for (pls::cs::Int32 l = 0; l < 9; ++l) {
                    for (pls::cs::Int32 m = 0; m < 9; ++m) {
                        num2 = GameUtil::RateConvert(l, 0, 9, coalescedValue + 214 - 1 - 35,
                                                     coalescedValue + 35, true);
                        num3 = GameUtil::RateConvert(m, 0, 9, num + 2, num + 94 - 1 - 2, true);
                        num2 += coalescedValue - 13;
                        num11 = num2 - num8;
                        num12 = num3 + 1;
                        num13 = num8;
                        num14 = num9;
                        if (phase_ == 2) {
                            surface::GameView::AddTouch(
                                g, 23, num11, num12, num13, num14, 0xE0000 | (m * 10 + l),
                                require(kairo::unity::surface::TouchOption::Create())->Margin(5, 5, 5, 5));
                        } else {
                            surface::GameView::AddTouch(
                                g, 23, num11, num12, num13, num14, 0xF0000 | (m * 10 + l),
                                require(kairo::unity::surface::TouchOption::Create())->Margin(5, 5, 5, 5));
                        }
                    }
                }
            }
            if (phase_ != 2 && phase_ != 3 && phase_ != 4 && phase_ != 14) {
                num2 = coalescedValue + 161;
                num3 = num + 84;
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(128);
                        require(g)->DrawImage(cs_arg0, num2, num3 - 2);
                    }());
                });
                StringArray array3 =
                    StringArray::from({literal(u"通常"), literal(u"攻め"), literal(u"守り")});
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                });
                form::SubForm::SetFontSize(g, 10);
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::String cs_arg0 = ([&]() {
                            auto cs_left = form::MyFormBase::LT(literal(u"ﾀｲﾌﾟ"));
                            auto cs_right = form::MyFormBase::LT(array3[selectFormationType_]);
                            return pls::cs::String::concat(cs_left, cs_right);
                        }());
                        require(g)->DrawString(cs_arg0, num2 + 5 + 24, num3 + 2, 2);
                    }());
                });
                form::SubForm::ResetFontSize(g);
            }
            pls::cs::Int32 seb = 0;
            pls::cs::Int32 num15 = 0;
            for (pls::cs::Int32 n = 0; n < editForPos.length(); ++n) {
                pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                            pls::cs::Int32 cs_arg0 = editForPos[n][2];
                            return kl_java_util::Vector_2_ElementAt(require(memberPDataist_), cs_arg0);
                        }());
                    }));
                num2 = editForPos[n][0];
                num3 = editForPos[n][1];
                num2 += coalescedValue - 13;
                num15 = phaseCnt_ % 16 / 4;
                SetDispPlayerData(seb, selectUniform_, require(playerData)->faceImg_, num15, 1,
                                  require(playerData)->role_, 0);
                DrawDispPlayer(g, num2, num3 + 2);
                if (([&]() {
                        auto cs_left = pls::cs::box(array);
                        auto cs_right = pls::cs::box(IntArray{});
                        return cs_left != cs_right;
                    }()) &&
                    ([&]() -> bool {
                        auto cs_left = array[2];
                        auto cs_right = editForPos[n][2];
                        return cs_left == cs_right;
                    }())) {
                    {
                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                            require(require(apdat_)->resCom2_)->seb.get_Item(62);
                        pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                            require(require(apdat_)->resCom2_)->img.get_Item(71);
                        require(apdat_)->DrawSeb(g, num2, num3 - 24, cs_arg3, cs_arg4, 0);
                    }
                }
                if (([&]() {
                        auto cs_left = pls::cs::box(array2);
                        auto cs_right = pls::cs::box(IntArray{});
                        return cs_left != cs_right;
                    }()) &&
                    ([&]() -> bool {
                        auto cs_left = array2[2];
                        auto cs_right = editForPos[n][2];
                        return cs_left == cs_right;
                    }())) {
                    pls::cs::Int32 num16 = 16;
                    pls::cs::Int32 num17 = 21;
                    Draw_colorRect(g, num2 - num16 / 2, num3 - num17 + 2, phaseCnt_, num16 - 1, num17 - 1);
                }
            }
            if (phase_ == 5) {
                require(apdat_)->DrawWindow(g, 140, 100, 0, literal(u"ﾀｲﾌﾟ選択"));
                require(apdat_)->DrawBox(g, 60, 94, 180, 165);
                num = 115;
                for (pls::cs::Int32 num18 = 0; num18 < UserData::FORMATIONTYPE_STR().length(); ++num18) {
                    num3 = num + num18 * 18;
                    if (num18 == et_cur[4]) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->SetColor(form::SubForm::SC_WINDOW_SELECT());
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->FillRect(70.0f, num3 - 2, 100.0f, 17.0f);
                        });
                        {
                            auto cs_receiver = require(require(apdat_)->resCom2_)->seb.get_Item(60);
                            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                                require(require(apdat_)->resCom2_)->img;
                            require(cs_receiver)->Draw(g, 70.0f, num3 + 8, cs_arg3, -1);
                        }
                    }
                    surface::GameView::AddTouch(g, 11, 60, num3 - 2, 120, 17, 0x100000 | num18);
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::String cs_arg0 = UserData::FORMATIONTYPE_STR()[num18];
                            require(g)->DrawString(cs_arg0, 120.0f, num3, 2);
                        }());
                    });
                }
            }
            if (phase_ == 14 || phase_ == 15 || phase_ == 16) {
                pls::cs::Ref<data::TeamData> teamData =
                    require(apdat_)->tData_.get_Item(require(gm_)->teamId_[1]);
                IntArray array4 = IntArray{};
                if (matchInfoJoin_ == 0) {
                    array4 = GetLeagueData(require(teamData)->id_);
                }
                coalescedValue = UserData::EDIT_POS_ENE_MENU()[1][0];
                num = UserData::EDIT_POS_ENE_MENU()[1][1];
                if (phase_ == 15) {
                    coalescedValue = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_ENE_MENU()[0][0];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_ENE_MENU()[1][0];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 16) {
                    coalescedValue = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_ENE_MENU()[1][0];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_ENE_MENU()[0][0];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                }
                require(apdat_)->DrawBox(g, coalescedValue - 2, num - 13, coalescedValue - 2 + 213,
                                         num - 13 + 74);
                require(apdat_)->DrawBox(g, coalescedValue + 2, num - 9, coalescedValue + 2 + 204,
                                         num - 9 + 66);
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(246, 249, 187);
                    }));
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->FillRect(coalescedValue + 6, num + 5, 90.0f, 60.0f);
                });
                num2 = coalescedValue + 49;
                num3 = num + 36;
                DrawGraph_menuElement(g, num2, num3, playerParam1, playerParam2, 100);
                for (pls::cs::Int32 num19 = 0; num19 < UserData::GRAPH_POS().length(); ++num19) {
                    {
                        pls::cs::Int32 cs_arg1 = num2 + UserData::GRAPH_POS()[num19][0];
                        pls::cs::Int32 cs_arg2 = num3 + UserData::GRAPH_POS()[num19][1];
                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                            require(require(apdat_)->resCom2_)->seb.get_Item(75);
                        pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                            require(require(apdat_)->resCom2_)->img.get_Item(122);
                        require(apdat_)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, num19);
                    }
                }
                num2 = coalescedValue + 108;
                num3 = num + 12;
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(form::SubForm::SC_WINDOW_BLUE());
                });
                if (matchInfoJoin_ == 0) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->DrawString(literal(u"リーグ"), num2 - 1, num3 + 7);
                    });
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->DrawString(literal(u"ﾁｰﾑ評価"), num2 - 1, num3 + 7);
                    });
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawString(literal(u"観客数"), num2 - 1, num3 + 3 + 26);
                });
                if (matchInfoJoin_ == 0) {
                    if (pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return kl_unity_util::Language::Japanese(); })) {
                        {
                            pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(array4[7]);
                            require(apdat_)->DrawNumImageComma(g, 35, cs_arg2, num2 + 75, num3 + 1 + 7, 0, 0,
                                                               4);
                        }
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->DrawString(literal(u"位"), num2 + 75 + 2, num3 + 7);
                        });
                    } else {
                        pls::cs::Int32 num20 = 78;
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->DrawString(literal(u"位"), num2 + num20 - 30, num3 + 7);
                        });
                        {
                            pls::cs::Int64 cs_arg2 = pls::cs::cast_integral<pls::cs::Int64>(array4[7]);
                            require(apdat_)->DrawNumImageComma(g, 35, cs_arg2, num2 + num20 + 9, num3 + 7 + 1,
                                                               0, 0, 2);
                        }
                    }
                } else if (!form::SubForm::En()) {
                    require(apdat_)->DrawNumImageComma(
                        g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(teamData)->warPotential_),
                        num2 + 75, num3 + 1 + 7, 0, 0, 4);
                } else {
                    require(apdat_)->DrawNumImageComma(
                        g, 35, pls::cs::cast_integral<pls::cs::Int64>(require(teamData)->warPotential_),
                        num2 + 75 + 14, num3 + 1 + 7, 0, 0, 4);
                }
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_unity_util::Language::Japanese(); })) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::String cs_arg0 = form::MyFormBase::LT(
                                literal(u"<0>人"),
                                main::AppData::CommaSeparate(pls::cs::cast_integral<pls::cs::Int64>(
                                    require(require(apdat_)->frmSoccer_)->customerNum[1])));
                            require(g)->DrawString(cs_arg0, num2 + 76 + 14, num3 + 3 + 26, 4);
                        }());
                    });
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::String cs_arg0 = form::MyFormBase::LT(
                                literal(u"<0>"),
                                main::AppData::CommaSeparate(pls::cs::cast_integral<pls::cs::Int64>(
                                    require(require(apdat_)->frmSoccer_)->customerNum[1])));
                            require(g)->DrawString(cs_arg0, num2 + 76 + 14 - 2, num3 + 3 + 26, 4);
                        }());
                    });
                }
            }
            if (phase_ == 14 || phase_ == 16 || phase_ == 15) {
                pls::cs::Ref<data::TeamData> teamData2 =
                    require(apdat_)->tData_.get_Item(require(gm_)->teamId_[1]);
                coalescedValue = UserData::EDIT_POS_ENE_FOR()[1][0];
                num = UserData::EDIT_POS_ENE_FOR()[1][1];
                if (phase_ == 15) {
                    coalescedValue = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_ENE_FOR()[0][0];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_ENE_FOR()[1][0];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                } else if (phase_ == 16) {
                    coalescedValue = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg0 = phaseCnt_;
                        pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_ENE_FOR()[1][0];
                        pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_ENE_FOR()[0][0];
                        return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                    }());
                }
                for (pls::cs::Int32 num21 = 0; num21 < 6; ++num21) {
                    {
                        pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                            require(require(apdat_)->resCom2_)->seb.get_Item(45);
                        pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                            require(require(apdat_)->resCom2_)->img.get_Item(49);
                        require(apdat_)->DrawSeb(g, coalescedValue + 107 - 107 + 33 * num21, num, cs_arg3,
                                                 cs_arg4, 0);
                    }
                }
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(45);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(49);
                    require(apdat_)->DrawSeb(g, coalescedValue + 107 - 107 + 198, num, cs_arg3, cs_arg4, 1);
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
                    }));
                });
                pls::cs::Int32 num22 = 16;
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawArc(coalescedValue + 107 - 1 - num22 / 2 - 1,
                                               num + 47 - num22 / 2 - 1, num22 + 2, num22 + 2, 0.0f, 360.0f,
                                               1.0f);
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawLine(coalescedValue + 107 - 1, num, coalescedValue + 107 - 1,
                                                num + 94 - 1, 1.0f);
                });
                pls::cs::Int32 num23 = 35;
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
                    }));
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawRect(coalescedValue, num + 47 - 32, num23, 65.0f);
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawRect(coalescedValue, num + 47 - 16, num23 / 2, 32.0f);
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawRect(coalescedValue + 214 - num23, num + 47 - 32, num23 - 1,
                                                65.0f);
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawRect(coalescedValue + 214 - num23 / 2, num + 47 - 16,
                                                num23 / 2 - 1, 32.0f);
                });
                if (phase_ == 2 || phase_ == 3 || phase_ == 4) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Graphics::GetColorOfRGB(219, 255, 109);
                        }));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->FillRect(coalescedValue + 35, num + 2, 48.0f, 90.0f);
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Graphics::GetColorOfRGB(255, 156, 40);
                        }));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->FillRect(coalescedValue + 35 + 48, num + 2, 48.0f, 90.0f);
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Graphics::GetColorOfRGB(255, 56, 49);
                        }));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->FillRect(coalescedValue + 35 + 96, num + 2, 48.0f, 90.0f);
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Graphics::GetColorOfRGB(85, 85, 85);
                        }));
                    });
                    for (pls::cs::Int32 unusedOriginalSlot38, num24 = 0; num24 <= 9; ++num24) {
                        num3 = GameUtil::RateConvert(num24, 0, 9, num + 2, num + 94 - 1 - 2, true);
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(g)->DrawLine(coalescedValue + 35, num3,
                                                        coalescedValue + 214 - 1 - 35, num3, 1.0f);
                        });
                    }
                    for (pls::cs::Int32 num25 = 0; num25 <= 9; ++num25) {
                        num2 = GameUtil::RateConvert(num25, 0, 9, coalescedValue + 214 - 1 - 35,
                                                     coalescedValue + 35, true);
                        if (num25 % 3 == 0 && num25 != 0 && num25 != 9) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(g)->SetColor(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::Graphics::GetColorOfRGB(59, 228, 255);
                                    }));
                            });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(g)->FillRect(coalescedValue - 13 + num2 - 1, num + 2, 3.0f,
                                                            90.0f);
                            });
                        } else {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(g)->SetColor(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::Graphics::GetColorOfRGB(85, 85, 85);
                                    }));
                            });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(g)->DrawLine(coalescedValue - 13 + num2, num + 2, num2,
                                                            num + 94 - 1 - 2, 1.0f);
                            });
                        }
                    }
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
                    }));
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawRect(coalescedValue, num, 213.0f, 93.0f);
                });
                num2 = coalescedValue + 161;
                num3 = num + 84;
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(128);
                        require(g)->DrawImage(cs_arg0, num2, num3 - 2);
                    }());
                });
                StringArray array5 =
                    StringArray::from({literal(u"通常"), literal(u"攻め"), literal(u"守り")});
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::String cs_arg0 = ([&]() {
                            auto cs_left = form::MyFormBase::LT(literal(u"ﾀｲﾌﾟ"));
                            auto cs_right = form::MyFormBase::LT(array5[require(teamData2)->formationType_]);
                            return pls::cs::String::concat(cs_left, cs_right);
                        }());
                        require(g)->DrawString(cs_arg0, num2 + 5 + 24, num3 + 2, 2);
                    }());
                });
                num2 = coalescedValue + 1;
                num3 = num + 84;
                pls::cs::Ref<data::FormationData> formationData =
                    require(apdat_)->formationData_.get_Item(require(teamData2)->formation_);
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                            require(require(apdat_)->resCom2_)->img.get_Item(128);
                        require(g)->DrawImage(cs_arg0, num2, num3 - 2);
                    }());
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->SetColor(form::SubForm::SC_WINDOW_BLACK());
                });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(g)->DrawString(require(formationData)->name_, num2 + 36, num3 + 2, 2);
                });
                pls::cs::Int32 seb2 = 0;
                pls::cs::Int32 num26 = 0;
                for (pls::cs::Int32 num27 = 0; num27 < editForPosEnemy.length(); ++num27) {
                    num2 = editForPosEnemy[num27][0];
                    num3 = editForPosEnemy[num27][1];
                    num2 += coalescedValue - 13;
                    num26 = phaseCnt_ % 16 / 4;
                    if (editForPosEnemy[num27][2] == 0) {
                        {
                            pls::cs::Int32 cs_arg1 = require(teamData2)->bodyImg_;
                            pls::cs::Int32 cs_arg2 =
                                require(teamData2)->memberFaceId_[editForPosEnemy[num27][2]];
                            pls::cs::Int32 cs_arg6 = require(teamData2)->id_;
                            SetDispPlayerData(seb2, cs_arg1, cs_arg2, num26, 2, 0, cs_arg6);
                        }
                    } else {
                        {
                            pls::cs::Int32 cs_arg1 = require(teamData2)->bodyImg_;
                            pls::cs::Int32 cs_arg2 =
                                require(teamData2)->memberFaceId_[editForPosEnemy[num27][2]];
                            pls::cs::Int32 cs_arg6 = require(teamData2)->id_;
                            SetDispPlayerData(seb2, cs_arg1, cs_arg2, num26, 2, 3, cs_arg6);
                        }
                    }
                    DrawDispPlayer(g, num2, num3 + 2);
                }
            }
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->PopClip(); });
        if (phase_ == 7) {
            pls::cs::Int32 num28 = GameUtil::RateConvert(phaseCnt_, 0, 3, 19, 0, true);
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->SetClip(2.0f, 220.0f, 126.0f, 19.0f); });
            form::SubForm::Draw_chara(g, 172, 0, 0, 0, 11, 247 + num28);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(180);
                    require(g)->DrawImage(cs_arg0, 17.0f, 223 + num28);
                }());
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->ClearClip(); });
        } else if (phase_ == 6 && editMemDispMode != 0 && ([&]() -> bool {
                       auto cs_left = emdm_cnt;
                       auto cs_right = EMDM_ANIME_TIME[1];
                       return cs_left < cs_right;
                   }())) {
            pls::cs::Int32 frame = editMemDispMode - 1;
            coalescedValue = ([&]() -> pls::cs::Int32 {
                pls::cs::Int32 cs_arg0 = emdm_cnt;
                pls::cs::Int32 cs_arg2 = EMDM_ANIME_TIME[0];
                return GameUtil::RateConvert(cs_arg0, 0, cs_arg2, -60, 0, true);
            }());
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(11, 192, 245); }));
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->DrawRect((-1 + coalescedValue), 121.0f, 56.0f, 16.0f);
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->SetColor(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(15, 154, 255); }));
            });
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->FillRect((-1 + coalescedValue) + 1, 122.0f, 55.0f, 15.0f);
            });
            {
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(99);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(apdat_)->resCom2_)->img.get_Item(182);
                require(apdat_)->DrawSeb(g, (-1 + coalescedValue) + 2, 123, cs_arg3, cs_arg4, frame);
            }
        }
    }
}

// M:game.UserData.Draw_editButton(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32)
void UserData::Draw_editButton(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 dx, pls::cs::Int32 dy,
                               pls::cs::Int32 W, pls::cs::Int32 H, bool select, pls::cs::Int32 type,
                               pls::cs::Int32 index) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.UserData.Draw_editButton(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32)",
        game);
    {
        Draw_editButton(g, dx, dy, W, H, select, type, index, true, false);
    }
}

// M:game.UserData.Draw_editButton(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32,System.Boolean,System.Boolean)
void UserData::Draw_editButton(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 dx, pls::cs::Int32 dy,
                               pls::cs::Int32 W, pls::cs::Int32 H, bool select, pls::cs::Int32 type,
                               pls::cs::Int32 index, bool isTouch, bool isMarker) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.UserData.Draw_editButton(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32,System.Boolean,System.Boolean)",
        game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(223, 223, 220); }));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawRect(dx, dy, W - 1, H - 1); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(153, 152, 145); }));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawRect(dx + 1, dy + 1, W - 2 - 1, H - 2 - 1); });
        if (select) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(61);
                    require(g)->DrawImage(cs_arg0, dx + 2, dy + 2, 0, (19 - (H - 4)) / 2 + 19, W - 4, H - 4);
                }());
            });
        } else {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(61);
                    require(g)->DrawImage(cs_arg0, dx + 2, dy + 2, 0, (19 - (H - 4)) / 2, W - 4, H - 4);
                }());
            });
        }
        if (isTouch) {
            pls::cs::Int32 num = 786432;
            if (type == 0) {
                num = 786432;
            } else if (type == 1) {
                num = 851968;
            } else if (type == 2) {
                num = 917504;
            } else if (type == 3) {
                num = 983040;
            } else if (type == 4) {
                num = 1048576;
            } else if (type == 5) {
                num = 1114112;
            } else if (type == 6) {
                num = 1179648;
            }
            pls::cs::Int32 touchDx = dx;
            pls::cs::Int32 touchDy = dy;
            pls::cs::Int32 touchWidth = W;
            pls::cs::Int32 touchHeight = H;
            if (isMarker) {
                surface::GameView::AddTouch(
                    g, 23, touchDx, touchDy, touchWidth, touchHeight, num | index,
                    require(kairo::unity::surface::TouchOption::CreateInt(16))->Margin(5, 5, 5, 5));
            } else {
                surface::GameView::AddTouch(
                    g, 23, touchDx, touchDy, touchWidth, touchHeight, num | index,
                    require(kairo::unity::surface::TouchOption::Create())->Margin(5, 5, 5, 5));
            }
        }
    }
}

// M:game.UserData.Draw_colorRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void UserData::Draw_colorRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 ox, pls::cs::Int32 oy,
                              pls::cs::Int32 cnt, pls::cs::Int32 W, pls::cs::Int32 H) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.UserData.Draw_colorRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        Draw_colorRect(g, ox, oy, cnt, W, H, 200);
    }
}

// M:game.UserData.Draw_colorRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void UserData::Draw_colorRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 ox, pls::cs::Int32 oy,
                              pls::cs::Int32 cnt, pls::cs::Int32 W, pls::cs::Int32 H, pls::cs::Int32 speed) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.UserData.Draw_colorRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Int32 num = W * 2 + H * 2;
        pls::cs::Int32 num2 = num / 16 + 1;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0); }));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->DrawRect(ox, oy, W, H); });
        for (pls::cs::Int32 i = 0; i < num2; ++i) {
            for (pls::cs::Int32 j = i * 4; j < 4 + i * 4; ++j) {
                GetPoint(ox, oy, (cnt + 4 * j) * speed / 100, d1, W, H);
                GetPoint(ox, oy, (cnt + 4 * (j + 1)) * speed / 100, d2, W, H);
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Int32 cs_arg0 = CR_COLOR[j % 4];
                        require(g)->SetColor(cs_arg0);
                    }());
                });
                if (([&]() -> bool {
                        auto cs_left = d1[0];
                        auto cs_right = d2[0];
                        return cs_left != cs_right;
                    }()) &&
                    ([&]() -> bool {
                        auto cs_left = d1[1];
                        auto cs_right = d2[1];
                        return cs_left != cs_right;
                    }())) {
                    if (d2[1] == oy || d2[1] == oy + H) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Single cs_arg0 = d1[0];
                                pls::cs::Single cs_arg1 = d1[1];
                                pls::cs::Single cs_arg2 = d1[0];
                                pls::cs::Single cs_arg3 = d2[1];
                                require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                            }());
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Single cs_arg0 = d2[0];
                                pls::cs::Single cs_arg1 = d2[1];
                                pls::cs::Single cs_arg2 = d1[0];
                                pls::cs::Single cs_arg3 = d2[1];
                                require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                            }());
                        });
                        if (d2[1] == oy) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    pls::cs::Single cs_arg0 = d1[0] + 1;
                                    pls::cs::Single cs_arg1 = d1[1];
                                    pls::cs::Single cs_arg2 = d1[0] + 1;
                                    pls::cs::Single cs_arg3 = d2[1];
                                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                                }());
                            });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    pls::cs::Single cs_arg0 = d1[0];
                                    pls::cs::Single cs_arg1 = d2[1] + 1;
                                    pls::cs::Single cs_arg2 = d2[0];
                                    pls::cs::Single cs_arg3 = d2[1] + 1;
                                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                                }());
                            });
                        } else {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    pls::cs::Single cs_arg0 = d1[0] - 1;
                                    pls::cs::Single cs_arg1 = d1[1];
                                    pls::cs::Single cs_arg2 = d1[0] - 1;
                                    pls::cs::Single cs_arg3 = d2[1];
                                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                                }());
                            });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    pls::cs::Single cs_arg0 = d1[0];
                                    pls::cs::Single cs_arg1 = d2[1] - 1;
                                    pls::cs::Single cs_arg2 = d2[0];
                                    pls::cs::Single cs_arg3 = d2[1] - 1;
                                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                                }());
                            });
                        }
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Single cs_arg0 = d1[0];
                                pls::cs::Single cs_arg1 = d1[1];
                                pls::cs::Single cs_arg2 = d2[0];
                                pls::cs::Single cs_arg3 = d1[1];
                                require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                            }());
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Single cs_arg0 = d2[0];
                                pls::cs::Single cs_arg1 = d2[1];
                                pls::cs::Single cs_arg2 = d2[0];
                                pls::cs::Single cs_arg3 = d1[1];
                                require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                            }());
                        });
                        if (d1[1] == oy) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    pls::cs::Single cs_arg0 = d2[0] - 1;
                                    pls::cs::Single cs_arg1 = d1[1];
                                    pls::cs::Single cs_arg2 = d2[0] - 1;
                                    pls::cs::Single cs_arg3 = d2[1];
                                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                                }());
                            });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    pls::cs::Single cs_arg0 = d1[0];
                                    pls::cs::Single cs_arg1 = d1[1] + 1;
                                    pls::cs::Single cs_arg2 = d2[0];
                                    pls::cs::Single cs_arg3 = d1[1] + 1;
                                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                                }());
                            });
                        } else {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    pls::cs::Single cs_arg0 = d2[0] + 1;
                                    pls::cs::Single cs_arg1 = d1[1];
                                    pls::cs::Single cs_arg2 = d2[0] + 1;
                                    pls::cs::Single cs_arg3 = d2[1];
                                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                                }());
                            });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    pls::cs::Single cs_arg0 = d1[0];
                                    pls::cs::Single cs_arg1 = d1[1] - 1;
                                    pls::cs::Single cs_arg2 = d2[0];
                                    pls::cs::Single cs_arg3 = d1[1] - 1;
                                    require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                                }());
                            });
                        }
                    }
                    continue;
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Single cs_arg0 = d1[0];
                        pls::cs::Single cs_arg1 = d1[1];
                        pls::cs::Single cs_arg2 = d2[0];
                        pls::cs::Single cs_arg3 = d2[1];
                        require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                    }());
                });
                if ([&]() -> bool {
                        auto cs_left = d1[0];
                        auto cs_right = d2[0];
                        return cs_left == cs_right;
                    }()) {
                    if (d1[0] == ox) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Single cs_arg0 = d1[0] + 1;
                                pls::cs::Single cs_arg1 = d1[1];
                                pls::cs::Single cs_arg2 = d2[0] + 1;
                                pls::cs::Single cs_arg3 = d2[1];
                                require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                            }());
                        });
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Single cs_arg0 = d1[0] - 1;
                                pls::cs::Single cs_arg1 = d1[1];
                                pls::cs::Single cs_arg2 = d2[0] - 1;
                                pls::cs::Single cs_arg3 = d2[1];
                                require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                            }());
                        });
                    }
                } else if ([&]() -> bool {
                               auto cs_left = d1[1];
                               auto cs_right = d2[1];
                               return cs_left == cs_right;
                           }()) {
                    if (d1[1] == oy) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Single cs_arg0 = d1[0];
                                pls::cs::Single cs_arg1 = d1[1] + 1;
                                pls::cs::Single cs_arg2 = d2[0];
                                pls::cs::Single cs_arg3 = d2[1] + 1;
                                require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                            }());
                        });
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Single cs_arg0 = d1[0];
                                pls::cs::Single cs_arg1 = d1[1] - 1;
                                pls::cs::Single cs_arg2 = d2[0];
                                pls::cs::Single cs_arg3 = d2[1] - 1;
                                require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f);
                            }());
                        });
                    }
                }
            }
        }
    }
}

// M:game.UserData.GetPoint(System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32)
void UserData::GetPoint(pls::cs::Int32 ox, pls::cs::Int32 oy, pls::cs::Int32 cnt, IntArray d,
                        pls::cs::Int32 W, pls::cs::Int32 H) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.UserData.GetPoint(System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32)",
        game);
    {
        pls::cs::Int32 num = (4 + cnt) % (W * 2 + H * 2);
        if (num < W) {
            d[0] = ox + num;
            d[1] = oy;
        } else if (num < W + H) {
            d[0] = ox + W;
            d[1] = oy + num - W;
        } else if (num < W * 2 + H) {
            d[0] = ox + W - (num - (W + H));
            d[1] = oy + H;
        } else {
            d[0] = ox;
            d[1] = oy + H - (num - (W * 2 + H));
        }
    }
}

// M:game.UserData.SetEditForPos(System.Boolean)
void UserData::SetEditForPos(bool isSoccerForm) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetEditForPos(System.Boolean)", game);
    {
        isSoccerForm_ = isSoccerForm;
        pls::cs::Ref<data::TeamData> teamData = pls::cs::Ref<data::TeamData>{},
                                     teamData2 = pls::cs::Ref<data::TeamData>{};
        IntArray2 array, array2;
        pls::cs::Ref<data::FormationData> formationData = pls::cs::Ref<data::FormationData>{},
                                          formationData2 = pls::cs::Ref<data::FormationData>{};
        pls::cs::Int32 num6, num, num2, num3, num4, num5;
        teamData = require(apdat_)->tData_.get_Item(require(gm_)->teamId_[0]);
        teamData2 = require(apdat_)->tData_.get_Item(require(gm_)->teamId_[1]);
        array = IntArray2{};
        array2 = IntArray2{};
        formationData = pls::cs::unbox<pls::cs::Ref<data::FormationData>>(
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                    pls::cs::Int32 cs_arg0 = et_cur[1];
                    return kl_java_util::Vector_2_ElementAt(require(editTest_formation), cs_arg0);
                }());
            }));
        array = require(formationData)->formation_;
        formationData2 = require(apdat_)->formationData_.get_Item(require(teamData2)->formation_);
        array2 = require(formationData2)->formation_;
        if (phase_ == 11 || phase_ == 12) {
            array = require(require(apdat_)->formationData_.get_Item(selectFormationId_))->formation_;
        }
        num5 = 0;
        num4 = num5;
        num3 = num4;
        num2 = num3;
        num = num2;
        num6 = num;
        if (phase_ == 14 || phase_ == 15 || phase_ == 16) {
            SetPlayerParam(require(teamData2)->warP_paramPhysical_, require(teamData2)->warP_paramPhysical_);
        }
        if (!isSoccerForm) {
            num6 = UserData::EDIT_POS_FOR_F()[0][0];
            num = UserData::EDIT_POS_FOR_F()[0][1];
            if (phase_ == 1) {
                num = UserData::EDIT_POS_FOR_F()[1][1];
            }
            if (phase_ == 9) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_F()[0][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_F()[1][1];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            }
            if (phase_ == 11) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_F()[1][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_F()[0][1];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            }
            if (phase_ == 12) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_F()[1][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_F()[0][1];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            }
            if (phase_ == 4) {
                num = UserData::EDIT_POS_FOR_F()[1][1];
            }
            if (phase_ == 6) {
                num = UserData::EDIT_POS_FOR_M()[1][1];
            }
            if (phase_ == 7) {
                num = UserData::EDIT_POS_FOR_M()[1][1];
            }
            if (phase_ == 8) {
                num = UserData::EDIT_POS_FOR_M()[1][1];
            }
            if (phase_ == 10) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_M()[0][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_M()[1][1];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            }
            if (phase_ == 13) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_M()[1][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_M()[0][1];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            }
        } else {
            num6 = UserData::EDIT_POS_FOR_F()[1][0];
            num = UserData::EDIT_POS_FOR_F()[1][1];
            num5 = UserData::EDIT_POS_FOR_F()[1][1];
            if (phase_ == 6) {
                num = UserData::EDIT_POS_FOR_M()[1][1];
            } else if (phase_ == 7) {
                num = UserData::EDIT_POS_FOR_M()[1][1];
            } else if (phase_ == 8) {
                num = UserData::EDIT_POS_FOR_M()[1][1];
            } else if (phase_ == 10) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_F()[1][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_M()[1][1];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            } else if (phase_ == 13) {
                num = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_M()[1][1];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_F()[1][1];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            }
            if (phase_ == 14) {
                num6 = UserData::EDIT_POS_FOR_ENE()[1][0];
                num = UserData::EDIT_POS_FOR_ENE()[1][1];
                num4 = UserData::EDIT_POS_ENE_FOR()[1][0];
                num5 = UserData::EDIT_POS_ENE_FOR()[1][1];
            } else if (phase_ == 15) {
                num6 = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_ENE()[0][0];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_ENE()[1][0];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
                num4 = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_ENE_FOR()[0][0];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_ENE_FOR()[1][0];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            } else if (phase_ == 16) {
                num6 = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_FOR_ENE()[1][0];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_FOR_ENE()[0][0];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
                num4 = ([&]() -> pls::cs::Int32 {
                    pls::cs::Int32 cs_arg0 = phaseCnt_;
                    pls::cs::Int32 cs_arg3 = UserData::EDIT_POS_ENE_FOR()[1][0];
                    pls::cs::Int32 cs_arg4 = UserData::EDIT_POS_ENE_FOR()[0][0];
                    return GameUtil::RateConvert(cs_arg0, 0, 4, cs_arg3, cs_arg4, true);
                }());
            }
        }
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            if (i == 0) {
                editForPos[i][0] = -1;
                editForPos[i][1] = -1;
                editForPos[i][2] = i;
            } else {
                editForPos[i][0] = array[i][0];
                editForPos[i][1] = array[i][1];
                editForPos[i][2] = i;
            }
            if (i == 0) {
                num2 = num6 + 8;
                num3 = num + 47;
            } else {
                num2 = GameUtil::RateConvert(editForPos[i][1], 0, 9, num6 + 214 - 1 - 35, num6 + 35, true);
                num3 = GameUtil::RateConvert(editForPos[i][0], 0, 9, num + 2, num + 94 - 1 - 2, true);
                num2 -= 8;
                num3 += 5;
            }
            editForPos[i][0] = num2;
            editForPos[i][1] = num3;
        }
        for (pls::cs::Int32 j = 0; j < array2.length(); ++j) {
            if (j == 0) {
                editForPosEnemy[j][0] = -1;
                editForPosEnemy[j][1] = -1;
                editForPosEnemy[j][2] = j;
            } else {
                editForPosEnemy[j][0] = array2[j][0];
                editForPosEnemy[j][1] = array2[j][1];
                editForPosEnemy[j][2] = j;
            }
            if (j == 0) {
                num2 = num4 + 214 - 8;
                num3 = num5 + 47;
            } else {
                num2 =
                    GameUtil::RateConvert(editForPosEnemy[j][1], 0, 9, num4 + 35, num4 + 214 - 1 - 35, true);
                num3 = GameUtil::RateConvert(editForPosEnemy[j][0], 0, 9, num5 + 94 - 1 - 2, num5 + 2, true);
                num2 += 8;
                num3 -= 5;
            }
            editForPosEnemy[j][0] = num2;
            editForPosEnemy[j][1] = num3;
        }
        if (phase_ == 8) {
            IntArray array3 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                    auto cs_receiver = editTest_team.get_Item(et_cur[5] / 10);
                    pls::cs::Int32 cs_arg0 = et_cur[5] % 10;
                    return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                }());
            }));
            IntArray array4 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                    auto cs_receiver = editTest_team.get_Item(et_cur[6] / 10);
                    pls::cs::Int32 cs_arg0 = et_cur[6] % 10;
                    return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                }());
            }));
            pls::cs::Int32 num7 = array3[2];
            pls::cs::Int32 num8 = array4[2];
            pls::cs::Int32 num9 = editForPos[num7][0];
            pls::cs::Int32 num10 = editForPos[num8][0];
            pls::cs::Int32 num11 = editForPos[num7][1];
            pls::cs::Int32 num12 = editForPos[num8][1];
            {
                auto cs_target = editForPos[num7];
                auto cs_index = 0;
                auto cs_value = GameUtil::RateConvert(phaseCnt_, 0, 6, num9, num10, true);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = editForPos[num7];
                auto cs_index = 1;
                auto cs_value = GameUtil::RateConvert(phaseCnt_, 0, 6, num11, num12, true);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = editForPos[num8];
                auto cs_index = 0;
                auto cs_value = GameUtil::RateConvert(phaseCnt_, 0, 6, num10, num9, true);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = editForPos[num8];
                auto cs_index = 1;
                auto cs_value = GameUtil::RateConvert(phaseCnt_, 0, 6, num12, num11, true);
                cs_target.set_Item(cs_index, cs_value);
            }
        } else if (phase_ == 4) {
            pls::cs::Int32 num13 = -1;
            pls::cs::Int32 num14 = -1;
            for (pls::cs::Int32 k = 1; k < array.length(); ++k) {
                if (([&]() -> bool {
                        auto cs_left = array[k][0];
                        auto cs_right = et_cur[2] / 10;
                        return cs_left == cs_right;
                    }()) &&
                    ([&]() -> bool {
                        auto cs_left = array[k][1];
                        auto cs_right = et_cur[2] % 10;
                        return cs_left == cs_right;
                    }())) {
                    num13 = k;
                }
                if (([&]() -> bool {
                        auto cs_left = array[k][0];
                        auto cs_right = et_cur[3] / 10;
                        return cs_left == cs_right;
                    }()) &&
                    ([&]() -> bool {
                        auto cs_left = array[k][1];
                        auto cs_right = et_cur[3] % 10;
                        return cs_left == cs_right;
                    }())) {
                    num14 = k;
                }
            }
            pls::cs::Int32 num18, num15, num16, num17;
            num17 = 0;
            num16 = num17;
            num15 = num16;
            num18 = num15;
            if (num13 != -1) {
                num18 = editForPos[num13][0];
                num16 = editForPos[num13][1];
            } else {
                num2 = GameUtil::RateConvert(et_cur[2] % 10, 0, 9, num6 + 214 - 1 - 35, num6 + 35, true);
                num3 = GameUtil::RateConvert(et_cur[2] / 10, 0, 9, num + 2, num + 94 - 1 - 2, true);
                num2 -= 8;
                num3 += 5;
                num18 = num2;
                num16 = num3;
            }
            if (num14 != -1) {
                num15 = editForPos[num14][0];
                num17 = editForPos[num14][1];
            } else {
                num2 = GameUtil::RateConvert(et_cur[3] % 10, 0, 9, num6 + 214 - 1 - 35, num6 + 35, true);
                num3 = GameUtil::RateConvert(et_cur[3] / 10, 0, 9, num + 2, num + 94 - 1 - 2, true);
                num2 -= 8;
                num3 += 5;
                num15 = num2;
                num17 = num3;
            }
            if (num13 != -1) {
                {
                    auto cs_target = editForPos[num13];
                    auto cs_index = 0;
                    auto cs_value = GameUtil::RateConvert(phaseCnt_, 0, 6, num18, num15, true);
                    cs_target.set_Item(cs_index, cs_value);
                }
                {
                    auto cs_target = editForPos[num13];
                    auto cs_index = 1;
                    auto cs_value = GameUtil::RateConvert(phaseCnt_, 0, 6, num16, num17, true);
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
            if (num14 != -1) {
                {
                    auto cs_target = editForPos[num14];
                    auto cs_index = 0;
                    auto cs_value = GameUtil::RateConvert(phaseCnt_, 0, 6, num15, num18, true);
                    cs_target.set_Item(cs_index, cs_value);
                }
                {
                    auto cs_target = editForPos[num14];
                    auto cs_index = 1;
                    auto cs_value = GameUtil::RateConvert(phaseCnt_, 0, 6, num17, num16, true);
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        for (pls::cs::Int32 l = 0; l < pls::cs::Int32(editForPos.length()) - 1; ++l) {
            for (pls::cs::Int32 num19 = pls::cs::Int32(editForPos.length()) - 1; num19 > l; --num19) {
                if ([&]() -> bool {
                        auto cs_left = editForPos[l][1];
                        auto cs_right = editForPos[num19][1];
                        return cs_left > cs_right;
                    }()) {
                    pls::cs::Int32 num20 = editForPos[num19][0];
                    editForPos[num19][0] = editForPos[l][0];
                    editForPos[l][0] = num20;
                    num20 = editForPos[num19][1];
                    editForPos[num19][1] = editForPos[l][1];
                    editForPos[l][1] = num20;
                    num20 = editForPos[num19][2];
                    editForPos[num19][2] = editForPos[l][2];
                    editForPos[l][2] = num20;
                }
            }
        }
        for (pls::cs::Int32 m = 0; m < pls::cs::Int32(editForPosEnemy.length()) - 1; ++m) {
            for (pls::cs::Int32 num21 = pls::cs::Int32(editForPosEnemy.length()) - 1; num21 > m; --num21) {
                if ([&]() -> bool {
                        auto cs_left = editForPosEnemy[m][1];
                        auto cs_right = editForPosEnemy[num21][1];
                        return cs_left > cs_right;
                    }()) {
                    pls::cs::Int32 num22 = editForPosEnemy[num21][0];
                    editForPosEnemy[num21][0] = editForPosEnemy[m][0];
                    editForPosEnemy[m][0] = num22;
                    num22 = editForPosEnemy[num21][1];
                    editForPosEnemy[num21][1] = editForPosEnemy[m][1];
                    editForPosEnemy[m][1] = num22;
                    num22 = editForPosEnemy[num21][2];
                    editForPosEnemy[num21][2] = editForPosEnemy[m][2];
                    editForPosEnemy[m][2] = num22;
                }
            }
        }
    }
}

// M:game.UserData.SetTrainingData3
void UserData::SetTrainingData3() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetTrainingData3", game);
    {
        pDataIdOlderList_ = IntArray::make(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(memberPDataist_)); }));
        for (pls::cs::Int32 i = 0; i < pDataIdOlderList_.length(); ++i) {
            pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(memberPDataist_), i);
                }));
            pDataIdOlderList_[i] = require(playerData)->id_;
        }
        save_tAreaRootNum_ = tAreaRootNum_;
        tAreas_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<pls::cs::Ref<TArea>>>>(
                IntArray::from({save_tAreaRootNum_, 4}));
        });
        tModeList_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({save_tAreaRootNum_, 4}));
        });
        for (pls::cs::Int32 j = 0; j < tAreas_.length(); ++j) {
            for (pls::cs::Int32 k = 0; k < tAreas_[j].length(); ++k) {
                {
                    auto cs_target = tAreas_[j];
                    auto cs_index = k;
                    auto cs_value = TArea::create();
                    cs_target.set_Item(cs_index, cs_value);
                }
                require(tAreas_[j].get_Item(k))->Init(j, k);
            }
        }
        SetTrainingCommonMethod(true);
        trainig_appearWait = 0;
        for (pls::cs::Int32 l = 0; l < tAreas_.length(); ++l) {
            for (pls::cs::Int32 m = 0; m < tAreas_[l].length(); ++m) {
                require(tAreas_[l].get_Item(m))->ChangeState(11);
            }
        }
    }
}

// M:game.UserData.SetTrainingCommonMethod(System.Boolean)
void UserData::SetTrainingCommonMethod(bool isInit) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetTrainingCommonMethod(System.Boolean)", game);
    {
        for (pls::cs::Int32 i = 0; i < tenants_.length(); ++i) {
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(require(tenants_.get_Item(i))->useTPlayers_));
                }) > 0) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_RemoveAllElements(
                        require(require(tenants_.get_Item(i))->useTPlayers_));
                });
            }
        }
        if (isInit) {
            tPlayers_ = pls::cs::Array<pls::cs::Ref<TPlayer>>::make(pDataIdOlderList_.length());
            for (pls::cs::Int32 j = 0; j < tPlayers_.length(); ++j) {
                pls::cs::Ref<data::PlayerData> playerData =
                    require(apdat_)->pData_.get_Item(pDataIdOlderList_[j]);
                {
                    auto cs_target = tPlayers_;
                    auto cs_index = j;
                    auto cs_value = TPlayer::create(1);
                    cs_target.set_Item(cs_index, cs_value);
                }
                {
                    auto cs_receiver = tPlayers_.get_Item(j);
                    pls::cs::Int32 cs_arg1 = require(playerData)->id_;
                    require(cs_receiver)->Init_training(j, cs_arg1);
                }
                pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_IndexOf(require(memberPDataist_), pls::cs::box(playerData));
                });
                if (num < 11) {
                    {
                        auto cs_target = tPlayers_.get_Item(j);
                        pls::cs::Int32 cs_value = GameUtil::Random(40);
                        require(cs_target)->trainingPriority_ = cs_value;
                    }
                } else {
                    {
                        auto cs_target = tPlayers_.get_Item(j);
                        pls::cs::Int32 cs_value = GameUtil::Random(100);
                        require(cs_target)->trainingPriority_ = cs_value;
                    }
                }
                {
                    pls::cs::Ref<Player> cs_arg0 = tPlayers_.get_Item(j);
                    require(playerData)->SetGameData(cs_arg0);
                }
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::Check(require(playerData)->flag_, 2);
                    })) {
                    require(tPlayers_.get_Item(j))->role_ = 0;
                } else {
                    require(tPlayers_.get_Item(j))->role_ = 3;
                }
            }
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(restTPlayers_));
                }) > 0) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_RemoveAllElements(require(restTPlayers_));
                });
            }
        }
        pls::cs::Int32 num2 = 0;
        pls::cs::Int32 num3 = 0;
        for (pls::cs::Int32 k = 0; k < pDataIdOlderList_.length(); ++k) {
            pls::cs::Ref<data::PlayerData> playerData2 =
                require(apdat_)->pData_.get_Item(pDataIdOlderList_[k]);
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Check(require(playerData2)->flag_, 2);
                })) {
                if (k < pls::cs::Int32(pDataIdOlderList_.length()) / 2 || save_tAreaRootNum_ == 1) {
                    ++num2;
                } else {
                    ++num3;
                }
            }
        }
        for (pls::cs::Int32 l = 0; l < tModeList_.length(); ++l) {
            for (pls::cs::Int32 m = 0; m < tModeList_[l].length(); ++m) {
                if ((m == 1)) {
                    tModeList_[l][m] = 4;
                    continue;
                } else if ((m == 0)) {
                    tModeList_[l][m] = 5;
                    continue;
                }
                pls::cs::Int32 num4 = num2;
                if (l == 1) {
                    num4 = num3;
                }
                pls::cs::Int32 num5 = 0;
                if (num4 > 0) {
                    num5 = GameUtil::Random(UserData::TMODE_KEEPER().length());
                    tModeList_[l][m] = UserData::TMODE_KEEPER()[num5];
                    if (tModeList_[l][m] == 3) {
                        if (l == 0) {
                            --num2;
                        } else {
                            --num3;
                        }
                    }
                } else {
                    num5 = GameUtil::Random(UserData::TMODE_NONKEEPER().length());
                    tModeList_[l][m] = UserData::TMODE_NONKEEPER()[num5];
                }
            }
        }
        for (pls::cs::Int32 n = 0; n < tAreas_.length(); ++n) {
            for (pls::cs::Int32 num6 = 0; num6 < tAreas_[n].length(); ++num6) {
                {
                    auto cs_receiver = tAreas_[n].get_Item(num6);
                    pls::cs::Int32 cs_arg0 = tModeList_[n][num6];
                    require(cs_receiver)->SetTrainingArea(cs_arg0);
                }
            }
        }
        pls::cs::Array<pls::cs::Ref<kl_java_util::Vector>> array =
            pls::cs::Array<pls::cs::Ref<kl_java_util::Vector>>::make(2);
        array.set_Item(0, kl_java_util::Vector::create());
        array.set_Item(1, kl_java_util::Vector::create());
        IntArray array2 = IntArray::make(2);
        for (pls::cs::Int32 num7 = 0; num7 < tPlayers_.length(); ++num7) {
            pls::cs::Ref<TPlayer> obj = tPlayers_.get_Item(num7);
            if (num7 < pls::cs::Int32(tPlayers_.length()) / 2 || save_tAreaRootNum_ == 1) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(array.get_Item(0)), pls::cs::box(obj));
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(array.get_Item(1)), pls::cs::box(obj));
                });
            }
        }
        array2[0] = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(array.get_Item(0))); });
        array2[1] = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(array.get_Item(1))); });
        for (pls::cs::Int32 num8 = 0; num8 < tModeList_.length(); ++num8) {
            for (pls::cs::Int32 num9 = 0; num9 < tModeList_[num8].length(); ++num9) {
                if (tModeList_[num8][num9] != 3) {
                    continue;
                }
                for (pls::cs::Int32 num10 =
                         pls::diagnostic::api_call([&]() -> decltype(auto) {
                             return kl_java_util::Vector_2_Size(require(array.get_Item(num8)));
                         }) -
                         1;
                     num10 >= 0; --num10) {
                    pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(array.get_Item(num8)), num10);
                        }));
                    if (require(tPlayer)->role_ != 0) {

                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_AddElement(
                                require(
                                    require(require(tAreas_[num8].get_Item(num9))->tGroupAreas_.get_Item(0))
                                        ->tPlayerList_),
                                pls::cs::box(tPlayer));
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_RemoveElementAt(require(array.get_Item(num8)),
                                                                          num10);
                        });
                        break;
                    }
                }
            }
        }
        for (pls::cs::Int32 num11 = 0; num11 < array.length(); ++num11) {
            for (pls::cs::Int32 num12 = 0;
                 num12 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                             return kl_java_util::Vector_2_Size(require(array.get_Item(num11)));
                         }) - 1;
                 ++num12) {
                for (pls::cs::Int32 num13 =
                         pls::diagnostic::api_call([&]() -> decltype(auto) {
                             return kl_java_util::Vector_2_Size(require(array.get_Item(num11)));
                         }) -
                         1;
                     num13 > num12; --num13) {
                    pls::cs::Ref<TPlayer> tPlayer2 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(array.get_Item(num11)), num12);
                        }));
                    pls::cs::Ref<TPlayer> tPlayer3 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(array.get_Item(num11)), num13);
                        }));
                    if (require(tPlayer3)->trainingPriority_ < require(tPlayer2)->trainingPriority_) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_SetElementAt(require(array.get_Item(num11)),
                                                                       pls::cs::box(tPlayer3), num12);
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_SetElementAt(require(array.get_Item(num11)),
                                                                       pls::cs::box(tPlayer2), num13);
                        });
                    }
                }
            }
        }
        for (pls::cs::Int32 num14 = 0; num14 < tModeList_.length(); ++num14) {
            pls::cs::Int32 num15 = 0;
            pls::cs::Int32 num16 = 0;
            if (selectTrainingPolicy_ == 0) {
                num16 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(array.get_Item(num14)));
                        }) *
                        50 / 100;
            } else if (selectTrainingPolicy_ == 1) {
                num16 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(array.get_Item(num14)));
                        }) *
                        100 / 100;
            } else if (selectTrainingPolicy_ == 2) {
                num16 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(array.get_Item(num14)));
                        }) *
                        20 / 100;
            }
            for (pls::cs::Int32 num17 = 0; num17 < tModeList_[num14].length(); ++num17) {
                if (tModeList_[num14][num17] == 4 || tModeList_[num14][num17] == 5) {
                    continue;
                }
                auto cs_receiver_86 = tAreas_[num14].get_Item(num17);
                pls::cs::Int32 cs_arg0_86 = tModeList_[num14][num17];
                pls::cs::Int32 areaMaxNum = require(cs_receiver_86)->GetAreaMaxNum(cs_arg0_86);
                for (pls::cs::Int32 num18 = 0;
                     num18 < areaMaxNum &&
                     pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return kl_java_util::Vector_2_Size(require(array.get_Item(num14)));
                     }) > 0;
                     ++num18) {
                    pls::cs::Int32 areaMaxNum2 = TGroupArea::GetAreaMaxNum(tModeList_[num14][num17]);
                    for (pls::cs::Int32 num19 = 0;
                         num19 < require(tAreas_[num14].get_Item(num17))->tGroupAreas_.length(); ++num19) {
                        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_Size(require(
                                    require(
                                        require(tAreas_[num14].get_Item(num17))->tGroupAreas_.get_Item(num19))
                                        ->tPlayerList_));
                            }) < areaMaxNum2) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    auto cs_receiver = require(require(tAreas_[num14].get_Item(num17))
                                                                   ->tGroupAreas_.get_Item(num19))
                                                           ->tPlayerList_;
                                    pls::cs::Ref<pls::cs::Object> cs_arg0 =
                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return kl_java_util::Vector_2_FirstElement(
                                                require(array.get_Item(num14)));
                                        });
                                    kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                                }());
                            });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_RemoveElementAt(require(array.get_Item(num14)),
                                                                              0);
                            });
                            ++num15;
                            break;
                        }
                    }
                    if (num15 >= num16) {
                        break;
                    }
                }
                if (num15 >= num16) {
                    break;
                }
            }
        }
        for (pls::cs::Int32 num20 = 0; num20 < tModeList_.length(); ++num20) {
            for (pls::cs::Int32 num21 = 0; num21 < tModeList_[num20].length(); ++num21) {
                for (pls::cs::Int32 num22 = 0;
                     num22 < require(tAreas_[num20].get_Item(num21))->tGroupAreas_.length(); ++num22) {
                    if ((tModeList_[num20][num21] == 0 || tModeList_[num20][num21] == 1) &&
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(
                                require(require(tAreas_[num20].get_Item(num21))->tGroupAreas_.get_Item(num22))
                                    ->tPlayerList_));
                        }) % 2 ==
                            1) {
                        pls::cs::Ref<TPlayer> obj2 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_FirstElement(require(
                                    require(
                                        require(tAreas_[num20].get_Item(num21))->tGroupAreas_.get_Item(num22))
                                        ->tPlayerList_));
                            }));
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_RemoveElementAt(
                                require(
                                    require(
                                        require(tAreas_[num20].get_Item(num21))->tGroupAreas_.get_Item(num22))
                                        ->tPlayerList_),
                                0);
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_AddElement(require(array.get_Item(num20)),
                                                                     pls::cs::box(obj2));
                        });
                    }
                    if (tModeList_[num20][num21] == 3 &&
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(
                                require(require(tAreas_[num20].get_Item(num21))->tGroupAreas_.get_Item(num22))
                                    ->tPlayerList_));
                        }) == 1) {
                        pls::cs::Ref<TPlayer> obj3 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_FirstElement(require(
                                    require(
                                        require(tAreas_[num20].get_Item(num21))->tGroupAreas_.get_Item(num22))
                                        ->tPlayerList_));
                            }));
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_RemoveElementAt(
                                require(
                                    require(
                                        require(tAreas_[num20].get_Item(num21))->tGroupAreas_.get_Item(num22))
                                        ->tPlayerList_),
                                0);
                        });
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_AddElement(require(array.get_Item(num20)),
                                                                     pls::cs::box(obj3));
                        });
                    }
                }
            }
        }
        pls::cs::Int32 num23 = 0;
        for (pls::cs::Int32 num24 = 0; num24 < array.length(); ++num24) {
            pls::cs::Int32 num25 = 0;
            pls::cs::Int32 num26 = 0;
            if (selectTrainingPolicy_ == 0) {
                num26 = array2[num24] * 5 / 10;
            } else if (selectTrainingPolicy_ == 2) {
                num26 = array2[num24] * 8 / 10;
            }
            if (selectTrainingPolicy_ == 0) {
                num26 = array2[num24] * 50 / 100;
            } else if (selectTrainingPolicy_ == 1) {
                num26 = array2[num24] * 0 / 100;
            } else if (selectTrainingPolicy_ == 2) {
                num26 = array2[num24] * 80 / 100;
            }
            for (pls::cs::Int32 num27 =
                     pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return kl_java_util::Vector_2_Size(require(array.get_Item(num24)));
                     }) -
                     1;
                 num27 >= 0; --num27) {
                pls::cs::Ref<TPlayer> obj4 =
                    pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(array.get_Item(num24)), num27);
                    }));
                if (num25 < num26) {
                    num23 = 0;
                } else {
                    num23 = GameUtil::Random(2);
                }
                if (num23 == 0) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_AddElement(
                            require(require(require(tAreas_[num24].get_Item(0))->tGroupAreas_.get_Item(0))
                                        ->tPlayerList_),
                            pls::cs::box(obj4));
                    });
                } else if (num23 == 1) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_AddElement(
                            require(require(require(tAreas_[num24].get_Item(1))->tGroupAreas_.get_Item(0))
                                        ->tPlayerList_),
                            pls::cs::box(obj4));
                    });
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_RemoveElementAt(require(array.get_Item(num24)), num27);
                });
            }
        }
        for (pls::cs::Int32 num28 = 0; num28 < tAreas_.length(); ++num28) {
            for (pls::cs::Int32 num29 = 0; num29 < tAreas_[num28].length(); ++num29) {
                pls::cs::Int32 num30 = 0;
                for (pls::cs::Int32 num31 = 0;
                     num31 < require(tAreas_[num28].get_Item(num29))->tGroupAreas_.length(); ++num31) {
                    num30 += pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(
                            require(require(tAreas_[num28].get_Item(num29))->tGroupAreas_.get_Item(num31))
                                ->tPlayerList_));
                    });
                    for (pls::cs::Int32 num32 = 0;
                         num32 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                             return kl_java_util::Vector_2_Size(require(
                                 require(
                                     require(tAreas_[num28].get_Item(num29))->tGroupAreas_.get_Item(num31))
                                     ->tPlayerList_));
                         });
                         ++num32) {
                        pls::cs::Ref<TPlayer> tPlayer4 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(
                                    require(require(require(tAreas_[num28].get_Item(num29))
                                                        ->tGroupAreas_.get_Item(num31))
                                                ->tPlayerList_),
                                    num32);
                            }));
                        require(tPlayer4)->SetTrainingId(num28, num29, num31, num32);
                        {
                            auto cs_target = tPlayer4;
                            auto cs_value =
                                require(tAreas_[num28].get_Item(num29))->tGroupAreas_.get_Item(num31);
                            require(cs_target)->tGroupArea_ = cs_value;
                        }
                        require(tPlayer4)->team_id_ = 1;
                        if (require(tAreas_[num28].get_Item(num29))->pId_ == 3) {
                            require(tPlayer4)->team_id_ = 0;
                        }
                    }
                }
            }
        }
        pls::cs::Int32 num33 = 0;
        for (pls::cs::Int32 num34 = 0; num34 < tAreas_.length(); ++num34) {
            for (pls::cs::Int32 num35 = 0; num35 < tAreas_[num34].length(); ++num35) {
                for (pls::cs::Int32 num36 = 0;
                     num36 < require(tAreas_[num34].get_Item(num35))->tGroupAreas_.length(); ++num36) {
                    num33 += ([&]() -> pls::cs::Int32 {
                        auto cs_receiver = tAreas_[num34].get_Item(num35);
                        pls::cs::Int32 cs_arg0 = require(tAreas_[num34].get_Item(num35))->tMode_;
                        return require(cs_receiver)->GetAreaBallNum(cs_arg0);
                    }());
                }
            }
        }
        tBalls_ = pls::cs::Array<pls::cs::Ref<TBall>>::make(num33);
        for (pls::cs::Int32 num37 = 0; num37 < tBalls_.length(); ++num37) {
            {
                auto cs_target = tBalls_;
                auto cs_index = num37;
                auto cs_value = TBall::create(num37);
                cs_target.set_Item(cs_index, cs_value);
            }
            require(tBalls_.get_Item(num37))->Init();
        }
        pls::cs::Int32 num38 = 0;
        for (pls::cs::Int32 num39 = 0; num39 < tAreas_.length(); ++num39) {
            for (pls::cs::Int32 num40 = 0; num40 < tAreas_[num39].length(); ++num40) {
                for (pls::cs::Int32 num41 = 0;
                     num41 < require(tAreas_[num39].get_Item(num40))->tGroupAreas_.length(); ++num41) {
                    auto cs_receiver_87 = tAreas_[num39].get_Item(num40);
                    pls::cs::Int32 cs_arg0_87 = require(tAreas_[num39].get_Item(num40))->tMode_;
                    pls::cs::Int32 areaBallNum = require(cs_receiver_87)->GetAreaBallNum(cs_arg0_87);
                    for (pls::cs::Int32 num42 = 0; num42 < areaBallNum; ++num42) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                auto cs_receiver =
                                    require(
                                        require(tAreas_[num39].get_Item(num40))->tGroupAreas_.get_Item(num41))
                                        ->tBallList_;
                                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(tBalls_.get_Item(num38));
                                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                            }());
                        });
                        {
                            auto cs_target = tBalls_.get_Item(num38);
                            auto cs_value =
                                require(tAreas_[num39].get_Item(num40))->tGroupAreas_.get_Item(num41);
                            require(cs_target)->tGroupArea_ = cs_value;
                        }
                        ++num38;
                    }
                }
            }
        }
    }
}

// M:game.UserData.SetTenantIn(game.TPlayer)
bool UserData::SetTenantIn(pls::cs::Ref<TPlayer> tPlayer) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetTenantIn(game.TPlayer)", game);
    {
        require(tPlayer)->useTenantCnt_ = 0;
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(tenantList)); }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(tenantList));
            });
        }
        for (pls::cs::Int32 i = 0; i < tenants_.length(); ++i) {
            if (require(tenants_.get_Item(i))->state_ != 1) {
                continue;
            }
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(require(tenants_.get_Item(i))->useTPlayers_));
                }) > 3) {
                continue;
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(tenants_.get_Item(i));
                    kl_java_util::Vector_2_AddElement(require(tenantList), cs_arg0);
                }());
            });
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(tenantList)); }) == 0) {
            for (pls::cs::Int32 j = 0; j < tenants_.length(); ++j) {
                if (require(tenants_.get_Item(j))->state_ != 1) {
                    continue;
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(tenants_.get_Item(j));
                        kl_java_util::Vector_2_AddElement(require(tenantList), cs_arg0);
                    }());
                });
            }
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(tenantList));
                }) == 0) {
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_IndexOf(require(restTPlayers_), pls::cs::box(tPlayer));
                    }) == -1) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_AddElement(require(restTPlayers_),
                                                                 pls::cs::box(tPlayer));
                    });
                }
                return false;
            }
        }
        for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(tenantList));
                                       }) - 1;
             ++k) {
            for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                          return kl_java_util::Vector_2_Size(require(tenantList));
                                      }) -
                                      1;
                 num > k; --num) {
                pls::cs::Ref<Tenant> tenant =
                    pls::cs::unbox<pls::cs::Ref<Tenant>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(tenantList), k);
                    }));
                pls::cs::Ref<Tenant> tenant2 =
                    pls::cs::unbox<pls::cs::Ref<Tenant>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(tenantList), num);
                    }));
                pls::cs::Ref<data::TenantData> tenantData =
                    require(apdat_)->tenantData_.get_Item(require(tenant)->tenantDataId_);
                pls::cs::Ref<data::TenantData> tenantData2 =
                    require(apdat_)->tenantData_.get_Item(require(tenant2)->tenantDataId_);
                if (require(tenantData2)->charm_ > require(tenantData)->charm_) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(tenantList), pls::cs::box(tenant2),
                                                                   k);
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(tenantList), pls::cs::box(tenant),
                                                                   num);
                    });
                }
            }
        }
        IntArray array = IntArray::make(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(tenantList)); }));
        pls::cs::Int32 num2 = 0;
        for (pls::cs::Int32 l = 0; l < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(tenantList));
                                   });
             ++l) {
            pls::cs::Ref<Tenant> tenant3 =
                pls::cs::unbox<pls::cs::Ref<Tenant>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(tenantList), l);
                }));
            num2 = num2 +
                   require(require(apdat_)->tenantData_.get_Item(require(tenant3)->tenantDataId_))->charm_;
            array[l] = num2;
        }
        pls::cs::Int32 num3 = GameUtil::Random(num2);
        for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(tenantList));
                                   });
             ++m) {
            pls::cs::Ref<Tenant> tenant4 =
                pls::cs::unbox<pls::cs::Ref<Tenant>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(tenantList), m);
                }));
            if (num3 < array[m]) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(require(tenant4)->useTPlayers_),
                                                             pls::cs::box(tPlayer));
                });
                break;
            }
        }
        return true;
    }
}

// M:game.UserData.ChangeTraining
void UserData::ChangeTraining() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.ChangeTraining", game);
    {
        for (pls::cs::Int32 i = 0; i < tAreas_.length(); ++i) {
            for (pls::cs::Int32 j = 0; j < tAreas_[i].length(); ++j) {
                require(tAreas_[i].get_Item(j))->ChangeState(13);
            }
        }
        for (pls::cs::Int32 k = 0; k < tPlayers_.length(); ++k) {
            {
                auto cs_target = tPlayers_.get_Item(k);
                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Off(require(tPlayers_.get_Item(k))->flag_, 131072);
                });
                require(cs_target)->flag_ = cs_value;
            }
        }
        SetTrainingCommonMethod(false);
        for (pls::cs::Int32 l = 0; l < tAreas_.length(); ++l) {
            for (pls::cs::Int32 m = 0; m < tAreas_[l].length(); ++m) {
                require(tAreas_[l].get_Item(m))->ChangeState(14);
            }
        }
    }
}

// M:game.UserData.Update_training
void UserData::Update_training() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Update_training", game);
    {
        for (pls::cs::Int32 i = 0; i < tAreas_.length(); ++i) {
            for (pls::cs::Int32 j = 0; j < tAreas_[i].length(); ++j) {
                require(tAreas_[i].get_Item(j))->Update();
            }
        }
        require(tp_svisor_)->Update_trainings();
    }
}

// M:game.UserData.Draw_training(kairo.unity.ui.Graphics)
void UserData::Draw_training(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Draw_training(kairo.unity.ui.Graphics)", game);
    {
        for (pls::cs::Int32 i = 0; i < tAreas_.length(); ++i) {
            for (pls::cs::Int32 j = 0; j < tAreas_[i].length(); ++j) {
                require(tAreas_[i].get_Item(j))->Draw(g);
            }
        }
        require(tp_svisor_)->Draw_svisor(g);
    }
}

// M:game.UserData.Init_bus
void UserData::Init_bus() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Init_bus", game);
    {
        MapMain::ensure_initialized();
        form::GameForm::ensure_initialized();

        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = MapMain::MOVE_POINT().get_Item(0);
                require(busPos_)->Set(cs_arg0);
            }());
        });
        busState_ = 0;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(MapMain::MOVE_POINT().get_Item(1));
                kl_java_util::Vector_2_AddElement(require(busMovePoint_), cs_arg0);
            }());
        });
        busCnt = 0;
        form::GameForm::busgather_ph_cnt() = 0;
    }
}

// M:game.UserData.Update_bus
void UserData::Update_bus() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Update_bus", game);
    {
        Camera::ensure_initialized();

        if (busState_ == 0) {
            busCnt = ((busCnt + 1) % 2147483647 /* Int32.MaxValue */);
            IntArray collisionData = GetCollisionData(0, 5);
            IntArray collisionData2 = GetCollisionData(1, 5);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    auto cs_receiver = busGoalPos_;
                    pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 =
                        pls::cs::unbox<pls::cs::Ref<kl_util3d::Vector3D>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_FirstElement(require(busMovePoint_));
                            }));
                    require(cs_receiver)->Set(cs_arg0);
                }());
            });
            if ([&]() -> bool {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(busPos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(busPos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 = collisionData[2];
                    pls::cs::Single cs_arg3 = collisionData[3];
                    pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(busGoalPos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData2[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(busGoalPos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData2[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg6 = collisionData2[2];
                    pls::cs::Single cs_arg7 = collisionData2[3];
                    return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                        cs_arg6, cs_arg7, true);
                }()) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_RemoveElementAt(require(busMovePoint_), 0);
                });
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(busMovePoint_));
                    }) == 0) {
                    busState_ = 1;
                    SetTrainingData3();
                }
            } else {
                pls::cs::Single num = 10.0f;
                pls::cs::Single num2 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_lang::JMath::Sqrt((require(busGoalPos_)->x_ - require(busPos_)->x_) *
                                                    (require(busGoalPos_)->x_ - require(busPos_)->x_) +
                                                (require(busGoalPos_)->z_ - require(busPos_)->z_) *
                                                    (require(busGoalPos_)->z_ - require(busPos_)->z_));
                }));
                require(busV_)->x_ = (require(busGoalPos_)->x_ - require(busPos_)->x_) * num / num2;
                require(busV_)->z_ = (require(busGoalPos_)->z_ - require(busPos_)->z_) * num / num2;
                require(busPos_)->x_ = require(busPos_)->x_ + require(busV_)->x_;
                require(busPos_)->z_ = require(busPos_)->z_ + require(busV_)->z_;
                Camera::ConvertGlobalToScreen(busV_, busSDirect);
                {
                    auto cs_target = busSDirect;
                    auto cs_index = 0;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = Camera::MAP_SCREEN_BASE_POS()[0];
                    pls::cs::Int32 cs_value = cs_old - cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
                {
                    auto cs_target = busSDirect;
                    auto cs_index = 1;
                    auto cs_old = cs_target.at(cs_index);
                    auto cs_rhs = Camera::MAP_SCREEN_BASE_POS()[1];
                    pls::cs::Int32 cs_value = cs_old - cs_rhs;
                    cs_target.at(cs_index) = cs_value;
                }
                if (busSDirect[0] > 0) {
                    if (busSDirect[1] > 0) {
                        busDirect_ = 0;
                    } else {
                        busDirect_ = 1;
                    }
                } else {
                    if (busSDirect[1] > 0) {
                        busDirect_ = 3;
                    } else {
                        busDirect_ = 2;
                    }
                }
            }
        }
        return;
    }
}

// M:game.UserData.Draw_bus(kairo.unity.ui.Graphics)
void UserData::Draw_bus(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Draw_bus(kairo.unity.ui.Graphics)", game);
    {
        Camera::ConvertGlobalToCamera(busPos_, busCPos);
        {
            pls::cs::Int32 cs_arg2 = busCPos[1] + 10;
            pls::cs::Int32 cs_arg5 = busDirect_;
            pls::cs::Int32 cs_arg6 = busCPos[0];
            pls::cs::Int32 cs_arg7 = busCPos[1];
            require(apdat_)->InsertGameObject(8, 0, cs_arg2, 42, 38, cs_arg5, cs_arg6, cs_arg7, false, 0);
        }
        pls::cs::Int32 num = busCnt % 12 / 6;
        if (num == 1) {
            pls::cs::Int32 frame = 4;
            if (busDirect_ == 0 || busDirect_ == 1) {
                frame = 5;
            }
            {
                pls::cs::Int32 cs_arg2 = busCPos[1] + 10 + 1;
                pls::cs::Int32 cs_arg6 = busCPos[0];
                pls::cs::Int32 cs_arg7 = busCPos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 42, 38, frame, cs_arg6, cs_arg7, false, 0);
            }
        }
    }
}

// M:game.UserData.SetPlayerParam(System.Int32[],System.Int32[])
void UserData::SetPlayerParam(IntArray p1, IntArray p2) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetPlayerParam(System.Int32[],System.Int32[])",
                     game);
    {
        for (pls::cs::Int32 i = 0; i < playerParam1.length(); ++i) {
            playerParam1[i] = p1[i];
            playerParam2[i] = p2[i];
        }
    }
}

// M:game.UserData.DrawGraph_menuElement(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32)
void UserData::DrawGraph_menuElement(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 ox,
                                     pls::cs::Int32 oy, IntArray param1, IntArray param2,
                                     pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.UserData.DrawGraph_menuElement(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32)",
        game);
    {
        pls::cs::Int32 num, num2, num3, num4;
        for (pls::cs::Int32 i = 0; i < MENUGRAPH_POINTPOS.length(); ++i) {
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(214, 214, 214); }));
        });
        for (pls::cs::Int32 j = 0; j < 5; ++j) {
            num = ox + MENUGRAPH_POINTPOS[5][0];
            num2 = oy + MENUGRAPH_POINTPOS[5][1];
            num3 = ox + MENUGRAPH_POINTPOS[j][0];
            num4 = oy + MENUGRAPH_POINTPOS[j][1];
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->DrawLine(num, num2, num3, num4, 1.0f); });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(g)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(160, 160, 160); }));
        });
        for (pls::cs::Int32 k = 0; k < 5; ++k) {
            num = ox + MENUGRAPH_POINTPOS[k][0];
            num2 = oy + MENUGRAPH_POINTPOS[k][1];
            num3 = ox + MENUGRAPH_POINTPOS[(k + 1) % 5][0];
            num4 = oy + MENUGRAPH_POINTPOS[(k + 1) % 5][1];
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->DrawLine(num, num2, num3, num4, 1.0f); });
        }
        pls::cs::Int32 x, x2;
        pls::cs::Int32 c1max = 25;
        for (pls::cs::Int32 l = 0; l < 5; ++l) {
            x = ([&]() -> pls::cs::Int32 {
                pls::cs::Int32 cs_arg3 = param1[l];
                pls::cs::Int32 cs_arg4 = param2[l];
                return GameUtil::RateConvert(frame, 0, c1max, cs_arg3, cs_arg4, true);
            }());
            x2 = ([&]() -> pls::cs::Int32 {
                pls::cs::Int32 cs_arg3 = param1[(l + 1) % 5];
                pls::cs::Int32 cs_arg4 = param2[(l + 1) % 5];
                return GameUtil::RateConvert(frame, 0, c1max, cs_arg3, cs_arg4, true);
            }());
            num = ox + ([&]() -> pls::cs::Int32 {
                      pls::cs::Int32 cs_arg3 = MENUGRAPH_POINTPOS[l][0] / 5;
                      pls::cs::Int32 cs_arg4 = MENUGRAPH_POINTPOS[l][0];
                      return GameUtil::RateConvert(x, 0, 1000, cs_arg3, cs_arg4, true);
                  }());
            num2 = oy + ([&]() -> pls::cs::Int32 {
                       pls::cs::Int32 cs_arg3 = MENUGRAPH_POINTPOS[l][1] / 5;
                       pls::cs::Int32 cs_arg4 = MENUGRAPH_POINTPOS[l][1];
                       return GameUtil::RateConvert(x, 0, 1000, cs_arg3, cs_arg4, true);
                   }());
            num3 = ox + ([&]() -> pls::cs::Int32 {
                       pls::cs::Int32 cs_arg3 = MENUGRAPH_POINTPOS[(l + 1) % 5][0] / 5;
                       pls::cs::Int32 cs_arg4 = MENUGRAPH_POINTPOS[(l + 1) % 5][0];
                       return GameUtil::RateConvert(x2, 0, 1000, cs_arg3, cs_arg4, true);
                   }());
            num4 = oy + ([&]() -> pls::cs::Int32 {
                       pls::cs::Int32 cs_arg3 = MENUGRAPH_POINTPOS[(l + 1) % 5][1] / 5;
                       pls::cs::Int32 cs_arg4 = MENUGRAPH_POINTPOS[(l + 1) % 5][1];
                       return GameUtil::RateConvert(x2, 0, 1000, cs_arg3, cs_arg4, true);
                   }());
            for (pls::cs::Int32 num5 = 4; num5 >= 0; --num5) {
                if (num5 > 0) {
                    num += MENUGRAPH_OFF[num5 - 1][0];
                    num2 += MENUGRAPH_OFF[num5 - 1][1];
                    num3 += MENUGRAPH_OFF[num5 - 1][0];
                    num4 += MENUGRAPH_OFF[num5 - 1][1];
                }
                if (num5 == 0) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Graphics::GetColorOfRGB(199, 0, 46);
                        }));
                    });
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Graphics::GetColorOfRGB(255, 128, 100);
                        }));
                    });
                }
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(g)->DrawLine(num, num2, num3, num4, 1.0f); });
            }
        }
    }
}

// M:game.UserData.GetParamPlusNum(System.Int32,System.Int32)
pls::cs::Int32 UserData::GetParamPlusNum(pls::cs::Int32 param_now, pls::cs::Int32 param_max) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetParamPlusNum(System.Int32,System.Int32)", game);
    {
        if (param_max - param_now >= 400) {
            return 3;
        }
        if (param_max - param_now >= 150) {
            return 2;
        }
        if (param_max - param_now >= 30) {
            return 1;
        }
        return 0;
    }
}

// M:game.UserData.GetRankIndex
pls::cs::Int32 UserData::GetRankIndex() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetRankIndex", game);
    {
        return require(UserData::GetInstance())->teamEvaRank_;
    }
}

// M:game.UserData.GetRankIndex(System.Int32)
pls::cs::Int32 UserData::GetRankIndex(pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetRankIndex(System.Int32)", game);
    {
        for (pls::cs::Int32 i = 0; i < UserData::RANK_VALUE().length(); ++i) {
            if (value < UserData::RANK_VALUE()[i]) {
                return i;
            }
        }
        return pls::cs::Int32(UserData::RANK_VALUE().length()) - 1;
    }
}

// M:game.UserData.AddResearchPoint(System.Int32,System.Int32)
void UserData::AddResearchPoint(pls::cs::Int32 researchId, pls::cs::Int32 add) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.AddResearchPoint(System.Int32,System.Int32)", game);
    {
        {
            auto cs_target = researchPoint_;
            auto cs_index = researchId;
            auto cs_value = main::AppData::Clamp(researchPoint_[researchId] + add, 0, 999);
            cs_target.set_Item(cs_index, cs_value);
        }
    }
}

// M:game.UserData.SubResearchPoint(System.Int32,System.Int32)
void UserData::SubResearchPoint(pls::cs::Int32 researchId, pls::cs::Int32 sub) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SubResearchPoint(System.Int32,System.Int32)", game);
    {
        {
            auto cs_target = researchPoint_;
            auto cs_index = researchId;
            auto cs_value = main::AppData::Clamp(researchPoint_[researchId] - sub, 0, 999);
            cs_target.set_Item(cs_index, cs_value);
        }
    }
}

// M:game.UserData.ChResearchPoin(System.Int32,System.Int32)
bool UserData::ChResearchPoin(pls::cs::Int32 researchId, pls::cs::Int32 cost) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.ChResearchPoin(System.Int32,System.Int32)", game);
    {
        if (researchPoint_[researchId] >= cost) {
            return true;
        }
        return false;
    }
}

// M:game.UserData.Training_init
void UserData::Training_init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.Training_init", game);
    {
        for (pls::cs::Int32 i = 0; i < tenants_.length(); ++i) {
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(require(tenants_.get_Item(i))->useTPlayers_));
                }) > 0) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_RemoveAllElements(
                        require(require(tenants_.get_Item(i))->useTPlayers_));
                });
            }
        }
        tAreas_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<pls::cs::Ref<TArea>>>>(
                IntArray::make(2));
        });
        tPlayers_ = pls::cs::Array<pls::cs::Ref<TPlayer>>::make(0);
        tBalls_ = pls::cs::Array<pls::cs::Ref<TBall>>::make(0);
        pDataIdOlderList_ = IntArray::make(0);
        tModeList_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::make(2)); });
        restTPlayers_ = kl_java_util::Vector::create();
        require(apdat_)->RemoveeEffect();
    }
}

// M:game.UserData.SetMatchInfoJoin(System.Int32)
void UserData::SetMatchInfoJoin(pls::cs::Int32 matchInfoJoin) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetMatchInfoJoin(System.Int32)", game);
    {
        matchInfoJoin_ = matchInfoJoin;
        if (matchInfoJoin == 0) {

        } else if (matchInfoJoin == 1) {

        } else if (matchInfoJoin == 2) {
        }
    }
}

// M:game.UserData.GetMatchInfoJoin
pls::cs::Int32 UserData::GetMatchInfoJoin() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetMatchInfoJoin", game);
    {
        return matchInfoJoin_;
    }
}

// M:game.UserData.GetEvaWarPNameValue(System.Single,System.Single)
pls::cs::Int32 UserData::GetEvaWarPNameValue(pls::cs::Single w_warP, pls::cs::Single w_nameValue) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetEvaWarPNameValue(System.Single,System.Single)",
                     game);
    {
        pls::cs::Ref<data::TeamData> teamData = require(main::AppData::GetInstance())->tData_.get_Item(0);
        pls::cs::Int32 warPotential_ = require(teamData)->warPotential_;
        pls::cs::Int32 fanEvaToCommonValue = data::FanActData::GetFanEvaToCommonValue(2);
        {
            pls::cs::Int32 recoveredReturn =
                pls::cs::to_int32(((w_warP * pls::cs::Single(warPotential_) +
                                    w_nameValue * pls::cs::Single(fanEvaToCommonValue)) /
                                   (w_warP + w_nameValue)));
            return recoveredReturn;
        }
    }
}

// M:game.UserData.GetTicketPriceRate(System.Int32)
pls::cs::Single UserData::GetTicketPriceRate(pls::cs::Int32 eva) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetTicketPriceRate(System.Int32)", game);
    {
        pls::cs::Int32 standartTicketPrice = GetStandartTicketPrice(eva);
        {
            pls::cs::Single recoveredReturn =
                pls::cs::Single(standartTicketPrice) / pls::cs::Single(ticketPrice_);
            return recoveredReturn;
        }
    }
}

// M:game.UserData.GetStandartTicketPrice(System.Int32)
pls::cs::Int32 UserData::GetStandartTicketPrice(pls::cs::Int32 eva) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetStandartTicketPrice(System.Int32)", game);
    {
        pls::cs::Int32 num = 0;
        if (eva < 700) {
            num = GameUtil::RateConvert(eva, 0, 700, 1000, 3000, true);
        } else {
            num = GameUtil::RateConvert(eva, 700, 1000, 3000, 6000, true);
        }
        return num;
    }
}

// M:game.UserData.GetTicketPriceFanBonusRate(System.Int32)
pls::cs::Single UserData::GetTicketPriceFanBonusRate(pls::cs::Int32 eva) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetTicketPriceFanBonusRate(System.Int32)", game);
    {
        pls::cs::Int32 standartTicketPrice = GetStandartTicketPrice(eva);
        pls::cs::Single num = pls::cs::Single(standartTicketPrice) / pls::cs::Single(ticketPrice_);
        pls::cs::Single num2 = 1.0f;
        if (num >= 1.0f) {
            num2 = GameUtil::RateConvertFloat(num, 1.0f, 3.0f, 1.0f, 1.5f, true);
        } else {
            num2 = GameUtil::RateConvertFloat(num, 1.0f, 0.33333334f, 1.0f, 0.2f, true);
        }
        return num2;
    }
}

// M:game.UserData.GetIdealSalse(System.Int32)
pls::cs::Int32 UserData::GetIdealSalse(pls::cs::Int32 eva) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetIdealSalse(System.Int32)", game);
    {
        pls::cs::Int32 num = 0;
        if (eva < 700) {
            num = GameUtil::RateConvert(eva, 0, 700, 65, 12000, true);
        } else {
            num = GameUtil::RateConvert(eva, 700, 1000, 12000, 50000, true);
        }
        return num;
    }
}

// M:game.UserData.GetTicketSalseRate(System.Int32)
pls::cs::Single UserData::GetTicketSalseRate(pls::cs::Int32 eva) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetTicketSalseRate(System.Int32)", game);
    {
        pls::cs::Int32 standartTicketPrice = GetStandartTicketPrice(eva);
        pls::cs::Single num = pls::cs::Single(standartTicketPrice) / pls::cs::Single(ticketPrice_);
        pls::cs::Single num2 = 1.0f;
        if (num >= 1.0f) {
            num2 = GameUtil::RateConvertFloat(num, 1.0f, 3.0f, 1.0f, 0.8f, true);
        } else {
            num2 = GameUtil::RateConvertFloat(num, 1.0f, 0.33333334f, 1.0f, 0.6f, true);
        }
        return num2;
    }
}

// M:game.UserData.RotateTestPlayParam
void UserData::RotateTestPlayParam() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.RotateTestPlayParam", game);
    {
        for (pls::cs::Int32 i = 0; i < 9; ++i) {
            if ((i == 0)) {
                AddTestPlayerParam(i, pls::cs::to_int32(require(require(apdat_)->save_)->lngs[0]));
                continue;
            } else if ((i == 1) || (i == 2) || (i == 3)) {
                continue;
            } else if ((i >= 4) && (i <= 7)) {
                AddTestPlayerParam(i, researchPoint_[i - 4]);
                continue;
            }
            if (i == 8) {
                pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
                AddTestPlayerParam(i, require(teamData)->warPotential_);
            }
        }
        for (pls::cs::Int32 num = pls::cs::Int32(tpplay_stock.length()) - 1; num >= 1; --num) {
            for (pls::cs::Int32 j = 0; j < tpplay_stock[num].length(); ++j) {
                tpplay_stock[num][j] = tpplay_stock[num - 1][j];
            }
        }
        for (pls::cs::Int32 k = 0; k < tpplay_stock[0].length(); ++k) {
            tpplay_stock[0][k] = 0;
        }
    }
}

// M:game.UserData.AddTestPlayerParam(System.Int32,System.Int32)
void UserData::AddTestPlayerParam(pls::cs::Int32 tppId, pls::cs::Int32 addValue) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.AddTestPlayerParam(System.Int32,System.Int32)",
                     game);
    {
        {
            auto cs_target = tpplay_stock[0];
            auto cs_index = tppId;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = addValue;
            pls::cs::Int32 cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
    }
}

// M:game.UserData.AddTPlayBattleRecode(System.Int32,System.Int32,System.Int32)
void UserData::AddTPlayBattleRecode(pls::cs::Int32 teamId, pls::cs::Int32 user_score,
                                    pls::cs::Int32 enemy_score) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.UserData.AddTPlayBattleRecode(System.Int32,System.Int32,System.Int32)", game);
    {
        ++tpplay_battleNum;
        pls::cs::Int32 num = teamId * 10000 + user_score * 100 + enemy_score;
        IntArray obj = IntArray::from({tpplay_battleNum, num});
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::Vector_2_AddElement(require(tpplay_battleRecode), pls::cs::box(obj));
        });
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(tpplay_battleRecode));
            }) >= 50) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveElementAt(require(tpplay_battleRecode), 0);
            });
        }
    }
}

// M:game.UserData.OnEventFlg(System.Int32)
void UserData::OnEventFlg(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.OnEventFlg(System.Int32)", game);
    {
        eventActFlg_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(eventActFlg_, id); });
    }
}

// M:game.UserData.ChEventFlg(System.Int32)
bool UserData::ChEventFlg(pls::cs::Int32 id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.ChEventFlg(System.Int32)", game);
    {
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(eventActFlg_, id); })) {
            return true;
        }
        return false;
    }
}

// M:game.UserData.SetNegotiateResult(System.Int32,System.Int32)
void UserData::SetNegotiateResult(pls::cs::Int32 init_value, pls::cs::Int32 difficult) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetNegotiateResult(System.Int32,System.Int32)",
                     game);
    {
        pls::cs::Int32 evaWarPNameValue = GetEvaWarPNameValue(0.2f, 0.8f);
        pls::cs::Int32 num = evaWarPNameValue / 10 - difficult;
        pls::cs::Int32 num2 = 0;
        if (num >= 0) {
            num2 = GameUtil::RateConvert(num, 0, 20, 60, 90, true);
        } else {
            num2 = GameUtil::RateConvert(num, -20, 0, 11, 60, true);
        }
        pls::cs::Int32 num3 = GameUtil::RateConvert(num, -20, 20, 30, 45, true);
        pls::cs::Int32 num4 = GameUtil::RateConvert(num, -20, 20, 10, 20, true);
        pls::cs::Int32 num5 = 0;
        for (pls::cs::Int32 i = 0; i < UserData::NEGOTIATE_RESULT_TH().length(); ++i) {
            if (GameUtil::Random(100) < num2) {
                UserData::NEGOTIATE_RESULT_TH()[i] = 1;
                UserData::NEGOTIATE_RESULT_VALUE()[i] = num3;
                ++num5;
            } else {
                UserData::NEGOTIATE_RESULT_TH()[i] = 0;
                UserData::NEGOTIATE_RESULT_VALUE()[i] = num4;
            }
        }
        UserData::NEGOTIATE_RESULT_DISPVALUE()[0] = init_value;
        UserData::NEGOTIATE_RESULT_DISPVALUE()[1] = ([&]() -> pls::cs::Int32 {
            auto cs_left = UserData::NEGOTIATE_RESULT_DISPVALUE()[0];
            auto cs_right = UserData::NEGOTIATE_RESULT_VALUE()[0];
            return cs_left + cs_right;
        }());
        UserData::NEGOTIATE_RESULT_DISPVALUE()[2] = ([&]() -> pls::cs::Int32 {
            auto cs_left = UserData::NEGOTIATE_RESULT_DISPVALUE()[1];
            auto cs_right = UserData::NEGOTIATE_RESULT_VALUE()[1];
            return cs_left + cs_right;
        }());
        UserData::NEGOTIATE_RESULT_DISPVALUE()[3] = ([&]() -> pls::cs::Int32 {
            auto cs_left = UserData::NEGOTIATE_RESULT_DISPVALUE()[2];
            auto cs_right = UserData::NEGOTIATE_RESULT_VALUE()[2];
            return cs_left + cs_right;
        }());
        for (pls::cs::Int32 j = 0; j < UserData::NEGOTIATE_RESULT_DISPVALUE().length(); ++j) {
            {
                auto cs_target = UserData::NEGOTIATE_RESULT_DISPVALUE();
                auto cs_index = j;
                auto cs_value = main::AppData::ClampMax(UserData::NEGOTIATE_RESULT_DISPVALUE()[j], 100);
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        if (UserData::NEGOTIATE_RESULT_DISPVALUE()[3] >= 100) {
            UserData::NEGOTIATE_RESULT() = 1;
        }
        for (pls::cs::Int32 k = 0; k < UserData::EF_COMMENT_SETTING().length(); ++k) {
            if (k == 0) {
                UserData::EF_COMMENT_SETTING()[k][0] = 0;
            } else {
                {
                    auto cs_target = UserData::EF_COMMENT_SETTING()[k];
                    auto cs_index = 0;
                    auto cs_value = GameUtil::Random(2);
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
            {
                auto cs_target = UserData::EF_COMMENT_SETTING()[k];
                auto cs_index = 1;
                auto cs_value = GameUtil::Random(
                    UserData::EF_FEELPT_COMMENT_()[UserData::EF_COMMENT_SETTING()[k][0]].length());
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:game.UserData.GetFeelPtEf(System.Int32,System.Int32)
pls::cs::Int32 UserData::GetFeelPtEf(pls::cs::Int32 frame, pls::cs::Int32 TIME) {
    UserData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetFeelPtEf(System.Int32,System.Int32)", game);
    {
        pls::cs::Int32 num{};
        pls::cs::Int32 num2{};
        pls::cs::Int32 num3{};
        pls::cs::Int32 num4{};
        {
            num = TIME * UserData::WAIT_TIME()[0] / 100 + 4;
            num2 = TIME * UserData::WAIT_TIME()[1] / 100 + 4;
            num3 = TIME * UserData::WAIT_TIME()[2] / 100 + 4;
            num4 = 0;
            if (frame < num + 12) {
                {
                    num4 = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg3 = UserData::NEGOTIATE_RESULT_DISPVALUE()[0];
                        pls::cs::Int32 cs_arg4 = UserData::NEGOTIATE_RESULT_DISPVALUE()[1];
                        return GameUtil::RateConvert(frame, num, num + 12, cs_arg3, cs_arg4, true);
                    }());
                    goto cs_label_resultExit;
                }
            }
            if (frame < num2 + 12) {
                {
                    num4 = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg3 = UserData::NEGOTIATE_RESULT_DISPVALUE()[1];
                        pls::cs::Int32 cs_arg4 = UserData::NEGOTIATE_RESULT_DISPVALUE()[2];
                        return GameUtil::RateConvert(frame, num2, num2 + 12, cs_arg3, cs_arg4, true);
                    }());
                    goto cs_label_resultExit;
                }
            }
            if (frame < num3 + 12) {
                {
                    num4 = ([&]() -> pls::cs::Int32 {
                        pls::cs::Int32 cs_arg3 = UserData::NEGOTIATE_RESULT_DISPVALUE()[2];
                        pls::cs::Int32 cs_arg4 = UserData::NEGOTIATE_RESULT_DISPVALUE()[3];
                        return GameUtil::RateConvert(frame, num3, num3 + 12, cs_arg3, cs_arg4, true);
                    }());
                    goto cs_label_resultExit;
                }
            }
            {
                num4 = UserData::NEGOTIATE_RESULT_DISPVALUE()[3];
            }
        cs_label_resultExit:;
            return num4;
        }
    }
}

// M:game.UserData.GetAddFeelPtEf(System.Int32,System.Int32)
IntArray UserData::GetAddFeelPtEf(pls::cs::Int32 frame, pls::cs::Int32 TIME) {
    UserData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetAddFeelPtEf(System.Int32,System.Int32)", game);
    {
        pls::cs::Int32 num = TIME * UserData::WAIT_TIME()[0] / 100 - 1;
        pls::cs::Int32 num2 = TIME * UserData::WAIT_TIME()[1] / 100 - 1;
        pls::cs::Int32 num3 = TIME * UserData::WAIT_TIME()[2] / 100 - 1;
        if (frame < num + 20) {
            if (frame < num) {
                UserData::EF_VALUE()[0] = 0;
            } else if (UserData::NEGOTIATE_RESULT_TH()[0] == 1) {
                UserData::EF_VALUE()[0] = 2;
            } else {
                UserData::EF_VALUE()[0] = 1;
            }
            UserData::EF_VALUE()[1] = UserData::NEGOTIATE_RESULT_VALUE()[0];
        } else if (frame < num2 + 20) {
            if (frame < num2) {
                UserData::EF_VALUE()[0] = 0;
            } else if (UserData::NEGOTIATE_RESULT_TH()[1] == 1) {
                UserData::EF_VALUE()[0] = 2;
            } else {
                UserData::EF_VALUE()[0] = 1;
            }
            UserData::EF_VALUE()[1] = UserData::NEGOTIATE_RESULT_VALUE()[1];
        } else if (frame < num3 + 20) {
            if (frame < num3) {
                UserData::EF_VALUE()[0] = 0;
            } else if (UserData::NEGOTIATE_RESULT_TH()[2] == 1) {
                UserData::EF_VALUE()[0] = 2;
            } else {
                UserData::EF_VALUE()[0] = 1;
            }
            UserData::EF_VALUE()[1] = UserData::NEGOTIATE_RESULT_VALUE()[2];
        } else {
            UserData::EF_VALUE()[0] = 0;
        }
        return UserData::EF_VALUE();
    }
}

// M:game.UserData.GetFeelPtEfRetStr(System.Int32)
pls::cs::String UserData::GetFeelPtEfRetStr(pls::cs::Int32 retFeelPt) {
    UserData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetFeelPtEfRetStr(System.Int32)", game);
    {
        if (retFeelPt >= 100) {
            return UserData::FPER_STR()[0];
        }
        if (retFeelPt >= 75) {
            return UserData::FPER_STR()[1];
        }
        if (retFeelPt >= 50) {
            return UserData::FPER_STR()[2];
        }
        if (retFeelPt >= 25) {
            return UserData::FPER_STR()[3];
        }
        return UserData::FPER_STR()[4];
    }
}

// M:game.UserData.GetFeelPtEfCommentParam(System.Int32,System.Int32)
IntArray UserData::GetFeelPtEfCommentParam(pls::cs::Int32 frame, pls::cs::Int32 TIME) {
    UserData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.GetFeelPtEfCommentParam(System.Int32,System.Int32)",
                     game);
    {
        pls::cs::Int32 num = TIME * 20 / 100 - 10;
        pls::cs::Int32 num2 = TIME * 70 / 100 - 10;
        if (frame < num + 20) {
            UserData::EF_COMMENT()[0] = 1;
            UserData::EF_COMMENT()[1] = UserData::EF_COMMENT_SETTING()[0][0];
            UserData::EF_COMMENT()[2] = UserData::EF_COMMENT_SETTING()[0][1];
        } else if (frame < num2 + 20) {
            UserData::EF_COMMENT()[0] = 1;
            UserData::EF_COMMENT()[1] = UserData::EF_COMMENT_SETTING()[1][0];
            UserData::EF_COMMENT()[2] = UserData::EF_COMMENT_SETTING()[1][1];
        } else {
            UserData::EF_COMMENT()[0] = 1;
            UserData::EF_COMMENT()[1] = UserData::EF_COMMENT_SETTING()[2][0];
            UserData::EF_COMMENT()[2] = UserData::EF_COMMENT_SETTING()[2][1];
        }
        return UserData::EF_COMMENT();
    }
}

// M:game.UserData.ChGetFeelPtEfCommentParam_dispRefresh(System.Int32,System.Int32)
bool UserData::ChGetFeelPtEfCommentParam_dispRefresh(pls::cs::Int32 frame, pls::cs::Int32 TIME) {
    UserData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.UserData.ChGetFeelPtEfCommentParam_dispRefresh(System.Int32,System.Int32)",
                     game);
    {
        pls::cs::Int32 num = TIME * 20 / 100 - 10;
        pls::cs::Int32 num2 = TIME * 70 / 100 - 10;
        if (frame == num + 20 || frame == num + 20 + 1 || frame == num + 20 - 1) {
            return true;
        }
        if (frame == num2 + 20 || frame == num2 + 20 + 1 || frame == num2 + 20 - 1) {
            return true;
        }
        return false;
    }
}

// M:game.UserData.RecordAddMoney(System.Int32,System.Int32)
void UserData::RecordAddMoney(pls::cs::Int32 recordId, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.RecordAddMoney(System.Int32,System.Int32)", game);
    {
        {
            auto cs_target = records_[require(require(apdat_)->save_)->ints[2]][recordId];
            auto cs_index = 0;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = value;
            pls::cs::Int32 cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
    }
}

// M:game.UserData.RecordSubMoney(System.Int32,System.Int32)
void UserData::RecordSubMoney(pls::cs::Int32 recordId, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.RecordSubMoney(System.Int32,System.Int32)", game);
    {
        {
            auto cs_target = records_[require(require(apdat_)->save_)->ints[2]][recordId];
            auto cs_index = 1;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = value;
            pls::cs::Int32 cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
    }
}

// M:game.UserData.RecordReset
void UserData::RecordReset() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.RecordReset", game);
    {
        for (pls::cs::Int32 i = 0; i < records_.length(); ++i) {
            for (pls::cs::Int32 j = 0; j < records_[i].length(); ++j) {
                records_[i][j][0] = 0;
                records_[i][j][1] = 0;
            }
        }
    }
}

// M:game.UserData.RecordAddCustomerNum(System.Int32)
void UserData::RecordAddCustomerNum(pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.RecordAddCustomerNum(System.Int32)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                auto cs_receiver = record_customer;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(kl_lang::JInteger::create(value));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }());
        });
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(record_customer));
            }) > 10) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveElementAt(require(record_customer), 0);
            });
        }
    }
}

// M:game.UserData.CustomerNumReset
void UserData::CustomerNumReset() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.CustomerNumReset", game);
    {
        for (pls::cs::Int32 i = 0; i < customer_month_.length(); ++i) {
            customer_month_[i] = 0;
        }
    }
}

// M:game.UserData.SetClearPoint
void UserData::SetClearPoint() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetClearPoint", game);
    {
        clear_point[0][0] = customer_total_;
        clear_point[0][1] = pls::cs::to_int64((pls::cs::Single(clear_point[0][0]) * 0.01f));
        clear_point[1][0] = pls::cs::cast_integral<pls::cs::Int64>(matchGetGoalTotal_);
        clear_point[1][1] = pls::cs::to_int64((pls::cs::Single(clear_point[1][0]) * 30.0f));
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < require(apdat_)->pData_.length(); ++i) {
            pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(i);
            if (require(playerData)->onceMember_ == 0) {
                continue;
            }
            num += require(playerData)->lv_;
        }
        clear_point[2][0] = pls::cs::cast_integral<pls::cs::Int64>(num);
        clear_point[2][1] = pls::cs::to_int64((pls::cs::Single(clear_point[2][0]) * 15.0f));
        clear_point[3][0] = pls::cs::cast_integral<pls::cs::Int64>(matchResult_[0]);
        clear_point[3][1] = pls::cs::to_int64((pls::cs::Single(clear_point[3][0]) * 150.0f));
        pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
        clear_point[4][0] = pls::cs::cast_integral<pls::cs::Int64>(require(teamData)->warPotential_);
        clear_point[4][1] = pls::cs::to_int64((pls::cs::Single(clear_point[4][0]) * 15.0f));
        pls::cs::Int32 num2 = 0;
        for (pls::cs::Int32 j = 0; j < require(apdat_)->sponsorData_.length(); ++j) {
            if (require(require(apdat_)->sponsorData_.get_Item(j))->state_ != 2) {
                continue;
            }
            num2 += require(require(apdat_)->sponsorData_.get_Item(j))->satisfactPoint_;
        }
        clear_point[5][0] = pls::cs::cast_integral<pls::cs::Int64>(num2);
        clear_point[5][1] = pls::cs::to_int64((pls::cs::Single(clear_point[5][0]) * 5.0f));
        pls::cs::Int32 num3 = 0;
        for (pls::cs::Int32 k = 0; k < require(apdat_)->formationData_.length(); ++k) {
            if (require(require(apdat_)->formationData_.get_Item(k))->state_ == 0) {
                continue;
            }
            ++num3;
        }
        clear_point[6][0] = pls::cs::cast_integral<pls::cs::Int64>(num3);
        clear_point[6][1] = pls::cs::to_int64((pls::cs::Single(clear_point[6][0]) * 100.0f));
    }
}

// M:game.UserData.SetContinueGameData
void UserData::SetContinueGameData() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.SetContinueGameData", game);
    {
        data::TenantData::ensure_initialized();

        IntArray array = IntArray{};
        IntArray2 array2 = IntArray2{};
        if (require(require(apdat_)->sysSave_)->bins[0].length() > 0) {
            array = IntArray::make(require(apdat_)->pData_.length());
            array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::JTool::MakeArray<IntArray2>(
                    IntArray::from({require(apdat_)->pData_.length(),
                                    require(require(apdat_)->pData_.get_Item(0))->trainingPoint_.length()}));
            });
            pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream =
                pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream =
                            kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[0]);
                        for (pls::cs::Int32 i = 0; i < require(apdat_)->pData_.length(); ++i) {
                            array[i] = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);
                            });
                            for (pls::cs::Int32 j = 0; j < array2[i].length(); ++j) {
                                {
                                    auto cs_target = array2[i];
                                    auto cs_index = j;
                                    auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);
                                    });
                                    cs_target.set_Item(cs_index, cs_value);
                                }
                            }
                        }
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    }
                    byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                });
        }
        pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayOutputStream = kl_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 k = 0; k < require(apdat_)->pData_.length(); ++k) {
                        pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(k);
                        if ([&]() {
                                auto cs_left = pls::cs::box(array);
                                auto cs_right = pls::cs::box(IntArray{});
                                return cs_left == cs_right;
                            }()) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteInt(
                                    static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                    require(playerData)->lv_);
                            });
                            for (pls::cs::Int32 l = 0; l < require(playerData)->trainingPoint_.length();
                                 ++l) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::StreamUtil::WriteInt(
                                        static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                        require(playerData)->trainingPoint_[l]);
                                });
                            }
                            continue;
                        }
                        pls::cs::Int32 num = 0;
                        if ((([&]() -> bool {
                                auto cs_left = require(playerData)->lv_;
                                auto cs_right = array[k];
                                return cs_left > cs_right;
                            }()))) {
                            num = (require(playerData)->lv_);
                        } else {
                            num = (array[k]);
                        }
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::WriteInt(
                                static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream), num);
                        });
                        for (pls::cs::Int32 m = 0; m < require(playerData)->trainingPoint_.length(); ++m) {
                            if ((([&]() -> bool {
                                    auto cs_left = require(playerData)->trainingPoint_[m];
                                    auto cs_right = array2[k][m];
                                    return cs_left > cs_right;
                                }()))) {
                                num = (require(playerData)->trainingPoint_[m]);
                            } else {
                                num = (array2[k][m]);
                            }
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteInt(
                                    static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                    num);
                            });
                        }
                    }
                    {
                        auto cs_target = require(require(apdat_)->sysSave_)->bins;
                        auto cs_index = 0;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            },
            [&]() {
                if (!is_null(byteArrayOutputStream)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream)->Close(); });
                }
                byteArrayOutputStream = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
                array = IntArray{};
                array2 = IntArray2{};
            });
        BoolArray array3 = BoolArray{};
        if (require(require(apdat_)->sysSave_)->bins[1].length() > 0) {
            pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream2 =
                pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream2 =
                            kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[1]);
                        array3 = BoolArray::make(require(apdat_)->formationData_.length());
                        for (pls::cs::Int32 n = 0; n < require(apdat_)->formationData_.length(); ++n) {
                            array3[n] = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::ReadBoolean(byteArrayInputStream2);
                            });
                        }
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream2)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayInputStream2)->Close(); });
                    }
                    byteArrayInputStream2 = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                });
        }
        pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream2 =
            pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayOutputStream2 = kl_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num2 = 0; num2 < require(apdat_)->formationData_.length(); ++num2) {
                        pls::cs::Ref<data::FormationData> formationData =
                            require(apdat_)->formationData_.get_Item(num2);
                        if ([&]() {
                                auto cs_left = pls::cs::box(array3);
                                auto cs_right = pls::cs::box(BoolArray{});
                                return cs_left == cs_right;
                            }()) {
                            if (require(formationData)->state_ == 1) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::StreamUtil::WriteBoolean(byteArrayOutputStream2,
                                                                                   true);
                                });
                            } else {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::StreamUtil::WriteBoolean(byteArrayOutputStream2,
                                                                                   false);
                                });
                            }
                        } else if (require(formationData)->state_ == 1 || array3[num2]) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteBoolean(byteArrayOutputStream2, true);
                            });
                        } else {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteBoolean(byteArrayOutputStream2, false);
                            });
                        }
                    }
                    {
                        auto cs_target = require(require(apdat_)->sysSave_)->bins;
                        auto cs_index = 1;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream2)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            },
            [&]() {
                if (!is_null(byteArrayOutputStream2)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream2)->Close(); });
                }
                byteArrayOutputStream2 = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
                array3 = BoolArray{};
            });
        IntArray array4 = IntArray{};
        if (require(require(apdat_)->sysSave_)->bins[2].length() > 0) {
            pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream3 =
                pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream3 =
                            kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[2]);
                        array4 = IntArray::make(require(apdat_)->tenantData_.length());
                        for (pls::cs::Int32 num3 = 0; num3 < require(apdat_)->tenantData_.length(); ++num3) {
                            array4[num3] = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream3);
                            });
                        }
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream3)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayInputStream3)->Close(); });
                    }
                    byteArrayInputStream3 = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                });
        }
        pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream3 =
            pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayOutputStream3 = kl_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num4 = 0; num4 < require(apdat_)->tenantData_.length(); ++num4) {
                        pls::cs::Ref<data::TenantData> tenantData =
                            require(apdat_)->tenantData_.get_Item(num4);
                        if (require(tenantData)->id_ == data::TenantData::TENANT_ID_TRAININGAREA() ||
                            require(tenantData)->id_ == data::TenantData::TENANT_ID_TRAININGAREA_SPRED() ||
                            require(tenantData)->id_ == data::TenantData::TENANT_ID_STADIUM()) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteInt(
                                    static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream3),
                                    1);
                            });
                            continue;
                        }
                        if ([&]() {
                                auto cs_left = pls::cs::box(array4);
                                auto cs_right = pls::cs::box(IntArray{});
                                return cs_left == cs_right;
                            }()) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteInt(
                                    static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream3),
                                    require(tenantData)->lv_);
                            });
                            continue;
                        }
                        pls::cs::Int32 num5 = 0;
                        if ((([&]() -> bool {
                                auto cs_left = require(tenantData)->lv_;
                                auto cs_right = array4[num4];
                                return cs_left > cs_right;
                            }()))) {
                            num5 = (require(tenantData)->lv_);
                        } else {
                            num5 = (array4[num4]);
                        }
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::WriteInt(
                                static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream3), num5);
                        });
                    }
                    {
                        auto cs_target = require(require(apdat_)->sysSave_)->bins;
                        auto cs_index = 2;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream3)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            },
            [&]() {
                if (!is_null(byteArrayOutputStream3)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream3)->Close(); });
                }
                byteArrayOutputStream3 = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
                array4 = IntArray{};
            });
        IntArray array5 = IntArray{};
        if (require(require(apdat_)->sysSave_)->bins[3].length() > 0) {
            pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream4 =
                pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream4 =
                            kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[3]);
                        array5 = IntArray::make(require(apdat_)->svisorData_.length());
                        for (pls::cs::Int32 num6 = 0; num6 < require(apdat_)->svisorData_.length(); ++num6) {
                            array5[num6] = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream4);
                            });
                        }
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream4)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayInputStream4)->Close(); });
                    }
                    byteArrayInputStream4 = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                });
        }
        pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream4 =
            pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayOutputStream4 = kl_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num7 = 0; num7 < require(apdat_)->svisorData_.length(); ++num7) {
                        pls::cs::Ref<data::SupervisorData> supervisorData =
                            require(apdat_)->svisorData_.get_Item(num7);
                        if ([&]() {
                                auto cs_left = pls::cs::box(array5);
                                auto cs_right = pls::cs::box(IntArray{});
                                return cs_left == cs_right;
                            }()) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteInt(
                                    static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream4),
                                    require(supervisorData)->lv_);
                            });
                            continue;
                        }
                        pls::cs::Int32 num8 = 0;
                        if ((([&]() -> bool {
                                auto cs_left = require(supervisorData)->lv_;
                                auto cs_right = array5[num7];
                                return cs_left > cs_right;
                            }()))) {
                            num8 = (require(supervisorData)->lv_);
                        } else {
                            num8 = (array5[num7]);
                        }
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::WriteInt(
                                static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream4), num8);
                        });
                    }
                    {
                        auto cs_target = require(require(apdat_)->sysSave_)->bins;
                        auto cs_index = 3;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream4)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            },
            [&]() {
                if (!is_null(byteArrayOutputStream4)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream4)->Close(); });
                }
                byteArrayOutputStream4 = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
                array5 = IntArray{};
            });
        BoolArray array6 = BoolArray{};
        if (require(require(apdat_)->sysSave_)->bins[4].length() > 0) {
            pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream5 =
                pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream5 =
                            kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[4]);
                        array6 = BoolArray::make(require(apdat_)->tradeData_.length());
                        for (pls::cs::Int32 num9 = 0; num9 < require(apdat_)->tradeData_.length(); ++num9) {
                            pls::cs::Ref<data::TradeData> tradeData =
                                require(apdat_)->tradeData_.get_Item(num9);
                            array6[num9] = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::ReadBoolean(byteArrayInputStream5);
                            });
                        }
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream5)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayInputStream5)->Close(); });
                    }
                    byteArrayInputStream5 = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                });
        }
        pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream5 =
            pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayOutputStream5 = kl_io::ByteArrayOutputStream::create();
                    for (pls::cs::Int32 num10 = 0; num10 < require(apdat_)->tradeData_.length(); ++num10) {
                        pls::cs::Ref<data::TradeData> tradeData2 =
                            require(apdat_)->tradeData_.get_Item(num10);
                        if ([&]() {
                                auto cs_left = pls::cs::box(array6);
                                auto cs_right = pls::cs::box(BoolArray{});
                                return cs_left == cs_right;
                            }()) {
                            if (require(tradeData2)->state_ != 0) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::StreamUtil::WriteBoolean(byteArrayOutputStream5,
                                                                                   true);
                                });
                            } else {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::StreamUtil::WriteBoolean(byteArrayOutputStream5,
                                                                                   false);
                                });
                            }
                        } else if (require(tradeData2)->state_ != 0 || array6[num10]) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteBoolean(byteArrayOutputStream5, true);
                            });
                        } else {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteBoolean(byteArrayOutputStream5, false);
                            });
                        }
                    }
                    {
                        auto cs_target = require(require(apdat_)->sysSave_)->bins;
                        auto cs_index = 4;
                        auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream5)->ToByteArray();
                        });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            },
            [&]() {
                if (!is_null(byteArrayOutputStream5)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(byteArrayOutputStream5)->Close(); });
                }
                byteArrayOutputStream5 = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
            });
        require(apdat_)->SaveSystem();
    }
}

// M:game.UserData.ReflectContinueGameData
void UserData::ReflectContinueGameData() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.UserData.ReflectContinueGameData", game);
    {
        if (require(require(apdat_)->sysSave_)->bins[0].length() > 0) {
            pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream =
                pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream =
                            kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[0]);
                        for (pls::cs::Int32 i = 0; i < require(apdat_)->pData_.length(); ++i) {
                            pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(i);
                            {
                                auto cs_target = playerData;
                                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);
                                });
                                require(cs_target)->lv_ = cs_value;
                            }
                            for (pls::cs::Int32 j = 0; j < require(playerData)->trainingPoint_.length();
                                 ++j) {
                                {
                                    auto cs_target = require(playerData)->trainingPoint_;
                                    auto cs_index = j;
                                    auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);
                                    });
                                    cs_target.set_Item(cs_index, cs_value);
                                }
                            }
                            require(playerData)->SetLv(require(playerData)->lv_);
                        }
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayInputStream)->Close(); });
                    }
                    byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                });
        }
        if (require(require(apdat_)->sysSave_)->bins[1].length() > 0) {
            pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream2 =
                pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream2 =
                            kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[1]);
                        for (pls::cs::Int32 k = 0; k < require(apdat_)->formationData_.length(); ++k) {
                            pls::cs::Ref<data::FormationData> formationData =
                                require(apdat_)->formationData_.get_Item(k);
                            {
                                bool recoveredCondition_173183 =
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_unity_util::StreamUtil::ReadBoolean(byteArrayInputStream2);
                                    });
                                if (recoveredCondition_173183) {
                                    require(formationData)->ChangeState(1);
                                    require(formationData)->new_ = false;
                                }
                            }
                        }
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream2)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayInputStream2)->Close(); });
                    }
                    byteArrayInputStream2 = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                });
        }
        if (require(require(apdat_)->sysSave_)->bins[2].length() > 0) {
            pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream3 =
                pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream3 =
                            kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[2]);
                        for (pls::cs::Int32 l = 0; l < require(apdat_)->tenantData_.length(); ++l) {
                            pls::cs::Ref<data::TenantData> tenantData =
                                require(apdat_)->tenantData_.get_Item(l);
                            pls::cs::Int32 lv = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream3);
                            });
                            require(tenantData)->SetLv(lv);
                        }
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream3)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayInputStream3)->Close(); });
                    }
                    byteArrayInputStream3 = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                });
        }
        if (require(require(apdat_)->sysSave_)->bins[3].length() > 0) {
            pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream4 =
                pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream4 =
                            kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[3]);
                        for (pls::cs::Int32 m = 0; m < require(apdat_)->svisorData_.length(); ++m) {
                            pls::cs::Ref<data::SupervisorData> supervisorData =
                                require(apdat_)->svisorData_.get_Item(m);
                            pls::cs::Int32 lv2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream4);
                            });
                            require(supervisorData)->SetLv(lv2);
                        }
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream4)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayInputStream4)->Close(); });
                    }
                    byteArrayInputStream4 = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                });
        }
        if (require(require(apdat_)->sysSave_)->bins[4].length() > 0) {
            pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream5 =
                pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream5 =
                            kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[4]);
                        for (pls::cs::Int32 n = 0; n < require(apdat_)->tradeData_.length(); ++n) {
                            pls::cs::Ref<data::TradeData> tradeData = require(apdat_)->tradeData_.get_Item(n);
                            bool recoveredTradePresent = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::ReadBoolean(byteArrayInputStream5);
                            });
                            if (recoveredTradePresent) {
                                if (require(tradeData)->IsPlayerInMember()) {
                                    require(tradeData)->ChangeState(2);
                                    require(tradeData)->new_ = false;
                                } else {
                                    require(tradeData)->ChangeState(1);
                                    require(tradeData)->new_ = false;
                                }
                            }
                        }
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream5)) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(byteArrayInputStream5)->Close(); });
                    }
                    byteArrayInputStream5 = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                });
        }
    }
}
} // namespace game
}
