// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.CRC64.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using LongArray = pls::cs::Array<pls::cs::Int64>;

namespace pls::generated {
namespace kairo::unity::util::CRC64 {

static LongArray crcTable__storage{};

static PLS_NOINLINE void cs_init_8b851671e0d8b17f_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots(
        [](const pls::cs::EdgeVisitor& visitor) { pls::cs::trace_value(crcTable__storage, visitor); });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.CRC64", flag, []() {
        crcTable__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.CRC64.crcTable_",
                                                                     [&]() { return LongArray{}; });
    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_8b851671e0d8b17f_slow(flag);
}

LongArray& crcTable_() {
    CRC64::ensure_initialized();
    return crcTable__storage;
}

// M:kairo.unity.util.CRC64.MakeCrcTable
void MakeCrcTable() {
    CRC64::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.CRC64.MakeCrcTable", kairo);
    {
        CRC64::crcTable_() = LongArray::make(256);
        pls::cs::Int64 num;
        for (pls::cs::Int32 i = 0; i < 256; ++i) {
            num = pls::cs::cast_integral<pls::cs::Int64>(i);
            for (pls::cs::Int32 j = 0; j < 8; ++j) {
                if ((num & pls::cs::Int64(1)) == 0ll) {
                    num = (pls::cs::Int64(0xEDB88320u) ^ (num >> 1));
                } else {
                    num = (num >> 1);
                }
            }
            CRC64::crcTable_()[i] = num;
        }
    }
}

// M:kairo.unity.util.CRC64.Update(System.Int64,System.Byte[],System.Int32)
pls::cs::Int64 Update(pls::cs::Int64 crc, ByteArray buf, pls::cs::Int32 len) {
    CRC64::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.CRC64.Update(System.Int64,System.Byte[],System.Int32)", kairo);
    {
        pls::cs::Int64 num = crc;
        if ([&]() {
                auto cs_left = pls::cs::box(CRC64::crcTable_());
                auto cs_right = pls::cs::box(LongArray{});
                return cs_left == cs_right;
            }()) {
            CRC64::MakeCrcTable();
        }
        for (pls::cs::Int32 i = 0; i < len; ++i) {
            num = (CRC64::crcTable_()[(pls::cs::to_int32(num) ^ buf[i]) & 0xFF] ^ (num >> 8));
        }
        return num;
    }
}

// M:kairo.unity.util.CRC64.GetValue(System.Byte[])
pls::cs::Int64 GetValue(ByteArray buf) {
    CRC64::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.CRC64.GetValue(System.Byte[])", kairo);
    {
        return CRC64::Update(4294967295ll, buf, buf.length()) ^ pls::cs::Int64(0xFFFFFFFFu);
    }
}
} // namespace kairo::unity::util::CRC64
}
