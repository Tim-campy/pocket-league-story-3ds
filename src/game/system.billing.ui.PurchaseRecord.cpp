// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JCalendar.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.util.ClockTime.hpp"
#include "system.billing.ui.PurchaseRecord.hpp"
#include "system.billing.util.Purchase.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace system::billing::ui {

void PurchaseRecord::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(productId_,visitor);pls::cs::trace_value(orderId_,visitor);pls::cs::trace_value(timestamp_,visitor);}

static PLS_NOINLINE void cs_init_cd85e7c847ae4598_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.billing.ui.PurchaseRecord",flag,[](){

});}

void PurchaseRecord::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_cd85e7c847ae4598_slow(flag);}

void PurchaseRecord::create_init(pls::cs::Ref<PurchaseRecord> self) {
PurchaseRecord::ensure_initialized();
([&]() { pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = pls::cs::String(u""); PurchaseRecord::create_init(pls::cs::static_pointer_cast<PurchaseRecord>(self),cs_arg0,cs_arg1); }());
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.#ctor",game);
{

}

}

void PurchaseRecord::create_init(pls::cs::Ref<PurchaseRecord> self,pls::cs::String productId,pls::cs::String orderId) {
PurchaseRecord::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.#ctor(System.String,System.String)",game);
{
self->productId_ = productId;
self->orderId_ = orderId;
self->timestamp_ = IntArray::make(3);
for (pls::cs::Int32 i = 0; i < self->timestamp_.length(); ++i) {
self->timestamp_[i] = -1;
}
self->state_ = -1;
self->send_ = false;
}

}

// M:system.billing.ui.PurchaseRecord.#ctor
pls::cs::Ref<PurchaseRecord> PurchaseRecord::create() {
PurchaseRecord::ensure_initialized();
 auto self = pls::cs::make_ref<PurchaseRecord>(); PurchaseRecord::create_init(self); return self; 
}

// M:system.billing.ui.PurchaseRecord.#ctor(System.String,System.String)
pls::cs::Ref<PurchaseRecord> PurchaseRecord::create(pls::cs::String productId,pls::cs::String orderId) {
PurchaseRecord::ensure_initialized();
 auto self = pls::cs::make_ref<PurchaseRecord>(); PurchaseRecord::create_init(self,productId,orderId); return self; 
}

// M:system.billing.ui.PurchaseRecord.ToString
pls::cs::String PurchaseRecord::ToString() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.ToString",game);
{
{auto cs_left_289 = pls::cs::String::concat(([&]() { auto cs_left_289 = pls::cs::String::concat(([&]() { auto cs_left_289 = pls::cs::String::concat(([&]() { auto cs_left_289 = pls::cs::String::concat(([&]() { auto cs_left_289 = pls::cs::String::concat(GetProductId(), literal(u" (")); auto cs_right_289 = integer_string(GetState()); return pls::cs::String::concat(cs_left_289,cs_right_289); }()), literal(u") [")); auto cs_right_289 = GetTimeStamp(0); return pls::cs::String::concat(cs_left_289,cs_right_289); }()), literal(u"][")); auto cs_right_289 = GetTimeStamp(1); return pls::cs::String::concat(cs_left_289,cs_right_289); }()), literal(u"][")); auto cs_right_289 = GetTimeStamp(2); return pls::cs::String::concat(cs_left_289,cs_right_289); }()), literal(u"]\n")); auto cs_right_289 = GetOrderId();
return pls::cs::String::concat(cs_left_289,cs_right_289);}
}
}

// M:system.billing.ui.PurchaseRecord.GetProductId
pls::cs::String PurchaseRecord::GetProductId() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetProductId",game);
{
return productId_;
}
}

// M:system.billing.ui.PurchaseRecord.GetOrderId
pls::cs::String PurchaseRecord::GetOrderId() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetOrderId",game);
{
return orderId_;
}
}

// M:system.billing.ui.PurchaseRecord.GetTimeStamp(System.Int32)
pls::cs::String PurchaseRecord::GetTimeStamp(pls::cs::Int32 state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetTimeStamp(System.Int32)",game);
{
if (timestamp_[state] <= 0) {
return pls::cs::String(u"");
}
pls::cs::Ref<kl_java_util::JCalendar> instance = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JCalendar::GetInstance();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int64 cs_arg0 = pls::cs::Int64(timestamp_[state]) * 1000ll; require(instance)->SetTimeInMillis(cs_arg0); }());});
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(1);}));});
pls::cs::String text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(2);})) + 1);});
pls::cs::String text3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(5);}));});
pls::cs::String text4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(11);}));});
pls::cs::String text5 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(12);}));});
pls::cs::String text6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(13);}));});
if (kl_lang::StringEx::Length(text2) == 1) {
text2 = pls::cs::String::concat(literal(u"0"), text2);
}
if (kl_lang::StringEx::Length(text3) == 1) {
text3 = pls::cs::String::concat(literal(u"0"), text3);
}
if (kl_lang::StringEx::Length(text4) == 1) {
text4 = pls::cs::String::concat(literal(u"0"), text4);
}
if (kl_lang::StringEx::Length(text5) == 1) {
text5 = pls::cs::String::concat(literal(u"0"), text5);
}
if (kl_lang::StringEx::Length(text6) == 1) {
text6 = pls::cs::String::concat(literal(u"0"), text6);
}
return pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text, literal(u"-")), text2), literal(u"-")), text3), literal(u" ")), text4), literal(u":")), text5), literal(u":")), text6);
}
}

// M:system.billing.ui.PurchaseRecord.GetTimeStampNengappi(System.Int32)
pls::cs::String PurchaseRecord::GetTimeStampNengappi(pls::cs::Int32 state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetTimeStampNengappi(System.Int32)",game);
{
if (timestamp_[state] <= 0) {
return pls::cs::String(u"");
}
pls::cs::Ref<kl_java_util::JCalendar> instance = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JCalendar::GetInstance();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int64 cs_arg0 = pls::cs::Int64(timestamp_[state]) * 1000ll; require(instance)->SetTimeInMillis(cs_arg0); }());});
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(1);}));});
pls::cs::String text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(2);})) + 1);});
pls::cs::String text3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(5);}));});
pls::cs::String text4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(11);}));});
pls::cs::String text5 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(12);}));});
pls::cs::String text6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(13);}));});
if (kl_lang::StringEx::Length(text2) == 1) {
text2 = pls::cs::String::concat(literal(u"0"), text2);
}
if (kl_lang::StringEx::Length(text3) == 1) {
text3 = pls::cs::String::concat(literal(u"0"), text3);
}
if (kl_lang::StringEx::Length(text4) == 1) {
text4 = pls::cs::String::concat(literal(u"0"), text4);
}
if (kl_lang::StringEx::Length(text5) == 1) {
text5 = pls::cs::String::concat(literal(u"0"), text5);
}
if (kl_lang::StringEx::Length(text6) == 1) {
text6 = pls::cs::String::concat(literal(u"0"), text6);
}
return pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text, literal(u"-")), text2), literal(u"-")), text3);
}
}

// M:system.billing.ui.PurchaseRecord.GetState
pls::cs::Int32 PurchaseRecord::GetState() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetState",game);
{
return state_;
}
}

// M:system.billing.ui.PurchaseRecord.ChangeState(System.Int32,system.billing.util.Purchase)
void PurchaseRecord::ChangeState(pls::cs::Int32 state,pls::cs::Ref<util::Purchase> purchase) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.ChangeState(System.Int32,system.billing.util.Purchase)",game);
{
if (state_ == state) {
return;
}
pls::cs::Int64 num = kairo::unity::util::ClockTime::GetTime();
if (state == 0 && !is_null(purchase)) {
num = require(purchase)->GetPurchaseTime();
}
pls::cs::Int32 num2 = pls::cs::to_int32((num / pls::cs::Int64(1000)));
state_ = state;
if (num2 != timestamp_[state]) {
send_ = true;
timestamp_[state] = num2;
}
}
}

// M:system.billing.ui.PurchaseRecord.Serialize(java.io.OutputStream)
void PurchaseRecord::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteStringString(os, productId_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteStringString(os, orderId_);});
for (pls::cs::Int32 i = 0; i < timestamp_.length(); ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, timestamp_[i]);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteByteByte(os, pls::cs::cast_integral<std::uint8_t>(state_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteBoolean(os, send_);});
}
}

// M:system.billing.ui.PurchaseRecord.Deserialize(java.io.InputStream)
void PurchaseRecord::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.Deserialize(java.io.InputStream)",game);
{
productId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadString(stream);});
orderId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadString(stream);});
for (pls::cs::Int32 i = 0; i < timestamp_.length(); ++i) {
{ auto cs_target = timestamp_; auto cs_index = i; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
}
state_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadByte(stream);}));
send_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBoolean(stream);});
}
}

// M:system.billing.ui.PurchaseRecord.GetHashCode
std::int32_t PurchaseRecord::GetHashCode() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseRecord.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
} // namespace system::billing::ui
}
