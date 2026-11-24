// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.EncodeUtil.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace kairo::unity::util::EncodeUtil {

static PLS_NOINLINE void cs_init_c783ca99640a5ce3_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.EncodeUtil", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_c783ca99640a5ce3_slow(flag);
}

// M:kairo.unity.util.EncodeUtil.FloatToByteAry(System.Single,System.Boolean)
ByteArray FloatToByteAry(pls::cs::Single data, bool endian) {
    EncodeUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.EncodeUtil.FloatToByteAry(System.Single,System.Boolean)", kairo);
    {
        ByteArray array = pls::diagnostic::api_call([&]() -> decltype(auto) { return bit_bytes(data); });
        if (endian) {
            array = EncodeUtil::ConvertEndian(array, 4);
        }
        return array;
    }
}

// M:kairo.unity.util.EncodeUtil.LongToByteAry(System.Int64,System.Boolean)
ByteArray LongToByteAry(pls::cs::Int64 data, bool endian) {
    EncodeUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.EncodeUtil.LongToByteAry(System.Int64,System.Boolean)", kairo);
    {
        ByteArray array = pls::diagnostic::api_call([&]() -> decltype(auto) { return bit_bytes(data); });
        if (endian) {
            array = EncodeUtil::ConvertEndian(array, 8);
        }
        return array;
    }
}

// M:kairo.unity.util.EncodeUtil.IntToByteAry(System.Int32,System.Boolean)
ByteArray IntToByteAry(pls::cs::Int32 data, bool endian) {
    EncodeUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.EncodeUtil.IntToByteAry(System.Int32,System.Boolean)", kairo);
    {
        ByteArray array = pls::diagnostic::api_call([&]() -> decltype(auto) { return bit_bytes(data); });
        if (endian) {
            array = EncodeUtil::ConvertEndian(array, 4);
        }
        return array;
    }
}

// M:kairo.unity.util.EncodeUtil.ShortToByteAry(System.Int16,System.Boolean)
ByteArray ShortToByteAry(std::int16_t data, bool endian) {
    EncodeUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.EncodeUtil.ShortToByteAry(System.Int16,System.Boolean)", kairo);
    {
        ByteArray array = pls::diagnostic::api_call([&]() -> decltype(auto) { return bit_bytes(data); });
        if (endian) {
            array = EncodeUtil::ConvertEndian(array, 2);
        }
        return array;
    }
}

// M:kairo.unity.util.EncodeUtil.ByteAryToFloat(System.Byte[],System.Boolean)
pls::cs::Single ByteAryToFloat(ByteArray data, bool endian) {
    EncodeUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.EncodeUtil.ByteAryToFloat(System.Byte[],System.Boolean)", kairo);
    {
        if (endian) {
            data = EncodeUtil::ConvertEndian(data, 4);
        }
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return bits_from<pls::cs::Single>(data, 0); });
    }
}

// M:kairo.unity.util.EncodeUtil.ByteAryToLong(System.Byte[],System.Boolean)
pls::cs::Int64 ByteAryToLong(ByteArray data, bool endian) {
    EncodeUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.EncodeUtil.ByteAryToLong(System.Byte[],System.Boolean)", kairo);
    {
        if (endian) {
            data = EncodeUtil::ConvertEndian(data, 8);
        }
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return bits_from<pls::cs::Int64>(data, 0); });
    }
}

// M:kairo.unity.util.EncodeUtil.ByteAryToInt(System.Byte[],System.Boolean)
pls::cs::Int32 ByteAryToInt(ByteArray data, bool endian) {
    EncodeUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.EncodeUtil.ByteAryToInt(System.Byte[],System.Boolean)", kairo);
    {
        if (endian) {
            data = EncodeUtil::ConvertEndian(data, 4);
        }
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return bits_from<pls::cs::Int32>(data, 0); });
    }
}

// M:kairo.unity.util.EncodeUtil.ByteAryToShort(System.Byte[],System.Boolean)
std::int16_t ByteAryToShort(ByteArray data, bool endian) {
    EncodeUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.EncodeUtil.ByteAryToShort(System.Byte[],System.Boolean)", kairo);
    {
        if (endian) {
            data = EncodeUtil::ConvertEndian(data, 2);
        }
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return bits_from<std::int16_t>(data, 0); });
    }
}

// M:kairo.unity.util.EncodeUtil.ConvertEndian(System.Byte[],System.Int32)
ByteArray ConvertEndian(ByteArray data, pls::cs::Int32 length) {
    EncodeUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.EncodeUtil.ConvertEndian(System.Byte[],System.Int32)", kairo);
    {
        if (is_little_endian()) {
            ByteArray array = data;
            if (array.length() != length) {
                array = ByteArray::make(length);
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() {
                        auto cs_source = data;
                        auto cs_dest = array;
                        auto cs_count = length;
                        ByteArray::copy(cs_source, 0, cs_dest, 0, cs_count);
                    }());
                });
            }
            for (pls::cs::Int32 num = pls::cs::Int32(array.length()) / 2 - 1; num >= 0; --num) {
                std::uint8_t b = array[num];
                array[num] = array[(array.length() - num) - 1];
                array[(array.length() - num) - 1] = b;
            }
            data = array;
        }
        return data;
    }
}
} // namespace kairo::unity::util::EncodeUtil
}
