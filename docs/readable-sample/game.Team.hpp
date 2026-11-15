// GENERATED (readable mode) by translator/Translator.cs from the reconstructed C#. Do not edit.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace game {

struct Team : pls::cs::Object {
    static bool source_reference_assignable(const std::type_info& target) {
        return target == typeid(Team) || target == typeid(pls::cs::Object) ||
               pls::cs::Object::source_reference_assignable(target);
    }

    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    void release_edges() override;

    std::string managed_delegate_method_id(const std::string& slot) const override {
        return pls::cs::Object::managed_delegate_method_id(slot);
    }

    static std::string source_managed_type_name() { return "game.Team"; }

    std::string managed_type_name() const override { return source_managed_type_name(); }

    pls::cs::Ref<main::AppData> apdat_{};
    pls::cs::Ref<UserData> udat_{};
    std::int32_t team_id_{};
    std::int32_t tDataId_{};
    std::int32_t formationType_{};
    pls::cs::Array<pls::cs::Ref<Player>> players_{};
    std::int32_t lastKickeer_{};
    std::int32_t amefto_pz{};
    std::int32_t amefto_oneChargeTime{};
    pls::cs::Array<float> fPos_{};
    pls::cs::Array<std::int32_t> CORRECT_LINE{};
    pls::cs::Array<std::int32_t> NOW_LINE{};
    pls::cs::Array<std::int32_t> team_policyEva{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> team_eva{};
    pls::cs::Array<pls::cs::Array<float>> team_frect{};
    pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> frect_pos{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> frect_cpos{};
    float startZ_{};
    float goalZ_{};
    std::int32_t chargeNum_{};
    std::int32_t chargeCnt_{};
    std::int32_t eva_risk_{};
    pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>> amefto_goalPos_{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> amefto_cameraPos_{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> amefto_address_{};
    pls::cs::Array<std::int32_t> receiverPIdBox_{};
    pls::cs::Array<float> CEVA_PASSER_MP2{};
    pls::cs::Array<float> CEVA_PASSER_MP2_DIV{};
    pls::cs::Array<float> CEVA_PASSER_MP3{};
    pls::cs::Array<std::int32_t> CEVA_PASSER_AP{};
    pls::cs::Array<std::int32_t> CEVA_PASSER_ENEAP{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva_passer{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva_freeRun{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva_defence{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva_looseBall{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva_passer2{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva_freeRun2{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva_new_offence{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva_new_offence_passer{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva_new_deffence{};
    pls::cs::Ref<generated::java::util::Vector> ballNearPlayer_{};
    pls::cs::Ref<generated::java::util::Vector> players_receive_{};
    bool ternCharge{};
    float w_disBoal{};
    float w_formation{};

    static void ensure_initialized();

    static pls::cs::Array<std::int32_t>& AMEFTO_FRECT_GOALZ();

    static std::int32_t& AMEFTO_ONECHARGETIME_PLAYER();

    static pls::cs::Array<std::int32_t>& AMEFTO_PASSER_COATEVA();

    static pls::cs::Array<std::int32_t>& AMEFTO_PZ();

    static pls::cs::Array<std::int32_t>& ch_ceva();

    static pls::cs::Array<pls::cs::String>& CH_COATEVA_STR();

    static pls::cs::Array<pls::cs::String>& CH_DATA_STR();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& DEAFULT_FORMATION_EVA();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& DEAFULT_FORMATION_EVA_PENALTYAREA();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& FORMATION_KICKOFF();

    static std::int32_t& FORMATION_RATE_DEFFECNE();

    static pls::cs::Array<std::int32_t>& FORMATION_TYPE_RATE();

    static pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>& GOAL_GLAD_AROUND_POS();

    static pls::cs::Array<std::int32_t>& mostEva_address();

    static pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>& PANEL_DIRECT();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_1();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_2();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_3();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_4();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_5();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_6();

    static pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>& PANEL_DIRECT_R();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_R_1();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_R_2();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_R_3();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_R_4();

    static pls::cs::Array<pls::cs::Array<std::int32_t>>& PANEL_DIRECT_R_9BLOCK();

    static float& PRP_W_DIS();

    static float& RPP_W_AROUNDENEMY();

    static float& RPP_W_COATEVASUM();

    static float& RPP_W_DISTOGOAL_NORMAL();

    static float& RPP_W_DISTOGOAL_PAREA();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& team_formationCenterPos();

    static pls::cs::Ref<Team> create();

    static void create_init(pls::cs::Ref<Team> self);

    static void Amefto(pls::cs::Ref<Team> self);

    static void Amefto_start(pls::cs::Ref<Team> self);

    static void Cal_evaCoatAdd(pls::cs::Ref<Team> self, std::int32_t mode,
                               pls::cs::Array<pls::cs::Array<std::int32_t>> data, std::int32_t cx,
                               std::int32_t cy, pls::cs::Array<std::int32_t> add_param);

    static void Cal_evaCoatAdd9block(pls::cs::Ref<Team> self,
                                     pls::cs::Array<pls::cs::Array<std::int32_t>> data, std::int32_t cx,
                                     std::int32_t cy, pls::cs::Array<std::int32_t> add_param);

    static void Cal_evaCoatMulti(pls::cs::Ref<Team> self, std::int32_t mode,
                                 pls::cs::Array<pls::cs::Array<std::int32_t>> data, std::int32_t cx,
                                 std::int32_t cy, pls::cs::Array<float> muliti_param);

    static void Cal_evaCoatMulti9block(pls::cs::Ref<Team> self,
                                       pls::cs::Array<pls::cs::Array<std::int32_t>> data, std::int32_t cx,
                                       std::int32_t cy, pls::cs::Array<float> muliti_param);

    static bool ChPAreaLineOver(pls::cs::Ref<Team> self);

    static bool ChWhichChargeTern(pls::cs::Ref<Team> self);

    static void Collision(pls::cs::Ref<Team> self);

    static void Draw(pls::cs::Ref<Team> self, pls::cs::Ref<pls::kairo::Graphics> g, bool offscreen);

    static std::int32_t Get_playerPosEva(pls::cs::Ref<Team> self, pls::cs::Ref<Player> player,
                                         std::int32_t xi, std::int32_t yi, bool div);

    static std::int32_t Get_playerPosEva(pls::cs::Ref<Team> self, pls::cs::Ref<Player> player,
                                         std::int32_t xi, std::int32_t yi);

    static std::int32_t Get_playerReceivePosEva(pls::cs::Ref<Team> self, pls::cs::Ref<Player> player,
                                                std::int32_t xi, std::int32_t yi);

    static pls::cs::Ref<Player> GetLastKicker(pls::cs::Ref<Team> self);

    static pls::cs::Array<std::int32_t> GetMostEvaAddress(pls::cs::Ref<Team> self,
                                                          pls::cs::Array<pls::cs::Array<std::int32_t>> data,
                                                          std::int32_t cx, std::int32_t cy, std::int32_t num);

    static pls::cs::Ref<Player> GetPasser(pls::cs::Ref<Team> self);

    static std::int32_t GetSum(pls::cs::Ref<Team> self, pls::cs::Array<pls::cs::Array<std::int32_t>> data,
                               std::int32_t cx, std::int32_t cy, bool div);

    static void Init_coatEva(pls::cs::Ref<Team> self);

    static void Init(pls::cs::Ref<Team> self, bool isUserTeam, std::int32_t team_id, std::int32_t tDataId);

    static void SetFormationParam(pls::cs::Ref<Team> self, pls::cs::Ref<Player> player);

    static void SetFormationRectParam(pls::cs::Ref<Team> self);

    static void SetGoalState(pls::cs::Ref<Team> self);

    static void SetMostEvaAddressFromMoveArea_thrughPass(pls::cs::Ref<Team> self, pls::cs::Ref<Player> player,
                                                         pls::cs::Array<std::int32_t> var_out,
                                                         bool isThroughPass);

    static void SetMostEvaAddressFromMoveArea(pls::cs::Ref<Team> self, pls::cs::Ref<Player> player,
                                              pls::cs::Array<std::int32_t> var_out, bool isThroughPass);

    static void SetPosFPos(pls::cs::Ref<Team> self, pls::cs::Ref<Player> player,
                           pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> var_out);

    static void SetPositionConnerKick(pls::cs::Ref<Team> self);

    static void SetPositionGoalKick(pls::cs::Ref<Team> self);

    static void SetPositionKickOff(pls::cs::Ref<Team> self);

    static void SetPositionThrowIn(pls::cs::Ref<Team> self);

    static void SetSortGroundBallNear(pls::cs::Ref<Team> self);

    static void SetSortJampBallNear(pls::cs::Ref<Team> self);

    static void Update(pls::cs::Ref<Team> self);

    static void Update_coatEva(pls::cs::Ref<Team> self);

    static void Update_coatEvaDefence(pls::cs::Ref<Team> self);

    static void Update_coatEvaFreeRun(pls::cs::Ref<Team> self);

    static void Update_coatEvaLooseBall(pls::cs::Ref<Team> self);

    static void Update_coatEvaNewDeffence(pls::cs::Ref<Team> self);

    static void Update_coatEvaNewOffence(pls::cs::Ref<Team> self);

    static void Update_coatEvaPasser(pls::cs::Ref<Team> self);

    static void Update_formationRect2(pls::cs::Ref<Team> self);
};
} // namespace game
} // namespace pls::game
