// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.lang.JMath.hpp"
#include "kairo.unity.m3d4.util3d.FastMath.hpp"

namespace kl_lang = pls::generated::java::lang;

namespace pls::game {
namespace kairo::unity::m3d4::util3d::FastMath {

static PLS_NOINLINE void cs_init_bcccbac2bf72843d_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.m3d4.util3d.FastMath", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_bcccbac2bf72843d_slow(flag);
}

// M:kairo.unity.m3d4.util3d.FastMath.Cos(System.Single)
pls::cs::Single Cos(pls::cs::Single a) {
    FastMath::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.m3d4.util3d.FastMath.Cos(System.Single)", kairo);
    {
        return pls::cs::Single(PLS_API(std::cos(PLS_API(kl_lang::JMath::ToRadians(a)))));
    }
}

// M:kairo.unity.m3d4.util3d.FastMath.Sin(System.Single)
pls::cs::Single Sin(pls::cs::Single a) {
    FastMath::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.m3d4.util3d.FastMath.Sin(System.Single)", kairo);
    {
        return pls::cs::Single(PLS_API(std::sin(PLS_API(kl_lang::JMath::ToRadians(a)))));
    }
}
} // namespace kairo::unity::m3d4::util3d::FastMath
}
