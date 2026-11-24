// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "game_generated_forward.hpp"

namespace pls::game {
namespace kairo::unity::ui::Font {
inline constexpr pls::cs::Int32 SIZE_SMALL = 0;
inline constexpr pls::cs::Int32 SIZE_MEDIUM = 1;
inline constexpr pls::cs::Int32 SIZE_LARGE = 2;
inline constexpr pls::cs::Int32 STYLE_PLAIN = 0;
inline constexpr pls::cs::Int32 STYLE_BOLD = 1;
inline constexpr pls::cs::Int32 STYLE_ITALIC = 2;
inline constexpr pls::cs::Int32 FACE_SYSTEM = 0;
inline constexpr pls::cs::Int32 FACE_MONOSPACE = 1;
inline constexpr pls::cs::Int32 FACE_PROPORTIONAL = 2;

void Draw(pls::cs::Ref<pls::kairo::Font> self, pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text,
          pls::cs::Single x, pls::cs::Single y);
} // namespace kairo::unity::ui::Font
}
