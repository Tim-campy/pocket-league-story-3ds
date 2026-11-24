// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.lang.StringEx.hpp"
#include "java.lang.StringEx.hpp"

namespace kl_lang = pls::generated::java::lang;

using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace java::lang::StringEx {

// M:java.lang.StringEx.GetBytes(System.String,System.String)
ByteArray GetBytes(pls::cs::String str, pls::cs::String enc) {
    kl_lang::StringEx::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.StringEx.GetBytes(System.String,System.String)", kairo);
    {
        return PLS_API(require(PLS_API(pls::cs::RuntimeEncoding::GetEncoding(enc)))->GetBytes(str));
    }
}
} // namespace java::lang::StringEx
}
