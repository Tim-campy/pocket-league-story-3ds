// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.ByteArrayInputStream.hpp"
#include "java.io.InputStream.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace java::io {

void ByteArrayInputStream::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    InputStream::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_3b41638e424b9ee0_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.io.ByteArrayInputStream", flag, []() {

    });
}

void ByteArrayInputStream::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_3b41638e424b9ee0_slow(flag);
}

void ByteArrayInputStream::create_init(pls::cs::Ref<ByteArrayInputStream> self, ByteArray data) {
    ByteArrayInputStream::ensure_initialized();
    InputStream::create_init(pls::cs::static_pointer_cast<InputStream>(self));
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.ByteArrayInputStream.#ctor(System.Byte[])", kairo);
    {
        self->Wrapped = ([&]() {
            auto cs_arg0 = data;
            return pls::cs::make_ref<pls::cs::MemoryStream>(cs_arg0);
        }());
    }
}

pls::cs::Int32 ByteArrayInputStream::Available(pls::cs::Ref<ByteArrayInputStream> self) {
    return require(self)->ByteArrayInputStream::Available();
}

// M:java.io.ByteArrayInputStream.#ctor(System.Byte[])
pls::cs::Ref<ByteArrayInputStream> ByteArrayInputStream::create(ByteArray data) {
    ByteArrayInputStream::ensure_initialized();
    auto self = pls::cs::make_ref<ByteArrayInputStream>();
    ByteArrayInputStream::create_init(self, data);
    return self;
}

// M:java.io.ByteArrayInputStream.Available
pls::cs::Int32 ByteArrayInputStream::Available() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.ByteArrayInputStream.Available", kairo);
    {
        pls::cs::Ref<pls::cs::MemoryStream> memoryStream =
            pls::cs::unbox<pls::cs::Ref<pls::cs::MemoryStream>>(pls::cs::box(Wrapped));
        return pls::cs::to_int32((([&]() -> pls::cs::Int64 {
            auto cs_left = pls::cs::Int64(require(memoryStream)->get_Length());
            auto cs_right = require(memoryStream)->get_Position();
            return cs_left - cs_right;
        }())));
    }
}
} // namespace java::io
}
