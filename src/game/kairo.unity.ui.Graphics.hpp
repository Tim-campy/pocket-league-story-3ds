// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui::Graphics {
inline constexpr pls::cs::Int32 AQUA = -16711681;
inline constexpr pls::cs::Int32 BLACK = -16777216;
inline constexpr pls::cs::Int32 BLUE = -16776961;
inline constexpr pls::cs::Int32 FUCHSIA = -65281;
inline constexpr pls::cs::Int32 GRAY = -8355712;
inline constexpr pls::cs::Int32 GREEN = -16744448;
inline constexpr pls::cs::Int32 LIME = -16711936;
inline constexpr pls::cs::Int32 MAROON = -8388608;
inline constexpr pls::cs::Int32 NAVY = -16777088;
inline constexpr pls::cs::Int32 OLIVE = -8355840;
inline constexpr pls::cs::Int32 PURPLE = -8388480;
inline constexpr pls::cs::Int32 RED = -65536;
inline constexpr pls::cs::Int32 SILVER = -4144960;
inline constexpr pls::cs::Int32 TEAL = -16744320;
inline constexpr pls::cs::Int32 WHITE = -1;
inline constexpr pls::cs::Int32 YELLOW = -256;
inline constexpr pls::cs::Int32 FLIP_NONE = 0;
inline constexpr pls::cs::Int32 FLIP_HORIZONTAL = 1;
inline constexpr pls::cs::Int32 FLIP_VERTICAL = 2;
inline constexpr pls::cs::Int32 FLIP_ROTATE = 3;
inline constexpr pls::cs::Int32 FLIP_ROTATE_LEFT = 4;
inline constexpr pls::cs::Int32 FLIP_ROTATE_RIGHT = 5;
inline constexpr pls::cs::Int32 ANCHOR_LEFT = 1;
inline constexpr pls::cs::Int32 ANCHOR_CENTER = 2;
inline constexpr pls::cs::Int32 ANCHOR_RIGHT = 4;
inline constexpr pls::cs::Int32 ANCHOR_TOP = 16;
inline constexpr pls::cs::Int32 ANCHOR_MIDDLE = 32;
inline constexpr pls::cs::Int32 ANCHOR_BOTTOM = 64;
inline constexpr pls::cs::Int32 OP_REPL = 0;
inline constexpr pls::cs::Int32 OP_ADD = 1;
inline constexpr pls::cs::Int32 OP_SUB = 2;
inline constexpr pls::cs::Int32 BLEND_NONE = 0;
inline constexpr pls::cs::Int32 BLEND_COLOR = 1;
inline constexpr pls::cs::Int32 BLEND_LIGHT = 2;
inline constexpr pls::cs::Int32 BLEND_GRAYSCALE = 3;

void DrawRect2(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::Single x,pls::cs::Single y,pls::cs::Single width,pls::cs::Single height);

void DrawStringTextFormatStringFloat(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::Ref<TextFormat> lf,pls::cs::String str,pls::cs::Single x,pls::cs::Single y);

void DrawString(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::Int64 v,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor);

void DrawString(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::Int64 v,pls::cs::Single x,pls::cs::Single y);

void DrawString2(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::Ref<TextFormat> lf,pls::cs::String str,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor);

void DrawString2(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::String str,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 anchor);

void DrawString2(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::String str,pls::cs::Single x,pls::cs::Single y);

void DrawStringBold(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::Ref<TextFormat> lf,pls::cs::String str,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 color,pls::cs::Int32 anchor);

void DrawStringBold(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::String str,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 color,pls::cs::Int32 anchor);

void DrawStringBold2(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::Ref<TextFormat> lf,pls::cs::String str,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 color,pls::cs::Int32 anchor);

void DrawText(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::Ref<TextFormat> lf,pls::cs::String str,pls::cs::Single x,pls::cs::Single y,pls::cs::Single width,pls::cs::Int32 anchor);

void DrawText(pls::cs::Ref<pls::kairo::Graphics> self,pls::cs::String str,pls::cs::Single x,pls::cs::Single y,pls::cs::Single width,pls::cs::Int32 anchor);

pls::cs::Int32 GetColorOfName(pls::cs::Int32 name);

pls::cs::Int32 GetLineSpace();
} // namespace kairo::unity::ui::Graphics
}
