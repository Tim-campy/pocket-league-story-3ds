// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::system::notification::ui {

struct NotifyManager : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object,
                       {"M:kairo.unity.system.notification.ui.NotifyManager.OnNotify",
                        "M:kairo.unity.system.notification.ui.NotifyManager.OnNotify"},
                       {"M:kairo.unity.system.notification.ui.NotifyManager.OnReceiveValue",
                        "M:kairo.unity.system.notification.ui.NotifyManager.OnReceiveValue"});
    PLS_MANAGED_CLASS("kairo.unity.system.notification.ui.NotifyManager", NotifyManager, pls::cs::Object)
    pls::cs::List<pls::cs::String> values_{};
    bool pushEnable_{};
    pls::cs::Int32 filterLevel_{};
    virtual void OnNotify();
    virtual void OnReceiveValue();

    static void ensure_initialized();

    static pls::cs::Ref<NotifyManager>& instance_();

    static void create_init(pls::cs::Ref<NotifyManager> self);

    static pls::cs::Ref<NotifyManager> create();

    static pls::cs::Ref<NotifyManager> GetInstance();

    void DoNotify();

    void DoCancel();

    bool IsPushEnable();
};
} // namespace kairo::unity::system::notification::ui
}
