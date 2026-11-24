// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "main.WebBox.hpp"
#include "native.WebBoxPlugin.hpp"
#include "surface.GameView.hpp"

namespace pls::game {
namespace main {

void WebBox::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

static PLS_NOINLINE void cs_init_75beb3a42e16f9bd_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("main.WebBox", flag, []() {

    });
}

void WebBox::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_75beb3a42e16f9bd_slow(flag);
}

void WebBox::create_init(pls::cs::Ref<WebBox> self) {
    WebBox::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.WebBox.#ctor", game);
    {
        native::WebBoxPlugin::Create();
    }
}

// M:main.WebBox.#ctor
pls::cs::Ref<WebBox> WebBox::create() {
    WebBox::ensure_initialized();
    auto self = pls::cs::make_ref<WebBox>();
    WebBox::create_init(self);
    return self;
}

// M:main.WebBox.Create
pls::cs::Ref<WebBox> WebBox::Create() {
    WebBox::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.WebBox.Create", game);
    {
        {
            bool recoveredCondition_200 = native::WebBoxPlugin::Create();
            if (!recoveredCondition_200) {
                return pls::cs::Ref<WebBox>{};
            }
        }
        return WebBox::create();
    }
}

// M:main.WebBox.SetViewRect(System.Int32,System.Int32,System.Int32,System.Int32)
void WebBox::SetViewRect(pls::cs::Int32 x, pls::cs::Int32 y, pls::cs::Int32 width, pls::cs::Int32 height) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:main.WebBox.SetViewRect(System.Int32,System.Int32,System.Int32,System.Int32)", game);
    {
        SetViewRect(pls::cs::Ref<pls::kairo::Graphics>{}, x, y, width, height);
    }
}

// M:main.WebBox.SetViewRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void WebBox::SetViewRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                         pls::cs::Int32 width, pls::cs::Int32 height) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:main.WebBox.SetViewRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        x += PLS_API(require(g)->GetOriginX());
        y += PLS_API(require(g)->GetOriginY());
        pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
        x = ([&]() -> pls::cs::Int32 {
            auto cs_left = require(instance)->GetX();
            auto cs_right =
                pls::cs::to_int32((pls::cs::Single(x) * require(instance)->GetScaleRatio() / 100.0f + 0.01f));
            return cs_left + cs_right;
        }());
        y = ([&]() -> pls::cs::Int32 {
            auto cs_left = require(instance)->GetY();
            auto cs_right =
                pls::cs::to_int32((pls::cs::Single(y) * require(instance)->GetScaleRatio() / 100.0f + 0.01f));
            return cs_left + cs_right;
        }());
        width =
            pls::cs::to_int32((pls::cs::Single(width) * require(instance)->GetScaleRatio() / 100.0f + 0.01f));
        height = pls::cs::to_int32(
            (pls::cs::Single(height) * require(instance)->GetScaleRatio() / 100.0f + 0.01f));
        native::WebBoxPlugin::SetViewRect(x, y, width, height);
    }
}

// M:main.WebBox.LoadUrl(System.String)
void WebBox::LoadUrl(pls::cs::String url) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.WebBox.LoadUrl(System.String)", game);
    {
        native::WebBoxPlugin::LoadUrl(url);
    }
}

// M:main.WebBox.Dispose
void WebBox::Dispose() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.WebBox.Dispose", game);
    {
        native::WebBoxPlugin::Dispose();
    }
}

// M:main.WebBox.Visible
bool WebBox::Visible() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.WebBox.Visible", game);
    {
        return native::WebBoxPlugin::Visible();
    }
}

// M:main.WebBox.SetVisible(System.Boolean)
void WebBox::SetVisible(bool visible) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:main.WebBox.SetVisible(System.Boolean)", game);
    {
        native::WebBoxPlugin::SetVisible(visible);
    }
}
} // namespace main
}
