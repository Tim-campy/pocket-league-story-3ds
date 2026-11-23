// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::ui {

struct ResourceManager : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.ui.ResourceManager", ResourceManager, pls::cs::Object)
pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> img{};
pls::cs::Array<pls::cs::Ref<Seb>> seb{};
pls::cs::Array<pls::cs::Ref<pls::kairo::SoundBase>> sound{};
pls::cs::Array<pls::cs::Array<pls::cs::String>> list_{};
pls::cs::String directory_{};
pls::cs::Int32 rsId_{};
pls::cs::Int32 rcId_{};
pls::cs::Int32 loadNum_{};
pls::cs::Int32 loadCnt_{};
bool loaded_{};
pls::cs::Int32 recordNameBits_{};
static constexpr pls::cs::Int32 RES_IMAGE = 0;static constexpr pls::cs::Int32 RES_SEB = 1;static constexpr pls::cs::Int32 RES_SOUND = 2;static constexpr pls::cs::Int32 RES_FIGURE = 3;static constexpr pls::cs::Int32 RES_ACT_TABLE = 4;static constexpr pls::cs::Int32 RES_TEXTURE = 5;static constexpr pls::cs::Int32 RES_GROUP = 6;static constexpr pls::cs::Int32 SOUND_MLD = 0;static constexpr pls::cs::Int32 SOUND_MMF = 1;static constexpr pls::cs::Int32 SOUND_SPF = 2;static constexpr pls::cs::Int32 SOUND_MIDI = 3;static constexpr pls::cs::Int32 SOUND_WAVE = 4;static constexpr pls::cs::Int32 SOUND_JET = 5;static constexpr pls::cs::Int32 SOUND_OGG = 6;
static void ensure_initialized();

static pls::cs::List<ResourceManager_JarCache>& jarCache_();

static pls::cs::Array<pls::cs::String>& LIST_FILE();

static pls::cs::Array<pls::cs::String>& listFile_();

static pls::cs::Array<pls::cs::String>& SOUND_EXT();

static pls::cs::Int32& yieldTime_();

static void create_init(pls::cs::Ref<ResourceManager> self,pls::cs::String imgList,pls::cs::String sebList,pls::cs::String sndList,pls::cs::String figList,pls::cs::String actList,pls::cs::String texList,pls::cs::String grpList);

static pls::cs::Int32 get_YieldTime();

static pls::cs::Ref<pls::kairo::Image> LoadImage(pls::cs::Array<std::uint8_t> src,pls::kairo::Image::Format format,pls::kairo::Image::Filter filterMode);

static pls::cs::Ref<Seb> LoadSeb(pls::cs::Array<std::uint8_t> src);

static pls::cs::Ref<pls::kairo::SoundBase> LoadSound(pls::cs::String file,pls::cs::Int32 format);

static pls::cs::Ref<ResourceManager> create(pls::cs::String imgList,pls::cs::String sebList,pls::cs::String sndList,pls::cs::String figList,pls::cs::String actList,pls::cs::String texList,pls::cs::String grpList);

void _init();

void _init(bool keepFileList);

void Load(pls::cs::Array<std::uint8_t> data,pls::cs::Int32 m3dVer);

void LoadJarInflater(pls::cs::Ref<generated::kairo::unity::util::JarInflater> jar,pls::cs::Int32 m3dVer);

void LoadString(pls::cs::String directory,pls::cs::Int32 m3dVer);

void LoadReady(pls::cs::Ref<generated::kairo::unity::util::JarInflater> jar);

void LoadStart(pls::cs::Ref<generated::kairo::unity::util::JarInflater> jar,pls::cs::Int32 m3dVer);

bool CheckFileEffective(pls::cs::String file);

pls::cs::String GetFileName(pls::cs::String file);

void Dispose();

void Dispose(bool keepFileList);

void DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 seb,pls::cs::Int32 frame);

void DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 seb);

pls::cs::Ref<ResourceManager> SetRecordNameBits(pls::cs::Int32 bits);

static pls::cs::Ref<generated::kairo::unity::util::JarInflater> OpenJarCache(pls::cs::Int32 rsId,pls::cs::Int32 rcId);

static void CloseJarCache();
};
} // namespace kairo::unity::ui
}
