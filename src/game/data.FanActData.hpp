// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace data {

struct FanActData : BaseData {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("data.FanActData", FanActData, BaseData)
    pls::cs::String name_{};
    pls::cs::Int32 type_{};
    pls::cs::Int32 icon_{};
    pls::cs::Array<pls::cs::Int32> effLimit_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> eff_{};
    pls::cs::Int32 costType_{};
    pls::cs::Array<pls::cs::Int32> cost_{};
    pls::cs::Array<pls::cs::Int32> benefit_{};
    pls::cs::Int32 difficult_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>> execsScript_{};
    pls::cs::String explain_{};
    pls::cs::Int32 rank_{};
    pls::cs::Int32 rankPoint_{};
    pls::cs::Int32 state_{};
    pls::cs::Int32 stateCnt_{};
    bool new_{};
    static constexpr pls::cs::Int32 FLAG_INIT = 1;
    static constexpr pls::cs::Int32 STATE_NOT_FOUND = 0;
    static constexpr pls::cs::Int32 STATE_FOUND = 1;
    static constexpr pls::cs::Int32 STATE_ACTIVE = 2;
    static constexpr pls::cs::Int32 RANK_MAX = 6;
    static constexpr pls::cs::Int32 FATYPE_TICKET = 0;
    static constexpr pls::cs::Int32 FATYPE_HANDSHAKE = 1;
    static constexpr pls::cs::Int32 FATYPE_SIGN = 2;
    static constexpr pls::cs::Int32 FATYPE_SOCCER = 3;
    static constexpr pls::cs::Int32 FATYPE_COACH = 4;
    static constexpr pls::cs::Int32 FATYPE_TOURS = 5;
    static constexpr pls::cs::Int32 FATYPE_MAINTENANCE = 6;
    static constexpr pls::cs::Int32 FAID_FAN = 0;
    static constexpr pls::cs::Int32 FAID_ASSIST = 1;
    static constexpr pls::cs::Int32 FAID_NAMEVALUE = 2;
    static constexpr pls::cs::Int32 FAID_RANKP = 3;
    static constexpr pls::cs::Int32 FAID_NUM = 3;
    static constexpr pls::cs::Int32 FARESULT_SUB_OK = 1;
    static constexpr pls::cs::Int32 FARESULT_SUB_NO = 0;
    static constexpr pls::cs::Int32 COSTTYPE_FANSERVICE = 0;
    static constexpr pls::cs::Int32 COSTTYPE_IDEA = 1;
    static constexpr pls::cs::Int32 COSTTYPE_PHYSICAL = 2;
    static constexpr pls::cs::Int32 COSTTYPE_TACTICS = 3;
    static constexpr pls::cs::Int32 COSTTYPE_MONEY = 4;
    static constexpr pls::cs::Int32 FANACT_ACTIVE_TIME = 200;
    static void ensure_initialized();

    static pls::cs::Ref<main::AppData>& apdat_();

    static pls::cs::Array<pls::cs::String>& element_name();

    static pls::cs::Array<pls::cs::String>& element_name2();

    static pls::cs::Array<pls::cs::Int32>& fa_add();

    static pls::cs::Array<pls::cs::Int32>& fa_addRUp();

    static pls::cs::Array<pls::cs::Int32>& fa_id();

    static pls::cs::Int32& fa_rank();

    static bool& fa_rankUp();

    static pls::cs::Int32& fa_result();

    static pls::cs::Array<pls::cs::Int32>& fa_resultSub();

    static pls::cs::Array<pls::cs::Int32>& fa_value();

    static pls::cs::Array<pls::cs::Int32>& FARESULT_RATE();

    static pls::cs::Ref<game::UserData>& udat_();

    static void create_init(pls::cs::Ref<FanActData> self);

    static void create_init(pls::cs::Ref<FanActData> self, pls::cs::String src);

    static pls::cs::Ref<FanActData> create();

    static pls::cs::Ref<FanActData> create(pls::cs::String src);

    void Init();

    void Load(pls::cs::String src);

    void NewGame();

    void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

    void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

    void ChangeState(pls::cs::Int32 state);

    void Update();

    static pls::cs::Int32 GetFanDispParam(pls::cs::Int32 eva, pls::cs::Int32 F_ID);

    static pls::cs::Int32 GetDispParamToEva(pls::cs::Int32 dispParam, pls::cs::Int32 F_ID);

    static pls::cs::Int32 GetFanAddParamNum(pls::cs::Int32 eva, pls::cs::Int32 F_ID);

    static pls::cs::Int32 GetFanEva(pls::cs::Int32 F_ID);

    static pls::cs::Int32 GetAddEvaLimitOver(pls::cs::Int32 F_ID, pls::cs::Int32 eva, pls::cs::Int32 add_eva,
                                             pls::cs::Int32 limit);

    static pls::cs::Int32 GetFanEvaToCommonValue(pls::cs::Int32 F_ID);

    static void AddFanParam(pls::cs::Int32 add_eva, pls::cs::Int32 F_ID);

    static void AddRankUpParam(pls::cs::Int32 add_eva, pls::cs::Ref<FanActData> fa_data);

    static void RankUp(pls::cs::Ref<FanActData> fa_data);

    static pls::cs::Int32 ChangeAssistAddEva(pls::cs::Int32 add_eva);

    static bool IsExistNew();

    static void RemoveNew();

    bool IsNew();
};
} // namespace data
}
