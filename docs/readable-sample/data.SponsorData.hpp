// GENERATED (readable mode) by translator/Translator.cs from the reconstructed C#. Do not edit.
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace data {

struct SponsorData : BaseData {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("data.SponsorData", SponsorData, BaseData)
    pls::cs::String name_{};
    pls::cs::Int32 charaIndex_{};
    pls::cs::Int32 privilegeType_{};
    pls::cs::Int32 privilegeValue_{};
    pls::cs::Int32 costType_{};
    pls::cs::Int32 cost_{};
    pls::cs::Array<pls::cs::Int32> income_{};
    pls::cs::Int32 satisfactDifficult_{};
    pls::cs::Int32 difficult_{};
    pls::cs::Int32 feelPtInt_{};
    pls::cs::String explain_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> execsScript_{};
    pls::cs::Int32 state_{};
    pls::cs::Int32 satisfactPoint_{};
    pls::cs::Int32 feelPt_{};
    bool new_{};
    static constexpr pls::cs::Int32 FLAG_GROUND = 1;
    static constexpr pls::cs::Int32 STATE_UNFINDED = 0;
    static constexpr pls::cs::Int32 STATE_FINDED = 1;
    static constexpr pls::cs::Int32 STATE_CONTRACT = 2;
    static constexpr pls::cs::Int32 SATISFACTEVA_MIN = 0;
    static constexpr pls::cs::Int32 SATISFACTEVA_MAX = 100;
    static constexpr pls::cs::Int32 EVA_DIFFICULT_MIN_MIN = 5;
    static constexpr pls::cs::Int32 EVA_DIFFICULT_MAX_MIN = 20;
    static constexpr pls::cs::Int32 EVA_DIFFICULT_MIN_MAX = 1;
    static constexpr pls::cs::Int32 EVA_DIFFICULT_MAX_MAX = 3;
    static void ensure_initialized();

    static pls::cs::Ref<main::AppData>& apdat_();

    static pls::cs::Array<pls::cs::String>& difficultStr();

    static pls::cs::Ref<game::UserData>& udat_();

    static void create_init(pls::cs::Ref<SponsorData> self);

    static void create_init(pls::cs::Ref<SponsorData> self, pls::cs::String src);

    static pls::cs::Ref<SponsorData> create();

    static pls::cs::Ref<SponsorData> create(pls::cs::String src);

    void Init();

    void Load(pls::cs::String src);

    void NewGame();

    void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

    void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

    void ChangeState(pls::cs::Int32 state);

    static void Draw_sponsorChara(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 charaId,
                                  pls::cs::Int32 dx, pls::cs::Int32 dy);

    pls::cs::Int32 GetIncome();

    static void UpdateSatisFactPoint();

    pls::cs::String GetDifficultStr();

    static bool IsExistNew();

    static void RemoveNew();

    bool IsNew();
};
} // namespace data
} // namespace pls::game
