// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.unity.util.Language.Position.hpp"
#include "kairo.unity.util.Language.Position.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::util::Language_Position {

static PLS_NOINLINE void cs_init_ab1b1085a7ab32b9_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.Language.Position", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_ab1b1085a7ab32b9_slow(flag);
}

void create_init(kl_util::Language_Position* self, pls::cs::Int32 line, pls::cs::Int32 segment) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.Position.#ctor(System.Int32,System.Int32)",
                     kairo);
    {
        {
            auto cs_target = self;
            pls::cs::Int32 cs_value = line;
            require(cs_target)->Line = cs_value;
        }
        {
            auto cs_target = self;
            pls::cs::Int32 cs_value = segment;
            require(cs_target)->Segment = cs_value;
        }
    }
}

// M:kairo.unity.util.Language.Position.#ctor(System.Int32,System.Int32)
kl_util::Language_Position create(pls::cs::Int32 line, pls::cs::Int32 segment) {
    Language_Position::ensure_initialized();
    kl_util::Language_Position self{};
    Language_Position::create_init(&self, line, segment);
    return self;
}
} // namespace kairo::unity::util::Language_Position
}
