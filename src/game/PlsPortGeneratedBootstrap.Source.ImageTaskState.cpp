// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "PlsPortGeneratedBootstrap.Source.ImageTaskState.hpp"
#include "kairo.unity.ui.Image.BalloonRenderTask.hpp"
#include "kairo.unity.ui.Image.TextRenderTask.hpp"
#include "kairo.unity.ui.Image.TouchTask.hpp"

namespace pls::game {
namespace PlsPortGeneratedBootstrap {

void Source_ImageTaskState::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(texts, visitor);
    pls::cs::trace_value(balloons, visitor);
    pls::cs::trace_value(touches, visitor);
}

static PLS_NOINLINE void cs_init_57e2b41d1ee1c149_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("PlsPortGeneratedBootstrap.Source.ImageTaskState", flag, []() {

    });
}

void Source_ImageTaskState::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_57e2b41d1ee1c149_slow(flag);
}

void Source_ImageTaskState::create_init(pls::cs::Ref<Source_ImageTaskState> self) {
    Source_ImageTaskState::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:PlsPortGeneratedBootstrap.Source.ImageTaskState.#ctor", kairo);
    {
    }
}

// M:PlsPortGeneratedBootstrap.Source.ImageTaskState.#ctor
pls::cs::Ref<Source_ImageTaskState> Source_ImageTaskState::create() {
    Source_ImageTaskState::ensure_initialized();
    auto self = pls::cs::make_ref<Source_ImageTaskState>();
    Source_ImageTaskState::create_init(self);
    return self;
}
} // namespace PlsPortGeneratedBootstrap
}
