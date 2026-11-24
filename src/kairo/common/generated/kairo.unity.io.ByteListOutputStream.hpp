// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "java.io.OutputStream.hpp"
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace kairo::unity::io {

struct ByteListOutputStream : java::io::OutputStream {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(
        OutputStream, {"M:java.io.OutputStream.Close", "M:kairo.unity.io.ByteListOutputStream.Close"},
        {"M:java.io.OutputStream.Write(System.Byte[],System.Int32,System.Int32)",
         "M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[],System.Int32,System.Int32)"},
        {"M:java.io.OutputStream.Write(System.Byte[])",
         "M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[])"},
        {"M:java.io.OutputStream.Write(System.Int32)",
         "M:kairo.unity.io.ByteListOutputStream.Write(System.Int32)"},
        {"M:java.io.OutputStream.Flush", "M:kairo.unity.io.ByteListOutputStream.Flush"});
    PLS_MANAGED_CLASS("kairo.unity.io.ByteListOutputStream", ByteListOutputStream, OutputStream)
    pls::cs::Array<pls::cs::Array<std::uint8_t>> list_{};
    pls::cs::Int32 count_{};
    pls::cs::Int32 clst_{};
    pls::cs::Int32 cidx_{};
    void Close() override;
    void Write(pls::cs::Array<std::uint8_t> b, pls::cs::Int32 off, pls::cs::Int32 len) override;
    void Write(pls::cs::Array<std::uint8_t> b) override;
    void Write(pls::cs::Int32 b) override;
    void Flush() override;
    static constexpr pls::cs::Int32 BUFFER_SIZE = 256;
    static void ensure_initialized();

    static void create_init(pls::cs::Ref<ByteListOutputStream> self);

    static void Close(pls::cs::Ref<ByteListOutputStream> self);

    static void Flush(pls::cs::Ref<ByteListOutputStream> self);

    static void Write(pls::cs::Ref<ByteListOutputStream> self, pls::cs::Array<std::uint8_t> b,
                      pls::cs::Int32 off, pls::cs::Int32 len);

    static void Write(pls::cs::Ref<ByteListOutputStream> self, pls::cs::Array<std::uint8_t> b);

    static void WriteInt(pls::cs::Ref<ByteListOutputStream> self, pls::cs::Int32 b);

    static pls::cs::Ref<ByteListOutputStream> create();

    void _init(pls::cs::Int32 listNum);

    pls::cs::Int32 Size();

    pls::cs::Array<std::uint8_t> ToByteArray(pls::cs::Int32 index, pls::cs::Int32 length,
                                             pls::cs::Array<std::uint8_t> dst);

    pls::cs::Array<std::uint8_t> ToByteArray(pls::cs::Int32 index, pls::cs::Int32 length);

    void _expand();
};
} // namespace kairo::unity::io
}
