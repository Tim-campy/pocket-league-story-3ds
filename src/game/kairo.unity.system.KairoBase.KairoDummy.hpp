// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "kairo.unity.system.KairoBase.hpp"

namespace pls::game {
namespace kairo::unity::system {

struct KairoBase_KairoDummy : KairoBase {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(
        KairoBase, {"M:kairo.unity.system.KairoBase.Save", "M:kairo.unity.system.KairoBase.KairoDummy.Save"},
        {"M:kairo.unity.system.KairoBase.SaveAll", "M:kairo.unity.system.KairoBase.KairoDummy.SaveAll"},
        {"M:kairo.unity.system.KairoBase.OnSaveGameBegin",
         "M:kairo.unity.system.KairoBase.KairoDummy.OnSaveGameBegin"},
        {"M:kairo.unity.system.KairoBase.OnSaveGameEnd",
         "M:kairo.unity.system.KairoBase.KairoDummy.OnSaveGameEnd"});
    PLS_MANAGED_CLASS("kairo.unity.system.KairoBase+KairoDummy", KairoBase_KairoDummy, KairoBase)
    void Save() override;
    void SaveAll() override;
    void OnSaveGameBegin() override;
    void OnSaveGameEnd() override;

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<KairoBase_KairoDummy> self);

    static pls::cs::Ref<KairoBase_KairoDummy> create();
};
} // namespace kairo::unity::system
}
