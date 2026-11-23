// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::common::cfg {

struct Config : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.common.cfg.Config", Config, pls::cs::Object)
static constexpr pls::cs::Int32 APPLITYPE_DOCOMO = 0;static constexpr pls::cs::Int32 APPLITYPE_SOFTBANK = 1;static constexpr pls::cs::Int32 APPLITYPE_ANDROID = 2;static constexpr pls::cs::Int32 APPLITYPE_IPHONE = 3;static constexpr pls::cs::Int32 BUILDTYPE_NORMAL = 0;static constexpr pls::cs::Int32 BUILDTYPE_AMAZON = 1;static constexpr pls::cs::Int32 BUILDTYPE_AU = 2;static constexpr pls::cs::Int32 BUILDTYPE_SUGO = 3;
static void ensure_initialized();

static pls::cs::Int32& AD_SIZE();

static pls::cs::String& AD_UNIT_ID();

static bool& ADMOB_ENABLE();

static pls::cs::String& APPLI_NAME();

static pls::cs::Int32& APPLI_TYPE();

static pls::cs::String& BASE64_PUBLIC_KEY();

static pls::cs::Int32& BUILD_TYPE();

static pls::cs::String& CGI_COMMON_QUERY();

static pls::cs::Array<bool>& checkVRAM_result();

static bool& COUNT_ENABLE();

static bool& DEBUG();

static bool& DEBUG_CMD();

static bool& DEBUG_CMD_DEV();

static bool& DEBUG_FAST();

static bool& DEBUG_MONEYUP();

static bool& DEBUG_SEND_SC();

static bool& DEBUG_SLOW();

static bool& DEBUG_UID();

static bool& FAST_BRIGHTNESS();

static bool& FPS_UNLIMITED();

static bool& FULLSCREEN();

static bool& ICLOUD();

static bool& LANDSCAPE_GAME();

static pls::cs::Int32& LANGUAGE();

static bool& LOCALIZE_FONT_SCALE();

static bool& LOWDEPTH_TEST();

static bool& MUTE_SE();

static bool& NUMPADCONTROL();

static pls::cs::String& OUTPUT_CSV_NAME();

static pls::cs::Int32& PID();

static pls::cs::String& PID_NAME();

static bool& POST_MARK();

static bool& PRINT();

static bool& PTW();

static bool& REGIST_ENABLE();

static bool& SHOW_DEBUG();

static bool& SHOW_FPS();

static bool& SHOW_GUIDEPOINT();

static bool& SHOW_MEM();

static bool& TRACE_URL();

static bool& TRIAL_VERSION();

static pls::cs::String& UID();

static bool& UNITY_EDITOR();

static pls::cs::String& URL_DATA();

static pls::cs::String& URL_GET_SCORE();

static pls::cs::String& URL_PACKAGE();

static pls::cs::String& URL_PHP();

static pls::cs::String& URL_RANKING();

static pls::cs::String& URL_REGIST();

static pls::cs::String& URL_REGIST_SCORE();

static pls::cs::String& URL_SITE();

static pls::cs::String& URL_SP();

static pls::cs::String& URL_VERSIONUP();

static bool& USE_HEAP_STORAGE();

static bool& USE_MEMORY();

static bool& USE_MEXA_UNIT1();

static bool& USE_UNUSE_CHECK();

static void create_init(pls::cs::Ref<Config> self);

static pls::cs::Ref<Config> create();

static void Init(pls::cs::String sourceUrl);

static pls::cs::String ConvertExtension(pls::cs::String file);
};
} // namespace kairo::common::cfg
}
