// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::io {

struct InputStream : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(
        pls::cs::Object, {"M:java.io.InputStream.Available", "M:java.io.InputStream.Available"},
        {"M:java.io.InputStream.Close", "M:java.io.InputStream.Close"},
        {"M:java.io.InputStream.Mark(System.Int32)", "M:java.io.InputStream.Mark(System.Int32)"},
        {"M:java.io.InputStream.MarkSupported", "M:java.io.InputStream.MarkSupported"},
        {"M:java.io.InputStream.Read", "M:java.io.InputStream.Read"},
        {"M:java.io.InputStream.Read(System.Byte[])", "M:java.io.InputStream.Read(System.Byte[])"},
        {"M:java.io.InputStream.Read(System.Byte[],System.Int32,System.Int32)",
         "M:java.io.InputStream.Read(System.Byte[],System.Int32,System.Int32)"},
        {"M:java.io.InputStream.Reset", "M:java.io.InputStream.Reset"},
        {"M:java.io.InputStream.Skip(System.Int64)", "M:java.io.InputStream.Skip(System.Int64)"});
    PLS_MANAGED_CLASS("java.io.InputStream", InputStream, pls::cs::Object)
    pls::cs::Int64 mark{};
    pls::cs::Ref<pls::cs::Stream> Wrapped{};
    pls::cs::Ref<pls::cs::Stream> BaseStream{};
    virtual pls::cs::Int32 Available();
    virtual void Close();
    virtual void Mark(pls::cs::Int32 readlimit);
    virtual bool MarkSupported();
    virtual pls::cs::Int32 Read();
    virtual pls::cs::Int32 Read(pls::cs::Array<std::uint8_t> buf);
    virtual pls::cs::Int32 Read(pls::cs::Array<std::uint8_t> b, pls::cs::Int32 off, pls::cs::Int32 len);
    virtual void Reset();
    virtual pls::cs::Int64 Skip(pls::cs::Int64 cnt);

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<InputStream> self);

    static pls::cs::Int32 Available(pls::cs::Ref<InputStream> self);

    static void Close(pls::cs::Ref<InputStream> self);

    static void Mark(pls::cs::Ref<InputStream> self, pls::cs::Int32 readlimit);

    static bool MarkSupported(pls::cs::Ref<InputStream> self);

    static pls::cs::Int32 Read_2(pls::cs::Ref<InputStream> self);

    static pls::cs::Int32 Read(pls::cs::Ref<InputStream> self, pls::cs::Array<std::uint8_t> b,
                               pls::cs::Int32 off, pls::cs::Int32 len);

    static pls::cs::Int32 Read(pls::cs::Ref<InputStream> self, pls::cs::Array<std::uint8_t> buf);

    static void Reset(pls::cs::Ref<InputStream> self);

    static pls::cs::Int64 Skip(pls::cs::Ref<InputStream> self, pls::cs::Int64 cnt);

    static pls::cs::Ref<InputStream> create();

    static pls::cs::Ref<pls::cs::Stream> op_Implicit(pls::cs::Ref<InputStream> s);

    pls::cs::Ref<pls::cs::Stream> GetWrappedStream();

    bool CanSeek();

    static pls::cs::Int64 get_Position(pls::cs::Ref<InputStream> self);

    static void set_Position(pls::cs::Ref<InputStream> self, pls::cs::Int64 value);
};
} // namespace java::io
}
