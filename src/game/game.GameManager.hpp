// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace game {

struct GameManager : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("game.GameManager", GameManager, pls::cs::Object)
    pls::cs::Int32 frame_{};
    pls::cs::Int32 flag_{};
    pls::cs::Int32 state_{};
    pls::cs::Int32 stateCnt_{};
    pls::cs::Int32 gameState_{};
    pls::cs::Int32 gameStateCnt_{};
    pls::cs::Single gameTime_{};
    pls::cs::Array<pls::cs::Int32> teamId_{};
    pls::cs::Array<pls::cs::Int32> score_{};
    bool halfTime{};
    pls::cs::Int32 homeAway_{};
    pls::cs::Array<pls::cs::Int32> team_formationPage_{};
    pls::cs::Array<pls::cs::Int32> team_potential_{};
    pls::cs::Ref<generated::java::util::Vector> scorerListUserTeam{};
    pls::cs::Int32 time_card{};
    pls::cs::Int32 time_team{};
    pls::cs::Int32 time_pId{};
    pls::cs::Int32 time_animePattern{};
    static constexpr pls::cs::Int32 TIME_CARD_ANIME_NORMAL = 0;
    static constexpr pls::cs::Int32 TIME_CARD_ANIME_DEPRESS = 1;
    static constexpr pls::cs::Int32 TIME_CARD_ANIME_EXCUSE = 2;
    static constexpr pls::cs::Int32 TIME_CARD_ANIME_PANIC = 3;
    static constexpr pls::cs::Int32 TIME_CARD_ANIME_END = 4;
    static constexpr pls::cs::Int32 STATE_MAIN = 0;
    static constexpr pls::cs::Int32 STATE_INITKICKOFF = 1;
    static constexpr pls::cs::Int32 STATE_KICKOFF = 2;
    static constexpr pls::cs::Int32 STATE_THROWIN = 3;
    static constexpr pls::cs::Int32 STATE_GOALKICK = 4;
    static constexpr pls::cs::Int32 STATE_CONNERKICK = 5;
    static constexpr pls::cs::Int32 STATE_TIME = 6;
    static constexpr pls::cs::Int32 STATE_FREEKICK = 7;
    static constexpr pls::cs::Int32 STATE_GOAL = 8;
    static constexpr pls::cs::Int32 STATE_TIMEUP = 9;
    static constexpr pls::cs::Int32 STATE_CARD = 10;
    static constexpr pls::cs::Int32 GAMESTATE_TEAM1_HAVE = 0;
    static constexpr pls::cs::Int32 GAMESTATE_TEAM2_HAVE = 1;
    static constexpr pls::cs::Int32 GAMESTATE_LOOSE_BALL = 2;
    static constexpr pls::cs::Int32 WAIT_KICKOFF = 50;
    static constexpr pls::cs::Int32 WAIT_FK = 50;
    static constexpr pls::cs::Int32 WAIT_TIMEUP = 30;
    static constexpr pls::cs::Int32 FADE_TIME_V = 6;
    static constexpr pls::cs::Int32 COLI_STATE_NOTHING = 0;
    static constexpr pls::cs::Int32 COLI_STATE_T0 = 1;
    static constexpr pls::cs::Int32 COLI_STATE_T1 = 2;
    static constexpr pls::cs::Int32 COLI_STATE_T0_DRIBBLE = 3;
    static constexpr pls::cs::Int32 COLI_STATE_T1_DRIBBLE = 4;
    static constexpr pls::cs::Int32 COLI_STATE_T0_SLIDING = 5;
    static constexpr pls::cs::Int32 COLI_STATE_T1_SLIDING = 6;
    static constexpr pls::cs::Int32 COLI_STATE_T0_RECEIVER = 7;
    static constexpr pls::cs::Int32 COLI_STATE_T1_RECEIVER = 8;
    static constexpr pls::cs::Int32 C_NO = 0;
    static constexpr pls::cs::Int32 C_PO = 1;
    static constexpr pls::cs::Int32 C_PC = 2;
    static constexpr pls::cs::Int32 C_PCB = 3;
    static constexpr pls::cs::Int32 C_SL = 4;
    static constexpr pls::cs::Int32 COLIBALL_STATE_SAVING = 0;
    static constexpr pls::cs::Int32 COLIBALL_STATE_HEADING = 1;
    static constexpr pls::cs::Int32 COLIBALL_STATE_VOLLEY = 2;
    static constexpr pls::cs::Int32 COLIBALL_STATE_TRAP = 3;
    static constexpr pls::cs::Int32 COLIBALL_STATE_NOTHING = 4;
    static constexpr pls::cs::Int32 GAME_HOME = 0;
    static constexpr pls::cs::Int32 GAME_AWAY = 1;
    void Collision_proc(pls::cs::Ref<Player> p1, pls::cs::Ref<Player> p2);

    void CollisionBall_proc();

    void HitShootPlayer(pls::cs::Ref<Ball> ball, pls::cs::Ref<Player> hiter);

    void Update();

    static void ensure_initialized();

    static pls::cs::Single& ADDTIME();

    static pls::cs::Ref<main::AppData>& apdat_();

    static pls::cs::Ref<generated::java::util::Vector>& cBallHitList();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& COLI_PROC_DIAGRAM();

    static pls::cs::Array<pls::cs::String>& GAME_HOMEAWAY_STR();

    static pls::cs::Int32& HALFTIME();

    static pls::cs::Ref<GameManager>& instance();

    static pls::cs::Ref<UserData>& udat_();

    static pls::cs::Array<pls::cs::Int32>& WAIT_CARD();

    static pls::cs::Array<pls::cs::Int32>& WAIT_CK();

    static pls::cs::Array<pls::cs::Int32>& WAIT_GK();

    static pls::cs::Array<pls::cs::Int32>& WAIT_GOAL();

    static pls::cs::Array<pls::cs::Int32>& WAIT_THROWIN();

    static void create_init(pls::cs::Ref<GameManager> self);

    static pls::cs::Ref<GameManager> create();

    static pls::cs::Ref<GameManager> GetInstance();

    void StartSoccerForm(bool isUserBattle);

    void StartSoccerMatch();

    void StartSoccerInitKickOff();

    void StartSoccerKickOff();

    void ChangeState(pls::cs::Int32 next_state);

    void ChangeGameState(pls::cs::Int32 next_state);

    void Draw(pls::cs::Ref<pls::kairo::Graphics> g);

    void Draw_timeMessageWindow(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 oy, pls::cs::Int32 W,
                                pls::cs::Int32 index, pls::cs::Int32 centerX);

    void SetBallTeam(pls::cs::Int32 team_id);

    void SetBattleTeamId(pls::cs::Int32 tId1, pls::cs::Int32 tId2, pls::cs::Int32 homeAway);

    void Collision();

    void Collision_updateCollisionState(pls::cs::Ref<Player> player);

    void Collision_updateCollisionBallState(pls::cs::Ref<Player> player);
};
} // namespace game
}
