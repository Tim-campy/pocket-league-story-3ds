// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.ByteArrayOutputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JLong.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JLocale.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Base64.hpp"
#include "generated/kairo.unity.util.Compressor.hpp"
#include "generated/kairo.unity.util.EncodeUtil.hpp"
#include "generated/kairo.unity.util.Encrypter.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureNumber.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.lang.JThread.hpp"
#include "java.lang.StringEx.hpp"
#include "java.net.URLEncoder.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.io.HttpObject.hpp"
#include "kairo.unity.native.KairoPlugin.hpp"
#include "kairo.unity.system.GameDataRecord.hpp"
#include "kairo.unity.system.KairoBase.AccessCount.hpp"
#include "kairo.unity.system.KairoBase.ConnectObject.hpp"
#include "kairo.unity.system.KairoBase.ConnectTask.hpp"
#include "kairo.unity.system.KairoBase.KairoDummy.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.system.appli.GameAppli.hpp"
#include "kairo.unity.system.notification.ui.NotifyManager.hpp"
#include "kairo.unity.system.payment.IllegalPurchaseException.hpp"
#include "kairo.unity.system.payment.PaymentDataRecord.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.util.ClockTime.hpp"
#include "kairo.unity.util.Language.hpp"
#include "kairo.unity.util.MD5.hpp"
#include "kairo.unity.util.SecureNumber.hpp"
#include "kairo.unity.util.StringUtil.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::system {

void KairoBase::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(host_,visitor);pls::cs::trace_value(pubHost_,visitor);pls::cs::trace_value(userId_,visitor);pls::cs::trace_value(friendId_,visitor);pls::cs::trace_value(flag_,visitor);pls::cs::trace_value(accessCounter_,visitor);pls::cs::trace_value(userCounter_,visitor);pls::cs::trace_value(arguments_,visitor);pls::cs::trace_value(argumentsInt_,visitor);pls::cs::trace_value(gcmId_,visitor);pls::cs::trace_value(cgiLogLevel_,visitor);pls::cs::trace_value(connectTaskList_,visitor);pls::cs::trace_value(appList_,visitor);pls::cs::trace_value(COMMON_SERVER,visitor);pls::cs::trace_value(prgStart_,visitor);pls::cs::trace_value(connects_,visitor);pls::cs::trace_value(paymemtList_,visitor);pls::cs::trace_value(connectPaymemtMoneyResponse_,visitor);}

static IntArray KairoBase_CONNECT_TRY_storage{};

static pls::cs::Ref<KairoBase_KairoDummy> KairoBase_dummy__storage{};

static pls::cs::Ref<KairoBase> KairoBase_instance__storage{};

static PLS_NOINLINE void cs_init_b489b0d33bb37bb8_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(KairoBase_CONNECT_TRY_storage,visitor);pls::cs::trace_value(KairoBase_dummy__storage,visitor);pls::cs::trace_value(KairoBase_instance__storage,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.system.KairoBase",flag,[](){
KairoBase_CONNECT_TRY_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.system.KairoBase.CONNECT_TRY",[&](){return IntArray::from({1, 2, 3, 1});});

});}

void KairoBase::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_b489b0d33bb37bb8_slow(flag);}

IntArray& KairoBase::CONNECT_TRY(){KairoBase::ensure_initialized();return KairoBase_CONNECT_TRY_storage;}

pls::cs::Ref<KairoBase_KairoDummy>& KairoBase::dummy_(){KairoBase::ensure_initialized();return KairoBase_dummy__storage;}

pls::cs::Ref<KairoBase>& KairoBase::instance_(){KairoBase::ensure_initialized();return KairoBase_instance__storage;}

// M:kairo.unity.system.KairoBase.#ctor
void KairoBase::create_init(pls::cs::Ref<KairoBase> self) {
KairoBase::ensure_initialized();
self->reserveSaveEnable = true;
self->userId_ = kl_unity_util::SecureString::create(literal(u""));
self->friendId_ = kl_unity_util::SecureString::create(literal(u""));
self->pkgId_ = -1;
self->flag_ = kl_unity_util::SecureInt::create();
self->arguments_ = StringArray::make(0);
self->argumentsInt_ = IntArray::make(0);
self->cgiLogLevel_ = pls::cs::Dictionary<pls::cs::String,pls::cs::Int32>::make();
self->connectTaskList_ = kl_java_util::Vector::create();
self->appList_ = pls::cs::Array<appli::GameAppli>::make(0);
self->prgStart_ = IntArray::make(2);
self->connects_ = pls::cs::Stack<pls::cs::Ref<KairoBase_ConnectObject>>::make();
self->paymemtList_ = pls::cs::List<pls::cs::Ref<payment::PaymentDataRecord>>::make();
self->connectPaymemtMoneyResponse_ = pls::cs::List<pls::cs::String>::make();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.#ctor",kairo);
{

}

}

// M:kairo.unity.system.KairoBase.GetInstance
pls::cs::Ref<KairoBase> KairoBase::GetInstance() {
KairoBase::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.GetInstance",kairo);
{
if (is_null(KairoBase::instance_())) {
if (is_null(KairoBase::dummy_())) {
KairoBase::dummy_() = KairoBase_KairoDummy::create();
require(KairoBase::dummy_())->LoadAppList();
}
return KairoBase::dummy_();
}
return KairoBase::instance_();
}

}

// M:kairo.unity.system.KairoBase.OnInit
void KairoBase::OnInit() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.OnInit",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.OnStart
void KairoBase::OnStart() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.OnStart",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.OnLoad(java.io.InputStream)
void KairoBase::OnLoad(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.OnLoad(java.io.InputStream)",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.OnWrite(java.io.OutputStream)
void KairoBase::OnWrite(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.OnWrite(java.io.OutputStream)",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.OnNewGame(System.Boolean)
void KairoBase::OnNewGame(bool take) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.OnNewGame(System.Boolean)",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.OnLoadGame(java.io.InputStream)
void KairoBase::OnLoadGame(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.OnLoadGame(java.io.InputStream)",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.OnWriteGame(java.io.OutputStream)
void KairoBase::OnWriteGame(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.OnWriteGame(java.io.OutputStream)",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.Finish
void KairoBase::Finish() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.Finish",kairo);
{
start_ = false;
}
}

// M:kairo.unity.system.KairoBase.ConnectLogin(System.Boolean,System.Boolean)
bool KairoBase::ConnectLogin(bool enforce,bool retry) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectLogin(System.Boolean,System.Boolean)",kairo);
{
kl_cfg::Config::ensure_initialized();

pls::cs::Ref<kl_java_util::JLocale> jLocale = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JLocale::GetDefault();});
StringArray array = StringArray{};
bool isRetryEnable = io::Http::get_IsRetryEnable();
{auto cs_flow_211 = pls::cs::run_finally([&]() -> pls::cs::Flow<bool> {try {
ByteArray array2 = kl_lang::StringEx::GetBytes(KairoBase::GetSignature());
if (([&]() { auto cs_left = pls::cs::box(array2); auto cs_right = pls::cs::box(ByteArray{}); return cs_left != cs_right; }()) && (array2.length() == 0)) {
array2 = ByteArray{};
}
if (retry) {
io::Http::set_IsRetryEnable(true);
}
array = ([&]() -> StringArray { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(userId_);}); pls::cs::String cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jLocale)->GetCountry();}); pls::cs::String cs_arg2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->GetPackageName();}); pls::cs::String cs_arg3 = ((rootBan_ && CheckRoot()) ? literal(u"1") : literal(u"0")); return CgiLogin(cs_arg0, cs_arg1, cs_arg2, cs_arg3, array2); }());
} catch(const pls::cs::Exception& cs_caught_210) {auto ex=pls::cs::capture_exception(cs_caught_210);
{
if (enforce) {
pls::cs::throw_exception(ex);
}
if (networkLevel_ >= 2 || (networkLevel_ == 1 && !CheckNetwork())) {
pls::cs::throw_exception(ex);
}
return pls::cs::flow_return(false);
}} return {};}, [&]() {
io::Http::set_IsRetryEnable(isRetryEnable);
});
if (cs_flow_211.returned()) return cs_flow_211.value();
}
SetSystemStartProgress(25);
latestVersion_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[0]);});
pls::cs::Int64 time = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JLong::ParseLong(array[1]);});
userId_ = kl_unity_util::SecureString::create(array[2]);
friendId_ = kl_unity_util::SecureString::create(array[3]);
pkgId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[4]);});
if (5 < array.length()) {
illegalPackage_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[5]);}) == 1;
}
if (6 < array.length()) {
arguments_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=array[6];auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=u',';return pls::cs::string_split(cs_text,cs_separators);}());});
argumentsInt_ = IntArray::make(arguments_.length());
for (pls::cs::Int32 i = 0; i < arguments_.length(); ++i) {
bool flag = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=arguments_[i];auto cs_value_storage_212_array=argumentsInt_;auto cs_value_storage_212_index=i;auto& cs_value_storage_212=cs_value_storage_212_array.at(cs_value_storage_212_index);return pls::cs::int32_try_parse(cs_text,cs_value_storage_212);}());});
if (!flag && pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(arguments_[i], literal(u"0x"));})) {
flag = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(arguments_[i], 2);});auto cs_value_storage_213_array=argumentsInt_;auto cs_value_storage_213_index=i;auto& cs_value_storage_213=cs_value_storage_213_array.at(cs_value_storage_213_index);return pls::cs::int32_try_parse_hex_number(cs_text,cs_value_storage_213);}());});
}
if (!flag) {
argumentsInt_[i] = 0;
}
}
}
util::ClockTime::SetTime(time, 10);
pls::cs::String country = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JLocale::GetDefault();}))->GetCountry();});
if (kl_cfg::Config::LANGUAGE() == 0 && country != literal(u"JP")) {
illegalCountry_ = true;
}
if (accountType_ == -1) {
accountType_ = ((kl_cfg::Config::DEBUG()) ? 0 : 1);
}
this->Save();
if (kl_cfg::Config::PRINT() && IsCheater()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(literal(u"不正ユーザー"), pls::cs::Ref<pls::cs::ExceptionObject>{});});
}
login_ = true;
KairoBase::Connect(pls::cs::String{});
SetSystemStartProgress(50);
return true;

}
}

// M:kairo.unity.system.KairoBase.AccessCounter(System.Int32,System.String)
void KairoBase::AccessCounter(pls::cs::Int32 type,pls::cs::String name) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.AccessCounter(System.Int32,System.String)",kairo);
{
AccessCounter(type, name, 1, true);
}
}

// M:kairo.unity.system.KairoBase.AccessCounter(System.Int32,System.String,System.Int32,System.Boolean)
void KairoBase::AccessCounter(pls::cs::Int32 type,pls::cs::String name,pls::cs::Int32 up,bool save) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.AccessCounter(System.Int32,System.String,System.Int32,System.Boolean)",kairo);
{
pls::cs::Ref<kl_java_util::Vector> vector = ((type == 0) ? accessCounter_ : userCounter_);
pls::cs::Ref<KairoBase_AccessCount> accessCount = pls::cs::Ref<KairoBase_AccessCount>{};
pls::cs::Int32 num = 0;
while (num < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));}) && is_null(accessCount)) {
pls::cs::Ref<KairoBase_AccessCount> accessCount2 = pls::cs::unbox<pls::cs::Ref<KairoBase_AccessCount>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector), num);}));
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(name, require(accessCount2)->name_);})) {
accessCount = accessCount2;
}
++num;
}
if (is_null(accessCount)) {
accessCount = KairoBase_AccessCount::create(name, 0ll);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(accessCount));});
}
require(accessCount)->value_ = require(accessCount)->value_ + up;
try {
if (save) {
this->Save();
}
} catch(const pls::cs::Exception& cs_caught_190) {pls::cs::capture_exception(cs_caught_190);
{

}}
}
}

// M:kairo.unity.system.KairoBase.ConnectAccessCounter
void KairoBase::ConnectAccessCounter() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectAccessCounter",kairo);
{
kl_cfg::Config::ensure_initialized();

if (!login_) {
return;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(accessCounter_));}) > 0) {
pls::cs::String str = literal(u"");
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(accessCounter_));}); ++i) {
if (kl_lang::StringEx::Length(str) > 0) {
str = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::String::concat(str, literal(u","));});
}
str = pls::diagnostic::api_call([&]() -> decltype(auto) {return concat_objects2(pls::cs::box(str), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(accessCounter_), i);}));});
}
str = KairoBase::MakeQueryString(literal(u"values"), str);
pls::cs::String str1 = KairoBase::MakeQueryString(literal(u"pkg"), pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->GetPackageName();}));
pls::cs::String str2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return concat_strings3(literal(u"counter.php"), str, str1);});
pls::cs::Ref<kl_java_util::Vector> vector = accessCounter_;
accessCounter_ = kl_java_util::Vector::create();
try {
HttpConnect(MakeUrl(str2), ByteArray{}, true);
this->Save();
} catch(const pls::cs::Exception& cs_caught_217) {auto exception1=pls::cs::capture_exception(cs_caught_217);
{
pls::cs::Ref<pls::cs::ExceptionObject> exception = exception1;
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::debug_log_exception(exception);});
}
accessCounter_ = vector;
pls::cs::throw_exception(exception);
}}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(userCounter_));}) > 0) {
pls::cs::String str3 = literal(u"");
for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(userCounter_));}); ++j) {
if (kl_lang::StringEx::Length(str3) > 0) {
str3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::String::concat(str3, literal(u","));});
}
str3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return concat_objects2(pls::cs::box(str3), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(userCounter_), j);}));});
}
str3 = KairoBase::MakeQueryString(literal(u"values"), str3);
pls::cs::String str4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::String::concat(literal(u"user_counter.php"), str3);});
pls::cs::Ref<kl_java_util::Vector> vector1 = userCounter_;
userCounter_ = kl_java_util::Vector::create();
try {
HttpConnect(MakeUrl(str4), ByteArray{}, true);
this->Save();
} catch(const pls::cs::Exception& cs_caught_218) {auto exception3=pls::cs::capture_exception(cs_caught_218);
{
pls::cs::Ref<pls::cs::ExceptionObject> exception2 = exception3;
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::debug_log_exception(exception2);});
}
userCounter_ = vector1;
pls::cs::throw_exception(exception2);
}}
}

}
}

// M:kairo.unity.system.KairoBase.ConnectGift(System.String)
StringArray KairoBase::ConnectGift(pls::cs::String pw) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectGift(System.String)",kairo);
{
pw = KairoBase::MakeQueryString(literal(u"pw"), pw);
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::New(KairoBase::ConnectByteArray(pls::cs::String::concat(literal(u"gift.php"), pw), static_cast<ByteArray>(ByteArray{})), literal(u"UTF-8"));});
if (kl_lang::StringEx::Length(text) == 0) {
return StringArray::make(0);
}
return util::StringUtil::Split(text, literal(u"\n"), true);
}
}

// M:kairo.unity.system.KairoBase.ConnectGameData(kairo.unity.system.GameDataRecord)
pls::cs::Ref<GameDataRecord> KairoBase::ConnectGameData(pls::cs::Ref<GameDataRecord> gameData) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectGameData(kairo.unity.system.GameDataRecord)",kairo);
{
return ConnectGameData(pls::cs::String{}, gameData);
}
}

// M:kairo.unity.system.KairoBase.ConnectGameData(System.String,kairo.unity.system.GameDataRecord)
pls::cs::Ref<GameDataRecord> KairoBase::ConnectGameData(pls::cs::String tbname,pls::cs::Ref<GameDataRecord> gameData) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectGameData(System.String,kairo.unity.system.GameDataRecord)",kairo);
{
return ConnectGameDataGameDataRecordArray(tbname, pls::cs::Array<pls::cs::Ref<GameDataRecord>>::from({gameData})).get_Item(0);
}
}

// M:kairo.unity.system.KairoBase.ConnectGameData(kairo.unity.system.GameDataRecord[])
pls::cs::Array<pls::cs::Ref<GameDataRecord>> KairoBase::ConnectGameDataGameDataRecordArray(pls::cs::Array<pls::cs::Ref<GameDataRecord>> dataList) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectGameData(kairo.unity.system.GameDataRecord[])",kairo);
{
return ConnectGameDataGameDataRecordArray(pls::cs::String{}, dataList);
}
}

// M:kairo.unity.system.KairoBase.ConnectGameData(System.String,kairo.unity.system.GameDataRecord[])
pls::cs::Array<pls::cs::Ref<GameDataRecord>> KairoBase::ConnectGameDataGameDataRecordArray(pls::cs::String tbname,pls::cs::Array<pls::cs::Ref<GameDataRecord>> dataList) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectGameData(System.String,kairo.unity.system.GameDataRecord[])",kairo);
{
if (dataList.length() == 0) {
return dataList;
}
pls::cs::Array<pls::cs::Ref<kl_java_util::Vector>> array = pls::cs::Array<pls::cs::Ref<kl_java_util::Vector>>::make(3);
IntArray array2 = IntArray::make(dataList.length());
for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
array2[i] = i;
}
for (pls::cs::Int32 j = 0; j < pls::cs::Int32(array2.length()) - 1; ++j) {
for (pls::cs::Int32 num = pls::cs::Int32(array2.length()) - 1; num > j; --num) {
pls::cs::Ref<GameDataRecord> gameDataRecord = dataList.get_Item(array2[num - 1]);
pls::cs::Ref<GameDataRecord> gameDataRecord2 = dataList.get_Item(array2[num]);
auto cs_left_309 = pls::cs::Int64(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(gameDataRecord)->friendId_)->Get();})) * 1000ll; auto cs_right_309 = pls::cs::Int64(pls::cs::cast_integral<pls::cs::Int64>(require(gameDataRecord)->GetNumber()));
pls::cs::Int64 num2 = cs_left_309 + cs_right_309;
auto cs_left_310 = pls::cs::Int64(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(gameDataRecord2)->friendId_)->Get();})) * 1000ll; auto cs_right_310 = pls::cs::Int64(pls::cs::cast_integral<pls::cs::Int64>(require(gameDataRecord2)->GetNumber()));
pls::cs::Int64 num3 = cs_left_310 + cs_right_310;
if (num2 > num3) {
pls::cs::Int32 num4 = array2[num];
array2[num] = array2[num - 1];
array2[num - 1] = num4;
}
}
}
ByteArray send = ByteArray{};
pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
pls::cs::run_finally([&]() {{
byteArrayOutputStream = kl_io::ByteArrayOutputStream::create();
for (pls::cs::Int32 k = 0; k < array.length(); ++k) {
pls::cs::Ref<kl_java_util::Vector> vector = (([&]() { auto cs_target = array; auto cs_index = k; auto cs_value = kl_java_util::Vector::create();cs_target.set_Item(cs_index,cs_value);return cs_value;}()));
for (pls::cs::Int32 l = 0; l < array2.length(); ++l) {
pls::cs::Ref<GameDataRecord> gameDataRecord3 = require(dataList.get_Item(array2[l]))->Copy(k == 0 || k == 1);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(gameDataRecord3)->dataSet_));}) > 0 && (k != 0 || require(gameDataRecord3)->isInsert_) && (k != 1 || !require(gameDataRecord3)->isInsert_)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(gameDataRecord3));});
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));}) != 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));}));});
for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));}); ++m) {
require((pls::cs::unbox<pls::cs::Ref<GameDataRecord>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector), m);}))))->Pack(byteArrayOutputStream);
}
}
}
send = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(byteArrayOutputStream)->ToByteArray();});
}}, [&]() {
([&]() -> void { auto cs_conditional = byteArrayOutputStream; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<kl_io::ByteArrayOutputStream>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Close(); }()); }());
byteArrayOutputStream = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(array.get_Item(0)));}) == 0 && pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(array.get_Item(2)));}) == 0 && pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(array.get_Item(1)));}) == 0) {
return dataList;
}
pls::cs::String text = literal(u"");
for (pls::cs::Int32 n = 0; n < array.length(); ++n) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(array.get_Item(n)));}) != 0) {
if (kl_lang::StringEx::Length(text) > 0) {
text = pls::cs::String::concat(text,literal(u","));
}
if ((n == 0)) {
text = pls::cs::String::concat(text,literal(u"set"));
} else if ((n == 1)) {
text = pls::cs::String::concat(text,literal(u"upd"));
} else if ((n == 2)) {
text = pls::cs::String::concat(text,literal(u"get"));
}
}
}
text = KairoBase::MakeQueryString(literal(u"mode"), text);
tbname = KairoBase::MakeQueryString(literal(u"tbname"), tbname);
pls::cs::Array<ByteArray> array3 = KairoBase::Connect(pls::cs::String::concat(pls::cs::String::concat(literal(u"gamedata.php"), text), tbname), send, true);
if ([&]() { auto cs_left = pls::cs::box(array3); auto cs_right = pls::cs::box(pls::cs::Array<ByteArray>{}); return cs_left == cs_right; }()) {
return dataList;
}
pls::cs::Array<pls::cs::Ref<GameDataRecord>> array4 = pls::cs::Array<pls::cs::Ref<GameDataRecord>>::make(dataList.length());
for (pls::cs::Int32 num5 = 0; num5 < dataList.length(); ++num5) {
array4.set_Item(num5, require(dataList.get_Item(num5))->Clone());
require(array4.get_Item(num5))->exist_ = false;
}
for (pls::cs::Int32 num6 = 0; num6 < array3.length(); ++num6) {
if (array3[num6].length() == 0) {
continue;
}
pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
pls::cs::run_finally([&]() {{
byteArrayInputStream = kl_io::ByteArrayInputStream::create(array3[num6]);
pls::cs::Int32 num7 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);});
pls::cs::Int32 num8 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);});
pls::cs::Int32 num9 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);});
pls::cs::Ref<GameDataRecord> gameDataRecord4 = pls::cs::Ref<GameDataRecord>{};
for (pls::cs::Int32 spriteIndex = 0; spriteIndex < array4.length(); ++spriteIndex) {
pls::cs::Ref<GameDataRecord> gameDataRecord5 = array4.get_Item(spriteIndex);
if ((pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(gameDataRecord5)->userId_)->Get();}) == num7 || pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(gameDataRecord5)->friendId_)->Get();}) == num8) && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(gameDataRecord5)->number_)->Get();}) == num9) {
gameDataRecord4 = gameDataRecord5;
break;
}
}
require(gameDataRecord4)->exist_ = true;
pls::cs::Int32 num11 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);});
for (pls::cs::Int32 num12 = 0; num12 < num11; ++num12) {
pls::cs::String name = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadString(byteArrayInputStream);});
ByteArray value = ByteArray{};
pls::cs::Int32 num13 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);});
if (num13 != -1) {
value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Read(static_cast<pls::cs::Ref<kl_io::InputStream>>(byteArrayInputStream), num13);});
}
{ pls::cs::String cs_arg0 = name; ByteArray cs_arg1 = FromDBValue(literal(u"t_gamedata"), name, value); require(gameDataRecord4)->Acquire(cs_arg0, cs_arg1); }
}
}}, [&]() {
([&]() -> void { auto cs_conditional = byteArrayInputStream; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<kl_io::InputStream>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Close(); }()); }());
byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
});
}
return array4;
}
}

// M:kairo.unity.system.KairoBase.ConnectGameDataSearch(System.String,System.String,System.String,System.String,System.Int64,System.Int64,System.Int64,System.String,System.Int32)
pls::cs::Array<pls::cs::Ref<GameDataRecord>> KairoBase::ConnectGameDataSearch(pls::cs::String get,pls::cs::String where,pls::cs::String order,pls::cs::String column,pls::cs::Int64 value,pls::cs::Int64 low,pls::cs::Int64 high,pls::cs::String count,pls::cs::Int32 logic) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectGameDataSearch(System.String,System.String,System.String,System.String,System.Int64,System.Int64,System.Int64,System.String,System.Int32)",kairo);
{
return ConnectGameDataSearch(pls::cs::String{}, get, where, order, column, value, low, high, count, logic);
}
}

// M:kairo.unity.system.KairoBase.ConnectGameDataSearch(System.String,System.String,System.String,System.String,System.String,System.Int64,System.Int64,System.Int64,System.String,System.Int32)
pls::cs::Array<pls::cs::Ref<GameDataRecord>> KairoBase::ConnectGameDataSearch(pls::cs::String tbname,pls::cs::String get,pls::cs::String where,pls::cs::String order,pls::cs::String column,pls::cs::Int64 value,pls::cs::Int64 low,pls::cs::Int64 high,pls::cs::String count,pls::cs::Int32 logic) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectGameDataSearch(System.String,System.String,System.String,System.String,System.String,System.Int64,System.Int64,System.Int64,System.String,System.Int32)",kairo);
{
kl_cfg::Config::ensure_initialized();

if (is_null(get)) {
get = literal(u"friendid,number,v0");
}
if (is_null(where)) {
where = pls::cs::String::concat(pls::cs::String::concat(literal(u"pid="), integer_string(kl_cfg::Config::PID())), literal(u",ban=0,is_alive=1,reg_friend=1"));
}
get = CorrectGetGameData(get);
if ((logic == 1 || logic == 2) && !is_null(column) && (value == (-9223372036854775807ll - 1) /* Int64.MinValue */)) {
pls::cs::Int64 num = high - low;
if (num > pls::cs::cast_integral<pls::cs::Int64>(0)) {
value = low + num / pls::cs::Int64(2);
}
}
where = CorrectWhereGameData(where);
pls::cs::String param = pls::cs::String{};
pls::cs::String param2 = pls::cs::String{};
pls::cs::String param3 = pls::cs::String{};
if (!is_null(column)) {
if (value == (-9223372036854775807ll - 1) /* Int64.MinValue */) {
param = column;
} else {
param = (pls::cs::String::concat(pls::cs::String::concat(column, literal(u",")), integer_string(value)));
}
param2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfLong(low);});
param3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfLong(high);});
}
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(get, literal(u","));});
pls::cs::String param4 = ((logic < 0) ? literal(u"0") : pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(logic);}));
pls::cs::String param5 = literal(u"search");
tbname = KairoBase::MakeQueryString(literal(u"tbname"), tbname);
param5 = KairoBase::MakeQueryString(literal(u"mode"), param5);
get = KairoBase::MakeQueryString(literal(u"get"), get);
where = KairoBase::MakeQueryString(literal(u"where"), where);
order = KairoBase::MakeQueryString(literal(u"order"), order);
param = KairoBase::MakeQueryString(literal(u"value"), param);
param2 = KairoBase::MakeQueryString(literal(u"low"), param2);
param3 = KairoBase::MakeQueryString(literal(u"high"), param3);
count = KairoBase::MakeQueryString(literal(u"count"), count);
param4 = KairoBase::MakeQueryString(literal(u"logic"), param4);
pls::cs::Array<ByteArray> array2 = KairoBase::Connect(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"gamedata.php"), tbname), param5), get), where), order), param), param2), param3), count), param4), true);
pls::cs::Array<pls::cs::Ref<GameDataRecord>> array3 = pls::cs::Array<pls::cs::Ref<GameDataRecord>>::make(array2.length());
for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
pls::cs::Ref<GameDataRecord> gameDataRecord = (([&]() { auto cs_target = array3; auto cs_index = i; auto cs_value = GameDataRecord::create();cs_target.set_Item(cs_index,cs_value);return cs_value;}()));
pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
pls::cs::run_finally([&]() {{
byteArrayInputStream = kl_io::ByteArrayInputStream::create(array2[i]);
{ auto cs_target = gameDataRecord; auto cs_value = kl_unity_util::SecureInt::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);})); require(cs_target)->friendId_ = cs_value; }
{ auto cs_target = gameDataRecord; auto cs_value = kl_unity_util::SecureInt::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);})); require(cs_target)->number_ = cs_value; }
for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
pls::cs::String name = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(array[j]);});
pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);});
ByteArray data = ByteArray{};
if (num2 != -1) {
data = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Read(static_cast<pls::cs::Ref<kl_io::InputStream>>(byteArrayInputStream), num2);});
}
require(gameDataRecord)->AddByteArray(name, data);
}
}}, [&]() {
([&]() -> void { auto cs_conditional = byteArrayInputStream; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<kl_io::InputStream>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Close(); }()); }());
});
}
return array3;

}
}

// M:kairo.unity.system.KairoBase.ConnectGameDataRanking(System.String,System.String,System.String,System.String,System.String,System.Boolean,System.String)
pls::cs::Array<pls::cs::Array<pls::cs::Ref<GameDataRecord>>> KairoBase::ConnectGameDataRanking(pls::cs::String friendId,pls::cs::String get,pls::cs::String where,pls::cs::String column,pls::cs::String top,bool self_,pls::cs::String order) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectGameDataRanking(System.String,System.String,System.String,System.String,System.String,System.Boolean,System.String)",kairo);
{
return ConnectGameDataRanking(pls::cs::String{}, friendId, get, where, column, top, self_, order);
}
}

// M:kairo.unity.system.KairoBase.ConnectGameDataRanking(System.String,System.String,System.String,System.String,System.String,System.String,System.Boolean,System.String)
pls::cs::Array<pls::cs::Array<pls::cs::Ref<GameDataRecord>>> KairoBase::ConnectGameDataRanking(pls::cs::String tbname,pls::cs::String friendId,pls::cs::String get,pls::cs::String where,pls::cs::String column,pls::cs::String top,bool self_,pls::cs::String order) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectGameDataRanking(System.String,System.String,System.String,System.String,System.String,System.String,System.Boolean,System.String)",kairo);
{
kl_cfg::Config::ensure_initialized();

if (is_null(get)) {
get = literal(u"friendid,number,v0");
}
if (is_null(where)) {
where = pls::cs::String::concat(pls::cs::String::concat(literal(u"pid="), integer_string(kl_cfg::Config::PID())), literal(u",ban=0,is_alive=1"));
}
if (is_null(top)) {
top = literal(u"0");
}
if (is_null(order)) {
order = literal(u"DESC");
}
get = CorrectGetGameData(get);
where = CorrectWhereGameData(where);
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(get, literal(u","));});
pls::cs::String text;
pls::cs::String param = literal(u"rank");
tbname = KairoBase::MakeQueryString(literal(u"tbname"), tbname);
param = KairoBase::MakeQueryString(literal(u"mode"), param);
friendId = KairoBase::MakeQueryString(literal(u"friendid"), friendId);
get = KairoBase::MakeQueryString(literal(u"get"), get);
where = KairoBase::MakeQueryString(literal(u"where"), where);
column = KairoBase::MakeQueryString(literal(u"column"), column);
top = KairoBase::MakeQueryString(literal(u"top"), top);
text = KairoBase::MakeQueryString(literal(u"self"), self_ ? literal(u"1") : literal(u"0"));
order = KairoBase::MakeQueryString(literal(u"order"), order);
pls::cs::Array<ByteArray> array2 = KairoBase::Connect(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"gamedata.php"), tbname), param), friendId), get), where), column), top), text), order), true);
pls::cs::Array<pls::cs::Array<pls::cs::Ref<GameDataRecord>>> array3 = pls::cs::Array<pls::cs::Array<pls::cs::Ref<GameDataRecord>>>::make(2);
for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
pls::cs::run_finally([&]() {{
byteArrayInputStream = kl_io::ByteArrayInputStream::create(array2[i]);
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);});
array3[i] = pls::cs::Array<pls::cs::Ref<GameDataRecord>>::make(num);
for (pls::cs::Int32 j = 0; j < array3[i].length(); ++j) {
pls::cs::Ref<GameDataRecord> gameDataRecord = (([&]() { auto cs_target = array3[i]; auto cs_index = j; auto cs_value = GameDataRecord::create();cs_target.set_Item(cs_index,cs_value);return cs_value;}()));
{ auto cs_target = gameDataRecord; auto cs_value = kl_unity_util::SecureInt::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);})); require(cs_target)->friendId_ = cs_value; }
{ auto cs_target = gameDataRecord; auto cs_value = kl_unity_util::SecureInt::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);})); require(cs_target)->number_ = cs_value; }
{ pls::cs::Int64 cs_arg1 = pls::cs::cast_integral<pls::cs::Int64>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);})); require(gameDataRecord)->AddLong(literal(u"_rank"), cs_arg1); }
for (pls::cs::Int32 k = 0; k < array.length(); ++k) {
pls::cs::String name = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(array[k]);});
pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);});
ByteArray data = ByteArray{};
if (num2 != -1) {
data = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Read(static_cast<pls::cs::Ref<kl_io::InputStream>>(byteArrayInputStream), num2);});
}
require(gameDataRecord)->AddByteArray(name, data);
}
}
}}, [&]() {
([&]() -> void { auto cs_conditional = byteArrayInputStream; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<kl_io::InputStream>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Close(); }()); }());
});
}
return array3;

}
}

// M:kairo.unity.system.KairoBase.CorrectGetGameData(System.String)
pls::cs::String KairoBase::CorrectGetGameData(pls::cs::String get) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.CorrectGetGameData(System.String)",kairo);
{
if (is_null(get)) {
return pls::cs::String{};
}
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(get, literal(u","));});
get = literal(u"");
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
if (kl_lang::StringEx::Length(get) > 0) {
get = pls::cs::String::concat(get,literal(u","));
}
get = pls::cs::String::concat(get,pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(array[i]);}));
}
return get;
}
}

// M:kairo.unity.system.KairoBase.CorrectWhereGameData(System.String)
pls::cs::String KairoBase::CorrectWhereGameData(pls::cs::String where) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.CorrectWhereGameData(System.String)",kairo);
{
if (is_null(where)) {
return pls::cs::String{};
}
StringArray array = StringArray::from({literal(u"<=>"), literal(u"<>"), literal(u"!="), literal(u"=")});
StringArray array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(where, literal(u","));});
where = literal(u"");
for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
pls::cs::String text = array2[i];
for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_index_of(text, array[j]);});
if (num != -1 && num != 0 && num != kl_lang::StringEx::Length(text) - 1) {
pls::cs::String text2 = kl_lang::StringEx::SubstringJ(text, 0, num);
if (GetColumnType(literal(u"t_gamedata"), text2) == 1) {
pls::cs::String text3 = kl_lang::StringEx::SubstringJ(text, num, num + kl_lang::StringEx::Length(array[j]));
pls::cs::String str = kl_lang::StringEx::SubstringJ(text, num + kl_lang::StringEx::Length(array[j]));
ByteArray bytes = ToDBValue(literal(u"t_gamedata"), text2, kl_lang::StringEx::GetBytes(str));
text = pls::cs::String::concat(pls::cs::String::concat(text2, text3), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::New(bytes, literal(u"UTF-8"));}));
break;
}
}
}
if (kl_lang::StringEx::Length(where) > 0) {
where = pls::cs::String::concat(where,literal(u","));
}
where = pls::cs::String::concat(where,text);
}
return where;
}
}

// M:kairo.unity.system.KairoBase.ConnectLineupList(System.String)
pls::cs::Array<ByteArray> KairoBase::ConnectLineupList(pls::cs::String time) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectLineupList(System.String)",kairo);
{
pls::cs::Array<ByteArray> array = KairoBase::Connect(([&]() { auto cs_left = pls::cs::String::concat(literal(u"lineup.php"), KairoBase::MakeQueryString(literal(u"mode"), literal(u"list"))); auto cs_right = KairoBase::MakeQueryString(literal(u"time"), time); return pls::cs::String::concat(cs_left,cs_right); }()), true);
if (array.length() == 0) {
return pls::cs::Array<ByteArray>{};
}
return array;
}
}

// M:kairo.unity.system.KairoBase.ConnectLineupImage(System.String)
pls::cs::Array<ByteArray> KairoBase::ConnectLineupImage(pls::cs::String files) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectLineupImage(System.String)",kairo);
{
return KairoBase::Connect(([&]() { auto cs_left = pls::cs::String::concat(literal(u"lineup.php"), KairoBase::MakeQueryString(literal(u"mode"), literal(u"img"))); auto cs_right = KairoBase::MakeQueryString(literal(u"files"), files); return pls::cs::String::concat(cs_left,cs_right); }()), true);
}
}

// M:kairo.unity.system.KairoBase.FromDBValue(System.String,System.String,System.Byte[])
ByteArray KairoBase::FromDBValue(pls::cs::String table,pls::cs::String name,ByteArray value) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.FromDBValue(System.String,System.String,System.Byte[])",kairo);
{
if ([&]() { auto cs_left = pls::cs::box(value); auto cs_right = pls::cs::box(ByteArray{}); return cs_left == cs_right; }()) {
return value;
}
ByteArray array = value;
pls::cs::Int32 columnType = GetColumnType(table, name);
if (columnType == 1) {
try {
array = kl_lang::StringEx::GetBytes(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::New(value, literal(u"UTF-8"));}));
} catch(const pls::cs::Exception& cs_caught_277) {pls::cs::capture_exception(cs_caught_277);
{

}}
} else if (columnType == 2 && (value.length() != 0)) {
bool num = (pls::cs::cast_integral<pls::cs::Int32>(value[0]) == 1);
array = ByteArray::make(pls::cs::Int32(value.length()) - 1);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(value), 1, pls::cs::box(array), 0, array.length());});
if (num) {
array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Compressor::Expand(array);});
}
}
return array;
}
}

// M:kairo.unity.system.KairoBase.ToDBValue(System.String,System.String,System.Byte[])
ByteArray KairoBase::ToDBValue(pls::cs::String table,pls::cs::String name,ByteArray value) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ToDBValue(System.String,System.String,System.Byte[])",kairo);
{
if ([&]() { auto cs_left = pls::cs::box(value); auto cs_right = pls::cs::box(ByteArray{}); return cs_left == cs_right; }()) {
return value;
}
ByteArray array = value;
pls::cs::Int32 columnType = GetColumnType(table, name);
if (columnType == 1) {
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::New(value);});
pls::cs::String text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(text);});
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(text2, literal(u"CURRENT_TIMESTAMP()"));})) {
pls::cs::Ref<pls::cs::StringBuilder> stringBuilder = ([&]() { return pls::cs::make_ref<pls::cs::StringBuilder>(); }());
pls::cs::Int32 num = 0;
while (num < kl_lang::StringEx::Length(text2)) {
char16_t c = kl_lang::StringEx::CharAt(text2, num);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->Append(c);});
if (pls::cs::cast_integral<pls::cs::Int32>(c) == pls::cs::cast_integral<pls::cs::Int32>(u'\'')) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->Append(c);});
}
++num;
}
text = pls::cs::String::concat(pls::cs::String::concat(literal(u"'"), pls::diagnostic::api_call([&]() -> decltype(auto) {return require(stringBuilder)->ToString();})), literal(u"'"));
}
try {
array = pls::diagnostic::api_call([&]() -> decltype(auto) {return java::lang::StringEx::GetBytes(text, literal(u"UTF-8"));});
} catch(const pls::cs::Exception& cs_caught_273) {pls::cs::capture_exception(cs_caught_273);
{
array = kl_lang::StringEx::GetBytes(text);
}}
} else if (columnType == 2) {
ByteArray array2 = ByteArray{};
try {
array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Compressor::Compress(value);});
if (array2.length() >= value.length()) {
array2 = ByteArray{};
}
} catch(const pls::cs::Exception& cs_caught_274) {pls::cs::capture_exception(cs_caught_274);
{

}}
if ([&]() { auto cs_left = pls::cs::box(array2); auto cs_right = pls::cs::box(ByteArray{}); return cs_left == cs_right; }()) {
array = ByteArray::make(pls::cs::Int32(1) + value.length());
array[0] = pls::cs::cast_integral<std::uint8_t>(0);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(value), 0, pls::cs::box(array), 1, value.length());});
} else {
array = ByteArray::make(pls::cs::Int32(1) + array2.length());
array[0] = pls::cs::cast_integral<std::uint8_t>(1);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(array2), 0, pls::cs::box(array), 1, array2.length());});
}
}
return array;
}
}

// M:kairo.unity.system.KairoBase.GetColumnType(System.String,System.String)
pls::cs::Int32 KairoBase::GetColumnType(pls::cs::String table,pls::cs::String column) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.GetColumnType(System.String,System.String)",kairo);
{
if (is_null(table) || is_null(column)) {
return -1;
}
column = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(column);});
if (table == literal(u"t_gamedata")) {
{auto cs_switch_value_35174=column;std::int32_t cs_switch_index_35174=-1;if(cs_switch_value_35174==literal(u"country"))cs_switch_index_35174=0;if(cs_switch_value_35174==literal(u"ins_date"))cs_switch_index_35174=0;if(cs_switch_value_35174==literal(u"login"))cs_switch_index_35174=0;if(cs_switch_value_35174==literal(u"upload"))cs_switch_index_35174=0;switch(cs_switch_index_35174){
case 0:
{
return 1;
}
default:
{
{
column = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(column, literal(u"_"));})[0];
if (column == literal(u"s") || column == literal(u"str")) {
return 1;
}
pls::cs::Int32 result;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(column, literal(u"s"));}) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(column, 1);});return pls::cs::int32_try_parse(cs_text,result);}());})) {
return 1;
}
if (column == literal(u"d") || column == literal(u"dat")) {
return 2;
}
pls::cs::Int32 result2;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(column, literal(u"d"));}) && pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(column, 1);});return pls::cs::int32_try_parse(cs_text,result2);}());})) {
return 2;
}
return 0;
}
}
}}
}
if (table == literal(u"t_user") && column == literal(u"name")) {
return 1;
}
return -1;
}
}

// M:kairo.unity.system.KairoBase.CgiLogin(System.String,System.String,System.String,System.String,System.Byte[])
StringArray KairoBase::CgiLogin(pls::cs::String userid,pls::cs::String c,pls::cs::String pkg,pls::cs::String r,ByteArray signature) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.CgiLogin(System.String,System.String,System.String,System.String,System.Byte[])",kairo);
{
userid = KairoBase::MakeQueryString(literal(u"userid"), userid);
c = KairoBase::MakeQueryString(literal(u"c"), c);
pkg = KairoBase::MakeQueryString(literal(u"pkg"), pkg);
r = KairoBase::MakeQueryString(literal(u"r"), r);
pls::cs::String cgi = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"login.php"), userid), c), pkg), r);
return pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::New(HttpConnect(MakeUrl(cgi, signature), signature, true));}), literal(u"\n"));});
}
}

// M:kairo.unity.system.KairoBase.MakeQuery(System.String,System.Int32)
pls::cs::String KairoBase::MakeQuery(pls::cs::String query,pls::cs::Int32 param) {
KairoBase::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.MakeQuery(System.String,System.Int32)",kairo);
{
return KairoBase::MakeQueryString(query, pls::diagnostic::api_call([&]() -> decltype(auto) {return integer_string(param);}));
}

}

// M:kairo.unity.system.KairoBase.MakeQuery(System.String,System.String)
pls::cs::String KairoBase::MakeQueryString(pls::cs::String query,pls::cs::String param) {
KairoBase::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.MakeQuery(System.String,System.String)",kairo);
{
if (is_null(param) || kl_lang::StringEx::Length(param) == 0) {
return literal(u"");
}
param = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(param, literal(u"\010"), literal(u""));});
try {
param = java::net::URLEncoder::Encode(param, literal(u"UTF-8"));
} catch(const pls::cs::Exception& cs_caught_209) {auto cs_exception_209=pls::cs::capture_exception(cs_caught_209);
if(pls::cs::exception_is(cs_exception_209,"System.ArgumentException")) {{
param = java::net::URLEncoder::Encode(param);
}}
else {throw;} }
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(query, literal(u"&"));})) {
query = pls::cs::String::concat(literal(u"&"), query);
}
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_ends_with(query, literal(u"="));})) {
query = pls::cs::String::concat(query,literal(u"="));
}
return pls::cs::String::concat(query, param);
}

}

// M:kairo.unity.system.KairoBase.MakeUrl(System.String)
pls::cs::String KairoBase::MakeUrl(pls::cs::String cgi) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.MakeUrl(System.String)",kairo);
{
return MakeUrl(cgi, ByteArray{});
}
}

// M:kairo.unity.system.KairoBase.MakeUrl(System.String,System.Byte[])
pls::cs::String KairoBase::MakeUrl(pls::cs::String cgi,ByteArray send) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.MakeUrl(System.String,System.Byte[])",kairo);
{
kl_cfg::Config::ensure_initialized();

pls::cs::Int32 num;
pls::cs::String text = pls::cs::String{};
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(cgi, literal(u"http://"));}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(cgi, literal(u"https://"));})) {
num = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(cgi, u'/');});
if (num != -1) {
text = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(cgi, 0, num + 1);});
cgi = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(cgi, num + 1);});
}
}
pls::cs::String text2 = cgi;
num = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_index_of(text2, literal(u".php"));});
if (num == -1) {
num = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_index_of(text2, literal(u".cgi"));});
}
if (num != -1) {
text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(text2, 0, num);});
num = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(text2, u'/');});
if (num != -1) {
text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(text2, num + 1);});
}
}
pls::cs::String text3 = literal(u"");
pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_index_of(cgi, literal(u"?"));});
if (num2 == -1) {
num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_index_of(cgi, literal(u"&"));});
}
if (num2 != -1) {
text3 = kl_lang::StringEx::SubstringJ(cgi, num2 + 1);
cgi = kl_lang::StringEx::SubstringJ(cgi, 0, num2);
if (kl_lang::StringEx::Length(text3) > 0) {
text3 = pls::cs::String::concat(literal(u"&"), text3);
}
}
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return contains_string(text3, literal(u"&pid="));})) {
text3 = pls::cs::String::concat(text3,KairoBase::MakeQueryString(literal(u"pid="), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(kl_cfg::Config::PID());})));
}
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return contains_string(text3, literal(u"&ver="));})) {
text3 = pls::cs::String::concat(text3,KairoBase::MakeQueryString(literal(u"ver="), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(appliVersion_);})));
}
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return contains_string(text3, literal(u"&userid="));})) {
text3 = pls::cs::String::concat(text3,KairoBase::MakeQueryString(literal(u"userid="), GetUserId()));
}
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return contains_string(text3, literal(u"&pkg="));})) {
text3 = pls::cs::String::concat(text3,KairoBase::MakeQueryString(literal(u"pkg="), pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->GetPackageName();})));
}
text3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(text3, literal(u"&&"), literal(u"&"));});
if (kl_lang::StringEx::Length(text3) > 0) {
cgi = pls::cs::String::concat(pls::cs::String::concat(cgi, literal(u"?")), pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(text3, 1);}));
}
pls::cs::String text4;
bool flag = pls::diagnostic::api_call([&]() -> decltype(auto) {return contains_string(cgi, literal(u"virtual_currency.php"));});
if (!is_null(text) && pls::diagnostic::api_call([&]() -> decltype(auto) {return contains_string(text, GetCommonServer());})) {
text4 = pls::cs::String::concat(text, cgi);
} else if (flag) {
text4 = pls::cs::String::concat(pls::cs::String::concat(GetPaymentHost(), literal(u"vc/cgi/")), cgi);
} else {
text4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(host_)->ToString();});
if (kl_cfg::Config::APPLI_TYPE() == 2) {
text4 = pls::cs::String::concat(text4,literal(u"android"));
} else if (kl_cfg::Config::APPLI_TYPE() == 3) {
text4 = pls::cs::String::concat(text4,literal(u"android"));
} else if (kl_cfg::Config::APPLI_TYPE() == 0) {
text4 = pls::cs::String::concat(text4,literal(u"docomo"));
} else if (kl_cfg::Config::APPLI_TYPE() == 1) {
text4 = pls::cs::String::concat(text4,literal(u"softbank"));
}
text4 = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text4, literal(u"/gm")), integer_string(kl_cfg::Config::PID())), literal(u"/cgi/")), cgi);
}
while (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_index_of(text4, literal(u"NULLGWDOCOMO"));}) != -1) {

}
text3 = literal(u"");
pls::cs::Int32 num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return index_char1(text4, u'?');});
if (num3 != -1) {
pls::cs::String str = kl_lang::StringEx::SubstringJ(text4, num3 + 1);
text4 = kl_lang::StringEx::SubstringJ(text4, 0, num3);
ByteArray bytes = kl_lang::StringEx::GetBytes(str);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Encrypter::Encode(bytes, ByteArray::from({pls::cs::cast_integral<std::uint8_t>(72), pls::cs::cast_integral<std::uint8_t>(123), pls::cs::cast_integral<std::uint8_t>(54)}));});
str = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Base64::Encode(bytes);});
text3 = pls::cs::String::concat(pls::cs::String::concat(text3, literal(u"&_1=")), java::net::URLEncoder::Encode(str));
text3 = pls::cs::String::concat(pls::cs::String::concat(text3, literal(u"&_2=")), util::MD5::GetValue(kl_lang::StringEx::GetBytes(str)));
}
if ([&]() { auto cs_left = pls::cs::box(send); auto cs_right = pls::cs::box(ByteArray{}); return cs_left != cs_right; }()) {
text3 = pls::cs::String::concat(pls::cs::String::concat(text3, literal(u"&_3=")), util::MD5::GetValue(send));
}
text3 = pls::cs::String::concat(pls::cs::String::concat(text3, literal(u"&hl=")), (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Language::Japanese();}) ? literal(u"ja") : literal(u"en")));
pls::cs::Int32 value;
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=cgiLogLevel_;auto cs_key=text2;return cs_dictionary.TryGetValue(cs_key,value);}());})) {
value = 222;
}
text3 = pls::cs::String::concat(pls::cs::String::concat(text3, literal(u"&log=")), integer_string(value));
text3 = pls::cs::String::concat(pls::cs::String::concat(text3, literal(u"&pkg=")), pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->GetPackageName();}));
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return contains_string(cgi, literal(u"startUpSync"));})) {
text3 = pls::cs::String::concat(text3,literal(u"&sus=1"));
}
if (kl_lang::StringEx::Length(text3) > 0) {
text4 = pls::cs::String::concat(pls::cs::String::concat(text4, literal(u"?")), pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(text3, 1);}));
}
return text4;

}
}

// M:kairo.unity.system.KairoBase.Connect(System.String)
ByteArray KairoBase::Connect(pls::cs::String cgi) {
KairoBase::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.Connect(System.String)",kairo);
{
pls::cs::Array<ByteArray> array = KairoBase::Connect(cgi, ByteArray{}, false);
if (([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(pls::cs::Array<ByteArray>{}); return cs_left == cs_right; }()) || (array.length() == 0)) {
return ByteArray{};
}
return array[0];
}

}

// M:kairo.unity.system.KairoBase.Connect(System.String,System.Boolean)
pls::cs::Array<ByteArray> KairoBase::Connect(pls::cs::String cgi,bool split) {
KairoBase::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.Connect(System.String,System.Boolean)",kairo);
{
return KairoBase::Connect(cgi, ByteArray{}, split);
}

}

// M:kairo.unity.system.KairoBase.Connect(System.String,System.Byte[])
ByteArray KairoBase::ConnectByteArray(pls::cs::String cgi,ByteArray send) {
KairoBase::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.Connect(System.String,System.Byte[])",kairo);
{
pls::cs::Array<ByteArray> array = KairoBase::Connect(cgi, send, false);
if (([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(pls::cs::Array<ByteArray>{}); return cs_left == cs_right; }()) || (array.length() == 0)) {
return ByteArray{};
}
return array[0];
}

}

// M:kairo.unity.system.KairoBase.Connect(System.String,System.Byte[],System.Boolean)
pls::cs::Array<ByteArray> KairoBase::Connect(pls::cs::String cgi,ByteArray send,bool split) {
KairoBase::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.Connect(System.String,System.Byte[],System.Boolean)",kairo);
{
pls::cs::Ref<KairoBase> instance = KairoBase::GetInstance();
if (!is_null(cgi) && !require(instance)->login_) {
require(instance)->ConnectLogin(false, false);
}
pls::cs::Array<ByteArray> result = pls::cs::Array<ByteArray>{};
if (!is_null(cgi)) {
result = ([&]() -> pls::cs::Array<ByteArray> { pls::cs::String cs_arg0 = require(instance)->MakeUrl(cgi, send); return require(instance)->HttpConnect(cs_arg0, send, true, split); }());
}
require(instance)->Connected(cgi, send, split);
return result;
}

}

// M:kairo.unity.system.KairoBase.Connected(System.String,System.Byte[],System.Boolean)
void KairoBase::Connected(pls::cs::String cgi,ByteArray send,bool split) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.Connected(System.String,System.Byte[],System.Boolean)",kairo);
{
pls::cs::Ref<notification::ui::NotifyManager> instance = notification::ui::NotifyManager::GetInstance();
if (!is_null(instance) && require(instance)->IsPushEnable()) {
pls::cs::String gCMRegistrationId = native::KairoPlugin::GetGCMRegistrationId();
if ((!is_null(gCMRegistrationId) && (gCMRegistrationId.length() > 0)) && gCMRegistrationId != gcmId_) {
try {
ConnectNotificationRegist(gCMRegistrationId);
gcmId_ = gCMRegistrationId;
} catch(const pls::cs::Exception& cs_caught_214) {auto t=pls::cs::capture_exception(cs_caught_214);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}}
}
}
try {
ConnectAccessCounter();
} catch(const pls::cs::Exception& cs_caught_215) {pls::cs::capture_exception(cs_caught_215);
{

}}
try {
ExecuteConnectTask();
} catch(const pls::cs::Exception& cs_caught_216) {pls::cs::capture_exception(cs_caught_216);
{

}}
}
}

// M:kairo.unity.system.KairoBase.ConnectAsync(System.String,System.Byte[],System.Int32,System.Int32)
void KairoBase::ConnectAsync(pls::cs::String cgi,ByteArray send,pls::cs::Int32 count,pls::cs::Int32 day) {
KairoBase::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectAsync(System.String,System.Byte[],System.Int32,System.Int32)",kairo);
{
pls::cs::Ref<KairoBase> instance = KairoBase::GetInstance();
pls::cs::Ref<KairoBase_ConnectTask> connectTask = KairoBase_ConnectTask::create();
{ auto cs_target = connectTask; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ValueOf(require(instance)->MakeUrl(cgi, send));}); require(cs_target)->url_ = cs_value; }
if ([&]() { auto cs_left = pls::cs::box(send); auto cs_right = pls::cs::box(ByteArray{}); return cs_left != cs_right; }()) {
{ auto cs_target = connectTask; auto cs_value = ByteArray::make(send.length()); require(cs_target)->send_ = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(send), 0, pls::cs::box(require(connectTask)->send_), 0, send.length());});
}
if (count > 100) {
count = 100;
}
if (day > 100) {
day = 100;
}
require(connectTask)->countMax_ = count;
require(connectTask)->dayMax_ = day;
{ auto cs_target = connectTask; pls::cs::Int64 cs_value = util::ClockTime::GetTime(); require(cs_target)->time_ = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(require(instance)->connectTaskList_), pls::cs::box(connectTask));});
}

}

// M:kairo.unity.system.KairoBase.GetUserId
pls::cs::String KairoBase::GetUserId() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.GetUserId",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(userId_);});
}
}

// M:kairo.unity.system.KairoBase.CheckUserId
bool KairoBase::CheckUserId() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.CheckUserId",kairo);
{
return kl_lang::StringEx::Length(GetUserId()) > 0;
}
}

// M:kairo.unity.system.KairoBase.GetFriendId
pls::cs::String KairoBase::GetFriendId() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.GetFriendId",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(friendId_);});
}
}

// M:kairo.unity.system.KairoBase.GetSignature
pls::cs::String KairoBase::GetSignature() {
KairoBase::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.GetSignature",kairo);
{
return literal(u"pls-offline");
}

}

// M:kairo.unity.system.KairoBase.ExecuteConnectTask
void KairoBase::ExecuteConnectTask() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ExecuteConnectTask",kairo);
{
if (!login_) {
return;
}
while (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(connectTaskList_));}) > 0) {
pls::cs::Ref<KairoBase_ConnectTask> connectTask = pls::cs::unbox<pls::cs::Ref<KairoBase_ConnectTask>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_FirstElement(require(connectTaskList_));}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(connectTaskList_), 0);});
try {
++require(connectTask)->count_;
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(connectTask)->url_);});
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return contains_string(text, literal(u"&userid="));})) {
text = pls::cs::String::concat(pls::cs::String::concat(text, literal(u"&userid=")), GetUserId());
}
HttpConnect(text, require(connectTask)->send_, true);
} catch(const pls::cs::Exception& cs_caught_208) {pls::cs::capture_exception(cs_caught_208);
{
if (io::Http::GetErrorCode() == 2) {
--require(connectTask)->count_;
break;
}
pls::cs::Int64 num = (([&]() -> pls::cs::Int64 { auto cs_left = util::ClockTime::GetTime(); auto cs_right = require(connectTask)->time_; return cs_left - cs_right; }())) / pls::cs::Int64(86400000);
if ((require(connectTask)->dayMax_ == -1 || (num < pls::cs::cast_integral<pls::cs::Int64>(require(connectTask)->dayMax_))) && (require(connectTask)->countMax_ == -1 || require(connectTask)->count_ < require(connectTask)->countMax_)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(connectTaskList_), pls::cs::box(connectTask));});
}
break;
}}
}
}
}

// M:kairo.unity.system.KairoBase.CheckNetwork
bool KairoBase::CheckNetwork() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.CheckNetwork",kairo);
{
return false;
}
}

// M:kairo.unity.system.KairoBase.GetLatestVersion
pls::cs::Int32 KairoBase::GetLatestVersion() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.GetLatestVersion",kairo);
{
if (latestVersion_ == 0) {
return appliVersion_;
}
return latestVersion_;
}
}

// M:kairo.unity.system.KairoBase.Update
void KairoBase::Update() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.Update",kairo);
{
if (cheat_ == 0ll && (util::SecureNumber::GetHackingCount() > pls::cs::cast_integral<pls::cs::Int64>(0))) {
cheat_ = util::SecureNumber::GetHackingCount();
AccessCounter(0, literal(u"cheat"), 1, false);
AccessCounter(1, literal(u"cheat"), 1, false);
try {
this->Save();
} catch(const pls::cs::Exception& cs_caught_189) {pls::cs::capture_exception(cs_caught_189);
{

}}
}
}
}

// M:kairo.unity.system.KairoBase.CheckRoot
bool KairoBase::CheckRoot() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.CheckRoot",kairo);
{
return false;
}
}

// M:kairo.unity.system.KairoBase.IsLogin
bool KairoBase::IsLogin() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.IsLogin",kairo);
{
return login_;
}
}

// M:kairo.unity.system.KairoBase.Check(System.Int32)
bool KairoBase::Check(pls::cs::Int32 bit) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.Check(System.Int32)",kairo);
{
return (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(flag_)->Get();}) & bit) != 0;
}
}

// M:kairo.unity.system.KairoBase.On(System.Int32)
void KairoBase::On(pls::cs::Int32 bit) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.On(System.Int32)",kairo);
{
flag_ = kl_unity_util::SecureInt::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(flag_)->Get();}) | bit);
}
}

// M:kairo.unity.system.KairoBase.SetReserveSaveEnable(System.Boolean)
void KairoBase::SetReserveSaveEnable(bool enable) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.SetReserveSaveEnable(System.Boolean)",kairo);
{
reserveSaveEnable = enable;
}
}

// M:kairo.unity.system.KairoBase.HandleActivityResult(System.Int32,System.Int32,System.Object)
bool KairoBase::HandleActivityResult(pls::cs::Int32 requestCode,pls::cs::Int32 resultCode,pls::cs::Ref<pls::cs::Object> data) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.HandleActivityResult(System.Int32,System.Int32,System.Object)",kairo);
{
return false;
}
}

// M:kairo.unity.system.KairoBase.IsCheater
bool KairoBase::IsCheater() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.IsCheater",kairo);
{
if ((cheat_ <= pls::cs::cast_integral<pls::cs::Int64>(0)) && !illegalPackage_) {
return illegalCountry_;
}
return true;
}
}

// M:kairo.unity.system.KairoBase.OnSaveGameBegin
void KairoBase::OnSaveGameBegin() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.OnSaveGameBegin",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.OnSaveGameEnd
void KairoBase::OnSaveGameEnd() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.OnSaveGameEnd",kairo);
{

}
}

// M:kairo.unity.system.KairoBase.AddPaymentMoney(System.String,System.String,System.String,System.Int32,System.Int32,System.Boolean)
bool KairoBase::AddPaymentMoney(pls::cs::String product_id,pls::cs::String order_code,pls::cs::String purchaseToken,pls::cs::Int32 amount,pls::cs::Int32 action,bool async) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.AddPaymentMoney(System.String,System.String,System.String,System.Int32,System.Int32,System.Boolean)",kairo);
{
try {
paymemtList_ = pls::cs::List<pls::cs::Ref<payment::PaymentDataRecord>>::make();
pls::cs::Ref<payment::PaymentDataRecord> paymentDataRecord = payment::PaymentDataRecord::create(product_id, order_code, amount, action);
require(paymentDataRecord)->purchaseToken_ = purchaseToken;
{ pls::cs::Int64 cs_arg0 = util::ClockTime::GetTime(); require(paymentDataRecord)->SetTimeStamp(cs_arg0); }
require(paymentDataRecord)->send_ = true;
pls::diagnostic::api_call([&]() -> decltype(auto) {return paymemtList_.Add(paymentDataRecord);});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->CheckUiThread();}) && !async) {
if (ConnectPaymemtMoney(2, paymemtList_, true) == 0) {
try {
this->Save();
} catch(const pls::cs::Exception& cs_caught_224) {pls::cs::capture_exception(cs_caught_224);
{

}}
}
} else {
pls::cs::Int32 num = ConnectPaymemtMoney(2, paymemtList_, async);
if (num == 1) {
return true;
}
if (num == 2 || num == 3) {
pls::cs::throw_exception(payment::IllegalPurchaseException::create());
}
if (!async && num != 1) {
num = ConnectPaymemtMoney(2, paymemtList_, true);
if (num == 0) {
try {
this->Save();
} catch(const pls::cs::Exception& cs_caught_225) {pls::cs::capture_exception(cs_caught_225);
{

}}
}
}
if (async && num == 0) {
try {
this->Save();
} catch(const pls::cs::Exception& cs_caught_226) {pls::cs::capture_exception(cs_caught_226);
{

}}
return true;
}
}
} catch(const pls::cs::Exception& cs_caught_227) {auto cs_exception_227=pls::cs::capture_exception(cs_caught_227);
if(pls::cs::dynamic_pointer_cast<payment::IllegalPurchaseException>(cs_exception_227)) {auto ex4=pls::cs::dynamic_pointer_cast<payment::IllegalPurchaseException>(cs_exception_227);{
pls::cs::throw_exception(ex4);
}}
else if(pls::cs::exception_is(cs_exception_227,"System.Exception")) {{
return false;
}}
else {throw;} }
return false;
}
}

// M:kairo.unity.system.KairoBase.GetPaymentMoney
pls::cs::Int32 KairoBase::GetPaymentMoney() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.GetPaymentMoney",kairo);
{
try {
paymemtList_ = pls::cs::List<pls::cs::Ref<payment::PaymentDataRecord>>::make();
pls::cs::Ref<payment::PaymentDataRecord> paymentDataRecord = payment::PaymentDataRecord::create(literal(u"get_order"), literal(u"get_product"), 0, 0);
require(paymentDataRecord)->send_ = true;
pls::diagnostic::api_call([&]() -> decltype(auto) {return paymemtList_.Add(paymentDataRecord);});
return ConnectPaymemtMoney(1, paymemtList_, false);
} catch(const pls::cs::Exception& cs_caught_205) {pls::cs::capture_exception(cs_caught_205);
{
return -1;
}}
}
}

// M:kairo.unity.system.KairoBase.ConnectPaymemtMoney(System.Int32,System.Collections.Generic.List{kairo.unity.system.payment.PaymentDataRecord},System.Boolean)
pls::cs::Int32 KairoBase::ConnectPaymemtMoney(pls::cs::Int32 mode,pls::cs::List<pls::cs::Ref<payment::PaymentDataRecord>> paymemtListData,bool async) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectPaymemtMoney(System.Int32,System.Collections.Generic.List{kairo.unity.system.payment.PaymentDataRecord},System.Boolean)",kairo);
{
kl_cfg::Config::ensure_initialized();

if (!CheckUserId()) {
return -1;
}
if (paymemtListData.get_Count() == 0) {
return -1;
}
if (mode != 2 && mode != 3 && mode != 1) {
return -1;
}
pls::cs::String text = literal(u"");
for (pls::cs::Int32 i = 0; i < paymemtListData.get_Count(); ++i) {
pls::cs::Ref<payment::PaymentDataRecord> paymentDataRecord = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_list=paymemtListData;auto cs_index=i;if(cs_list.is_null())throw pls::cs::ArgumentNullException();return cs_list.get_Item(cs_index);}());});
if (require(paymentDataRecord)->send_) {
if (text.length() > 0) {
text = pls::cs::String::concat(text,literal(u"\t"));
}
if ((mode == 3) && ((pls::kairo::UnityApplication::get_platform() == 8 /* RuntimePlatform.IPhonePlayer */))) {
text = (([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text, integer_string(mode)), literal(u",")), require(paymentDataRecord)->orderId_), literal(u"_")); auto cs_right = GetUserId(); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = require(paymentDataRecord)->productId_; return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->GetPackageName();}); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = integer_string(require(paymentDataRecord)->amount_); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = integer_string(require(paymentDataRecord)->actCode_); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = integer_string(require(paymentDataRecord)->timestamp_); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = require(paymentDataRecord)->purchaseToken_; return pls::cs::String::concat(cs_left,cs_right); }()));
} else {
text = (([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text, integer_string(mode)), literal(u",")), require(paymentDataRecord)->orderId_), literal(u",")), require(paymentDataRecord)->productId_), literal(u",")); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->GetPackageName();}); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = integer_string(require(paymentDataRecord)->amount_); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = integer_string(require(paymentDataRecord)->actCode_); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = integer_string(require(paymentDataRecord)->timestamp_); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u",")); auto cs_right = require(paymentDataRecord)->purchaseToken_; return pls::cs::String::concat(cs_left,cs_right); }()));
}
if (mode == 2) {
text = pls::cs::String::concat(text,literal(u",1"));
}
}
}
if (text.length() == 0) {
return -1;
}
if (mode == 3 && !async) {
try {
ExecuteConnectTask();
} catch(const pls::cs::Exception& cs_caught_206) {pls::cs::capture_exception(cs_caught_206);
{

}}
}
pls::cs::Int32 num = KairoBase::CONNECT_TRY()[mode];
pls::cs::Int32 num2 = 0;
pls::cs::Int32 result = 0;
do {
++num2;
ByteArray bytes = kl_lang::StringEx::GetBytes(text);
pls::cs::String cgi = pls::cs::String::concat(literal(u"virtual_currency.php"), KairoBase::MakeQueryString(literal(u"startUpSync"), async ? literal(u"1") : pls::cs::String{}));
try {
if (async) {
KairoBase::ConnectAsync(cgi, bytes, 15, -1);
break;
}
pls::cs::Array<ByteArray> array = KairoBase::Connect(cgi, bytes, false);
if (([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(pls::cs::Array<ByteArray>{}); return cs_left == cs_right; }()) || (array.length() == 0)) {
result = -1;
} else {
for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
if (4 < array[j].length()) {
result = 1;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = connectPaymemtMoneyResponse_; auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = array[j]; return require(cs_receiver)->GetString(cs_arg0); }());}); cs_receiver.Add(cs_arg0); }());});
} else if (array[j].length() != 0) {
if (array[j].length() == 1) {
throw pls::cs::Exception();
}
result = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::EncodeUtil::ByteAryToInt(array[j], true);});
}
}
break;
}
} catch(const pls::cs::Exception& cs_caught_207) {auto t=pls::cs::capture_exception(cs_caught_207);
{
if (kl_cfg::Config::DEBUG()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}
result = -1;
}}
java::lang::JThread::Sleep(100ll);
} while (num2 < num);
return result;

}
}

// M:kairo.unity.system.KairoBase.GetPaymentHost
pls::cs::String KairoBase::GetPaymentHost() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.GetPaymentHost",kairo);
{
kl_cfg::Config::ensure_initialized();

if (!kl_cfg::Config::DEBUG() && accountType_ == 1) {
return literal(u"http://virtualCurrency.kairogame.jp/");
}
return literal(u"http://kairopark.kir.jp/");

}
}

// M:kairo.unity.system.KairoBase.ConnectNotificationRegist(System.String)
void KairoBase::ConnectNotificationRegist(pls::cs::String gcmId) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectNotificationRegist(System.String)",kairo);
{
return;
}
}

// M:kairo.unity.system.KairoBase.ConnectLangPackCheck(System.String,System.Int32,System.Int32)
bool KairoBase::ConnectLangPackCheck(pls::cs::String file,pls::cs::Int32 ver,pls::cs::Int32 hash) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectLangPackCheck(System.String,System.Int32,System.Int32)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::New(KairoBase::Connect(([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String::concat(GetCommonServer(), literal(u"com/cgi/langpack.php")); auto cs_right = KairoBase::MakeQueryString(literal(u"mode"), literal(u"check")); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = KairoBase::MakeQueryString(literal(u"file"), file); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = KairoBase::MakeQuery(literal(u"ver"), ver); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = KairoBase::MakeQuery(literal(u"hash"), hash); return pls::cs::String::concat(cs_left,cs_right); }())));}));}) == 1;
}
}

// M:kairo.unity.system.KairoBase.ConnectLangPackSet(System.String,System.Int32,System.Int32,System.String)
void KairoBase::ConnectLangPackSet(pls::cs::String file,pls::cs::Int32 ver,pls::cs::Int32 hash,pls::cs::String data) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectLangPackSet(System.String,System.Int32,System.Int32,System.String)",kairo);
{
{ auto cs_left_305 = ([&]() { auto cs_left_305 = ([&]() { auto cs_left_305 = ([&]() { auto cs_left_305 = pls::cs::String::concat(GetCommonServer(), literal(u"com/cgi/langpack.php")); auto cs_right_305 = KairoBase::MakeQueryString(literal(u"mode"), literal(u"set")); return pls::cs::String::concat(cs_left_305,cs_right_305); }()); auto cs_right_305 = KairoBase::MakeQueryString(literal(u"file"), file); return pls::cs::String::concat(cs_left_305,cs_right_305); }()); auto cs_right_305 = KairoBase::MakeQuery(literal(u"ver"), ver); return pls::cs::String::concat(cs_left_305,cs_right_305); }()); auto cs_right_305 = KairoBase::MakeQuery(literal(u"hash"), hash);
pls::cs::String cs_arg0 = pls::cs::String::concat(cs_left_305,cs_right_305); ByteArray cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::cs::RuntimeEncoding::get_UTF8())->GetBytes(data);}); KairoBase::ConnectByteArray(cs_arg0, cs_arg1);}
}
}

// M:kairo.unity.system.KairoBase.ConnectLangPackWeb(System.String)
void KairoBase::ConnectLangPackWeb(pls::cs::String file) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.ConnectLangPackWeb(System.String)",kairo);
{
ui::Canvas::OpenBrowser(([&]() { auto cs_left = pls::cs::String::concat(GetCommonServer(), literal(u"com/cgi/langpack.php?file=")); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_replace(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_replace(file, literal(u" "), literal(u""));}), literal(u"\u3000"), literal(u""));}); return pls::cs::String::concat(cs_left,cs_right); }()));
}
}

// M:kairo.unity.system.KairoBase.LoadAppList
void KairoBase::LoadAppList() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.LoadAppList",kairo);
{
for (pls::cs::Int32 i = 0; i < 2; ++i) {
try {
ByteArray array = ByteArray{};
if (i == 0) {
array = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Storage::Read(3, true, literal(u"applist.txt"));});
} else {
array = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Storage::Read(1, true, literal(u"app/list.bin"));});
if ([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(ByteArray{}); return cs_left != cs_right; }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Encrypter::Decode(array);});
}
}
if ([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(ByteArray{}); return cs_left != cs_right; }()) {
pls::cs::Int32 date;
auto cs_receiver_19 = static_cast<pls::cs::Ref<KairoBase>>(this); ByteArray cs_arg0_19 = array; if(!cs_receiver_19)throw pls::cs::NullReferenceException(); auto& cs_arg1_19 = date;
pls::cs::Array<appli::GameAppli> array2 = cs_receiver_19->LoadAppList(cs_arg0_19,cs_arg1_19);
if (appListDate_ < date) {
appListDate_ = date;
appList_ = array2;
}
}
} catch(const pls::cs::Exception& cs_caught_35) {auto t=pls::cs::capture_exception(cs_caught_35);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}}
}
}
}

// M:kairo.unity.system.KairoBase.LoadAppList(System.Byte[],System.Int32@)
pls::cs::Array<appli::GameAppli> KairoBase::LoadAppList(ByteArray data,pls::cs::Int32& date) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.LoadAppList(System.Byte[],System.Int32@)",kairo);
{
date = -1;
if (data.length() == 0) {
return pls::cs::Array<appli::GameAppli>::make(0);
}
pls::cs::String text = pls::cs::String{};
pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream = kl_io::ByteArrayInputStream::create(data);
pls::cs::run_finally([&]() {{
date = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream);});
text = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadString(byteArrayInputStream);});
}}, [&]() {
([&]() -> void { auto cs_conditional = byteArrayInputStream; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<kl_io::InputStream>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Close(); }()); }());
});
pls::cs::List<appli::GameAppli> list = pls::cs::List<appli::GameAppli>::make();
IntArray array = IntArray{};
StringArray array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=text;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(10);return pls::cs::string_split(cs_text,cs_separators);}());});
for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
StringArray array3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=array2[i];auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=u',';return pls::cs::string_split(cs_text,cs_separators);}());});
if ([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }()) {
array = IntArray::make(50);
for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
array[j] = -1;
}
for (pls::cs::Int32 k = 0; k < array3.length(); ++k) {
array[pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(array3[k]);})] = k;
}
continue;
}
pls::cs::Int64 num;
appli::GameAppli item = appli::GameAppli{};
if (array[0] != -1) {
{ pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(array3[array[0]]);}); item.Pid = cs_value; }
}
if (array[1] != -1) {
{ auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_to_lower(array3[array[1]]);}));}); item.Language = cs_value; }
}
if (array[2] != -1) {
{ auto cs_value = array3[array[2]]; item.Name = cs_value; }
}
num = -1ll;
if (array[10] != -1) {
{ auto cs_value = array3[array[10]]; item.AndPkg = cs_value; }
}
if (array[11] != -1) {
{ pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(array3[array[11]]);}); item.AndPrice = cs_value; }
}
if (array[12] != -1) {
num = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int64_parse(array3[array[12]]);});
if ((num != pls::cs::cast_integral<pls::cs::Int64>(-1)) && (num < pls::cs::cast_integral<pls::cs::Int64>(0))) {
num = 0ll;
}
}
{ pls::cs::Int32 cs_value = pls::cs::to_int32(num); item.AndDate = cs_value; }
num = -1ll;
if (array[23] != -1) {
{ auto cs_value = array3[array[23]]; item.IOSPkg = cs_value; }
}
if (array[20] != -1) {
{ auto cs_value = array3[array[20]]; item.IOSId = cs_value; }
}
if (array[21] != -1) {
{ pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(array3[array[21]]);}); item.IOSPrice = cs_value; }
}
if (array[22] != -1) {
num = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int64_parse(array3[array[22]]);});
if ((num != pls::cs::cast_integral<pls::cs::Int64>(-1)) && (num < pls::cs::cast_integral<pls::cs::Int64>(0))) {
num = 0ll;
}
}
{ pls::cs::Int32 cs_value = pls::cs::to_int32(num); item.IOSDate = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return list.Add(item);});
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return list.ToArray();});
}
}

// M:kairo.unity.system.KairoBase.GetAppList(System.Boolean,System.Boolean)
pls::cs::Array<appli::GameAppli> KairoBase::GetAppList(bool languageOnly,bool releaseOnly) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.GetAppList(System.Boolean,System.Boolean)",kairo);
{
kl_cfg::Config::ensure_initialized();

if (appList_.length() == 0) {
LoadAppList();
}
pls::cs::List<appli::GameAppli> list = pls::cs::List<appli::GameAppli>::make();
pls::cs::Array<appli::GameAppli> array = appList_;
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
appli::GameAppli item = array[i];
if ((!languageOnly || ((item.Language).length() <= 0) || ((!pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Language::Japanese();}) || !((item.Language != literal(u"ja")))) && (!util::Language::English() || !((item.Language != literal(u"en")))))) && (!releaseOnly || ((kl_cfg::Config::APPLI_TYPE() != 2 || ([&](){return appli::GameAppli::IsReleaseAndroid(&item);}())) && (kl_cfg::Config::APPLI_TYPE() != 3 || ([&](){return appli::GameAppli::IsReleaseIOS(&item);}()))))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return list.Add(item);});
}
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return list.ToArray();});

}
}

// M:kairo.unity.system.KairoBase.HttpConnect(System.String,System.Byte[],System.Boolean)
ByteArray KairoBase::HttpConnect(pls::cs::String url,ByteArray send,bool check) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.HttpConnect(System.String,System.Byte[],System.Boolean)",kairo);
{
if (connects_.get_Count() <= 0) {
return io::Http::Connect(url, send, check);
}
return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_stack=connects_;return cs_stack.Peek();}());}))->Connect(url, send, check);
}
}

// M:kairo.unity.system.KairoBase.HttpConnect(System.String,System.Byte[],System.Boolean,System.Boolean)
pls::cs::Array<ByteArray> KairoBase::HttpConnect(pls::cs::String url,ByteArray send,bool check,bool split) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.HttpConnect(System.String,System.Byte[],System.Boolean,System.Boolean)",kairo);
{
if (connects_.get_Count() <= 0) {
return io::Http::Connect(url, send, check, split);
}
return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_stack=connects_;return cs_stack.Peek();}());}))->Connect(url, send, check, split);
}
}

// M:kairo.unity.system.KairoBase.SetGameState(System.Boolean)
void KairoBase::SetGameState(bool playing) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.SetGameState(System.Boolean)",kairo);
{
if (isPlaying_ != playing) {
isPlaying_ = playing;
pls::cs::Ref<notification::ui::NotifyManager> instance = notification::ui::NotifyManager::GetInstance();
if (!is_null(instance)) {
if (playing) {
require(instance)->DoCancel();
return;
}
require(instance)->DoNotify();
}
}
}
}

// M:kairo.unity.system.KairoBase.IsGamePlaying
bool KairoBase::IsGamePlaying() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.IsGamePlaying",kairo);
{
return isPlaying_;
}
}

// M:kairo.unity.system.KairoBase.SetSystemStartProgress(System.Int32)
void KairoBase::SetSystemStartProgress(pls::cs::Int32 progress) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.SetSystemStartProgress(System.Int32)",kairo);
{
if (progress > 100) {
progress = 100;
}
if (prgStart_[0] < progress) {
prgStart_[0] = progress;
}
}
}

// M:kairo.unity.system.KairoBase.GetCommonServer
pls::cs::String KairoBase::GetCommonServer() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.KairoBase.GetCommonServer",kairo);
{
kl_cfg::Config::ensure_initialized();

if (is_null(COMMON_SERVER)) {
COMMON_SERVER = (kl_cfg::Config::DEBUG() ? literal(u"https://applidev.kairogame.jp/") : literal(u"https://appli.kairogame.jp/"));
}
return COMMON_SERVER;

}
}
} // namespace kairo::unity::system
}
