// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace java::lang {

struct JShort : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"ToString", "M:java.lang.JShort.ToString"},
                       {"Equals", "M:java.lang.JShort.Equals(System.Object)"},
                       {"GetHashCode", "M:java.lang.JShort.GetHashCode"});
    PLS_MANAGED_CLASS("java.lang.JShort", JShort, pls::cs::Object)
    std::int16_t value_{};
    pls::cs::String ToString() override;
    bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
    std::int32_t GetHashCode() override;
    static constexpr std::int16_t MAX_VALUE = std::int16_t(32767);
    static constexpr std::int16_t MIN_VALUE = std::int16_t(-32768);
    static bool Equals(pls::cs::Ref<JShort> self, pls::cs::Ref<pls::cs::Object> obj);

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<JShort> self, std::int16_t value);

    static pls::cs::Ref<JShort> create(std::int16_t value);

    std::int16_t ShortValue();
};
} // namespace java::lang
}
