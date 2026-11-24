// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace system {

struct KairoText : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("system.KairoText", KairoText, pls::cs::Object)

    static void ensure_initialized();

    static bool& convertTranslateTable_();

    static pls::cs::Array<pls::cs::Array<pls::cs::String>>& TRANSLATE_TABLE();

    static void create_init(pls::cs::Ref<KairoText> self);

    static pls::cs::Ref<KairoText> create();

    static pls::cs::String LT(pls::cs::String text, pls::cs::String arg);

    static pls::cs::String LT(pls::cs::String text);

    static pls::cs::String LTInt(pls::cs::String text, pls::cs::Int32 arg);
};
} // namespace system
}
