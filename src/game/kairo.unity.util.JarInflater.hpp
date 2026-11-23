// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::util::JarInflater {
inline constexpr std::int8_t FLAG_DEFLATE = std::int8_t(1);

pls::cs::Ref<generated::kairo::unity::util::JarInflater> create(pls::cs::String directory);

void create_init(pls::cs::Ref<generated::kairo::unity::util::JarInflater> self,pls::cs::String directory);

bool CheckResourceAsStream(pls::cs::Ref<generated::kairo::unity::util::JarInflater> self,pls::cs::String file);

bool Exist(pls::cs::Ref<generated::kairo::unity::util::JarInflater> self,pls::cs::String name);

pls::cs::String GetDirectory(pls::cs::Ref<generated::kairo::unity::util::JarInflater> self);

pls::cs::Array<pls::cs::String> GetFiles(pls::cs::Ref<generated::kairo::unity::util::JarInflater> self);
} // namespace kairo::unity::util::JarInflater
}
