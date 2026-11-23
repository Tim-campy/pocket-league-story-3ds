// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace data {

struct FanBonusData : BaseData {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("data.FanBonusData", FanBonusData, BaseData)
pls::cs::String message_{};
pls::cs::String info_name_{};
pls::cs::Int32 termMode_{};
pls::cs::Int32 termModeIndex_{};
pls::cs::Int32 termModeValue_{};
pls::cs::Int32 dispCharaType_{};
pls::cs::Array<pls::cs::Int32> param{};
pls::cs::Int32 state_{};
pls::cs::Array<pls::cs::Int32> achiveDay_{};
static constexpr pls::cs::Int32 FLAG_GROUND = 1;static constexpr pls::cs::Int32 FLAG_POPULARUP = 2;static constexpr pls::cs::Int32 FLAG_HISTORY_DISP = 4;static constexpr pls::cs::Int32 FLAG_LEAGUE_AMA = 8;static constexpr pls::cs::Int32 FLAG_LEAGUE_REGI = 16;static constexpr pls::cs::Int32 FLAG_LEAGUE_ALL = 32;static constexpr pls::cs::Int32 FLAG_LEAGUE_WORLD = 64;static constexpr pls::cs::Int32 FLAG_LEAGUE_KAIRO = 128;static constexpr pls::cs::Int32 FLAG_GOAL_50 = 256;static constexpr pls::cs::Int32 FLAG_GOAL_100 = 512;static constexpr pls::cs::Int32 BPF_UP_FAN = 0;static constexpr pls::cs::Int32 BPF_UP_ASSIST = 1;static constexpr pls::cs::Int32 BPF_UP_NAMEVALUE = 2;static constexpr pls::cs::Int32 BPF_HNUM = 3;static constexpr pls::cs::Int32 BPF_HACT = 4;static constexpr pls::cs::Int32 BPF_END = 5;static constexpr pls::cs::Int32 BP_HACT_JAMPGLAD = 0;static constexpr pls::cs::Int32 BP_HACT_SAD = 1;static constexpr pls::cs::Int32 BP_HACT_KICK = 2;static constexpr pls::cs::Int32 TERM_MODE_WIN = 0;static constexpr pls::cs::Int32 TERM_MODE_DRAW = 13;static constexpr pls::cs::Int32 TERM_MODE_LOSE = 1;static constexpr pls::cs::Int32 TERM_MODE_WIN_CONSECUTIVE = 2;static constexpr pls::cs::Int32 TERM_MODE_VICTORY_QUEST_1M = 15;static constexpr pls::cs::Int32 TERM_MODE_VICTORY_QUEST_T = 16;static constexpr pls::cs::Int32 TERM_MODE_VICTORY_LEAGUE = 3;static constexpr pls::cs::Int32 TERM_MODE_SCORERANKING = 14;static constexpr pls::cs::Int32 TERM_MODE_SCORE3 = 4;static constexpr pls::cs::Int32 TERM_MODE_HATTRICK = 5;static constexpr pls::cs::Int32 TERM_MODE_GAMEPLAYNUM = 6;static constexpr pls::cs::Int32 TERM_MODE_GOAL_CONSECUTIVE = 7;static constexpr pls::cs::Int32 TERM_MODE_GOAL_TOTAL = 8;static constexpr pls::cs::Int32 TERM_MODE_DEBUT_YOUTH = 9;static constexpr pls::cs::Int32 TERM_MODE_DEBUT_TRADE = 10;static constexpr pls::cs::Int32 TERM_MODE_SVISOR_WINNUM = 11;static constexpr pls::cs::Int32 TERM_MODE_CUSTOMER_TOTAL = 12;static constexpr pls::cs::Int32 BFD_TOPSTR = 0;static constexpr pls::cs::Int32 BFD_TOPSTRLEN = 1;static constexpr pls::cs::Int32 BFD_PARAM = 2;static constexpr pls::cs::Int32 BFD_DISPTYPE = 3;static constexpr pls::cs::Int32 BFD_CHARAINDEXARY = 4;static constexpr pls::cs::Int32 BFD_POPULAR = 5;static constexpr pls::cs::Int32 DISPCHARATYPE_GENERIC = 0;static constexpr pls::cs::Int32 DISPCHARATYPE_PLAYER = 1;static constexpr pls::cs::Int32 DISPCHARATYPE_SVISOR = 2;static constexpr pls::cs::Int32 ADDPOPULAR_GENERIC = 1;static constexpr pls::cs::Int32 ADDPOPULAR_PLAYER = 3;static constexpr pls::cs::Int32 ACHIVE_YEAR = 0;static constexpr pls::cs::Int32 ACHIVE_MONTH = 1;static constexpr pls::cs::Int32 ACHIVE_WEEK = 2;static constexpr pls::cs::Int32 STATE_NOT_FOUND = 0;static constexpr pls::cs::Int32 STATE_FOUND = 1;
static void ensure_initialized();

static pls::cs::Ref<main::AppData>& apdat_();

static pls::cs::Ref<generated::java::util::Vector>& bonus_f_data1();

static pls::cs::Int32& FB_GOAL_100();

static pls::cs::Int32& FB_GOAL_50();

static pls::cs::Int32& FB_LEAGUE_ALL();

static pls::cs::Int32& FB_LEAGUE_AMA();

static pls::cs::Int32& FB_LEAGUE_KAIRO();

static pls::cs::Int32& FB_LEAGUE_REGI();

static pls::cs::Int32& FB_LEAGUE_WORLD();

static pls::cs::Ref<generated::java::util::Vector>& fb_list();

static pls::cs::Array<pls::cs::Int32>& TERA_MODE_LIST();

static pls::cs::Ref<game::UserData>& udat_();

static void create_init(pls::cs::Ref<FanBonusData> self);

static void create_init(pls::cs::Ref<FanBonusData> self,pls::cs::String src);

static pls::cs::Ref<FanBonusData> create();

static pls::cs::Ref<FanBonusData> create(pls::cs::String src);

void Init();

void Load(pls::cs::String src);

static void Load2();

void NewGame();

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

void ChangeState(pls::cs::Int32 state);

static void SetBPFData(pls::cs::Ref<FanBonusData> fb_data,pls::cs::String topMessage,pls::cs::Array<pls::cs::Int32> param,pls::cs::Int32 charaDataId);

static void SetBPFData(pls::cs::Ref<FanBonusData> fb_data,pls::cs::String topMessage,pls::cs::Array<pls::cs::Int32> param);

static pls::cs::Ref<FanBonusData> GetFanBonusData(pls::cs::Int32 term_mode,pls::cs::Int32 param);

static pls::cs::Ref<generated::java::util::Vector> GetFanBonusDataList(pls::cs::Int32 term_mode);

static void ChBonusEvent();
};
} // namespace data
}
