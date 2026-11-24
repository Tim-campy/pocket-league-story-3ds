// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "system.billing.ui.BillingItem.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.billing.util.Purchase.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace system::billing::ui {

void BillingItem::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(productId_, visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(price_, visitor);
    pls::cs::trace_value(explain_, visitor);
    pls::cs::trace_value(flag_, visitor);
    pls::cs::trace_value(state_, visitor);
    pls::cs::trace_value(purchase_, visitor);
    pls::cs::trace_value(provisionType_, visitor);
    pls::cs::trace_value(provisionValueS_, visitor);
    pls::cs::trace_value(provisionValueI_, visitor);
    pls::cs::trace_value(seriesName_, visitor);
    pls::cs::trace_value(seriesNumber_, visitor);
}

static PLS_NOINLINE void cs_init_931908081ea62151_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("system.billing.ui.BillingItem", flag, []() {

    });
}

void BillingItem::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_931908081ea62151_slow(flag);
}

void BillingItem::create_init(pls::cs::Ref<BillingItem> self) {
    BillingItem::ensure_initialized();
    self->flag_ = kl_util::SecureInt::create();
    self->state_ = kl_util::SecureInt::create();
    self->provisionValueI_ = kl_util::SecureInt::create();
    self->seriesNumber_ = kl_util::SecureInt::create();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.#ctor", game);
    {
    }
}

// new T() with T = system.billing.ui.BillingItem
pls::cs::Ref<BillingItem> new_instance(pls::cs::Ref<BillingItem>*) {
    return BillingItem::create();
}

// M:system.billing.ui.BillingItem.#ctor
pls::cs::Ref<BillingItem> BillingItem::create() {
    BillingItem::ensure_initialized();
    auto self = pls::cs::make_ref<BillingItem>();
    BillingItem::create_init(self);
    return self;
}

// M:system.billing.ui.BillingItem.Init(System.Int32,System.Int32,System.String,System.String,System.String,System.Int32,System.String)
void BillingItem::Init(pls::cs::Int32 id, pls::cs::Int32 flag, pls::cs::String productId,
                       pls::cs::String name, pls::cs::String price, pls::cs::Int32 type,
                       pls::cs::String explain) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.BillingItem.Init(System.Int32,System.Int32,System.String,System.String,System.String,System.Int32,System.String)",
        game);
    {
        id_ = id;
        flag_ = kl_util::SecureInt::create(flag);
        productId_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::SecureString::ValueOf(productId); });
        name_ = name;
        type_ = type;
        price_ = ((is_null(price)) ? (pls::cs::String(u"")) : (price));
        explain_ = ((is_null(explain)) ? (pls::cs::String(u"")) : (explain));
        state_ = kl_util::SecureInt::create(0);
        provision_ = false;
        consuming_ = false;
        seriesName_ = pls::cs::Ref<kl_util::SecureString>{};
        seriesNumber_ = kl_util::SecureInt::create(-1);
        productId_ = ([&]() {
            auto cs_value = BillingItem::GetPlatformProductID(([&]() {
                auto cs_value = productId_;
                return kl_util::SecureString::op_Implicit(cs_value);
            }()));
            return kl_util::SecureString::op_ImplicitString(cs_value);
        }());
        if (!is_null(productId)) {
            StringArray array = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_util::StringUtil::Split(productId, literal(u"_")); });
            pls::cs::Int32 num = array.length();
            for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::cs::culture_starts_with(array[i], literal(u"base"));
                    }) ||
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::cs::culture_starts_with(array[i], literal(u"case"));
                    })) {
                    testProduct_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return pls::cs::culture_starts_with(array[i], literal(u"base"));
                    });
                    num = i;
                    break;
                }
            }
            if (0 < array.length()) {
                provisionType_ = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_util::SecureString::ValueOf(array[0]); });
            }
            if (num >= 2) {
                provisionValueS_ = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_util::SecureString::ValueOf(array[1]); });
            }
            if (!is_null(provisionValueS_)) {
                provisionValueI_ = kl_util::SecureInt::create(0);
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(provisionValueS_)->Equals_2(literal(u"on"));
                    })) {
                    provisionValueI_ = kl_util::SecureInt::create(1);
                } else if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                               return require(provisionValueS_)->Equals_2(literal(u"off"));
                           })) {
                    provisionValueI_ = kl_util::SecureInt::create(0);
                } else {
                    try {
                        provisionValueI_ =
                            kl_util::SecureInt::create(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_lang::JInteger::ParseInt(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_util::SecureString::ToStringSecureStringStatic(
                                            provisionValueS_);
                                    }));
                            }));
                    } catch (const pls::cs::Exception& cs_caught_196) {
                        pls::cs::capture_exception(cs_caught_196);
                        {
                        }
                    }
                }
            }
            if (3 < array.length()) {
                seriesName_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_util::SecureString::ValueOf(([&]() {
                        auto cs_left =
                            pls::cs::String::concat(([&]() {
                                                        auto cs_left =
                                                            pls::cs::String::concat(array[0], literal(u"_"));
                                                        auto cs_right = array[1];
                                                        return pls::cs::String::concat(cs_left, cs_right);
                                                    }()),
                                                    literal(u"_"));
                        auto cs_right = array[2];
                        return pls::cs::String::concat(cs_left, cs_right);
                    }()));
                });
                seriesNumber_ = kl_util::SecureInt::create(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array[3]); }));
            }
        }
    }
}

// M:system.billing.ui.BillingItem.GetId
pls::cs::Int32 BillingItem::GetId() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetId", game);
    {
        return id_;
    }
}

// M:system.billing.ui.BillingItem.GetProductId
pls::cs::String BillingItem::GetProductId() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetProductId", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::SecureString::ToStringSecureStringStatic(productId_);
        });
    }
}

// M:system.billing.ui.BillingItem.GetName
pls::cs::String BillingItem::GetName() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetName", game);
    {
        return name_;
    }
}

// M:system.billing.ui.BillingItem.GetItemType
pls::cs::Int32 BillingItem::GetItemType() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetItemType", game);
    {
        return type_;
    }
}

// M:system.billing.ui.BillingItem.GetPrice
pls::cs::String BillingItem::GetPrice() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetPrice", game);
    {
        return price_;
    }
}

// M:system.billing.ui.BillingItem.GetExplain
pls::cs::String BillingItem::GetExplain() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetExplain", game);
    {
        return explain_;
    }
}

// M:system.billing.ui.BillingItem.GetState
pls::cs::Int32 BillingItem::GetState() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetState", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return require(state_)->Get(); });
    }
}

// M:system.billing.ui.BillingItem.ChangeState(System.Int32)
void BillingItem::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.ChangeState(System.Int32)", game);
    {
        state_ = kl_util::SecureInt::create(state);
    }
}

// M:system.billing.ui.BillingItem.GetProvisionType
pls::cs::String BillingItem::GetProvisionType() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetProvisionType", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::SecureString::ToStringSecureStringStatic(provisionType_);
        });
    }
}

// M:system.billing.ui.BillingItem.GetProvisionValue
pls::cs::Int32 BillingItem::GetProvisionValue() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetProvisionValue", game);
    {
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(provisionValueI_)->Get(); });
    }
}

// M:system.billing.ui.BillingItem.GetProvisionValueText
pls::cs::String BillingItem::GetProvisionValueText() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetProvisionValueText", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::SecureString::ToStringSecureStringStatic(provisionValueS_);
        });
    }
}

// M:system.billing.ui.BillingItem.GetSeriesName
pls::cs::String BillingItem::GetSeriesName() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetSeriesName", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::SecureString::ToStringSecureStringStatic(seriesName_);
        });
    }
}

// M:system.billing.ui.BillingItem.GetSeriesNumber
pls::cs::Int32 BillingItem::GetSeriesNumber() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetSeriesNumber", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return require(seriesNumber_)->Get(); });
    }
}

// M:system.billing.ui.BillingItem.CheckTestProduct
bool BillingItem::CheckTestProduct() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.CheckTestProduct", game);
    {
        return testProduct_;
    }
}

// M:system.billing.ui.BillingItem.CheckProvision
bool BillingItem::CheckProvision() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.CheckProvision", game);
    {
        pls::cs::Ref<BillingManager> instance = BillingManager::GetInstance();
        if (Check(2) && !require(instance)->CheckPlayingGame()) {
            return false;
        }
        return provision_;
    }
}

// M:system.billing.ui.BillingItem.SetProvision(System.Boolean)
void BillingItem::SetProvision(bool provision) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.SetProvision(System.Boolean)", game);
    {
        provision_ = provision;
    }
}

// M:system.billing.ui.BillingItem.GetPurchase
pls::cs::Ref<util::Purchase> BillingItem::GetPurchase() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetPurchase", game);
    {
        return purchase_;
    }
}

// M:system.billing.ui.BillingItem.SetPurchase(system.billing.util.Purchase)
void BillingItem::SetPurchase(pls::cs::Ref<util::Purchase> purchase) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.BillingItem.SetPurchase(system.billing.util.Purchase)", game);
    {
        purchase_ = purchase;
    }
}

// M:system.billing.ui.BillingItem.Check(System.Int32)
bool BillingItem::Check(pls::cs::Int32 bit) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.Check(System.Int32)", game);
    {
        return (pls::diagnostic::api_call([&]() -> decltype(auto) { return require(flag_)->Get(); }) & bit) !=
               0;
    }
}

// M:system.billing.ui.BillingItem.On(System.Int32)
void BillingItem::On(pls::cs::Int32 bit) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.On(System.Int32)", game);
    {
        flag_ = kl_util::SecureInt::create(
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(flag_)->Get(); }) | bit);
    }
}

// M:system.billing.ui.BillingItem.Off(System.Int32)
void BillingItem::Off(pls::cs::Int32 bit) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.Off(System.Int32)", game);
    {
        flag_ = kl_util::SecureInt::create(
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(flag_)->Get(); }) & ~bit);
    }
}

// M:system.billing.ui.BillingItem.Serialize(java.io.OutputStream)
void BillingItem::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.Serialize(java.io.OutputStream)",
                     game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::StreamUtil::WriteByteByte(
                os, pls::cs::cast_integral<std::uint8_t>(pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(state_)->Get(); })));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::StreamUtil::WriteByteByte(
                os, pls::cs::cast_integral<std::uint8_t>(pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(flag_)->Get(); })));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::WriteBoolean(os, provision_); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::WriteBoolean(os, consuming_); });
    }
}

// M:system.billing.ui.BillingItem.Deserialize(java.io.InputStream)
void BillingItem::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.Deserialize(java.io.InputStream)",
                     game);
    {
        state_ = kl_util::SecureInt::create(pls::cs::Int32(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadByte(stream); })));
        pls::cs::Int32 num = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadByte(stream); }));
        provision_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadBoolean(stream); });
        consuming_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadBoolean(stream); });
        flag_ = kl_util::SecureInt::create(
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_util::BitUtil::Off(
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return require(flag_)->Get(); }), 8);
            }) |
            (num & 8));
    }
}

// M:system.billing.ui.BillingItem.GetPlatformProductID(System.String)
pls::cs::String BillingItem::GetPlatformProductID(pls::cs::String productID) {
    BillingItem::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.BillingItem.GetPlatformProductID(System.String)",
                     game);
    {
        return productID;
    }
}
} // namespace system::billing::ui
}
