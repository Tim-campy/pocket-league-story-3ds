// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::common::cfg::Config {
inline constexpr pls::cs::Int32 APPLITYPE_DOCOMO = 0;
inline constexpr pls::cs::Int32 APPLITYPE_SOFTBANK = 1;
inline constexpr pls::cs::Int32 APPLITYPE_ANDROID = 2;
inline constexpr pls::cs::Int32 APPLITYPE_IPHONE = 3;
inline constexpr pls::cs::Int32 BUILDTYPE_NORMAL = 0;
inline constexpr pls::cs::Int32 BUILDTYPE_AMAZON = 1;
inline constexpr pls::cs::Int32 BUILDTYPE_AU = 2;
inline constexpr pls::cs::Int32 BUILDTYPE_SUGO = 3;

pls::cs::Int32& checkCount_();

pls::cs::Int32& createImageArea_();

pls::cs::Int32& drawImageArea_();

pls::cs::Int32& drawImageCount_();

pls::cs::Int32& drawShapeCount_();

pls::cs::Int32& drawSourceImageArea_();

pls::cs::Int32& drawStringCount_();
} // namespace kairo::common::cfg::Config
}
