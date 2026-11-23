// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.system.notification.ui.NotifyManager.hpp"
namespace pls::game {
namespace system::notification {

struct MyNotify : kairo::unity::system::notification::ui::NotifyManager {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(NotifyManager,
    {"M:kairo.unity.system.notification.ui.NotifyManager.OnNotify", "M:system.notification.MyNotify.OnNotify"},
    {"M:kairo.unity.system.notification.ui.NotifyManager.OnReceiveValue", "M:system.notification.MyNotify.OnReceiveValue"});
PLS_MANAGED_CLASS("system.notification.MyNotify", MyNotify, NotifyManager)
void OnNotify() override;
void OnReceiveValue() override;

static void ensure_initialized();

static void create_init(pls::cs::Ref<MyNotify> self);

static pls::cs::Ref<MyNotify> create();

static pls::cs::Ref<MyNotify> GetInstance();
};
} // namespace system::notification
}
