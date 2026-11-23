// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "data.BaseData.hpp"
#include "game_generated_forward.hpp"
namespace pls::game {
namespace data {

struct TenantData : BaseData {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("data.TenantData", TenantData, BaseData)
pls::cs::String name_{};
pls::cs::Int32 root_{};
pls::cs::Int32 icon_{};
pls::cs::Array<pls::cs::Int32> img_{};
pls::cs::Int32 charm_{};
pls::cs::Array<pls::cs::Int32> usePrice_{};
pls::cs::Array<pls::cs::Int32> keepCost_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> dataResearch_{};
pls::cs::Array<pls::cs::Int32> efToFan_{};
pls::cs::Int32 buildTime_{};
pls::cs::Int32 buildCost_{};
pls::cs::Array<pls::cs::Int32> investCost_{};
pls::cs::String explain_{};
pls::cs::Int32 state_{};
pls::cs::Int32 stateCnt_{};
pls::cs::Int32 lv_{};
bool new_{};
pls::cs::Array<pls::cs::Int32> paramResearch_{};
pls::cs::Int32 paramUsePrice_{};
pls::cs::Int32 paramKeepCost_{};
pls::cs::Int32 paramEfToFan_{};
pls::cs::Int32 paramStrengthCost_{};
pls::cs::Int32 paramTenantUseAura_{};
pls::cs::Array<pls::cs::Int32> TUSEPOINT{};
static constexpr pls::cs::Int32 FLAG_INIT = 1;static constexpr pls::cs::Int32 FLAG_BUILD = 2;static constexpr pls::cs::Int32 FLAG_TENANT_GOODS = 4;static constexpr pls::cs::Int32 FLAG_TENANT_TAREA_LVUP = 8;static constexpr pls::cs::Int32 FLAG_TENANT_TAREA_SPRED = 16;static constexpr pls::cs::Int32 FLAG_TENANT_STADIUM = 32;static constexpr pls::cs::Int32 TENANTDATAID_VACANT = -1;static constexpr pls::cs::Int32 ROOT_R = 0;static constexpr pls::cs::Int32 ROOT_L = 1;static constexpr pls::cs::Int32 STATE_NOT_FOUND = 0;static constexpr pls::cs::Int32 STATE_FOUND = 1;static constexpr pls::cs::Int32 STATE_STRENGTH = 2;static constexpr pls::cs::Int32 MIN_LV = 1;static constexpr pls::cs::Int32 MAX_LV = 5;static constexpr pls::cs::Int32 TENANT_STRENGH_TIME = 200;static constexpr pls::cs::Int32 TENANTUSE_AURA_MAX = 10;static constexpr pls::cs::Int32 TLUP_ID_PRICE = 0;static constexpr pls::cs::Int32 TLUP_ID_KEEPCOST = 1;static constexpr pls::cs::Int32 TLUP_ID_GP_FAN = 2;static constexpr pls::cs::Int32 TLUP_ID_GP_IDEA = 3;static constexpr pls::cs::Int32 TLUP_ID_GP_PHY = 4;static constexpr pls::cs::Int32 TLUP_ID_GP_TAC = 5;static constexpr pls::cs::Int32 TLUP_ID_GP_END = 6;
static void ensure_initialized();

static pls::cs::Ref<main::AppData>& apdat_();

static pls::cs::Array<pls::cs::String>& EFTOFAN_STR();

static pls::cs::Array<pls::cs::Int32>& INIT_TENANTID();

static pls::cs::Int32& TENANT_ID_GOODS();

static pls::cs::Int32& TENANT_ID_STADIUM();

static pls::cs::Int32& TENANT_ID_TRAININGAREA();

static pls::cs::Int32& TENANT_ID_TRAININGAREA_SPRED();

static pls::cs::Array<pls::cs::Int32>& TENANT_ROOT();

static pls::cs::Array<pls::cs::Int32>& TLUP_PARAM();

static pls::cs::Ref<game::UserData>& udat_();

static void create_init(pls::cs::Ref<TenantData> self);

static void create_init(pls::cs::Ref<TenantData> self,pls::cs::String src);

static pls::cs::Ref<TenantData> create();

static pls::cs::Ref<TenantData> create(pls::cs::String src);

void Init();

void Load(pls::cs::String src);

static void Load2();

void NewGame();

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);

void ChangeState(pls::cs::Int32 state);

void LvUp();

void SetLv(pls::cs::Int32 lv);

static pls::cs::Int32 GetFanToEf(pls::cs::Int32 eva);

pls::cs::Int32 GetUserPrice();

pls::cs::Array<pls::cs::Int32> GetTenantUseResearchPoint();

pls::cs::Single GetGoodsIncomeRate();

void StrengthTenant();

void Update();

pls::cs::Array<pls::cs::Int32> GetLvUpAddParam();

static void ProcStrenSpecialTenant(pls::cs::Ref<TenantData> tenant_data);

bool IsStreangth();

bool IsMaxLv();

bool IsTAreaOrStadiumTenant();

static bool IsExistNew();

static void RemoveNew();

bool IsNew();
};
} // namespace data
}
