// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/kairo.unity.util.Language.hpp"
#include "kairo.unity.panel.Button.hpp"
#include "kairo.unity.panel.Component.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::panel {

void Button::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    Component::trace_edges(visitor);
    pls::cs::trace_value(label_, visitor);
}

static PLS_NOINLINE void cs_init_17bc7a5b28fcdc2a_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.panel.Button", flag, []() {

    });
}

void Button::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_17bc7a5b28fcdc2a_slow(flag);
}

void Button::create_init(pls::cs::Ref<Button> self, pls::cs::String text) {
    Button::ensure_initialized();
    Component::create_init(pls::cs::static_pointer_cast<Component>(self));
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.Button.#ctor(System.String)", kairo);
    {
        self->label_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::Language::TranslateSoftLabel(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_util::Language::TranslateText(text, true); }));
        });
    }
}

// M:kairo.unity.panel.Button.#ctor(System.String)
pls::cs::Ref<Button> Button::create(pls::cs::String text) {
    Button::ensure_initialized();
    auto self = pls::cs::make_ref<Button>();
    Button::create_init(self, text);
    return self;
}

// M:kairo.unity.panel.Button.GetWidth
pls::cs::Int32 Button::GetWidth() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.Button.GetWidth", kairo);
    {
        return 60;
    }
}

// M:kairo.unity.panel.Button.SetLocation(System.Int32,System.Int32)
void Button::SetLocation(pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.panel.Button.SetLocation(System.Int32,System.Int32)",
                     kairo);
    {
    }
}
} // namespace kairo::unity::panel
}
