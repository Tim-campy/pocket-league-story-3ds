// GENERATED (readable mode) by translator/Translator.cs from the reconstructed C#. Do not edit.
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace data {

struct SponsorData : BaseData {
    static bool source_reference_assignable(const std::type_info& target) {
        return target == typeid(SponsorData) || target == typeid(BaseData) ||
               BaseData::source_reference_assignable(target);
    }

    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;

    std::string managed_delegate_method_id(const std::string& slot) const override {
        return BaseData::managed_delegate_method_id(slot);
    }

    static std::string source_managed_type_name() { return "data.SponsorData"; }

    std::string managed_type_name() const override { return source_managed_type_name(); }

    pls::cs::String name_{};
    std::int32_t charaIndex_{};
    std::int32_t privilegeType_{};
    std::int32_t privilegeValue_{};
    std::int32_t costType_{};
    std::int32_t cost_{};
    pls::cs::Array<std::int32_t> income_{};
    std::int32_t satisfactDifficult_{};
    std::int32_t difficult_{};
    std::int32_t feelPtInt_{};
    pls::cs::String explain_{};
    pls::cs::Array<pls::cs::Array<std::int32_t>> execsScript_{};
    std::int32_t state_{};
    std::int32_t satisfactPoint_{};
    std::int32_t feelPt_{};
    bool new_{};
    static constexpr std::int32_t FLAG_GROUND = 1;
    static constexpr std::int32_t STATE_UNFINDED = 0;
    static constexpr std::int32_t STATE_FINDED = 1;
    static constexpr std::int32_t STATE_CONTRACT = 2;
    static constexpr std::int32_t SATISFACTEVA_MIN = 0;
    static constexpr std::int32_t SATISFACTEVA_MAX = 100;
    static constexpr std::int32_t EVA_DIFFICULT_MIN_MIN = 5;
    static constexpr std::int32_t EVA_DIFFICULT_MAX_MIN = 20;
    static constexpr std::int32_t EVA_DIFFICULT_MIN_MAX = 1;
    static constexpr std::int32_t EVA_DIFFICULT_MAX_MAX = 3;
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

    std::int32_t GetIncome();

    static void UpdateSatisFactPoint();

    pls::cs::String GetDifficultStr();

    static bool IsExistNew();

    static void RemoveNew();

    bool IsNew();
};
} // namespace data
} // namespace pls::game
