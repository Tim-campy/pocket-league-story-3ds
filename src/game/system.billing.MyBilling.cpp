// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "UnityEngine.Purchasing.IExtensionProvider.hpp"
#include "UnityEngine.Purchasing.IStoreController.hpp"
#include "UnityEngine.Purchasing.IStoreListener.hpp"
#include "form.FormManager.hpp"
#include "form.SubForm.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "main.AppData.hpp"
#include "system.billing.MyBilling.hpp"
#include "system.billing.ui.ApplyTask.hpp"
#include "system.billing.ui.BillingItem.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.billing.ui.Receipt.hpp"
#include "system.billing.ui.StoreBase.hpp"
#include "system.billing.util.Purchase.hpp"
#include "system.form.BillingForm.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;

namespace pls::game {
namespace system::billing {

void MyBilling::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    BillingManager::trace_edges(visitor);
}

static pls::cs::Ref<main::AppData> MyBilling_apdat__storage{};

static pls::cs::Ref<pls::kairo::IApplication> MyBilling_app__storage{};

static pls::cs::Ref<pls::game::form::FormManager> MyBilling_fm__storage{};

static PLS_NOINLINE void cs_init_08829eb6a4df2a40_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(MyBilling_apdat__storage, visitor);
        pls::cs::trace_value(MyBilling_app__storage, visitor);
        pls::cs::trace_value(MyBilling_fm__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("system.billing.MyBilling", flag, []() {

    });
}

void MyBilling::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_08829eb6a4df2a40_slow(flag);
}

pls::cs::Ref<main::AppData>& MyBilling::apdat_() {
    MyBilling::ensure_initialized();
    return MyBilling_apdat__storage;
}

pls::cs::Ref<pls::kairo::IApplication>& MyBilling::app_() {
    MyBilling::ensure_initialized();
    return MyBilling_app__storage;
}

pls::cs::Ref<pls::game::form::FormManager>& MyBilling::fm_() {
    MyBilling::ensure_initialized();
    return MyBilling_fm__storage;
}

void MyBilling::create_init(pls::cs::Ref<MyBilling> self) {
    MyBilling::ensure_initialized();
    BillingManager::ensure_initialized();
    BillingManager::create_init(pls::cs::static_pointer_cast<BillingManager>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.MyBilling.#ctor", game);
    {
        MyBilling::app_() = PLS_API(pls::kairo::IApplication::GetCurrentApp());
        MyBilling::fm_() = pls::cs::unbox<pls::cs::Ref<pls::game::form::FormManager>>(
            pls::cs::box(require(MyBilling::app_())->GetFormManager()));
        MyBilling::apdat_() = main::AppData::GetInstance();
        BillingManager::BASE64_PUBLIC_KEY() = kl_util::SecureString::create(literal(
            u"MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAmp4nkTi9cXIfx3bxAtIiFKYtNPnXzkx01PkfcYaRHKsZYxsOfGwxoJtlZfgovAgn5m+OsX7d0xrGON+4/fYDgqw4Pfz8Gg//g0DV3JJ202wh07OykycemKTR7DXipiXnehEIajW8hX5gIFqFX730RBcDlF0aQAEMM7mYQEw/ZMxXh0dAwC3j1AWfgAzbx1gym86Mj1tTc2p0L/GO6WFKV5NY4cIQ45AX5Z85GELL52vlpFZ4nTy90Hsy3yguAVQ9SoXbE/cEu8139Cn2SjNoykiL3EKqUVx3ux///s0e1kqJcpWkm5mV/8VlsEdFJWOv8QY3lWU3bKLp7KdeYkbDQQIDAQAB"));
    }
}

// M:system.billing.MyBilling.#ctor
pls::cs::Ref<MyBilling> MyBilling::create() {
    MyBilling::ensure_initialized();
    auto self = pls::cs::make_ref<MyBilling>();
    MyBilling::create_init(self);
    return self;
}

// M:system.billing.MyBilling.GetBillingTable
StringArray2 MyBilling::GetBillingTable() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.MyBilling.GetBillingTable", game);
    {
        bool flag = PLS_API(kl_util::Language::Japanese());
        return StringArray2::from(
            {StringArray::from({literal(u"00"), literal(u"0000"), literal(u"ad_off_case0"),
                                (flag) ? literal(u"広告OFF+横回転") : literal(u"Remove ads"),
                                pls::cs::String(u""), literal(u"0"), pls::cs::String(u"")}),
             StringArray::from({literal(u"10"), literal(u"1100"), literal(u"ticket_1_case0"),
                                (flag) ? literal(u"ﾁｹｯﾄ|枚|枚") : literal(u"Ticket||Ticket"),
                                pls::cs::String(u""), literal(u"0"), pls::cs::String(u"")}),
             StringArray::from({literal(u"20"), literal(u"0100"), literal(u"ticket_10_case0_00"),
                                (flag) ? literal(u"ﾁｹｯﾄ|枚|枚ｾｯﾄ") : literal(u"Tickets||Tickets"),
                                pls::cs::String(u""), literal(u"0"), pls::cs::String(u"")}),
             StringArray::from({literal(u"21"), literal(u"0100"), literal(u"ticket_10_case0_01"),
                                (flag) ? literal(u"ﾁｹｯﾄ|枚|枚ｾｯﾄ") : literal(u"Tickets||Tickets"),
                                pls::cs::String(u""), literal(u"0"), pls::cs::String(u"")})});
    }
}

// M:system.billing.MyBilling.GetInstance
pls::cs::Ref<MyBilling> MyBilling::GetInstance() {
    MyBilling::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.MyBilling.GetInstance", game);
    {
        BillingManager::ensure_initialized();

        if (is_null(BillingManager::instance_())) {
            BillingManager::instance_() = MyBilling::create();
        }
        return pls::cs::unbox<pls::cs::Ref<MyBilling>>(pls::cs::box(BillingManager::instance_()));
    }
}

// M:system.billing.MyBilling.Init
void MyBilling::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.MyBilling.Init", game);
    {
        BillingManager::Init(GetBillingTable());
    }
}

// M:system.billing.MyBilling.ExecuteApplyTask(system.billing.ui.ApplyTask)
bool MyBilling::ExecuteApplyTask(pls::cs::Ref<ui::ApplyTask> task) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.MyBilling.ExecuteApplyTask(system.billing.ui.ApplyTask)", game);
    {
        return false;
    }
}

// M:system.billing.MyBilling.Provisioning(system.billing.ui.ApplyTask)
void MyBilling::Provisioning(pls::cs::Ref<ui::ApplyTask> task) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.billing.MyBilling.Provisioning(system.billing.ui.ApplyTask)", game);
    {
        return;
    }
}

// M:system.billing.MyBilling.Cancel(system.billing.ui.ApplyTask)
void MyBilling::Cancel(pls::cs::Ref<ui::ApplyTask> task) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.MyBilling.Cancel(system.billing.ui.ApplyTask)",
                     game);
    {
        return;
    }
}

// M:system.billing.MyBilling.CheckPlayingGame
bool MyBilling::CheckPlayingGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.billing.MyBilling.CheckPlayingGame", game);
    {
        if (BillingManager::CheckPlayingGame()) {
            return true;
        }
        pls::cs::Ref<pls::kairo::FormBase> form = PLS_API(require(MyBilling::fm_())->GetForm(0));
        if (!is_null(form) && PLS_API(require(form)->IsAlive())) {
            pls::cs::Int32 id = PLS_API(require(form)->GetId());
            if (id != 0 && id != 1) {
                return true;
            }
        }
        return false;
    }
}
} // namespace system::billing
}
