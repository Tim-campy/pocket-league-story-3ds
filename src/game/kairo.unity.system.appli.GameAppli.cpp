// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.system.appli.GameAppli.hpp"

namespace pls::game {
namespace kairo::unity::system::appli {

void GameAppli::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::trace_value(Language, visitor);
    pls::cs::trace_value(Name, visitor);
    pls::cs::trace_value(AndPkg, visitor);
    pls::cs::trace_value(IOSPkg, visitor);
    pls::cs::trace_value(IOSId, visitor);
}

static PLS_NOINLINE void cs_init_c87dc3d2d0f9440a_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.system.appli.GameAppli", flag, []() {

    });
}

void GameAppli::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_c87dc3d2d0f9440a_slow(flag);
}

// M:kairo.unity.system.appli.GameAppli.IsReleaseAndroid
bool GameAppli::IsReleaseAndroid(GameAppli* self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.appli.GameAppli.IsReleaseAndroid", kairo);
    {
        return self->AndDate != -1;
    }
}

// M:kairo.unity.system.appli.GameAppli.IsReleaseIOS
bool GameAppli::IsReleaseIOS(GameAppli* self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.appli.GameAppli.IsReleaseIOS", kairo);
    {
        return self->IOSDate != -1;
    }
}
} // namespace kairo::unity::system::appli
}
