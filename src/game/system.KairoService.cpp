// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "form.FormManager.hpp"
#include "form.SubForm.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureProperty.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.system.lineup.ui.LineupData.hpp"
#include "kairo.unity.system.lineup.ui.LineupManager.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "main.AppData.hpp"
#include "system.KairoService.hpp"
#include "system.KairoText.hpp"
#include "system.billing.MyBilling.hpp"
#include "system.billing.ui.BillingItem.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.form.ConnectForm.hpp"
#include "system.form.FriendForm.hpp"
#include "system.form.LineupForm.hpp"
#include "system.friend.MyFriend.hpp"
#include "system.friend.ui.Friend.hpp"
#include "system.friend.ui.FriendData.hpp"
#include "system.lineup.MyLineup.hpp"
#include "generated/java.util.Vector_1_templates.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace system {

void KairoService::trace_edges(const pls::cs::EdgeVisitor&visitor)const {KairoBase::trace_edges(visitor);pls::cs::trace_value(provideThread_,visitor);}

static pls::cs::Ref<main::AppData> KairoService_apdat__storage{};

static pls::cs::Ref<billing::MyBilling> KairoService_billing__storage{};

static pls::cs::Ref<friend_::MyFriend> KairoService_friend__storage{};

static pls::cs::Ref<lineup::MyLineup> KairoService_lineup__storage{};

static PLS_NOINLINE void cs_init_925b3cf054e42b78_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(KairoService_apdat__storage,visitor);pls::cs::trace_value(KairoService_billing__storage,visitor);pls::cs::trace_value(KairoService_friend__storage,visitor);pls::cs::trace_value(KairoService_lineup__storage,visitor);});static pls::cs::TypeInitState state;state.run("system.KairoService",flag,[](){

});}

void KairoService::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_925b3cf054e42b78_slow(flag);}

pls::cs::Ref<main::AppData>& KairoService::apdat_(){KairoService::ensure_initialized();return KairoService_apdat__storage;}

pls::cs::Ref<billing::MyBilling>& KairoService::billing_(){KairoService::ensure_initialized();return KairoService_billing__storage;}

pls::cs::Ref<friend_::MyFriend>& KairoService::friend_(){KairoService::ensure_initialized();return KairoService_friend__storage;}

pls::cs::Ref<lineup::MyLineup>& KairoService::lineup_(){KairoService::ensure_initialized();return KairoService_lineup__storage;}

void KairoService::create_init(pls::cs::Ref<KairoService> self) {
KairoService::ensure_initialized();
self->autoProvision_ = true;
self->lastFormId_ = -1;
KairoBase::create_init(pls::cs::static_pointer_cast<KairoBase>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.#ctor",game);
{
KairoService::apdat_() = main::AppData::GetInstance();
KairoService::billing_() = billing::MyBilling::GetInstance();
KairoService::friend_() = friend_::MyFriend::GetInstance();
KairoService::lineup_() = lineup::MyLineup::GetInstance();
}

}

// M:system.KairoService.#ctor
pls::cs::Ref<KairoService> KairoService::create() {
KairoService::ensure_initialized();
 auto self = pls::cs::make_ref<KairoService>(); KairoService::create_init(self); return self; 
}

// M:system.KairoService.GetInstance
pls::cs::Ref<KairoService> KairoService::GetInstance() {
KairoService::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.GetInstance",game);
{
KairoBase::ensure_initialized();

if (is_null(KairoBase::instance_())) {
KairoBase::instance_() = KairoService::create();
}
return pls::cs::unbox<pls::cs::Ref<KairoService>>(pls::cs::box(KairoBase::instance_()));

}

}

// M:system.KairoService.OnInit
void KairoService::OnInit() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.OnInit",game);
{
require(KairoService::billing_())->Init();
require(KairoService::friend_())->Init();
require(KairoService::lineup_())->Init();
}
}

// M:system.KairoService.OnStart
void KairoService::OnStart() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.OnStart",game);
{
kl_cfg::Config::ensure_initialized();

pls::cs::Ref<pls::game::form::FormManager> instance = pls::game::form::FormManager::GetInstance();
if ([&]() -> bool { auto cs_left = appliVersion_; auto cs_right = GetLatestVersion(); return cs_left < cs_right; }()) {
pls::cs::Ref<pls::game::form::SubForm> subForm = pls::game::form::SubForm::MakeDialog(KairoText::LT(literal(u"ｱﾌﾟﾘのﾊﾞｰｼﾞｮﾝｱｯﾌﾟを行います")));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Push(subForm);});
while (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(subForm)->CheckUsable();})) {
try {
java::lang::JThread::Sleep(10ll);
} catch(const pls::cs::Exception& cs_caught_282) {pls::cs::capture_exception(cs_caught_282);
{

}}
}
pls::cs::String packageName = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->GetPackageName();});
kairo::unity::ui::Canvas::OpenBrowser(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"market://details?id="), packageName), literal(u"&referrer=utm_source%3Dappli%26utm_medium%3Dhouse_ad%26utm_content%3D")), packageName), literal(u"_lite%26utm_campaign%3Dbanner")));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->RemoveAllForms();});
return;
}
for (pls::cs::Int32 i = 0; i < 3; ++i) {
try {
require(KairoService::billing_())->UpdateBillingItems(false);
require(KairoService::billing_())->UpdateApplyTask(false);
break;
} catch(const pls::cs::Exception& cs_caught_283) {pls::cs::capture_exception(cs_caught_283);
{
java::lang::JThread::Sleep(1000ll);
}}
}
if (CheckUserId() && !require(KairoService::friend_())->CheckRegistFriend()) {
pls::cs::Ref<form::FriendForm> friendForm = form::FriendForm::create(0);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Push(friendForm);});
while (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(friendForm)->CheckUsable();})) {
try {
java::lang::JThread::Sleep(10ll);
} catch(const pls::cs::Exception& cs_caught_284) {pls::cs::capture_exception(cs_caught_284);
{

}}
}
require(KairoService::friend_())->UpdateRandomFriend();
}
if (require(KairoService::friend_())->CheckRegistFriend()) {
try {
{ auto cs_receiver = KairoService::friend_(); pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(require(KairoService::friend_())->friSave_)->strs.get_Item(0));}); pls::cs::Int64 cs_arg1 = pls::cs::cast_integral<pls::cs::Int64>(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(require(KairoService::friend_())->friSave_)->ints.get_Item(1))->Get();})); require(cs_receiver)->CgiRegistFriend(cs_arg0, cs_arg1); }
require(KairoService::friend_())->RefreshFriendList();
} catch(const pls::cs::Exception& cs_caught_285) {auto t=pls::cs::capture_exception(cs_caught_285);
{
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}
}}
if ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(KairoService::friend_())->friendList_));}); auto cs_right = require(KairoService::friend_())->FRIEND_MAX; return cs_left < cs_right; }()) {
require(KairoService::friend_())->UpdateRandomFriend();
}
}
pls::cs::Ref<billing::ui::BillingItem> item = require(KairoService::billing_())->GetItem(0);
if (require(item)->GetState() == 0 && startCount_ > 1) {
require(KairoService::lineup_())->Start();
}
pls::cs::Ref<lineup::MyLineup> instance2 = lineup::MyLineup::GetInstance();
pls::cs::Ref<form::LineupForm> lineupForm = pls::cs::Ref<form::LineupForm>{};
if (require(instance2)->CheckShowableLineup()) {
lineupForm = form::LineupForm::create(0);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Push(lineupForm);});
while (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(lineupForm)->CheckUsable();})) {
try {
java::lang::JThread::Sleep(10ll);
} catch(const pls::cs::Exception& cs_caught_286) {pls::cs::capture_exception(cs_caught_286);
{

}}
}
try {
java::lang::JThread::Sleep(500ll);
} catch(const pls::cs::Exception& cs_caught_287) {pls::cs::capture_exception(cs_caught_287);
{

}}
}

}
}

// M:system.KairoService.Connected(System.String,System.Byte[],System.Boolean)
void KairoService::Connected(pls::cs::String cgi,ByteArray send,bool split) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.Connected(System.String,System.Byte[],System.Boolean)",game);
{
KairoBase::Connected(cgi, send, split);
if (login_) {
try {
pls::cs::Ref<billing::ui::BillingManager> instance = billing::ui::BillingManager::GetInstance();
require(instance)->ConnectRegistMarketPurchase();
} catch(const pls::cs::Exception& cs_caught_281) {pls::cs::capture_exception(cs_caught_281);
{

}}
}
}
}

// M:system.KairoService.Update
void KairoService::Update() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.Update",game);
{
KairoBase::Update();
if (!start_) {
return;
}
pls::cs::Ref<pls::game::form::FormManager> instance = pls::game::form::FormManager::GetInstance();
pls::cs::Ref<pls::kairo::FormBase> form = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->GetForm(0);});
if (autoProvision_ && ([&]() { pls::cs::Ref<java::lang::JThread> cs_left = provideThread_; pls::cs::Ref<java::lang::JThread> cs_right = pls::cs::Ref<java::lang::JThread>{}; return java::lang::JThread::op_Equality(cs_left,cs_right); }()) && ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(form)->GetId();}); auto cs_right = lastFormId_; return cs_left != cs_right; }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(form)->GetId();}) != 0) {
if (require(KairoService::billing_())->CheckNextConsume()) {
provideThread_ = java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(pls::cs::raw(this),std::string("M:system.KairoService.Update:4117"),[self=this]() -> void {{
kl_cfg::Config::ensure_initialized();
form::ConnectForm::ensure_initialized();

pls::cs::run_finally([&]() {try {
pls::cs::Ref<billing::ui::BillingManager> instance2 = billing::ui::BillingManager::GetInstance();
require(instance2)->RegistApplyTask(true);
require(instance2)->UpdateApplyTask(true);
if (require(instance2)->CheckNextConsume()) {
self->autoProvision_ = false;
}
} catch(const pls::cs::Exception& cs_caught_298) {auto t=pls::cs::capture_exception(cs_caught_298);
{
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}
self->autoProvision_ = false;
}}}, [&]() {
form::ConnectForm::close_() = true;
self->provideThread_ = pls::cs::Ref<java::lang::JThread>{};
});

}},this));
require(provideThread_)->Start();
try {
java::lang::JThread::Sleep(20ll);
} catch(const pls::cs::Exception& cs_caught_299) {pls::cs::capture_exception(cs_caught_299);
{

}}
if ([&]() { pls::cs::Ref<java::lang::JThread> cs_left = provideThread_; pls::cs::Ref<java::lang::JThread> cs_right = pls::cs::Ref<java::lang::JThread>{}; return java::lang::JThread::op_Inequality(cs_left,cs_right); }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = form::ConnectForm::create(); return require(instance)->Push(cs_arg0); }());});
}
} else {
require(KairoService::billing_())->UpdateApplyTask(true);
}
}
lastFormId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(form)->GetId();});
}
}

// M:system.KairoService.Finish
void KairoService::Finish() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.Finish",game);
{
if (!is_null(KairoService::billing_())) {
require(KairoService::billing_())->Finish();
}
KairoBase::Finish();
}
}

// M:system.KairoService.OnLoad(java.io.InputStream)
void KairoService::OnLoad(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.OnLoad(java.io.InputStream)",game);
{
{ auto cs_receiver = KairoService::billing_(); ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBool(stream, true);}); require(cs_receiver)->Load(cs_arg0); }
{ auto cs_receiver = KairoService::friend_(); ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBool(stream, true);}); require(cs_receiver)->Load(cs_arg0); }
{ auto cs_receiver = KairoService::lineup_(); ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBool(stream, true);}); require(cs_receiver)->Load(cs_arg0); }
}
}

// M:system.KairoService.OnWrite(java.io.OutputStream)
void KairoService::OnWrite(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.OnWrite(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(os, require(KairoService::billing_())->Write(), true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(os, require(KairoService::friend_())->Write(), true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(os, require(KairoService::lineup_())->Write(), true);});
}
}

// M:system.KairoService.OnNewGame(System.Boolean)
void KairoService::OnNewGame(bool take) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.OnNewGame(System.Boolean)",game);
{
require(KairoService::billing_())->NewGame(take);
require(KairoService::friend_())->NewGame(take);
}
}

// M:system.KairoService.OnLoadGame(java.io.InputStream)
void KairoService::OnLoadGame(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.OnLoadGame(java.io.InputStream)",game);
{
{ auto cs_receiver = KairoService::billing_(); ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBool(stream, true);}); require(cs_receiver)->LoadGame(cs_arg0); }
{ auto cs_receiver = KairoService::friend_(); ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBool(stream, true);}); require(cs_receiver)->LoadGame(cs_arg0); }
}
}

// M:system.KairoService.OnWriteGame(java.io.OutputStream)
void KairoService::OnWriteGame(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.OnWriteGame(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(os, require(KairoService::billing_())->WriteGame(), true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(os, require(KairoService::friend_())->WriteGame(), true);});
}
}

// M:system.KairoService.Save
void KairoService::Save() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.Save",game);
{
require(KairoService::apdat_())->SaveSystem();
}
}

// M:system.KairoService.SaveAll
void KairoService::SaveAll() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.KairoService.SaveAll",game);
{
if (!is_null(require(KairoService::apdat_())->save_)) {
require(KairoService::apdat_())->SaveGame(true);
require(KairoService::apdat_())->SaveGame(false);
}
require(KairoService::apdat_())->SaveSystem();
}
}
} // namespace system
}
