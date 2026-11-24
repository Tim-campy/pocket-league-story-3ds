// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "java.io.InputStream.hpp"
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::io {

struct ByteArrayInputStream : InputStream {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(InputStream,
                       {"M:java.io.InputStream.Available", "M:java.io.ByteArrayInputStream.Available"});
    PLS_MANAGED_CLASS("java.io.ByteArrayInputStream", ByteArrayInputStream, InputStream)
    pls::cs::Int32 Available() override;

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<ByteArrayInputStream> self, pls::cs::Array<std::uint8_t> data);

    static pls::cs::Int32 Available(pls::cs::Ref<ByteArrayInputStream> self);

    static pls::cs::Ref<ByteArrayInputStream> create(pls::cs::Array<std::uint8_t> data);
};
} // namespace java::io
}
