// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "kairo.unity.util.SecureNumber.hpp"
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct SecureLong : SecureNumber {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(SecureNumber, {"Equals", "M:kairo.unity.util.SecureLong.Equals(System.Object)"},
                       {"GetHashCode", "M:kairo.unity.util.SecureLong.GetHashCode"});
    PLS_MANAGED_CLASS("kairo.unity.util.SecureLong", SecureLong, SecureNumber)
    bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
    std::int32_t GetHashCode() override;

    static bool Equals(pls::cs::Ref<SecureLong> self, pls::cs::Ref<pls::cs::Object> obj);

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<SecureLong> self);

    static void create_init(pls::cs::Ref<SecureLong> self, pls::cs::Int64 value);

    static pls::cs::Int32 GetHashCode(pls::cs::Ref<SecureLong> self);

    static pls::cs::Int64 op_Implicit(pls::cs::Ref<SecureLong> s);

    static pls::cs::Ref<SecureLong> op_ImplicitLong(pls::cs::Int64 s);

    static pls::cs::Ref<SecureLong> create();

    static pls::cs::Ref<SecureLong> create(pls::cs::Int64 value);

    pls::cs::Ref<SecureLong> Set(pls::cs::Int64 value);

    pls::cs::Int64 Get();

    static pls::cs::Array<pls::cs::Ref<SecureLong>> Array(pls::cs::Int32 n);
};
} // namespace kairo::unity::util
}
