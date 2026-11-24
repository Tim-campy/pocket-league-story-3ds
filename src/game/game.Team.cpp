// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.FormationData.hpp"
#include "data.PlayerData.hpp"
#include "data.TeamData.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.Player.hpp"
#include "game.Team.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using FloatArray = pls::cs::Array<pls::cs::Single>;
using FloatArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Single>>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;
using IntArray3 = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>;

namespace pls::game {
namespace game {

void Team::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(apdat_, visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(players_, visitor);
    pls::cs::trace_value(fPos_, visitor);
    pls::cs::trace_value(CORRECT_LINE, visitor);
    pls::cs::trace_value(NOW_LINE, visitor);
    pls::cs::trace_value(team_policyEva, visitor);
    pls::cs::trace_value(team_eva, visitor);
    pls::cs::trace_value(team_frect, visitor);
    pls::cs::trace_value(frect_pos, visitor);
    pls::cs::trace_value(frect_cpos, visitor);
    pls::cs::trace_value(amefto_goalPos_, visitor);
    pls::cs::trace_value(amefto_cameraPos_, visitor);
    pls::cs::trace_value(amefto_address_, visitor);
    pls::cs::trace_value(receiverPIdBox_, visitor);
    pls::cs::trace_value(CEVA_PASSER_MP2, visitor);
    pls::cs::trace_value(CEVA_PASSER_MP2_DIV, visitor);
    pls::cs::trace_value(CEVA_PASSER_MP3, visitor);
    pls::cs::trace_value(CEVA_PASSER_AP, visitor);
    pls::cs::trace_value(CEVA_PASSER_ENEAP, visitor);
    pls::cs::trace_value(coatEva_passer, visitor);
    pls::cs::trace_value(coatEva_freeRun, visitor);
    pls::cs::trace_value(coatEva_defence, visitor);
    pls::cs::trace_value(coatEva_looseBall, visitor);
    pls::cs::trace_value(coatEva_passer2, visitor);
    pls::cs::trace_value(coatEva_freeRun2, visitor);
    pls::cs::trace_value(coatEva_new_offence, visitor);
    pls::cs::trace_value(coatEva_new_offence_passer, visitor);
    pls::cs::trace_value(coatEva_new_deffence, visitor);
    pls::cs::trace_value(ballNearPlayer_, visitor);
    pls::cs::trace_value(players_receive_, visitor);
}

static IntArray Team_AMEFTO_FRECT_GOALZ_storage{};

static pls::cs::Int32 Team_AMEFTO_ONECHARGETIME_PLAYER_storage{};

static IntArray Team_AMEFTO_PASSER_COATEVA_storage{};

static IntArray Team_AMEFTO_PZ_storage{};

static IntArray Team_ch_ceva_storage{};

static StringArray Team_CH_COATEVA_STR_storage{};

static StringArray Team_CH_DATA_STR_storage{};

static IntArray2 Team_DEAFULT_FORMATION_EVA_storage{};

static IntArray2 Team_DEAFULT_FORMATION_EVA_PENALTYAREA_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Team_FORMATION_KICKOFF_storage{};

static pls::cs::Int32 Team_FORMATION_RATE_DEFFECNE_storage{};

static IntArray Team_FORMATION_TYPE_RATE_storage{};

static IntArray3 Team_GOAL_GLAD_AROUND_POS_storage{};

static IntArray Team_mostEva_address_storage{};

static IntArray3 Team_PANEL_DIRECT_storage{};

static IntArray2 Team_PANEL_DIRECT_1_storage{};

static IntArray2 Team_PANEL_DIRECT_2_storage{};

static IntArray2 Team_PANEL_DIRECT_3_storage{};

static IntArray2 Team_PANEL_DIRECT_4_storage{};

static IntArray2 Team_PANEL_DIRECT_5_storage{};

static IntArray2 Team_PANEL_DIRECT_6_storage{};

static IntArray3 Team_PANEL_DIRECT_R_storage{};

static IntArray2 Team_PANEL_DIRECT_R_1_storage{};

static IntArray2 Team_PANEL_DIRECT_R_2_storage{};

static IntArray2 Team_PANEL_DIRECT_R_3_storage{};

static IntArray2 Team_PANEL_DIRECT_R_4_storage{};

static IntArray2 Team_PANEL_DIRECT_R_9BLOCK_storage{};

static pls::cs::Single Team_PRP_W_DIS_storage{};

static pls::cs::Single Team_RPP_W_AROUNDENEMY_storage{};

static pls::cs::Single Team_RPP_W_COATEVASUM_storage{};

static pls::cs::Single Team_RPP_W_DISTOGOAL_NORMAL_storage{};

static pls::cs::Single Team_RPP_W_DISTOGOAL_PAREA_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Team_team_formationCenterPos_storage{};

static PLS_NOINLINE void cs_init_403f4e6631bd3667_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(Team_AMEFTO_FRECT_GOALZ_storage, visitor);
        pls::cs::trace_value(Team_AMEFTO_ONECHARGETIME_PLAYER_storage, visitor);
        pls::cs::trace_value(Team_AMEFTO_PASSER_COATEVA_storage, visitor);
        pls::cs::trace_value(Team_AMEFTO_PZ_storage, visitor);
        pls::cs::trace_value(Team_ch_ceva_storage, visitor);
        pls::cs::trace_value(Team_CH_COATEVA_STR_storage, visitor);
        pls::cs::trace_value(Team_CH_DATA_STR_storage, visitor);
        pls::cs::trace_value(Team_DEAFULT_FORMATION_EVA_storage, visitor);
        pls::cs::trace_value(Team_DEAFULT_FORMATION_EVA_PENALTYAREA_storage, visitor);
        pls::cs::trace_value(Team_FORMATION_KICKOFF_storage, visitor);
        pls::cs::trace_value(Team_FORMATION_RATE_DEFFECNE_storage, visitor);
        pls::cs::trace_value(Team_FORMATION_TYPE_RATE_storage, visitor);
        pls::cs::trace_value(Team_GOAL_GLAD_AROUND_POS_storage, visitor);
        pls::cs::trace_value(Team_mostEva_address_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_1_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_2_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_3_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_4_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_5_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_6_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_1_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_2_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_3_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_4_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_9BLOCK_storage, visitor);
        pls::cs::trace_value(Team_PRP_W_DIS_storage, visitor);
        pls::cs::trace_value(Team_RPP_W_AROUNDENEMY_storage, visitor);
        pls::cs::trace_value(Team_RPP_W_COATEVASUM_storage, visitor);
        pls::cs::trace_value(Team_RPP_W_DISTOGOAL_NORMAL_storage, visitor);
        pls::cs::trace_value(Team_RPP_W_DISTOGOAL_PAREA_storage, visitor);
        pls::cs::trace_value(Team_team_formationCenterPos_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.Team", flag, []() {
        Team_FORMATION_KICKOFF_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.FORMATION_KICKOFF", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                    {kl_util3d::Vector3D::create(-30.0f, 0.0f, -20.0f),
                     kl_util3d::Vector3D::create(-5.0f, 0.0f, -30.0f)});
            });
        Team_AMEFTO_ONECHARGETIME_PLAYER_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.AMEFTO_ONECHARGETIME_PLAYER", [&]() { return 40; });
        Team_AMEFTO_PZ_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.AMEFTO_PZ", [&]() { return IntArray::from({180, 90, 360}); });
        Team_AMEFTO_PASSER_COATEVA_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.AMEFTO_PASSER_COATEVA", [&]() { return IntArray::from({10, 25, 50, 100}); });
        Team_AMEFTO_FRECT_GOALZ_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.AMEFTO_FRECT_GOALZ", [&]() { return IntArray::from({60, 50, 40, 30}); });
        Team_PANEL_DIRECT_1_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.PANEL_DIRECT_1", [&]() { return IntArray2::from({IntArray::make(2)}); });
        Team_PANEL_DIRECT_2_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_2", [&]() {
                return IntArray2::from({IntArray::from({0, -1}), IntArray::from({-1, 0}),
                                        IntArray::from({1, 0}), IntArray::from({0, 1})});
            });
        Team_PANEL_DIRECT_3_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_3", [&]() {
                return IntArray2::from({IntArray::from({0, -2}), IntArray::from({-1, -1}),
                                        IntArray::from({1, -1}), IntArray::from({-2, 0}),
                                        IntArray::from({2, 0}), IntArray::from({-1, 1}),
                                        IntArray::from({1, 1}), IntArray::from({0, 2})});
            });
        Team_PANEL_DIRECT_4_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_4", [&]() {
                return IntArray2::from(
                    {IntArray::from({0, -3}), IntArray::from({-1, -2}), IntArray::from({1, -2}),
                     IntArray::from({-2, -1}), IntArray::from({2, -1}), IntArray::from({-3, 0}),
                     IntArray::from({3, 0}), IntArray::from({-2, 1}), IntArray::from({2, 1}),
                     IntArray::from({-1, 2}), IntArray::from({1, 2}), IntArray::from({0, 3})});
            });
        Team_PANEL_DIRECT_5_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_5", [&]() {
                return IntArray2::from(
                    {IntArray::from({0, -4}), IntArray::from({-1, -3}), IntArray::from({1, -3}),
                     IntArray::from({-2, -2}), IntArray::from({2, -2}), IntArray::from({-3, -1}),
                     IntArray::from({3, -1}), IntArray::from({-4, 0}), IntArray::from({4, 0}),
                     IntArray::from({-3, 1}), IntArray::from({3, 1}), IntArray::from({-2, 2}),
                     IntArray::from({2, 2}), IntArray::from({-1, 3}), IntArray::from({1, 3}),
                     IntArray::from({0, 4})});
            });
        Team_PANEL_DIRECT_6_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_6", [&]() {
                return IntArray2::from(
                    {IntArray::from({0, -5}),  IntArray::from({-1, -4}), IntArray::from({1, -4}),
                     IntArray::from({-2, -3}), IntArray::from({2, -3}),  IntArray::from({-3, -2}),
                     IntArray::from({3, -2}),  IntArray::from({-4, -1}), IntArray::from({4, -1}),
                     IntArray::from({-5, 0}),  IntArray::from({5, 0}),   IntArray::from({-4, 1}),
                     IntArray::from({4, 1}),   IntArray::from({-3, 2}),  IntArray::from({3, 2}),
                     IntArray::from({-2, 3}),  IntArray::from({2, 3}),   IntArray::from({-1, 4}),
                     IntArray::from({1, 4}),   IntArray::from({0, 5})});
            });
        Team_PANEL_DIRECT_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT", [&]() {
                return IntArray3::from({Team::PANEL_DIRECT_1(), Team::PANEL_DIRECT_2(),
                                        Team::PANEL_DIRECT_3(), Team::PANEL_DIRECT_4(),
                                        Team::PANEL_DIRECT_5(), Team::PANEL_DIRECT_6()});
            });
        Team_PANEL_DIRECT_R_1_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.PANEL_DIRECT_R_1", [&]() { return IntArray2::from({IntArray::make(2)}); });
        Team_PANEL_DIRECT_R_2_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R_2", [&]() {
                return IntArray2::from({IntArray::from({-1, -1}), IntArray::from({0, -1}),
                                        IntArray::from({1, -1}), IntArray::from({-1, 0}),
                                        IntArray::from({1, 0}), IntArray::from({-1, 1}),
                                        IntArray::from({0, 1}), IntArray::from({1, 1})});
            });
        Team_PANEL_DIRECT_R_3_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R_3", [&]() {
                return IntArray2::from(
                    {IntArray::from({-2, -2}), IntArray::from({-1, -2}), IntArray::from({0, -2}),
                     IntArray::from({1, -2}), IntArray::from({2, -2}), IntArray::from({-2, -1}),
                     IntArray::from({2, -1}), IntArray::from({-2, 0}), IntArray::from({2, 0}),
                     IntArray::from({-2, 1}), IntArray::from({2, 1}), IntArray::from({-2, 2}),
                     IntArray::from({-1, 2}), IntArray::from({0, 2}), IntArray::from({1, 2}),
                     IntArray::from({2, 2})});
            });
        Team_PANEL_DIRECT_R_4_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R_4", [&]() {
                return IntArray2::from(
                    {IntArray::from({-3, -3}), IntArray::from({-2, -3}), IntArray::from({-1, -3}),
                     IntArray::from({0, -3}),  IntArray::from({1, -3}),  IntArray::from({2, -3}),
                     IntArray::from({3, -3}),  IntArray::from({-3, -2}), IntArray::from({3, -2}),
                     IntArray::from({-3, -1}), IntArray::from({3, -1}),  IntArray::from({-3, 0}),
                     IntArray::from({3, 0}),   IntArray::from({-3, 1}),  IntArray::from({3, 1}),
                     IntArray::from({-3, 2}),  IntArray::from({3, 2}),   IntArray::from({-3, 3}),
                     IntArray::from({-2, 3}),  IntArray::from({-1, 3}),  IntArray::from({0, 3}),
                     IntArray::from({1, 3}),   IntArray::from({2, 3}),   IntArray::from({3, 3})});
            });
        Team_PANEL_DIRECT_R_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R", [&]() {
                return IntArray3::from({Team::PANEL_DIRECT_R_1(), Team::PANEL_DIRECT_R_2(),
                                        Team::PANEL_DIRECT_R_3(), Team::PANEL_DIRECT_R_4()});
            });
        Team_PANEL_DIRECT_R_9BLOCK_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R_9BLOCK", [&]() {
                return IntArray2::from({IntArray::from({-1, -1}), IntArray::from({0, -1}),
                                        IntArray::from({1, -1}), IntArray::from({-1, 0}), IntArray::make(2),
                                        IntArray::from({1, 0}), IntArray::from({-1, 1}),
                                        IntArray::from({0, 1}), IntArray::from({1, 1})});
            });
        Team_FORMATION_TYPE_RATE_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.FORMATION_TYPE_RATE", [&]() { return IntArray::from({0, 50, -50}); });
        Team_FORMATION_RATE_DEFFECNE_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.FORMATION_RATE_DEFFECNE", [&]() { return -70; });
        Team_CH_COATEVA_STR_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.CH_COATEVA_STR", [&]() { return StringArray::make(0); });
        Team_ch_ceva_storage = pls::cs::evaluate_type_initializer_field("F:game.Team.ch_ceva",
                                                                        [&]() { return IntArray::make(12); });
        Team_CH_DATA_STR_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.CH_DATA_STR", [&]() { return StringArray::make(0); });
        Team_mostEva_address_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.mostEva_address", [&]() { return IntArray::make(2); });
        Team_RPP_W_COATEVASUM_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.RPP_W_COATEVASUM", [&]() { return 0.5f; });
        Team_RPP_W_DISTOGOAL_NORMAL_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.RPP_W_DISTOGOAL_NORMAL", [&]() { return 0.6f; });
        Team_RPP_W_DISTOGOAL_PAREA_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.RPP_W_DISTOGOAL_PAREA", [&]() { return 3.0f; });
        Team_RPP_W_AROUNDENEMY_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.RPP_W_AROUNDENEMY", [&]() { return 0.6f; });
        Team_PRP_W_DIS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PRP_W_DIS", [&]() { return 1.4f; });
        Team_team_formationCenterPos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.team_formationCenterPos", [&]() { return kl_util3d::Vector3D::create(); });
        Team_GOAL_GLAD_AROUND_POS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.GOAL_GLAD_AROUND_POS", [&]() {
                return IntArray3::from(
                    {IntArray2::from({IntArray::from({-60, 60, 60, 60}), IntArray::from({-30, 70, 70, 70}),
                                      IntArray::from({-70, 30, 70, 70}), IntArray::from({-30, 70, 30, -70}),
                                      IntArray::from({-70, 30, 30, -70})}),
                     IntArray2::from({IntArray::from({-60, 60, 60, 60}), IntArray::from({-30, 70, 70, 70}),
                                      IntArray::from({-70, 30, 70, 70}), IntArray::from({-30, 70, 70, -30}),
                                      IntArray::from({-70, 30, 70, -30})})});
            });
    });
}

void Team::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_403f4e6631bd3667_slow(flag);
}

IntArray& Team::AMEFTO_FRECT_GOALZ() {
    Team::ensure_initialized();
    return Team_AMEFTO_FRECT_GOALZ_storage;
}

pls::cs::Int32& Team::AMEFTO_ONECHARGETIME_PLAYER() {
    Team::ensure_initialized();
    return Team_AMEFTO_ONECHARGETIME_PLAYER_storage;
}

IntArray& Team::AMEFTO_PASSER_COATEVA() {
    Team::ensure_initialized();
    return Team_AMEFTO_PASSER_COATEVA_storage;
}

IntArray& Team::AMEFTO_PZ() {
    Team::ensure_initialized();
    return Team_AMEFTO_PZ_storage;
}

IntArray& Team::ch_ceva() {
    Team::ensure_initialized();
    return Team_ch_ceva_storage;
}

StringArray& Team::CH_COATEVA_STR() {
    Team::ensure_initialized();
    return Team_CH_COATEVA_STR_storage;
}

StringArray& Team::CH_DATA_STR() {
    Team::ensure_initialized();
    return Team_CH_DATA_STR_storage;
}

IntArray2& Team::DEAFULT_FORMATION_EVA() {
    Team::ensure_initialized();
    return Team_DEAFULT_FORMATION_EVA_storage;
}

IntArray2& Team::DEAFULT_FORMATION_EVA_PENALTYAREA() {
    Team::ensure_initialized();
    return Team_DEAFULT_FORMATION_EVA_PENALTYAREA_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Team::FORMATION_KICKOFF() {
    Team::ensure_initialized();
    return Team_FORMATION_KICKOFF_storage;
}

pls::cs::Int32& Team::FORMATION_RATE_DEFFECNE() {
    Team::ensure_initialized();
    return Team_FORMATION_RATE_DEFFECNE_storage;
}

IntArray& Team::FORMATION_TYPE_RATE() {
    Team::ensure_initialized();
    return Team_FORMATION_TYPE_RATE_storage;
}

IntArray3& Team::GOAL_GLAD_AROUND_POS() {
    Team::ensure_initialized();
    return Team_GOAL_GLAD_AROUND_POS_storage;
}

IntArray& Team::mostEva_address() {
    Team::ensure_initialized();
    return Team_mostEva_address_storage;
}

IntArray3& Team::PANEL_DIRECT() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_storage;
}

IntArray2& Team::PANEL_DIRECT_1() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_1_storage;
}

IntArray2& Team::PANEL_DIRECT_2() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_2_storage;
}

IntArray2& Team::PANEL_DIRECT_3() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_3_storage;
}

IntArray2& Team::PANEL_DIRECT_4() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_4_storage;
}

IntArray2& Team::PANEL_DIRECT_5() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_5_storage;
}

IntArray2& Team::PANEL_DIRECT_6() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_6_storage;
}

IntArray3& Team::PANEL_DIRECT_R() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_storage;
}

IntArray2& Team::PANEL_DIRECT_R_1() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_1_storage;
}

IntArray2& Team::PANEL_DIRECT_R_2() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_2_storage;
}

IntArray2& Team::PANEL_DIRECT_R_3() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_3_storage;
}

IntArray2& Team::PANEL_DIRECT_R_4() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_4_storage;
}

IntArray2& Team::PANEL_DIRECT_R_9BLOCK() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_9BLOCK_storage;
}

pls::cs::Single& Team::PRP_W_DIS() {
    Team::ensure_initialized();
    return Team_PRP_W_DIS_storage;
}

pls::cs::Single& Team::RPP_W_AROUNDENEMY() {
    Team::ensure_initialized();
    return Team_RPP_W_AROUNDENEMY_storage;
}

pls::cs::Single& Team::RPP_W_COATEVASUM() {
    Team::ensure_initialized();
    return Team_RPP_W_COATEVASUM_storage;
}

pls::cs::Single& Team::RPP_W_DISTOGOAL_NORMAL() {
    Team::ensure_initialized();
    return Team_RPP_W_DISTOGOAL_NORMAL_storage;
}

pls::cs::Single& Team::RPP_W_DISTOGOAL_PAREA() {
    Team::ensure_initialized();
    return Team_RPP_W_DISTOGOAL_PAREA_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Team::team_formationCenterPos() {
    Team::ensure_initialized();
    return Team_team_formationCenterPos_storage;
}

void Team::create_init(pls::cs::Ref<Team> self) {
    Team::ensure_initialized();
    self->CEVA_PASSER_MP2 = FloatArray::from({0.7f, 0.4f, 0.7f, 0.4f, 0.2f, 0.4f, 0.7f, 0.4f, 0.7f});
    self->CEVA_PASSER_MP2_DIV =
        FloatArray::from({2.857143f, 5.0f, 2.857143f, 5.0f, 10.0f, 5.0f, 2.857143f, 5.0f, 2.857143f});
    self->CEVA_PASSER_MP3 = FloatArray::from({1.0f, 0.99f, 1.0f, 0.99f, 0.95f, 0.99f, 1.0f, 0.99f, 1.0f});
    self->CEVA_PASSER_AP = IntArray::from({50, 20, 0, 0, 0, 0});
    self->CEVA_PASSER_ENEAP = IntArray::from({-50, -20, 0, 0, 0, 0});
    self->ballNearPlayer_ = kl_java_util::Vector::create();
    self->players_receive_ = kl_java_util::Vector::create();
    self->w_disBoal = 0.5f;
    self->w_formation = 0.5f;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.#ctor", game);
    {
        self->apdat_ = main::AppData::GetInstance();
        self->udat_ = UserData::GetInstance();
    }
}

// M:game.Team.#ctor
pls::cs::Ref<Team> Team::create() {
    Team::ensure_initialized();
    auto self = pls::cs::make_ref<Team>();
    Team::create_init(self);
    return self;
}

// M:game.Team.Init(System.Boolean,System.Int32,System.Int32)
void Team::Init(bool isUserTeam, pls::cs::Int32 team_id, pls::cs::Int32 tDataId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Init(System.Boolean,System.Int32,System.Int32)", game);
    {
        team_id_ = team_id;
        tDataId_ = tDataId;
        pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(tDataId);
        if (isUserTeam) {
            formationType_ = require(udat_)->selectFormationType_;
        } else {
            formationType_ = require(teamData)->formationType_;
        }
        fPos_ = FloatArray::make(4);
        Init_coatEva();
        fPos_[0] = 0.0f;
        fPos_[1] = pls::cs::to_int32(((-450.0f + 900.0f * pls::cs::Single(team_id))));
        fPos_[2] = 900.0f;
        fPos_[3] = 900.0f;
        IntArray array = IntArray::make(11);
        if (isUserTeam) {
            for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
                pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), i);
                    }));
                array[i] = require(playerData)->id_;
            }
        } else {
            for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
                pls::cs::Ref<data::PlayerData> playerData2 =
                    require(udat_)->cpuPlayerDatas_[team_id].get_Item(j);
                array[j] = require(playerData2)->id_;
            }
        }
        players_ = pls::cs::Array<pls::cs::Ref<Player>>::make(11);
        for (pls::cs::Int32 k = 0; k < players_.length(); ++k) {
            {
                auto cs_target = players_;
                auto cs_index = k;
                auto cs_value = Player::create(0);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_receiver = players_.get_Item(k);
                pls::cs::Int32 cs_arg0 = array[k];
                pls::cs::Int32 cs_arg2 = team_id_;
                require(cs_receiver)->Init(cs_arg0, k, cs_arg2, tDataId);
            }
        }
        for (pls::cs::Int32 l = 0; l < players_.length(); ++l) {
            {
                pls::cs::Ref<Player> cs_arg0 = players_.get_Item(l);
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg1 = require(players_.get_Item(l))->pos_;
                SetPosFPos(cs_arg0, cs_arg1);
            }
            SetFormationParam(players_.get_Item(l));
            if (team_id == 1) {
                require(players_.get_Item(l))->direct_ = 2;
            }
        }
        SetFormationRectParam();
        CORRECT_LINE = IntArray::make(4);
        NOW_LINE = IntArray::make(4);
        team_policyEva = IntArray::make(4);
        team_eva = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2}));
        });
        team_frect = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<FloatArray2>(IntArray::from({4, 2}));
        });
        frect_pos = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
        for (pls::cs::Int32 m = 0; m < frect_pos.length(); ++m) {
            {
                auto cs_target = frect_pos;
                auto cs_index = m;
                auto cs_value = kl_util3d::Vector3D::create();
                cs_target.set_Item(cs_index, cs_value);
            }
            if (m == 1 || m == 2) {
                require(frect_pos.get_Item(m))->x_ = 450.0f;
            } else {
                require(frect_pos.get_Item(m))->x_ = -450.0f;
            }
        }
        frect_cpos = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2}));
        });
        amefto_goalPos_ = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(2);
        for (pls::cs::Int32 n = 0; n < amefto_goalPos_.length(); ++n) {
            {
                auto cs_target = amefto_goalPos_;
                auto cs_index = n;
                auto cs_value = kl_util3d::Vector3D::create();
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        require(amefto_goalPos_.get_Item(0))->x_ = -450.0f;
        require(amefto_goalPos_.get_Item(1))->x_ = 450.0f;
        amefto_cameraPos_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({2, 2}));
        });
        amefto_address_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({2, 2}));
        });
        receiverPIdBox_ = IntArray::make(5);
        if (isUserTeam) {
            amefto_pz = Team::AMEFTO_PZ()[0];
            amefto_oneChargeTime = Team::AMEFTO_ONECHARGETIME_PLAYER();
        } else {
            amefto_pz = require(teamData)->amefto_pz_;
            amefto_oneChargeTime =
                GameUtil::RateConvert(require(teamData)->warP_paramPhysical_[2], 0, 1000, 50, 10, true);
        }
        for (pls::cs::Int32 num = 0; num < Team::ch_ceva().length(); ++num) {
            Team::ch_ceva()[num] = 1;
        }
    }
}

// M:game.Team.Update
void Team::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Update", game);
    {
        if (require(require(udat_)->gm_)->state_ == 0) {
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(players_receive_));
                }) > 0) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_RemoveAllElements(require(players_receive_));
                });
            }
            Amefto();
            Update_formationRect2();
            Update_coatEva();
            for (pls::cs::Int32 i = 0; i < players_.length(); ++i) {
                {
                    auto cs_target = players_.get_Item(i);
                    pls::cs::Ref<Player> cs_arg0_146 = players_.get_Item(i);
                    pls::cs::Int32 cs_arg1_146 = require(players_.get_Item(i))->address_[0];
                    pls::cs::Int32 cs_arg2_146 = require(players_.get_Item(i))->address_[1];
                    pls::cs::Int32 cs_value = Get_playerPosEva(cs_arg0_146, cs_arg1_146, cs_arg2_146);
                    require(cs_target)->eva_pos_ = cs_value;
                }
                {
                    auto cs_target = players_.get_Item(i);
                    pls::cs::Ref<Player> cs_arg0_147 = players_.get_Item(i);
                    pls::cs::Int32 cs_arg1_147 = require(players_.get_Item(i))->address_[0];
                    pls::cs::Int32 cs_arg2_147 = require(players_.get_Item(i))->address_[1];
                    pls::cs::Int32 cs_value = Get_playerReceivePosEva(cs_arg0_147, cs_arg1_147, cs_arg2_147);
                    require(cs_target)->eva_receivePos_ = cs_value;
                }
                {
                    auto cs_target = players_.get_Item(i);
                    pls::cs::Int32 cs_value = pls::cs::to_int32(([&]() -> pls::cs::Single {
                        pls::cs::Ref<Player> cs_arg0 = players_.get_Item(i);
                        pls::cs::Single cs_arg1 = require(players_.get_Item(i))->eva_receivePos_;
                        return data::PlayerData::AuraUpdate(cs_arg0, cs_arg1, 8);
                    }()));
                    require(cs_target)->eva_receivePos_ = cs_value;
                }
            }
            if (require(require(udat_)->gm_)->gameState_ == 2) {
                if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::Check(require(require(udat_)->ball_)->flag_, 16);
                    })) {
                    SetSortGroundBallNear();
                    pls::cs::Ref<Player> player = pls::cs::Ref<Player>{};
                    if ((((!is_null(require(require(udat_)->ball_)->lastOwner_)) &&
                          (require(require(require(udat_)->ball_)->lastOwner_)->team_id_ == team_id_)) &&
                         (require(require(udat_)->ball_)->targetPId != -1))) {
                        player = (players_.get_Item(require(require(udat_)->ball_)->targetPId));
                    } else {
                        player = ((pls::cs::unbox<pls::cs::Ref<Player>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_FirstElement(require(ballNearPlayer_));
                            }))));
                    }
                    for (pls::cs::Int32 num = pls::cs::Int32(receiverPIdBox_.length()) - 1; num >= 1; --num) {
                        receiverPIdBox_[num] = receiverPIdBox_[num - 1];
                    }
                    receiverPIdBox_[0] = require(player)->p_id_;
                    pls::cs::Int32 p_id_ = require(player)->p_id_;
                    for (pls::cs::Int32 j = 1; (j < receiverPIdBox_.length()); ++j) {
                        if ((p_id_ != receiverPIdBox_[j])) {
                            break;
                        }
                        if (j == pls::cs::Int32(receiverPIdBox_.length()) - 1) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_AddElement(require(players_receive_),
                                                                         pls::cs::box(player));
                            });
                        }
                    }
                } else {
                    SetSortJampBallNear();
                    pls::cs::Ref<Player> player2 = pls::cs::Ref<Player>{};
                    if ((!is_null(require(require(udat_)->ball_)->lastOwner_) &&
                         require(require(require(udat_)->ball_)->lastOwner_)->team_id_ == team_id_) &&
                        require(require(udat_)->ball_)->targetPId != -1) {
                        player2 = players_.get_Item(require(require(udat_)->ball_)->targetPId);
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_AddElement(require(players_receive_),
                                                                     pls::cs::box(player2));
                        });
                    } else {
                        player2 = pls::cs::unbox<pls::cs::Ref<Player>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_FirstElement(require(ballNearPlayer_));
                            }));
                        pls::cs::Int32 num2 = pls::cs::to_int32(require(player2)->temp_len);
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_AddElement(require(players_receive_),
                                                                     pls::cs::box(player2));
                        });
                        for (pls::cs::Int32 k = 0;
                             k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                 return kl_java_util::Vector_2_Size(require(ballNearPlayer_));
                             });
                             ++k) {
                            pls::cs::Ref<Player> player3 = pls::cs::unbox<pls::cs::Ref<Player>>(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(ballNearPlayer_), k);
                                }));
                            if (require(player3)->temp_len > pls::cs::Single((num2 - 2))) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_AddElement(require(players_receive_),
                                                                             pls::cs::box(player3));
                                });
                                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_Size(require(players_receive_));
                                    }) >= 3) {
                                    break;
                                }
                            }
                        }
                    }
                }
            } else if (require(require(udat_)->gm_)->gameState_ == team_id_) {

            } else if (require(require(udat_)->gm_)->gameState_ == 1 - team_id_) {
            }
            for (pls::cs::Int32 l = 0; l < players_.length(); ++l) {
                require(players_.get_Item(l))->Update();
            }
        } else if (require(require(udat_)->gm_)->state_ == 2 || require(require(udat_)->gm_)->state_ == 1) {
            for (pls::cs::Int32 m = 0; m < players_.length(); ++m) {
                require(players_.get_Item(m))->Update();
            }
        } else if (require(require(udat_)->gm_)->state_ == 3 || require(require(udat_)->gm_)->state_ == 4 ||
                   require(require(udat_)->gm_)->state_ == 5) {
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(players_receive_));
                }) > 0) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_RemoveAllElements(require(players_receive_));
                });
            }
            Update_coatEva();
            for (pls::cs::Int32 n = 0; n < players_.length(); ++n) {
                {
                    auto cs_target = players_.get_Item(n);
                    pls::cs::Ref<Player> cs_arg0_148 = players_.get_Item(n);
                    pls::cs::Int32 cs_arg1_148 = require(players_.get_Item(n))->address_[0];
                    pls::cs::Int32 cs_arg2_148 = require(players_.get_Item(n))->address_[1];
                    pls::cs::Int32 cs_value = Get_playerPosEva(cs_arg0_148, cs_arg1_148, cs_arg2_148);
                    require(cs_target)->eva_pos_ = cs_value;
                }
                {
                    auto cs_target = players_.get_Item(n);
                    pls::cs::Ref<Player> cs_arg0_149 = players_.get_Item(n);
                    pls::cs::Int32 cs_arg1_149 = require(players_.get_Item(n))->address_[0];
                    pls::cs::Int32 cs_arg2_149 = require(players_.get_Item(n))->address_[1];
                    pls::cs::Int32 cs_value = Get_playerReceivePosEva(cs_arg0_149, cs_arg1_149, cs_arg2_149);
                    require(cs_target)->eva_receivePos_ = cs_value;
                }
            }
            Amefto();
            Update_formationRect2();
            for (pls::cs::Int32 num3 = 0; num3 < players_.length(); ++num3) {
                require(players_.get_Item(num3))->Update();
            }
        } else if (require(require(udat_)->gm_)->state_ == 7) {

        } else if (require(require(udat_)->gm_)->state_ == 6) {

        } else if (require(require(udat_)->gm_)->state_ == 8) {
            for (pls::cs::Int32 num4 = 0; num4 < players_.length(); ++num4) {
                require(players_.get_Item(num4))->Update();
            }
        }
    }
}

// M:game.Team.Collision
void Team::Collision() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Collision", game);
    {
        if (require(require(udat_)->gm_)->state_ == 0) {
            for (pls::cs::Int32 i = 0; i < players_.length(); ++i) {
                require(players_.get_Item(i))->Collision();
            }
        }
    }
}

// M:game.Team.Draw(kairo.unity.ui.Graphics,System.Boolean)
void Team::Draw(pls::cs::Ref<pls::kairo::Graphics> g, bool offscreen) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Draw(kairo.unity.ui.Graphics,System.Boolean)", game);
    {
        for (pls::cs::Int32 i = 0; i < players_.length(); ++i) {
            require(players_.get_Item(i))->Draw(g, i);
        }
    }
}

// M:game.Team.SetPosFPos(game.Player,kairo.unity.m3d4.util3d.Vector3D)
void Team::SetPosFPos(pls::cs::Ref<Player> player, pls::cs::Ref<kl_util3d::Vector3D> var_out) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Team.SetPosFPos(game.Player,kairo.unity.m3d4.util3d.Vector3D)", game);
    {
        IntArray2 formation_ =
            require(require(apdat_)->formationData_.get_Item(
                        require(require(udat_)->gm_)->team_formationPage_[require(player)->team_id_]))
                ->formation_;
        pls::cs::Int32 p_id_ = require(player)->p_id_;
        if (require(player)->team_id_ == 0) {
            {
                auto cs_target = var_out;
                pls::cs::Single cs_arg0_64 = formation_[p_id_][0];
                pls::cs::Single cs_arg3_64 = fPos_[0] - fPos_[2] / 2.0f + fPos_[2] / 9.0f / 2.0f;
                pls::cs::Single cs_arg4_64 = fPos_[0] + fPos_[2] / 2.0f - fPos_[2] / 9.0f / 2.0f;
                pls::cs::Single cs_value =
                    GameUtil::RateConvertFloat(cs_arg0_64, 0.0f, 8.0f, cs_arg3_64, cs_arg4_64, true);
                require(cs_target)->x_ = cs_value;
            }
            require(var_out)->y_ = 0.0f;
            {
                auto cs_target = var_out;
                pls::cs::Single cs_arg0_65 = formation_[p_id_][1];
                pls::cs::Single cs_arg3_65 = fPos_[1] - fPos_[3] / 2.0f + fPos_[3] / 9.0f / 2.0f;
                pls::cs::Single cs_arg4_65 = fPos_[1] + fPos_[3] / 2.0f - fPos_[3] / 9.0f / 2.0f;
                pls::cs::Single cs_value =
                    GameUtil::RateConvertFloat(cs_arg0_65, 8.0f, 0.0f, cs_arg3_65, cs_arg4_65, true);
                require(cs_target)->z_ = cs_value;
            }
        } else {
            {
                auto cs_target = var_out;
                pls::cs::Single cs_arg0_66 = formation_[p_id_][0];
                pls::cs::Single cs_arg3_66 = fPos_[0] + fPos_[2] / 2.0f - fPos_[2] / 9.0f / 2.0f;
                pls::cs::Single cs_arg4_66 = fPos_[0] - fPos_[2] / 2.0f + fPos_[2] / 9.0f / 2.0f;
                pls::cs::Single cs_value =
                    GameUtil::RateConvertFloat(cs_arg0_66, 0.0f, 8.0f, cs_arg3_66, cs_arg4_66, true);
                require(cs_target)->x_ = cs_value;
            }
            require(var_out)->y_ = 0.0f;
            {
                auto cs_target = var_out;
                pls::cs::Single cs_arg0_67 = formation_[p_id_][1];
                pls::cs::Single cs_arg3_67 = fPos_[1] + fPos_[3] / 2.0f - fPos_[3] / 9.0f / 2.0f;
                pls::cs::Single cs_arg4_67 = fPos_[1] - fPos_[3] / 2.0f + fPos_[3] / 9.0f / 2.0f;
                pls::cs::Single cs_value =
                    GameUtil::RateConvertFloat(cs_arg0_67, 8.0f, 0.0f, cs_arg3_67, cs_arg4_67, true);
                require(cs_target)->z_ = cs_value;
            }
        }
        if (require(player)->p_id_ == 0) {
            require(player)->role_ = 0;
        } else if (formation_[p_id_][1] <= 2) {
            require(player)->role_ = 3;
        } else if (formation_[p_id_][1] <= 5) {
            require(player)->role_ = 2;
        } else if (formation_[p_id_][1] <= 8) {
            require(player)->role_ = 1;
        }
        if (require(player)->pData_id_ > 0) {
            {
                auto cs_target = require(apdat_)->pData_.get_Item(require(player)->pData_id_);
                pls::cs::Int32 cs_value = require(player)->role_;
                require(cs_target)->role_ = cs_value;
            }
        }
    }
}

// M:game.Team.SetFormationParam(game.Player)
void Team::SetFormationParam(pls::cs::Ref<Player> player) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.SetFormationParam(game.Player)", game);
    {
        if (require(player)->team_id_ == 0) {
            {
                auto cs_target = require(player)->formation_;
                auto cs_index = 0;
                auto cs_value = pls::cs::to_int32(([&]() -> pls::cs::Single {
                    pls::cs::Single cs_arg0 = require(require(player)->pos_)->x_;
                    pls::cs::Single cs_arg1 = fPos_[0] - fPos_[2] / 2.0f;
                    pls::cs::Single cs_arg2 = fPos_[0] + fPos_[2] / 2.0f;
                    return GameUtil::RateConvertFloat(cs_arg0, cs_arg1, cs_arg2, 0.0f, 100.0f, true);
                }()));
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = require(player)->formation_;
                auto cs_index = 1;
                auto cs_value = pls::cs::to_int32(([&]() -> pls::cs::Single {
                    pls::cs::Single cs_arg0 = require(require(player)->pos_)->z_;
                    pls::cs::Single cs_arg1 = fPos_[1] - fPos_[3] / 2.0f;
                    pls::cs::Single cs_arg2 = fPos_[1] + fPos_[3] / 2.0f;
                    return GameUtil::RateConvertFloat(cs_arg0, cs_arg1, cs_arg2, 0.0f, 100.0f, true);
                }()));
                cs_target.set_Item(cs_index, cs_value);
            }
        } else {
            {
                auto cs_target = require(player)->formation_;
                auto cs_index = 0;
                auto cs_value = pls::cs::to_int32(([&]() -> pls::cs::Single {
                    pls::cs::Single cs_arg0 = require(require(player)->pos_)->x_;
                    pls::cs::Single cs_arg1 = fPos_[0] + fPos_[2] / 2.0f;
                    pls::cs::Single cs_arg2 = fPos_[0] - fPos_[2] / 2.0f;
                    return GameUtil::RateConvertFloat(cs_arg0, cs_arg1, cs_arg2, 0.0f, 100.0f, true);
                }()));
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = require(player)->formation_;
                auto cs_index = 1;
                auto cs_value = pls::cs::to_int32(([&]() -> pls::cs::Single {
                    pls::cs::Single cs_arg0 = require(require(player)->pos_)->z_;
                    pls::cs::Single cs_arg1 = fPos_[1] + fPos_[3] / 2.0f;
                    pls::cs::Single cs_arg2 = fPos_[1] - fPos_[3] / 2.0f;
                    return GameUtil::RateConvertFloat(cs_arg0, cs_arg1, cs_arg2, 0.0f, 100.0f, true);
                }()));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:game.Team.SetFormationRectParam
void Team::SetFormationRectParam() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.SetFormationRectParam", game);
    {
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = 0;
        pls::cs::Int32 num3 = 0;
        pls::cs::Int32 num4 = 0;
        pls::cs::Int32 num5 = 3;
        pls::cs::Int32 num6 = 10;
        for (pls::cs::Int32 i = 0; i < players_.length(); ++i) {
            pls::cs::Ref<Player> player = players_.get_Item(i);
            num = 100 - require(player)->formation_[1];
            for (pls::cs::Int32 j = 0; j < players_.length(); ++j) {
                if (j == i) {
                    continue;
                }
                pls::cs::Ref<Player> player2 = players_.get_Item(j);
                auto cs_left_68 = require(player2)->formation_[1];
                auto cs_right_68 = require(player)->formation_[1];
                pls::cs::Int32 num7 = cs_left_68 - cs_right_68;
                if (num > num7 && num7 > num5) {
                    num = num7;
                }
            }
            if (num != 100 - require(player)->formation_[1]) {
                num /= 2;
            }
            num2 = 0 + require(player)->formation_[1];
            for (pls::cs::Int32 k = 0; k < players_.length(); ++k) {
                if (k == i) {
                    continue;
                }
                pls::cs::Ref<Player> player3 = players_.get_Item(k);
                auto cs_left_69 = require(player)->formation_[1];
                auto cs_right_69 = require(player3)->formation_[1];
                pls::cs::Int32 num8 = cs_left_69 - cs_right_69;
                if (num2 > num8 && num8 > num5) {
                    num2 = num8;
                }
            }
            if (num2 != 0 + require(player)->formation_[1]) {
                num2 /= 2;
            }
            num3 = 0 + require(player)->formation_[0];
            for (pls::cs::Int32 l = 0; l < players_.length(); ++l) {
                if (l == i) {
                    continue;
                }
                pls::cs::Ref<Player> player4 = players_.get_Item(l);
                auto cs_left_70 = require(player)->formation_[0];
                auto cs_right_70 = require(player4)->formation_[0];
                pls::cs::Int32 num9 = cs_left_70 - cs_right_70;
                if (num3 > num9 && num9 > num5 && pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                      return kl_lang::JMath::AbsInt(([&]() -> pls::cs::Int32 {
                                                          auto cs_left = require(player)->formation_[1];
                                                          auto cs_right = require(player4)->formation_[1];
                                                          return cs_left - cs_right;
                                                      }()));
                                                  }) < num6) {
                    num3 = num9;
                }
            }
            if (num3 != 0 + require(player)->formation_[0]) {
                num3 /= 2;
            }
            num4 = 100 - require(player)->formation_[0];
            for (pls::cs::Int32 m = 0; m < players_.length(); ++m) {
                if (m == i) {
                    continue;
                }
                pls::cs::Ref<Player> player5 = players_.get_Item(m);
                auto cs_left_71 = require(player5)->formation_[0];
                auto cs_right_71 = require(player)->formation_[0];
                pls::cs::Int32 num10 = cs_left_71 - cs_right_71;
                if (num4 > num10 && num10 > num5 &&
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_lang::JMath::AbsInt(([&]() -> pls::cs::Int32 {
                            auto cs_left = require(player)->formation_[1];
                            auto cs_right = require(player5)->formation_[1];
                            return cs_left - cs_right;
                        }()));
                    }) < num6) {
                    num4 = num10;
                }
            }
            if (num4 != 100 - require(player)->formation_[0]) {
                num4 /= 2;
            }
            if (team_id_ == 0) {
                require(player)->formation_param_[0][0] = require(player)->formation_[0] - num3;
                require(player)->formation_param_[0][1] = require(player)->formation_[1] + num;
                require(player)->formation_param_[1][0] = require(player)->formation_[0] + num4;
                require(player)->formation_param_[1][1] = require(player)->formation_[1] + num;
                require(player)->formation_param_[2][0] = require(player)->formation_[0] + num4;
                require(player)->formation_param_[2][1] = require(player)->formation_[1] - num2;
                require(player)->formation_param_[3][0] = require(player)->formation_[0] - num3;
                require(player)->formation_param_[3][1] = require(player)->formation_[1] - num2;
                require(player)->formation_param_[4][0] = require(player)->formation_[0];
                require(player)->formation_param_[4][1] = require(player)->formation_[1];
            } else {
                require(player)->formation_param_[0][0] = require(player)->formation_[0] + num4;
                require(player)->formation_param_[0][1] = require(player)->formation_[1] - num2;
                require(player)->formation_param_[1][0] = require(player)->formation_[0] - num3;
                require(player)->formation_param_[1][1] = require(player)->formation_[1] - num2;
                require(player)->formation_param_[2][0] = require(player)->formation_[0] - num3;
                require(player)->formation_param_[2][1] = require(player)->formation_[1] + num;
                require(player)->formation_param_[3][0] = require(player)->formation_[0] + num4;
                require(player)->formation_param_[3][1] = require(player)->formation_[1] + num;
                require(player)->formation_param_[4][0] = require(player)->formation_[0];
                require(player)->formation_param_[4][1] = require(player)->formation_[1];
            }
        }
    }
}

// M:game.Team.SetSortGroundBallNear
void Team::SetSortGroundBallNear() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.SetSortGroundBallNear", game);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(ballNearPlayer_));
            }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(ballNearPlayer_));
            });
        }
        pls::cs::Ref<Ball> ball_ = require(udat_)->ball_;
        require(require(ball_)->temp_pos)->x_ =
            (require(require(ball_)->pos_)->x_ * 0.5f +
             (require(require(ball_)->pos_)->x_ + require(require(ball_)->v_)->x_ * 5.0f) * 0.5f) /
            1.0f;
        require(require(ball_)->temp_pos)->z_ =
            (require(require(ball_)->pos_)->z_ * 0.5f +
             (require(require(ball_)->pos_)->z_ + require(require(ball_)->v_)->z_ * 5.0f) * 0.5f) /
            1.0f;
        for (pls::cs::Int32 i = 0; i < players_.length(); ++i) {
            if (require(players_.get_Item(i))->role_ == 0) {
                continue;
            }
            pls::cs::Ref<Player> player = players_.get_Item(i);
            if (require(player)->seb_ == 12) {
                continue;
            }
            {
                auto cs_target = player;
                pls::cs::Single cs_value = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_lang::JMath::Sqrt(
                        (require(require(ball_)->temp_pos)->x_ - require(require(player)->pos_)->x_) *
                            (require(require(ball_)->temp_pos)->x_ - require(require(player)->pos_)->x_) +
                        (require(require(ball_)->temp_pos)->z_ - require(require(player)->pos_)->z_) *
                            (require(require(ball_)->temp_pos)->z_ - require(require(player)->pos_)->z_));
                }));
                require(cs_target)->temp_len = cs_value;
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(ballNearPlayer_), pls::cs::box(player));
            });
        }
        for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(ballNearPlayer_));
                                       }) - 1;
             ++j) {
            for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                          return kl_java_util::Vector_2_Size(require(ballNearPlayer_));
                                      }) -
                                      1;
                 num > j; --num) {
                pls::cs::Ref<Player> player2 =
                    pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(ballNearPlayer_), j);
                    }));
                pls::cs::Ref<Player> player3 =
                    pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(ballNearPlayer_), num);
                    }));
                if (require(player3)->temp_len < require(player2)->temp_len) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(ballNearPlayer_),
                                                                   pls::cs::box(player3), j);
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(ballNearPlayer_),
                                                                   pls::cs::box(player2), num);
                    });
                }
            }
        }
    }
}

// M:game.Team.SetSortJampBallNear
void Team::SetSortJampBallNear() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.SetSortJampBallNear", game);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(ballNearPlayer_));
            }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(ballNearPlayer_));
            });
        }
        pls::cs::Ref<Ball> ball_ = require(udat_)->ball_;
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(require(ball_)->temp_pos)->Set(require(ball_)->fallPos_);
        });
        w_disBoal = GameUtil::RateConvertFloat(
            require(ball_)->savePosFrame_ * 100 / require(ball_)->fallTime_, 0.0f, 100.0f, 0.7f, 1.0f, true);
        w_formation = 1.0f - w_disBoal;
        pls::cs::Single num;
        pls::cs::Single num2;
        for (pls::cs::Int32 i = 0; i < players_.length(); ++i) {
            if (require(players_.get_Item(i))->role_ == 0) {
                continue;
            }
            pls::cs::Ref<Player> player = players_.get_Item(i);
            if (require(player)->seb_ == 12) {
                continue;
            }
            num = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt(
                    (require(require(ball_)->temp_pos)->x_ - require(require(player)->pos_)->x_) *
                        (require(require(ball_)->temp_pos)->x_ - require(require(player)->pos_)->x_) +
                    (require(require(ball_)->temp_pos)->z_ - require(require(player)->pos_)->z_) *
                        (require(require(ball_)->temp_pos)->z_ - require(require(player)->pos_)->z_));
            }));
            num2 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt(
                    (require(require(player)->formationGo_)->x_ - require(require(player)->pos_)->x_) *
                        (require(require(player)->formationGo_)->x_ - require(require(player)->pos_)->x_) +
                    (require(require(player)->formationGo_)->z_ - require(require(player)->pos_)->z_) *
                        (require(require(player)->formationGo_)->z_ - require(require(player)->pos_)->z_));
            }));
            require(player)->temp_len = (w_disBoal * num + w_formation * num2) / (w_disBoal + w_formation);
            {
                auto cs_target = player;
                pls::cs::Single cs_value =
                    GameUtil::RateConvertFloat(require(player)->temp_len, 225.0f, 0.0f, 0.0f, 100.0f, true);
                require(cs_target)->temp_len = cs_value;
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(ballNearPlayer_), pls::cs::box(player));
            });
        }
        for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(ballNearPlayer_));
                                       }) - 1;
             ++j) {
            for (pls::cs::Int32 num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(ballNearPlayer_));
                                       }) -
                                       1;
                 num3 > j; --num3) {
                pls::cs::Ref<Player> player2 =
                    pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(ballNearPlayer_), j);
                    }));
                pls::cs::Ref<Player> player3 =
                    pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(ballNearPlayer_), num3);
                    }));
                if (require(player3)->temp_len > require(player2)->temp_len) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(ballNearPlayer_),
                                                                   pls::cs::box(player3), j);
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_SetElementAt(require(ballNearPlayer_),
                                                                   pls::cs::box(player2), num3);
                    });
                }
            }
        }
    }
}

// M:game.Team.Init_coatEva
void Team::Init_coatEva() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Init_coatEva", game);
    {
        Map::ensure_initialized();

        coatEva_passer = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(
                IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
        });
        coatEva_freeRun = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(
                IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
        });
        coatEva_defence = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(
                IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
        });
        coatEva_looseBall = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(
                IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
        });
        coatEva_passer2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(
                IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
        });
        coatEva_freeRun2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(
                IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
        });
        coatEva_new_offence = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(
                IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
        });
        coatEva_new_deffence = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(
                IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
        });
        coatEva_new_offence_passer = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::JTool::MakeArray<IntArray2>(
                IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
        });
    }
}

// M:game.Team.Update_coatEva
void Team::Update_coatEva() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Update_coatEva", game);
    {
        if (ChWhichChargeTern()) {
            Update_coatEvaNewOffence();
        } else {
            Update_coatEvaNewDeffence();
        }
    }
}

// M:game.Team.Update_coatEvaNewOffence
void Team::Update_coatEvaNewOffence() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Update_coatEvaNewOffence", game);
    {
        Map::ensure_initialized();

        for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
            for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
                coatEva_new_offence[i][j] = 0;
                coatEva_new_offence_passer[i][j] = 0;
            }
        }
        if (Team::ch_ceva()[0] == 1) {
            if (team_id_ == 0) {
                for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                    pls::cs::Single num =
                        ([&]() -> pls::cs::Int32 {
                            pls::cs::Int32 cs_arg1 = amefto_address_[0][1] - 4;
                            pls::cs::Int32 cs_arg2 = amefto_address_[0][1] + 1;
                            pls::cs::Int32 cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                            return GameUtil::RateConvert(k, cs_arg1, cs_arg2, 0, cs_arg4, true);
                        }()) +
                        30;
                    num = main::AppData::ClampMax(pls::cs::to_int32(num), 100);
                    for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                        coatEva_new_offence[k][l] = pls::cs::to_int32(num);
                        coatEva_new_offence_passer[k][l] = pls::cs::to_int32(num);
                    }
                }
                if (!ChPAreaLineOver()) {

                } else {
                    for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                        for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                            coatEva_new_offence[m][n] = Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[m][n];
                        }
                    }
                }
            } else {
                for (pls::cs::Int32 num2 = 0; num2 < Map::MAPCHIP_COAT_HNUM(); ++num2) {
                    pls::cs::Single num3 =
                        ([&]() -> pls::cs::Int32 {
                            pls::cs::Int32 cs_arg1 = amefto_address_[0][1] + 4;
                            pls::cs::Int32 cs_arg2 = amefto_address_[0][1] - 1;
                            pls::cs::Int32 cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                            return GameUtil::RateConvert(num2, cs_arg1, cs_arg2, 0, cs_arg4, true);
                        }()) +
                        30;
                    num3 = main::AppData::ClampMax(pls::cs::to_int32(num3), 100);
                    for (pls::cs::Int32 num4 = 0; num4 < Map::MAPCHIP_COAT_WNUM(); ++num4) {
                        coatEva_new_offence[num2][num4] = pls::cs::to_int32(num3);
                        coatEva_new_offence_passer[num2][num4] = pls::cs::to_int32(num3);
                    }
                }
                if (!ChPAreaLineOver()) {

                } else {
                    for (pls::cs::Int32 num5 = 0; num5 < Map::MAPCHIP_COAT_HNUM(); ++num5) {
                        for (pls::cs::Int32 num6 = 0; num6 < Map::MAPCHIP_COAT_WNUM(); ++num6) {
                            coatEva_new_offence[num5][num6] =
                                Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[Map::MAPCHIP_COAT_HNUM() - 1 - num5]
                                                                         [Map::MAPCHIP_COAT_WNUM() - 1 -
                                                                          num6];
                        }
                    }
                }
            }
        }
        if (Team::ch_ceva()[2] == 1) {
            pls::cs::Ref<Team> team = require(udat_)->teams_.get_Item(1 - team_id_);
            FloatArray cEVA_PASSER_MP = CEVA_PASSER_MP2;
            for (pls::cs::Int32 num7 = 0; num7 < require(team)->players_.length(); ++num7) {
                pls::cs::Ref<Player> player = require(team)->players_.get_Item(num7);
                {
                    IntArray2 cs_arg0 = coatEva_new_offence;
                    pls::cs::Int32 cs_arg1 = require(player)->address_[0];
                    pls::cs::Int32 cs_arg2 = require(player)->address_[1];
                    Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cEVA_PASSER_MP);
                }
                {
                    IntArray2 cs_arg0 = coatEva_new_offence_passer;
                    pls::cs::Int32 cs_arg1 = require(player)->address_[0];
                    pls::cs::Int32 cs_arg2 = require(player)->address_[1];
                    Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cEVA_PASSER_MP);
                }
            }
        }
    }
}

// M:game.Team.Update_coatEvaNewDeffence
void Team::Update_coatEvaNewDeffence() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Update_coatEvaNewDeffence", game);
    {
        Map::ensure_initialized();

        for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
            for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
                coatEva_new_deffence[i][j] = 0;
            }
        }
        if (Team::ch_ceva()[6] == 1) {
            pls::cs::Ref<Team> team = require(udat_)->teams_.get_Item(1 - team_id_);
            if (team_id_ == 0) {
                if (!require(team)->ChPAreaLineOver()) {
                    for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                        for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                            coatEva_new_deffence[k][l] =
                                Team::DEAFULT_FORMATION_EVA()[Map::MAPCHIP_COAT_HNUM() - 1 - k]
                                                             [Map::MAPCHIP_COAT_WNUM() - 1 - l];
                        }
                    }
                } else {
                    for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                        for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                            coatEva_new_deffence[m][n] =
                                Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[Map::MAPCHIP_COAT_HNUM() - 1 - m]
                                                                         [Map::MAPCHIP_COAT_WNUM() - 1 - n];
                        }
                    }
                }
            } else if (!require(team)->ChPAreaLineOver()) {
                for (pls::cs::Int32 num = 0; num < Map::MAPCHIP_COAT_HNUM(); ++num) {
                    for (pls::cs::Int32 num2 = 0; num2 < Map::MAPCHIP_COAT_WNUM(); ++num2) {
                        coatEva_new_deffence[num][num2] = Team::DEAFULT_FORMATION_EVA()[num][num2];
                    }
                }
            } else {
                for (pls::cs::Int32 num3 = 0; num3 < Map::MAPCHIP_COAT_HNUM(); ++num3) {
                    for (pls::cs::Int32 num4 = 0; num4 < Map::MAPCHIP_COAT_WNUM(); ++num4) {
                        coatEva_new_deffence[num3][num4] =
                            Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[num3][num4];
                    }
                }
            }
        }
        if (Team::ch_ceva()[7] == 1) {
            pls::cs::Int32 cx, cy;
            pls::cs::Ref<Player> passer = pls::cs::Ref<Player>{};
            passer = require(require(udat_)->teams_.get_Item(1 - team_id_))->GetPasser();
            if (!is_null(passer)) {
                cx = require(passer)->address_[0];
                cy = require(passer)->address_[1];
            } else {
                cx = require(require(udat_)->ball_)->address_[0];
                cy = require(require(udat_)->ball_)->address_[1];
            }
            if (require(require(udat_)->gm_)->state_ == 5) {

            } else {
                Cal_evaCoatMulti9block(coatEva_new_deffence, cx, cy, CEVA_PASSER_MP2_DIV);
            }
        }
        if (Team::ch_ceva()[8] == 1) {
            for (pls::cs::Int32 num5 = 0; num5 < players_.length(); ++num5) {
                pls::cs::Ref<Player> player = players_.get_Item(num5);
                {
                    IntArray2 cs_arg0 = coatEva_new_deffence;
                    pls::cs::Int32 cs_arg1 = require(player)->address_[0];
                    pls::cs::Int32 cs_arg2 = require(player)->address_[1];
                    FloatArray cs_arg3 = CEVA_PASSER_MP2;
                    Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }
            }
        }
    }
}

// M:game.Team.Update_coatEvaPasser
void Team::Update_coatEvaPasser() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Update_coatEvaPasser", game);
    {
        Map::ensure_initialized();

        for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
            for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
                coatEva_passer[i][j] = 0;
                coatEva_passer2[i][j] = 0;
            }
        }
        if (Team::ch_ceva()[0] == 1) {
            if (team_id_ == 0) {
                for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                    pls::cs::Single num =
                        ([&]() -> pls::cs::Int32 {
                            pls::cs::Int32 cs_arg1 = amefto_address_[0][1] - 4;
                            pls::cs::Int32 cs_arg2 = amefto_address_[0][1] + 1;
                            pls::cs::Int32 cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                            return GameUtil::RateConvert(k, cs_arg1, cs_arg2, 0, cs_arg4, false);
                        }()) +
                        30;
                    num = main::AppData::ClampMax(pls::cs::to_int32(num), 100);
                    for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                        coatEva_passer2[k][l] = pls::cs::to_int32(num);
                    }
                }
            } else {
                for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                    pls::cs::Single num2 =
                        ([&]() -> pls::cs::Int32 {
                            pls::cs::Int32 cs_arg1 = amefto_address_[0][1] + 4;
                            pls::cs::Int32 cs_arg2 = amefto_address_[0][1] - 1;
                            pls::cs::Int32 cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                            return GameUtil::RateConvert(m, cs_arg1, cs_arg2, 0, cs_arg4, false);
                        }()) +
                        30;
                    num2 = main::AppData::ClampMax(pls::cs::to_int32(num2), 100);
                    for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                        coatEva_passer2[m][n] = pls::cs::to_int32(num2);
                    }
                }
            }
        }
        if (Team::ch_ceva()[1] == 1) {
        }
        if (Team::ch_ceva()[2] == 1) {
            pls::cs::Ref<Team> team = require(udat_)->teams_.get_Item(1 - team_id_);
            for (pls::cs::Int32 num3 = 0; num3 < require(team)->players_.length(); ++num3) {
                pls::cs::Ref<Player> player = require(team)->players_.get_Item(num3);
                {
                    IntArray2 cs_arg0 = coatEva_passer2;
                    pls::cs::Int32 cs_arg1 = require(player)->address_[0];
                    pls::cs::Int32 cs_arg2 = require(player)->address_[1];
                    FloatArray cs_arg3 = CEVA_PASSER_MP2;
                    Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }
            }
        }
    }
}

// M:game.Team.Update_coatEvaFreeRun
void Team::Update_coatEvaFreeRun() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Update_coatEvaFreeRun", game);
    {
        Map::ensure_initialized();

        for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
            for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
                coatEva_freeRun[i][j] = 0;
                coatEva_freeRun2[i][j] = 0;
            }
        }
        if (Team::ch_ceva()[3] == 1) {
            if (team_id_ == 0) {
                for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                    pls::cs::Int32 val =
                        ([&]() -> pls::cs::Int32 {
                            pls::cs::Int32 cs_arg1 = amefto_address_[0][1] - 4;
                            pls::cs::Int32 cs_arg2 = amefto_address_[0][1] - 1;
                            pls::cs::Int32 cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                            return GameUtil::RateConvert(k, cs_arg1, cs_arg2, 0, cs_arg4, false);
                        }()) +
                        30;
                    val = main::AppData::ClampMax(val, 100);
                    for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                        coatEva_freeRun2[k][l] = val;
                    }
                }
            } else {
                for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                    pls::cs::Int32 val2 =
                        ([&]() -> pls::cs::Int32 {
                            pls::cs::Int32 cs_arg1 = amefto_address_[0][1] + 4;
                            pls::cs::Int32 cs_arg2 = amefto_address_[0][1] + 1;
                            pls::cs::Int32 cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                            return GameUtil::RateConvert(m, cs_arg1, cs_arg2, 0, cs_arg4, false);
                        }()) +
                        30;
                    val2 = main::AppData::ClampMax(val2, 100);
                    for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                        coatEva_freeRun2[m][n] = val2;
                    }
                }
            }
        }
        pls::cs::Ref<Player> passer = GetPasser();
        if (is_null(passer)) {
            return;
        }
        {
            auto cs_target = passer;
            pls::cs::Int32 cs_arg1_262 = require(passer)->address_[0];
            pls::cs::Int32 cs_arg2_262 = require(passer)->address_[1];
            pls::cs::Int32 cs_value = Get_playerPosEva(passer, cs_arg1_262, cs_arg2_262);
            require(cs_target)->eva_pos_ = cs_value;
        }
        if (Team::ch_ceva()[4] == 1) {
            pls::cs::Ref<Team> team = require(udat_)->teams_.get_Item(1 - team_id_);
            for (pls::cs::Int32 num = 0; num < require(team)->players_.length(); ++num) {
                pls::cs::Ref<Player> player = require(team)->players_.get_Item(num);
                {
                    IntArray2 cs_arg0 = coatEva_freeRun2;
                    pls::cs::Int32 cs_arg1 = require(player)->address_[0];
                    pls::cs::Int32 cs_arg2 = require(player)->address_[1];
                    FloatArray cs_arg3 = CEVA_PASSER_MP2;
                    Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }
            }
        }
        if (Team::ch_ceva()[5] == 1) {
            IntArray array = IntArray::from(
                {0, 0, GameUtil::RateConvert(require(passer)->eva_pos_, 0, 50, 0, 50, true), 0});
        }
    }
}

// M:game.Team.Update_coatEvaDefence
void Team::Update_coatEvaDefence() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Update_coatEvaDefence", game);
    {
        Map::ensure_initialized();

        for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
            for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
                coatEva_defence[i][j] = 0;
            }
        }
        if (Team::ch_ceva()[6] == 1) {
            if (team_id_ == 0) {
                for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                    for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                        coatEva_defence[k][l] =
                            Team::DEAFULT_FORMATION_EVA()[Map::MAPCHIP_COAT_HNUM() - 1 - k]
                                                         [Map::MAPCHIP_COAT_WNUM() - 1 - l];
                    }
                }
            } else {
                for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                    for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                        coatEva_defence[m][n] = Team::DEAFULT_FORMATION_EVA()[m][n];
                    }
                }
            }
        }
        if (Team::ch_ceva()[7] == 1) {
            pls::cs::Ref<Player> passer = require(require(udat_)->teams_.get_Item(1 - team_id_))->GetPasser();
            if (is_null(passer)) {
                return;
            }
            {
                auto cs_target = passer;
                pls::cs::Int32 cs_arg1_261 = require(passer)->address_[0];
                pls::cs::Int32 cs_arg2_261 = require(passer)->address_[1];
                pls::cs::Int32 cs_value = Get_playerPosEva(passer, cs_arg1_261, cs_arg2_261);
                require(cs_target)->eva_pos_ = cs_value;
            }
            IntArray add_param = IntArray::from(
                {GameUtil::RateConvert(require(passer)->eva_pos_, 0, 50, 0, 50, true),
                 GameUtil::RateConvert(require(passer)->eva_pos_, 0, 50, 0, 50, true),
                 GameUtil::RateConvert(require(passer)->eva_pos_, 0, 50, 0, 50, true), 0, 0, 0});
            {
                IntArray2 cs_arg1 = coatEva_defence;
                pls::cs::Int32 cs_arg2 = require(passer)->address_[0];
                pls::cs::Int32 cs_arg3 = require(passer)->address_[1];
                Cal_evaCoatAdd(0, cs_arg1, cs_arg2, cs_arg3, add_param);
            }
        }
        if (Team::ch_ceva()[8] == 1) {
            for (pls::cs::Int32 num = 0; num < players_.length(); ++num) {
                pls::cs::Ref<Player> player = players_.get_Item(num);
                {
                    IntArray2 cs_arg0 = coatEva_defence;
                    pls::cs::Int32 cs_arg1 = require(player)->address_[0];
                    pls::cs::Int32 cs_arg2 = require(player)->address_[1];
                    FloatArray cs_arg3 = CEVA_PASSER_MP2;
                    Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }
            }
        }
    }
}

// M:game.Team.Update_coatEvaLooseBall
void Team::Update_coatEvaLooseBall() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Update_coatEvaLooseBall", game);
    {
        Map::ensure_initialized();

        pls::cs::Ref<Ball> ball_ = require(udat_)->ball_;
        pls::cs::Int32 num = 0;
        if (require(require(ball_)->pos_)->z_ > 0.0f) {
            num = 1;
        }
        for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
            for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
                coatEva_looseBall[i][j] = 0;
            }
        }
        if (Team::ch_ceva()[9] == 1) {
            if ((team_id_ == 0 && num == 1) || (team_id_ == 1 && num == 1)) {
                for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                    for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                        coatEva_looseBall[k][l] = Team::DEAFULT_FORMATION_EVA()[k][l];
                    }
                }
            } else {
                for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                    for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                        coatEva_looseBall[m][n] =
                            Team::DEAFULT_FORMATION_EVA()[Map::MAPCHIP_COAT_HNUM() - 1 - m]
                                                         [Map::MAPCHIP_COAT_WNUM() - 1 - n];
                    }
                }
            }
        }
        if (Team::ch_ceva()[10] == 1) {
            IntArray add_param = IntArray::from({50, 50, 50, 0, 0, 0});
            {
                IntArray2 cs_arg1 = coatEva_looseBall;
                pls::cs::Int32 cs_arg2 = require(ball_)->address_[0];
                pls::cs::Int32 cs_arg3 = require(ball_)->address_[1];
                Cal_evaCoatAdd(0, cs_arg1, cs_arg2, cs_arg3, add_param);
            }
        }
        if (Team::ch_ceva()[11] == 1) {
            for (pls::cs::Int32 num2 = 0; num2 < players_.length(); ++num2) {
                pls::cs::Ref<Player> player = players_.get_Item(num2);
                {
                    IntArray2 cs_arg0 = coatEva_looseBall;
                    pls::cs::Int32 cs_arg1 = require(player)->address_[0];
                    pls::cs::Int32 cs_arg2 = require(player)->address_[1];
                    FloatArray cs_arg3 = CEVA_PASSER_MP2;
                    Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }
            }
        }
    }
}

// M:game.Team.GetPasser
pls::cs::Ref<Player> Team::GetPasser() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.GetPasser", game);
    {
        for (pls::cs::Int32 i = 0; i < players_.length(); ++i) {
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Check(require(players_.get_Item(i))->flag_, 4);
                })) {
                return players_.get_Item(i);
            }
        }
        return pls::cs::Ref<Player>{};
    }
}

// M:game.Team.GetLastKicker
pls::cs::Ref<Player> Team::GetLastKicker() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.GetLastKicker", game);
    {
        if (lastKickeer_ >= 0 && lastKickeer_ < players_.length()) {
            return players_.get_Item(lastKickeer_);
        }
        return pls::cs::Ref<Player>{};
    }
}

// M:game.Team.GetSum(System.Int32[][],System.Int32,System.Int32,System.Boolean)
pls::cs::Int32 Team::GetSum(IntArray2 data, pls::cs::Int32 cx, pls::cs::Int32 cy, bool div) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Team.GetSum(System.Int32[][],System.Int32,System.Int32,System.Boolean)", game);
    {
        Map::ensure_initialized();

        pls::cs::Int32 num = 0;
        pls::cs::Int32 num3;
        pls::cs::Int32 num4;
        for (pls::cs::Int32 i = 0; i < CEVA_PASSER_MP2.length(); ++i) {
            pls::cs::Single num2 = 1.0f;
            if (!div) {
                num2 = CEVA_PASSER_MP2[i];
            }
            num3 = cx + Team::PANEL_DIRECT_R_9BLOCK()[i][0];
            num4 = cy + Team::PANEL_DIRECT_R_9BLOCK()[i][1];
            if (num3 >= 0 && num3 < Map::MAPCHIP_COAT_WNUM() && num4 >= 0 &&
                num4 < Map::MAPCHIP_COAT_HNUM()) {
                num += pls::cs::to_int32((pls::cs::Single(data[num4][num3]) / num2));
            }
        }
        return num;
    }
}

// M:game.Team.GetMostEvaAddress(System.Int32[][],System.Int32,System.Int32,System.Int32)
IntArray Team::GetMostEvaAddress(IntArray2 data, pls::cs::Int32 cx, pls::cs::Int32 cy, pls::cs::Int32 num) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Team.GetMostEvaAddress(System.Int32[][],System.Int32,System.Int32,System.Int32)",
                     game);
    {
        Map::ensure_initialized();

        pls::cs::Int32 num2 = 0;
        pls::cs::Int32 num3 = 0;
        pls::cs::Int32 num4 = 0;
        for (pls::cs::Int32 i = 0; i < num; ++i) {
            for (pls::cs::Int32 j = 0; j < Team::PANEL_DIRECT_R()[i].length(); ++j) {
                if (cx + Team::PANEL_DIRECT_R()[i][j][0] >= 0 &&
                    cx + Team::PANEL_DIRECT_R()[i][j][0] < Map::MAPCHIP_COAT_WNUM() &&
                    cy + Team::PANEL_DIRECT_R()[i][j][1] >= 0 &&
                    cy + Team::PANEL_DIRECT_R()[i][j][1] < Map::MAPCHIP_COAT_HNUM()) {
                    pls::cs::Int32 num5 =
                        data[cy + Team::PANEL_DIRECT_R()[i][j][1]][cx + Team::PANEL_DIRECT_R()[i][j][0]];
                    if (num2 < num5) {
                        num2 = num5;
                        num3 = cx + Team::PANEL_DIRECT_R()[i][j][0];
                        num4 = cy + Team::PANEL_DIRECT_R()[i][j][1];
                    }
                }
            }
        }
        Team::mostEva_address()[0] = num3;
        Team::mostEva_address()[1] = num4;
        return Team::mostEva_address();
    }
}

// M:game.Team.SetMostEvaAddressFromMoveArea(game.Player,System.Int32[],System.Boolean)
void Team::SetMostEvaAddressFromMoveArea(pls::cs::Ref<Player> player, IntArray var_out, bool isThroughPass) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Team.SetMostEvaAddressFromMoveArea(game.Player,System.Int32[],System.Boolean)",
                     game);
    {
        Map::ensure_initialized();
        kl_cfg::Config::ensure_initialized();

        IntArray2 coatEva = require(player)->GetCoatEva();
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = 0;
        pls::cs::Int32 num3 = 0;
        try {
            pls::cs::Int32 num4 = require(player)->formation_address_[0][0];
            pls::cs::Int32 num5 = require(player)->formation_address_[1][0];
            if (isThroughPass) {
                num4 = main::AppData::Clamp(require(player)->formation_address_[0][0], 1,
                                            Map::MAPCHIP_COAT_WNUM() - 2);
                num5 = main::AppData::Clamp(require(player)->formation_address_[1][0], 1,
                                            Map::MAPCHIP_COAT_WNUM() - 2);
            }
            for (pls::cs::Int32 num6 = require(player)->formation_address_[0][1];
                 num6 >= require(player)->formation_address_[3][1]; --num6) {
                for (pls::cs::Int32 i = num4; i <= num5; ++i) {
                    if (num6 < 0 || num6 >= coatEva.length() || i < 0 || i >= coatEva[0].length()) {
                        if (kl_cfg::Config::DEBUG_CMD()) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::Log::Info(
                                    literal(u"■Team.java setMostEvaAddressFromMoveArea() エラー"),
                                    pls::cs::Ref<pls::cs::ExceptionObject>{});
                            });
                        }
                        continue;
                    }
                    pls::cs::Int32 num7 = coatEva[num6][i];
                    if (num < num7) {
                        num = num7;
                        num2 = i;
                        num3 = num6;
                    }
                }
            }
            var_out[0] = num2;
            var_out[1] = num3;
        } catch (const pls::cs::Exception& cs_caught_104) {
            auto t = pls::cs::capture_exception(cs_caught_104);
            {
                pls::diagnostic::api_call([&]() -> decltype(auto) { return kl_unity_util::Log::Info(t); });
            }
        }
    }
}

// M:game.Team.SetMostEvaAddressFromMoveArea_thrughPass(game.Player,System.Int32[],System.Boolean)
void Team::SetMostEvaAddressFromMoveArea_thrughPass(pls::cs::Ref<Player> player, IntArray var_out,
                                                    bool isThroughPass) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Team.SetMostEvaAddressFromMoveArea_thrughPass(game.Player,System.Int32[],System.Boolean)",
        game);
    {
        Map::ensure_initialized();

        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = 0;
        pls::cs::Int32 num3 = 0;
        pls::cs::Int32 num4 = require(player)->formation_address_[0][0];
        pls::cs::Int32 num5 = require(player)->formation_address_[1][0];
        if (isThroughPass) {
            num4 = main::AppData::Clamp(require(player)->formation_address_[0][0], 1,
                                        Map::MAPCHIP_COAT_WNUM() - 2);
            num5 = main::AppData::Clamp(require(player)->formation_address_[1][0], 1,
                                        Map::MAPCHIP_COAT_WNUM() - 2);
        }
        for (pls::cs::Int32 num6 = require(player)->formation_address_[0][1];
             num6 >= require(player)->formation_address_[3][1]; --num6) {
            for (pls::cs::Int32 i = num4; i <= num5; ++i) {
                pls::cs::Int32 num7 = Get_playerReceivePosEva(player, i, num6);
                if (num < num7) {
                    num = num7;
                    num2 = i;
                    num3 = num6;
                }
            }
        }
        var_out[0] = num2;
        var_out[1] = num3;
    }
}

// M:game.Team.Get_playerPosEva(game.Player,System.Int32,System.Int32)
pls::cs::Int32 Team::Get_playerPosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi, pls::cs::Int32 yi) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Get_playerPosEva(game.Player,System.Int32,System.Int32)",
                     game);
    {
        return Get_playerPosEva(player, xi, yi, true);
    }
}

// M:game.Team.Get_playerPosEva(game.Player,System.Int32,System.Int32,System.Boolean)
pls::cs::Int32 Team::Get_playerPosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi, pls::cs::Int32 yi,
                                      bool div) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Team.Get_playerPosEva(game.Player,System.Int32,System.Int32,System.Boolean)",
                     game);
    {
        IntArray2 coatEva = require(player)->GetCoatEva();
        pls::cs::Int32 sum = GetSum(coatEva, xi, yi, div);
        pls::cs::Int32 num = GameUtil::RateConvert(sum, 0, 700, 0, 100, true);
        pls::cs::Ref<kl_util3d::Vector3D> posFromAddress = Camera::GetPosFromAddress(xi, yi);
        pls::cs::Int32 num2 = 0;
        if (team_id_ == 0) {
            num2 = (pls::cs::to_int32(GameUtil::RateConvertFloat(require(posFromAddress)->z_, -900.0f, 900.0f,
                                                                 0.0f, 100.0f, true)));
        } else {
            num2 = (pls::cs::to_int32(GameUtil::RateConvertFloat(require(posFromAddress)->z_, 900.0f, -900.0f,
                                                                 0.0f, 100.0f, true)));
        }
        {
            pls::cs::Int32 recoveredReturn_42482 =
                pls::cs::to_int32(((0.7f * pls::cs::Single(num) + 0.3f * pls::cs::Single(num2)) / 1.0f));
            return recoveredReturn_42482;
        }
    }
}

// M:game.Team.Get_playerReceivePosEva(game.Player,System.Int32,System.Int32)
pls::cs::Int32 Team::Get_playerReceivePosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi,
                                             pls::cs::Int32 yi) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Team.Get_playerReceivePosEva(game.Player,System.Int32,System.Int32)", game);
    {
        IntArray2 array = IntArray2{};
        array = coatEva_new_offence;
        pls::cs::Int32 sum = GetSum(array, xi, yi, true);
        pls::cs::Int32 num = GameUtil::RateConvert(sum, 0, 270, 0, 100, true);
        Camera::ConvertAddressToGlobal(xi, yi, require(player)->temp_vec);
        auto cs_left_154 = require(amefto_goalPos_.get_Item(0))->z_;
        auto cs_right_154 = require(require(player)->temp_vec)->z_;
        pls::cs::Single x = cs_left_154 - cs_right_154;
        pls::cs::Int32 num2 = 0;
        pls::cs::Single num3 = Team::RPP_W_DISTOGOAL_NORMAL();
        if (team_id_ == 0) {
            if (!ChPAreaLineOver()) {
                num2 = pls::cs::to_int32(GameUtil::RateConvertFloat(x, 270.0f, 0.0f, 0.0f, 100.0f, true));
            } else {
                pls::cs::Single x2 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_lang::JMath::Sqrt(require(require(player)->pos_)->x_ *
                                                    require(require(player)->pos_)->x_ +
                                                (900.0f - require(require(player)->pos_)->z_) *
                                                    (900.0f - require(require(player)->pos_)->z_));
                }));
                num2 = pls::cs::to_int32(GameUtil::RateConvertFloat(x2, 900.0f, 0.0f, 0.0f, 100.0f, true));
                num3 = Team::RPP_W_DISTOGOAL_PAREA();
            }
        } else if (!ChPAreaLineOver()) {
            num2 = pls::cs::to_int32(GameUtil::RateConvertFloat(x, -270.0f, 0.0f, 0.0f, 100.0f, true));
        } else {
            pls::cs::Single x3 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt(require(require(player)->pos_)->x_ *
                                                require(require(player)->pos_)->x_ +
                                            ((-900.0f - require(require(player)->pos_)->z_)) *
                                                ((-900.0f - require(require(player)->pos_)->z_)));
            }));
            num2 = pls::cs::to_int32(GameUtil::RateConvertFloat(x3, 900.0f, 0.0f, 0.0f, 100.0f, true));
            num3 = Team::RPP_W_DISTOGOAL_PAREA();
        }
        pls::cs::Int32 num4 = 0;
        for (pls::cs::Int32 i = 0;
             i < require(require(udat_)->teams_.get_Item(1 - team_id_))->players_.length(); ++i) {
            pls::cs::Ref<Player> player2 =
                require(require(udat_)->teams_.get_Item(1 - team_id_))->players_.get_Item(i);
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_lang::JMath::AbsInt(([&]() -> pls::cs::Int32 {
                        auto cs_left = require(player)->address_[0];
                        auto cs_right = require(player2)->address_[0];
                        return cs_left - cs_right;
                    }()));
                }) <= 1 &&
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_lang::JMath::AbsInt(([&]() -> pls::cs::Int32 {
                        auto cs_left = require(player)->address_[1];
                        auto cs_right = require(player2)->address_[1];
                        return cs_left - cs_right;
                    }()));
                }) <= 1) {
                ++num4;
            }
        }
        pls::cs::Int32 num5 = GameUtil::RateConvert(num4, 4, 0, 0, 100, true);
        pls::cs::Ref<Player> passer = GetPasser();
        if (is_null(passer)) {
            return pls::cs::to_int32(
                ((Team::RPP_W_COATEVASUM() * pls::cs::Single(num) + num3 * pls::cs::Single(num2) +
                  Team::RPP_W_AROUNDENEMY() * pls::cs::Single(num5)) /
                 (Team::RPP_W_COATEVASUM() + num3 + Team::RPP_W_AROUNDENEMY())));
        }
        pls::cs::Single x4 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JMath::Sqrt(
                (require(require(passer)->pos_)->x_ - require(require(player)->temp_vec)->x_) *
                    (require(require(passer)->pos_)->x_ - require(require(player)->temp_vec)->x_) +
                (require(require(passer)->pos_)->z_ - require(require(player)->temp_vec)->z_) *
                    (require(require(passer)->pos_)->z_ - require(require(player)->temp_vec)->z_));
        }));
        pls::cs::Int32 num6 =
            pls::cs::to_int32(GameUtil::RateConvertFloat(x4, 900.0f, 0.0f, 0.0f, 100.0f, true));
        {
            pls::cs::Int32 recoveredReturn = pls::cs::to_int32(
                ((Team::RPP_W_COATEVASUM() * pls::cs::Single(num) + num3 * pls::cs::Single(num2) +
                  Team::RPP_W_AROUNDENEMY() * pls::cs::Single(num5) +
                  Team::PRP_W_DIS() * pls::cs::Single(num6)) /
                 (Team::RPP_W_COATEVASUM() + num3 + Team::RPP_W_AROUNDENEMY() + Team::PRP_W_DIS())));
            return recoveredReturn;
        }
    }
}

// M:game.Team.Cal_evaCoatMulti(System.Int32,System.Int32[][],System.Int32,System.Int32,System.Single[])
void Team::Cal_evaCoatMulti(pls::cs::Int32 mode, IntArray2 data, pls::cs::Int32 cx, pls::cs::Int32 cy,
                            FloatArray muliti_param) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Team.Cal_evaCoatMulti(System.Int32,System.Int32[][],System.Int32,System.Int32,System.Single[])",
        game);
    {
        Map::ensure_initialized();

        IntArray3 array = IntArray3{};
        if ((mode == 0)) {
            array = Team::PANEL_DIRECT();
        } else if ((mode == 1)) {
            array = Team::PANEL_DIRECT_R();
        }
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            if (muliti_param[i] == 0.0f) {
                continue;
            }
            for (pls::cs::Int32 j = 0; j < array[i].length(); ++j) {
                if (cx + array[i][j][0] >= 0 && cx + array[i][j][0] < Map::MAPCHIP_COAT_WNUM() &&
                    cy + array[i][j][1] >= 0 && cy + array[i][j][1] < Map::MAPCHIP_COAT_HNUM()) {
                    pls::cs::Int32 num = cx + array[i][j][0];
                    pls::cs::Int32 num2 = cy + array[i][j][1];
                    data[num2][num] = pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                        auto cs_left = pls::cs::Single(data[num2][num]);
                        auto cs_right = muliti_param[i];
                        return cs_left * cs_right;
                    }())));
                }
            }
        }
    }
}

// M:game.Team.Cal_evaCoatMulti9block(System.Int32[][],System.Int32,System.Int32,System.Single[])
void Team::Cal_evaCoatMulti9block(IntArray2 data, pls::cs::Int32 cx, pls::cs::Int32 cy,
                                  FloatArray muliti_param) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Team.Cal_evaCoatMulti9block(System.Int32[][],System.Int32,System.Int32,System.Single[])",
        game);
    {
        Map::ensure_initialized();

        pls::cs::Int32 num;
        pls::cs::Int32 num2;
        for (pls::cs::Int32 i = 0; i < Team::PANEL_DIRECT_R_9BLOCK().length(); ++i) {
            num = cx + Team::PANEL_DIRECT_R_9BLOCK()[i][0];
            num2 = cy + Team::PANEL_DIRECT_R_9BLOCK()[i][1];
            if (num >= 0 && num < Map::MAPCHIP_COAT_WNUM() && num2 >= 0 && num2 < Map::MAPCHIP_COAT_HNUM()) {
                data[num2][num] = pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                    auto cs_left = pls::cs::Single(data[num2][num]);
                    auto cs_right = muliti_param[i];
                    return cs_left * cs_right;
                }())));
            }
        }
    }
}

// M:game.Team.Cal_evaCoatAdd(System.Int32,System.Int32[][],System.Int32,System.Int32,System.Int32[])
void Team::Cal_evaCoatAdd(pls::cs::Int32 mode, IntArray2 data, pls::cs::Int32 cx, pls::cs::Int32 cy,
                          IntArray add_param) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Team.Cal_evaCoatAdd(System.Int32,System.Int32[][],System.Int32,System.Int32,System.Int32[])",
        game);
    {
        Map::ensure_initialized();

        IntArray3 array = IntArray3{};
        if ((mode == 0)) {
            array = Team::PANEL_DIRECT();
        } else if ((mode == 1)) {
            array = Team::PANEL_DIRECT_R();
        }
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            if (add_param[i] == 0) {
                continue;
            }
            for (pls::cs::Int32 j = 0; j < array[i].length(); ++j) {
                if (cx + array[i][j][0] >= 0 && cx + array[i][j][0] < Map::MAPCHIP_COAT_WNUM() &&
                    cy + array[i][j][1] >= 0 && cy + array[i][j][1] < Map::MAPCHIP_COAT_HNUM()) {
                    pls::cs::Int32 num = cx + array[i][j][0];
                    pls::cs::Int32 num2 = cy + array[i][j][1];
                    data[num2][num] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = data[num2][num];
                        auto cs_right = add_param[i];
                        return cs_left + cs_right;
                    }());
                }
            }
        }
    }
}

// M:game.Team.Cal_evaCoatAdd9block(System.Int32[][],System.Int32,System.Int32,System.Int32[])
void Team::Cal_evaCoatAdd9block(IntArray2 data, pls::cs::Int32 cx, pls::cs::Int32 cy, IntArray add_param) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Team.Cal_evaCoatAdd9block(System.Int32[][],System.Int32,System.Int32,System.Int32[])", game);
    {
        Map::ensure_initialized();

        pls::cs::Int32 num;
        pls::cs::Int32 num2;
        for (pls::cs::Int32 i = 0; i < Team::PANEL_DIRECT_R_9BLOCK().length(); ++i) {
            num = cx + Team::PANEL_DIRECT_R_9BLOCK()[i][0];
            num2 = cy + Team::PANEL_DIRECT_R_9BLOCK()[i][1];
            if (num >= 0 && num < Map::MAPCHIP_COAT_WNUM() && num2 >= 0 && num2 < Map::MAPCHIP_COAT_HNUM()) {
                data[num2][num] = ([&]() -> pls::cs::Int32 {
                    auto cs_left = data[num2][num];
                    auto cs_right = add_param[i];
                    return cs_left + cs_right;
                }());
            }
        }
    }
}

// M:game.Team.Amefto
void Team::Amefto() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Amefto", game);
    {
        Map::ensure_initialized();

        if (is_null(require(require(udat_)->ball_)->lastOwner_)) {
            return;
        }
        if (is_null(require(require(udat_)->ball_)->owner_)) {
            if (require(require(require(udat_)->ball_)->lastOwner_)->team_id_ != team_id_) {
                return;
            }
        } else if (require(require(require(udat_)->ball_)->owner_)->team_id_ != team_id_) {
            return;
        }
        pls::cs::Ref<Player> passer = GetPasser();
        if (!is_null(passer)) {
            if (team_id_ == 0) {
                if (require(require(passer)->pos_)->z_ >= goalZ_) {
                    Amefto_start();
                    return;
                }
            } else if (require(require(passer)->pos_)->z_ <= goalZ_) {
                Amefto_start();
                return;
            }
        }
        ++chargeCnt_;
        if (chargeCnt_ >= amefto_oneChargeTime) {
            if (require(require(udat_)->gm_)->state_ == 0 &&
                ((team_id_ == 0 && ([&]() -> bool {
                      auto cs_left = require(require(require(udat_)->ball_)->pos_)->z_;
                      auto cs_right = require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->z_;
                      return cs_left >= cs_right;
                  }())) ||
                 (team_id_ == 1 && ([&]() -> bool {
                      auto cs_left = require(require(require(udat_)->ball_)->pos_)->z_;
                      auto cs_right = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->z_;
                      return cs_left <= cs_right;
                  }())))) {
                require(apdat_)->PlaySe(7);
            }
            chargeCnt_ = 0;
            chargeNum_ = main::AppData::ClampMax(chargeNum_ + 1, 3);
            eva_risk_ = 0;
            if (chargeNum_ == 1) {
                eva_risk_ = 25;
            } else if (chargeNum_ == 2) {
                eva_risk_ = 50;
            } else if (chargeNum_ == 3) {
                eva_risk_ = 100;
            }
            if (chargeNum_ >= 4) {
            }
        }
    }
}

// M:game.Team.Amefto_start
void Team::Amefto_start() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Amefto_start", game);
    {
        startZ_ = require(require(require(udat_)->ball_)->pos_)->z_;
        if (team_id_ == 0) {
            goalZ_ = startZ_ + pls::cs::Single(amefto_pz);
        } else {
            goalZ_ = startZ_ - pls::cs::Single(amefto_pz);
        }
        {
            auto cs_target = amefto_goalPos_.get_Item(0);
            pls::cs::Single cs_value = goalZ_;
            require(cs_target)->z_ = cs_value;
        }
        {
            auto cs_target = amefto_goalPos_.get_Item(1);
            pls::cs::Single cs_value = goalZ_;
            require(cs_target)->z_ = cs_value;
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = amefto_goalPos_.get_Item(0);
            IntArray cs_arg1 = amefto_address_[0];
            Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = amefto_goalPos_.get_Item(1);
            IntArray cs_arg1 = amefto_address_[1];
            Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
        }
        chargeNum_ = 0;
        chargeCnt_ = 0;
        eva_risk_ = 0;
        if (ChPAreaLineOver()) {
            pls::cs::Ref<Player> passer = GetPasser();
            if (!is_null(passer)) {
                require(apdat_)->PlaySe(7);
            }
        }
    }
}

// M:game.Team.Update_formationRect2
void Team::Update_formationRect2() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.Update_formationRect2", game);
    {
        Map::ensure_initialized();

        ternCharge = true;
        if (is_null(require(require(udat_)->ball_)->lastOwner_)) {
            ternCharge = false;
        } else if (is_null(require(require(udat_)->ball_)->owner_)) {
            if (require(require(require(udat_)->ball_)->lastOwner_)->team_id_ != team_id_) {
                ternCharge = false;
            }
        } else if (require(require(require(udat_)->ball_)->owner_)->team_id_ != team_id_) {
            ternCharge = false;
        }
        if (require(require(udat_)->gm_)->state_ == 4 || require(require(udat_)->gm_)->state_ == 5) {
            if (require(require(udat_)->gm_)->gameState_ == team_id_) {
                ternCharge = true;
            } else {
                ternCharge = false;
            }
        }
        if (ternCharge) {
            pls::cs::Ref<Player> passer = GetPasser();
            pls::cs::Single num = 0.0f;
            pls::cs::Single num2 = 0.0f;
            pls::cs::Single num3 = 990.0f;
            require(Team::team_formationCenterPos())->x_ = require(require(require(udat_)->ball_)->pos_)->x_;
            if (team_id_ == 0) {
                {
                    auto cs_target = Team::team_formationCenterPos();
                    auto cs_left_150 =
                        pls::cs::Single((50 - Team::AMEFTO_FRECT_GOALZ()[chargeNum_])) * num3 / 100.0f;
                    auto cs_right_150 = require(amefto_goalPos_.get_Item(0))->z_;
                    pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_150 + cs_right_150);
                    require(cs_target)->z_ = cs_value;
                }
                if (require(require(udat_)->gm_)->state_ == 4 ||
                    ((!is_null(passer) && require(passer)->p_id_ == 0))) {
                    require(Team::team_formationCenterPos())->z_ = -180.0f;
                }
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::Check(require(require(udat_)->ball_)->flag_, 16);
                    })) {
                    require(Team::team_formationCenterPos())->x_ =
                        require(require(require(udat_)->ball_)->fallPos_)->x_;
                    require(Team::team_formationCenterPos())->z_ =
                        require(require(require(udat_)->ball_)->fallPos_)->z_;
                }
                num = require(Team::team_formationCenterPos())->z_ + num3 / 2.0f;
                num2 = require(Team::team_formationCenterPos())->z_ - num3 / 2.0f;
            } else {
                {
                    auto cs_target = Team::team_formationCenterPos();
                    auto cs_left_151 =
                        pls::cs::Single(((-50 + Team::AMEFTO_FRECT_GOALZ()[chargeNum_]))) * num3 / 100.0f;
                    auto cs_right_151 = require(amefto_goalPos_.get_Item(0))->z_;
                    pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_151 + cs_right_151);
                    require(cs_target)->z_ = cs_value;
                }
                if (require(require(udat_)->gm_)->state_ == 4 ||
                    ((!is_null(passer) && require(passer)->p_id_ == 0))) {
                    require(Team::team_formationCenterPos())->z_ = 180.0f;
                }
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::Check(require(require(udat_)->ball_)->flag_, 16);
                    })) {
                    require(Team::team_formationCenterPos())->x_ =
                        require(require(require(udat_)->ball_)->fallPos_)->x_;
                    require(Team::team_formationCenterPos())->z_ =
                        require(require(require(udat_)->ball_)->fallPos_)->z_;
                }
                num = require(Team::team_formationCenterPos())->z_ - num3 / 2.0f;
                num2 = require(Team::team_formationCenterPos())->z_ + num3 / 2.0f;
            }
            num += pls::cs::Single((([&]() -> pls::cs::Int32 {
                auto cs_left = Team::FORMATION_TYPE_RATE()[formationType_];
                auto cs_right = ([&]() -> pls::cs::Int32 {
                    auto cs_left = 2 * Team::FORMATION_TYPE_RATE()[formationType_];
                    auto cs_right = team_id_;
                    return cs_left * cs_right;
                }());
                return cs_left - cs_right;
            }())));
            num2 += pls::cs::Single((([&]() -> pls::cs::Int32 {
                auto cs_left = Team::FORMATION_TYPE_RATE()[formationType_];
                auto cs_right = ([&]() -> pls::cs::Int32 {
                    auto cs_left = 2 * Team::FORMATION_TYPE_RATE()[formationType_];
                    auto cs_right = team_id_;
                    return cs_left * cs_right;
                }());
                return cs_left - cs_right;
            }())));
            if (num < -900.0f) {
                num = -900.0f;
            }
            if (num2 < -900.0f) {
                num2 = -900.0f;
            }
            if (num > 900.0f) {
                num = 900.0f;
            }
            if (num2 > 900.0f) {
                num2 = 900.0f;
            }
            {
                auto cs_target = fPos_;
                auto cs_index = 3;
                auto cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::cs::Single(kl_lang::JMath::Abs(num - num2)); });
                cs_target.set_Item(cs_index, cs_value);
            }
            fPos_[1] = (num + num2) / 2.0f;
        } else {
            pls::cs::Ref<Player> passer2 =
                require(require(udat_)->teams_.get_Item(1 - team_id_))->GetPasser();
            pls::cs::Int32 num4 = 0;
            pls::cs::Int32 num5 = 0;
            pls::cs::Single num6 = 0.5f;
            pls::cs::Single num7 = 0.5f;
            if (!is_null(passer2)) {
                num4 = require(passer2)->eva_pos_;
            } else {
                num6 = 0.0f;
            }
            pls::cs::Int32 num8 = 0;
            for (pls::cs::Int32 i = 1; i < players_.length(); ++i) {
                if (!is_null(passer2) && require(passer2)->p_id_ == i) {
                    continue;
                }
                if (!is_null(passer2)) {
                    if ((team_id_ == 0 && ([&]() -> bool {
                             auto cs_left = require(require(passer2)->pos_)->z_;
                             auto cs_right = require(require(players_.get_Item(i))->pos_)->z_;
                             return cs_left < cs_right;
                         }())) ||
                        (team_id_ == 1 && ([&]() -> bool {
                             auto cs_left = require(require(passer2)->pos_)->z_;
                             auto cs_right = require(require(players_.get_Item(i))->pos_)->z_;
                             return cs_left > cs_right;
                         }()))) {
                        ++num8;
                    }
                } else if ((team_id_ == 0 && ([&]() -> bool {
                                auto cs_left = require(require(require(udat_)->ball_)->pos_)->z_;
                                auto cs_right = require(require(players_.get_Item(i))->pos_)->z_;
                                return cs_left < cs_right;
                            }())) ||
                           (team_id_ == 1 && ([&]() -> bool {
                                auto cs_left = require(require(require(udat_)->ball_)->pos_)->z_;
                                auto cs_right = require(require(players_.get_Item(i))->pos_)->z_;
                                return cs_left > cs_right;
                            }()))) {
                    ++num8;
                }
            }
            num5 = GameUtil::RateConvert(num8, 0, 5, 0, 100, true);
            require(Team::team_formationCenterPos())->x_ = require(require(require(udat_)->ball_)->pos_)->x_;
            require(Team::team_formationCenterPos())->z_ = require(require(require(udat_)->ball_)->pos_)->z_;
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Check(require(require(udat_)->ball_)->flag_, 16);
                })) {
                require(Team::team_formationCenterPos())->z_ =
                    require(require(require(udat_)->ball_)->fallPos_)->z_;
            }
            {
                auto cs_target = Team::team_formationCenterPos();
                auto cs_old = require(cs_target)->z_;
                auto cs_rhs = ([&]() -> pls::cs::Int32 {
                    auto cs_left =
                        Team::FORMATION_RATE_DEFFECNE() + Team::FORMATION_TYPE_RATE()[formationType_];
                    auto cs_right = ([&]() -> pls::cs::Int32 {
                        auto cs_left = 2 * (Team::FORMATION_RATE_DEFFECNE() +
                                            Team::FORMATION_TYPE_RATE()[formationType_]);
                        auto cs_right = team_id_;
                        return cs_left * cs_right;
                    }());
                    return cs_left - cs_right;
                }());
                pls::cs::Single cs_value = cs_old + cs_rhs;
                require(cs_target)->z_ = cs_value;
            }
            if (require(require(udat_)->gm_)->state_ == 4 ||
                ((!is_null(passer2) && require(passer2)->p_id_ == 0))) {
                if (team_id_ == 0) {
                    require(Team::team_formationCenterPos())->z_ = -180.0f;
                } else {
                    require(Team::team_formationCenterPos())->z_ = 180.0f;
                }
            }
            pls::cs::Single num9 = 0.0f;
            pls::cs::Single num10 = 0.0f;
            if (team_id_ == 0) {
                if ([&]() -> bool {
                        auto cs_left = require(Team::team_formationCenterPos())->z_;
                        auto cs_right = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->z_;
                        return cs_left < cs_right;
                    }()) {
                    num10 = require(Team::team_formationCenterPos())->z_ - 450.0f;
                    if (num10 < -900.0f) {
                        num10 = -900.0f;
                    }
                    num9 = require(Team::team_formationCenterPos())->z_ + 450.0f;
                    num10 = (require(Team::team_formationCenterPos())->z_ + num10) / 2.0f;
                    num9 = (require(Team::team_formationCenterPos())->z_ + num9) / 2.0f;
                } else {
                    num10 = require(Team::team_formationCenterPos())->z_ - 450.0f;
                    if (num10 < -900.0f) {
                        num10 = -900.0f;
                    }
                    num9 = require(Team::team_formationCenterPos())->z_ + 450.0f;
                }
            } else if ([&]() -> bool {
                           auto cs_left = require(Team::team_formationCenterPos())->z_;
                           auto cs_right = require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->z_;
                           return cs_left > cs_right;
                       }()) {
                num10 = require(Team::team_formationCenterPos())->z_ + 450.0f;
                if (num10 > 900.0f) {
                    num10 = 900.0f;
                }
                num9 = require(Team::team_formationCenterPos())->z_ - 450.0f;
                num10 = (require(Team::team_formationCenterPos())->z_ + num10) / 2.0f;
                num9 = (require(Team::team_formationCenterPos())->z_ + num9) / 2.0f;
            } else {
                num10 = require(Team::team_formationCenterPos())->z_ + 450.0f;
                if (num10 > 900.0f) {
                    num10 = 900.0f;
                }
                num9 = require(Team::team_formationCenterPos())->z_ - 450.0f;
            }
            pls::cs::Ref<Team> team = require(udat_)->teams_.get_Item(1 - team_id_);
            if (team_id_ == 0) {
                auto cs_left_152 = require(team)->fPos_[1];
                auto cs_right_152 = require(team)->fPos_[3] / 2.0f;
                pls::cs::Single num11 = cs_left_152 - cs_right_152;
                if (num10 > num11) {
                    num10 = num11;
                }
            } else {
                auto cs_left_153 = require(team)->fPos_[1];
                auto cs_right_153 = require(team)->fPos_[3] / 2.0f;
                pls::cs::Single num12 = cs_left_153 + cs_right_153;
                if (num10 < num12) {
                    num10 = num12;
                }
            }
            {
                auto cs_target = fPos_;
                auto cs_index = 3;
                auto cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::cs::Single(kl_lang::JMath::Abs(num9 - num10)); });
                cs_target.set_Item(cs_index, cs_value);
            }
            fPos_[1] = (num9 + num10) / 2.0f;
        }
        pls::cs::Int32 num13 = 30;
        if (team_id_ == 0) {
            if (fPos_[1] - fPos_[3] / 2.0f < -900.0f) {
                fPos_[1] = (-900.0f + fPos_[3] / 2.0f);
            }
            if (fPos_[1] + fPos_[3] / 2.0f + pls::cs::Single(num13) > 900.0f) {
                fPos_[1] = 900.0f - fPos_[3] / 2.0f - pls::cs::Single(num13);
            }
        } else {
            if (fPos_[1] - fPos_[3] / 2.0f - pls::cs::Single(num13) < -900.0f) {
                fPos_[1] = (-900.0f + fPos_[3] / 2.0f) + pls::cs::Single(num13);
            }
            if (fPos_[1] + fPos_[3] / 2.0f > 900.0f) {
                fPos_[1] = 900.0f - fPos_[3] / 2.0f;
            }
        }
        pls::cs::Single num14 = 0.0f;
        num14 = GameUtil::RateConvertFloat(require(Team::team_formationCenterPos())->z_, -900.0f, 900.0f,
                                           0.0f, 100.0f, true);
        pls::cs::Single num15 = 0.0f;
        pls::cs::Single num16 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::cs::Single(kl_lang::JMath::Abs(([&]() -> pls::cs::FloatEval {
                                        auto cs_left = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->x_;
                                        auto cs_right = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->x_;
                                        return cs_left - cs_right;
                                    }())));
                                }) *
                                90.0f / 100.0f;
        if (ChWhichChargeTern()) {
            num16 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::cs::Single(kl_lang::JMath::Abs(([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->x_;
                            auto cs_right = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->x_;
                            return cs_left - cs_right;
                        }())));
                    }) *
                    120.0f / 100.0f;
        }
        if ((num14 < 50.0f)) {
            num15 = GameUtil::RateConvertFloat(num14, 5.0f, 30.0f, num16, 900.0f, true);
        } else {
            num15 = GameUtil::RateConvertFloat(num14, 70.0f, 95.0f, 900.0f, num16, true);
        }
        fPos_[0] = 0.0f;
        fPos_[2] = num15;
        for (pls::cs::Int32 j = 0; j < players_.length(); ++j) {
            {
                pls::cs::Ref<Player> cs_arg0 = players_.get_Item(j);
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg1 = require(players_.get_Item(j))->formationGo_;
                SetPosFPos(cs_arg0, cs_arg1);
            }
        }
        {
            auto cs_target = frect_pos.get_Item(0);
            pls::cs::Single cs_value = fPos_[1] + fPos_[3] / 2.0f;
            require(cs_target)->z_ = cs_value;
        }
        {
            auto cs_target = frect_pos.get_Item(1);
            pls::cs::Single cs_value = fPos_[1] + fPos_[3] / 2.0f;
            require(cs_target)->z_ = cs_value;
        }
        {
            auto cs_target = frect_pos.get_Item(2);
            pls::cs::Single cs_value = fPos_[1] - fPos_[3] / 2.0f;
            require(cs_target)->z_ = cs_value;
        }
        {
            auto cs_target = frect_pos.get_Item(3);
            pls::cs::Single cs_value = fPos_[1] - fPos_[3] / 2.0f;
            require(cs_target)->z_ = cs_value;
        }
    }
}

// M:game.Team.SetPositionGoalKick
void Team::SetPositionGoalKick() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.SetPositionGoalKick", game);
    {
        Map::ensure_initialized();

        if (require(require(udat_)->gm_)->gameState_ == team_id_) {
            {
                auto cs_target = players_.get_Item(0);
                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::On(require(players_.get_Item(0))->flag_, 512);
                });
                require(cs_target)->flag_ = cs_value;
            }
            if (team_id_ == 0) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = require(players_.get_Item(0))->pos_;
                        pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 =
                            Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(0);
                        require(cs_receiver)->Set(cs_arg0);
                    }());
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = require(players_.get_Item(0))->pos_;
                        pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 =
                            Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(0);
                        require(cs_receiver)->Set(cs_arg0);
                    }());
                });
            }
            if (team_id_ == 0) {
                require(players_.get_Item(0))->direct_ = 0;
            } else {
                require(players_.get_Item(0))->direct_ = 2;
            }
            require(require(udat_)->ball_)->SetStop();
            if (team_id_ == 0) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = require(require(udat_)->ball_)->pos_;
                        pls::cs::Single cs_arg0 = require(Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(0))->x_;
                        pls::cs::Single cs_arg2 = require(Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(1))->z_;
                        require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2);
                    }());
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = require(require(udat_)->ball_)->pos_;
                        pls::cs::Single cs_arg0 = require(Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(0))->x_;
                        pls::cs::Single cs_arg2 = require(Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(1))->z_;
                        require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2);
                    }());
                });
            }
            {
                auto cs_target = require(udat_)->ball_;
                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Off(require(require(udat_)->ball_)->flag_, 1);
                });
                require(cs_target)->flag_ = cs_value;
            }
        }
    }
}

// M:game.Team.SetPositionConnerKick
void Team::SetPositionConnerKick() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.SetPositionConnerKick", game);
    {
        if (require(require(udat_)->gm_)->gameState_ == team_id_) {
            pls::cs::Int32 num = 8;
            {
                auto cs_target = players_.get_Item(num);
                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::On(require(players_.get_Item(num))->flag_, 1024);
                });
                require(cs_target)->flag_ = cs_value;
            }
            if (team_id_ == 0) {
                if (require(require(require(udat_)->ball_)->lineOutPos_)->x_ < 0.0f) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(require(players_.get_Item(num))->pos_)->Set(-480.0f, 0.0f, 930.0f);
                    });
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(require(players_.get_Item(num))->pos_)->Set(480.0f, 0.0f, 930.0f);
                    });
                }
            } else if (require(require(require(udat_)->ball_)->lineOutPos_)->x_ < 0.0f) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(require(players_.get_Item(num))->pos_)->Set(-480.0f, 0.0f, -930.0f);
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(require(players_.get_Item(num))->pos_)->Set(480.0f, 0.0f, -930.0f);
                });
            }
            if (team_id_ == 0) {
                if (require(require(require(udat_)->ball_)->lineOutPos_)->x_ < 0.0f) {
                    require(players_.get_Item(num))->direct_ = 1;
                } else {
                    require(players_.get_Item(num))->direct_ = 3;
                }
            } else if (require(require(require(udat_)->ball_)->lineOutPos_)->x_ < 0.0f) {
                require(players_.get_Item(num))->direct_ = 1;
            } else {
                require(players_.get_Item(num))->direct_ = 3;
            }
            require(require(udat_)->ball_)->SetStop();
            if (team_id_ == 0) {
                if (require(require(require(udat_)->ball_)->lineOutPos_)->x_ < 0.0f) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(require(require(udat_)->ball_)->pos_)->Set(-450.0f, 0.0f, 900.0f);
                    });
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(require(require(udat_)->ball_)->pos_)->Set(450.0f, 0.0f, 900.0f);
                    });
                }
            } else if (require(require(require(udat_)->ball_)->lineOutPos_)->x_ < 0.0f) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(require(require(udat_)->ball_)->pos_)->Set(-450.0f, 0.0f, -900.0f);
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(require(require(udat_)->ball_)->pos_)->Set(450.0f, 0.0f, -900.0f);
                });
            }
            {
                auto cs_target = require(udat_)->ball_;
                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Off(require(require(udat_)->ball_)->flag_, 1);
                });
                require(cs_target)->flag_ = cs_value;
            }
            Amefto_start();
        }
    }
}

// M:game.Team.SetGoalState
void Team::SetGoalState() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.SetGoalState", game);
    {
        if (require(require(udat_)->gm_)->gameState_ == 1 - team_id_) {
            if ((!require(require(udat_)->gm_)->halfTime && team_id_ == 0) ||
                (require(require(udat_)->gm_)->halfTime && team_id_ == 1)) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = require(require(udat_)->gm_)->scorerListUserTeam;
                        pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(
                            kl_lang::JInteger::create(require(players_.get_Item(lastKickeer_))->pData_id_));
                        kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                    }());
                });
                require(require(apdat_)->pData_.get_Item(require(players_.get_Item(lastKickeer_))->pData_id_))
                    ->SetActScore(5);
            }
            if (!require(require(udat_)->gm_)->halfTime) {
                require(require(udat_)->gm_)->score_[team_id_]++;
            } else {
                require(require(udat_)->gm_)->score_[1 - team_id_]++;
            }
            pls::cs::Int32 num = GameUtil::Random(4) + 1;
            for (pls::cs::Int32 i = 0; i < players_.length(); ++i) {
                pls::cs::Ref<Player> player = players_.get_Item(i);
                if (i == lastKickeer_) {
                    {
                        auto cs_target = player;
                        pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::On(require(player)->flag_, 2048);
                        });
                        require(cs_target)->flag_ = cs_value;
                    }
                    if (num == 0) {

                    } else if ((num == 1)) {
                        require(require(player)->goalStatePos_)->x_ = -450.0f;
                        require(require(player)->goalStatePos_)->z_ = require(require(player)->pos_)->z_;
                    } else if ((num == 2)) {
                        require(require(player)->goalStatePos_)->x_ = 450.0f;
                        require(require(player)->goalStatePos_)->z_ = require(require(player)->pos_)->z_;
                    } else if ((num == 3)) {
                        require(require(player)->goalStatePos_)->x_ = -450.0f;
                        require(require(player)->goalStatePos_)->z_ =
                            900.0f - 1800.0f * pls::cs::Single(team_id_);
                    } else if ((num == 4)) {
                        require(require(player)->goalStatePos_)->x_ = 450.0f;
                        require(require(player)->goalStatePos_)->z_ =
                            900.0f - 1800.0f * pls::cs::Single(team_id_);
                    }
                } else {
                    {
                        auto cs_target = player;
                        pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::On(require(player)->flag_, 4096);
                        });
                        require(cs_target)->flag_ = cs_value;
                    }
                    {
                        auto cs_target = require(player)->goalStatePos_;
                        pls::cs::Int32 cs_arg0_72 = GameUtil::Random(100);
                        pls::cs::Int32 cs_arg3_72 = Team::GOAL_GLAD_AROUND_POS()[team_id_][num][0];
                        pls::cs::Int32 cs_arg4_72 = Team::GOAL_GLAD_AROUND_POS()[team_id_][num][1];
                        pls::cs::Single cs_value = pls::cs::Int32(
                            GameUtil::RateConvert(cs_arg0_72, 0, 99, cs_arg3_72, cs_arg4_72, true));
                        require(cs_target)->x_ = cs_value;
                    }
                    {
                        auto cs_target = require(player)->goalStatePos_;
                        pls::cs::Int32 cs_arg0_73 = GameUtil::Random(100);
                        pls::cs::Int32 cs_arg3_73 = Team::GOAL_GLAD_AROUND_POS()[team_id_][num][2];
                        pls::cs::Int32 cs_arg4_73 = Team::GOAL_GLAD_AROUND_POS()[team_id_][num][3];
                        pls::cs::Single cs_value = pls::cs::Int32(
                            GameUtil::RateConvert(cs_arg0_73, 0, 99, cs_arg3_73, cs_arg4_73, true));
                        require(cs_target)->z_ = cs_value;
                    }
                }
            }
        } else {
            for (pls::cs::Int32 j = 0; j < players_.length(); ++j) {
                pls::cs::Ref<Player> player2 = players_.get_Item(j);
                {
                    auto cs_target = player2;
                    pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::On(require(player2)->flag_, 8192);
                    });
                    require(cs_target)->flag_ = cs_value;
                }
                require(player2)->AddCommandChangeSeb(12);
            }
        }
    }
}

// M:game.Team.ChWhichChargeTern
bool Team::ChWhichChargeTern() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.ChWhichChargeTern", game);
    {
        bool result = true;
        if (is_null(require(require(udat_)->ball_)->lastOwner_)) {
            result = false;
        } else if (is_null(require(require(udat_)->ball_)->owner_)) {
            if (require(require(require(udat_)->ball_)->lastOwner_)->team_id_ != team_id_) {
                result = false;
            }
        } else if (require(require(require(udat_)->ball_)->owner_)->team_id_ != team_id_) {
            result = false;
        }
        if (require(require(udat_)->gm_)->state_ == 4) {
            if ((require(require(udat_)->gm_)->gameState_ == team_id_)) {
                result = true;
            } else {
                result = false;
            }
        }
        return result;
    }
}

// M:game.Team.ChPAreaLineOver
bool Team::ChPAreaLineOver() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.ChPAreaLineOver", game);
    {
        Map::ensure_initialized();

        if (team_id_ == 0) {
            if ([&]() -> bool {
                    auto cs_left = require(amefto_goalPos_.get_Item(0))->z_;
                    auto cs_right = require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->z_;
                    return cs_left >= cs_right;
                }()) {
                return true;
            }
        } else if ([&]() -> bool {
                       auto cs_left = require(amefto_goalPos_.get_Item(0))->z_;
                       auto cs_right = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->z_;
                       return cs_left <= cs_right;
                   }()) {
            return true;
        }
        return false;
    }
}
} // namespace game
}
