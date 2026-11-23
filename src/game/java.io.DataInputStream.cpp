// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.io.DataInputStream.hpp"
#include "java.io.DataInputStream.hpp"

namespace kl_io = pls::generated::java::io;

namespace pls::game {
namespace java::io::DataInputStream {

// M:java.io.DataInputStream.ReadByte
std::int8_t ReadByte(pls::cs::Ref<kl_io::DataInputStream> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.DataInputStream.ReadByte",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(self->br_)->ReadSByte();});
}

}

// M:java.io.DataInputStream.ReadShort
std::int16_t ReadShort(pls::cs::Ref<kl_io::DataInputStream> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.DataInputStream.ReadShort",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return network_to_host<std::int16_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(self->br_)->ReadInt16();}));});
}

}
} // namespace java::io::DataInputStream
}
