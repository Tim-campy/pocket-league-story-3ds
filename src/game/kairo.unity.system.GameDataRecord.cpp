// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JLong.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.system.GameDataRecord.Data.hpp"
#include "kairo.unity.system.GameDataRecord.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.util.SecureByteArray.hpp"
#include "kairo.unity.util.SecureString.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace kairo::unity::system {

void GameDataRecord::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(userId_,visitor);pls::cs::trace_value(friendId_,visitor);pls::cs::trace_value(number_,visitor);pls::cs::trace_value(dataSet_,visitor);}

static PLS_NOINLINE void cs_init_b6ad7779caeeb23c_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.system.GameDataRecord",flag,[](){

});}

void GameDataRecord::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_b6ad7779caeeb23c_slow(flag);}

void GameDataRecord::create_init(pls::cs::Ref<GameDataRecord> self) {
GameDataRecord::ensure_initialized();
GameDataRecord::create_init(pls::cs::static_pointer_cast<GameDataRecord>(self), -1, 0, true);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.#ctor",kairo);
{

}

}

void GameDataRecord::create_init(pls::cs::Ref<GameDataRecord> self,pls::cs::Int32 number,bool insert) {
GameDataRecord::ensure_initialized();
GameDataRecord::create_init(pls::cs::static_pointer_cast<GameDataRecord>(self), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(require(KairoBase::GetInstance())->GetFriendId());}), number, insert);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Boolean)",kairo);
{

}

}

void GameDataRecord::create_init(pls::cs::Ref<GameDataRecord> self,pls::cs::Int32 friendId,pls::cs::Int32 number,bool insert) {
GameDataRecord::ensure_initialized();
self->userId_ = kl_unity_util::SecureInt::create();
self->friendId_ = kl_unity_util::SecureInt::create();
self->number_ = kl_unity_util::SecureInt::create();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean)",kairo);
{
self->userId_ = kl_unity_util::SecureInt::create(-1);
self->friendId_ = kl_unity_util::SecureInt::create(friendId);
self->number_ = kl_unity_util::SecureInt::create(number);
self->dataSet_ = kl_java_util::Vector::create();
self->exist_ = true;
self->isInsert_ = insert;
}

}

// M:kairo.unity.system.GameDataRecord.#ctor
pls::cs::Ref<GameDataRecord> GameDataRecord::create() {
GameDataRecord::ensure_initialized();
 auto self = pls::cs::make_ref<GameDataRecord>(); GameDataRecord::create_init(self); return self; 
}

// M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Boolean)
pls::cs::Ref<GameDataRecord> GameDataRecord::create(pls::cs::Int32 number,bool insert) {
GameDataRecord::ensure_initialized();
 auto self = pls::cs::make_ref<GameDataRecord>(); GameDataRecord::create_init(self,number,insert); return self; 
}

// M:kairo.unity.system.GameDataRecord.#ctor(System.Int32,System.Int32,System.Boolean)
pls::cs::Ref<GameDataRecord> GameDataRecord::create(pls::cs::Int32 friendId,pls::cs::Int32 number,bool insert) {
GameDataRecord::ensure_initialized();
 auto self = pls::cs::make_ref<GameDataRecord>(); GameDataRecord::create_init(self,friendId,number,insert); return self; 
}

// M:kairo.unity.system.GameDataRecord.Add(System.String)
void GameDataRecord::Add(pls::cs::String name) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Add(System.String)",kairo);
{
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(dataSet_));}); ++i) {
pls::cs::Ref<GameDataRecord_Data> data = pls::cs::unbox<pls::cs::Ref<GameDataRecord_Data>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(dataSet_), i);}));
if (!require(data)->toset_ && pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(name, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(data)->name_);}));})) {
return;
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = dataSet_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(GameDataRecord_Data::create(name, ByteArray{}, false)); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
}
}

// M:kairo.unity.system.GameDataRecord.Add(System.String,System.String)
void GameDataRecord::Add(pls::cs::String name,pls::cs::String value) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Add(System.String,System.String)",kairo);
{
AddByteArray(name, (is_null(value)) ? ByteArray{} : kl_lang::StringEx::GetBytes(value));
}
}

// M:kairo.unity.system.GameDataRecord.Add(System.String,System.Int64)
void GameDataRecord::AddLong(pls::cs::String name,pls::cs::Int64 value) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Add(System.String,System.Int64)",kairo);
{
AddByteArray(name, kl_lang::StringEx::GetBytes(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfLong(value);})));
}
}

// M:kairo.unity.system.GameDataRecord.Add(System.String,System.Byte[])
void GameDataRecord::AddByteArray(pls::cs::String name,ByteArray data) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Add(System.String,System.Byte[])",kairo);
{
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(dataSet_));}); ++i) {
pls::cs::Ref<GameDataRecord_Data> data2 = pls::cs::unbox<pls::cs::Ref<GameDataRecord_Data>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(dataSet_), i);}));
if (require(data2)->toset_ && pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(name, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(data2)->name_);}));})) {
{ auto cs_target = data2; auto cs_value = util::SecureByteArray::ValueOf(data); require(cs_target)->value_ = cs_value; }
return;
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = dataSet_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(GameDataRecord_Data::create(name, data, true)); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
}
}

// M:kairo.unity.system.GameDataRecord.Acquire(System.String,System.Byte[])
void GameDataRecord::Acquire(pls::cs::String name,ByteArray data) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Acquire(System.String,System.Byte[])",kairo);
{
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(dataSet_));}); ++i) {
pls::cs::Ref<GameDataRecord_Data> data2 = pls::cs::unbox<pls::cs::Ref<GameDataRecord_Data>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(dataSet_), i);}));
if (!require(data2)->toset_ && pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(name, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(data2)->name_);}));})) {
{ auto cs_target = data2; auto cs_value = util::SecureByteArray::ValueOf(data); require(cs_target)->value_ = cs_value; }
require(data2)->acquired_ = true;
break;
}
}
}
}

// M:kairo.unity.system.GameDataRecord.GetValue(System.String)
pls::cs::Int64 GameDataRecord::GetValue(pls::cs::String name) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetValue(System.String)",kairo);
{
ByteArray data = GetData(name);
if ([&]() { auto cs_left = pls::cs::box(data); auto cs_right = pls::cs::box(ByteArray{}); return cs_left == cs_right; }()) {
return (-9223372036854775807ll - 1) /* Int64.MinValue */;
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JLong::ParseLong(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::cs::RuntimeEncoding::get_UTF8())->GetString(data);}));});
}
}

// M:kairo.unity.system.GameDataRecord.GetString(System.String)
pls::cs::String GameDataRecord::GetString(pls::cs::String name) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetString(System.String)",kairo);
{
ByteArray data = GetData(name);
if ([&]() { auto cs_left = pls::cs::box(data); auto cs_right = pls::cs::box(ByteArray{}); return cs_left == cs_right; }()) {
return pls::cs::String{};
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::cs::RuntimeEncoding::get_UTF8())->GetString(data);});
}
}

// M:kairo.unity.system.GameDataRecord.GetData(System.String)
ByteArray GameDataRecord::GetData(pls::cs::String name) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetData(System.String)",kairo);
{
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(dataSet_));}); ++i) {
pls::cs::Ref<GameDataRecord_Data> data = pls::cs::unbox<pls::cs::Ref<GameDataRecord_Data>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(dataSet_), i);}));
if (!require(data)->toset_ && pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(name, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(data)->name_);}));}) && require(data)->acquired_) {
return util::SecureByteArray::ToArray(require(data)->value_);
}
}
for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(dataSet_));}); ++j) {
pls::cs::Ref<GameDataRecord_Data> data2 = pls::cs::unbox<pls::cs::Ref<GameDataRecord_Data>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(dataSet_), j);}));
if (require(data2)->toset_ && pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(name, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(data2)->name_);}));})) {
return util::SecureByteArray::ToArray(require(data2)->value_);
}
}
return ByteArray{};
}
}

// M:kairo.unity.system.GameDataRecord.Pack(java.io.OutputStream)
void GameDataRecord::Pack(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Pack(java.io.OutputStream)",kairo);
{
pls::cs::Ref<KairoBase> instance = KairoBase::GetInstance();
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {return require(userId_)->Get();}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {return require(friendId_)->Get();}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {return require(number_)->Get();}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(dataSet_));}));});
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(dataSet_));}); ++i) {
pls::cs::Ref<GameDataRecord_Data> data = pls::cs::unbox<pls::cs::Ref<GameDataRecord_Data>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(dataSet_), i);}));
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(data)->name_);});
pls::cs::String cs_arg1_313 = text; ByteArray cs_arg2_313 = util::SecureByteArray::ToArray(require(data)->value_);
ByteArray array = require(instance)->ToDBValue(literal(u"t_gamedata"), cs_arg1_313, cs_arg2_313);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteStringString(os, text);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, (([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(ByteArray{}); return cs_left == cs_right; }())) ? -1 : array.length());});
if ([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(ByteArray{}); return cs_left != cs_right; }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(os, array);});
}
}
}
}

// M:kairo.unity.system.GameDataRecord.Copy(System.Boolean)
pls::cs::Ref<GameDataRecord> GameDataRecord::Copy(bool to_set) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Copy(System.Boolean)",kairo);
{
pls::cs::Int32 cs_arg0_311 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(friendId_)->Get();}); pls::cs::Int32 cs_arg1_311 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(number_)->Get();}); bool cs_arg2_311 = isInsert_;
pls::cs::Ref<GameDataRecord> gameDataRecord = GameDataRecord::create(cs_arg0_311, cs_arg1_311, cs_arg2_311);
{ auto cs_target = gameDataRecord; auto cs_value = kl_unity_util::SecureInt::create_2(friendId_); require(cs_target)->friendId_ = cs_value; }
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(dataSet_));}); ++i) {
pls::cs::Ref<GameDataRecord_Data> data = pls::cs::unbox<pls::cs::Ref<GameDataRecord_Data>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(dataSet_), i);}));
if (require(data)->toset_ == to_set && (!to_set || pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(data)->name_)->IndexOf(46);}) == -1)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = require(gameDataRecord)->dataSet_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(require(data)->Clone()); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
}
}
return gameDataRecord;
}
}

// M:kairo.unity.system.GameDataRecord.ToString
pls::cs::String GameDataRecord::ToString() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.ToString",kairo);
{
pls::cs::String text = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(pls::cs::String::concat(literal(u"userId ["), integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(userId_)->Get();}))), literal(u"] friendId [")); auto cs_right = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(friendId_)->Get();})); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"] number [")); auto cs_right = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(number_)->Get();})); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"]"));
try {
if ([&]() { pls::cs::Ref<kl_java_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = dataSet_; pls::cs::Ref<kl_java_util::Vector> cs_right = pls::cs::Ref<kl_java_util::Vector>{}; return kl_java_util::Vector_2_op_Inequality(cs_left,cs_right); }()) {
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(dataSet_));}); ++i) {
pls::cs::Ref<GameDataRecord_Data> data = pls::cs::unbox<pls::cs::Ref<GameDataRecord_Data>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(dataSet_), i);}));
text = concat_objects2(pls::cs::box(text),pls::cs::box(([&]() { pls::cs::Ref<kl_unity_util::SecureString> cs_left = ([&]() { pls::cs::String cs_left = pls::cs::String::concat(pls::cs::String::concat(literal(u"\n"), (require(data)->toset_ ? literal(u"set") : literal(u"get"))), literal(u":")); pls::cs::Ref<kl_unity_util::SecureString> cs_right = require(data)->name_; return util::SecureString::op_Addition(cs_left,cs_right); }()); pls::cs::String cs_right = literal(u":"); return kl_unity_util::SecureString::op_Addition(cs_left,cs_right); }())));
if (is_null(require(data)->value_)) {
text = (pls::cs::String::concat(text, literal(u"null")));
} else {
text = (pls::cs::String::concat(text, pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = require(require(data)->value_)->ToArray(); return require(cs_receiver)->GetString(cs_arg0); }());})));
}
}
}
} catch(const pls::cs::Exception& cs_caught_301) {pls::cs::capture_exception(cs_caught_301);
{

}}
return text;
}
}

// M:kairo.unity.system.GameDataRecord.Clone
pls::cs::Ref<GameDataRecord> GameDataRecord::Clone() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Clone",kairo);
{
pls::cs::Int32 cs_arg0_314 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(friendId_)->Get();}); pls::cs::Int32 cs_arg1_314 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(number_)->Get();}); bool cs_arg2_314 = isInsert_;
pls::cs::Ref<GameDataRecord> gameDataRecord = GameDataRecord::create(cs_arg0_314, cs_arg1_314, cs_arg2_314);
{ auto cs_target = gameDataRecord; auto cs_value = kl_unity_util::SecureInt::create_2(userId_); require(cs_target)->userId_ = cs_value; }
{ auto cs_target = gameDataRecord; auto cs_value = kl_java_util::Vector::create(); require(cs_target)->dataSet_ = cs_value; }
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(dataSet_));}); ++i) {
pls::cs::Ref<GameDataRecord_Data> data = pls::cs::unbox<pls::cs::Ref<GameDataRecord_Data>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(dataSet_), i);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = require(gameDataRecord)->dataSet_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(require(data)->Clone()); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
}
return gameDataRecord;
}
}

// M:kairo.unity.system.GameDataRecord.GetFriendId
pls::cs::Int32 GameDataRecord::GetFriendId() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetFriendId",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(friendId_)->Get();});
}
}

// M:kairo.unity.system.GameDataRecord.GetNumber
pls::cs::Int32 GameDataRecord::GetNumber() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetNumber",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(number_)->Get();});
}
}

// M:kairo.unity.system.GameDataRecord.GetHashCode
std::int32_t GameDataRecord::GetHashCode() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
} // namespace kairo::unity::system
}
