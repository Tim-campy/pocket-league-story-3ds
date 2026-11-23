// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "generated/kairo.unity.util.ISerializable.hpp"
namespace pls::game {
namespace kairo::unity::system::payment {

struct PaymentDataRecord : pls::cs::Object, generated::kairo::unity::util::ISerializable {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"ToString", "M:kairo.unity.system.payment.PaymentDataRecord.ToString"},
    {"M:kairo.unity.util.ISerializable.Serialize(java.io.OutputStream)", "M:kairo.unity.system.payment.PaymentDataRecord.Serialize(java.io.OutputStream)"},
    {"M:kairo.unity.util.ISerializable.Deserialize(java.io.InputStream)", "M:kairo.unity.system.payment.PaymentDataRecord.Deserialize(java.io.InputStream)"});
PLS_MANAGED_CLASS("kairo.unity.system.payment.PaymentDataRecord", PaymentDataRecord, pls::cs::Object, generated::kairo::unity::util::ISerializable)
pls::cs::String productId_{};
pls::cs::String orderId_{};
pls::cs::String purchaseToken_{};
pls::cs::Int64 timestamp_{};
bool send_{};
pls::cs::Int32 amount_{};
pls::cs::Int32 actCode_{};
pls::cs::String ToString() override;
void Serialize(pls::cs::Ref<generated::java::io::OutputStream> stream) override;
void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream) override;
static constexpr pls::cs::Int32 ACT_NONE = 0;static constexpr pls::cs::Int32 ACT_NORMAL_BUY = 1;static constexpr pls::cs::Int32 ACT_NORMAL_USE = 2;
static void ensure_initialized();

static void create_init(pls::cs::Ref<PaymentDataRecord> self,pls::cs::String productId,pls::cs::String orderId,pls::cs::Int32 amount,pls::cs::Int32 actCode);

static pls::cs::Ref<PaymentDataRecord> create(pls::cs::String productId,pls::cs::String orderId,pls::cs::Int32 amount,pls::cs::Int32 actCode);

pls::cs::String GetProductId();

pls::cs::String GetOrderId();

void SetTimeStamp(pls::cs::Int64 time);
};
} // namespace kairo::unity::system::payment
}
