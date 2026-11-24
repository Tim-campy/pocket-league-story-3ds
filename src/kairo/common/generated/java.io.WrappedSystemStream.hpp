// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::io {

struct WrappedSystemStream : pls::cs::Stream {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Stream, {"Close", "M:java.io.WrappedSystemStream.Close"},
                       {"Flush", "M:java.io.WrappedSystemStream.Flush"},
                       {"Read",
                        "M:java.io.WrappedSystemStream.Read(System.Byte[],System.Int32,System.Int32)"},
                       {"ReadByte", "M:java.io.WrappedSystemStream.ReadByte"},
                       {"Seek", "M:java.io.WrappedSystemStream.Seek(System.Int64,System.IO.SeekOrigin)"},
                       {"SetLength", "M:java.io.WrappedSystemStream.SetLength(System.Int64)"},
                       {"Write",
                        "M:java.io.WrappedSystemStream.Write(System.Byte[],System.Int32,System.Int32)"},
                       {"WriteByte", "M:java.io.WrappedSystemStream.WriteByte(System.Byte)"},
                       {"get_CanRead", "M:java.io.WrappedSystemStream.get_CanRead"},
                       {"get_CanSeek", "M:java.io.WrappedSystemStream.get_CanSeek"},
                       {"get_CanWrite", "M:java.io.WrappedSystemStream.get_CanWrite"},
                       {"get_Length", "M:java.io.WrappedSystemStream.get_Length"},
                       {"get_Position", "M:java.io.WrappedSystemStream.get_Position"},
                       {"set_Position", "M:java.io.WrappedSystemStream.set_Position(System.Int64)"});
    PLS_MANAGED_CLASS("java.io.WrappedSystemStream", WrappedSystemStream, pls::cs::Stream)
    pls::cs::Ref<InputStream> ist{};
    pls::cs::Ref<OutputStream> ost{};
    pls::cs::Int32 position{};
    pls::cs::Int32 markedPosition{};
    void Close() override;
    void Flush() override;
    std::int32_t Read(pls::cs::Array<std::uint8_t> buffer, std::int32_t offset, std::int32_t count) override;
    std::int32_t ReadByte() override;
    std::int64_t Seek(std::int64_t offset, pls::cs::SeekOrigin origin) override;
    void SetLength(std::int64_t value) override;
    void Write(pls::cs::Array<std::uint8_t> buffer, std::int32_t offset, std::int32_t count) override;
    void WriteByte(std::uint8_t value) override;
    bool get_CanRead() override;
    bool get_CanSeek() override;
    bool get_CanWrite() override;
    std::int64_t get_Length() override;
    std::int64_t get_Position() override;
    void set_Position(std::int64_t value) override;

    static void set_Position(pls::cs::Ref<WrappedSystemStream> self, pls::cs::Int64 value);

    static pls::cs::Int64 get_Position(pls::cs::Ref<WrappedSystemStream> self);

    static pls::cs::Int64 get_Length(pls::cs::Ref<WrappedSystemStream> self);

    static bool get_CanWrite(pls::cs::Ref<WrappedSystemStream> self);

    static bool get_CanSeek(pls::cs::Ref<WrappedSystemStream> self);

    static bool get_CanRead(pls::cs::Ref<WrappedSystemStream> self);

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<WrappedSystemStream> self, pls::cs::Ref<InputStream> ist);

    static void Close(pls::cs::Ref<WrappedSystemStream> self);

    static void Flush(pls::cs::Ref<WrappedSystemStream> self);

    static pls::cs::Int32 Read(pls::cs::Ref<WrappedSystemStream> self, pls::cs::Array<std::uint8_t> buffer,
                               pls::cs::Int32 offset, pls::cs::Int32 count);

    static pls::cs::Int32 ReadByte(pls::cs::Ref<WrappedSystemStream> self);

    static pls::cs::Int64 Seek(pls::cs::Ref<WrappedSystemStream> self, pls::cs::Int64 offset,
                               pls::cs::SeekOrigin origin);

    static void SetLength(pls::cs::Ref<WrappedSystemStream> self, pls::cs::Int64 value);

    static void Write(pls::cs::Ref<WrappedSystemStream> self, pls::cs::Array<std::uint8_t> buffer,
                      pls::cs::Int32 offset, pls::cs::Int32 count);

    static void WriteByte(pls::cs::Ref<WrappedSystemStream> self, std::uint8_t value);

    static pls::cs::Ref<WrappedSystemStream> create(pls::cs::Ref<InputStream> ist);

    static pls::cs::Ref<InputStream> get_InputStream(pls::cs::Ref<WrappedSystemStream> self);

    static pls::cs::Ref<OutputStream> get_OutputStream(pls::cs::Ref<WrappedSystemStream> self);

    void OnMark(pls::cs::Int32 nb);
};
} // namespace java::io
}
