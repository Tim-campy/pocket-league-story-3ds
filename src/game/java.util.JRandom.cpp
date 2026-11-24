// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.util.JRandom.hpp"
#include "java.util.JRandom.hpp"

namespace kl_util = pls::generated::java::util;

namespace pls::game {
namespace java::util::JRandom {

// M:java.util.JRandom.NextInt(System.Int32)
pls::cs::Int32 NextInt(pls::cs::Ref<kl_util::JRandom> self, pls::cs::Int32 n) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JRandom.NextInt(System.Int32)", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return require(self->random_)->Next(); }) %
               n;
    }
}

// M:java.util.JRandom.SetSeed(System.Int64)
void SetSeed(pls::cs::Ref<kl_util::JRandom> self, pls::cs::Int64 seed) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JRandom.SetSeed(System.Int64)", kairo);
    {
        self->random_ = ([&]() {
            auto cs_arg0 = pls::cs::to_int32(seed);
            return pls::cs::make_ref<pls::cs::Random>(cs_arg0);
        }());
    }
}
} // namespace java::util::JRandom
}
