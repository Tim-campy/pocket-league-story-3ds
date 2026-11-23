// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::surface {

struct TouchOption : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.surface.TouchOption", TouchOption, pls::cs::Object)
pls::cs::Int32 flag{};
pls::cs::Single dragGridW{};
pls::cs::Single dragGridH{};
pls::cs::Array<pls::cs::Int32> dragCell{};
pls::cs::Array<pls::cs::Int32> args{};
pls::cs::Array<pls::cs::Int32> margin{};
pls::cs::Int32 collisionBits{};
pls::cs::Array<pls::cs::Int32> extendValues{};
pls::cs::Array<pls::cs::Int32> keys{};
pls::cs::Array<pls::cs::Int32> keysBuf_{};
bool Lock{};
pls::cs::Int32 hasCount{};
static constexpr pls::cs::Int32 FLAG_THROUGH = 1;static constexpr pls::cs::Int32 FLAG_MIN_PRIORITY = 2;static constexpr pls::cs::Int32 FLAG_MAX_PRIORITY = 4;static constexpr pls::cs::Int32 FLAG_TOP_PRIORITY = 8;static constexpr pls::cs::Int32 FLAG_MARKER = 16;static constexpr pls::cs::Int32 FLAG_CANCEL_SCREEN_LIMIT = 32;static constexpr pls::cs::Int32 FLAG_CANCEL_COMPONENT = 64;static constexpr pls::cs::Int32 FLAG_TOUCH_RECT = 128;static constexpr pls::cs::Int32 FLAG_TOUCH_F_RECT = 256;static constexpr pls::cs::Int32 FLAG_SCROLL_BAR_ADD_MARGIN = 512;static constexpr pls::cs::Int32 FLAG_SAME_ID = 1024;static constexpr pls::cs::Int32 FLAG_TOUCH_LIGHT = 2048;
static void ensure_initialized();

static pls::cs::Ref<generated::kairo::unity::util::FastVector_2<pls::cs::Ref<TouchOption>>>& buffer();

static void create_init(pls::cs::Ref<TouchOption> self);

static void create_init(pls::cs::Ref<TouchOption> self,pls::cs::Ref<TouchOption> copy);

static pls::cs::Ref<TouchOption> create();

static pls::cs::Ref<TouchOption> create(pls::cs::Ref<TouchOption> copy);

void Init();

static pls::cs::Ref<TouchOption> Create();

static pls::cs::Ref<TouchOption> Create(pls::cs::Array<pls::cs::Int32> args);

static pls::cs::Ref<TouchOption> CreateInt(pls::cs::Int32 flag);

static pls::cs::Ref<TouchOption> Drag(pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 xcells,pls::cs::Int32 ycells,pls::cs::Int32 flag);

static pls::cs::Ref<TouchOption> Drag(pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 xcells,pls::cs::Int32 ycells);

static pls::cs::Ref<TouchOption> Drag(pls::cs::Int32 gridX,pls::cs::Int32 gridY,pls::cs::Int32 flag);

static pls::cs::Ref<TouchOption> Drag(pls::cs::Int32 gridX,pls::cs::Int32 gridY);

pls::cs::Ref<TouchOption> Flag(pls::cs::Int32 flag);

pls::cs::Ref<TouchOption> Margin(pls::cs::Int32 left,pls::cs::Int32 right,pls::cs::Int32 top,pls::cs::Int32 bottom);

pls::cs::Ref<TouchOption> ExtendValues(pls::cs::Int32 value);
};
} // namespace kairo::unity::surface
}
