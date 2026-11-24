// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct Property : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.util.Property", Property, pls::cs::Object)
    pls::cs::Array<pls::cs::Ref<Property>> pros{};
    pls::cs::Array<pls::cs::Int32> ints{};
    pls::cs::Array<pls::cs::Int64> lngs{};
    pls::cs::Array<pls::cs::String> strs{};
    pls::cs::Array<pls::cs::Array<std::uint8_t>> bins{};
    static constexpr pls::cs::Int32 TYPE_PRO = 0;
    static constexpr pls::cs::Int32 TYPE_INT = 1;
    static constexpr pls::cs::Int32 TYPE_LNG = 2;
    static constexpr pls::cs::Int32 TYPE_STR = 3;
    static constexpr pls::cs::Int32 TYPE_BIN = 4;
    static constexpr pls::cs::Int32 TYPE_END = 5;
    static void ensure_initialized();

    static void create_init(pls::cs::Ref<Property> self);

    static void create_init(pls::cs::Ref<Property> self, pls::cs::Ref<Property> property);

    static void create_init(pls::cs::Ref<Property> self, pls::cs::Array<pls::cs::Ref<Property>> pros,
                            pls::cs::Array<pls::cs::Int32> ints, pls::cs::Array<pls::cs::Int64> lngs,
                            pls::cs::Array<pls::cs::String> strs,
                            pls::cs::Array<pls::cs::Array<std::uint8_t>> bins);

    static pls::cs::Ref<Property> create();

    static pls::cs::Ref<Property> create(pls::cs::Ref<Property> property);

    static pls::cs::Ref<Property> create(pls::cs::Array<pls::cs::Ref<Property>> pros,
                                         pls::cs::Array<pls::cs::Int32> ints,
                                         pls::cs::Array<pls::cs::Int64> lngs,
                                         pls::cs::Array<pls::cs::String> strs,
                                         pls::cs::Array<pls::cs::Array<std::uint8_t>> bins);

    void SetData(pls::cs::Array<pls::cs::Int32> data);

    void SetDataLongArray(pls::cs::Array<pls::cs::Int64> data);

    void SetDataStringArray(pls::cs::Array<pls::cs::String> data);

    void SetDataByteArrayArray(pls::cs::Array<pls::cs::Array<std::uint8_t>> data);

    void SetDataPropertyArray(pls::cs::Array<pls::cs::Ref<Property>> data);

    void Load(pls::cs::Array<std::uint8_t> data);

    void LoadInputStream(pls::cs::Ref<java::io::InputStream> stream);

    pls::cs::Array<std::uint8_t> ToByteArray();

    void ToByteArray(pls::cs::Ref<java::io::OutputStream> os);

    void Read(pls::cs::Ref<java::io::InputStream> stream, pls::cs::Int32 type, pls::cs::Int32 size,
              pls::cs::Array<std::uint8_t> ids);

    void Write(pls::cs::Ref<java::io::OutputStream> os, pls::cs::Int32 type);

    pls::cs::Int32 Size(pls::cs::Int32 type);

    pls::cs::Int32 GetTypeNum();
};
} // namespace kairo::unity::util
}
