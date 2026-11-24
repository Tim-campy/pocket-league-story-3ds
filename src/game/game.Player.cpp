// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.PlayerData.hpp"
#include "data.TeamData.hpp"
#include "form.SoccerForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.Player.hpp"
#include "game.TPlayer.hpp"
#include "game.Team.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
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

void Player::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(script_, visitor);
    pls::cs::trace_value(pos_, visitor);
    pls::cs::trace_value(shadowPos_, visitor);
    pls::cs::trace_value(goalPos_, visitor);
    pls::cs::trace_value(formationGo_, visitor);
    pls::cs::trace_value(v_, visitor);
    pls::cs::trace_value(formation_, visitor);
    pls::cs::trace_value(formation_param_, visitor);
    pls::cs::trace_value(formation_address_, visitor);
    pls::cs::trace_value(address_, visitor);
    pls::cs::trace_value(mostEvaAddres_, visitor);
    pls::cs::trace_value(screen_pos_, visitor);
    pls::cs::trace_value(directBox_, visitor);
    pls::cs::trace_value(draw_param, visitor);
    pls::cs::trace_value(camera_pos, visitor);
    pls::cs::trace_value(old_pos, visitor);
    pls::cs::trace_value(temp_vec, visitor);
    pls::cs::trace_value(goalStatePos_, visitor);
    pls::cs::trace_value(seb_startPos, visitor);
    pls::cs::trace_value(seb_v, visitor);
    pls::cs::trace_value(moveDirectBox, visitor);
    pls::cs::trace_value(direct_dis_passer, visitor);
    pls::cs::trace_value(direct_dis_free, visitor);
    pls::cs::trace_value(DIRECT_RECT, visitor);
}

static pls::cs::Int32 Player_actDecide_index_storage{};

static pls::cs::Single Player_actDecide_max_storage{};

static pls::cs::Ref<main::AppData> Player_apdat__storage{};

static IntArray2 Player_body_off_storage{};

static IntArray Player_camera_pos_shadow_storage{};

static IntArray Player_camera_pos_sliding_storage{};

static pls::cs::Ref<pls::kairo::Canvas> Player_canvas__storage{};

static IntArray Player_CH_BALL_DIRECT_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Player_CH_BALLSUBPOS_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Player_chColPos_storage{};

static IntArray3 Player_EF_KEEPER_OFF_storage{};

static IntArray2 Player_EF_SHOOT_OFF_storage{};

static pls::cs::Single Player_eva_centering_storage{};

static pls::cs::Single Player_eva_clear_storage{};

static FloatArray Player_eva_dribble_storage{};

static FloatArray2 Player_eva_pass_storage{};

static IntArray2 Player_eva_pass_info_storage{};

static IntArray2 Player_eva_pass_info_onEnemy_storage{};

static pls::cs::Single Player_eva_shoot_storage{};

static pls::cs::Array<IntArray3> Player_head_off_storage{};

static pls::cs::Ref<kl_java_util::Vector> Player_hitList_storage{};

static IntArray Player_PLAYER_EFLIST_storage{};

static StringArray Player_PLAYER_EFLIST_NAME_storage{};

static pls::cs::Int32 Player_SEB_H_DOWN_ANIME_storage{};

static IntArray Player_SEB_H_GOALGLAD_ANIME_storage{};

static IntArray Player_SEB_H_GOALGLAD2_ANIME_storage{};

static IntArray Player_SEB_H_HEAD_ANIME_storage{};

static pls::cs::Int32 Player_SEB_H_HEAD_JAMPTIME_storage{};

static IntArray Player_SEB_H_KICK_ANIME_storage{};

static IntArray Player_SEB_H_SAVING_ANIME_storage{};

static IntArray Player_SEB_H_SLIDING_ANIME_storage{};

static IntArray Player_SEB_H_THROWIN_ANIME_storage{};

static IntArray Player_SEB_H_TRAP1_ANIME_storage{};

static IntArray Player_SEB_H_TRAP2_ANIME_storage{};

static IntArray Player_SEB_H_VOLLEY_ANIME_storage{};

static pls::cs::Int32 Player_SEB_H_VOLLEY_JAMPTIME_storage{};

static pls::cs::Int32 Player_SEB_H_WALK_ASPEED_storage{};

static StringArray Player_SEB_NAME_storage{};

static IntArray Player_SEBH_TO_RESHUMANSEB_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Player_st_a_vec_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Player_st_b_vec_storage{};

static IntArray Player_temp_address_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Player_temp_afr_mostEvaPos_storage{};

static IntArray Player_temp_afr_mostEvaSPos_storage{};

static IntArray Player_temp_direct_s_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Player_temp_moveAreaPos_storage{};

static pls::cs::Ref<UserData> Player_udat__storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Player_vec1_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Player_vec2_storage{};

static pls::cs::Single Player_w_centering_storage{};

static pls::cs::Single Player_w_clear_storage{};

static pls::cs::Single Player_w_dribble_storage{};

static pls::cs::Single Player_w_freeRun_afrMostEvaPos_storage{};

static pls::cs::Single Player_w_freeRun_formation_storage{};

static pls::cs::Single Player_w_pass_storage{};

static pls::cs::Single Player_w_pass_through_storage{};

static pls::cs::Single Player_w_shoot_storage{};

static PLS_NOINLINE void cs_init_2ef6641b828546ac_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(Player_actDecide_index_storage, visitor);
        pls::cs::trace_value(Player_actDecide_max_storage, visitor);
        pls::cs::trace_value(Player_apdat__storage, visitor);
        pls::cs::trace_value(Player_body_off_storage, visitor);
        pls::cs::trace_value(Player_camera_pos_shadow_storage, visitor);
        pls::cs::trace_value(Player_camera_pos_sliding_storage, visitor);
        pls::cs::trace_value(Player_canvas__storage, visitor);
        pls::cs::trace_value(Player_CH_BALL_DIRECT_storage, visitor);
        pls::cs::trace_value(Player_CH_BALLSUBPOS_storage, visitor);
        pls::cs::trace_value(Player_chColPos_storage, visitor);
        pls::cs::trace_value(Player_EF_KEEPER_OFF_storage, visitor);
        pls::cs::trace_value(Player_EF_SHOOT_OFF_storage, visitor);
        pls::cs::trace_value(Player_eva_centering_storage, visitor);
        pls::cs::trace_value(Player_eva_clear_storage, visitor);
        pls::cs::trace_value(Player_eva_dribble_storage, visitor);
        pls::cs::trace_value(Player_eva_pass_storage, visitor);
        pls::cs::trace_value(Player_eva_pass_info_storage, visitor);
        pls::cs::trace_value(Player_eva_pass_info_onEnemy_storage, visitor);
        pls::cs::trace_value(Player_eva_shoot_storage, visitor);
        pls::cs::trace_value(Player_head_off_storage, visitor);
        pls::cs::trace_value(Player_hitList_storage, visitor);
        pls::cs::trace_value(Player_PLAYER_EFLIST_storage, visitor);
        pls::cs::trace_value(Player_PLAYER_EFLIST_NAME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_DOWN_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_GOALGLAD_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_GOALGLAD2_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_HEAD_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_HEAD_JAMPTIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_KICK_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_SAVING_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_SLIDING_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_THROWIN_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_TRAP1_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_TRAP2_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_VOLLEY_ANIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_VOLLEY_JAMPTIME_storage, visitor);
        pls::cs::trace_value(Player_SEB_H_WALK_ASPEED_storage, visitor);
        pls::cs::trace_value(Player_SEB_NAME_storage, visitor);
        pls::cs::trace_value(Player_SEBH_TO_RESHUMANSEB_storage, visitor);
        pls::cs::trace_value(Player_st_a_vec_storage, visitor);
        pls::cs::trace_value(Player_st_b_vec_storage, visitor);
        pls::cs::trace_value(Player_temp_address_storage, visitor);
        pls::cs::trace_value(Player_temp_afr_mostEvaPos_storage, visitor);
        pls::cs::trace_value(Player_temp_afr_mostEvaSPos_storage, visitor);
        pls::cs::trace_value(Player_temp_direct_s_storage, visitor);
        pls::cs::trace_value(Player_temp_moveAreaPos_storage, visitor);
        pls::cs::trace_value(Player_udat__storage, visitor);
        pls::cs::trace_value(Player_vec1_storage, visitor);
        pls::cs::trace_value(Player_vec2_storage, visitor);
        pls::cs::trace_value(Player_w_centering_storage, visitor);
        pls::cs::trace_value(Player_w_clear_storage, visitor);
        pls::cs::trace_value(Player_w_dribble_storage, visitor);
        pls::cs::trace_value(Player_w_freeRun_afrMostEvaPos_storage, visitor);
        pls::cs::trace_value(Player_w_freeRun_formation_storage, visitor);
        pls::cs::trace_value(Player_w_pass_storage, visitor);
        pls::cs::trace_value(Player_w_pass_through_storage, visitor);
        pls::cs::trace_value(Player_w_shoot_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.Player", flag, []() {
        Player_SEB_NAME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_NAME", [&]() { return StringArray::make(0); });
        Player_SEBH_TO_RESHUMANSEB_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.SEBH_TO_RESHUMANSEB", [&]() {
                return IntArray::from({52, 24, 20, 4, 36, 32, 40, 44, 8, 12, 28, 16, 0, 48, 56, 80, 81});
            });
        Player_SEB_H_WALK_ASPEED_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.SEB_H_WALK_ASPEED", [&]() { return 4; });
        Player_SEB_H_KICK_ANIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_H_KICK_ANIME", [&]() { return IntArray::from({2, 6, 9}); });
        Player_SEB_H_SAVING_ANIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_H_SAVING_ANIME", [&]() { return IntArray::from({22, 32}); });
        Player_SEB_H_SLIDING_ANIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_H_SLIDING_ANIME", [&]() { return IntArray::from({6, 12}); });
        Player_SEB_H_HEAD_JAMPTIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_H_HEAD_JAMPTIME", [&]() { return 14; });
        Player_SEB_H_HEAD_ANIME_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.SEB_H_HEAD_ANIME", [&]() {
                return IntArray::from({6, Player::SEB_H_HEAD_JAMPTIME()});
            });
        Player_SEB_H_VOLLEY_JAMPTIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_H_VOLLEY_JAMPTIME", [&]() { return 16; });
        Player_SEB_H_VOLLEY_ANIME_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.SEB_H_VOLLEY_ANIME", [&]() {
                return IntArray::from({6, Player::SEB_H_VOLLEY_JAMPTIME()});
            });
        Player_SEB_H_THROWIN_ANIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_H_THROWIN_ANIME", [&]() { return IntArray::from({0, 5}); });
        Player_SEB_H_GOALGLAD_ANIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_H_GOALGLAD_ANIME", [&]() { return IntArray::from({12, 22}); });
        Player_SEB_H_DOWN_ANIME_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.SEB_H_DOWN_ANIME", [&]() { return 60; });
        Player_SEB_H_TRAP1_ANIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_H_TRAP1_ANIME", [&]() { return IntArray::from({4, 6}); });
        Player_SEB_H_TRAP2_ANIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_H_TRAP2_ANIME", [&]() { return IntArray::from({6, 8}); });
        Player_SEB_H_GOALGLAD2_ANIME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.SEB_H_GOALGLAD2_ANIME", [&]() { return IntArray::from({4, 8, 12, 16}); });
        Player_body_off_storage = pls::cs::evaluate_type_initializer_field("F:game.Player.body_off", [&]() {
            return IntArray2::from({IntArray::make(2), IntArray::make(2), IntArray::make(2),
                                    IntArray::make(2), IntArray::make(2), IntArray::make(2),
                                    IntArray::make(2), IntArray::make(2), IntArray::make(2),
                                    IntArray::make(2), IntArray::make(2), IntArray::make(2),
                                    IntArray::make(2), IntArray::make(2), IntArray::make(2),
                                    IntArray::make(2), IntArray::make(2), IntArray::make(2)});
        });
        Player_head_off_storage = pls::cs::evaluate_type_initializer_field("F:game.Player.head_off", [&]() {
            return pls::cs::Array<IntArray3>::from(
                {IntArray3::from({IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -5}),
                                                   IntArray::from({0, -6}), IntArray::from({0, -5})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -5}),
                                                   IntArray::from({0, -6}), IntArray::from({0, -5})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -5}),
                                                   IntArray::from({0, -6}), IntArray::from({0, -5})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -5}),
                                                   IntArray::from({0, -6}), IntArray::from({0, -5})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({-1, -5}), IntArray::from({1, -4}),
                                                   IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({0, -5}), IntArray::from({1, -4}),
                                                   IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({0, -5}), IntArray::from({-1, -4}),
                                                   IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({1, -5}), IntArray::from({-1, -4}),
                                                   IntArray::from({0, -6})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({0, -6}), IntArray::from({2, -7})}),
                                  IntArray2::from({IntArray::from({1, -6}), IntArray::from({1, -6})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({-1, -6})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({-2, -7})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({-1, -6}), IntArray::from({0, -6})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({1, -6}), IntArray::from({2, -6})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({3, -6})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({-2, -6})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({-1, -6})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({-1, -3}), IntArray::from({-1, -1})}),
                                  IntArray2::from({IntArray::from({0, -3}), IntArray::from({0, -1})}),
                                  IntArray2::from({IntArray::from({0, -3}), IntArray::from({0, -1})}),
                                  IntArray2::from({IntArray::from({1, -3}), IntArray::from({1, -1})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({0, -5}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({0, -5}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({0, -5}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({0, -5}), IntArray::from({0, -6})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({-1, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({-2, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({2, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({2, -6}), IntArray::from({0, -6})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({0, -5})}),
                                  IntArray2::from({IntArray::from({0, -5})}),
                                  IntArray2::from({IntArray::from({0, -5})}),
                                  IntArray2::from({IntArray::from({0, -5})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({0, -6}), IntArray::from({1, -6}),
                                                   IntArray::from({0, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({1, -6}),
                                                   IntArray::from({0, -6}), IntArray::from({1, -5})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({-1, -6}),
                                                   IntArray::from({0, -6}), IntArray::from({-1, -5})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({-1, -6}),
                                                   IntArray::from({0, -6}), IntArray::from({0, -6})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -7}),
                                                   IntArray::from({0, -6}), IntArray::from({0, -7})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -7}),
                                                   IntArray::from({0, -6}), IntArray::from({0, -7})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -7}),
                                                   IntArray::from({0, -6}), IntArray::from({0, -7})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -7}),
                                                   IntArray::from({0, -6}), IntArray::from({0, -7})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({5, -2})}),
                                  IntArray2::from({IntArray::from({6, -2})}),
                                  IntArray2::from({IntArray::from({-6, -2})}),
                                  IntArray2::from({IntArray::from({-5, -2})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({2, -2})}),
                                  IntArray2::from({IntArray::from({4, 1})}),
                                  IntArray2::from({IntArray::from({-4, 1})}),
                                  IntArray2::from({IntArray::from({-3, -2})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({-1, -6})}),
                                  IntArray2::from({IntArray::from({-1, -6})}),
                                  IntArray2::from({IntArray::from({1, -6})}),
                                  IntArray2::from({IntArray::from({1, -6})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({4, 1}), IntArray::from({4, -1})}),
                                  IntArray2::from({IntArray::from({-1, -6}), IntArray::from({-1, -6})}),
                                  IntArray2::from({IntArray::from({-2, -5}), IntArray::from({-1, -5})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({1, -6}), IntArray::from({1, -6})}),
                                  IntArray2::from({IntArray::from({1, -6}), IntArray::from({1, -6})}),
                                  IntArray2::from({IntArray::from({1, -6}), IntArray::from({1, -6})}),
                                  IntArray2::from({IntArray::from({1, -6}), IntArray::from({1, -6})})}),
                 IntArray3::from({IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({0, -6}), IntArray::from({0, -6})}),
                                  IntArray2::from({IntArray::from({-1, -6}), IntArray::from({0, -6})})})});
        });
        Player_vec1_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.vec1", [&]() { return kl_util3d::Vector3D::create(); });
        Player_vec2_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.vec2", [&]() { return kl_util3d::Vector3D::create(); });
        Player_PLAYER_EFLIST_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.PLAYER_EFLIST", [&]() { return IntArray::from({0, 6}); });
        Player_PLAYER_EFLIST_NAME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.PLAYER_EFLIST_NAME", [&]() { return StringArray::make(0); });
        Player_EF_SHOOT_OFF_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.EF_SHOOT_OFF", [&]() {
                return IntArray2::from({IntArray::from({9, 6}), IntArray::from({9, 6}),
                                        IntArray::from({-11, 5}), IntArray::from({-11, 6})});
            });
        Player_EF_KEEPER_OFF_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.EF_KEEPER_OFF", [&]() {
                return IntArray3::from(
                    {IntArray2::from({IntArray::from({5, 15}), IntArray::from({10, 10}),
                                      IntArray::from({-2, 15}), IntArray::from({-2, 17})}),
                     IntArray2::from({IntArray::from({5, 15}), IntArray::from({6, 6}),
                                      IntArray::from({-2, 15}), IntArray::from({-7, 13})})});
            });
        Player_temp_direct_s_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.temp_direct_s", [&]() { return IntArray::make(2); });
        Player_temp_afr_mostEvaPos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.temp_afr_mostEvaPos", [&]() { return kl_util3d::Vector3D::create(); });
        Player_temp_afr_mostEvaSPos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.temp_afr_mostEvaSPos", [&]() { return IntArray::make(2); });
        Player_temp_address_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.temp_address", [&]() { return IntArray::make(2); });
        Player_w_freeRun_formation_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.w_freeRun_formation", [&]() { return 0.4f; });
        Player_w_freeRun_afrMostEvaPos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.w_freeRun_afrMostEvaPos", [&]() { return 0.6f; });
        Player_w_dribble_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.w_dribble", [&]() { return 0.0f; });
        Player_w_pass_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.w_pass", [&]() { return 0.0f; });
        Player_w_pass_through_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.w_pass_through", [&]() { return 0.0f; });
        Player_w_clear_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.w_clear", [&]() { return 0.0f; });
        Player_w_shoot_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.w_shoot", [&]() { return 0.0f; });
        Player_w_centering_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.w_centering", [&]() { return 0.0f; });
        Player_eva_dribble_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.eva_dribble", [&]() { return FloatArray::make(9); });
        Player_eva_pass_storage = pls::cs::evaluate_type_initializer_field("F:game.Player.eva_pass", [&]() {
            return PLS_API(kl_java_util::JTool::MakeArray<FloatArray2>(IntArray::from({11, 2})));
        });
        Player_eva_pass_info_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.eva_pass_info", [&]() {
                return PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({11, 2})));
            });
        Player_eva_pass_info_onEnemy_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Player.eva_pass_info_onEnemy", [&]() {
                return PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({11, 2})));
            });
        Player_chColPos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.chColPos", [&]() { return kl_util3d::Vector3D::create(); });
        Player_hitList_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.hitList", [&]() { return kl_java_util::Vector::create(); });
        Player_camera_pos_shadow_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.camera_pos_shadow", [&]() { return IntArray::make(2); });
        Player_camera_pos_sliding_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.camera_pos_sliding", [&]() { return IntArray::make(2); });
        Player_CH_BALLSUBPOS_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.CH_BALLSUBPOS", [&]() { return kl_util3d::Vector3D::create(); });
        Player_CH_BALL_DIRECT_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.CH_BALL_DIRECT", [&]() { return IntArray::make(2); });
        Player_st_a_vec_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.st_a_vec", [&]() { return kl_util3d::Vector3D::create(); });
        Player_st_b_vec_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Player.st_b_vec", [&]() { return kl_util3d::Vector3D::create(); });
    });
}

void Player::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_2ef6641b828546ac_slow(flag);
}

pls::cs::Int32& Player::actDecide_index() {
    Player::ensure_initialized();
    return Player_actDecide_index_storage;
}

pls::cs::Single& Player::actDecide_max() {
    Player::ensure_initialized();
    return Player_actDecide_max_storage;
}

pls::cs::Ref<main::AppData>& Player::apdat_() {
    Player::ensure_initialized();
    return Player_apdat__storage;
}

IntArray2& Player::body_off() {
    Player::ensure_initialized();
    return Player_body_off_storage;
}

IntArray& Player::camera_pos_shadow() {
    Player::ensure_initialized();
    return Player_camera_pos_shadow_storage;
}

IntArray& Player::camera_pos_sliding() {
    Player::ensure_initialized();
    return Player_camera_pos_sliding_storage;
}

pls::cs::Ref<pls::kairo::Canvas>& Player::canvas_() {
    Player::ensure_initialized();
    return Player_canvas__storage;
}

IntArray& Player::CH_BALL_DIRECT() {
    Player::ensure_initialized();
    return Player_CH_BALL_DIRECT_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Player::CH_BALLSUBPOS() {
    Player::ensure_initialized();
    return Player_CH_BALLSUBPOS_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Player::chColPos() {
    Player::ensure_initialized();
    return Player_chColPos_storage;
}

IntArray3& Player::EF_KEEPER_OFF() {
    Player::ensure_initialized();
    return Player_EF_KEEPER_OFF_storage;
}

IntArray2& Player::EF_SHOOT_OFF() {
    Player::ensure_initialized();
    return Player_EF_SHOOT_OFF_storage;
}

pls::cs::Single& Player::eva_centering() {
    Player::ensure_initialized();
    return Player_eva_centering_storage;
}

pls::cs::Single& Player::eva_clear() {
    Player::ensure_initialized();
    return Player_eva_clear_storage;
}

FloatArray& Player::eva_dribble() {
    Player::ensure_initialized();
    return Player_eva_dribble_storage;
}

FloatArray2& Player::eva_pass() {
    Player::ensure_initialized();
    return Player_eva_pass_storage;
}

IntArray2& Player::eva_pass_info() {
    Player::ensure_initialized();
    return Player_eva_pass_info_storage;
}

IntArray2& Player::eva_pass_info_onEnemy() {
    Player::ensure_initialized();
    return Player_eva_pass_info_onEnemy_storage;
}

pls::cs::Single& Player::eva_shoot() {
    Player::ensure_initialized();
    return Player_eva_shoot_storage;
}

pls::cs::Array<IntArray3>& Player::head_off() {
    Player::ensure_initialized();
    return Player_head_off_storage;
}

pls::cs::Ref<kl_java_util::Vector>& Player::hitList() {
    Player::ensure_initialized();
    return Player_hitList_storage;
}

IntArray& Player::PLAYER_EFLIST() {
    Player::ensure_initialized();
    return Player_PLAYER_EFLIST_storage;
}

StringArray& Player::PLAYER_EFLIST_NAME() {
    Player::ensure_initialized();
    return Player_PLAYER_EFLIST_NAME_storage;
}

pls::cs::Int32& Player::SEB_H_DOWN_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_DOWN_ANIME_storage;
}

IntArray& Player::SEB_H_GOALGLAD_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_GOALGLAD_ANIME_storage;
}

IntArray& Player::SEB_H_GOALGLAD2_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_GOALGLAD2_ANIME_storage;
}

IntArray& Player::SEB_H_HEAD_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_HEAD_ANIME_storage;
}

pls::cs::Int32& Player::SEB_H_HEAD_JAMPTIME() {
    Player::ensure_initialized();
    return Player_SEB_H_HEAD_JAMPTIME_storage;
}

IntArray& Player::SEB_H_KICK_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_KICK_ANIME_storage;
}

IntArray& Player::SEB_H_SAVING_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_SAVING_ANIME_storage;
}

IntArray& Player::SEB_H_SLIDING_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_SLIDING_ANIME_storage;
}

IntArray& Player::SEB_H_THROWIN_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_THROWIN_ANIME_storage;
}

IntArray& Player::SEB_H_TRAP1_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_TRAP1_ANIME_storage;
}

IntArray& Player::SEB_H_TRAP2_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_TRAP2_ANIME_storage;
}

IntArray& Player::SEB_H_VOLLEY_ANIME() {
    Player::ensure_initialized();
    return Player_SEB_H_VOLLEY_ANIME_storage;
}

pls::cs::Int32& Player::SEB_H_VOLLEY_JAMPTIME() {
    Player::ensure_initialized();
    return Player_SEB_H_VOLLEY_JAMPTIME_storage;
}

pls::cs::Int32& Player::SEB_H_WALK_ASPEED() {
    Player::ensure_initialized();
    return Player_SEB_H_WALK_ASPEED_storage;
}

StringArray& Player::SEB_NAME() {
    Player::ensure_initialized();
    return Player_SEB_NAME_storage;
}

IntArray& Player::SEBH_TO_RESHUMANSEB() {
    Player::ensure_initialized();
    return Player_SEBH_TO_RESHUMANSEB_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Player::st_a_vec() {
    Player::ensure_initialized();
    return Player_st_a_vec_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Player::st_b_vec() {
    Player::ensure_initialized();
    return Player_st_b_vec_storage;
}

IntArray& Player::temp_address() {
    Player::ensure_initialized();
    return Player_temp_address_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Player::temp_afr_mostEvaPos() {
    Player::ensure_initialized();
    return Player_temp_afr_mostEvaPos_storage;
}

IntArray& Player::temp_afr_mostEvaSPos() {
    Player::ensure_initialized();
    return Player_temp_afr_mostEvaSPos_storage;
}

IntArray& Player::temp_direct_s() {
    Player::ensure_initialized();
    return Player_temp_direct_s_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Player::temp_moveAreaPos() {
    Player::ensure_initialized();
    return Player_temp_moveAreaPos_storage;
}

pls::cs::Ref<UserData>& Player::udat_() {
    Player::ensure_initialized();
    return Player_udat__storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Player::vec1() {
    Player::ensure_initialized();
    return Player_vec1_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Player::vec2() {
    Player::ensure_initialized();
    return Player_vec2_storage;
}

pls::cs::Single& Player::w_centering() {
    Player::ensure_initialized();
    return Player_w_centering_storage;
}

pls::cs::Single& Player::w_clear() {
    Player::ensure_initialized();
    return Player_w_clear_storage;
}

pls::cs::Single& Player::w_dribble() {
    Player::ensure_initialized();
    return Player_w_dribble_storage;
}

pls::cs::Single& Player::w_freeRun_afrMostEvaPos() {
    Player::ensure_initialized();
    return Player_w_freeRun_afrMostEvaPos_storage;
}

pls::cs::Single& Player::w_freeRun_formation() {
    Player::ensure_initialized();
    return Player_w_freeRun_formation_storage;
}

pls::cs::Single& Player::w_pass() {
    Player::ensure_initialized();
    return Player_w_pass_storage;
}

pls::cs::Single& Player::w_pass_through() {
    Player::ensure_initialized();
    return Player_w_pass_through_storage;
}

pls::cs::Single& Player::w_shoot() {
    Player::ensure_initialized();
    return Player_w_shoot_storage;
}

void Player::create_init(pls::cs::Ref<Player> self, pls::cs::Int32 obj_type) {
    Player::ensure_initialized();
    self->draw_param = IntArray::make(11);
    self->camera_pos = IntArray::make(2);
    self->old_pos = kl_util3d::Vector3D::create();
    self->temp_vec = kl_util3d::Vector3D::create();
    self->goalStatePos_ = kl_util3d::Vector3D::create();
    self->seb_startPos = kl_util3d::Vector3D::create();
    self->seb_v = kl_util3d::Vector3D::create();
    self->moveDirectBox = IntArray::make(15);
    self->direct_dis_passer = IntArray::make(5);
    self->direct_dis_free = IntArray::from({2, 10, 15, 20, 20});
    self->DIRECT_RECT =
        IntArray2::from({IntArray::from({-1, 1}), IntArray::from({0, 1}), IntArray::from({1, 1}),
                         IntArray::from({-1, 0}), IntArray::make(2), IntArray::from({1, 0}),
                         IntArray::from({-1, -1}), IntArray::from({0, -1}), IntArray::from({1, -1})});
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.#ctor(System.Int32)", game);
    {
        Player::apdat_() = main::AppData::GetInstance();
        Player::canvas_() = PLS_API(pls::kairo::Canvas::GetInstance());
        self->obj_type_ = obj_type;
        self->pData_id_ = 1;
        self->bodyImg_ = 100;
    }
}

// M:game.Player.#ctor(System.Int32)
pls::cs::Ref<Player> Player::create(pls::cs::Int32 obj_type) {
    Player::ensure_initialized();
    auto self = pls::cs::make_ref<Player>();
    Player::create_init(self, obj_type);
    return self;
}

// M:game.Player.Init(System.Int32,System.Int32,System.Int32,System.Int32)
void Player::Init(pls::cs::Int32 pData_id, pls::cs::Int32 formation_index, pls::cs::Int32 teamId,
                  pls::cs::Int32 tDataId) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Player.Init(System.Int32,System.Int32,System.Int32,System.Int32)", game);
    {
        Player::apdat_() = main::AppData::GetInstance();
        Player::canvas_() = PLS_API(pls::kairo::Canvas::GetInstance());
        Player::udat_() = UserData::GetInstance();
        pData_id_ = pData_id;
        p_id_ = formation_index;
        team_id_ = teamId;
        tData_id_ = tDataId;
        role_ = 0;
        frame_ = 0;
        direct_ = 0;
        seb_ = 0;
        faceImg_ = 0;
        bodyImg_ = 100;
        script_ = kl_java_util::Vector::create();
        pos_ = kl_util3d::Vector3D::create();
        shadowPos_ = kl_util3d::Vector3D::create();
        goalPos_ = kl_util3d::Vector3D::create();
        formationGo_ = kl_util3d::Vector3D::create();
        v_ = kl_util3d::Vector3D::create();
        formation_ = IntArray::make(2);
        formation_param_ = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({5, 2})));
        formation_address_ = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({5, 2})));
        address_ = IntArray::make(2);
        mostEvaAddres_ = IntArray::make(2);
        screen_pos_ = IntArray::make(2);
        notMoveCnt_ = 0;
        flag_ = 0;
        state_ = 0;
        stateCnt_ = 0;
        actId_ = 0;
        coliState_ = 0;
        coliBallState_ = 0;
        flag_ = PLS_API(kl_unity_util::BitUtil::On(flag_, 2));
        physical_hp_ = data::PlayerData::GetPhysicalHpMax(this);
        directBox_ = IntArray::make(4);
        role_ = require(require(Player::apdat_())->pData_.get_Item(pData_id))->role_;
    }
}

// M:game.Player.Clear
void Player::Clear() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Clear", game);
    {
        PLS_API(require(pos_)->Set(0.0f, 0.0f, 0.0f));
        frame_ = 0;
        seb_ = 0;
        if (PLS_API(kl_java_util::Vector_2_Size(require(script_))) > 0) {
            PLS_API(kl_java_util::Vector_2_RemoveAllElements(require(script_)));
        }
        flag_ = 0;
        state_ = 0;
        stateCnt_ = 0;
        flag_ = PLS_API(kl_unity_util::BitUtil::On(flag_, 2));
    }
}

// M:game.Player.Update
bool Player::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Update", game);
    {
        Map::ensure_initialized();

        frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
        sebCnt_ = ((sebCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
        pls::cs::Int32 num = direct_;
        pls::cs::Ref<Player> passer = require(require(Player::udat_())->teams_.get_Item(0))->GetPasser();
        if (is_null(passer)) {
            passer = require(require(Player::udat_())->teams_.get_Item(0))
                         ->players_.get_Item(
                             pls::cs::Int32(
                                 require(require(Player::udat_())->teams_.get_Item(0))->players_.length()) -
                             1);
        }
        Update_moveArea();
        if (PLS_API(kl_java_util::Vector_2_Size(require(script_))) > 0) {
            this->Script();
        } else {
            actId_ = DecideAction();
            Act(actId_);
        }
        if (role_ == 0) {
            if (team_id_ == 0) {
                if ([&]() -> bool {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->z_;
                        return cs_left > cs_right;
                    }()) {
                    {
                        auto cs_target = pos_;
                        pls::cs::Single cs_value = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->z_;
                        require(cs_target)->z_ = cs_value;
                    }
                }
                if (require(pos_)->z_ < -900.0f) {
                    require(pos_)->z_ = -900.0f;
                }
            } else {
                if ([&]() -> bool {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->z_;
                        return cs_left < cs_right;
                    }()) {
                    {
                        auto cs_target = pos_;
                        pls::cs::Single cs_value = require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->z_;
                        require(cs_target)->z_ = cs_value;
                    }
                }
                if (require(pos_)->z_ > 900.0f) {
                    require(pos_)->z_ = 900.0f;
                }
            }
            if ([&]() -> bool {
                    auto cs_left = require(pos_)->x_;
                    auto cs_right = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->x_;
                    return cs_left < cs_right;
                }()) {
                {
                    auto cs_target = pos_;
                    pls::cs::Single cs_value = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->x_;
                    require(cs_target)->x_ = cs_value;
                }
            }
            if ([&]() -> bool {
                    auto cs_left = require(pos_)->x_;
                    auto cs_right = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->x_;
                    return cs_left > cs_right;
                }()) {
                {
                    auto cs_target = pos_;
                    pls::cs::Single cs_value = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->x_;
                    require(cs_target)->x_ = cs_value;
                }
            }
        }
        Camera::ConvertGlobalToAddress(pos_, address_);
        Camera::ConvertGlobalToScreen(pos_, screen_pos_);
        if (num != direct_) {
            ballDribbleTime_ = 0;
        }
        return false;
    }
}

// M:game.Player.DecideAction
pls::cs::Int32 Player::DecideAction() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.DecideAction", game);
    {
        GameManager::ensure_initialized();

        pls::cs::Int32 result = 0;
        pls::cs::Ref<Team> team = require(Player::udat_())->teams_.get_Item(team_id_);
        if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 2048))) {
            return 11;
        }
        if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 4096))) {
            return 12;
        }
        if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 8192))) {
            return 13;
        }
        if (require(require(Player::udat_())->gm_)->state_ == 2 ||
            require(require(Player::udat_())->gm_)->state_ == 1) {
            if (require(require(Player::udat_())->gm_)->stateCnt_ >= 50 &&
                PLS_API(kl_unity_util::BitUtil::Check(flag_, 4))) {
                return 7;
            }
            return 5;
        }
        if (require(require(Player::udat_())->gm_)->state_ == 3 &&
            PLS_API(kl_unity_util::BitUtil::Check(flag_, 4))) {
            if ([&]() -> bool {
                    auto cs_left = require(require(Player::udat_())->gm_)->stateCnt_;
                    auto cs_right = GameManager::WAIT_THROWIN()[1];
                    return cs_left >= cs_right;
                }()) {
                return 8;
            }
            return 5;
        }
        if (require(require(Player::udat_())->gm_)->state_ == 4 &&
            PLS_API(kl_unity_util::BitUtil::Check(flag_, 512))) {
            if ([&]() -> bool {
                    auto cs_left = require(require(Player::udat_())->gm_)->stateCnt_;
                    auto cs_right = GameManager::WAIT_GK()[1];
                    return cs_left >= cs_right;
                }()) {
                return 9;
            }
            return 5;
        }
        if (require(require(Player::udat_())->gm_)->state_ == 5 &&
            PLS_API(kl_unity_util::BitUtil::Check(flag_, 1024))) {
            if ([&]() -> bool {
                    auto cs_left = require(require(Player::udat_())->gm_)->stateCnt_;
                    auto cs_right = GameManager::WAIT_CK()[1];
                    return cs_left >= cs_right;
                }()) {
                return 10;
            }
            return 5;
        }
        if (role_ == 0) {
            result = 4;
        } else if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 4))) {
            result = 3;
        } else if (PLS_API(kl_java_util::Vector_2_IndexOf(require(require(team)->players_receive_),
                                                          pls::cs::box(this))) != -1) {
            result = 1;
        } else if (require(require(Player::udat_())->gm_)->gameState_ == 1 - team_id_ &&
                   require(require(Player::udat_())->gm_)->state_ == 0) {
            pls::cs::Ref<Player> passer =
                require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->GetPasser();
            if ((!is_null(passer) && require(passer)->role_ != 0) &&
                PLS_API(kl_lang::JMath::AbsInt(([&]() -> pls::cs::Int32 {
                    auto cs_left = require(passer)->address_[0];
                    auto cs_right = address_[0];
                    return cs_left - cs_right;
                }()))) <= 2 &&
                PLS_API(kl_lang::JMath::AbsInt(([&]() -> pls::cs::Int32 {
                    auto cs_left = require(passer)->address_[1];
                    auto cs_right = address_[1];
                    return cs_left - cs_right;
                }()))) <= 2) {
                pls::cs::Single num = (-900.0f + 1800.0f * pls::cs::Single(team_id_));
                pls::cs::Single x = pls::cs::Single(PLS_API(kl_lang::JMath::Sqrt(
                    require(require(passer)->pos_)->x_ * require(require(passer)->pos_)->x_ +
                    (require(require(passer)->pos_)->z_ - num) *
                        (require(require(passer)->pos_)->z_ - num))));
                pls::cs::Single num2 = GameUtil::RateConvertFloat(x, 200.0f, 600.0f, 240.0f, 128.0f, true);
                if (PLS_API(
                        kl_lang::JMath::Sqrt((require(require(passer)->pos_)->x_ - require(pos_)->x_) *
                                                 (require(require(passer)->pos_)->x_ - require(pos_)->x_) +
                                             (require(require(passer)->pos_)->z_ - require(pos_)->z_) *
                                                 (require(require(passer)->pos_)->z_ - require(pos_)->z_))) <
                    pls::cs::Double(num2)) {
                    result = 2;
                }
            }
        }
        return result;
    }
}

// M:game.Player.GetActIdFromSeb
pls::cs::Int32 Player::GetActIdFromSeb() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.GetActIdFromSeb", game);
    {
        if (seb_ != 0) {
            if (seb_ == 5) {
                return 2;
            }
            if (seb_ == 14) {
                return 4;
            }
            if (seb_ == 1) {
                return 6;
            }
            if (seb_ == 2) {
                return 6;
            }
            if (seb_ == 4) {
                return 6;
            }
            if (seb_ == 3) {
                return 6;
            }
            if (seb_ == 11) {
                return 6;
            }
            if (seb_ == 12) {
                return 6;
            }
        }
        return 0;
    }
}

// M:game.Player.SetMoveDirectBox(System.Int32)
void Player::SetMoveDirectBox(pls::cs::Int32 direct8) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.SetMoveDirectBox(System.Int32)", game);
    {
        for (pls::cs::Int32 num = pls::cs::Int32(moveDirectBox.length()) - 1; num >= 1; --num) {
            moveDirectBox[num] = moveDirectBox[num - 1];
        }
        moveDirectBox[0] = direct8;
    }
}

// M:game.Player.ChMoveDirect(System.Int32,System.Int32)
bool Player::ChMoveDirect(pls::cs::Int32 ch_direct, pls::cs::Int32 act_id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.ChMoveDirect(System.Int32,System.Int32)", game);
    {
        pls::cs::Int32 num = 0;
        if (act_id == -1) {
            return true;
        }
        pls::cs::Int32 num2;
        pls::cs::Int32 num3;
        IntArray array = IntArray{};
        if ((((PLS_API(kl_unity_util::BitUtil::Check(flag_, 4))) || (role_ == 0)) || (act_id == 1)) ||
            (act_id == 2)) {
            array = direct_dis_passer;
        } else {
            array = direct_dis_free;
        }
        for (pls::cs::Int32 i = 0; i < moveDirectBox.length(); ++i) {
            ++num;
            if (moveDirectBox[i] == -1) {
                continue;
            }
            if (ch_direct != moveDirectBox[i]) {
                if (ch_direct > moveDirectBox[i]) {
                    num2 = PLS_API(kl_lang::JMath::AbsInt(ch_direct - moveDirectBox[i]));
                    num3 = PLS_API(kl_lang::JMath::AbsInt(ch_direct - (moveDirectBox[i] + 8)));
                } else {
                    num2 = PLS_API(kl_lang::JMath::AbsInt(moveDirectBox[i] - ch_direct));
                    num3 = PLS_API(kl_lang::JMath::AbsInt(moveDirectBox[i] - (ch_direct + 8)));
                }
                if (num2 > num3) {
                    num2 = num3;
                }
                if (array[num2] <= num) {
                    return true;
                }
                return false;
            }
        }
        return true;
    }
}

// M:game.Player.Move(kairo.unity.m3d4.util3d.Vector3D,System.Int32)
void Player::Move(pls::cs::Ref<kl_util3d::Vector3D> go_pos, pls::cs::Int32 act_id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Move(kairo.unity.m3d4.util3d.Vector3D,System.Int32)",
                     game);
    {
        Move(go_pos, act_id, 50, false);
    }
}

// M:game.Player.Move(kairo.unity.m3d4.util3d.Vector3D,System.Int32,System.Int32,System.Boolean)
void Player::Move(pls::cs::Ref<kl_util3d::Vector3D> go_pos, pls::cs::Int32 act_id, pls::cs::Int32 speed_eva,
                  bool isTrainingMove) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Player.Move(kairo.unity.m3d4.util3d.Vector3D,System.Int32,System.Int32,System.Boolean)",
        game);
    {
        Camera::ensure_initialized();

        pls::cs::Single num = pls::cs::Single(PLS_API(kl_lang::JMath::Sqrt(
            (require(go_pos)->x_ - require(pos_)->x_) * (require(go_pos)->x_ - require(pos_)->x_) +
            (require(go_pos)->z_ - require(pos_)->z_) * (require(go_pos)->z_ - require(pos_)->z_))));
        if (num == 0.0f) {
            return;
        }
        pls::cs::Single num2 = pls::cs::Single(PLS_API(kl_lang::JMath::Sqrt(
            (require(go_pos)->x_ - require(pos_)->x_) * (require(go_pos)->x_ - require(pos_)->x_))));
        pls::cs::Single num3 = pls::cs::Single(PLS_API(kl_lang::JMath::Sqrt(
            (require(go_pos)->x_ - require(pos_)->x_) * (require(go_pos)->x_ - require(pos_)->x_) +
            (require(go_pos)->z_ - require(pos_)->z_) * (require(go_pos)->z_ - require(pos_)->z_))));
        pls::cs::Single num4 =
            (require(go_pos)->x_ - require(pos_)->x_) * (require(go_pos)->x_ - require(pos_)->x_);
        pls::cs::Single num5 = num4 / (num2 * num3);
        pls::cs::Int32 num6 = 0;
        if (num5 >= GameUtil::Cos(22)) {
            num6 = 0;
        } else if (num5 >= GameUtil::Cos(67)) {
            if (require(go_pos)->z_ > require(pos_)->z_) {
                num6 = 1;
            } else {
                num6 = 7;
            }
        } else if (num5 >= GameUtil::Cos(112)) {
            if (require(go_pos)->z_ > require(pos_)->z_) {
                num6 = 2;
            } else {
                num6 = 6;
            }
        } else if (num5 >= GameUtil::Cos(157)) {
            if (require(go_pos)->z_ > require(pos_)->z_) {
                num6 = 3;
            } else {
                num6 = 5;
            }
        } else {
            num6 = 4;
        }
        if (!ChMoveDirect(num6, act_id)) {
            SetMoveDirectBox(-1);
            return;
        }
        SetMoveDirectBox(num6);
        pls::cs::Single value = data::PlayerData::GetSpeed(this, speed_eva);
        if (isTrainingMove) {
            value = 10.0f;
        }
        value = data::PlayerData::AuraUpdate(this, value, 2);
        if (act_id == 3) {
            value *= 0.85f;
        }
        if (act_id == -1 && speed_eva == 50) {
            value *= 0.5f;
        }
        PLS_API(require(old_pos)->Set(pos_));
        require(v_)->x_ = (require(go_pos)->x_ - require(pos_)->x_) * value / num;
        require(v_)->z_ = (require(go_pos)->z_ - require(pos_)->z_) * value / num;
        require(pos_)->x_ = require(pos_)->x_ + require(v_)->x_;
        require(pos_)->z_ = require(pos_)->z_ + require(v_)->z_;
        pls::cs::Int32 num7 = 0;
        Camera::ConvertGlobalToScreen(v_, Player::temp_direct_s());
        {
            auto cs_target = Player::temp_direct_s();
            auto cs_index = 0;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = Camera::MAP_SCREEN_BASE_POS()[0];
            pls::cs::Int32 cs_value = cs_old - cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = Player::temp_direct_s();
            auto cs_index = 1;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = Camera::MAP_SCREEN_BASE_POS()[1];
            pls::cs::Int32 cs_value = cs_old - cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        if (Player::temp_direct_s()[0] > 0) {
            if (Player::temp_direct_s()[1] > 0) {
                num7 = 0;
            } else {
                num7 = 1;
            }
        } else {
            if (Player::temp_direct_s()[1] > 0) {
                num7 = 3;
            } else {
                num7 = 2;
            }
        }
        for (pls::cs::Int32 num8 = pls::cs::Int32(directBox_.length()) - 1; num8 >= 1; --num8) {
            directBox_[num8] = directBox_[num8 - 1];
        }
        directBox_[0] = num7;
        pls::cs::Int32 num9 = num7;
        for (pls::cs::Int32 i = 1; i < directBox_.length(); ++i) {
            if (num9 != directBox_[i]) {
                break;
            }
            if (i == pls::cs::Int32(directBox_.length()) - 1) {
                direct_ = num9;
            }
        }
    }
}

// M:game.Player.Act_freeRun
void Player::Act_freeRun() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Act_freeRun", game);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Ref<Player> passer =
            require(require(Player::udat_())->teams_.get_Item(team_id_))->GetPasser();
        if (require(require(Player::udat_())->teams_.get_Item(team_id_))->ChWhichChargeTern() &&
            !is_null(passer)) {
            pls::cs::Single x = pls::cs::Single(
                PLS_API(kl_lang::JMath::Sqrt((require(pos_)->x_ - require(require(passer)->pos_)->x_) *
                                                 (require(pos_)->x_ - require(require(passer)->pos_)->x_) +
                                             (require(pos_)->z_ - require(require(passer)->pos_)->z_) *
                                                 (require(pos_)->z_ - require(require(passer)->pos_)->z_))));
            Player::w_freeRun_afrMostEvaPos() =
                GameUtil::RateConvertFloat(x, 160.0f, 80.0f, 0.6f, 0.9f, true);
            Player::w_freeRun_formation() = 1.0f - Player::w_freeRun_afrMostEvaPos();
        }
        {
            auto cs_receiver = require(Player::udat_())->teams_.get_Item(team_id_);
            IntArray cs_arg1 = mostEvaAddres_;
            require(cs_receiver)->SetMostEvaAddressFromMoveArea(this, cs_arg1, false);
        }
        Camera::ConvertAddressToGlobal(mostEvaAddres_[0], mostEvaAddres_[1], Player::temp_afr_mostEvaPos());
        require(goalPos_)->x_ =
            (Player::w_freeRun_formation() * require(formationGo_)->x_ +
             Player::w_freeRun_afrMostEvaPos() * require(Player::temp_afr_mostEvaPos())->x_) /
            (Player::w_freeRun_formation() + Player::w_freeRun_afrMostEvaPos());
        require(goalPos_)->z_ =
            (Player::w_freeRun_formation() * require(formationGo_)->z_ +
             Player::w_freeRun_afrMostEvaPos() * require(Player::temp_afr_mostEvaPos())->z_) /
            (Player::w_freeRun_formation() + Player::w_freeRun_afrMostEvaPos());
        IntArray collisionData = require(Player::udat_())->GetCollisionData(0, 0);
        IntArray collisionData2 = require(Player::udat_())->GetCollisionData(1, 2);
        if ([&]() -> bool {
                pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(pos_)->x_;
                    auto cs_right = pls::cs::Single(collisionData[0]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(pos_)->z_;
                    auto cs_right = pls::cs::Single(collisionData[1]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg2 = collisionData[2];
                pls::cs::Single cs_arg3 = collisionData[3];
                pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(goalPos_)->x_;
                    auto cs_right = pls::cs::Single(collisionData2[0]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(goalPos_)->z_;
                    auto cs_right = pls::cs::Single(collisionData2[1]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg6 = collisionData2[2];
                pls::cs::Single cs_arg7 = collisionData2[3];
                return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                    cs_arg6, cs_arg7, true);
            }()) {
            if (notMoveCnt_++ > 10) {
                SetPlayerDirect(require(require(Player::udat_())->ball_)->pos_);
            }
            return;
        }
        notMoveCnt_ = 0;
        IntArray2 coatEva = GetCoatEva();
        pls::cs::Int32 speed_eva = 0;
        if (formation_address_[4][1] >= 0 && ([&]() -> bool {
                auto cs_left = formation_address_[4][1];
                auto cs_right = coatEva.length();
                return cs_left < cs_right;
            }()) &&
            formation_address_[4][0] >= 0 && ([&]() -> bool {
                auto cs_left = formation_address_[4][0];
                auto cs_right = coatEva[0].length();
                return cs_left < cs_right;
            }())) {
            speed_eva = pls::cs::to_int32(
                ((([&]() -> pls::cs::FloatEval {
                     auto cs_left =
                         Player::w_freeRun_formation() *
                         pls::cs::Single(coatEva[formation_address_[4][1]][formation_address_[4][0]]);
                     auto cs_right = Player::w_freeRun_afrMostEvaPos() *
                                     pls::cs::Single(coatEva[mostEvaAddres_[1]][mostEvaAddres_[0]]);
                     return cs_left + cs_right;
                 }())) /
                 (Player::w_freeRun_formation() + Player::w_freeRun_afrMostEvaPos())));
        } else if (kl_cfg::Config::DEBUG_CMD()) {
            PLS_API(kl_unity_util::Log::Info(literal(u"■Player.java act_freeRun() エラー"),
                                             pls::cs::Ref<pls::cs::ExceptionObject>{}));
        }
        Move(goalPos_, 0, speed_eva, false);
    }
}

// M:game.Player.Act_receive
void Player::Act_receive() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Act_receive", game);
    {
        if (ChHeading()) {
            Proc_head();
            pls::cs::Single headJampDis = data::PlayerData::GetHeadJampDis(this);
            PLS_API(require(seb_startPos)->Set(pos_));
            {
                auto cs_target = seb_v;
                pls::cs::Single cs_value = GameUtil::SetVStop(headJampDis, Player::SEB_H_HEAD_JAMPTIME() / 2);
                require(cs_target)->y_ = cs_value;
            }
            seb_ay = GameUtil::SetAStop(headJampDis, Player::SEB_H_HEAD_JAMPTIME() / 2);
            return;
        }
        if (PLS_API(kl_unity_util::BitUtil::Check(require(require(Player::udat_())->ball_)->flag_, 16))) {
            PLS_API(require(goalPos_)->Set(require(require(Player::udat_())->ball_)->fallPos_));
            if (PLS_API(kl_unity_util::BitUtil::Check(require(require(Player::udat_())->ball_)->flag_, 16)) &&
                require(require(Player::udat_())->ball_)->boundNum_ == 0) {
                if (PLS_API(
                        kl_unity_util::BitUtil::Check(require(require(Player::udat_())->ball_)->flag_, 64))) {
                    PLS_API(require(goalPos_)->Set(require(require(Player::udat_())->ball_)->receiverPos_));
                } else if (require(require(Player::udat_())->ball_)->boundNum_ > 0) {
                    PLS_API(require(goalPos_)->Set(require(require(Player::udat_())->ball_)->pos_));
                } else if (require(require(require(Player::udat_())->ball_)->a_)->y_ == -0.25f) {
                    if ([&]() -> bool {
                            auto cs_left = require(require(Player::udat_())->ball_)->fallTime_ -
                                           require(require(Player::udat_())->ball_)->savePosFrame_;
                            auto cs_right = Player::SEB_H_HEAD_ANIME()[1] / 2;
                            return cs_left < cs_right;
                        }()) {
                        PLS_API(require(goalPos_)->Set(require(require(Player::udat_())->ball_)->pos_));
                    } else {
                        PLS_API(
                            require(goalPos_)->Set(require(require(Player::udat_())->ball_)->receiverPos_));
                    }
                } else {
                    PLS_API(require(goalPos_)->Set(require(require(Player::udat_())->ball_)->fallPos_));
                }
            }
            if (require(goalPos_)->x_ < -450.0f) {
                require(goalPos_)->x_ = -450.0f;
            }
            if (require(goalPos_)->x_ > 450.0f) {
                require(goalPos_)->x_ = 450.0f;
            }
            if (require(goalPos_)->z_ < -900.0f) {
                require(goalPos_)->z_ = -900.0f;
            }
            if (require(goalPos_)->z_ > 900.0f) {
                require(goalPos_)->z_ = 900.0f;
            }
            IntArray collisionData = require(Player::udat_())->GetCollisionData(0, 3);
            IntArray collisionData2 = require(Player::udat_())->GetCollisionData(1, 3);
            if ([&]() -> bool {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 = collisionData[2];
                    pls::cs::Single cs_arg3 = collisionData[3];
                    pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(goalPos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData2[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(goalPos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData2[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg6 = collisionData2[2];
                    pls::cs::Single cs_arg7 = collisionData2[3];
                    return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                        cs_arg6, cs_arg7, true);
                }()) {
                SetPlayerDirect(require(require(Player::udat_())->ball_)->pos_);
                return;
            }
            {
                Move(goalPos_, 1);
            }
            return;
        }
        {
            pls::cs::Ref<Ball> ball_ = require(Player::udat_())->ball_;
            if (PLS_API(pls::cs::Single(kl_lang::JMath::Abs(require(require(ball_)->v_)->x_))) < 0.01f ||
                PLS_API(pls::cs::Single(kl_lang::JMath::Abs(require(require(ball_)->v_)->z_))) < 0.01f) {
                Move(require(ball_)->pos_, 1);
            } else {
                pls::cs::Single num = require(require(ball_)->v_)->z_ * require(require(ball_)->pos_)->x_ /
                                          require(require(ball_)->v_)->x_ -
                                      require(require(ball_)->pos_)->z_;
                pls::cs::Single num2 =
                    require(require(ball_)->v_)->x_ * require(pos_)->x_ / require(require(ball_)->v_)->z_ +
                    require(pos_)->z_;
                require(temp_vec)->x_ =
                    (num + num2) / (require(require(ball_)->v_)->x_ / require(require(ball_)->v_)->z_ +
                                    require(require(ball_)->v_)->z_ / require(require(ball_)->v_)->x_);
                require(temp_vec)->z_ = require(require(ball_)->v_)->z_ * require(temp_vec)->x_ /
                                            require(require(ball_)->v_)->x_ -
                                        num;
                require(require(require(Player::udat_())->ball_)->temp_pos)->x_ =
                    require(require(require(Player::udat_())->ball_)->pos_)->x_ +
                    require(require(require(Player::udat_())->ball_)->v_)->x_ * 3.0f;
                require(require(require(Player::udat_())->ball_)->temp_pos)->z_ =
                    require(require(require(Player::udat_())->ball_)->pos_)->z_ +
                    require(require(require(Player::udat_())->ball_)->v_)->z_ * 3.0f;
                require(require(require(Player::udat_())->ball_)->temp_pos)->x_ =
                    (require(require(require(Player::udat_())->ball_)->temp_pos)->x_ +
                     require(temp_vec)->x_) /
                    2.0f;
                require(require(require(Player::udat_())->ball_)->temp_pos)->z_ =
                    (require(require(require(Player::udat_())->ball_)->temp_pos)->z_ +
                     require(temp_vec)->z_) /
                    2.0f;
                Move(require(require(Player::udat_())->ball_)->temp_pos, 1);
            }
        }
    }
}

// M:game.Player.Act_charge
void Player::Act_charge() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Act_charge", game);
    {
        data::PlayerData::ensure_initialized();

        pls::cs::Ref<Player> passer =
            require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->GetPasser();
        PLS_API(require(old_pos)->Set(pos_));
        if (is_null(passer)) {
            return;
        }
        if (ChSlidingTackleEva(passer)) {
            GameUtil::Sub(require(passer)->pos_, pos_, temp_vec);
            pls::cs::Single num =
                pls::cs::Single(PLS_API(kl_lang::JMath::Sqrt(require(temp_vec)->x_ * require(temp_vec)->x_ +
                                                             require(temp_vec)->z_ * require(temp_vec)->z_)));
            if (num < 0.1f) {
                return;
            }
            PLS_API(require(seb_startPos)->Set(pos_));
            require(seb_v)->x_ = data::PlayerData::SLIDING_SPEED() * require(temp_vec)->x_ / num;
            require(seb_v)->z_ = data::PlayerData::SLIDING_SPEED() * require(temp_vec)->z_ / num;
            Proc_sliding(passer);
            require(Player::apdat_())->PlaySe(11);
            return;
        }
        Move(require(require(Player::udat_())->ball_)->pos_, 2);
        return;
    }
}

// M:game.Player.DebugLogOut
void Player::DebugLogOut() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.DebugLogOut", game);
    {
    }
}

// M:game.Player.Debug_1keyStop
void Player::Debug_1keyStop() {
    Player::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Debug_1keyStop", game);
    {
    }
}

// M:game.Player.GetToThrowInPID
pls::cs::Int32 Player::GetToThrowInPID() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.GetToThrowInPID", game);
    {
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0;
             i < require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.length(); ++i) {
            if (i == p_id_) {
                Player::eva_pass()[i][0] = 0.0f;
                continue;
            }
            pls::cs::Ref<Player> player =
                require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.get_Item(i);
            pls::cs::Int32 num2 = require(player)->eva_receivePos_;
            pls::cs::Int32 num3 = num2;
            pls::cs::Single num4 = pls::cs::Single(
                PLS_API(kl_lang::JMath::Sqrt((require(require(player)->pos_)->x_ - require(pos_)->x_) *
                                                 (require(require(player)->pos_)->x_ - require(pos_)->x_) +
                                             (require(require(player)->pos_)->z_ - require(pos_)->z_) *
                                                 (require(require(player)->pos_)->z_ - require(pos_)->z_))));
            if (num4 > 500.0f) {
                Player::eva_pass()[i][0] = 0.0f;
                continue;
            }
            Player::eva_pass_info()[i][0] = 1;
            num3 = num3 *
                   pls::cs::to_int32(GameUtil::RateConvertFloat(num4, 50.0f, 300.0f, 100.0f, 50.0f, true)) /
                   100;
            bool flag = false;
            for (pls::cs::Int32 j = 0;
                 j < require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->players_.length();
                 ++j) {
                pls::cs::Ref<Player> player2 =
                    require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->players_.get_Item(j);
                if (([&]() -> bool {
                        auto cs_left = address_[0];
                        auto cs_right = require(player2)->address_[0];
                        return cs_left == cs_right;
                    }()) &&
                    ([&]() -> bool {
                        auto cs_left = address_[1];
                        auto cs_right = require(player2)->address_[1];
                        return cs_left == cs_right;
                    }())) {
                    continue;
                }
                if (GameUtil::ChOnLineIntArrayIntArrayIntIntArray(screen_pos_, require(player)->screen_pos_,
                                                                  6, require(player2)->screen_pos_)) {
                    flag = true;
                    break;
                }
            }
            if (flag && Player::eva_pass_info()[i][0] == 1) {
                num3 = num3 * 90 / 100;
            }
            Player::eva_pass()[i][0] = num3;
            ++num;
        }
        pls::cs::Single num5 = 0.0f;
        pls::cs::Int32 num6 = -1;
        for (pls::cs::Int32 k = 0; k < Player::eva_pass().length(); ++k) {
            if (num5 < Player::eva_pass()[k][0]) {
                num5 = Player::eva_pass()[k][0];
                num6 = k;
            }
        }
        if (num6 == -1) {
            num5 = 0.0f;
            for (pls::cs::Int32 l = 1;
                 l < require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.length(); ++l) {
                if (l == p_id_) {
                    continue;
                }
                pls::cs::Ref<Player> player3 =
                    require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.get_Item(l);
                pls::cs::Single num7 = pls::cs::Single(PLS_API(
                    kl_lang::JMath::Sqrt((require(require(player3)->pos_)->x_ - require(pos_)->x_) *
                                             (require(require(player3)->pos_)->x_ - require(pos_)->x_) +
                                         (require(require(player3)->pos_)->z_ - require(pos_)->z_) *
                                             (require(require(player3)->pos_)->z_ - require(pos_)->z_))));
                if (num5 < num7) {
                    num5 = num7;
                    num6 = l;
                }
            }
        }
        return num6;
    }
}

// M:game.Player.GetCoatEva
IntArray2 Player::GetCoatEva() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.GetCoatEva", game);
    {
        pls::cs::Ref<Team> team = require(Player::udat_())->teams_.get_Item(team_id_);
        IntArray2 array = IntArray2{};
        if (require(team)->ChWhichChargeTern()) {
            array = require(team)->coatEva_new_offence;
        } else {
            array = require(team)->coatEva_new_deffence;
        }
        return array;
    }
}

// M:game.Player.ChBodyHitBody(game.Player,game.Player)
bool Player::ChBodyHitBody(pls::cs::Ref<Player> charge_p, pls::cs::Ref<Player> receive_p) {
    Player::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.ChBodyHitBody(game.Player,game.Player)", game);
    {
        data::PlayerData::ensure_initialized();

        bool flag = PLS_API(kl_unity_util::BitUtil::Check(require(charge_p)->flag_, 16));
        pls::cs::Single value = data::PlayerData::CHARGE_RATE_BODY();
        value = data::PlayerData::AuraUpdate(charge_p, value, 4);
        value = data::PlayerData::AuraUpdate(receive_p, value, 6);
        if (pls::cs::Single(GameUtil::Random(1000)) < value || flag) {
            pls::cs::Int32 chargeDamage = data::PlayerData::GetChargeDamage(charge_p, flag);
            chargeDamage = pls::cs::to_int32(data::PlayerData::AuraUpdate(charge_p, chargeDamage, 3));
            chargeDamage = pls::cs::to_int32(data::PlayerData::AuraUpdate(receive_p, chargeDamage, 5));
            {
                auto cs_target = receive_p;
                pls::cs::Int32 cs_value =
                    main::AppData::ClampMin(require(receive_p)->physical_hp_ - chargeDamage, 0);
                require(cs_target)->physical_hp_ = cs_value;
            }
            if (flag) {
                {
                    auto cs_target = charge_p;
                    pls::cs::Int32 cs_value =
                        PLS_API(kl_unity_util::BitUtil::Off(require(charge_p)->flag_, 32));
                    require(cs_target)->flag_ = cs_value;
                }
            }
            return true;
        }
        return false;
    }
}

// M:game.Player.ChTrapOrHeading
bool Player::ChTrapOrHeading() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.ChTrapOrHeading", game);
    {
        bool flag = PLS_API(kl_unity_util::BitUtil::Check(flag_, 64));
        if (flag && !PLS_API(kl_unity_util::BitUtil::Check(flag_, 128))) {
            return false;
        }
        pls::cs::Single num = 20.0f;
        if (flag) {
            num = 40.0f;
        }
        if (require(require(require(Player::udat_())->ball_)->pos_)->y_ < num) {
            IntArray collisionData = require(Player::udat_())->GetCollisionData(0, 0);
            IntArray collisionData2 = require(Player::udat_())->GetCollisionData(1, 1);
            if ([&]() -> bool {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 = collisionData[2];
                    pls::cs::Single cs_arg3 = collisionData[3];
                    pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(require(require(Player::udat_())->ball_)->pos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData2[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(require(require(Player::udat_())->ball_)->pos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData2[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg6 = collisionData2[2];
                    pls::cs::Single cs_arg7 = collisionData2[3];
                    return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                        cs_arg6, cs_arg7, true);
                }()) {
                return true;
            }
        }
        return false;
    }
}

// M:game.Player.Update_moveArea
void Player::Update_moveArea() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Update_moveArea", game);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(Player::temp_moveAreaPos());
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>{});
                return cs_left == cs_right;
            }()) {
            Player::temp_moveAreaPos() =
                pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(formation_param_.length());
            for (pls::cs::Int32 i = 0; i < Player::temp_moveAreaPos().length(); ++i) {
                {
                    auto cs_target = Player::temp_moveAreaPos();
                    auto cs_index = i;
                    auto cs_value = kl_util3d::Vector3D::create();
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
        FloatArray fPos_ = require(require(Player::udat_())->teams_.get_Item(team_id_))->fPos_;
        if (team_id_ == 0) {
            for (pls::cs::Int32 j = 0; j < Player::temp_moveAreaPos().length(); ++j) {
                {
                    auto cs_target = Player::temp_moveAreaPos().get_Item(j);
                    pls::cs::Single cs_arg0_155 = formation_param_[j][0];
                    pls::cs::Single cs_arg3_155 = fPos_[0] - fPos_[2] / 2.0f;
                    pls::cs::Single cs_arg4_155 = fPos_[0] + fPos_[2] / 2.0f;
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(cs_arg0_155, 0.0f, 100.0f, cs_arg3_155, cs_arg4_155, true);
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = Player::temp_moveAreaPos().get_Item(j);
                    pls::cs::Single cs_arg0_156 = formation_param_[j][1];
                    pls::cs::Single cs_arg3_156 = fPos_[1] - fPos_[3] / 2.0f;
                    pls::cs::Single cs_arg4_156 = fPos_[1] + fPos_[3] / 2.0f;
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(cs_arg0_156, 0.0f, 100.0f, cs_arg3_156, cs_arg4_156, true);
                    require(cs_target)->z_ = cs_value;
                }
            }
        } else {
            for (pls::cs::Int32 k = 0; k < Player::temp_moveAreaPos().length(); ++k) {
                {
                    auto cs_target = Player::temp_moveAreaPos().get_Item(k);
                    pls::cs::Single cs_arg0_157 = formation_param_[k][0];
                    pls::cs::Single cs_arg3_157 = fPos_[0] + fPos_[2] / 2.0f;
                    pls::cs::Single cs_arg4_157 = fPos_[0] - fPos_[2] / 2.0f;
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(cs_arg0_157, 0.0f, 100.0f, cs_arg3_157, cs_arg4_157, true);
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = Player::temp_moveAreaPos().get_Item(k);
                    pls::cs::Single cs_arg0_158 = formation_param_[k][1];
                    pls::cs::Single cs_arg3_158 = fPos_[1] + fPos_[3] / 2.0f;
                    pls::cs::Single cs_arg4_158 = fPos_[1] - fPos_[3] / 2.0f;
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(cs_arg0_158, 0.0f, 100.0f, cs_arg3_158, cs_arg4_158, true);
                    require(cs_target)->z_ = cs_value;
                }
            }
        }
        for (pls::cs::Int32 l = 0; l < Player::temp_moveAreaPos().length(); ++l) {
            {
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Player::temp_moveAreaPos().get_Item(l);
                IntArray cs_arg1 = formation_address_[l];
                Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
            }
        }
    }
}

// M:game.Player.Script
bool Player::Script() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Script", game);
    {
        while (PLS_API(kl_java_util::Vector_2_Size(require(script_))) > 0) {
            insertScriptIndex_ = 1;
            {
                auto cs_flow_103 = pls::cs::run_finally(
                    [&]() -> pls::cs::Flow<bool> {
                        {
                            IntArray firstScript = GetFirstScript();
                            pls::cs::Int32 recoveredScriptCommand = firstScript[0];
                            if ((recoveredScriptCommand == 1)) {
                                if (firstScript[2] == 1) {
                                    flag_ = PLS_API(kl_unity_util::BitUtil::On(flag_, 1));
                                }
                                firstScript[1]--;
                                if (firstScript[1] <= 0) {
                                    PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                    return pls::cs::flow_continue(62394);
                                }
                            } else if ((recoveredScriptCommand == 2)) {
                                ChangeState(firstScript[1]);
                                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                return pls::cs::flow_continue(62394);
                            } else if ((recoveredScriptCommand == 3)) {
                                seb_ = firstScript[1];
                                sebCnt_ = 0;
                                frame_ = 0;
                                flag_ = PLS_API(kl_unity_util::BitUtil::On(flag_, 2));
                                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                return pls::cs::flow_continue(62394);
                            } else if ((recoveredScriptCommand == 4)) {
                                direct_ = firstScript[1];
                                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                return pls::cs::flow_continue(62394);
                            } else if ((recoveredScriptCommand == 5)) {
                                flag_ = firstScript[1];
                                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                return pls::cs::flow_continue(62394);
                            } else if ((recoveredScriptCommand == 6)) {
                                flag_ = PLS_API(([&]() -> pls::cs::Int32 {
                                    pls::cs::Int32 cs_arg0 = flag_;
                                    pls::cs::Int32 cs_arg1 = firstScript[1];
                                    return kl_unity_util::BitUtil::On(cs_arg0, cs_arg1);
                                }()));
                                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                return pls::cs::flow_continue(62394);
                            } else if ((recoveredScriptCommand == 7)) {
                                flag_ = PLS_API(([&]() -> pls::cs::Int32 {
                                    pls::cs::Int32 cs_arg0 = flag_;
                                    pls::cs::Int32 cs_arg1 = firstScript[1];
                                    return kl_unity_util::BitUtil::Off(cs_arg0, cs_arg1);
                                }()));
                                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                return pls::cs::flow_continue(62394);
                            } else if ((recoveredScriptCommand == 9)) {
                                if ([&]() -> bool {
                                        auto cs_left = sebCnt_;
                                        auto cs_right = Player::SEB_H_SAVING_ANIME()[0];
                                        return cs_left < cs_right;
                                    }()) {
                                    require(pos_)->x_ = require(seb_startPos)->x_ +
                                                        require(seb_v)->x_ * pls::cs::Single(sebCnt_);
                                    require(pos_)->z_ = require(seb_startPos)->z_ +
                                                        require(seb_v)->z_ * pls::cs::Single(sebCnt_);
                                    require(pos_)->y_ = require(seb_v)->y_ * pls::cs::Single(sebCnt_) +
                                                        seb_ay * pls::cs::Single(sebCnt_) *
                                                            pls::cs::Single((sebCnt_ + 1)) / 2.0f;
                                } else {
                                    {
                                        auto cs_target = pos_;
                                        auto cs_left_159 = ([&]() -> pls::cs::FloatEval {
                                            auto cs_left_159 = require(seb_startPos)->x_;
                                            auto cs_right_159 = ([&]() -> pls::cs::FloatEval {
                                                auto cs_left_159 = require(seb_v)->x_;
                                                auto cs_right_159 =
                                                    pls::cs::Single(Player::SEB_H_SAVING_ANIME()[0]);
                                                return cs_left_159 * cs_right_159;
                                            }());
                                            return cs_left_159 + cs_right_159;
                                        }());
                                        auto cs_right_159 = ([&]() -> pls::cs::FloatEval {
                                            auto cs_left_159 = require(seb_v)->x_ / 3.0f;
                                            auto cs_right_159 = pls::cs::Single((([&]() -> pls::cs::Int32 {
                                                auto cs_left_159 = sebCnt_;
                                                auto cs_right_159 = Player::SEB_H_SAVING_ANIME()[0];
                                                return cs_left_159 - cs_right_159;
                                            }())));
                                            return cs_left_159 * cs_right_159;
                                        }());
                                        pls::cs::Single cs_value =
                                            pls::cs::FloatEval(cs_left_159 + cs_right_159);
                                        require(cs_target)->x_ = cs_value;
                                    }
                                    {
                                        auto cs_target = pos_;
                                        auto cs_left_160 = ([&]() -> pls::cs::FloatEval {
                                            auto cs_left_160 = require(seb_startPos)->z_;
                                            auto cs_right_160 = ([&]() -> pls::cs::FloatEval {
                                                auto cs_left_160 = require(seb_v)->z_;
                                                auto cs_right_160 =
                                                    pls::cs::Single(Player::SEB_H_SAVING_ANIME()[0]);
                                                return cs_left_160 * cs_right_160;
                                            }());
                                            return cs_left_160 + cs_right_160;
                                        }());
                                        auto cs_right_160 = ([&]() -> pls::cs::FloatEval {
                                            auto cs_left_160 = require(seb_v)->z_ / 3.0f;
                                            auto cs_right_160 = pls::cs::Single((([&]() -> pls::cs::Int32 {
                                                auto cs_left_160 = sebCnt_;
                                                auto cs_right_160 = Player::SEB_H_SAVING_ANIME()[0];
                                                return cs_left_160 - cs_right_160;
                                            }())));
                                            return cs_left_160 * cs_right_160;
                                        }());
                                        pls::cs::Single cs_value =
                                            pls::cs::FloatEval(cs_left_160 + cs_right_160);
                                        require(cs_target)->z_ = cs_value;
                                    }
                                    require(pos_)->y_ = require(seb_v)->y_ * pls::cs::Single(sebCnt_) +
                                                        seb_ay * pls::cs::Single(sebCnt_) *
                                                            pls::cs::Single((sebCnt_ + 1)) / 2.0f;
                                    if (require(pos_)->y_ < 0.0f) {
                                        require(pos_)->y_ = 0.0f;
                                    }
                                }
                                if ([&]() -> bool {
                                        auto cs_left = sebCnt_;
                                        auto cs_right = Player::SEB_H_SAVING_ANIME()
                                            [pls::cs::Int32(Player::SEB_H_SAVING_ANIME().length()) - 1];
                                        return cs_left >= cs_right;
                                    }()) {
                                    flag_ = PLS_API(kl_unity_util::BitUtil::Off(flag_, 8));
                                    PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                    return pls::cs::flow_continue(62394);
                                }
                            } else if ((recoveredScriptCommand == 10)) {
                                if ([&]() -> bool {
                                        auto cs_left = sebCnt_;
                                        auto cs_right = Player::SEB_H_SLIDING_ANIME()[0];
                                        return cs_left < cs_right;
                                    }()) {
                                    require(pos_)->x_ = require(pos_)->x_ + require(seb_v)->x_;
                                    require(pos_)->z_ = require(pos_)->z_ + require(seb_v)->z_;
                                }
                                if ([&]() -> bool {
                                        auto cs_left = sebCnt_;
                                        auto cs_right = Player::SEB_H_SLIDING_ANIME()
                                            [pls::cs::Int32(Player::SEB_H_SLIDING_ANIME().length()) - 1];
                                        return cs_left >= cs_right;
                                    }()) {
                                    flag_ = PLS_API(kl_unity_util::BitUtil::Off(flag_, 48));
                                    PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                    return pls::cs::flow_continue(62394);
                                }
                            } else if ((recoveredScriptCommand == 11)) {
                                require(pos_)->y_ =
                                    require(seb_v)->y_ * pls::cs::Single(sebCnt_) +
                                    seb_ay * pls::cs::Single(sebCnt_) * pls::cs::Single((sebCnt_ + 1)) / 2.0f;
                                if ([&]() -> bool {
                                        auto cs_left = sebCnt_;
                                        auto cs_right = Player::SEB_H_HEAD_ANIME()
                                            [pls::cs::Int32(Player::SEB_H_HEAD_ANIME().length()) - 1];
                                        return cs_left >= cs_right;
                                    }()) {
                                    flag_ = PLS_API(kl_unity_util::BitUtil::Off(flag_, 64));
                                    if (require(pos_)->y_ < 0.0f) {
                                        require(pos_)->y_ = 0.0f;
                                    }
                                    PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                    return pls::cs::flow_continue(62394);
                                }
                            } else if ((recoveredScriptCommand == 12)) {
                                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                return pls::cs::flow_continue(62394);
                            } else if ((recoveredScriptCommand == 13)) {
                                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                return pls::cs::flow_continue(62394);
                            } else if ((recoveredScriptCommand == 14)) {
                                {
                                    auto cs_left_161 = sebCnt_;
                                    auto cs_right_161 = Player::SEB_H_GOALGLAD_ANIME()[1];
                                    pls::cs::Int32 num = cs_left_161 % cs_right_161;
                                    pls::cs::Single num2 =
                                        GameUtil::SetVStop(8.0f, Player::SEB_H_GOALGLAD_ANIME()[0] / 2);
                                    pls::cs::Single num3 =
                                        GameUtil::SetAStop(8.0f, Player::SEB_H_GOALGLAD_ANIME()[0] / 2);
                                    require(pos_)->y_ =
                                        num2 * pls::cs::Single(num) +
                                        num3 * pls::cs::Single(num) * pls::cs::Single((num + 1)) / 2.0f;
                                    if (require(pos_)->y_ < 0.0f) {
                                        require(pos_)->y_ = 0.0f;
                                    }
                                }
                            } else if ((recoveredScriptCommand == 15)) {
                                PLS_API(kl_java_util::Vector_2_RemoveElementAt(require(script_), 0));
                                return pls::cs::flow_continue(62394);
                            }
                            return pls::cs::flow_break(62394);
                        }
                        return {};
                    },
                    [&]() { insertScriptIndex_ = -1; });
                if (cs_flow_103.is_continue(62394))
                    continue;
                if (cs_flow_103.is_break(62394))
                    break;
            }
        }
        return false;
    }
}

// M:game.Player.GetFirstScript
IntArray Player::GetFirstScript() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.GetFirstScript", game);
    {
        if (PLS_API(kl_java_util::Vector_2_Size(require(script_))) == 0) {
            return IntArray{};
        }
        return pls::cs::unbox<IntArray>(PLS_API(kl_java_util::Vector_2_FirstElement(require(script_))));
    }
}

// M:game.Player.ClearScript
void Player::ClearScript() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.ClearScript", game);
    {
        PLS_API(kl_java_util::Vector_2_RemoveAllElements(require(script_)));
        if (insertScriptIndex_ != -1) {
            insertScriptIndex_ = 0;
        }
    }
}

// M:game.Player.AddCommandMove(System.Int32)
void Player::AddCommandMove(pls::cs::Int32 moveNode_id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandMove(System.Int32)", game);
    {
        AddCommand(IntArray::from({0, moveNode_id}));
    }
}

// M:game.Player.AddCommandWait(System.Int32,System.Boolean)
void Player::AddCommandWait(pls::cs::Int32 wait, bool flg_disp) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandWait(System.Int32,System.Boolean)", game);
    {
        AddCommand(IntArray::from({1, wait, (flg_disp) ? 0 : 1}));
    }
}

// M:game.Player.AddCommandWait(System.Int32)
void Player::AddCommandWait(pls::cs::Int32 wait) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandWait(System.Int32)", game);
    {
        AddCommandWait(wait, true);
    }
}

// M:game.Player.AddCommandWaitStop(System.Int32)
void Player::AddCommandWaitStop(pls::cs::Int32 wait) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandWaitStop(System.Int32)", game);
    {
        AddCommandFlagOff(2);
        AddCommandWait(wait, true);
        AddCommandFlagOn(2);
    }
}

// M:game.Player.AddCommandChangeState(System.Int32)
void Player::AddCommandChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandChangeState(System.Int32)", game);
    {
        AddCommand(IntArray::from({2, state}));
    }
}

// M:game.Player.AddCommandChangeSeb(System.Int32)
void Player::AddCommandChangeSeb(pls::cs::Int32 seb) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandChangeSeb(System.Int32)", game);
    {
        AddCommand(IntArray::from({3, seb}));
    }
}

// M:game.Player.AddCommandChangeDirect(System.Int32)
void Player::AddCommandChangeDirect(pls::cs::Int32 direct) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandChangeDirect(System.Int32)", game);
    {
        AddCommand(IntArray::from({4, direct}));
    }
}

// M:game.Player.AddCommandFlag(System.Int32)
void Player::AddCommandFlag(pls::cs::Int32 flag) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandFlag(System.Int32)", game);
    {
        AddCommand(IntArray::from({5, flag}));
    }
}

// M:game.Player.AddCommandFlagOn(System.Int32)
void Player::AddCommandFlagOn(pls::cs::Int32 bits) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandFlagOn(System.Int32)", game);
    {
        AddCommand(IntArray::from({6, bits}));
    }
}

// M:game.Player.AddCommandFlagOff(System.Int32)
void Player::AddCommandFlagOff(pls::cs::Int32 bits) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandFlagOff(System.Int32)", game);
    {
        AddCommand(IntArray::from({7, bits}));
    }
}

// M:game.Player.AddCommandSaving
void Player::AddCommandSaving() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandSaving", game);
    {
        AddCommand(IntArray::from({9}));
    }
}

// M:game.Player.AddCommandSliding
void Player::AddCommandSliding() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandSliding", game);
    {
        AddCommand(IntArray::from({10}));
    }
}

// M:game.Player.AddCommandHead
void Player::AddCommandHead() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandHead", game);
    {
        AddCommand(IntArray::from({11}));
    }
}

// M:game.Player.AddCommandVolley
void Player::AddCommandVolley() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandVolley", game);
    {
        AddCommand(IntArray::from({12}));
    }
}

// M:game.Player.AddCommandThrowIn
void Player::AddCommandThrowIn() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandThrowIn", game);
    {
        AddCommand(IntArray::from({13}));
    }
}

// M:game.Player.AddCommandGoalGlad
void Player::AddCommandGoalGlad() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandGoalGlad", game);
    {
        AddCommand(IntArray::from({14}));
    }
}

// M:game.Player.AddCommandGoalSad
void Player::AddCommandGoalSad() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommandGoalSad", game);
    {
        AddCommand(IntArray::from({15}));
    }
}

// M:game.Player.AddCommand(System.Int32[])
void Player::AddCommand(IntArray script) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.AddCommand(System.Int32[])", game);
    {
        PLS_API(kl_java_util::Vector_2_AddElement(require(script_), pls::cs::box(script)));
    }
}

// M:game.Player.ChangeState(System.Int32)
void Player::ChangeState(pls::cs::Int32 next_state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.ChangeState(System.Int32)", game);
    {
        state_ = next_state;
        stateCnt_ = 0;
        frame_ = 0;
    }
}

// M:game.Player.SetDrawParam(System.Int32,System.Int32)
pls::cs::Int32 Player::SetDrawParam(pls::cs::Int32 seb, pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.SetDrawParam(System.Int32,System.Int32)", game);
    {
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = 0;
        pls::cs::Ref<data::PlayerData> playerData = require(Player::apdat_())->pData_.get_Item(pData_id_);
        num = require(playerData)->faceImg_;
        pls::cs::Ref<data::TeamData> teamData = require(Player::apdat_())->tData_.get_Item(tData_id_);
        num2 = require(teamData)->bodyImg_;
        return SetDrawParam(num, num2, seb, frame);
    }
}

// M:game.Player.SetDrawParam(System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Int32 Player::SetDrawParam(pls::cs::Int32 head_id, pls::cs::Int32 body_id, pls::cs::Int32 seb,
                                    pls::cs::Int32 frame) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.Player.SetDrawParam(System.Int32,System.Int32,System.Int32,System.Int32)", game);
    {
        UserData::ensure_initialized();

        head_id += 300;
        body_id += 100;
        if (role_ == 0) {
            if (tData_id_ != -1) {
                body_id = require(require(Player::apdat_())->tData_.get_Item(tData_id_))->keeperImg_ + 200;
            } else {
                if (is_null(Player::udat_())) {
                    Player::udat_() = UserData::GetInstance();
                }
                body_id = 200 + UserData::UNIFORM_KEEPER()[require(Player::udat_())->selectUniform_];
            }
        }
        bool flag = false;
        if (body_id >= 200) {
            flag = true;
        }
        if (flag &&
            (seb == 2 || seb == 4 || seb == 5 || seb == 6 || seb == 7 || seb == 8 || seb == 9 || seb == 13)) {
            return 0;
        }
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = 0;
        pls::cs::Int32 num3 = 0;
        pls::cs::Int32 num4 = body_id;
        pls::cs::Int32 num5 = 0;
        pls::cs::Int32 num6 = 0;
        pls::cs::Int32 num7 = 0;
        pls::cs::Int32 num8 = 0;
        pls::cs::Int32 num9 = head_id;
        pls::cs::Int32 num10 = 0;
        pls::cs::Int32 num11 = sebCnt_;
        if (!PLS_API(kl_unity_util::BitUtil::Check(flag_, 2))) {
            num11 = 0;
        }
        bool flag2 = true;
        if (direct_ == 0 || direct_ == 3) {
            flag2 = false;
        }
        if ((seb == 0)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 52 + direct_;
            num5 = num11 % (Player::SEB_H_WALK_ASPEED() * 4) / Player::SEB_H_WALK_ASPEED();
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
            if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 256))) {
                num3 = 36 + direct_;
                num5 = 0;
                num = Player::body_off()[4][0];
                num2 = Player::body_off()[4][1];
                num6 = num + Player::head_off()[4][direct_][num5][0];
                num7 = num2 + Player::head_off()[4][direct_][num5][1];
                flag2 = false;
            }
        } else if ((seb == 1)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 24 + direct_;
            if (flag) {
                num3 = 60 + direct_;
            }
            if ([&]() -> bool {
                    auto cs_left =
                        num11 %
                        Player::SEB_H_KICK_ANIME()[pls::cs::Int32(Player::SEB_H_KICK_ANIME().length()) - 1];
                    auto cs_right = Player::SEB_H_KICK_ANIME()[0];
                    return cs_left < cs_right;
                }()) {
                num5 = 0;
            } else if ([&]() -> bool {
                           auto cs_left =
                               num11 % Player::SEB_H_KICK_ANIME()[pls::cs::Int32(
                                                                      Player::SEB_H_KICK_ANIME().length()) -
                                                                  1];
                           auto cs_right = Player::SEB_H_KICK_ANIME()[1];
                           return cs_left < cs_right;
                       }()) {
                num5 = 1;
            } else if ([&]() -> bool {
                           auto cs_left =
                               num11 % Player::SEB_H_KICK_ANIME()[pls::cs::Int32(
                                                                      Player::SEB_H_KICK_ANIME().length()) -
                                                                  1];
                           auto cs_right = Player::SEB_H_KICK_ANIME()[2];
                           return cs_left < cs_right;
                       }()) {
                num5 = 2;
            }
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
        } else if ((seb == 14)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 56 + direct_;
            num5 = team_id_;
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
            if ((direct_ == 0) || (direct_ == 2)) {

            } else {
                if ((direct_ == 1)) {
                    num10 = ((8 + team_id_));
                } else {
                    num10 = ((11 - team_id_));
                }
                flag2 = false;
            }
            if (num10 == 2) {
                flag2 = false;
            }
        } else if ((seb == 5)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 32 + direct_;
            if ([&]() -> bool {
                    auto cs_left =
                        num11 %
                        Player::SEB_H_SLIDING_ANIME()[pls::cs::Int32(Player::SEB_H_SLIDING_ANIME().length()) -
                                                      1];
                    auto cs_right = Player::SEB_H_SLIDING_ANIME()[0];
                    return cs_left < cs_right;
                }()) {
                num5 = 0;
            } else if ([&]() -> bool {
                           auto cs_left = num11 %
                                          Player::SEB_H_SLIDING_ANIME()
                                              [pls::cs::Int32(Player::SEB_H_SLIDING_ANIME().length()) - 1];
                           auto cs_right = Player::SEB_H_SLIDING_ANIME()[1];
                           return cs_left < cs_right;
                       }()) {
                num5 = 1;
            }
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
        } else if ((seb == 2)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 20 + direct_;
            if ([&]() -> bool {
                    auto cs_left =
                        num11 %
                        Player::SEB_H_HEAD_ANIME()[pls::cs::Int32(Player::SEB_H_HEAD_ANIME().length()) - 1];
                    auto cs_right = Player::SEB_H_HEAD_ANIME()[0];
                    return cs_left < cs_right;
                }()) {
                num5 = 0;
            } else if ([&]() -> bool {
                           auto cs_left =
                               num11 % Player::SEB_H_HEAD_ANIME()[pls::cs::Int32(
                                                                      Player::SEB_H_HEAD_ANIME().length()) -
                                                                  1];
                           auto cs_right = Player::SEB_H_HEAD_ANIME()[1];
                           return cs_left < cs_right;
                       }()) {
                num5 = 1;
            }
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
            if (num5 == 1) {
                num10 += 12;
            }
        } else if ((seb == 4)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 36 + direct_;
            if ([&]() -> bool {
                    auto cs_left =
                        num11 %
                        Player::SEB_H_THROWIN_ANIME()[pls::cs::Int32(Player::SEB_H_THROWIN_ANIME().length()) -
                                                      1];
                    auto cs_right = Player::SEB_H_THROWIN_ANIME()[0];
                    return cs_left < cs_right;
                }()) {
                num5 = 0;
            } else if ([&]() -> bool {
                           auto cs_left = num11 %
                                          Player::SEB_H_THROWIN_ANIME()
                                              [pls::cs::Int32(Player::SEB_H_THROWIN_ANIME().length()) - 1];
                           auto cs_right = Player::SEB_H_THROWIN_ANIME()[1];
                           return cs_left < cs_right;
                       }()) {
                num5 = 1;
            }
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
            if (num5 == 0 && (direct_ == 0 || direct_ == 3)) {
                flag2 = false;
            }
        } else if ((seb == 3)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 4 + direct_;
            if (flag) {
                num3 = 64 + direct_;
            }
            if ([&]() -> bool {
                    auto cs_left = num11 % Player::SEB_H_GOALGLAD_ANIME()
                                               [pls::cs::Int32(Player::SEB_H_GOALGLAD_ANIME().length()) - 1];
                    auto cs_right = Player::SEB_H_GOALGLAD_ANIME()[0];
                    return cs_left < cs_right;
                }()) {
                num5 = 0;
            } else if ([&]() -> bool {
                           auto cs_left = num11 %
                                          Player::SEB_H_GOALGLAD_ANIME()
                                              [pls::cs::Int32(Player::SEB_H_GOALGLAD_ANIME().length()) - 1];
                           auto cs_right = Player::SEB_H_GOALGLAD_ANIME()[1];
                           return cs_left < cs_right;
                       }()) {
                num5 = 1;
            }
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            if (num5 == 0) {
                num10 = (direct_ + 4);
            } else {
                num10 = direct_;
            }
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
            if (num5 == 0 && (direct_ == 0 || direct_ == 3)) {
                flag2 = false;
            }
        } else if ((seb == 11)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 16 + direct_;
            if (flag) {
                num3 = 72 + direct_;
            }
            num5 = 0;
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_ + 16;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
        } else if ((seb == 12)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 0 + direct_;
            if (flag) {
                num3 = 76 + direct_;
            }
            num5 = 0;
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
        } else if ((seb == 6)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 40 + direct_;
            if ([&]() -> bool {
                    auto cs_left =
                        num11 %
                        Player::SEB_H_TRAP1_ANIME()[pls::cs::Int32(Player::SEB_H_TRAP1_ANIME().length()) - 1];
                    auto cs_right = Player::SEB_H_TRAP1_ANIME()[0];
                    return cs_left < cs_right;
                }()) {
                num5 = 0;
            } else if ([&]() -> bool {
                           auto cs_left =
                               num11 % Player::SEB_H_TRAP1_ANIME()[pls::cs::Int32(
                                                                       Player::SEB_H_TRAP1_ANIME().length()) -
                                                                   1];
                           auto cs_right = Player::SEB_H_TRAP1_ANIME()[1];
                           return cs_left < cs_right;
                       }()) {
                num5 = 1;
            }
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
        } else if ((seb == 7)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 44 + direct_;
            if ([&]() -> bool {
                    auto cs_left =
                        num11 %
                        Player::SEB_H_TRAP2_ANIME()[pls::cs::Int32(Player::SEB_H_TRAP2_ANIME().length()) - 1];
                    auto cs_right = Player::SEB_H_TRAP2_ANIME()[0];
                    return cs_left < cs_right;
                }()) {
                num5 = 0;
            } else if ([&]() -> bool {
                           auto cs_left =
                               num11 % Player::SEB_H_TRAP2_ANIME()[pls::cs::Int32(
                                                                       Player::SEB_H_TRAP2_ANIME().length()) -
                                                                   1];
                           auto cs_right = Player::SEB_H_TRAP2_ANIME()[1];
                           return cs_left < cs_right;
                       }()) {
                num5 = 1;
            }
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
        } else if ((seb == 8)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 8 + direct_;
            num5 = 0;
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_ + 4;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
            flag2 = false;
        } else if ((seb == 9)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 12 + direct_;
            if ([&]() -> bool {
                    auto cs_left = num11 % Player::SEB_H_GOALGLAD2_ANIME()
                                               [pls::cs::Int32(Player::SEB_H_GOALGLAD2_ANIME().length()) - 1];
                    auto cs_right = Player::SEB_H_GOALGLAD2_ANIME()[0];
                    return cs_left < cs_right;
                }()) {
                num5 = 0;
            } else if ([&]() -> bool {
                           auto cs_left = num11 %
                                          Player::SEB_H_GOALGLAD2_ANIME()
                                              [pls::cs::Int32(Player::SEB_H_GOALGLAD2_ANIME().length()) - 1];
                           auto cs_right = Player::SEB_H_GOALGLAD2_ANIME()[1];
                           return cs_left < cs_right;
                       }()) {
                num5 = 1;
            } else if ([&]() -> bool {
                           auto cs_left = num11 %
                                          Player::SEB_H_GOALGLAD2_ANIME()
                                              [pls::cs::Int32(Player::SEB_H_GOALGLAD2_ANIME().length()) - 1];
                           auto cs_right = Player::SEB_H_GOALGLAD2_ANIME()[2];
                           return cs_left < cs_right;
                       }()) {
                num5 = 2;
            } else if ([&]() -> bool {
                           auto cs_left = num11 %
                                          Player::SEB_H_GOALGLAD2_ANIME()
                                              [pls::cs::Int32(Player::SEB_H_GOALGLAD2_ANIME().length()) - 1];
                           auto cs_right = Player::SEB_H_GOALGLAD2_ANIME()[3];
                           return cs_left < cs_right;
                       }()) {
                num5 = 3;
            }
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_ + 4;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
        } else if ((seb == 10)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 28 + direct_;
            if (flag) {
                num3 = 68 + direct_;
            }
            num5 = num11 % (Player::SEB_H_WALK_ASPEED() * 4) / Player::SEB_H_WALK_ASPEED();
            if (frame != -1) {
                num5 = frame;
            }
            if (num5 % 2 == 1) {
                --num2;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
        } else if ((seb == 13)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 48 + direct_;
            num5 = 0;
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            num10 = direct_;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
        } else if ((seb == 15)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 80;
            num5 = 0;
            if (frame_ == 1) {
                num5 = 1;
            }
            num8 = 0;
            num10 = 20;
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
        } else if ((seb == 16)) {
            num = Player::body_off()[seb][0];
            num2 = Player::body_off()[seb][1];
            num4 = body_id;
            num3 = 81 + direct_;
            if ([&]() -> bool {
                    auto cs_left = num11 % Player::SEB_H_GOALGLAD_ANIME()
                                               [pls::cs::Int32(Player::SEB_H_GOALGLAD_ANIME().length()) - 1];
                    auto cs_right = Player::SEB_H_GOALGLAD_ANIME()[0];
                    return cs_left < cs_right;
                }()) {
                num5 = 0;
            } else if ([&]() -> bool {
                           auto cs_left = num11 %
                                          Player::SEB_H_GOALGLAD_ANIME()
                                              [pls::cs::Int32(Player::SEB_H_GOALGLAD_ANIME().length()) - 1];
                           auto cs_right = Player::SEB_H_GOALGLAD_ANIME()[1];
                           return cs_left < cs_right;
                       }()) {
                num5 = 1;
            }
            if (frame != -1) {
                num5 = frame;
            }
            num8 = 0;
            if (num5 == 0) {
                num10 = (direct_ + 4);
            } else {
                num10 = direct_;
            }
            num6 = num + Player::head_off()[seb][direct_][num5][0];
            num7 = num2 + Player::head_off()[seb][direct_][num5][1];
            if (num5 == 0 && (direct_ == 0 || direct_ == 3)) {
                flag2 = false;
            }
        }
        draw_param[0] = num6;
        draw_param[1] = num7;
        draw_param[2] = num8;
        draw_param[3] = num9;
        draw_param[4] = num10;
        draw_param[5] = num;
        draw_param[6] = num2;
        draw_param[7] = num3;
        draw_param[8] = num4;
        draw_param[9] = num5;
        draw_param[10] = 0;
        if (flag2) {
            return 0;
        }
        return 1;
    }
}

// M:game.Player.Draw(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Boolean)
void Player::Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                  pls::cs::Int32 layer_id, bool isSoccerForm) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Player.Draw(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Boolean)",
        game);
    {
        data::PlayerData::ensure_initialized();
        form::SoccerForm::ensure_initialized();

        if (((!is_null(require(require(Player::apdat_())->camera)->subPlayer_) &&
              pData_id_ == require(require(require(Player::apdat_())->camera)->subPlayer_)->pData_id_) &&
             obj_type_ == 1) ||
            ((!is_null(require(require(Player::apdat_())->camera)->subSvisor_) && obj_type_ == 2))) {
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(Player::apdat_())->resCom2_)->img.get_Item(139);
                pls::cs::Single cs_arg1 = x + draw_param[5] - 5;
                pls::cs::Single cs_arg2 = y + draw_param[6] - 28;
                require(g)->DrawImage(cs_arg0, cs_arg1, cs_arg2);
            }()));
            PLS_API(([&]() -> void {
                pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                    require(require(Player::apdat_())->resCom2_)->img.get_Item(138);
                pls::cs::Single cs_arg1 = x + draw_param[5] - 8;
                pls::cs::Single cs_arg2 = y + draw_param[6] - 4;
                require(g)->DrawImage(cs_arg0, cs_arg1, cs_arg2);
            }()));
        }
        if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 262144))) {
            pls::cs::Int32 frame = frame_ % 12 / 3;
            {
                auto cs_receiver = Player::apdat_();
                pls::cs::Int32 cs_arg1 = x + draw_param[5];
                pls::cs::Int32 cs_arg2 = y + draw_param[6];
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(Player::apdat_())->resCom2_)->seb.get_Item(68);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(Player::apdat_())->resCom2_)->img.get_Item(76);
                require(cs_receiver)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, frame);
            }
        }
        if (layer_id == 0) {
            {
                auto cs_receiver = Player::apdat_();
                pls::cs::Int32 cs_arg1 = x + draw_param[5];
                pls::cs::Int32 cs_arg2 = y + draw_param[6];
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(Player::apdat_())->resHuman2_)->seb.get_Item(draw_param[7]);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(Player::apdat_())->resHuman2_)->img.get_Item(draw_param[8]);
                pls::cs::Int32 cs_arg5 = draw_param[9];
                require(cs_receiver)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }
            {
                auto cs_receiver = Player::apdat_();
                pls::cs::Int32 cs_arg1 = x + draw_param[0];
                pls::cs::Int32 cs_arg2 = y + draw_param[1];
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(Player::apdat_())->resHumanHead_)->seb.get_Item(draw_param[2]);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(Player::apdat_())->resHumanHead_)->img.get_Item(draw_param[3]);
                pls::cs::Int32 cs_arg5 = draw_param[4];
                require(cs_receiver)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }
        } else {
            {
                auto cs_receiver = Player::apdat_();
                pls::cs::Int32 cs_arg1 = x + draw_param[0];
                pls::cs::Int32 cs_arg2 = y + draw_param[1];
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(Player::apdat_())->resHumanHead_)->seb.get_Item(draw_param[2]);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(Player::apdat_())->resHumanHead_)->img.get_Item(draw_param[3]);
                pls::cs::Int32 cs_arg5 = draw_param[4];
                require(cs_receiver)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }
            {
                auto cs_receiver = Player::apdat_();
                pls::cs::Int32 cs_arg1 = x + draw_param[5];
                pls::cs::Int32 cs_arg2 = y + draw_param[6];
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                    require(require(Player::apdat_())->resHuman2_)->seb.get_Item(draw_param[7]);
                pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                    require(require(Player::apdat_())->resHuman2_)->img.get_Item(draw_param[8]);
                pls::cs::Int32 cs_arg5 = draw_param[9];
                require(cs_receiver)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }
        }
        if (isSoccerForm && (PLS_API(kl_unity_util::BitUtil::Check(flag_, 4)) || actId_ == 1) &&
            require(require(Player::udat_())->gm_)->state_ == 0) {
            pls::cs::Int32 physicalHpMax = data::PlayerData::GetPhysicalHpMax(this);
            if (physical_hp_ < physicalHpMax) {
                pls::cs::Int32 num = -27;
                pls::cs::Int32 num2 = GameUtil::RateConvert(physicalHpMax, data::PlayerData::PHYSICALHP_MIN(),
                                                            data::PlayerData::PHYSICALHP_MAX(), 8, 26, true);
                pls::cs::Int32 num3 = 4;
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(41, 14, 0))));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = x + draw_param[5] - num2 / 2;
                    pls::cs::Single cs_arg1 = y + draw_param[6] + num;
                    require(g)->DrawRect(cs_arg0, cs_arg1, num2 - 1, num3 - 1);
                }()));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(117, 21, 0))));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = x + draw_param[5] - num2 / 2 + 1;
                    pls::cs::Single cs_arg1 = y + draw_param[6] + num + 1;
                    require(g)->FillRect(cs_arg0, cs_arg1, num2 - 2, num3 - 2);
                }()));
                pls::cs::Int32 num4 =
                    GameUtil::RateConvert(physical_hp_, physicalHpMax, 0, num2 - 2, 0, true);
                PLS_API(([&]() -> void {
                    pls::cs::Int32 cs_arg0 = PLS_API(pls::kairo::Graphics::GetColorOfRGB(
                        255, GameUtil::RateConvert(physical_hp_, physicalHpMax, 0, 255, 0, true), 0));
                    require(g)->SetColor(cs_arg0);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::Single cs_arg0 = x + draw_param[5] - num2 / 2 + 1;
                    pls::cs::Single cs_arg1 = y + draw_param[6] + num + 1;
                    require(g)->FillRect(cs_arg0, cs_arg1, num4, num3 - 2);
                }()));
            }
        }
        if (isSoccerForm && form::SoccerForm::SHOW_DEBUGDRAW2() == 1) {
            if (team_id_ == 0) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 0))));
            } else {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 255))));
            }
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 = ([&]() {
                    auto cs_left = pls::cs::String(u"");
                    auto cs_right = integer_string(coliState_);
                    return pls::cs::String::concat(cs_left, cs_right);
                }());
                pls::cs::Single cs_arg1 = x + draw_param[5];
                pls::cs::Single cs_arg2 = y + draw_param[6] - 40;
                require(g)->DrawString(cs_arg0, cs_arg1, cs_arg2);
            }()));
        }
    }
}

// M:game.Player.Draw(kairo.unity.ui.Graphics,System.Int32)
void Player::Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 index) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Draw(kairo.unity.ui.Graphics,System.Int32)", game);
    {
        form::SoccerForm::ensure_initialized();

        if (PLS_API(kl_unity_util::BitUtil::Check(flag_, 1))) {
            return;
        }
        Camera::ConvertGlobalToCamera(pos_, camera_pos);
        require(shadowPos_)->x_ = require(pos_)->x_;
        require(shadowPos_)->z_ = require(pos_)->z_;
        Camera::ConvertGlobalToCamera(shadowPos_, Player::camera_pos_shadow());
        if (!GameUtil::ChRectHitRect(camera_pos[0] - 7, camera_pos[1] - 20, 14, 20,
                                     form::SoccerForm::VIEW_X(), form::SoccerForm::VIEW_Y(),
                                     form::SoccerForm::VIEW_W(), form::SoccerForm::VIEW_H(), false)) {
            return;
        }
        pls::cs::Int32 depth = Player::camera_pos_shadow()[1] + 1;
        bool dark = false;
        pls::cs::Int32 num = flag_;
        pls::cs::Int32 num2 = 1;
        if (seb_ == 11) {
            num2 = 0;
        }
        {
            auto cs_receiver = Player::apdat_();
            pls::cs::Int32 cs_arg6 = Player::camera_pos_shadow()[0];
            pls::cs::Int32 cs_arg7 = Player::camera_pos_shadow()[1] + num2;
            require(cs_receiver)->InsertGameObject(8, 0, depth, 2, 0, 4, cs_arg6, cs_arg7, dark, 0);
        }
        if (seb_ == 5) {
            pls::cs::Int32 num3 = sebCnt_ / 3;
            if (num3 <= 2) {
                Camera::ConvertGlobalToCamera(seb_startPos, Player::camera_pos_sliding());
                {
                    auto cs_receiver = Player::apdat_();
                    pls::cs::Int32 cs_arg6 = Player::camera_pos_sliding()[0];
                    pls::cs::Int32 cs_arg7 = Player::camera_pos_sliding()[1] + num2;
                    require(cs_receiver)
                        ->InsertGameObject(8, 0, depth, 10, 7, num3, cs_arg6, cs_arg7, dark, 0);
                }
            }
        }
        pls::cs::Int32 layer = SetDrawParam(seb_, -1);
        {
            auto cs_receiver = Player::apdat_();
            pls::cs::Int32 cs_arg1 = index + team_id_ * 100;
            pls::cs::Int32 cs_arg6 = camera_pos[0];
            pls::cs::Int32 cs_arg7 = camera_pos[1];
            require(cs_receiver)->InsertGameObject(1, cs_arg1, depth, 0, 0, 0, cs_arg6, cs_arg7, dark, layer);
        }
    }
}

// M:game.Player.Proc_saving
void Player::Proc_saving() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Proc_saving", game);
    {
        flag_ = PLS_API(kl_unity_util::BitUtil::On(flag_, 8));
        AddCommandChangeSeb(14);
        AddCommandSaving();
        AddCommandChangeSeb(0);
    }
}

// M:game.Player.Proc_sliding(game.Player)
void Player::Proc_sliding(pls::cs::Ref<Player> enemy_passerPlayer) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Proc_sliding(game.Player)", game);
    {
        flag_ = PLS_API(kl_unity_util::BitUtil::On(flag_, 48));
        AddCommandChangeSeb(5);
        AddCommandSliding();
        AddCommandFlagOff(48);
        AddCommandChangeSeb(0);
        SetPlayerDirect(require(enemy_passerPlayer)->pos_);
    }
}

// M:game.Player.Proc_head
void Player::Proc_head() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Proc_head", game);
    {
        flag_ = PLS_API(kl_unity_util::BitUtil::On(flag_, 192));
        AddCommandChangeSeb(2);
        AddCommandHead();
        AddCommandChangeSeb(0);
        SetPlayerDirect(require(require(Player::udat_())->ball_)->pos_);
    }
}

// M:game.Player.Proc_down
void Player::Proc_down() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Proc_down", game);
    {
        flag_ = PLS_API(kl_unity_util::BitUtil::On(flag_, 16384));
        AddCommandChangeSeb(12);
        pls::cs::Int32 num = Player::SEB_H_DOWN_ANIME() + 1;
        num = pls::cs::to_int32(data::PlayerData::AuraUpdate(this, num, 9));
        AddCommandWait(num);
        AddCommandFlagOff(16384);
        AddCommandChangeSeb(0);
    }
}

// M:game.Player.SetPlayerDirect(kairo.unity.m3d4.util3d.Vector3D)
void Player::SetPlayerDirect(pls::cs::Ref<kl_util3d::Vector3D> goal_pos) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.SetPlayerDirect(kairo.unity.m3d4.util3d.Vector3D)",
                     game);
    {
        Camera::ensure_initialized();

        require(Player::CH_BALLSUBPOS())->x_ = require(goal_pos)->x_ - require(pos_)->x_;
        require(Player::CH_BALLSUBPOS())->z_ = require(goal_pos)->z_ - require(pos_)->z_;
        Camera::ConvertGlobalToScreen(Player::CH_BALLSUBPOS(), Player::CH_BALL_DIRECT());
        Player::CH_BALL_DIRECT()[0] = ([&]() -> pls::cs::Int32 {
            auto cs_left = Player::CH_BALL_DIRECT()[0];
            auto cs_right = Camera::MAP_SCREEN_BASE_POS()[0];
            return cs_left - cs_right;
        }());
        Player::CH_BALL_DIRECT()[1] = ([&]() -> pls::cs::Int32 {
            auto cs_left = Player::CH_BALL_DIRECT()[1];
            auto cs_right = Camera::MAP_SCREEN_BASE_POS()[1];
            return cs_left - cs_right;
        }());
        if (Player::CH_BALL_DIRECT()[0] > 0) {
            if (Player::CH_BALL_DIRECT()[1] > 0) {
                direct_ = 0;
            } else {
                direct_ = 1;
            }
        } else if (Player::CH_BALL_DIRECT()[1] > 0) {
            direct_ = 3;
        } else {
            direct_ = 2;
        }
    }
}

// M:game.Player.GetShootEva
pls::cs::Int32 Player::GetShootEva() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.GetShootEva", game);
    {
        Map::ensure_initialized();

        pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> array =
            pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>{};
        pls::cs::Single num = 0.0f;
        if (team_id_ == 0) {
            array = Map::GOAL2_GLOBAL_POS();
            num = pls::cs::Single(
                PLS_API(kl_lang::JMath::Sqrt((0.0f - require(pos_)->x_) * (0.0f - require(pos_)->x_) +
                                             (900.0f - require(pos_)->z_) * (900.0f - require(pos_)->z_))));
        } else {
            array = Map::GOAL1_GLOBAL_POS();
            num = pls::cs::Single(PLS_API(
                kl_lang::JMath::Sqrt((0.0f - require(pos_)->x_) * (0.0f - require(pos_)->x_) +
                                     ((-900.0f - require(pos_)->z_)) * ((-900.0f - require(pos_)->z_)))));
        }
        if (num > 600.0f) {
            return 0;
        }
        pls::cs::Int32 num2 =
            pls::cs::to_int32(GameUtil::RateConvertFloat(num, 900.0f, 0.0f, 0.0f, 100.0f, true));
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = array.get_Item(0);
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg1 = pos_;
            GameUtil::Sub(cs_arg0, cs_arg1, Player::vec1());
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = array.get_Item(1);
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg1 = pos_;
            GameUtil::Sub(cs_arg0, cs_arg1, Player::vec2());
        }
        pls::cs::Single num3 = pls::cs::Single(
            PLS_API(kl_lang::JMath::Sqrt(require(Player::vec1())->x_ * require(Player::vec1())->x_ +
                                         require(Player::vec1())->z_ * require(Player::vec1())->z_)));
        pls::cs::Single num4 = pls::cs::Single(
            PLS_API(kl_lang::JMath::Sqrt(require(Player::vec2())->x_ * require(Player::vec2())->x_ +
                                         require(Player::vec2())->z_ * require(Player::vec2())->z_)));
        pls::cs::Single num5 = 0.0f;
        if (num3 * num4 == 0.0f) {
            num5 = 0.0f;
        } else {
            num5 = ((require(Player::vec1())->x_ * require(Player::vec2())->x_ +
                     require(Player::vec1())->z_ * require(Player::vec2())->z_) /
                    (num3 * num4));
        }
        pls::cs::Int32 num6 =
            pls::cs::to_int32(GameUtil::RateConvertFloat(num5, 1.0f, 0.5f, 0.0f, 100.0f, true));
        pls::cs::Int32 num7 = GameUtil::RateConvert(ballHaveTime_, 0, 10, 0, 100, true);
        pls::cs::Int32 physicalHpMax = data::PlayerData::GetPhysicalHpMax(this);
        pls::cs::Int32 num8 = GameUtil::RateConvert(physical_hp_, 0, physicalHpMax, 0, 100, true);
        {
            pls::cs::Int32 recoveredReturn_89626 =
                pls::cs::to_int32(((1.0f * pls::cs::Single(num2) + 1.0f * pls::cs::Single(num6) +
                                    0.3f * pls::cs::Single(num7) + 0.3f * pls::cs::Single(num8)) /
                                   2.6f));
            return recoveredReturn_89626;
        }
    }
}

// M:game.Player.ChSlidingTackleEva(game.Player)
bool Player::ChSlidingTackleEva(pls::cs::Ref<Player> target_player) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.ChSlidingTackleEva(game.Player)", game);
    {
        Map::ensure_initialized();

        pls::cs::Int32 slidingRate = data::PlayerData::GetSlidingRate(this);
        if (GameUtil::Random(1000) < slidingRate) {
            return false;
        }
        pls::cs::Single num = pls::cs::Single(PLS_API(
            kl_lang::JMath::Sqrt((require(require(target_player)->pos_)->x_ - require(pos_)->x_) *
                                     (require(require(target_player)->pos_)->x_ - require(pos_)->x_) +
                                 (require(require(target_player)->pos_)->z_ - require(pos_)->z_) *
                                     (require(require(target_player)->pos_)->z_ - require(pos_)->z_))));
        pls::cs::Int32 num4;
        pls::cs::Int32 num5;
        pls::cs::Int32 num8;
        if (num >= 30.0f && num < 70.0f) {

        } else {
            return false;
        }
        Player::st_a_vec() = Map::DIRECT_VEC().get_Item(require(target_player)->direct_);
        require(Player::st_b_vec())->x_ = require(require(target_player)->pos_)->x_ - require(pos_)->x_;
        require(Player::st_b_vec())->z_ = require(require(target_player)->pos_)->z_ - require(pos_)->z_;
        pls::cs::Single num2 = pls::cs::Single(
            PLS_API(kl_lang::JMath::Sqrt(require(Player::st_a_vec())->x_ * require(Player::st_a_vec())->x_ +
                                         require(Player::st_a_vec())->z_ * require(Player::st_a_vec())->z_)));
        pls::cs::Single num3 = pls::cs::Single(
            PLS_API(kl_lang::JMath::Sqrt(require(Player::st_b_vec())->x_ * require(Player::st_b_vec())->x_ +
                                         require(Player::st_b_vec())->z_ * require(Player::st_b_vec())->z_)));
        if (num2 * num3 == 0.0f) {
            return false;
        }
        pls::cs::Single x = (require(Player::st_a_vec())->x_ * require(Player::st_b_vec())->x_ +
                             require(Player::st_a_vec())->z_ * require(Player::st_b_vec())->z_) /
                            (num2 * num3);
        num4 = pls::cs::to_int32(GameUtil::RateConvertFloat(x, 0.0f, -1.0f, 0.0f, 100.0f, true));
        num5 = 0;
        pls::cs::Int32 num6 = eva_pos_;
        auto cs_receiver_164 = require(Player::udat_())->teams_.get_Item(team_id_);
        pls::cs::Int32 cs_arg1_164 = address_[0];
        pls::cs::Int32 cs_arg2_164 = address_[1];
        pls::cs::Int32 num7 =
            require(cs_receiver_164)->Get_playerPosEva(this, cs_arg1_164, cs_arg2_164, false);
        num8 = GameUtil::RateConvert(num7 - num6, 20, 0, 0, 100, true);
        pls::cs::Int32 num9 = pls::cs::to_int32(
            ((0.6f * pls::cs::Single(num4) + 0.2f * pls::cs::Single(num5) + 0.3f * pls::cs::Single(num8)) /
             1.1f));
        if (num9 > 50) {
            return true;
        }
        return false;
    }
}

// M:game.Player.ChHeading
bool Player::ChHeading() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.ChHeading", game);
    {
        pls::cs::Ref<Ball> ball_ = require(Player::udat_())->ball_;
        if (PLS_API(kl_unity_util::BitUtil::Check(require(ball_)->flag_, 16)) &&
            require(require(Player::udat_())->gm_)->gameState_ != 2) {
            return false;
        }
        if (require(ball_)->boundNum_ > 0) {
            return false;
        }
        if (([&]() -> pls::cs::Int32 {
                auto cs_left = PLS_API(kl_lang::JMath::AbsInt(([&]() -> pls::cs::Int32 {
                    auto cs_left = require(ball_)->address_[0];
                    auto cs_right = address_[0];
                    return cs_left - cs_right;
                }())));
                auto cs_right = PLS_API(kl_lang::JMath::AbsInt(([&]() -> pls::cs::Int32 {
                    auto cs_left = require(ball_)->address_[1];
                    auto cs_right = address_[1];
                    return cs_left - cs_right;
                }())));
                return cs_left + cs_right;
            }()) > 6) {
            return false;
        }
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 1;
             i < require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->players_.length(); ++i) {
            pls::cs::Ref<Player> player =
                require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->players_.get_Item(i);
            if (([&]() -> bool {
                    auto cs_left = require(player)->address_[0];
                    auto cs_right = address_[0];
                    return cs_left == cs_right;
                }()) &&
                ([&]() -> bool {
                    auto cs_left = require(player)->address_[1];
                    auto cs_right = address_[1];
                    return cs_left == cs_right;
                }())) {
                ++num;
                break;
            }
        }
        if (num == 0) {
            return false;
        }
        auto cs_left_162 = GameUtil::Random(2) - 1;
        auto cs_right_162 = Player::SEB_H_HEAD_ANIME()[1] / 2;
        pls::cs::Int32 headingStartFrame = cs_left_162 + cs_right_162;
        pls::cs::Int32 cs_arg0_163 = headingStartFrame;
        pls::cs::Single cs_arg1_163 = data::PlayerData::GetHeadJampDisTop(this);
        pls::cs::Int32 headIndexFormSavePos =
            require(ball_)->GetHeadIndexFormSavePos2(cs_arg0_163, cs_arg1_163);
        if (headIndexFormSavePos == -1) {
            return false;
        }
        pls::cs::Ref<kl_util3d::Vector3D> vector3D = require(ball_)->savePos_.get_Item(headIndexFormSavePos);
        IntArray collisionData = require(Player::udat_())->GetCollisionData(0, 4);
        IntArray collisionData2 = require(Player::udat_())->GetCollisionData(1, 1);
        if ([&]() -> bool {
                pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(pos_)->x_;
                    auto cs_right = pls::cs::Single(collisionData[0]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(pos_)->z_;
                    auto cs_right = pls::cs::Single(collisionData[1]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg2 = collisionData[2];
                pls::cs::Single cs_arg3 = collisionData[3];
                pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(vector3D)->x_;
                    auto cs_right = pls::cs::Single(collisionData2[0]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(vector3D)->z_;
                    auto cs_right = pls::cs::Single(collisionData2[1]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg6 = collisionData2[2];
                pls::cs::Single cs_arg7 = collisionData2[3];
                return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                    cs_arg6, cs_arg7, true);
            }()) {
            return true;
        }
        return false;
    }
}

// M:game.Player.SetEfCharge(game.Player,game.Player,System.Boolean)
void Player::SetEfCharge(pls::cs::Ref<Player> charger, pls::cs::Ref<Player> receiver, bool sliding) {
    Player::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.SetEfCharge(game.Player,game.Player,System.Boolean)",
                     game);
    {
        pls::cs::Int32 sx = ([&]() -> pls::cs::Int32 {
                                auto cs_left = (([&]() -> pls::cs::Int32 {
                                                   auto cs_left = require(charger)->screen_pos_[0];
                                                   auto cs_right = require(receiver)->screen_pos_[0];
                                                   return cs_left + cs_right;
                                               }())) /
                                               2;
                                auto cs_right = GameUtil::Random(10);
                                return cs_left + cs_right;
                            }()) -
                            5;
        pls::cs::Int32 num = ([&]() -> pls::cs::Int32 {
                                 auto cs_left = (([&]() -> pls::cs::Int32 {
                                                    auto cs_left = require(charger)->screen_pos_[1];
                                                    auto cs_right = require(receiver)->screen_pos_[1];
                                                    return cs_left + cs_right;
                                                }())) /
                                                2;
                                 auto cs_right = GameUtil::Random(10);
                                 return cs_left + cs_right;
                             }()) -
                             5 + 5;
        if (sliding) {
            num -= 4;
        }
        require(Player::apdat_())->AddEffectCharge(sx, num);
    }
}
} // namespace game
}
