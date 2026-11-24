// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.io.DataInputStream.hpp"
#include "java.io.DataInputStream.hpp"

namespace kl_io = pls::generated::java::io;

namespace pls::game {
namespace java::io::DataInputStream {

// M:java.io.DataInputStream.ReadByte
std::int8_t ReadByte(pls::cs::Ref<kl_io::DataInputStream> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.DataInputStream.ReadByte", kairo);
    {
        return PLS_API(require(self->br_)->ReadSByte());
    }
}

// M:java.io.DataInputStream.ReadShort
std::int16_t ReadShort(pls::cs::Ref<kl_io::DataInputStream> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.io.DataInputStream.ReadShort", kairo);
    {
        return PLS_API(network_to_host<std::int16_t>(PLS_API(require(self->br_)->ReadInt16())));
    }
}
} // namespace java::io::DataInputStream
}
