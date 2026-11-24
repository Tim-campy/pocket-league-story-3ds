// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::util {

struct JarInflater_FileInfo : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_MANAGED_CLASS("kairo.unity.util.JarInflater+FileInfo", JarInflater_FileInfo, pls::cs::Object)
    pls::cs::String Name{};
    pls::cs::Int32 Offset{};
    pls::cs::Int32 Size{};
    std::uint8_t Flag{};

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<JarInflater_FileInfo> self);

    static pls::cs::Ref<JarInflater_FileInfo> create();
};
} // namespace kairo::unity::util
}
