// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui {

struct Seb_WorkValue : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.ui.Seb+WorkValue", Seb_WorkValue, pls::cs::Object)
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> works_{};
    pls::cs::Array<pls::cs::Array<pls::cs::Int32>> result_{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<Seb_WorkValue> self);

    static pls::cs::Ref<Seb_WorkValue> create();
};
} // namespace kairo::unity::ui
}
