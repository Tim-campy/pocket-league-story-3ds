// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"

namespace pls::game {
namespace data {

struct EventData : BaseData {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("data.EventData", EventData, BaseData)
    pls::cs::String name_{};
    pls::cs::Int32 type_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> termsScript_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> execsScript_{};
    static constexpr pls::cs::Int32 TYPE_SYSTEM = 0;
    static constexpr pls::cs::Int32 TERM_NG = 0;
    static constexpr pls::cs::Int32 TERM_MONEY = 1;
    static constexpr pls::cs::Int32 TERM_EVENT = 2;
    static constexpr pls::cs::Int32 TERM_YEAR = 3;
    static constexpr pls::cs::Int32 TERM_MONTH = 4;
    static constexpr pls::cs::Int32 TERM_WEEK = 5;
    static constexpr pls::cs::Int32 TERM_HOUR = 6;
    static constexpr pls::cs::Int32 TERM_RANK = 7;
    static constexpr pls::cs::Int32 TERM_NUM_MATCH = 8;
    static constexpr pls::cs::Int32 TERM_NUM_WIN = 9;
    static constexpr pls::cs::Int32 TERM_NUM_DRAW = 10;
    static constexpr pls::cs::Int32 TERM_NUM_LOSE = 11;
    static constexpr pls::cs::Int32 TERM_NUM_FAN = 12;
    static constexpr pls::cs::Int32 SCR_MONEY = 0;
    static constexpr pls::cs::Int32 SCR_EVENT = 1;
    static constexpr pls::cs::Int32 SCR_TALK = 2;
    static constexpr pls::cs::Int32 SCR_NEWS = 3;
    static constexpr pls::cs::Int32 SCR_EVTMSG = 4;
    static constexpr pls::cs::Int32 SCR_DELAY = 5;
    static constexpr pls::cs::Int32 SCR_WAIT = 6;
    static constexpr pls::cs::Int32 SCR_FLAG_ON = 7;
    static constexpr pls::cs::Int32 SCR_FLAG_OFF = 8;
    static constexpr pls::cs::Int32 SCR_PLAYER = 9;
    static constexpr pls::cs::Int32 SCR_SVISOR = 10;
    static constexpr pls::cs::Int32 SCR_FORMATION = 11;
    static constexpr pls::cs::Int32 SCR_TENANT = 12;
    static constexpr pls::cs::Int32 SCR_FANACT = 13;
    static constexpr pls::cs::Int32 SCR_TRAINING = 14;
    static constexpr pls::cs::Int32 SCR_SPONSOR = 15;
    static constexpr pls::cs::Int32 SCR_CUP = 16;
    static constexpr pls::cs::Int32 SCR_TRADE = 17;
    static constexpr pls::cs::Int32 SCR_TRADEGROUP = 18;
    static constexpr pls::cs::Int32 SCR_LEAGUE = 19;
    static constexpr pls::cs::Int32 SCR_STADIUM_LVUP = 20;
    static constexpr pls::cs::Int32 SCR_TAREA_NUM_UP = 21;
    static constexpr pls::cs::Int32 SCR_TAREA_LV_UP = 22;
    static constexpr pls::cs::Int32 SCR_RP_FANSERVICE = 23;
    static constexpr pls::cs::Int32 SCR_RP_IDEA = 24;
    static constexpr pls::cs::Int32 SCR_RP_PHYSICAL = 25;
    static constexpr pls::cs::Int32 SCR_RP_TACTICS = 26;
    static constexpr pls::cs::Int32 SCR_PP_EXP = 27;
    static constexpr pls::cs::Int32 SCR_PP_KICK = 28;
    static constexpr pls::cs::Int32 SCR_PP_SPEED = 29;
    static constexpr pls::cs::Int32 SCR_PP_TEQNIC = 30;
    static constexpr pls::cs::Int32 SCR_PP_BODY = 31;
    static constexpr pls::cs::Int32 SCR_PP_KEEPER = 32;
    static constexpr pls::cs::Int32 SCR_PP_AURA = 33;
    static constexpr pls::cs::Int32 SCR_FAN_FAN = 34;
    static constexpr pls::cs::Int32 SCR_FAN_ASSIST = 35;
    static constexpr pls::cs::Int32 SCR_FAN_NAMEVALUE = 36;
    static constexpr pls::cs::Int32 SCR_HUMANR_PLAYER = 37;
    static constexpr pls::cs::Int32 SCR_HUMANR_SVISOR = 38;
    static constexpr pls::cs::Int32 SCR_FADEIN = 39;
    static constexpr pls::cs::Int32 SCR_FADEOUT = 40;
    static constexpr pls::cs::Int32 SCR_TEAMEVA = 41;
    static constexpr pls::cs::Int32 SCR_TRAINING_INIT = 42;
    static void ensure_initialized();

    static pls::cs::Array<pls::cs::String>& stringTable_();

    static void create_init(pls::cs::Ref<EventData> self);

    static void create_init(pls::cs::Ref<EventData> self, pls::cs::String src);

    static pls::cs::Ref<EventData> create();

    static pls::cs::Ref<EventData> create(pls::cs::String src);

    void Load(pls::cs::String src);

    static pls::cs::Array<pls::cs::Array<pls::cs::Int32>> ReadScript(pls::cs::String source);

    static bool CheckScript(pls::cs::Array<pls::cs::Array<pls::cs::Int32>> script, pls::cs::Int32 scrId);

    static pls::cs::Int32 Search(pls::cs::Array<pls::cs::Ref<EventData>> events, pls::cs::Int32 id);

    static void LoadStringTable(pls::cs::String src);
};
} // namespace data
}
