// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace data {

struct TrainingData : BaseData {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("data.TrainingData", TrainingData, BaseData)
    pls::cs::String name_{};
    pls::cs::Int32 icon_{};
    pls::cs::Int32 tMode_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> eff_{};
    pls::cs::Int32 costType_{};
    pls::cs::Int32 cost_{};
    pls::cs::String explain_{};
    pls::cs::Int32 state_{};
    bool new_{};
    static constexpr pls::cs::Int32 FLAG_INIT = 1;
    static constexpr pls::cs::Int32 STATE_NOT_FOUND = 0;
    static constexpr pls::cs::Int32 STATE_FOUND = 1;
    static constexpr pls::cs::Int32 PUP_KICK = 0;
    static constexpr pls::cs::Int32 PUP_SPEED = 1;
    static constexpr pls::cs::Int32 PUP_TEQNIC = 2;
    static constexpr pls::cs::Int32 PUP_BODY = 3;
    static constexpr pls::cs::Int32 PUP_KEEPER = 4;
    static constexpr pls::cs::Int32 PUP_GK = 5;
    static constexpr pls::cs::Int32 PUP_END = 6;
    static constexpr pls::cs::Int32 COSTTYPE_FANSERVICE = 0;
    static constexpr pls::cs::Int32 COSTTYPE_IDEA = 1;
    static constexpr pls::cs::Int32 COSTTYPE_PHYSICAL = 2;
    static constexpr pls::cs::Int32 COSTTYPE_TACTICS = 3;
    static constexpr pls::cs::Int32 COSTTYPE_MONEY = 4;
    static constexpr pls::cs::Int32 TRA_NOTSET = -1;
    static constexpr pls::cs::Int32 TRAMODE_KICK = 0;
    static constexpr pls::cs::Int32 TRAMODE_RUN = 1;
    static constexpr pls::cs::Int32 TRAMODE_HEAD = 2;
    static constexpr pls::cs::Int32 TRAMODE_THROWIN = 3;
    static constexpr pls::cs::Int32 FARESULT_SCCESS = 0;
    static constexpr pls::cs::Int32 FARESULT_NORMAL = 1;
    static constexpr pls::cs::Int32 FARESULT_FAIL = 2;
    static void ensure_initialized();

    static pls::cs::Ref<main::AppData>& apdat_();

    static pls::cs::Int32& fa_result();

    static pls::cs::Array<pls::cs::Int32>& FARESULT_RATE();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& TRA_ADD();

    static pls::cs::Array<pls::cs::Int32>& TRA_PLAYER();

    static pls::cs::Int32& TRA_SELECT_TRA();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& TRA_UPPARAM();

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>>& TRA_UPPARAM_DISP();

    static pls::cs::Ref<game::UserData>& udat_();

    static void create_init(pls::cs::Ref<TrainingData> self);

    static void create_init(pls::cs::Ref<TrainingData> self, pls::cs::String src);

    static pls::cs::Ref<TrainingData> create();

    static pls::cs::Ref<TrainingData> create(pls::cs::String src);

    void Init();

    void Load(pls::cs::String src);

    static void Load2();

    void NewGame();

    void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

    void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

    void ChangeState(pls::cs::Int32 state);

    static pls::cs::Int32 GetTrainingAddParamNum(pls::cs::Int32 eva);

    static bool IsExistNew();

    static void RemoveNew();

    bool IsNew();
};
} // namespace data
}
