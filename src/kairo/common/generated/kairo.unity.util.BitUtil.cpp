// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.BitUtil.hpp"
using ShortArray = pls::cs::Array<std::int16_t>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::generated {
namespace kairo::unity::util::BitUtil {

static pls::cs::Array<std::int8_t> split_tmpB_storage{};

static IntArray split_tmpI_storage{};

static ShortArray split_tmpS_storage{};

static PLS_NOINLINE void cs_init_f3ea616d36334b95_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(split_tmpB_storage, visitor);
        pls::cs::trace_value(split_tmpI_storage, visitor);
        pls::cs::trace_value(split_tmpS_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.BitUtil", flag, []() {
        split_tmpB_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.util.BitUtil.split_tmpB", [&]() { return pls::cs::Array<std::int8_t>::make(2); });
        split_tmpS_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.BitUtil.split_tmpS",
                                                                      [&]() { return ShortArray::make(2); });
        split_tmpI_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.BitUtil.split_tmpI",
                                                                      [&]() { return IntArray::make(2); });
    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_f3ea616d36334b95_slow(flag);
}

pls::cs::Array<std::int8_t>& split_tmpB() {
    BitUtil::ensure_initialized();
    return split_tmpB_storage;
}

IntArray& split_tmpI() {
    BitUtil::ensure_initialized();
    return split_tmpI_storage;
}

ShortArray& split_tmpS() {
    BitUtil::ensure_initialized();
    return split_tmpS_storage;
}

// M:kairo.unity.util.BitUtil.Check(System.Int32,System.Int32)
bool Check(pls::cs::Int32 v, pls::cs::Int32 bit) {
    BitUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.BitUtil.Check(System.Int32,System.Int32)", kairo);
    {
        return (v & bit) != 0;
    }
}

// M:kairo.unity.util.BitUtil.On(System.Int32,System.Int32)
pls::cs::Int32 On(pls::cs::Int32 v, pls::cs::Int32 bit) {
    BitUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.BitUtil.On(System.Int32,System.Int32)", kairo);
    {
        return v | bit;
    }
}

// M:kairo.unity.util.BitUtil.Off(System.Int32,System.Int32)
pls::cs::Int32 Off(pls::cs::Int32 v, pls::cs::Int32 bit) {
    BitUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.BitUtil.Off(System.Int32,System.Int32)", kairo);
    {
        {
            auto cs_old_8 = v;
            auto cs_rhs_8 = ~bit;
            pls::cs::Int32 cs_value_8 = (cs_old_8 & cs_rhs_8);
            v = cs_value_8;
            return cs_value_8;
        }
    }
}

// M:kairo.unity.util.BitUtil.Join(System.Int16,System.Int16)
pls::cs::Int32 Join(std::int16_t high, std::int16_t low) {
    BitUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.BitUtil.Join(System.Int16,System.Int16)", kairo);
    {
        return ((high & 0xFFFF) << 16) | (low & 0xFFFF);
    }
}

// M:kairo.unity.util.BitUtil.Split(System.Int32)
ShortArray Split(pls::cs::Int32 value) {
    BitUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.BitUtil.Split(System.Int32)", kairo);
    {
        BitUtil::split_tmpS()[0] = pls::cs::cast_integral<std::int16_t>(
            ((pls::cs::Int64(value) & pls::cs::Int64(0xFFFF0000u)) >> 16));
        BitUtil::split_tmpS()[1] = pls::cs::cast_integral<std::int16_t>((value & 0xFFFF));
        return BitUtil::split_tmpS();
    }
}
} // namespace kairo::unity::util::BitUtil
}
