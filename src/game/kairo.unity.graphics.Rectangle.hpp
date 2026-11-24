// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::graphics {

struct Rectangle : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"Equals", "M:kairo.unity.graphics.Rectangle.Equals(System.Object)"},
                       {"GetHashCode", "M:kairo.unity.graphics.Rectangle.GetHashCode"});
    PLS_MANAGED_CLASS("kairo.unity.graphics.Rectangle", Rectangle, pls::cs::Object)
    pls::cs::Int32 bottom{};
    pls::cs::Int32 left{};
    pls::cs::Int32 right{};
    pls::cs::Int32 top{};
    bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
    std::int32_t GetHashCode() override;

    static bool Equals(pls::cs::Ref<Rectangle> self, pls::cs::Ref<pls::cs::Object> obj);

    static void ensure_initialized();
};
} // namespace kairo::unity::graphics
}
