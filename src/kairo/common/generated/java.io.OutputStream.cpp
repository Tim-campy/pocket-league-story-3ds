// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.OutputStream.hpp"
#include "java.io.WrappedSystemStream.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace java::io {

void OutputStream::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(Wrapped, visitor);
}

static PLS_NOINLINE void cs_init_ea324a0bbfe717fe_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.io.OutputStream", flag, []() {

    });
}

void OutputStream::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_ea324a0bbfe717fe_slow(flag);
}

void OutputStream::create_init(pls::cs::Ref<OutputStream> self) {
    OutputStream::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.OutputStream.#ctor", kairo);
    {
    }
}

void OutputStream::Close(pls::cs::Ref<OutputStream> self) {
    require(self)->OutputStream::Close();
}

void OutputStream::Flush(pls::cs::Ref<OutputStream> self) {
    require(self)->OutputStream::Flush();
}

void OutputStream::Write(pls::cs::Ref<OutputStream> self, ByteArray b, pls::cs::Int32 offset,
                         pls::cs::Int32 len) {
    require(self)->OutputStream::Write(b, offset, len);
}

void OutputStream::WriteByteArray(pls::cs::Ref<OutputStream> self, ByteArray b) {
    require(self)->OutputStream::Write(b);
}

void OutputStream::Write(pls::cs::Ref<OutputStream> self, pls::cs::Int32 b) {
    require(self)->OutputStream::Write(b);
}

// M:java.io.OutputStream.#ctor
pls::cs::Ref<OutputStream> OutputStream::create() {
    OutputStream::ensure_initialized();
    auto self = pls::cs::make_ref<OutputStream>();
    OutputStream::create_init(self);
    return self;
}

// M:java.io.OutputStream.Close
void OutputStream::Close() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.OutputStream.Close", kairo);
    {
        if (!is_null(Wrapped)) {
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(Wrapped)->Close(); });
        }
    }
}

// M:java.io.OutputStream.Flush
void OutputStream::Flush() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.OutputStream.Flush", kairo);
    {
        if (!is_null(Wrapped)) {
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(Wrapped)->Flush(); });
        }
    }
}

// M:java.io.OutputStream.Write(System.Int32)
void OutputStream::Write(pls::cs::Int32 b) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.OutputStream.Write(System.Int32)", kairo);
    {
        if (is_instance<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped))) {
            require(WrappedSystemStream::get_OutputStream(
                        (pls::cs::unbox<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped)))))
                ->Write(b);
            return;
        }
        if (is_null(Wrapped)) {
            throw pls::cs::NotImplementedException();
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(Wrapped)->WriteByte(pls::cs::cast_integral<std::uint8_t>(b));
        });
    }
}

// M:java.io.OutputStream.Write(System.Byte[])
void OutputStream::Write(ByteArray b) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.OutputStream.Write(System.Byte[])", kairo);
    {
        this->Write(b, 0, b.length());
    }
}

// M:java.io.OutputStream.Write(System.Byte[],System.Int32,System.Int32)
void OutputStream::Write(ByteArray b, pls::cs::Int32 offset, pls::cs::Int32 len) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.OutputStream.Write(System.Byte[],System.Int32,System.Int32)",
                     kairo);
    {
        if (is_instance<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped))) {
            require(WrappedSystemStream::get_OutputStream(
                        (pls::cs::unbox<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped)))))
                ->Write(b, offset, len);
            return;
        }
        if (!is_null(Wrapped)) {
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(Wrapped)->Write(b, offset, len); });
            return;
        }
        for (pls::cs::Int32 i = 0; i < len; ++i) {
            this->Write(pls::cs::cast_integral<pls::cs::Int32>(b[i + offset]));
        }
    }
}
} // namespace java::io
}
