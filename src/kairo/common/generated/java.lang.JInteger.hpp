// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::lang {

struct JInteger : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"ToString", "M:java.lang.JInteger.ToString"},
                       {"Equals", "M:java.lang.JInteger.Equals(System.Object)"},
                       {"GetHashCode", "M:java.lang.JInteger.GetHashCode"});
    PLS_MANAGED_CLASS("java.lang.JInteger", JInteger, pls::cs::Object)
    pls::cs::Int32 value_{};
    pls::cs::String ToString() override;
    bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
    std::int32_t GetHashCode() override;
    static constexpr pls::cs::Int32 MAX_VALUE = 2147483647;
    static constexpr pls::cs::Int32 MIN_VALUE = (-2147483647 - 1);
    static bool Equals(pls::cs::Ref<JInteger> self, pls::cs::Ref<pls::cs::Object> obj);

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<JInteger> self, pls::cs::Int32 value);

    static pls::cs::Int32 GetHashCode(pls::cs::Ref<JInteger> self);

    static pls::cs::String ToString(pls::cs::Ref<JInteger> self);

    static pls::cs::Int32 op_Implicit(pls::cs::Ref<JInteger> s);

    static pls::cs::Ref<JInteger> create(pls::cs::Int32 value);

    pls::cs::Int32 IntValue();

    static pls::cs::Ref<JInteger> ValueOf(pls::cs::String s);

    static pls::cs::Int32 ParseInt(pls::cs::String s);
};
} // namespace java::lang
}
