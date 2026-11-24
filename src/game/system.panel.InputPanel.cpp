// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kfw.panel.MainPanel.hpp"
#include "system.panel.InputPanel.hpp"

namespace pls::game {
namespace system::panel {

void InputPanel::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    MainPanel::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_90cdc908fbacdc4d_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("system.panel.InputPanel", flag, []() {

    });
}

void InputPanel::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_90cdc908fbacdc4d_slow(flag);
}

void InputPanel::create_init(pls::cs::Ref<InputPanel> self) {
    InputPanel::ensure_initialized();
    MainPanel::create_init(pls::cs::static_pointer_cast<MainPanel>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.panel.InputPanel.#ctor", game);
    {
    }
}

void InputPanel::create_init(pls::cs::Ref<InputPanel> self, pls::cs::String label,
                             pls::cs::String defaultText, pls::cs::Int32 maxLength, pls::cs::Int32 inputMode,
                             pls::cs::String itemName) {
    InputPanel::ensure_initialized();
    MainPanel::create_init(pls::cs::static_pointer_cast<MainPanel>(self), label, defaultText, maxLength,
                           inputMode, itemName);
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.panel.InputPanel.#ctor(System.String,System.String,System.Int32,System.Int32,System.String)",
        game);
    {
    }
}

// M:system.panel.InputPanel.#ctor
pls::cs::Ref<InputPanel> InputPanel::create() {
    InputPanel::ensure_initialized();
    auto self = pls::cs::make_ref<InputPanel>();
    InputPanel::create_init(self);
    return self;
}

// M:system.panel.InputPanel.#ctor(System.String,System.String,System.Int32,System.Int32,System.String)
pls::cs::Ref<InputPanel> InputPanel::create(pls::cs::String label, pls::cs::String defaultText,
                                            pls::cs::Int32 maxLength, pls::cs::Int32 inputMode,
                                            pls::cs::String itemName) {
    InputPanel::ensure_initialized();
    auto self = pls::cs::make_ref<InputPanel>();
    InputPanel::create_init(self, label, defaultText, maxLength, inputMode, itemName);
    return self;
}

// M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas)
pls::cs::String InputPanel::Show(pls::cs::Ref<pls::kairo::Canvas> canvas) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas)", game);
    {
        return MainPanel::Show(canvas);
    }
}

// M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)
void InputPanel::Show(pls::cs::Ref<pls::kairo::Canvas> canvas,
                      pls::cs::Delegate<void(pls::cs::String)> onFinishMethod) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.panel.InputPanel.Show(kairo.unity.ui.Canvas,kfw.panel.MainPanel.OnFinishMethod)", game);
    {
        MainPanel::Show(canvas, onFinishMethod);
    }
}
} // namespace system::panel
}
