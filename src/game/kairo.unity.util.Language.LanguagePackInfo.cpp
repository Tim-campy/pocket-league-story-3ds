// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.util.Language.LanguagePackInfo.hpp"

namespace pls::game {
namespace kairo::unity::util {

void Language_LanguagePackInfo::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(Author, visitor);
    pls::cs::trace_value(Code, visitor);
    pls::cs::trace_value(Title, visitor);
    pls::cs::trace_value(Appli, visitor);
    pls::cs::trace_value(Version, visitor);
    pls::cs::trace_value(Scale, visitor);
}

static PLS_NOINLINE void cs_init_d86010513034d6a0_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.Language.LanguagePackInfo", flag, []() {

    });
}

void Language_LanguagePackInfo::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_d86010513034d6a0_slow(flag);
}

void Language_LanguagePackInfo::create_init(pls::cs::Ref<Language_LanguagePackInfo> self) {
    Language_LanguagePackInfo::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.LanguagePackInfo.#ctor", kairo);
    {
    }
}

// M:kairo.unity.util.Language.LanguagePackInfo.#ctor
pls::cs::Ref<Language_LanguagePackInfo> Language_LanguagePackInfo::create() {
    Language_LanguagePackInfo::ensure_initialized();
    auto self = pls::cs::make_ref<Language_LanguagePackInfo>();
    Language_LanguagePackInfo::create_init(self);
    return self;
}
} // namespace kairo::unity::util
}
