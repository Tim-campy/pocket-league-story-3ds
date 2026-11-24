// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.unity.util.Language.LangPackFormat.hpp"
#include "kairo.unity.util.Language.LangPackFormat.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::util::Language_LangPackFormat {

static PLS_NOINLINE void cs_init_98f0a1bec2084c3c_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.Language.LangPackFormat", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_98f0a1bec2084c3c_slow(flag);
}

void create_init(pls::cs::Ref<kl_util::Language_LangPackFormat> self, pls::cs::String file, char16_t lineCode,
                 char16_t segCode) {
    Language_LangPackFormat::ensure_initialized();
    self->LineCode = char16_t(10);
    self->SegCode = char16_t(9);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.Language.LangPackFormat.#ctor(System.String,System.Char,System.Char)", kairo);
    {
        self->File = file;
        self->LineCode = lineCode;
        self->SegCode = segCode;
    }
}

// M:kairo.unity.util.Language.LangPackFormat.#ctor(System.String,System.Char,System.Char)
pls::cs::Ref<kl_util::Language_LangPackFormat> create(pls::cs::String file, char16_t lineCode,
                                                      char16_t segCode) {
    Language_LangPackFormat::ensure_initialized();
    auto self = pls::cs::make_ref<kl_util::Language_LangPackFormat>();
    Language_LangPackFormat::create_init(self, file, lineCode, segCode);
    return self;
}
} // namespace kairo::unity::util::Language_LangPackFormat
}
