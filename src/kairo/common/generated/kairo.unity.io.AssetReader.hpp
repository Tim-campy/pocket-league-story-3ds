// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::io::AssetReader {
inline constexpr pls::cs::Int32 DPI_LDPI = 0;
inline constexpr pls::cs::Int32 DPI_MDPI = 1;
inline constexpr pls::cs::Int32 DPI_HDPI = 2;
inline constexpr pls::cs::Int32 DPI_XHDPI = 3;

void ensure_initialized();

pls::cs::String& country_();

pls::cs::Int32& dpi_();

pls::cs::Array<pls::cs::String>& DPI_FOLDERS();

bool& encrypt_();

pls::cs::Dictionary<pls::cs::String,bool>& filelist_();

pls::cs::String& language_();

pls::cs::Array<std::uint8_t> _getData(pls::cs::String file);

pls::cs::Ref<pls::kairo::NativeTextAsset> _getTextAsset(pls::cs::String file);

void _init();

bool Exist(pls::cs::String file);

pls::cs::Array<pls::cs::String> GetAccessFilesList(pls::cs::String file);

pls::cs::Array<std::uint8_t> GetData(pls::cs::String file);

pls::cs::Ref<java::io::InputStream> GetInputStream(pls::cs::String file);
} // namespace kairo::unity::io::AssetReader
}
