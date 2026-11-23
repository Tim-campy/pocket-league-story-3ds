// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui::Image {
inline constexpr pls::cs::Int32 OPT_REF = 0;
inline constexpr pls::cs::Int32 OPT_X = 1;
inline constexpr pls::cs::Int32 OPT_Y = 2;
inline constexpr pls::cs::Int32 OPT_SRCX = 3;
inline constexpr pls::cs::Int32 OPT_SRCY = 4;
inline constexpr pls::cs::Int32 OPT_SRCW = 5;
inline constexpr pls::cs::Int32 OPT_SRCH = 6;
inline constexpr pls::cs::Int32 OPT_END = 7;
inline constexpr pls::cs::Int32 OPTSEB_U = 0;
inline constexpr pls::cs::Int32 OPTSEB_V = 1;
inline constexpr pls::cs::Int32 OPTSEB_W = 2;
inline constexpr pls::cs::Int32 OPTSEB_H = 3;
inline constexpr pls::cs::Int32 OPTSEB_END = 4;
inline constexpr pls::cs::Int32 ALPHATYPE_OPAQUE = 0;
inline constexpr pls::cs::Int32 ALPHATYPE_ALPHATEST = 1;
inline constexpr pls::cs::Int32 ALPHATYPE_TRANSPARENT = 2;
inline constexpr pls::cs::Int32 ALPHATYPE_OPATRANS = 3;

pls::cs::Array<pls::cs::Int32> GetAreaSize(pls::cs::Array<std::uint8_t> data);

pls::cs::String GetFileFormat(pls::cs::Array<std::uint8_t> data);

pls::cs::Array<pls::cs::Int32> GetPaletteInfo(pls::cs::Array<std::uint8_t> data);

void LoadOptimize(pls::cs::Ref<pls::kairo::Image> self,pls::cs::Ref<generated::java::io::InputStream> stream,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> images);

void LoadOptimizeByteArray(pls::cs::Ref<pls::kairo::Image> self,pls::cs::Array<std::uint8_t> data,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> images);

pls::cs::Array<std::uint8_t> OverwritePaletteData(pls::cs::Array<std::uint8_t> image,pls::cs::Array<std::uint8_t> palette,pls::cs::Int32 imageOffset,pls::cs::Int32 paletteOffset,pls::cs::Int32 colors);

pls::cs::Array<std::uint8_t> OverwritePaletteData(pls::cs::Array<std::uint8_t> image,pls::cs::Array<std::uint8_t> palette);
} // namespace kairo::unity::ui::Image
}
