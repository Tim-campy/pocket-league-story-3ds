// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace data {

struct SupervisorData : BaseData {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("data.SupervisorData", SupervisorData, BaseData)
pls::cs::String name_{};
pls::cs::String name2_{};
pls::cs::String explain_{};
pls::cs::Int32 headImg_{};
pls::cs::Int32 bodyImg_{};
pls::cs::Int32 initLv_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> dataPhysical_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> dataResearch_{};
pls::cs::Int32 formation_{};
pls::cs::Array<pls::cs::Int32> sallary_{};
pls::cs::Int32 winTotal_{};
pls::cs::Int32 state_{};
pls::cs::Int32 lv_{};
pls::cs::Int32 workMonth_{};
pls::cs::Array<pls::cs::Int32> paramPhysical_{};
pls::cs::Array<pls::cs::Int32> paramResearch_{};
pls::cs::Int32 rankPhysical_{};
static constexpr pls::cs::Int32 FLAG_INIT_SUPERVISOR = 1;static constexpr pls::cs::Int32 FLAG_INIT = 2;static constexpr pls::cs::Int32 STATE_NOTFOUND = 0;static constexpr pls::cs::Int32 STATE_FOUND = 1;static constexpr pls::cs::Int32 MIN_LV = 1;static constexpr pls::cs::Int32 MAX_LV = 9;static constexpr pls::cs::Int32 TRAINING_POINT_MIN = 1000;static constexpr pls::cs::Int32 TRAINING_POINT_MAX = 4000;static constexpr pls::cs::Int32 TRAINING_POLICY_NORMAL = 0;static constexpr pls::cs::Int32 TRAINING_POLICY_TRAINING = 1;static constexpr pls::cs::Int32 TRAINING_POLICY_TENANT = 2;static constexpr pls::cs::Int32 TRAINING_POLICY_JOIN_NORMAL = 50;static constexpr pls::cs::Int32 TRAINING_POLICY_JOIN_TRAINING = 100;static constexpr pls::cs::Int32 TRAINING_POLICY_JOIN_TENANT = 20;
static void ensure_initialized();

static pls::cs::Ref<main::AppData>& apdat_();

static pls::cs::Array<pls::cs::String>& TRAINING_POLICY_STR();

static pls::cs::Ref<game::UserData>& udat_();

static void create_init(pls::cs::Ref<SupervisorData> self);

static void create_init(pls::cs::Ref<SupervisorData> self,pls::cs::String src);

static pls::cs::Ref<SupervisorData> create();

static pls::cs::Ref<SupervisorData> create(pls::cs::String src);

void Init();

void Load(pls::cs::String src);

void NewGame();

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

void ChangeState(pls::cs::Int32 state);

bool LvUp();

void SetLv(pls::cs::Int32 lv);

void SetResearchData(pls::cs::Int32 gameResultEva,pls::cs::Ref<PlayerData> p_data);

pls::cs::Int32 GetTrainigGetExp();

pls::cs::Int32 GetSallay();

static void ContractSupervisor(pls::cs::Int32 svisorid,bool isContinue,bool formationAddPopUp);
};
} // namespace data
}
