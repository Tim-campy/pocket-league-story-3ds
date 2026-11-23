// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "kairo.unity.util.BitUtil.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::util::BitUtil {

// M:kairo.unity.util.BitUtil.Join(System.Int32,System.Int32)
pls::cs::Int64 Join(pls::cs::Int32 high,pls::cs::Int32 low) {
kl_util::BitUtil::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.BitUtil.Join(System.Int32,System.Int32)",kairo);
{
return ((pls::cs::Int64(high) & pls::cs::Int64(0xFFFFFFFFu)) << 32) | (pls::cs::Int64(low) & pls::cs::Int64(0xFFFFFFFFu));
}

}

// M:kairo.unity.util.BitUtil.Split(System.Int64)
IntArray Split(pls::cs::Int64 value) {
kl_util::BitUtil::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.BitUtil.Split(System.Int64)",kairo);
{
std::uint64_t num = 18446744069414584320ull;
kl_util::BitUtil::split_tmpI()[0] = pls::cs::to_int32(((pls::cs::cast_integral<pls::cs::Int64>(((pls::cs::cast_integral<std::uint64_t>(value) & num))) >> 32)));
kl_util::BitUtil::split_tmpI()[1] = pls::cs::to_int32((value & pls::cs::Int64(0xFFFFFFFFu)));
return kl_util::BitUtil::split_tmpI();
}

}
} // namespace kairo::unity::util::BitUtil
}
