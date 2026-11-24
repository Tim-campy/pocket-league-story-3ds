// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::ui {

struct Receipt : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"Equals", "M:system.billing.ui.Receipt.Equals(System.Object)"},
                       {"GetHashCode", "M:system.billing.ui.Receipt.GetHashCode"});
    PLS_MANAGED_CLASS("system.billing.ui.Receipt", Receipt, pls::cs::Object)
    pls::cs::Ref<generated::kairo::unity::util::SecureString> productID_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureString> receipt_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureInt> state_{};
    pls::cs::Int32 productType_{};
    bool paymentComplete_{};
    pls::cs::Ref<generated::kairo::unity::util::SecureLong> purchaseTime_{};
    pls::cs::Int32 IsTicketProductTmp_{};
    bool Equals(pls::cs::Ref<pls::cs::Object> const& o) override;
    std::int32_t GetHashCode() override;

    static bool Equals(pls::cs::Ref<Receipt> self, pls::cs::Ref<pls::cs::Object> o);

    static void ensure_initialized();

    static pls::cs::Array<std::uint8_t>& PASSKEY();

    static void create_init(pls::cs::Ref<Receipt> self);

    static void create_init(pls::cs::Ref<Receipt> self, pls::cs::Ref<UnityEngine::Purchasing::Product> p,
                            pls::cs::String receipt);

    static pls::cs::Ref<Receipt> create();

    static pls::cs::Ref<Receipt> create(pls::cs::Ref<UnityEngine::Purchasing::Product> p,
                                        pls::cs::String receipt);

    void Copy(pls::cs::Ref<Receipt> r);

    pls::cs::Ref<util::Purchase> GetPurchase();

    void Consume();

    bool IsConsume();

    pls::cs::String GetJson();

    pls::cs::String GetJsonParam(pls::cs::String tag);

    pls::cs::String GetReceipt();

    pls::cs::String GetProductID();

    pls::cs::Int32 GetProductType();

    pls::cs::String GetOrderId();

    bool IsTicketProduct();

    void DebugVerificationReceipt();

    static void DebugVerificationReceipt(pls::cs::String token);

    void Save(pls::cs::Ref<generated::java::io::OutputStream> stream);

    static pls::cs::Ref<Receipt> Load(pls::cs::Ref<generated::java::io::InputStream> stream);

    static pls::cs::String GetItemType(pls::cs::Ref<UnityEngine::Purchasing::Product> p);

    static pls::cs::String GetItemTypeProductType(pls::cs::Int32 type);

    static pls::cs::String PasswordEncode(pls::cs::Array<std::uint8_t> src);

    static pls::cs::String PasswordEncodeString(pls::cs::String src);

    static pls::cs::Array<std::uint8_t> PasswordDecodeToBytes(pls::cs::String src);

    static pls::cs::String PasswordDecodeToString(pls::cs::String src);
};
} // namespace system::billing::ui
}
