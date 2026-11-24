// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.unity.util.SecureNumber.hpp"
#include "kairo.unity.util.SecureNumber.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::util::SecureNumber {

// M:kairo.unity.util.SecureNumber.GetHackingCount
pls::cs::Int64 GetHackingCount() {
    kl_util::SecureNumber::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureNumber.GetHackingCount", kairo);
    {
        return kl_util::SecureNumber::hacking_();
    }
}
} // namespace kairo::unity::util::SecureNumber
}
