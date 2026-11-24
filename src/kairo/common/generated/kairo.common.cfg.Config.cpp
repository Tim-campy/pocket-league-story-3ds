// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.StringEx.hpp"
#include "kairo.common.cfg.Config.hpp"
#include "kairo.unity.util.Language.hpp"
#include "kairo.unity.util.StringUtil.hpp"
using BoolArray = pls::cs::Array<bool>;

namespace pls::generated {
namespace kairo::common::cfg {

void Config::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

static pls::cs::Int32 Config_AD_SIZE_storage{};

static pls::cs::String Config_AD_UNIT_ID_storage{};

static bool Config_ADMOB_ENABLE_storage{};

static pls::cs::String Config_APPLI_NAME_storage{};

static pls::cs::Int32 Config_APPLI_TYPE_storage{};

static pls::cs::String Config_BASE64_PUBLIC_KEY_storage{};

static pls::cs::Int32 Config_BUILD_TYPE_storage{};

static pls::cs::String Config_CGI_COMMON_QUERY_storage{};

static BoolArray Config_checkVRAM_result_storage{};

static bool Config_COUNT_ENABLE_storage{};

static bool Config_DEBUG_storage{};

static bool Config_DEBUG_CMD_storage{};

static bool Config_DEBUG_CMD_DEV_storage{};

static bool Config_DEBUG_FAST_storage{};

static bool Config_DEBUG_MONEYUP_storage{};

static bool Config_DEBUG_SEND_SC_storage{};

static bool Config_DEBUG_SLOW_storage{};

static bool Config_DEBUG_UID_storage{};

static bool Config_FAST_BRIGHTNESS_storage{};

static bool Config_FPS_UNLIMITED_storage{};

static bool Config_FULLSCREEN_storage{};

static bool Config_ICLOUD_storage{};

static bool Config_LANDSCAPE_GAME_storage{};

static pls::cs::Int32 Config_LANGUAGE_storage{};

static bool Config_LOCALIZE_FONT_SCALE_storage{};

static bool Config_LOWDEPTH_TEST_storage{};

static bool Config_MUTE_SE_storage{};

static bool Config_NUMPADCONTROL_storage{};

static pls::cs::String Config_OUTPUT_CSV_NAME_storage{};

static pls::cs::Int32 Config_PID_storage{};

static pls::cs::String Config_PID_NAME_storage{};

static bool Config_POST_MARK_storage{};

static bool Config_PRINT_storage{};

static bool Config_PTW_storage{};

static bool Config_REGIST_ENABLE_storage{};

static bool Config_SHOW_DEBUG_storage{};

static bool Config_SHOW_FPS_storage{};

static bool Config_SHOW_GUIDEPOINT_storage{};

static bool Config_SHOW_MEM_storage{};

static bool Config_TRACE_URL_storage{};

static bool Config_TRIAL_VERSION_storage{};

static pls::cs::String Config_UID_storage{};

static bool Config_UNITY_EDITOR_storage{};

static pls::cs::String Config_URL_DATA_storage{};

static pls::cs::String Config_URL_GET_SCORE_storage{};

static pls::cs::String Config_URL_PACKAGE_storage{};

static pls::cs::String Config_URL_PHP_storage{};

static pls::cs::String Config_URL_RANKING_storage{};

static pls::cs::String Config_URL_REGIST_storage{};

static pls::cs::String Config_URL_REGIST_SCORE_storage{};

static pls::cs::String Config_URL_SITE_storage{};

static pls::cs::String Config_URL_SP_storage{};

static pls::cs::String Config_URL_VERSIONUP_storage{};

static bool Config_USE_HEAP_STORAGE_storage{};

static bool Config_USE_MEMORY_storage{};

static bool Config_USE_MEXA_UNIT1_storage{};

static bool Config_USE_UNUSE_CHECK_storage{};

static PLS_NOINLINE void cs_init_e7d772862db62924_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(Config_AD_SIZE_storage, visitor);
        pls::cs::trace_value(Config_AD_UNIT_ID_storage, visitor);
        pls::cs::trace_value(Config_ADMOB_ENABLE_storage, visitor);
        pls::cs::trace_value(Config_APPLI_NAME_storage, visitor);
        pls::cs::trace_value(Config_APPLI_TYPE_storage, visitor);
        pls::cs::trace_value(Config_BASE64_PUBLIC_KEY_storage, visitor);
        pls::cs::trace_value(Config_BUILD_TYPE_storage, visitor);
        pls::cs::trace_value(Config_CGI_COMMON_QUERY_storage, visitor);
        pls::cs::trace_value(Config_checkVRAM_result_storage, visitor);
        pls::cs::trace_value(Config_COUNT_ENABLE_storage, visitor);
        pls::cs::trace_value(Config_DEBUG_storage, visitor);
        pls::cs::trace_value(Config_DEBUG_CMD_storage, visitor);
        pls::cs::trace_value(Config_DEBUG_CMD_DEV_storage, visitor);
        pls::cs::trace_value(Config_DEBUG_FAST_storage, visitor);
        pls::cs::trace_value(Config_DEBUG_MONEYUP_storage, visitor);
        pls::cs::trace_value(Config_DEBUG_SEND_SC_storage, visitor);
        pls::cs::trace_value(Config_DEBUG_SLOW_storage, visitor);
        pls::cs::trace_value(Config_DEBUG_UID_storage, visitor);
        pls::cs::trace_value(Config_FAST_BRIGHTNESS_storage, visitor);
        pls::cs::trace_value(Config_FPS_UNLIMITED_storage, visitor);
        pls::cs::trace_value(Config_FULLSCREEN_storage, visitor);
        pls::cs::trace_value(Config_ICLOUD_storage, visitor);
        pls::cs::trace_value(Config_LANDSCAPE_GAME_storage, visitor);
        pls::cs::trace_value(Config_LANGUAGE_storage, visitor);
        pls::cs::trace_value(Config_LOCALIZE_FONT_SCALE_storage, visitor);
        pls::cs::trace_value(Config_LOWDEPTH_TEST_storage, visitor);
        pls::cs::trace_value(Config_MUTE_SE_storage, visitor);
        pls::cs::trace_value(Config_NUMPADCONTROL_storage, visitor);
        pls::cs::trace_value(Config_OUTPUT_CSV_NAME_storage, visitor);
        pls::cs::trace_value(Config_PID_storage, visitor);
        pls::cs::trace_value(Config_PID_NAME_storage, visitor);
        pls::cs::trace_value(Config_POST_MARK_storage, visitor);
        pls::cs::trace_value(Config_PRINT_storage, visitor);
        pls::cs::trace_value(Config_PTW_storage, visitor);
        pls::cs::trace_value(Config_REGIST_ENABLE_storage, visitor);
        pls::cs::trace_value(Config_SHOW_DEBUG_storage, visitor);
        pls::cs::trace_value(Config_SHOW_FPS_storage, visitor);
        pls::cs::trace_value(Config_SHOW_GUIDEPOINT_storage, visitor);
        pls::cs::trace_value(Config_SHOW_MEM_storage, visitor);
        pls::cs::trace_value(Config_TRACE_URL_storage, visitor);
        pls::cs::trace_value(Config_TRIAL_VERSION_storage, visitor);
        pls::cs::trace_value(Config_UID_storage, visitor);
        pls::cs::trace_value(Config_UNITY_EDITOR_storage, visitor);
        pls::cs::trace_value(Config_URL_DATA_storage, visitor);
        pls::cs::trace_value(Config_URL_GET_SCORE_storage, visitor);
        pls::cs::trace_value(Config_URL_PACKAGE_storage, visitor);
        pls::cs::trace_value(Config_URL_PHP_storage, visitor);
        pls::cs::trace_value(Config_URL_RANKING_storage, visitor);
        pls::cs::trace_value(Config_URL_REGIST_storage, visitor);
        pls::cs::trace_value(Config_URL_REGIST_SCORE_storage, visitor);
        pls::cs::trace_value(Config_URL_SITE_storage, visitor);
        pls::cs::trace_value(Config_URL_SP_storage, visitor);
        pls::cs::trace_value(Config_URL_VERSIONUP_storage, visitor);
        pls::cs::trace_value(Config_USE_HEAP_STORAGE_storage, visitor);
        pls::cs::trace_value(Config_USE_MEMORY_storage, visitor);
        pls::cs::trace_value(Config_USE_MEXA_UNIT1_storage, visitor);
        pls::cs::trace_value(Config_USE_UNUSE_CHECK_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.common.cfg.Config", flag, []() {
        Config_APPLI_TYPE_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.APPLI_TYPE", [&]() { return 2; });
        Config_BUILD_TYPE_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.BUILD_TYPE", [&]() { return 0; });
        Config_DEBUG_storage = pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.DEBUG",
                                                                        [&]() { return true; });
        Config_PTW_storage = pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.PTW",
                                                                      [&]() { return false; });
        Config_POST_MARK_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.POST_MARK", [&]() { return true; });
        Config_USE_HEAP_STORAGE_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.USE_HEAP_STORAGE", [&]() { return true; });
        Config_USE_MEMORY_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.USE_MEMORY", [&]() { return true; });
        Config_USE_MEXA_UNIT1_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.USE_MEXA_UNIT1", [&]() { return true; });
        Config_COUNT_ENABLE_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.COUNT_ENABLE", [&]() { return (!Config::DEBUG() ? false : true); });
        Config_PRINT_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.PRINT", [&]() { return (!Config::DEBUG() ? false : true); });
        Config_USE_UNUSE_CHECK_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.USE_UNUSE_CHECK", [&]() {
                return (!Config::DEBUG() ? false : !Config::PTW());
            });
        Config_NUMPADCONTROL_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.NUMPADCONTROL", [&]() { return (!Config::DEBUG() ? true : false); });
        Config_FAST_BRIGHTNESS_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.FAST_BRIGHTNESS", [&]() { return true; });
        Config_LANGUAGE_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.LANGUAGE", [&]() { return -1; });
        Config_BASE64_PUBLIC_KEY_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.BASE64_PUBLIC_KEY", [&]() {
                return literal(
                    u"MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAmp4nkTi9cXIfx3bxAtIiFKYtNPnXzkx01PkfcYaRHKsZYxsOfGwxoJtlZfgovAgn5m+OsX7d0xrGON+4/fYDgqw4Pfz8Gg//g0DV3JJ202wh07OykycemKTR7DXipiXnehEIajW8hX5gIFqFX730RBcDlF0aQAEMM7mYQEw/ZMxXh0dAwC3j1AWfgAzbx1gym86Mj1tTc2p0L/GO6WFKV5NY4cIQ45AX5Z85GELL52vlpFZ4nTy90Hsy3yguAVQ9SoXbE/cEu8139Cn2SjNoykiL3EKqUVx3ux///s0e1kqJcpWkm5mV/8VlsEdFJWOv8QY3lWU3bKLp7KdeYkbDQQIDAQAB");
            });
        Config_UNITY_EDITOR_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.UNITY_EDITOR", [&]() { return true; });
        Config_AD_UNIT_ID_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.AD_UNIT_ID", [&]() {
                return literal(u"ca-app-pub-4399146668561085/7311196364");
            });
        Config_AD_SIZE_storage = pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.AD_SIZE",
                                                                          [&]() { return 0; });
        Config_FULLSCREEN_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.FULLSCREEN", [&]() { return false; });
        Config_ICLOUD_storage = pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.ICLOUD",
                                                                         [&]() { return false; });
        Config_LOCALIZE_FONT_SCALE_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.LOCALIZE_FONT_SCALE", [&]() { return false; });
        Config_LOWDEPTH_TEST_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.LOWDEPTH_TEST", [&]() { return false; });
        Config_LANDSCAPE_GAME_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.LANDSCAPE_GAME", [&]() { return false; });
        Config_TRACE_URL_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.TRACE_URL", [&]() { return true; });
        Config_DEBUG_UID_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.DEBUG_UID", [&]() { return true; });
        Config_UID_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.UID", [&]() { return literal(u"01NCzWojPdaL"); });
        Config_REGIST_ENABLE_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.REGIST_ENABLE", [&]() { return false; });
        Config_TRIAL_VERSION_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.TRIAL_VERSION", [&]() { return false; });
        Config_ADMOB_ENABLE_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.ADMOB_ENABLE", [&]() { return false; });
        Config_DEBUG_CMD_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.DEBUG_CMD", [&]() { return (!Config::DEBUG() ? false : true); });
        Config_DEBUG_SEND_SC_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.DEBUG_SEND_SC", [&]() { return (!Config::DEBUG() ? false : false); });
        Config_DEBUG_CMD_DEV_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.DEBUG_CMD_DEV", [&]() { return (!Config::DEBUG() ? false : true); });
        Config_SHOW_DEBUG_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.SHOW_DEBUG", [&]() {
                return (!Config::DEBUG() ? false : !Config::PTW());
            });
        Config_SHOW_FPS_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.SHOW_FPS", [&]() {
                return (!Config::DEBUG() ? false : !Config::PTW());
            });
        Config_SHOW_MEM_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.SHOW_MEM", [&]() { return (!Config::DEBUG() ? false : false); });
        Config_MUTE_SE_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.MUTE_SE", [&]() {
                return (!Config::DEBUG() ? false : !Config::PTW());
            });
        Config_FPS_UNLIMITED_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.FPS_UNLIMITED", [&]() { return (!Config::DEBUG() ? false : false); });
        Config_SHOW_GUIDEPOINT_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.SHOW_GUIDEPOINT", [&]() {
                return (!Config::DEBUG() ? false : !Config::PTW());
            });
        Config_DEBUG_SLOW_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.DEBUG_SLOW", [&]() {
                return (!Config::DEBUG() ? false : !Config::PTW());
            });
        Config_DEBUG_FAST_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.DEBUG_FAST", [&]() { return (!Config::DEBUG() ? false : true); });
        Config_DEBUG_MONEYUP_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.DEBUG_MONEYUP", [&]() {
                return (!Config::DEBUG() ? false : !Config::PTW());
            });
        Config_PID_storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.common.cfg.Config.PID", [&]() { return 25; });
        Config_PID_NAME_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.PID_NAME", [&]() { return literal(u"cGlk"); });
        Config_APPLI_NAME_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.APPLI_NAME", [&]() { return literal(u"ks_android_ja"); });
        Config_OUTPUT_CSV_NAME_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.OUTPUT_CSV_NAME", [&]() { return literal(u"output"); });
        Config_checkVRAM_result_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.common.cfg.Config.checkVRAM_result", [&]() { return BoolArray{}; });
    });
}

void Config::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_e7d772862db62924_slow(flag);
}

pls::cs::Int32& Config::AD_SIZE() {
    Config::ensure_initialized();
    return Config_AD_SIZE_storage;
}

pls::cs::String& Config::AD_UNIT_ID() {
    Config::ensure_initialized();
    return Config_AD_UNIT_ID_storage;
}

bool& Config::ADMOB_ENABLE() {
    Config::ensure_initialized();
    return Config_ADMOB_ENABLE_storage;
}

pls::cs::String& Config::APPLI_NAME() {
    Config::ensure_initialized();
    return Config_APPLI_NAME_storage;
}

pls::cs::Int32& Config::APPLI_TYPE() {
    Config::ensure_initialized();
    return Config_APPLI_TYPE_storage;
}

pls::cs::String& Config::BASE64_PUBLIC_KEY() {
    Config::ensure_initialized();
    return Config_BASE64_PUBLIC_KEY_storage;
}

pls::cs::Int32& Config::BUILD_TYPE() {
    Config::ensure_initialized();
    return Config_BUILD_TYPE_storage;
}

pls::cs::String& Config::CGI_COMMON_QUERY() {
    Config::ensure_initialized();
    return Config_CGI_COMMON_QUERY_storage;
}

BoolArray& Config::checkVRAM_result() {
    Config::ensure_initialized();
    return Config_checkVRAM_result_storage;
}

bool& Config::COUNT_ENABLE() {
    Config::ensure_initialized();
    return Config_COUNT_ENABLE_storage;
}

bool& Config::DEBUG() {
    Config::ensure_initialized();
    return Config_DEBUG_storage;
}

bool& Config::DEBUG_CMD() {
    Config::ensure_initialized();
    return Config_DEBUG_CMD_storage;
}

bool& Config::DEBUG_CMD_DEV() {
    Config::ensure_initialized();
    return Config_DEBUG_CMD_DEV_storage;
}

bool& Config::DEBUG_FAST() {
    Config::ensure_initialized();
    return Config_DEBUG_FAST_storage;
}

bool& Config::DEBUG_MONEYUP() {
    Config::ensure_initialized();
    return Config_DEBUG_MONEYUP_storage;
}

bool& Config::DEBUG_SEND_SC() {
    Config::ensure_initialized();
    return Config_DEBUG_SEND_SC_storage;
}

bool& Config::DEBUG_SLOW() {
    Config::ensure_initialized();
    return Config_DEBUG_SLOW_storage;
}

bool& Config::DEBUG_UID() {
    Config::ensure_initialized();
    return Config_DEBUG_UID_storage;
}

bool& Config::FAST_BRIGHTNESS() {
    Config::ensure_initialized();
    return Config_FAST_BRIGHTNESS_storage;
}

bool& Config::FPS_UNLIMITED() {
    Config::ensure_initialized();
    return Config_FPS_UNLIMITED_storage;
}

bool& Config::FULLSCREEN() {
    Config::ensure_initialized();
    return Config_FULLSCREEN_storage;
}

bool& Config::ICLOUD() {
    Config::ensure_initialized();
    return Config_ICLOUD_storage;
}

bool& Config::LANDSCAPE_GAME() {
    Config::ensure_initialized();
    return Config_LANDSCAPE_GAME_storage;
}

pls::cs::Int32& Config::LANGUAGE() {
    Config::ensure_initialized();
    return Config_LANGUAGE_storage;
}

bool& Config::LOCALIZE_FONT_SCALE() {
    Config::ensure_initialized();
    return Config_LOCALIZE_FONT_SCALE_storage;
}

bool& Config::LOWDEPTH_TEST() {
    Config::ensure_initialized();
    return Config_LOWDEPTH_TEST_storage;
}

bool& Config::MUTE_SE() {
    Config::ensure_initialized();
    return Config_MUTE_SE_storage;
}

bool& Config::NUMPADCONTROL() {
    Config::ensure_initialized();
    return Config_NUMPADCONTROL_storage;
}

pls::cs::String& Config::OUTPUT_CSV_NAME() {
    Config::ensure_initialized();
    return Config_OUTPUT_CSV_NAME_storage;
}

pls::cs::Int32& Config::PID() {
    Config::ensure_initialized();
    return Config_PID_storage;
}

pls::cs::String& Config::PID_NAME() {
    Config::ensure_initialized();
    return Config_PID_NAME_storage;
}

bool& Config::POST_MARK() {
    Config::ensure_initialized();
    return Config_POST_MARK_storage;
}

bool& Config::PRINT() {
    Config::ensure_initialized();
    return Config_PRINT_storage;
}

bool& Config::PTW() {
    Config::ensure_initialized();
    return Config_PTW_storage;
}

bool& Config::REGIST_ENABLE() {
    Config::ensure_initialized();
    return Config_REGIST_ENABLE_storage;
}

bool& Config::SHOW_DEBUG() {
    Config::ensure_initialized();
    return Config_SHOW_DEBUG_storage;
}

bool& Config::SHOW_FPS() {
    Config::ensure_initialized();
    return Config_SHOW_FPS_storage;
}

bool& Config::SHOW_GUIDEPOINT() {
    Config::ensure_initialized();
    return Config_SHOW_GUIDEPOINT_storage;
}

bool& Config::SHOW_MEM() {
    Config::ensure_initialized();
    return Config_SHOW_MEM_storage;
}

bool& Config::TRACE_URL() {
    Config::ensure_initialized();
    return Config_TRACE_URL_storage;
}

bool& Config::TRIAL_VERSION() {
    Config::ensure_initialized();
    return Config_TRIAL_VERSION_storage;
}

pls::cs::String& Config::UID() {
    Config::ensure_initialized();
    return Config_UID_storage;
}

bool& Config::UNITY_EDITOR() {
    Config::ensure_initialized();
    return Config_UNITY_EDITOR_storage;
}

pls::cs::String& Config::URL_DATA() {
    Config::ensure_initialized();
    return Config_URL_DATA_storage;
}

pls::cs::String& Config::URL_GET_SCORE() {
    Config::ensure_initialized();
    return Config_URL_GET_SCORE_storage;
}

pls::cs::String& Config::URL_PACKAGE() {
    Config::ensure_initialized();
    return Config_URL_PACKAGE_storage;
}

pls::cs::String& Config::URL_PHP() {
    Config::ensure_initialized();
    return Config_URL_PHP_storage;
}

pls::cs::String& Config::URL_RANKING() {
    Config::ensure_initialized();
    return Config_URL_RANKING_storage;
}

pls::cs::String& Config::URL_REGIST() {
    Config::ensure_initialized();
    return Config_URL_REGIST_storage;
}

pls::cs::String& Config::URL_REGIST_SCORE() {
    Config::ensure_initialized();
    return Config_URL_REGIST_SCORE_storage;
}

pls::cs::String& Config::URL_SITE() {
    Config::ensure_initialized();
    return Config_URL_SITE_storage;
}

pls::cs::String& Config::URL_SP() {
    Config::ensure_initialized();
    return Config_URL_SP_storage;
}

pls::cs::String& Config::URL_VERSIONUP() {
    Config::ensure_initialized();
    return Config_URL_VERSIONUP_storage;
}

bool& Config::USE_HEAP_STORAGE() {
    Config::ensure_initialized();
    return Config_USE_HEAP_STORAGE_storage;
}

bool& Config::USE_MEMORY() {
    Config::ensure_initialized();
    return Config_USE_MEMORY_storage;
}

bool& Config::USE_MEXA_UNIT1() {
    Config::ensure_initialized();
    return Config_USE_MEXA_UNIT1_storage;
}

bool& Config::USE_UNUSE_CHECK() {
    Config::ensure_initialized();
    return Config_USE_UNUSE_CHECK_storage;
}

void Config::create_init(pls::cs::Ref<Config> self) {
    Config::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.common.cfg.Config.#ctor", kairo);
    {
    }
}

// M:kairo.common.cfg.Config.#ctor
pls::cs::Ref<Config> Config::create() {
    Config::ensure_initialized();
    auto self = pls::cs::make_ref<Config>();
    Config::create_init(self);
    return self;
}

// M:kairo.common.cfg.Config.Init(System.String)
void Config::Init(pls::cs::String sourceUrl) {
    Config::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.common.cfg.Config.Init(System.String)", kairo);
    {
        if (is_null(sourceUrl)) {
            sourceUrl = literal(u"");
        }
        pls::cs::String text = Config::APPLI_NAME();
        pls::cs::Int32 num = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return index_char1(Config::APPLI_NAME(), u'_'); });
        if (num != -1) {
            text = java::lang::StringEx::SubstringJ(text, 0, num);
        }
        pls::cs::Int32 num2 = -1;
        if (Config::APPLI_TYPE() == 1) {
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::cs::culture_starts_with(sourceUrl, literal(u"http://macslab"));
                })) {
                num2 = 0;
                Config::URL_PACKAGE() = pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(literal(u"http://kaipakaipa.fam.cx/SB/game/gm"),
                                                    integer_string(Config::PID())),
                            literal(u"/bin/")),
                        Config::APPLI_NAME()),
                    literal(u".jar"));
            } else if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                           return pls::cs::culture_starts_with(sourceUrl, literal(u"http://macs"));
                       })) {
                num2 = 1;
                Config::URL_PACKAGE() = pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(literal(u"http://kaipa.jp/SB/game/gm"),
                                                    integer_string(Config::PID())),
                            literal(u"/bin/")),
                        Config::APPLI_NAME()),
                    literal(u".jar"));
            } else {
                num2 = 2;
                Config::URL_PACKAGE() = pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(literal(u"http://kairosoft.net/appli/"), text),
                            literal(u"/bin/")),
                        Config::APPLI_NAME()),
                    literal(u".jar"));
            }
            sourceUrl = Config::URL_PACKAGE();
        }
        if (Config::APPLI_TYPE() == 2 || Config::APPLI_TYPE() == 3) {
            Config::URL_PACKAGE() = pls::cs::String::concat(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(literal(u"http://kairopark.jp/j7hjT4ua/gm"),
                                                integer_string(Config::PID())),
                        literal(u"/")),
                    Config::APPLI_NAME()),
                literal(u".jar"));
            sourceUrl = Config::URL_PACKAGE();
        }
        pls::cs::String text2 = java::lang::StringEx::SubstringJ(
            sourceUrl, 0,
            pls::cs::Int32(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return last_index_char1(sourceUrl, u'/'); })) +
                1);
        pls::cs::String text3 = pls::cs::String::concat(
            java::lang::StringEx::SubstringJ(text2, 0, pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                 return pls::cs::culture_index_of(text2, literal(u"/"), 7);
                                             })),
            literal(u"/"));
        pls::cs::String text4 = pls::cs::String::concat(
            text2, ((Config::APPLI_TYPE() == 2) ? literal(u"") : literal(u"../../cgi/")));
        Config::URL_REGIST() = pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(pls::cs::String::concat(text4, literal(u"regist.php?")),
                                        Config::CGI_COMMON_QUERY()),
                literal(u"&pid=")),
            integer_string(Config::PID()));
        Config::URL_RANKING() = pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(pls::cs::String::concat(text4, literal(u"ranking.php?")),
                                        Config::CGI_COMMON_QUERY()),
                literal(u"&pid=")),
            integer_string(Config::PID()));
        Config::URL_REGIST_SCORE() = pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(pls::cs::String::concat(text4, literal(u"regist_score.php?")),
                                        Config::CGI_COMMON_QUERY()),
                literal(u"&pid=")),
            integer_string(Config::PID()));
        Config::URL_GET_SCORE() = pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(pls::cs::String::concat(text4, literal(u"get_score.php?")),
                                        Config::CGI_COMMON_QUERY()),
                literal(u"&pid=")),
            integer_string(Config::PID()));
        Config::URL_DATA() =
            pls::cs::String::concat(text2, ((num2 != -1) ? literal(u"sb/") : literal(u"903/")));
        Config::URL_SITE() = pls::cs::String::concat(
            pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text3, literal(u"?")),
                                                            Config::CGI_COMMON_QUERY()),
                                    literal(u"&from=gm")),
            integer_string(Config::PID()));
        Config::URL_SP() = pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(pls::cs::String::concat(text2, literal(u"save.php?")),
                                        Config::CGI_COMMON_QUERY()),
                literal(u"&pid=")),
            integer_string(Config::PID()));
        Config::URL_PACKAGE() = sourceUrl;
        Config::URL_PHP() = pls::cs::String::concat(text2, literal(u"php/"));
        if (Config::APPLI_TYPE() == 2) {
            Config::URL_SITE() = literal(u"http://kairopark.jp/android/");
            if (Config::BUILD_TYPE() == 1) {
                {
                    auto cs_old = Config::URL_SITE();
                    auto cs_rhs = literal(u"amazon/");
                    auto cs_value = pls::cs::String::concat(cs_old, cs_rhs);
                    Config::URL_SITE() = cs_value;
                }
            }
            if (!unity::util::Language::Japanese()) {
                {
                    auto cs_old = Config::URL_SITE();
                    auto cs_rhs = literal(u"en/");
                    auto cs_value = pls::cs::String::concat(cs_old, cs_rhs);
                    Config::URL_SITE() = cs_value;
                }
            }
            Config::URL_SITE() = pls::cs::String::concat(
                pls::cs::String::concat(pls::cs::String::concat(Config::URL_SITE(), literal(u"?pid=")),
                                        integer_string(Config::PID())),
                literal(u"&from=on50"));
        } else if (Config::APPLI_TYPE() == 3) {
            Config::URL_SITE() =
                (unity::util::Language::Japanese()
                     ? (pls::cs::String::concat(
                           pls::cs::String::concat(literal(u"http://kairopark.jp/iphone/?pid="),
                                                   integer_string(Config::PID())),
                           literal(u"&from=on50")))
                     : (pls::cs::String::concat(
                           pls::cs::String::concat(literal(u"http://kairopark.jp/iphone/en/?pid="),
                                                   integer_string(Config::PID())),
                           literal(u"&from=on50"))));
        }
        if (Config::APPLI_TYPE() == 1) {
            if (num2 == 0) {
                Config::URL_SP() = pls::cs::String::concat(
                    pls::cs::String::concat(literal(u"http://kaipakaipa.fam.cx/SB/game/2Eo9mAkM/spout/gm"),
                                            integer_string(Config::PID())),
                    literal(u"/"));
                Config::URL_SITE() =
                    pls::cs::String::concat(literal(u"http://kaipakaipa.fam.cx/?uid=1&sid=PL91&from=gm"),
                                            integer_string(Config::PID()));
                Config::URL_VERSIONUP() = pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(
                                literal(u"http://kaipakaipa.fam.cx/i/f/game.php?cmd=download&"),
                                Config::PID_NAME()),
                            literal(u"=")),
                        integer_string(Config::PID())),
                    literal(u"&v=1"));
            } else if (num2 == 1) {
                Config::URL_SP() = pls::cs::String::concat(
                    pls::cs::String::concat(literal(u"http://kaipa.jp/SB/game/2Eo9mAkM/spout/gm"),
                                            integer_string(Config::PID())),
                    literal(u"/"));
                Config::URL_SITE() = pls::cs::String::concat(
                    literal(u"http://kaipa.jp/?uid=1&sid=PL91&from=gm"), integer_string(Config::PID()));
                Config::URL_VERSIONUP() = pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(literal(u"http://kaipa.jp/i/f/game.php?cmd=download&"),
                                                    Config::PID_NAME()),
                            literal(u"=")),
                        integer_string(Config::PID())),
                    literal(u"&v=1"));
            } else if (num2 == 2) {
                Config::URL_SP() = pls::cs::String::concat(
                    pls::cs::String::concat(literal(u"http://kairosoft.net/appli/"), text),
                    literal(u"/bin/SB/"));
                Config::URL_SITE() = pls::cs::String::concat(
                    pls::cs::String::concat(literal(u"http://vf-dev.appget.com/download/htm/AC20389/"),
                                            Config::APPLI_NAME()),
                    literal(u".htm"));
                Config::URL_VERSIONUP() = pls::cs::String::concat(
                    pls::cs::String::concat(literal(u"http://vf-dev.appget.com/download/htm/AC20389/"),
                                            Config::APPLI_NAME()),
                    literal(u".htm"));
            }
        }
    }
}

// M:kairo.common.cfg.Config.ConvertExtension(System.String)
pls::cs::String Config::ConvertExtension(pls::cs::String file) {
    Config::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.common.cfg.Config.ConvertExtension(System.String)", kairo);
    {
        if (Config::APPLI_TYPE() == 1) {
            file = unity::util::StringUtil::Replace(file, literal(u".gif"), literal(u".png"));
            file = unity::util::StringUtil::Replace(file, literal(u".mld"), literal(u".spf"));
        }
        if (Config::APPLI_TYPE() == 2 || Config::APPLI_TYPE() == 3) {
            file = unity::util::StringUtil::Replace(file, literal(u".gif"), literal(u".png"));
            file = unity::util::StringUtil::Replace(file, literal(u".mld"), literal(u".ogg"));
        }
        return file;
    }
}
} // namespace kairo::common::cfg
}
