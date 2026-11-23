// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.BaseData.hpp"
#include "data.FormationData.hpp"
#include "data.PlayerData.hpp"
#include "data.TradeData.hpp"
#include "form.MyFormBase.hpp"
#include "form.SubForm.hpp"
#include "game.GameUtil.hpp"
#include "game.Player.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.util.Language.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using FloatArray = pls::cs::Array<pls::cs::Single>;
using FloatArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Single>>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace data {

void PlayerData::trace_edges(const pls::cs::EdgeVisitor&visitor)const {BaseData::trace_edges(visitor);pls::cs::trace_value(name_,visitor);pls::cs::trace_value(name2_,visitor);pls::cs::trace_value(paramPhysical_,visitor);pls::cs::trace_value(paramPhysicalMax_,visitor);pls::cs::trace_value(salary_,visitor);pls::cs::trace_value(trainingPoint_,visitor);pls::cs::trace_value(actscoreNum_,visitor);pls::cs::trace_value(bonus_research,visitor);}

static IntArray PlayerData_ACTSCORE_SCORE_storage{};

static pls::cs::Ref<main::AppData> PlayerData_apdat__storage{};

static FloatArray PlayerData_AURA_RATE_storage{};

static StringArray PlayerData_CATEGORY_STR_storage{};

static pls::cs::Int32 PlayerData_CHARGE_RATE_BODY_storage{};

static pls::cs::Int32 PlayerData_CHARGEDAMAGE_BODY_MAX_storage{};

static pls::cs::Int32 PlayerData_CHARGEDAMAGE_BODY_MIN_storage{};

static pls::cs::Int32 PlayerData_CHARGEDAMAGE_SLIDING_MAX_storage{};

static pls::cs::Int32 PlayerData_CHARGEDAMAGE_SLIDING_MIN_storage{};

static IntArray2 PlayerData_DEFAULT_DATA_storage{};

static IntArray PlayerData_eva_position_storage{};

static pls::cs::Int32 PlayerData_HSHOOT_URR_MAX_storage{};

static pls::cs::Int32 PlayerData_HSHOOT_URR_MIN_storage{};

static pls::cs::Single PlayerData_JAMPDIS_MAX_storage{};

static pls::cs::Single PlayerData_JAMPDIS_MIN_storage{};

static pls::cs::Single PlayerData_JAMPDISTOP_MAX_storage{};

static pls::cs::Single PlayerData_JAMPDISTOP_MIN_storage{};

static pls::cs::Single PlayerData_KEEPERJAMP_MAX_storage{};

static pls::cs::Single PlayerData_KEEPERJAMP_MIN_storage{};

static pls::cs::Single PlayerData_LONGPASSSPEED_MAX_storage{};

static pls::cs::Single PlayerData_LONGPASSSPEED_MIN_storage{};

static IntArray PlayerData_PARAM_EVA_storage{};

static StringArray PlayerData_PARAM_NAME_storage{};

static FloatArray2 PlayerData_PARAM_RATE_storage{};

static pls::cs::Single PlayerData_PASSSPEED_MAX_storage{};

static pls::cs::Single PlayerData_PASSSPEED_MIN_storage{};

static pls::cs::Single PlayerData_PASSSPEED_THROUH_MAX_storage{};

static pls::cs::Single PlayerData_PASSSPEED_THROUH_MIN_storage{};

static pls::cs::Int32 PlayerData_PHYSICALHP_MAX_storage{};

static pls::cs::Int32 PlayerData_PHYSICALHP_MIN_storage{};

static FloatArray2 PlayerData_POSIEVA_RATE_storage{};

static StringArray PlayerData_POSITION_NAME_storage{};

static pls::cs::Single PlayerData_SHOOTMAX_MAX_storage{};

static pls::cs::Single PlayerData_SHOOTMAX_MIN_storage{};

static pls::cs::Single PlayerData_SHOOTMIN_MAX_storage{};

static pls::cs::Single PlayerData_SHOOTMIN_MIN_storage{};

static pls::cs::Int32 PlayerData_SLIDING_RATE_MAX_storage{};

static pls::cs::Int32 PlayerData_SLIDING_RATE_MIN_storage{};

static pls::cs::Single PlayerData_SLIDING_SPEED_storage{};

static pls::cs::Single PlayerData_SPEEDMAX_MAX_storage{};

static pls::cs::Single PlayerData_SPEEDMAX_MIN_storage{};

static pls::cs::Single PlayerData_SPEEDMIN_MAX_storage{};

static pls::cs::Single PlayerData_SPEEDMIN_MIN_storage{};

static IntArray2 PlayerData_TRAINING_TUP_GRAPH_storage{};

static pls::cs::Single PlayerData_TRAPBALL_MAX_storage{};

static pls::cs::Single PlayerData_TRAPBALL_MIN_storage{};

static pls::cs::Ref<game::UserData> PlayerData_udat__storage{};

static pls::cs::Single PlayerData_V0YMAX_MAX_storage{};

static pls::cs::Single PlayerData_V0YMAX_MIN_storage{};

static pls::cs::Single PlayerData_V0YMIN_MAX_storage{};

static pls::cs::Single PlayerData_V0YMIN_MIN_storage{};

static PLS_NOINLINE void cs_init_8f8054b388e3f93e_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(PlayerData_ACTSCORE_SCORE_storage,visitor);pls::cs::trace_value(PlayerData_apdat__storage,visitor);pls::cs::trace_value(PlayerData_AURA_RATE_storage,visitor);pls::cs::trace_value(PlayerData_CATEGORY_STR_storage,visitor);pls::cs::trace_value(PlayerData_CHARGE_RATE_BODY_storage,visitor);pls::cs::trace_value(PlayerData_CHARGEDAMAGE_BODY_MAX_storage,visitor);pls::cs::trace_value(PlayerData_CHARGEDAMAGE_BODY_MIN_storage,visitor);pls::cs::trace_value(PlayerData_CHARGEDAMAGE_SLIDING_MAX_storage,visitor);pls::cs::trace_value(PlayerData_CHARGEDAMAGE_SLIDING_MIN_storage,visitor);pls::cs::trace_value(PlayerData_DEFAULT_DATA_storage,visitor);pls::cs::trace_value(PlayerData_eva_position_storage,visitor);pls::cs::trace_value(PlayerData_HSHOOT_URR_MAX_storage,visitor);pls::cs::trace_value(PlayerData_HSHOOT_URR_MIN_storage,visitor);pls::cs::trace_value(PlayerData_JAMPDIS_MAX_storage,visitor);pls::cs::trace_value(PlayerData_JAMPDIS_MIN_storage,visitor);pls::cs::trace_value(PlayerData_JAMPDISTOP_MAX_storage,visitor);pls::cs::trace_value(PlayerData_JAMPDISTOP_MIN_storage,visitor);pls::cs::trace_value(PlayerData_KEEPERJAMP_MAX_storage,visitor);pls::cs::trace_value(PlayerData_KEEPERJAMP_MIN_storage,visitor);pls::cs::trace_value(PlayerData_LONGPASSSPEED_MAX_storage,visitor);pls::cs::trace_value(PlayerData_LONGPASSSPEED_MIN_storage,visitor);pls::cs::trace_value(PlayerData_PARAM_EVA_storage,visitor);pls::cs::trace_value(PlayerData_PARAM_NAME_storage,visitor);pls::cs::trace_value(PlayerData_PARAM_RATE_storage,visitor);pls::cs::trace_value(PlayerData_PASSSPEED_MAX_storage,visitor);pls::cs::trace_value(PlayerData_PASSSPEED_MIN_storage,visitor);pls::cs::trace_value(PlayerData_PASSSPEED_THROUH_MAX_storage,visitor);pls::cs::trace_value(PlayerData_PASSSPEED_THROUH_MIN_storage,visitor);pls::cs::trace_value(PlayerData_PHYSICALHP_MAX_storage,visitor);pls::cs::trace_value(PlayerData_PHYSICALHP_MIN_storage,visitor);pls::cs::trace_value(PlayerData_POSIEVA_RATE_storage,visitor);pls::cs::trace_value(PlayerData_POSITION_NAME_storage,visitor);pls::cs::trace_value(PlayerData_SHOOTMAX_MAX_storage,visitor);pls::cs::trace_value(PlayerData_SHOOTMAX_MIN_storage,visitor);pls::cs::trace_value(PlayerData_SHOOTMIN_MAX_storage,visitor);pls::cs::trace_value(PlayerData_SHOOTMIN_MIN_storage,visitor);pls::cs::trace_value(PlayerData_SLIDING_RATE_MAX_storage,visitor);pls::cs::trace_value(PlayerData_SLIDING_RATE_MIN_storage,visitor);pls::cs::trace_value(PlayerData_SLIDING_SPEED_storage,visitor);pls::cs::trace_value(PlayerData_SPEEDMAX_MAX_storage,visitor);pls::cs::trace_value(PlayerData_SPEEDMAX_MIN_storage,visitor);pls::cs::trace_value(PlayerData_SPEEDMIN_MAX_storage,visitor);pls::cs::trace_value(PlayerData_SPEEDMIN_MIN_storage,visitor);pls::cs::trace_value(PlayerData_TRAINING_TUP_GRAPH_storage,visitor);pls::cs::trace_value(PlayerData_TRAPBALL_MAX_storage,visitor);pls::cs::trace_value(PlayerData_TRAPBALL_MIN_storage,visitor);pls::cs::trace_value(PlayerData_udat__storage,visitor);pls::cs::trace_value(PlayerData_V0YMAX_MAX_storage,visitor);pls::cs::trace_value(PlayerData_V0YMAX_MIN_storage,visitor);pls::cs::trace_value(PlayerData_V0YMIN_MAX_storage,visitor);pls::cs::trace_value(PlayerData_V0YMIN_MIN_storage,visitor);});static pls::cs::TypeInitState state;state.run("data.PlayerData",flag,[](){
PlayerData_SPEEDMIN_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SPEEDMIN_MIN",[&](){return 8.0f;});
PlayerData_SPEEDMAX_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SPEEDMAX_MIN",[&](){return 9.0f;});
PlayerData_SPEEDMIN_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SPEEDMIN_MAX",[&](){return 6.0f;});
PlayerData_SPEEDMAX_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SPEEDMAX_MAX",[&](){return 12.0f;});
PlayerData_PASSSPEED_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.PASSSPEED_MIN",[&](){return 18.0f;});
PlayerData_PASSSPEED_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.PASSSPEED_MAX",[&](){return 23.0f;});
PlayerData_PASSSPEED_THROUH_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.PASSSPEED_THROUH_MIN",[&](){return 12.0f;});
PlayerData_PASSSPEED_THROUH_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.PASSSPEED_THROUH_MAX",[&](){return 17.0f;});
PlayerData_LONGPASSSPEED_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.LONGPASSSPEED_MIN",[&](){return 19.0f;});
PlayerData_LONGPASSSPEED_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.LONGPASSSPEED_MAX",[&](){return 24.0f;});
PlayerData_SHOOTMIN_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SHOOTMIN_MIN",[&](){return 23.0f;});
PlayerData_SHOOTMIN_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SHOOTMIN_MAX",[&](){return 23.0f;});
PlayerData_SHOOTMAX_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SHOOTMAX_MIN",[&](){return 48.0f;});
PlayerData_SHOOTMAX_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SHOOTMAX_MAX",[&](){return 48.0f;});
PlayerData_V0YMIN_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.V0YMIN_MIN",[&](){return 3.0f;});
PlayerData_V0YMIN_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.V0YMIN_MAX",[&](){return 1.0f;});
PlayerData_V0YMAX_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.V0YMAX_MIN",[&](){return 1.5f;});
PlayerData_V0YMAX_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.V0YMAX_MAX",[&](){return 0.5f;});
PlayerData_HSHOOT_URR_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.HSHOOT_URR_MIN",[&](){return -10;});
PlayerData_HSHOOT_URR_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.HSHOOT_URR_MAX",[&](){return -30;});
PlayerData_CHARGE_RATE_BODY_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.CHARGE_RATE_BODY",[&](){return 200;});
PlayerData_CHARGEDAMAGE_BODY_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.CHARGEDAMAGE_BODY_MIN",[&](){return 4000;});
PlayerData_CHARGEDAMAGE_BODY_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.CHARGEDAMAGE_BODY_MAX",[&](){return 12000;});
PlayerData_CHARGEDAMAGE_SLIDING_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.CHARGEDAMAGE_SLIDING_MIN",[&](){return 9000;});
PlayerData_CHARGEDAMAGE_SLIDING_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.CHARGEDAMAGE_SLIDING_MAX",[&](){return 40000;});
PlayerData_PHYSICALHP_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.PHYSICALHP_MIN",[&](){return 10000;});
PlayerData_PHYSICALHP_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.PHYSICALHP_MAX",[&](){return 50000;});
PlayerData_TRAPBALL_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.TRAPBALL_MIN",[&](){return 6.0f;});
PlayerData_TRAPBALL_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.TRAPBALL_MAX",[&](){return 18.0f;});
PlayerData_KEEPERJAMP_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.KEEPERJAMP_MIN",[&](){return 6.0f;});
PlayerData_KEEPERJAMP_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.KEEPERJAMP_MAX",[&](){return 10.0f;});
PlayerData_SLIDING_SPEED_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SLIDING_SPEED",[&](){return 10.0f;});
PlayerData_SLIDING_RATE_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SLIDING_RATE_MIN",[&](){return 980;});
PlayerData_SLIDING_RATE_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.SLIDING_RATE_MAX",[&](){return 850;});
PlayerData_JAMPDIS_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.JAMPDIS_MIN",[&](){return 10.0f;});
PlayerData_JAMPDIS_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.JAMPDIS_MAX",[&](){return 20.0f;});
PlayerData_JAMPDISTOP_MIN_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.JAMPDISTOP_MIN",[&](){return 30.0f;});
PlayerData_JAMPDISTOP_MAX_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.JAMPDISTOP_MAX",[&](){return 40.0f;});
PlayerData_POSITION_NAME_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.POSITION_NAME",[&](){return StringArray::from({literal(u"GK"), literal(u"DF"), literal(u"MF"), literal(u"FW")});});
PlayerData_DEFAULT_DATA_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.DEFAULT_DATA",[&](){return IntArray2::from({IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500}), IntArray::from({500, 500})});});
PlayerData_CATEGORY_STR_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.CATEGORY_STR",[&](){return StringArray::from({literal(u"平凡"), literal(u"代表ｸﾗｽ"), literal(u"ﾜｰﾙﾄﾞｸﾗｽ"), literal(u"ｽｰﾊﾟｰｽﾀｰ"), literal(u"ｽﾄﾗｲｶｰ"), literal(u"ﾎﾞﾃﾞｨﾋﾞﾙ"), literal(u"なでしこ"), literal(u"お子様"), literal(u"ﾃｸﾆｼｬﾝ"), literal(u"ﾌｧﾝﾀｼﾞｽﾀ"), literal(u"自由人"), literal(u"ｽﾋﾟｰﾄﾞｽﾀｰ"), literal(u"守備職人"), literal(u"平凡GK"), literal(u"代表GK"), literal(u"ｽﾊﾟｲﾀﾞｰ"), literal(u"世界GK"), literal(u"ｽｰﾊﾟｰGK"), literal(u"ｶﾘｽﾏ"), literal(u"ﾘｰﾀﾞｰ"), literal(u"ご年配"), literal(u"勉強家"), literal(u"長距離砲"), literal(u"熱血漢")});});
PlayerData_ACTSCORE_SCORE_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.ACTSCORE_SCORE",[&](){return IntArray::from({200, 60, 150, 250, 2, 500, 150, 150, 10, 30, -150, 30, 100, 200, 100, 200, 300});});
PlayerData_AURA_RATE_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.AURA_RATE",[&](){return FloatArray::from({1.3f, 1.3f, 1.3f, 1.3f, 2.0f, 0.7692308f, 0.5f, 1.3f, 1.3f, 0.77f});});
PlayerData_PARAM_NAME_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.PARAM_NAME",[&](){return StringArray::from({literal(u"ｷｯｸ"), literal(u"ｽﾋﾟｰﾄﾞ"), literal(u"ﾃｸﾆｯｸ"), literal(u"ﾎﾞﾃﾞｨ"), literal(u"ｷｰﾊﾟｰ")});});
PlayerData_TRAINING_TUP_GRAPH_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.TRAINING_TUP_GRAPH",[&](){return IntArray2::from({IntArray::from({1, 1, 1, 0, 0}), IntArray::from({1, 0, 1, 0, 0}), IntArray::from({0, 1, 1, 1, 0}), IntArray::from({1, 1, 0, 1, 0}), IntArray::from({1, 0, 1, 0, 0}), IntArray::from({0, 0, 0, 0, 1})});});
PlayerData_POSIEVA_RATE_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.POSIEVA_RATE",[&](){return FloatArray2::from({FloatArray::from({0.0f, 0.0f, 0.0f, 0.0f, 1.0f}), FloatArray::from({0.0f, 0.0f, 0.0f, 1.0f, 0.0f}), FloatArray::from({0.0f, 0.0f, 1.0f, 0.0f, 0.0f}), FloatArray::from({1.0f, 0.0f, 0.0f, 0.0f, 0.0f})});});
PlayerData_PARAM_RATE_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.PARAM_RATE",[&](){return FloatArray2::from({FloatArray::from({0.0f, 0.9f, 0.1f, 0.0f, 0.0f}), FloatArray::from({0.2f, 0.0f, 0.8f, 0.0f, 0.0f}), FloatArray::from({0.2f, 0.0f, 0.8f, 0.0f, 0.0f}), FloatArray::from({0.2f, 0.0f, 0.8f, 0.0f, 0.0f}), FloatArray::from({0.9f, 0.0f, 0.1f, 0.0f, 0.0f}), FloatArray::from({0.7f, 0.0f, 0.3f, 0.0f, 0.0f}), FloatArray::from({0.7f, 0.0f, 0.3f, 0.0f, 0.0f}), FloatArray::from({0.0f, 0.0f, 0.2f, 0.8f, 0.0f}), FloatArray::from({0.2f, 0.0f, 0.2f, 0.6f, 0.0f}), FloatArray::from({0.0f, 0.0f, 0.1f, 0.9f, 0.0f}), FloatArray::from({0.0f, 0.0f, 0.0f, 0.0f, 1.0f}), FloatArray::from({0.0f, 0.0f, 0.0f, 0.0f, 1.0f}), FloatArray::from({0.1f, 0.1f, 0.6f, 0.2f, 0.0f}), FloatArray::from({0.1f, 0.0f, 0.3f, 0.3f, 0.0f}), FloatArray::from({0.1f, 0.0f, 0.3f, 0.3f, 0.0f}), FloatArray::from({0.0f, 0.0f, 0.5f, 0.5f, 0.0f})});});
PlayerData_PARAM_EVA_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.PARAM_EVA",[&](){return IntArray::from({50, 100, 150, 250, 400, 600, 1000});});
PlayerData_eva_position_storage = pls::cs::evaluate_type_initializer_field("F:data.PlayerData.eva_position",[&](){return IntArray::make(4);});

});}

void PlayerData::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_8f8054b388e3f93e_slow(flag);}

IntArray& PlayerData::ACTSCORE_SCORE(){PlayerData::ensure_initialized();return PlayerData_ACTSCORE_SCORE_storage;}

pls::cs::Ref<main::AppData>& PlayerData::apdat_(){PlayerData::ensure_initialized();return PlayerData_apdat__storage;}

FloatArray& PlayerData::AURA_RATE(){PlayerData::ensure_initialized();return PlayerData_AURA_RATE_storage;}

StringArray& PlayerData::CATEGORY_STR(){PlayerData::ensure_initialized();return PlayerData_CATEGORY_STR_storage;}

pls::cs::Int32& PlayerData::CHARGE_RATE_BODY(){PlayerData::ensure_initialized();return PlayerData_CHARGE_RATE_BODY_storage;}

pls::cs::Int32& PlayerData::CHARGEDAMAGE_BODY_MAX(){PlayerData::ensure_initialized();return PlayerData_CHARGEDAMAGE_BODY_MAX_storage;}

pls::cs::Int32& PlayerData::CHARGEDAMAGE_BODY_MIN(){PlayerData::ensure_initialized();return PlayerData_CHARGEDAMAGE_BODY_MIN_storage;}

pls::cs::Int32& PlayerData::CHARGEDAMAGE_SLIDING_MAX(){PlayerData::ensure_initialized();return PlayerData_CHARGEDAMAGE_SLIDING_MAX_storage;}

pls::cs::Int32& PlayerData::CHARGEDAMAGE_SLIDING_MIN(){PlayerData::ensure_initialized();return PlayerData_CHARGEDAMAGE_SLIDING_MIN_storage;}

IntArray2& PlayerData::DEFAULT_DATA(){PlayerData::ensure_initialized();return PlayerData_DEFAULT_DATA_storage;}

IntArray& PlayerData::eva_position(){PlayerData::ensure_initialized();return PlayerData_eva_position_storage;}

pls::cs::Int32& PlayerData::HSHOOT_URR_MAX(){PlayerData::ensure_initialized();return PlayerData_HSHOOT_URR_MAX_storage;}

pls::cs::Int32& PlayerData::HSHOOT_URR_MIN(){PlayerData::ensure_initialized();return PlayerData_HSHOOT_URR_MIN_storage;}

pls::cs::Single& PlayerData::JAMPDIS_MAX(){PlayerData::ensure_initialized();return PlayerData_JAMPDIS_MAX_storage;}

pls::cs::Single& PlayerData::JAMPDIS_MIN(){PlayerData::ensure_initialized();return PlayerData_JAMPDIS_MIN_storage;}

pls::cs::Single& PlayerData::JAMPDISTOP_MAX(){PlayerData::ensure_initialized();return PlayerData_JAMPDISTOP_MAX_storage;}

pls::cs::Single& PlayerData::JAMPDISTOP_MIN(){PlayerData::ensure_initialized();return PlayerData_JAMPDISTOP_MIN_storage;}

pls::cs::Single& PlayerData::KEEPERJAMP_MAX(){PlayerData::ensure_initialized();return PlayerData_KEEPERJAMP_MAX_storage;}

pls::cs::Single& PlayerData::KEEPERJAMP_MIN(){PlayerData::ensure_initialized();return PlayerData_KEEPERJAMP_MIN_storage;}

pls::cs::Single& PlayerData::LONGPASSSPEED_MAX(){PlayerData::ensure_initialized();return PlayerData_LONGPASSSPEED_MAX_storage;}

pls::cs::Single& PlayerData::LONGPASSSPEED_MIN(){PlayerData::ensure_initialized();return PlayerData_LONGPASSSPEED_MIN_storage;}

IntArray& PlayerData::PARAM_EVA(){PlayerData::ensure_initialized();return PlayerData_PARAM_EVA_storage;}

StringArray& PlayerData::PARAM_NAME(){PlayerData::ensure_initialized();return PlayerData_PARAM_NAME_storage;}

FloatArray2& PlayerData::PARAM_RATE(){PlayerData::ensure_initialized();return PlayerData_PARAM_RATE_storage;}

pls::cs::Single& PlayerData::PASSSPEED_MAX(){PlayerData::ensure_initialized();return PlayerData_PASSSPEED_MAX_storage;}

pls::cs::Single& PlayerData::PASSSPEED_MIN(){PlayerData::ensure_initialized();return PlayerData_PASSSPEED_MIN_storage;}

pls::cs::Single& PlayerData::PASSSPEED_THROUH_MAX(){PlayerData::ensure_initialized();return PlayerData_PASSSPEED_THROUH_MAX_storage;}

pls::cs::Single& PlayerData::PASSSPEED_THROUH_MIN(){PlayerData::ensure_initialized();return PlayerData_PASSSPEED_THROUH_MIN_storage;}

pls::cs::Int32& PlayerData::PHYSICALHP_MAX(){PlayerData::ensure_initialized();return PlayerData_PHYSICALHP_MAX_storage;}

pls::cs::Int32& PlayerData::PHYSICALHP_MIN(){PlayerData::ensure_initialized();return PlayerData_PHYSICALHP_MIN_storage;}

FloatArray2& PlayerData::POSIEVA_RATE(){PlayerData::ensure_initialized();return PlayerData_POSIEVA_RATE_storage;}

StringArray& PlayerData::POSITION_NAME(){PlayerData::ensure_initialized();return PlayerData_POSITION_NAME_storage;}

pls::cs::Single& PlayerData::SHOOTMAX_MAX(){PlayerData::ensure_initialized();return PlayerData_SHOOTMAX_MAX_storage;}

pls::cs::Single& PlayerData::SHOOTMAX_MIN(){PlayerData::ensure_initialized();return PlayerData_SHOOTMAX_MIN_storage;}

pls::cs::Single& PlayerData::SHOOTMIN_MAX(){PlayerData::ensure_initialized();return PlayerData_SHOOTMIN_MAX_storage;}

pls::cs::Single& PlayerData::SHOOTMIN_MIN(){PlayerData::ensure_initialized();return PlayerData_SHOOTMIN_MIN_storage;}

pls::cs::Int32& PlayerData::SLIDING_RATE_MAX(){PlayerData::ensure_initialized();return PlayerData_SLIDING_RATE_MAX_storage;}

pls::cs::Int32& PlayerData::SLIDING_RATE_MIN(){PlayerData::ensure_initialized();return PlayerData_SLIDING_RATE_MIN_storage;}

pls::cs::Single& PlayerData::SLIDING_SPEED(){PlayerData::ensure_initialized();return PlayerData_SLIDING_SPEED_storage;}

pls::cs::Single& PlayerData::SPEEDMAX_MAX(){PlayerData::ensure_initialized();return PlayerData_SPEEDMAX_MAX_storage;}

pls::cs::Single& PlayerData::SPEEDMAX_MIN(){PlayerData::ensure_initialized();return PlayerData_SPEEDMAX_MIN_storage;}

pls::cs::Single& PlayerData::SPEEDMIN_MAX(){PlayerData::ensure_initialized();return PlayerData_SPEEDMIN_MAX_storage;}

pls::cs::Single& PlayerData::SPEEDMIN_MIN(){PlayerData::ensure_initialized();return PlayerData_SPEEDMIN_MIN_storage;}

IntArray2& PlayerData::TRAINING_TUP_GRAPH(){PlayerData::ensure_initialized();return PlayerData_TRAINING_TUP_GRAPH_storage;}

pls::cs::Single& PlayerData::TRAPBALL_MAX(){PlayerData::ensure_initialized();return PlayerData_TRAPBALL_MAX_storage;}

pls::cs::Single& PlayerData::TRAPBALL_MIN(){PlayerData::ensure_initialized();return PlayerData_TRAPBALL_MIN_storage;}

pls::cs::Ref<game::UserData>& PlayerData::udat_(){PlayerData::ensure_initialized();return PlayerData_udat__storage;}

pls::cs::Single& PlayerData::V0YMAX_MAX(){PlayerData::ensure_initialized();return PlayerData_V0YMAX_MAX_storage;}

pls::cs::Single& PlayerData::V0YMAX_MIN(){PlayerData::ensure_initialized();return PlayerData_V0YMAX_MIN_storage;}

pls::cs::Single& PlayerData::V0YMIN_MAX(){PlayerData::ensure_initialized();return PlayerData_V0YMIN_MAX_storage;}

pls::cs::Single& PlayerData::V0YMIN_MIN(){PlayerData::ensure_initialized();return PlayerData_V0YMIN_MIN_storage;}

void PlayerData::create_init(pls::cs::Ref<PlayerData> self) {
PlayerData::ensure_initialized();
self->paramPhysical_ = IntArray::make(5);
self->paramPhysicalMax_ = IntArray::make(5);
self->salary_ = IntArray::make(2);
self->actscoreNum_ = IntArray::make(17);
self->bonus_research = IntArray::make(2);
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.#ctor",game);
{
PlayerData::apdat_() = main::AppData::GetInstance();
PlayerData::udat_() = game::UserData::GetInstance();
self->Init();
}

}

void PlayerData::create_init(pls::cs::Ref<PlayerData> self,pls::cs::String src) {
PlayerData::ensure_initialized();
self->paramPhysical_ = IntArray::make(5);
self->paramPhysicalMax_ = IntArray::make(5);
self->salary_ = IntArray::make(2);
self->actscoreNum_ = IntArray::make(17);
self->bonus_research = IntArray::make(2);
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.#ctor(System.String)",game);
{
PlayerData::apdat_() = main::AppData::GetInstance();
PlayerData::udat_() = game::UserData::GetInstance();
self->Init();
self->Load(src);
}

}

// M:data.PlayerData.#ctor
pls::cs::Ref<PlayerData> PlayerData::create() {
PlayerData::ensure_initialized();
 auto self = pls::cs::make_ref<PlayerData>(); PlayerData::create_init(self); return self; 
}

// M:data.PlayerData.#ctor(System.String)
pls::cs::Ref<PlayerData> PlayerData::create(pls::cs::String src) {
PlayerData::ensure_initialized();
 auto self = pls::cs::make_ref<PlayerData>(); PlayerData::create_init(self,src); return self; 
}

// M:data.PlayerData.Init
void PlayerData::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.Init",game);
{
trainingPoint_ = IntArray::make(5);
if ([&]() { auto cs_left = pls::cs::box(paramPhysicalMax_); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
role_ = PlayerData::GetMostEvaPosition(paramPhysicalMax_);
}
auraPoint_ = 5000;
matchNum_ = 0;
actscoreNum_ = IntArray::make(17);
actscoreSum_ = 0;
actscoreScore_ = 0;
game_goalConsecutive_ = 0;
game_goalTotal_ = 0;
game_goalInLeague_ = 0;
exp_ = 0;
expStock_ = 0;
lv_ = 0;
new_ = false;
onceMember_ = 0;
}
}

// M:data.PlayerData.Load(System.String)
void PlayerData::Load(pls::cs::String src) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.Load(System.String)",game);
{
pls::cs::Int32 num = 0;
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(src, literal(u"\t"));});
id_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
++num;
name_ = array[num++];
name2_ = array[num++];
category_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
faceImg_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
initLv_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
pls::cs::String value = array[num++];
StringArray array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(value, literal(u"&"));});
paramPhysicalMax_ = IntArray::make(array2.length());
for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
{ auto cs_target = paramPhysicalMax_; auto cs_index = i; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array2[i]);});cs_target.set_Item(cs_index,cs_value);}
}
{ auto cs_target = salary_; auto cs_index = 0; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = salary_; auto cs_index = 1; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});cs_target.set_Item(cs_index,cs_value);}
popularP_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
SetLv(initLv_);
exp_ = 0;
auraPoint_ = 5000;
role_ = PlayerData::GetMostEvaPosition(paramPhysicalMax_);
}
}

// M:data.PlayerData.NewGame
void PlayerData::NewGame() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.NewGame",game);
{

}
}

// M:data.PlayerData.Serialize(java.io.OutputStream)
void PlayerData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.Serialize(java.io.OutputStream)",game);
{
for (pls::cs::Int32 i = 0; i < paramPhysical_.length(); ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(paramPhysical_[i]));});
}
for (pls::cs::Int32 j = 0; j < trainingPoint_.length(); ++j) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, trainingPoint_[j]);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(role_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(auraPoint_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, matchNum_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, game_goalConsecutive_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, game_goalTotal_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(game_goalInLeague_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, exp_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, expStock_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, lv_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteBoolean(os, new_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(onceMember_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, popularP_);});
}
}

// M:data.PlayerData.Deserialize(java.io.InputStream)
void PlayerData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.Deserialize(java.io.InputStream)",game);
{
for (pls::cs::Int32 i = 0; i < paramPhysical_.length(); ++i) {
{ auto cs_target = paramPhysical_; auto cs_index = i; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));cs_target.set_Item(cs_index,cs_value);}
}
for (pls::cs::Int32 j = 0; j < trainingPoint_.length(); ++j) {
{ auto cs_target = trainingPoint_; auto cs_index = j; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
}
role_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
auraPoint_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
matchNum_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
game_goalConsecutive_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
game_goalTotal_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
game_goalInLeague_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
exp_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
expStock_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
lv_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
new_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBoolean(stream);});
onceMember_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
popularP_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
}
}

// M:data.PlayerData.SetGameParamData(System.Int32[])
void PlayerData::SetGameParamData(IntArray paramPhysical) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.SetGameParamData(System.Int32[])",game);
{
pls::cs::Single num = 0.0f;
pls::cs::Int32 num2 = 0;
for (pls::cs::Int32 i = 0; i < PlayerData::PARAM_RATE().length(); ++i) {
num = 0.0f;
for (pls::cs::Int32 j = 0; j < PlayerData::PARAM_RATE()[i].length(); ++j) {
num += PlayerData::PARAM_RATE()[i][j];
}
num2 = pls::cs::to_int32(((([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::PARAM_RATE()[i][0]; auto cs_right = pls::cs::Single(paramPhysical[0]); return cs_left * cs_right; }()); auto cs_right = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::PARAM_RATE()[i][1]; auto cs_right = pls::cs::Single(paramPhysical[1]); return cs_left * cs_right; }()); return cs_left + cs_right; }()); auto cs_right = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::PARAM_RATE()[i][2]; auto cs_right = pls::cs::Single(paramPhysical[2]); return cs_left * cs_right; }()); return cs_left + cs_right; }()); auto cs_right = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::PARAM_RATE()[i][3]; auto cs_right = pls::cs::Single(paramPhysical[3]); return cs_left * cs_right; }()); return cs_left + cs_right; }()); auto cs_right = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::PARAM_RATE()[i][4]; auto cs_right = pls::cs::Single(paramPhysical[4]); return cs_left * cs_right; }()); return cs_left + cs_right; }())) / num));
if ((i == 0)) {
param_speed = num2;
} else if ((i == 1)) {
param_pass = num2;
} else if ((i == 2)) {
param_throuhPass = num2;
} else if ((i == 3)) {
param_longPass = num2;
} else if ((i == 4)) {
param_shoot = num2;
} else if ((i == 5)) {
param_v0y = num2;
} else if ((i == 6)) {
param_hShootURR = num2;
} else if ((i == 7)) {
param_charge_body = num2;
} else if ((i == 8)) {
param_charge_sliding = num2;
} else if ((i == 9)) {
param_physical = num2;
} else if ((i == 10)) {
param_catch = num2;
} else if ((i == 11)) {
param_keeperJamp = num2;
} else if ((i == 12)) {
param_slidingRate = num2;
} else if ((i == 13)) {
param_jampdis = num2;
} else if ((i == 14)) {
param_jampdistop = num2;
} else if ((i == 15)) {
param_shootTrap = num2;
}
}
}
}

// M:data.PlayerData.SetGameData(game.Player)
void PlayerData::SetGameData(pls::cs::Ref<game::Player> player) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.SetGameData(game.Player)",game);
{
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_speed, 0.0f, 1000.0f, PlayerData::SPEEDMIN_MIN(), PlayerData::SPEEDMAX_MIN(), true); require(cs_target)->speed_min = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_speed, 0.0f, 1000.0f, PlayerData::SPEEDMIN_MAX(), PlayerData::SPEEDMAX_MAX(), true); require(cs_target)->speed_max = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_pass, 0.0f, 1000.0f, PlayerData::PASSSPEED_MIN(), PlayerData::PASSSPEED_MAX(), true); require(cs_target)->pass_data = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_throuhPass, 0.0f, 1000.0f, PlayerData::PASSSPEED_THROUH_MIN(), PlayerData::PASSSPEED_THROUH_MAX(), true); require(cs_target)->throuhPass_data = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_longPass, 0.0f, 1000.0f, PlayerData::LONGPASSSPEED_MIN(), PlayerData::LONGPASSSPEED_MAX(), true); require(cs_target)->longPass_data = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_shoot, 0.0f, 1000.0f, PlayerData::SHOOTMIN_MIN(), PlayerData::SHOOTMAX_MIN(), true); require(cs_target)->shoot_min = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_shoot, 0.0f, 1000.0f, PlayerData::SHOOTMIN_MAX(), PlayerData::SHOOTMAX_MAX(), true); require(cs_target)->shoot_max = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_v0y, 0.0f, 1000.0f, PlayerData::V0YMIN_MIN(), PlayerData::V0YMAX_MIN(), true); require(cs_target)->shootV0y_min = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_v0y, 0.0f, 1000.0f, PlayerData::V0YMIN_MAX(), PlayerData::V0YMAX_MAX(), true); require(cs_target)->shootV0y_max = cs_value; }
{ auto cs_target = player; pls::cs::Int32 cs_value = game::GameUtil::RateConvert(param_hShootURR, 500, 1000, PlayerData::HSHOOT_URR_MIN(), PlayerData::HSHOOT_URR_MAX(), true); require(cs_target)->headShootUpRadRate = cs_value; }
{ auto cs_target = player; pls::cs::Int32 cs_value = game::GameUtil::RateConvert(param_charge_body, 0, 1000, PlayerData::CHARGEDAMAGE_BODY_MIN(), PlayerData::CHARGEDAMAGE_BODY_MAX(), true); require(cs_target)->chargeDamage_body = cs_value; }
{ auto cs_target = player; pls::cs::Int32 cs_value = game::GameUtil::RateConvert(param_charge_sliding, 0, 1000, PlayerData::CHARGEDAMAGE_SLIDING_MIN(), PlayerData::CHARGEDAMAGE_SLIDING_MAX(), true); require(cs_target)->chargeDamage_sliding = cs_value; }
{ auto cs_target = player; pls::cs::Int32 cs_value = game::GameUtil::RateConvert(param_physical, 0, 1000, PlayerData::PHYSICALHP_MIN(), PlayerData::PHYSICALHP_MAX(), true); require(cs_target)->physicalHp_data = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_trap, 0.0f, 1000.0f, PlayerData::TRAPBALL_MIN(), PlayerData::TRAPBALL_MAX(), true); require(cs_target)->trapball_data = cs_value; }
{ auto cs_target = player; pls::cs::Int32 cs_value = game::GameUtil::RateConvert(param_catch, 0, 1000, 0, 100, true); require(cs_target)->catch_data = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_keeperJamp, 0.0f, 1000.0f, PlayerData::KEEPERJAMP_MIN(), PlayerData::KEEPERJAMP_MAX(), true); require(cs_target)->keeperJmap_data = cs_value; }
{ auto cs_target = player; pls::cs::Int32 cs_value = game::GameUtil::RateConvert(param_slidingRate, 0, 1000, PlayerData::SLIDING_RATE_MIN(), PlayerData::SLIDING_RATE_MAX(), true); require(cs_target)->slidingRate_data = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_jampdis, 0.0f, 1000.0f, PlayerData::JAMPDIS_MIN(), PlayerData::JAMPDIS_MAX(), true); require(cs_target)->jamp_data = cs_value; }
{ auto cs_target = player; pls::cs::Single cs_value = game::GameUtil::RateConvertFloat(param_jampdistop, 0.0f, 1000.0f, PlayerData::JAMPDISTOP_MIN(), PlayerData::JAMPDISTOP_MAX(), true); require(cs_target)->jamptop_data = cs_value; }
{ auto cs_target = player; pls::cs::Int32 cs_value = game::GameUtil::RateConvert(param_shootTrap, 0, 1000, 0, 1000, true); require(cs_target)->shootTrap_data = cs_value; }
}
}

// M:data.PlayerData.GetSpeed(game.Player,System.Int32)
pls::cs::Single PlayerData::GetSpeed(pls::cs::Ref<game::Player> player,pls::cs::Int32 eva) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetSpeed(game.Player,System.Int32)",game);
{
return game::GameUtil::RateConvertFloat(eva, 0.0f, 100.0f, require(player)->speed_min, require(player)->speed_max, true);
}

}

// M:data.PlayerData.GetPassSpeed(game.Player)
pls::cs::Single PlayerData::GetPassSpeed(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetPassSpeed(game.Player)",game);
{
return require(player)->pass_data;
}

}

// M:data.PlayerData.GetThroughPassSpeed(game.Player)
pls::cs::Single PlayerData::GetThroughPassSpeed(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetThroughPassSpeed(game.Player)",game);
{
return require(player)->throuhPass_data;
}

}

// M:data.PlayerData.GetLongPassSpeed(game.Player)
pls::cs::Single PlayerData::GetLongPassSpeed(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetLongPassSpeed(game.Player)",game);
{
return require(player)->longPass_data;
}

}

// M:data.PlayerData.GetClearSpeed(game.Player)
pls::cs::Single PlayerData::GetClearSpeed(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetClearSpeed(game.Player)",game);
{
return require(player)->pass_data * 7.0f / 10.0f;
}

}

// M:data.PlayerData.GetShootSpeed(game.Player,System.Int32)
pls::cs::Single PlayerData::GetShootSpeed(pls::cs::Ref<game::Player> player,pls::cs::Int32 eva) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetShootSpeed(game.Player,System.Int32)",game);
{
return game::GameUtil::RateConvertFloat(eva, 0.0f, 100.0f, require(player)->shoot_min, require(player)->shoot_max, true);
}

}

// M:data.PlayerData.GetShootV0y(game.Player,System.Int32)
pls::cs::Single PlayerData::GetShootV0y(pls::cs::Ref<game::Player> player,pls::cs::Int32 eva) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetShootV0y(game.Player,System.Int32)",game);
{
return game::GameUtil::RateConvertFloat(eva, 0.0f, 100.0f, require(player)->shootV0y_min, require(player)->shootV0y_max, true);
}

}

// M:data.PlayerData.GetHeadShootUpRadRate(game.Player)
pls::cs::Int32 PlayerData::GetHeadShootUpRadRate(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetHeadShootUpRadRate(game.Player)",game);
{
return require(player)->headShootUpRadRate;
}

}

// M:data.PlayerData.GetChargeDamage(game.Player,System.Boolean)
pls::cs::Int32 PlayerData::GetChargeDamage(pls::cs::Ref<game::Player> player,bool flg_sliding) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetChargeDamage(game.Player,System.Boolean)",game);
{
if (flg_sliding) {
return require(player)->chargeDamage_sliding;
}
return require(player)->chargeDamage_body;
}

}

// M:data.PlayerData.GetPhysicalHpMax(game.Player)
pls::cs::Int32 PlayerData::GetPhysicalHpMax(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetPhysicalHpMax(game.Player)",game);
{
return require(player)->physicalHp_data;
}

}

// M:data.PlayerData.GetBallShedRate(game.Player,game.Player)
pls::cs::Int32 PlayerData::GetBallShedRate(pls::cs::Ref<game::Player> dribbler_player,pls::cs::Ref<game::Player> charge_player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetBallShedRate(game.Player,game.Player)",game);
{
return game::GameUtil::RateConvert(([&]() -> pls::cs::Int32 { auto cs_left = require(require(PlayerData::apdat_())->pData_.get_Item(require(dribbler_player)->pData_id_))->param_physical; auto cs_right = require(require(PlayerData::apdat_())->pData_.get_Item(require(charge_player)->pData_id_))->param_physical; return cs_left - cs_right; }()), 0, 300, 5, 40, true);
}

}

// M:data.PlayerData.GetPlayerBodyPoseEva(game.Player,System.Int32)
pls::cs::Int32 PlayerData::GetPlayerBodyPoseEva(pls::cs::Ref<game::Player> player,pls::cs::Int32 max_ballHaveTime) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetPlayerBodyPoseEva(game.Player,System.Int32)",game);
{
pls::cs::Int32 num = game::GameUtil::RateConvert(require(player)->ballHaveTime_, 0, max_ballHaveTime, 0, 100, true);
pls::cs::Int32 num2 = game::GameUtil::RateConvert(require(player)->physical_hp_, require(player)->physicalHp_data, 0, 0, 100, true);
return pls::cs::to_int32(((0.3f * pls::cs::Single(num) + 0.7f * pls::cs::Single(num2)) / 1.0f));
}

}

// M:data.PlayerData.GetTrapBallV(game.Player)
pls::cs::Single PlayerData::GetTrapBallV(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetTrapBallV(game.Player)",game);
{
return require(player)->trapball_data;
}

}

// M:data.PlayerData.GetCatchProc(game.Player,System.Single,System.Boolean)
pls::cs::Int32 PlayerData::GetCatchProc(pls::cs::Ref<game::Player> player,pls::cs::Single v_len,bool front) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetCatchProc(game.Player,System.Single,System.Boolean)",game);
{
pls::cs::Int32 catch_data = require(player)->catch_data;
pls::cs::Int32 num = pls::cs::to_int32(game::GameUtil::RateConvertFloat(v_len, 45.0f, 10.0f, 0.0f, 100.0f, true));
pls::cs::Int32 num2 = 0;
if (front) {
num2 = 100;
}
pls::cs::Int32 num3 = pls::cs::to_int32(((0.4f * pls::cs::Single(catch_data) + 0.5f * pls::cs::Single(num) + 0.1f * pls::cs::Single(num2)) / 1.0f));
num3 = pls::cs::to_int32(PlayerData::AuraUpdate(player, num3, 7));
num3 = num3 + game::GameUtil::Random(40) - 20;
if (num3 < 40) {
return 0;
}
if (num3 < 70) {
return 1;
}
return 2;
}

}

// M:data.PlayerData.GetKeeperJampMax(game.Player)
pls::cs::Single PlayerData::GetKeeperJampMax(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetKeeperJampMax(game.Player)",game);
{
return require(player)->keeperJmap_data;
}

}

// M:data.PlayerData.GetSlidingRate(game.Player)
pls::cs::Int32 PlayerData::GetSlidingRate(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetSlidingRate(game.Player)",game);
{
return require(player)->slidingRate_data;
}

}

// M:data.PlayerData.GetHeadJampDis(game.Player)
pls::cs::Single PlayerData::GetHeadJampDis(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetHeadJampDis(game.Player)",game);
{
return require(player)->jamp_data;
}

}

// M:data.PlayerData.GetHeadJampDisTop(game.Player)
pls::cs::Single PlayerData::GetHeadJampDisTop(pls::cs::Ref<game::Player> player) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetHeadJampDisTop(game.Player)",game);
{
return require(player)->jamptop_data;
}

}

// M:data.PlayerData.GetParamEva(System.Int32)
pls::cs::Int32 PlayerData::GetParamEva(pls::cs::Int32 param) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetParamEva(System.Int32)",game);
{
for (pls::cs::Int32 i = 0; i < PlayerData::PARAM_EVA().length(); ++i) {
if (param < PlayerData::PARAM_EVA()[i]) {
return i;
}
}
return pls::cs::Int32(PlayerData::PARAM_EVA().length()) - 1;
}

}

// M:data.PlayerData.GetNextLvUpExp(System.Int32)
pls::cs::Int32 PlayerData::GetNextLvUpExp(pls::cs::Int32 nowLv) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetNextLvUpExp(System.Int32)",game);
{
if (nowLv < 1) {
return 0;
}
return 18 * nowLv * nowLv + 0 * nowLv + 100;
}

}

// M:data.PlayerData.SetActScore(System.Int32)
void PlayerData::SetActScore(pls::cs::Int32 actscore_id) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.SetActScore(System.Int32)",game);
{
actscoreNum_[actscore_id]++;
actscoreSum_ = actscoreSum_ + PlayerData::ACTSCORE_SCORE()[actscore_id];
}
}

// M:data.PlayerData.AuraUpdate(game.Player,System.Single,System.Int32)
pls::cs::Single PlayerData::AuraUpdate(pls::cs::Ref<game::Player> player,pls::cs::Single value,pls::cs::Int32 auraActId) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.AuraUpdate(game.Player,System.Single,System.Int32)",game);
{
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(player)->flag_, 262144);})) {
return value;
}
return value * PlayerData::AURA_RATE()[auraActId];
}

}

// M:data.PlayerData.GetPhyParamBarW(System.Int32,System.Int32)
pls::cs::Int32 PlayerData::GetPhyParamBarW(pls::cs::Int32 param,pls::cs::Int32 BAR_W_MAX) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetPhyParamBarW(System.Int32,System.Int32)",game);
{
pls::cs::Int32 num = 0;
if (param < 500) {
num = game::GameUtil::RateConvert(param, 0, 500, BAR_W_MAX * 2 / 100, BAR_W_MAX * 70 / 100, true);
} else {
num = game::GameUtil::RateConvert(param, 500, 1000, BAR_W_MAX * 70 / 100, BAR_W_MAX * 100 / 100, true);
}
return num;
}

}

// M:data.PlayerData.GetPositionEva(System.Int32,System.Int32[])
pls::cs::Int32 PlayerData::GetPositionEva(pls::cs::Int32 positionId,IntArray phyParam) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetPositionEva(System.Int32,System.Int32[])",game);
{
{
pls::cs::Int32 recoveredReturn = pls::cs::to_int32((([&]() -> pls::cs::FloatEval { auto cs_left = (([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::POSIEVA_RATE()[positionId][0]; auto cs_right = pls::cs::Single(phyParam[0]); return cs_left * cs_right; }()); auto cs_right = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::POSIEVA_RATE()[positionId][1]; auto cs_right = pls::cs::Single(phyParam[1]); return cs_left * cs_right; }()); return cs_left + cs_right; }()); auto cs_right = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::POSIEVA_RATE()[positionId][2]; auto cs_right = pls::cs::Single(phyParam[2]); return cs_left * cs_right; }()); return cs_left + cs_right; }()); auto cs_right = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::POSIEVA_RATE()[positionId][3]; auto cs_right = pls::cs::Single(phyParam[3]); return cs_left * cs_right; }()); return cs_left + cs_right; }()); auto cs_right = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::POSIEVA_RATE()[positionId][4]; auto cs_right = pls::cs::Single(phyParam[4]); return cs_left * cs_right; }()); return cs_left + cs_right; }())); auto cs_right = (([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = PlayerData::POSIEVA_RATE()[positionId][0]; auto cs_right = PlayerData::POSIEVA_RATE()[positionId][1]; return cs_left + cs_right; }()); auto cs_right = PlayerData::POSIEVA_RATE()[positionId][2]; return cs_left + cs_right; }()); auto cs_right = PlayerData::POSIEVA_RATE()[positionId][3]; return cs_left + cs_right; }()); auto cs_right = PlayerData::POSIEVA_RATE()[positionId][4]; return cs_left + cs_right; }())); return cs_left / cs_right; }())));
return recoveredReturn;
}
}

}

// M:data.PlayerData.GetPositionRank(System.Int32,data.PlayerData)
pls::cs::Int32 PlayerData::GetPositionRank(pls::cs::Int32 positionId,pls::cs::Ref<PlayerData> p_data) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetPositionRank(System.Int32,data.PlayerData)",game);
{
if (positionId == 0 && require(p_data)->paramPhysicalMax_[4] < 100) {
return 9;
}
pls::cs::Int32 positionEva = PlayerData::GetPositionEva(positionId, require(p_data)->paramPhysical_);
return PlayerData::GetParamEva(positionEva);
}

}

// M:data.PlayerData.GetMostEvaPosition(System.Int32[])
pls::cs::Int32 PlayerData::GetMostEvaPosition(IntArray phyParam) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetMostEvaPosition(System.Int32[])",game);
{
for (pls::cs::Int32 i = 0; i < 4; ++i) {
{ auto cs_target = PlayerData::eva_position(); auto cs_index = i; auto cs_value = PlayerData::GetPositionEva(i, phyParam);cs_target.set_Item(cs_index,cs_value);}
}
pls::cs::Int32 num = 0;
pls::cs::Int32 result = 0;
for (pls::cs::Int32 j = 0; j < 4; ++j) {
if (num < PlayerData::eva_position()[j]) {
num = PlayerData::eva_position()[j];
result = j;
}
}
return result;
}

}

// M:data.PlayerData.UpdatePhysicalParam
void PlayerData::UpdatePhysicalParam() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.UpdatePhysicalParam",game);
{
pls::cs::Int32 num = 0;
for (pls::cs::Int32 i = 0; i < paramPhysical_.length(); ++i) {
{ auto cs_target = paramPhysical_; auto cs_index = i; auto cs_value = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = lv_; pls::cs::Int32 cs_arg4 = paramPhysicalMax_[i] * 80 / 100; return game::GameUtil::RateConvert(cs_arg0, 0, 30, 0, cs_arg4, true); }());cs_target.set_Item(cs_index,cs_value);}
num = trainingPoint_[i];
auto cs_left_18 = paramPhysical_[i] + num; auto cs_right_18 = paramPhysicalMax_[i];
pls::cs::Int32 num2 = cs_left_18 - cs_right_18;
if (num2 > 0) {
num2 /= 20;
paramPhysical_[i] = paramPhysicalMax_[i] + num2;
} else {
{ auto cs_target = paramPhysical_; auto cs_index = i; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
}
{ auto cs_target = paramPhysical_; auto cs_index = i; auto cs_value = main::AppData::ClampMax(paramPhysical_[i], 1000);cs_target.set_Item(cs_index,cs_value);}
}
}
}

// M:data.PlayerData.SetTrainingAddParam(System.Int32[],System.Int32[])
void PlayerData::SetTrainingAddParam(IntArray trainingAddEva,IntArray var_out) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.SetTrainingAddParam(System.Int32[],System.Int32[])",game);
{
pls::cs::Int32 num = 0;
for (pls::cs::Int32 i = 0; i < paramPhysicalMax_.length(); ++i) {
var_out[i] = ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = lv_; pls::cs::Int32 cs_arg4 = paramPhysicalMax_[i] * 80 / 100; return game::GameUtil::RateConvert(cs_arg0, 0, 30, 0, cs_arg4, true); }());
num = ([&]() -> pls::cs::Int32 { auto cs_left = trainingPoint_[i]; auto cs_right = trainingAddEva[i]; return cs_left + cs_right; }());
auto cs_left_21 = var_out[i] + num; auto cs_right_21 = paramPhysicalMax_[i];
pls::cs::Int32 num2 = cs_left_21 - cs_right_21;
if (num2 > 0) {
num2 /= 20;
var_out[i] = paramPhysicalMax_[i] + num2;
} else {
{ auto cs_target = var_out; auto cs_index = i; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
}
var_out[i] = main::AppData::ClampMax(var_out[i], 1000);
}
}
}

// M:data.PlayerData.SetLv(System.Int32)
void PlayerData::SetLv(pls::cs::Int32 lv) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.SetLv(System.Int32)",game);
{
lv_ = lv;
UpdatePhysicalParam();
}
}

// M:data.PlayerData.LvUp
void PlayerData::LvUp() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.LvUp",game);
{
if (lv_ == 30) {
return;
}
{
lv_ = main::AppData::ClampMax(lv_ + 1, 30);
UpdatePhysicalParam();
}
}
}

// M:data.PlayerData.AddExp(System.Int32,System.Boolean)
void PlayerData::AddExp(pls::cs::Int32 add_exp,bool addLvUpPopUp) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.AddExp(System.Int32,System.Boolean)",game);
{
exp_ = exp_ + add_exp;
pls::cs::Int32 num = 0;
while (true) {
pls::cs::Int32 nextLvUpExp = PlayerData::GetNextLvUpExp(lv_);
if (exp_ >= nextLvUpExp) {
exp_ = exp_ - nextLvUpExp;
LvUp();
if (addLvUpPopUp) {
pls::cs::String empty = pls::cs::String(u"");
empty = pls::cs::String::concat(empty,form::MyFormBase::LT(name_));
if (kairo::unity::util::Language::English()) {
empty = pls::cs::String::concat(empty,literal(u" "));
}
empty = pls::cs::String::concat(empty,form::MyFormBase::LT(name2_));
empty = pls::cs::String::concat(pls::cs::String::concat(empty, literal(u"\t")), integer_string(lv_));
require(PlayerData::apdat_())->AddPopupMessage(28, empty);
}
if (lv_ == 30) {
break;
}
} else {
break;
}
++num;
if (!(num < 10)) {
break;
}
}
return;
}
}

// M:data.PlayerData.StockExp(System.Int32)
void PlayerData::StockExp(pls::cs::Int32 addStockExp) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.StockExp(System.Int32)",game);
{
expStock_ = expStock_ + addStockExp;
}
}

// M:data.PlayerData.UpdateStockExp
pls::cs::Int32 PlayerData::UpdateStockExp() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.UpdateStockExp",game);
{
pls::cs::Int32 num = expStock_;
num += require(PlayerData::udat_())->tAreaLv_ * 4;
AddExp(num, true);
expStock_ = 0;
return num;
}
}

// M:data.PlayerData.AddPhysicalParam(System.Int32,System.Int32)
void PlayerData::AddPhysicalParam(pls::cs::Int32 eva,pls::cs::Int32 TID) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.AddPhysicalParam(System.Int32,System.Int32)",game);
{
{ auto cs_target = trainingPoint_; auto cs_index = TID; auto cs_old = cs_target.at(cs_index); auto cs_rhs = eva; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
UpdatePhysicalParam();
}
}

// M:data.PlayerData.AddPhysicalParam(System.Int32[])
void PlayerData::AddPhysicalParam(IntArray add_eva) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.AddPhysicalParam(System.Int32[])",game);
{
for (pls::cs::Int32 i = 0; i < trainingPoint_.length(); ++i) {
{ auto cs_target = trainingPoint_; auto cs_index = i; auto cs_old = cs_target.at(cs_index); auto cs_rhs = add_eva[i]; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
}
UpdatePhysicalParam();
}
}

// M:data.PlayerData.GetSallay
pls::cs::Int32 PlayerData::GetSallay() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.GetSallay",game);
{
game::UserData::ensure_initialized();

if (game::UserData::DEBUG_SALLARY_MAX() == 1) {
return salary_[1];
}
{pls::cs::Int32 cs_arg0_20 = matchNum_; pls::cs::Int32 cs_arg3_20 = salary_[0]; pls::cs::Int32 cs_arg4_20 = salary_[1];
return game::GameUtil::RateConvert(cs_arg0_20, 0, 150, cs_arg3_20, cs_arg4_20, true);}

}
}

// M:data.PlayerData.AddAuraPoint(System.Int32,System.Boolean)
void PlayerData::AddAuraPoint(pls::cs::Int32 add_point,bool isSoccerForm) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.AddAuraPoint(System.Int32,System.Boolean)",game);
{
pls::cs::Int32 num = game::GameUtil::RateConvert(require(PlayerData::udat_())->fanParam_[1], 0, 100, 300, 600, true);
auraPoint_ = main::AppData::ClampMax(auraPoint_ + num, 10000);
if (auraPoint_ == 10000 && isSoccerForm && id_ >= 22 && !require(PlayerData::apdat_())->CheckAlreadyEvent(172)) {
require(PlayerData::apdat_())->ExecEvent(172, name_, IntArray{});
}
}
}

// M:data.PlayerData.Update_aura(game.Player)
void PlayerData::Update_aura(pls::cs::Ref<game::Player> player) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.Update_aura(game.Player)",game);
{
if (auraCnt_ > 0) {
--auraCnt_;
if (auraCnt_ == 0) {
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(flag_, 262144);});
}
}
}
}

// M:data.PlayerData.Start_aura(game.Player)
void PlayerData::Start_aura(pls::cs::Ref<game::Player> player) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.Start_aura(game.Player)",game);
{
{ auto cs_target = player; pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(require(player)->flag_, 262144);}); require(cs_target)->flag_ = cs_value; }
auraPoint_ = 0;
auraCnt_ = 160;
}
}

// M:data.PlayerData.AddPopular(System.Int32)
void PlayerData::AddPopular(pls::cs::Int32 add_popular) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.AddPopular(System.Int32)",game);
{
popularP_ = main::AppData::ClampMax(popularP_ + add_popular, 100);
}
}

// M:data.PlayerData.Employ(System.Int32)
void PlayerData::Employ(pls::cs::Int32 pDataId) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.Employ(System.Int32)",game);
{
pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
pls::cs::Ref<PlayerData> playerData = require(main::AppData::GetInstance())->pData_.get_Item(pDataId);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(instance)->memberPDataist_), pls::cs::box(playerData));}) == -1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(require(instance)->memberPDataist_), pls::cs::box(playerData));});
require(playerData)->new_ = true;
require(playerData)->onceMember_ = 1;
}
pls::cs::Int32 num = require(playerData)->id_ - 22;
if ((num < 0) || (num >= require(PlayerData::apdat_())->tradeData_.length())) {
return;
}
pls::cs::Ref<TradeData> tradeData = require(PlayerData::apdat_())->tradeData_.get_Item(num);
require(tradeData)->ChangeState(2);
require(tradeData)->feelPt_ = (require(tradeData)->feelPt_) / 2;
}

}

// M:data.PlayerData.Dismissal(System.Int32)
void PlayerData::Dismissal(pls::cs::Int32 pDataId) {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.Dismissal(System.Int32)",game);
{
pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
pls::cs::Ref<PlayerData> playerData = require(main::AppData::GetInstance())->pData_.get_Item(pDataId);
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(instance)->memberPDataist_), pls::cs::box(playerData));});
if (num == -1) {
return;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(require(instance)->memberPDataist_), num);});
pls::cs::Int32 num2 = require(playerData)->id_ - 22;
if ((num2 < 0) || (num2 >= require(PlayerData::apdat_())->tradeData_.length())) {
return;
}
pls::cs::Ref<TradeData> tradeData = require(PlayerData::apdat_())->tradeData_.get_Item(num2);
require(tradeData)->ChangeState(1);
if (num < 11) {
FormationData::UpdateStamemRole();
}
}

}

// M:data.PlayerData.IsExistNew
bool PlayerData::IsExistNew() {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.IsExistNew",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
for (pls::cs::Int32 i = 0; i < require(instance)->pData_.length(); ++i) {
if (require(require(instance)->pData_.get_Item(i))->IsNew()) {
return true;
}
}
return false;
}

}

// M:data.PlayerData.RemoveNew
void PlayerData::RemoveNew() {
PlayerData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.RemoveNew",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
for (pls::cs::Int32 i = 0; i < require(instance)->pData_.length(); ++i) {
require(require(instance)->pData_.get_Item(i))->new_ = false;
}
}

}

// M:data.PlayerData.IsNew
bool PlayerData::IsNew() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.PlayerData.IsNew",game);
{
if (new_) {
return true;
}
return false;
}
}
} // namespace data
}
