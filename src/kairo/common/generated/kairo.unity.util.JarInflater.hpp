// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util {

struct JarInflater : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.util.JarInflater", JarInflater, pls::cs::Object)
pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<JarInflater_FileInfo>> files_{};
pls::cs::Array<std::uint8_t> data_{};
pls::cs::String directory_{};
static constexpr std::int8_t FLAG_DEFLATE = std::int8_t(1);
static void ensure_initialized();

static void create_init(pls::cs::Ref<JarInflater> self,pls::cs::Array<std::uint8_t> data);

static pls::cs::Ref<JarInflater> create(pls::cs::Array<std::uint8_t> data);

void _load(pls::cs::Ref<java::io::InputStream> stream);

void Close();

pls::cs::Ref<java::io::InputStream> GetInputStream(pls::cs::String name);

pls::cs::Int64 GetSize(pls::cs::String name);

pls::cs::Array<std::uint8_t> GetData(pls::cs::String name);

pls::cs::Ref<JarInflater_FileInfo> _search(pls::cs::String name);

pls::cs::Ref<java::io::InputStream> GetResourceAsStream(pls::cs::String file);

pls::cs::String ConvertExtension(pls::cs::String file);
};
} // namespace kairo::unity::util
}
