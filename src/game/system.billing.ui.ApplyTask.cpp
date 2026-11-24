// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "system.billing.ui.ApplyTask.hpp"
#include "system.billing.ui.BillingItem.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace system::billing::ui {

void ApplyTask::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(item_, visitor);
    pls::cs::trace_value(gift_, visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(productId_, visitor);
    pls::cs::trace_value(provisionType_, visitor);
    pls::cs::trace_value(provisionValueS_, visitor);
    pls::cs::trace_value(provisionValueI_, visitor);
    pls::cs::trace_value(talkText_, visitor);
}

static PLS_NOINLINE void cs_init_feb7ae74aa59a27c_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("system.billing.ui.ApplyTask", flag, []() {

    });
}

void ApplyTask::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_feb7ae74aa59a27c_slow(flag);
}

void ApplyTask::create_init(pls::cs::Ref<ApplyTask> self) {
    ApplyTask::ensure_initialized();
    self->provisionValueI_ = kl_util::SecureInt::create();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.ApplyTask.#ctor", game);
    {
    }
}

void ApplyTask::create_init(pls::cs::Ref<ApplyTask> self, pls::cs::Ref<BillingItem> item, pls::cs::Int32 type,
                            bool notice) {
    ApplyTask::ensure_initialized();
    self->provisionValueI_ = kl_util::SecureInt::create();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.ApplyTask.#ctor(system.billing.ui.BillingItem,System.Int32,System.Boolean)",
        game);
    {
        self->Init(item, pls::cs::String(u""), type, notice);
    }
}

void ApplyTask::create_init(pls::cs::Ref<ApplyTask> self, pls::cs::String gift) {
    ApplyTask::ensure_initialized();
    self->provisionValueI_ = kl_util::SecureInt::create();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.ApplyTask.#ctor(System.String)", game);
    {
        self->Init(pls::cs::Ref<BillingItem>{}, gift, 0, true);
    }
}

// M:system.billing.ui.ApplyTask.#ctor
pls::cs::Ref<ApplyTask> ApplyTask::create() {
    ApplyTask::ensure_initialized();
    auto self = pls::cs::make_ref<ApplyTask>();
    ApplyTask::create_init(self);
    return self;
}

// M:system.billing.ui.ApplyTask.#ctor(system.billing.ui.BillingItem,System.Int32,System.Boolean)
pls::cs::Ref<ApplyTask> ApplyTask::create(pls::cs::Ref<BillingItem> item, pls::cs::Int32 type, bool notice) {
    ApplyTask::ensure_initialized();
    auto self = pls::cs::make_ref<ApplyTask>();
    ApplyTask::create_init(self, item, type, notice);
    return self;
}

// M:system.billing.ui.ApplyTask.#ctor(System.String)
pls::cs::Ref<ApplyTask> ApplyTask::create(pls::cs::String gift) {
    ApplyTask::ensure_initialized();
    auto self = pls::cs::make_ref<ApplyTask>();
    ApplyTask::create_init(self, gift);
    return self;
}

// M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean)
void ApplyTask::Init(pls::cs::Ref<BillingItem> item, pls::cs::String gift, pls::cs::Int32 type, bool notice) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.ApplyTask.Init(system.billing.ui.BillingItem,System.String,System.Int32,System.Boolean)",
        game);
    {
        item_ = item;
        gift_ = kl_util::SecureString::create((!is_null(gift)) ? (gift) : (pls::cs::String(u"")));
        type_ = type;
        notice_ = notice;
        lock_ = false;
        name_ = kl_util::SecureString::create(pls::cs::String(u""));
        productId_ = kl_util::SecureString::create(pls::cs::String(u""));
        provisionType_ = kl_util::SecureString::create(pls::cs::String(u""));
        provisionValueS_ = kl_util::SecureString::create(pls::cs::String(u""));
        provisionValueI_ = kl_util::SecureInt::create(0);
        if (!is_null(item_)) {
            name_ = kl_util::SecureString::create(require(item_)->GetName());
            productId_ = kl_util::SecureString::create(require(item_)->GetProductId());
            provisionType_ = kl_util::SecureString::create(require(item_)->GetProvisionType());
            provisionValueS_ = kl_util::SecureString::create(require(item_)->GetProvisionValueText());
            provisionValueI_ = kl_util::SecureInt::create(require(item_)->GetProvisionValue());
        } else {
            if (PLS_API(require(gift_)->Length()) > 0) {
                if (PLS_API(require(gift_)->IndexOf(9)) != -1) {
                    StringArray array = PLS_API(
                        kl_util::StringUtil::Split(PLS_API(require(gift_)->ToString()), literal(u"\t")));
                    talkCharaId_ = PLS_API(kl_lang::JInteger::ParseInt(array[0]));
                    talkText_ = kl_util::SecureString::create(array[1]);
                } else {
                    if (PLS_API(require(gift_)->StartsWith(literal(u"@")))) {

                    } else {
                        StringArray array2 = PLS_API(
                            kl_util::StringUtil::Split(PLS_API(require(gift_)->ToString()), literal(u",")));
                        productId_ = kl_util::SecureString::create(array2[0]);
                        if (1 < array2.length()) {
                            name_ = kl_util::SecureString::create(array2[1]);
                        }
                        array2 = PLS_API(
                            kl_util::StringUtil::Split(PLS_API(require(productId_)->Get()), literal(u"_")));
                        if (0 < array2.length()) {
                            provisionType_ = kl_util::SecureString::create(array2[0]);
                        }
                        if (1 < array2.length()) {
                            provisionValueS_ = kl_util::SecureString::create(array2[1]);
                        }
                        try {
                            if (PLS_API(require(provisionValueS_)->Equals_2(literal(u"on")))) {
                                provisionValueI_ = kl_util::SecureInt::create(1);
                            } else if (PLS_API(require(provisionValueS_)->Equals_2(literal(u"off")))) {
                                provisionValueI_ = kl_util::SecureInt::create(0);
                            } else {
                                provisionValueI_ = kl_util::SecureInt::create(PLS_API(
                                    kl_lang::JInteger::ParseInt(PLS_API(require(provisionValueS_)->Get()))));
                            }
                        } catch (const pls::cs::Exception& cs_caught_197) {
                            pls::cs::capture_exception(cs_caught_197);
                            {
                            }
                        }
                        if (PLS_API(require(name_)->Length()) == 0) {
                            pls::cs::Ref<BillingManager> instance = BillingManager::GetInstance();
                            pls::cs::Array<pls::cs::Ref<BillingItem>> items = require(instance)->GetItems();
                            pls::cs::Ref<BillingItem> billingItem = pls::cs::Ref<BillingItem>{};
                            pls::cs::Ref<BillingItem> billingItem2 = pls::cs::Ref<BillingItem>{};
                            pls::cs::Ref<BillingItem> billingItem3 = pls::cs::Ref<BillingItem>{};
                            for (pls::cs::Int32 i = 0; i < items.length(); ++i) {
                                if (is_null(items.get_Item(i))) {
                                    continue;
                                }
                                if (!(PLS_API(([&]() -> bool {
                                        auto cs_arg0 = require(items.get_Item(i))->GetProvisionType();
                                        auto cs_arg1 =
                                            PLS_API(kl_util::SecureString::ToStringSecureStringStatic(
                                                provisionType_));
                                        return string_equals(cs_arg0, cs_arg1);
                                    }())))) {
                                    continue;
                                }
                                if (PLS_API(([&]() -> bool {
                                        auto cs_arg0 = require(items.get_Item(i))->GetProvisionValueText();
                                        auto cs_arg1 =
                                            PLS_API(kl_util::SecureString::ToStringSecureStringStatic(
                                                provisionValueS_));
                                        return string_equals(cs_arg0, cs_arg1);
                                    }()))) {
                                    billingItem = items.get_Item(i);
                                } else if (require(items.get_Item(i))->GetProvisionValue() > 1 &&
                                           PLS_API(require(provisionValueI_)->Get()) > 1) {
                                    billingItem2 = items.get_Item(i);
                                } else {
                                    billingItem3 = items.get_Item(i);
                                }
                            }
                            if (!is_null(billingItem)) {
                                name_ = kl_util::SecureString::create(require(billingItem)->GetName());
                            } else if (!is_null(billingItem2)) {
                                name_ = kl_util::SecureString::create(require(billingItem2)->GetName());
                            } else if (!is_null(billingItem3)) {
                                name_ = kl_util::SecureString::create(require(billingItem3)->GetName());
                            }
                        }
                    }
                }
            }
        }
    }
}

// M:system.billing.ui.ApplyTask.Serialize(java.io.OutputStream)
void ApplyTask::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.ApplyTask.Serialize(java.io.OutputStream)",
                     game);
    {
        PLS_API(kl_util::StreamUtil::WriteInt(os, (!is_null(item_)) ? (require(item_)->id_)
                                                                    : pls::cs::Int32(-1)));
        PLS_API(kl_util::StreamUtil::WriteStringString(
            os, (!is_null(gift_)) ? (PLS_API(require(gift_)->Get())) : (pls::cs::String(u""))));
        PLS_API(kl_util::StreamUtil::WriteByteByte(os, pls::cs::cast_integral<std::uint8_t>(type_)));
        PLS_API(kl_util::StreamUtil::WriteBoolean(os, notice_));
    }
}

// M:system.billing.ui.ApplyTask.Deserialize(java.io.InputStream)
void ApplyTask::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.ApplyTask.Deserialize(java.io.InputStream)",
                     game);
    {
        pls::cs::Ref<BillingManager> instance = BillingManager::GetInstance();
        pls::cs::Array<pls::cs::Ref<BillingItem>> items = require(instance)->GetItems();
        item_ = pls::cs::Ref<BillingItem>{};
        pls::cs::Int32 num = PLS_API(kl_util::StreamUtil::ReadInt(stream));
        if (0 <= num && num < items.length()) {
            item_ = items.get_Item(num);
        }
        gift_ = kl_util::SecureString::create(PLS_API(kl_util::StreamUtil::ReadString(stream)));
        type_ = pls::cs::cast_integral<pls::cs::Int32>(PLS_API(kl_util::StreamUtil::ReadByte(stream)));
        notice_ = PLS_API(kl_util::StreamUtil::ReadBoolean(stream));
        {
            pls::cs::Ref<BillingItem> cs_arg0 = item_;
            pls::cs::String cs_arg1 = PLS_API(kl_util::SecureString::ToStringSecureStringStatic(gift_));
            pls::cs::Int32 cs_arg2 = type_;
            bool cs_arg3 = notice_;
            Init(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
        }
    }
}

// M:system.billing.ui.ApplyTask.Enable
bool ApplyTask::Enable() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.ApplyTask.Enable", game);
    {
        return IsItem() || IsGift();
    }
}

// M:system.billing.ui.ApplyTask.IsItem
bool ApplyTask::IsItem() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.ApplyTask.IsItem", game);
    {
        return !is_null(item_);
    }
}

// M:system.billing.ui.ApplyTask.IsGift
bool ApplyTask::IsGift() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.ApplyTask.IsGift", game);
    {
        return (!is_null(gift_) && PLS_API(require(gift_)->Length()) > 0);
    }
}

// M:system.billing.ui.ApplyTask.IsGiftScript
bool ApplyTask::IsGiftScript() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.ApplyTask.IsGiftScript", game);
    {
        return (!is_null(gift_) && PLS_API(require(gift_)->Length()) > 0) &&
               PLS_API(require(gift_)->StartsWith(literal(u"@")));
    }
}

// M:system.billing.ui.ApplyTask.IsGameApply
bool ApplyTask::IsGameApply() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.ApplyTask.IsGameApply", game);
    {
        return IsGift() || (IsItem() && require(item_)->Check(2));
    }
}

// M:system.billing.ui.ApplyTask.Equals(system.billing.ui.ApplyTask)
bool ApplyTask::Equals(pls::cs::Ref<ApplyTask> obj) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.ApplyTask.Equals(system.billing.ui.ApplyTask)",
                     game);
    {
        if (IsItem() && require(obj)->IsItem()) {
            return pls::cs::box(item_) == pls::cs::box(require(obj)->item_) && type_ == require(obj)->type_;
        }
        if (IsGift() && require(obj)->IsGift()) {
            return PLS_API(require(gift_)->EqualsSecureString(require(obj)->gift_));
        }
        if (!IsGift() && !IsItem() && !require(obj)->IsGift() && !require(obj)->IsItem()) {
            return true;
        }
        return false;
    }
}
} // namespace system::billing::ui
}
