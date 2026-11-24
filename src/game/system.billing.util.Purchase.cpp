// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "system.billing.util.Purchase.hpp"

namespace pls::game {
namespace system::billing::util {

void Purchase::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(mItemType, visitor);
    pls::cs::trace_value(mOrderId, visitor);
    pls::cs::trace_value(mPackageName, visitor);
    pls::cs::trace_value(mSku, visitor);
    pls::cs::trace_value(mDeveloperPayload, visitor);
    pls::cs::trace_value(mToken, visitor);
    pls::cs::trace_value(mOriginalJson, visitor);
    pls::cs::trace_value(mSignature, visitor);
}

static PLS_NOINLINE void cs_init_a42daea58251b089_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("system.billing.util.Purchase", flag, []() {

    });
}

void Purchase::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_a42daea58251b089_slow(flag);
}

void Purchase::create_init(pls::cs::Ref<Purchase> self) {
    Purchase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.#ctor", game);
    {
    }
}

void Purchase::create_init(pls::cs::Ref<Purchase> self, pls::cs::String itemType,
                           pls::cs::String jsonPurchaseInfo, pls::cs::String signature) {
    Purchase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.util.Purchase.#ctor(System.String,System.String,System.String)", game);
    {
        self->mItemType = itemType;
        self->mOriginalJson = jsonPurchaseInfo;
        self->mOrderId = Purchase::ReadJSon(self->mOriginalJson, literal(u"orderId"));
        self->mPackageName = Purchase::ReadJSon(self->mOriginalJson, literal(u"packageName"));
        self->mSku = Purchase::ReadJSon(self->mOriginalJson, literal(u"productId"));
        self->mPurchaseTime = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::cs::int64_parse(Purchase::ReadJSon(self->mOriginalJson, literal(u"purchaseTime")));
        });
        self->mPurchaseState = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::cs::int32_parse(Purchase::ReadJSon(self->mOriginalJson, literal(u"purchaseState")));
        });
        self->mDeveloperPayload = Purchase::ReadJSon(self->mOriginalJson, literal(u"developerPayload"));
        self->mToken = Purchase::ReadJSon(self->mOriginalJson, literal(u"token"));
        if (is_null(self->mToken)) {
            self->mToken = Purchase::ReadJSon(self->mOriginalJson, literal(u"purchaseToken"));
        }
        if (itemType == literal(u"subs") && (is_null(self->mOrderId) || (self->mOrderId.length() == 0)) &&
            !is_null(self->mToken)) {
            self->mOrderId = self->mToken;
            pls::cs::Int32 num = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return index_char1(self->mOrderId, u'.'); });
            if (num != -1) {
                self->mOrderId = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return substring2(self->mOrderId, 0, num); });
            }
        }
        self->mSignature = signature;
    }
}

// M:system.billing.util.Purchase.#ctor
pls::cs::Ref<Purchase> Purchase::create() {
    Purchase::ensure_initialized();
    auto self = pls::cs::make_ref<Purchase>();
    Purchase::create_init(self);
    return self;
}

// M:system.billing.util.Purchase.#ctor(System.String,System.String,System.String)
pls::cs::Ref<Purchase> Purchase::create(pls::cs::String itemType, pls::cs::String jsonPurchaseInfo,
                                        pls::cs::String signature) {
    Purchase::ensure_initialized();
    auto self = pls::cs::make_ref<Purchase>();
    Purchase::create_init(self, itemType, jsonPurchaseInfo, signature);
    return self;
}

// M:system.billing.util.Purchase.GetItemType
pls::cs::String Purchase::GetItemType() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetItemType", game);
    {
        return mItemType;
    }
}

// M:system.billing.util.Purchase.GetOrderId
pls::cs::String Purchase::GetOrderId() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetOrderId", game);
    {
        return mOrderId;
    }
}

// M:system.billing.util.Purchase.GetPackageName
pls::cs::String Purchase::GetPackageName() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetPackageName", game);
    {
        return mPackageName;
    }
}

// M:system.billing.util.Purchase.GetSku
pls::cs::String Purchase::GetSku() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetSku", game);
    {
        return mSku;
    }
}

// M:system.billing.util.Purchase.GetPurchaseTime
pls::cs::Int64 Purchase::GetPurchaseTime() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetPurchaseTime", game);
    {
        return mPurchaseTime;
    }
}

// M:system.billing.util.Purchase.GetPurchaseState
pls::cs::Int32 Purchase::GetPurchaseState() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetPurchaseState", game);
    {
        return mPurchaseState;
    }
}

// M:system.billing.util.Purchase.GetDeveloperPayload
pls::cs::String Purchase::GetDeveloperPayload() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetDeveloperPayload", game);
    {
        return mDeveloperPayload;
    }
}

// M:system.billing.util.Purchase.GetToken
pls::cs::String Purchase::GetToken() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetToken", game);
    {
        return mToken;
    }
}

// M:system.billing.util.Purchase.GetOriginalJson
pls::cs::String Purchase::GetOriginalJson() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetOriginalJson", game);
    {
        return mOriginalJson;
    }
}

// M:system.billing.util.Purchase.GetSignature
pls::cs::String Purchase::GetSignature() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetSignature", game);
    {
        return mSignature;
    }
}

// M:system.billing.util.Purchase.ReadJSon(System.String,System.String)
pls::cs::String Purchase::ReadJSon(pls::cs::String json, pls::cs::String key) {
    Purchase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.util.Purchase.ReadJSon(System.String,System.String)", game);
    {
        if (is_null(key) || is_null(json)) {
            return pls::cs::String{};
        }
        pls::cs::Ref<pls::cs::RegexMatch> match = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::cs::RuntimeRegex::Match(json, pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return pls::cs::string_replace(
                                                        literal(u"\"<key>\"\\s*:\\s*(\"[^\"]*\"|[0-9.]*)"),
                                                        literal(u"<key>"), key);
                                                }));
        });
        if (require(match)->get_Success()) {
            return pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() {
                    auto cs_text = require(([&]() {
                                       auto cs_receiver = require(match)->get_Groups();
                                       auto cs_index = 1;
                                       return require(cs_receiver)->get_Item(cs_index);
                                   }()))
                                       ->get_Value();
                    auto cs_separators = pls::cs::Array<char16_t>::make(1);
                    cs_separators.at(0) = u'"';
                    return pls::cs::string_trim(cs_text, cs_separators);
                }());
            });
        }
        return pls::cs::String{};
    }
}

// M:system.billing.util.Purchase.ToString
pls::cs::String Purchase::ToString() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.ToString", game);
    {
        return pls::cs::String::concat(
            pls::cs::String::concat(pls::cs::String::concat(literal(u"PurchaseInfo(type:"), mItemType),
                                    literal(u"):")),
            mOriginalJson);
    }
}

// M:system.billing.util.Purchase.GetHashCode
std::int32_t Purchase::GetHashCode() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.util.Purchase.GetHashCode", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
                return require(cs_receiver)->pls::cs::Object::GetHashCode();
            }());
        });
    }
}
} // namespace system::billing::util
}
