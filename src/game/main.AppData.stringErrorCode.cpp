// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "main.AppData.stringErrorCode.hpp"

namespace pls::game {
namespace main {

void AppData_stringErrorCode::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_9d34b362d90540bb_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("main.AppData.stringErrorCode", flag, []() {

    });
}

void AppData_stringErrorCode::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_9d34b362d90540bb_slow(flag);
}

void AppData_stringErrorCode::create_init(pls::cs::Ref<AppData_stringErrorCode> self) {
    AppData_stringErrorCode::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.AppData.stringErrorCode.#ctor", game);
    {
    }
}

// M:main.AppData.stringErrorCode.#ctor
pls::cs::Ref<AppData_stringErrorCode> AppData_stringErrorCode::create() {
    AppData_stringErrorCode::ensure_initialized();
    auto self = pls::cs::make_ref<AppData_stringErrorCode>();
    AppData_stringErrorCode::create_init(self);
    return self;
}
} // namespace main
}
