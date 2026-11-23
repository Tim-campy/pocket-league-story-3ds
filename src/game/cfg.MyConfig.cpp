// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "cfg.MyConfig.hpp"
#include "generated/kairo.common.cfg.Config.hpp"

namespace kl_cfg = pls::generated::kairo::common::cfg;

namespace pls::game {
namespace cfg {

void MyConfig::trace_edges(const pls::cs::EdgeVisitor&visitor)const {kl_cfg::Config::trace_edges(visitor);}
static pls::cs::Int32 MyConfig_AD_SIZE_storage{};

static pls::cs::String MyConfig_AD_UNIT_ID_storage{};

static bool MyConfig_ADMOB_ENABLE_storage{};

static bool MyConfig_AMAZON_storage{};

static pls::cs::String MyConfig_APPLI_NAME_storage{};

static pls::cs::Int32 MyConfig_APPLI_TYPE_storage{};

static pls::cs::String MyConfig_BASE64_PUBLIC_KEY_storage{};

static bool MyConfig_COUNT_ENABLE_storage{};

static bool MyConfig_DEBUG_storage{};

static bool MyConfig_DEBUG_CMD_storage{};

static bool MyConfig_DEBUG_UID_storage{};

static bool MyConfig_FULLSCREEN_storage{};

static bool MyConfig_GOOGLE_PLAY_storage{};

static bool MyConfig_ICLOUD_storage{};

static pls::cs::Int32 MyConfig_LANGUAGE_storage{};

static bool MyConfig_LOCALIZE_FONT_SCALE_storage{};

static bool MyConfig_LOWDEPTH_TEST_storage{};

static pls::cs::String MyConfig_OUTPUT_CSV_NAME_storage{};

static pls::cs::Int32 MyConfig_PID_storage{};

static bool MyConfig_PRINT_storage{};

static bool MyConfig_PTW_storage{};

static bool MyConfig_REGIST_ENABLE_storage{};

static bool MyConfig_SHOW_DEBUG_storage{};

static bool MyConfig_SHOW_FPS_storage{};

static bool MyConfig_SHOW_MEM_storage{};

static bool MyConfig_SMART_PASS_storage{};

static bool MyConfig_TRACE_URL_storage{};

static bool MyConfig_TRIAL_VERSION_storage{};

static pls::cs::String MyConfig_UID_storage{};

static bool MyConfig_UNITY_EDITOR_storage{};

static bool MyConfig_USE_UNUSE_CHECK_storage{};

static PLS_NOINLINE void cs_init_b89c480114cef140_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(MyConfig_AD_SIZE_storage,visitor);pls::cs::trace_value(MyConfig_AD_UNIT_ID_storage,visitor);pls::cs::trace_value(MyConfig_ADMOB_ENABLE_storage,visitor);pls::cs::trace_value(MyConfig_AMAZON_storage,visitor);pls::cs::trace_value(MyConfig_APPLI_NAME_storage,visitor);pls::cs::trace_value(MyConfig_APPLI_TYPE_storage,visitor);pls::cs::trace_value(MyConfig_BASE64_PUBLIC_KEY_storage,visitor);pls::cs::trace_value(MyConfig_COUNT_ENABLE_storage,visitor);pls::cs::trace_value(MyConfig_DEBUG_storage,visitor);pls::cs::trace_value(MyConfig_DEBUG_CMD_storage,visitor);pls::cs::trace_value(MyConfig_DEBUG_UID_storage,visitor);pls::cs::trace_value(MyConfig_FULLSCREEN_storage,visitor);pls::cs::trace_value(MyConfig_GOOGLE_PLAY_storage,visitor);pls::cs::trace_value(MyConfig_ICLOUD_storage,visitor);pls::cs::trace_value(MyConfig_LANGUAGE_storage,visitor);pls::cs::trace_value(MyConfig_LOCALIZE_FONT_SCALE_storage,visitor);pls::cs::trace_value(MyConfig_LOWDEPTH_TEST_storage,visitor);pls::cs::trace_value(MyConfig_OUTPUT_CSV_NAME_storage,visitor);pls::cs::trace_value(MyConfig_PID_storage,visitor);pls::cs::trace_value(MyConfig_PRINT_storage,visitor);pls::cs::trace_value(MyConfig_PTW_storage,visitor);pls::cs::trace_value(MyConfig_REGIST_ENABLE_storage,visitor);pls::cs::trace_value(MyConfig_SHOW_DEBUG_storage,visitor);pls::cs::trace_value(MyConfig_SHOW_FPS_storage,visitor);pls::cs::trace_value(MyConfig_SHOW_MEM_storage,visitor);pls::cs::trace_value(MyConfig_SMART_PASS_storage,visitor);pls::cs::trace_value(MyConfig_TRACE_URL_storage,visitor);pls::cs::trace_value(MyConfig_TRIAL_VERSION_storage,visitor);pls::cs::trace_value(MyConfig_UID_storage,visitor);pls::cs::trace_value(MyConfig_UNITY_EDITOR_storage,visitor);pls::cs::trace_value(MyConfig_USE_UNUSE_CHECK_storage,visitor);});static pls::cs::TypeInitState state;state.run("cfg.MyConfig",flag,[](){
MyConfig_APPLI_TYPE_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.APPLI_TYPE",[&](){return 2;});
MyConfig_DEBUG_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.DEBUG",[&](){return false;});
MyConfig_PTW_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.PTW",[&](){return false;});
MyConfig_COUNT_ENABLE_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.COUNT_ENABLE",[&](){return ((!(MyConfig::DEBUG())) ? false : true);});
MyConfig_PRINT_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.PRINT",[&](){return ((!(MyConfig::DEBUG())) ? false : true);});
MyConfig_USE_UNUSE_CHECK_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.USE_UNUSE_CHECK",[&](){return (!MyConfig::DEBUG()) ? false : !MyConfig::PTW();});
MyConfig_LANGUAGE_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.LANGUAGE",[&](){return 1;});
MyConfig_LOWDEPTH_TEST_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.LOWDEPTH_TEST",[&](){return false;});
MyConfig_FULLSCREEN_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.FULLSCREEN",[&](){return false;});
MyConfig_AD_SIZE_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.AD_SIZE",[&](){return 0;});
MyConfig_LOCALIZE_FONT_SCALE_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.LOCALIZE_FONT_SCALE",[&](){return false;});
MyConfig_ICLOUD_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.ICLOUD",[&](){return false;});
MyConfig_BASE64_PUBLIC_KEY_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.BASE64_PUBLIC_KEY",[&](){return literal(u"MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA6AQ0JoxDzeN7d5vGxuRtD/dpxGHRGEavR7lt5O2fKbtK3GmGaSS9/fHyc/M3w5HkwPFk65hqKlD5k5Zz9d8PZN4gp5eM/uOU/Z5k/Rra5BffxBWDgkMod5z7WV2hx8Ge2JtMDlTz2dip80mMdDtqbFR002FxAIIT4NaY9Im881Um/DT6LZmkMm8XrYx783QlarYq4QH43n3/9+xk+znGDNWjaP0q+f7//dHXSvFXC+oDci/YXKPT/tPl+/OP2YzwmJ+9Y8oRAPRTtUQPNCCLC0zWDIMUyYdcO7kRud0QkoP1cI55ZD2UZDvIL6Fua48OmL7yy6VBRY6EC6dkLEKsBQIDAQAB");});
MyConfig_AD_UNIT_ID_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.AD_UNIT_ID",[&](){return pls::cs::String(u"");});
MyConfig_TRACE_URL_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.TRACE_URL",[&](){return true;});
MyConfig_DEBUG_UID_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.DEBUG_UID",[&](){return true;});
MyConfig_UID_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.UID",[&](){return literal(u"NULLGWDOCOMO");});
MyConfig_REGIST_ENABLE_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.REGIST_ENABLE",[&](){return true;});
MyConfig_TRIAL_VERSION_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.TRIAL_VERSION",[&](){return false;});
MyConfig_ADMOB_ENABLE_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.ADMOB_ENABLE",[&](){return false;});
MyConfig_DEBUG_CMD_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.DEBUG_CMD",[&](){return (!MyConfig::DEBUG()) ? false : true;});
MyConfig_SHOW_DEBUG_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.SHOW_DEBUG",[&](){return (!MyConfig::DEBUG()) ? false : !MyConfig::PTW();});
MyConfig_SHOW_FPS_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.SHOW_FPS",[&](){return (!MyConfig::DEBUG()) ? false : !MyConfig::PTW();});
MyConfig_SHOW_MEM_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.SHOW_MEM",[&](){return (!MyConfig::DEBUG()) ? false : false;});
MyConfig_UNITY_EDITOR_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.UNITY_EDITOR",[&](){return false;});
MyConfig_PID_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.PID",[&](){return 55;});
MyConfig_APPLI_NAME_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.APPLI_NAME",[&](){return literal(u"Soccer_en");});
MyConfig_OUTPUT_CSV_NAME_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.OUTPUT_CSV_NAME",[&](){return literal(u"PL Story");});
MyConfig_GOOGLE_PLAY_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.GOOGLE_PLAY",[&](){return false;});
MyConfig_AMAZON_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.AMAZON",[&](){return false;});
MyConfig_SMART_PASS_storage = pls::cs::evaluate_type_initializer_field("F:cfg.MyConfig.SMART_PASS",[&](){return false;});

});}

void MyConfig::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_b89c480114cef140_slow(flag);}

pls::cs::Int32& MyConfig::AD_SIZE(){MyConfig::ensure_initialized();return MyConfig_AD_SIZE_storage;}

pls::cs::String& MyConfig::AD_UNIT_ID(){MyConfig::ensure_initialized();return MyConfig_AD_UNIT_ID_storage;}

bool& MyConfig::ADMOB_ENABLE(){MyConfig::ensure_initialized();return MyConfig_ADMOB_ENABLE_storage;}

bool& MyConfig::AMAZON(){MyConfig::ensure_initialized();return MyConfig_AMAZON_storage;}

pls::cs::String& MyConfig::APPLI_NAME(){MyConfig::ensure_initialized();return MyConfig_APPLI_NAME_storage;}

pls::cs::Int32& MyConfig::APPLI_TYPE(){MyConfig::ensure_initialized();return MyConfig_APPLI_TYPE_storage;}

pls::cs::String& MyConfig::BASE64_PUBLIC_KEY(){MyConfig::ensure_initialized();return MyConfig_BASE64_PUBLIC_KEY_storage;}

bool& MyConfig::COUNT_ENABLE(){MyConfig::ensure_initialized();return MyConfig_COUNT_ENABLE_storage;}

bool& MyConfig::DEBUG(){MyConfig::ensure_initialized();return MyConfig_DEBUG_storage;}

bool& MyConfig::DEBUG_CMD(){MyConfig::ensure_initialized();return MyConfig_DEBUG_CMD_storage;}

bool& MyConfig::DEBUG_UID(){MyConfig::ensure_initialized();return MyConfig_DEBUG_UID_storage;}

bool& MyConfig::FULLSCREEN(){MyConfig::ensure_initialized();return MyConfig_FULLSCREEN_storage;}

bool& MyConfig::GOOGLE_PLAY(){MyConfig::ensure_initialized();return MyConfig_GOOGLE_PLAY_storage;}

bool& MyConfig::ICLOUD(){MyConfig::ensure_initialized();return MyConfig_ICLOUD_storage;}

pls::cs::Int32& MyConfig::LANGUAGE(){MyConfig::ensure_initialized();return MyConfig_LANGUAGE_storage;}

bool& MyConfig::LOCALIZE_FONT_SCALE(){MyConfig::ensure_initialized();return MyConfig_LOCALIZE_FONT_SCALE_storage;}

bool& MyConfig::LOWDEPTH_TEST(){MyConfig::ensure_initialized();return MyConfig_LOWDEPTH_TEST_storage;}

pls::cs::String& MyConfig::OUTPUT_CSV_NAME(){MyConfig::ensure_initialized();return MyConfig_OUTPUT_CSV_NAME_storage;}

pls::cs::Int32& MyConfig::PID(){MyConfig::ensure_initialized();return MyConfig_PID_storage;}

bool& MyConfig::PRINT(){MyConfig::ensure_initialized();return MyConfig_PRINT_storage;}

bool& MyConfig::PTW(){MyConfig::ensure_initialized();return MyConfig_PTW_storage;}

bool& MyConfig::REGIST_ENABLE(){MyConfig::ensure_initialized();return MyConfig_REGIST_ENABLE_storage;}

bool& MyConfig::SHOW_DEBUG(){MyConfig::ensure_initialized();return MyConfig_SHOW_DEBUG_storage;}

bool& MyConfig::SHOW_FPS(){MyConfig::ensure_initialized();return MyConfig_SHOW_FPS_storage;}

bool& MyConfig::SHOW_MEM(){MyConfig::ensure_initialized();return MyConfig_SHOW_MEM_storage;}

bool& MyConfig::SMART_PASS(){MyConfig::ensure_initialized();return MyConfig_SMART_PASS_storage;}

bool& MyConfig::TRACE_URL(){MyConfig::ensure_initialized();return MyConfig_TRACE_URL_storage;}

bool& MyConfig::TRIAL_VERSION(){MyConfig::ensure_initialized();return MyConfig_TRIAL_VERSION_storage;}

pls::cs::String& MyConfig::UID(){MyConfig::ensure_initialized();return MyConfig_UID_storage;}

bool& MyConfig::UNITY_EDITOR(){MyConfig::ensure_initialized();return MyConfig_UNITY_EDITOR_storage;}

bool& MyConfig::USE_UNUSE_CHECK(){MyConfig::ensure_initialized();return MyConfig_USE_UNUSE_CHECK_storage;}

void MyConfig::create_init(pls::cs::Ref<MyConfig> self) {
MyConfig::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:cfg.MyConfig.#ctor",game);
{}

}

// M:cfg.MyConfig.#ctor
pls::cs::Ref<MyConfig> MyConfig::create() {
MyConfig::ensure_initialized();
 auto self = pls::cs::make_ref<MyConfig>(); MyConfig::create_init(self); return self; 
}
} // namespace cfg
}
