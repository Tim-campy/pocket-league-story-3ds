// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.unity.util.SecureString.hpp"
#include "kairo.unity.util.SecureString.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::util::SecureString {

// M:kairo.unity.util.SecureString.op_Addition(System.String,kairo.unity.util.SecureString)
pls::cs::Ref<kl_util::SecureString> op_Addition(pls::cs::String z,pls::cs::Ref<kl_util::SecureString> w) {
kl_util::SecureString::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.SecureString.op_Addition(System.String,kairo.unity.util.SecureString)",kairo);
{
return kl_util::SecureString::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::String::concat(z, ([&]() { auto cs_value = w; return kl_util::SecureString::op_Implicit(cs_value); }()));}));
}

}
} // namespace kairo::unity::util::SecureString
}
