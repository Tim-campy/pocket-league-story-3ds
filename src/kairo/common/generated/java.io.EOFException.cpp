// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.EOFException.hpp"

namespace pls::generated {
namespace java::io {

void EOFException::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::ExceptionObject::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_64732f8c8acf2fd3_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.io.EOFException", flag, []() {

    });
}

void EOFException::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_64732f8c8acf2fd3_slow(flag);
}

void EOFException::create_init(pls::cs::Ref<EOFException> self, pls::cs::String s) {
    EOFException::ensure_initialized();
    ([&]() {
        pls::cs::String cs_arg0 = s;
        self->source_ctor("System.IO.EndOfStreamException", cs_arg0);
    }());
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.EOFException.#ctor(System.String)", kairo);
    {
    }
}

// M:java.io.EOFException.#ctor(System.String)
pls::cs::Ref<EOFException> EOFException::create(pls::cs::String s) {
    EOFException::ensure_initialized();
    auto self = pls::cs::make_ref<EOFException>();
    EOFException::create_init(self, s);
    return self;
}
} // namespace java::io
}
