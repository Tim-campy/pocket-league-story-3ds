// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
namespace pls::game {
namespace cfg {

struct MyConfig : generated::kairo::common::cfg::Config {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("cfg.MyConfig", MyConfig, generated::kairo::common::cfg::Config)

static void ensure_initialized();

static pls::cs::Int32& AD_SIZE();

static pls::cs::String& AD_UNIT_ID();

static bool& ADMOB_ENABLE();

static bool& AMAZON();

static pls::cs::String& APPLI_NAME();

static pls::cs::Int32& APPLI_TYPE();

static pls::cs::String& BASE64_PUBLIC_KEY();

static bool& COUNT_ENABLE();

static bool& DEBUG();

static bool& DEBUG_CMD();

static bool& DEBUG_UID();

static bool& FULLSCREEN();

static bool& GOOGLE_PLAY();

static bool& ICLOUD();

static pls::cs::Int32& LANGUAGE();

static bool& LOCALIZE_FONT_SCALE();

static bool& LOWDEPTH_TEST();

static pls::cs::String& OUTPUT_CSV_NAME();

static pls::cs::Int32& PID();

static bool& PRINT();

static bool& PTW();

static bool& REGIST_ENABLE();

static bool& SHOW_DEBUG();

static bool& SHOW_FPS();

static bool& SHOW_MEM();

static bool& SMART_PASS();

static bool& TRACE_URL();

static bool& TRIAL_VERSION();

static pls::cs::String& UID();

static bool& UNITY_EDITOR();

static bool& USE_UNUSE_CHECK();

static void create_init(pls::cs::Ref<MyConfig> self);

static pls::cs::Ref<MyConfig> create();
};
} // namespace cfg
}
