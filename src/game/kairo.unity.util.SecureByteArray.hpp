// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"
#include "generated/kairo.unity.util.SecureNumber.hpp"

namespace pls::game {
namespace kairo::unity::util {

struct SecureByteArray : generated::kairo::unity::util::SecureNumber {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.util.SecureByteArray", SecureByteArray,
                      generated::kairo::unity::util::SecureNumber)
    pls::cs::Array<std::uint8_t> original_{};
    pls::cs::Array<std::uint8_t> value_{};
    pls::cs::Array<std::uint8_t> buffer_{};
    pls::cs::Int32 length{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<SecureByteArray> self, pls::cs::Array<std::uint8_t> ary);

    static pls::cs::Ref<SecureByteArray> create(pls::cs::Array<std::uint8_t> ary);

    pls::cs::Ref<SecureByteArray> Set(pls::cs::Array<std::uint8_t> ary);

    pls::cs::Array<std::uint8_t> Get();

    pls::cs::Array<std::uint8_t> ToArray();

    static pls::cs::Array<std::uint8_t> ToArray(pls::cs::Ref<SecureByteArray> ary);

    std::uint8_t Generate(std::uint8_t value);

    void Generate(pls::cs::Array<std::uint8_t> from, pls::cs::Array<std::uint8_t> to);

    static pls::cs::Ref<SecureByteArray> ValueOf(pls::cs::Array<std::uint8_t> ary);
};
} // namespace kairo::unity::util
}
