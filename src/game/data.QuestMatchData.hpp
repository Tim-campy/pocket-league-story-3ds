// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace data {

struct QuestMatchData : BaseData {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("data.QuestMatchData", QuestMatchData, BaseData)
    pls::cs::String name_{};
    pls::cs::Int32 matchForm_{};
    pls::cs::Array<pls::cs::Int32> matchEnemy_{};
    pls::cs::Int32 matchLeague_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> execsScript_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> execsScript2_{};
    pls::cs::Int32 victoryPrize_{};
    pls::cs::Int32 matchPrize_{};
    pls::cs::Int32 joinCost_{};
    pls::cs::Int32 schedule_{};
    pls::cs::Int32 rank_{};
    pls::cs::String explain_{};
    pls::cs::Int32 state_{};
    pls::cs::Int32 trophy_{};
    bool new_{};
    static constexpr pls::cs::Int32 FLAG_INIT = 1;
    static constexpr pls::cs::Int32 FLAG_VICTORY = 2;
    static constexpr pls::cs::Int32 MATCHFORM_RANDOM = 0;
    static constexpr pls::cs::Int32 MATCHFORM_TOURNAMENT = 1;
    static constexpr pls::cs::Int32 MATCHFORM_1MATCH = 2;
    static constexpr pls::cs::Int32 APPOINT_LEAGUE_NOTHING = -1;
    static constexpr pls::cs::Int32 APPOINT_LEAGUE_EVEN = 0;
    static constexpr pls::cs::Int32 APPOINT_LEAGUE_DOWN = 1;
    static constexpr pls::cs::Int32 APPOINT_LEAGUE_UP = 2;
    static constexpr pls::cs::Int32 STATE_NOT_FOUND = 0;
    static constexpr pls::cs::Int32 STATE_FOUND_INIT = 1;
    static constexpr pls::cs::Int32 STATE_FOUND = 2;
    static constexpr pls::cs::Int32 TROPHY_INIT = 0;
    static constexpr pls::cs::Int32 TROPHY_JOIN = 1;
    static constexpr pls::cs::Int32 TROPHY_COPPER = 2;
    static constexpr pls::cs::Int32 TROPHY_SILVER = 3;
    static constexpr pls::cs::Int32 TROPHY_GOLD = 4;
    static constexpr pls::cs::Int32 RANK_MAX = 6;
    static void ensure_initialized();

    static pls::cs::Ref<main::AppData>& apdat_();

    static pls::cs::Ref<game::UserData>& udat_();

    static void create_init(pls::cs::Ref<QuestMatchData> self);

    static void create_init(pls::cs::Ref<QuestMatchData> self, pls::cs::String src);

    static pls::cs::Ref<QuestMatchData> create();

    static pls::cs::Ref<QuestMatchData> create(pls::cs::String src);

    void Init();

    void Load(pls::cs::String src);

    void NewGame();

    void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

    void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

    void ChangeState(pls::cs::Int32 next_state);

    void SetGenericData();

    static void RegistQuestMatch(pls::cs::Int32 qmId);

    void SetGetTrophy(pls::cs::Int32 trophy);

    static bool IsVictoryQuestMatch();

    static bool IsVictoryMatch();

    static bool IsExistNew();

    static void RemoveNew();

    bool IsNew();
};
} // namespace data
}
