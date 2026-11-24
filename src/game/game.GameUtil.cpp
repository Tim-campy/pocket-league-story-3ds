// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "game.GameUtil.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.util.JRandom.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;

using FloatArray = pls::cs::Array<pls::cs::Single>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace game {

void GameUtil::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

static IntArray2 GameUtil_DIRECT_storage{};

static IntArray2 GameUtil_DRAW_DIRECT_storage{};

static pls::cs::Int32 GameUtil_MAX_ANGLE_storage{};

static pls::cs::Int32 GameUtil_MAX_ANGLE2_storage{};

static pls::cs::Int32 GameUtil_MAX_ANGLE3_storage{};

static pls::cs::Single GameUtil_MAX_ANGLEDATA_COS_storage{};

static pls::cs::Single GameUtil_MAX_ANGLEDATA_COS2_storage{};

static pls::cs::Single GameUtil_MAX_ANGLEDATA_COS3_storage{};

static pls::cs::Single GameUtil_MAX_ANGLEDATA_SIN_storage{};

static pls::cs::Single GameUtil_MAX_ANGLEDATA_SIN2_storage{};

static pls::cs::Single GameUtil_MAX_ANGLEDATA_SIN3_storage{};

static pls::cs::Ref<kl_util::JRandom> GameUtil_random_storage{};

static FloatArray GameUtil_SIN_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> GameUtil_temp1_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> GameUtil_temp2_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> GameUtil_temp3_storage{};

static IntArray GameUtil_vec1_storage{};

static IntArray GameUtil_vec2_storage{};

static PLS_NOINLINE void cs_init_1815a6964debf82a_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(GameUtil_DIRECT_storage, visitor);
        pls::cs::trace_value(GameUtil_DRAW_DIRECT_storage, visitor);
        pls::cs::trace_value(GameUtil_MAX_ANGLE_storage, visitor);
        pls::cs::trace_value(GameUtil_MAX_ANGLE2_storage, visitor);
        pls::cs::trace_value(GameUtil_MAX_ANGLE3_storage, visitor);
        pls::cs::trace_value(GameUtil_MAX_ANGLEDATA_COS_storage, visitor);
        pls::cs::trace_value(GameUtil_MAX_ANGLEDATA_COS2_storage, visitor);
        pls::cs::trace_value(GameUtil_MAX_ANGLEDATA_COS3_storage, visitor);
        pls::cs::trace_value(GameUtil_MAX_ANGLEDATA_SIN_storage, visitor);
        pls::cs::trace_value(GameUtil_MAX_ANGLEDATA_SIN2_storage, visitor);
        pls::cs::trace_value(GameUtil_MAX_ANGLEDATA_SIN3_storage, visitor);
        pls::cs::trace_value(GameUtil_random_storage, visitor);
        pls::cs::trace_value(GameUtil_SIN_storage, visitor);
        pls::cs::trace_value(GameUtil_temp1_storage, visitor);
        pls::cs::trace_value(GameUtil_temp2_storage, visitor);
        pls::cs::trace_value(GameUtil_temp3_storage, visitor);
        pls::cs::trace_value(GameUtil_vec1_storage, visitor);
        pls::cs::trace_value(GameUtil_vec2_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.GameUtil", flag, []() {
        GameUtil_DRAW_DIRECT_storage =
            pls::cs::evaluate_type_initializer_field("F:game.GameUtil.DRAW_DIRECT", [&]() {
                return IntArray2::from({IntArray::from({0, -1}), IntArray::from({0, 1}),
                                        IntArray::from({-1, 0}), IntArray::from({1, 0}), IntArray::make(2)});
            });
        GameUtil_DIRECT_storage = pls::cs::evaluate_type_initializer_field("F:game.GameUtil.DIRECT", [&]() {
            return IntArray2::from({IntArray::from({0, 1}), IntArray::from({0, -1}), IntArray::from({-1, 0}),
                                    IntArray::from({1, 0})});
        });
        GameUtil_MAX_ANGLE_storage =
            pls::cs::evaluate_type_initializer_field("F:game.GameUtil.MAX_ANGLE", [&]() { return 23; });
        GameUtil_MAX_ANGLE2_storage =
            pls::cs::evaluate_type_initializer_field("F:game.GameUtil.MAX_ANGLE2", [&]() { return 28; });
        GameUtil_MAX_ANGLE3_storage =
            pls::cs::evaluate_type_initializer_field("F:game.GameUtil.MAX_ANGLE3", [&]() { return 70; });
        GameUtil_random_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.GameUtil.random", [&]() { return kl_util::JRandom::create(); });
        GameUtil_temp1_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.GameUtil.temp1", [&]() { return kl_util3d::Vector3D::create(); });
        GameUtil_temp2_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.GameUtil.temp2", [&]() { return kl_util3d::Vector3D::create(); });
        GameUtil_temp3_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.GameUtil.temp3", [&]() { return kl_util3d::Vector3D::create(); });
        GameUtil_vec1_storage = pls::cs::evaluate_type_initializer_field("F:game.GameUtil.vec1",
                                                                         [&]() { return IntArray::make(2); });
        GameUtil_vec2_storage = pls::cs::evaluate_type_initializer_field("F:game.GameUtil.vec2",
                                                                         [&]() { return IntArray::make(2); });
    });
}

void GameUtil::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_1815a6964debf82a_slow(flag);
}

IntArray2& GameUtil::DIRECT() {
    GameUtil::ensure_initialized();
    return GameUtil_DIRECT_storage;
}

IntArray2& GameUtil::DRAW_DIRECT() {
    GameUtil::ensure_initialized();
    return GameUtil_DRAW_DIRECT_storage;
}

pls::cs::Int32& GameUtil::MAX_ANGLE() {
    GameUtil::ensure_initialized();
    return GameUtil_MAX_ANGLE_storage;
}

pls::cs::Int32& GameUtil::MAX_ANGLE2() {
    GameUtil::ensure_initialized();
    return GameUtil_MAX_ANGLE2_storage;
}

pls::cs::Int32& GameUtil::MAX_ANGLE3() {
    GameUtil::ensure_initialized();
    return GameUtil_MAX_ANGLE3_storage;
}

pls::cs::Single& GameUtil::MAX_ANGLEDATA_COS() {
    GameUtil::ensure_initialized();
    return GameUtil_MAX_ANGLEDATA_COS_storage;
}

pls::cs::Single& GameUtil::MAX_ANGLEDATA_COS2() {
    GameUtil::ensure_initialized();
    return GameUtil_MAX_ANGLEDATA_COS2_storage;
}

pls::cs::Single& GameUtil::MAX_ANGLEDATA_COS3() {
    GameUtil::ensure_initialized();
    return GameUtil_MAX_ANGLEDATA_COS3_storage;
}

pls::cs::Single& GameUtil::MAX_ANGLEDATA_SIN() {
    GameUtil::ensure_initialized();
    return GameUtil_MAX_ANGLEDATA_SIN_storage;
}

pls::cs::Single& GameUtil::MAX_ANGLEDATA_SIN2() {
    GameUtil::ensure_initialized();
    return GameUtil_MAX_ANGLEDATA_SIN2_storage;
}

pls::cs::Single& GameUtil::MAX_ANGLEDATA_SIN3() {
    GameUtil::ensure_initialized();
    return GameUtil_MAX_ANGLEDATA_SIN3_storage;
}

pls::cs::Ref<kl_util::JRandom>& GameUtil::random() {
    GameUtil::ensure_initialized();
    return GameUtil_random_storage;
}

FloatArray& GameUtil::SIN() {
    GameUtil::ensure_initialized();
    return GameUtil_SIN_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& GameUtil::temp1() {
    GameUtil::ensure_initialized();
    return GameUtil_temp1_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& GameUtil::temp2() {
    GameUtil::ensure_initialized();
    return GameUtil_temp2_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& GameUtil::temp3() {
    GameUtil::ensure_initialized();
    return GameUtil_temp3_storage;
}

IntArray& GameUtil::vec1() {
    GameUtil::ensure_initialized();
    return GameUtil_vec1_storage;
}

IntArray& GameUtil::vec2() {
    GameUtil::ensure_initialized();
    return GameUtil_vec2_storage;
}

void GameUtil::create_init(pls::cs::Ref<GameUtil> self) {
    GameUtil::ensure_initialized();
    kl_cfg::Config::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.#ctor", game);
    {
        GameUtil::SIN() = FloatArray::make(91);
        for (pls::cs::Int32 i = 0; i < GameUtil::SIN().length(); ++i) {
            {
                auto cs_target = GameUtil::SIN();
                auto cs_index = i;
                auto cs_value = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_lang::JMath::Sin(pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_lang::JMath::ToRadians(i); }));
                }));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        GameUtil::MAX_ANGLEDATA_SIN() = GameUtil::SIN()[GameUtil::MAX_ANGLE()];
        GameUtil::MAX_ANGLEDATA_COS() = GameUtil::Cos(GameUtil::MAX_ANGLE());
        GameUtil::MAX_ANGLEDATA_SIN2() = GameUtil::SIN()[GameUtil::MAX_ANGLE2()];
        GameUtil::MAX_ANGLEDATA_COS2() = GameUtil::Cos(GameUtil::MAX_ANGLE2());
        GameUtil::MAX_ANGLEDATA_SIN3() = GameUtil::SIN()[GameUtil::MAX_ANGLE3()];
        GameUtil::MAX_ANGLEDATA_COS3() = GameUtil::Cos(GameUtil::MAX_ANGLE3());
        if (kl_cfg::Config::DEBUG_CMD()) {
        }
    }
}

// M:game.GameUtil.#ctor
pls::cs::Ref<GameUtil> GameUtil::create() {
    GameUtil::ensure_initialized();
    auto self = pls::cs::make_ref<GameUtil>();
    GameUtil::create_init(self);
    return self;
}

// M:game.GameUtil.ConvertGameEva(System.Int32)
pls::cs::Int32 GameUtil::ConvertGameEva(pls::cs::Int32 param) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.ConvertGameEva(System.Int32)", game);
    {
        if (param < 256) {
            return GameUtil::RateConvert(param, 0, 256, 0, 80, true);
        }
        return GameUtil::RateConvert(param, 256, 1000, 80, 100, true);
    }
}

// M:game.GameUtil.RateConvert(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
pls::cs::Int32 GameUtil::RateConvert(pls::cs::Int32 x, pls::cs::Int32 c1min, pls::cs::Int32 c1max,
                                     pls::cs::Int32 c2min, pls::cs::Int32 c2max, bool ch_limit) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.RateConvert(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)",
        game);
    {
        if (ch_limit) {
            if ((x < c1min && c1min < c1max) || (x > c1min && c1min > c1max)) {
                return c2min;
            }
            if ((x > c1max && c1min < c1max) || (x < c1max && c1min > c1max)) {
                return c2max;
            }
        }
        if (c1max - c1min == 0) {
            return c2min;
        }
        {
            pls::cs::Int32 recoveredReturn = (x - c1min) * (c2max - c2min) / (c1max - c1min) + c2min;
            return recoveredReturn;
        }
    }
}

// M:game.GameUtil.RateConvert(System.Int64,System.Int64,System.Int64,System.Int64,System.Int64,System.Boolean)
pls::cs::Int64 GameUtil::RateConvertLong(pls::cs::Int64 x, pls::cs::Int64 c1min, pls::cs::Int64 c1max,
                                         pls::cs::Int64 c2min, pls::cs::Int64 c2max, bool ch_limit) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.RateConvert(System.Int64,System.Int64,System.Int64,System.Int64,System.Int64,System.Boolean)",
        game);
    {
        if (ch_limit) {
            if ((x < c1min && c1min < c1max) || (x > c1min && c1min > c1max)) {
                return c2min;
            }
            if ((x > c1max && c1min < c1max) || (x < c1max && c1min > c1max)) {
                return c2max;
            }
        }
        if (c1max - c1min == 0ll) {
            return c2min;
        }
        {
            pls::cs::Int64 recoveredReturn = (x - c1min) * (c2max - c2min) / (c1max - c1min) + c2min;
            return recoveredReturn;
        }
    }
}

// M:game.GameUtil.RateConvert(System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean)
pls::cs::Single GameUtil::RateConvertFloat(pls::cs::Single x, pls::cs::Single c1min, pls::cs::Single c1max,
                                           pls::cs::Single c2min, pls::cs::Single c2max, bool ch_limit) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.RateConvert(System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean)",
        game);
    {
        if (ch_limit) {
            if ((x < c1min && c1min < c1max) || (x > c1min && c1min > c1max)) {
                return c2min;
            }
            if ((x > c1max && c1min < c1max) || (x < c1max && c1min > c1max)) {
                return c2max;
            }
        }
        if (c1max - c1min == 0.0f) {
            return c2min;
        }
        {
            pls::cs::Single recoveredReturn = (x - c1min) * (c2max - c2min) / (c1max - c1min) + c2min;
            return recoveredReturn;
        }
    }
}

// M:game.GameUtil.RateConvertArea(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
pls::cs::Int32 GameUtil::RateConvertArea(pls::cs::Int32 x, pls::cs::Int32 c1min, pls::cs::Int32 c1max,
                                         pls::cs::Int32 c2min, pls::cs::Int32 c2max, bool ch_limit) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.RateConvertArea(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)",
        game);
    {
        if (ch_limit) {
            if ((x < c1min && c1min < c1max) || (x > c1min && c1min > c1max)) {
                return c2min;
            }
            if ((x > c1max && c1min < c1max) || (x < c1max && c1min > c1max)) {
                return c2max;
            }
        }
        if (c1max - c1min == 0) {
            return c2min;
        }
        pls::cs::Int32 num = c2max;
        ++c2max;
        pls::cs::Int32 num2 = (x - c1min) * (c2max - c2min) / (c1max - c1min) + c2min;
        if (num2 > num) {
            num2 = num;
        }
        return num2;
    }
}

// M:game.GameUtil.AddRand(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Int32 GameUtil::AddRand(pls::cs::Int32 value, pls::cs::Int32 rand_min, pls::cs::Int32 rand_max,
                                 pls::cs::Int32 ret_min, pls::cs::Int32 ret_max) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.AddRand(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)", game);
    {
        value += GameUtil::Random(rand_max - rand_min + 1) + rand_min;
        if (value < ret_min) {
            value = ret_min;
        } else if (value > ret_max) {
            value = ret_max;
        }
        return value;
    }
}

// M:game.GameUtil.RateChA(System.Single,System.Single,System.Single)
pls::cs::Single GameUtil::RateChA(pls::cs::Single a2, pls::cs::Single b2, pls::cs::Single X) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.RateChA(System.Single,System.Single,System.Single)",
                     game);
    {
        if (a2 + b2 == 0.0f) {
            return 0.0f;
        }
        return X * a2 / (a2 + b2);
    }
}

// M:game.GameUtil.RateChB(System.Single,System.Single,System.Single)
pls::cs::Single GameUtil::RateChB(pls::cs::Single a2, pls::cs::Single b2, pls::cs::Single X) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.RateChB(System.Single,System.Single,System.Single)",
                     game);
    {
        if (a2 + b2 == 0.0f) {
            return 0.0f;
        }
        return X * b2 / (a2 + b2);
    }
}

// M:game.GameUtil.Bezier(System.Int64,System.Int64,System.Int64,System.Int64,System.Int64,System.Int64,System.Int32,System.Int32[])
IntArray GameUtil::Bezier(pls::cs::Int64 x1, pls::cs::Int64 y1, pls::cs::Int64 x2, pls::cs::Int64 y2,
                          pls::cs::Int64 x3, pls::cs::Int64 y3, pls::cs::Int32 t, IntArray result) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.Bezier(System.Int64,System.Int64,System.Int64,System.Int64,System.Int64,System.Int64,System.Int32,System.Int32[])",
        game);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(result);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            result = IntArray::make(2);
        }
        pls::cs::Int64 num = x1 * pls::cs::Int64((4096 - t)) * pls::cs::Int64((4096 - t)) +
                             pls::cs::Int64(2) * x2 * pls::cs::Int64(t) * pls::cs::Int64((4096 - t)) +
                             x3 * pls::cs::Int64(t) * pls::cs::Int64(t);
        pls::cs::Int64 num2 = y1 * pls::cs::Int64((4096 - t)) * pls::cs::Int64((4096 - t)) +
                              pls::cs::Int64(2) * y2 * pls::cs::Int64(t) * pls::cs::Int64((4096 - t)) +
                              y3 * pls::cs::Int64(t) * pls::cs::Int64(t);
        result[0] = pls::cs::to_int32((num / pls::cs::Int64(16777216)));
        result[1] = pls::cs::to_int32((num2 / pls::cs::Int64(16777216)));
        return result;
    }
}

// M:game.GameUtil.ChRectHitRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
bool GameUtil::ChRectHitRect(pls::cs::Int32 x1, pls::cs::Int32 y1, pls::cs::Int32 w1, pls::cs::Int32 h1,
                             pls::cs::Int32 x2, pls::cs::Int32 y2, pls::cs::Int32 w2, pls::cs::Int32 h2,
                             bool directUp) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.ChRectHitRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)",
        game);
    {
        if (x1 + w1 < x2) {
            return false;
        }
        if (x1 > x2 + w2) {
            return false;
        }
        if (directUp) {
            if (y1 < y2 - h2) {
                return false;
            }
            if (y1 - h1 > y2) {
                return false;
            }
        } else {
            if (y1 + h1 < y2) {
                return false;
            }
            if (y1 > y2 + h2) {
                return false;
            }
        }
        return true;
    }
}

// M:game.GameUtil.ChRectHitRect(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean)
bool GameUtil::ChRectHitRectFloat(pls::cs::Single x1, pls::cs::Single y1, pls::cs::Single w1,
                                  pls::cs::Single h1, pls::cs::Single x2, pls::cs::Single y2,
                                  pls::cs::Single w2, pls::cs::Single h2, bool directUp) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.ChRectHitRect(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean)",
        game);
    {
        if (x1 + w1 < x2) {
            return false;
        }
        if (x1 > x2 + w2) {
            return false;
        }
        if (directUp) {
            if (y1 < y2 - h2) {
                return false;
            }
            if (y1 - h1 > y2) {
                return false;
            }
        } else {
            if (y1 + h1 < y2) {
                return false;
            }
            if (y1 > y2 + h2) {
                return false;
            }
        }
        return true;
    }
}

// M:game.GameUtil.ChRectHitParallel(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
bool GameUtil::ChRectHitParallel(pls::cs::Int32 leftTopX, pls::cs::Int32 leftTopY, pls::cs::Int32 w,
                                 pls::cs::Int32 h, pls::cs::Int32 p1X, pls::cs::Int32 p1Y, pls::cs::Int32 p2X,
                                 pls::cs::Int32 p2Y) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.ChRectHitParallel(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        if (p1X < leftTopX) {
            return false;
        }
        if (p2X > leftTopX + w) {
            return false;
        }
        if (p2Y > leftTopY) {
            return false;
        }
        if (p1Y < leftTopY - h) {
            return false;
        }
        return true;
    }
}

// M:game.GameUtil.Pow(System.Int32,System.Int32)
pls::cs::Int32 GameUtil::Pow(pls::cs::Int32 x, pls::cs::Int32 y) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.Pow(System.Int32,System.Int32)", game);
    {
        pls::cs::Int32 num = 1;
        if (y > 0) {
            num = x;
        }
        for (pls::cs::Int32 i = 1; i < y; ++i) {
            num *= x;
        }
        return num;
    }
}

// M:game.GameUtil.Random(System.Int32)
pls::cs::Int32 GameUtil::Random(pls::cs::Int32 n) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.Random(System.Int32)", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JMath::AbsInt(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                              return require(GameUtil::random())->NextInt();
                                          }) %
                                          n);
        });
    }
}

// M:game.GameUtil.Clamp(System.Int32,System.Int32,System.Int32)
pls::cs::Int32 GameUtil::Clamp(pls::cs::Int32 val, pls::cs::Int32 min_, pls::cs::Int32 max_) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.Clamp(System.Int32,System.Int32,System.Int32)",
                     game);
    {
        if (val > max_) {
            val = max_;
        }
        if (val < min_) {
            val = min_;
        }
        return val;
    }
}

// M:game.GameUtil.Clamp(System.Int64,System.Int64,System.Int64)
pls::cs::Int64 GameUtil::ClampLong(pls::cs::Int64 val, pls::cs::Int64 min_, pls::cs::Int64 max_) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.Clamp(System.Int64,System.Int64,System.Int64)",
                     game);
    {
        if (val > max_) {
            val = max_;
        }
        if (val < min_) {
            val = min_;
        }
        return val;
    }
}

// M:game.GameUtil.ClampMin(System.Int32,System.Int32)
pls::cs::Int32 GameUtil::ClampMin(pls::cs::Int32 val, pls::cs::Int32 min_) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.ClampMin(System.Int32,System.Int32)", game);
    {
        if (val < min_) {
            return min_;
        }
        return val;
    }
}

// M:game.GameUtil.ClampMax(System.Int32,System.Int32)
pls::cs::Int32 GameUtil::ClampMax(pls::cs::Int32 val, pls::cs::Int32 max_) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.ClampMax(System.Int32,System.Int32)", game);
    {
        if (val > max_) {
            return max_;
        }
        return val;
    }
}

// M:game.GameUtil.ClampMin(System.Int64,System.Int64)
pls::cs::Int64 GameUtil::ClampMinLong(pls::cs::Int64 val, pls::cs::Int64 min_) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.ClampMin(System.Int64,System.Int64)", game);
    {
        if (val < min_) {
            return min_;
        }
        return val;
    }
}

// M:game.GameUtil.ClampMax(System.Int64,System.Int64)
pls::cs::Int64 GameUtil::ClampMaxLong(pls::cs::Int64 val, pls::cs::Int64 max_) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.ClampMax(System.Int64,System.Int64)", game);
    {
        if (val > max_) {
            return max_;
        }
        return val;
    }
}

// M:game.GameUtil.ConvertKeyToGameKey(System.Int32)
pls::cs::Int32 GameUtil::ConvertKeyToGameKey(pls::cs::Int32 input_key) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.ConvertKeyToGameKey(System.Int32)", game);
    {
        IntArray array = IntArray::from({131072, 524288, 65536, 262144, 1048576});
        pls::cs::Int32 num = -1;
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            if (input_key == array[i]) {
                num = i;
                break;
            }
        }
        if (num == -1) {
            return -1;
        }
        return num;
    }
}

// M:game.GameUtil.SetAMSet(System.Single,System.Int32,System.Int32)
pls::cs::Single GameUtil::SetAMSet(pls::cs::Single dis, pls::cs::Int32 t1, pls::cs::Int32 t2) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.SetAMSet(System.Single,System.Int32,System.Int32)",
                     game);
    {
        if (t1 * (t1 + t2) == 0) {
            return 0.0f;
        }
        return dis / pls::cs::Single((t1 * (t1 + t2)));
    }
}

// M:game.GameUtil.SetVStop(System.Single,System.Int32)
pls::cs::Single GameUtil::SetVStop(pls::cs::Single dis, pls::cs::Int32 t) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.SetVStop(System.Single,System.Int32)", game);
    {
        if (t == 1) {
            return 0.0f;
        }
        return 2.0f * dis / pls::cs::Single((t - 1));
    }
}

// M:game.GameUtil.SetAStop(System.Single,System.Int32)
pls::cs::Single GameUtil::SetAStop(pls::cs::Single dis, pls::cs::Int32 t) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.SetAStop(System.Single,System.Int32)", game);
    {
        if (t == 0 || t == 1) {
            return 0.0f;
        }
        return (-2.0f * dis) / pls::cs::Single((t * (t - 1)));
    }
}

// M:game.GameUtil.SetVReturn(System.Single,System.Int32)
pls::cs::Single GameUtil::SetVReturn(pls::cs::Single dis, pls::cs::Int32 t) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.SetVReturn(System.Single,System.Int32)", game);
    {
        return 2.0f * dis / pls::cs::Single((t + 2));
    }
}

// M:game.GameUtil.SetAReturn(System.Single,System.Int32)
pls::cs::Single GameUtil::SetAReturn(pls::cs::Single dis, pls::cs::Int32 t) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.SetAReturn(System.Single,System.Int32)", game);
    {
        return (-4.0f * dis) / pls::cs::Single((t * (t + 2)));
    }
}

// M:game.GameUtil.SetVVelocity(System.Single,System.Int32)
pls::cs::Single GameUtil::SetVVelocity(pls::cs::Single dis, pls::cs::Int32 t) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.SetVVelocity(System.Single,System.Int32)", game);
    {
        return dis / pls::cs::Single(t);
    }
}

// M:game.GameUtil.SetAVelocity(System.Single,System.Int32)
pls::cs::Single GameUtil::SetAVelocity(pls::cs::Single dis, pls::cs::Int32 t) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.SetAVelocity(System.Single,System.Int32)", game);
    {
        return 0.0f;
    }
}

// M:game.GameUtil.Convert_return(System.Single,System.Int32,System.Single)
pls::cs::Single GameUtil::Convert_return(pls::cs::Single time, pls::cs::Int32 TIME, pls::cs::Single DIS) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.GameUtil.Convert_return(System.Single,System.Int32,System.Single)", game);
    {
        if (time <= 0.0f) {
            return 0.0f;
        }
        if (time > pls::cs::Single(TIME)) {
            return 0.0f;
        }
        pls::cs::Single num = (-(8.0f * DIS)) / pls::cs::Single((TIME * TIME));
        pls::cs::Single num2 = 2.0f * DIS / pls::cs::Single(TIME) - num * pls::cs::Single((TIME + 2)) / 4.0f;
        return num2 * time + time * (time + 1.0f) * num / 2.0f;
    }
}

// M:game.GameUtil.SetVdecreV(System.Single,System.Single,System.Int32)
pls::cs::Single GameUtil::SetVdecreV(pls::cs::Single decre_rate, pls::cs::Single DIS, pls::cs::Int32 TIME) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.GameUtil.SetVdecreV(System.Single,System.Single,System.Int32)", game);
    {
        return 2.0f * DIS / (pls::cs::Single((2 * TIME)) + pls::cs::Single((TIME + 1)) * (decre_rate - 1.0f));
    }
}

// M:game.GameUtil.SetAdecreV(System.Single,System.Single,System.Int32)
pls::cs::Single GameUtil::SetAdecreV(pls::cs::Single decre_rate, pls::cs::Single DIS, pls::cs::Int32 TIME) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.GameUtil.SetAdecreV(System.Single,System.Single,System.Int32)", game);
    {
        pls::cs::Single num =
            2.0f * DIS / (pls::cs::Single((2 * TIME)) + pls::cs::Single((TIME + 1)) * (decre_rate - 1.0f));
        return (decre_rate - 1.0f) * num / pls::cs::Single(TIME);
    }
}

// M:game.GameUtil.SetV(System.Single,System.Single,System.Int32)
pls::cs::Single GameUtil::SetV(pls::cs::Single a, pls::cs::Single DIS, pls::cs::Int32 TIME) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.SetV(System.Single,System.Single,System.Int32)",
                     game);
    {
        return DIS / pls::cs::Single(TIME) - a * pls::cs::Single((TIME + 1)) / 2.0f;
    }
}

// M:game.GameUtil.GetA_fixV0DIS(System.Single,System.Single,System.Int32)
pls::cs::Single GameUtil::GetA_fixV0DIS(pls::cs::Single v0, pls::cs::Single DIS, pls::cs::Int32 TIME) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.GameUtil.GetA_fixV0DIS(System.Single,System.Single,System.Int32)", game);
    {
        {
            pls::cs::Single recoveredReturn =
                2.0f * (DIS - v0 * pls::cs::Single(TIME)) / pls::cs::Single((TIME * (TIME + 1)));
            return recoveredReturn;
        }
    }
}

// M:game.GameUtil.Sin(System.Int32)
pls::cs::Single GameUtil::Sin(pls::cs::Int32 angle) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.Sin(System.Int32)", game);
    {
        angle %= 360;
        if (angle < 0) {
            angle = 360 + angle;
        }
        if (angle <= 90) {
            return GameUtil::SIN()[angle];
        }
        if (angle <= 180) {
            return GameUtil::SIN()[180 - angle];
        }
        if (angle <= 270) {
            return -(GameUtil::SIN()[angle - 180]);
        }
        return -(GameUtil::SIN()[360 - angle]);
    }
}

// M:game.GameUtil.Cos(System.Int32)
pls::cs::Single GameUtil::Cos(pls::cs::Int32 angle) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameUtil.Cos(System.Int32)", game);
    {
        angle %= 360;
        if (angle < 0) {
            angle = 360 + angle;
        }
        if (angle <= 90) {
            return GameUtil::SIN()[90 - angle];
        }
        if (angle <= 180) {
            return -(GameUtil::SIN()[angle - 90]);
        }
        if (angle <= 270) {
            return -(GameUtil::SIN()[270 - angle]);
        }
        return GameUtil::SIN()[angle - 270];
    }
}

// M:game.GameUtil.GetDistanceFromPos(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)
pls::cs::Single GameUtil::GetDistanceFromPos(pls::cs::Ref<kl_util3d::Vector3D> a,
                                             pls::cs::Ref<kl_util3d::Vector3D> b,
                                             pls::cs::Ref<kl_util3d::Vector3D> c) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.GetDistanceFromPos(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)",
        game);
    {
        GameUtil::Sub(b, a, GameUtil::temp1());
        GameUtil::Sub(c, a, GameUtil::temp2());
        if (GameUtil::Dot(GameUtil::temp1(), GameUtil::temp2()) < 0.0f) {
            return GameUtil::Abs(c, a);
        }
        GameUtil::Sub(a, b, GameUtil::temp1());
        GameUtil::Sub(c, b, GameUtil::temp2());
        if (GameUtil::Dot(GameUtil::temp1(), GameUtil::temp2()) < 0.0f) {
            return GameUtil::Abs(c, b);
        }
        GameUtil::Sub(b, a, GameUtil::temp1());
        GameUtil::Sub(c, a, GameUtil::temp2());
        {
            auto cs_left_256 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::Single(
                    kl_lang::JMath::Abs(GameUtil::Cross(GameUtil::temp1(), GameUtil::temp2())));
            });
            auto cs_right_256 = GameUtil::Abs(b, a);
            return cs_left_256 / cs_right_256;
        }
    }
}

// M:game.GameUtil.Abs(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)
pls::cs::Single GameUtil::Abs(pls::cs::Ref<kl_util3d::Vector3D> a, pls::cs::Ref<kl_util3d::Vector3D> b) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.GameUtil.Abs(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)",
                     game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::cs::Single(
                kl_lang::JMath::Abs((require(a)->x_ - require(b)->x_) * (require(a)->x_ - require(b)->x_) +
                                    (require(a)->z_ - require(b)->z_) * (require(a)->z_ - require(b)->z_)));
        });
    }
}

// M:game.GameUtil.Dot(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)
pls::cs::Single GameUtil::Dot(pls::cs::Ref<kl_util3d::Vector3D> a, pls::cs::Ref<kl_util3d::Vector3D> b) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.GameUtil.Dot(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)",
                     game);
    {
        return require(a)->x_ * require(b)->x_ + require(a)->z_ * require(b)->z_;
    }
}

// M:game.GameUtil.Cross(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)
pls::cs::Single GameUtil::Cross(pls::cs::Ref<kl_util3d::Vector3D> a, pls::cs::Ref<kl_util3d::Vector3D> b) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.Cross(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)", game);
    {
        return require(a)->x_ * require(b)->z_ - require(a)->z_ * require(b)->x_;
    }
}

// M:game.GameUtil.ChCrossLine(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)
bool GameUtil::ChCrossLine(pls::cs::Ref<kl_util3d::Vector3D> a1, pls::cs::Ref<kl_util3d::Vector3D> a2,
                           pls::cs::Ref<kl_util3d::Vector3D> b1, pls::cs::Ref<kl_util3d::Vector3D> b2) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.ChCrossLine(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)",
        game);
    {
        GameUtil::Sub(a2, a1, GameUtil::temp1());
        GameUtil::Sub(b1, a1, GameUtil::temp2());
        pls::cs::Single num = GameUtil::Cross(GameUtil::temp1(), GameUtil::temp2());
        GameUtil::Sub(a2, a1, GameUtil::temp1());
        GameUtil::Sub(b2, a1, GameUtil::temp2());
        pls::cs::Single num2 = GameUtil::Cross(GameUtil::temp1(), GameUtil::temp2());
        GameUtil::Sub(b2, b1, GameUtil::temp1());
        GameUtil::Sub(a1, b1, GameUtil::temp2());
        pls::cs::Single num3 = GameUtil::Cross(GameUtil::temp1(), GameUtil::temp2());
        GameUtil::Sub(b2, b1, GameUtil::temp1());
        GameUtil::Sub(a2, b1, GameUtil::temp2());
        pls::cs::Single num4 = GameUtil::Cross(GameUtil::temp1(), GameUtil::temp2());
        return num * num2 < 0.0f && num3 * num4 < 0.0f;
    }
}

// M:game.GameUtil.GetCrossPoint(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)
pls::cs::Ref<kl_util3d::Vector3D> GameUtil::GetCrossPoint(pls::cs::Ref<kl_util3d::Vector3D> a1,
                                                          pls::cs::Ref<kl_util3d::Vector3D> a2,
                                                          pls::cs::Ref<kl_util3d::Vector3D> b1,
                                                          pls::cs::Ref<kl_util3d::Vector3D> b2) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.GetCrossPoint(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)",
        game);
    {
        GameUtil::Sub(a1, b1, GameUtil::temp1());
        GameUtil::Sub(a2, b1, GameUtil::temp2());
        GameUtil::Sub(b2, b1, GameUtil::temp3());
        pls::cs::Single num = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::cs::Single(
                kl_lang::JMath::Abs(GameUtil::Cross(GameUtil::temp3(), GameUtil::temp1())));
        });
        pls::cs::Single num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::cs::Single(
                kl_lang::JMath::Abs(GameUtil::Cross(GameUtil::temp3(), GameUtil::temp2())));
        });
        pls::cs::Single num3 = num / (num + num2);
        GameUtil::Sub(a2, a1, GameUtil::temp1());
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(GameUtil::temp3())
                ->Set(require(a1)->x_ + require(GameUtil::temp1())->x_ * num3, 0.0f,
                      require(a1)->z_ + require(GameUtil::temp1())->z_ * num3);
        });
        return GameUtil::temp3();
    }
}

// M:game.GameUtil.GetCrossPoint(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,System.Boolean)
pls::cs::Ref<kl_util3d::Vector3D> GameUtil::GetCrossPointBool(pls::cs::Ref<kl_util3d::Vector3D> a,
                                                              pls::cs::Ref<kl_util3d::Vector3D> b,
                                                              pls::cs::Ref<kl_util3d::Vector3D> c,
                                                              bool limit) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.GetCrossPoint(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,System.Boolean)",
        game);
    {
        GameUtil::Sub(b, a, GameUtil::temp1());
        GameUtil::Sub(c, a, GameUtil::temp2());
        pls::cs::Single num = (require(GameUtil::temp1())->x_ * require(GameUtil::temp2())->x_ +
                               require(GameUtil::temp1())->z_ * require(GameUtil::temp2())->z_) /
                              (require(GameUtil::temp1())->x_ * require(GameUtil::temp1())->x_ +
                               require(GameUtil::temp1())->z_ * require(GameUtil::temp1())->z_);
        if (limit) {
            if (num <= 0.0f) {
                return GameUtil::temp1();
            }
            if (num >= 1.0f) {
                return GameUtil::temp2();
            }
            require(GameUtil::temp3())->x_ = require(a)->x_ + num * require(GameUtil::temp1())->x_;
            require(GameUtil::temp3())->z_ = require(a)->z_ + num * require(GameUtil::temp1())->z_;
            return GameUtil::temp3();
        }
        require(GameUtil::temp3())->x_ = require(a)->x_ + num * require(GameUtil::temp1())->x_;
        require(GameUtil::temp3())->z_ = require(a)->z_ + num * require(GameUtil::temp1())->z_;
        return GameUtil::temp3();
    }
}

// M:game.GameUtil.ChOnLine(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,System.Single,kairo.unity.m3d4.util3d.Vector3D)
bool GameUtil::ChOnLine(pls::cs::Ref<kl_util3d::Vector3D> p1, pls::cs::Ref<kl_util3d::Vector3D> p2,
                        pls::cs::Single h, pls::cs::Ref<kl_util3d::Vector3D> target_pos) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.ChOnLine(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,System.Single,kairo.unity.m3d4.util3d.Vector3D)",
        game);
    {
        if (require(p2)->x_ == require(p1)->x_) {
            return false;
        }
        pls::cs::Single num = (require(p2)->z_ - require(p1)->z_) / (require(p2)->x_ - require(p1)->x_);
        pls::cs::Single num2 = require(p1)->z_ - num * require(p1)->x_;
        pls::cs::Single num3 = num * require(target_pos)->x_ + num2 + h / 2.0f;
        pls::cs::Single num4 = num * require(target_pos)->x_ + num2 - h / 2.0f;
        if (require(target_pos)->z_ <= num3 && require(target_pos)->z_ >= num4) {
            return true;
        }
        return false;
    }
}

// M:game.GameUtil.ChOnLine(System.Int32[],System.Int32[],System.Int32,System.Int32[])
bool GameUtil::ChOnLineIntArrayIntArrayIntIntArray(IntArray p1, IntArray p2, pls::cs::Int32 h,
                                                   IntArray target_pos) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.GameUtil.ChOnLine(System.Int32[],System.Int32[],System.Int32,System.Int32[])",
                     game);
    {
        if ([&]() -> bool {
                auto cs_left = p2[0];
                auto cs_right = p1[0];
                return cs_left == cs_right;
            }()) {
            pls::cs::Int32 num = ((([&]() -> bool {
                auto cs_left = p1[1];
                auto cs_right = p2[1];
                return cs_left > cs_right;
            }()))
                                      ? (p1[1])
                                      : (p2[1]));
            num += h / 2;
            if (target_pos[1] > num) {
                return false;
            }
            pls::cs::Int32 num2 = ((([&]() -> bool {
                auto cs_left = p1[1];
                auto cs_right = p2[1];
                return cs_left < cs_right;
            }()))
                                       ? (p1[1])
                                       : (p2[1]));
            num2 -= h / 2;
            if (target_pos[1] < num2) {
                return false;
            }
            if (([&]() -> bool {
                    auto cs_left = p1[0];
                    auto cs_right = target_pos[0] - h / 2;
                    return cs_left < cs_right;
                }()) ||
                ([&]() -> bool {
                    auto cs_left = p1[0];
                    auto cs_right = target_pos[0] + h / 2;
                    return cs_left > cs_right;
                }())) {
                return false;
            }
            return true;
        }
        pls::cs::Int32 num3 = ((([&]() -> bool {
            auto cs_left = p1[0];
            auto cs_right = p2[0];
            return cs_left < cs_right;
        }()))
                                   ? (p1[0])
                                   : (p2[0]));
        if (target_pos[0] < num3 - h / 2) {
            return false;
        }
        pls::cs::Int32 num4 = ((([&]() -> bool {
            auto cs_left = p1[0];
            auto cs_right = p2[0];
            return cs_left > cs_right;
        }()))
                                   ? (p1[0])
                                   : (p2[0]));
        if (target_pos[0] > num4 + h / 2) {
            return false;
        }
        pls::cs::Int32 num5 = ((([&]() -> bool {
            auto cs_left = p1[1];
            auto cs_right = p2[1];
            return cs_left > cs_right;
        }()))
                                   ? (p1[1])
                                   : (p2[1]));
        if (target_pos[1] > num5 + h / 2) {
            return false;
        }
        pls::cs::Int32 num6 = ((([&]() -> bool {
            auto cs_left = p1[1];
            auto cs_right = p2[1];
            return cs_left < cs_right;
        }()))
                                   ? (p1[1])
                                   : (p2[1]));
        if (target_pos[1] < num6 - h / 2) {
            return false;
        }
        GameUtil::vec1()[0] = ([&]() -> pls::cs::Int32 {
            auto cs_left = target_pos[0];
            auto cs_right = p1[0];
            return cs_left - cs_right;
        }());
        GameUtil::vec1()[1] = ([&]() -> pls::cs::Int32 {
            auto cs_left = target_pos[1];
            auto cs_right = p1[1];
            return cs_left - cs_right;
        }());
        GameUtil::vec2()[0] = ([&]() -> pls::cs::Int32 {
            auto cs_left = p2[0];
            auto cs_right = p1[0];
            return cs_left - cs_right;
        }());
        GameUtil::vec2()[1] = ([&]() -> pls::cs::Int32 {
            auto cs_left = p2[1];
            auto cs_right = p1[1];
            return cs_left - cs_right;
        }());
        pls::cs::Single num7 = pls::cs::Single((([&]() -> pls::cs::Double {
            auto cs_left = pls::cs::Double((([&]() -> pls::cs::Int32 {
                auto cs_left = ([&]() -> pls::cs::Int32 {
                    auto cs_left = GameUtil::vec1()[0];
                    auto cs_right = GameUtil::vec2()[1];
                    return cs_left * cs_right;
                }());
                auto cs_right = ([&]() -> pls::cs::Int32 {
                    auto cs_left = GameUtil::vec1()[1];
                    auto cs_right = GameUtil::vec2()[0];
                    return cs_left * cs_right;
                }());
                return cs_left - cs_right;
            }())));
            auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt(([&]() -> pls::cs::Int32 {
                    auto cs_left = ([&]() -> pls::cs::Int32 {
                        auto cs_left = GameUtil::vec2()[0];
                        auto cs_right = GameUtil::vec2()[0];
                        return cs_left * cs_right;
                    }());
                    auto cs_right = ([&]() -> pls::cs::Int32 {
                        auto cs_left = GameUtil::vec2()[1];
                        auto cs_right = GameUtil::vec2()[1];
                        return cs_left * cs_right;
                    }());
                    return cs_left + cs_right;
                }()));
            });
            return cs_left / cs_right;
        }())));
        if (num7 < pls::cs::Single((h / 2))) {
            return true;
        }
        return false;
    }
}

// M:game.GameUtil.Sub(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)
void GameUtil::Sub(pls::cs::Ref<kl_util3d::Vector3D> a, pls::cs::Ref<kl_util3d::Vector3D> b,
                   pls::cs::Ref<kl_util3d::Vector3D> var_out) {
    GameUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.GameUtil.Sub(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)",
        game);
    {
        require(var_out)->x_ = require(a)->x_ - require(b)->x_;
        require(var_out)->y_ = require(a)->y_ - require(b)->y_;
        require(var_out)->z_ = require(a)->z_ - require(b)->z_;
    }
}
} // namespace game
}
