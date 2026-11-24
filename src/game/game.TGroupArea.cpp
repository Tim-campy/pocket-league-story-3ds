// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.PlayerData.hpp"
#include "data.SupervisorData.hpp"
#include "form.GameForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameUtil.hpp"
#include "game.MapMain.hpp"
#include "game.Player.hpp"
#include "game.TArea.hpp"
#include "game.TBall.hpp"
#include "game.TGroupArea.hpp"
#include "game.TPlayer.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_java_util = pls::generated::java::util;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace game {

void TGroupArea::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(apdat_, visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(centerPos_, visitor);
    pls::cs::trace_value(tArea_, visitor);
    pls::cs::trace_value(tPlayerList_, visitor);
    pls::cs::trace_value(tBallList_, visitor);
    pls::cs::trace_value(older_vec, visitor);
    pls::cs::trace_value(traPos_, visitor);
    pls::cs::trace_value(filed_gpos, visitor);
    pls::cs::trace_value(filed_cpos, visitor);
    pls::cs::trace_value(cx, visitor);
    pls::cs::trace_value(cy, visitor);
    pls::cs::trace_value(goal_gpos, visitor);
    pls::cs::trace_value(goal_cpos, visitor);
    pls::cs::trace_value(temp_olderVecId_, visitor);
    pls::cs::trace_value(temp_tPlayerListId_, visitor);
    pls::cs::trace_value(temp_tBallListId_, visitor);
}

static IntArray TGroupArea_camera_pos_storage{};

static PLS_NOINLINE void cs_init_4feff672b530e53a_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(TGroupArea_camera_pos_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.TGroupArea", flag, []() {
        TGroupArea_camera_pos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.TGroupArea.camera_pos", [&]() { return IntArray::make(2); });
    });
}

void TGroupArea::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_4feff672b530e53a_slow(flag);
}

IntArray& TGroupArea::camera_pos() {
    TGroupArea::ensure_initialized();
    return TGroupArea_camera_pos_storage;
}

void TGroupArea::create_init(pls::cs::Ref<TGroupArea> self, pls::cs::Int32 id, pls::cs::Ref<TArea> tArea) {
    TGroupArea::ensure_initialized();
    self->filed_gpos = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
    self->filed_cpos = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2}));
    });
    self->cx = IntArray::make(4);
    self->cy = IntArray::make(4);
    self->goal_gpos = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
    self->goal_cpos = pls::diagnostic::api_call([&]() -> decltype(auto) {
        return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2}));
    });
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.#ctor(System.Int32,game.TArea)", game);
    {
        self->apdat_ = main::AppData::GetInstance();
        self->udat_ = UserData::GetInstance();
        self->tPlayerList_ = kl_java_util::Vector::create();
        self->tBallList_ = kl_java_util::Vector::create();
        self->id_ = id;
        self->tArea_ = tArea;
        self->older_vec = kl_java_util::Vector::create();
        self->Init();
    }
}

// M:game.TGroupArea.#ctor(System.Int32,game.TArea)
pls::cs::Ref<TGroupArea> TGroupArea::create(pls::cs::Int32 id, pls::cs::Ref<TArea> tArea) {
    TGroupArea::ensure_initialized();
    auto self = pls::cs::make_ref<TGroupArea>();
    TGroupArea::create_init(self, id, tArea);
    return self;
}

// M:game.TGroupArea.Serialize(java.io.OutputStream)
void TGroupArea::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.Serialize(java.io.OutputStream)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, stateCnt_); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_Size(require(older_vec));
                })));
        });
        for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(older_vec));
                                   });
             ++i) {
            pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_ElementAt(require(older_vec), i); }));
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteShort(
                    os, pls::cs::cast_integral<std::int16_t>(require(tPlayer)->trainingId_[0]));
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os,
                                                         pls::cs::cast_integral<std::int16_t>(ballIndex_));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, trainingWait_); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                           return kl_java_util::Vector_2_Size(
                                                               require(tPlayerList_));
                                                       }));
        });
        for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                   });
             ++j) {
            pls::cs::Ref<TPlayer> tPlayer2 =
                pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), j);
                }));
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteShort(
                    os, pls::cs::cast_integral<std::int16_t>(require(tPlayer2)->trainingId_[0]));
            });
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                           return kl_java_util::Vector_2_Size(
                                                               require(tBallList_));
                                                       }));
        });
        for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(tBallList_));
                                   });
             ++k) {
            pls::cs::Ref<TBall> tBall =
                pls::cs::unbox<pls::cs::Ref<TBall>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_ElementAt(require(tBallList_), k);
                }));
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StreamUtil::WriteShort(
                    os, pls::cs::cast_integral<std::int16_t>(require(tBall)->tId_));
            });
        }
    }
}

// M:game.TGroupArea.Deserialize(java.io.InputStream,game.TArea)
void TGroupArea::Deserialize(pls::cs::Ref<kl_io::InputStream> stream, pls::cs::Ref<TArea> tArea) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.Deserialize(java.io.InputStream,game.TArea)",
                     game);
    {
        tArea_ = tArea;
        state_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        stateCnt_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        pls::cs::Int32 num = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        temp_olderVecId_ = IntArray::make(num);
        for (pls::cs::Int32 i = 0; i < temp_olderVecId_.length(); ++i) {
            {
                auto cs_target = temp_olderVecId_;
                auto cs_index = i;
                auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        ballIndex_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        trainingWait_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        pls::cs::Int32 num2 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        temp_tPlayerListId_ = IntArray::make(num2);
        for (pls::cs::Int32 j = 0; j < temp_tPlayerListId_.length(); ++j) {
            {
                auto cs_target = temp_tPlayerListId_;
                auto cs_index = j;
                auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        num2 = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        temp_tBallListId_ = IntArray::make(num2);
        for (pls::cs::Int32 k = 0; k < temp_tBallListId_.length(); ++k) {
            {
                auto cs_target = temp_tBallListId_;
                auto cs_index = k;
                auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:game.TGroupArea.Deserialize2
void TGroupArea::Deserialize2() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.Deserialize2", game);
    {
        pls::cs::Ref<UserData> instance = UserData::GetInstance();
        older_vec = kl_java_util::Vector::create();
        tPlayerList_ = kl_java_util::Vector::create();
        tBallList_ = kl_java_util::Vector::create();
        for (pls::cs::Int32 i = 0; i < temp_olderVecId_.length(); ++i) {
            pls::cs::Ref<TPlayer> obj = require(instance)->tPlayers_.get_Item(temp_olderVecId_[i]);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(older_vec), pls::cs::box(obj));
            });
        }
        for (pls::cs::Int32 j = 0; j < temp_tPlayerListId_.length(); ++j) {
            pls::cs::Ref<TPlayer> tPlayer = require(instance)->tPlayers_.get_Item(temp_tPlayerListId_[j]);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(tPlayerList_), pls::cs::box(tPlayer));
            });
            require(tPlayer)->tGroupArea_ = this;
        }
        for (pls::cs::Int32 k = 0; k < temp_tBallListId_.length(); ++k) {
            pls::cs::Ref<TBall> tBall = require(instance)->tBalls_.get_Item(temp_tBallListId_[k]);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_AddElement(require(tBallList_), pls::cs::box(tBall));
            });
            require(tBall)->tGroupArea_ = this;
        }
    }
}

// M:game.TGroupArea.Init
void TGroupArea::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.Init", game);
    {
        centerPos_ = kl_util3d::Vector3D::create();
        tPlayerList_ = kl_java_util::Vector::create();
        tBallList_ = kl_java_util::Vector::create();
        state_ = 10;
    }
}

// M:game.TGroupArea.Update
void TGroupArea::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.Update", game);
    {
        form::GameForm::ensure_initialized();

        stateCnt_ = ((stateCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (state_ == 11) {
            if (require(tArea_)->tMode_ == 0 || require(tArea_)->tMode_ == 1) {
                bool flag = true;
                for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                           });
                     ++i) {
                    pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), i);
                        }));
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(require(tPlayer)->script_));
                        }) > 0) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    ChangeState(12);
                }
            } else {
                ChangeState(12);
            }
        } else {
            if (state_ == 12) {
                if (require(tArea_)->tMode_ == 2 && trainingWait_ > 0) {
                    --trainingWait_;
                }
                if (require(tArea_)->tMode_ == 3 && trainingWait_ > 0) {
                    --trainingWait_;
                }
                if (stateCnt_ % form::GameForm::TRAINING_GETEXP_TIME() ==
                    form::GameForm::TRAINING_GETEXP_TIME() - 1) {
                    pls::cs::Ref<data::SupervisorData> supervisorData =
                        require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
                    pls::cs::Int32 trainigGetExp = require(supervisorData)->GetTrainigGetExp();
                    for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                   return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                               });
                         ++j) {
                        pls::cs::Ref<TPlayer> tPlayer2 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), j);
                            }));
                        pls::cs::Ref<data::PlayerData> playerData =
                            require(apdat_)->pData_.get_Item(require(tPlayer2)->pData_id_);
                        require(playerData)->StockExp(trainigGetExp);
                    }
                }
            }
        }
    }
}

// M:game.TGroupArea.Draw_obj(kairo.unity.ui.Graphics)
void TGroupArea::Draw_obj(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.Draw_obj(kairo.unity.ui.Graphics)", game);
    {
        form::GameForm::ensure_initialized();
        MapMain::ensure_initialized();

        if (require(tArea_)->tMode_ == 2 && state_ == 12) {
            for (pls::cs::Int32 i = 0; i < traPos_.length(); ++i) {
                Camera::ConvertGlobalToCamera(traPos_.get_Item(i), TGroupArea::camera_pos());
                if (!(([&]() -> bool {
                        pls::cs::Int32 cs_arg0 = TGroupArea::camera_pos()[0] - 3;
                        pls::cs::Int32 cs_arg1 = TGroupArea::camera_pos()[1] - 4;
                        return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, 6, 4, form::GameForm::VIEW_X(),
                                                       form::GameForm::VIEW_Y(), form::GameForm::VIEW_W(),
                                                       form::GameForm::VIEW_H(), false);
                    }()))) {
                    continue;
                }
                {
                    pls::cs::Int32 cs_arg2 = TGroupArea::camera_pos()[1];
                    pls::cs::Int32 cs_arg6 = TGroupArea::camera_pos()[0];
                    pls::cs::Int32 cs_arg7 = TGroupArea::camera_pos()[1];
                    require(apdat_)->InsertGameObject(8, 0, cs_arg2, 39, 37, 0, cs_arg6, cs_arg7, false, 0);
                }
            }
        } else {
            if ((require(tArea_)->tMode_ == 3) && (state_ == 12)) {
                pls::cs::Int32 num, num2, num3, num4;
                num4 = 0;
                num3 = num4;
                num2 = num3;
                num = num2;
                pls::cs::Int32 num5 = 0;
                if (require(tArea_)->pId_ == 3) {
                    Camera::ConvertGlobalToCamera(traPos_.get_Item(2), TGroupArea::camera_pos());
                    for (pls::cs::Int32 j = 0; j < MapMain::GOAL1_PARTS_POS().length(); ++j) {
                        num3 = ([&]() -> pls::cs::Int32 {
                                   auto cs_left = TGroupArea::camera_pos()[0];
                                   auto cs_right = MapMain::GOAL1_PARTS_POS()[j][0];
                                   return cs_left + cs_right;
                               }()) +
                               num;
                        num4 = ([&]() -> pls::cs::Int32 {
                                   auto cs_left = TGroupArea::camera_pos()[1];
                                   auto cs_right = MapMain::GOAL1_PARTS_POS()[j][1];
                                   return cs_left + cs_right;
                               }()) +
                               num2;
                        num5 = ([&]() -> pls::cs::Int32 {
                            auto cs_left = ([&]() -> pls::cs::Int32 {
                                               auto cs_left = TGroupArea::camera_pos()[1];
                                               auto cs_right = MapMain::GOAL1_PARTS_POS()[j][1];
                                               return cs_left + cs_right;
                                           }()) +
                                           num2;
                            auto cs_right = MapMain::GOAL1_PARTS_GRA()[j][2];
                            return cs_left + cs_right;
                        }());
                        {
                            pls::cs::Int32 cs_arg3 = MapMain::GOAL1_PARTS_GRA()[j][0];
                            pls::cs::Int32 cs_arg4 = MapMain::GOAL1_PARTS_GRA()[j][1];
                            require(apdat_)->InsertGameObject(8, 0, num5, cs_arg3, cs_arg4, 0, num3, num4,
                                                              false, 0);
                        }
                    }
                } else {
                    num = 0;
                    num2 = 0;
                    Camera::ConvertGlobalToCamera(traPos_.get_Item(2), TGroupArea::camera_pos());
                    for (pls::cs::Int32 k = 0; k < MapMain::GOAL2_PARTS_POS().length(); ++k) {
                        num3 = ([&]() -> pls::cs::Int32 {
                                   auto cs_left = TGroupArea::camera_pos()[0];
                                   auto cs_right = MapMain::GOAL2_PARTS_POS()[k][0];
                                   return cs_left + cs_right;
                               }()) +
                               num;
                        num4 = ([&]() -> pls::cs::Int32 {
                                   auto cs_left = TGroupArea::camera_pos()[1];
                                   auto cs_right = MapMain::GOAL2_PARTS_POS()[k][1];
                                   return cs_left + cs_right;
                               }()) +
                               num2;
                        num5 = ([&]() -> pls::cs::Int32 {
                            auto cs_left = ([&]() -> pls::cs::Int32 {
                                               auto cs_left = TGroupArea::camera_pos()[1];
                                               auto cs_right = MapMain::GOAL2_PARTS_POS()[k][1];
                                               return cs_left + cs_right;
                                           }()) +
                                           num2;
                            auto cs_right = MapMain::GOAL2_PARTS_GRA()[k][2];
                            return cs_left + cs_right;
                        }());
                        {
                            pls::cs::Int32 cs_arg3 = MapMain::GOAL2_PARTS_GRA()[k][0];
                            pls::cs::Int32 cs_arg4 = MapMain::GOAL2_PARTS_GRA()[k][1];
                            require(apdat_)->InsertGameObject(8, 0, num5, cs_arg3, cs_arg4, 0, num3, num4,
                                                              false, 0);
                        }
                    }
                }
            }
        }
    }
}

// M:game.TGroupArea.ChangeState(System.Int32)
void TGroupArea::ChangeState(pls::cs::Int32 next_state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.ChangeState(System.Int32)", game);
    {
        MapMain::ensure_initialized();

        state_ = next_state;
        stateCnt_ = 0;
        if (state_ == 11) {
            if (require(tArea_)->tMode_ == 0) {
                for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                           });
                     ++i) {
                    pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), i);
                        }));
                    require(tPlayer)->ClearScript();
                    {
                        auto cs_target = require(tPlayer)->goalPos_;
                        pls::cs::Single cs_value = GameUtil::RateConvertFloat(
                            10 + 80 * i, 0.0f, 99.0f, require(centerPos_)->x_ - coatW_ / 2.0f,
                            require(centerPos_)->x_ + coatW_ / 2.0f, true);
                        require(cs_target)->x_ = cs_value;
                    }
                    require(require(tPlayer)->goalPos_)->z_ = require(centerPos_)->z_;
                    {
                        pls::cs::Int32 cs_arg0 = GameUtil::Random(14);
                        require(tPlayer)->AddCommandWait(cs_arg0);
                    }
                    require(tPlayer)->AddCommandTrainigMoveGoalPos();
                    require(tPlayer)->AddCommandChangeDirect(1 + i * 2);
                }
            } else if (require(tArea_)->tMode_ == 1) {
                for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                           });
                     ++j) {
                    pls::cs::Ref<TPlayer> tPlayer2 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), j);
                        }));
                    require(tPlayer2)->ClearScript();
                    {
                        auto cs_target = require(tPlayer2)->goalPos_;
                        pls::cs::Single cs_value = GameUtil::RateConvertFloat(
                            30 + 40 * j, 0.0f, 99.0f, require(centerPos_)->x_ - coatW_ / 2.0f,
                            require(centerPos_)->x_ + coatW_ / 2.0f, true);
                        require(cs_target)->x_ = cs_value;
                    }
                    require(require(tPlayer2)->goalPos_)->z_ = require(centerPos_)->z_;
                    {
                        pls::cs::Int32 cs_arg0 = GameUtil::Random(14);
                        require(tPlayer2)->AddCommandWait(cs_arg0);
                    }
                    require(tPlayer2)->AddCommandTrainigMoveGoalPos();
                    require(tPlayer2)->AddCommandChangeDirect(2);
                    require(tPlayer2)->AddCommandFlagOn(131072);
                }
            } else if (require(tArea_)->tMode_ == 2) {
                for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                           });
                     ++k) {
                    pls::cs::Ref<TPlayer> tPlayer3 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), k);
                        }));
                    require(tPlayer3)->ClearScript();
                    require(tPlayer3)->AddCommandDribbleOlderRegist();
                    require(tPlayer3)->AddCommandDribbleOlder();
                }
            } else if (require(tArea_)->tMode_ == 4) {
                pls::cs::Int32 num = 15;
                for (pls::cs::Int32 l = 0; l < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                           });
                     ++l) {
                    pls::cs::Ref<TPlayer> tPlayer4 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), l);
                        }));
                    require(tPlayer4)->ClearScript();
                    require(tPlayer4)->AddCommandWait(num);
                    num += 15;
                    require(tPlayer4)->AddCommandRunningRegist();
                }
            } else {
                if (require(tArea_)->tMode_ == 3) {
                    for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                   return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                               });
                         ++m) {
                        pls::cs::Ref<TPlayer> tPlayer5 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), m);
                            }));
                        require(tPlayer5)->ClearScript();
                        if (m == 0) {
                            require(tPlayer5)->AddCommandShootGK();
                            continue;
                        }
                        require(tPlayer5)->AddCommandShootOlderRegist();
                        require(tPlayer5)->AddCommandShootOlder();
                    }
                }
            }
        } else if (state_ == 12) {
            if (require(tArea_)->tMode_ == 0) {
                for (pls::cs::Int32 n = 0; n < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                           });
                     ++n) {
                    pls::cs::Ref<TPlayer> tPlayer6 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), n);
                        }));
                    if (n == 0) {
                        pls::cs::Ref<TBall> tBall = pls::cs::unbox<pls::cs::Ref<TBall>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(require(tBallList_), 0);
                            }));
                        require(tBall)->ReceiveBall(tPlayer6);
                        require(tPlayer6)->AddCommandWait(10);
                        require(tPlayer6)->AddCommandTrainingBallKick();
                    } else {
                        require(tPlayer6)->AddCommandTrainingBallWait();
                    }
                }
            } else if (require(tArea_)->tMode_ == 1) {
                for (pls::cs::Int32 num2 = 0; num2 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                  return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                              });
                     ++num2) {
                    pls::cs::Ref<TPlayer> tPlayer7 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), num2);
                        }));
                    pls::cs::Ref<TBall> tBall2 = pls::cs::unbox<pls::cs::Ref<TBall>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tBallList_), num2);
                        }));
                    require(tBall2)->ReceiveBall(tPlayer7);
                    require(tPlayer7)->AddCommandLifting(0);
                }
            } else if (require(tArea_)->tMode_ == 2) {

            } else if (require(tArea_)->tMode_ == 4) {

            } else if (require(tArea_)->tMode_ == 3) {
            }
        } else if (state_ == 13) {
            for (pls::cs::Int32 num3 = 0; num3 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                              return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                          });
                 ++num3) {
                pls::cs::Ref<TPlayer> tPlayer8 =
                    pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), num3);
                    }));
                require(tPlayer8)->StopTraining();
                require(tPlayer8)->AddCommandWait(10);
            }
        } else if (state_ == 14) {
            pls::cs::Int32 num4 = 0;
            for (pls::cs::Int32 num5 = 0; num5 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                              return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                          });
                 ++num5) {
                pls::cs::Ref<TPlayer> tPlayer9 =
                    pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), num5);
                    }));
                if (require(tPlayer9)->oldTrainingId_[1] == 0) {
                    if (require(tPlayer9)->trainingId_[1] == 0) {
                        require(tPlayer9)->AddCommandTenantIn();
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                auto cs_receiver = require(tPlayer9)->pos_;
                                pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = MapMain::MOVE_POINT().get_Item(7);
                                require(cs_receiver)->Set(cs_arg0);
                            }());
                        });
                        require(tPlayer9)->AddCommandWait(num4);
                        require(tPlayer9)->AddCommandFlagOff(1);
                        {
                            pls::cs::Int32 cs_arg0 =
                                pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(3))->x_);
                            pls::cs::Int32 cs_arg1 =
                                pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(3))->z_);
                            require(tPlayer9)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                        }
                        if (require(tPlayer9)->trainingId_[2] == 0) {
                            {
                                pls::cs::Int32 cs_arg0 =
                                    pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(5))->x_);
                                pls::cs::Int32 cs_arg1 =
                                    pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(5))->z_);
                                require(tPlayer9)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                            }
                        } else {
                            {
                                pls::cs::Int32 cs_arg0 =
                                    pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(6))->x_);
                                pls::cs::Int32 cs_arg1 =
                                    pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(6))->z_);
                                require(tPlayer9)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                            }
                        }
                        pls::cs::Ref<kl_util3d::Vector3D> startTrainingGatherPos =
                            require(tArea_)->GetStartTrainingGatherPos(this, tPlayer9);
                        require(tPlayer9)->AddCommandTrainigMoveGoalPosSet(
                            pls::cs::to_int32(require(startTrainingGatherPos)->x_),
                            pls::cs::to_int32(require(startTrainingGatherPos)->z_));
                        num4 += 6;
                    }
                } else if (require(tPlayer9)->trainingId_[1] == 0) {
                    if (require(tPlayer9)->trainingId_[2] == 0) {
                        {
                            pls::cs::Int32 cs_arg0 =
                                pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(5))->x_);
                            pls::cs::Int32 cs_arg1 =
                                pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(5))->z_);
                            require(tPlayer9)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                        }
                    } else {
                        {
                            pls::cs::Int32 cs_arg0 =
                                pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(6))->x_);
                            pls::cs::Int32 cs_arg1 =
                                pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(6))->z_);
                            require(tPlayer9)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                        }
                    }
                    {
                        pls::cs::Int32 cs_arg0 =
                            pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(3))->x_);
                        pls::cs::Int32 cs_arg1 =
                            pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(3))->z_);
                        require(tPlayer9)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                    }
                    {
                        pls::cs::Int32 cs_arg0 =
                            pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(7))->x_);
                        pls::cs::Int32 cs_arg1 =
                            pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(7))->z_);
                        require(tPlayer9)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                    }
                    require(tPlayer9)->AddCommandTenantIn();
                } else {
                    pls::cs::Ref<kl_util3d::Vector3D> startTrainingGatherPos2 =
                        require(tArea_)->GetStartTrainingGatherPos(this, tPlayer9);
                    require(tPlayer9)->AddCommandTrainigMoveGoalPosSet(
                        pls::cs::to_int32(require(startTrainingGatherPos2)->x_),
                        pls::cs::to_int32(require(startTrainingGatherPos2)->z_));
                }
            }
        }
    }
}

// M:game.TGroupArea.SetCoatData
void TGroupArea::SetCoatData() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.SetCoatData", game);
    {
        if (require(tArea_)->tMode_ == 0) {
            pls::cs::Int32 num = 3;
            coatW_ = require(tArea_)->coatW_;
            coatH_ = require(tArea_)->coatH_ / pls::cs::Single(num);
            require(centerPos_)->x_ = require(require(tArea_)->centerPos_)->x_;
            require(centerPos_)->z_ = require(require(tArea_)->centerPos_)->z_ +
                                      require(tArea_)->coatH_ / 2.0f + (-(coatH_)) / 2.0f -
                                      coatH_ * pls::cs::Single(id_);
        } else if (require(tArea_)->tMode_ == 1) {
            pls::cs::Int32 num2 = 3;
            coatW_ = require(tArea_)->coatW_;
            coatH_ = require(tArea_)->coatH_ / pls::cs::Single(num2);
            require(centerPos_)->x_ = require(require(tArea_)->centerPos_)->x_;
            require(centerPos_)->z_ = require(require(tArea_)->centerPos_)->z_ +
                                      require(tArea_)->coatH_ / 2.0f + (-(coatH_)) / 2.0f -
                                      coatH_ * pls::cs::Single(id_);
        } else if (require(tArea_)->tMode_ == 2) {
            pls::cs::Int32 num3 = 2;
            coatW_ = require(tArea_)->coatW_;
            coatH_ = require(tArea_)->coatH_ / pls::cs::Single(num3);
            require(centerPos_)->x_ = require(require(tArea_)->centerPos_)->x_;
            require(centerPos_)->z_ = require(require(tArea_)->centerPos_)->z_ +
                                      require(tArea_)->coatH_ / 2.0f + (-(coatH_)) / 2.0f -
                                      coatH_ * pls::cs::Single(id_);
        } else if (require(tArea_)->tMode_ == 4) {
            pls::cs::Int32 num4 = 1;
            coatW_ = require(tArea_)->coatW_;
            coatH_ = require(tArea_)->coatH_ / pls::cs::Single(num4);
            require(centerPos_)->x_ = require(require(tArea_)->centerPos_)->x_;
            require(centerPos_)->z_ = require(require(tArea_)->centerPos_)->z_ +
                                      require(tArea_)->coatH_ / 2.0f + (-(coatH_)) / 2.0f -
                                      coatH_ * pls::cs::Single(id_);
        } else if (require(tArea_)->tMode_ == 3) {
            pls::cs::Int32 num5 = 1;
            coatW_ = require(tArea_)->coatW_ / pls::cs::Single(num5);
            coatH_ = require(tArea_)->coatH_;
            require(centerPos_)->x_ = require(require(tArea_)->centerPos_)->x_ +
                                      require(tArea_)->coatW_ / 2.0f + (-(coatW_)) / 2.0f -
                                      coatW_ * pls::cs::Single(id_);
            require(centerPos_)->z_ = require(require(tArea_)->centerPos_)->z_;
        }
    }
}

// M:game.TGroupArea.SetPosData
void TGroupArea::SetPosData() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.SetPosData", game);
    {
        if (require(tArea_)->tMode_ == 0) {
            pls::cs::Ref<kl_util3d::Vector3D> vector3D = centerPos_;
            pls::cs::Single num = coatW_;
            pls::cs::Single num2 = coatH_;
            {
                auto cs_target = filed_gpos;
                auto cs_index = 0;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D)->x_ - num / 2.0f, 0.0f,
                                                            require(vector3D)->z_ + num2 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 1;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D)->x_ + num / 2.0f, 0.0f,
                                                            require(vector3D)->z_ + num2 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 2;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D)->x_ + num / 2.0f, 0.0f,
                                                            require(vector3D)->z_ - num2 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 3;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D)->x_ - num / 2.0f, 0.0f,
                                                            require(vector3D)->z_ - num2 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
        } else if (require(tArea_)->tMode_ == 1) {
            pls::cs::Ref<kl_util3d::Vector3D> vector3D2 = centerPos_;
            pls::cs::Single num3 = coatW_;
            pls::cs::Single num4 = coatH_;
            {
                auto cs_target = filed_gpos;
                auto cs_index = 0;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D2)->x_ - num3 / 2.0f, 0.0f,
                                                            require(vector3D2)->z_ + num4 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 1;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D2)->x_ + num3 / 2.0f, 0.0f,
                                                            require(vector3D2)->z_ + num4 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 2;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D2)->x_ + num3 / 2.0f, 0.0f,
                                                            require(vector3D2)->z_ - num4 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 3;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D2)->x_ - num3 / 2.0f, 0.0f,
                                                            require(vector3D2)->z_ - num4 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
        } else if (require(tArea_)->tMode_ == 2) {
            traPos_ = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
            for (pls::cs::Int32 i = 0; i < traPos_.length(); ++i) {
                {
                    auto cs_target = traPos_;
                    auto cs_index = i;
                    auto cs_value = kl_util3d::Vector3D::create();
                    cs_target.set_Item(cs_index, cs_value);
                }
                {
                    auto cs_target = traPos_.get_Item(i);
                    pls::cs::Single cs_value =
                        GameUtil::RateConvertFloat(i, 0.0f, pls::cs::Int32(traPos_.length()) - 1,
                                                   require(centerPos_)->x_ - coatW_ * 30.0f / 100.0f,
                                                   require(centerPos_)->x_ + coatW_ * 30.0f / 100.0f, true);
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = traPos_.get_Item(i);
                    pls::cs::Single cs_value = require(centerPos_)->z_;
                    require(cs_target)->z_ = cs_value;
                }
            }
            pls::cs::Ref<kl_util3d::Vector3D> vector3D3 = centerPos_;
            pls::cs::Single num5 = coatW_;
            pls::cs::Single num6 = coatH_;
            {
                auto cs_target = filed_gpos;
                auto cs_index = 0;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D3)->x_ - num5 / 2.0f, 0.0f,
                                                            require(vector3D3)->z_ + num6 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 1;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D3)->x_ + num5 / 2.0f, 0.0f,
                                                            require(vector3D3)->z_ + num6 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 2;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D3)->x_ + num5 / 2.0f, 0.0f,
                                                            require(vector3D3)->z_ - num6 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 3;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D3)->x_ - num5 / 2.0f, 0.0f,
                                                            require(vector3D3)->z_ - num6 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
        } else if (require(tArea_)->tMode_ == 4) {
            pls::cs::Ref<kl_util3d::Vector3D> vector3D4 = centerPos_;
            pls::cs::Single num7 = coatW_;
            pls::cs::Single num8 = coatH_;
            {
                auto cs_target = filed_gpos;
                auto cs_index = 0;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D4)->x_ - num7 / 2.0f, 0.0f,
                                                            require(vector3D4)->z_ + num8 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 1;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D4)->x_ + num7 / 2.0f, 0.0f,
                                                            require(vector3D4)->z_ + num8 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 2;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D4)->x_ + num7 / 2.0f, 0.0f,
                                                            require(vector3D4)->z_ - num8 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 3;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D4)->x_ - num7 / 2.0f, 0.0f,
                                                            require(vector3D4)->z_ - num8 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
        } else if (require(tArea_)->tMode_ == 3) {
            traPos_ = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(3);
            for (pls::cs::Int32 j = 0; j < traPos_.length(); ++j) {
                {
                    auto cs_target = traPos_;
                    auto cs_index = j;
                    auto cs_value = kl_util3d::Vector3D::create();
                    cs_target.set_Item(cs_index, cs_value);
                }
                {
                    auto cs_target = traPos_.get_Item(j);
                    pls::cs::Single cs_value = require(centerPos_)->x_;
                    require(cs_target)->x_ = cs_value;
                }
                pls::cs::Int32 num9 = 90;
                if (j == 1) {
                    num9 = 70;
                } else if (j == 2) {
                    num9 = 15;
                }
                if (require(tArea_)->pId_ == 3) {
                    num9 = 100 - num9;
                }
                {
                    auto cs_target = traPos_.get_Item(j);
                    pls::cs::Single cs_value = GameUtil::RateConvertFloat(
                        num9, 0.0f, 100.0f, require(centerPos_)->z_ + coatH_ / 2.0f,
                        require(centerPos_)->z_ - coatH_ / 2.0f, true);
                    require(cs_target)->z_ = cs_value;
                }
            }
            pls::cs::Ref<kl_util3d::Vector3D> vector3D5 = centerPos_;
            pls::cs::Single num10 = coatW_;
            pls::cs::Single num11 = coatH_;
            {
                auto cs_target = filed_gpos;
                auto cs_index = 0;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D5)->x_ - num10 / 2.0f, 0.0f,
                                                            require(vector3D5)->z_ + num11 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 1;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D5)->x_ + num10 / 2.0f, 0.0f,
                                                            require(vector3D5)->z_ + num11 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 2;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D5)->x_ + num10 / 2.0f, 0.0f,
                                                            require(vector3D5)->z_ - num11 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = filed_gpos;
                auto cs_index = 3;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D5)->x_ - num10 / 2.0f, 0.0f,
                                                            require(vector3D5)->z_ - num11 / 2.0f);
                cs_target.set_Item(cs_index, cs_value);
            }
            pls::cs::Ref<kl_util3d::Vector3D> vector3D6 = traPos_.get_Item(2);
            pls::cs::Single num12 = 80.0f;
            pls::cs::Single num13 = 24.0f;
            if (require(tArea_)->pId_ == 3) {
                num13 = -num13;
            }
            {
                auto cs_target = goal_gpos;
                auto cs_index = 0;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D6)->x_ - num12 / 2.0f, 0.0f,
                                                            require(vector3D6)->z_);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = goal_gpos;
                auto cs_index = 1;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D6)->x_ + num12 / 2.0f, 0.0f,
                                                            require(vector3D6)->z_);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = goal_gpos;
                auto cs_index = 2;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D6)->x_ + num12 / 2.0f, 0.0f,
                                                            require(vector3D6)->z_ + num13);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = goal_gpos;
                auto cs_index = 3;
                auto cs_value = kl_util3d::Vector3D::create(require(vector3D6)->x_ - num12 / 2.0f, 0.0f,
                                                            require(vector3D6)->z_ + num13);
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:game.TGroupArea.GetBall(game.TPlayer,System.Int32)
pls::cs::Ref<TBall> TGroupArea::GetBall(pls::cs::Ref<TPlayer> player, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.GetBall(game.TPlayer,System.Int32)", game);
    {
        if (require(tArea_)->tMode_ == 0) {
            return pls::cs::unbox<pls::cs::Ref<TBall>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_java_util::Vector_2_ElementAt(require(tBallList_), 0);
            }));
        }
        if (require(tArea_)->tMode_ == 1) {
            return pls::cs::unbox<pls::cs::Ref<TBall>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> pls::cs::Ref<pls::cs::Object> {
                    pls::cs::Int32 cs_arg0 = require(player)->trainingId_[4];
                    return kl_java_util::Vector_2_ElementAt(require(tBallList_), cs_arg0);
                }());
            }));
        }
        if (require(tArea_)->tMode_ == 2) {
            if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Check(require(player)->flag_, 4);
                })) {
                for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(tBallList_));
                                           });
                     ++i) {
                    pls::cs::Ref<TBall> tBall = pls::cs::unbox<pls::cs::Ref<TBall>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tBallList_), i);
                        }));
                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::BitUtil::Check(require(tBall)->flag_, 4);
                        })) {
                        return tBall;
                    }
                }
            } else {
                for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(tBallList_));
                                           });
                     ++j) {
                    pls::cs::Ref<TBall> tBall2 = pls::cs::unbox<pls::cs::Ref<TBall>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tBallList_), j);
                        }));
                    if (!is_null(require(tBall2)->t_owner_) && ([&]() -> bool {
                            auto cs_left = require(require(tBall2)->t_owner_)->trainingId_[0];
                            auto cs_right = require(player)->trainingId_[0];
                            return cs_left == cs_right;
                        }())) {
                        return tBall2;
                    }
                }
            }
        } else if (require(tArea_)->tMode_ == 4) {

        } else if (require(tArea_)->tMode_ == 3) {
            if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::BitUtil::Check(require(player)->flag_, 4);
                })) {
                pls::cs::Ref<TBall> result =
                    pls::cs::unbox<pls::cs::Ref<TBall>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(tBallList_), ballIndex_);
                    }));
                ballIndex_ = ([&]() -> pls::cs::Int32 {
                    auto cs_left = (([&]() -> pls::cs::Int32 {
                        auto cs_left = ballIndex_ + 1;
                        auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(tBallList_));
                        });
                        return cs_left + cs_right;
                    }()));
                    auto cs_right = pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(tBallList_)); });
                    return cs_left % cs_right;
                }());
                return result;
            }
            for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(tBallList_));
                                       });
                 ++k) {
                pls::cs::Ref<TBall> tBall3 =
                    pls::cs::unbox<pls::cs::Ref<TBall>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(tBallList_), k);
                    }));
                if (!is_null(require(tBall3)->t_owner_) && ([&]() -> bool {
                        auto cs_left = require(require(tBall3)->t_owner_)->trainingId_[0];
                        auto cs_right = require(player)->trainingId_[0];
                        return cs_left == cs_right;
                    }())) {
                    return tBall3;
                }
            }
        }
        return pls::cs::Ref<TBall>{};
    }
}

// M:game.TGroupArea.SetPlayerGatherPos
void TGroupArea::SetPlayerGatherPos() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.SetPlayerGatherPos", game);
    {
        if (require(tArea_)->tMode_ == 0) {
            for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                       });
                 ++i) {
                pls::cs::Ref<TPlayer> tPlayer =
                    pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), i);
                    }));
                {
                    auto cs_target = require(tPlayer)->goalPos_;
                    pls::cs::Single cs_value = GameUtil::RateConvertFloat(
                        10 + 80 * i, 0.0f, 99.0f, require(centerPos_)->x_ - coatW_ / 2.0f,
                        require(centerPos_)->x_ + coatW_ / 2.0f, true);
                    require(cs_target)->x_ = cs_value;
                }
                require(require(tPlayer)->goalPos_)->z_ = require(centerPos_)->z_;
                {
                    pls::cs::Int32 cs_arg0 = GameUtil::Random(14);
                    require(tPlayer)->AddCommandWait(cs_arg0);
                }
                require(tPlayer)->AddCommandTrainigMoveGoalPos();
                require(tPlayer)->AddCommandChangeDirect(1 + i * 2);
            }
        } else if (require(tArea_)->tMode_ == 1) {
            for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                       });
                 ++j) {
                pls::cs::Ref<TPlayer> tPlayer2 =
                    pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), j);
                    }));
                {
                    auto cs_target = require(tPlayer2)->goalPos_;
                    pls::cs::Single cs_value = GameUtil::RateConvertFloat(
                        30 + 40 * j, 0.0f, 99.0f, require(centerPos_)->x_ - coatW_ / 2.0f,
                        require(centerPos_)->x_ + coatW_ / 2.0f, true);
                    require(cs_target)->x_ = cs_value;
                }
                require(require(tPlayer2)->goalPos_)->z_ = require(centerPos_)->z_;
                {
                    pls::cs::Int32 cs_arg0 = GameUtil::Random(14);
                    require(tPlayer2)->AddCommandWait(cs_arg0);
                }
                require(tPlayer2)->AddCommandTrainigMoveGoalPos();
                require(tPlayer2)->AddCommandChangeDirect(2);
                require(tPlayer2)->AddCommandFlagOn(131072);
            }
        } else if (require(tArea_)->tMode_ == 2) {
            for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                       });
                 ++k) {
                pls::cs::Ref<TPlayer> tPlayer3 =
                    pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), k);
                    }));
                require(tPlayer3)->AddCommandDribbleOlderRegist();
                require(tPlayer3)->AddCommandDribbleOlder();
            }
        } else if (require(tArea_)->tMode_ == 4) {
            pls::cs::Int32 num = 0;
            for (pls::cs::Int32 l = 0; l < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                       });
                 ++l) {
                pls::cs::Ref<TPlayer> tPlayer4 =
                    pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), l);
                    }));
                require(tPlayer4)->AddCommandWait(num);
                num += 6;
                require(tPlayer4)->AddCommandRunningRegist();
            }
        } else {
            if (require(tArea_)->tMode_ == 3) {
                for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(tPlayerList_));
                                           });
                     ++m) {
                    pls::cs::Ref<TPlayer> tPlayer5 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(tPlayerList_), m);
                        }));
                    if (m == 0) {
                        require(tPlayer5)->AddCommandShootGK();
                        continue;
                    }
                    require(tPlayer5)->AddCommandShootOlderRegist();
                    require(tPlayer5)->AddCommandShootOlder();
                }
            }
        }
    }
}

// M:game.TGroupArea.GetAreaMaxNum(System.Int32)
pls::cs::Int32 TGroupArea::GetAreaMaxNum(pls::cs::Int32 trainingMode) {
    TGroupArea::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TGroupArea.GetAreaMaxNum(System.Int32)", game);
    {
        if ((trainingMode == 0)) {
            return 2;
        } else if ((trainingMode == 1)) {
            return 2;
        } else if ((trainingMode == 2)) {
            return 5;
        } else if ((trainingMode == 4)) {
            return 100;
        } else if ((trainingMode == 3)) {
            return 5;
        } else {
            return 0;
        }
    }
}
} // namespace game
}
