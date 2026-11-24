// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.unity.io.AssetReader.hpp"
#include "kairo.unity.io.AssetReader.hpp"

namespace kl_io = pls::generated::kairo::unity::io;

using LongArray = pls::cs::Array<pls::cs::Int64>;

namespace pls::game {
namespace kairo::unity::io::AssetReader {

static LongArray crcTable__storage{};
} // namespace kairo::unity::io::AssetReader

namespace kairo::unity::io {

static pls::cs::GcRootProvider cs_init_edf182ae9bfd734d_unit_roots =
    pls::cs::GcRootProvider([](const pls::cs::EdgeVisitor& visitor) -> void {
        pls::cs::trace_value(AssetReader::crcTable__storage, visitor);
    });
} // namespace kairo::unity::io

namespace kairo::unity::io::AssetReader {

LongArray& crcTable_() {
    kl_io::AssetReader::ensure_initialized();
    return crcTable__storage;
}

// M:kairo.unity.io.AssetReader.SetSecurity(System.Int64[],System.Boolean)
void SetSecurity(LongArray crcTable, bool encrypt) {
    kl_io::AssetReader::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.io.AssetReader.SetSecurity(System.Int64[],System.Boolean)", kairo);
    {
        AssetReader::crcTable_() = crcTable;
        {
            auto cs_value = encrypt;
            kl_io::AssetReader::encrypt_() = cs_value;
        }
    }
}
} // namespace kairo::unity::io::AssetReader
}
