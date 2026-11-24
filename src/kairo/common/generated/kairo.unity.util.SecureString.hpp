// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "kairo.unity.util.SecureNumber.hpp"
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct SecureString : SecureNumber {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(SecureNumber, {"ToString", "M:kairo.unity.util.SecureString.ToString"},
                       {"Equals", "M:kairo.unity.util.SecureString.Equals(System.Object)"},
                       {"GetHashCode", "M:kairo.unity.util.SecureString.GetHashCode"});
    PLS_MANAGED_CLASS("kairo.unity.util.SecureString", SecureString, SecureNumber)
    pls::cs::String original__SecureString{};
    pls::cs::Array<char16_t> value__SecureString{};
    pls::cs::Array<char16_t> buffer_{};
    pls::cs::Int32 hashCode_{};
    pls::cs::String ToString() override;
    bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
    std::int32_t GetHashCode() override;

    static bool Equals(pls::cs::Ref<SecureString> self, pls::cs::Ref<pls::cs::Object> obj);

    static void ensure_initialized();

    static void create_2_init(pls::cs::Ref<SecureString> self, pls::cs::Ref<SecureString> src);

    static void create_init(pls::cs::Ref<SecureString> self, pls::cs::String value);

    static pls::cs::Int32 GetHashCode(pls::cs::Ref<SecureString> self);

    static pls::cs::String ToString(pls::cs::Ref<SecureString> self);

    static pls::cs::String op_Implicit(pls::cs::Ref<SecureString> s);

    static pls::cs::Ref<SecureString> op_ImplicitString(pls::cs::String s);

    static pls::cs::Ref<SecureString> op_Addition(pls::cs::Ref<SecureString> z, pls::cs::String w);

    static pls::cs::Ref<SecureString> create(pls::cs::String value);

    static pls::cs::Ref<SecureString> create_2(pls::cs::Ref<SecureString> src);

    pls::cs::Ref<SecureString> Set(pls::cs::String value);

    pls::cs::String Get();

    char16_t Generate(char16_t value);

    void Generate(pls::cs::Array<char16_t> from, pls::cs::Array<char16_t> to);

    static void Arraycopy(pls::cs::Array<pls::cs::Ref<SecureString>> srcArray, pls::cs::Int32 srcIndex,
                          pls::cs::Array<pls::cs::Ref<SecureString>> dstArray, pls::cs::Int32 dstIndex,
                          pls::cs::Int32 length);

    pls::cs::Int32 Length();

    pls::cs::Array<std::uint8_t> GetBytes();

    bool Equals_2(pls::cs::String anObject);

    bool EqualsSecureString(pls::cs::Ref<SecureString> anObject);

    bool StartsWith(pls::cs::String prefix);

    bool EndsWith(pls::cs::String suffix);

    pls::cs::Int32 IndexOf(pls::cs::Int32 ch);

    static pls::cs::Ref<SecureString> ValueOf(pls::cs::String str);

    static pls::cs::String ToStringSecureStringStatic(pls::cs::Ref<SecureString> str);
};
} // namespace kairo::unity::util
}
