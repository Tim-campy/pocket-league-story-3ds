// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "UnityEngine.Purchasing.IExtensionProvider.hpp"
#include "UnityEngine.Purchasing.IStoreController.hpp"
#include "UnityEngine.Purchasing.IStoreListener.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "system.KairoService.hpp"
#include "system.billing.ui.BillingItem.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.billing.ui.Receipt.hpp"
#include "system.billing.ui.StoreBase.hpp"
#include "system.billing.util.Inventory.hpp"
#include "system.billing.util.Json.hpp"
#include "system.billing.util.Purchase.hpp"
#include "system.billing.util.SkuDetails.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"
#include "system.billing.ui.StoreBase_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;

namespace pls::game {
namespace system::billing::ui {

void StoreBase::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(storeController_, visitor);
    pls::cs::trace_value(storeExtensionProvider_, visitor);
    pls::cs::trace_value(receipts_, visitor);
}

static pls::cs::Ref<KairoService> StoreBase_ks__storage{};

static pls::cs::String StoreBase_PAYMENT_PRODUCT_storage{};

static PLS_NOINLINE void cs_init_fa01867c9c048464_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(StoreBase_ks__storage, visitor);
        pls::cs::trace_value(StoreBase_PAYMENT_PRODUCT_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("system.billing.ui.StoreBase", flag, []() {
        StoreBase_ks__storage = pls::cs::evaluate_type_initializer_field(
            "F:system.billing.ui.StoreBase.ks_", [&]() { return pls::cs::Ref<KairoService>{}; });
    });
}

void StoreBase::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_fa01867c9c048464_slow(flag);
}

pls::cs::Ref<KairoService>& StoreBase::ks_() {
    StoreBase::ensure_initialized();
    return StoreBase_ks__storage;
}

pls::cs::String& StoreBase::PAYMENT_PRODUCT() {
    StoreBase::ensure_initialized();
    return StoreBase_PAYMENT_PRODUCT_storage;
}

// M:system.billing.ui.StoreBase.#ctor
void StoreBase::create_init(pls::cs::Ref<StoreBase> self) {
    StoreBase::ensure_initialized();
    self->receipts_ = pls::cs::List<pls::cs::Ref<Receipt>>::make();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.#ctor", game);
    {
    }
}

// M:system.billing.ui.StoreBase.Init(System.String[][],System.String,System.String[])
void StoreBase::Init(StringArray2 data, pls::cs::String paymentProduct, StringArray subscription) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.StoreBase.Init(System.String[][],System.String,System.String[])",
                     game);
    {
        StoreBase::ks_() = KairoService::GetInstance();
        StoreBase::PAYMENT_PRODUCT() = paymentProduct;
        if (is_null(storeController_)) {
            InitializePurchasing(data, paymentProduct, subscription);
        }
    }
}

// M:system.billing.ui.StoreBase.InitializePurchasing(System.String[][],System.String,System.String[])
void StoreBase::InitializePurchasing(StringArray2 data, pls::cs::String paymentProduct,
                                     StringArray subscriptions) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.StoreBase.InitializePurchasing(System.String[][],System.String,System.String[])",
        game);
    {
    }
}

// M:system.billing.ui.StoreBase.IsInitialized
bool StoreBase::IsInitialized() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.IsInitialized", game);
    {
        return true;
    }
}

// M:system.billing.ui.StoreBase.WaitForInitialized
void StoreBase::WaitForInitialized() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.WaitForInitialized", game);
    {
        return;
    }
}

// M:system.billing.ui.StoreBase.LaunchPurchaseFlow(System.String)
pls::cs::Ref<util::Purchase> StoreBase::LaunchPurchaseFlow(pls::cs::String productId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.LaunchPurchaseFlow(System.String)",
                     game);
    {
        return pls::cs::Ref<util::Purchase>{};
    }
}

// M:system.billing.ui.StoreBase.Restore
pls::cs::Int32 StoreBase::Restore() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.Restore", game);
    {
        return 1;
    }
}

// M:system.billing.ui.StoreBase.QueryInventory(System.Boolean,System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String})
pls::cs::Ref<util::Inventory> StoreBase::QueryInventory(bool querySkuDetails,
                                                        pls::cs::List<pls::cs::String> moreItemSkus,
                                                        pls::cs::List<pls::cs::String> moreSubsSkus) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.StoreBase.QueryInventory(System.Boolean,System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String})",
        game);
    {
        pls::cs::List<pls::cs::String> list = pls::cs::List<pls::cs::String>::make();
        pls::cs::Array<pls::cs::List<pls::cs::String>> array =
            pls::cs::Array<pls::cs::List<pls::cs::String>>::from({moreItemSkus, moreSubsSkus});
        {
            auto cs_each229 = array;
            for (std::int32_t cs_i229 = 0; cs_i229 < cs_each229.length(); ++cs_i229) {
                pls::cs::List<pls::cs::String> list2 = cs_each229.get_Item(cs_i229);
                {
                    if (is_null(list2)) {

                    } else {
                        for (pls::cs::Int32 j = 0; j < list2.get_Count(); ++j) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() -> void {
                                    auto cs_receiver = list;
                                    auto cs_arg0 = list2.get_Item(j);
                                    cs_receiver.Add(cs_arg0);
                                }());
                            });
                        }
                    }
                }
            }
        }
        if (list.get_Count() <= 0) {
            return util::Inventory::create();
        }
        {
            pls::cs::Ref<util::Inventory> recoveredInventoryResult = util::Inventory::create();
            return recoveredInventoryResult;
        }
    }
}

// M:system.billing.ui.StoreBase.ConsumeItem(system.billing.util.Purchase)
bool StoreBase::ConsumeItem(pls::cs::Ref<util::Purchase> purchase) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.StoreBase.ConsumeItem(system.billing.util.Purchase)", game);
    {
        return false;
    }
}

// M:system.billing.ui.StoreBase.SearchReceipt(System.String)
pls::cs::Ref<Receipt> StoreBase::SearchReceipt(pls::cs::String json) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.SearchReceipt(System.String)", game);
    {
        {
            auto cs_list_enum230 = receipts_.GetEnumerator();

            struct cs_list_scope230 {
                decltype(cs_list_enum230)& e;

                ~cs_list_scope230() { e.Dispose(); }
            } cs_scope230{cs_list_enum230};

            while (cs_list_enum230.MoveNext()) {
                pls::cs::Ref<Receipt> item = cs_list_enum230.get_Current();
                {
                    if (require(item)->GetJson() == json) {
                        return item;
                    }
                }
            }
        }
        return pls::cs::Ref<Receipt>{};
    }
}

// M:system.billing.ui.StoreBase.GetProductType(System.String)
pls::cs::Int32 StoreBase::GetProductType(pls::cs::String productID) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.GetProductType(System.String)", game);
    {
        throw pls::cs::Exception(
            pls::cs::String::concat(pls::cs::String::concat(literal(u"[ 存在しないproductID : "), productID),
                                    literal(u" ]"))
                .utf8());
    }
}

// M:system.billing.ui.StoreBase.GetIncompletePayments
pls::cs::List<pls::cs::Ref<Receipt>> StoreBase::GetIncompletePayments() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.GetIncompletePayments", game);
    {
        pls::cs::List<pls::cs::Ref<Receipt>> list = pls::cs::List<pls::cs::Ref<Receipt>>::make();
        {
            auto cs_list_enum220 = receipts_.GetEnumerator();

            struct cs_list_scope220 {
                decltype(cs_list_enum220)& e;

                ~cs_list_scope220() { e.Dispose(); }
            } cs_scope220{cs_list_enum220};

            while (cs_list_enum220.MoveNext()) {
                pls::cs::Ref<Receipt> item = cs_list_enum220.get_Current();
                {
                    if (require(item)->paymentComplete_) {
                        continue;
                    }
                    if (!(require(item)->IsTicketProduct())) {
                        continue;
                    }
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return list.Add(item); });
                }
            }
        }
        return list;
    }
}

// M:system.billing.ui.StoreBase.HasIncompletePayments
bool StoreBase::HasIncompletePayments() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.HasIncompletePayments", game);
    {
        if (isRestoreProcessed_) {
            return false;
        }
        {
            auto cs_list_enum221 = receipts_.GetEnumerator();

            struct cs_list_scope221 {
                decltype(cs_list_enum221)& e;

                ~cs_list_scope221() { e.Dispose(); }
            } cs_scope221{cs_list_enum221};

            while (cs_list_enum221.MoveNext()) {
                pls::cs::Ref<Receipt> item = cs_list_enum221.get_Current();
                {
                    if (require(item)->paymentComplete_) {
                        continue;
                    }
                    if (!require(item)->IsTicketProduct()) {
                        continue;
                    }
                    return true;
                }
            }
        }
        return false;
    }
}

// M:system.billing.ui.StoreBase.CompletePayment(system.billing.util.Purchase)
pls::cs::Ref<util::Purchase> StoreBase::CompletePayment(pls::cs::Ref<util::Purchase> purchase) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.StoreBase.CompletePayment(system.billing.util.Purchase)", game);
    {
        {
            auto cs_list_enum219 = receipts_.GetEnumerator();

            struct cs_list_scope219 {
                decltype(cs_list_enum219)& e;

                ~cs_list_scope219() { e.Dispose(); }
            } cs_scope219{cs_list_enum219};

            while (cs_list_enum219.MoveNext()) {
                pls::cs::Ref<Receipt> item = cs_list_enum219.get_Current();
                {
                    if ([&]() -> bool {
                            auto cs_left = require(item)->GetOrderId();
                            auto cs_right = require(purchase)->GetOrderId();
                            return cs_left != cs_right;
                        }()) {
                        continue;
                    }
                    require(item)->paymentComplete_ = true;
                    if (require(purchase)->GetPurchaseTime() == 0ll) {
                        pls::cs::Ref<util::Purchase> purchase2 = SetTime(item);
                        if (is_null(purchase2) || (require(purchase2)->GetPurchaseTime() <=
                                                   pls::cs::cast_integral<pls::cs::Int64>(0))) {
                            require(item)->paymentComplete_ = false;
                            throw pls::cs::Exception();
                        }
                        return purchase2;
                    }
                }
            }
        }
        return purchase;
    }
}

// M:system.billing.ui.StoreBase.IsCompletePayment(system.billing.util.Purchase)
bool StoreBase::IsCompletePayment(pls::cs::Ref<util::Purchase> purchase) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.StoreBase.IsCompletePayment(system.billing.util.Purchase)", game);
    {
        if (is_null(purchase)) {
            return false;
        }
        {
            auto cs_list_enum222 = receipts_.GetEnumerator();

            struct cs_list_scope222 {
                decltype(cs_list_enum222)& e;

                ~cs_list_scope222() { e.Dispose(); }
            } cs_scope222{cs_list_enum222};

            while (cs_list_enum222.MoveNext()) {
                pls::cs::Ref<Receipt> item = cs_list_enum222.get_Current();
                {
                    if ([&]() -> bool {
                            auto cs_left = require(item)->GetOrderId();
                            auto cs_right = require(purchase)->GetOrderId();
                            return cs_left != cs_right;
                        }()) {
                        continue;
                    }
                    if (!require(item)->IsTicketProduct()) {
                        continue;
                    }
                    return require(item)->paymentComplete_;
                }
            }
        }
        return false;
    }
}

// M:system.billing.ui.StoreBase.ProcessIncompletePayment(system.billing.ui.BillingItem,system.billing.util.Purchase)
void StoreBase::ProcessIncompletePayment(pls::cs::Ref<BillingItem> item,
                                         pls::cs::Ref<util::Purchase> purchase) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.billing.ui.StoreBase.ProcessIncompletePayment(system.billing.ui.BillingItem,system.billing.util.Purchase)",
        game);
    {
        if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> bool {
                    auto cs_arg0 = require(item)->GetProvisionType();
                    auto cs_arg1 = StoreBase::PAYMENT_PRODUCT();
                    return string_equals(cs_arg0, cs_arg1);
                }());
            })) {
            return;
        }
        pls::cs::Ref<kairo::unity::system::KairoBase> instance =
            kairo::unity::system::KairoBase::GetInstance();
        pls::cs::Ref<BillingManager> billingManager =
            pls::cs::unbox<pls::cs::Ref<BillingManager>>(pls::cs::box(this));
        pls::cs::run_finally(
            [&]() {
                {
                    require(instance)->SetReserveSaveEnable(false);
                    require(item)->provision_ = false;
                    try {
                        pls::cs::Ref<kairo::unity::system::KairoBase> instance2 =
                            kairo::unity::system::KairoBase::GetInstance();
                        {
                            pls::cs::String cs_arg0 = require(item)->GetProductId();
                            pls::cs::String cs_arg1 = require(purchase)->GetOrderId();
                            pls::cs::String cs_arg2 = require(purchase)->GetToken();
                            pls::cs::Int32 cs_arg3 = require(item)->GetProvisionValue();
                            require(instance2)->AddPaymentMoney(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1, false);
                        }
                        purchase = CompletePayment(purchase);
                    } catch (const pls::cs::Exception& cs_caught_223) {
                        auto ex = pls::cs::capture_exception(cs_caught_223);
                        {
                            pls::cs::throw_exception(ex);
                        }
                    }
                    require(instance)->AccessCounter(0, literal(u"purchase"));
                    require(item)->SetPurchase(purchase);
                    require(billingManager)->Purchase(item);
                    require(billingManager)->UpdateApplyTask(true);
                }
            },
            [&]() {
                require(instance)->Save();
                require(instance)->SetReserveSaveEnable(true);
            });
    }
}

// M:system.billing.ui.StoreBase.ProcessIncompletePayments
void StoreBase::ProcessIncompletePayments() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.ProcessIncompletePayments", game);
    {
        if (!HasIncompletePayments()) {
            return;
        }
        pls::cs::List<pls::cs::Ref<Receipt>> incompletePayments = GetIncompletePayments();
        while (incompletePayments.get_Count() > 0) {
            pls::cs::Array<pls::cs::Ref<BillingItem>> items = this->GetItems();
            pls::cs::Ref<Receipt> receipt = incompletePayments.get_Item(0);
            pls::cs::Ref<BillingItem> billingItem = pls::cs::Ref<BillingItem>{};
            {
                auto cs_each228 = items;
                for (std::int32_t cs_i228 = 0; cs_i228 < cs_each228.length(); ++cs_i228) {
                    pls::cs::Ref<BillingItem> billingItem2 = cs_each228.get_Item(cs_i228);
                    {
                        if (!is_null(billingItem2) && ([&]() -> bool {
                                auto cs_left = require(billingItem2)->GetProductId();
                                auto cs_right = require(receipt)->GetProductID();
                                return cs_left == cs_right;
                            }())) {
                            billingItem = billingItem2;
                            break;
                        }
                    }
                }
            }
            if (!is_null(billingItem)) {
                ProcessIncompletePayment(billingItem, require(receipt)->GetPurchase());
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) { return incompletePayments.RemoveAt(0); });
        }
    }
}

// M:system.billing.ui.StoreBase.SetTime(system.billing.ui.Receipt)
pls::cs::Ref<util::Purchase> StoreBase::SetTime(pls::cs::Ref<Receipt> receipt) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.SetTime(system.billing.ui.Receipt)",
                     game);
    {
        return pls::cs::Ref<util::Purchase>{};
    }
}

// M:system.billing.ui.StoreBase.GetUnityJson(System.String,System.String)
pls::cs::String StoreBase::GetUnityJson(pls::cs::String json, pls::cs::String orderId) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.ui.StoreBase.GetUnityJson(System.String,System.String)", game);
    {
        if (!pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return contains_string(json, literal(u"in_app")); })) {
            return pls::cs::String{};
        }
        pls::cs::Int32 num = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::cs::culture_index_of(json, literal(u"in_app")); });
        bool flag = false;
        pls::cs::String text = pls::cs::String(u"");
        for (pls::cs::Int32 i = num; i < json.length(); ++i) {
            if (pls::cs::cast_integral<pls::cs::Int32>(json.at(i)) ==
                pls::cs::cast_integral<pls::cs::Int32>(u'[')) {
                flag = true;
                continue;
            }
            if (pls::cs::cast_integral<pls::cs::Int32>(json.at(i)) ==
                pls::cs::cast_integral<pls::cs::Int32>(u']')) {
                break;
            }
            if (!(flag)) {
                continue;
            }
            text = pls::cs::String::concat(text, char_string(json.at(i)));
        }
        pls::cs::List<pls::cs::String> list = pls::cs::List<pls::cs::String>::make();
        flag = false;
        pls::cs::String text2 = pls::cs::String(u"");
        for (pls::cs::Int32 j = 0; j < text.length(); ++j) {
            if (pls::cs::cast_integral<pls::cs::Int32>(text.at(j)) ==
                pls::cs::cast_integral<pls::cs::Int32>(u'{')) {
                flag = true;
                text2 = pls::cs::String(u"");
            } else if (pls::cs::cast_integral<pls::cs::Int32>(text.at(j)) ==
                       pls::cs::cast_integral<pls::cs::Int32>(u'}')) {
                flag = false;
                pls::diagnostic::api_call([&]() -> decltype(auto) { return list.Add(text2); });
                text2 = pls::cs::String(u"");
            } else if ((!(flag)) ||
                       (((text2.length() == 0)) && ((pls::cs::cast_integral<pls::cs::Int32>(text.at(j)) ==
                                                     pls::cs::cast_integral<pls::cs::Int32>(u','))))) {

            } else {
                text2 = pls::cs::String::concat(text2, char_string(text.at(j)));
            }
        }
        for (pls::cs::Int32 k = 0; k < list.get_Count(); ++k) {
            pls::cs::String text3 = util::Json::ReadJSon(list.get_Item(k), literal(u"transaction_id"));
            if ((text3 != orderId)) {

            } else {
                return util::Json::ReadJSon(list.get_Item(k), literal(u"purchase_date_ms"));
            }
        }
        return pls::cs::String{};
    }
}

// M:system.billing.ui.StoreBase.CheckPaymentMaintenance
bool StoreBase::CheckPaymentMaintenance() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.CheckPaymentMaintenance", game);
    {
        bool flag = true;
        try {
            pls::cs::Ref<kairo::unity::system::KairoBase> instance =
                kairo::unity::system::KairoBase::GetInstance();
            pls::cs::Int32 paymentMoney = require(instance)->GetPaymentMoney();
            if (paymentMoney == -1) {
                throw pls::cs::Exception();
            }
            flag = false;
        } catch (const pls::cs::Exception& cs_caught_204) {
            auto ex = pls::cs::capture_exception(cs_caught_204);
            {
                pls::cs::String text = literal(u"通信に失敗しました");
                if (kairo::unity::io::Http::GetErrorCode() != 0) {
                    text = kairo::unity::io::Http::GetErrorText();
                }
                pls::cs::Ref<kairo::unity::ui::Dialog> dialog =
                    kairo::unity::ui::Dialog::create(2, literal(u"ｴﾗｰ"));
                require(dialog)->SetText(text);
                require(dialog)->Show();
                pls::cs::throw_exception(ex);
            }
        }
        return flag;
    }
}

// M:system.billing.ui.StoreBase.Save(java.io.OutputStream)
void StoreBase::Save(pls::cs::Ref<kl_io::OutputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.Save(java.io.OutputStream)", game);
    {
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::WriteInt(stream, 102); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::WriteInt(stream, receipts_.get_Count()); });
        for (pls::cs::Int32 i = 0; i < receipts_.get_Count(); ++i) {
            require(receipts_.get_Item(i))->Save(stream);
        }
    }
}

// M:system.billing.ui.StoreBase.Load(java.io.InputStream)
void StoreBase::Load(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.Load(java.io.InputStream)", game);
    {
        if (0 < pls::diagnostic::api_call([&]() -> decltype(auto) { return require(stream)->Available(); })) {
            pls::cs::Int32 num = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadInt(stream); });
            if (num == 100 && StoreBase::GetRestoreRequest() == -1) {
                StoreBase::SetRestoreRequest(1);
            }
            receipts_ = pls::cs::List<pls::cs::Ref<Receipt>>::make();
            pls::cs::Int32 num2 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadInt(stream); });
            for (pls::cs::Int32 i = 0; i < num2; ++i) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = receipts_;
                        auto cs_arg0 = Receipt::Load(stream);
                        cs_receiver.Add(cs_arg0);
                    }());
                });
            }
            if (num == 101) {
                pls::cs::Int32 num3 = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadInt(stream); });
                if (StoreBase::GetRestoreRequest() == -1) {
                    StoreBase::SetRestoreRequest((num3 == 1) ? 1 : 0);
                }
            }
        }
    }
}

// M:system.billing.ui.StoreBase.GetRestoreRequest
pls::cs::Int32 StoreBase::GetRestoreRequest() {
    StoreBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.GetRestoreRequest", game);
    {
        return pls::cs::unbox<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                auto cs_receiver = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::IApplication::GetCurrentApp(); });
                pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 =
                    pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::from_closure(
                        nullptr, std::string("M:system.billing.ui.StoreBase.GetRestoreRequest:8513"),
                        []() -> pls::cs::Ref<pls::cs::Object> {
                            {
                                return pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::kairo::PlayerPrefs::GetInt(literal(u"_restore_transactions"),
                                                                           -1);
                                }));
                            }
                        });
                return require(cs_receiver)->RunOnUiThread(cs_arg0, true);
            }());
        }));
    }
}

// M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32)
void StoreBase::SetRestoreRequest(pls::cs::Int32 request) {
    StoreBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32)",
                     game);
    {
        pls::cs::Ref<pls::cs::Cell<pls::cs::Int32>> request_cell =
            pls::cs::make_ref<pls::cs::Cell<pls::cs::Int32>>(request);
        {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    auto cs_receiver = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return pls::kairo::IApplication::GetCurrentApp(); });
                    pls::cs::Delegate<void()> cs_arg0 = pls::cs::Delegate<void()>::from_closure(
                        pls::cs::raw(request_cell),
                        std::string("M:system.billing.ui.StoreBase.SetRestoreRequest(System.Int32):8685"),
                        [request_cell]() -> void {
                            {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::kairo::PlayerPrefs::SetInt(literal(u"_restore_transactions"),
                                                                           request_cell->value);
                                });
                                pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return pls::kairo::PlayerPrefs::Save(); });
                            }
                        },
                        request_cell);
                    require(cs_receiver)->RunOnUiThread(cs_arg0, true);
                }());
            });
        }
    }
}

// M:system.billing.ui.StoreBase.CallRestoreFlow(System.String@)
bool StoreBase::CallRestoreFlow(pls::cs::String& message) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.ui.StoreBase.CallRestoreFlow(System.String@)",
                     game);
    {
        try {
            pls::cs::Ref<KairoService> instance = KairoService::GetInstance();
            pls::cs::Ref<BillingManager> instance2 = BillingManager::GetInstance();
            pls::cs::Int32 testedValue = require(instance2)->Restore();
            if (testedValue != 0 /* RestoreResult.Complete */) {
                message = ((pls::diagnostic::api_call(
                               [&]() -> decltype(auto) { return kl_util::Language::Japanese(); }))
                               ? literal(u"復元エラー")
                               : literal(u"Error"));
                return false;
            }
            require(instance2)->UpdateBillingItems(false);
            require(instance2)->UpdateApplyTask(false);
            message = ((pls::diagnostic::api_call(
                           [&]() -> decltype(auto) { return kl_util::Language::Japanese(); }))
                           ? literal(u"課金情報の復元が完了しました。")
                           : literal(u"Purchase info restored."));
            return true;
        } catch (const pls::cs::Exception& cs_caught_203) {
            auto t = pls::cs::capture_exception(cs_caught_203);
            {
                pls::diagnostic::api_call([&]() -> decltype(auto) { return kl_util::Log::Info(t); });
                message = kairo::unity::io::Http::GetErrorText();
                return false;
            }
        }
    }
}
} // namespace system::billing::ui
}
