// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.DataInputStream.hpp"
#include "java.io.InputStream.hpp"

namespace pls::generated {
namespace java::io {

void DataInputStream::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    InputStream::trace_edges(visitor);
    pls::cs::trace_value(br_, visitor);
}

static PLS_NOINLINE void cs_init_8d93189702e4084b_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.io.DataInputStream", flag, []() {

    });
}

void DataInputStream::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_8d93189702e4084b_slow(flag);
}

void DataInputStream::create_init(pls::cs::Ref<DataInputStream> self, pls::cs::Ref<InputStream> stream) {
    DataInputStream::ensure_initialized();
    InputStream::create_init(pls::cs::static_pointer_cast<InputStream>(self));
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.DataInputStream.#ctor(java.io.InputStream)", kairo);
    {
        self->Wrapped = ([&]() {
            auto cs_value = stream;
            return InputStream::op_Implicit(cs_value);
        }());
        self->br_ = ([&]() {
            auto cs_arg0 = ([&]() {
                auto cs_value = stream;
                return InputStream::op_Implicit(cs_value);
            }());
            return pls::cs::make_ref<pls::cs::BinaryReader>(cs_arg0);
        }());
    }
}

void DataInputStream::Close(pls::cs::Ref<DataInputStream> self) {
    require(self)->DataInputStream::Close();
}

// M:java.io.DataInputStream.#ctor(java.io.InputStream)
pls::cs::Ref<DataInputStream> DataInputStream::create(pls::cs::Ref<InputStream> stream) {
    DataInputStream::ensure_initialized();
    auto self = pls::cs::make_ref<DataInputStream>();
    DataInputStream::create_init(self, stream);
    return self;
}

// M:java.io.DataInputStream.ReadInt
pls::cs::Int32 DataInputStream::ReadInt() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.DataInputStream.ReadInt", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return network_to_host<pls::cs::Int32>(
                pls::diagnostic::api_call([&]() -> decltype(auto) { return require(br_)->ReadInt32(); }));
        });
    }
}

// M:java.io.DataInputStream.Close
void DataInputStream::Close() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.DataInputStream.Close", kairo);
    {
        if (!is_null(br_)) {
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(br_)->Close(); });
        }
        br_ = pls::cs::Ref<pls::cs::BinaryReader>{};
        InputStream::Close();
    }
}
} // namespace java::io
}
