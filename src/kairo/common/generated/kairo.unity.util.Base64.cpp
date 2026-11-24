// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.Base64.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace kairo::unity::util::Base64 {

static PLS_NOINLINE void cs_init_d4a32b46456ca92c_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.Base64", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_d4a32b46456ca92c_slow(flag);
}

// M:kairo.unity.util.Base64.Decode(System.String)
ByteArray Decode(pls::cs::String str) {
    Base64::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Base64.Decode(System.String)", kairo);
    {
        try {
            return pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::cs::convert_from_base64_string(str); });
        } catch (const pls::cs::Exception& cs_caught_0) {
            pls::cs::capture_exception(cs_caught_0);
            {
                return ByteArray{};
            }
        }
    }
}

// M:kairo.unity.util.Base64.Encode(System.Byte[])
pls::cs::String Encode(ByteArray bytes) {
    Base64::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Base64.Encode(System.Byte[])", kairo);
    {
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::cs::convert_to_base64_string(bytes); });
    }
}
} // namespace kairo::unity::util::Base64
}
