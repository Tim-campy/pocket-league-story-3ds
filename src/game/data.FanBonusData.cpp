// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.BaseData.hpp"
#include "data.FanBonusData.hpp"
#include "data.LeagueData.hpp"
#include "data.PlayerData.hpp"
#include "data.QuestMatchData.hpp"
#include "data.SupervisorData.hpp"
#include "data.TeamData.hpp"
#include "form.SoccerForm.hpp"
#include "game.GameManager.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace data {

void FanBonusData::trace_edges(const pls::cs::EdgeVisitor&visitor)const {BaseData::trace_edges(visitor);pls::cs::trace_value(message_,visitor);pls::cs::trace_value(info_name_,visitor);pls::cs::trace_value(param,visitor);pls::cs::trace_value(achiveDay_,visitor);}

static pls::cs::Ref<main::AppData> FanBonusData_apdat__storage{};

static pls::cs::Ref<kl_java_util::Vector> FanBonusData_bonus_f_data1_storage{};

static pls::cs::Int32 FanBonusData_FB_GOAL_100_storage{};

static pls::cs::Int32 FanBonusData_FB_GOAL_50_storage{};

static pls::cs::Int32 FanBonusData_FB_LEAGUE_ALL_storage{};

static pls::cs::Int32 FanBonusData_FB_LEAGUE_AMA_storage{};

static pls::cs::Int32 FanBonusData_FB_LEAGUE_KAIRO_storage{};

static pls::cs::Int32 FanBonusData_FB_LEAGUE_REGI_storage{};

static pls::cs::Int32 FanBonusData_FB_LEAGUE_WORLD_storage{};

static pls::cs::Ref<kl_java_util::Vector> FanBonusData_fb_list_storage{};

static IntArray FanBonusData_TERA_MODE_LIST_storage{};

static pls::cs::Ref<game::UserData> FanBonusData_udat__storage{};

static PLS_NOINLINE void cs_init_69a97d2bf5ede86d_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(FanBonusData_apdat__storage,visitor);pls::cs::trace_value(FanBonusData_bonus_f_data1_storage,visitor);pls::cs::trace_value(FanBonusData_FB_GOAL_100_storage,visitor);pls::cs::trace_value(FanBonusData_FB_GOAL_50_storage,visitor);pls::cs::trace_value(FanBonusData_FB_LEAGUE_ALL_storage,visitor);pls::cs::trace_value(FanBonusData_FB_LEAGUE_AMA_storage,visitor);pls::cs::trace_value(FanBonusData_FB_LEAGUE_KAIRO_storage,visitor);pls::cs::trace_value(FanBonusData_FB_LEAGUE_REGI_storage,visitor);pls::cs::trace_value(FanBonusData_FB_LEAGUE_WORLD_storage,visitor);pls::cs::trace_value(FanBonusData_fb_list_storage,visitor);pls::cs::trace_value(FanBonusData_TERA_MODE_LIST_storage,visitor);pls::cs::trace_value(FanBonusData_udat__storage,visitor);});static pls::cs::TypeInitState state;state.run("data.FanBonusData",flag,[](){
FanBonusData_TERA_MODE_LIST_storage = pls::cs::evaluate_type_initializer_field("F:data.FanBonusData.TERA_MODE_LIST",[&](){return IntArray::from({0, 13, 1, 2, 15, 16, 3, 14, 4, 5, 6, 7, 8, 9, 10, 11, 12});});
FanBonusData_bonus_f_data1_storage = pls::cs::evaluate_type_initializer_field("F:data.FanBonusData.bonus_f_data1",[&](){return kl_java_util::Vector::create();});
FanBonusData_fb_list_storage = pls::cs::evaluate_type_initializer_field("F:data.FanBonusData.fb_list",[&](){return kl_java_util::Vector::create();});

});}

void FanBonusData::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_69a97d2bf5ede86d_slow(flag);}

pls::cs::Ref<main::AppData>& FanBonusData::apdat_(){FanBonusData::ensure_initialized();return FanBonusData_apdat__storage;}

pls::cs::Ref<kl_java_util::Vector>& FanBonusData::bonus_f_data1(){FanBonusData::ensure_initialized();return FanBonusData_bonus_f_data1_storage;}

pls::cs::Int32& FanBonusData::FB_GOAL_100(){FanBonusData::ensure_initialized();return FanBonusData_FB_GOAL_100_storage;}

pls::cs::Int32& FanBonusData::FB_GOAL_50(){FanBonusData::ensure_initialized();return FanBonusData_FB_GOAL_50_storage;}

pls::cs::Int32& FanBonusData::FB_LEAGUE_ALL(){FanBonusData::ensure_initialized();return FanBonusData_FB_LEAGUE_ALL_storage;}

pls::cs::Int32& FanBonusData::FB_LEAGUE_AMA(){FanBonusData::ensure_initialized();return FanBonusData_FB_LEAGUE_AMA_storage;}

pls::cs::Int32& FanBonusData::FB_LEAGUE_KAIRO(){FanBonusData::ensure_initialized();return FanBonusData_FB_LEAGUE_KAIRO_storage;}

pls::cs::Int32& FanBonusData::FB_LEAGUE_REGI(){FanBonusData::ensure_initialized();return FanBonusData_FB_LEAGUE_REGI_storage;}

pls::cs::Int32& FanBonusData::FB_LEAGUE_WORLD(){FanBonusData::ensure_initialized();return FanBonusData_FB_LEAGUE_WORLD_storage;}

pls::cs::Ref<kl_java_util::Vector>& FanBonusData::fb_list(){FanBonusData::ensure_initialized();return FanBonusData_fb_list_storage;}

IntArray& FanBonusData::TERA_MODE_LIST(){FanBonusData::ensure_initialized();return FanBonusData_TERA_MODE_LIST_storage;}

pls::cs::Ref<game::UserData>& FanBonusData::udat_(){FanBonusData::ensure_initialized();return FanBonusData_udat__storage;}

void FanBonusData::create_init(pls::cs::Ref<FanBonusData> self) {
FanBonusData::ensure_initialized();
self->param = IntArray::make(5);
self->achiveDay_ = IntArray::make(3);
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.#ctor",game);
{
FanBonusData::apdat_() = main::AppData::GetInstance();
FanBonusData::udat_() = game::UserData::GetInstance();
}

}

void FanBonusData::create_init(pls::cs::Ref<FanBonusData> self,pls::cs::String src) {
FanBonusData::ensure_initialized();
self->param = IntArray::make(5);
self->achiveDay_ = IntArray::make(3);
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.#ctor(System.String)",game);
{
FanBonusData::apdat_() = main::AppData::GetInstance();
FanBonusData::udat_() = game::UserData::GetInstance();
self->Init();
self->Load(src);
}

}

// M:data.FanBonusData.#ctor
pls::cs::Ref<FanBonusData> FanBonusData::create() {
FanBonusData::ensure_initialized();
 auto self = pls::cs::make_ref<FanBonusData>(); FanBonusData::create_init(self); return self; 
}

// M:data.FanBonusData.#ctor(System.String)
pls::cs::Ref<FanBonusData> FanBonusData::create(pls::cs::String src) {
FanBonusData::ensure_initialized();
 auto self = pls::cs::make_ref<FanBonusData>(); FanBonusData::create_init(self,src); return self; 
}

// M:data.FanBonusData.Init
void FanBonusData::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.Init",game);
{
state_ = 0;
achiveDay_ = IntArray::make(3);
}
}

// M:data.FanBonusData.Load(System.String)
void FanBonusData::Load(pls::cs::String src) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.Load(System.String)",game);
{
pls::cs::Int32 num = 0;
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(src, literal(u"\t"));});
id_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
message_ = array[num++];
info_name_ = array[num++];
termMode_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
termModeIndex_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
termModeValue_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
dispCharaType_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
for (pls::cs::Int32 i = 0; i < param.length(); ++i) {
{ auto cs_target = param; auto cs_index = i; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});cs_target.set_Item(cs_index,cs_value);}
}
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
}
}

// M:data.FanBonusData.Load2
void FanBonusData::Load2() {
FanBonusData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.Load2",game);
{
kl_cfg::Config::ensure_initialized();

pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
for (pls::cs::Int32 i = 0; i < require(instance)->fanBonus_.length(); ++i) {
pls::cs::Ref<FanBonusData> fanBonusData = require(instance)->fanBonus_.get_Item(i);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(fanBonusData)->flag_, 8);})) {
FanBonusData::FB_LEAGUE_AMA() = i;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(fanBonusData)->flag_, 16);})) {
FanBonusData::FB_LEAGUE_REGI() = i;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(fanBonusData)->flag_, 32);})) {
FanBonusData::FB_LEAGUE_ALL() = i;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(fanBonusData)->flag_, 64);})) {
FanBonusData::FB_LEAGUE_WORLD() = i;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(fanBonusData)->flag_, 128);})) {
FanBonusData::FB_LEAGUE_KAIRO() = i;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(fanBonusData)->flag_, 256);})) {
FanBonusData::FB_GOAL_50() = i;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(fanBonusData)->flag_, 512);})) {
FanBonusData::FB_GOAL_100() = i;
}
}
if (kl_cfg::Config::DEBUG_CMD()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"■FanBonusData.java ch "), integer_string(FanBonusData::FB_LEAGUE_AMA())), literal(u", ")), integer_string(FanBonusData::FB_LEAGUE_REGI())), literal(u", ")), integer_string(FanBonusData::FB_LEAGUE_ALL())), literal(u", ")), integer_string(FanBonusData::FB_LEAGUE_WORLD())), literal(u", ")), integer_string(FanBonusData::FB_LEAGUE_KAIRO())), pls::cs::Ref<pls::cs::ExceptionObject>{});});
}
FanBonusData::FB_GOAL_50() = 41;
FanBonusData::FB_GOAL_100() = 42;

}

}

// M:data.FanBonusData.NewGame
void FanBonusData::NewGame() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.NewGame",game);
{
state_ = 0;
}
}

// M:data.FanBonusData.Serialize(java.io.OutputStream)
void FanBonusData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_));});
for (pls::cs::Int32 i = 0; i < achiveDay_.length(); ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(achiveDay_[i]));});
}
}
}

// M:data.FanBonusData.Deserialize(java.io.InputStream)
void FanBonusData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.Deserialize(java.io.InputStream)",game);
{
state_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
for (pls::cs::Int32 i = 0; i < achiveDay_.length(); ++i) {
{ auto cs_target = achiveDay_; auto cs_index = i; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));cs_target.set_Item(cs_index,cs_value);}
}
}
}

// M:data.FanBonusData.ChangeState(System.Int32)
void FanBonusData::ChangeState(pls::cs::Int32 state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.ChangeState(System.Int32)",game);
{
state_ = state;
}
}

// M:data.FanBonusData.SetBPFData(data.FanBonusData,System.String,System.Int32[])
void FanBonusData::SetBPFData(pls::cs::Ref<FanBonusData> fb_data,pls::cs::String topMessage,IntArray param) {
FanBonusData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.SetBPFData(data.FanBonusData,System.String,System.Int32[])",game);
{
FanBonusData::SetBPFData(fb_data, topMessage, param, -1);
}

}

// M:data.FanBonusData.SetBPFData(data.FanBonusData,System.String,System.Int32[],System.Int32)
void FanBonusData::SetBPFData(pls::cs::Ref<FanBonusData> fb_data,pls::cs::String topMessage,IntArray param,pls::cs::Int32 charaDataId) {
FanBonusData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.SetBPFData(data.FanBonusData,System.String,System.Int32[],System.Int32)",game);
{
IntArray array = IntArray{};
if (require(fb_data)->dispCharaType_ == 0) {
array = IntArray::make(require(fb_data)->param[3]);
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
pls::cs::Ref<PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(FanBonusData::udat_())->memberPDataist_), i);}));
array[i] = require(playerData)->id_;
}
} else if (require(fb_data)->dispCharaType_ == 1) {
array = IntArray::make(1);
array[0] = charaDataId;
} else if (require(fb_data)->dispCharaType_ == 2) {
array = IntArray::make(1);
array[0] = require(FanBonusData::udat_())->selectSupervisorId_;
}
IntArray array2 = IntArray::make(param.length());
for (pls::cs::Int32 j = 0; j < array2.length(); ++j) {
array2[j] = param[j];
}
auto cs_receiver_13 = FanBonusData::udat_(); pls::cs::Int32 cs_arg0_13 = require(require(FanBonusData::apdat_())->frmSoccer_)->GetEvaCumstomer(true);
pls::cs::Single ticketPriceFanBonusRate = require(cs_receiver_13)->GetTicketPriceFanBonusRate(cs_arg0_13);
for (pls::cs::Int32 k = 0; k < 3; ++k) {
if ((k == 1) && (array2[k] < 0)) {

} else {
array2[k] = pls::cs::to_int32((pls::cs::Single(array2[k]) * ticketPriceFanBonusRate));
}
}
pls::cs::Int32 value = 0;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(fb_data)->flag_, 2);})) {
value = 1;
}
pls::cs::Ref<pls::kairo::Font> font = pls::cs::make_ref<pls::kairo::Font>();
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = FanBonusData::bonus_f_data1(); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::from({pls::cs::box(topMessage), pls::cs::box(kl_lang::JInteger::create(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->StringWidth(topMessage);})) + 20)), pls::cs::box(array2), pls::cs::box(kl_lang::JInteger::create(require(fb_data)->dispCharaType_)), pls::cs::box(array), pls::cs::box(kl_lang::JInteger::create(value))})); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
if (require(fb_data)->state_ == 0) {
require(fb_data)->ChangeState(1);
require(fb_data)->achiveDay_[0] = require(require(FanBonusData::apdat_())->save_)->ints[1];
require(fb_data)->achiveDay_[1] = require(require(FanBonusData::apdat_())->save_)->ints[2];
require(fb_data)->achiveDay_[2] = require(require(FanBonusData::apdat_())->save_)->ints[3];
}
}

}

// M:data.FanBonusData.GetFanBonusData(System.Int32,System.Int32)
pls::cs::Ref<FanBonusData> FanBonusData::GetFanBonusData(pls::cs::Int32 term_mode,pls::cs::Int32 param) {
FanBonusData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.GetFanBonusData(System.Int32,System.Int32)",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
for (pls::cs::Int32 i = 0; i < require(instance)->fanBonus_.length(); ++i) {
pls::cs::Ref<FanBonusData> fanBonusData = require(instance)->fanBonus_.get_Item(i);
if (require(fanBonusData)->termMode_ == term_mode && require(fanBonusData)->termModeIndex_ == param) {
return fanBonusData;
}
}
return pls::cs::Ref<FanBonusData>{};
}

}

// M:data.FanBonusData.GetFanBonusDataList(System.Int32)
pls::cs::Ref<kl_java_util::Vector> FanBonusData::GetFanBonusDataList(pls::cs::Int32 term_mode) {
FanBonusData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.GetFanBonusDataList(System.Int32)",game);
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(FanBonusData::fb_list()));}) > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveAllElements(require(FanBonusData::fb_list()));});
}
for (pls::cs::Int32 i = 0; i < require(FanBonusData::apdat_())->fanBonus_.length(); ++i) {
pls::cs::Ref<FanBonusData> fanBonusData = require(FanBonusData::apdat_())->fanBonus_.get_Item(i);
if (require(fanBonusData)->termMode_ != term_mode) {
continue;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(FanBonusData::fb_list()), pls::cs::box(fanBonusData));});
}
return FanBonusData::fb_list();
}

}

// M:data.FanBonusData.ChBonusEvent
void FanBonusData::ChBonusEvent() {
FanBonusData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanBonusData.ChBonusEvent",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
pls::cs::Ref<game::UserData> instance2 = game::UserData::GetInstance();
pls::cs::Ref<TeamData> teamData = require(instance)->tData_.get_Item(require(require(instance2)->gm_)->teamId_[0]);
pls::cs::Ref<TeamData> teamData2 = require(instance)->tData_.get_Item(require(require(instance2)->gm_)->teamId_[1]);
pls::cs::Ref<FanBonusData> fanBonusData = pls::cs::Ref<FanBonusData>{};
pls::cs::Ref<FanBonusData> fanBonusData2 = pls::cs::Ref<FanBonusData>{};
pls::cs::Ref<FanBonusData> fanBonusData3 = pls::cs::Ref<FanBonusData>{};
for (pls::cs::Int32 i = 0; i < FanBonusData::TERA_MODE_LIST().length(); ++i) {
pls::cs::Int32 num = FanBonusData::TERA_MODE_LIST()[i];
if ((num == 0)) {
if ([&]() -> bool { auto cs_left = require(require(instance2)->gm_)->score_[0]; auto cs_right = require(require(instance2)->gm_)->score_[1]; return cs_left > cs_right; }()) {
pls::cs::Int32 warPotential_5 = require(teamData)->warPotential_;
pls::cs::Int32 warPotential_6 = require(teamData2)->warPotential_;
pls::cs::Int32 num12 = warPotential_6 - warPotential_5;
if (num12 < 100) {
fanBonusData = FanBonusData::GetFanBonusData(num, 0);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
} else if (num12 < 200) {
fanBonusData = FanBonusData::GetFanBonusData(num, 1);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
} else {
fanBonusData = FanBonusData::GetFanBonusData(num, 2);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
}
}
} else if ((num == 13)) {
if ([&]() -> bool { auto cs_left = require(require(instance2)->gm_)->score_[0]; auto cs_right = require(require(instance2)->gm_)->score_[1]; return cs_left == cs_right; }()) {
pls::cs::Int32 warPotential_ = require(teamData)->warPotential_;
pls::cs::Int32 warPotential_2 = require(teamData2)->warPotential_;
pls::cs::Int32 num2 = warPotential_2 - warPotential_;
if (num2 > 100) {
fanBonusData = FanBonusData::GetFanBonusData(num, 0);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
} else if (num2 < -100) {
fanBonusData = FanBonusData::GetFanBonusData(num, 1);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
}
}
} else if ((num == 1)) {
if ([&]() -> bool { auto cs_left = require(require(instance2)->gm_)->score_[0]; auto cs_right = require(require(instance2)->gm_)->score_[1]; return cs_left < cs_right; }()) {
pls::cs::Int32 warPotential_3 = require(teamData)->warPotential_;
pls::cs::Int32 warPotential_4 = require(teamData2)->warPotential_;
pls::cs::Int32 num11 = warPotential_4 - warPotential_3;
if (num11 >= -100) {
fanBonusData = FanBonusData::GetFanBonusData(num, 0);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
} else if (num11 >= -200) {
fanBonusData = FanBonusData::GetFanBonusData(num, 1);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
} else {
fanBonusData = FanBonusData::GetFanBonusData(num, 2);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
}
}
} else if ((num == 2)) {
{
if ([&]() -> bool { auto cs_left = require(require(instance2)->gm_)->score_[0]; auto cs_right = require(require(instance2)->gm_)->score_[1]; return cs_left > cs_right; }()) {
pls::cs::Ref<kl_java_util::Vector> fanBonusDataList4 = FanBonusData::GetFanBonusDataList(num);
for (pls::cs::Int32 n = 0; n < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(fanBonusDataList4));}); ++n) {
pls::cs::Ref<FanBonusData> fanBonusData7 = pls::cs::unbox<pls::cs::Ref<FanBonusData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(fanBonusDataList4), n);}));
if (require(instance2)->game_winConsecutive_ == require(fanBonusData7)->termModeValue_) {
FanBonusData::SetBPFData(fanBonusData7, require(fanBonusData7)->message_, require(fanBonusData7)->param);
break;
}
}
}
}
} else if ((num == 15) || (num == 16)) {
{
if ([&]() -> bool { auto cs_left = require(require(instance2)->gm_)->score_[0]; auto cs_right = require(require(instance2)->gm_)->score_[1]; return cs_left > cs_right; }()) {
pls::cs::Int32 matchInfoJoin = require(instance2)->GetMatchInfoJoin();
if (matchInfoJoin == 1) {
pls::cs::Ref<QuestMatchData> questMatchData = require(instance)->qmData_.get_Item(require(instance2)->selectQmId_);
if (require(instance2)->battleQmIndex_ == pls::cs::Int32(require(questMatchData)->matchEnemy_.length()) - 1 && ((require(questMatchData)->matchForm_ == 2 && num == 15) || (require(questMatchData)->matchForm_ == 1 && num == 16)) && require(questMatchData)->rank_ >= 0 && require(questMatchData)->rank_ <= 6) {
fanBonusData = FanBonusData::GetFanBonusData(num, require(questMatchData)->rank_);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
}
}
}
}
} else if ((num == 3)) {
pls::cs::Int32 recoveredMatchInfoJoin = require(instance2)->GetMatchInfoJoin();
if (recoveredMatchInfoJoin == 0 && LeagueData::IsVictoryLeague()) {
pls::cs::Ref<LeagueData> leagueData = require(instance)->leagueData_.get_Item(require(instance2)->selectLeagueId_);
fanBonusData = FanBonusData::GetFanBonusData(num, require(leagueData)->id_);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
}
} else if ((num == 14)) {
{
if (LeagueData::IsLastMatch()) {
pls::cs::Ref<LeagueData> league_data = require(instance)->leagueData_.get_Item(require(instance2)->selectLeagueId_);
pls::cs::Ref<kl_java_util::Vector> out_ary = kl_java_util::Vector::create();
pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
TeamData::SetScoreRanking(league_data, out_ary, vector);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));}) > 0) {
IntArray array = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector), 0);}));
if (array[1] == 0) {
pls::cs::Ref<PlayerData> playerData3 = require(instance)->pData_.get_Item(array[2]);
fanBonusData = FanBonusData::GetFanBonusData(num, 0);
{ pls::cs::Ref<FanBonusData> cs_arg0 = fanBonusData; pls::cs::String cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(require(fanBonusData)->message_, require(playerData3)->name_);}); IntArray cs_arg2 = require(fanBonusData)->param; pls::cs::Int32 cs_arg3 = require(playerData3)->id_; FanBonusData::SetBPFData(cs_arg0, cs_arg1, cs_arg2, cs_arg3); }
}
}
}
}
} else if ((num == 4)) {
if (require(require(instance2)->gm_)->score_[0] >= 3 && require(require(instance2)->gm_)->score_[1] >= 3) {
fanBonusData = FanBonusData::GetFanBonusData(num, 0);
FanBonusData::SetBPFData(fanBonusData, require(fanBonusData)->message_, require(fanBonusData)->param);
}
} else if ((num == 5)) {
{
pls::cs::Ref<kl_java_util::Vector> vector2 = kl_java_util::Vector::create();
bool flag = false;
for (pls::cs::Int32 num7 = 0; num7 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(require(instance2)->gm_)->scorerListUserTeam));}); ++num7) {
pls::cs::Int32 num8 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require((pls::cs::unbox<pls::cs::Ref<kl_lang::JInteger>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(require(instance2)->gm_)->scorerListUserTeam), num7);}))))->IntValue();});
flag = false;
for (pls::cs::Int32 num9 = 0; num9 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector2));}); ++num9) {
IntArray array2 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector2), num9);}));
if (array2[0] == num8) {
flag = true;
array2[1]++;
break;
}
}
if (flag) {
continue;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({num8, 1})); kl_java_util::Vector_2_AddElement(require(vector2), cs_arg0); }());});
}
for (pls::cs::Int32 num10 = 0; num10 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector2));}); ++num10) {
IntArray array3 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector2), num10);}));
if (array3[1] >= 3) {
pls::cs::Ref<PlayerData> playerData5 = require(instance)->pData_.get_Item(array3[0]);
fanBonusData = FanBonusData::GetFanBonusData(num, 0);
{ pls::cs::Ref<FanBonusData> cs_arg0 = fanBonusData; pls::cs::String cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(require(fanBonusData)->message_, require(playerData5)->name_);}); IntArray cs_arg2 = require(fanBonusData)->param; pls::cs::Int32 cs_arg3 = require(playerData5)->id_; FanBonusData::SetBPFData(cs_arg0, cs_arg1, cs_arg2, cs_arg3); }
}
}
}
} else if ((num == 6)) {
{
pls::cs::Ref<kl_java_util::Vector> fanBonusDataList6 = FanBonusData::GetFanBonusDataList(num);
for (pls::cs::Int32 num5 = 0; num5 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(fanBonusDataList6));}); ++num5) {
pls::cs::Ref<FanBonusData> fanBonusData9 = pls::cs::unbox<pls::cs::Ref<FanBonusData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(fanBonusDataList6), num5);}));
for (pls::cs::Int32 num6 = 0; num6 < 11; ++num6) {
pls::cs::Ref<PlayerData> playerData4 = pls::cs::unbox<pls::cs::Ref<PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(instance2)->memberPDataist_), num6);}));
if (require(playerData4)->matchNum_ == require(fanBonusData9)->termModeValue_) {
pls::cs::String topMessage4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(require(fanBonusData9)->message_, pls::cs::String::concat(pls::cs::String::concat(require(playerData4)->name_, literal(u"\t")), integer_string(require(playerData4)->matchNum_)));});
FanBonusData::SetBPFData(fanBonusData9, topMessage4, require(fanBonusData9)->param, require(playerData4)->id_);
}
}
}
}
} else if ((num == 7)) {
{
pls::cs::Ref<kl_java_util::Vector> fanBonusDataList5 = FanBonusData::GetFanBonusDataList(num);
for (pls::cs::Int32 num3 = 0; num3 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(fanBonusDataList5));}); ++num3) {
pls::cs::Ref<FanBonusData> fanBonusData8 = pls::cs::unbox<pls::cs::Ref<FanBonusData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(fanBonusDataList5), num3);}));
for (pls::cs::Int32 num4 = 0; num4 < 11; ++num4) {
pls::cs::Ref<PlayerData> playerData2 = pls::cs::unbox<pls::cs::Ref<PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(instance2)->memberPDataist_), num4);}));
if (require(playerData2)->game_goalConsecutive_ == require(fanBonusData8)->termModeValue_) {
pls::cs::String topMessage3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(require(fanBonusData8)->message_, pls::cs::String::concat(pls::cs::String::concat(require(playerData2)->name_, literal(u"\t")), integer_string(require(playerData2)->game_goalConsecutive_)));});
FanBonusData::SetBPFData(fanBonusData8, topMessage3, require(fanBonusData8)->param, require(playerData2)->id_);
}
}
}
}
} else if ((num == 8)) {
{
pls::cs::Ref<kl_java_util::Vector> fanBonusDataList3 = FanBonusData::GetFanBonusDataList(num);
for (pls::cs::Int32 l = 0; l < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(fanBonusDataList3));}); ++l) {
pls::cs::Ref<FanBonusData> fanBonusData6 = pls::cs::unbox<pls::cs::Ref<FanBonusData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(fanBonusDataList3), l);}));
for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(instance2)->memberPDataist_));}); ++m) {
pls::cs::Ref<PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(instance2)->memberPDataist_), m);}));
if (require(playerData)->game_goalTotal_ >= require(fanBonusData6)->termModeValue_ && require(playerData)->pri_game_goalTotal_ < require(fanBonusData6)->termModeValue_) {
pls::cs::String topMessage2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(require(fanBonusData6)->message_, pls::cs::String::concat(pls::cs::String::concat(require(playerData)->name_, literal(u"\t")), integer_string(require(playerData)->game_goalTotal_)));});
FanBonusData::SetBPFData(fanBonusData6, topMessage2, require(fanBonusData6)->param, require(playerData)->id_);
}
}
}
}
} else if ((num == 10)) {

} else if ((num == 11)) {
{
if ([&]() -> bool { auto cs_left = require(require(instance2)->gm_)->score_[0]; auto cs_right = require(require(instance2)->gm_)->score_[1]; return cs_left > cs_right; }()) {
pls::cs::Ref<SupervisorData> supervisorData = require(instance)->svisorData_.get_Item(require(instance2)->selectSupervisorId_);
pls::cs::Ref<kl_java_util::Vector> fanBonusDataList2 = FanBonusData::GetFanBonusDataList(num);
for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(fanBonusDataList2));}); ++k) {
pls::cs::Ref<FanBonusData> fanBonusData5 = pls::cs::unbox<pls::cs::Ref<FanBonusData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(fanBonusDataList2), k);}));
if (require(supervisorData)->winTotal_ == require(fanBonusData5)->termModeValue_) {
pls::cs::String topMessage = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(require(fanBonusData5)->message_, pls::cs::String::concat(pls::cs::String::concat(require(supervisorData)->name_, literal(u"\t")), integer_string(require(supervisorData)->winTotal_)));});
FanBonusData::SetBPFData(fanBonusData5, topMessage, require(fanBonusData5)->param, require(supervisorData)->id_);
break;
}
}
}
}
} else if ((num == 12)) {
{
pls::cs::Ref<kl_java_util::Vector> fanBonusDataList = FanBonusData::GetFanBonusDataList(num);
for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(fanBonusDataList));}); ++j) {
pls::cs::Ref<FanBonusData> fanBonusData4 = pls::cs::unbox<pls::cs::Ref<FanBonusData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(fanBonusDataList), j);}));
if (require(fanBonusData4)->state_ == 1) {
continue;
}
if (require(instance2)->customer_total_ >= pls::cs::cast_integral<pls::cs::Int64>(require(fanBonusData4)->termModeValue_ * 10000)) {
FanBonusData::SetBPFData(fanBonusData4, require(fanBonusData4)->message_, require(fanBonusData4)->param);
break;
}
}
}
}
}
}

}
} // namespace data
}
