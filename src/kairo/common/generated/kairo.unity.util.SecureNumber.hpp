// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct SecureNumber : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"ToString", "M:kairo.unity.util.SecureNumber.ToString"},
                       {"GetHashCode", "M:kairo.unity.util.SecureNumber.GetHashCode"});
    PLS_MANAGED_CLASS("kairo.unity.util.SecureNumber", SecureNumber, pls::cs::Object)
    pls::cs::Int64 bitmask_{};
    pls::cs::Int64 original_{};
    pls::cs::Int64 value_{};
    pls::cs::String ToString() override;
    std::int32_t GetHashCode() override;

    static pls::cs::Ref<SecureNumber> create();

    static pls::cs::Ref<SecureNumber> create(pls::cs::Int64 value);

    static void ensure_initialized();

    static pls::cs::Int64& hacking_();

    static pls::cs::Ref<java::util::JRandom>& random_();

    static pls::cs::Int32 GetHashCode(pls::cs::Ref<SecureNumber> self);

    static pls::cs::String ToString(pls::cs::Ref<SecureNumber> self);

    static void create_init(pls::cs::Ref<SecureNumber> self);

    static void create_init(pls::cs::Ref<SecureNumber> self, pls::cs::Int64 value);

    pls::cs::Ref<SecureNumber> SetLong(pls::cs::Int64 value);

    pls::cs::Int64 GetLong();

    pls::cs::Int64 Generate(pls::cs::Int64 value);
};
} // namespace kairo::unity::util
}
