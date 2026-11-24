// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "UnityEngine.Purchasing.Product.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Base64.hpp"
#include "generated/kairo.unity.util.CRC64.hpp"
#include "generated/kairo.unity.util.Compressor.hpp"
#include "generated/kairo.unity.util.EncodeUtil.hpp"
#include "generated/kairo.unity.util.Encrypter.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureLong.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "system.KairoService.hpp"
#include "system.billing.ui.Receipt.hpp"
#include "system.billing.ui.StoreBase.hpp"
#include "system.billing.util.Json.hpp"
#include "system.billing.util.Purchase.hpp"
#include "system.billing.ui.StoreBase_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace system::billing::ui {

void Receipt::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(productID_, visitor);
    pls::cs::trace_value(receipt_, visitor);
    pls::cs::trace_value(state_, visitor);
    pls::cs::trace_value(purchaseTime_, visitor);
}

bool Receipt::Equals(pls::cs::Ref<pls::cs::Object> const& o) {
    return Receipt::Equals(pls::cs::static_pointer_cast<Receipt>(shared_from_this()), o);
}

static ByteArray Receipt_PASSKEY_storage{};

static PLS_NOINLINE void cs_init_15f31d4f046b09a8_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots(
        [](const pls::cs::EdgeVisitor& visitor) { pls::cs::trace_value(Receipt_PASSKEY_storage, visitor); });
    static pls::cs::TypeInitState state;
    state.run("system.billing.ui.Receipt", flag, []() {
        Receipt_PASSKEY_storage =
            pls::cs::evaluate_type_initializer_field("F:system.billing.ui.Receipt.PASSKEY", [&]() {
                return ByteArray::from(
                    {pls::cs::cast_integral<std::uint8_t>(8), pls::cs::cast_integral<std::uint8_t>(64),
                     pls::cs::cast_integral<std::uint8_t>(52), pls::cs::cast_integral<std::uint8_t>(1),
                     pls::cs::cast_integral<std::uint8_t>(100), pls::cs::cast_integral<std::uint8_t>(3)});
            });
    });
}

void Receipt::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_15f31d4f046b09a8_slow(flag);
}

ByteArray& Receipt::PASSKEY() {
    Receipt::ensure_initialized();
    return Receipt_PASSKEY_storage;
}

void Receipt::create_init(pls::cs::Ref<Receipt> self) {
    Receipt::ensure_initialized();
    self->IsTicketProductTmp_ = -1;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.#ctor", game);
    {
    }
}

void Receipt::create_init(pls::cs::Ref<Receipt> self, pls::cs::Ref<UnityEngine::Purchasing::Product> p,
                          pls::cs::String receipt) {
    Receipt::ensure_initialized();
    self->IsTicketProductTmp_ = -1;
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.Receipt.#ctor(UnityEngine.Purchasing.Product,System.String)", game);
    {
    }
}

// M:system.billing.ui.Receipt.#ctor
pls::cs::Ref<Receipt> Receipt::create() {
    Receipt::ensure_initialized();
    auto self = pls::cs::make_ref<Receipt>();
    Receipt::create_init(self);
    return self;
}

// M:system.billing.ui.Receipt.#ctor(UnityEngine.Purchasing.Product,System.String)
pls::cs::Ref<Receipt> Receipt::create(pls::cs::Ref<UnityEngine::Purchasing::Product> p,
                                      pls::cs::String receipt) {
    Receipt::ensure_initialized();
    auto self = pls::cs::make_ref<Receipt>();
    Receipt::create_init(self, p, receipt);
    return self;
}

// M:system.billing.ui.Receipt.Equals(System.Object)
bool Receipt::Equals(pls::cs::Ref<Receipt> self, pls::cs::Ref<pls::cs::Object> o) {
    require(self);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.Equals(System.Object)", game);
    {
        if (!(is_instance<pls::cs::Ref<Receipt>>(pls::cs::box(o)))) {
            return false;
        }
        if (pls::cs::box(o) == pls::cs::box(self)) {
            return true;
        }
        pls::cs::Ref<Receipt> receipt = pls::cs::unbox<pls::cs::Ref<Receipt>>(o);
        return pls::cs::box(self->productID_) == pls::cs::box(require(receipt)->productID_) &&
               pls::cs::box(self->receipt_) == pls::cs::box(require(receipt)->receipt_);
    }
}

// M:system.billing.ui.Receipt.GetHashCode
std::int32_t Receipt::GetHashCode() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.GetHashCode", game);
    {
        return PLS_API(([&]() {
            auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
            return require(cs_receiver)->pls::cs::Object::GetHashCode();
        }()));
    }
}

// M:system.billing.ui.Receipt.Copy(system.billing.ui.Receipt)
void Receipt::Copy(pls::cs::Ref<Receipt> r) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.Copy(system.billing.ui.Receipt)", game);
    {
        productID_ = ([&]() {
            auto cs_value = PLS_API(require(require(r)->productID_)->Get());
            return kl_util::SecureString::op_ImplicitString(cs_value);
        }());
        receipt_ = ([&]() {
            auto cs_value = PLS_API(require(require(r)->receipt_)->Get());
            return kl_util::SecureString::op_ImplicitString(cs_value);
        }());
        state_ = ([&]() {
            auto cs_value = PLS_API(require(require(r)->state_)->Get());
            return kl_util::SecureInt::op_ImplicitInt(cs_value);
        }());
        productType_ = require(r)->productType_;
    }
}

// M:system.billing.ui.Receipt.GetPurchase
pls::cs::Ref<util::Purchase> Receipt::GetPurchase() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.GetPurchase", game);
    {
        pls::cs::String json = GetJson();
        {
            pls::cs::String cs_arg0_291 = Receipt::GetItemTypeProductType(productType_);
            pls::cs::String cs_arg1_291 = json;
            pls::cs::String cs_arg2_291 = util::Json::ReadJSon(json, literal(u"signature"));
            return util::Purchase::create(cs_arg0_291, cs_arg1_291, cs_arg2_291);
        }
    }
}

// M:system.billing.ui.Receipt.Consume
void Receipt::Consume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.Consume", game);
    {
        if (productType_ != 0 /* ProductType.Consumable */) {
            return;
        }
        {
            state_ = ([&]() {
                auto cs_value = 1;
                return kl_util::SecureInt::op_ImplicitInt(cs_value);
            }());
        }
    }
}

// M:system.billing.ui.Receipt.IsConsume
bool Receipt::IsConsume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.IsConsume", game);
    {
        if (productType_ != 0 /* ProductType.Consumable */) {
            return false;
        }
        return ([&]() {
                   auto cs_value = state_;
                   return kl_util::SecureInt::op_Implicit(cs_value);
               }()) == 1;
    }
}

// M:system.billing.ui.Receipt.GetJson
pls::cs::String Receipt::GetJson() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.GetJson", game);
    {
        {
            pls::cs::String cs_arg0_290 = GetReceipt();
            pls::cs::String cs_arg1_290 = GetProductID();
            pls::cs::String cs_arg2_290 = ([&]() {
                auto cs_left_290 = pls::cs::String(u"");
                auto cs_right_290 = object_string(pls::cs::box(purchaseTime_));
                return pls::cs::String::concat(cs_left_290, cs_right_290);
            }());
            return util::Json::AdjustJson(cs_arg0_290, cs_arg1_290, cs_arg2_290);
        }
    }
}

// M:system.billing.ui.Receipt.GetJsonParam(System.String)
pls::cs::String Receipt::GetJsonParam(pls::cs::String tag) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.GetJsonParam(System.String)", game);
    {
        return util::Json::ReadJSon(GetJson(), tag);
    }
}

// M:system.billing.ui.Receipt.GetReceipt
pls::cs::String Receipt::GetReceipt() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.GetReceipt", game);
    {
        return Receipt::PasswordDecodeToString(([&]() {
            auto cs_value = receipt_;
            return kl_util::SecureString::op_Implicit(cs_value);
        }()));
    }
}

// M:system.billing.ui.Receipt.GetProductID
pls::cs::String Receipt::GetProductID() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.GetProductID", game);
    {
        return Receipt::PasswordDecodeToString(([&]() {
            auto cs_value = productID_;
            return kl_util::SecureString::op_Implicit(cs_value);
        }()));
    }
}

// M:system.billing.ui.Receipt.GetProductType
pls::cs::Int32 Receipt::GetProductType() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.GetProductType", game);
    {
        return productType_;
    }
}

// M:system.billing.ui.Receipt.GetOrderId
pls::cs::String Receipt::GetOrderId() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.GetOrderId", game);
    {
        return GetJsonParam(literal(u"orderId"));
    }
}

// M:system.billing.ui.Receipt.IsTicketProduct
bool Receipt::IsTicketProduct() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.IsTicketProduct", game);
    {
        StoreBase::ensure_initialized();

        if (IsTicketProductTmp_ == -1) {
            IsTicketProductTmp_ = 0;
            if (PLS_API(([&]() -> bool {
                    auto cs_arg0 = GetProductID();
                    auto cs_arg1 = StoreBase::PAYMENT_PRODUCT();
                    return contains_string(cs_arg0, cs_arg1);
                }()))) {
                IsTicketProductTmp_ = 1;
            }
        }
        return IsTicketProductTmp_ == 1;
    }
}

// M:system.billing.ui.Receipt.DebugVerificationReceipt
void Receipt::DebugVerificationReceipt() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.DebugVerificationReceipt", game);
    {
        Receipt::DebugVerificationReceipt(util::Json::ReadJSon(GetJson(), literal(u"token")));
    }
}

// M:system.billing.ui.Receipt.DebugVerificationReceipt(System.String)
void Receipt::DebugVerificationReceipt(pls::cs::String token) {
    Receipt::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.DebugVerificationReceipt(System.String)",
                     game);
    {
        kl_cfg::Config::ensure_initialized();

        if (!(kl_cfg::Config::DEBUG())) {
            return;
        }
    }
}

// M:system.billing.ui.Receipt.Save(java.io.OutputStream)
void Receipt::Save(pls::cs::Ref<kl_io::OutputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.Save(java.io.OutputStream)", game);
    {
        PLS_API(kl_util::StreamUtil::WriteString(stream, productID_));
        PLS_API(kl_util::StreamUtil::WriteString(stream, receipt_));
        PLS_API(kl_util::StreamUtil::WriteInt(stream, ([&]() {
                                                  auto cs_value = state_;
                                                  return kl_util::SecureInt::op_Implicit(cs_value);
                                              }())));
        PLS_API(kl_util::StreamUtil::WriteInt(stream, pls::cs::cast_integral<pls::cs::Int32>(productType_)));
        PLS_API(kl_util::StreamUtil::WriteBoolean(stream, paymentComplete_));
        PLS_API(kl_util::StreamUtil::WriteLong(stream, ([&]() {
                                                   auto cs_value = purchaseTime_;
                                                   return kl_util::SecureLong::op_Implicit(cs_value);
                                               }())));
    }
}

// M:system.billing.ui.Receipt.Load(java.io.InputStream)
pls::cs::Ref<Receipt> Receipt::Load(pls::cs::Ref<kl_io::InputStream> stream) {
    Receipt::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.Load(java.io.InputStream)", game);
    {
        pls::cs::Ref<Receipt> receipt = Receipt::create();
        {
            auto cs_target = receipt;
            auto cs_value = ([&]() {
                auto cs_value = PLS_API(kl_util::StreamUtil::ReadString(stream));
                return kl_util::SecureString::op_ImplicitString(cs_value);
            }());
            require(cs_target)->productID_ = cs_value;
        }
        {
            auto cs_target = receipt;
            auto cs_value = ([&]() {
                auto cs_value = PLS_API(kl_util::StreamUtil::ReadString(stream));
                return kl_util::SecureString::op_ImplicitString(cs_value);
            }());
            require(cs_target)->receipt_ = cs_value;
        }
        {
            auto cs_target = receipt;
            auto cs_value = ([&]() {
                auto cs_value = PLS_API(kl_util::StreamUtil::ReadInt(stream));
                return kl_util::SecureInt::op_ImplicitInt(cs_value);
            }());
            require(cs_target)->state_ = cs_value;
        }
        {
            auto cs_target = receipt;
            auto cs_value =
                pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_util::StreamUtil::ReadInt(stream)));
            require(cs_target)->productType_ = cs_value;
        }
        {
            auto cs_target = receipt;
            auto cs_value = PLS_API(kl_util::StreamUtil::ReadBoolean(stream));
            require(cs_target)->paymentComplete_ = cs_value;
        }
        {
            auto cs_target = receipt;
            auto cs_value = ([&]() {
                auto cs_value = PLS_API(kl_util::StreamUtil::ReadLong(stream));
                return kl_util::SecureLong::op_ImplicitLong(cs_value);
            }());
            require(cs_target)->purchaseTime_ = cs_value;
        }
        return receipt;
    }
}

// M:system.billing.ui.Receipt.GetItemType(UnityEngine.Purchasing.Product)
pls::cs::String Receipt::GetItemType(pls::cs::Ref<UnityEngine::Purchasing::Product> p) {
    Receipt::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.Receipt.GetItemType(UnityEngine.Purchasing.Product)", game);
    {
        return pls::cs::String{};
    }
}

// M:system.billing.ui.Receipt.GetItemType(UnityEngine.Purchasing.ProductType)
pls::cs::String Receipt::GetItemTypeProductType(pls::cs::Int32 type) {
    Receipt::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.Receipt.GetItemType(UnityEngine.Purchasing.ProductType)", game);
    {
        return ((type == 2 /* ProductType.Subscription */)) ? literal(u"subs") : literal(u"inapp");
    }
}

// M:system.billing.ui.Receipt.PasswordEncode(System.Byte[])
pls::cs::String Receipt::PasswordEncode(ByteArray src) {
    Receipt::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.PasswordEncode(System.Byte[])", game);
    {
        kl_cfg::Config::ensure_initialized();

        bool pRINT = kl_cfg::Config::PRINT();
        pls::cs::Int32 num = src.length();
        {
            auto cs_flow_202 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<pls::cs::String> {
                    {
                        {
                            auto cs_value = false;
                            kl_cfg::Config::PRINT() = cs_value;
                        }
                        ByteArray array = PLS_API(kl_util::Compressor::Compress(src));
                        src = ByteArray::make(pls::cs::Int32(array.length()) + 8);
                        PLS_API(kl_lang::JSystem::Arraycopy(
                            pls::cs::box(PLS_API(kl_util::EncodeUtil::LongToByteAry(
                                PLS_API(kl_util::CRC64::GetValue(array)), false))),
                            0, pls::cs::box(src), 0, 8));
                        PLS_API(kl_lang::JSystem::Arraycopy(pls::cs::box(array), 0, pls::cs::box(src), 8,
                                                            array.length()));
                        PLS_API(kl_util::Encrypter::Encode(src, Receipt::PASSKEY()));
                        return pls::cs::flow_return(PLS_API(kl_util::Base64::Encode(src)));
                    }
                    return {};
                },
                [&]() {
                    {
                        auto cs_value = pRINT;
                        kl_cfg::Config::PRINT() = cs_value;
                    }
                });
            return cs_flow_202.value();
        }
    }
}

// M:system.billing.ui.Receipt.PasswordEncode(System.String)
pls::cs::String Receipt::PasswordEncodeString(pls::cs::String src) {
    Receipt::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.PasswordEncode(System.String)", game);
    {
        return Receipt::PasswordEncode(kl_lang::StringEx::GetBytes(src));
    }
}

// M:system.billing.ui.Receipt.PasswordDecodeToBytes(System.String)
ByteArray Receipt::PasswordDecodeToBytes(pls::cs::String src) {
    Receipt::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.PasswordDecodeToBytes(System.String)",
                     game);
    {
        kl_cfg::Config::ensure_initialized();

        bool pRINT = kl_cfg::Config::PRINT();
        {
            auto cs_flow_201 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<ByteArray> {
                    {
                        {
                            auto cs_value = false;
                            kl_cfg::Config::PRINT() = cs_value;
                        }
                        ByteArray array = PLS_API(kl_util::Base64::Decode(src));
                        PLS_API(kl_util::Encrypter::Decode(array, Receipt::PASSKEY()));
                        pls::cs::Int64 num = PLS_API(kl_util::EncodeUtil::ByteAryToLong(array, false));
                        ByteArray array2 = ByteArray::make(pls::cs::Int32(array.length()) - 8);
                        PLS_API(kl_lang::JSystem::Arraycopy(pls::cs::box(array), 8, pls::cs::box(array2), 0,
                                                            array2.length()));
                        if (PLS_API(kl_util::CRC64::GetValue(array2)) != num) {
                            return pls::cs::flow_return(ByteArray{});
                        }
                        return pls::cs::flow_return(PLS_API(kl_util::Compressor::Expand(array2)));
                    }
                    return {};
                },
                [&]() {
                    {
                        auto cs_value = pRINT;
                        kl_cfg::Config::PRINT() = cs_value;
                    }
                });
            return cs_flow_201.value();
        }
    }
}

// M:system.billing.ui.Receipt.PasswordDecodeToString(System.String)
pls::cs::String Receipt::PasswordDecodeToString(pls::cs::String src) {
    Receipt::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.Receipt.PasswordDecodeToString(System.String)",
                     game);
    {
        return PLS_API(([&]() -> pls::cs::String {
            auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8();
            auto cs_arg0 = Receipt::PasswordDecodeToBytes(src);
            return require(cs_receiver)->GetString(cs_arg0);
        }()));
    }
}
} // namespace system::billing::ui
}
