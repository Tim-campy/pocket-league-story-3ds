// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace game {

struct Player : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"M:game.Player.Script", "M:game.Player.Script"});
    PLS_MANAGED_CLASS("game.Player", Player, pls::cs::Object)
    pls::cs::Int32 obj_type_{};
    pls::cs::Int32 pData_id_{};
    pls::cs::Int32 p_id_{};
    pls::cs::Int32 team_id_{};
    pls::cs::Int32 tData_id_{};
    pls::cs::Int32 role_{};
    pls::cs::Int32 frame_{};
    pls::cs::Int32 direct_{};
    pls::cs::Int32 seb_{};
    pls::cs::Int32 sebCnt_{};
    pls::cs::Int32 faceImg_{};
    pls::cs::Int32 bodyImg_{};
    pls::cs::Ref<generated::java::util::Vector> script_{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> pos_{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> shadowPos_{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> goalPos_{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> formationGo_{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> v_{};
    pls::cs::Array<pls::cs::Int32> formation_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> formation_param_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> formation_address_{};
    pls::cs::Array<pls::cs::Int32> address_{};
    pls::cs::Array<pls::cs::Int32> mostEvaAddres_{};
    pls::cs::Array<pls::cs::Int32> screen_pos_{};
    pls::cs::Int32 flag_{};
    pls::cs::Int32 state_{};
    pls::cs::Int32 stateCnt_{};
    pls::cs::Int32 actId_{};
    pls::cs::Int32 coliState_{};
    pls::cs::Int32 coliBallState_{};
    pls::cs::Int32 eva_pos_{};
    pls::cs::Int32 eva_receivePos_{};
    pls::cs::Int32 ballHaveTime_{};
    pls::cs::Int32 ballDribbleTime_{};
    pls::cs::Int32 notMoveCnt_{};
    pls::cs::Int32 dribbleStopCnt_{};
    pls::cs::Single speed_min{};
    pls::cs::Single speed_max{};
    pls::cs::Single pass_data{};
    pls::cs::Single throuhPass_data{};
    pls::cs::Single longPass_data{};
    pls::cs::Single shoot_min{};
    pls::cs::Single shoot_max{};
    pls::cs::Single shootV0y_min{};
    pls::cs::Single shootV0y_max{};
    pls::cs::Int32 headShootUpRadRate{};
    pls::cs::Int32 chargeDamage_body{};
    pls::cs::Int32 chargeDamage_sliding{};
    pls::cs::Int32 physicalHp_data{};
    pls::cs::Single trapball_data{};
    pls::cs::Int32 catch_data{};
    pls::cs::Single keeperJmap_data{};
    pls::cs::Int32 slidingRate_data{};
    pls::cs::Single jamp_data{};
    pls::cs::Single jamptop_data{};
    pls::cs::Int32 shootTrap_data{};
    pls::cs::Int32 physical_hp_{};
    pls::cs::Array<pls::cs::Int32> directBox_{};
    pls::cs::Array<pls::cs::Int32> draw_param{};
    pls::cs::Array<pls::cs::Int32> camera_pos{};
    pls::cs::Int32 insertScriptIndex_{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> old_pos{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> temp_vec{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> goalStatePos_{};
    pls::cs::Single temp_len{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> seb_startPos{};
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> seb_v{};
    pls::cs::Single seb_ay{};
    pls::cs::Array<pls::cs::Int32> moveDirectBox{};
    pls::cs::Array<pls::cs::Int32> direct_dis_passer{};
    pls::cs::Array<pls::cs::Int32> direct_dis_free{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> DIRECT_RECT{};
    virtual bool Script();
    static constexpr pls::cs::Int32 FLG_NOTDISP = 1;
    static constexpr pls::cs::Int32 FLG_ANIME = 2;
    static constexpr pls::cs::Int32 FLG_HAVEBALL = 4;
    static constexpr pls::cs::Int32 FLG_SAVING = 8;
    static constexpr pls::cs::Int32 FLG_SLIDING = 16;
    static constexpr pls::cs::Int32 FLG_SLIDING_HIT = 32;
    static constexpr pls::cs::Int32 FLG_HEAD = 64;
    static constexpr pls::cs::Int32 FLG_HEAD_HIT = 128;
    static constexpr pls::cs::Int32 FLG_THROWIN = 256;
    static constexpr pls::cs::Int32 FLG_GOALKICK = 512;
    static constexpr pls::cs::Int32 FLG_CONNERKICK = 1024;
    static constexpr pls::cs::Int32 FLG_GOAL_SCORER = 2048;
    static constexpr pls::cs::Int32 FLG_GOAL_SCORER_SUB = 4096;
    static constexpr pls::cs::Int32 FLG_GOAL_ENEMY = 8192;
    static constexpr pls::cs::Int32 FLG_DOWN = 16384;
    static constexpr pls::cs::Int32 FLG_VOLLEY = 32768;
    static constexpr pls::cs::Int32 FLG_VOLLEY_HIT = 65536;
    static constexpr pls::cs::Int32 FLG_TRA_LIFTING = 131072;
    static constexpr pls::cs::Int32 FLG_AURA = 262144;
    static constexpr pls::cs::Int32 DIRECTBOX_MAX = 4;
    static constexpr pls::cs::Int32 SEB_H_WALK = 0;
    static constexpr pls::cs::Int32 SEB_H_KICK = 1;
    static constexpr pls::cs::Int32 SEB_H_HEAD = 2;
    static constexpr pls::cs::Int32 SEB_H_GOAL_GLAD0 = 3;
    static constexpr pls::cs::Int32 SEB_H_THROWIN = 4;
    static constexpr pls::cs::Int32 SEB_H_SLIDING = 5;
    static constexpr pls::cs::Int32 SEB_H_TRAP1 = 6;
    static constexpr pls::cs::Int32 SEB_H_TRAP2 = 7;
    static constexpr pls::cs::Int32 SEB_H_GOAL_GLAD1 = 8;
    static constexpr pls::cs::Int32 SEB_H_GOAL_GLAD2 = 9;
    static constexpr pls::cs::Int32 SEB_H_RUN = 10;
    static constexpr pls::cs::Int32 SEB_H_GOAL_SAD = 11;
    static constexpr pls::cs::Int32 SEB_H_DOWN = 12;
    static constexpr pls::cs::Int32 SEB_H_VOLLEY = 13;
    static constexpr pls::cs::Int32 SEB_H_SAVING = 14;
    static constexpr pls::cs::Int32 SEB_H_FRONT = 15;
    static constexpr pls::cs::Int32 SEB_H_GOAL_GLAD0_SV = 16;
    static constexpr pls::cs::Int32 SEB_H_END = 17;
    static constexpr pls::cs::Single SEB_H_SAVING_DISY = 10.0f;
    static constexpr pls::cs::Int32 DRAW_HEAD_OX = 0;
    static constexpr pls::cs::Int32 DRAW_HEAD_OY = 1;
    static constexpr pls::cs::Int32 DRAW_HEAD_SEB = 2;
    static constexpr pls::cs::Int32 DRAW_HEAD_IMG = 3;
    static constexpr pls::cs::Int32 DRAW_HEAD_F = 4;
    static constexpr pls::cs::Int32 DRAW_BODY_OX = 5;
    static constexpr pls::cs::Int32 DRAW_BODY_OY = 6;
    static constexpr pls::cs::Int32 DRAW_BODY_SEB = 7;
    static constexpr pls::cs::Int32 DRAW_BODY_IMG = 8;
    static constexpr pls::cs::Int32 DRAW_BODY_F = 9;
    static constexpr pls::cs::Int32 DRAW_HAT_IMG = 10;
    static constexpr pls::cs::Int32 LAYER_HEAD_FRONT = 0;
    static constexpr pls::cs::Int32 LAYER_HEAD_BACK = 1;
    static constexpr pls::cs::Int32 IMG_W = 14;
    static constexpr pls::cs::Int32 IMG_H = 20;
    static constexpr pls::cs::Int32 SCR_MOVE = 0;
    static constexpr pls::cs::Int32 SCR_WAIT = 1;
    static constexpr pls::cs::Int32 SCR_CHANGE_STATE = 2;
    static constexpr pls::cs::Int32 SCR_CHANGE_SEB = 3;
    static constexpr pls::cs::Int32 SCR_CHANGE_DIRECT = 4;
    static constexpr pls::cs::Int32 SCR_FLAG = 5;
    static constexpr pls::cs::Int32 SCR_FLAG_ON = 6;
    static constexpr pls::cs::Int32 SCR_FLAG_OFF = 7;
    static constexpr pls::cs::Int32 SCR_KICK = 8;
    static constexpr pls::cs::Int32 SCR_SAVING = 9;
    static constexpr pls::cs::Int32 SCR_SLIDING = 10;
    static constexpr pls::cs::Int32 SCR_HEAD = 11;
    static constexpr pls::cs::Int32 SCR_VOLLEY = 12;
    static constexpr pls::cs::Int32 SCR_THROWIN = 13;
    static constexpr pls::cs::Int32 SCR_GOAL_GLAD = 14;
    static constexpr pls::cs::Int32 SCR_GOAL_SAD = 15;
    static constexpr pls::cs::Int32 SCR_DOWN = 16;
    static constexpr pls::cs::Int32 ACTID_FREERUN = 0;
    static constexpr pls::cs::Int32 ACTID_RECEIVEBALL = 1;
    static constexpr pls::cs::Int32 ACTID_CHARGE = 2;
    static constexpr pls::cs::Int32 ACTID_DRIBBLE = 3;
    static constexpr pls::cs::Int32 ACTID_GK = 4;
    static constexpr pls::cs::Int32 ACTID_STOP = 5;
    static constexpr pls::cs::Int32 ACTID_SEB = 6;
    static constexpr pls::cs::Int32 ACTID_KICKOFF_PASS = 7;
    static constexpr pls::cs::Int32 ACTID_THROWIN_PASS = 8;
    static constexpr pls::cs::Int32 ACTID_GOALKICK = 9;
    static constexpr pls::cs::Int32 ACTID_CONNERKICK = 10;
    static constexpr pls::cs::Int32 ACTID_GOAL_SCORER = 11;
    static constexpr pls::cs::Int32 ACTID_GOAL_SCORER_SUB = 12;
    static constexpr pls::cs::Int32 ACTID_GOAL_ENEMY = 13;
    static constexpr pls::cs::Int32 EVA_PASS_INFO_GROUND = 0;
    static constexpr pls::cs::Int32 EVA_PASS_INFO_JAMP = 1;
    static constexpr pls::cs::Int32 EVA_PASS_JAMP_RATE_MIN = 80;
    static constexpr pls::cs::Int32 EVA_PASS_JAMP_RATE_MAX = 95;
    static constexpr pls::cs::Int32 EVA_PASS_JAMP_RATE_SPACE_MIN = 80;
    static constexpr pls::cs::Int32 EVA_PASS_JAMP_RATE_SPACE_MAX = 95;
    static constexpr pls::cs::Int32 OBJTYPE_PLAYER = 0;
    static constexpr pls::cs::Int32 OBJTYPE_TPLAYER = 1;
    static constexpr pls::cs::Int32 OBJTYPE_SVISOR = 2;
    static constexpr pls::cs::Int32 MOVEDIRECTDATA_MAX = 15;
    static constexpr pls::cs::Single w_dis = 1.0f;
    static constexpr pls::cs::Single w_rad = 1.0f;
    static constexpr pls::cs::Single w_waitTime = 0.3f;
    static constexpr pls::cs::Single w_physicalHp = 0.3f;
    static constexpr pls::cs::Single w_direct = 0.6f;
    static constexpr pls::cs::Single w_teamRisk = 0.2f;
    static constexpr pls::cs::Single w_myPosEva = 0.3f;
    static constexpr pls::cs::Int32 EFCHARGE_W = 10;
    static constexpr pls::cs::Int32 EFCHARGE_H = 10;
    void Act_dribble();

    void Act_gk();

    bool Act(pls::cs::Int32 act_id);

    void ChRepetition();

    void Collision();

    void Proc_kick();

    void Proc_throwIn();

    static void ensure_initialized();

    static pls::cs::Int32& actDecide_index();

    static pls::cs::Single& actDecide_max();

    static pls::cs::Ref<main::AppData>& apdat_();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& body_off();

    static pls::cs::Array<pls::cs::Int32>& camera_pos_shadow();

    static pls::cs::Array<pls::cs::Int32>& camera_pos_sliding();

    static pls::cs::Ref<pls::kairo::Canvas>& canvas_();

    static pls::cs::Array<pls::cs::Int32>& CH_BALL_DIRECT();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& CH_BALLSUBPOS();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& chColPos();

    static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>& EF_KEEPER_OFF();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& EF_SHOOT_OFF();

    static pls::cs::Single& eva_centering();

    static pls::cs::Single& eva_clear();

    static pls::cs::Array<pls::cs::Single>& eva_dribble();

    static pls::cs::Array<pls::cs::Array<pls::cs::Single>>& eva_pass();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& eva_pass_info();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& eva_pass_info_onEnemy();

    static pls::cs::Single& eva_shoot();

    static pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>>& head_off();

    static pls::cs::Ref<generated::java::util::Vector>& hitList();

    static pls::cs::Array<pls::cs::Int32>& PLAYER_EFLIST();

    static pls::cs::Array<pls::cs::String>& PLAYER_EFLIST_NAME();

    static pls::cs::Int32& SEB_H_DOWN_ANIME();

    static pls::cs::Array<pls::cs::Int32>& SEB_H_GOALGLAD_ANIME();

    static pls::cs::Array<pls::cs::Int32>& SEB_H_GOALGLAD2_ANIME();

    static pls::cs::Array<pls::cs::Int32>& SEB_H_HEAD_ANIME();

    static pls::cs::Int32& SEB_H_HEAD_JAMPTIME();

    static pls::cs::Array<pls::cs::Int32>& SEB_H_KICK_ANIME();

    static pls::cs::Array<pls::cs::Int32>& SEB_H_SAVING_ANIME();

    static pls::cs::Array<pls::cs::Int32>& SEB_H_SLIDING_ANIME();

    static pls::cs::Array<pls::cs::Int32>& SEB_H_THROWIN_ANIME();

    static pls::cs::Array<pls::cs::Int32>& SEB_H_TRAP1_ANIME();

    static pls::cs::Array<pls::cs::Int32>& SEB_H_TRAP2_ANIME();

    static pls::cs::Array<pls::cs::Int32>& SEB_H_VOLLEY_ANIME();

    static pls::cs::Int32& SEB_H_VOLLEY_JAMPTIME();

    static pls::cs::Int32& SEB_H_WALK_ASPEED();

    static pls::cs::Array<pls::cs::String>& SEB_NAME();

    static pls::cs::Array<pls::cs::Int32>& SEBH_TO_RESHUMANSEB();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& st_a_vec();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& st_b_vec();

    static pls::cs::Array<pls::cs::Int32>& temp_address();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& temp_afr_mostEvaPos();

    static pls::cs::Array<pls::cs::Int32>& temp_afr_mostEvaSPos();

    static pls::cs::Array<pls::cs::Int32>& temp_direct_s();

    static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& temp_moveAreaPos();

    static pls::cs::Ref<UserData>& udat_();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& vec1();

    static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& vec2();

    static pls::cs::Single& w_centering();

    static pls::cs::Single& w_clear();

    static pls::cs::Single& w_dribble();

    static pls::cs::Single& w_freeRun_afrMostEvaPos();

    static pls::cs::Single& w_freeRun_formation();

    static pls::cs::Single& w_pass();

    static pls::cs::Single& w_pass_through();

    static pls::cs::Single& w_shoot();

    static void create_init(pls::cs::Ref<Player> self, pls::cs::Int32 obj_type);

    static pls::cs::Ref<Player> create(pls::cs::Int32 obj_type);

    void Init(pls::cs::Int32 pData_id, pls::cs::Int32 formation_index, pls::cs::Int32 teamId,
              pls::cs::Int32 tDataId);

    void Clear();

    bool Update();

    pls::cs::Int32 DecideAction();

    pls::cs::Int32 GetActIdFromSeb();

    void SetMoveDirectBox(pls::cs::Int32 direct8);

    bool ChMoveDirect(pls::cs::Int32 ch_direct, pls::cs::Int32 act_id);

    void Move(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> go_pos, pls::cs::Int32 act_id,
              pls::cs::Int32 speed_eva, bool isTrainingMove);

    void Move(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> go_pos, pls::cs::Int32 act_id);

    void Act_freeRun();

    void Act_receive();

    void Act_charge();

    void DebugLogOut();

    static void Debug_1keyStop();

    pls::cs::Int32 GetToThrowInPID();

    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> GetCoatEva();

    static bool ChBodyHitBody(pls::cs::Ref<Player> charge_p, pls::cs::Ref<Player> receive_p);

    bool ChTrapOrHeading();

    void Update_moveArea();

    pls::cs::Array<pls::cs::Int32> GetFirstScript();

    void ClearScript();

    void AddCommandMove(pls::cs::Int32 moveNode_id);

    void AddCommandWait(pls::cs::Int32 wait, bool flg_disp);

    void AddCommandWait(pls::cs::Int32 wait);

    void AddCommandWaitStop(pls::cs::Int32 wait);

    void AddCommandChangeState(pls::cs::Int32 state);

    void AddCommandChangeSeb(pls::cs::Int32 seb);

    void AddCommandChangeDirect(pls::cs::Int32 direct);

    void AddCommandFlag(pls::cs::Int32 flag);

    void AddCommandFlagOn(pls::cs::Int32 bits);

    void AddCommandFlagOff(pls::cs::Int32 bits);

    void AddCommandSaving();

    void AddCommandSliding();

    void AddCommandHead();

    void AddCommandVolley();

    void AddCommandThrowIn();

    void AddCommandGoalGlad();

    void AddCommandGoalSad();

    void AddCommand(pls::cs::Array<pls::cs::Int32> script);

    void ChangeState(pls::cs::Int32 next_state);

    pls::cs::Int32 SetDrawParam(pls::cs::Int32 head_id, pls::cs::Int32 body_id, pls::cs::Int32 seb,
                                pls::cs::Int32 frame);

    pls::cs::Int32 SetDrawParam(pls::cs::Int32 seb, pls::cs::Int32 frame);

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
              pls::cs::Int32 layer_id, bool isSoccerForm);

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 index);

    void Proc_saving();

    void Proc_sliding(pls::cs::Ref<Player> enemy_passerPlayer);

    void Proc_head();

    void Proc_down();

    void SetPlayerDirect(pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> goal_pos);

    pls::cs::Int32 GetShootEva();

    bool ChSlidingTackleEva(pls::cs::Ref<Player> target_player);

    bool ChHeading();

    static void SetEfCharge(pls::cs::Ref<Player> charger, pls::cs::Ref<Player> receiver, bool sliding);
};
} // namespace game
}
