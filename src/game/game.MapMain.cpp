// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.BaseData.hpp"
#include "data.MapchipMain.hpp"
#include "data.TenantData.hpp"
#include "form.GameForm.hpp"
#include "game.Camera.hpp"
#include "game.GameUtil.hpp"
#include "game.MapMain.hpp"
#include "game.MapObject.hpp"
#include "game.TArea.hpp"
#include "game.TGroupArea.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "main.AppData.hpp"
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

void MapMain::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(apdat_,visitor);pls::cs::trace_value(udat_,visitor);pls::cs::trace_value(mapObjects_,visitor);pls::cs::trace_value(camera_pos,visitor);pls::cs::trace_value(c_poss,visitor);pls::cs::trace_value(TRAIN_COAT_CPOS,visitor);pls::cs::trace_value(hit_rect,visitor);}

static IntArray2 MapMain_COAT_BASEPOINT_storage{};

static IntArray MapMain_DEFAULT_INIT_CAMERA_POS_storage{};

static IntArray2 MapMain_FENCE_DATA_storage{};

static StringArray MapMain_GOAL_PARTS_NAME_storage{};

static IntArray2 MapMain_GOAL1_PARTS_GRA_storage{};

static IntArray2 MapMain_GOAL1_PARTS_POS_storage{};

static IntArray2 MapMain_GOAL2_PARTS_GRA_storage{};

static IntArray2 MapMain_GOAL2_PARTS_POS_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> MapMain_MA_POS_storage{};

static pls::cs::Int32 MapMain_MAP_GROUND_storage{};

static StringArray MapMain_MAP_GROUND_NAME_storage{};

static pls::cs::Ref<data::MapchipMain> MapMain_mapchip_fenceGrass_storage{};

static pls::cs::Int32 MapMain_MAPCHIP_FIELD_HNUM_storage{};

static pls::cs::Int32 MapMain_MAPCHIP_FIELD_WNUM_storage{};

static IntArray2 MapMain_MAPCHIP_IMG_storage{};

static IntArray2 MapMain_MAPCHIP_IMG_SAVE_storage{};

static pls::cs::Ref<data::MapchipMain> MapMain_mapchip_outMap_storage{};

static IntArray3 MapMain_MAPCHIP_SPOS_storage{};

static pls::cs::Ref<data::MapchipMain> MapMain_mapchip_tree_storage{};

static pls::cs::Ref<data::MapchipMain> MapMain_mapchip_vacant_storage{};

static pls::cs::Array<pls::cs::Ref<data::MapchipMain>> MapMain_mapchipGrounds_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> MapMain_MOVE_POINT_storage{};

static IntArray2 MapMain_SET_TMCHP_OFF_storage{};

static pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>> MapMain_TRAIN_COAT_BLOCK_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> MapMain_TRAIN_COAT_GPOS_storage{};

static pls::cs::Single MapMain_TRAIN_COAT_H_storage{};

static pls::cs::Single MapMain_TRAIN_COAT_W_storage{};

static PLS_NOINLINE void cs_init_7c0f60cfdd8cf265_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(MapMain_COAT_BASEPOINT_storage,visitor);pls::cs::trace_value(MapMain_DEFAULT_INIT_CAMERA_POS_storage,visitor);pls::cs::trace_value(MapMain_FENCE_DATA_storage,visitor);pls::cs::trace_value(MapMain_GOAL_PARTS_NAME_storage,visitor);pls::cs::trace_value(MapMain_GOAL1_PARTS_GRA_storage,visitor);pls::cs::trace_value(MapMain_GOAL1_PARTS_POS_storage,visitor);pls::cs::trace_value(MapMain_GOAL2_PARTS_GRA_storage,visitor);pls::cs::trace_value(MapMain_GOAL2_PARTS_POS_storage,visitor);pls::cs::trace_value(MapMain_MA_POS_storage,visitor);pls::cs::trace_value(MapMain_MAP_GROUND_storage,visitor);pls::cs::trace_value(MapMain_MAP_GROUND_NAME_storage,visitor);pls::cs::trace_value(MapMain_mapchip_fenceGrass_storage,visitor);pls::cs::trace_value(MapMain_MAPCHIP_FIELD_HNUM_storage,visitor);pls::cs::trace_value(MapMain_MAPCHIP_FIELD_WNUM_storage,visitor);pls::cs::trace_value(MapMain_MAPCHIP_IMG_storage,visitor);pls::cs::trace_value(MapMain_MAPCHIP_IMG_SAVE_storage,visitor);pls::cs::trace_value(MapMain_mapchip_outMap_storage,visitor);pls::cs::trace_value(MapMain_MAPCHIP_SPOS_storage,visitor);pls::cs::trace_value(MapMain_mapchip_tree_storage,visitor);pls::cs::trace_value(MapMain_mapchip_vacant_storage,visitor);pls::cs::trace_value(MapMain_mapchipGrounds_storage,visitor);pls::cs::trace_value(MapMain_MOVE_POINT_storage,visitor);pls::cs::trace_value(MapMain_SET_TMCHP_OFF_storage,visitor);pls::cs::trace_value(MapMain_TRAIN_COAT_BLOCK_storage,visitor);pls::cs::trace_value(MapMain_TRAIN_COAT_GPOS_storage,visitor);pls::cs::trace_value(MapMain_TRAIN_COAT_H_storage,visitor);pls::cs::trace_value(MapMain_TRAIN_COAT_W_storage,visitor);});static pls::cs::TypeInitState state;state.run("game.MapMain",flag,[](){
MapMain_DEFAULT_INIT_CAMERA_POS_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.DEFAULT_INIT_CAMERA_POS",[&](){return IntArray::from({930, -190});});
MapMain_TRAIN_COAT_W_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.TRAIN_COAT_W",[&](){return 240.0f;});
MapMain_TRAIN_COAT_H_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.TRAIN_COAT_H",[&](){return 720.0f;});
MapMain_GOAL1_PARTS_POS_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.GOAL1_PARTS_POS",[&](){return IntArray2::from({IntArray::from({-21, 10}), IntArray::from({1, 21}), IntArray::from({-14, -13}), IntArray::from({8, -2}), IntArray::from({-30, -1}), IntArray::from({16, 22})});});
MapMain_GOAL2_PARTS_POS_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.GOAL2_PARTS_POS",[&](){return IntArray2::from({IntArray::from({-3, -6}), IntArray::from({19, 5}), IntArray::from({-8, -20}), IntArray::from({12, -10}), IntArray::from({-19, -11}), IntArray::from({26, 11})});});
MapMain_GOAL1_PARTS_GRA_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.GOAL1_PARTS_GRA",[&](){return IntArray2::from({IntArray::from({43, 39, 0, 28, 36, 1, -1}), IntArray::from({43, 39, 0, 28, 36, 1, -1}), IntArray::from({45, 41, 10, 30, 17, 1, -1}), IntArray::from({45, 41, 10, 30, 17, 1, -1}), IntArray::from({44, 40, -5, 15, 29, -1, 1}), IntArray::from({44, 40, 0, 15, 29, 1, -1})});});
MapMain_GOAL2_PARTS_GRA_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.GOAL2_PARTS_GRA",[&](){return IntArray2::from({IntArray::from({46, 42, -6, 29, 31, -1, 1}), IntArray::from({46, 42, -10, 29, 31, -1, 1}), IntArray::from({45, 41, 18, 27, 18, 1, -1}), IntArray::from({45, 41, 18, 27, 18, 1, -1}), IntArray::from({47, 43, 0, 16, 26, -1, 1}), IntArray::from({47, 43, 0, 16, 26, 1, -1})});});
MapMain_GOAL_PARTS_NAME_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.GOAL_PARTS_NAME",[&](){return StringArray::make(0);});
MapMain_MAP_GROUND_NAME_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.MAP_GROUND_NAME",[&](){return StringArray::make(0);});
MapMain_FENCE_DATA_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.FENCE_DATA",[&](){return IntArray2::from({IntArray::from({30, -46, 46}), IntArray::from({30, -46, 47}), IntArray::from({0, -46, 48}), IntArray::from({0, -46, 49}), IntArray::from({30, -31, 50}), IntArray::from({30, -45, 51}), IntArray::from({30, -45, 52}), IntArray::from({30, -45, 53}), IntArray::from({1, -9, 54}), IntArray::from({5, -2, 55})});});
MapMain_SET_TMCHP_OFF_storage = pls::cs::evaluate_type_initializer_field("F:game.MapMain.SET_TMCHP_OFF",[&](){return IntArray2::from({IntArray::make(2), IntArray::from({0, -1}), IntArray::from({1, 0}), IntArray::from({1, -1})});});

});}

void MapMain::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_7c0f60cfdd8cf265_slow(flag);}

IntArray2& MapMain::COAT_BASEPOINT(){MapMain::ensure_initialized();return MapMain_COAT_BASEPOINT_storage;}

IntArray& MapMain::DEFAULT_INIT_CAMERA_POS(){MapMain::ensure_initialized();return MapMain_DEFAULT_INIT_CAMERA_POS_storage;}

IntArray2& MapMain::FENCE_DATA(){MapMain::ensure_initialized();return MapMain_FENCE_DATA_storage;}

StringArray& MapMain::GOAL_PARTS_NAME(){MapMain::ensure_initialized();return MapMain_GOAL_PARTS_NAME_storage;}

IntArray2& MapMain::GOAL1_PARTS_GRA(){MapMain::ensure_initialized();return MapMain_GOAL1_PARTS_GRA_storage;}

IntArray2& MapMain::GOAL1_PARTS_POS(){MapMain::ensure_initialized();return MapMain_GOAL1_PARTS_POS_storage;}

IntArray2& MapMain::GOAL2_PARTS_GRA(){MapMain::ensure_initialized();return MapMain_GOAL2_PARTS_GRA_storage;}

IntArray2& MapMain::GOAL2_PARTS_POS(){MapMain::ensure_initialized();return MapMain_GOAL2_PARTS_POS_storage;}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& MapMain::MA_POS(){MapMain::ensure_initialized();return MapMain_MA_POS_storage;}

pls::cs::Int32& MapMain::MAP_GROUND(){MapMain::ensure_initialized();return MapMain_MAP_GROUND_storage;}

StringArray& MapMain::MAP_GROUND_NAME(){MapMain::ensure_initialized();return MapMain_MAP_GROUND_NAME_storage;}

pls::cs::Ref<data::MapchipMain>& MapMain::mapchip_fenceGrass(){MapMain::ensure_initialized();return MapMain_mapchip_fenceGrass_storage;}

pls::cs::Int32& MapMain::MAPCHIP_FIELD_HNUM(){MapMain::ensure_initialized();return MapMain_MAPCHIP_FIELD_HNUM_storage;}

pls::cs::Int32& MapMain::MAPCHIP_FIELD_WNUM(){MapMain::ensure_initialized();return MapMain_MAPCHIP_FIELD_WNUM_storage;}

IntArray2& MapMain::MAPCHIP_IMG(){MapMain::ensure_initialized();return MapMain_MAPCHIP_IMG_storage;}

IntArray2& MapMain::MAPCHIP_IMG_SAVE(){MapMain::ensure_initialized();return MapMain_MAPCHIP_IMG_SAVE_storage;}

pls::cs::Ref<data::MapchipMain>& MapMain::mapchip_outMap(){MapMain::ensure_initialized();return MapMain_mapchip_outMap_storage;}

IntArray3& MapMain::MAPCHIP_SPOS(){MapMain::ensure_initialized();return MapMain_MAPCHIP_SPOS_storage;}

pls::cs::Ref<data::MapchipMain>& MapMain::mapchip_tree(){MapMain::ensure_initialized();return MapMain_mapchip_tree_storage;}

pls::cs::Ref<data::MapchipMain>& MapMain::mapchip_vacant(){MapMain::ensure_initialized();return MapMain_mapchip_vacant_storage;}

pls::cs::Array<pls::cs::Ref<data::MapchipMain>>& MapMain::mapchipGrounds(){MapMain::ensure_initialized();return MapMain_mapchipGrounds_storage;}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& MapMain::MOVE_POINT(){MapMain::ensure_initialized();return MapMain_MOVE_POINT_storage;}

IntArray2& MapMain::SET_TMCHP_OFF(){MapMain::ensure_initialized();return MapMain_SET_TMCHP_OFF_storage;}

pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>>& MapMain::TRAIN_COAT_BLOCK(){MapMain::ensure_initialized();return MapMain_TRAIN_COAT_BLOCK_storage;}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& MapMain::TRAIN_COAT_GPOS(){MapMain::ensure_initialized();return MapMain_TRAIN_COAT_GPOS_storage;}

pls::cs::Single& MapMain::TRAIN_COAT_H(){MapMain::ensure_initialized();return MapMain_TRAIN_COAT_H_storage;}

pls::cs::Single& MapMain::TRAIN_COAT_W(){MapMain::ensure_initialized();return MapMain_TRAIN_COAT_W_storage;}

void MapMain::create_init(pls::cs::Ref<MapMain> self) {
MapMain::ensure_initialized();
self->camera_pos = IntArray::make(2);
self->c_poss = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2}));});
self->TRAIN_COAT_CPOS = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2}));});
self->hit_rect = IntArray::make(4);
PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.#ctor",game);
{
self->apdat_ = main::AppData::GetInstance();
self->udat_ = UserData::GetInstance();
MapMain::MA_POS() = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(8);
for (pls::cs::Int32 i = 0; i < MapMain::MA_POS().length(); ++i) {
{ auto cs_target = MapMain::MA_POS(); auto cs_index = i; auto cs_value = kl_util3d::Vector3D::create();cs_target.set_Item(cs_index,cs_value);}
}
}

}

// M:game.MapMain.#ctor
pls::cs::Ref<MapMain> MapMain::create() {
MapMain::ensure_initialized();
 auto self = pls::cs::make_ref<MapMain>(); MapMain::create_init(self); return self; 
}

// M:game.MapMain.Init
void MapMain::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.Init",game);
{
MapMain::MAP_GROUND() = 0;
}
}

// M:game.MapMain.CreateMap
void MapMain::CreateMap() {
MapMain::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.CreateMap",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
pls::cs::run_finally([&]() {try {
recordStore = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::RecordStore::OpenRecordStore(1);});
jarInflater = kl_unity_util::JarInflater::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->ReadRecord(2);}));
{ auto cs_target = instance; auto cs_value = MapMain::create(); require(cs_target)->mapMain_ = cs_value; }
require(require(instance)->mapMain_)->Init();
pls::cs::String text = literal(u"test");
{ auto cs_receiver = require(instance)->mapMain_; ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jarInflater)->GetData(pls::cs::String::concat(text, literal(u".gmap")));}); require(cs_receiver)->LoadMap(cs_arg0); }
} catch(const pls::cs::Exception& cs_caught_69) {auto ex=pls::cs::capture_exception(cs_caught_69);
{
pls::cs::throw_exception(ex);
}}}, [&]() {
if (!is_null(jarInflater)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jarInflater)->Close();});
}
jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
if (!is_null(recordStore)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->CloseRecordStore();});
}
recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
});
}

}

// M:game.MapMain.LoadMap(System.Byte[])
void MapMain::LoadMap(ByteArray source) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.LoadMap(System.Byte[])",game);
{
pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
pls::cs::run_finally([&]() {try {
byteArrayInputStream = kl_io::ByteArrayInputStream::create(source);
MapMain::MAPCHIP_FIELD_WNUM() = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));
MapMain::MAPCHIP_FIELD_HNUM() = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));
MapMain::MAPCHIP_IMG_SAVE() = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({MapMain::MAPCHIP_FIELD_HNUM(), MapMain::MAPCHIP_FIELD_WNUM()}));});
MapMain::MAPCHIP_IMG() = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({MapMain::MAPCHIP_FIELD_HNUM(), MapMain::MAPCHIP_FIELD_WNUM()}));});
for (pls::cs::Int32 num = MapMain::MAPCHIP_FIELD_HNUM() - 1; num >= 0; --num) {
for (pls::cs::Int32 i = 0; i < MapMain::MAPCHIP_FIELD_WNUM(); ++i) {
{ auto cs_target = MapMain::MAPCHIP_IMG_SAVE()[num]; auto cs_index = i; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));cs_target.set_Item(cs_index,cs_value);}
}
}
for (pls::cs::Int32 num2 = MapMain::MAPCHIP_FIELD_HNUM() - 1; num2 >= 0; --num2) {
for (pls::cs::Int32 j = 0; j < MapMain::MAPCHIP_FIELD_WNUM(); ++j) {
MapMain::MAPCHIP_IMG()[num2][j] = MapMain::MAPCHIP_IMG_SAVE()[num2][j];
}
}
MapMain::COAT_BASEPOINT() = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({8, 2}));});
for (pls::cs::Int32 k = 0; k < MapMain::COAT_BASEPOINT().length(); ++k) {
{ auto cs_target = MapMain::COAT_BASEPOINT()[k]; auto cs_index = 0; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = MapMain::COAT_BASEPOINT()[k]; auto cs_index = 1; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));cs_target.set_Item(cs_index,cs_value);}
MapMain::COAT_BASEPOINT()[k][1] = MapMain::MAPCHIP_FIELD_HNUM() - 1 - MapMain::COAT_BASEPOINT()[k][1];
}
MapMain::MOVE_POINT() = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(10);
for (pls::cs::Int32 l = 0; l < MapMain::MOVE_POINT().length(); ++l) {
{ auto cs_target = MapMain::MOVE_POINT(); auto cs_index = l; auto cs_value = kl_util3d::Vector3D::create();cs_target.set_Item(cs_index,cs_value);}
}
{ pls::cs::Int32 cs_arg0 = MapMain::COAT_BASEPOINT()[4][0]; pls::cs::Int32 cs_arg1 = MapMain::COAT_BASEPOINT()[4][1]; pls::cs::Ref<kl_util3d::Vector3D> cs_arg2 = MapMain::MOVE_POINT().get_Item(0); Camera::ConvertAddressToGlobal(cs_arg0, cs_arg1, cs_arg2); }
{ pls::cs::Int32 cs_arg0 = MapMain::COAT_BASEPOINT()[5][0]; pls::cs::Int32 cs_arg1 = MapMain::COAT_BASEPOINT()[5][1]; pls::cs::Ref<kl_util3d::Vector3D> cs_arg2 = MapMain::MOVE_POINT().get_Item(1); Camera::ConvertAddressToGlobal(cs_arg0, cs_arg1, cs_arg2); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::MOVE_POINT().get_Item(3); pls::cs::Single cs_arg0 = require(MapMain::MOVE_POINT().get_Item(1))->x_; pls::cs::Single cs_arg1 = require(MapMain::MOVE_POINT().get_Item(1))->y_; pls::cs::Single cs_arg2 = require(MapMain::MOVE_POINT().get_Item(1))->z_ + 270.0f; require(cs_receiver)->Set(cs_arg0, cs_arg1, cs_arg2); }());});
{ auto cs_target = MapMain::MOVE_POINT().get_Item(0); auto cs_old = require(cs_target)->z_; auto cs_rhs = 1800.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->z_ = cs_value; }
{ auto cs_target = MapMain::MOVE_POINT().get_Item(1); auto cs_old = require(cs_target)->z_; auto cs_rhs = 1800.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->z_ = cs_value; }
{ auto cs_target = MapMain::MOVE_POINT().get_Item(3); auto cs_old = require(cs_target)->z_; auto cs_rhs = 1800.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->z_ = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::MOVE_POINT().get_Item(5); pls::cs::Single cs_arg0 = require(MapMain::MOVE_POINT().get_Item(3))->x_ + 200.0f; pls::cs::Single cs_arg2 = require(MapMain::MOVE_POINT().get_Item(3))->z_; require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::MOVE_POINT().get_Item(6); pls::cs::Single cs_arg0 = require(MapMain::MOVE_POINT().get_Item(3))->x_ - 200.0f; pls::cs::Single cs_arg2 = require(MapMain::MOVE_POINT().get_Item(3))->z_; require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::MOVE_POINT().get_Item(7); pls::cs::Single cs_arg0 = require(MapMain::MOVE_POINT().get_Item(3))->x_; pls::cs::Single cs_arg2 = require(MapMain::MOVE_POINT().get_Item(3))->z_ + 200.0f; require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
{ auto cs_target = MapMain::MOVE_POINT().get_Item(0); auto cs_old = require(cs_target)->z_; auto cs_rhs = -50.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->z_ = cs_value; }
{ auto cs_target = MapMain::MOVE_POINT().get_Item(1); auto cs_old = require(cs_target)->z_; auto cs_rhs = -50.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->z_ = cs_value; }
{ auto cs_target = MapMain::MOVE_POINT().get_Item(1); auto cs_old = require(cs_target)->x_; auto cs_rhs = -20.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->x_ = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::MOVE_POINT().get_Item(2); pls::cs::Single cs_arg0 = require(MapMain::MOVE_POINT().get_Item(1))->x_ + 20.0f; pls::cs::Single cs_arg1 = require(MapMain::MOVE_POINT().get_Item(1))->y_; pls::cs::Single cs_arg2 = require(MapMain::MOVE_POINT().get_Item(1))->z_; require(cs_receiver)->Set(cs_arg0, cs_arg1, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::MOVE_POINT().get_Item(4); pls::cs::Single cs_arg0 = require(MapMain::MOVE_POINT().get_Item(3))->x_ + 20.0f; pls::cs::Single cs_arg1 = require(MapMain::MOVE_POINT().get_Item(3))->y_; pls::cs::Single cs_arg2 = require(MapMain::MOVE_POINT().get_Item(3))->z_; require(cs_receiver)->Set(cs_arg0, cs_arg1, cs_arg2); }());});
{ pls::cs::Int32 cs_arg0 = MapMain::COAT_BASEPOINT()[6][0]; pls::cs::Int32 cs_arg1 = MapMain::COAT_BASEPOINT()[6][1]; pls::cs::Ref<kl_util3d::Vector3D> cs_arg2 = MapMain::MOVE_POINT().get_Item(8); Camera::ConvertAddressToGlobal(cs_arg0, cs_arg1, cs_arg2); }
{ pls::cs::Int32 cs_arg0 = MapMain::COAT_BASEPOINT()[7][0]; pls::cs::Int32 cs_arg1 = MapMain::COAT_BASEPOINT()[7][1]; pls::cs::Ref<kl_util3d::Vector3D> cs_arg2 = MapMain::MOVE_POINT().get_Item(9); Camera::ConvertAddressToGlobal(cs_arg0, cs_arg1, cs_arg2); }
{ auto cs_target = MapMain::MOVE_POINT().get_Item(8); auto cs_old = require(cs_target)->z_; auto cs_rhs = 1800.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->z_ = cs_value; }
{ auto cs_target = MapMain::MOVE_POINT().get_Item(9); auto cs_old = require(cs_target)->z_; auto cs_rhs = 1800.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->z_ = cs_value; }
MapMain::TRAIN_COAT_GPOS() = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
pls::cs::Single originalUnusedSlot7;
for (pls::cs::Int32 m = 0; m < MapMain::TRAIN_COAT_GPOS().length(); ++m) {
{ auto cs_target = MapMain::TRAIN_COAT_GPOS(); auto cs_index = m; auto cs_value = kl_util3d::Vector3D::create();cs_target.set_Item(cs_index,cs_value);}
}
{ pls::cs::Int32 cs_arg0 = MapMain::COAT_BASEPOINT()[0][0]; pls::cs::Int32 cs_arg1 = MapMain::COAT_BASEPOINT()[0][1]; pls::cs::Ref<kl_util3d::Vector3D> cs_arg2 = MapMain::TRAIN_COAT_GPOS().get_Item(0); Camera::ConvertAddressToGlobal(cs_arg0, cs_arg1, cs_arg2); }
{ auto cs_target = MapMain::TRAIN_COAT_GPOS().get_Item(0); auto cs_old = require(cs_target)->z_; auto cs_rhs = 1800.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->z_ = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::TRAIN_COAT_GPOS().get_Item(1); pls::cs::Single cs_arg0 = require(MapMain::TRAIN_COAT_GPOS().get_Item(0))->x_ + MapMain::TRAIN_COAT_W(); pls::cs::Single cs_arg2 = require(MapMain::TRAIN_COAT_GPOS().get_Item(0))->z_; require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::TRAIN_COAT_GPOS().get_Item(2); pls::cs::Single cs_arg0 = require(MapMain::TRAIN_COAT_GPOS().get_Item(0))->x_ + MapMain::TRAIN_COAT_W(); pls::cs::Single cs_arg2 = require(MapMain::TRAIN_COAT_GPOS().get_Item(0))->z_ - MapMain::TRAIN_COAT_H(); require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::TRAIN_COAT_GPOS().get_Item(3); pls::cs::Single cs_arg0 = require(MapMain::TRAIN_COAT_GPOS().get_Item(0))->x_; pls::cs::Single cs_arg2 = require(MapMain::TRAIN_COAT_GPOS().get_Item(0))->z_ - MapMain::TRAIN_COAT_H(); require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
MapMain::TRAIN_COAT_BLOCK() = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>>>(IntArray::from({4, 2}));});
for (pls::cs::Int32 n = 0; n < MapMain::TRAIN_COAT_BLOCK().length(); ++n) {
{ auto cs_target = MapMain::TRAIN_COAT_BLOCK()[n]; auto cs_index = 0; auto cs_value = kl_util3d::Vector3D::create();cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = MapMain::TRAIN_COAT_BLOCK()[n]; auto cs_index = 1; auto cs_value = kl_util3d::Vector3D::create();cs_target.set_Item(cs_index,cs_value);}
}
{ pls::cs::Int32 cs_arg0 = MapMain::COAT_BASEPOINT()[0][0]; pls::cs::Int32 cs_arg1 = MapMain::COAT_BASEPOINT()[0][1]; pls::cs::Ref<kl_util3d::Vector3D> cs_arg2 = MapMain::TRAIN_COAT_BLOCK()[0].get_Item(0); Camera::ConvertAddressToGlobal(cs_arg0, cs_arg1, cs_arg2); }
{ pls::cs::Int32 cs_arg0 = MapMain::COAT_BASEPOINT()[2][0]; pls::cs::Int32 cs_arg1 = MapMain::COAT_BASEPOINT()[2][1]; pls::cs::Ref<kl_util3d::Vector3D> cs_arg2 = MapMain::TRAIN_COAT_BLOCK()[2].get_Item(0); Camera::ConvertAddressToGlobal(cs_arg0, cs_arg1, cs_arg2); }
{ auto cs_target = MapMain::TRAIN_COAT_BLOCK()[0].get_Item(0); auto cs_old = require(cs_target)->z_; auto cs_rhs = 1800.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->z_ = cs_value; }
{ auto cs_target = MapMain::TRAIN_COAT_BLOCK()[2].get_Item(0); auto cs_old = require(cs_target)->z_; auto cs_rhs = 1800.0f; pls::cs::Single cs_value = cs_old + cs_rhs; require(cs_target)->z_ = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::TRAIN_COAT_BLOCK()[0].get_Item(1); pls::cs::Single cs_arg0 = require(MapMain::TRAIN_COAT_BLOCK()[0].get_Item(0))->x_ + MapMain::TRAIN_COAT_W(); pls::cs::Single cs_arg2 = require(MapMain::TRAIN_COAT_BLOCK()[0].get_Item(0))->z_ - MapMain::TRAIN_COAT_H() / 2.0f; require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::TRAIN_COAT_BLOCK()[1].get_Item(0); pls::cs::Single cs_arg0 = require(MapMain::TRAIN_COAT_BLOCK()[0].get_Item(0))->x_; pls::cs::Single cs_arg2 = require(MapMain::TRAIN_COAT_BLOCK()[0].get_Item(0))->z_ - MapMain::TRAIN_COAT_H() / 2.0f; require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::TRAIN_COAT_BLOCK()[1].get_Item(1); pls::cs::Single cs_arg0 = require(MapMain::TRAIN_COAT_BLOCK()[0].get_Item(0))->x_ + MapMain::TRAIN_COAT_W(); pls::cs::Single cs_arg2 = require(MapMain::TRAIN_COAT_BLOCK()[0].get_Item(0))->z_ - MapMain::TRAIN_COAT_H(); require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::TRAIN_COAT_BLOCK()[2].get_Item(1); pls::cs::Single cs_arg0 = require(MapMain::TRAIN_COAT_BLOCK()[2].get_Item(0))->x_ + MapMain::TRAIN_COAT_W(); pls::cs::Single cs_arg2 = require(MapMain::TRAIN_COAT_BLOCK()[2].get_Item(0))->z_ - MapMain::TRAIN_COAT_H() / 2.0f; require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::TRAIN_COAT_BLOCK()[3].get_Item(0); pls::cs::Single cs_arg0 = require(MapMain::TRAIN_COAT_BLOCK()[2].get_Item(0))->x_; pls::cs::Single cs_arg2 = require(MapMain::TRAIN_COAT_BLOCK()[2].get_Item(0))->z_ - MapMain::TRAIN_COAT_H() / 2.0f; require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = MapMain::TRAIN_COAT_BLOCK()[3].get_Item(1); pls::cs::Single cs_arg0 = require(MapMain::TRAIN_COAT_BLOCK()[2].get_Item(0))->x_ + MapMain::TRAIN_COAT_W(); pls::cs::Single cs_arg2 = require(MapMain::TRAIN_COAT_BLOCK()[2].get_Item(0))->z_ - MapMain::TRAIN_COAT_H(); require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
MapMain::MAPCHIP_SPOS() = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray3>(IntArray::from({MapMain::MAPCHIP_FIELD_HNUM(), MapMain::MAPCHIP_FIELD_WNUM(), 2}));});
for (pls::cs::Int32 num3 = pls::cs::Int32(MapMain::MAPCHIP_SPOS().length()) - 1; num3 >= 0; --num3) {
for (pls::cs::Int32 num4 = 0; num4 < MapMain::MAPCHIP_SPOS()[num3].length(); ++num4) {
MapMain::MAPCHIP_SPOS()[num3][num4][0] = num3 * 60 / 2 + num4 * 60 / 2;
MapMain::MAPCHIP_SPOS()[num3][num4][1] = num3 * 30 / 2 - num4 * 30 / 2;
}
}
pls::cs::Int32 num5 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));
IntArray2 array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({num5, 3}));});
for (pls::cs::Int32 num6 = 0; num6 < array.length(); ++num6) {
{ auto cs_target = array[num6]; auto cs_index = 0; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = array[num6]; auto cs_index = 1; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = array[num6]; auto cs_index = 2; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));cs_target.set_Item(cs_index,cs_value);}
array[num6][1] = MapMain::MAPCHIP_FIELD_HNUM() - 1 - array[num6][1];
require(require(udat_)->tenants_.get_Item(num6))->address_[0] = array[num6][0];
require(require(udat_)->tenants_.get_Item(num6))->address_[1] = array[num6][1];
}
pls::cs::Int32 num7 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));
mapObjects_ = pls::cs::Array<pls::cs::Ref<MapObject>>::make(num7);
for (pls::cs::Int32 num8 = 0; num8 < mapObjects_.length(); ++num8) {
{ auto cs_target = mapObjects_; auto cs_index = num8; auto cs_value = MapObject::create();cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = mapObjects_.get_Item(num8); pls::cs::Int32 cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);})); require(cs_target)->img_ = cs_value; }
{ auto cs_target = require(mapObjects_.get_Item(num8))->spos_; auto cs_index = 0; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = require(mapObjects_.get_Item(num8))->spos_; auto cs_index = 1; auto cs_value = -pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);}));cs_target.set_Item(cs_index,cs_value);}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(byteArrayInputStream)->Close();});
} catch(const pls::cs::Exception& cs_caught_71) {auto t=pls::cs::capture_exception(cs_caught_71);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}}}, [&]() {
try {
if (!is_null(byteArrayInputStream)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(byteArrayInputStream)->Close();});
}
byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
} catch(const pls::cs::Exception& cs_caught_70) {auto t2=pls::cs::capture_exception(cs_caught_70);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t2);});
}}
});
UpdateTenantMapcip();
}
}

// M:game.MapMain.Load2
void MapMain::Load2() {
MapMain::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.Load2",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
MapMain::mapchipGrounds() = pls::cs::Array<pls::cs::Ref<data::MapchipMain>>::make(5);
IntArray array = IntArray::from({8, 16, 32, 64});
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
for (pls::cs::Int32 j = 0; j < require(instance)->mapchipMain_.length(); ++j) {
pls::cs::Ref<data::MapchipMain> mapchipMain = require(instance)->mapchipMain_.get_Item(j);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Int32 cs_arg0 = require(mapchipMain)->flag_; pls::cs::Int32 cs_arg1 = array[i]; return kl_unity_util::BitUtil::Check(cs_arg0, cs_arg1); }());})) {
MapMain::mapchipGrounds().set_Item(i, mapchipMain);
break;
}
}
}
MapMain::mapchip_outMap() = pls::cs::Ref<data::MapchipMain>{};
for (pls::cs::Int32 k = 0; k < require(instance)->mapchipMain_.length(); ++k) {
pls::cs::Ref<data::MapchipMain> mapchipMain2 = require(instance)->mapchipMain_.get_Item(k);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(mapchipMain2)->flag_, 2);})) {
MapMain::mapchip_outMap() = mapchipMain2;
break;
}
}
for (pls::cs::Int32 l = 0; l < require(instance)->mapchipMain_.length(); ++l) {
pls::cs::Ref<data::MapchipMain> mapchipMain3 = require(instance)->mapchipMain_.get_Item(l);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(mapchipMain3)->flag_, 128);})) {
MapMain::mapchip_vacant() = mapchipMain3;
break;
}
}
for (pls::cs::Int32 m = 0; m < require(instance)->mapchipMain_.length(); ++m) {
pls::cs::Ref<data::MapchipMain> mapchipMain4 = require(instance)->mapchipMain_.get_Item(m);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(mapchipMain4)->flag_, 256);})) {
MapMain::mapchip_tree() = mapchipMain4;
break;
}
}
for (pls::cs::Int32 n = 0; n < require(instance)->mapchipMain_.length(); ++n) {
pls::cs::Ref<data::MapchipMain> mapchipMain5 = require(instance)->mapchipMain_.get_Item(n);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(mapchipMain5)->flag_, 512);})) {
MapMain::mapchip_fenceGrass() = mapchipMain5;
break;
}
}
}

}

// M:game.MapMain.Draw(kairo.unity.ui.Graphics,System.Boolean)
void MapMain::Draw(pls::cs::Ref<pls::kairo::Graphics> g,bool offscreen) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.Draw(kairo.unity.ui.Graphics,System.Boolean)",game);
{
if (offscreen) {
Draw_coat(g, offscreen);
} else {
Draw_coat(g, offscreen);
}
++temp_frame;
}
}

// M:game.MapMain.Draw_coat(kairo.unity.ui.Graphics,System.Boolean)
void MapMain::Draw_coat(pls::cs::Ref<pls::kairo::Graphics> g,bool offscreen) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.Draw_coat(kairo.unity.ui.Graphics,System.Boolean)",game);
{
form::GameForm::ensure_initialized();

pls::cs::Ref<data::MapchipMain> mapchipMain = pls::cs::Ref<data::MapchipMain>{};
if (MapMain::MAP_GROUND() == 0) {
mapchipMain = pls::cs::Ref<data::MapchipMain>{};
} else {
mapchipMain = MapMain::mapchipGrounds().get_Item(MapMain::MAP_GROUND() - 1);
}
pls::cs::Int32 num2;
for (pls::cs::Int32 num = MapMain::MAPCHIP_FIELD_HNUM() - 1; num >= 0; --num) {
for (pls::cs::Int32 i = 0; i < MapMain::MAPCHIP_FIELD_WNUM(); ++i) {
num2 = -1;
{ IntArray cs_arg0 = MapMain::MAPCHIP_SPOS()[num][i]; IntArray cs_arg1 = camera_pos; Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1); }
pls::cs::Ref<data::MapchipMain> mapchipMain2 = pls::cs::Ref<data::MapchipMain>{};
if (MapMain::MAPCHIP_IMG()[num][i] == -1) {
mapchipMain2 = MapMain::mapchip_outMap();
} else {
{ IntArray cs_arg0 = MapMain::MAPCHIP_SPOS()[num][i]; IntArray cs_arg1 = camera_pos; Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1); }
mapchipMain2 = require(apdat_)->mapchipMain_.get_Item(MapMain::MAPCHIP_IMG()[num][i]);
num2 = require(mapchipMain2)->fenceId_;
if (require(udat_)->tAreaLv_ < 2) {
if (num2 >= 0) {
if (num2 == 0) {
mapchipMain2 = require(apdat_)->mapchipMain_.get_Item(MapMain::MAPCHIP_IMG()[num][i] + 1);
} else if (num2 == 3) {
mapchipMain2 = require(apdat_)->mapchipMain_.get_Item(MapMain::MAPCHIP_IMG()[num][i] - 1);
} else if (num2 == 6) {
num2 = 5;
}
}
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(mapchipMain2)->flag_, 1);})) {
if (!offscreen) {
continue;
}
} else if (offscreen) {
continue;
}
if (!is_null(mapchipMain) && (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(mapchipMain2)->flag_, 4);}) || num2 >= 5)) {
mapchipMain2 = mapchipMain;
} else if (num2 == 5) {
mapchipMain2 = MapMain::mapchip_fenceGrass();
}
}
pls::cs::Ref<pls::kairo::Image> image = require(require(apdat_)->resMapChipMain_)->img.get_Item(require(mapchipMain2)->img_);
if (!(([&]() -> bool { pls::cs::Int32 cs_arg0 = camera_pos[0]; pls::cs::Int32 cs_arg1 = ([&]() -> pls::cs::Int32 { auto cs_left = camera_pos[1] + 29; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(image)->GetHeight();}); return cs_left - cs_right; }()); pls::cs::Int32 cs_arg3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(image)->GetHeight();}); return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, 60, cs_arg3, form::GameForm::VIEW_X(), form::GameForm::VIEW_Y(), form::GameForm::VIEW_W(), form::GameForm::VIEW_H(), false); }()))) {
continue;
}
{ pls::cs::Int32 cs_arg2 = camera_pos[1]; pls::cs::Int32 cs_arg3 = require(mapchipMain2)->img_; pls::cs::Int32 cs_arg4 = require(mapchipMain2)->seb_; pls::cs::Int32 cs_arg6 = camera_pos[0]; pls::cs::Int32 cs_arg7 = camera_pos[1]; require(apdat_)->InsertGameObject(5, 0, cs_arg2, cs_arg3, cs_arg4, 0, cs_arg6, cs_arg7, false, 0); }
if (num2 < 5) {
continue;
}
{ pls::cs::Int32 cs_arg2 = camera_pos[1] + 1; pls::cs::Int32 cs_arg3 = MapMain::FENCE_DATA()[num2][2]; auto cs_left_119 = camera_pos[0]; auto cs_right_119 = MapMain::FENCE_DATA()[num2][0];
pls::cs::Int32 cs_arg6 = cs_left_119 + cs_right_119; auto cs_left_120 = camera_pos[1]; auto cs_right_120 = MapMain::FENCE_DATA()[num2][1];
pls::cs::Int32 cs_arg7 = cs_left_120 + cs_right_120; require(apdat_)->InsertGameObject(6, 0, cs_arg2, cs_arg3, 0, 0, cs_arg6, cs_arg7, false, 0); }
}
}

}
}

// M:game.MapMain.Draw_copyArea(kairo.unity.ui.Graphics,System.Int32[])
void MapMain::Draw_copyArea(pls::cs::Ref<pls::kairo::Graphics> g,IntArray draw_rect) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.Draw_copyArea(kairo.unity.ui.Graphics,System.Int32[])",game);
{
form::GameForm::ensure_initialized();

bool flag = false;
pls::cs::Int32 num = 0;
pls::cs::Int32 originalUnusedSlot2, recoveredUnusedSlot3;
bool flag2 = false;
pls::cs::Int32 recoveredUnusedSlot5, recoveredUnusedSlot6, recoveredUnusedSlot7, recoveredUnusedSlot8, recoveredUnusedSlot9, recoveredUnusedSlot10, recoveredUnusedSlot11, recoveredUnusedSlot12, width, height;
pls::cs::Ref<data::MapchipMain> mapchipMain = pls::cs::Ref<data::MapchipMain>{};
if (MapMain::MAP_GROUND() == 0) {
mapchipMain = pls::cs::Ref<data::MapchipMain>{};
} else {
mapchipMain = MapMain::mapchipGrounds().get_Item(MapMain::MAP_GROUND() - 1);
}
pls::cs::Int32 num2 = 0;
pls::cs::Int32 num3 = 0;
for (pls::cs::Int32 num4 = MapMain::MAPCHIP_FIELD_HNUM() - 1; num4 >= 0; --num4) {
for (pls::cs::Int32 i = 0; i < MapMain::MAPCHIP_FIELD_WNUM(); ++i) {
++num2;
if (MapMain::MAPCHIP_IMG()[num4][i] == -1) {
continue;
}
pls::cs::Ref<data::MapchipMain> mapchipMain2 = require(apdat_)->mapchipMain_.get_Item(MapMain::MAPCHIP_IMG()[num4][i]);
if (!is_null(mapchipMain) && pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(mapchipMain2)->flag_, 4);})) {
mapchipMain2 = mapchipMain;
}
pls::cs::Ref<pls::kairo::Image> image = require(require(apdat_)->resMapChipMain_)->img.get_Item(require(mapchipMain2)->img_);
height = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(image)->GetHeight();});
if (height >= 30) {
continue;
}
width = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(image)->GetWidth();});
{ IntArray cs_arg0 = MapMain::MAPCHIP_SPOS()[num4][i]; IntArray cs_arg1 = camera_pos; Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1); }
flag = false;
if (draw_rect[0] != 0 && ([&]() -> bool { pls::cs::Int32 cs_arg0 = camera_pos[0]; pls::cs::Int32 cs_arg1 = camera_pos[1] + 29 - height; pls::cs::Int32 cs_arg7 = draw_rect[0]; return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, width, height, form::GameForm::VIEW_X(), form::GameForm::VIEW_Y(), form::GameForm::VIEW_W(), cs_arg7, false); }())) {
flag = true;
}
if (draw_rect[1] != 0 && !flag) {
if ([&]() -> bool { pls::cs::Int32 cs_arg0 = camera_pos[0]; pls::cs::Int32 cs_arg1 = camera_pos[1] + 29 - height; pls::cs::Int32 cs_arg4 = form::GameForm::VIEW_W() - draw_rect[1]; pls::cs::Int32 cs_arg6 = draw_rect[1]; return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, width, height, cs_arg4, form::GameForm::VIEW_Y(), cs_arg6, form::GameForm::VIEW_H(), false); }()) {
flag = true;
}
if ([&]() -> bool { pls::cs::Int32 cs_arg0 = camera_pos[0]; pls::cs::Int32 cs_arg1 = camera_pos[1] + 29 - height; pls::cs::Int32 cs_arg6 = draw_rect[3]; return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, width, height, form::GameForm::VIEW_X(), form::GameForm::VIEW_Y(), cs_arg6, form::GameForm::VIEW_H(), false); }()) {
flag = true;
}
}
if (draw_rect[2] != 0 && !flag && ([&]() -> bool { pls::cs::Int32 cs_arg0 = camera_pos[0]; pls::cs::Int32 cs_arg1 = camera_pos[1] + 29 - height; pls::cs::Int32 cs_arg5 = form::GameForm::VIEW_Y() + form::GameForm::VIEW_H() - draw_rect[2]; pls::cs::Int32 cs_arg7 = draw_rect[2]; return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, width, height, form::GameForm::VIEW_X(), cs_arg5, form::GameForm::VIEW_W(), cs_arg7, false); }())) {
flag = true;
}
if (draw_rect[3] != 0 && !flag && ([&]() -> bool { pls::cs::Int32 cs_arg0 = camera_pos[0]; pls::cs::Int32 cs_arg1 = camera_pos[1] + 29 - height; pls::cs::Int32 cs_arg6 = draw_rect[3]; return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, width, height, form::GameForm::VIEW_X(), form::GameForm::VIEW_Y(), cs_arg6, form::GameForm::VIEW_H(), false); }())) {
flag = true;
}
if (flag) {
++num3;
{ pls::cs::Int32 cs_arg2 = camera_pos[1]; pls::cs::Int32 cs_arg3 = require(mapchipMain2)->img_; pls::cs::Int32 cs_arg4 = require(mapchipMain2)->seb_; pls::cs::Int32 cs_arg6 = camera_pos[0]; pls::cs::Int32 cs_arg7 = camera_pos[1]; require(apdat_)->InsertGameObject(5, 0, cs_arg2, cs_arg3, cs_arg4, 0, cs_arg6, cs_arg7, false, 0); }
}
}
}

}
}

// M:game.MapMain.Draw_trainingCoat(kairo.unity.ui.Graphics)
void MapMain::Draw_trainingCoat(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.Draw_trainingCoat(kairo.unity.ui.Graphics)",game);
{
for (pls::cs::Int32 i = 0; i < MapMain::TRAIN_COAT_GPOS().length(); ++i) {
{ pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = MapMain::TRAIN_COAT_GPOS().get_Item(i); IntArray cs_arg1 = TRAIN_COAT_CPOS[i]; Camera::ConvertGlobalToCamera(cs_arg0, cs_arg1); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 255, 0);}));});
for (pls::cs::Int32 j = 0; j < TRAIN_COAT_CPOS.length(); ++j) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg0 = TRAIN_COAT_CPOS[j][0] - 4; pls::cs::Single cs_arg1 = TRAIN_COAT_CPOS[j][1] - 4; require(g)->FillRect(cs_arg0, cs_arg1, 8.0f, 8.0f); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 255);}));});
for (pls::cs::Int32 k = 0; k < TRAIN_COAT_CPOS.length(); ++k) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg0 = TRAIN_COAT_CPOS[k][0]; pls::cs::Single cs_arg1 = TRAIN_COAT_CPOS[k][1]; pls::cs::Single cs_arg2 = TRAIN_COAT_CPOS[(k + 1) % 4][0]; pls::cs::Single cs_arg3 = TRAIN_COAT_CPOS[(k + 1) % 4][1]; require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f); }());});
}
for (pls::cs::Int32 l = 0; l < require(udat_)->tAreas_.length(); ++l) {
for (pls::cs::Int32 m = 0; m < require(udat_)->tAreas_[l].length(); ++m) {
if (require(require(udat_)->tAreas_[l].get_Item(m))->tMode_ == 4 || require(require(udat_)->tAreas_[l].get_Item(m))->tMode_ == 5) {
continue;
}
for (pls::cs::Int32 n = 0; n < require(require(udat_)->tAreas_[l].get_Item(m))->tGroupAreas_.length(); ++n) {
pls::cs::Ref<TGroupArea> tGroupArea = require(require(udat_)->tAreas_[l].get_Item(m))->tGroupAreas_.get_Item(n);
for (pls::cs::Int32 num = 0; num < require(tGroupArea)->filed_gpos.length(); ++num) {
{ pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = require(tGroupArea)->filed_gpos.get_Item(num); IntArray cs_arg1 = require(tGroupArea)->filed_cpos[num]; Camera::ConvertGlobalToCamera(cs_arg0, cs_arg1); }
}
for (pls::cs::Int32 num2 = 0; num2 < require(tGroupArea)->filed_gpos.length(); ++num2) {
require(tGroupArea)->cx[num2] = require(tGroupArea)->filed_cpos[num2][0];
require(tGroupArea)->cy[num2] = require(tGroupArea)->filed_cpos[num2][1];
}
pls::cs::Int32 r = GameUtil::RateConvert(l, 0, require(udat_)->tAreas_.length(), 0, 255, true);
pls::cs::Int32 g2 = GameUtil::RateConvert(n, 0, require(require(udat_)->tAreas_[l].get_Item(m))->tGroupAreas_.length(), 0, 255, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(r, g2, 255);}));});
}
if (require(require(udat_)->tAreas_[l].get_Item(m))->tMode_ == 3) {
for (pls::cs::Int32 num3 = 0; num3 < require(require(udat_)->tAreas_[l].get_Item(m))->tGroupAreas_.length(); ++num3) {
pls::cs::Ref<TGroupArea> tGroupArea2 = require(require(udat_)->tAreas_[l].get_Item(m))->tGroupAreas_.get_Item(num3);
for (pls::cs::Int32 num4 = 0; num4 < require(tGroupArea2)->goal_gpos.length(); ++num4) {
{ pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = require(tGroupArea2)->goal_gpos.get_Item(num4); IntArray cs_arg1 = require(tGroupArea2)->goal_cpos[num4]; Camera::ConvertGlobalToCamera(cs_arg0, cs_arg1); }
pls::cs::Int32 num5 = 6;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg0 = require(tGroupArea2)->goal_cpos[num4][0] - num5 / 2; pls::cs::Single cs_arg1 = require(tGroupArea2)->goal_cpos[num4][1] - num5 / 2; require(g)->FillRect(cs_arg0, cs_arg1, num5, num5); }());});
}
for (pls::cs::Int32 num6 = 0; num6 < pls::cs::Int32(require(tGroupArea2)->goal_gpos.length()) - 1; ++num6) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg0 = require(tGroupArea2)->goal_cpos[num6][0]; pls::cs::Single cs_arg1 = require(tGroupArea2)->goal_cpos[num6][1]; pls::cs::Single cs_arg2 = require(tGroupArea2)->goal_cpos[(num6 + 1) % 4][0]; pls::cs::Single cs_arg3 = require(tGroupArea2)->goal_cpos[(num6 + 1) % 4][1]; require(g)->DrawLine(cs_arg0, cs_arg1, cs_arg2, cs_arg3, 1.0f); }());});
}
}
}
}
}
}
}

// M:game.MapMain.UpdateTenantMapcip
void MapMain::UpdateTenantMapcip() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.UpdateTenantMapcip",game);
{
for (pls::cs::Int32 i = 0; i < require(udat_)->tenants_.length(); ++i) {
pls::cs::Ref<Tenant> tenant = require(udat_)->tenants_.get_Item(i);
pls::cs::Ref<data::TenantData> tenantData = pls::cs::Ref<data::TenantData>{};
if (require(tenant)->state_ == 1 || require(tenant)->state_ == 2) {
tenantData = require(apdat_)->tenantData_.get_Item(require(tenant)->tenantDataId_);
}
if (require(tenant)->state_ == 1) {
for (pls::cs::Int32 j = 0; j < require(tenantData)->img_.length(); ++j) {
{ auto cs_target = MapMain::MAPCHIP_IMG()[([&]() -> pls::cs::Int32 { auto cs_left = require(tenant)->address_[1]; auto cs_right = MapMain::SET_TMCHP_OFF()[j][1]; return cs_left + cs_right; }())]; auto cs_index = ([&]() -> pls::cs::Int32 { auto cs_left = require(tenant)->address_[0]; auto cs_right = MapMain::SET_TMCHP_OFF()[j][0]; return cs_left + cs_right; }()); auto cs_value = require(tenantData)->img_[j];cs_target.set_Item(cs_index,cs_value);}
}
} else {
for (pls::cs::Int32 k = 0; k < 4; ++k) {
{ auto cs_target = MapMain::MAPCHIP_IMG()[([&]() -> pls::cs::Int32 { auto cs_left = require(tenant)->address_[1]; auto cs_right = MapMain::SET_TMCHP_OFF()[k][1]; return cs_left + cs_right; }())]; auto cs_index = ([&]() -> pls::cs::Int32 { auto cs_left = require(tenant)->address_[0]; auto cs_right = MapMain::SET_TMCHP_OFF()[k][0]; return cs_left + cs_right; }()); auto cs_value = require(MapMain::mapchip_vacant())->id_ + k;cs_target.set_Item(cs_index,cs_value);}
}
}
}
if (require(udat_)->tAreaRootNum_ == 1) {
for (pls::cs::Int32 l = 5; l <= 15; ++l) {
for (pls::cs::Int32 m = 4; m <= 13; ++m) {
MapMain::MAPCHIP_IMG()[l][m] = require(MapMain::mapchip_tree())->id_;
}
}
}
}
}

// M:game.MapMain.Draw_tenantAround(kairo.unity.ui.Graphics)
void MapMain::Draw_tenantAround(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.Draw_tenantAround(kairo.unity.ui.Graphics)",game);
{
Camera::ensure_initialized();
form::GameForm::ensure_initialized();

bool flag = false;
for (pls::cs::Int32 i = 0; i < require(udat_)->tenants_.length(); ++i) {
pls::cs::Ref<Tenant> tenant = require(udat_)->tenants_.get_Item(i);
if (require(tenant)->root_ == 1 && require(udat_)->tAreaRootNum_ == 1) {
continue;
}
{ IntArray cs_arg0 = MapMain::MAPCHIP_SPOS()[require(tenant)->address_[1]][require(tenant)->address_[0]]; IntArray cs_arg1 = camera_pos; Camera::ConvertScreenToCameraIntArray(cs_arg0, cs_arg1); }
{ auto cs_target = camera_pos; auto cs_index = 0; auto cs_old = cs_target.at(cs_index); auto cs_rhs = 30; pls::cs::Int32 cs_value = cs_old - cs_rhs; cs_target.at(cs_index) = cs_value; }
flag = false;
if ((([&]() -> bool { auto cs_left = Camera::camera_address()[0]; auto cs_right = require(tenant)->address_[0]; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = Camera::camera_address()[0]; auto cs_right = require(tenant)->address_[0] + 1; return cs_left == cs_right; }())) && (([&]() -> bool { auto cs_left = Camera::camera_address()[1]; auto cs_right = require(tenant)->address_[1]; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = Camera::camera_address()[1]; auto cs_right = require(tenant)->address_[1] - 1; return cs_left == cs_right; }())) && require(require(apdat_)->camera)->flg_disp) {
flag = true;
}
pls::cs::Ref<pls::kairo::Image> image = pls::cs::Ref<pls::kairo::Image>{};
if (flag) {
image = require(require(apdat_)->resCom2_)->img.get_Item(140);
} else {
image = require(require(apdat_)->resCom2_)->img.get_Item(142);
}
if (!(GameUtil::ChRectHitRect(camera_pos[0], camera_pos[1], 110, 56, form::GameForm::VIEW_X(), form::GameForm::VIEW_Y(), form::GameForm::VIEW_W(), form::GameForm::VIEW_H(), false))) {
continue;
}
if (flag) {
pls::cs::Int32 frame = require(require(apdat_)->frmGame_)->stateCnt_ % 16 / 8;
{ pls::cs::Int32 cs_arg1 = camera_pos[0]; pls::cs::Int32 cs_arg2 = camera_pos[1]; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(77); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(140); require(apdat_)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, frame); }
} else if (require(require(apdat_)->frmGame_)->state_ == 1) {
{ pls::cs::Int32 cs_arg1 = camera_pos[0]; pls::cs::Int32 cs_arg2 = camera_pos[1]; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(80); pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(142); require(apdat_)->DrawSeb(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4, 0); }
}
}

}
}

// M:game.MapMain.UpdateMapGround
void MapMain::UpdateMapGround() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.UpdateMapGround",game);
{
pls::cs::Int32 mAP_GROUND = MapMain::MAP_GROUND();
if (require(require(apdat_)->save_)->ints[2] == 11 || require(require(apdat_)->save_)->ints[2] == 0) {
MapMain::MAP_GROUND() = 2;
} else if (require(udat_)->tAreaLv_ == 0) {
MapMain::MAP_GROUND() = 1;
} else if (require(udat_)->tAreaLv_ == 1) {
MapMain::MAP_GROUND() = 0;
} else {
MapMain::MAP_GROUND() = 4;
}
if (mAP_GROUND != MapMain::MAP_GROUND()) {
require(require(apdat_)->frmGame_)->SetAllDraw();
}
}
}

// M:game.MapMain.UpdateTrainingCoatNum
void MapMain::UpdateTrainingCoatNum() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.MapMain.UpdateTrainingCoatNum",game);
{
for (pls::cs::Int32 num = MapMain::MAPCHIP_FIELD_HNUM() - 1; num >= 0; --num) {
for (pls::cs::Int32 i = 0; i < MapMain::MAPCHIP_FIELD_WNUM(); ++i) {
MapMain::MAPCHIP_IMG()[num][i] = MapMain::MAPCHIP_IMG_SAVE()[num][i];
}
}
UpdateTenantMapcip();
UpdateMapGround();
}
}
} // namespace game
}
