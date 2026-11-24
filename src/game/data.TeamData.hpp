// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace data {

struct TeamData : BaseData {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("data.TeamData", TeamData, BaseData)
    pls::cs::String name_{};
    pls::cs::String name2_{};
    pls::cs::Int32 nationalFlag_{};
    pls::cs::Int32 league_{};
    pls::cs::String homeTownName_{};
    pls::cs::Int32 stadium_{};
    pls::cs::Int32 formation_{};
    pls::cs::Int32 formationType_{};
    pls::cs::Int32 warPotential_{};
    pls::cs::Array<pls::cs::Int32> warP_distribute_{};
    pls::cs::Array<pls::cs::Int32> warP_paramPhysical_{};
    pls::cs::Int32 war_offence_{};
    pls::cs::Int32 war_deffence_{};
    pls::cs::Int32 amefto_pz_{};
    pls::cs::Int32 fan_{};
    pls::cs::Int32 uniform_{};
    pls::cs::Int32 bodyImg_{};
    pls::cs::Int32 keeperImg_{};
    pls::cs::Array<pls::cs::String> goalGetter_{};
    pls::cs::Array<pls::cs::Int32> memberFaceId_{};
    pls::cs::Array<pls::cs::Int32> goalScore_{};
    pls::cs::Array<pls::cs::Int32> goalScoreRate_{};
    static constexpr pls::cs::Int32 FLAG_INIT = 1;
    static constexpr pls::cs::Int32 FLAG_MATCH = 2;
    static constexpr pls::cs::Int32 FTYPE_NORMAL = 0;
    static constexpr pls::cs::Int32 FTYPE_OFFENCE = 1;
    static constexpr pls::cs::Int32 FTYPE_DEFFENCE = 2;
    static void ensure_initialized();

    static pls::cs::Ref<main::AppData>& apdat_();

    static void create_init(pls::cs::Ref<TeamData> self);

    static void create_init(pls::cs::Ref<TeamData> self, pls::cs::String src);

    static pls::cs::Ref<TeamData> create();

    static pls::cs::Ref<TeamData> create(pls::cs::String src);

    void Init();

    void Load(pls::cs::String src);

    void SetWarParamPhysical();

    void SetScore(pls::cs::Int32 getScore, bool isUserTeam);

    void NewGame();

    void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

    void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

    pls::cs::String GetHomeStadiumName();

    void AddTeamEva(pls::cs::Int32 addEva);

    static void SetScoreRanking(pls::cs::Ref<LeagueData> league_data,
                                pls::cs::Ref<generated::java::util::Vector> out_ary1,
                                pls::cs::Ref<generated::java::util::Vector> out_ary2);
};
} // namespace data
}
