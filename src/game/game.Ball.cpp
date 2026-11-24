// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.PlayerData.hpp"
#include "form.SoccerForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.Player.hpp"
#include "game.Team.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.Vector_1_templates.hpp"
#include "managed_float_format.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using FloatArray = pls::cs::Array<pls::cs::Single>;
using FloatArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Single>>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;
using IntArray3 = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>;

namespace pls::game {
namespace game {

void Ball::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(apdat_, visitor);
    pls::cs::trace_value(canvas_, visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(pos_, visitor);
    pls::cs::trace_value(shadowPos_, visitor);
    pls::cs::trace_value(fallPos_, visitor);
    pls::cs::trace_value(receiverPos_, visitor);
    pls::cs::trace_value(lineOutPos_, visitor);
    pls::cs::trace_value(v_, visitor);
    pls::cs::trace_value(a_, visitor);
    pls::cs::trace_value(address_, visitor);
    pls::cs::trace_value(screen_pos_, visitor);
    pls::cs::trace_value(screen_shadowPos_, visitor);
    pls::cs::trace_value(camera_pos_, visitor);
    pls::cs::trace_value(owner_, visitor);
    pls::cs::trace_value(lastOwner_, visitor);
    pls::cs::trace_value(savePos_, visitor);
    pls::cs::trace_value(saveV_, visitor);
    pls::cs::trace_value(saveA_, visitor);
    pls::cs::trace_value(old_pos, visitor);
    pls::cs::trace_value(temp_pos, visitor);
    pls::cs::trace_value(temp_spos, visitor);
    pls::cs::trace_value(camera_pos_shadow, visitor);
    pls::cs::trace_value(camera_pos_dribble, visitor);
    pls::cs::trace_value(rand_cos, visitor);
    pls::cs::trace_value(g1, visitor);
    pls::cs::trace_value(shoot_goalPos, visitor);
    pls::cs::trace_value(headableIndex, visitor);
}

static pls::cs::Array<FloatArray2> Ball_DRIBBLE_DIRECT_DIS_storage{};

static pls::cs::Int32 Ball_RECEIVE_WAIT_MIN_storage{};

static IntArray3 Ball_SAVING_OFF_storage{};

static pls::cs::Int32 Ball_SOUND_HEAD_storage{};

static IntArray Ball_SOUND_KICK_storage{};

static StringArray Ball_SOUND_NAME_storage{};

static IntArray Ball_SOUND_PASS_storage{};

static pls::cs::Int32 Ball_SOUND_RANDOM_storage{};

static IntArray Ball_SOUND_SHOOT_storage{};

static pls::cs::Int32 Ball_SOUND_SHOOT_HEAD_storage{};

static pls::cs::Int32 Ball_SOUND_SHOOT_KICK_storage{};

static IntArray2 Ball_THROWIN_OFF_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Ball_vec_GK_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Ball_vec1_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Ball_vec2_storage{};

static pls::cs::Ref<kl_util3d::Vector3D> Ball_vec3_storage{};

static PLS_NOINLINE void cs_init_86b804989f2a95bb_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(Ball_DRIBBLE_DIRECT_DIS_storage, visitor);
        pls::cs::trace_value(Ball_RECEIVE_WAIT_MIN_storage, visitor);
        pls::cs::trace_value(Ball_SAVING_OFF_storage, visitor);
        pls::cs::trace_value(Ball_SOUND_HEAD_storage, visitor);
        pls::cs::trace_value(Ball_SOUND_KICK_storage, visitor);
        pls::cs::trace_value(Ball_SOUND_NAME_storage, visitor);
        pls::cs::trace_value(Ball_SOUND_PASS_storage, visitor);
        pls::cs::trace_value(Ball_SOUND_RANDOM_storage, visitor);
        pls::cs::trace_value(Ball_SOUND_SHOOT_storage, visitor);
        pls::cs::trace_value(Ball_SOUND_SHOOT_HEAD_storage, visitor);
        pls::cs::trace_value(Ball_SOUND_SHOOT_KICK_storage, visitor);
        pls::cs::trace_value(Ball_THROWIN_OFF_storage, visitor);
        pls::cs::trace_value(Ball_vec_GK_storage, visitor);
        pls::cs::trace_value(Ball_vec1_storage, visitor);
        pls::cs::trace_value(Ball_vec2_storage, visitor);
        pls::cs::trace_value(Ball_vec3_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.Ball", flag, []() {
        Ball_RECEIVE_WAIT_MIN_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Ball.RECEIVE_WAIT_MIN", [&]() { return 5; });
        Ball_DRIBBLE_DIRECT_DIS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Ball.DRIBBLE_DIRECT_DIS", [&]() {
                return pls::cs::Array<FloatArray2>::from(
                    {FloatArray2::from({FloatArray::from({1.0f, -1.0f}), FloatArray::from({2.0f, -2.0f}),
                                        FloatArray::from({3.0f, -3.0f}), FloatArray::from({12.0f, -12.0f})}),
                     FloatArray2::from({FloatArray::from({1.0f, 1.0f}), FloatArray::from({2.0f, 2.0f}),
                                        FloatArray::from({3.0f, 3.0f}), FloatArray::from({12.0f, 12.0f})}),
                     FloatArray2::from({FloatArray::from({-1.0f, 1.0f}), FloatArray::from({-2.0f, 2.0f}),
                                        FloatArray::from({-3.0f, 3.0f}), FloatArray::from({-12.0f, 12.0f})}),
                     FloatArray2::from({FloatArray::from({-1.0f, -1.0f}), FloatArray::from({-2.0f, -2.0f}),
                                        FloatArray::from({-3.0f, -3.0f}),
                                        FloatArray::from({-12.0f, -12.0f})})});
            });
        Ball_THROWIN_OFF_storage = pls::cs::evaluate_type_initializer_field("F:game.Ball.THROWIN_OFF", [&]() {
            return IntArray2::from({IntArray::from({0, -15}), IntArray::from({0, -15}),
                                    IntArray::from({-1, -15}), IntArray::from({-1, -15})});
        });
        Ball_SAVING_OFF_storage = pls::cs::evaluate_type_initializer_field("F:game.Ball.SAVING_OFF", [&]() {
            return IntArray3::from({IntArray2::from({IntArray::from({-5, -9}), IntArray::from({2, -12}),
                                                     IntArray::from({7, 0})}),
                                    IntArray2::from({IntArray::from({-8, -8}), IntArray::from({-1, -12}),
                                                     IntArray::from({7, 0})})});
        });
        Ball_SOUND_PASS_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Ball.SOUND_PASS", [&]() { return IntArray::from({8, 8, 10, 9, 9, 8}); });
        Ball_SOUND_SHOOT_KICK_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Ball.SOUND_SHOOT_KICK", [&]() { return 15; });
        Ball_SOUND_SHOOT_HEAD_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Ball.SOUND_SHOOT_HEAD", [&]() { return 16; });
        Ball_SOUND_HEAD_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Ball.SOUND_HEAD", [&]() { return 10; });
        Ball_SOUND_NAME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Ball.SOUND_NAME", [&]() { return StringArray::make(0); });
        Ball_SOUND_KICK_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Ball.SOUND_KICK", [&]() { return IntArray::from({8, 9, 10}); });
        Ball_SOUND_SHOOT_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Ball.SOUND_SHOOT", [&]() { return IntArray::from({15, 16}); });
        Ball_SOUND_RANDOM_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Ball.SOUND_RANDOM", [&]() { return 1; });
        Ball_vec1_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Ball.vec1", [&]() { return kl_util3d::Vector3D::create(); });
        Ball_vec2_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Ball.vec2", [&]() { return kl_util3d::Vector3D::create(); });
        Ball_vec3_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Ball.vec3", [&]() { return kl_util3d::Vector3D::create(); });
        Ball_vec_GK_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Ball.vec_GK", [&]() { return kl_util3d::Vector3D::create(); });
    });
}

void Ball::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_86b804989f2a95bb_slow(flag);
}

pls::cs::Array<FloatArray2>& Ball::DRIBBLE_DIRECT_DIS() {
    Ball::ensure_initialized();
    return Ball_DRIBBLE_DIRECT_DIS_storage;
}

pls::cs::Int32& Ball::RECEIVE_WAIT_MIN() {
    Ball::ensure_initialized();
    return Ball_RECEIVE_WAIT_MIN_storage;
}

IntArray3& Ball::SAVING_OFF() {
    Ball::ensure_initialized();
    return Ball_SAVING_OFF_storage;
}

pls::cs::Int32& Ball::SOUND_HEAD() {
    Ball::ensure_initialized();
    return Ball_SOUND_HEAD_storage;
}

IntArray& Ball::SOUND_KICK() {
    Ball::ensure_initialized();
    return Ball_SOUND_KICK_storage;
}

StringArray& Ball::SOUND_NAME() {
    Ball::ensure_initialized();
    return Ball_SOUND_NAME_storage;
}

IntArray& Ball::SOUND_PASS() {
    Ball::ensure_initialized();
    return Ball_SOUND_PASS_storage;
}

pls::cs::Int32& Ball::SOUND_RANDOM() {
    Ball::ensure_initialized();
    return Ball_SOUND_RANDOM_storage;
}

IntArray& Ball::SOUND_SHOOT() {
    Ball::ensure_initialized();
    return Ball_SOUND_SHOOT_storage;
}

pls::cs::Int32& Ball::SOUND_SHOOT_HEAD() {
    Ball::ensure_initialized();
    return Ball_SOUND_SHOOT_HEAD_storage;
}

pls::cs::Int32& Ball::SOUND_SHOOT_KICK() {
    Ball::ensure_initialized();
    return Ball_SOUND_SHOOT_KICK_storage;
}

IntArray2& Ball::THROWIN_OFF() {
    Ball::ensure_initialized();
    return Ball_THROWIN_OFF_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Ball::vec_GK() {
    Ball::ensure_initialized();
    return Ball_vec_GK_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Ball::vec1() {
    Ball::ensure_initialized();
    return Ball_vec1_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Ball::vec2() {
    Ball::ensure_initialized();
    return Ball_vec2_storage;
}

pls::cs::Ref<kl_util3d::Vector3D>& Ball::vec3() {
    Ball::ensure_initialized();
    return Ball_vec3_storage;
}

void Ball::create_init(pls::cs::Ref<Ball> self) {
    Ball::ensure_initialized();
    self->savePos_ = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(300);
    self->saveV_ = kl_util3d::Vector3D::create();
    self->saveA_ = kl_util3d::Vector3D::create();
    self->old_pos = kl_util3d::Vector3D::create();
    self->temp_pos = kl_util3d::Vector3D::create();
    self->temp_spos = IntArray::make(2);
    self->MIN_AY = -0.2f;
    self->camera_pos_shadow = IntArray::make(2);
    self->camera_pos_dribble = IntArray::make(2);
    self->rand_cos = IntArray::make(3);
    self->g1 = kl_util3d::Vector3D::create();
    self->shoot_goalPos = kl_util3d::Vector3D::create();
    self->headableIndex = IntArray::make(2);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.#ctor", game);
    {
    }
}

// M:game.Ball.#ctor
pls::cs::Ref<Ball> Ball::create() {
    Ball::ensure_initialized();
    auto self = pls::cs::make_ref<Ball>();
    Ball::create_init(self);
    return self;
}

// M:game.Ball.Init
void Ball::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.Init", game);
    {
        apdat_ = main::AppData::GetInstance();
        udat_ = UserData::GetInstance();
        canvas_ =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); });
        frame_ = 0;
        direct_ = 0;
        pos_ = kl_util3d::Vector3D::create();
        shadowPos_ = kl_util3d::Vector3D::create();
        fallPos_ = kl_util3d::Vector3D::create();
        receiverPos_ = kl_util3d::Vector3D::create();
        lineOutPos_ = kl_util3d::Vector3D::create();
        v_ = kl_util3d::Vector3D::create();
        a_ = kl_util3d::Vector3D::create();
        address_ = IntArray::make(2);
        screen_pos_ = IntArray::make(2);
        screen_shadowPos_ = IntArray::make(2);
        camera_pos_ = IntArray::make(2);
        flag_ = 0;
        state_ = 0;
        stateCnt_ = 0;
        owner_ = pls::cs::Ref<Player>{};
        lastOwner_ = pls::cs::Ref<Player>{};
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 2); });
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 8); });
        rotate_ = 0;
        boundNum_ = 0;
        savePos_ = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(300);
        for (pls::cs::Int32 i = 0; i < savePos_.length(); ++i) {
            {
                auto cs_target = savePos_;
                auto cs_index = i;
                auto cs_value = kl_util3d::Vector3D::create();
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        saveV_ = kl_util3d::Vector3D::create();
        saveA_ = kl_util3d::Vector3D::create();
        savePosFrame_ = 0;
        targetPId = -1;
    }
}

// M:game.Ball.Update
bool Ball::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.Update", game);
    {
        form::SoccerForm::ensure_initialized();
        Map::ensure_initialized();

        frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
        savePosFrame_ = ((savePosFrame_ + 1) % 2147483647 /* Int32.MaxValue */);
        bool flag = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(flag_, 64); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(old_pos)->Set(pos_); });
        if (form::SoccerForm::DEBUG_BALLTEST_MODE() == 1) {
            bool flag2 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(131072); });
            bool flag3 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(524288); });
            bool flag4 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(65536); });
            bool flag5 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(262144); });
            bool flag6 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(128); });
            bool flag7 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(256); });
            if (flag2) {
                require(pos_)->z_ = require(pos_)->z_ + 10.0f;
            }
            if (flag3) {
                require(pos_)->z_ = require(pos_)->z_ + -10.0f;
            }
            if (flag4) {
                require(pos_)->x_ = require(pos_)->x_ + -10.0f;
            }
            if (flag5) {
                require(pos_)->x_ = require(pos_)->x_ + 10.0f;
            }
            if (flag6) {
                require(pos_)->y_ = require(pos_)->y_ + 3.0f;
            }
            if (flag7) {
                require(pos_)->y_ = require(pos_)->y_ + -3.0f;
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(v_)->Set(0.0f, 0.0f, 0.0f); });
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(a_)->Set(0.0f, 0.0f, 0.0f); });
        }
        if (!is_null(owner_)) {
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(pos_)->Set(require(owner_)->pos_); });
        } else {
            pls::cs::Single unusedOriginalSlot7;
            pls::cs::Single dragX;
            pls::cs::Single dragZ;
            if (require(a_)->y_ == 0.0f || require(v_)->y_ == 0.0f || require(pos_)->y_ <= 0.0f) {
                dragX = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, 60.0f, 0.99f, 0.93f, true);
                dragZ = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, 60.0f, 0.99f, 0.93f, true);
                require(v_)->x_ = (require(v_)->x_) * (dragX);
                require(v_)->z_ = (require(v_)->z_) * (dragZ);
            } else if (!flag) {
                if (require(a_)->y_ == -0.25f || require(a_)->y_ == -0.35f) {
                    dragX = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, fallTime_ * 100 / 100, 0.995f,
                                                       0.96f, true);
                    dragZ = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, fallTime_ * 100 / 100, 0.995f,
                                                       0.96f, true);
                } else {
                    dragX = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, fallTime_ * 100 / 100, 0.995f,
                                                       0.97f, true);
                    dragZ = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, fallTime_ * 100 / 100, 0.995f,
                                                       0.97f, true);
                }
                require(v_)->x_ = (require(v_)->x_) * (dragX);
                require(v_)->y_ = (require(v_)->y_) * 0.995f;
                require(v_)->z_ = (require(v_)->z_) * (dragZ);
            }
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(v_)->Add(a_); });
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(pos_)->Add(v_); });
            v_len_ = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt(require(v_)->x_ * require(v_)->x_ +
                                            require(v_)->z_ * require(v_)->z_);
            }));
        }
        if (receive_wait >= 0) {
            --receive_wait;
            if (receive_wait <= 0) {
                flag_ = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 8); });
            }
        }
        if (require(pos_)->y_ < 0.0f) {
            ++boundNum_;
            require(pos_)->y_ = require(pos_)->y_ * -1.0f;
            require(v_)->y_ = (-(require(v_)->y_)) / 2.0f;
            require(v_)->x_ = (require(v_)->x_) * 0.9f;
            require(v_)->z_ = (require(v_)->z_) * 0.9f;
            require(a_)->x_ = 0.0f;
            require(a_)->z_ = 0.0f;
            if (require(v_)->y_ < 0.3f) {
                SetStop();
            } else {
                SetSavePos(pos_, v_, a_);
            }
            targetPId = -1;
            if (require(pos_)->x_ < -530.0f || require(pos_)->x_ > 530.0f || require(pos_)->z_ > 980.0f ||
                require(pos_)->z_ < -980.0f) {
                flag_ = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 1); });
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(v_)->Set(0.0f, 0.0f, 0.0f); });
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(a_)->Set(0.0f, 0.0f, 0.0f); });
            }
        }
        if (!pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(flag_, 16); }) &&
            (require(pos_)->x_ < -530.0f || require(pos_)->x_ > 530.0f || require(pos_)->z_ > 980.0f ||
             require(pos_)->z_ < -980.0f)) {
            flag_ = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 1); });
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(v_)->Set(0.0f, 0.0f, 0.0f); });
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(a_)->Set(0.0f, 0.0f, 0.0f); });
        }
        bool flag8 = false;
        bool flag9 = false;
        pls::cs::Single unusedOriginalSlot12;
        chInGoal_ = 2;
        if (require(pos_)->z_ > 900.0f || require(pos_)->z_ < -900.0f) {
            bool flag10 = false;
            bool flag11 = false;
            bool flag12 = false;
            if (require(pos_)->y_ < 26.0f) {
                if (([&]() -> pls::cs::FloatEval {
                        auto cs_left = (([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ + 11.0f;
                            auto cs_right = require(old_pos)->x_;
                            return cs_left - cs_right;
                        }()));
                        auto cs_right = (([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ + 11.0f;
                            auto cs_right = require(pos_)->x_;
                            return cs_left - cs_right;
                        }()));
                        return cs_left * cs_right;
                    }()) <= 0.0f) {
                    if ([&]() -> bool {
                            auto cs_left = require(old_pos)->x_;
                            auto cs_right = require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ + 11.0f;
                            return cs_left < cs_right;
                        }()) {
                        {
                            auto cs_target = pos_;
                            pls::cs::Single cs_value =
                                require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ + 11.0f - 1.0f;
                            require(cs_target)->x_ = cs_value;
                        }
                    } else {
                        {
                            auto cs_target = pos_;
                            pls::cs::Single cs_value =
                                require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ + 11.0f + 1.0f;
                            require(cs_target)->x_ = cs_value;
                        }
                    }
                    flag9 = true;
                }
                if (([&]() -> pls::cs::FloatEval {
                        auto cs_left = (([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ - 11.0f;
                            auto cs_right = require(old_pos)->x_;
                            return cs_left - cs_right;
                        }()));
                        auto cs_right = (([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ - 11.0f;
                            auto cs_right = require(pos_)->x_;
                            return cs_left - cs_right;
                        }()));
                        return cs_left * cs_right;
                    }()) <= 0.0f) {
                    if ([&]() -> bool {
                            auto cs_left = require(old_pos)->x_;
                            auto cs_right = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ - 11.0f;
                            return cs_left > cs_right;
                        }()) {
                        {
                            auto cs_target = pos_;
                            pls::cs::Single cs_value =
                                require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ - 11.0f + 1.0f;
                            require(cs_target)->x_ = cs_value;
                        }
                    } else {
                        {
                            auto cs_target = pos_;
                            pls::cs::Single cs_value =
                                require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ - 11.0f - 1.0f;
                            require(cs_target)->x_ = cs_value;
                        }
                    }
                    flag9 = true;
                }
            }
            if (([&]() -> bool {
                    auto cs_left = require(pos_)->x_;
                    auto cs_right = require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ + 11.0f;
                    return cs_left >= cs_right;
                }()) &&
                ([&]() -> bool {
                    auto cs_left = require(pos_)->x_;
                    auto cs_right = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ - 11.0f;
                    return cs_left <= cs_right;
                }())) {
                flag10 = true;
            }
            if (flag10) {
                if (require(pos_)->y_ < 26.0f) {
                    if (([&]() -> pls::cs::FloatEval {
                            auto cs_left = (([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(Map::GOAL2_GLOBAL_POS().get_Item(2))->z_ - 11.0f;
                                auto cs_right = require(old_pos)->z_;
                                return cs_left - cs_right;
                            }()));
                            auto cs_right = (([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(Map::GOAL2_GLOBAL_POS().get_Item(2))->z_ - 11.0f;
                                auto cs_right = require(pos_)->z_;
                                return cs_left - cs_right;
                            }()));
                            return cs_left * cs_right;
                        }()) <= 0.0f) {
                        {
                            auto cs_target = pos_;
                            pls::cs::Single cs_value =
                                require(Map::GOAL2_GLOBAL_POS().get_Item(2))->z_ - 11.0f - 1.0f;
                            require(cs_target)->z_ = cs_value;
                        }
                        flag9 = true;
                    }
                    if (([&]() -> pls::cs::FloatEval {
                            auto cs_left = (([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->z_ + 11.0f;
                                auto cs_right = require(old_pos)->z_;
                                return cs_left - cs_right;
                            }()));
                            auto cs_right = (([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->z_ + 11.0f;
                                auto cs_right = require(pos_)->z_;
                                return cs_left - cs_right;
                            }()));
                            return cs_left * cs_right;
                        }()) <= 0.0f) {
                        {
                            auto cs_target = pos_;
                            pls::cs::Single cs_value =
                                require(Map::GOAL1_GLOBAL_POS().get_Item(2))->z_ + 11.0f + 1.0f;
                            require(cs_target)->z_ = cs_value;
                        }
                        flag9 = true;
                    }
                }
                if (require(pos_)->z_ >= 900.0f && ([&]() -> bool {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = require(Map::GOAL2_GLOBAL_POS().get_Item(2))->z_ - 11.0f;
                        return cs_left <= cs_right;
                    }())) {
                    flag12 = true;
                }
                if (require(pos_)->z_ <= -900.0f && ([&]() -> bool {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->z_ + 11.0f;
                        return cs_left >= cs_right;
                    }())) {
                    flag12 = true;
                }
                if (flag12) {
                    if ((21.0f - require(old_pos)->y_) * (21.0f - require(pos_)->y_) <= 0.0f) {
                        if (require(old_pos)->y_ > 21.0f) {
                            require(pos_)->y_ = 22.0f;
                        } else {
                            require(pos_)->y_ = 20.0f;
                        }
                    }
                    if (require(pos_)->y_ < 21.0f) {
                        if (require(pos_)->z_ < 0.0f) {
                            chInGoal_ = 0;
                        } else {
                            chInGoal_ = 1;
                        }
                    }
                    if (require(require(udat_)->gm_)->state_ == 0 && require(pos_)->y_ < 21.0f &&
                        form::SoccerForm::DEBUG_BALLTEST_MODE() == 0) {
                        require(require(udat_)->gm_)->ChangeState(8);
                    }
                }
            }
            if (require(pos_)->y_ < 21.0f) {
                if (([&]() -> pls::cs::FloatEval {
                        auto cs_left = (([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ - 11.0f;
                            auto cs_right = require(old_pos)->x_;
                            return cs_left - cs_right;
                        }()));
                        auto cs_right = (([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ - 11.0f;
                            auto cs_right = require(pos_)->x_;
                            return cs_left - cs_right;
                        }()));
                        return cs_left * cs_right;
                    }()) <= 0.0f) {
                    if ([&]() -> bool {
                            auto cs_left = require(old_pos)->x_;
                            auto cs_right = require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ - 11.0f;
                            return cs_left < cs_right;
                        }()) {
                        {
                            auto cs_target = pos_;
                            pls::cs::Single cs_value =
                                require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ - 11.0f - 1.0f;
                            require(cs_target)->x_ = cs_value;
                        }
                    } else {
                        {
                            auto cs_target = pos_;
                            pls::cs::Single cs_value =
                                require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ - 11.0f + 1.0f;
                            require(cs_target)->x_ = cs_value;
                        }
                    }
                }
                if (([&]() -> pls::cs::FloatEval {
                        auto cs_left = (([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ + 11.0f;
                            auto cs_right = require(old_pos)->x_;
                            return cs_left - cs_right;
                        }()));
                        auto cs_right = (([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ + 11.0f;
                            auto cs_right = require(pos_)->x_;
                            return cs_left - cs_right;
                        }()));
                        return cs_left * cs_right;
                    }()) <= 0.0f) {
                    if ([&]() -> bool {
                            auto cs_left = require(old_pos)->x_;
                            auto cs_right = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ + 11.0f;
                            return cs_left > cs_right;
                        }()) {
                        {
                            auto cs_target = pos_;
                            pls::cs::Single cs_value =
                                require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ + 11.0f + 1.0f;
                            require(cs_target)->x_ = cs_value;
                        }
                    } else {
                        {
                            auto cs_target = pos_;
                            pls::cs::Single cs_value =
                                require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ + 11.0f - 1.0f;
                            require(cs_target)->x_ = cs_value;
                        }
                    }
                }
            }
            if (([&]() -> bool {
                    auto cs_left = require(pos_)->x_;
                    auto cs_right = require(Map::GOAL1_GLOBAL_POS().get_Item(0))->x_ - 11.0f;
                    return cs_left <= cs_right;
                }()) ||
                ([&]() -> bool {
                    auto cs_left = require(pos_)->x_;
                    auto cs_right = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->x_ + 11.0f;
                    return cs_left >= cs_right;
                }())) {
                flag11 = true;
            }
            if ((require(old_pos)->z_ <= 900.0f || require(old_pos)->z_ >= -900.0f) &&
                ((!flag10 && !flag11 && require(pos_)->y_ < 21.0f) ||
                 (flag10 && require(pos_)->y_ >= 21.0f && require(pos_)->y_ < 32.0f)) &&
                require(require(udat_)->gm_)->state_ == 0) {
                flag8 = true;
                if (require(pos_)->z_ > 0.0f) {
                    require(pos_)->z_ = 900.0f + (900.0f - require(pos_)->z_);
                    {
                        auto cs_target = pos_;
                        pls::cs::Single cs_value =
                            main::AppData::ClampMax(pls::cs::to_int32(require(pos_)->z_), 899);
                        require(cs_target)->z_ = cs_value;
                    }
                } else {
                    require(pos_)->z_ = (-900.0f + ((-900.0f - require(pos_)->z_)));
                    {
                        auto cs_target = pos_;
                        pls::cs::Single cs_value =
                            main::AppData::ClampMin(pls::cs::to_int32(require(pos_)->z_), -899);
                        require(cs_target)->z_ = cs_value;
                    }
                }
                require(v_)->x_ = require(v_)->x_ * 25.0f / 100.0f;
                require(v_)->z_ = (-(require(v_)->z_)) * 25.0f / 100.0f;
                ChGravity();
                SetSavePos(pos_, v_, a_);
                targetPId = -1;
                flag_ = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 96); });
                require(apdat_)->PlaySe(6);
            }
        }
        if (flag9) {
            require(v_)->y_ = (require(v_)->y_) * 0.9f;
            require(a_)->y_ = (require(a_)->y_) * 0.9f;
            if (require(a_)->y_ > -0.1f) {
                require(a_)->y_ = -0.1f;
            }
        }
        bool flag13 = false;
        if ((require(require(udat_)->gm_)->state_ == 0)) {
            if (form::SoccerForm::DEBUG_BALLTEST_MODE() == 0) {
                if (require(pos_)->x_ < -450.0f) {
                    if (form::SoccerForm::DEBUG_WALLREFRECT() == 1) {
                        require(pos_)->x_ = (-450.0f + ((-450.0f - require(pos_)->x_)));
                        require(v_)->x_ = require(v_)->x_ * -1.0f;
                    } else {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(lineOutPos_)->Set(pos_); });
                    }
                    flag13 = true;
                }
                if (require(pos_)->x_ > 450.0f) {
                    if (form::SoccerForm::DEBUG_WALLREFRECT() == 1) {
                        require(pos_)->x_ = 450.0f + (450.0f - require(pos_)->x_);
                        require(v_)->x_ = require(v_)->x_ * -1.0f;
                    } else {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(lineOutPos_)->Set(pos_); });
                    }
                    flag13 = true;
                }
                if (require(pos_)->z_ > 900.0f) {
                    if (form::SoccerForm::DEBUG_WALLREFRECT() == 1) {
                        require(pos_)->z_ = 900.0f + (900.0f - require(pos_)->z_);
                        require(v_)->z_ = require(v_)->z_ * -1.0f;
                    } else {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(lineOutPos_)->Set(pos_); });
                    }
                    flag13 = true;
                }
                if (require(pos_)->z_ < -900.0f) {
                    if (form::SoccerForm::DEBUG_WALLREFRECT() == 1) {
                        require(pos_)->z_ = (-900.0f + ((-900.0f - require(pos_)->z_)));
                        require(v_)->z_ = require(v_)->z_ * -1.0f;
                    } else {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(lineOutPos_)->Set(pos_); });
                    }
                    flag13 = true;
                }
                if (flag13 && !flag8) {
                    if (form::SoccerForm::DEBUG_BALLTEST_MODE() == 1) {

                    } else if (form::SoccerForm::DEBUG_WALLREFRECT() == 1) {
                        ChGravity();
                        SetSavePos(pos_, v_, a_);
                        targetPId = -1;
                    } else if (require(lineOutPos_)->z_ < -900.0f || require(lineOutPos_)->z_ > 900.0f) {
                        pls::cs::Int32 num3 = -1;
                        if (require(lineOutPos_)->z_ > 900.0f) {
                            num3 = 1;
                        }
                        pls::cs::Int32 num4 = -1;
                        if (!is_null(lastOwner_) && require(lastOwner_)->team_id_ == 1) {
                            num4 = 1;
                        }
                        if (num3 * num4 == -1) {
                            require(require(udat_)->gm_)->ChangeState(4);
                        } else {
                            require(require(udat_)->gm_)->ChangeState(5);
                        }
                    } else {
                        require(require(udat_)->gm_)->ChangeState(3);
                    }
                }
            }
        }
        Camera::ConvertGlobalToAddress(pos_, address_);
        Camera::ConvertGlobalToScreen(pos_, screen_pos_);
        require(shadowPos_)->x_ = require(pos_)->x_;
        require(shadowPos_)->z_ = require(pos_)->z_;
        Camera::ConvertGlobalToScreen(shadowPos_, screen_shadowPos_);
        return false;
    }
}

// M:game.GameManager.Update
void GameManager::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameManager.Update", game);
    {
        Camera::ensure_initialized();
        form::SoccerForm::ensure_initialized();
        kl_cfg::Config::ensure_initialized();

        stateCnt_ = ((stateCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
        gameStateCnt_ = ((gameStateCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
        frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (state_ == 3) {
            if ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = GameManager::WAIT_THROWIN()[0];
                    return cs_left == cs_right;
                }()) {
                SetBallTeam(1 - require(require(require(GameManager::udat_())->ball_)->lastOwner_)->team_id_);
                require(require(GameManager::udat_())->teams_.get_Item(0))->SetPositionThrowIn();
                require(require(GameManager::udat_())->teams_.get_Item(1))->SetPositionThrowIn();
            }
        } else if (state_ == 4) {
            if ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = GameManager::WAIT_GK()[0];
                    return cs_left == cs_right;
                }()) {
                if (!is_null(require(require(GameManager::udat_())->ball_)->owner_)) {
                    require(require(GameManager::udat_())->ball_)
                        ->Ball::ReleaseBall(require(require(GameManager::udat_())->ball_)->owner_);
                    if (require(require(require(GameManager::udat_())->ball_)->lineOutPos_)->z_ > 0.0f) {
                        SetBallTeam(1);
                    } else {
                        SetBallTeam(0);
                    }
                } else {
                    SetBallTeam(1 -
                                require(require(require(GameManager::udat_())->ball_)->lastOwner_)->team_id_);
                }
                require(require(GameManager::udat_())->teams_.get_Item(0))->SetPositionGoalKick();
                require(require(GameManager::udat_())->teams_.get_Item(1))->SetPositionGoalKick();
            }
        } else if (state_ == 5) {
            if ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = GameManager::WAIT_CK()[0];
                    return cs_left == cs_right;
                }()) {
                SetBallTeam(1 - require(require(require(GameManager::udat_())->ball_)->lastOwner_)->team_id_);
                require(require(GameManager::udat_())->teams_.get_Item(0))->SetPositionConnerKick();
                require(require(GameManager::udat_())->teams_.get_Item(1))->SetPositionConnerKick();
            }
        } else if (state_ == 8) {
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(pls::diagnostic::api_call(
                                       [&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); }))
                        ->CheckKeyRepeat(1048576);
                }) &&
                ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = GameManager::WAIT_GOAL()[1];
                    return cs_left > cs_right;
                }())) {
                stateCnt_ = GameManager::WAIT_GOAL()[2] - 5;
            }
            if (([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = GameManager::WAIT_GOAL()[2] - 5;
                    return cs_left == cs_right;
                }()) &&
                ((!require(require(GameManager::udat_())->gm_)->halfTime &&
                  require(require(GameManager::udat_())->gm_)->gameState_ == 1) ||
                 (require(require(GameManager::udat_())->gm_)->halfTime &&
                  require(require(GameManager::udat_())->gm_)->gameState_ == 0)) &&
                !require(GameManager::apdat_())->CheckAlreadyEvent(138)) {
                require(GameManager::apdat_())->ExecEvent(138, pls::cs::String{}, IntArray{});
            }
            if ([&]() -> bool {
                    auto cs_left = stateCnt_;
                    auto cs_right = GameManager::WAIT_GOAL()[2];
                    return cs_left >= cs_right;
                }()) {
                ChangeState(2);
            }
        } else if (state_ == 1) {
            if (stateCnt_ == 1 || stateCnt_ == 2) {
                require(require(GameManager::apdat_())->frmSoccer_)->SetAllDraw();
            }
            if (stateCnt_ >= 40 && require(require(GameManager::udat_())->gm_)->halfTime &&
                !require(GameManager::apdat_())->CheckAlreadyEvent(153)) {
                require(GameManager::apdat_())->ExecEvent(153, pls::cs::String{}, IntArray{});
            }
        } else if (state_ == 9 && stateCnt_ >= 30) {
            bool flag = halfTime;
            if (!halfTime) {
                halfTime = true;
                require(require(GameManager::apdat_())->frmSoccer_)->ChangeState(6);
                pls::cs::Ref<kl_util3d::Vector3D> global_pos = kl_util3d::Vector3D::create();
                IntArray array = IntArray::make(2);
                Camera::ConvertGlobalToScreen(global_pos, array);
                {
                    auto cs_target = Camera::pos();
                    pls::cs::Single cs_value = array[0];
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = Camera::pos();
                    pls::cs::Single cs_value = array[1];
                    require(cs_target)->y_ = cs_value;
                }
            } else {
                require(require(GameManager::apdat_())->frmSoccer_)->ChangeState(2);
            }
            if ((!halfTime && score_[1] == 0) || (halfTime && score_[0] == 0)) {
                pls::cs::Ref<Player> player = pls::cs::Ref<Player>{};
                if (!(halfTime)) {
                    player = require(require(GameManager::udat_())->teams_.get_Item(0))->players_.get_Item(0);
                } else {
                    player = require(require(GameManager::udat_())->teams_.get_Item(1))->players_.get_Item(1);
                }
                require(require(GameManager::apdat_())->pData_.get_Item(require(player)->pData_id_))
                    ->SetActScore(16);
            }
            if (!flag) {
                ChangeState(1);
            }
        }
        bool flag2 = true;
        if (form::SoccerForm::DEBUG_BALLTEST_MODE() == 1) {
            flag2 = false;
        }
        if ((state_ == 0) && (flag2)) {
            if (form::SoccerForm::DEBUG_GAMETIMESTOP() == 0) {
                pls::cs::Single num = gameTime_;
                gameTime_ = gameTime_ + GameManager::ADDTIME();
                if ((num - pls::cs::Single((GameManager::HALFTIME() / 2))) *
                        (gameTime_ - pls::cs::Single((GameManager::HALFTIME() / 2))) <
                    0.0f) {
                    {
                        pls::cs::GcCallSite gc_site("M:game.GameManager.Update");
                        pls::diagnostic::api_call([&]() -> decltype(auto) { return kl_lang::JSystem::Gc(); });
                    }
                }
            }
            if (kl_cfg::Config::DEBUG_CMD() && form::SoccerForm::DEBUG_8KEY_FAST() == 1 &&
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(pls::diagnostic::api_call(
                                       [&]() -> decltype(auto) { return pls::kairo::Canvas::GetInstance(); }))
                        ->CheckKeyPulse(256);
                })) {
                gameTime_ = gameTime_ + GameManager::HALFTIME();
                halfTime = true;
            }
            if (gameTime_ >= pls::cs::Single(GameManager::HALFTIME())) {
                gameTime_ = GameManager::HALFTIME();
                ChangeState(9);
            }
        }
    }
}

// M:game.Ball.ChGravity
void Ball::ChGravity() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.ChGravity", game);
    {
        if (require(a_)->y_ != 0.0f && require(pos_)->y_ > 0.0f && require(a_)->y_ >= MIN_AY) {
            require(a_)->y_ = MIN_AY;
        }
    }
}

// M:game.Ball.ChangeState(System.Int32)
void Ball::ChangeState(pls::cs::Int32 next_state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.ChangeState(System.Int32)", game);
    {
        state_ = next_state;
        stateCnt_ = 0;
        frame_ = 0;
    }
}

// M:game.Ball.Draw(kairo.unity.ui.Graphics)
void Ball::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.Draw(kairo.unity.ui.Graphics)", game);
    {
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(flag_, 1); })) {
            return;
        }
        Camera::ConvertGlobalToCamera(pos_, camera_pos_);
        Camera::ConvertGlobalToCamera(shadowPos_, camera_pos_shadow);
        pls::cs::Int32 num = camera_pos_shadow[1];
        bool dark = false;
        pls::cs::Int32 num2 = flag_;
        pls::cs::Int32 frame = frame_ % 12 / 6;
        if (!is_null(owner_) && require(require(udat_)->gm_)->state_ == 0) {
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(pos_)->Set(require(owner_)->pos_); });
            direct_ = require(owner_)->direct_;
            pls::cs::Single num3 = 50.0f;
            pls::cs::Single x = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt(
                    require(require(owner_)->v_)->x_ * require(require(owner_)->v_)->x_ +
                    require(require(owner_)->v_)->z_ * require(require(owner_)->v_)->z_);
            }));
            num3 = GameUtil::RateConvertFloat(x, 0.0f, 10.0f, 0.0f, 100.0f, true);
            pls::cs::Int32 c2min = pls::cs::to_int32(([&]() -> pls::cs::Single {
                pls::cs::Single cs_arg3 = Ball::DRIBBLE_DIRECT_DIS()[direct_][0][0];
                pls::cs::Single cs_arg4 = Ball::DRIBBLE_DIRECT_DIS()[direct_][1][0];
                return GameUtil::RateConvertFloat(num3, 0.0f, 100.0f, cs_arg3, cs_arg4, true);
            }()));
            pls::cs::Int32 c2max = pls::cs::to_int32(([&]() -> pls::cs::Single {
                pls::cs::Single cs_arg3 = Ball::DRIBBLE_DIRECT_DIS()[direct_][2][0];
                pls::cs::Single cs_arg4 = Ball::DRIBBLE_DIRECT_DIS()[direct_][3][0];
                return GameUtil::RateConvertFloat(num3, 0.0f, 100.0f, cs_arg3, cs_arg4, true);
            }()));
            pls::cs::Int32 c2min2 = pls::cs::to_int32(([&]() -> pls::cs::Single {
                pls::cs::Single cs_arg3 = Ball::DRIBBLE_DIRECT_DIS()[direct_][0][1];
                pls::cs::Single cs_arg4 = Ball::DRIBBLE_DIRECT_DIS()[direct_][1][1];
                return GameUtil::RateConvertFloat(num3, 0.0f, 100.0f, cs_arg3, cs_arg4, true);
            }()));
            pls::cs::Int32 c2max2 = pls::cs::to_int32(([&]() -> pls::cs::Single {
                pls::cs::Single cs_arg3 = Ball::DRIBBLE_DIRECT_DIS()[direct_][2][1];
                pls::cs::Single cs_arg4 = Ball::DRIBBLE_DIRECT_DIS()[direct_][3][1];
                return GameUtil::RateConvertFloat(num3, 0.0f, 100.0f, cs_arg3, cs_arg4, true);
            }()));
            pls::cs::Int32 num4 = require(owner_)->ballDribbleTime_ % 16;
            pls::cs::Int32 num5 = GameUtil::RateConvert(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                            return kl_lang::JMath::AbsInt(num4 - 8);
                                                        }),
                                                        8, 0, c2min, c2max, true);
            pls::cs::Int32 num6 = GameUtil::RateConvert(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                            return kl_lang::JMath::AbsInt(num4 - 8);
                                                        }),
                                                        8, 0, c2min2, c2max2, true);
            pls::cs::Single num7 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt((camera_pos_dribble[0] - num5) * (camera_pos_dribble[0] - num5) +
                                            (camera_pos_dribble[1] - num6) * (camera_pos_dribble[1] - num6));
            }));
            pls::cs::Int32 num8 = num5;
            pls::cs::Int32 num9 = num6;
            camera_pos_dribble[0] = num8;
            camera_pos_dribble[1] = num9;
            {
                auto cs_target = camera_pos_;
                auto cs_index = 0;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = num8;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            {
                auto cs_target = camera_pos_;
                auto cs_index = 1;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = num9;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            {
                auto cs_target = camera_pos_shadow;
                auto cs_index = 0;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = num8;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            {
                auto cs_target = camera_pos_shadow;
                auto cs_index = 1;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = num9;
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            if (rotate_ == 0 || num4 == 0) {
                rotate_ = pls::cs::to_int32(GameUtil::RateConvertFloat(num3, 0.0f, 100.0f, 8.0f, 2.0f, true));
            }
            frame = ([&]() -> pls::cs::Int32 {
                auto cs_left = frame_ % (rotate_ * 4);
                auto cs_right = rotate_;
                return cs_left / cs_right;
            }());
            num = camera_pos_[1];
        }
        if (require(require(udat_)->gm_)->state_ == 1 || require(require(udat_)->gm_)->state_ == 2 ||
            require(require(udat_)->gm_)->state_ == 3 || require(require(udat_)->gm_)->state_ == 4 ||
            require(require(udat_)->gm_)->state_ == 5) {
            frame = 0;
        }
        if (require(require(udat_)->gm_)->state_ == 3 && !is_null(owner_)) {
            {
                auto cs_target = camera_pos_;
                auto cs_index = 0;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = Ball::THROWIN_OFF()[require(owner_)->direct_][0];
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            {
                auto cs_target = camera_pos_;
                auto cs_index = 1;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = Ball::THROWIN_OFF()[require(owner_)->direct_][1];
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            num += 3;
        }
        pls::cs::Single originalUnusedSlot16;
        pls::cs::Int32 num10 = 0;
        pls::cs::Int32 num11 = 0;
        if (!is_null(owner_)) {
            if (require(owner_)->seb_ == 14) {
                if (require(owner_)->team_id_ == 0) {
                    num = (num + -1);
                } else {
                    num = (num + 1);
                }
                pls::cs::Int32 num12 = 0;
                if (require(owner_)->team_id_ == 0) {
                    if (require(owner_)->direct_ == 3) {
                        num12 = 0;
                    } else if (require(owner_)->direct_ == 0) {
                        num12 = 1;
                    } else if (require(owner_)->direct_ == 1) {
                        num12 = 2;
                    }
                } else if (require(owner_)->direct_ == 3) {
                    num12 = 0;
                } else if (require(owner_)->direct_ == 2) {
                    num12 = 1;
                } else if (require(owner_)->direct_ == 1) {
                    num12 = 2;
                }
                num10 = Ball::SAVING_OFF()[require(owner_)->team_id_][num12][0];
                num11 = Ball::SAVING_OFF()[require(owner_)->team_id_][num12][1];
            } else {
                if (((require(owner_)->direct_ == 0) || (require(owner_)->direct_ == 3))) {
                    num = ((num - 1));
                } else {
                    num = ((num + 1));
                }
            }
        }
        if (require(require(udat_)->gm_)->state_ != 3 || is_null(owner_)) {
            {
                pls::cs::Int32 cs_arg6 = camera_pos_shadow[0];
                pls::cs::Int32 cs_arg7 = camera_pos_shadow[1] + 1;
                require(apdat_)->InsertGameObject(8, 0, num, 2, 0, 4, cs_arg6, cs_arg7, dark, 0);
            }
        }
        {
            pls::cs::Int32 cs_arg6 = camera_pos_[0] + num10;
            pls::cs::Int32 cs_arg7 = camera_pos_[1] + num11;
            require(apdat_)->InsertGameObject(9, 0, num, 2, 0, frame, cs_arg6, cs_arg7, dark, 0);
        }
    }
}

// M:game.Ball.ReceiveBall(game.Player)
void Ball::ReceiveBall(pls::cs::Ref<Player> player) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.ReceiveBall(game.Player)", game);
    {
        Ball::ReceiveBall(player, false);
    }
}

// M:game.Ball.ReceiveBall(game.Player,System.Boolean)
void Ball::ReceiveBall(pls::cs::Ref<Player> player, bool coatOut_ok) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.ReceiveBall(game.Player,System.Boolean)", game);
    {
        if (require(require(udat_)->gm_)->state_ == 0 || !coatOut_ok) {
            if (require(pos_)->z_ >= 900.0f || require(pos_)->z_ <= -900.0f || require(pos_)->x_ <= -450.0f ||
                require(pos_)->x_ >= 450.0f) {
                return;
            }
            if (require(require(player)->pos_)->z_ >= 900.0f ||
                require(require(player)->pos_)->z_ <= -900.0f ||
                require(require(player)->pos_)->x_ <= -450.0f ||
                require(require(player)->pos_)->x_ >= 450.0f) {
                return;
            }
        }
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 1); });
        require(a_)->x_ = 0.0f;
        require(a_)->z_ = 0.0f;
        {
            auto cs_target = player;
            pls::cs::Int32 cs_value = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(require(player)->flag_, 4); });
            require(cs_target)->flag_ = cs_value;
        }
        require(player)->ballHaveTime_ = 0;
        require(player)->ballDribbleTime_ = 0;
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 4); });
        owner_ = player;
        if ((!is_null(lastOwner_) && require(lastOwner_)->team_id_ == require(owner_)->team_id_) &&
            require(lastOwner_)->pData_id_ >= 0) {
            require(require(apdat_)->pData_.get_Item(require(lastOwner_)->pData_id_))->SetActScore(6);
        }
        if (require(player)->pData_id_ >= 0) {
            require(require(apdat_)->pData_.get_Item(require(player)->pData_id_))->SetActScore(7);
        }
        receive_wait = 0;
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 8); });
        boundNum_ = 0;
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 112); });
        targetPId = -1;
        require(require(udat_)->gm_)->SetBallTeam(require(player)->team_id_);
        if (is_null(lastOwner_)) {
            require(require(udat_)->teams_.get_Item(require(player)->team_id_))->Amefto_start();
        } else if (require(owner_)->team_id_ != require(lastOwner_)->team_id_) {
            require(require(udat_)->teams_.get_Item(require(player)->team_id_))->Amefto_start();
        }
    }
}

// M:game.Ball.ReleaseBall(game.Player)
void Ball::ReleaseBall(pls::cs::Ref<Player> player) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.ReleaseBall(game.Player)", game);
    {
        if (!(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(flag_, 4); }))) {
            return;
        }
        {
            {
                auto cs_target = player;
                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Off(require(player)->flag_, 4);
                });
                require(cs_target)->flag_ = cs_value;
            }
            require(player)->ballHaveTime_ = 0;
            flag_ = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 4); });
            lastOwner_ = owner_;
            owner_ = pls::cs::Ref<Player>{};
            receive_wait = Ball::RECEIVE_WAIT_MIN();
            flag_ = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 8); });
            boundNum_ = 0;
            {
                auto cs_target = require(udat_)->teams_.get_Item(require(player)->team_id_);
                pls::cs::Int32 cs_value = require(player)->p_id_;
                require(cs_target)->lastKickeer_ = cs_value;
            }
            require(require(udat_)->gm_)->SetBallTeam(-1);
        }
    }
}

// M:game.Ball.SetPassData(game.Player,System.Int32,System.Int32,System.Int32,System.Boolean)
void Ball::SetPassData(pls::cs::Ref<Player> player, pls::cs::Int32 pass_mode, pls::cs::Int32 data1,
                       pls::cs::Int32 data2, bool jamp) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Ball.SetPassData(game.Player,System.Int32,System.Int32,System.Int32,System.Boolean)", game);
    {
        Map::ensure_initialized();
        GameUtil::ensure_initialized();
        kl_cfg::Config::ensure_initialized();
        form::SoccerForm::ensure_initialized();

        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(v_)->Set(0.0f, 0.0f, 0.0f); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(a_)->Set(0.0f, 0.0f, 0.0f); });
        if (pass_mode == 0 || pass_mode == 5) {
            pls::cs::Ref<Player> player2 =
                require(require(udat_)->teams_.get_Item(require(player)->team_id_))->players_.get_Item(data1);
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(temp_pos)->Set(require(player2)->pos_); });
        } else if (pass_mode == 1) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    auto cs_receiver = temp_pos;
                    pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Camera::GetPosFromAddress(data1, data2);
                    require(cs_receiver)->Set(cs_arg0);
                }());
            });
            require(temp_pos)->x_ =
                require(temp_pos)->x_ + 900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM()) * 1.0f / 2.0f;
            require(temp_pos)->z_ =
                require(temp_pos)->z_ + 1800.0f / pls::cs::Single(Map::MAPCHIP_COAT_HNUM()) * 1.0f / 2.0f;
        } else if (pass_mode == 2) {
            {
                auto cs_target = temp_pos;
                pls::cs::Single cs_value =
                    GameUtil::RateConvertFloat(GameUtil::Random(100), 0.0f, 99.0f, -337.5f, 337.5f, true);
                require(cs_target)->x_ = cs_value;
            }
            require(temp_pos)->y_ = 0.0f;
            if (require(player)->team_id_ == 0) {
                {
                    auto cs_target = temp_pos;
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(GameUtil::Random(100), 0.0f, 99.0f, 0.0f, 300.0f, true);
                    require(cs_target)->z_ = cs_value;
                }
            } else {
                {
                    auto cs_target = temp_pos;
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(GameUtil::Random(100), 0.0f, 99.0f, 0.0f, -300.0f, true);
                    require(cs_target)->z_ = cs_value;
                }
            }
        } else if (pass_mode == 3) {
            pls::cs::Single num = 2.1474836E+09f;
            pls::cs::Int32 num2 = 0;
            for (pls::cs::Int32 i = 1;
                 i < require(require(udat_)->teams_.get_Item(require(player)->team_id_))->players_.length();
                 ++i) {
                if (i == require(player)->p_id_) {
                    continue;
                }
                pls::cs::Ref<Player> player3 =
                    require(require(udat_)->teams_.get_Item(require(player)->team_id_))->players_.get_Item(i);
                pls::cs::Single num3 = 0.0f;
                if (require(player3)->team_id_ == 0) {
                    num3 = (require(require(player3)->pos_)->x_ * require(require(player3)->pos_)->x_ +
                            (require(require(player3)->pos_)->z_ - 900.0f) *
                                (require(require(player3)->pos_)->z_ - 900.0f));
                } else {
                    num3 = (require(require(player3)->pos_)->x_ * require(require(player3)->pos_)->x_ +
                            (require(require(player3)->pos_)->z_ - -900.0f) *
                                (require(require(player3)->pos_)->z_ - -900.0f));
                }
                if (require(require(player3)->pos_)->x_ * require(require(player)->pos_)->x_ > 0.0f) {
                    num += 180.0f;
                }
                if (num3 < num) {
                    num = num3;
                    num2 = i;
                }
            }
            data1 = num2;
            pls::cs::Ref<Player> player4 =
                require(require(udat_)->teams_.get_Item(require(player)->team_id_))->players_.get_Item(num2);
            require(temp_pos)->x_ = require(require(player4)->pos_)->x_;
            if (require(temp_pos)->x_ < -128.57143f) {
                require(temp_pos)->x_ = -128.57143f;
            }
            if (require(temp_pos)->x_ > 128.57143f) {
                require(temp_pos)->x_ = 128.57143f;
            }
            require(temp_pos)->z_ = require(require(player4)->pos_)->z_;
            if (require(player)->team_id_ == 0) {
                if (require(temp_pos)->z_ < 720.0f) {
                    require(temp_pos)->z_ = 720.0f;
                }
                if (require(temp_pos)->z_ > 846.0f) {
                    require(temp_pos)->z_ = 846.0f;
                }
            } else {
                if (require(temp_pos)->z_ < -846.0f) {
                    require(temp_pos)->z_ = -846.0f;
                }
                if (require(temp_pos)->z_ > -720.0f) {
                    require(temp_pos)->z_ = -720.0f;
                }
            }
        } else if (pass_mode == 4) {
            require(temp_pos)->y_ = 0.0f;
            if (require(player)->team_id_ == 0) {
                {
                    auto cs_target = temp_pos;
                    pls::cs::Single cs_arg0_169 = GameUtil::Random(100);
                    pls::cs::Single cs_arg3_169 = require(Map::COAT_GOAL2_GPOS_CAREA().get_Item(0))->x_;
                    pls::cs::Single cs_arg4_169 = require(Map::COAT_GOAL2_GPOS_CAREA().get_Item(1))->x_;
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(cs_arg0_169, 0.0f, 99.0f, cs_arg3_169, cs_arg4_169, true);
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = temp_pos;
                    pls::cs::Single cs_arg0_170 = GameUtil::Random(100);
                    pls::cs::Single cs_arg3_170 = require(Map::COAT_GOAL2_GPOS_CAREA().get_Item(0))->z_;
                    pls::cs::Single cs_arg4_170 = require(Map::COAT_GOAL2_GPOS_CAREA().get_Item(1))->z_;
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(cs_arg0_170, 0.0f, 99.0f, cs_arg3_170, cs_arg4_170, true);
                    require(cs_target)->z_ = cs_value;
                }
            } else {
                {
                    auto cs_target = temp_pos;
                    pls::cs::Single cs_arg0_171 = GameUtil::Random(100);
                    pls::cs::Single cs_arg3_171 = require(Map::COAT_GOAL1_GPOS_CAREA().get_Item(0))->x_;
                    pls::cs::Single cs_arg4_171 = require(Map::COAT_GOAL1_GPOS_CAREA().get_Item(1))->x_;
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(cs_arg0_171, 0.0f, 99.0f, cs_arg3_171, cs_arg4_171, true);
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = temp_pos;
                    pls::cs::Single cs_arg0_172 = GameUtil::Random(100);
                    pls::cs::Single cs_arg3_172 = require(Map::COAT_GOAL1_GPOS_CAREA().get_Item(0))->z_;
                    pls::cs::Single cs_arg4_172 = require(Map::COAT_GOAL1_GPOS_CAREA().get_Item(1))->z_;
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(cs_arg0_172, 0.0f, 99.0f, cs_arg3_172, cs_arg4_172, true);
                    require(cs_target)->z_ = cs_value;
                }
            }
        }
        pls::cs::Single num7;
        pls::cs::Int32 num4 = 2;
        pls::cs::Single num5 = 1.0f;
        pls::cs::Single num6 = 1.0f;
        num7 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JMath::Sqrt(
                (require(temp_pos)->x_ - require(pos_)->x_) * (require(temp_pos)->x_ - require(pos_)->x_) +
                (require(temp_pos)->z_ - require(pos_)->z_) * (require(temp_pos)->z_ - require(pos_)->z_));
        }));
        if (num7 < 0.001f) {
            return;
        }
        if (pass_mode == 5) {
            pls::cs::Single num8 = num7 / 400.0f;
            pls::cs::Int32 num9 =
                pls::cs::to_int32(GameUtil::RateConvertFloat(num7, 100.0f, 400.0f, 8.0f, 30.0f, true));
            require(a_)->y_ = -0.48000002f;
            require(v_)->y_ =
                (-20.0f / pls::cs::Single(num9)) - require(a_)->y_ * pls::cs::Single((num9 + 1)) / 2.0f;
            require(v_)->x_ = (require(temp_pos)->x_ - require(pos_)->x_) / pls::cs::Single(num9);
            require(v_)->z_ = (require(temp_pos)->z_ - require(pos_)->z_) / pls::cs::Single(num9);
            if (num8 >= 1.0f) {
                require(v_)->x_ = require(v_)->x_ / num8;
                require(v_)->z_ = require(v_)->z_ / num8;
            }
        } else {
            if (pass_mode == 3 || pass_mode == 4) {
                num5 = data::PlayerData::GetLongPassSpeed(player);
                num6 = -0.25f;
            } else if (num7 > 594.0f) {
                num5 = data::PlayerData::GetLongPassSpeed(player);
                num6 = -0.35f;
            } else if (pass_mode == 1) {
                num5 = data::PlayerData::GetThroughPassSpeed(player);
                num6 = -0.6f;
            } else {
                num5 = data::PlayerData::GetPassSpeed(player);
                num6 = -0.6f;
            }
            num5 = data::PlayerData::AuraUpdate(player, num5, 1);
            pls::cs::Int32 num10 = 0;
            pls::cs::Single num11 = 0.0f;
            pls::cs::Int32 num12 = 0;
            pls::cs::Int32 num13 = 0;
            if (num6 != -0.25f && num6 != -0.35f) {
                num10 = pls::cs::to_int32(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::cs::Single(
                                kl_lang::JMath::Abs(num5 * GameUtil::MAX_ANGLEDATA_SIN() / num6));
                        })) *
                        2;
                num11 = num5 * GameUtil::MAX_ANGLEDATA_COS() * pls::cs::Single(num10);
                num13 = GameUtil::MAX_ANGLE();
            } else {
                num10 = pls::cs::to_int32(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::cs::Single(
                                kl_lang::JMath::Abs(num5 * GameUtil::MAX_ANGLEDATA_SIN2() / num6));
                        })) *
                        2;
                num11 = num5 * GameUtil::MAX_ANGLEDATA_COS2() * pls::cs::Single(num10);
                num13 = GameUtil::MAX_ANGLE2();
            }
            if (num11 < 0.001f) {
                num11 = 0.001f;
            }
            if (num10 < 5) {
                jamp = false;
            }
            if (jamp) {
                if (pass_mode == 3 || pass_mode == 4) {
                    {
                        auto cs_target = v_;
                        pls::cs::Single cs_value = GameUtil::SetVStop(68.0f, 18);
                        require(cs_target)->y_ = cs_value;
                    }
                    {
                        auto cs_target = a_;
                        pls::cs::Single cs_value = GameUtil::SetAStop(68.0f, 18);
                        require(cs_target)->y_ = cs_value;
                    }
                    {
                        auto cs_target = v_;
                        pls::cs::Single cs_value =
                            GameUtil::SetVdecreV(0.2f, require(temp_pos)->x_ - require(pos_)->x_, 36);
                        require(cs_target)->x_ = cs_value;
                    }
                    {
                        auto cs_target = a_;
                        pls::cs::Single cs_value =
                            GameUtil::SetAdecreV(0.2f, require(temp_pos)->x_ - require(pos_)->x_, 36);
                        require(cs_target)->x_ = cs_value;
                    }
                    {
                        auto cs_target = v_;
                        pls::cs::Single cs_value =
                            GameUtil::SetVdecreV(0.2f, require(temp_pos)->z_ - require(pos_)->z_, 36);
                        require(cs_target)->z_ = cs_value;
                    }
                    {
                        auto cs_target = a_;
                        pls::cs::Single cs_value =
                            GameUtil::SetAdecreV(0.2f, require(temp_pos)->z_ - require(pos_)->z_, 36);
                        require(cs_target)->z_ = cs_value;
                    }
                } else {
                    if (num6 == -0.25f || num6 == -0.35f) {
                        require(temp_pos)->x_ =
                            require(pos_)->x_ + (require(temp_pos)->x_ - require(pos_)->x_) * 1.27f;
                        require(temp_pos)->z_ =
                            require(pos_)->z_ + (require(temp_pos)->z_ - require(pos_)->z_) * 1.27f;
                    } else if (num6 == -0.6f) {
                        require(temp_pos)->x_ =
                            require(pos_)->x_ + (require(temp_pos)->x_ - require(pos_)->x_) * 1.12f;
                        require(temp_pos)->z_ =
                            require(pos_)->z_ + (require(temp_pos)->z_ - require(pos_)->z_) * 1.12f;
                    }
                    if (num11 < num7) {
                        num12 = num13;
                    } else {
                        pls::cs::Single x = num7 / num11;
                        num12 =
                            pls::cs::to_int32(GameUtil::RateConvertFloat(x, 0.1f, 1.0f, 12.0f, num13, true));
                    }
                    {
                        auto cs_target = v_;
                        pls::cs::Single cs_value = ([&]() -> pls::cs::FloatEval {
                                                       auto cs_left = num5 * GameUtil::Cos(num12);
                                                       auto cs_right =
                                                           (require(temp_pos)->x_ - require(pos_)->x_);
                                                       return cs_left * cs_right;
                                                   }()) /
                                                   num7;
                        require(cs_target)->x_ = cs_value;
                    }
                    {
                        auto cs_target = v_;
                        pls::cs::Single cs_value = ([&]() -> pls::cs::FloatEval {
                                                       auto cs_left = num5 * GameUtil::Cos(num12);
                                                       auto cs_right =
                                                           (require(temp_pos)->z_ - require(pos_)->z_);
                                                       return cs_left * cs_right;
                                                   }()) /
                                                   num7;
                        require(cs_target)->z_ = cs_value;
                    }
                    {
                        auto cs_target = v_;
                        pls::cs::Single cs_value = num5 * GameUtil::Sin(num12);
                        require(cs_target)->y_ = cs_value;
                    }
                    require(a_)->y_ = num6;
                }
            } else {
                require(v_)->x_ = num5 * (require(temp_pos)->x_ - require(pos_)->x_) / num7;
                require(v_)->y_ = 0.0f;
                require(v_)->z_ = num5 * (require(temp_pos)->z_ - require(pos_)->z_) / num7;
            }
        }
        receive_wait = Ball::RECEIVE_WAIT_MIN();
        if (jamp) {
            flag_ = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 16); });
        }
        if (kl_cfg::Config::DEBUG_CMD() && form::SoccerForm::DEBUG_3KEY_KICKTEST() == 1 &&
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(8); })) {
            require(v_)->x_ = require(v_)->x_ * 10.0f;
        }
        if (pass_mode == 0 || pass_mode == 5) {
            pls::cs::Int32 num15 = data1;
            targetPId = num15;
            for (pls::cs::Int32 k = 0; k < require(require(udat_)->teams_.get_Item(require(player)->team_id_))
                                               ->receiverPIdBox_.length();
                 ++k) {
                require(require(udat_)->teams_.get_Item(require(player)->team_id_))->receiverPIdBox_[k] =
                    num15;
            }
        } else if (pass_mode == 1) {
            pls::cs::Int32 num16 = require(player)->p_id_;
            targetPId = num16;
            for (pls::cs::Int32 l = 0; l < require(require(udat_)->teams_.get_Item(require(player)->team_id_))
                                               ->receiverPIdBox_.length();
                 ++l) {
                require(require(udat_)->teams_.get_Item(require(player)->team_id_))->receiverPIdBox_[l] =
                    num16;
            }
        } else if (pass_mode == 3) {
            flag_ = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 64); });
            pls::cs::Int32 num14 = data1;
            targetPId = num14;
            for (pls::cs::Int32 j = 0; j < require(require(udat_)->teams_.get_Item(require(player)->team_id_))
                                               ->receiverPIdBox_.length();
                 ++j) {
                require(require(udat_)->teams_.get_Item(require(player)->team_id_))->receiverPIdBox_[j] =
                    num14;
            }
        } else if (pass_mode == 4) {
            flag_ = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 64); });
        }
        SetSavePos(pos_, v_, a_);
        if (Ball::SOUND_RANDOM() == 1) {
            {
                auto cs_receiver = apdat_;
                auto cs_array_173 = Ball::SOUND_KICK();
                auto cs_index_173 = GameUtil::Random(Ball::SOUND_KICK().length());
                pls::cs::Int32 cs_arg0 = cs_array_173.get_Item(cs_index_173);
                require(cs_receiver)->PlaySe(cs_arg0);
            }
        } else {
            {
                pls::cs::Int32 cs_arg0 = Ball::SOUND_PASS()[pass_mode];
                require(apdat_)->PlaySe(cs_arg0);
            }
        }
    }
}

// M:game.GameManager.Collision_proc(game.Player,game.Player)
void GameManager::Collision_proc(pls::cs::Ref<Player> p1, pls::cs::Ref<Player> p2) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameManager.Collision_proc(game.Player,game.Player)", game);
    {
        Player::ensure_initialized();

        pls::cs::Int32 num =
            GameManager::COLI_PROC_DIAGRAM()[require(p1)->coliState_][require(p2)->coliState_];
        if (num == 0) {
            return;
        }
        if (([&]() -> pls::cs::Int32 {
                auto cs_left = require(p1)->address_[0];
                auto cs_right = require(p2)->address_[0];
                return cs_left - cs_right;
            }()) < -1 ||
            ([&]() -> pls::cs::Int32 {
                auto cs_left = require(p1)->address_[0];
                auto cs_right = require(p2)->address_[0];
                return cs_left - cs_right;
            }()) > 1) {
            return;
        }
        if (([&]() -> pls::cs::Int32 {
                auto cs_left = require(p1)->address_[1];
                auto cs_right = require(p2)->address_[1];
                return cs_left - cs_right;
            }()) < -1 ||
            ([&]() -> pls::cs::Int32 {
                auto cs_left = require(p1)->address_[1];
                auto cs_right = require(p2)->address_[1];
                return cs_left - cs_right;
            }()) > 1) {
            return;
        }
        IntArray collisionData = require(GameManager::udat_())->GetCollisionData(0, 0);
        IntArray collisionData2 = require(GameManager::udat_())->GetCollisionData(1, 0);
        if ([&]() -> bool {
                pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(require(p1)->pos_)->x_;
                    auto cs_right = pls::cs::Single(collisionData[0]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(require(p1)->pos_)->z_;
                    auto cs_right = pls::cs::Single(collisionData[1]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg2 = collisionData[2];
                pls::cs::Single cs_arg3 = collisionData[3];
                pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(require(p2)->pos_)->x_;
                    auto cs_right = pls::cs::Single(collisionData2[0]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(require(p2)->pos_)->z_;
                    auto cs_right = pls::cs::Single(collisionData2[1]);
                    return cs_left + cs_right;
                }());
                pls::cs::Single cs_arg6 = collisionData2[2];
                pls::cs::Single cs_arg7 = collisionData2[3];
                return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                    cs_arg6, cs_arg7, true);
            }()) {
            if (num != 4) {
                pls::cs::Single num2 = collisionData2[2] / 2;
                pls::cs::Single num3 = collisionData2[3] / 2;
                pls::cs::Single num4 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::cs::Single(
                        kl_lang::JMath::Abs(require(require(p2)->pos_)->x_ - require(require(p1)->pos_)->x_));
                });
                pls::cs::Single num5 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::cs::Single(
                        kl_lang::JMath::Abs(require(require(p2)->pos_)->z_ - require(require(p1)->pos_)->z_));
                });
                if (num4 < 0.001f || num5 < 0.001f) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(require(p1)->pos_)->Set(require(p1)->old_pos);
                    });
                } else {
                    pls::cs::Int32 num6 = 0;
                    if (num5 > num4) {
                        num6 = 0;
                    } else {
                        num6 = 1;
                    }
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return require(Player::chColPos())->Set(require(p1)->pos_);
                    });
                    if (num6 == 0) {
                        if (require(require(p1)->pos_)->x_ < require(require(p2)->pos_)->x_) {
                            require(require(p1)->pos_)->x_ =
                                require(require(p2)->pos_)->x_ - 2.0f * num3 * num4 / num5;
                        } else {
                            require(require(p1)->pos_)->x_ =
                                require(require(p2)->pos_)->x_ + 2.0f * num3 * num4 / num5;
                        }
                        if (require(require(p1)->pos_)->z_ < require(require(p2)->pos_)->z_) {
                            require(require(p1)->pos_)->z_ = require(require(p2)->pos_)->z_ - 2.0f * num3;
                        } else {
                            require(require(p1)->pos_)->z_ = require(require(p2)->pos_)->z_ + 2.0f * num3;
                        }
                    } else {
                        if (require(require(p1)->pos_)->z_ < require(require(p2)->pos_)->z_) {
                            require(require(p1)->pos_)->z_ =
                                require(require(p2)->pos_)->z_ - 2.0f * num2 * num5 / num4;
                        } else {
                            require(require(p1)->pos_)->z_ =
                                require(require(p2)->pos_)->z_ + 2.0f * num2 * num5 / num4;
                        }
                        if (require(require(p1)->pos_)->x_ < require(require(p2)->pos_)->x_) {
                            require(require(p1)->pos_)->x_ = require(require(p2)->pos_)->x_ - 2.0f * num2;
                        } else {
                            require(require(p1)->pos_)->x_ = require(require(p2)->pos_)->x_ + 2.0f * num2;
                        }
                    }
                }
            }
            if (state_ == 0 && (num == 2 || num == 3 || num == 4)) {
                if (Player::ChBodyHitBody(p1, p2)) {
                    if (num == 4) {
                        require(require(GameManager::apdat_())->pData_.get_Item(require(p1)->pData_id_))
                            ->SetActScore(12);
                        require(require(GameManager::apdat_())->pData_.get_Item(require(p2)->pData_id_))
                            ->SetActScore(9);
                    } else {
                        require(require(GameManager::apdat_())->pData_.get_Item(require(p1)->pData_id_))
                            ->SetActScore(11);
                        require(require(GameManager::apdat_())->pData_.get_Item(require(p2)->pData_id_))
                            ->SetActScore(8);
                    }
                    if (require(p2)->physical_hp_ <= 0) {
                        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::BitUtil::Check(require(p2)->flag_, 4);
                            })) {
                            require(require(GameManager::udat_())->ball_)->Ball::ReleaseBall(p2);
                            require(require(GameManager::udat_())->ball_)->Ball::ReceiveBall(p1);
                            require(require(GameManager::apdat_())->pData_.get_Item(require(p1)->pData_id_))
                                ->SetActScore(13);
                            require(require(GameManager::apdat_())->pData_.get_Item(require(p2)->pData_id_))
                                ->SetActScore(10);
                        }
                        require(p2)->Proc_down();
                        {
                            auto cs_target = p2;
                            pls::cs::Int32 cs_value = data::PlayerData::GetPhysicalHpMax(p2);
                            require(cs_target)->physical_hp_ = cs_value;
                        }
                        pls::cs::Ref<data::PlayerData> playerData =
                            require(GameManager::apdat_())->pData_.get_Item(require(p2)->pData_id_);
                        require(playerData)->AddAuraPoint(500, true);
                        Collision_updateCollisionState(p2);
                    }
                    if (num == 4) {
                        Player::SetEfCharge(p1, p2, true);
                    } else {
                        Player::SetEfCharge(p1, p2, false);
                    }
                }
                if (num == 3 && !pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::Check(require(p2)->flag_, 16384);
                    }) &&
                    Player::ChBodyHitBody(p2, p1)) {
                    if (num == 4) {
                        require(require(GameManager::apdat_())->pData_.get_Item(require(p2)->pData_id_))
                            ->SetActScore(12);
                        require(require(GameManager::apdat_())->pData_.get_Item(require(p1)->pData_id_))
                            ->SetActScore(9);
                    } else {
                        require(require(GameManager::apdat_())->pData_.get_Item(require(p2)->pData_id_))
                            ->SetActScore(11);
                        require(require(GameManager::apdat_())->pData_.get_Item(require(p1)->pData_id_))
                            ->SetActScore(8);
                    }
                    if (require(p1)->physical_hp_ <= 0) {
                        require(p1)->Proc_down();
                        {
                            auto cs_target = p1;
                            pls::cs::Int32 cs_value = data::PlayerData::GetPhysicalHpMax(p1);
                            require(cs_target)->physical_hp_ = cs_value;
                        }
                        pls::cs::Ref<data::PlayerData> playerData2 =
                            require(GameManager::apdat_())->pData_.get_Item(require(p1)->pData_id_);
                        require(playerData2)->AddAuraPoint(500, true);
                    }
                    if (num == 4) {
                        Player::SetEfCharge(p2, p1, true);
                    } else {
                        Player::SetEfCharge(p2, p1, false);
                    }
                }
            }
        }
    }
}

// M:game.Player.Act(System.Int32)
bool Player::Act(pls::cs::Int32 act_id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Act(System.Int32)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(v_)->Set(0.0f, 0.0f, 0.0f); });
        pls::cs::Int32 physicalHpMax = data::PlayerData::GetPhysicalHpMax(this);
        if (physical_hp_ < physicalHpMax) {
            physical_hp_ = main::AppData::ClampMax(physical_hp_ + physicalHpMax / 100, physicalHpMax);
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(flag_, 4); })) {
            ++ballHaveTime_;
            ++ballDribbleTime_;
        }
        if ((act_id == 0)) {
            Act_freeRun();
        } else if ((act_id == 1)) {
            Act_receive();
        } else if ((act_id == 2)) {
            Act_charge();
        } else if ((act_id == 3)) {
            Act_dribble();
        } else if ((act_id == 4)) {
            Act_gk();
        } else if ((act_id == 7)) {
            require(require(Player::udat_())->ball_)->SetPassData(this, 0, p_id_ - 1, 0, false);
            Proc_kick();
            require(require(Player::udat_())->ball_)->receive_wait = 0;
            require(require(Player::udat_())->gm_)->ChangeState(0);
        } else if ((act_id == 8)) {
            pls::cs::Int32 toThrowInPID = GetToThrowInPID();
            require(require(Player::udat_())->ball_)->SetPassData(this, 5, toThrowInPID, 0, true);
            Proc_throwIn();
            if (require(require(require(Player::udat_())->ball_)->lineOutPos_)->x_ > 0.0f) {
                require(require(require(Player::udat_())->ball_)->pos_)->x_ = 450.0f;
            } else {
                require(require(require(Player::udat_())->ball_)->pos_)->x_ = -450.0f;
            }
            require(require(require(Player::udat_())->ball_)->pos_)->y_ = 20.0f;
            require(require(require(Player::udat_())->ball_)->pos_)->z_ =
                require(require(require(Player::udat_())->ball_)->lineOutPos_)->z_;
            require(require(Player::udat_())->ball_)->receive_wait = 0;
            require(require(Player::udat_())->gm_)->ChangeState(0);
        } else if ((act_id == 9)) {
            IntArray collisionData5 = require(Player::udat_())->GetCollisionData(0, 0);
            IntArray collisionData6 = require(Player::udat_())->GetCollisionData(1, 1);
            if ([&]() -> bool {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData5[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData5[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 = collisionData5[2];
                    pls::cs::Single cs_arg3 = collisionData5[3];
                    pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(require(require(Player::udat_())->ball_)->pos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData6[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(require(require(Player::udat_())->ball_)->pos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData6[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg6 = collisionData6[2];
                    pls::cs::Single cs_arg7 = collisionData6[3];
                    return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                        cs_arg6, cs_arg7, true);
                }()) {
                require(require(Player::udat_())->ball_)->Ball::ReceiveBall(this);
                require(require(Player::udat_())->ball_)->SetPassData(this, 2, -1, 0, true);
                Proc_kick();
                flag_ = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 512); });
                require(require(Player::udat_())->gm_)->ChangeState(0);
            } else {
                Move(require(require(Player::udat_())->ball_)->pos_, act_id);
            }
        } else if ((act_id == 10)) {
            IntArray collisionData3 = require(Player::udat_())->GetCollisionData(0, 0);
            IntArray collisionData4 = require(Player::udat_())->GetCollisionData(1, 1);
            if ([&]() -> bool {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData3[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData3[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 = collisionData3[2];
                    pls::cs::Single cs_arg3 = collisionData3[3];
                    pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(require(require(Player::udat_())->ball_)->pos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData4[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(require(require(Player::udat_())->ball_)->pos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData4[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg6 = collisionData4[2];
                    pls::cs::Single cs_arg7 = collisionData4[3];
                    return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                        cs_arg6, cs_arg7, true);
                }()) {
                require(require(Player::udat_())->ball_)->Ball::ReceiveBall(this, true);
                require(require(Player::udat_())->ball_)->SetPassData(this, 4, 0, 0, true);
                Proc_kick();
                flag_ = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 1024); });
                require(require(Player::udat_())->gm_)->ChangeState(0);
            } else {
                Move(require(require(Player::udat_())->ball_)->pos_, act_id);
            }
        } else if ((act_id == 5)) {

        } else if ((act_id == 6)) {
            if (seb_ == 1) {
                return false;
            }
        } else if ((act_id == 11)) {
            IntArray collisionData7 = require(Player::udat_())->GetCollisionData(0, 0);
            IntArray collisionData8 = require(Player::udat_())->GetCollisionData(1, 0);
            if ([&]() -> bool {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData7[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData7[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 = collisionData7[2];
                    pls::cs::Single cs_arg3 = collisionData7[3];
                    pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(goalStatePos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData8[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(goalStatePos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData8[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg6 = collisionData8[2];
                    pls::cs::Single cs_arg7 = collisionData8[3];
                    return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                        cs_arg6, cs_arg7, true);
                }()) {
                AddCommandChangeSeb(3);
                AddCommandGoalGlad();
            } else {
                Move(goalStatePos_, act_id);
            }
        } else if ((act_id == 12)) {
            pls::cs::Ref<Player> lastKicker =
                require(require(Player::udat_())->teams_.get_Item(team_id_))->GetLastKicker();
            if (is_null(lastKicker)) {
                return true;
            }
            if (role_ == 0) {
                AddCommandChangeSeb(3);
                AddCommandGoalGlad();
                return true;
            }
            require(temp_vec)->x_ =
                require(require(lastKicker)->goalStatePos_)->x_ + require(goalStatePos_)->x_;
            require(temp_vec)->z_ =
                require(require(lastKicker)->goalStatePos_)->z_ + require(goalStatePos_)->z_;
            IntArray collisionData = require(Player::udat_())->GetCollisionData(0, 0);
            IntArray collisionData2 = require(Player::udat_())->GetCollisionData(1, 0);
            if ([&]() -> bool {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 = collisionData[2];
                    pls::cs::Single cs_arg3 = collisionData[3];
                    pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(temp_vec)->x_;
                        auto cs_right = pls::cs::Single(collisionData2[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(temp_vec)->z_;
                        auto cs_right = pls::cs::Single(collisionData2[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg6 = collisionData2[2];
                    pls::cs::Single cs_arg7 = collisionData2[3];
                    return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                        cs_arg6, cs_arg7, true);
                }()) {
                AddCommandChangeSeb(3);
                AddCommandGoalGlad();
            } else if (require(lastKicker)->seb_ != 3) {
                Move(require(lastKicker)->pos_, act_id);
            } else {
                Move(temp_vec, act_id);
            }
        } else if ((act_id == 13)) {
            if (seb_ != 11) {
                AddCommandChangeSeb(11);
            }
        }
        return true;
    }
}

// M:game.GameManager.CollisionBall_proc
void GameManager::CollisionBall_proc() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameManager.CollisionBall_proc", game);
    {
        Player::ensure_initialized();
        Ball::ensure_initialized();

        pls::cs::Ref<Ball> ball_ = require(GameManager::udat_())->ball_;
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(GameManager::cBallHitList()));
            }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(GameManager::cBallHitList()));
            });
        }
        for (pls::cs::Int32 i = 0; i < 2; ++i) {
            for (pls::cs::Int32 j = 0;
                 j < require(require(GameManager::udat_())->teams_.get_Item(i))->players_.length(); ++j) {
                pls::cs::Ref<Player> player =
                    require(require(GameManager::udat_())->teams_.get_Item(i))->players_.get_Item(j);
                if (require(player)->coliBallState_ == 4) {
                    continue;
                }
                if (([&]() -> pls::cs::Int32 {
                        auto cs_left = require(player)->address_[0];
                        auto cs_right = require(ball_)->address_[0];
                        return cs_left - cs_right;
                    }()) < -1 ||
                    ([&]() -> pls::cs::Int32 {
                        auto cs_left = require(player)->address_[0];
                        auto cs_right = require(ball_)->address_[0];
                        return cs_left - cs_right;
                    }()) > 1) {
                    continue;
                }
                if (([&]() -> pls::cs::Int32 {
                        auto cs_left = require(player)->address_[1];
                        auto cs_right = require(ball_)->address_[1];
                        return cs_left - cs_right;
                    }()) < -1 ||
                    ([&]() -> pls::cs::Int32 {
                        auto cs_left = require(player)->address_[1];
                        auto cs_right = require(ball_)->address_[1];
                        return cs_left - cs_right;
                    }()) > 1) {
                    continue;
                }
                IntArray collisionData = require(GameManager::udat_())->GetCollisionData(0, 1);
                IntArray array = IntArray{};
                pls::cs::Single num = 0.0f;
                if (require(player)->coliBallState_ == 0) {
                    array = require(GameManager::udat_())->GetCollisionData(0, 0);
                    num = data::PlayerData::GetHeadJampDisTop(player);
                } else if (require(player)->coliBallState_ == 3) {
                    array = require(GameManager::udat_())->GetCollisionData(0, 0);
                    num = 20.0f;
                } else if (require(player)->coliBallState_ == 1) {
                    array = require(GameManager::udat_())->GetCollisionData(0, 0);
                    num = data::PlayerData::GetHeadJampDisTop(player);
                } else {
                    array = require(GameManager::udat_())->GetCollisionData(0, 0);
                    num = 20.0f;
                }
                if (require(require(ball_)->pos_)->y_ >= num) {
                    continue;
                }
                if ([&]() -> bool {
                        pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(require(ball_)->pos_)->x_;
                            auto cs_right = pls::cs::Single(collisionData[0]);
                            return cs_left + cs_right;
                        }());
                        pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(require(ball_)->pos_)->z_;
                            auto cs_right = pls::cs::Single(collisionData[1]);
                            return cs_left + cs_right;
                        }());
                        pls::cs::Single cs_arg2 = collisionData[2];
                        pls::cs::Single cs_arg3 = collisionData[3];
                        pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(require(player)->pos_)->x_;
                            auto cs_right = pls::cs::Single(array[0]);
                            return cs_left + cs_right;
                        }());
                        pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left = require(require(player)->pos_)->z_;
                            auto cs_right = pls::cs::Single(array[1]);
                            return cs_left + cs_right;
                        }());
                        pls::cs::Single cs_arg6 = array[2];
                        pls::cs::Single cs_arg7 = array[3];
                        return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4,
                                                            cs_arg5, cs_arg6, cs_arg7, true);
                    }()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_AddElement(require(GameManager::cBallHitList()),
                                                                 pls::cs::box(player));
                    });
                }
            }
        }
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(GameManager::cBallHitList()));
            }) == 0) {
            return;
        }
        pls::cs::Single num2 = 2.1474836E+09f;
        pls::cs::Int32 index = 0;
        for (pls::cs::Int32 k = 0;
             k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                 return kl_java_util::Vector_2_Size(require(GameManager::cBallHitList()));
             });
             ++k) {
            pls::cs::Ref<Player> player2 =
                pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(GameManager::cBallHitList()), k);
                }));
            {
                auto cs_target = player2;
                auto cs_left_180 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_lang::JMath::Sqrt(
                        (require(require(ball_)->pos_)->x_ - require(require(player2)->pos_)->x_) *
                            (require(require(ball_)->pos_)->x_ - require(require(player2)->pos_)->x_) +
                        (require(require(ball_)->pos_)->z_ - require(require(player2)->pos_)->z_) *
                            (require(require(ball_)->pos_)->z_ - require(require(player2)->pos_)->z_));
                }));
                auto cs_right_180 = pls::cs::Single((require(player2)->coliBallState_ * 10000));
                pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_180 + cs_right_180);
                require(cs_target)->temp_len = cs_value;
            }
            if (require(player2)->temp_len < num2) {
                num2 = require(player2)->temp_len;
                index = k;
            }
        }
        pls::cs::Ref<Player> player3 =
            pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_ElementAt(require(GameManager::cBallHitList()), index);
            }));
        bool flag = false;
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::BitUtil::Check(require(ball_)->flag_, 32);
            })) {
            flag = true;
        }
        if (require(player3)->coliBallState_ == 0) {
            bool front = false;
            if (require(player3)->team_id_ == 0) {
                if (require(require(player3)->pos_)->z_ <
                    require(require(require(GameManager::udat_())->ball_)->pos_)->z_) {
                    front = true;
                }
            } else if (require(require(player3)->pos_)->z_ >
                       require(require(require(GameManager::udat_())->ball_)->pos_)->z_) {
                front = true;
            }
            pls::cs::Int32 num3 = data::PlayerData::GetCatchProc(
                player3, require(require(GameManager::udat_())->ball_)->v_len_, front);
            require(require(GameManager::apdat_())->pData_.get_Item(require(player3)->pData_id_))
                ->SetActScore(15);
            {
                auto cs_receiver = GameManager::apdat_();
                auto cs_left_181 = require(player3)->screen_pos_[0];
                auto cs_right_181 =
                    Player::EF_KEEPER_OFF()[require(player3)->team_id_][require(player3)->direct_][0];
                pls::cs::Int32 cs_arg0 = cs_left_181 + cs_right_181;
                auto cs_left_182 = require(player3)->screen_pos_[1];
                auto cs_right_182 =
                    Player::EF_KEEPER_OFF()[require(player3)->team_id_][require(player3)->direct_][1];
                pls::cs::Int32 cs_arg1 = cs_left_182 + cs_right_182;
                require(cs_receiver)->AddEffectShoot(cs_arg0, cs_arg1);
            }
            if (!flag) {
                num3 = 2;
            }
            {
                auto cs_target = ball_;
                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Off(require(ball_)->flag_, 96);
                });
                require(cs_target)->flag_ = cs_value;
            }
            require(ball_)->receive_wait = Ball::RECEIVE_WAIT_MIN() * 3;
            {
                auto cs_target = ball_;
                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Off(require(ball_)->flag_, 8);
                });
                require(cs_target)->flag_ = cs_value;
            }
            if ((num3 == 2)) {
                require(require(GameManager::udat_())->ball_)->Ball::ReceiveBall(player3);
            } else if ((num3 == 1) || (num3 == 0)) {
                {
                    require(require(GameManager::udat_())->ball_)->Ball::ReceiveBall(player3);
                    require(require(GameManager::udat_())->ball_)->Ball::ReleaseBall(player3);
                    pls::cs::Int32 num4 = 30;
                    pls::cs::Int32 n = 120;
                    pls::cs::Single num5 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_lang::JMath::Sqrt(
                            require(require(require(GameManager::udat_())->ball_)->v_)->x_ *
                                require(require(require(GameManager::udat_())->ball_)->v_)->x_ +
                            require(require(require(GameManager::udat_())->ball_)->v_)->z_ *
                                require(require(require(GameManager::udat_())->ball_)->v_)->z_);
                    }));
                    pls::cs::Single num6 = 0.0f;
                    if ((num3 == 1)) {
                        num6 =
                            GameUtil::RateConvertFloat(GameUtil::Random(100), 0.0f, 99.0f, 0.5f, 0.35f, true);
                    } else if ((num3 == 0)) {
                        num6 =
                            GameUtil::RateConvertFloat(GameUtil::Random(100), 0.0f, 99.0f, 0.5f, 0.35f, true);
                    }
                    num5 *= num6;
                    pls::cs::Int32 angle = 0;
                    if (require(player3)->team_id_ == 0) {
                        if ((num3 == 1)) {
                            angle = num4 + GameUtil::Random(n);
                        } else if ((num3 == 0)) {
                            if (require(player3)->direct_ == 0) {
                                angle = 190 + GameUtil::Random(160);
                            } else if (require(player3)->direct_ == 1) {
                                angle = 280 + GameUtil::Random(70);
                            } else {
                                angle = 190 + GameUtil::Random(70);
                            }
                        }
                    } else {
                        if ((num3 == 1)) {
                            angle = 180 + num4 + GameUtil::Random(n);
                        } else if ((num3 == 0)) {
                            if (require(player3)->direct_ == 2) {
                                angle = 10 + GameUtil::Random(160);
                            } else if (require(player3)->direct_ == 1) {
                                angle = 10 + GameUtil::Random(70);
                            } else {
                                angle = 100 + GameUtil::Random(70);
                            }
                        }
                    }
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            auto cs_receiver = require(require(GameManager::udat_())->ball_)->v_;
                            pls::cs::Single cs_arg0 = num5 * GameUtil::Cos(angle);
                            pls::cs::Single cs_arg1 =
                                require(require(require(GameManager::udat_())->ball_)->v_)->y_ * 0.5f;
                            pls::cs::Single cs_arg2 = num5 * GameUtil::Sin(angle);
                            require(cs_receiver)->Set(cs_arg0, cs_arg1, cs_arg2);
                        }());
                    });
                    require(require(require(GameManager::udat_())->ball_)->a_)->y_ = -0.6f;
                }
            } else {
            }
            require(GameManager::apdat_())->PlaySe(Ball::SOUND_HEAD());
        } else if (require(player3)->coliBallState_ == 3) {
            if (flag && !is_null(require(ball_)->lastOwner_) &&
                require(require(ball_)->lastOwner_)->team_id_ != require(player3)->team_id_) {
                HitShootPlayer(ball_, player3);
            } else {
                require(require(GameManager::udat_())->ball_)->Ball::ReceiveBall(player3);
            }
        } else if (require(player3)->coliBallState_ == 1) {
            require(require(GameManager::udat_())->ball_)->Ball::ReceiveBall(player3);
            require(require(GameManager::udat_())->ball_)->Ball::ReleaseBall(player3);
            require(require(GameManager::udat_())->ball_)->SetHeadingData(player3);
            {
                auto cs_target = player3;
                pls::cs::Int32 cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 128); });
                require(cs_target)->flag_ = cs_value;
            }
            require(require(GameManager::apdat_())->pData_.get_Item(require(player3)->pData_id_))
                ->SetActScore(14);
        } else {
            require(require(GameManager::udat_())->ball_)->Ball::ReceiveBall(player3);
        }
    }
}

// M:game.Ball.SetShoot(game.Player,System.Int32)
void Ball::SetShoot(pls::cs::Ref<Player> player, pls::cs::Int32 shoot_mode) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.SetShoot(game.Player,System.Int32)", game);
    {
        Map::ensure_initialized();

        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(v_)->Set(0.0f, 0.0f, 0.0f); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(a_)->Set(0.0f, 0.0f, 0.0f); });
        pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> array =
            pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>{};
        if (require(player)->team_id_ == 0) {
            array = Map::GOAL2_GLOBAL_POS();
        } else {
            array = Map::GOAL1_GLOBAL_POS();
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = array.get_Item(0);
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg1 = pos_;
            GameUtil::Sub(cs_arg0, cs_arg1, Ball::vec1());
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = array.get_Item(1);
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg1 = pos_;
            GameUtil::Sub(cs_arg0, cs_arg1, Ball::vec2());
        }
        require(Ball::vec3())->x_ = require(pos_)->x_;
        {
            auto cs_target = Ball::vec3();
            pls::cs::Single cs_value = require(array.get_Item(0))->z_;
            require(cs_target)->z_ = cs_value;
        }
        GameUtil::Sub(Ball::vec3(), pos_, Ball::vec3());
        pls::cs::Ref<Player> player2 =
            require(require(udat_)->teams_.get_Item(1 - require(player)->team_id_))->players_.get_Item(0);
        GameUtil::Sub(require(player2)->pos_, pos_, Ball::vec_GK());
        pls::cs::Single num = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JMath::Sqrt(require(Ball::vec1())->x_ * require(Ball::vec1())->x_ +
                                        require(Ball::vec1())->z_ * require(Ball::vec1())->z_);
        }));
        pls::cs::Single num2 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JMath::Sqrt(require(Ball::vec2())->x_ * require(Ball::vec2())->x_ +
                                        require(Ball::vec2())->z_ * require(Ball::vec2())->z_);
        }));
        pls::cs::Single num3 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JMath::Sqrt(require(Ball::vec3())->x_ * require(Ball::vec3())->x_ +
                                        require(Ball::vec3())->z_ * require(Ball::vec3())->z_);
        }));
        pls::cs::Single num4 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JMath::Sqrt(require(Ball::vec_GK())->x_ * require(Ball::vec_GK())->x_ +
                                        require(Ball::vec_GK())->z_ * require(Ball::vec_GK())->z_);
        }));
        if (num3 > num4) {
            pls::cs::Single num5 = 0.0f;
            if (num * num3 != 0.0f) {
                num5 = (require(Ball::vec1())->x_ * require(Ball::vec3())->x_ +
                        require(Ball::vec1())->z_ * require(Ball::vec3())->z_) /
                       (num * num3);
            }
            pls::cs::Single num6 = 0.0f;
            if (num2 * num3 != 0.0f) {
                num6 = (require(Ball::vec2())->x_ * require(Ball::vec3())->x_ +
                        require(Ball::vec2())->z_ * require(Ball::vec3())->z_) /
                       (num2 * num3);
            }
            rand_cos[0] = pls::cs::to_int32((num5 * 100.0f));
            rand_cos[1] = rand_cos[0] + pls::cs::to_int32((num6 * 100.0f));
            rand_cos[2] = rand_cos[1] + 30;
            pls::cs::Int32 num7 = 0;
            pls::cs::Int32 num8 = GameUtil::Random(rand_cos[2]);
            if (num8 > rand_cos[1]) {
                num7 = 2;
            } else if (num8 > rand_cos[0]) {
                num7 = 1;
            } else {
                num7 = 0;
            }
            pls::cs::Single num9 = 0.0f;
            pls::cs::Single num10 = 0.0f;
            if ((num7 == 0)) {
                num9 = require(array.get_Item(0))->x_;
            } else if ((num7 == 1)) {
                num9 = require(array.get_Item(1))->x_;
            } else {
                num9 = 0.0f;
            }
            num10 = ([&]() -> pls::cs::Single {
                pls::cs::Single cs_arg0 = GameUtil::Random(130) - 30;
                pls::cs::Single cs_arg3 = require(array.get_Item(0))->x_;
                pls::cs::Single cs_arg4 = require(array.get_Item(1))->x_;
                return GameUtil::RateConvertFloat(cs_arg0, 0.0f, 100.0f, cs_arg3, cs_arg4, false);
            }());
            pls::cs::Single num11 = 0.7f;
            pls::cs::Single num12 = 1.0f - num11;
            require(g1)->x_ = (num11 * num9 + num12 * num10) / (num11 + num12);
            {
                auto cs_target = g1;
                pls::cs::Single cs_value = require(array.get_Item(0))->z_;
                require(cs_target)->z_ = cs_value;
            }
        } else {
            auto cs_left_174 = require(array.get_Item(1))->x_;
            auto cs_right_174 = require(array.get_Item(0))->x_;
            pls::cs::Single num13 = cs_left_174 - cs_right_174;
            pls::cs::Single cs_arg0_175 = require(pos_)->x_;
            pls::cs::Single cs_arg1_175 = require(array.get_Item(0))->x_;
            pls::cs::Single cs_arg2_175 = require(array.get_Item(1))->x_;
            pls::cs::Single num14 = GameUtil::RateConvertFloat(
                cs_arg0_175, cs_arg1_175, cs_arg2_175, 0.0f - num13 / 4.0f, 0.0f + num13 / 4.0f, true);
            {
                auto cs_target = g1;
                pls::cs::Single cs_arg0_176 = GameUtil::Random(100);
                pls::cs::Single cs_arg3_176 = (num14 + require(array.get_Item(0))->x_) / 2.0f;
                pls::cs::Single cs_arg4_176 = (num14 + require(array.get_Item(1))->x_) / 2.0f;
                pls::cs::Single cs_value =
                    GameUtil::RateConvertFloat(cs_arg0_176, 0.0f, 99.0f, cs_arg3_176, cs_arg4_176, true);
                require(cs_target)->x_ = cs_value;
            }
            {
                auto cs_target = g1;
                pls::cs::Single cs_value = require(array.get_Item(0))->z_;
                require(cs_target)->z_ = cs_value;
            }
        }
        if ((shoot_mode == 0)) {
            {
                pls::cs::Int32 playerBodyPoseEva = data::PlayerData::GetPlayerBodyPoseEva(player, 10);
                pls::cs::Single shootSpeed = data::PlayerData::GetShootSpeed(player, playerBodyPoseEva);
                shootSpeed = data::PlayerData::AuraUpdate(player, shootSpeed, 0);
                pls::cs::Single num17 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_lang::JMath::Sqrt(
                        (require(g1)->x_ - require(pos_)->x_) * (require(g1)->x_ - require(pos_)->x_) +
                        (require(g1)->z_ - require(pos_)->z_) * (require(g1)->z_ - require(pos_)->z_));
                }));
                require(v_)->x_ = shootSpeed * (require(g1)->x_ - require(pos_)->x_) / num17;
                require(v_)->z_ = shootSpeed * (require(g1)->z_ - require(pos_)->z_) / num17;
                pls::cs::Int32 eva = playerBodyPoseEva;
                pls::cs::Single shootV0y2 = data::PlayerData::GetShootV0y(player, eva);
                require(v_)->y_ = shootV0y2;
                require(a_)->y_ = -0.1f;
            }
        } else if ((shoot_mode == 1)) {
            {
                pls::cs::Single value = data::PlayerData::GetShootSpeed(player, 50) * 80.0f / 100.0f;
                value = data::PlayerData::AuraUpdate(player, value, 0);
                pls::cs::Single num15 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_lang::JMath::Sqrt(
                        (require(g1)->x_ - require(pos_)->x_) * (require(g1)->x_ - require(pos_)->x_) +
                        (require(g1)->z_ - require(pos_)->z_) * (require(g1)->z_ - require(pos_)->z_));
                }));
                require(v_)->x_ = value * (require(g1)->x_ - require(pos_)->x_) / num15;
                require(v_)->z_ = value * (require(g1)->z_ - require(pos_)->z_) / num15;
                pls::cs::Single shootV0y = data::PlayerData::GetShootV0y(player, 50);
                pls::cs::Int32 headShootUpRadRate = data::PlayerData::GetHeadShootUpRadRate(player);
                pls::cs::Int32 num16 = GameUtil::Random(100);
                pls::cs::Single x = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_lang::JMath::Sqrt((require(g1)->z_ - require(pos_)->z_) *
                                                (require(g1)->z_ - require(pos_)->z_));
                }));
                num16 +=
                    pls::cs::to_int32(GameUtil::RateConvertFloat(x, 200.0f, 60.0f, -20.0f, -70.0f, true));
                {
                    auto cs_target = v_;
                    pls::cs::Single cs_value = GameUtil::RateConvertFloat(
                        num16, 0.0f, 99.0f, (-shootV0y) * 350.0f / 100.0f,
                        shootV0y * pls::cs::Single(headShootUpRadRate) / 100.0f, true);
                    require(cs_target)->y_ = cs_value;
                }
                require(a_)->y_ = -0.6f;
            }
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(shoot_goalPos)->Set(g1); });
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 48); });
        SetSavePos(pos_, v_, a_);
        if ((shoot_mode == 0)) {
            require(apdat_)->PlaySe(Ball::SOUND_SHOOT_KICK());
        } else if ((shoot_mode == 1)) {
            require(apdat_)->PlaySe(Ball::SOUND_SHOOT_HEAD());
        }
    }
}

// M:game.GameManager.HitShootPlayer(game.Ball,game.Player)
void GameManager::HitShootPlayer(pls::cs::Ref<Ball> ball, pls::cs::Ref<Player> hiter) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.GameManager.HitShootPlayer(game.Ball,game.Player)", game);
    {
        data::PlayerData::ensure_initialized();
        kl_cfg::Config::ensure_initialized();

        pls::cs::Int32 num = pls::cs::to_int32(GameUtil::RateConvertFloat(
            require(ball)->v_len_, data::PlayerData::SHOOTMIN_MAX() * 80.0f / 100.0f,
            data::PlayerData::SHOOTMAX_MAX() * 80.0f / 100.0f, 0.0f, 1000.0f, true));
        pls::cs::Int32 num2 = ([&]() -> pls::cs::Int32 {
                                  auto cs_left = require(hiter)->shootTrap_data;
                                  auto cs_right = GameUtil::Random(100);
                                  return cs_left + cs_right;
                              }()) -
                              50;
        if (kl_cfg::Config::DEBUG_CMD()) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::Log::Info(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(
                                pls::cs::String::concat(
                                    pls::cs::String::concat(
                                        literal(u"■GameManager.java hitShootPlayer() 修正前 ball.v_ = "),
                                        pls::cs::floating_to_string(require(require(ball)->v_)->x_)),
                                    literal(u", ")),
                                pls::cs::floating_to_string(require(require(ball)->v_)->y_)),
                            literal(u", ")),
                        pls::cs::floating_to_string(require(require(ball)->v_)->z_)),
                    pls::cs::Ref<pls::cs::ExceptionObject>{});
            });
        }
        if (num2 >= num) {
            require(ball)->Ball::ReceiveBall(hiter);
        } else if (num2 >= num / 2) {
            require(require(GameManager::udat_())->ball_)->Ball::ReceiveBall(hiter);
            require(require(GameManager::udat_())->ball_)->Ball::ReleaseBall(hiter);
            pls::cs::Int32 num3 = GameUtil::Random(200) - 100;
            pls::cs::Int32 num4 = GameUtil::Random(180) - 90;
            pls::cs::Int32 num5 = GameUtil::Random(40) + 10;
            require(require(ball)->v_)->y_ = require(require(ball)->v_)->y_ * pls::cs::Single(num3) / 100.0f;
            pls::cs::Single num6 = -(require(require(ball)->v_)->x_);
            pls::cs::Single num7 = -(require(require(ball)->v_)->z_);
            {
                auto cs_target = require(ball)->v_;
                pls::cs::Single cs_value = pls::cs::Single((([&]() -> pls::cs::Double {
                    auto cs_left = pls::cs::Double(num6) * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_lang::JMath::Cos(num4);
                                   });
                    auto cs_right =
                        pls::cs::Double(num7) * pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_lang::JMath::Sin(num4);
                        });
                    return cs_left - cs_right;
                }())));
                require(cs_target)->x_ = cs_value;
            }
            {
                auto cs_target = require(ball)->v_;
                pls::cs::Single cs_value = pls::cs::Single((([&]() -> pls::cs::Double {
                    auto cs_left = pls::cs::Double(num6) * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_lang::JMath::Sin(num4);
                                   });
                    auto cs_right =
                        pls::cs::Double(num7) * pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_lang::JMath::Cos(num4);
                        });
                    return cs_left + cs_right;
                }())));
                require(cs_target)->z_ = cs_value;
            }
            require(require(ball)->v_)->x_ = require(require(ball)->v_)->x_ * pls::cs::Single(num5) / 100.0f;
            require(require(ball)->v_)->z_ = require(require(ball)->v_)->z_ * pls::cs::Single(num5) / 100.0f;
        } else {
            require(require(GameManager::udat_())->ball_)->Ball::ReceiveBall(hiter);
            require(require(GameManager::udat_())->ball_)->Ball::ReleaseBall(hiter);
            pls::cs::Int32 num8 = GameUtil::Random(100) - 50;
            pls::cs::Int32 num9 = GameUtil::Random(60) - 30;
            pls::cs::Int32 num10 = GameUtil::Random(30) + 60;
            require(require(ball)->v_)->y_ = require(require(ball)->v_)->y_ * pls::cs::Single(num8) / 100.0f;
            pls::cs::Single x_ = require(require(ball)->v_)->x_;
            pls::cs::Single z_ = require(require(ball)->v_)->z_;
            {
                auto cs_target = require(ball)->v_;
                pls::cs::Single cs_value = pls::cs::Single((([&]() -> pls::cs::Double {
                    auto cs_left = pls::cs::Double(x_) * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_lang::JMath::Cos(num9);
                                   });
                    auto cs_right = pls::cs::Double(z_) * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_lang::JMath::Sin(num9);
                                    });
                    return cs_left - cs_right;
                }())));
                require(cs_target)->x_ = cs_value;
            }
            {
                auto cs_target = require(ball)->v_;
                pls::cs::Single cs_value = pls::cs::Single((([&]() -> pls::cs::Double {
                    auto cs_left = pls::cs::Double(x_) * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_lang::JMath::Sin(num9);
                                   });
                    auto cs_right = pls::cs::Double(z_) * pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_lang::JMath::Cos(num9);
                                    });
                    return cs_left + cs_right;
                }())));
                require(cs_target)->z_ = cs_value;
            }
            require(require(ball)->v_)->x_ = require(require(ball)->v_)->x_ * pls::cs::Single(num10) / 100.0f;
            require(require(ball)->v_)->z_ = require(require(ball)->v_)->z_ * pls::cs::Single(num10) / 100.0f;
        }
        if (kl_cfg::Config::DEBUG_CMD()) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::Log::Info(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(
                                pls::cs::String::concat(
                                    pls::cs::String::concat(
                                        literal(u"■GameManager.java hitShootPlayer() 修正後 ball.v_ = "),
                                        pls::cs::floating_to_string(require(require(ball)->v_)->x_)),
                                    literal(u", ")),
                                pls::cs::floating_to_string(require(require(ball)->v_)->y_)),
                            literal(u", ")),
                        pls::cs::floating_to_string(require(require(ball)->v_)->z_)),
                    pls::cs::Ref<pls::cs::ExceptionObject>{});
            });
        }
    }
}

// M:game.Ball.SetHeadingData(game.Player)
void Ball::SetHeadingData(pls::cs::Ref<Player> player) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.SetHeadingData(game.Player)", game);
    {
        pls::cs::Single num = 0.0f;
        if (require(player)->team_id_ == 0) {
            num = (pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt(require(require(player)->pos_)->x_ *
                                                require(require(player)->pos_)->x_ +
                                            (require(require(player)->pos_)->z_ - 900.0f) *
                                                (require(require(player)->pos_)->z_ - 900.0f));
            })));
        } else {
            num = (pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt(require(require(player)->pos_)->x_ *
                                                require(require(player)->pos_)->x_ +
                                            (require(require(player)->pos_)->z_ - -900.0f) *
                                                (require(require(player)->pos_)->z_ - -900.0f));
            })));
        }
        if (num < 360.0f) {
            Ball::SetShoot(player, 1);
            {
                pls::cs::Int32 cs_arg0 = (([&]() -> pls::cs::Int32 {
                                             auto cs_left = require(player)->screen_pos_[0];
                                             auto cs_right = screen_pos_[0];
                                             return cs_left + cs_right;
                                         }())) /
                                         2;
                pls::cs::Int32 cs_arg1 = (([&]() -> pls::cs::Int32 {
                                             auto cs_left = require(player)->screen_pos_[1];
                                             auto cs_right = screen_pos_[1];
                                             return cs_left + cs_right;
                                         }())) /
                                         2;
                require(apdat_)->AddEffectShoot(cs_arg0, cs_arg1);
            }
        } else {
            pls::cs::Single num2 =
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::cs::Single(kl_lang::JMath::Abs(require(v_)->x_ * require(v_)->x_ +
                                                               require(v_)->y_ * require(v_)->y_ +
                                                               require(v_)->z_ * require(v_)->z_));
                }) /
                3.0f;
            if (num2 > 15.0f) {
                num2 = 15.0f;
            }
            require(a_)->y_ = -0.6f;
            pls::cs::Int32 num3 = GameUtil::Random(80) + 50;
            pls::cs::Int32 angle = GameUtil::Random(30) + 10;
            pls::cs::Single num4 = num2 * GameUtil::Cos(angle);
            if (require(player)->team_id_ == 0) {
                {
                    auto cs_target = v_;
                    pls::cs::Single cs_value = num4 * GameUtil::Cos(num3);
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = v_;
                    pls::cs::Single cs_value = num2 * GameUtil::Sin(angle);
                    require(cs_target)->y_ = cs_value;
                }
                {
                    auto cs_target = v_;
                    pls::cs::Single cs_value = num4 * GameUtil::Sin(num3);
                    require(cs_target)->z_ = cs_value;
                }
            } else {
                num3 = (-num3 + 360);
                {
                    auto cs_target = v_;
                    pls::cs::Single cs_value = num4 * GameUtil::Cos(num3);
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = v_;
                    pls::cs::Single cs_value = num2 * GameUtil::Sin(angle);
                    require(cs_target)->y_ = cs_value;
                }
                {
                    auto cs_target = v_;
                    pls::cs::Single cs_value = num4 * GameUtil::Sin(num3);
                    require(cs_target)->z_ = cs_value;
                }
            }
            SetSavePos(pos_, v_, a_);
        }
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::On(flag_, 16); });
        if (Ball::SOUND_RANDOM() == 1) {
            {
                auto cs_receiver = apdat_;
                auto cs_array_183 = Ball::SOUND_KICK();
                auto cs_index_183 = GameUtil::Random(Ball::SOUND_KICK().length());
                pls::cs::Int32 cs_arg0 = cs_array_183.get_Item(cs_index_183);
                require(cs_receiver)->PlaySe(cs_arg0);
            }
        } else {
            require(apdat_)->PlaySe(Ball::SOUND_HEAD());
        }
    }
}

// M:game.Ball.ChBallDirectHere(game.Player)
bool Ball::ChBallDirectHere(pls::cs::Ref<Player> player) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.ChBallDirectHere(game.Player)", game);
    {
        if (require(player)->team_id_ == 0) {
            if (require(pos_)->y_ > 0.0f && require(v_)->z_ < 0.0f) {
                return true;
            }
        } else if (require(pos_)->y_ > 0.0f && require(v_)->z_ > 0.0f) {
            return true;
        }
        return false;
    }
}

// M:game.Ball.GetToGoalLineTime(game.Player)
pls::cs::Int32 Ball::GetToGoalLineTime(pls::cs::Ref<Player> player) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.GetToGoalLineTime(game.Player)", game);
    {
        Map::ensure_initialized();

        if (require(v_)->z_ == 0.0f) {
            return -1;
        }
        if (require(player)->team_id_ == 0) {
            return pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
                auto cs_left = (([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(Map::GOAL1_GLOBAL_POS().get_Item(0))->z_;
                    auto cs_right = require(pos_)->z_;
                    return cs_left - cs_right;
                }()));
                auto cs_right = require(v_)->z_;
                return cs_left / cs_right;
            }())));
        }
        return pls::cs::to_int32((([&]() -> pls::cs::FloatEval {
            auto cs_left = (([&]() -> pls::cs::FloatEval {
                auto cs_left = require(Map::GOAL2_GLOBAL_POS().get_Item(0))->z_;
                auto cs_right = require(pos_)->z_;
                return cs_left - cs_right;
            }()));
            auto cs_right = require(v_)->z_;
            return cs_left / cs_right;
        }())));
    }
}

// M:game.Ball.SetSavePos(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)
void Ball::SetSavePos(pls::cs::Ref<kl_util3d::Vector3D> init_pos, pls::cs::Ref<kl_util3d::Vector3D> init_v,
                      pls::cs::Ref<kl_util3d::Vector3D> init_a) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Ball.SetSavePos(kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D,kairo.unity.m3d4.util3d.Vector3D)",
        game);
    {
        pls::cs::Int32 num = 0;
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(savePos_.get_Item(0))->Set(init_pos); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(saveV_)->Set(init_v); });
        require(saveA_)->y_ = require(init_a)->y_;
        pls::cs::Single num2 = require(init_pos)->y_;
        pls::cs::Single num3 = require(init_v)->y_;
        pls::cs::Single y_ = require(init_a)->y_;
        pls::cs::Int32 num4 = 0;
        if (require(init_a)->y_ == 0.0f || require(saveV_)->y_ == 0.0f) {
            num4 = 100;
        } else {
            while (num4 < 300) {
                ++num4;
                num3 += y_;
                num2 += num3;
                if (num2 < 0.0f) {
                    break;
                }
            }
        }
        pls::cs::Int32 num5 = 0;
        if ((num2 >= 300.0f)) {
            num5 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::AbsInt(pls::cs::to_int32((require(init_v)->y_ / require(init_a)->y_)) *
                                              2);
            });
        } else {
            num5 = num4;
        }
        pls::cs::Int32 num6 = num5 * 100 / 100;
        pls::cs::Int32 num7 = num5 * 100 / 100;
        pls::cs::Single coordinateX;
        pls::cs::Single coordinateY;
        bool flag = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(flag_, 64); });
        for (pls::cs::Int32 i = 1; i < savePos_.length(); ++i) {
            if (flag) {
                require(saveV_)->x_ = require(saveV_)->x_ + require(init_a)->x_;
                require(saveV_)->y_ = require(saveV_)->y_ + require(init_a)->y_;
                require(saveV_)->z_ = require(saveV_)->z_ + require(init_a)->z_;
                {
                    auto cs_target = savePos_.get_Item(i);
                    auto cs_left_104 = require(savePos_.get_Item(i - 1))->x_;
                    auto cs_right_104 = require(saveV_)->x_;
                    pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_104 + cs_right_104);
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = savePos_.get_Item(i);
                    auto cs_left_105 = require(savePos_.get_Item(i - 1))->y_;
                    auto cs_right_105 = require(saveV_)->y_;
                    pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_105 + cs_right_105);
                    require(cs_target)->y_ = cs_value;
                }
                {
                    auto cs_target = savePos_.get_Item(i);
                    auto cs_left_106 = require(savePos_.get_Item(i - 1))->z_;
                    auto cs_right_106 = require(saveV_)->z_;
                    pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_106 + cs_right_106);
                    require(cs_target)->z_ = cs_value;
                }
            } else {
                if (require(init_a)->y_ == 0.0f || require(saveV_)->y_ == 0.0f) {
                    coordinateX = GameUtil::RateConvertFloat(i, 0.0f, 60.0f, 0.99f, 0.93f, true);
                    coordinateY = GameUtil::RateConvertFloat(i, 0.0f, 60.0f, 0.99f, 0.93f, true);
                    require(saveV_)->x_ = (require(saveV_)->x_) * (coordinateX);
                    require(saveV_)->z_ = (require(saveV_)->z_) * (coordinateY);
                } else {
                    if (require(init_a)->y_ == -0.25f || require(init_a)->y_ == -0.35f) {
                        coordinateX = GameUtil::RateConvertFloat(num, 0.0f, num7, 0.995f, 0.96f, true);
                        coordinateY = GameUtil::RateConvertFloat(num, 0.0f, num7, 0.995f, 0.96f, true);
                    } else {
                        coordinateX = GameUtil::RateConvertFloat(num, 0.0f, num6, 0.995f, 0.97f, true);
                        coordinateY = GameUtil::RateConvertFloat(num, 0.0f, num6, 0.995f, 0.97f, true);
                    }
                    require(saveV_)->x_ = (require(saveV_)->x_) * (coordinateX);
                    require(saveV_)->y_ = (require(saveV_)->y_) * 0.995f;
                    require(saveV_)->z_ = (require(saveV_)->z_) * (coordinateY);
                }
                require(saveV_)->y_ = require(saveV_)->y_ + require(saveA_)->y_;
                {
                    auto cs_target = savePos_.get_Item(i);
                    auto cs_left_107 = require(savePos_.get_Item(i - 1))->x_;
                    auto cs_right_107 = require(saveV_)->x_;
                    pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_107 + cs_right_107);
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = savePos_.get_Item(i);
                    auto cs_left_108 = require(savePos_.get_Item(i - 1))->y_;
                    auto cs_right_108 = require(saveV_)->y_;
                    pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_108 + cs_right_108);
                    require(cs_target)->y_ = cs_value;
                }
                {
                    auto cs_target = savePos_.get_Item(i);
                    auto cs_left_109 = require(savePos_.get_Item(i - 1))->z_;
                    auto cs_right_109 = require(saveV_)->z_;
                    pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_109 + cs_right_109);
                    require(cs_target)->z_ = cs_value;
                }
            }
            ++num;
            if (require(savePos_.get_Item(i))->y_ <= 0.0f) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = savePos_.get_Item(i);
                        require(fallPos_)->Set(cs_arg0);
                    }());
                });
                fallTime_ = i;
                break;
            }
        }
        require(receiverPos_)->x_ = require(fallPos_)->x_;
        require(receiverPos_)->z_ = require(fallPos_)->z_;
        pls::cs::Int32 num10 = -1;
        for (pls::cs::Int32 num11 = fallTime_ - 1; num11 >= fallTime_ / 2; --num11) {
            if (require(savePos_.get_Item(num11))->y_ <= 40.0f) {
                num10 = num11;
            } else if (num10 != -1) {
                break;
            }
        }
        if (num10 != -1) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = savePos_.get_Item(num10);
                    require(receiverPos_)->Set(cs_arg0);
                }());
            });
        }
        frameNum_ = num;
        savePosFrame_ = 0;
    }
}

// M:game.Player.Act_dribble
void Player::Act_dribble() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Act_dribble", game);
    {
        Map::ensure_initialized();

        bool flag = require(require(Player::udat_())->teams_.get_Item(team_id_))->ChPAreaLineOver();
        Player::w_dribble() = 1.0f;
        Player::w_pass() = 1.0f;
        Player::w_clear() = 0.65000004f;
        Player::w_shoot() = 1.2f;
        Player::w_centering() = 2.0f;
        pls::cs::Int32 max_ballHaveTime = 120;
        if (flag) {
            max_ballHaveTime = 10;
        }
        pls::cs::Int32 playerBodyPoseEva = data::PlayerData::GetPlayerBodyPoseEva(this, max_ballHaveTime);
        Player::w_pass() = GameUtil::RateConvertFloat(playerBodyPoseEva, 0.0f, 100.0f, 0.4f, 1.0f, true);
        Player::w_pass_through() = Player::w_pass();
        Player::w_dribble() = GameUtil::RateConvertFloat(playerBodyPoseEva, 0.0f, 100.0f, 1.0f, 0.4f, true);
        Player::eva_shoot() = 0.0f;
        if (dribbleStopCnt_ >= 3 && flag) {
            Player::w_dribble() = 0.0f;
        } else if (dribbleStopCnt_ >= 10) {
            Player::w_dribble() = 0.0f;
            Player::w_pass_through() = 0.0f;
        }
        pls::cs::Int32 num = GameUtil::RateConvert(playerBodyPoseEva, 0, 100, 8, 2, true);
        Player::eva_clear() = 100.0f;
        if (require(require(Player::apdat_())->frmSoccer_)->statusAmeftoMode_ == 2) {
            if (team_id_ == 0 && require(pos_)->z_ > -450.0f) {
                Player::eva_clear() = 0.0f;
            } else if (team_id_ == 1 && require(pos_)->z_ < 450.0f) {
                Player::eva_clear() = 0.0f;
            }
        } else if (team_id_ == 0 && require(pos_)->z_ > -300.0f) {
            Player::eva_clear() = 0.0f;
        } else if (team_id_ == 1 && require(pos_)->z_ < 600.0f) {
            Player::eva_clear() = 0.0f;
        }
        Player::eva_centering() = 0.0f;
        if (flag) {
            pls::cs::Int32 num2 = pls::cs::to_int32(
                GameUtil::RateConvertFloat(require(pos_)->x_, -450.0f, 450.0f, 0.0f, 100.0f, true));
            if (num2 < 25 || num2 > 75) {
                pls::cs::Int32 num3 = 0;
                for (pls::cs::Int32 i = 1;
                     i < require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.length();
                     ++i) {
                    if (i == p_id_) {
                        continue;
                    }
                    pls::cs::Ref<Player> player =
                        require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.get_Item(i);
                    if ((require(require(player)->pos_)->x_ * require(pos_)->x_ > 0.0f)) {
                        continue;
                    }
                    pls::cs::Single num4 = 0.0f;
                    if (team_id_ == 0) {
                        num4 = (pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_lang::JMath::Sqrt((require(require(player)->pos_)->z_ - 900.0f) *
                                                        (require(require(player)->pos_)->z_ - 900.0f));
                        })));
                    } else {
                        num4 = (pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_lang::JMath::Sqrt((require(require(player)->pos_)->z_ - -900.0f) *
                                                        (require(require(player)->pos_)->z_ - -900.0f));
                        })));
                    }
                    if (num4 < 400.0f) {
                        ++num3;
                    }
                }
                if (num3 > 0) {
                    Player::eva_centering() = GameUtil::RateConvert(num3, 1, 3, 70, 100, true);
                }
            }
        }
        pls::cs::Single num5 = GameUtil::RateConvert(
            require(require(Player::udat_())->teams_.get_Item(team_id_))->eva_risk_, 0, 100, 80, 95, true);
        pls::cs::Single num6 = GameUtil::RateConvert(
            require(require(Player::udat_())->teams_.get_Item(team_id_))->eva_risk_, 0, 100, 80, 95, true);
        for (pls::cs::Int32 j = 0; j < DIRECT_RECT.length(); ++j) {
            if (([&]() -> pls::cs::Int32 {
                    auto cs_left = address_[0];
                    auto cs_right = DIRECT_RECT[j][0];
                    return cs_left + cs_right;
                }()) >= 0 &&
                ([&]() -> pls::cs::Int32 {
                    auto cs_left = address_[0];
                    auto cs_right = DIRECT_RECT[j][0];
                    return cs_left + cs_right;
                }()) < Map::MAPCHIP_COAT_WNUM() &&
                ([&]() -> pls::cs::Int32 {
                    auto cs_left = address_[1];
                    auto cs_right = DIRECT_RECT[j][1];
                    return cs_left + cs_right;
                }()) >= 0 &&
                ([&]() -> pls::cs::Int32 {
                    auto cs_left = address_[1];
                    auto cs_right = DIRECT_RECT[j][1];
                    return cs_left + cs_right;
                }()) < Map::MAPCHIP_COAT_HNUM()) {
                {
                    auto cs_target = Player::eva_dribble();
                    auto cs_index = j;
                    auto cs_value = ([&]() -> pls::cs::Int32 {
                        auto cs_receiver = require(Player::udat_())->teams_.get_Item(team_id_);
                        pls::cs::Int32 cs_arg1 = ([&]() -> pls::cs::Int32 {
                            auto cs_left = address_[0];
                            auto cs_right = DIRECT_RECT[j][0];
                            return cs_left + cs_right;
                        }());
                        pls::cs::Int32 cs_arg2 = ([&]() -> pls::cs::Int32 {
                            auto cs_left = address_[1];
                            auto cs_right = DIRECT_RECT[j][1];
                            return cs_left + cs_right;
                        }());
                        return require(cs_receiver)->Get_playerReceivePosEva(this, cs_arg1, cs_arg2);
                    }());
                    cs_target.set_Item(cs_index, cs_value);
                }
                if (([&]() -> bool {
                        auto cs_left = address_[1];
                        auto cs_right = require(require(Player::udat_())->teams_.get_Item(team_id_))
                                            ->amefto_address_[0][1];
                        return cs_left == cs_right;
                    }()) &&
                    ((team_id_ == 0 && j == 1) || (team_id_ == 1 && j == 7))) {
                    Player::eva_dribble()[j] = Player::eva_dribble()[j] * 120.0f / 100.0f;
                }
            } else {
                Player::eva_dribble()[j] = -1.0f;
            }
        }
        for (pls::cs::Int32 k = 1;
             k < require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.length(); ++k) {
            if (k == p_id_) {
                Player::eva_pass()[k][0] = 0.0f;
                continue;
            }
            Player::eva_pass_info()[k][0] = 0;
            Player::eva_pass_info_onEnemy()[k][0] = 0;
            pls::cs::Ref<Player> player2 =
                require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.get_Item(k);
            pls::cs::Int32 num7 = require(player2)->eva_receivePos_;
            pls::cs::Single num8 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt((require(require(player2)->pos_)->x_ - require(pos_)->x_) *
                                                (require(require(player2)->pos_)->x_ - require(pos_)->x_) +
                                            (require(require(player2)->pos_)->z_ - require(pos_)->z_) *
                                                (require(require(player2)->pos_)->z_ - require(pos_)->z_));
            }));
            if (num8 < 100.0f) {
                Player::eva_pass()[k][0] = 0.0f;
                continue;
            }
            if (num8 >= 270.0f) {
                Player::eva_pass_info()[k][0] = 1;
                num7 = pls::cs::to_int32((pls::cs::Single(num7) * num5 / 100.0f));
            }
            bool flag2 = false;
            for (pls::cs::Int32 l = 0;
                 l < require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->players_.length();
                 ++l) {
                pls::cs::Ref<Player> player3 =
                    require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->players_.get_Item(l);
                if ((([&]() -> bool {
                        auto cs_left = address_[0];
                        auto cs_right = require(player3)->address_[0];
                        return cs_left == cs_right;
                    }())) &&
                    (([&]() -> bool {
                        auto cs_left = address_[1];
                        auto cs_right = require(player3)->address_[1];
                        return cs_left == cs_right;
                    }()))) {
                    continue;
                }
                if (GameUtil::ChOnLineIntArrayIntArrayIntIntArray(screen_pos_, require(player2)->screen_pos_,
                                                                  12, require(player3)->screen_pos_)) {
                    flag2 = true;
                    Player::eva_pass_info_onEnemy()[k][0] = 1;
                    break;
                }
            }
            if (flag2) {
                if (Player::eva_pass_info()[k][0] == 1) {

                } else {
                    Player::eva_pass_info()[k][0] = 1;
                    num7 = num7 * 70 / 100;
                }
            }
            {
                auto cs_target = Player::eva_pass()[k];
                auto cs_index = 0;
                auto cs_value = num7 + GameUtil::Random(num) - num / 2;
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        bool flag3 = true;
        for (pls::cs::Int32 m = 0; m < Player::eva_pass().length(); ++m) {
            if (Player::eva_pass()[m][0] != 0.0f) {
                flag3 = false;
                break;
            }
        }
        if (flag3) {
            for (pls::cs::Int32 n = 0; n < Player::eva_pass().length(); ++n) {
                if (n == p_id_) {
                    continue;
                }
                Player::eva_pass()[n][0] = 1.0f;
                break;
            }
        }
        for (pls::cs::Int32 num9 = 1;
             num9 < require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.length(); ++num9) {
            Player::eva_pass()[num9][1] = 0.0f;
            if (num9 == p_id_) {
                continue;
            }
            if (address_[0] == 0 || address_[0] == Map::MAPCHIP_COAT_WNUM() - 1) {
                Player::eva_pass()[num9][1] = 0.0f;
                continue;
            }
            pls::cs::Ref<Player> player4 =
                require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.get_Item(num9);
            if (team_id_ == 0) {
                if (require(pos_)->z_ > require(require(player4)->pos_)->z_) {
                    continue;
                }
            }
            if (team_id_ == 1) {
                if (require(pos_)->z_ < require(require(player4)->pos_)->z_) {
                    continue;
                }
            }
            if (([&]() -> bool {
                    auto cs_left = require(player4)->address_[0];
                    auto cs_right = require(player4)->mostEvaAddres_[0];
                    return cs_left == cs_right;
                }()) &&
                ([&]() -> bool {
                    auto cs_left = require(player4)->address_[1];
                    auto cs_right = require(player4)->mostEvaAddres_[1];
                    return cs_left == cs_right;
                }())) {
                continue;
            }
            Player::eva_pass_info()[num9][1] = 0;
            Player::eva_pass_info_onEnemy()[num9][1] = 0;
            pls::cs::Int32 num10 = 0;
            {
                auto cs_receiver = require(Player::udat_())->teams_.get_Item(team_id_);
                IntArray cs_arg1 = mostEvaAddres_;
                require(cs_receiver)->SetMostEvaAddressFromMoveArea_thrughPass(player4, cs_arg1, true);
            }
            num10 = ([&]() -> pls::cs::Int32 {
                auto cs_receiver = require(Player::udat_())->teams_.get_Item(require(player4)->team_id_);
                pls::cs::Int32 cs_arg1 = require(player4)->mostEvaAddres_[0];
                pls::cs::Int32 cs_arg2 = require(player4)->mostEvaAddres_[1];
                return require(cs_receiver)->Get_playerReceivePosEva(player4, cs_arg1, cs_arg2);
            }());
            Camera::ConvertAddressToGlobal(mostEvaAddres_[0], mostEvaAddres_[1],
                                           Player::temp_afr_mostEvaPos());
            Camera::ConvertGlobalToScreen(Player::temp_afr_mostEvaPos(), Player::temp_afr_mostEvaSPos());
            pls::cs::Single num11 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_lang::JMath::Sqrt(
                    (require(Player::temp_afr_mostEvaPos())->x_ - require(pos_)->x_) *
                        (require(Player::temp_afr_mostEvaPos())->x_ - require(pos_)->x_) +
                    (require(Player::temp_afr_mostEvaPos())->z_ - require(pos_)->z_) *
                        (require(Player::temp_afr_mostEvaPos())->z_ - require(pos_)->z_));
            }));
            if (num11 < 100.0f) {
                Player::eva_pass()[num9][1] = 0.0f;
                continue;
            }
            if (num11 >= 270.0f) {
                Player::eva_pass_info()[num9][1] = 1;
                num10 = pls::cs::to_int32((pls::cs::Single(num10) * num6 / 100.0f));
            }
            bool flag4 = false;
            for (pls::cs::Int32 num12 = 0;
                 num12 < require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->players_.length();
                 ++num12) {
                pls::cs::Ref<Player> player5 =
                    require(require(Player::udat_())->teams_.get_Item(1 - team_id_))
                        ->players_.get_Item(num12);
                if (([&]() -> bool {
                        auto cs_left = address_[0];
                        auto cs_right = require(player5)->address_[0];
                        return cs_left == cs_right;
                    }()) &&
                    ([&]() -> bool {
                        auto cs_left = address_[1];
                        auto cs_right = require(player5)->address_[1];
                        return cs_left == cs_right;
                    }())) {
                    continue;
                }
                if (GameUtil::ChOnLineIntArrayIntArrayIntIntArray(screen_pos_, Player::temp_afr_mostEvaSPos(),
                                                                  12, require(player5)->screen_pos_)) {
                    flag4 = true;
                    Player::eva_pass_info_onEnemy()[num9][1] = 1;
                    break;
                }
            }
            if (flag4) {
                Player::eva_pass_info()[num9][1] = 1;
            }
            {
                auto cs_target = Player::eva_pass()[num9];
                auto cs_index = 1;
                auto cs_value = num10 + GameUtil::Random(num) - num / 2;
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        Player::actDecide_max() = 0.0f;
        Player::actDecide_index() = 0;
        for (pls::cs::Int32 num13 = 0; num13 < Player::eva_dribble().length(); ++num13) {
            {
                auto cs_target = Player::eva_dribble();
                auto cs_index = num13;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = Player::w_dribble();
                pls::cs::Single cs_value = cs_old * cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
        }
        for (pls::cs::Int32 num14 = 0; num14 < Player::eva_pass().length(); ++num14) {
            {
                auto cs_target = Player::eva_pass()[num14];
                auto cs_index = 0;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = Player::w_pass();
                pls::cs::Single cs_value = cs_old * cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            {
                auto cs_target = Player::eva_pass()[num14];
                auto cs_index = 1;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = Player::w_pass_through();
                pls::cs::Single cs_value = cs_old * cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
        }
        {
            auto cs_old = Player::eva_clear();
            auto cs_rhs = Player::w_clear();
            pls::cs::Single cs_value = cs_old * cs_rhs;
            Player::eva_clear() = cs_value;
        }
        if (team_id_ == 0) {
            if (address_[0] >= 2 && address_[0] <= 7 && address_[1] >= 12) {
                Player::eva_shoot() = GetShootEva();
                {
                    auto cs_old = Player::eva_shoot();
                    auto cs_rhs = Player::w_shoot();
                    pls::cs::Single cs_value = cs_old * cs_rhs;
                    Player::eva_shoot() = cs_value;
                }
            }
        } else if (address_[0] >= 2 && address_[0] <= 7 && address_[1] <= 3) {
            Player::eva_shoot() = GetShootEva();
            {
                auto cs_old = Player::eva_shoot();
                auto cs_rhs = Player::w_shoot();
                pls::cs::Single cs_value = cs_old * cs_rhs;
                Player::eva_shoot() = cs_value;
            }
        }
        for (pls::cs::Int32 num15 = 0; num15 < Player::eva_dribble().length(); ++num15) {
            if (Player::actDecide_max() < Player::eva_dribble()[num15]) {
                Player::actDecide_max() = Player::eva_dribble()[num15];
                Player::actDecide_index() = num15;
            }
        }
        for (pls::cs::Int32 num16 = 0; num16 < Player::eva_pass().length(); ++num16) {
            if (Player::actDecide_max() < Player::eva_pass()[num16][0]) {
                Player::actDecide_max() = Player::eva_pass()[num16][0];
                Player::actDecide_index() = 100 + num16;
            }
            if (Player::actDecide_max() < Player::eva_pass()[num16][1]) {
                Player::actDecide_max() = Player::eva_pass()[num16][1];
                Player::actDecide_index() = 200 + num16;
            }
        }
        if (Player::actDecide_max() < Player::eva_clear()) {
            Player::actDecide_max() = Player::eva_clear();
            Player::actDecide_index() = 300;
        }
        if (Player::actDecide_max() < Player::eva_centering()) {
            Player::actDecide_max() = Player::eva_centering();
            Player::actDecide_index() = 400;
        }
        if (Player::actDecide_max() < Player::eva_shoot()) {
            Player::actDecide_max() = Player::eva_shoot();
            Player::actDecide_index() = 500;
        }
        if (Player::actDecide_index() != 4) {
            dribbleStopCnt_ = 0;
        }
        if (Player::actDecide_index() < 100) {
            pls::cs::Int32 num17 = Player::actDecide_index() % 100;
            if (num17 % 2 == 1) {
                pls::diagnostic::api_call([&]() -> decltype(auto) { return require(goalPos_)->Set(pos_); });
                {
                    auto cs_target = goalPos_;
                    auto cs_old = require(cs_target)->x_;
                    auto cs_rhs = 900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM()) *
                                  pls::cs::Single(DIRECT_RECT[num17][0]);
                    pls::cs::Single cs_value = cs_old + cs_rhs;
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = goalPos_;
                    auto cs_old = require(cs_target)->z_;
                    auto cs_rhs = 1800.0f / pls::cs::Single(Map::MAPCHIP_COAT_HNUM()) *
                                  pls::cs::Single(DIRECT_RECT[num17][1]);
                    pls::cs::Single cs_value = cs_old + cs_rhs;
                    require(cs_target)->z_ = cs_value;
                }
            } else if (num17 == 4) {
                pls::diagnostic::api_call([&]() -> decltype(auto) { return require(goalPos_)->Set(pos_); });
            } else {
                {
                    auto cs_left_165 = address_[0];
                    auto cs_right_165 = DIRECT_RECT[num17][0];
                    pls::cs::Int32 cs_arg0 = cs_left_165 + cs_right_165;
                    auto cs_left_166 = address_[1];
                    auto cs_right_166 = DIRECT_RECT[num17][1];
                    pls::cs::Int32 cs_arg1 = cs_left_166 + cs_right_166;
                    pls::cs::Ref<kl_util3d::Vector3D> cs_arg2 = goalPos_;
                    Camera::ConvertAddressToGlobal(cs_arg0, cs_arg1, cs_arg2);
                }
            }
            IntArray collisionData = require(Player::udat_())->GetCollisionData(0, 0);
            IntArray collisionData2 = require(Player::udat_())->GetCollisionData(1, 0);
            if ([&]() -> bool {
                    pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(pos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg2 = collisionData[2];
                    pls::cs::Single cs_arg3 = collisionData[3];
                    pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(goalPos_)->x_;
                        auto cs_right = pls::cs::Single(collisionData2[0]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(goalPos_)->z_;
                        auto cs_right = pls::cs::Single(collisionData2[1]);
                        return cs_left + cs_right;
                    }());
                    pls::cs::Single cs_arg6 = collisionData2[2];
                    pls::cs::Single cs_arg7 = collisionData2[3];
                    return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                        cs_arg6, cs_arg7, true);
                }()) {
                ++dribbleStopCnt_;
                return;
            }
            Move(goalPos_, 3, 60, false);
            require(require(Player::apdat_())->pData_.get_Item(pData_id_))->SetActScore(4);
        } else if (Player::actDecide_index() < 200) {
            pls::cs::Int32 num18 = Player::actDecide_index() % 100;
            bool jamp = false;
            if (Player::eva_pass_info()[num18][0] == 1) {
                jamp = true;
            }
            require(require(Player::udat_())->ball_)->SetPassData(this, 0, num18, 0, jamp);
            Proc_kick();
            require(require(Player::apdat_())->pData_.get_Item(pData_id_))->SetActScore(1);
        } else if (Player::actDecide_index() < 300) {
            pls::cs::Int32 num19 = Player::actDecide_index() % 100;
            bool jamp2 = false;
            if (Player::eva_pass_info()[num19][1] == 1) {
                jamp2 = true;
            }
            pls::cs::Ref<Player> player6 =
                require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.get_Item(num19);
            {
                pls::cs::Int32 cs_arg0 = require(player6)->mostEvaAddres_[0];
                pls::cs::Int32 cs_arg1 = require(player6)->mostEvaAddres_[1];
                Camera::ConvertAddressToGlobal(cs_arg0, cs_arg1, Player::temp_afr_mostEvaPos());
            }
            {
                auto cs_receiver = require(Player::udat_())->ball_;
                pls::cs::Int32 cs_arg2 = require(player6)->mostEvaAddres_[0];
                pls::cs::Int32 cs_arg3 = require(player6)->mostEvaAddres_[1];
                require(cs_receiver)->SetPassData(player6, 1, cs_arg2, cs_arg3, jamp2);
            }
            Proc_kick();
            require(require(Player::apdat_())->pData_.get_Item(pData_id_))->SetActScore(1);
        } else if (Player::actDecide_index() < 400) {
            require(require(Player::udat_())->ball_)->SetPassData(this, 2, -1, 0, true);
            Proc_kick();
            require(require(Player::apdat_())->pData_.get_Item(pData_id_))->SetActScore(2);
        } else if (Player::actDecide_index() < 500) {
            require(require(Player::udat_())->ball_)->SetPassData(this, 3, -1, 0, true);
            Proc_kick();
            require(require(Player::apdat_())->pData_.get_Item(pData_id_))->SetActScore(3);
        } else if (Player::actDecide_index() < 600) {
            require(require(Player::udat_())->ball_)->Ball::SetShoot(this, 0);
            Proc_kick();
            {
                auto cs_receiver = Player::apdat_();
                auto cs_left_167 = screen_pos_[0];
                auto cs_right_167 = Player::EF_SHOOT_OFF()[direct_][0];
                pls::cs::Int32 cs_arg0 = cs_left_167 + cs_right_167;
                auto cs_left_168 = screen_pos_[1];
                auto cs_right_168 = Player::EF_SHOOT_OFF()[direct_][1];
                pls::cs::Int32 cs_arg1 = cs_left_168 + cs_right_168;
                require(cs_receiver)->AddEffectShoot(cs_arg0, cs_arg1);
            }
            require(require(Player::apdat_())->pData_.get_Item(pData_id_))->SetActScore(0);
        }
    }
}

// M:game.Ball.GetHeadIndexFormSavePos2(System.Int32,System.Single)
pls::cs::Int32 Ball::GetHeadIndexFormSavePos2(pls::cs::Int32 headingStartFrame, pls::cs::Single headDisTop) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.GetHeadIndexFormSavePos2(System.Int32,System.Single)",
                     game);
    {
        pls::cs::Int32 num = headingStartFrame + savePosFrame_;
        if (num >= frameNum_) {
            return -1;
        }
        if (require(savePos_.get_Item(num))->y_ >= headDisTop - 5.0f &&
            require(savePos_.get_Item(num))->y_ <= headDisTop) {
            return num;
        }
        return -1;
    }
}

// M:game.Ball.SetStop
void Ball::SetStop() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Ball.SetStop", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(v_)->Set(0.0f, 0.0f, 0.0f); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(a_)->Set(0.0f, 0.0f, 0.0f); });
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 112); });
        targetPId = -1;
    }
}

// M:game.Player.Act_gk
void Player::Act_gk() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Act_gk", game);
    {
        Map::ensure_initialized();

        pls::cs::Ref<Ball> ball_ = require(Player::udat_())->ball_;
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(flag_, 4); })) {
            if (ballHaveTime_ >= 35) {
                require(require(Player::udat_())->ball_)->SetPassData(this, 2, -1, 0, true);
                Proc_kick();
            } else {
                if (((team_id_ == 0) && ((([&]() -> bool {
                         auto cs_left = require(pos_)->z_;
                         auto cs_right = require(Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(1))->z_;
                         return cs_left < cs_right;
                     }())))) ||
                    ((team_id_ == 1) && ((([&]() -> bool {
                         auto cs_left = require(pos_)->z_;
                         auto cs_right = require(Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(1))->z_;
                         return cs_left > cs_right;
                     }()))))) {
                    require(goalPos_)->x_ = require(pos_)->x_;
                    if (team_id_ == 0) {
                        {
                            auto cs_target = goalPos_;
                            pls::cs::Single cs_value =
                                require(Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(1))->z_;
                            require(cs_target)->z_ = cs_value;
                        }
                    } else {
                        {
                            auto cs_target = goalPos_;
                            pls::cs::Single cs_value =
                                require(Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(1))->z_;
                            require(cs_target)->z_ = cs_value;
                        }
                    }
                    IntArray collisionData = require(Player::udat_())->GetCollisionData(0, 0);
                    IntArray collisionData2 = require(Player::udat_())->GetCollisionData(1, 0);
                    if ([&]() -> bool {
                            pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(pos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(pos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg2 = collisionData[2];
                            pls::cs::Single cs_arg3 = collisionData[3];
                            pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(goalPos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData2[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(goalPos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData2[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg6 = collisionData2[2];
                            pls::cs::Single cs_arg7 = collisionData2[3];
                            return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4,
                                                                cs_arg5, cs_arg6, cs_arg7, true);
                        }()) {
                        if (notMoveCnt_++ > 3) {
                            if (team_id_ == 0) {
                                direct_ = 0;
                            } else {
                                direct_ = 2;
                            }
                        }
                    } else {
                        notMoveCnt_ = 0;
                        Move(goalPos_, 4);
                    }
                }
            }
        } else {
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(flag_, 8); })) {

            } else {
                bool flag = require(ball_)->Ball::ChBallDirectHere(this);
                pls::cs::Int32 toGoalLineTime = require(ball_)->GetToGoalLineTime(this);
                bool flag2 = false;
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::Check(require(ball_)->flag_, 32);
                    })) {
                    flag2 = true;
                }
                if (flag && toGoalLineTime > 0 && toGoalLineTime < Player::SEB_H_SAVING_ANIME()[0] * 5 / 10 &&
                    flag2) {
                    Proc_saving();
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(seb_startPos)->Set(pos_); });
                    {
                        auto cs_target = seb_v;
                        pls::cs::Single cs_value =
                            GameUtil::SetVStop(10.0f, Player::SEB_H_SAVING_ANIME()[0] / 2);
                        require(cs_target)->y_ = cs_value;
                    }
                    seb_ay = GameUtil::SetAStop(10.0f, Player::SEB_H_SAVING_ANIME()[0] / 2);
                    {
                        auto cs_target = seb_v;
                        auto cs_left_177 = (require(require(ball_)->g1)->x_ - require(pos_)->x_);
                        auto cs_right_177 = pls::cs::Single((Player::SEB_H_SAVING_ANIME()[0] / 2));
                        pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_177 / cs_right_177);
                        require(cs_target)->x_ = cs_value;
                    }
                    {
                        auto cs_target = seb_v;
                        auto cs_left_178 = (require(require(ball_)->g1)->z_ - require(pos_)->z_);
                        auto cs_right_178 = pls::cs::Single((Player::SEB_H_SAVING_ANIME()[0] / 2));
                        pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_178 / cs_right_178);
                        require(cs_target)->z_ = cs_value;
                    }
                    pls::cs::Single num = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_lang::JMath::Sqrt(require(seb_v)->x_ * require(seb_v)->x_ +
                                                    require(seb_v)->z_ * require(seb_v)->z_);
                    }));
                    pls::cs::Single keeperJampMax = data::PlayerData::GetKeeperJampMax(this);
                    if (num > keeperJampMax) {
                        require(seb_v)->x_ = require(seb_v)->x_ * keeperJampMax / num;
                        require(seb_v)->z_ = require(seb_v)->z_ * keeperJampMax / num;
                    }
                    if (num < 4.5f) {
                        direct_ = 0 + 2 * team_id_;
                    } else if (require(seb_v)->x_ < 0.0f) {
                        direct_ = 3;
                    } else {
                        direct_ = 1;
                    }
                } else {
                    pls::cs::Single num2 = 0.0f;
                    num2 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_lang::JMath::Sqrt(
                            (require(require(ball_)->pos_)->x_ - require(pos_)->x_) *
                                (require(require(ball_)->pos_)->x_ - require(pos_)->x_) +
                            (require(require(ball_)->pos_)->z_ - require(pos_)->z_) *
                                (require(require(ball_)->pos_)->z_ - require(pos_)->z_));
                    }));
                    if (num2 < 180.0f) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(goalPos_)->Set(require(ball_)->pos_); });
                    } else {
                        pls::cs::Int32 num3 = 0;
                        if (team_id_ == 0) {
                            num3 = pls::cs::to_int32(GameUtil::RateConvertFloat(
                                require(require(ball_)->pos_)->z_, -900.0f, 900.0f, 0.0f, 100.0f, true));
                            {
                                auto cs_target = goalPos_;
                                pls::cs::Single cs_value = GameUtil::RateConvertFloat(
                                    num3, 0.0f, 100.0f, -900.0f,
                                    require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->z_, true);
                                require(cs_target)->z_ = cs_value;
                            }
                        } else {
                            num3 = pls::cs::to_int32(GameUtil::RateConvertFloat(
                                require(require(ball_)->pos_)->z_, 900.0f, -900.0f, 0.0f, 100.0f, true));
                            {
                                auto cs_target = goalPos_;
                                pls::cs::Single cs_value = GameUtil::RateConvertFloat(
                                    num3, 0.0f, 100.0f, 900.0f,
                                    require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->z_, true);
                                require(cs_target)->z_ = cs_value;
                            }
                        }
                        if (require(pos_)->x_ == require(require(ball_)->pos_)->x_) {
                            require(goalPos_)->x_ = 0.0f;
                        } else {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return require(temp_vec)->Set(require(require(Player::udat_())->ball_)->pos_);
                            });
                            if ([&]() -> bool {
                                    auto cs_left = require(temp_vec)->x_;
                                    auto cs_right = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->x_;
                                    return cs_left < cs_right;
                                }()) {
                                {
                                    auto cs_target = temp_vec;
                                    pls::cs::Single cs_value =
                                        require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->x_;
                                    require(cs_target)->x_ = cs_value;
                                }
                            }
                            if ([&]() -> bool {
                                    auto cs_left = require(temp_vec)->x_;
                                    auto cs_right = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->x_;
                                    return cs_left > cs_right;
                                }()) {
                                {
                                    auto cs_target = temp_vec;
                                    pls::cs::Single cs_value =
                                        require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->x_;
                                    require(cs_target)->x_ = cs_value;
                                }
                            }
                            {
                                auto cs_target = goalPos_;
                                auto cs_left_179 = ([&]() -> pls::cs::FloatEval {
                                    auto cs_left_179 = require(temp_vec)->x_ / 2.0f;
                                    auto cs_right_179 =
                                        require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->x_ / 4.0f;
                                    return cs_left_179 + cs_right_179;
                                }());
                                auto cs_right_179 =
                                    require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->x_ / 4.0f;
                                pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_179 + cs_right_179);
                                require(cs_target)->x_ = cs_value;
                            }
                        }
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(old_pos)->Set(pos_); });
                    IntArray collisionData3 = require(Player::udat_())->GetCollisionData(0, 0);
                    IntArray collisionData4 = require(Player::udat_())->GetCollisionData(1, 1);
                    if ([&]() -> bool {
                            pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(pos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData3[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(pos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData3[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg2 = collisionData3[2];
                            pls::cs::Single cs_arg3 = collisionData3[3];
                            pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(goalPos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData4[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(goalPos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData4[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg6 = collisionData4[2];
                            pls::cs::Single cs_arg7 = collisionData4[3];
                            return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4,
                                                                cs_arg5, cs_arg6, cs_arg7, true);
                        }()) {
                        if (notMoveCnt_++ > 3) {
                            SetPlayerDirect(require(require(Player::udat_())->ball_)->pos_);
                        }
                    } else {
                        notMoveCnt_ = 0;
                        Move(goalPos_, 4);
                    }
                    IntArray collisionData5 = require(Player::udat_())->GetCollisionData(0, 0);
                    IntArray collisionData6 = require(Player::udat_())->GetCollisionData(1, 0);
                    pls::cs::Ref<Player> passer =
                        require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->GetPasser();
                    if (!is_null(passer) && ([&]() -> bool {
                            pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(pos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData5[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(pos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData5[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg2 = collisionData5[2];
                            pls::cs::Single cs_arg3 = collisionData5[3];
                            pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(passer)->pos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData6[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(passer)->pos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData6[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg6 = collisionData6[2];
                            pls::cs::Single cs_arg7 = collisionData6[3];
                            return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4,
                                                                cs_arg5, cs_arg6, cs_arg7, true);
                        }())) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(pos_)->Set(old_pos); });
                        pls::cs::Int32 chargeDamage = data::PlayerData::GetChargeDamage(this, false);
                        {
                            auto cs_target = passer;
                            pls::cs::Int32 cs_value =
                                main::AppData::ClampMin(require(passer)->physical_hp_ - chargeDamage, 0);
                            require(cs_target)->physical_hp_ = cs_value;
                        }
                        if (require(passer)->physical_hp_ <= 0) {
                            require(require(Player::udat_())->ball_)->Ball::ReleaseBall(passer);
                            require(require(Player::udat_())->ball_)->Ball::ReceiveBall(this);
                            {
                                auto cs_target = passer;
                                pls::cs::Int32 cs_value = data::PlayerData::GetPhysicalHpMax(passer);
                                require(cs_target)->physical_hp_ = cs_value;
                            }
                        }
                    }
                }
            }
        }
    }
}

// M:game.Player.Collision
void Player::Collision() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Collision", game);
    {
        form::SoccerForm::ensure_initialized();

        bool flag = true;
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Check(flag_, 16408); })) {
            flag = false;
        }
        bool flag2 = false;
        bool flag3 = false;
        if (actId_ == 1) {
            flag2 = true;
        }
        if (require(require(Player::udat_())->gm_)->state_ == 0 && flag) {
            for (pls::cs::Int32 i = 0; i < 2; ++i) {
                for (pls::cs::Int32 j = 0;
                     j < require(require(Player::udat_())->teams_.get_Item(i))->players_.length(); ++j) {
                    if (j == 0) {
                        continue;
                    }
                    if (i == team_id_ && j == p_id_) {
                        continue;
                    }
                    pls::cs::Ref<Player> player =
                        require(require(Player::udat_())->teams_.get_Item(i))->players_.get_Item(j);
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_lang::JMath::AbsInt(([&]() -> pls::cs::Int32 {
                                auto cs_left = address_[0];
                                auto cs_right = require(player)->address_[0];
                                return cs_left - cs_right;
                            }()));
                        }) >= 2) {
                        continue;
                    }
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_lang::JMath::AbsInt(([&]() -> pls::cs::Int32 {
                                auto cs_left = address_[1];
                                auto cs_right = require(player)->address_[1];
                                return cs_left - cs_right;
                            }()));
                        }) >= 2) {
                        continue;
                    }
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(require(player)->flag_, 16408);
                        })) {
                        continue;
                    }
                    IntArray collisionData = require(Player::udat_())->GetCollisionData(0, 0);
                    IntArray collisionData2 = require(Player::udat_())->GetCollisionData(1, 0);
                    if ([&]() -> bool {
                            pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(pos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(pos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg2 = collisionData[2];
                            pls::cs::Single cs_arg3 = collisionData[3];
                            pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(player)->pos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData2[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(player)->pos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData2[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg6 = collisionData2[2];
                            pls::cs::Single cs_arg7 = collisionData2[3];
                            return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4,
                                                                cs_arg5, cs_arg6, cs_arg7, true);
                        }()) {
                        pls::cs::Single num = collisionData2[2] / 2;
                        pls::cs::Single num2 = collisionData2[3] / 2;
                        pls::cs::Single num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::cs::Single(
                                kl_lang::JMath::Abs(require(require(player)->pos_)->x_ - require(pos_)->x_));
                        });
                        pls::cs::Single num4 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::cs::Single(
                                kl_lang::JMath::Abs(require(require(player)->pos_)->z_ - require(pos_)->z_));
                        });
                        if (num3 < 0.001f) {
                            continue;
                        }
                        if (num4 < 0.001f) {
                            continue;
                        }
                        pls::cs::Int32 num5 = 0;
                        if (num4 > num3) {
                            num5 = 0;
                        } else {
                            num5 = 1;
                        }
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(Player::chColPos())->Set(pos_); });
                        if (num5 == 0) {
                            if (require(pos_)->x_ < require(require(player)->pos_)->x_) {
                                require(pos_)->x_ =
                                    require(require(player)->pos_)->x_ - 2.0f * num2 * num3 / num4;
                            } else {
                                require(pos_)->x_ =
                                    require(require(player)->pos_)->x_ + 2.0f * num2 * num3 / num4;
                            }
                            if (require(pos_)->z_ < require(require(player)->pos_)->z_) {
                                require(pos_)->z_ = require(require(player)->pos_)->z_ - 2.0f * num2;
                            } else {
                                require(pos_)->z_ = require(require(player)->pos_)->z_ + 2.0f * num2;
                            }
                        } else {
                            if (require(pos_)->z_ < require(require(player)->pos_)->z_) {
                                require(pos_)->z_ =
                                    require(require(player)->pos_)->z_ - 2.0f * num * num4 / num3;
                            } else {
                                require(pos_)->z_ =
                                    require(require(player)->pos_)->z_ + 2.0f * num * num4 / num3;
                            }
                            if (require(pos_)->x_ < require(require(player)->pos_)->x_) {
                                require(pos_)->x_ = require(require(player)->pos_)->x_ - 2.0f * num;
                            } else {
                                require(pos_)->x_ = require(require(player)->pos_)->x_ + 2.0f * num;
                            }
                        }
                        if (flag2 && team_id_ == 1 - i) {
                            flag3 = false;
                            if (require(player)->actId_ == 1) {
                                flag3 = true;
                            }
                            if (flag3 && !pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::BitUtil::Check(require(player)->flag_, 16384);
                                }) &&
                                Player::ChBodyHitBody(this, player) && require(player)->physical_hp_ <= 0) {
                                require(player)->Proc_down();
                            }
                        }
                    }
                }
            }
        }
        if (require(require(Player::udat_())->gm_)->state_ == 0 &&
            require(require(Player::udat_())->gm_)->gameState_ == 2 &&
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::BitUtil::Check(require(require(Player::udat_())->ball_)->flag_, 8);
            })) {
            if (role_ == 0) {
                if (require(require(require(Player::udat_())->ball_)->pos_)->y_ < 20.0f) {
                    IntArray collisionData3 = require(Player::udat_())->GetCollisionData(0, 0);
                    IntArray collisionData4 = require(Player::udat_())->GetCollisionData(1, 1);
                    if ([&]() -> bool {
                            pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(pos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData3[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(pos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData3[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg2 = collisionData3[2];
                            pls::cs::Single cs_arg3 = collisionData3[3];
                            pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(require(Player::udat_())->ball_)->pos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData4[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(require(Player::udat_())->ball_)->pos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData4[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg6 = collisionData4[2];
                            pls::cs::Single cs_arg7 = collisionData4[3];
                            return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4,
                                                                cs_arg5, cs_arg6, cs_arg7, true);
                        }()) {
                        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::BitUtil::Check(flag_, 8);
                            })) {
                            if (form::SoccerForm::DEBUG_GK_MODE() == 1 && team_id_ == 0) {
                                return;
                            }
                            bool front = false;
                            if (team_id_ == 0) {
                                if (require(pos_)->z_ <
                                    require(require(require(Player::udat_())->ball_)->pos_)->z_) {
                                    front = true;
                                }
                            } else if (require(pos_)->z_ >
                                       require(require(require(Player::udat_())->ball_)->pos_)->z_) {
                                front = true;
                            }
                            pls::cs::Int32 recoveredCatchResult = data::PlayerData::GetCatchProc(
                                this, require(require(Player::udat_())->ball_)->v_len_, front);
                            if (recoveredCatchResult == 2) {
                                require(require(Player::udat_())->ball_)->Ball::ReceiveBall(this);
                            } else if (recoveredCatchResult == 1) {
                                auto cs_left_257 = GameUtil::Random(180);
                                auto cs_right_257 = team_id_ * 180;
                                pls::cs::Int32 angle2 = cs_left_257 + cs_right_257;
                                pls::cs::Single recoveredUnusedVelocityX;
                                pls::cs::Single recoveredUnusedVelocityY;
                                pls::cs::Single num7 = GameUtil::RateConvertFloat(GameUtil::Random(100), 0.0f,
                                                                                  99.0f, 5.0f, 10.0f, true);
                                pls::cs::Int32 x2 = GameUtil::Random(100);
                                pls::cs::Single dis2 = GameUtil::RateConvert(x2, 0, 99, 5, 20, true);
                                pls::cs::Int32 t2 = GameUtil::RateConvert(x2, 0, 99, 5, 10, true);
                                require(require(Player::udat_())->ball_)->Ball::ReceiveBall(this);
                                require(require(Player::udat_())->ball_)->Ball::ReleaseBall(this);
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        auto cs_receiver = require(require(Player::udat_())->ball_)->v_;
                                        pls::cs::Single cs_arg0 = num7 * GameUtil::Cos(angle2);
                                        pls::cs::Single cs_arg2 = num7 * GameUtil::Sin(angle2);
                                        require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2);
                                    }());
                                });
                                {
                                    auto cs_target = require(require(Player::udat_())->ball_)->v_;
                                    pls::cs::Single cs_value = GameUtil::SetVStop(dis2, t2);
                                    require(cs_target)->y_ = cs_value;
                                }
                                {
                                    auto cs_target = require(require(Player::udat_())->ball_)->a_;
                                    pls::cs::Single cs_value = GameUtil::SetAStop(dis2, t2);
                                    require(cs_target)->y_ = cs_value;
                                }
                            } else {
                                auto cs_left_258 = GameUtil::Random(180);
                                auto cs_right_258 = (1 - team_id_) * 180;
                                pls::cs::Int32 angle = cs_left_258 + cs_right_258;
                                pls::cs::Single recoveredUnusedVelocityX_2;
                                pls::cs::Single recoveredUnusedVelocityY_2;
                                pls::cs::Single num6 = GameUtil::RateConvertFloat(GameUtil::Random(100), 0.0f,
                                                                                  99.0f, 2.5f, 5.0f, true);
                                pls::cs::Int32 x = GameUtil::Random(100);
                                pls::cs::Single dis = GameUtil::RateConvert(x, 0, 99, 5, 20, true);
                                pls::cs::Int32 t = GameUtil::RateConvert(x, 0, 99, 10, 20, true);
                                require(require(Player::udat_())->ball_)->Ball::ReceiveBall(this);
                                require(require(Player::udat_())->ball_)->Ball::ReleaseBall(this);
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        auto cs_receiver = require(require(Player::udat_())->ball_)->v_;
                                        pls::cs::Single cs_arg0 = num6 * GameUtil::Cos(angle);
                                        pls::cs::Single cs_arg2 = num6 * GameUtil::Sin(angle);
                                        require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2);
                                    }());
                                });
                                {
                                    auto cs_target = require(require(Player::udat_())->ball_)->v_;
                                    pls::cs::Single cs_value = GameUtil::SetVStop(dis, t);
                                    require(cs_target)->y_ = cs_value;
                                }
                                {
                                    auto cs_target = require(require(Player::udat_())->ball_)->a_;
                                    pls::cs::Single cs_value = GameUtil::SetAStop(dis, t);
                                    require(cs_target)->y_ = cs_value;
                                }
                            }
                        } else {
                            require(require(Player::udat_())->ball_)->Ball::ReceiveBall(this);
                        }
                    }
                }
            } else {
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::Check(require(require(Player::udat_())->ball_)->flag_,
                                                             16);
                    }) &&
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::Check(require(require(Player::udat_())->ball_)->flag_,
                                                             32);
                    }) &&
                    require(require(Player::udat_())->ball_)->boundNum_ == 0) {
                    return;
                }
                if (ChTrapOrHeading()) {
                    ChRepetition();
                }
            }
        }
    }
}

// M:game.Team.SetPositionKickOff
void Team::SetPositionKickOff() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.SetPositionKickOff", game);
    {
        Camera::ensure_initialized();

        fPos_[0] = 0.0f;
        fPos_[1] = pls::cs::to_int32(((-450.0f + 900.0f * pls::cs::Single(team_id_))));
        fPos_[2] = 900.0f;
        fPos_[3] = 720.0f;
        for (pls::cs::Int32 i = 0; i < players_.length(); ++i) {
            require(players_.get_Item(i))->Clear();
            {
                pls::cs::Ref<Player> cs_arg0 = players_.get_Item(i);
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg1 = require(players_.get_Item(i))->pos_;
                SetPosFPos(cs_arg0, cs_arg1);
            }
            if (team_id_ == 0) {
                require(players_.get_Item(i))->direct_ = 0;
            } else {
                require(players_.get_Item(i))->direct_ = 2;
            }
        }
        require(require(udat_)->ball_)->SetStop();
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(require(require(udat_)->ball_)->pos_)->Set(0.0f, 0.0f, 0.0f);
        });
        {
            auto cs_target = require(udat_)->ball_;
            pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::BitUtil::Off(require(require(udat_)->ball_)->flag_, 1);
            });
            require(cs_target)->flag_ = cs_value;
        }
        Camera::ConvertGlobalToScreen(require(require(udat_)->ball_)->pos_,
                                      require(require(udat_)->ball_)->screen_pos_);
        {
            auto cs_target = Camera::pos();
            pls::cs::Single cs_value = require(require(udat_)->ball_)->screen_pos_[0];
            require(cs_target)->x_ = cs_value;
        }
        {
            auto cs_target = Camera::pos();
            pls::cs::Single cs_value = require(require(udat_)->ball_)->screen_pos_[1];
            require(cs_target)->y_ = cs_value;
        }
        if (require(require(udat_)->gm_)->gameState_ == team_id_) {
            if (team_id_ == 0) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver =
                            require(players_.get_Item(pls::cs::Int32(players_.length()) - 1))->pos_;
                        pls::cs::Single cs_arg0 = require(Team::FORMATION_KICKOFF().get_Item(0))->x_;
                        pls::cs::Single cs_arg2 = require(Team::FORMATION_KICKOFF().get_Item(0))->z_;
                        require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2);
                    }());
                });
                if (require(players_.get_Item(pls::cs::Int32(players_.length()) - 2))->formation_[0] >= 50) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            auto cs_receiver =
                                require(players_.get_Item(pls::cs::Int32(players_.length()) - 2))->pos_;
                            pls::cs::Single cs_arg0 = require(Team::FORMATION_KICKOFF().get_Item(1))->x_;
                            pls::cs::Single cs_arg2 = require(Team::FORMATION_KICKOFF().get_Item(1))->z_;
                            require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2);
                        }());
                    });
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            auto cs_receiver =
                                require(players_.get_Item(pls::cs::Int32(players_.length()) - 2))->pos_;
                            pls::cs::Single cs_arg0 = -(require(Team::FORMATION_KICKOFF().get_Item(1))->x_);
                            pls::cs::Single cs_arg2 = require(Team::FORMATION_KICKOFF().get_Item(1))->z_;
                            require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2);
                        }());
                    });
                }
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver =
                            require(players_.get_Item(pls::cs::Int32(players_.length()) - 1))->pos_;
                        pls::cs::Single cs_arg0 = require(Team::FORMATION_KICKOFF().get_Item(0))->x_;
                        pls::cs::Single cs_arg2 = -(require(Team::FORMATION_KICKOFF().get_Item(0))->z_);
                        require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2);
                    }());
                });
                if (require(players_.get_Item(pls::cs::Int32(players_.length()) - 2))->formation_[0] <= 50) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            auto cs_receiver =
                                require(players_.get_Item(pls::cs::Int32(players_.length()) - 2))->pos_;
                            pls::cs::Single cs_arg0 = require(Team::FORMATION_KICKOFF().get_Item(1))->x_;
                            pls::cs::Single cs_arg2 = -(require(Team::FORMATION_KICKOFF().get_Item(1))->z_);
                            require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2);
                        }());
                    });
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            auto cs_receiver =
                                require(players_.get_Item(pls::cs::Int32(players_.length()) - 2))->pos_;
                            pls::cs::Single cs_arg0 = -(require(Team::FORMATION_KICKOFF().get_Item(1))->x_);
                            pls::cs::Single cs_arg2 = -(require(Team::FORMATION_KICKOFF().get_Item(1))->z_);
                            require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2);
                        }());
                    });
                }
            }
            {
                auto cs_receiver = require(udat_)->ball_;
                pls::cs::Ref<Player> cs_arg0 = players_.get_Item(pls::cs::Int32(players_.length()) - 1);
                require(cs_receiver)->Ball::ReceiveBall(cs_arg0);
            }
        } else {
        }
    }
}

// M:game.Team.SetPositionThrowIn
void Team::SetPositionThrowIn() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Team.SetPositionThrowIn", game);
    {
        if (require(require(udat_)->gm_)->gameState_ == team_id_) {
            pls::cs::Int32 num;
            pls::cs::Int32 num2;
            if (team_id_ == 0) {
                if (((require(require(require(udat_)->ball_)->lineOutPos_)->x_ < 0.0f))) {
                    num = 0;
                } else {
                    num = 100;
                }
                num2 = pls::cs::to_int32(
                    GameUtil::RateConvertFloat(require(require(require(udat_)->ball_)->lineOutPos_)->z_,
                                               -900.0f, 900.0f, 0.0f, 100.0f, true));
            } else {
                if (((require(require(require(udat_)->ball_)->lineOutPos_)->x_ > 0.0f))) {
                    num = 0;
                } else {
                    num = 100;
                }
                num2 = pls::cs::to_int32(
                    GameUtil::RateConvertFloat(require(require(require(udat_)->ball_)->lineOutPos_)->z_,
                                               900.0f, -900.0f, 0.0f, 100.0f, true));
            }
            pls::cs::Int32 num3 = 2147483647 /* Int32.MaxValue */;
            pls::cs::Int32 num4 = 1;
            for (pls::cs::Int32 i = 1; i < players_.length(); ++i) {
                pls::cs::Ref<Player> player = players_.get_Item(i);
                auto cs_left_184 = ([&]() -> pls::cs::Int32 {
                    auto cs_left_184 = (num - require(player)->formation_[0]);
                    auto cs_right_184 = (num - require(player)->formation_[0]);
                    return cs_left_184 * cs_right_184;
                }());
                auto cs_right_184 = ([&]() -> pls::cs::Int32 {
                    auto cs_left_184 = (num2 - require(player)->formation_[1]);
                    auto cs_right_184 = (num2 - require(player)->formation_[1]);
                    return cs_left_184 * cs_right_184;
                }());
                pls::cs::Int32 num5 = cs_left_184 + cs_right_184;
                if (num3 > num5) {
                    num3 = num5;
                    num4 = i;
                }
            }
            {
                auto cs_target = players_.get_Item(num4);
                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::On(require(players_.get_Item(num4))->flag_, 256);
                });
                require(cs_target)->flag_ = cs_value;
            }
            if (require(require(require(udat_)->ball_)->lineOutPos_)->x_ < 0.0f) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = require(players_.get_Item(num4))->pos_;
                        pls::cs::Single cs_arg2 = require(require(require(udat_)->ball_)->lineOutPos_)->z_;
                        require(cs_receiver)->Set(-470.0f, 0.0f, cs_arg2);
                    }());
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = require(players_.get_Item(num4))->pos_;
                        pls::cs::Single cs_arg2 = require(require(require(udat_)->ball_)->lineOutPos_)->z_;
                        require(cs_receiver)->Set(470.0f, 0.0f, cs_arg2);
                    }());
                });
            }
            {
                auto cs_target = require(udat_)->ball_;
                pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Off(require(require(udat_)->ball_)->flag_, 1);
                });
                require(cs_target)->flag_ = cs_value;
            }
            if (require(require(require(udat_)->ball_)->lineOutPos_)->x_ > 0.0f) {
                require(players_.get_Item(num4))->direct_ = 3;
            } else {
                require(players_.get_Item(num4))->direct_ = 1;
            }
            {
                auto cs_receiver = require(udat_)->ball_;
                pls::cs::Ref<Player> cs_arg0 = players_.get_Item(num4);
                require(cs_receiver)->Ball::ReceiveBall(cs_arg0, true);
            }
            require(require(udat_)->ball_)->SetStop();
        }
    }
}

// M:game.Player.ChRepetition
void Player::ChRepetition() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.ChRepetition", game);
    {
        pls::cs::Ref<Ball> ball_ = require(Player::udat_())->ball_;
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(Player::hitList()));
            }) > 0) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_RemoveAllElements(require(Player::hitList()));
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_java_util::Vector_2_AddElement(require(Player::hitList()), pls::cs::box(this));
        });
        for (pls::cs::Int32 i = 1;
             i < require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.length(); ++i) {
            if (i == p_id_) {
                continue;
            }
            pls::cs::Ref<Player> player =
                require(require(Player::udat_())->teams_.get_Item(team_id_))->players_.get_Item(i);
            if (([&]() -> pls::cs::Int32 {
                    auto cs_left = require(player)->address_[0];
                    auto cs_right = require(ball_)->address_[0];
                    return cs_left - cs_right;
                }()) < -2 ||
                ([&]() -> pls::cs::Int32 {
                    auto cs_left = require(player)->address_[0];
                    auto cs_right = require(ball_)->address_[0];
                    return cs_left - cs_right;
                }()) > 2) {
                continue;
            }
            if (([&]() -> pls::cs::Int32 {
                    auto cs_left = require(player)->address_[1];
                    auto cs_right = require(ball_)->address_[1];
                    return cs_left - cs_right;
                }()) < -2 ||
                ([&]() -> pls::cs::Int32 {
                    auto cs_left = require(player)->address_[1];
                    auto cs_right = require(ball_)->address_[1];
                    return cs_left - cs_right;
                }()) > 2) {
                continue;
            }
            if (require(player)->ChTrapOrHeading()) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(Player::hitList()),
                                                             pls::cs::box(player));
                });
            }
        }
        for (pls::cs::Int32 j = 1;
             j < require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->players_.length(); ++j) {
            pls::cs::Ref<Player> player2 =
                require(require(Player::udat_())->teams_.get_Item(1 - team_id_))->players_.get_Item(j);
            if (require(player2)->ChTrapOrHeading()) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(Player::hitList()),
                                                             pls::cs::box(player2));
                });
            }
        }
        bool flag = false;
        for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(Player::hitList()));
                                   });
             ++k) {
            pls::cs::Ref<Player> player3 =
                pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(Player::hitList()), k);
                }));
            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Check(require(player3)->flag_, 64);
                })) {
                flag = true;
                break;
            }
        }
        if (flag) {
            for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                          return kl_java_util::Vector_2_Size(require(Player::hitList()));
                                      }) -
                                      1;
                 num >= 0; --num) {
                pls::cs::Ref<Player> player4 =
                    pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(Player::hitList()), num);
                    }));
                if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::BitUtil::Check(require(player4)->flag_, 64);
                    })) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_RemoveElementAt(require(Player::hitList()), num);
                    });
                }
            }
        }
        pls::cs::Ref<Player> player5 = pls::cs::Ref<Player>{};
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_Size(require(Player::hitList()));
            }) > 1) {
            for (pls::cs::Int32 l = 0; l < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(Player::hitList()));
                                       });
                 ++l) {
                pls::cs::Ref<Player> player6 =
                    pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(Player::hitList()), l);
                    }));
                {
                    auto cs_target = player6;
                    pls::cs::Single cs_value =
                        pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_lang::JMath::Sqrt(
                                (require(require(player6)->pos_)->x_ - require(require(ball_)->pos_)->x_) *
                                    (require(require(player6)->pos_)->x_ -
                                     require(require(ball_)->pos_)->x_) +
                                (require(require(player6)->pos_)->z_ - require(require(ball_)->pos_)->z_) *
                                    (require(require(player6)->pos_)->z_ -
                                     require(require(ball_)->pos_)->z_));
                        }));
                    require(cs_target)->temp_len = cs_value;
                }
            }
            pls::cs::Single num2 = 2.1474836E+09f;
            pls::cs::Int32 index = 0;
            for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(Player::hitList()));
                                       });
                 ++m) {
                pls::cs::Ref<Player> player7 =
                    pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(Player::hitList()), m);
                    }));
                if (require(player7)->temp_len < num2) {
                    num2 = require(player7)->temp_len;
                    index = m;
                }
            }
            player5 = pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_ElementAt(require(Player::hitList()), index);
            }));
        } else {
            player5 = pls::cs::unbox<pls::cs::Ref<Player>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_FirstElement(require(Player::hitList()));
            }));
        }
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::BitUtil::Check(require(player5)->flag_, 64);
            })) {
            require(require(Player::udat_())->ball_)->Ball::ReceiveBall(player5);
            require(require(Player::udat_())->ball_)->Ball::ReleaseBall(player5);
            require(require(Player::udat_())->ball_)->SetHeadingData(player5);
            {
                auto cs_target = player5;
                pls::cs::Int32 cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 128); });
                require(cs_target)->flag_ = cs_value;
            }
        } else {
            require(require(Player::udat_())->ball_)->Ball::ReceiveBall(player5);
        }
    }
}

// M:game.Player.Proc_kick
void Player::Proc_kick() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Proc_kick", game);
    {
        require(require(Player::udat_())->ball_)->Ball::ReleaseBall(this);
        AddCommandChangeSeb(1);
        AddCommandWait(Player::SEB_H_KICK_ANIME()[pls::cs::Int32(Player::SEB_H_KICK_ANIME().length()) - 1]);
        AddCommandChangeSeb(0);
        require(temp_vec)->x_ = require(require(require(Player::udat_())->ball_)->pos_)->x_ +
                                require(require(require(Player::udat_())->ball_)->v_)->x_;
        require(temp_vec)->y_ = 0.0f;
        require(temp_vec)->z_ = require(require(require(Player::udat_())->ball_)->pos_)->z_ +
                                require(require(require(Player::udat_())->ball_)->v_)->z_;
        Camera::ConvertGlobalToScreen(temp_vec, Player::CH_BALL_DIRECT());
        Player::CH_BALL_DIRECT()[0] = ([&]() -> pls::cs::Int32 {
            auto cs_left = Player::CH_BALL_DIRECT()[0];
            auto cs_right = screen_pos_[0];
            return cs_left - cs_right;
        }());
        Player::CH_BALL_DIRECT()[1] = ([&]() -> pls::cs::Int32 {
            auto cs_left = Player::CH_BALL_DIRECT()[1];
            auto cs_right = screen_pos_[1];
            return cs_left - cs_right;
        }());
        if (Player::CH_BALL_DIRECT()[0] > 0) {
            if (Player::CH_BALL_DIRECT()[1] > 0) {
                direct_ = 0;
            } else {
                direct_ = 1;
            }
        } else if (Player::CH_BALL_DIRECT()[1] > 0) {
            direct_ = 3;
        } else {
            direct_ = 2;
        }
    }
}

// M:game.Player.Proc_throwIn
void Player::Proc_throwIn() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Player.Proc_throwIn", game);
    {
        require(require(Player::udat_())->ball_)->Ball::ReleaseBall(this);
        flag_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::BitUtil::Off(flag_, 16384); });
        seb_ = 0;
        AddCommandChangeSeb(4);
        AddCommandWait(
            Player::SEB_H_THROWIN_ANIME()[pls::cs::Int32(Player::SEB_H_THROWIN_ANIME().length()) - 1]);
        AddCommandFlagOff(256);
        AddCommandChangeSeb(0);
        if (require(require(require(Player::udat_())->ball_)->lineOutPos_)->x_ > 0.0f) {
            direct_ = 3;
        } else {
            direct_ = 1;
        }
    }
}
} // namespace game
}
