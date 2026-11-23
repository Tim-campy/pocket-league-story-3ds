// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.BaseData.hpp"
#include "data.EventData.hpp"
#include "data.QuestMatchData.hpp"
#include "data.TeamData.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "main.AppData.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace data {

void QuestMatchData::trace_edges(const pls::cs::EdgeVisitor&visitor)const {BaseData::trace_edges(visitor);pls::cs::trace_value(name_,visitor);pls::cs::trace_value(matchEnemy_,visitor);pls::cs::trace_value(execsScript_,visitor);pls::cs::trace_value(execsScript2_,visitor);pls::cs::trace_value(explain_,visitor);}

static pls::cs::Ref<main::AppData> QuestMatchData_apdat__storage{};

static pls::cs::Ref<game::UserData> QuestMatchData_udat__storage{};

static PLS_NOINLINE void cs_init_3e5b0d35ae6be8e7_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(QuestMatchData_apdat__storage,visitor);pls::cs::trace_value(QuestMatchData_udat__storage,visitor);});static pls::cs::TypeInitState state;state.run("data.QuestMatchData",flag,[](){

});}

void QuestMatchData::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_3e5b0d35ae6be8e7_slow(flag);}

pls::cs::Ref<main::AppData>& QuestMatchData::apdat_(){QuestMatchData::ensure_initialized();return QuestMatchData_apdat__storage;}

pls::cs::Ref<game::UserData>& QuestMatchData::udat_(){QuestMatchData::ensure_initialized();return QuestMatchData_udat__storage;}

void QuestMatchData::create_init(pls::cs::Ref<QuestMatchData> self) {
QuestMatchData::ensure_initialized();
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.#ctor",game);
{
QuestMatchData::apdat_() = main::AppData::GetInstance();
QuestMatchData::udat_() = game::UserData::GetInstance();
}

}

void QuestMatchData::create_init(pls::cs::Ref<QuestMatchData> self,pls::cs::String src) {
QuestMatchData::ensure_initialized();
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.#ctor(System.String)",game);
{
QuestMatchData::apdat_() = main::AppData::GetInstance();
QuestMatchData::udat_() = game::UserData::GetInstance();
self->Init();
self->Load(src);
}

}

// M:data.QuestMatchData.#ctor
pls::cs::Ref<QuestMatchData> QuestMatchData::create() {
QuestMatchData::ensure_initialized();
 auto self = pls::cs::make_ref<QuestMatchData>(); QuestMatchData::create_init(self); return self; 
}

// M:data.QuestMatchData.#ctor(System.String)
pls::cs::Ref<QuestMatchData> QuestMatchData::create(pls::cs::String src) {
QuestMatchData::ensure_initialized();
 auto self = pls::cs::make_ref<QuestMatchData>(); QuestMatchData::create_init(self,src); return self; 
}

// M:data.QuestMatchData.Init
void QuestMatchData::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.Init",game);
{
state_ = 0;
trophy_ = 0;
new_ = false;
}
}

// M:data.QuestMatchData.Load(System.String)
void QuestMatchData::Load(pls::cs::String src) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.Load(System.String)",game);
{
pls::cs::Int32 num = 0;
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Split(src, literal(u"\t"));});
id_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
name_ = array[num++];
matchForm_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
matchEnemy_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::SplitIntegers(array[num++], literal(u","));});
matchLeague_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
execsScript_ = EventData::ReadScript(array[num++]);
execsScript2_ = EventData::ReadScript(array[num++]);
victoryPrize_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
matchPrize_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
joinCost_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
schedule_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
rank_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
explain_ = array[num++];
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
}
}

// M:data.QuestMatchData.NewGame
void QuestMatchData::NewGame() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.NewGame",game);
{
state_ = 0;
trophy_ = 0;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::BitUtil::Check(flag_, 1);})) {
ChangeState(1);
}
}
}

// M:data.QuestMatchData.Serialize(java.io.OutputStream)
void QuestMatchData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(trophy_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteBoolean(os, new_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(matchEnemy_.length()));});
for (pls::cs::Int32 i = 0; i < matchEnemy_.length(); ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(matchEnemy_[i]));});
}
}
}

// M:data.QuestMatchData.Deserialize(java.io.InputStream)
void QuestMatchData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.Deserialize(java.io.InputStream)",game);
{
state_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadShort(stream);}));
trophy_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadShort(stream);}));
new_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadBoolean(stream);});
pls::cs::Int32 num = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadShort(stream);}));
matchEnemy_ = IntArray::make(num);
for (pls::cs::Int32 i = 0; i < matchEnemy_.length(); ++i) {
{ auto cs_target = matchEnemy_; auto cs_index = i; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadShort(stream);}));cs_target.set_Item(cs_index,cs_value);}
}
}
}

// M:data.QuestMatchData.ChangeState(System.Int32)
void QuestMatchData::ChangeState(pls::cs::Int32 next_state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.ChangeState(System.Int32)",game);
{
if (state_ == 0 && next_state != 0) {
new_ = true;
}
state_ = next_state;
}
}

// M:data.QuestMatchData.SetGenericData
void QuestMatchData::SetGenericData() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.SetGenericData",game);
{
pls::cs::Int32 num = 0;
for (pls::cs::Int32 i = 0; i < matchEnemy_.length(); ++i) {
pls::cs::Ref<TeamData> teamData = require(QuestMatchData::apdat_())->tData_.get_Item(matchEnemy_[i]);
num += require(teamData)->warPotential_;
}
pls::cs::Single num2 = game::GameUtil::RateConvertFloat(matchEnemy_.length(), 1.0f, 10.0f, 1.0f, 5.0f, true);
pls::cs::Single num3 = game::GameUtil::RateConvertFloat(matchEnemy_.length(), 1.0f, 10.0f, 1.0f, 2.0f, true);
pls::cs::Int32 x = pls::cs::to_int32((pls::cs::Single((num / matchEnemy_.length())) * num2));
pls::cs::Int32 x2 = pls::cs::to_int32((pls::cs::Single((num / matchEnemy_.length())) * num3));
joinCost_ = game::GameUtil::RateConvert(x, 0, 1000, 50, 2000, false);
joinCost_ = main::AppData::ClampMin(joinCost_ - joinCost_ % 100, 100);
rank_ = game::GameUtil::RateConvert(x2, 0, 1300, 0, 6, true);
}
}

// M:data.QuestMatchData.RegistQuestMatch(System.Int32)
void QuestMatchData::RegistQuestMatch(pls::cs::Int32 qmId) {
QuestMatchData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.RegistQuestMatch(System.Int32)",game);
{
pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
require(instance)->SetMatchInfoJoin(1);
require(instance)->selectQmId_ = qmId;
require(instance)->battleQmIndex_ = 0;
require(instance)->matchFlgVictory_ = 0;
}

}

// M:data.QuestMatchData.SetGetTrophy(System.Int32)
void QuestMatchData::SetGetTrophy(pls::cs::Int32 trophy) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.SetGetTrophy(System.Int32)",game);
{
if (trophy_ < trophy) {
trophy_ = trophy;
}
}
}

// M:data.QuestMatchData.IsVictoryQuestMatch
bool QuestMatchData::IsVictoryQuestMatch() {
QuestMatchData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.IsVictoryQuestMatch",game);
{
pls::cs::Int32 matchInfoJoin = require(QuestMatchData::udat_())->GetMatchInfoJoin();
if (matchInfoJoin != 1) {
return false;
}
if (require(QuestMatchData::udat_())->matchFlgVictory_ == 1) {
return false;
}
pls::cs::Ref<QuestMatchData> questMatchData = require(QuestMatchData::apdat_())->qmData_.get_Item(require(QuestMatchData::udat_())->selectQmId_);
if (require(QuestMatchData::udat_())->battleQmIndex_ == pls::cs::Int32(require(questMatchData)->matchEnemy_.length()) - 1 && ([&]() -> bool { auto cs_left = require(require(QuestMatchData::udat_())->gm_)->score_[0]; auto cs_right = require(require(QuestMatchData::udat_())->gm_)->score_[1]; return cs_left > cs_right; }())) {
return true;
}
return false;
}

}

// M:data.QuestMatchData.IsVictoryMatch
bool QuestMatchData::IsVictoryMatch() {
QuestMatchData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.IsVictoryMatch",game);
{
pls::cs::Int32 matchInfoJoin = require(QuestMatchData::udat_())->GetMatchInfoJoin();
if (matchInfoJoin != 1) {
return false;
}
if (require(QuestMatchData::udat_())->matchFlgVictory_ == 1) {
return false;
}
pls::cs::Ref<QuestMatchData> questMatchData = require(QuestMatchData::apdat_())->qmData_.get_Item(require(QuestMatchData::udat_())->selectQmId_);
if (require(questMatchData)->matchEnemy_.length() == 1) {
return false;
}
if (require(QuestMatchData::udat_())->battleQmIndex_ == pls::cs::Int32(require(questMatchData)->matchEnemy_.length()) - 1) {
return true;
}
return false;
}

}

// M:data.QuestMatchData.IsExistNew
bool QuestMatchData::IsExistNew() {
QuestMatchData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.IsExistNew",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
for (pls::cs::Int32 i = 0; i < require(instance)->qmData_.length(); ++i) {
if (require(require(instance)->qmData_.get_Item(i))->IsNew()) {
return true;
}
}
return false;
}

}

// M:data.QuestMatchData.RemoveNew
void QuestMatchData::RemoveNew() {
QuestMatchData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.RemoveNew",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
for (pls::cs::Int32 i = 0; i < require(instance)->qmData_.length(); ++i) {
require(require(instance)->qmData_.get_Item(i))->new_ = false;
}
}

}

// M:data.QuestMatchData.IsNew
bool QuestMatchData::IsNew() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.QuestMatchData.IsNew",game);
{
if (new_) {
return true;
}
return false;
}
}
} // namespace data
}
