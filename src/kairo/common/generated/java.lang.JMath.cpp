// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.JMath.hpp"

namespace pls::generated {
namespace java::lang::JMath {

static PLS_NOINLINE void cs_init_ead0ac0906403160_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.lang.JMath", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_ead0ac0906403160_slow(flag);
}

// M:java.lang.JMath.Abs(System.Single)
pls::cs::Single Abs(pls::cs::Single a) {
    JMath::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JMath.Abs(System.Single)", kairo);
    {
        if (!(a >= 0.0f)) {
            return -(a);
        }
        return a;
    }
}

// M:java.lang.JMath.Abs(System.Int32)
pls::cs::Int32 AbsInt(pls::cs::Int32 a) {
    JMath::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JMath.Abs(System.Int32)", kairo);
    {
        if (a < 0) {
            return -a;
        }
        return a;
    }
}

// M:java.lang.JMath.Abs(System.Int64)
pls::cs::Int64 AbsLong(pls::cs::Int64 a) {
    JMath::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JMath.Abs(System.Int64)", kairo);
    {
        if (a < pls::cs::cast_integral<pls::cs::Int64>(0)) {
            return -a;
        }
        return a;
    }
}

// M:java.lang.JMath.Cos(System.Double)
pls::cs::Double Cos(pls::cs::Double a) {
    JMath::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JMath.Cos(System.Double)", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return std::cos(a); });
    }
}

// M:java.lang.JMath.Sin(System.Double)
pls::cs::Double Sin(pls::cs::Double a) {
    JMath::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JMath.Sin(System.Double)", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return std::sin(a); });
    }
}

// M:java.lang.JMath.Sqrt(System.Double)
pls::cs::Double Sqrt(pls::cs::Double a) {
    JMath::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JMath.Sqrt(System.Double)", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) { return std::sqrt(a); });
    }
}

// M:java.lang.JMath.ToRadians(System.Double)
pls::cs::Double ToRadians(pls::cs::Double angdeg) {
    JMath::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JMath.ToRadians(System.Double)", kairo);
    {
        return (angdeg * 3.141592653589793 /* Math.PI */) / 180.0;
    }
}
} // namespace java::lang::JMath
}
