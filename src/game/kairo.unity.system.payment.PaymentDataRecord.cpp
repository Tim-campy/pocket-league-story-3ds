// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/kairo.unity.util.ISerializable.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.system.payment.PaymentDataRecord.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::system::payment {

void PaymentDataRecord::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(productId_,visitor);pls::cs::trace_value(orderId_,visitor);pls::cs::trace_value(purchaseToken_,visitor);}

static PLS_NOINLINE void cs_init_8e2bf0f8fe011785_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.system.payment.PaymentDataRecord",flag,[](){

});}

void PaymentDataRecord::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_8e2bf0f8fe011785_slow(flag);}

void PaymentDataRecord::create_init(pls::cs::Ref<PaymentDataRecord> self,pls::cs::String productId,pls::cs::String orderId,pls::cs::Int32 amount,pls::cs::Int32 actCode) {
PaymentDataRecord::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.#ctor(System.String,System.String,System.Int32,System.Int32)",kairo);
{
self->productId_ = productId;
self->orderId_ = orderId;
self->amount_ = amount;
self->actCode_ = actCode;
self->send_ = false;
self->purchaseToken_ = literal(u" ");
self->timestamp_ = -1ll;
}

}

// M:kairo.unity.system.payment.PaymentDataRecord.#ctor(System.String,System.String,System.Int32,System.Int32)
pls::cs::Ref<PaymentDataRecord> PaymentDataRecord::create(pls::cs::String productId,pls::cs::String orderId,pls::cs::Int32 amount,pls::cs::Int32 actCode) {
PaymentDataRecord::ensure_initialized();
 auto self = pls::cs::make_ref<PaymentDataRecord>(); PaymentDataRecord::create_init(self,productId,orderId,amount,actCode); return self; 
}

// M:kairo.unity.system.payment.PaymentDataRecord.ToString
pls::cs::String PaymentDataRecord::ToString() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.ToString",kairo);
{
{auto cs_left_316 = pls::cs::String::concat(([&]() { auto cs_left_316 = pls::cs::String::concat(GetProductId(), literal(u"[")); auto cs_right_316 = integer_string(timestamp_); return pls::cs::String::concat(cs_left_316,cs_right_316); }()), literal(u"]\n")); auto cs_right_316 = GetOrderId();
return pls::cs::String::concat(cs_left_316,cs_right_316);}
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.GetProductId
pls::cs::String PaymentDataRecord::GetProductId() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.GetProductId",kairo);
{
return productId_;
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.GetOrderId
pls::cs::String PaymentDataRecord::GetOrderId() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.GetOrderId",kairo);
{
return orderId_;
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.SetTimeStamp(System.Int64)
void PaymentDataRecord::SetTimeStamp(pls::cs::Int64 time) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.SetTimeStamp(System.Int64)",kairo);
{
timestamp_ = time;
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.Serialize(java.io.OutputStream)
void PaymentDataRecord::Serialize(pls::cs::Ref<kl_io::OutputStream> stream) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.Serialize(java.io.OutputStream)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteStringString(stream, productId_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteStringString(stream, orderId_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteStringString(stream, purchaseToken_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteLong(stream, timestamp_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteBoolean(stream, send_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(stream, amount_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(stream, actCode_);});
}
}

// M:kairo.unity.system.payment.PaymentDataRecord.Deserialize(java.io.InputStream)
void PaymentDataRecord::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.payment.PaymentDataRecord.Deserialize(java.io.InputStream)",kairo);
{
productId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadString(stream);});
orderId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadString(stream);});
purchaseToken_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadString(stream);});
timestamp_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadLong(stream);});
send_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadBoolean(stream);});
amount_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);});
actCode_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);});
}
}
} // namespace kairo::unity::system::payment
}
