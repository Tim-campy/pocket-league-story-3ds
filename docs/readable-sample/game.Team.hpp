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
    static constexpr std::int32_t F_X = 0;
    static constexpr std::int32_t F_Y = 1;
    static constexpr std::int32_t F_W = 2;
    static constexpr std::int32_t F_H = 3;
    static constexpr std::int32_t F_END = 4;
    static constexpr std::int32_t ROLE_GK = 0;
    static constexpr std::int32_t ROLE_DF = 1;
    static constexpr std::int32_t ROLE_MF = 2;
    static constexpr std::int32_t ROLE_FW = 3;
    static constexpr std::int32_t ROLE_END = 4;
    static constexpr float TEAM_FRECT_X_MIN = 0.0f;
    static constexpr float TEAM_FRECT_X_MAX = 0.0f;
    static constexpr float TEAM_FRECT_Y_MIN = -1530.0f;
    static constexpr float TEAM_FRECT_Y_MAX = 360.0f;
    static constexpr float TEAM_FRECT_W_MIN = 450.0f;
    static constexpr float TEAM_FRECT_W_MAX = 450.0f;
    static constexpr float TEAM_FRECT_H_MIN = 720.0f;
    static constexpr float TEAM_FRECT_H_MAX = 1260.0f;
    static constexpr float TEAM_FRECT_Y_ADD_CHARGE_MIN = 90.0f;
    static constexpr float TEAM_FRECT_Y_ADD_CHARGE_MAX = 90.0f;
    static constexpr float TEAM_FRECT_Y_ADD_DEFFENCE_MIN = -270.0f;
    static constexpr float TEAM_FRECT_Y_ADD_DEFFENCE_MAX = -270.0f;
    static constexpr float FRECT_FRONT_START_H = 450.0f;
    static constexpr float FRECT_BACK_START_H = 540.0f;
    static constexpr float FRECT_BACK_DEFENCE_H = 450.0f;
    static constexpr std::int32_t AMEFTO_ONECHARGETIME_MIN = 50;
    static constexpr std::int32_t AMEFTO_ONECHARGETIME_MAX = 10;
    static constexpr std::int32_t AMEFTO_PZID_NORMAL = 0;
    static constexpr std::int32_t AMEFTO_PZID_DRIBBLE = 1;
    static constexpr std::int32_t AMEFTO_PZID_LONGPASS = 2;
    static constexpr std::int32_t AMEFTO_PZID_END = 3;
    static constexpr std::int32_t RECIVERPIDBOX_MAX = 5;
    static constexpr float CPM1 = 0.2f;
    static constexpr float CPM2 = 0.4f;
    static constexpr float CPM3 = 0.7f;
    static constexpr std::int32_t COATEVA_ROOT_NUM = 9;
    static constexpr std::int32_t COATEVA_PASSER_BASE = 30;
    static constexpr std::int32_t DEF1 = 100;
    static constexpr std::int32_t DEF2 = 80;
    static constexpr std::int32_t DEF3 = 60;
    static constexpr std::int32_t DEF4 = 40;
    static constexpr std::int32_t DEF5 = 20;
    static constexpr std::int32_t DEF6 = 0;
    static constexpr std::int32_t CALMODE_PYRAMID = 0;
    static constexpr std::int32_t CALMODE_RECT = 1;
    static constexpr std::int32_t CH_CEVA_PASSER_DEFAULT = 0;
    static constexpr std::int32_t CH_CEVA_PASSER_FRINDADD = 1;
    static constexpr std::int32_t CH_CEVA_PASSER_ENDDIV = 2;
    static constexpr std::int32_t CH_CEVA_FREERUN_DEFAULT = 3;
    static constexpr std::int32_t CH_CEVA_FREERUN_ENDDIV = 4;
    static constexpr std::int32_t CH_CEVA_FREERUN_PASSSUPORT = 5;
    static constexpr std::int32_t CH_CEVA_DEFENCE_DEFAULT = 6;
    static constexpr std::int32_t CH_CEVA_DEFENCE_PASSER = 7;
    static constexpr std::int32_t CH_CEVA_DEFENCE_ALLYDIV = 8;
    static constexpr std::int32_t CH_CEVA_LOOSEBALL_DEFAULT = 9;
    static constexpr std::int32_t CH_CEVA_LOOSEBALL_BALLPOS = 10;
    static constexpr std::int32_t CH_CEVA_LOOSEBALL_ALLYDIV = 11;
    static constexpr std::int32_t CH_CEVA_END = 12;
    static constexpr std::int32_t CH_DATA_POSEVA = 0;
    static constexpr std::int32_t CH_DATA_RECEIVEEVA = 1;
    static constexpr std::int32_t CH_DATA_ADDRESS = 2;
    static constexpr std::int32_t CH_DATA_POS = 3;
    static constexpr std::int32_t CH_DATA_FLAG = 4;
    static constexpr std::int32_t CH_DATA_COLISTATE = 5;
    static constexpr std::int32_t CH_DATA_END = 6;
    static constexpr float w_coatEvaSum = 0.7f;
    static constexpr float w_ballLine = 0.3f;
    void SetPositionKickOff();

    void SetPositionThrowIn();

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

    static void create_init(pls::cs::Ref<Team> self);

    static pls::cs::Ref<Team> create();

    void Init(bool isUserTeam, pls::cs::Int32 team_id, pls::cs::Int32 tDataId);

    void Update();

    void Collision();

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g, bool offscreen);

    void SetPosFPos(pls::cs::Ref<Player> player,
                    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> var_out);

    void SetFormationParam(pls::cs::Ref<Player> player);

    void SetFormationRectParam();

    void SetSortGroundBallNear();

    void SetSortJampBallNear();

    void Init_coatEva();

    void Update_coatEva();

    void Update_coatEvaNewOffence();

    void Update_coatEvaNewDeffence();

    void Update_coatEvaPasser();

    void Update_coatEvaFreeRun();

    void Update_coatEvaDefence();

    void Update_coatEvaLooseBall();

    pls::cs::Ref<Player> GetPasser();

    pls::cs::Ref<Player> GetLastKicker();

    std::int32_t GetSum(pls::cs::Array<pls::cs::Array<std::int32_t>> data, pls::cs::Int32 cx,
                        pls::cs::Int32 cy, bool div);

    pls::cs::Array<std::int32_t> GetMostEvaAddress(pls::cs::Array<pls::cs::Array<std::int32_t>> data,
                                                   pls::cs::Int32 cx, pls::cs::Int32 cy, pls::cs::Int32 num);

    void SetMostEvaAddressFromMoveArea(pls::cs::Ref<Player> player, pls::cs::Array<std::int32_t> var_out,
                                       bool isThroughPass);

    void SetMostEvaAddressFromMoveArea_thrughPass(pls::cs::Ref<Player> player,
                                                  pls::cs::Array<std::int32_t> var_out, bool isThroughPass);

    std::int32_t Get_playerPosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi, pls::cs::Int32 yi,
                                  bool div);

    std::int32_t Get_playerPosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi, pls::cs::Int32 yi);

    std::int32_t Get_playerReceivePosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi, pls::cs::Int32 yi);

    void Cal_evaCoatMulti(pls::cs::Int32 mode, pls::cs::Array<pls::cs::Array<std::int32_t>> data,
                          pls::cs::Int32 cx, pls::cs::Int32 cy, pls::cs::Array<float> muliti_param);

    void Cal_evaCoatMulti9block(pls::cs::Array<pls::cs::Array<std::int32_t>> data, pls::cs::Int32 cx,
                                pls::cs::Int32 cy, pls::cs::Array<float> muliti_param);

    void Cal_evaCoatAdd(pls::cs::Int32 mode, pls::cs::Array<pls::cs::Array<std::int32_t>> data,
                        pls::cs::Int32 cx, pls::cs::Int32 cy, pls::cs::Array<std::int32_t> add_param);

    void Cal_evaCoatAdd9block(pls::cs::Array<pls::cs::Array<std::int32_t>> data, pls::cs::Int32 cx,
                              pls::cs::Int32 cy, pls::cs::Array<std::int32_t> add_param);

    void Amefto();

    void Amefto_start();

    void Update_formationRect2();

    void SetPositionGoalKick();

    void SetPositionConnerKick();

    void SetGoalState();

    bool ChWhichChargeTern();

    bool ChPAreaLineOver();
};
} // namespace game
} // namespace pls::game
