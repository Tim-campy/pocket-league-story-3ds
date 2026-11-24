// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.ui.Seb.WorkValue.hpp"

namespace pls::game {
namespace kairo::unity::ui {

void Seb_WorkValue::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(works_, visitor);
    pls::cs::trace_value(result_, visitor);
}

static PLS_NOINLINE void cs_init_5ac9304f9db0671e_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ui.Seb.WorkValue", flag, []() {

    });
}

void Seb_WorkValue::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_5ac9304f9db0671e_slow(flag);
}

void Seb_WorkValue::create_init(pls::cs::Ref<Seb_WorkValue> self) {
    Seb_WorkValue::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Seb.WorkValue.#ctor", kairo);
    {
    }
}

// M:kairo.unity.ui.Seb.WorkValue.#ctor
pls::cs::Ref<Seb_WorkValue> Seb_WorkValue::create() {
    Seb_WorkValue::ensure_initialized();
    auto self = pls::cs::make_ref<Seb_WorkValue>();
    Seb_WorkValue::create_init(self);
    return self;
}
} // namespace kairo::unity::ui
}
