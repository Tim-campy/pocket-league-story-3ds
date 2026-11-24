// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.Encrypter.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace kairo::unity::util::Encrypter {

static ByteArray key__storage{};

static PLS_NOINLINE void cs_init_4978cb69e37b8564_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots(
        [](const pls::cs::EdgeVisitor& visitor) { pls::cs::trace_value(key__storage, visitor); });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.Encrypter", flag, []() {
        key__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Encrypter.key_",
                                                                [&]() { return ByteArray::make(1); });
    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_4978cb69e37b8564_slow(flag);
}

ByteArray& key_() {
    Encrypter::ensure_initialized();
    return key__storage;
}

// M:kairo.unity.util.Encrypter.SetEncryptionKey(System.Byte[])
void SetEncryptionKey(ByteArray key) {
    Encrypter::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Encrypter.SetEncryptionKey(System.Byte[])", kairo);
    {
        Encrypter::key_() = key;
    }
}

// M:kairo.unity.util.Encrypter.Encode(System.Byte[],System.Byte[])
void Encode(ByteArray src, ByteArray key) {
    Encrypter::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Encrypter.Encode(System.Byte[],System.Byte[])",
                     kairo);
    {
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(src.length()); ++i) {
            src[i] = pls::cs::cast_integral<std::uint8_t>((([&]() -> pls::cs::Int32 {
                auto cs_left = pls::cs::cast_integral<pls::cs::Int32>(src[i]);
                auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(key[i % pls::cs::Int32(key.length())]);
                return cs_left ^ cs_right;
            }())));
        }
    }
}

// M:kairo.unity.util.Encrypter.Decode(System.Byte[])
void Decode(ByteArray src) {
    Encrypter::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Encrypter.Decode(System.Byte[])", kairo);
    {
        Encrypter::Decode(src, Encrypter::key_());
    }
}

// M:kairo.unity.util.Encrypter.Decode(System.Byte[],System.Byte[])
void Decode(ByteArray src, ByteArray key) {
    Encrypter::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Encrypter.Decode(System.Byte[],System.Byte[])",
                     kairo);
    {
        Encrypter::Encode(src, key);
    }
}
} // namespace kairo::unity::util::Encrypter
}
