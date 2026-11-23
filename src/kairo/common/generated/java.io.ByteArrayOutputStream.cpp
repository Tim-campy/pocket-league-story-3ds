// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.io.ByteArrayOutputStream.hpp"
#include "java.io.OutputStream.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace java::io {

void ByteArrayOutputStream::trace_edges(const pls::cs::EdgeVisitor&visitor)const {OutputStream::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_fb60578b3098a284_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.io.ByteArrayOutputStream",flag,[](){

});}

void ByteArrayOutputStream::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_fb60578b3098a284_slow(flag);}

void ByteArrayOutputStream::create_init(pls::cs::Ref<ByteArrayOutputStream> self) {
ByteArrayOutputStream::ensure_initialized();
OutputStream::create_init(pls::cs::static_pointer_cast<OutputStream>(self));
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.ByteArrayOutputStream.#ctor",kairo);
{
self->Wrapped = ([&]() { return pls::cs::make_ref<pls::cs::MemoryStream>(); }());
}

}

void ByteArrayOutputStream::Close(pls::cs::Ref<ByteArrayOutputStream> self) { require(self)->ByteArrayOutputStream::Close(); }

pls::cs::String ByteArrayOutputStream::ToString(pls::cs::Ref<ByteArrayOutputStream> self) { return require(self)->ByteArrayOutputStream::ToString(); }

// M:java.io.ByteArrayOutputStream.#ctor
pls::cs::Ref<ByteArrayOutputStream> ByteArrayOutputStream::create() {
ByteArrayOutputStream::ensure_initialized();
 auto self = pls::cs::make_ref<ByteArrayOutputStream>(); ByteArrayOutputStream::create_init(self); return self; 
}

// M:java.io.ByteArrayOutputStream.ToByteArray
ByteArray ByteArrayOutputStream::ToByteArray() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.ByteArrayOutputStream.ToByteArray",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require((pls::cs::unbox<pls::cs::Ref<pls::cs::MemoryStream>>(pls::cs::box(Wrapped))))->ToArray();});
}
}

// M:java.io.ByteArrayOutputStream.Close
void ByteArrayOutputStream::Close() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.ByteArrayOutputStream.Close",kairo);
{

}
}

// M:java.io.ByteArrayOutputStream.ToString
pls::cs::String ByteArrayOutputStream::ToString() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.ByteArrayOutputStream.ToString",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = ToByteArray(); return require(cs_receiver)->GetString(cs_arg0); }());});
}
}
} // namespace java::io
}
