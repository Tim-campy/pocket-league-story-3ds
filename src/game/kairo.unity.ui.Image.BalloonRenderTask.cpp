// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.ui.Balloon.hpp"
#include "kairo.unity.ui.Image.BalloonRenderTask.hpp"

namespace pls::game {
namespace kairo::unity::ui {

void Image_BalloonRenderTask::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::trace_value(Balloon, visitor);
    pls::cs::trace_value(Offscreen, visitor);
}

static PLS_NOINLINE void cs_init_9896b6da0c305f81_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ui.Image.BalloonRenderTask", flag, []() {

    });
}

void Image_BalloonRenderTask::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_9896b6da0c305f81_slow(flag);
}

void Image_BalloonRenderTask::create_init(Image_BalloonRenderTask* self, pls::cs::Ref<ui::Balloon> balloon,
                                          pls::cs::Single x, pls::cs::Single y,
                                          pls::cs::Ref<pls::kairo::Offscreen> offscreen) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Image.BalloonRenderTask.#ctor(kairo.unity.ui.Balloon,System.Single,System.Single,kairo.unity.graphics.Offscreen)",
        kairo);
    {
        {
            auto cs_target = self;
            auto cs_value = Balloon::create(balloon);
            require(cs_target)->Balloon = cs_value;
        }
        {
            auto cs_target = self;
            pls::cs::Single cs_value = x;
            require(cs_target)->X = cs_value;
        }
        {
            auto cs_target = self;
            pls::cs::Single cs_value = y;
            require(cs_target)->Y = cs_value;
        }
        {
            auto cs_target = self;
            auto cs_value = offscreen;
            require(cs_target)->Offscreen = cs_value;
        }
    }
}

// M:kairo.unity.ui.Image.BalloonRenderTask.#ctor(kairo.unity.ui.Balloon,System.Single,System.Single,kairo.unity.graphics.Offscreen)
Image_BalloonRenderTask Image_BalloonRenderTask::create(pls::cs::Ref<ui::Balloon> balloon, pls::cs::Single x,
                                                        pls::cs::Single y,
                                                        pls::cs::Ref<pls::kairo::Offscreen> offscreen) {
    Image_BalloonRenderTask::ensure_initialized();
    Image_BalloonRenderTask self{};
    Image_BalloonRenderTask::create_init(&self, balloon, x, y, offscreen);
    return self;
}
} // namespace kairo::unity::ui
}
