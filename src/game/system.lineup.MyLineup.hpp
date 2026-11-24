// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.system.lineup.ui.LineupManager.hpp"

namespace pls::game {
namespace system::lineup {

struct MyLineup : kairo::unity::system::lineup::ui::LineupManager {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("system.lineup.MyLineup", MyLineup, LineupManager)

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<MyLineup> self);

    static pls::cs::Ref<MyLineup> create();

    static pls::cs::Ref<MyLineup> GetInstance();

    void Start();
};
} // namespace system::lineup
}
