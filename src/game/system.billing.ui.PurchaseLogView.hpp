// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system::billing::ui {

struct PurchaseLogView : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("system.billing.ui.PurchaseLogView", PurchaseLogView, pls::cs::Object)
    pls::cs::String title_{};
    pls::cs::Int32 num_{};
    pls::cs::String text_{};
    bool log_{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<PurchaseLogView> self, pls::cs::String title);

    static pls::cs::Ref<PurchaseLogView> create(pls::cs::String title);

    void SetLog(pls::cs::Int32 num, pls::cs::String text, bool log);

    void Show();
};
} // namespace system::billing::ui
}
