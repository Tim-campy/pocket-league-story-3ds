// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "java.lang.JInteger.hpp"
#include "kairo.unity.util.MD5.hpp"

namespace kl_lang = pls::generated::java::lang;

using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace kairo::unity::util::MD5 {

static PLS_NOINLINE void cs_init_6d8b1b9c55c43b83_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.MD5", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_6d8b1b9c55c43b83_slow(flag);
}

// M:kairo.unity.util.MD5.GetValue(System.Byte[])
pls::cs::String GetValue(ByteArray buf) {
    MD5::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.MD5.GetValue(System.Byte[])", kairo);
    {
        ByteArray array = PLS_API(([&]() {
            auto cs_buffer = buf;
            return pls::cs::md5_compute_hash(cs_buffer);
        }()));
        pls::cs::Ref<pls::cs::StringBuilder> stringBuilder = ([&]() {
            return pls::cs::make_ref<pls::cs::StringBuilder>();
        }());
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            pls::cs::String text = java::lang::JInteger::ToHexString(pls::cs::Int32(0xFF) & array[i]);
            if (kl_lang::StringEx::Length(text) == 1) {
                text = pls::cs::String::concat(literal(u"0"), text);
            }
            PLS_API(require(stringBuilder)->Append(text));
        }
        return PLS_API(require(stringBuilder)->ToString());
    }
}
} // namespace kairo::unity::util::MD5
}
