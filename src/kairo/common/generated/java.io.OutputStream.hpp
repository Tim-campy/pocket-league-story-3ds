// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::io {

struct OutputStream : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"M:java.io.OutputStream.Close", "M:java.io.OutputStream.Close"},
                       {"M:java.io.OutputStream.Flush", "M:java.io.OutputStream.Flush"},
                       {"M:java.io.OutputStream.Write(System.Int32)",
                        "M:java.io.OutputStream.Write(System.Int32)"},
                       {"M:java.io.OutputStream.Write(System.Byte[])",
                        "M:java.io.OutputStream.Write(System.Byte[])"},
                       {"M:java.io.OutputStream.Write(System.Byte[],System.Int32,System.Int32)",
                        "M:java.io.OutputStream.Write(System.Byte[],System.Int32,System.Int32)"});
    PLS_MANAGED_CLASS("java.io.OutputStream", OutputStream, pls::cs::Object)
    pls::cs::Ref<pls::cs::Stream> Wrapped{};
    virtual void Close();
    virtual void Flush();
    virtual void Write(pls::cs::Int32 b);
    virtual void Write(pls::cs::Array<std::uint8_t> b);
    virtual void Write(pls::cs::Array<std::uint8_t> b, pls::cs::Int32 offset, pls::cs::Int32 len);

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<OutputStream> self);

    static void Close(pls::cs::Ref<OutputStream> self);

    static void Flush(pls::cs::Ref<OutputStream> self);

    static void Write(pls::cs::Ref<OutputStream> self, pls::cs::Array<std::uint8_t> b, pls::cs::Int32 offset,
                      pls::cs::Int32 len);

    static void Write(pls::cs::Ref<OutputStream> self, pls::cs::Int32 b);

    static void WriteByteArray(pls::cs::Ref<OutputStream> self, pls::cs::Array<std::uint8_t> b);

    static pls::cs::Ref<OutputStream> create();
};
} // namespace java::io
}
