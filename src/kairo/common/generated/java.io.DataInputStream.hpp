// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "java.io.InputStream.hpp"
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::io {

struct DataInputStream : InputStream {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(InputStream, {"M:java.io.InputStream.Close", "M:java.io.DataInputStream.Close"});
    PLS_MANAGED_CLASS("java.io.DataInputStream", DataInputStream, InputStream)
    pls::cs::Ref<pls::cs::BinaryReader> br_{};
    void Close() override;

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<DataInputStream> self, pls::cs::Ref<InputStream> stream);

    static void Close(pls::cs::Ref<DataInputStream> self);

    static pls::cs::Ref<DataInputStream> create(pls::cs::Ref<InputStream> stream);

    pls::cs::Int32 ReadInt();
};
} // namespace java::io
}
