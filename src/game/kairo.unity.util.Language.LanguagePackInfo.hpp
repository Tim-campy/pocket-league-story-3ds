// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::util {

struct Language_LanguagePackInfo : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.util.Language+LanguagePackInfo", Language_LanguagePackInfo,
                      pls::cs::Object)
    pls::cs::String Author{};
    pls::cs::String Code{};
    pls::cs::String Title{};
    pls::cs::String Appli{};
    pls::cs::String Version{};
    pls::cs::String Scale{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<Language_LanguagePackInfo> self);

    static pls::cs::Ref<Language_LanguagePackInfo> create();
};
} // namespace kairo::unity::util
}
