// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.JFloat.hpp"

namespace pls::game {
namespace java::lang::JFloat {

static PLS_NOINLINE void cs_init_0ca2ef5bfa869b6b_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.lang.JFloat", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_0ca2ef5bfa869b6b_slow(flag);
}

// M:java.lang.JFloat.ParseFloat(System.String)
pls::cs::Single ParseFloat(pls::cs::String s) {
    JFloat::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JFloat.ParseFloat(System.String)", kairo);
    {
        return PLS_API(pls::cs::culture_parse_single(s));
    }
}
} // namespace java::lang::JFloat
}
