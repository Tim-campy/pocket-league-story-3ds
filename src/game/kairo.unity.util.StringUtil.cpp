// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.util.StringUtil.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace kairo::unity::util::StringUtil {

// M:kairo.unity.util.StringUtil.Split(System.String,System.String,System.Boolean)
StringArray Split(pls::cs::String value,pls::cs::String sep,bool zeroSkip) {
kl_util::StringUtil::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.StringUtil.Split(System.String,System.String,System.Boolean)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Split(value, sep, true, zeroSkip, false);});
}

}
} // namespace kairo::unity::util::StringUtil
}
