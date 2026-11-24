// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.MapchipMatch.hpp"
#include "data.StadiumData.hpp"
#include "form.SoccerForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.MapObject.hpp"
#include "game.Player.hpp"
#include "game.Team.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "generated/java.util.JTool_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_java_util = pls::generated::java::util;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;
using IntArray3 = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>;

namespace pls::game {
namespace game {

void Map::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(apdat_, visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(mapObjects_, visitor);
    pls::cs::trace_value(screen_pos, visitor);
    pls::cs::trace_value(camera_pos, visitor);
    pls::cs::trace_value(c_poss, visitor);
    pls::cs::trace_value(GOAL1_CAMERA_POS, visitor);
    pls::cs::trace_value(GOAL2_CAMERA_POS, visitor);
    pls::cs::trace_value(cameraRect_gpos, visitor);
    pls::cs::trace_value(cameraRect_spos, visitor);
    pls::cs::trace_value(cameraRectAddress, visitor);
    pls::cs::trace_value(center_spos, visitor);
    pls::cs::trace_value(mapchip_off, visitor);
    pls::cs::trace_value(hit_rect, visitor);
}

static IntArray Map_COAT_BASEPOINT_storage{};

static IntArray2 Map_COAT_CENTER_storage{};

static IntArray2 Map_COAT_CONNER_storage{};

static IntArray2 Map_COAT_GOAL1_storage{};

static IntArray2 Map_COAT_GOAL1_ADDRESS_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Map_COAT_GOAL1_GLOBALPOS_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Map_COAT_GOAL1_GPOS_CAREA_storage{};

static IntArray2 Map_COAT_GOAL1_IN_storage{};

static IntArray2 Map_COAT_GOAL1_IN_ADDRESS_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Map_COAT_GOAL1_IN_GLOBALPOS_storage{};

static IntArray2 Map_COAT_GOAL2_storage{};

static IntArray2 Map_COAT_GOAL2_ADDRESS_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Map_COAT_GOAL2_GLOBALPOS_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Map_COAT_GOAL2_GPOS_CAREA_storage{};

static IntArray2 Map_COAT_GOAL2_IN_storage{};

static IntArray2 Map_COAT_GOAL2_IN_ADDRESS_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Map_COAT_GOAL2_IN_GLOBALPOS_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Map_DIRECT_VEC_storage{};

static StringArray Map_GOAL_PARTS_NAME_storage{};

static IntArray2 Map_GOAL1_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Map_GOAL1_GLOBAL_POS_storage{};

static IntArray2 Map_GOAL1_PARTS_GRA_storage{};

static IntArray2 Map_GOAL1_PARTS_POS_storage{};

static IntArray2 Map_GOAL2_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> Map_GOAL2_GLOBAL_POS_storage{};

static IntArray2 Map_GOAL2_PARTS_GRA_storage{};

static IntArray2 Map_GOAL2_PARTS_POS_storage{};

static IntArray2 Map_MAP_CONNER_storage{};

static pls::cs::Int32 Map_MAP_GROUND_storage{};

static StringArray Map_MAP_GROUND_NAME_storage{};

static pls::cs::Int32 Map_MAPCHIP_COAT_HNUM_storage{};

static pls::cs::Int32 Map_MAPCHIP_COAT_WNUM_storage{};

static pls::cs::Int32 Map_MAPCHIP_FIELD_HNUM_storage{};

static pls::cs::Int32 Map_MAPCHIP_FIELD_WNUM_storage{};

static IntArray2 Map_MAPCHIP_IMG_storage{};

static IntArray3 Map_MAPCHIP_SPOS_storage{};

static pls::cs::Array<pls::cs::Ref<data::MapchipMatch>> Map_mapchipGrounds_storage{};

static IntArray Map_old_camera_pos_storage{};

static PLS_NOINLINE void cs_init_83b311c3bf434048_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(Map_COAT_BASEPOINT_storage, visitor);
        pls::cs::trace_value(Map_COAT_CENTER_storage, visitor);
        pls::cs::trace_value(Map_COAT_CONNER_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL1_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL1_ADDRESS_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL1_GLOBALPOS_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL1_GPOS_CAREA_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL1_IN_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL1_IN_ADDRESS_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL1_IN_GLOBALPOS_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL2_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL2_ADDRESS_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL2_GLOBALPOS_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL2_GPOS_CAREA_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL2_IN_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL2_IN_ADDRESS_storage, visitor);
        pls::cs::trace_value(Map_COAT_GOAL2_IN_GLOBALPOS_storage, visitor);
        pls::cs::trace_value(Map_DIRECT_VEC_storage, visitor);
        pls::cs::trace_value(Map_GOAL_PARTS_NAME_storage, visitor);
        pls::cs::trace_value(Map_GOAL1_storage, visitor);
        pls::cs::trace_value(Map_GOAL1_GLOBAL_POS_storage, visitor);
        pls::cs::trace_value(Map_GOAL1_PARTS_GRA_storage, visitor);
        pls::cs::trace_value(Map_GOAL1_PARTS_POS_storage, visitor);
        pls::cs::trace_value(Map_GOAL2_storage, visitor);
        pls::cs::trace_value(Map_GOAL2_GLOBAL_POS_storage, visitor);
        pls::cs::trace_value(Map_GOAL2_PARTS_GRA_storage, visitor);
        pls::cs::trace_value(Map_GOAL2_PARTS_POS_storage, visitor);
        pls::cs::trace_value(Map_MAP_CONNER_storage, visitor);
        pls::cs::trace_value(Map_MAP_GROUND_storage, visitor);
        pls::cs::trace_value(Map_MAP_GROUND_NAME_storage, visitor);
        pls::cs::trace_value(Map_MAPCHIP_COAT_HNUM_storage, visitor);
        pls::cs::trace_value(Map_MAPCHIP_COAT_WNUM_storage, visitor);
        pls::cs::trace_value(Map_MAPCHIP_FIELD_HNUM_storage, visitor);
        pls::cs::trace_value(Map_MAPCHIP_FIELD_WNUM_storage, visitor);
        pls::cs::trace_value(Map_MAPCHIP_IMG_storage, visitor);
        pls::cs::trace_value(Map_MAPCHIP_SPOS_storage, visitor);
        pls::cs::trace_value(Map_mapchipGrounds_storage, visitor);
        pls::cs::trace_value(Map_old_camera_pos_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.Map", flag, []() {
        Map_MAPCHIP_COAT_WNUM_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.MAPCHIP_COAT_WNUM", [&]() { return 11; });
        Map_MAPCHIP_COAT_HNUM_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.MAPCHIP_COAT_HNUM", [&]() { return 16; });
        Map_MAP_GROUND_NAME_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Map.MAP_GROUND_NAME", [&]() { return StringArray::make(0); });
        Map_COAT_GOAL1_GLOBALPOS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.COAT_GOAL1_GLOBALPOS", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                    {kl_util3d::Vector3D::create(-175.0f, 0.0f, -900.0f),
                     kl_util3d::Vector3D::create(225.0f, 0.0f, -675.0f)});
            });
        Map_COAT_GOAL1_IN_GLOBALPOS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.COAT_GOAL1_IN_GLOBALPOS", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                    {kl_util3d::Vector3D::create(-87.5f, 0.0f, -900.0f),
                     kl_util3d::Vector3D::create(112.5f, 0.0f, -787.5f)});
            });
        Map_COAT_GOAL2_GLOBALPOS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.COAT_GOAL2_GLOBALPOS", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                    {kl_util3d::Vector3D::create(225.0f, 0.0f, 900.0f),
                     kl_util3d::Vector3D::create(-175.0f, 0.0f, 675.0f)});
            });
        Map_COAT_GOAL2_IN_GLOBALPOS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.COAT_GOAL2_IN_GLOBALPOS", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                    {kl_util3d::Vector3D::create(112.5f, 0.0f, 900.0f),
                     kl_util3d::Vector3D::create(-87.5f, 0.0f, 787.5f)});
            });
        Map_COAT_GOAL1_GPOS_CAREA_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.COAT_GOAL1_GPOS_CAREA", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                    {([&]() -> pls::cs::Ref<kl_util3d::Vector3D> {
                         pls::cs::Single cs_arg0 =
                             (([&]() -> pls::cs::FloatEval {
                                 auto cs_left = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->x_;
                                 auto cs_right = require(Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(0))->x_;
                                 return cs_left + cs_right;
                             }())) /
                             2.0f;
                         pls::cs::Single cs_arg2 =
                             (([&]() -> pls::cs::FloatEval {
                                 auto cs_left = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->z_;
                                 auto cs_right = require(Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(0))->z_;
                                 return cs_left + cs_right;
                             }())) /
                                 2.0f +
                             56.25f;
                         return kl_util3d::Vector3D::create(cs_arg0, 0.0f, cs_arg2);
                     }()),
                     ([&]() -> pls::cs::Ref<kl_util3d::Vector3D> {
                         pls::cs::Single cs_arg0 =
                             (([&]() -> pls::cs::FloatEval {
                                 auto cs_left = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->x_;
                                 auto cs_right = require(Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(1))->x_;
                                 return cs_left + cs_right;
                             }())) /
                             2.0f;
                         pls::cs::Single cs_arg2 =
                             (([&]() -> pls::cs::FloatEval {
                                 auto cs_left = require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->z_;
                                 auto cs_right = require(Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(1))->z_;
                                 return cs_left + cs_right;
                             }())) /
                             2.0f;
                         return kl_util3d::Vector3D::create(cs_arg0, 0.0f, cs_arg2);
                     }())});
            });
        Map_COAT_GOAL2_GPOS_CAREA_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.COAT_GOAL2_GPOS_CAREA", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                    {([&]() -> pls::cs::Ref<kl_util3d::Vector3D> {
                         pls::cs::Single cs_arg0 =
                             (([&]() -> pls::cs::FloatEval {
                                 auto cs_left = require(Map::COAT_GOAL2_GLOBALPOS().get_Item(0))->x_;
                                 auto cs_right = require(Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(0))->x_;
                                 return cs_left + cs_right;
                             }())) /
                             2.0f;
                         pls::cs::Single cs_arg2 =
                             (([&]() -> pls::cs::FloatEval {
                                 auto cs_left = require(Map::COAT_GOAL2_GLOBALPOS().get_Item(0))->z_;
                                 auto cs_right = require(Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(0))->z_;
                                 return cs_left + cs_right;
                             }())) /
                                 2.0f -
                             56.25f;
                         return kl_util3d::Vector3D::create(cs_arg0, 0.0f, cs_arg2);
                     }()),
                     ([&]() -> pls::cs::Ref<kl_util3d::Vector3D> {
                         pls::cs::Single cs_arg0 =
                             (([&]() -> pls::cs::FloatEval {
                                 auto cs_left = require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->x_;
                                 auto cs_right = require(Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(1))->x_;
                                 return cs_left + cs_right;
                             }())) /
                             2.0f;
                         pls::cs::Single cs_arg2 =
                             (([&]() -> pls::cs::FloatEval {
                                 auto cs_left = require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->z_;
                                 auto cs_right = require(Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(1))->z_;
                                 return cs_left + cs_right;
                             }())) /
                             2.0f;
                         return kl_util3d::Vector3D::create(cs_arg0, 0.0f, cs_arg2);
                     }())});
            });
        Map_COAT_GOAL1_ADDRESS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.COAT_GOAL1_ADDRESS", [&]() {
                return PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({2, 2})));
            });
        Map_COAT_GOAL2_ADDRESS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.COAT_GOAL2_ADDRESS", [&]() {
                return PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({2, 2})));
            });
        Map_COAT_GOAL1_IN_ADDRESS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.COAT_GOAL1_IN_ADDRESS", [&]() {
                return PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({2, 2})));
            });
        Map_COAT_GOAL2_IN_ADDRESS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.COAT_GOAL2_IN_ADDRESS", [&]() {
                return PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({2, 2})));
            });
        Map_GOAL1_GLOBAL_POS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.GOAL1_GLOBAL_POS", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
            });
        Map_GOAL2_GLOBAL_POS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.GOAL2_GLOBAL_POS", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
            });
        Map_old_camera_pos_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Map.old_camera_pos", [&]() { return IntArray::make(2); });
        Map_GOAL1_PARTS_POS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.GOAL1_PARTS_POS", [&]() {
                return IntArray2::from({IntArray::from({-25, -12}), IntArray::from({-1, 0}),
                                        IntArray::from({23, 12}), IntArray::from({-16, -45}),
                                        IntArray::from({8, -33}), IntArray::from({32, -21}),
                                        IntArray::from({-33, -23}), IntArray::from({38, 12})});
            });
        Map_GOAL2_PARTS_POS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.GOAL2_PARTS_POS", [&]() {
                return IntArray2::from({IntArray::from({-24, -12}), IntArray::make(2),
                                        IntArray::from({24, 12}), IntArray::from({-32, -35}),
                                        IntArray::from({-8, -23}), IntArray::from({16, -11}),
                                        IntArray::from({-40, -17}), IntArray::from({34, 20})});
            });
        Map_GOAL1_PARTS_GRA_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.GOAL1_PARTS_GRA", [&]() {
                return IntArray2::from(
                    {IntArray::from({3, 1, -5, 37, 46, 1, -1}), IntArray::from({3, 1, -5, 37, 46, 1, -1}),
                     IntArray::from({3, 1, -5, 37, 46, 1, -1}), IntArray::from({5, 3, 29, 31, 18, 1, -1}),
                     IntArray::from({5, 3, 29, 31, 18, 1, -1}), IntArray::from({5, 3, 29, 31, 18, 1, -1}),
                     IntArray::from({4, 2, -8, 20, 41, -1, 1}), IntArray::from({4, 2, -4, 20, 41, 1, -1})});
            });
        Map_GOAL2_PARTS_GRA_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.GOAL2_PARTS_GRA", [&]() {
                return IntArray2::from(
                    {IntArray::from({6, 4, -7, 36, 42, -1, 1}), IntArray::from({6, 4, -7, 36, 42, -1, 1}),
                     IntArray::from({6, 4, -7, 36, 42, -1, 1}), IntArray::from({5, 3, 23, 31, 18, 1, -1}),
                     IntArray::from({5, 3, 23, 31, 18, 1, -1}), IntArray::from({5, 3, 26, 31, 18, 1, -1}),
                     IntArray::from({7, 5, -4, 20, 37, -1, 1}), IntArray::from({7, 5, -4, 20, 37, 1, -1})});
            });
        Map_GOAL_PARTS_NAME_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Map.GOAL_PARTS_NAME", [&]() {
                return StringArray::from({literal(u"バック_奥"), literal(u"バック_真ん中"),
                                          literal(u"バック_手前"), literal(u"TOP_奥"), literal(u"TOP_真ん中"),
                                          literal(u"TOP_手前"), literal(u"SIDE_奥"), literal(u"SIDE_手前")});
            });
    });
}

void Map::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_83b311c3bf434048_slow(flag);
}

IntArray& Map::COAT_BASEPOINT() {
    Map::ensure_initialized();
    return Map_COAT_BASEPOINT_storage;
}

IntArray2& Map::COAT_CENTER() {
    Map::ensure_initialized();
    return Map_COAT_CENTER_storage;
}

IntArray2& Map::COAT_CONNER() {
    Map::ensure_initialized();
    return Map_COAT_CONNER_storage;
}

IntArray2& Map::COAT_GOAL1() {
    Map::ensure_initialized();
    return Map_COAT_GOAL1_storage;
}

IntArray2& Map::COAT_GOAL1_ADDRESS() {
    Map::ensure_initialized();
    return Map_COAT_GOAL1_ADDRESS_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Map::COAT_GOAL1_GLOBALPOS() {
    Map::ensure_initialized();
    return Map_COAT_GOAL1_GLOBALPOS_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Map::COAT_GOAL1_GPOS_CAREA() {
    Map::ensure_initialized();
    return Map_COAT_GOAL1_GPOS_CAREA_storage;
}

IntArray2& Map::COAT_GOAL1_IN() {
    Map::ensure_initialized();
    return Map_COAT_GOAL1_IN_storage;
}

IntArray2& Map::COAT_GOAL1_IN_ADDRESS() {
    Map::ensure_initialized();
    return Map_COAT_GOAL1_IN_ADDRESS_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Map::COAT_GOAL1_IN_GLOBALPOS() {
    Map::ensure_initialized();
    return Map_COAT_GOAL1_IN_GLOBALPOS_storage;
}

IntArray2& Map::COAT_GOAL2() {
    Map::ensure_initialized();
    return Map_COAT_GOAL2_storage;
}

IntArray2& Map::COAT_GOAL2_ADDRESS() {
    Map::ensure_initialized();
    return Map_COAT_GOAL2_ADDRESS_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Map::COAT_GOAL2_GLOBALPOS() {
    Map::ensure_initialized();
    return Map_COAT_GOAL2_GLOBALPOS_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Map::COAT_GOAL2_GPOS_CAREA() {
    Map::ensure_initialized();
    return Map_COAT_GOAL2_GPOS_CAREA_storage;
}

IntArray2& Map::COAT_GOAL2_IN() {
    Map::ensure_initialized();
    return Map_COAT_GOAL2_IN_storage;
}

IntArray2& Map::COAT_GOAL2_IN_ADDRESS() {
    Map::ensure_initialized();
    return Map_COAT_GOAL2_IN_ADDRESS_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Map::COAT_GOAL2_IN_GLOBALPOS() {
    Map::ensure_initialized();
    return Map_COAT_GOAL2_IN_GLOBALPOS_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Map::DIRECT_VEC() {
    Map::ensure_initialized();
    return Map_DIRECT_VEC_storage;
}

StringArray& Map::GOAL_PARTS_NAME() {
    Map::ensure_initialized();
    return Map_GOAL_PARTS_NAME_storage;
}

IntArray2& Map::GOAL1() {
    Map::ensure_initialized();
    return Map_GOAL1_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Map::GOAL1_GLOBAL_POS() {
    Map::ensure_initialized();
    return Map_GOAL1_GLOBAL_POS_storage;
}

IntArray2& Map::GOAL1_PARTS_GRA() {
    Map::ensure_initialized();
    return Map_GOAL1_PARTS_GRA_storage;
}

IntArray2& Map::GOAL1_PARTS_POS() {
    Map::ensure_initialized();
    return Map_GOAL1_PARTS_POS_storage;
}

IntArray2& Map::GOAL2() {
    Map::ensure_initialized();
    return Map_GOAL2_storage;
}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& Map::GOAL2_GLOBAL_POS() {
    Map::ensure_initialized();
    return Map_GOAL2_GLOBAL_POS_storage;
}

IntArray2& Map::GOAL2_PARTS_GRA() {
    Map::ensure_initialized();
    return Map_GOAL2_PARTS_GRA_storage;
}

IntArray2& Map::GOAL2_PARTS_POS() {
    Map::ensure_initialized();
    return Map_GOAL2_PARTS_POS_storage;
}

IntArray2& Map::MAP_CONNER() {
    Map::ensure_initialized();
    return Map_MAP_CONNER_storage;
}

pls::cs::Int32& Map::MAP_GROUND() {
    Map::ensure_initialized();
    return Map_MAP_GROUND_storage;
}

StringArray& Map::MAP_GROUND_NAME() {
    Map::ensure_initialized();
    return Map_MAP_GROUND_NAME_storage;
}

pls::cs::Int32& Map::MAPCHIP_COAT_HNUM() {
    Map::ensure_initialized();
    return Map_MAPCHIP_COAT_HNUM_storage;
}

pls::cs::Int32& Map::MAPCHIP_COAT_WNUM() {
    Map::ensure_initialized();
    return Map_MAPCHIP_COAT_WNUM_storage;
}

pls::cs::Int32& Map::MAPCHIP_FIELD_HNUM() {
    Map::ensure_initialized();
    return Map_MAPCHIP_FIELD_HNUM_storage;
}

pls::cs::Int32& Map::MAPCHIP_FIELD_WNUM() {
    Map::ensure_initialized();
    return Map_MAPCHIP_FIELD_WNUM_storage;
}

IntArray2& Map::MAPCHIP_IMG() {
    Map::ensure_initialized();
    return Map_MAPCHIP_IMG_storage;
}

IntArray3& Map::MAPCHIP_SPOS() {
    Map::ensure_initialized();
    return Map_MAPCHIP_SPOS_storage;
}

pls::cs::Array<pls::cs::Ref<data::MapchipMatch>>& Map::mapchipGrounds() {
    Map::ensure_initialized();
    return Map_mapchipGrounds_storage;
}

IntArray& Map::old_camera_pos() {
    Map::ensure_initialized();
    return Map_old_camera_pos_storage;
}

void Map::create_init(pls::cs::Ref<Map> self) {
    Map::ensure_initialized();
    self->screen_pos = IntArray::make(2);
    self->camera_pos = IntArray::make(2);
    self->c_poss = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
    self->GOAL1_CAMERA_POS = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
    self->GOAL2_CAMERA_POS = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
    self->cameraRect_gpos = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
    self->cameraRect_spos = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
    self->cameraRectAddress = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
    self->center_spos = IntArray::make(2);
    self->mapchip_off = IntArray::make(2);
    self->hit_rect = IntArray::make(4);
    self->goalBackNetNum_ = 3;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.#ctor", game);
    {
        self->apdat_ = main::AppData::GetInstance();
        self->udat_ = UserData::GetInstance();
    }
}

// M:game.Map.#ctor
pls::cs::Ref<Map> Map::create() {
    Map::ensure_initialized();
    auto self = pls::cs::make_ref<Map>();
    Map::create_init(self);
    return self;
}

// M:game.Map.Init
void Map::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.Init", game);
    {
        Map::COAT_CONNER() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        Map::COAT_CENTER() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({3, 2})));
        Map::COAT_GOAL1() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        Map::COAT_GOAL2() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        Map::COAT_GOAL1_IN() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        Map::COAT_GOAL2_IN() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        Map::GOAL1() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({1, 2})));
        Map::GOAL2() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({1, 2})));
        Map::MAP_CONNER() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> array =
            pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from(
                {kl_util3d::Vector3D::create(-450.0f, 0.0f, -900.0f),
                 kl_util3d::Vector3D::create(-450.0f, 0.0f, 900.0f),
                 kl_util3d::Vector3D::create(450.0f, 0.0f, -900.0f),
                 kl_util3d::Vector3D::create(450.0f, 0.0f, 900.0f)});
        for (pls::cs::Int32 i = 0; i < Map::MAP_CONNER().length(); ++i) {
            {
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = array.get_Item(i);
                IntArray cs_arg1 = Map::MAP_CONNER()[i];
                Camera::ConvertGlobalToScreen(cs_arg0, cs_arg1);
            }
        }
        Map::DIRECT_VEC() = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(5);
        IntArray2 array2 =
            IntArray2::from({IntArray::from({1, 2}), IntArray::from({2, 1}), IntArray::from({1, 0}),
                             IntArray::from({0, 1}), IntArray::from({1, 1})});
        for (pls::cs::Int32 j = 0; j < Map::DIRECT_VEC().length(); ++j) {
            {
                auto cs_target = Map::DIRECT_VEC();
                auto cs_index = j;
                auto cs_value = kl_util3d::Vector3D::create();
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                pls::cs::Int32 cs_arg0 = array2[j][0];
                pls::cs::Int32 cs_arg1 = array2[j][1];
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg2 = Map::DIRECT_VEC().get_Item(j);
                Camera::ConvertAddressToGlobal(cs_arg0, cs_arg1, cs_arg2);
            }
        }
        for (pls::cs::Int32 k = 0; k < 4; ++k) {
            {
                auto cs_target = Map::DIRECT_VEC().get_Item(k);
                auto cs_left_74 = require(Map::DIRECT_VEC().get_Item(k))->x_;
                auto cs_right_74 = require(Map::DIRECT_VEC().get_Item(4))->x_;
                pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_74 - cs_right_74);
                require(cs_target)->x_ = cs_value;
            }
            require(Map::DIRECT_VEC().get_Item(k))->y_ = 0.0f;
            {
                auto cs_target = Map::DIRECT_VEC().get_Item(k);
                auto cs_left_75 = require(Map::DIRECT_VEC().get_Item(k))->z_;
                auto cs_right_75 = require(Map::DIRECT_VEC().get_Item(4))->z_;
                pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_75 - cs_right_75);
                require(cs_target)->z_ = cs_value;
            }
        }
    }
}

// M:game.Map.Load2
void Map::Load2() {
    Map::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.Load2", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        Map::mapchipGrounds() = pls::cs::Array<pls::cs::Ref<data::MapchipMatch>>::make(4);
        IntArray array = IntArray::from({2, 4, 8, 16});
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            for (pls::cs::Int32 j = 0; j < require(instance)->mapchipMatch_.length(); ++j) {
                pls::cs::Ref<data::MapchipMatch> mapchipMatch = require(instance)->mapchipMatch_.get_Item(j);
                if (PLS_API(([&]() -> bool {
                        pls::cs::Int32 cs_arg0 = require(mapchipMatch)->flag_;
                        pls::cs::Int32 cs_arg1 = array[i];
                        return kl_unity_util::BitUtil::Check(cs_arg0, cs_arg1);
                    }()))) {
                    Map::mapchipGrounds().set_Item(i, mapchipMatch);
                    break;
                }
            }
        }
    }
}

// M:game.Map.SetCoatLine
void Map::SetCoatLine() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.SetCoatLine", game);
    {
        Camera::ensure_initialized();

        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Map::COAT_GOAL1_GLOBALPOS().get_Item(0);
            IntArray cs_arg1 = Map::COAT_GOAL1_ADDRESS()[0];
            Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Map::COAT_GOAL1_GLOBALPOS().get_Item(1);
            IntArray cs_arg1 = Map::COAT_GOAL1_ADDRESS()[1];
            Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Map::COAT_GOAL2_GLOBALPOS().get_Item(0);
            IntArray cs_arg1 = Map::COAT_GOAL2_ADDRESS()[0];
            Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Map::COAT_GOAL2_GLOBALPOS().get_Item(1);
            IntArray cs_arg1 = Map::COAT_GOAL2_ADDRESS()[1];
            Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(0);
            IntArray cs_arg1 = Map::COAT_GOAL1_IN_ADDRESS()[0];
            Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(1);
            IntArray cs_arg1 = Map::COAT_GOAL1_IN_ADDRESS()[1];
            Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(0);
            IntArray cs_arg1 = Map::COAT_GOAL2_IN_ADDRESS()[0];
            Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
        }
        {
            pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(1);
            IntArray cs_arg1 = Map::COAT_GOAL2_IN_ADDRESS()[1];
            Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
        }
        IntArray array = IntArray::make(2);
        array[0] = Camera::MAP_SCREEN_W1();
        array[1] = Camera::MAP_SCREEN_H1();
        pls::cs::Single num = pls::cs::Single((-Map::COAT_BASEPOINT()[0])) - 0.5f;
        pls::cs::Single num2 = pls::cs::Single((-Map::COAT_BASEPOINT()[1])) + 0.5f;
        IntArray array2 = IntArray::make(2);
        array2[0] = pls::cs::to_int32((num2 * 60.0f / 2.0f + num * 60.0f / 2.0f));
        array2[1] = pls::cs::to_int32((num2 * 30.0f / 2.0f - num * 30.0f / 2.0f));
        Map::MAPCHIP_SPOS() = PLS_API(kl_java_util::JTool::MakeArray<IntArray3>(
            IntArray::from({Map::MAPCHIP_FIELD_HNUM(), Map::MAPCHIP_FIELD_WNUM(), 2})));
        for (pls::cs::Int32 num3 = pls::cs::Int32(Map::MAPCHIP_SPOS().length()) - 1; num3 >= 0; --num3) {
            for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_SPOS()[num3].length(); ++i) {
                Map::MAPCHIP_SPOS()[num3][i][0] = ([&]() -> pls::cs::Int32 {
                    auto cs_left = num3 * 60 / 2 + i * 60 / 2 - array[0];
                    auto cs_right = array2[0];
                    return cs_left + cs_right;
                }());
                Map::MAPCHIP_SPOS()[num3][i][1] = ([&]() -> pls::cs::Int32 {
                    auto cs_left = num3 * 30 / 2 - i * 30 / 2 - array[1];
                    auto cs_right = array2[1];
                    return cs_left + cs_right;
                }());
            }
        }
        for (pls::cs::Int32 j = 0; j < mapObjects_.length(); ++j) {
            {
                auto cs_target = require(mapObjects_.get_Item(j))->spos_;
                auto cs_index = 0;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = ([&]() -> pls::cs::Int32 {
                    auto cs_left = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (pls::cs::Int32(Map::MAPCHIP_SPOS().length()) - 1) * 60 / 2;
                        auto cs_right = array[0];
                        return cs_left - cs_right;
                    }());
                    auto cs_right = array2[0];
                    return cs_left + cs_right;
                }());
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
            {
                auto cs_target = require(mapObjects_.get_Item(j))->spos_;
                auto cs_index = 1;
                auto cs_old = cs_target.at(cs_index);
                auto cs_rhs = ([&]() -> pls::cs::Int32 {
                    auto cs_left = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (pls::cs::Int32(Map::MAPCHIP_SPOS().length()) - 1) * 30 / 2;
                        auto cs_right = array[1];
                        return cs_left - cs_right;
                    }());
                    auto cs_right = array2[1];
                    return cs_left + cs_right;
                }());
                pls::cs::Int32 cs_value = cs_old + cs_rhs;
                cs_target.at(cs_index) = cs_value;
            }
        }
        Map::COAT_CONNER()[0][0] = (0 - array[0]);
        Map::COAT_CONNER()[0][1] = (0 - array[1]);
        Map::COAT_CONNER()[1][0] = 0 + Map::MAPCHIP_COAT_WNUM() * 60 / 2 - array[0];
        Map::COAT_CONNER()[1][1] = (0 - (Map::MAPCHIP_COAT_WNUM() * 30 / 2)) - array[1];
        Map::COAT_CONNER()[2][0] = Map::MAPCHIP_COAT_HNUM() * 60 / 2 - array[0];
        Map::COAT_CONNER()[2][1] = Map::MAPCHIP_COAT_HNUM() * 30 / 2 - array[1];
        Map::COAT_CONNER()[3][0] =
            Map::MAPCHIP_COAT_HNUM() * 60 / 2 + Map::MAPCHIP_COAT_WNUM() * 60 / 2 - array[0];
        Map::COAT_CONNER()[3][1] =
            Map::MAPCHIP_COAT_HNUM() * 30 / 2 - Map::MAPCHIP_COAT_WNUM() * 30 / 2 - array[1];
        Map::COAT_CENTER()[0][0] = Map::MAPCHIP_COAT_HNUM() * 60 / 2 / 2 - array[0];
        Map::COAT_CENTER()[0][1] = Map::MAPCHIP_COAT_HNUM() * 30 / 2 / 2 - array[1];
        Map::COAT_CENTER()[1][0] =
            Map::MAPCHIP_COAT_HNUM() * 60 / 2 / 2 + Map::MAPCHIP_COAT_WNUM() * 60 / 2 - array[0];
        Map::COAT_CENTER()[1][1] =
            Map::MAPCHIP_COAT_HNUM() * 30 / 2 / 2 - Map::MAPCHIP_COAT_WNUM() * 30 / 2 - array[1];
        Map::COAT_CENTER()[2][0] =
            Map::MAPCHIP_COAT_HNUM() * 60 / 2 / 2 + Map::MAPCHIP_COAT_WNUM() * 60 / 2 / 2 - array[0];
        Map::COAT_CENTER()[2][1] =
            Map::MAPCHIP_COAT_HNUM() * 30 / 2 / 2 - Map::MAPCHIP_COAT_WNUM() * 30 / 2 / 2 - array[1];
        Map::COAT_GOAL1()[0][0] = 0 + Map::MAPCHIP_COAT_WNUM() * 60 / 2 / 4 - array[0];
        Map::COAT_GOAL1()[0][1] = (0 - (Map::MAPCHIP_COAT_WNUM() * 30 / 2 / 4)) - array[1];
        Map::COAT_GOAL1()[1][0] = 0 + Map::MAPCHIP_COAT_WNUM() * 3 * 60 / 2 / 4 - array[0];
        Map::COAT_GOAL1()[1][1] = (0 - (Map::MAPCHIP_COAT_WNUM() * 3 * 30 / 2 / 4)) - array[1];
        Map::COAT_GOAL1()[2][0] =
            Map::MAPCHIP_COAT_HNUM() / 8 * 60 / 2 + Map::MAPCHIP_COAT_WNUM() * 60 / 2 / 4 - array[0];
        Map::COAT_GOAL1()[2][1] =
            Map::MAPCHIP_COAT_HNUM() / 8 * 30 / 2 - Map::MAPCHIP_COAT_WNUM() * 30 / 2 / 4 - array[1];
        Map::COAT_GOAL1()[3][0] =
            Map::MAPCHIP_COAT_HNUM() / 8 * 60 / 2 + Map::MAPCHIP_COAT_WNUM() * 3 * 60 / 2 / 4 - array[0];
        Map::COAT_GOAL1()[3][1] =
            Map::MAPCHIP_COAT_HNUM() / 8 * 30 / 2 - Map::MAPCHIP_COAT_WNUM() * 3 * 30 / 2 / 4 - array[1];
        Map::COAT_GOAL2()[0][0] =
            Map::MAPCHIP_COAT_HNUM() * 60 / 2 + Map::MAPCHIP_COAT_WNUM() * 60 / 2 / 4 - array[0];
        Map::COAT_GOAL2()[0][1] =
            Map::MAPCHIP_COAT_HNUM() * 30 / 2 - Map::MAPCHIP_COAT_WNUM() * 30 / 2 / 4 - array[1];
        Map::COAT_GOAL2()[1][0] =
            Map::MAPCHIP_COAT_HNUM() * 60 / 2 + Map::MAPCHIP_COAT_WNUM() * 3 * 60 / 2 / 4 - array[0];
        Map::COAT_GOAL2()[1][1] =
            Map::MAPCHIP_COAT_HNUM() * 30 / 2 - Map::MAPCHIP_COAT_WNUM() * 3 * 30 / 2 / 4 - array[1];
        Map::COAT_GOAL2()[2][0] = (Map::MAPCHIP_COAT_HNUM() - Map::MAPCHIP_COAT_HNUM() / 8) * 60 / 2 +
                                  Map::MAPCHIP_COAT_WNUM() * 60 / 2 / 4 - array[0];
        Map::COAT_GOAL2()[2][1] = (Map::MAPCHIP_COAT_HNUM() - Map::MAPCHIP_COAT_HNUM() / 8) * 30 / 2 -
                                  Map::MAPCHIP_COAT_WNUM() * 30 / 2 / 4 - array[1];
        Map::COAT_GOAL2()[3][0] = (Map::MAPCHIP_COAT_HNUM() - Map::MAPCHIP_COAT_HNUM() / 8) * 60 / 2 +
                                  Map::MAPCHIP_COAT_WNUM() * 3 * 60 / 2 / 4 - array[0];
        Map::COAT_GOAL2()[3][1] = (Map::MAPCHIP_COAT_HNUM() - Map::MAPCHIP_COAT_HNUM() / 8) * 30 / 2 -
                                  Map::MAPCHIP_COAT_WNUM() * 3 * 30 / 2 / 4 - array[1];
        Map::COAT_GOAL1_IN()[0][0] = 0 + Map::MAPCHIP_COAT_WNUM() * 30 * 3 / 8 - array[0];
        Map::COAT_GOAL1_IN()[0][1] = (0 - (Map::MAPCHIP_COAT_WNUM() * 15 * 3 / 8)) - array[1];
        Map::COAT_GOAL1_IN()[1][0] = 0 + Map::MAPCHIP_COAT_WNUM() * 30 * 5 / 8 - array[0];
        Map::COAT_GOAL1_IN()[1][1] = (0 - (Map::MAPCHIP_COAT_WNUM() * 15 * 5 / 8)) - array[1];
        Map::COAT_GOAL1_IN()[2][0] =
            Map::MAPCHIP_COAT_HNUM() / 16 * 60 / 2 + Map::MAPCHIP_COAT_WNUM() * 30 * 3 / 8 - array[0];
        Map::COAT_GOAL1_IN()[2][1] =
            Map::MAPCHIP_COAT_HNUM() / 16 * 30 / 2 - Map::MAPCHIP_COAT_WNUM() * 15 * 3 / 8 - array[1];
        Map::COAT_GOAL1_IN()[3][0] =
            Map::MAPCHIP_COAT_HNUM() / 16 * 60 / 2 + Map::MAPCHIP_COAT_WNUM() * 30 * 5 / 8 - array[0];
        Map::COAT_GOAL1_IN()[3][1] =
            Map::MAPCHIP_COAT_HNUM() / 16 * 30 / 2 - Map::MAPCHIP_COAT_WNUM() * 15 * 5 / 8 - array[1];
        Map::COAT_GOAL2_IN()[0][0] =
            Map::MAPCHIP_COAT_HNUM() * 60 / 2 + Map::MAPCHIP_COAT_WNUM() * 30 * 3 / 8 - array[0];
        Map::COAT_GOAL2_IN()[0][1] =
            Map::MAPCHIP_COAT_HNUM() * 30 / 2 - Map::MAPCHIP_COAT_WNUM() * 15 * 3 / 8 - array[1];
        Map::COAT_GOAL2_IN()[1][0] =
            Map::MAPCHIP_COAT_HNUM() * 60 / 2 + Map::MAPCHIP_COAT_WNUM() * 30 * 5 / 8 - array[0];
        Map::COAT_GOAL2_IN()[1][1] =
            Map::MAPCHIP_COAT_HNUM() * 30 / 2 - Map::MAPCHIP_COAT_WNUM() * 15 * 5 / 8 - array[1];
        Map::COAT_GOAL2_IN()[2][0] = (Map::MAPCHIP_COAT_HNUM() - Map::MAPCHIP_COAT_HNUM() / 16) * 60 / 2 +
                                     Map::MAPCHIP_COAT_WNUM() * 30 * 3 / 8 - array[0];
        Map::COAT_GOAL2_IN()[2][1] = (Map::MAPCHIP_COAT_HNUM() - Map::MAPCHIP_COAT_HNUM() / 16) * 30 / 2 -
                                     Map::MAPCHIP_COAT_WNUM() * 15 * 3 / 8 - array[1];
        Map::COAT_GOAL2_IN()[3][0] = (Map::MAPCHIP_COAT_HNUM() - Map::MAPCHIP_COAT_HNUM() / 16) * 60 / 2 +
                                     Map::MAPCHIP_COAT_WNUM() * 30 * 5 / 8 - array[0];
        Map::COAT_GOAL2_IN()[3][1] = (Map::MAPCHIP_COAT_HNUM() - Map::MAPCHIP_COAT_HNUM() / 16) * 30 / 2 -
                                     Map::MAPCHIP_COAT_WNUM() * 15 * 5 / 8 - array[1];
        Map::GOAL1()[0][0] = 0 + Map::MAPCHIP_COAT_WNUM() * 60 / 2 / 2 - array[0];
        Map::GOAL1()[0][1] = (0 - (Map::MAPCHIP_COAT_WNUM() * 30 / 2 / 2)) - array[1];
        Map::GOAL2()[0][0] =
            Map::MAPCHIP_COAT_HNUM() * 60 / 2 + Map::MAPCHIP_COAT_WNUM() * 60 / 2 / 2 - array[0];
        Map::GOAL2()[0][1] =
            Map::MAPCHIP_COAT_HNUM() * 30 / 2 - Map::MAPCHIP_COAT_WNUM() * 30 / 2 / 2 - array[1];
        pls::cs::Int32 num4 = 20;
        pls::cs::Int32 num5 = 50;
        pls::cs::Int32 num6 = 40;
        {
            auto cs_target = Map::GOAL1_GLOBAL_POS();
            auto cs_index = 0;
            auto cs_value =
                kl_util3d::Vector3D::create((-900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM())) *
                                                    pls::cs::Single(goalBackNetNum_) / 2.0f +
                                                pls::cs::Single(num4),
                                            0.0f, -900.0f);
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = Map::GOAL1_GLOBAL_POS();
            auto cs_index = 1;
            auto cs_value = kl_util3d::Vector3D::create(900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM()) *
                                                                pls::cs::Single(goalBackNetNum_) / 2.0f -
                                                            pls::cs::Single(num4),
                                                        0.0f, -900.0f);
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = Map::GOAL1_GLOBAL_POS();
            auto cs_index = 2;
            auto cs_value = kl_util3d::Vector3D::create(900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM()) *
                                                                pls::cs::Single(goalBackNetNum_) / 2.0f -
                                                            pls::cs::Single(num4),
                                                        0.0f, (-900.0f - pls::cs::Single(num5)));
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = Map::GOAL1_GLOBAL_POS();
            auto cs_index = 3;
            auto cs_value =
                kl_util3d::Vector3D::create((-900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM())) *
                                                    pls::cs::Single(goalBackNetNum_) / 2.0f +
                                                pls::cs::Single(num4),
                                            0.0f, (-900.0f - pls::cs::Single(num5)));
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = Map::GOAL2_GLOBAL_POS();
            auto cs_index = 0;
            auto cs_value = kl_util3d::Vector3D::create(900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM()) *
                                                                pls::cs::Single(goalBackNetNum_) / 2.0f -
                                                            pls::cs::Single(num4),
                                                        0.0f, 900.0f);
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = Map::GOAL2_GLOBAL_POS();
            auto cs_index = 1;
            auto cs_value =
                kl_util3d::Vector3D::create((-900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM())) *
                                                    pls::cs::Single(goalBackNetNum_) / 2.0f +
                                                pls::cs::Single(num4),
                                            0.0f, 900.0f);
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = Map::GOAL2_GLOBAL_POS();
            auto cs_index = 2;
            auto cs_value =
                kl_util3d::Vector3D::create((-900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM())) *
                                                    pls::cs::Single(goalBackNetNum_) / 2.0f +
                                                pls::cs::Single(num4),
                                            0.0f, 900.0f + pls::cs::Single(num6));
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_target = Map::GOAL2_GLOBAL_POS();
            auto cs_index = 3;
            auto cs_value = kl_util3d::Vector3D::create(900.0f / pls::cs::Single(Map::MAPCHIP_COAT_WNUM()) *
                                                                pls::cs::Single(goalBackNetNum_) / 2.0f -
                                                            pls::cs::Single(num4),
                                                        0.0f, 900.0f + pls::cs::Single(num6));
            cs_target.set_Item(cs_index, cs_value);
        }
    }
}

// M:game.Map.SetDefaultCoatEva
void Map::SetDefaultCoatEva() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.SetDefaultCoatEva", game);
    {
        Team::ensure_initialized();

        Team::DEAFULT_FORMATION_EVA() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(
            IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()})));
        Team::DEAFULT_FORMATION_EVA_PENALTYAREA() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(
            IntArray::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()})));
        pls::cs::Single num = 100.0f;
        pls::cs::Single recoveredUnusedSingleSlot1;
        pls::cs::Single num2 = 1000.0f;
        pls::cs::Single originalUnusedSlot1;
        pls::cs::Single num3, num4;
        for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
            num3 = num;
            num4 = num2;
            pls::cs::Int32 num5 = Map::COAT_GOAL2_ADDRESS()[1][1] - i;
            if (num5 > 0) {
                for (pls::cs::Int32 j = 0; j < num5; ++j) {
                    num3 *= 0.8f;
                    num4 *= 0.1f;
                }
            }
            for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_WNUM(); ++k) {
                Team::DEAFULT_FORMATION_EVA()[i][k] = pls::cs::to_int32(num3);
                Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[i][k] = pls::cs::to_int32(num4);
            }
        }
        for (pls::cs::Int32 l = Map::COAT_GOAL2_ADDRESS()[1][1]; l <= Map::COAT_GOAL2_ADDRESS()[0][1]; ++l) {
            num3 = num;
            num4 = num2;
            for (pls::cs::Int32 num6 = Map::COAT_GOAL1_ADDRESS()[0][0] - 1; num6 >= 0; --num6) {
                num3 *= 0.8f;
                num4 *= 0.1f;
                Team::DEAFULT_FORMATION_EVA()[l][num6] = pls::cs::to_int32(num3);
                Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[l][num6] = pls::cs::to_int32(num4);
            }
            num3 = num;
            num4 = num2;
            for (pls::cs::Int32 m = Map::COAT_GOAL1_ADDRESS()[1][0] + 1; m < Map::MAPCHIP_COAT_WNUM(); ++m) {
                num3 *= 0.8f;
                num4 *= 0.1f;
                Team::DEAFULT_FORMATION_EVA()[l][m] = pls::cs::to_int32(num3);
                Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[l][m] = pls::cs::to_int32(num4);
            }
        }
        for (pls::cs::Int32 num7 = Map::COAT_GOAL2_ADDRESS()[1][1] - 1; num7 >= 0; --num7) {
            for (pls::cs::Int32 num8 = Map::COAT_GOAL1_ADDRESS()[0][0] - 1; num8 >= 0; --num8) {
                num3 = Team::DEAFULT_FORMATION_EVA()[num7][num8];
                if (num3 > pls::cs::Single(Team::DEAFULT_FORMATION_EVA()[num7][num8 + 1])) {
                    num3 = Team::DEAFULT_FORMATION_EVA()[num7][num8 + 1];
                }
                if (num3 > pls::cs::Single(Team::DEAFULT_FORMATION_EVA()[num7 + 1][num8])) {
                    num3 = Team::DEAFULT_FORMATION_EVA()[num7 + 1][num8];
                }
                Team::DEAFULT_FORMATION_EVA()[num7][num8] = pls::cs::to_int32(num3);
                num4 = Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[num7][num8];
                if (num3 > pls::cs::Single(Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[num7][num8 + 1])) {
                    num4 = Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[num7][num8 + 1];
                }
                if (num3 > pls::cs::Single(Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[num7 + 1][num8])) {
                    num4 = Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[num7 + 1][num8];
                }
                Team::DEAFULT_FORMATION_EVA_PENALTYAREA()[num7][num8] = pls::cs::to_int32(num4);
            }
            for (pls::cs::Int32 n = Map::COAT_GOAL1_ADDRESS()[1][0] + 1; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                num3 = Team::DEAFULT_FORMATION_EVA()[num7][n];
                if (num3 > pls::cs::Single(Team::DEAFULT_FORMATION_EVA()[num7][n - 1])) {
                    num3 = Team::DEAFULT_FORMATION_EVA()[num7][n - 1];
                }
                if (num3 > pls::cs::Single(Team::DEAFULT_FORMATION_EVA()[num7 + 1][n])) {
                    num3 = Team::DEAFULT_FORMATION_EVA()[num7 + 1][n];
                }
                Team::DEAFULT_FORMATION_EVA()[num7][n] = pls::cs::to_int32(num3);
                num4 = Team::DEAFULT_FORMATION_EVA()[num7][n];
                if (num4 > pls::cs::Single(Team::DEAFULT_FORMATION_EVA()[num7][n - 1])) {
                    num4 = Team::DEAFULT_FORMATION_EVA()[num7][n - 1];
                }
                if (num4 > pls::cs::Single(Team::DEAFULT_FORMATION_EVA()[num7 + 1][n])) {
                    num4 = Team::DEAFULT_FORMATION_EVA()[num7 + 1][n];
                }
                Team::DEAFULT_FORMATION_EVA()[num7][n] = pls::cs::to_int32(num4);
            }
        }
        for (pls::cs::Int32 num9 = 4; num9 <= 6; ++num9) {
            Team::DEAFULT_FORMATION_EVA()[pls::cs::Int32(Team::DEAFULT_FORMATION_EVA().length()) - 1][num9] =
                Team::DEAFULT_FORMATION_EVA()[pls::cs::Int32(Team::DEAFULT_FORMATION_EVA().length()) - 1]
                                             [num9] *
                0 / 100;
            Team::DEAFULT_FORMATION_EVA_PENALTYAREA()
                [pls::cs::Int32(Team::DEAFULT_FORMATION_EVA_PENALTYAREA().length()) - 1][num9] =
                    Team::DEAFULT_FORMATION_EVA_PENALTYAREA()
                        [pls::cs::Int32(Team::DEAFULT_FORMATION_EVA_PENALTYAREA().length()) - 1][num9] *
                    0 / 100;
        }
    }
}

// M:game.Map.CreateMap(System.Int32,System.String)
void Map::CreateMap(pls::cs::Int32 stadiumId, pls::cs::String fileName) {
    Map::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.CreateMap(System.Int32,System.String)", game);
    {
        pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
        pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
        pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
        pls::cs::run_finally(
            [&]() {
                try {
                    recordStore = PLS_API(pls::kairo::RecordStore::OpenRecordStore(1));
                    jarInflater =
                        kl_unity_util::JarInflater::create(PLS_API(require(recordStore)->ReadRecord(2)));
                    {
                        auto cs_target = instance;
                        auto cs_value = Map::create();
                        require(cs_target)->map_ = cs_value;
                    }
                    require(require(instance)->map_)->Init();
                    {
                        auto cs_receiver = require(instance)->map_;
                        pls::cs::Int32 cs_arg0 = stadiumId;
                        ByteArray cs_arg1 =
                            PLS_API(require(jarInflater)
                                        ->GetData(pls::cs::String::concat(fileName, literal(u".gmap"))));
                        require(cs_receiver)->LoadMap(cs_arg0, cs_arg1);
                    }
                    require(require(instance)->map_)->SetCoatLine();
                    require(require(instance)->map_)->SetDefaultCoatEva();
                    require(require(instance)->map_)->stadiumId_ = stadiumId;
                } catch (const pls::cs::Exception& cs_caught_97) {
                    auto ex = pls::cs::capture_exception(cs_caught_97);
                    {
                        pls::cs::throw_exception(ex);
                    }
                }
            },
            [&]() {
                if (!is_null(jarInflater)) {
                    PLS_API(require(jarInflater)->Close());
                }
                jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
                if (!is_null(recordStore)) {
                    PLS_API(require(recordStore)->CloseRecordStore());
                }
                recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
            });
    }
}

// M:game.Map.LoadMap(System.Int32,System.Byte[])
void Map::LoadMap(pls::cs::Int32 stadiumId, ByteArray source) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.LoadMap(System.Int32,System.Byte[])", game);
    {
        pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<kl_io::ByteArrayInputStream>{};
        pls::cs::run_finally(
            [&]() {
                try {
                    byteArrayInputStream = kl_io::ByteArrayInputStream::create(source);
                    Map::MAPCHIP_FIELD_WNUM() = pls::cs::cast_integral<pls::cs::Int32>(
                        PLS_API(kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream)));
                    Map::MAPCHIP_FIELD_HNUM() = pls::cs::cast_integral<pls::cs::Int32>(
                        PLS_API(kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream)));
                    Map::MAPCHIP_IMG() = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(
                        IntArray::from({Map::MAPCHIP_FIELD_HNUM(), Map::MAPCHIP_FIELD_WNUM()})));
                    for (pls::cs::Int32 num = Map::MAPCHIP_FIELD_HNUM() - 1; num >= 0; --num) {
                        for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_FIELD_WNUM(); ++i) {
                            {
                                auto cs_target = Map::MAPCHIP_IMG()[num];
                                auto cs_index = i;
                                auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(
                                    PLS_API(kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream)));
                                cs_target.set_Item(cs_index, cs_value);
                            }
                        }
                    }
                    Map::COAT_BASEPOINT() = IntArray::make(2);
                    {
                        auto cs_target = Map::COAT_BASEPOINT();
                        auto cs_index = 0;
                        auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(
                            PLS_API(kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream)));
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    {
                        auto cs_target = Map::COAT_BASEPOINT();
                        auto cs_index = 1;
                        auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(
                            PLS_API(kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream)));
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    pls::cs::Ref<data::StadiumData> stadiumData =
                        require(apdat_)->stadiumData_.get_Item(stadiumId);
                    {
                        auto cs_target = Map::COAT_BASEPOINT();
                        auto cs_index = 1;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = require(stadiumData)->mapchip_oy_;
                        pls::cs::Int32 cs_value = cs_old + cs_rhs;
                        cs_target.at(cs_index) = cs_value;
                    }
                    pls::cs::Int32 num2 = pls::cs::cast_integral<pls::cs::Int32>(
                        PLS_API(kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream)));
                    mapObjects_ = pls::cs::Array<pls::cs::Ref<MapObject>>::make(num2);
                    for (pls::cs::Int32 j = 0; j < mapObjects_.length(); ++j) {
                        {
                            auto cs_target = mapObjects_;
                            auto cs_index = j;
                            auto cs_value = MapObject::create();
                            cs_target.set_Item(cs_index, cs_value);
                        }
                        {
                            auto cs_target = mapObjects_.get_Item(j);
                            pls::cs::Int32 cs_value = pls::cs::cast_integral<pls::cs::Int32>(
                                PLS_API(kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream)));
                            require(cs_target)->img_ = cs_value;
                        }
                        {
                            auto cs_target = require(mapObjects_.get_Item(j))->spos_;
                            auto cs_index = 0;
                            auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(
                                PLS_API(kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream)));
                            cs_target.set_Item(cs_index, cs_value);
                        }
                        {
                            auto cs_target = require(mapObjects_.get_Item(j))->spos_;
                            auto cs_index = 1;
                            auto cs_value = -pls::cs::Int32(
                                PLS_API(kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream)));
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    PLS_API(require(byteArrayInputStream)->Close());
                } catch (const pls::cs::Exception& cs_caught_99) {
                    auto t = pls::cs::capture_exception(cs_caught_99);
                    {
                        PLS_API(kl_unity_util::Log::Info(t));
                    }
                }
            },
            [&]() {
                try {
                    if (!is_null(byteArrayInputStream)) {
                        PLS_API(require(byteArrayInputStream)->Close());
                    }
                    byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                } catch (const pls::cs::Exception& cs_caught_98) {
                    auto t2 = pls::cs::capture_exception(cs_caught_98);
                    {
                        PLS_API(kl_unity_util::Log::Info(t2));
                    }
                }
            });
    }
}

// M:game.Map.Draw(kairo.unity.ui.Graphics,System.Boolean)
void Map::Draw(pls::cs::Ref<pls::kairo::Graphics> g, bool offscreen) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.Draw(kairo.unity.ui.Graphics,System.Boolean)", game);
    {
        if (offscreen) {
            Draw_coat(g, offscreen);
        } else {
            Draw_coat(g, offscreen);
            Draw_goal(g);
            Draw_lineAndGoal(g);
        }
        Draw_mapobject(g);
        ++temp_frame;
    }
}

// M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean)
void Map::Draw_coat(pls::cs::Ref<pls::kairo::Graphics> g, bool offscreen) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.Draw_coat(kairo.unity.ui.Graphics,System.Boolean)", game);
    {
        Camera::ensure_initialized();
        form::SoccerForm::ensure_initialized();

        pls::cs::Ref<data::MapchipMatch> mapchipMatch = Map::mapchipGrounds().get_Item(Map::MAP_GROUND());
        Camera::camera_spos()[0] = pls::cs::to_int32(require(Camera::pos())->x_);
        Camera::camera_spos()[1] = pls::cs::to_int32(require(Camera::pos())->y_);
        Camera::ConvertScreenToGlobal(Camera::camera_spos(), Camera::camera_gpos());
        pls::cs::Int32 num = 180;
        cameraRect_spos[0][0] = Camera::camera_spos()[0] - num;
        cameraRect_spos[0][1] = Camera::camera_spos()[1] + num;
        cameraRect_spos[1][0] = Camera::camera_spos()[0] + num;
        cameraRect_spos[1][1] = Camera::camera_spos()[1] + num;
        cameraRect_spos[2][0] = Camera::camera_spos()[0] + num;
        cameraRect_spos[2][1] = Camera::camera_spos()[1] - num;
        cameraRect_spos[3][0] = Camera::camera_spos()[0] - num;
        cameraRect_spos[3][1] = Camera::camera_spos()[1] - num;
        for (pls::cs::Int32 i = 0; i < cameraRect_gpos.length(); ++i) {
            if (is_null(cameraRect_gpos.get_Item(i))) {
                {
                    auto cs_target = cameraRect_gpos;
                    auto cs_index = i;
                    auto cs_value = kl_util3d::Vector3D::create();
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
            {
                IntArray cs_arg0 = cameraRect_spos[i];
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg1 = cameraRect_gpos.get_Item(i);
                Camera::ConvertScreenToGlobal(cs_arg0, cs_arg1);
            }
            {
                auto cs_target = cameraRectAddress[i];
                auto cs_index = 0;
                auto cs_value = pls::cs::to_int32(
                    GameUtil::RateConvertFloat(require(cameraRect_gpos.get_Item(i))->x_, -450.0f, 450.0f,
                                               0.0f, Map::MAPCHIP_FIELD_WNUM() - 1, true));
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = cameraRectAddress[i];
                auto cs_index = 1;
                auto cs_value = pls::cs::to_int32(
                    GameUtil::RateConvertFloat(require(cameraRect_gpos.get_Item(i))->z_, -900.0f, 900.0f,
                                               0.0f, Map::MAPCHIP_FIELD_HNUM() - 1, true));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        pls::cs::Int32 num2 = cameraRectAddress[0][0] - 1;
        pls::cs::Int32 num3 = cameraRectAddress[2][0] + 1;
        pls::cs::Int32 num4 = cameraRectAddress[1][1] + 1;
        pls::cs::Int32 num5 = cameraRectAddress[3][1] - 2;
        center_spos[0] = Camera::MAP_SCREEN_W1();
        center_spos[1] = Camera::MAP_SCREEN_H1();
        pls::cs::Single num6 = pls::cs::Single((-Map::COAT_BASEPOINT()[0])) - 0.5f;
        pls::cs::Single num7 = pls::cs::Single((-Map::COAT_BASEPOINT()[1])) + 0.5f;
        mapchip_off[0] = pls::cs::to_int32((num7 * 60.0f / 2.0f + num6 * 60.0f / 2.0f));
        mapchip_off[1] = pls::cs::to_int32((num7 * 30.0f / 2.0f - num6 * 30.0f / 2.0f));
        pls::cs::Int32 num8 = 0;
        for (pls::cs::Int32 num9 = num4; num9 >= num5; --num9) {
            for (pls::cs::Int32 j = num2; j < num3; ++j) {
                pls::cs::Ref<data::MapchipMatch> mapchipMatch2 = pls::cs::Ref<data::MapchipMatch>{};
                if (num9 < 0 || num9 >= Map::MAPCHIP_SPOS().length() || j < 0 ||
                    j >= Map::MAPCHIP_SPOS()[0].length()) {
                    screen_pos[0] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = num9 * 60 / 2 + j * 60 / 2 - center_spos[0];
                        auto cs_right = mapchip_off[0];
                        return cs_left + cs_right;
                    }());
                    screen_pos[1] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = num9 * 30 / 2 - j * 30 / 2 - center_spos[1];
                        auto cs_right = mapchip_off[1];
                        return cs_left + cs_right;
                    }());
                    Camera::ConvertScreenToCameraIntArray(screen_pos, camera_pos);
                    num8 = camera_pos[1];
                    mapchipMatch2 = require(apdat_)->mapchipMatch_.get_Item(
                        require(require(apdat_)->stadiumData_.get_Item(stadiumId_))->img_out_);
                    pls::cs::Ref<pls::kairo::Image> image =
                        require(require(apdat_)->resMapChip_)->img.get_Item(require(mapchipMatch2)->img_);
                    if (!(([&]() -> bool {
                            pls::cs::Int32 cs_arg0 = camera_pos[0];
                            pls::cs::Int32 cs_arg1 = ([&]() -> pls::cs::Int32 {
                                auto cs_left = camera_pos[1] + 29;
                                auto cs_right = PLS_API(require(image)->GetHeight());
                                return cs_left - cs_right;
                            }());
                            pls::cs::Int32 cs_arg3 = PLS_API(require(image)->GetHeight());
                            return GameUtil::ChRectHitRect(
                                cs_arg0, cs_arg1, 60, cs_arg3, form::SoccerForm::VIEW_X(),
                                form::SoccerForm::VIEW_Y(), form::SoccerForm::VIEW_W(),
                                form::SoccerForm::VIEW_H(), false);
                        }()))) {
                        continue;
                    }
                    {
                        {
                            pls::cs::Int32 cs_arg3 = require(mapchipMatch2)->img_;
                            pls::cs::Int32 cs_arg4 = require(mapchipMatch2)->seb_;
                            pls::cs::Int32 cs_arg6 = camera_pos[0];
                            pls::cs::Int32 cs_arg7 = camera_pos[1];
                            require(apdat_)->InsertGameObject(4, 0, num8, cs_arg3, cs_arg4, 0, cs_arg6,
                                                              cs_arg7, false, 0);
                        }
                    }
                    continue;
                }
                {
                    IntArray cs_arg0 = Map::MAPCHIP_SPOS()[num9][j];
                    IntArray cs_arg1 = camera_pos;
                    Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
                }
                num8 = camera_pos[1];
                if (Map::MAPCHIP_IMG()[num9][j] == -1) {
                    mapchipMatch2 = require(apdat_)->mapchipMatch_.get_Item(
                        require(require(apdat_)->stadiumData_.get_Item(stadiumId_))->img_out_);
                } else {
                    {
                        IntArray cs_arg0 = Map::MAPCHIP_SPOS()[num9][j];
                        IntArray cs_arg1 = camera_pos;
                        Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
                    }
                    mapchipMatch2 = require(apdat_)->mapchipMatch_.get_Item(Map::MAPCHIP_IMG()[num9][j]);
                    if (PLS_API(kl_unity_util::BitUtil::Check(require(mapchipMatch2)->flag_, 1)) &&
                        !offscreen) {
                        if (!(GameUtil::ChRectHitRect(camera_pos[0], camera_pos[1], 60, 29,
                                                      form::SoccerForm::VIEW_X(), form::SoccerForm::VIEW_Y(),
                                                      form::SoccerForm::VIEW_W(), form::SoccerForm::VIEW_H(),
                                                      false))) {
                            continue;
                        }
                        {
                            Draw_coatLine(g, j, num9, camera_pos[0], camera_pos[1]);
                        }
                        continue;
                    }
                    if (PLS_API(kl_unity_util::BitUtil::Check(require(mapchipMatch2)->flag_, 2))) {
                        mapchipMatch2 = mapchipMatch;
                    }
                }
                pls::cs::Ref<pls::kairo::Image> image2 =
                    require(require(apdat_)->resMapChip_)->img.get_Item(require(mapchipMatch2)->img_);
                if (!(([&]() -> bool {
                        pls::cs::Int32 cs_arg0 = camera_pos[0];
                        pls::cs::Int32 cs_arg1 = ([&]() -> pls::cs::Int32 {
                            auto cs_left = camera_pos[1] + 29;
                            auto cs_right = PLS_API(require(image2)->GetHeight());
                            return cs_left - cs_right;
                        }());
                        pls::cs::Int32 cs_arg3 = PLS_API(require(image2)->GetHeight());
                        return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, 60, cs_arg3,
                                                       form::SoccerForm::VIEW_X(), form::SoccerForm::VIEW_Y(),
                                                       form::SoccerForm::VIEW_W(), form::SoccerForm::VIEW_H(),
                                                       false);
                    }()))) {
                    continue;
                }
                {
                    if (!offscreen) {
                        Draw_coatLine(g, j, num9, camera_pos[0], camera_pos[1]);
                    }
                    {
                        pls::cs::Int32 cs_arg3 = require(mapchipMatch2)->img_;
                        pls::cs::Int32 cs_arg4 = require(mapchipMatch2)->seb_;
                        pls::cs::Int32 cs_arg6 = camera_pos[0];
                        pls::cs::Int32 cs_arg7 = camera_pos[1];
                        require(apdat_)->InsertGameObject(4, 0, num8, cs_arg3, cs_arg4, 0, cs_arg6, cs_arg7,
                                                          false, 0);
                    }
                }
            }
        }
    }
}

// M:game.Map.Draw_lineAndGoal(kairo.unity.ui.Graphics)
void Map::Draw_lineAndGoal(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.Draw_lineAndGoal(kairo.unity.ui.Graphics)", game);
    {
        pls::cs::Int32 num = -1;
        if (!is_null(require(udat_)->ball_)) {
            if (!is_null(require(require(udat_)->ball_)->owner_)) {
                num = require(require(require(udat_)->ball_)->owner_)->team_id_;
            } else if (!is_null(require(require(udat_)->ball_)->lastOwner_)) {
                num = require(require(require(udat_)->ball_)->lastOwner_)->team_id_;
            }
        }
    }
}

// M:game.Map.Draw_copyArea(kairo.unity.ui.Graphics,System.Int32[])
void Map::Draw_copyArea(pls::cs::Ref<pls::kairo::Graphics> g, IntArray draw_rect) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.Draw_copyArea(kairo.unity.ui.Graphics,System.Int32[])",
                     game);
    {
        form::SoccerForm::ensure_initialized();

        bool flag = false;
        pls::cs::Int32 num = 0;
        pls::cs::Int32 originalUnusedSlot2, recoveredUnusedSlot3;
        bool flag2 = false;
        pls::cs::Int32 recoveredUnusedSlot5, recoveredUnusedSlot6, recoveredUnusedSlot7, recoveredUnusedSlot8,
            recoveredUnusedSlot9, recoveredUnusedSlot10, recoveredUnusedSlot11, recoveredUnusedSlot12, width,
            height;
        pls::cs::Ref<data::MapchipMatch> mapchipMatch = Map::mapchipGrounds().get_Item(Map::MAP_GROUND());
        pls::cs::Int32 num2 = 0;
        pls::cs::Int32 num3 = 0;
        for (pls::cs::Int32 num4 = Map::MAPCHIP_FIELD_HNUM() - 1; num4 >= 0; --num4) {
            for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_FIELD_WNUM(); ++i) {
                ++num2;
                if (Map::MAPCHIP_IMG()[num4][i] == -1) {
                    continue;
                }
                pls::cs::Ref<data::MapchipMatch> mapchipMatch2 =
                    require(apdat_)->mapchipMatch_.get_Item(Map::MAPCHIP_IMG()[num4][i]);
                if (PLS_API(kl_unity_util::BitUtil::Check(require(mapchipMatch2)->flag_, 2))) {
                    mapchipMatch2 = mapchipMatch;
                }
                pls::cs::Ref<pls::kairo::Image> image =
                    require(require(apdat_)->resMapChip_)->img.get_Item(require(mapchipMatch2)->img_);
                height = PLS_API(require(image)->GetHeight());
                if (height >= 30) {
                    continue;
                }
                width = PLS_API(require(image)->GetWidth());
                {
                    IntArray cs_arg0 = Map::MAPCHIP_SPOS()[num4][i];
                    IntArray cs_arg1 = camera_pos;
                    Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
                }
                flag = false;
                if (draw_rect[0] != 0 && ([&]() -> bool {
                        pls::cs::Int32 cs_arg0 = camera_pos[0];
                        pls::cs::Int32 cs_arg1 = camera_pos[1] + 29 - height;
                        pls::cs::Int32 cs_arg7 = draw_rect[0];
                        return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, width, height,
                                                       form::SoccerForm::VIEW_X(), form::SoccerForm::VIEW_Y(),
                                                       form::SoccerForm::VIEW_W(), cs_arg7, false);
                    }())) {
                    flag = true;
                }
                if (draw_rect[1] != 0 && !flag) {
                    if ([&]() -> bool {
                            pls::cs::Int32 cs_arg0 = camera_pos[0];
                            pls::cs::Int32 cs_arg1 = camera_pos[1] + 29 - height;
                            pls::cs::Int32 cs_arg4 = form::SoccerForm::VIEW_W() - draw_rect[1];
                            pls::cs::Int32 cs_arg6 = draw_rect[1];
                            return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, width, height, cs_arg4,
                                                           form::SoccerForm::VIEW_Y(), cs_arg6,
                                                           form::SoccerForm::VIEW_H(), false);
                        }()) {
                        flag = true;
                    }
                    if ([&]() -> bool {
                            pls::cs::Int32 cs_arg0 = camera_pos[0];
                            pls::cs::Int32 cs_arg1 = camera_pos[1] + 29 - height;
                            pls::cs::Int32 cs_arg6 = draw_rect[3];
                            return GameUtil::ChRectHitRect(
                                cs_arg0, cs_arg1, width, height, form::SoccerForm::VIEW_X(),
                                form::SoccerForm::VIEW_Y(), cs_arg6, form::SoccerForm::VIEW_H(), false);
                        }()) {
                        flag = true;
                    }
                }
                if (draw_rect[2] != 0 && !flag && ([&]() -> bool {
                        pls::cs::Int32 cs_arg0 = camera_pos[0];
                        pls::cs::Int32 cs_arg1 = camera_pos[1] + 29 - height;
                        pls::cs::Int32 cs_arg5 =
                            form::SoccerForm::VIEW_Y() + form::SoccerForm::VIEW_H() - draw_rect[2];
                        pls::cs::Int32 cs_arg7 = draw_rect[2];
                        return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, width, height,
                                                       form::SoccerForm::VIEW_X(), cs_arg5,
                                                       form::SoccerForm::VIEW_W(), cs_arg7, false);
                    }())) {
                    flag = true;
                }
                if (draw_rect[3] != 0 && !flag && ([&]() -> bool {
                        pls::cs::Int32 cs_arg0 = camera_pos[0];
                        pls::cs::Int32 cs_arg1 = camera_pos[1] + 29 - height;
                        pls::cs::Int32 cs_arg6 = draw_rect[3];
                        return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, width, height,
                                                       form::SoccerForm::VIEW_X(), form::SoccerForm::VIEW_Y(),
                                                       cs_arg6, form::SoccerForm::VIEW_H(), false);
                    }())) {
                    flag = true;
                }
                if (flag) {
                    ++num3;
                    {
                        pls::cs::Int32 cs_arg2 = camera_pos[1];
                        pls::cs::Int32 cs_arg3 = require(mapchipMatch2)->img_;
                        pls::cs::Int32 cs_arg4 = require(mapchipMatch2)->seb_;
                        pls::cs::Int32 cs_arg6 = camera_pos[0];
                        pls::cs::Int32 cs_arg7 = camera_pos[1];
                        require(apdat_)->InsertGameObject(4, 0, cs_arg2, cs_arg3, cs_arg4, 0, cs_arg6,
                                                          cs_arg7, false, 0);
                    }
                    Draw_coatLine(g, i, num4, camera_pos[0], camera_pos[1]);
                }
            }
        }
    }
}

// M:game.Map.Draw_coatLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void Map::Draw_coatLine(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 address_x,
                        pls::cs::Int32 address_y, pls::cs::Int32 dx, pls::cs::Int32 dy) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:game.Map.Draw_coatLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Int32 num = address_x - Map::COAT_BASEPOINT()[0];
        pls::cs::Int32 num2 = address_y - Map::COAT_BASEPOINT()[1];
        if (num < 0) {
            return;
        }
        if (num > Map::MAPCHIP_COAT_WNUM()) {
            return;
        }
        if (num2 < -1) {
            return;
        }
        if (num2 > Map::MAPCHIP_COAT_HNUM()) {
            return;
        }
        Map::old_camera_pos()[0] = camera_pos[0];
        Map::old_camera_pos()[1] = camera_pos[1];
        if (num == 0 && num2 >= 0 && num2 <= Map::MAPCHIP_COAT_HNUM() - 1) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 20, 17, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num == Map::MAPCHIP_COAT_WNUM() && num2 >= 0 && num2 <= Map::MAPCHIP_COAT_HNUM() - 1) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 20, 17, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num2 == -1 && num >= 0 && num <= Map::MAPCHIP_COAT_WNUM() - 1) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num2 == Map::MAPCHIP_COAT_HNUM() - 1 && num >= 0 && num <= Map::MAPCHIP_COAT_WNUM()) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
        if (num == 0 && num2 == 0) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] - 2;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 1;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 14, 11, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num == 0 && num2 == Map::MAPCHIP_COAT_HNUM() - 1) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 11, 8, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num == Map::MAPCHIP_COAT_WNUM() - 1 && num2 == 0) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 2;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 13, 10, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num == Map::MAPCHIP_COAT_WNUM() - 1 && num2 == Map::MAPCHIP_COAT_HNUM() - 1) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] + 2;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 1;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 12, 9, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
        if (num2 == Map::MAPCHIP_COAT_HNUM() / 2 - 1 && num >= 0 && num <= Map::MAPCHIP_COAT_WNUM() - 1) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
        if (num2 == Map::MAPCHIP_COAT_HNUM() / 2 && num == Map::MAPCHIP_COAT_WNUM() / 2 - 1) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 15, 12, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num2 == Map::MAPCHIP_COAT_HNUM() / 2 && num == Map::MAPCHIP_COAT_WNUM() / 2) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 16, 13, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num2 == Map::MAPCHIP_COAT_HNUM() / 2 - 1 && num == Map::MAPCHIP_COAT_WNUM() / 2) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 17, 14, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num2 == Map::MAPCHIP_COAT_HNUM() / 2 - 1 && num == Map::MAPCHIP_COAT_WNUM() / 2 - 1) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 18, 15, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
        if (num == Map::MAPCHIP_COAT_WNUM() / 4 && num2 == 2) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] - 1;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 15;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 20, 17, 0, cs_arg6, cs_arg7, false, 0);
            }
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] + 1;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 15;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num == Map::MAPCHIP_COAT_WNUM() * 3 / 4 && num2 == 2) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] - 1;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 15;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 20, 17, 0, cs_arg6, cs_arg7, false, 0);
            }
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] - 1 + 1 - 30;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 15 - 15;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if ((num == Map::MAPCHIP_COAT_WNUM() / 4 || num == Map::MAPCHIP_COAT_WNUM() * 3 / 4) &&
                   num2 >= 0 && num2 <= 2) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] + 15;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 7;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 20, 17, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num >= Map::MAPCHIP_COAT_WNUM() / 4 && num <= Map::MAPCHIP_COAT_WNUM() * 3 / 4 &&
                   num2 == 2) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] - 15;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 7;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
        if ((num == 4 || num == 7) && num2 == 0) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 20, 17, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
        if (num >= 4 && num <= 6 && num2 == 0) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
        if (num == Map::MAPCHIP_COAT_WNUM() / 4 && num2 == Map::MAPCHIP_COAT_HNUM() - 1 - 2) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] - 1 + 30;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 15 - 15;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 20, 17, 0, cs_arg6, cs_arg7, false, 0);
            }
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] + 1;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 15;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num == Map::MAPCHIP_COAT_WNUM() * 3 / 4 && num2 == Map::MAPCHIP_COAT_HNUM() - 1 - 2) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] - 1 + 30 - 2;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 15 - 15 + 1;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 20, 17, 0, cs_arg6, cs_arg7, false, 0);
            }
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] - 1 + 1 - 30;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 15 - 15;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if ((num == Map::MAPCHIP_COAT_WNUM() / 4 || num == Map::MAPCHIP_COAT_WNUM() * 3 / 4) &&
                   num2 >= Map::MAPCHIP_COAT_HNUM() - 2 && num2 <= Map::MAPCHIP_COAT_HNUM() - 1) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] + 15 - 4;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 7 + 2;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 20, 17, 0, cs_arg6, cs_arg7, false, 0);
            }
        } else if (num >= Map::MAPCHIP_COAT_WNUM() / 4 && num <= Map::MAPCHIP_COAT_WNUM() * 3 / 4 &&
                   num2 == Map::MAPCHIP_COAT_HNUM() - 1 - 2) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] - 15 - 1 + 2;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 7 + 1;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
        if ((num == 4 || num == 7) && num2 == Map::MAPCHIP_COAT_HNUM() - 1) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 20, 17, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
        if (num >= 4 && num <= 6 && num2 == Map::MAPCHIP_COAT_HNUM() - 2) {
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 19, 16, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
        if ((num == Map::MAPCHIP_COAT_WNUM() / 2 - 1 || num == Map::MAPCHIP_COAT_WNUM() / 2) && num2 == 2) {
            if (num == Map::MAPCHIP_COAT_WNUM() / 2) {
                {
                    IntArray cs_arg0 = Map::MAPCHIP_SPOS()[address_y][address_x - 1];
                    IntArray cs_arg1 = camera_pos;
                    Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
                }
            }
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] + 27;
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 21, 18, 0, cs_arg6, cs_arg7, false, 0);
            }
            camera_pos[0] = Map::old_camera_pos()[0];
            camera_pos[1] = Map::old_camera_pos()[1];
        }
        if ((num == Map::MAPCHIP_COAT_WNUM() / 2 || num == Map::MAPCHIP_COAT_WNUM() / 2 + 1) && num2 == 2) {
            if (num == Map::MAPCHIP_COAT_WNUM() / 2) {
                {
                    IntArray cs_arg0 = Map::MAPCHIP_SPOS()[address_y][address_x];
                    IntArray cs_arg1 = camera_pos;
                    Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
                }
            }
            if (num == Map::MAPCHIP_COAT_WNUM() / 2 + 1) {
                {
                    IntArray cs_arg0 = Map::MAPCHIP_SPOS()[address_y][address_x - 1];
                    IntArray cs_arg1 = camera_pos;
                    Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
                }
            }
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] + 27;
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 22, 19, 0, cs_arg6, cs_arg7, false, 0);
            }
            camera_pos[0] = Map::old_camera_pos()[0];
            camera_pos[1] = Map::old_camera_pos()[1];
        }
        if ((num == Map::MAPCHIP_COAT_WNUM() / 2 - 1 || num == Map::MAPCHIP_COAT_WNUM() / 2) &&
            num2 == Map::MAPCHIP_COAT_HNUM() - 3) {
            if (num == Map::MAPCHIP_COAT_WNUM() / 2) {
                {
                    IntArray cs_arg0 = Map::MAPCHIP_SPOS()[address_y][address_x - 1];
                    IntArray cs_arg1 = camera_pos;
                    Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
                }
            }
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] + 1 + 2;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 7 + 1;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 23, 20, 0, cs_arg6, cs_arg7, false, 0);
            }
            camera_pos[0] = Map::old_camera_pos()[0];
            camera_pos[1] = Map::old_camera_pos()[1];
        }
        if ((num == Map::MAPCHIP_COAT_WNUM() / 2 || num == Map::MAPCHIP_COAT_WNUM() / 2 + 1) &&
            num2 == Map::MAPCHIP_COAT_HNUM() - 3) {
            if (num == Map::MAPCHIP_COAT_WNUM() / 2) {
                {
                    IntArray cs_arg0 = Map::MAPCHIP_SPOS()[address_y][address_x];
                    IntArray cs_arg1 = camera_pos;
                    Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
                }
            }
            if (num == Map::MAPCHIP_COAT_WNUM() / 2 + 1) {
                {
                    IntArray cs_arg0 = Map::MAPCHIP_SPOS()[address_y][address_x - 1];
                    IntArray cs_arg1 = camera_pos;
                    Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
                }
            }
            {
                pls::cs::Int32 cs_arg2 = camera_pos[1] + 1;
                pls::cs::Int32 cs_arg6 = camera_pos[0] + 15 + 4 + 2 - 3;
                pls::cs::Int32 cs_arg7 = camera_pos[1] + 7 + 1 - 7;
                require(apdat_)->InsertGameObject(8, 0, cs_arg2, 24, 21, 0, cs_arg6, cs_arg7, false, 0);
            }
            camera_pos[0] = Map::old_camera_pos()[0];
            camera_pos[1] = Map::old_camera_pos()[1];
        }
        camera_pos[0] = Map::old_camera_pos()[0];
        camera_pos[1] = Map::old_camera_pos()[1];
    }
}

// M:game.Map.Draw_miniMap(kairo.unity.ui.Graphics)
void Map::Draw_miniMap(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.Draw_miniMap(kairo.unity.ui.Graphics)", game);
    {
        form::SoccerForm::ensure_initialized();

        pls::cs::Int32 sideSoftWidth, num, num2, num3, num4, num5, num7, num8, num10, num9;
        sideSoftWidth = require(surface::GameView::GetInstance())->GetSideSoftWidth();
        num = 80;
        num2 = 40;
        num3 = form::SoccerForm::VIEW_X() + form::SoccerForm::VIEW_W() - 6 - num - sideSoftWidth;
        num4 = form::SoccerForm::VIEW_Y() + form::SoccerForm::VIEW_H() - 6 - num2;
        num5 = 4;
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(92);
            require(g)->DrawImage(cs_arg0, num3, num4);
        }()));
        for (pls::cs::Int32 num6 = pls::cs::Int32(require(udat_)->teams_.length()) - 1; num6 >= 0; --num6) {
            for (pls::cs::Int32 i = 0; i < require(require(udat_)->teams_.get_Item(num6))->players_.length();
                 ++i) {
                pls::cs::Ref<Player> player =
                    require(require(udat_)->teams_.get_Item(num6))->players_.get_Item(i);
                num7 = pls::cs::to_int32(GameUtil::RateConvertFloat(
                    require(require(player)->pos_)->z_, 900.0f, -900.0f, num3 + num, num3, false));
                num8 = pls::cs::to_int32(GameUtil::RateConvertFloat(
                    require(require(player)->pos_)->x_, -450.0f, 450.0f, num4, num4 + num2, false));
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(93);
                    require(g)->DrawImage(cs_arg0, num7 - 2, num8 - 2, 0 + num6 * 5, 0, 4, 4);
                }()));
            }
        }
        if (form::SoccerForm::SHOW_DEBUGDRAW2() == 1) {
            for (pls::cs::Int32 j = 0; j < require(udat_)->teams_.length(); ++j) {
                if (j == 0) {
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 0))));
                } else {
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 0, 0))));
                }
                num7 = pls::cs::to_int32(
                    GameUtil::RateConvertFloat(require(require(udat_)->teams_.get_Item(j))->fPos_[1], 900.0f,
                                               -900.0f, num3 + num, num3, false));
                num8 = pls::cs::to_int32(
                    GameUtil::RateConvertFloat(require(require(udat_)->teams_.get_Item(j))->fPos_[0], -450.0f,
                                               450.0f, num4, num4 + num2, false));
                num9 = pls::cs::to_int32(GameUtil::RateConvertFloat(
                    require(require(udat_)->teams_.get_Item(j))->fPos_[2], 0.0f, 900.0f, 0.0f, num2, false));
                num10 = pls::cs::to_int32(GameUtil::RateConvertFloat(
                    require(require(udat_)->teams_.get_Item(j))->fPos_[3], 0.0f, 1800.0f, 0.0f, num, false));
                PLS_API(require(g)->DrawRect(num7 - num10 / 2, num8 - num9 / 2, num10, num9));
            }
        }
        pls::cs::Ref<Ball> ball_ = require(udat_)->ball_;
        num7 = pls::cs::to_int32(GameUtil::RateConvertFloat(require(require(ball_)->pos_)->z_, 900.0f,
                                                            -900.0f, num3 + num, num3, false));
        num8 = pls::cs::to_int32(GameUtil::RateConvertFloat(require(require(ball_)->pos_)->x_, -450.0f,
                                                            450.0f, num4, num4 + num2, false));
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resCom2_)->img.get_Item(93);
            require(g)->DrawImage(cs_arg0, num7 - 2, num8 - 2, 10, 0, 4, 4);
        }()));
    }
}

// M:game.Map.Draw_goal(kairo.unity.ui.Graphics)
void Map::Draw_goal(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.Draw_goal(kairo.unity.ui.Graphics)", game);
    {
        pls::cs::Int32 num = -13;
        pls::cs::Int32 num2 = 17;
        pls::cs::Int32 x, y, depth;
        for (pls::cs::Int32 i = 0; i < Map::GOAL1().length(); ++i) {
            {
                IntArray cs_arg0 = Map::GOAL1()[i];
                IntArray cs_arg1 = camera_pos;
                Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
            }
        }
        for (pls::cs::Int32 j = 0; j < Map::GOAL1_PARTS_POS().length(); ++j) {
            x = ([&]() -> pls::cs::Int32 {
                    auto cs_left = camera_pos[0];
                    auto cs_right = Map::GOAL1_PARTS_POS()[j][0];
                    return cs_left + cs_right;
                }()) +
                num;
            y = ([&]() -> pls::cs::Int32 {
                    auto cs_left = camera_pos[1];
                    auto cs_right = Map::GOAL1_PARTS_POS()[j][1];
                    return cs_left + cs_right;
                }()) +
                num2;
            depth = ([&]() -> pls::cs::Int32 {
                auto cs_left = ([&]() -> pls::cs::Int32 {
                                   auto cs_left = camera_pos[1];
                                   auto cs_right = Map::GOAL1_PARTS_POS()[j][1];
                                   return cs_left + cs_right;
                               }()) +
                               num2;
                auto cs_right = Map::GOAL1_PARTS_GRA()[j][2];
                return cs_left + cs_right;
            }());
            {
                pls::cs::Int32 cs_arg3 = Map::GOAL1_PARTS_GRA()[j][0];
                pls::cs::Int32 cs_arg4 = Map::GOAL1_PARTS_GRA()[j][1];
                require(apdat_)->InsertGameObject(8, 0, depth, cs_arg3, cs_arg4, 0, x, y, false, 0);
            }
        }
        num = 12;
        num2 = 1;
        for (pls::cs::Int32 k = 0; k < Map::GOAL2().length(); ++k) {
            {
                IntArray cs_arg0 = Map::GOAL2()[k];
                IntArray cs_arg1 = camera_pos;
                Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
            }
        }
        for (pls::cs::Int32 l = 0; l < Map::GOAL2_PARTS_POS().length(); ++l) {
            x = ([&]() -> pls::cs::Int32 {
                    auto cs_left = camera_pos[0];
                    auto cs_right = Map::GOAL2_PARTS_POS()[l][0];
                    return cs_left + cs_right;
                }()) +
                num;
            y = ([&]() -> pls::cs::Int32 {
                    auto cs_left = camera_pos[1];
                    auto cs_right = Map::GOAL2_PARTS_POS()[l][1];
                    return cs_left + cs_right;
                }()) +
                num2;
            depth = ([&]() -> pls::cs::Int32 {
                auto cs_left = ([&]() -> pls::cs::Int32 {
                                   auto cs_left = camera_pos[1];
                                   auto cs_right = Map::GOAL2_PARTS_POS()[l][1];
                                   return cs_left + cs_right;
                               }()) +
                               num2;
                auto cs_right = Map::GOAL2_PARTS_GRA()[l][2];
                return cs_left + cs_right;
            }());
            {
                pls::cs::Int32 cs_arg3 = Map::GOAL2_PARTS_GRA()[l][0];
                pls::cs::Int32 cs_arg4 = Map::GOAL2_PARTS_GRA()[l][1];
                require(apdat_)->InsertGameObject(8, 0, depth, cs_arg3, cs_arg4, 0, x, y, false, 0);
            }
        }
    }
}

// M:game.Map.Draw_goalPoint(kairo.unity.ui.Graphics)
void Map::Draw_goalPoint(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.Draw_goalPoint(kairo.unity.ui.Graphics)", game);
    {
        for (pls::cs::Int32 i = 0; i < Map::GOAL1_GLOBAL_POS().length(); ++i) {
            {
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Map::GOAL1_GLOBAL_POS().get_Item(i);
                IntArray cs_arg1 = GOAL1_CAMERA_POS[i];
                Camera::ConvertGlobalToCamera(cs_arg0, cs_arg1);
            }
            {
                pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = Map::GOAL2_GLOBAL_POS().get_Item(i);
                IntArray cs_arg1 = GOAL2_CAMERA_POS[i];
                Camera::ConvertGlobalToCamera(cs_arg0, cs_arg1);
            }
        }
        pls::cs::Int32 num = 4;
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 0, 0))));
        for (pls::cs::Int32 j = 0; j < GOAL1_CAMERA_POS.length(); ++j) {
            PLS_API(([&]() -> void {
                pls::cs::Single cs_arg0 = GOAL1_CAMERA_POS[j][0] - num / 2;
                pls::cs::Single cs_arg1 = GOAL1_CAMERA_POS[j][1] - num / 2;
                require(g)->FillRect(cs_arg0, cs_arg1, num, num);
            }()));
            PLS_API(([&]() -> void {
                pls::cs::Single cs_arg0 = GOAL2_CAMERA_POS[j][0] - num / 2;
                pls::cs::Single cs_arg1 = GOAL2_CAMERA_POS[j][1] - num / 2;
                require(g)->FillRect(cs_arg0, cs_arg1, num, num);
            }()));
        }
    }
}

// M:game.Map.Draw_mapobject(kairo.unity.ui.Graphics)
void Map::Draw_mapobject(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.Draw_mapobject(kairo.unity.ui.Graphics)", game);
    {
        form::SoccerForm::ensure_initialized();

        for (pls::cs::Int32 i = 0; i < mapObjects_.length(); ++i) {
            {
                IntArray cs_arg0 = require(mapObjects_.get_Item(i))->spos_;
                IntArray cs_arg1 = camera_pos;
                Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1);
            }
            pls::cs::Ref<pls::kairo::Image> image =
                require(require(apdat_)->resMapObject_)->img.get_Item(require(mapObjects_.get_Item(i))->img_);
            if (!(([&]() -> bool {
                    pls::cs::Int32 cs_arg0 = camera_pos[0];
                    pls::cs::Int32 cs_arg1 = camera_pos[1];
                    pls::cs::Int32 cs_arg2 = PLS_API(require(image)->GetWidth());
                    pls::cs::Int32 cs_arg3 = PLS_API(require(image)->GetHeight());
                    return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3,
                                                   form::SoccerForm::VIEW_X(), form::SoccerForm::VIEW_Y(),
                                                   form::SoccerForm::VIEW_W(), form::SoccerForm::VIEW_H(),
                                                   false);
                }()))) {
                continue;
            }
            {
                auto cs_receiver = apdat_;
                auto cs_left_186 = camera_pos[1];
                auto cs_right_186 = PLS_API(require(image)->GetHeight());
                pls::cs::Int32 cs_arg2 = cs_left_186 + cs_right_186;
                pls::cs::Int32 cs_arg3 = require(mapObjects_.get_Item(i))->img_;
                pls::cs::Int32 cs_arg6 = camera_pos[0];
                pls::cs::Int32 cs_arg7 = camera_pos[1];
                require(cs_receiver)
                    ->InsertGameObject(7, 0, cs_arg2, cs_arg3, 0, 0, cs_arg6, cs_arg7, false, 0);
            }
        }
    }
}

// M:game.Map.GetGoalPartsDepth(System.Int32)
pls::cs::Int32 Map::GetGoalPartsDepth(pls::cs::Int32 parts_id) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:game.Map.GetGoalPartsDepth(System.Int32)", game);
    {
        if ((parts_id == 3)) {
            if ([&]() -> bool {
                    auto cs_left = require(require(require(udat_)->ball_)->pos_)->z_;
                    auto cs_right = require(Map::GOAL1_GLOBAL_POS().get_Item(2))->z_;
                    return cs_left < cs_right;
                }()) {
                return require(require(udat_)->ball_)->camera_pos_[1] - 1;
            }
        } else if (parts_id == 4) {

        } else if (parts_id == 5) {

        } else if (parts_id == 6) {

        } else if (parts_id == 7) {
        }
        return 0;
    }
}
} // namespace game
}
