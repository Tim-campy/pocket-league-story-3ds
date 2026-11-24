// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "kairo.unity.util.SecureNumber.hpp"
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct SecureInt : SecureNumber {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(SecureNumber, {"Equals", "M:kairo.unity.util.SecureInt.Equals(System.Object)"},
                       {"GetHashCode", "M:kairo.unity.util.SecureInt.GetHashCode"});
    PLS_MANAGED_CLASS("kairo.unity.util.SecureInt", SecureInt, SecureNumber)
    bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
    std::int32_t GetHashCode() override;

    static bool Equals(pls::cs::Ref<SecureInt> self, pls::cs::Ref<pls::cs::Object> obj);

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<SecureInt> self);

    static void create_init(pls::cs::Ref<SecureInt> self, pls::cs::Int32 value);

    static void create_2_init(pls::cs::Ref<SecureInt> self, pls::cs::Ref<SecureInt> src);

    static pls::cs::Int32 GetHashCode(pls::cs::Ref<SecureInt> self);

    static pls::cs::Int32 op_Implicit(pls::cs::Ref<SecureInt> s);

    static pls::cs::Ref<SecureInt> op_ImplicitInt(pls::cs::Int32 s);

    static pls::cs::Ref<SecureInt> create();

    static pls::cs::Ref<SecureInt> create(pls::cs::Int32 value);

    static pls::cs::Ref<SecureInt> create_2(pls::cs::Ref<SecureInt> src);

    pls::cs::Ref<SecureInt> Set(pls::cs::Int32 value);

    pls::cs::Int32 Get();

    static pls::cs::Array<pls::cs::Ref<SecureInt>> Array(pls::cs::Int32 n);
};
} // namespace kairo::unity::util
}
