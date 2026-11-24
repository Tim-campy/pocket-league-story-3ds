// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::ui {

struct PurchaseRecord : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"ToString", "M:system.billing.ui.PurchaseRecord.ToString"},
                       {"GetHashCode", "M:system.billing.ui.PurchaseRecord.GetHashCode"});
    PLS_MANAGED_CLASS("system.billing.ui.PurchaseRecord", PurchaseRecord, pls::cs::Object)
    pls::cs::String productId_{};
    pls::cs::String orderId_{};
    pls::cs::Array<pls::cs::Int32> timestamp_{};
    pls::cs::Int32 state_{};
    bool send_{};
    pls::cs::String ToString() override;
    std::int32_t GetHashCode() override;
    static constexpr pls::cs::Int32 NONE = -1;
    static constexpr pls::cs::Int32 PURCHASE = 0;
    static constexpr pls::cs::Int32 CONSUME = 1;
    static constexpr pls::cs::Int32 PROVISION = 2;
    static void ensure_initialized();

    static void create_init(pls::cs::Ref<PurchaseRecord> self);

    static void create_init(pls::cs::Ref<PurchaseRecord> self, pls::cs::String productId,
                            pls::cs::String orderId);

    static pls::cs::Ref<PurchaseRecord> create();

    static pls::cs::Ref<PurchaseRecord> create(pls::cs::String productId, pls::cs::String orderId);

    pls::cs::String GetProductId();

    pls::cs::String GetOrderId();

    pls::cs::String GetTimeStamp(pls::cs::Int32 state);

    pls::cs::String GetTimeStampNengappi(pls::cs::Int32 state);

    pls::cs::Int32 GetState();

    void ChangeState(pls::cs::Int32 state, pls::cs::Ref<util::Purchase> purchase);

    void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

    void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);
};
} // namespace system::billing::ui
}
