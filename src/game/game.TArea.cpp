// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
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
#include "generated/java.lang.JMath.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace game {

void TArea::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(apdat_, visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(centerPos_, visitor);
    pls::cs::trace_value(tGroupAreas_, visitor);
}

static pls::cs::Ref<kl_util3d::Vector3D> TArea_st_gatherPos_storage{};

static PLS_NOINLINE void cs_init_70a14a9a721e329a_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(TArea_st_gatherPos_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.TArea", flag, []() {
        TArea_st_gatherPos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.TArea.st_gatherPos", [&]() { return kl_util3d::Vector3D::create(); });
    });
}

void TArea::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_70a14a9a721e329a_slow(flag);
}

pls::cs::Ref<kl_util3d::Vector3D>& TArea::st_gatherPos() {
    TArea::ensure_initialized();
    return TArea_st_gatherPos_storage;
}

void TArea::create_init(pls::cs::Ref<TArea> self) {
    TArea::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.#ctor", game);
    {
        self->apdat_ = main::AppData::GetInstance();
        self->udat_ = UserData::GetInstance();
        self->centerPos_ = kl_util3d::Vector3D::create();
    }
}

// M:game.TArea.#ctor
pls::cs::Ref<TArea> TArea::create() {
    TArea::ensure_initialized();
    auto self = pls::cs::make_ref<TArea>();
    TArea::create_init(self);
    return self;
}

// M:game.TArea.Init(System.Int32,System.Int32)
void TArea::Init(pls::cs::Int32 rootId, pls::cs::Int32 pId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.Init(System.Int32,System.Int32)", game);
    {
        rootId_ = rootId;
        pId_ = pId;
        state_ = 10;
    }
}

// M:game.TArea.Serialize(java.io.OutputStream)
void TArea::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.Serialize(java.io.OutputStream)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_));
        });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::WriteInt(os, stateCnt_); });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StreamUtil::WriteShort(
                os, pls::cs::cast_integral<std::int16_t>(tGroupAreas_.length()));
        });
        for (pls::cs::Int32 i = 0; i < tGroupAreas_.length(); ++i) {
            require(tGroupAreas_.get_Item(i))->Serialize(os);
        }
    }
}

// M:game.TArea.Deserialize(java.io.InputStream)
void TArea::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.Deserialize(java.io.InputStream)", game);
    {
        state_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        stateCnt_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadInt(stream); });
        pls::cs::Int32 num = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); }));
        for (pls::cs::Int32 i = 0; i < tGroupAreas_.length(); ++i) {
            require(tGroupAreas_.get_Item(i))->Deserialize(stream, this);
        }
    }
}

// M:game.TArea.Deserialize2
void TArea::Deserialize2() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.Deserialize2", game);
    {
        for (pls::cs::Int32 i = 0; i < tGroupAreas_.length(); ++i) {
            require(tGroupAreas_.get_Item(i))->Deserialize2();
        }
    }
}

// M:game.TArea.Update
void TArea::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.Update", game);
    {
        stateCnt_ = ((stateCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (state_ == 11) {
            for (pls::cs::Int32 i = 0; i < tGroupAreas_.length(); ++i) {
                for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(
                                                   require(require(tGroupAreas_.get_Item(i))->tPlayerList_));
                                           });
                     ++j) {
                    pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(
                                require(require(tGroupAreas_.get_Item(i))->tPlayerList_), j);
                        }));
                    require(tPlayer)->Update_trainings();
                }
            }
            bool flag = true;
            for (pls::cs::Int32 k = 0; k < tGroupAreas_.length() && flag; ++k) {
                for (pls::cs::Int32 l = 0; l < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(
                                                   require(require(tGroupAreas_.get_Item(k))->tPlayerList_));
                                           });
                     ++l) {
                    pls::cs::Ref<TPlayer> tPlayer2 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(
                                require(require(tGroupAreas_.get_Item(k))->tPlayerList_), l);
                        }));
                    IntArray collisionData = require(udat_)->GetCollisionData(0, 0);
                    if ([&]() -> bool {
                            pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(tPlayer2)->pos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(tPlayer2)->pos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg2 = collisionData[2];
                            pls::cs::Single cs_arg3 = collisionData[3];
                            pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(tGroupAreas_.get_Item(k))->centerPos_)->x_;
                                auto cs_right = require(tGroupAreas_.get_Item(k))->coatW_ / 2.0f;
                                return cs_left - cs_right;
                            }());
                            pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(tGroupAreas_.get_Item(k))->centerPos_)->z_;
                                auto cs_right = require(tGroupAreas_.get_Item(k))->coatH_ / 2.0f;
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg6 = require(tGroupAreas_.get_Item(k))->coatW_;
                            pls::cs::Single cs_arg7 = require(tGroupAreas_.get_Item(k))->coatH_;
                            return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4,
                                                                cs_arg5, cs_arg6, cs_arg7, true);
                        }()) {
                        continue;
                    }
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ChangeState(12);
            }
        } else if (state_ == 12) {
            for (pls::cs::Int32 m = 0; m < tGroupAreas_.length(); ++m) {
                for (pls::cs::Int32 n = 0; n < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(
                                                   require(require(tGroupAreas_.get_Item(m))->tPlayerList_));
                                           });
                     ++n) {
                    pls::cs::Ref<TPlayer> tPlayer3 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(
                                require(require(tGroupAreas_.get_Item(m))->tPlayerList_), n);
                        }));
                    require(tPlayer3)->Update_trainings();
                }
                for (pls::cs::Int32 num = 0; num < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                 return kl_java_util::Vector_2_Size(
                                                     require(require(tGroupAreas_.get_Item(m))->tBallList_));
                                             });
                     ++num) {
                    pls::cs::Ref<TBall> tBall = pls::cs::unbox<pls::cs::Ref<TBall>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(
                                require(require(tGroupAreas_.get_Item(m))->tBallList_), num);
                        }));
                    require(tBall)->Update_training();
                }
            }
            for (pls::cs::Int32 num2 = 0; num2 < tGroupAreas_.length(); ++num2) {
                require(tGroupAreas_.get_Item(num2))->Update();
            }
        } else if (state_ == 14) {
            for (pls::cs::Int32 num3 = 0; num3 < tGroupAreas_.length(); ++num3) {
                for (pls::cs::Int32 num4 = 0; num4 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                  return kl_java_util::Vector_2_Size(require(
                                                      require(tGroupAreas_.get_Item(num3))->tPlayerList_));
                                              });
                     ++num4) {
                    pls::cs::Ref<TPlayer> tPlayer4 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(
                                require(require(tGroupAreas_.get_Item(num3))->tPlayerList_), num4);
                        }));
                    require(tPlayer4)->Update_trainings();
                }
                for (pls::cs::Int32 num5 = 0; num5 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                  return kl_java_util::Vector_2_Size(require(
                                                      require(tGroupAreas_.get_Item(num3))->tBallList_));
                                              });
                     ++num5) {
                    pls::cs::Ref<TBall> tBall2 = pls::cs::unbox<pls::cs::Ref<TBall>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(
                                require(require(tGroupAreas_.get_Item(num3))->tBallList_), num5);
                        }));
                    require(tBall2)->Update_training();
                }
            }
            bool flag2 = true;
            for (pls::cs::Int32 num6 = 0; num6 < tGroupAreas_.length() && flag2; ++num6) {
                for (pls::cs::Int32 num7 = 0; num7 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                  return kl_java_util::Vector_2_Size(require(
                                                      require(tGroupAreas_.get_Item(num6))->tPlayerList_));
                                              });
                     ++num7) {
                    pls::cs::Ref<TPlayer> tPlayer5 = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(
                                require(require(tGroupAreas_.get_Item(num6))->tPlayerList_), num7);
                        }));
                    IntArray collisionData2 = require(udat_)->GetCollisionData(0, 0);
                    if ([&]() -> bool {
                            pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(tPlayer5)->pos_)->x_;
                                auto cs_right = pls::cs::Single(collisionData2[0]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(tPlayer5)->pos_)->z_;
                                auto cs_right = pls::cs::Single(collisionData2[1]);
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg2 = collisionData2[2];
                            pls::cs::Single cs_arg3 = collisionData2[3];
                            pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(tGroupAreas_.get_Item(num6))->centerPos_)->x_;
                                auto cs_right = require(tGroupAreas_.get_Item(num6))->coatW_ / 2.0f;
                                return cs_left - cs_right;
                            }());
                            pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval {
                                auto cs_left = require(require(tGroupAreas_.get_Item(num6))->centerPos_)->z_;
                                auto cs_right = require(tGroupAreas_.get_Item(num6))->coatH_ / 2.0f;
                                return cs_left + cs_right;
                            }());
                            pls::cs::Single cs_arg6 = require(tGroupAreas_.get_Item(num6))->coatW_;
                            pls::cs::Single cs_arg7 = require(tGroupAreas_.get_Item(num6))->coatH_;
                            return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4,
                                                                cs_arg5, cs_arg6, cs_arg7, true);
                        }()) {
                        continue;
                    }
                    flag2 = false;
                    break;
                }
            }
            if (flag2) {
                ChangeState(12);
            }
        }
    }
}

// M:game.TArea.Draw(kairo.unity.ui.Graphics)
void TArea::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.Draw(kairo.unity.ui.Graphics)", game);
    {
        pls::cs::Int32 num = rootId_;
        pls::cs::Int32 num2 = 0;
        if (pId_ == 3) {
            num2 = 1;
        }
        for (pls::cs::Int32 i = 0; i < tGroupAreas_.length(); ++i) {
            for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(
                                               require(require(tGroupAreas_.get_Item(i))->tPlayerList_));
                                       });
                 ++j) {
                pls::cs::Ref<TPlayer> tPlayer =
                    pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(
                            require(require(tGroupAreas_.get_Item(i))->tPlayerList_), j);
                    }));
                require(tPlayer)->Draw_training(g);
            }
            for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(
                                               require(require(tGroupAreas_.get_Item(i))->tBallList_));
                                       });
                 ++k) {
                pls::cs::Ref<TBall> tBall =
                    pls::cs::unbox<pls::cs::Ref<TBall>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(
                            require(require(tGroupAreas_.get_Item(i))->tBallList_), k);
                    }));
                require(tBall)->Draw_training(g);
            }
            require(tGroupAreas_.get_Item(i))->Draw_obj(g);
        }
    }
}

// M:game.TArea.ChangeState(System.Int32)
void TArea::ChangeState(pls::cs::Int32 next_state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.ChangeState(System.Int32)", game);
    {
        MapMain::ensure_initialized();

        state_ = next_state;
        stateCnt_ = 0;
        if (state_ == 10) {

        } else {
            if (state_ == 11) {
                for (pls::cs::Int32 i = 0; i < tGroupAreas_.length(); ++i) {
                    require(tGroupAreas_.get_Item(i))->ChangeState(10);
                }
                for (pls::cs::Int32 j = 0; j < tGroupAreas_.length(); ++j) {
                    for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                   return kl_java_util::Vector_2_Size(require(
                                                       require(tGroupAreas_.get_Item(j))->tPlayerList_));
                                               });
                         ++k) {
                        pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(
                                    require(require(tGroupAreas_.get_Item(j))->tPlayerList_), k);
                            }));
                        pls::cs::Int32 num = (j + k) % 2;
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                auto cs_receiver = require(tPlayer)->pos_;
                                pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 =
                                    MapMain::MOVE_POINT().get_Item(1 + num);
                                require(cs_receiver)->Set(cs_arg0);
                            }());
                        });
                        {
                            auto cs_target = tPlayer;
                            pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::BitUtil::Off(require(tPlayer)->flag_, 1);
                            });
                            require(cs_target)->flag_ = cs_value;
                        }
                        require(tPlayer)->AddCommandWait(require(udat_)->trainig_appearWait);
                        {
                            pls::cs::Int32 cs_arg0 =
                                pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(3 + num))->x_);
                            pls::cs::Int32 cs_arg1 =
                                pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(3 + num))->z_);
                            require(tPlayer)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                        }
                        if (pId_ == 0) {
                            {
                                pls::cs::Int32 cs_arg0 =
                                    pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(7))->x_);
                                pls::cs::Int32 cs_arg1 =
                                    pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(7))->z_);
                                require(tPlayer)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                            }
                            require(tPlayer)->AddCommandTenantIn();
                        } else {
                            if (rootId_ == 0) {
                                {
                                    pls::cs::Int32 cs_arg0 =
                                        pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(5))->x_);
                                    pls::cs::Int32 cs_arg1 =
                                        pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(5))->z_);
                                    require(tPlayer)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                                }
                            } else {
                                {
                                    pls::cs::Int32 cs_arg0 =
                                        pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(6))->x_);
                                    pls::cs::Int32 cs_arg1 =
                                        pls::cs::to_int32(require(MapMain::MOVE_POINT().get_Item(6))->z_);
                                    require(tPlayer)->AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1);
                                }
                            }
                            pls::cs::Ref<kl_util3d::Vector3D> startTrainingGatherPos =
                                GetStartTrainingGatherPos(tGroupAreas_.get_Item(j), tPlayer);
                            require(tPlayer)->AddCommandTrainigMoveGoalPosSet(
                                pls::cs::to_int32(require(startTrainingGatherPos)->x_),
                                pls::cs::to_int32(require(startTrainingGatherPos)->z_));
                        }
                        if (num == 1) {
                            require(udat_)->trainig_appearWait = require(udat_)->trainig_appearWait + 7;
                        }
                    }
                }
            } else if (state_ == 12) {
                for (pls::cs::Int32 l = 0; l < tGroupAreas_.length(); ++l) {
                    require(tGroupAreas_.get_Item(l))->ChangeState(11);
                }
            } else if (state_ == 13) {
                for (pls::cs::Int32 m = 0; m < tGroupAreas_.length(); ++m) {
                    require(tGroupAreas_.get_Item(m))->ChangeState(13);
                }
            } else if (state_ == 14) {
                for (pls::cs::Int32 n = 0; n < tGroupAreas_.length(); ++n) {
                    require(tGroupAreas_.get_Item(n))->ChangeState(14);
                }
            }
        }
    }
}

// M:game.TArea.GetAreaMaxNum(System.Int32)
pls::cs::Int32 TArea::GetAreaMaxNum(pls::cs::Int32 tMode) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.GetAreaMaxNum(System.Int32)", game);
    {
        if ((tMode == 0)) {
            return 6;
        } else if ((tMode == 1)) {
            return 6;
        } else if ((tMode == 2)) {
            return 10;
        } else if ((tMode == 4)) {
            return 100;
        } else if ((tMode == 3)) {
            return 5;
        } else {
            return 0;
        }
    }
}

// M:game.TArea.GetAreaBallNum(System.Int32)
pls::cs::Int32 TArea::GetAreaBallNum(pls::cs::Int32 tMode) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.GetAreaBallNum(System.Int32)", game);
    {
        if ((tMode == 0)) {
            return 1;
        } else if ((tMode == 1)) {
            return 2;
        } else if ((tMode == 2)) {
            return 3;
        } else if ((tMode == 3)) {
            return 3;
        } else {
            return 0;
        }
    }
}

// M:game.TArea.SetPlayerGatherPos
void TArea::SetPlayerGatherPos() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.SetPlayerGatherPos", game);
    {
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < tGroupAreas_.length(); ++i) {
            for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return kl_java_util::Vector_2_Size(
                                               require(require(tGroupAreas_.get_Item(i))->tPlayerList_));
                                       });
                 ++j) {
                pls::cs::Ref<TPlayer> tPlayer =
                    pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(
                            require(require(tGroupAreas_.get_Item(i))->tPlayerList_), j);
                    }));
                pls::cs::Int32 num2 = GameUtil::Random(100);
                pls::cs::Int32 num3 = GameUtil::Random(100);
                if (tMode_ == 4) {
                    require(require(tPlayer)->goalPos_)->x_ = require(require(tPlayer)->pos_)->x_;
                    require(require(tPlayer)->goalPos_)->z_ = require(require(tPlayer)->pos_)->z_;
                } else {
                    {
                        auto cs_target = require(tPlayer)->goalPos_;
                        pls::cs::Single cs_arg3_259 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_259 = require(require(tGroupAreas_.get_Item(i))->centerPos_)->x_;
                            auto cs_right_259 = require(tGroupAreas_.get_Item(i))->coatW_ * 10.0f / 100.0f;
                            return cs_left_259 - cs_right_259;
                        }());
                        pls::cs::Single cs_arg4_259 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_259 = require(require(tGroupAreas_.get_Item(i))->centerPos_)->x_;
                            auto cs_right_259 = require(tGroupAreas_.get_Item(i))->coatW_ * 10.0f / 100.0f;
                            return cs_left_259 + cs_right_259;
                        }());
                        pls::cs::Single cs_value =
                            GameUtil::RateConvertFloat(num2, 0.0f, 99.0f, cs_arg3_259, cs_arg4_259, true);
                        require(cs_target)->x_ = cs_value;
                    }
                    {
                        auto cs_target = require(tPlayer)->goalPos_;
                        pls::cs::Single cs_arg3_260 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_260 = require(require(tGroupAreas_.get_Item(i))->centerPos_)->z_;
                            auto cs_right_260 = require(tGroupAreas_.get_Item(i))->coatH_ * 5.0f / 100.0f;
                            return cs_left_260 + cs_right_260;
                        }());
                        pls::cs::Single cs_arg4_260 = ([&]() -> pls::cs::FloatEval {
                            auto cs_left_260 = require(require(tGroupAreas_.get_Item(i))->centerPos_)->z_;
                            auto cs_right_260 = require(tGroupAreas_.get_Item(i))->coatH_ * 5.0f / 100.0f;
                            return cs_left_260 - cs_right_260;
                        }());
                        pls::cs::Single cs_value =
                            GameUtil::RateConvertFloat(num3, 0.0f, 99.0f, cs_arg3_260, cs_arg4_260, true);
                        require(cs_target)->z_ = cs_value;
                    }
                }
                num = require(udat_)->trainig_appearWait;
                require(udat_)->trainig_appearWait = require(udat_)->trainig_appearWait + 4;
                require(tPlayer)->AddCommandWait(num);
                require(tPlayer)->AddCommandTrainigMoveGoalPos();
            }
        }
    }
}

// M:game.TArea.SetTrainingArea(System.Int32)
void TArea::SetTrainingArea(pls::cs::Int32 tMode) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.TArea.SetTrainingArea(System.Int32)", game);
    {
        MapMain::ensure_initialized();

        tMode_ = tMode;
        pls::cs::Int32 num = rootId_ * 2;
        if (pId_ == 3) {
            ++num;
        }
        if (tMode_ == 4) {
            {
                auto cs_target = centerPos_;
                pls::cs::Single cs_value =
                    (([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(0))->x_;
                        auto cs_right = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(1))->x_;
                        return cs_left + cs_right;
                    }())) /
                    2.0f;
                require(cs_target)->x_ = cs_value;
            }
            require(centerPos_)->y_ = 0.0f;
            {
                auto cs_target = centerPos_;
                pls::cs::Single cs_value =
                    (([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(0))->z_;
                        auto cs_right = require(MapMain::TRAIN_COAT_BLOCK()[num + 1].get_Item(1))->z_;
                        return cs_left + cs_right;
                    }())) /
                    2.0f;
                require(cs_target)->z_ = cs_value;
            }
            coatW_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return pls::cs::Single(kl_lang::JMath::Abs(([&]() -> pls::cs::FloatEval {
                             auto cs_left = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(0))->x_;
                             auto cs_right = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(1))->x_;
                             return cs_left - cs_right;
                         }())));
                     }) +
                     100.0f;
            coatH_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                         return pls::cs::Single(kl_lang::JMath::Abs(([&]() -> pls::cs::FloatEval {
                             auto cs_left = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(0))->z_;
                             auto cs_right = require(MapMain::TRAIN_COAT_BLOCK()[num + 1].get_Item(1))->z_;
                             return cs_left - cs_right;
                         }())));
                     }) +
                     100.0f;
        } else if (tMode_ == 5) {

        } else {
            {
                auto cs_target = centerPos_;
                pls::cs::Single cs_value =
                    (([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(0))->x_;
                        auto cs_right = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(1))->x_;
                        return cs_left + cs_right;
                    }())) /
                    2.0f;
                require(cs_target)->x_ = cs_value;
            }
            require(centerPos_)->y_ = 0.0f;
            {
                auto cs_target = centerPos_;
                pls::cs::Single cs_value =
                    (([&]() -> pls::cs::FloatEval {
                        auto cs_left = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(0))->z_;
                        auto cs_right = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(1))->z_;
                        return cs_left + cs_right;
                    }())) /
                    2.0f;
                require(cs_target)->z_ = cs_value;
            }
            coatW_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::Single(kl_lang::JMath::Abs(([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(0))->x_;
                    auto cs_right = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(1))->x_;
                    return cs_left - cs_right;
                }())));
            });
            coatH_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::Single(kl_lang::JMath::Abs(([&]() -> pls::cs::FloatEval {
                    auto cs_left = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(0))->z_;
                    auto cs_right = require(MapMain::TRAIN_COAT_BLOCK()[num].get_Item(1))->z_;
                    return cs_left - cs_right;
                }())));
            });
        }
        if (tMode_ == 0) {
            pls::cs::Int32 num2 = 3;
            tGroupAreas_ = pls::cs::Array<pls::cs::Ref<TGroupArea>>::make(num2);
            for (pls::cs::Int32 i = 0; i < tGroupAreas_.length(); ++i) {
                {
                    auto cs_target = tGroupAreas_;
                    auto cs_index = i;
                    auto cs_value = TGroupArea::create(i, this);
                    cs_target.set_Item(cs_index, cs_value);
                }
                require(tGroupAreas_.get_Item(i))->SetCoatData();
                require(tGroupAreas_.get_Item(i))->SetPosData();
            }
        } else if (tMode_ == 1) {
            pls::cs::Int32 num3 = 3;
            tGroupAreas_ = pls::cs::Array<pls::cs::Ref<TGroupArea>>::make(num3);
            for (pls::cs::Int32 j = 0; j < tGroupAreas_.length(); ++j) {
                {
                    auto cs_target = tGroupAreas_;
                    auto cs_index = j;
                    auto cs_value = TGroupArea::create(j, this);
                    cs_target.set_Item(cs_index, cs_value);
                }
                require(tGroupAreas_.get_Item(j))->SetCoatData();
                require(tGroupAreas_.get_Item(j))->SetPosData();
            }
        } else if (tMode_ == 2) {
            pls::cs::Int32 num4 = 2;
            tGroupAreas_ = pls::cs::Array<pls::cs::Ref<TGroupArea>>::make(num4);
            for (pls::cs::Int32 k = 0; k < tGroupAreas_.length(); ++k) {
                {
                    auto cs_target = tGroupAreas_;
                    auto cs_index = k;
                    auto cs_value = TGroupArea::create(k, this);
                    cs_target.set_Item(cs_index, cs_value);
                }
                require(tGroupAreas_.get_Item(k))->SetCoatData();
                require(tGroupAreas_.get_Item(k))->SetPosData();
            }
        } else if (tMode_ == 3) {
            pls::cs::Int32 num5 = 1;
            tGroupAreas_ = pls::cs::Array<pls::cs::Ref<TGroupArea>>::make(num5);
            for (pls::cs::Int32 l = 0; l < tGroupAreas_.length(); ++l) {
                {
                    auto cs_target = tGroupAreas_;
                    auto cs_index = l;
                    auto cs_value = TGroupArea::create(l, this);
                    cs_target.set_Item(cs_index, cs_value);
                }
                require(tGroupAreas_.get_Item(l))->SetCoatData();
                require(tGroupAreas_.get_Item(l))->SetPosData();
            }
        } else if (tMode_ == 4) {
            pls::cs::Int32 num6 = 1;
            tGroupAreas_ = pls::cs::Array<pls::cs::Ref<TGroupArea>>::make(num6);
            for (pls::cs::Int32 m = 0; m < tGroupAreas_.length(); ++m) {
                {
                    auto cs_target = tGroupAreas_;
                    auto cs_index = m;
                    auto cs_value = TGroupArea::create(m, this);
                    cs_target.set_Item(cs_index, cs_value);
                }
                require(tGroupAreas_.get_Item(m))->SetCoatData();
                require(tGroupAreas_.get_Item(m))->SetPosData();
            }
        } else if (tMode_ == 5) {
            pls::cs::Int32 num7 = 1;
            tGroupAreas_ = pls::cs::Array<pls::cs::Ref<TGroupArea>>::make(num7);
            for (pls::cs::Int32 n = 0; n < tGroupAreas_.length(); ++n) {
                {
                    auto cs_target = tGroupAreas_;
                    auto cs_index = n;
                    auto cs_value = TGroupArea::create(n, this);
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
    }
}

// M:game.TArea.GetStartTrainingGatherPos(game.TGroupArea,game.TPlayer)
pls::cs::Ref<kl_util3d::Vector3D> TArea::GetStartTrainingGatherPos(pls::cs::Ref<TGroupArea> tGroupArea,
                                                                   pls::cs::Ref<TPlayer> tPlayer) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:game.TArea.GetStartTrainingGatherPos(game.TGroupArea,game.TPlayer)", game);
    {
        {
            auto cs_target = TArea::st_gatherPos();
            auto cs_left_88 = ([&]() -> pls::cs::Single {
                pls::cs::Single cs_arg0_88 = GameUtil::Random(100);
                pls::cs::Single cs_arg3_88 = (-(require(tGroupArea)->coatW_)) / 5.0f;
                pls::cs::Single cs_arg4_88 = require(tGroupArea)->coatW_ / 5.0f;
                return GameUtil::RateConvertFloat(cs_arg0_88, 0.0f, 99.0f, cs_arg3_88, cs_arg4_88, true);
            }());
            auto cs_right_88 = require(require(tGroupArea)->centerPos_)->x_;
            pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_88 + cs_right_88);
            require(cs_target)->x_ = cs_value;
        }
        require(TArea::st_gatherPos())->y_ = 0.0f;
        {
            auto cs_target = TArea::st_gatherPos();
            auto cs_left_89 = ([&]() -> pls::cs::Single {
                pls::cs::Single cs_arg0_89 = GameUtil::Random(100);
                pls::cs::Single cs_arg3_89 = (-(require(tGroupArea)->coatH_)) / 5.0f;
                pls::cs::Single cs_arg4_89 = require(tGroupArea)->coatH_ / 5.0f;
                return GameUtil::RateConvertFloat(cs_arg0_89, 0.0f, 99.0f, cs_arg3_89, cs_arg4_89, true);
            }());
            auto cs_right_89 = require(require(tGroupArea)->centerPos_)->z_;
            pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_89 + cs_right_89);
            require(cs_target)->z_ = cs_value;
        }
        return TArea::st_gatherPos();
    }
}
} // namespace game
}
