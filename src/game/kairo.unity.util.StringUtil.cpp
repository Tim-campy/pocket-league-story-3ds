// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.util.StringUtil.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace kairo::unity::util::StringUtil {

// M:kairo.unity.util.StringUtil.Split(System.String,System.String,System.Boolean)
StringArray Split(pls::cs::String value, pls::cs::String sep, bool zeroSkip) {
    kl_util::StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StringUtil.Split(System.String,System.String,System.Boolean)",
                     kairo);
    {
        return PLS_API(kl_util::StringUtil::Split(value, sep, true, zeroSkip, false));
    }
}
} // namespace kairo::unity::util::StringUtil
}
