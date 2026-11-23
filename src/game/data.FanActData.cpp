// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.BaseData.hpp"
#include "data.EventData.hpp"
#include "data.FanActData.hpp"
#include "data.FanBonusData.hpp"
#include "data.FormationData.hpp"
#include "data.LeagueData.hpp"
#include "data.MapchipMain.hpp"
#include "data.MapchipMatch.hpp"
#include "data.PlayerData.hpp"
#include "data.QuestMatchData.hpp"
#include "data.SponsorData.hpp"
#include "data.StadiumData.hpp"
#include "data.SupervisorData.hpp"
#include "data.TeamData.hpp"
#include "data.TenantData.hpp"
#include "data.TradeData.hpp"
#include "data.TrainingData.hpp"
#include "form.BootForm.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.SoccerForm.hpp"
#include "form.SubForm.hpp"
#include "form.TitleForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.DelayEvent.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.MapMain.hpp"
#include "game.MapObject.hpp"
#include "game.Player.hpp"
#include "game.TArea.hpp"
#include "game.TBall.hpp"
#include "game.TGroupArea.hpp"
#include "game.TPlayer.hpp"
#include "game.Team.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.lang.JRunnable.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.surface.SurfaceBase.MotionEventRecord.hpp"
#include "kairo.unity.surface.SurfaceBase.TouchPoint.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.DepthInfo.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.WorkValue.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.ui.TextLayout.TextBlock.hpp"
#include "kairo.unity.ui.TextLayout.hpp"
#include "main.AppData.hpp"
#include "surface.GamePad.hpp"
#include "surface.GameView.hpp"
#include "surface.TouchEffect.hpp"
#include "surface.TouchEffectManager.hpp"
#include "generated/java.util.JTool_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;
using IntArray3 = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>;

namespace pls::game {
namespace data {

void FanActData::trace_edges(const pls::cs::EdgeVisitor&visitor)const {BaseData::trace_edges(visitor);pls::cs::trace_value(name_,visitor);pls::cs::trace_value(effLimit_,visitor);pls::cs::trace_value(eff_,visitor);pls::cs::trace_value(cost_,visitor);pls::cs::trace_value(benefit_,visitor);pls::cs::trace_value(execsScript_,visitor);pls::cs::trace_value(explain_,visitor);}

static pls::cs::Ref<main::AppData> FanActData_apdat__storage{};

static StringArray FanActData_element_name_storage{};

static StringArray FanActData_element_name2_storage{};

static IntArray FanActData_fa_add_storage{};

static IntArray FanActData_fa_addRUp_storage{};

static IntArray FanActData_fa_id_storage{};

static pls::cs::Int32 FanActData_fa_rank_storage{};

static bool FanActData_fa_rankUp_storage{};

static pls::cs::Int32 FanActData_fa_result_storage{};

static IntArray FanActData_fa_resultSub_storage{};

static IntArray FanActData_fa_value_storage{};

static IntArray FanActData_FARESULT_RATE_storage{};

static pls::cs::Ref<game::UserData> FanActData_udat__storage{};

static PLS_NOINLINE void cs_init_ec7bde62b3c2b35f_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(FanActData_apdat__storage,visitor);pls::cs::trace_value(FanActData_element_name_storage,visitor);pls::cs::trace_value(FanActData_element_name2_storage,visitor);pls::cs::trace_value(FanActData_fa_add_storage,visitor);pls::cs::trace_value(FanActData_fa_addRUp_storage,visitor);pls::cs::trace_value(FanActData_fa_id_storage,visitor);pls::cs::trace_value(FanActData_fa_rank_storage,visitor);pls::cs::trace_value(FanActData_fa_rankUp_storage,visitor);pls::cs::trace_value(FanActData_fa_result_storage,visitor);pls::cs::trace_value(FanActData_fa_resultSub_storage,visitor);pls::cs::trace_value(FanActData_fa_value_storage,visitor);pls::cs::trace_value(FanActData_FARESULT_RATE_storage,visitor);pls::cs::trace_value(FanActData_udat__storage,visitor);});static pls::cs::TypeInitState state;state.run("data.FanActData",flag,[](){
FanActData_fa_value_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.fa_value",[&](){return IntArray::make(4);});
FanActData_fa_add_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.fa_add",[&](){return IntArray::make(4);});
FanActData_fa_addRUp_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.fa_addRUp",[&](){return IntArray::make(4);});
FanActData_fa_id_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.fa_id",[&](){return IntArray::make(4);});
FanActData_fa_rank_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.fa_rank",[&](){return 0;});
FanActData_fa_rankUp_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.fa_rankUp",[&](){return false;});
FanActData_fa_result_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.fa_result",[&](){return 0;});
FanActData_fa_resultSub_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.fa_resultSub",[&](){return IntArray::make(4);});
FanActData_FARESULT_RATE_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.FARESULT_RATE",[&](){return IntArray::from({10, 100, 100});});
FanActData_element_name_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.element_name",[&](){return StringArray::from({literal(u"ファン"), literal(u"応援熱"), literal(u"知名度"), literal(u"次のﾗﾝｸまで")});});
FanActData_element_name2_storage = pls::cs::evaluate_type_initializer_field("F:data.FanActData.element_name2",[&](){return StringArray::from({literal(u"ファン"), literal(u"応援熱"), literal(u"知名度")});});

});}

void FanActData::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_ec7bde62b3c2b35f_slow(flag);}

pls::cs::Ref<main::AppData>& FanActData::apdat_(){FanActData::ensure_initialized();return FanActData_apdat__storage;}

StringArray& FanActData::element_name(){FanActData::ensure_initialized();return FanActData_element_name_storage;}

StringArray& FanActData::element_name2(){FanActData::ensure_initialized();return FanActData_element_name2_storage;}

IntArray& FanActData::fa_add(){FanActData::ensure_initialized();return FanActData_fa_add_storage;}

IntArray& FanActData::fa_addRUp(){FanActData::ensure_initialized();return FanActData_fa_addRUp_storage;}

IntArray& FanActData::fa_id(){FanActData::ensure_initialized();return FanActData_fa_id_storage;}

pls::cs::Int32& FanActData::fa_rank(){FanActData::ensure_initialized();return FanActData_fa_rank_storage;}

bool& FanActData::fa_rankUp(){FanActData::ensure_initialized();return FanActData_fa_rankUp_storage;}

pls::cs::Int32& FanActData::fa_result(){FanActData::ensure_initialized();return FanActData_fa_result_storage;}

IntArray& FanActData::fa_resultSub(){FanActData::ensure_initialized();return FanActData_fa_resultSub_storage;}

IntArray& FanActData::fa_value(){FanActData::ensure_initialized();return FanActData_fa_value_storage;}

IntArray& FanActData::FARESULT_RATE(){FanActData::ensure_initialized();return FanActData_FARESULT_RATE_storage;}

pls::cs::Ref<game::UserData>& FanActData::udat_(){FanActData::ensure_initialized();return FanActData_udat__storage;}

void FanActData::create_init(pls::cs::Ref<FanActData> self) {
FanActData::ensure_initialized();
self->effLimit_ = IntArray::make(2);
self->eff_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2}));});
self->cost_ = IntArray::make(2);
self->benefit_ = IntArray::make(2);
self->execsScript_ = IntArray3::make(6);
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.#ctor",game);
{
FanActData::apdat_() = main::AppData::GetInstance();
FanActData::udat_() = game::UserData::GetInstance();
}

}

void FanActData::create_init(pls::cs::Ref<FanActData> self,pls::cs::String src) {
FanActData::ensure_initialized();
self->effLimit_ = IntArray::make(2);
self->eff_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2}));});
self->cost_ = IntArray::make(2);
self->benefit_ = IntArray::make(2);
self->execsScript_ = IntArray3::make(6);
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.#ctor(System.String)",game);
{
FanActData::apdat_() = main::AppData::GetInstance();
FanActData::udat_() = game::UserData::GetInstance();
self->Init();
self->Load(src);
}

}

// M:data.FanActData.#ctor
pls::cs::Ref<FanActData> FanActData::create() {
FanActData::ensure_initialized();
 auto self = pls::cs::make_ref<FanActData>(); FanActData::create_init(self); return self; 
}

// M:data.FanActData.#ctor(System.String)
pls::cs::Ref<FanActData> FanActData::create(pls::cs::String src) {
FanActData::ensure_initialized();
 auto self = pls::cs::make_ref<FanActData>(); FanActData::create_init(self,src); return self; 
}

// M:data.FanActData.Init
void FanActData::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.Init",game);
{
rank_ = 0;
rankPoint_ = 0;
state_ = 0;
stateCnt_ = 0;
new_ = false;
}
}

// M:data.FanActData.Load(System.String)
void FanActData::Load(pls::cs::String src) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.Load(System.String)",game);
{
pls::cs::Int32 num = 0;
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(src, literal(u"\t"));});
id_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
name_ = array[num++];
type_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
icon_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
for (pls::cs::Int32 i = 0; i < effLimit_.length(); ++i) {
{ auto cs_target = effLimit_; auto cs_index = i; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});cs_target.set_Item(cs_index,cs_value);}
}
for (pls::cs::Int32 j = 0; j < eff_.length(); ++j) {
for (pls::cs::Int32 k = 0; k < eff_[j].length(); ++k) {
{ auto cs_target = eff_[j]; auto cs_index = k; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});cs_target.set_Item(cs_index,cs_value);}
}
}
costType_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
for (pls::cs::Int32 l = 0; l < cost_.length(); ++l) {
{ auto cs_target = cost_; auto cs_index = l; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});cs_target.set_Item(cs_index,cs_value);}
}
for (pls::cs::Int32 m = 0; m < benefit_.length(); ++m) {
{ auto cs_target = benefit_; auto cs_index = m; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});cs_target.set_Item(cs_index,cs_value);}
}
difficult_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
for (pls::cs::Int32 n = 0; n < execsScript_.length(); ++n) {
{ auto cs_target = execsScript_; auto cs_index = n; auto cs_value = EventData::ReadScript(array[num++]);cs_target.set_Item(cs_index,cs_value);}
}
explain_ = array[num++];
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
}
}

// M:data.FanActData.NewGame
void FanActData::NewGame() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.NewGame",game);
{
state_ = 0;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 1);})) {
ChangeState(1);
new_ = false;
}
}
}

// M:data.FanActData.Serialize(java.io.OutputStream)
void FanActData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(rank_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, rankPoint_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, stateCnt_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteBoolean(os, new_);});
}
}

// M:data.FanActData.Deserialize(java.io.InputStream)
void FanActData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.Deserialize(java.io.InputStream)",game);
{
rank_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
rankPoint_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
state_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
stateCnt_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
new_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBoolean(stream);});
}
}

// M:data.FanActData.ChangeState(System.Int32)
void FanActData::ChangeState(pls::cs::Int32 state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.ChangeState(System.Int32)",game);
{
if (state_ == 0 && state == 1) {
new_ = true;
}
state_ = state;
stateCnt_ = 0;
}
}

// M:data.FanActData.Update
void FanActData::Update() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.Update",game);
{
if (state_ != 2) {
return;
}
++stateCnt_;
if (stateCnt_ >= 200) {
pls::cs::Ref<form::SubForm> subForm = form::SubForm::create(41);
require(subForm)->fanActData_ = this;
require(FanActData::apdat_())->Push(subForm);
ChangeState(1);
}
}
}

// M:data.FanActData.GetFanDispParam(System.Int32,System.Int32)
pls::cs::Int32 FanActData::GetFanDispParam(pls::cs::Int32 eva,pls::cs::Int32 F_ID) {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.GetFanDispParam(System.Int32,System.Int32)",game);
{
if ((F_ID == 0)) {
return game::GameUtil::RateConvert(eva, 0, 10000, 0, 100000, true);
} else if ((F_ID == 1)) {
return game::GameUtil::RateConvert(eva, 0, 1000, 0, 100, true);
} else if ((F_ID == 2)) {
return game::GameUtil::RateConvert(eva, 0, 10000, 0, 1000, true);
} else {
return 0;
}
}

}

// M:data.FanActData.GetDispParamToEva(System.Int32,System.Int32)
pls::cs::Int32 FanActData::GetDispParamToEva(pls::cs::Int32 dispParam,pls::cs::Int32 F_ID) {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.GetDispParamToEva(System.Int32,System.Int32)",game);
{
if ((F_ID == 0)) {
{
pls::cs::Int32 num = game::GameUtil::RateConvert(dispParam, 0, 100000, 0, 10000, true);
return game::GameUtil::RateConvert(dispParam, 0, 100000, 0, 10000, true);
}
} else if ((F_ID == 1)) {
return game::GameUtil::RateConvert(dispParam, 0, 100, 0, 1000, true);
} else if ((F_ID == 2)) {
return game::GameUtil::RateConvert(dispParam, 0, 1000, 0, 10000, true);
} else {
return 0;
}
}

}

// M:data.FanActData.GetFanAddParamNum(System.Int32,System.Int32)
pls::cs::Int32 FanActData::GetFanAddParamNum(pls::cs::Int32 eva,pls::cs::Int32 F_ID) {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.GetFanAddParamNum(System.Int32,System.Int32)",game);
{
if (eva == 0) {
return 0;
}
if ((F_ID == 0)) {
if (eva <= 60) {
return 1;
}
if (eva < 200) {
return 2;
}
return 3;
} else if ((F_ID == 1)) {
if (eva < 200) {
return 1;
}
if (eva < 800) {
return 2;
}
return 3;
} else if ((F_ID == 2)) {
if (eva <= 60) {
return 1;
}
if (eva < 120) {
return 2;
}
return 3;
} else {
return 0;
}
}

}

// M:data.FanActData.GetFanEva(System.Int32)
pls::cs::Int32 FanActData::GetFanEva(pls::cs::Int32 F_ID) {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.GetFanEva(System.Int32)",game);
{
pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
if ((F_ID == 0)) {
return require(instance)->fanParam_[0];
} else if ((F_ID == 1)) {
return require(instance)->fanParam_[1];
} else if ((F_ID == 2)) {
return require(instance)->fanParam_[2];
} else {
return 0;
}
}

}

// M:data.FanActData.GetAddEvaLimitOver(System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Int32 FanActData::GetAddEvaLimitOver(pls::cs::Int32 F_ID,pls::cs::Int32 eva,pls::cs::Int32 add_eva,pls::cs::Int32 limit) {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.GetAddEvaLimitOver(System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::cs::Int32 num = eva + add_eva;
pls::cs::Int32 num2 = 0;
if ((F_ID == 0)) {
if (num > 10000 * limit / 100) {
num2 = num - 10000 * limit / 100;
add_eva = main::AppData::ClampMin(add_eva - num2, 0);
}
} else if ((F_ID == 1)) {
if (num > 1000 * limit / 100) {
num2 = num - 1000 * limit / 100;
add_eva = main::AppData::ClampMin(add_eva - num2, 0);
}
} else if ((F_ID == 2)) {
if (num > 10000 * limit / 100) {
num2 = num - 10000 * limit / 100;
add_eva = main::AppData::ClampMin(add_eva - num2, 0);
}
}
return add_eva;
}

}

// M:data.FanActData.GetFanEvaToCommonValue(System.Int32)
pls::cs::Int32 FanActData::GetFanEvaToCommonValue(pls::cs::Int32 F_ID) {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.GetFanEvaToCommonValue(System.Int32)",game);
{
if ((F_ID == 0)) {
return game::GameUtil::RateConvert(require(FanActData::udat_())->fanParam_[0], 0, 10000, 0, 1000, true);
} else if ((F_ID == 1)) {
return game::GameUtil::RateConvert(require(FanActData::udat_())->fanParam_[1], 0, 1000, 0, 1000, true);
} else if ((F_ID == 2)) {
return game::GameUtil::RateConvert(require(FanActData::udat_())->fanParam_[2], 0, 10000, 0, 1000, true);
} else {
return 0;
}
}

}

// M:data.FanActData.AddFanParam(System.Int32,System.Int32)
void FanActData::AddFanParam(pls::cs::Int32 add_eva,pls::cs::Int32 F_ID) {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.AddFanParam(System.Int32,System.Int32)",game);
{
pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
if ((F_ID == 0)) {
{ auto cs_target = require(instance)->fanParam_; auto cs_index = 0; auto cs_value = main::AppData::ClampMax(require(instance)->fanParam_[0] + add_eva, 10000);cs_target.set_Item(cs_index,cs_value);}
} else if ((F_ID == 1)) {
{ auto cs_target = require(instance)->fanParam_; auto cs_index = 1; auto cs_value = main::AppData::ClampMax(require(instance)->fanParam_[1] + add_eva, 1000);cs_target.set_Item(cs_index,cs_value);}
} else if ((F_ID == 2)) {
{ auto cs_target = require(instance)->fanParam_; auto cs_index = 2; auto cs_value = main::AppData::ClampMax(require(instance)->fanParam_[2] + add_eva, 10000);cs_target.set_Item(cs_index,cs_value);}
}
}

}

// M:data.FanActData.AddRankUpParam(System.Int32,data.FanActData)
void FanActData::AddRankUpParam(pls::cs::Int32 add_eva,pls::cs::Ref<FanActData> fa_data) {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.AddRankUpParam(System.Int32,data.FanActData)",game);
{
require(fa_data)->rankPoint_ = require(fa_data)->rankPoint_ + add_eva;
if (require(fa_data)->rankPoint_ >= 100 && require(fa_data)->rank_ < 6) {
require(fa_data)->rankPoint_ = require(fa_data)->rankPoint_ - 100;
FanActData::RankUp(fa_data);
}
}

}

// M:data.FanActData.RankUp(data.FanActData)
void FanActData::RankUp(pls::cs::Ref<FanActData> fa_data) {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.RankUp(data.FanActData)",game);
{
if (require(fa_data)->rank_ >= 6) {
return;
}
{
++require(fa_data)->rank_;
}
}

}

// M:data.FanActData.ChangeAssistAddEva(System.Int32)
pls::cs::Int32 FanActData::ChangeAssistAddEva(pls::cs::Int32 add_eva) {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.ChangeAssistAddEva(System.Int32)",game);
{
pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
pls::cs::Int32 num = require(instance)->fanParam_[1] - add_eva;
pls::cs::Int32 result = game::GameUtil::RateConvert(num, -500, 500, 300, 10, true);
if (num >= 500) {
result = 0;
}
return result;
}

}

// M:data.FanActData.IsExistNew
bool FanActData::IsExistNew() {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.IsExistNew",game);
{
if (!require(game::UserData::GetInstance())->ChEventFlg(2)) {
return false;
}
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
for (pls::cs::Int32 i = 0; i < require(instance)->fanActData_.length(); ++i) {
if (require(require(instance)->fanActData_.get_Item(i))->IsNew()) {
return true;
}
}
return false;
}

}

// M:data.FanActData.RemoveNew
void FanActData::RemoveNew() {
FanActData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.RemoveNew",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
for (pls::cs::Int32 i = 0; i < require(instance)->fanActData_.length(); ++i) {
require(require(instance)->fanActData_.get_Item(i))->new_ = false;
}
}

}

// M:data.FanActData.IsNew
bool FanActData::IsNew() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FanActData.IsNew",game);
{
if (new_) {
return true;
}
return false;
}
}
} // namespace data
}
