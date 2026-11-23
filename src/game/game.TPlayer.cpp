// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.PlayerData.hpp"
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
#include "generated/java.lang.JMath.hpp"
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
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace game {

void TPlayer::trace_edges(const pls::cs::EdgeVisitor&visitor)const {Player::trace_edges(visitor);pls::cs::trace_value(tGroupArea_,visitor);pls::cs::trace_value(trainingId_,visitor);pls::cs::trace_value(oldTrainingId_,visitor);}

static IntArray TPlayer_camera_pos_shadow_storage{};

static IntArray TPlayer_camera_pos_sliding_storage{};

static pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>> TPlayer_CORN_AROUND_POS_storage{};

static pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> TPlayer_LIFTING_POS_storage{};

static IntArray2 TPlayer_LIFTING_TIME_storage{};

static IntArray TPlayer_TEMP_TPOINT_UP_storage{};

static PLS_NOINLINE void cs_init_63cc285eb997c6a4_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(TPlayer_camera_pos_shadow_storage,visitor);pls::cs::trace_value(TPlayer_camera_pos_sliding_storage,visitor);pls::cs::trace_value(TPlayer_CORN_AROUND_POS_storage,visitor);pls::cs::trace_value(TPlayer_LIFTING_POS_storage,visitor);pls::cs::trace_value(TPlayer_LIFTING_TIME_storage,visitor);pls::cs::trace_value(TPlayer_TEMP_TPOINT_UP_storage,visitor);});static pls::cs::TypeInitState state;state.run("game.TPlayer",flag,[](){
TPlayer_LIFTING_TIME_storage = pls::cs::evaluate_type_initializer_field("F:game.TPlayer.LIFTING_TIME",[&](){return IntArray2::from({IntArray::from({20, 24, 16}), IntArray::from({24, 20, 16}), IntArray::from({16, 16, 10})});});
TPlayer_LIFTING_POS_storage = pls::cs::evaluate_type_initializer_field("F:game.TPlayer.LIFTING_POS",[&](){return pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from({kl_util3d::Vector3D::create(-10.0f, 7.0f, 0.0f), kl_util3d::Vector3D::create(10.0f, 7.0f, 0.0f), kl_util3d::Vector3D::create(0.0f, 22.0f, 0.0f)});});
TPlayer_CORN_AROUND_POS_storage = pls::cs::evaluate_type_initializer_field("F:game.TPlayer.CORN_AROUND_POS",[&](){return pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>>::from({pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from({kl_util3d::Vector3D::create(-20.0f, 0.0f, 0.0f), kl_util3d::Vector3D::create(-20.0f, 0.0f, 0.0f)}), pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from({kl_util3d::Vector3D::create(-20.0f, 0.0f, -40.0f), ([&]() -> pls::cs::Ref<kl_util3d::Vector3D> { pls::cs::Single cs_arg0 = (-20.0f * pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::Cos(0.7853981633974483);}))); pls::cs::Single cs_arg2 = (-40.0f * pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::Sin(0.7853981633974483);}))) / 2.0f; return kl_util3d::Vector3D::create(cs_arg0, 0.0f, cs_arg2); }())}), pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from({kl_util3d::Vector3D::create(0.0f, 0.0f, -40.0f), kl_util3d::Vector3D::create(0.0f, 0.0f, -20.0f)}), pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::from({kl_util3d::Vector3D::create(20.0f, 0.0f, -40.0f), ([&]() -> pls::cs::Ref<kl_util3d::Vector3D> { pls::cs::Single cs_arg0 = 20.0f * pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::Cos(0.7853981633974483);})); pls::cs::Single cs_arg2 = (-40.0f * pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::Sin(0.7853981633974483);}))) / 2.0f; return kl_util3d::Vector3D::create(cs_arg0, 0.0f, cs_arg2); }())})});});
TPlayer_TEMP_TPOINT_UP_storage = pls::cs::evaluate_type_initializer_field("F:game.TPlayer.TEMP_TPOINT_UP",[&](){return IntArray::make(5);});
TPlayer_camera_pos_shadow_storage = pls::cs::evaluate_type_initializer_field("F:game.TPlayer.camera_pos_shadow",[&](){return IntArray::make(2);});
TPlayer_camera_pos_sliding_storage = pls::cs::evaluate_type_initializer_field("F:game.TPlayer.camera_pos_sliding",[&](){return IntArray::make(2);});

});}

void TPlayer::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_63cc285eb997c6a4_slow(flag);}

IntArray& TPlayer::camera_pos_shadow(){TPlayer::ensure_initialized();return TPlayer_camera_pos_shadow_storage;}

IntArray& TPlayer::camera_pos_sliding(){TPlayer::ensure_initialized();return TPlayer_camera_pos_sliding_storage;}

pls::cs::Array<pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>>& TPlayer::CORN_AROUND_POS(){TPlayer::ensure_initialized();return TPlayer_CORN_AROUND_POS_storage;}

pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>& TPlayer::LIFTING_POS(){TPlayer::ensure_initialized();return TPlayer_LIFTING_POS_storage;}

IntArray2& TPlayer::LIFTING_TIME(){TPlayer::ensure_initialized();return TPlayer_LIFTING_TIME_storage;}

IntArray& TPlayer::TEMP_TPOINT_UP(){TPlayer::ensure_initialized();return TPlayer_TEMP_TPOINT_UP_storage;}

void TPlayer::create_init(pls::cs::Ref<TPlayer> self,pls::cs::Int32 obj_type) {
TPlayer::ensure_initialized();
Player::create_init(pls::cs::static_pointer_cast<Player>(self), obj_type);
PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.#ctor(System.Int32)",game);
{

}

}

// M:game.TPlayer.#ctor(System.Int32)
pls::cs::Ref<TPlayer> TPlayer::create(pls::cs::Int32 obj_type) {
TPlayer::ensure_initialized();
 auto self = pls::cs::make_ref<TPlayer>(); TPlayer::create_init(self,obj_type); return self; 
}

// M:game.TPlayer.Init_training(System.Int32,System.Int32)
void TPlayer::Init_training(pls::cs::Int32 pId,pls::cs::Int32 pDataId) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.Init_training(System.Int32,System.Int32)",game);
{
Player::ensure_initialized();

Player::apdat_() = main::AppData::GetInstance();
Player::canvas_() = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();});
Player::udat_() = UserData::GetInstance();
pData_id_ = pDataId;
trainingId_ = IntArray::make(5);
trainingId_[0] = pId;
oldTrainingId_ = IntArray::make(5);
p_id_ = pId;
role_ = 0;
frame_ = 0;
direct_ = 0;
seb_ = 0;
faceImg_ = 0;
bodyImg_ = 100;
script_ = kl_java_util::Vector::create();
pos_ = kl_util3d::Vector3D::create();
shadowPos_ = kl_util3d::Vector3D::create();
goalPos_ = kl_util3d::Vector3D::create();
formationGo_ = kl_util3d::Vector3D::create();
v_ = kl_util3d::Vector3D::create();
formation_ = IntArray::make(2);
formation_param_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({5, 2}));});
formation_address_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({5, 2}));});
address_ = IntArray::make(2);
mostEvaAddres_ = IntArray::make(2);
screen_pos_ = IntArray::make(2);
notMoveCnt_ = 0;
flag_ = 0;
state_ = 0;
stateCnt_ = 0;
actId_ = 0;
coliState_ = 0;
coliBallState_ = 0;
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(flag_, 2);});
physical_hp_ = data::PlayerData::GetPhysicalHpMax(this);
directBox_ = IntArray::make(4);
role_ = require(require(Player::apdat_())->pData_.get_Item(pDataId))->role_;

}
}

// M:game.TPlayer.SetTrainingId(System.Int32,System.Int32,System.Int32,System.Int32)
void TPlayer::SetTrainingId(pls::cs::Int32 rootId,pls::cs::Int32 areaId,pls::cs::Int32 groupAreaId,pls::cs::Int32 groupId) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.SetTrainingId(System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
oldTrainingId_[2] = trainingId_[2];
oldTrainingId_[1] = trainingId_[1];
oldTrainingId_[3] = trainingId_[3];
oldTrainingId_[4] = trainingId_[4];
trainingId_[2] = rootId;
trainingId_[1] = areaId;
trainingId_[3] = groupAreaId;
trainingId_[4] = groupId;
}
}

// M:game.TPlayer.Serialize(java.io.OutputStream)
void TPlayer::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(obj_type_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(pData_id_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(p_id_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(team_id_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(tData_id_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(role_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, frame_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(direct_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(seb_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, sebCnt_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(faceImg_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(bodyImg_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(script_));})));});
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(script_));}); ++i) {
IntArray array = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(script_), i);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(array.length()));});
for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, array[j]);});
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteVector3D(os, pos_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteVector3D(os, shadowPos_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteVector3D(os, goalPos_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteVector3D(os, v_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(address_[0]));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(address_[1]));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, screen_pos_[0]);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, screen_pos_[1]);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, flag_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, stateCnt_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(dcorn));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(dpoint));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteVector3D(os, seb_startPos);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteVector3D(os, seb_v);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteFloat(os, seb_ay);});
for (pls::cs::Int32 k = 0; k < trainingId_.length(); ++k) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, trainingId_[k]);});
}
for (pls::cs::Int32 l = 0; l < oldTrainingId_.length(); ++l) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, oldTrainingId_[l]);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, useTenantCnt_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, trainingPriority_);});
}
}

// M:game.TPlayer.Deserialize(java.io.InputStream)
void TPlayer::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.Deserialize(java.io.InputStream)",game);
{
Player::ensure_initialized();

obj_type_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
pData_id_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
p_id_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
team_id_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
tData_id_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
role_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
frame_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
direct_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
seb_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
sebCnt_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
faceImg_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
bodyImg_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
script_ = kl_java_util::Vector::create();
pls::cs::Int32 num = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
for (pls::cs::Int32 i = 0; i < num; ++i) {
pls::cs::Int32 num2 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
IntArray array = IntArray::make(num2);
for (pls::cs::Int32 j = 0; j < num2; ++j) {
array[j] = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(script_), pls::cs::box(array));});
}
pos_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadVector3D(stream);});
shadowPos_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadVector3D(stream);});
goalPos_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadVector3D(stream);});
v_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadVector3D(stream);});
address_ = IntArray::make(2);
screen_pos_ = IntArray::make(2);
{ auto cs_target = address_; auto cs_index = 0; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = address_; auto cs_index = 1; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = screen_pos_; auto cs_index = 0; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = screen_pos_; auto cs_index = 1; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
state_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
stateCnt_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
dcorn = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
dpoint = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
seb_startPos = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadVector3D(stream);});
seb_v = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadVector3D(stream);});
seb_ay = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(kl_unity_util::StreamUtil::ReadFloat(stream));});
trainingId_ = IntArray::make(5);
oldTrainingId_ = IntArray::make(5);
for (pls::cs::Int32 k = 0; k < trainingId_.length(); ++k) {
{ auto cs_target = trainingId_; auto cs_index = k; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
}
for (pls::cs::Int32 l = 0; l < oldTrainingId_.length(); ++l) {
{ auto cs_target = oldTrainingId_; auto cs_index = l; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
}
useTenantCnt_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
trainingPriority_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
pls::cs::Ref<data::PlayerData> playerData = require(Player::apdat_())->pData_.get_Item(pData_id_);
require(playerData)->SetGameData(this);

}
}

// M:game.TPlayer.Deserialize2
void TPlayer::Deserialize2() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.Deserialize2",game);
{

}
}

// M:game.TPlayer.AddCommandTrainigMoveGoalPos
void TPlayer::AddCommandTrainigMoveGoalPos() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandTrainigMoveGoalPos",game);
{
AddCommand(IntArray::from({17}));
}
}

// M:game.TPlayer.AddCommandTrainigMoveGoalPosSet(System.Int32,System.Int32)
void TPlayer::AddCommandTrainigMoveGoalPosSet(pls::cs::Int32 x,pls::cs::Int32 z) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandTrainigMoveGoalPosSet(System.Int32,System.Int32)",game);
{
AddCommand(IntArray::from({18, x, z}));
}
}

// M:game.TPlayer.AddCommandTrainingBallKick
void TPlayer::AddCommandTrainingBallKick() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandTrainingBallKick",game);
{
AddCommand(IntArray::from({19}));
}
}

// M:game.TPlayer.AddCommandTrainingBallWait
void TPlayer::AddCommandTrainingBallWait() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandTrainingBallWait",game);
{
AddCommand(IntArray::from({20}));
}
}

// M:game.TPlayer.AddCommandTrainingBallChase
void TPlayer::AddCommandTrainingBallChase() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandTrainingBallChase",game);
{
AddCommand(IntArray::from({21}));
}
}

// M:game.TPlayer.AddCommandTenantIn
void TPlayer::AddCommandTenantIn() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandTenantIn",game);
{
AddCommand(IntArray::from({35}));
}
}

// M:game.TPlayer.AddCommandSvisorAct
void TPlayer::AddCommandSvisorAct() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandSvisorAct",game);
{
AddCommand(IntArray::from({36}));
}
}

// M:game.TPlayer.AddCommandLifting(System.Int32)
void TPlayer::AddCommandLifting(pls::cs::Int32 lift_id) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandLifting(System.Int32)",game);
{
AddCommand(IntArray::from({22, lift_id}));
}
}

// M:game.TPlayer.AddCommandLiftingBallChase
void TPlayer::AddCommandLiftingBallChase() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandLiftingBallChase",game);
{
AddCommand(IntArray::from({23}));
}
}

// M:game.TPlayer.AddCommandDribble
void TPlayer::AddCommandDribble() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandDribble",game);
{
AddCommand(IntArray::from({24}));
}
}

// M:game.TPlayer.AddCommandDribbleOlder
void TPlayer::AddCommandDribbleOlder() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandDribbleOlder",game);
{
AddCommand(IntArray::from({25}));
}
}

// M:game.TPlayer.AddCommandDribbleOlderRegist
void TPlayer::AddCommandDribbleOlderRegist() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandDribbleOlderRegist",game);
{
AddCommand(IntArray::from({26}));
}
}

// M:game.TPlayer.AddCommandShoot
void TPlayer::AddCommandShoot() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandShoot",game);
{
AddCommand(IntArray::from({27}));
}
}

// M:game.TPlayer.AddCommandShootOlder
void TPlayer::AddCommandShootOlder() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandShootOlder",game);
{
AddCommand(IntArray::from({28}));
}
}

// M:game.TPlayer.AddCommandShootOlderRegist
void TPlayer::AddCommandShootOlderRegist() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandShootOlderRegist",game);
{
AddCommand(IntArray::from({29}));
}
}

// M:game.TPlayer.AddCommandShootGK
void TPlayer::AddCommandShootGK() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandShootGK",game);
{
AddCommand(IntArray::from({30}));
}
}

// M:game.TPlayer.AddCommandTraSaving
void TPlayer::AddCommandTraSaving() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandTraSaving",game);
{
AddCommand(IntArray::from({31}));
}
}

// M:game.TPlayer.AddCommandRunningRegist
void TPlayer::AddCommandRunningRegist() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandRunningRegist",game);
{
AddCommand(IntArray::from({32}));
}
}

// M:game.TPlayer.AddCommandRunning(System.Int32)
void TPlayer::AddCommandRunning(pls::cs::Int32 next_point) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandRunning(System.Int32)",game);
{
AddCommand(IntArray::from({33, next_point}));
}
}

// M:game.TPlayer.AddCommandGetTPoint
void TPlayer::AddCommandGetTPoint() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.AddCommandGetTPoint",game);
{
AddCommand(IntArray::from({34}));
}
}

// M:game.TPlayer.Script
bool TPlayer::Script() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.Script",game);
{
Player::ensure_initialized();
main::AppData::ensure_initialized();
MapMain::ensure_initialized();

while (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(script_));}) > 0) {
insertScriptIndex_ = 1;
{auto cs_flow_101 = pls::cs::run_finally([&]() -> pls::cs::Flow<bool> {{
IntArray firstScript = GetFirstScript();
pls::cs::Int32 recoveredScriptCommand = firstScript[0];
if ((recoveredScriptCommand == 1)) {
if (firstScript[2] == 1) {
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(flag_, 1);});
}
firstScript[1]--;
if (firstScript[1] <= 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else if ((recoveredScriptCommand == 2)) {
ChangeState(firstScript[1]);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 3)) {
seb_ = firstScript[1];
sebCnt_ = 0;
frame_ = 0;
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(flag_, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 4)) {
direct_ = firstScript[1];
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 5)) {
flag_ = firstScript[1];
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 6)) {
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = flag_; pls::cs::Int32 cs_arg1 = firstScript[1]; return kl_unity_util::BitUtil::On(cs_arg0, cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 7)) {
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = flag_; pls::cs::Int32 cs_arg1 = firstScript[1]; return kl_unity_util::BitUtil::Off(cs_arg0, cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 9)) {
if ([&]() -> bool { auto cs_left = sebCnt_; auto cs_right = Player::SEB_H_SAVING_ANIME()[0]; return cs_left < cs_right; }()) {
require(pos_)->x_ = require(seb_startPos)->x_ + require(seb_v)->x_ * pls::cs::Single(sebCnt_);
require(pos_)->z_ = require(seb_startPos)->z_ + require(seb_v)->z_ * pls::cs::Single(sebCnt_);
require(pos_)->y_ = require(seb_v)->y_ * pls::cs::Single(sebCnt_) + seb_ay * pls::cs::Single(sebCnt_) * pls::cs::Single((sebCnt_ + 1)) / 2.0f;
} else {
{ auto cs_target = pos_; auto cs_left_90 = ([&]() -> pls::cs::FloatEval { auto cs_left_90 = require(seb_startPos)->x_; auto cs_right_90 = ([&]() -> pls::cs::FloatEval { auto cs_left_90 = require(seb_v)->x_; auto cs_right_90 = pls::cs::Single(Player::SEB_H_SAVING_ANIME()[0]); return cs_left_90 * cs_right_90; }()); return cs_left_90 + cs_right_90; }()); auto cs_right_90 = ([&]() -> pls::cs::FloatEval { auto cs_left_90 = require(seb_v)->x_ / 3.0f; auto cs_right_90 = pls::cs::Single((([&]() -> pls::cs::Int32 { auto cs_left_90 = sebCnt_; auto cs_right_90 = Player::SEB_H_SAVING_ANIME()[0]; return cs_left_90 - cs_right_90; }()))); return cs_left_90 * cs_right_90; }());
pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_90 + cs_right_90); require(cs_target)->x_ = cs_value; }
{ auto cs_target = pos_; auto cs_left_91 = ([&]() -> pls::cs::FloatEval { auto cs_left_91 = require(seb_startPos)->z_; auto cs_right_91 = ([&]() -> pls::cs::FloatEval { auto cs_left_91 = require(seb_v)->z_; auto cs_right_91 = pls::cs::Single(Player::SEB_H_SAVING_ANIME()[0]); return cs_left_91 * cs_right_91; }()); return cs_left_91 + cs_right_91; }()); auto cs_right_91 = ([&]() -> pls::cs::FloatEval { auto cs_left_91 = require(seb_v)->z_ / 3.0f; auto cs_right_91 = pls::cs::Single((([&]() -> pls::cs::Int32 { auto cs_left_91 = sebCnt_; auto cs_right_91 = Player::SEB_H_SAVING_ANIME()[0]; return cs_left_91 - cs_right_91; }()))); return cs_left_91 * cs_right_91; }());
pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_91 + cs_right_91); require(cs_target)->z_ = cs_value; }
require(pos_)->y_ = require(seb_v)->y_ * pls::cs::Single(sebCnt_) + seb_ay * pls::cs::Single(sebCnt_) * pls::cs::Single((sebCnt_ + 1)) / 2.0f;
if (require(pos_)->y_ < 0.0f) {
require(pos_)->y_ = 0.0f;
}
}
if ([&]() -> bool { auto cs_left = sebCnt_; auto cs_right = Player::SEB_H_SAVING_ANIME()[pls::cs::Int32(Player::SEB_H_SAVING_ANIME().length()) - 1]; return cs_left >= cs_right; }()) {
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(flag_, 8);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else if ((recoveredScriptCommand == 10)) {
if ([&]() -> bool { auto cs_left = sebCnt_; auto cs_right = Player::SEB_H_SLIDING_ANIME()[0]; return cs_left < cs_right; }()) {
require(pos_)->x_ = require(pos_)->x_ + require(seb_v)->x_;
require(pos_)->z_ = require(pos_)->z_ + require(seb_v)->z_;
}
if ([&]() -> bool { auto cs_left = sebCnt_; auto cs_right = Player::SEB_H_SLIDING_ANIME()[pls::cs::Int32(Player::SEB_H_SLIDING_ANIME().length()) - 1]; return cs_left >= cs_right; }()) {
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(flag_, 48);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else if ((recoveredScriptCommand == 11)) {
require(pos_)->y_ = require(seb_v)->y_ * pls::cs::Single(sebCnt_) + seb_ay * pls::cs::Single(sebCnt_) * pls::cs::Single((sebCnt_ + 1)) / 2.0f;
if ([&]() -> bool { auto cs_left = sebCnt_; auto cs_right = Player::SEB_H_HEAD_ANIME()[pls::cs::Int32(Player::SEB_H_HEAD_ANIME().length()) - 1]; return cs_left >= cs_right; }()) {
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(flag_, 64);});
if (require(pos_)->y_ < 0.0f) {
require(pos_)->y_ = 0.0f;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else if ((recoveredScriptCommand == 12)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 13)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 14)) {
{
auto cs_left_92 = sebCnt_; auto cs_right_92 = Player::SEB_H_GOALGLAD_ANIME()[1];
pls::cs::Int32 num6 = cs_left_92 % cs_right_92;
pls::cs::Single num7 = GameUtil::SetVStop(8.0f, Player::SEB_H_GOALGLAD_ANIME()[0] / 2);
pls::cs::Single num8 = GameUtil::SetAStop(8.0f, Player::SEB_H_GOALGLAD_ANIME()[0] / 2);
require(pos_)->y_ = num7 * pls::cs::Single(num6) + num8 * pls::cs::Single(num6) * pls::cs::Single((num6 + 1)) / 2.0f;
if (require(pos_)->y_ < 0.0f) {
require(pos_)->y_ = 0.0f;
}
}
} else if ((recoveredScriptCommand == 15)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 17)) {
{
IntArray collisionData21 = require(Player::udat_())->GetCollisionData(0, 5);
IntArray collisionData22 = require(Player::udat_())->GetCollisionData(1, 5);
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData21[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData21[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData21[2]; pls::cs::Single cs_arg3 = collisionData21[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->x_; auto cs_right = pls::cs::Single(collisionData22[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->z_; auto cs_right = pls::cs::Single(collisionData22[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData22[2]; pls::cs::Single cs_arg7 = collisionData22[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
pls::cs::Int32 speed_eva2 = 50;
bool isTrainingMove2 = false;
if (!is_null(tGroupArea_) && require(tGroupArea_)->state_ != 12) {
speed_eva2 = 60;
isTrainingMove2 = true;
}
Move(goalPos_, -1, speed_eva2, isTrainingMove2);
}
} else if ((recoveredScriptCommand == 18)) {
{
{ auto cs_target = goalPos_; pls::cs::Single cs_value = firstScript[1]; require(cs_target)->x_ = cs_value; }
{ auto cs_target = goalPos_; pls::cs::Single cs_value = firstScript[2]; require(cs_target)->z_ = cs_value; }
IntArray collisionData5 = require(Player::udat_())->GetCollisionData(0, 5);
IntArray collisionData6 = require(Player::udat_())->GetCollisionData(1, 5);
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData5[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData5[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData5[2]; pls::cs::Single cs_arg3 = collisionData5[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->x_; auto cs_right = pls::cs::Single(collisionData6[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->z_; auto cs_right = pls::cs::Single(collisionData6[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData6[2]; pls::cs::Single cs_arg7 = collisionData6[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
pls::cs::Int32 speed_eva = 50;
bool isTrainingMove = false;
if (!is_null(tGroupArea_) && require(tGroupArea_)->state_ != 12) {
speed_eva = 60;
isTrainingMove = true;
}
Move(goalPos_, -1, speed_eva, isTrainingMove);
}
} else if ((recoveredScriptCommand == 19)) {
{
pls::cs::Ref<TBall> ball2 = require(tGroupArea_)->GetBall(this, 0);
require(ball2)->SetPassDataTraining(this, 0, false);
require(ball2)->ReleaseBall(this);
AddCommandChangeSeb(1);
if (GameUtil::Random(100) < 8) {
AddCommandGetTPoint();
}
AddCommandWait(Player::SEB_H_KICK_ANIME()[pls::cs::Int32(Player::SEB_H_KICK_ANIME().length()) - 1]);
AddCommandChangeSeb(0);
AddCommandTrainingBallWait();
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else if ((recoveredScriptCommand == 20)) {
{
pls::cs::Ref<TBall> ball9 = require(tGroupArea_)->GetBall(this, 1);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(ball9)->flag_, 8);})) {
IntArray collisionData19 = require(Player::udat_())->GetCollisionData(0, 0);
IntArray collisionData20 = require(Player::udat_())->GetCollisionData(1, 1);
pls::cs::Single recoveredUnusedSingle17;
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData19[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData19[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData19[2]; pls::cs::Single cs_arg3 = collisionData19[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(require(ball9)->pos_)->x_; auto cs_right = pls::cs::Single(collisionData20[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(require(ball9)->pos_)->z_; auto cs_right = pls::cs::Single(collisionData20[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData20[2]; pls::cs::Single cs_arg7 = collisionData20[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
require(ball9)->ReceiveBall(this);
if (GameUtil::Random(100) < 10) {
require(ball9)->ReleaseBall(this);
require(ball9)->receive_wait = require(ball9)->receive_wait * 2;
pls::cs::Int32 angle3 = GameUtil::Random(360);
pls::cs::Int32 angle4 = GameUtil::Random(20) + 10;
pls::cs::Single y3 = 7.0f * GameUtil::Sin(angle4);
auto cs_left_93 = 7.0f * GameUtil::Cos(angle4); auto cs_right_93 = GameUtil::Cos(angle3);
pls::cs::Single x4 = cs_left_93 * cs_right_93;
auto cs_left_94 = 7.0f * GameUtil::Cos(angle4); auto cs_right_94 = GameUtil::Sin(angle3);
pls::cs::Single z3 = cs_left_94 * cs_right_94;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(ball9)->v_)->Set(x4, y3, z3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(ball9)->a_)->Set(0.0f, -0.45f, 0.0f);});
AddCommandWait(14);
AddCommandTrainingBallChase();
pls::cs::Int32 x5 = pls::cs::to_int32(([&]() -> pls::cs::Single { pls::cs::Single cs_arg0 = 10 + trainingId_[4] * 80; pls::cs::Single cs_arg3 = require(require(tGroupArea_)->centerPos_)->x_ - require(tGroupArea_)->coatW_ / 2.0f; pls::cs::Single cs_arg4 = require(require(tGroupArea_)->centerPos_)->x_ + require(tGroupArea_)->coatW_ / 2.0f; return GameUtil::RateConvertFloat(cs_arg0, 0.0f, 99.0f, cs_arg3, cs_arg4, true); }()));
pls::cs::Int32 z4 = pls::cs::to_int32(require(require(tGroupArea_)->centerPos_)->z_);
AddCommandTrainigMoveGoalPosSet(x5, z4);
AddCommandChangeDirect(1 + 2 * trainingId_[4]);
AddCommandWait(GameUtil::Random(10) + 4);
AddCommandTrainingBallKick();
} else {
AddCommandWait(GameUtil::Random(10) + 4);
AddCommandTrainingBallKick();
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
}
}
} else if ((recoveredScriptCommand == 21)) {
{
pls::cs::Ref<TBall> ball8 = require(tGroupArea_)->GetBall(this, 2);
IntArray collisionData17 = require(Player::udat_())->GetCollisionData(0, 0);
IntArray collisionData18 = require(Player::udat_())->GetCollisionData(1, 1);
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData17[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData17[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData17[2]; pls::cs::Single cs_arg3 = collisionData17[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(require(ball8)->pos_)->x_; auto cs_right = pls::cs::Single(collisionData18[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(require(ball8)->pos_)->z_; auto cs_right = pls::cs::Single(collisionData18[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData18[2]; pls::cs::Single cs_arg7 = collisionData18[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(ball8)->flag_, 8);})) {
require(ball8)->ReceiveBall(this);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else {
Move(require(ball8)->pos_, -1);
}
}
} else if ((recoveredScriptCommand == 22)) {
{
pls::cs::Ref<TBall> ball3 = require(tGroupArea_)->GetBall(this, 3);
pls::cs::Int32 num9 = GameUtil::Random(3);
if (GameUtil::Random(100) < 10) {
num9 = -1;
} else if (GameUtil::Random(100) < 8) {
AddCommandGetTPoint();
}
pls::cs::Int32 num10 = 10;
if (num9 != -1) {
num10 = TPlayer::LIFTING_TIME()[firstScript[1]][num9];
pls::cs::Single y = (([&]() -> pls::cs::FloatEval { auto cs_left = require(TPlayer::LIFTING_POS().get_Item(num9))->y_; auto cs_right = require(require(ball3)->pos_)->y_; return cs_left - cs_right; }())) / pls::cs::Single(num10) - (-0.45f * pls::cs::Single((num10 + 1))) / 2.0f;
pls::cs::Single x = (([&]() -> pls::cs::FloatEval { auto cs_left = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = require(TPlayer::LIFTING_POS().get_Item(num9))->x_; return cs_left + cs_right; }()); auto cs_right = require(require(ball3)->pos_)->x_; return cs_left - cs_right; }())) / pls::cs::Single(num10);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(ball3)->v_)->Set(x, y, 0.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(ball3)->a_)->Set(0.0f, -0.45f, 0.0f);});
pls::cs::Single recoveredUnusedSingle33;
} else {
pls::cs::Int32 angle = GameUtil::Random(360);
pls::cs::Int32 angle2 = GameUtil::Random(60) - 45;
pls::cs::Single y2 = 7.0f * GameUtil::Sin(angle2);
auto cs_left_95 = 7.0f * GameUtil::Cos(angle2); auto cs_right_95 = GameUtil::Cos(angle);
pls::cs::Single x2 = cs_left_95 * cs_right_95;
auto cs_left_96 = 7.0f * GameUtil::Cos(angle2); auto cs_right_96 = GameUtil::Sin(angle);
pls::cs::Single z = cs_left_96 * cs_right_96;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(ball3)->v_)->Set(x2, y2, z);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(ball3)->a_)->Set(0.0f, -0.45f, 0.0f);});
}
if ((num9 == 0)) {
AddCommandWait(num10 - (Player::SEB_H_KICK_ANIME()[pls::cs::Int32(Player::SEB_H_KICK_ANIME().length()) - 1] - 1));
AddCommandChangeDirect(2);
AddCommandWait(5);
AddCommandChangeSeb(1);
AddCommandWait(Player::SEB_H_KICK_ANIME()[pls::cs::Int32(Player::SEB_H_KICK_ANIME().length()) - 1] - 1);
AddCommandChangeSeb(0);
AddCommandLifting(num9);
} else if ((num9 == 1)) {
AddCommandWait(num10 - (Player::SEB_H_KICK_ANIME()[pls::cs::Int32(Player::SEB_H_KICK_ANIME().length()) - 1] - 1));
AddCommandChangeDirect(1);
AddCommandWait(5);
AddCommandChangeSeb(1);
AddCommandWait(Player::SEB_H_KICK_ANIME()[pls::cs::Int32(Player::SEB_H_KICK_ANIME().length()) - 1] - 1);
AddCommandChangeSeb(0);
AddCommandLifting(num9);
} else if ((num9 == 2)) {
AddCommandWait(num10 - 14 + 5);
AddCommandFlagOff(2);
AddCommandWait(14);
AddCommandFlagOn(2);
AddCommandLifting(num9);
} else if ((num9 == -1)) {
{
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(flag_, 131072);});
require(ball3)->ReleaseBall(this);
require(ball3)->receive_wait = require(ball3)->receive_wait * 2;
AddCommandWait(14);
AddCommandLiftingBallChase();
pls::cs::Int32 x3 = pls::cs::to_int32(([&]() -> pls::cs::Single { pls::cs::Single cs_arg0 = 30 + trainingId_[4] * 40; pls::cs::Single cs_arg3 = require(require(tGroupArea_)->centerPos_)->x_ - require(tGroupArea_)->coatW_ / 2.0f; pls::cs::Single cs_arg4 = require(require(tGroupArea_)->centerPos_)->x_ + require(tGroupArea_)->coatW_ / 2.0f; return GameUtil::RateConvertFloat(cs_arg0, 0.0f, 99.0f, cs_arg3, cs_arg4, true); }()));
pls::cs::Int32 z2 = pls::cs::to_int32(require(require(tGroupArea_)->centerPos_)->z_);
AddCommandTrainigMoveGoalPosSet(x3, z2);
AddCommandFlagOn(131072);
AddCommandChangeDirect(2);
AddCommandLifting(0);
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else if ((recoveredScriptCommand == 23)) {
{
pls::cs::Ref<TBall> ball5 = require(tGroupArea_)->GetBall(this, 4);
IntArray collisionData7 = require(Player::udat_())->GetCollisionData(0, 0);
IntArray collisionData8 = require(Player::udat_())->GetCollisionData(1, 1);
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData7[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData7[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData7[2]; pls::cs::Single cs_arg3 = collisionData7[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(require(ball5)->pos_)->x_; auto cs_right = pls::cs::Single(collisionData8[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(require(ball5)->pos_)->z_; auto cs_right = pls::cs::Single(collisionData8[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData8[2]; pls::cs::Single cs_arg7 = collisionData8[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(ball5)->flag_, 8);})) {
require(ball5)->ReceiveBall(this);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else {
Move(require(ball5)->pos_, -1);
}
}
} else if ((recoveredScriptCommand == 24)) {
{
pls::cs::Ref<data::PlayerData> playerData3 = require(Player::apdat_())->pData_.get_Item(pData_id_);
pls::cs::Int32 num19 = require(playerData3)->paramPhysical_[2];
pls::cs::Single cs_arg3_97 = require(TPlayer::CORN_AROUND_POS()[dpoint].get_Item(0))->x_; pls::cs::Single cs_arg4_97 = require(TPlayer::CORN_AROUND_POS()[dpoint].get_Item(1))->x_;
pls::cs::Single num20 = GameUtil::RateConvertFloat(num19, 0.0f, 1000.0f, cs_arg3_97, cs_arg4_97, true);
pls::cs::Single cs_arg3_98 = require(TPlayer::CORN_AROUND_POS()[dpoint].get_Item(0))->z_; pls::cs::Single cs_arg4_98 = require(TPlayer::CORN_AROUND_POS()[dpoint].get_Item(1))->z_;
pls::cs::Single num21 = GameUtil::RateConvertFloat(num19, 0.0f, 1000.0f, cs_arg3_98, cs_arg4_98, true);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = require(tGroupArea_)->traPos_.get_Item(dcorn); require(goalPos_)->Set(cs_arg0); }());});
require(goalPos_)->x_ = require(goalPos_)->x_ + num20;
if (dcorn % 2 == 0) {
require(goalPos_)->z_ = require(goalPos_)->z_ + num21;
} else {
require(goalPos_)->z_ = require(goalPos_)->z_ + (-num21);
}
IntArray collisionData15 = require(Player::udat_())->GetCollisionData(0, 5);
IntArray collisionData16 = require(Player::udat_())->GetCollisionData(1, 5);
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData15[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData15[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData15[2]; pls::cs::Single cs_arg3 = collisionData15[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->x_; auto cs_right = pls::cs::Single(collisionData16[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->z_; auto cs_right = pls::cs::Single(collisionData16[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData16[2]; pls::cs::Single cs_arg7 = collisionData16[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
++dpoint;
if (dpoint == TPlayer::CORN_AROUND_POS().length()) {
dpoint = 0;
++dcorn;
if (dcorn == 4) {
pls::cs::Ref<TBall> ball7 = require(tGroupArea_)->GetBall(this, 5);
require(ball7)->ReleaseBall(this);
{ auto cs_target = ball7; pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(require(ball7)->flag_, 1);}); require(cs_target)->flag_ = cs_value; }
AddCommandGetTPoint();
AddCommandDribbleOlderRegist();
{ pls::cs::Int32 cs_arg0 = pls::cs::to_int32((require(require(tGroupArea_)->traPos_.get_Item(pls::cs::Int32(require(tGroupArea_)->traPos_.length()) - 1))->x_ + 20.0f)); pls::cs::Int32 cs_arg1 = pls::cs::to_int32((require(require(tGroupArea_)->traPos_.get_Item(0))->z_ + 80.0f)); AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1); }
{ pls::cs::Int32 cs_arg0 = pls::cs::to_int32((require(require(tGroupArea_)->traPos_.get_Item(0))->x_ - 20.0f)); pls::cs::Int32 cs_arg1 = pls::cs::to_int32((require(require(tGroupArea_)->traPos_.get_Item(0))->z_ + 80.0f)); AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1); }
AddCommandDribbleOlder();
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
}
} else {
Move(goalPos_, -1);
}
}
} else if ((recoveredScriptCommand == 25)) {
{
pls::cs::Int32 num12 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(tGroupArea_)->older_vec), pls::cs::box(this));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = require(tGroupArea_)->traPos_.get_Item(0); require(goalPos_)->Set(cs_arg0); }());});
require(goalPos_)->x_ = require(goalPos_)->x_ - 20.0f;
require(goalPos_)->z_ = require(goalPos_)->z_ + pls::cs::Single(num12) * 20.0f;
IntArray collisionData9 = require(Player::udat_())->GetCollisionData(0, 5);
IntArray collisionData10 = require(Player::udat_())->GetCollisionData(1, 5);
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData9[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData9[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData9[2]; pls::cs::Single cs_arg3 = collisionData9[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->x_; auto cs_right = pls::cs::Single(collisionData10[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->z_; auto cs_right = pls::cs::Single(collisionData10[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData10[2]; pls::cs::Single cs_arg7 = collisionData10[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
direct_ = 2;
if (num12 == 0 && require(tGroupArea_)->trainingWait_ <= 0) {
pls::cs::Ref<TBall> ball6 = require(tGroupArea_)->GetBall(this, 6);
if (is_null(ball6)) {
return pls::cs::flow_return(true);
}
require(ball6)->ReceiveBall(this);
{ auto cs_target = ball6; pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(require(ball6)->flag_, 1);}); require(cs_target)->flag_ = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(require(tGroupArea_)->older_vec), num12);});
require(tGroupArea_)->trainingWait_ = 40;
dcorn = 0;
dpoint = 0;
AddCommandDribble();
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else {
Move(goalPos_, -1);
}
}
} else if ((recoveredScriptCommand == 26)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(require(tGroupArea_)->older_vec), pls::cs::box(this));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 27)) {
{
pls::cs::Ref<data::PlayerData> playerData2 = require(Player::apdat_())->pData_.get_Item(pData_id_);
pls::cs::Int32 num11 = 100;
pls::cs::Ref<TBall> ball4 = require(tGroupArea_)->GetBall(this, 7);
{ pls::cs::Ref<kl_util3d::Vector3D> cs_arg1 = require(tGroupArea_)->traPos_.get_Item(2); require(ball4)->SetShoot(this, cs_arg1); }
require(ball4)->ReleaseBall(this);
AddCommandChangeSeb(1);
AddCommandWait(Player::SEB_H_KICK_ANIME()[pls::cs::Int32(Player::SEB_H_KICK_ANIME().length()) - 1]);
AddCommandChangeSeb(0);
AddCommandWait(6);
AddCommandGetTPoint();
AddCommandShootOlderRegist();
AddCommandShootOlder();
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else if ((recoveredScriptCommand == 28)) {
{
pls::cs::Int32 num4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_IndexOf(require(require(tGroupArea_)->older_vec), pls::cs::box(this));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = require(tGroupArea_)->traPos_.get_Item(0); require(goalPos_)->Set(cs_arg0); }());});
require(goalPos_)->x_ = require(goalPos_)->x_ - pls::cs::Single(num4) * 20.0f;
IntArray collisionData = require(Player::udat_())->GetCollisionData(0, 5);
IntArray collisionData2 = require(Player::udat_())->GetCollisionData(1, 5);
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData[2]; pls::cs::Single cs_arg3 = collisionData[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->x_; auto cs_right = pls::cs::Single(collisionData2[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->z_; auto cs_right = pls::cs::Single(collisionData2[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData2[2]; pls::cs::Single cs_arg7 = collisionData2[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
direct_ = 1;
if (num4 == 0) {
if ([&]() -> bool { auto cs_left = require(require(tGroupArea_)->traPos_.get_Item(1))->z_; auto cs_right = require(require(tGroupArea_)->traPos_.get_Item(0))->z_; return cs_left > cs_right; }()) {
direct_ = 0;
} else {
direct_ = 2;
}
}
if (num4 == 0 && require(tGroupArea_)->trainingWait_ <= 0) {
pls::cs::Ref<TBall> ball = require(tGroupArea_)->GetBall(this, 8);
require(ball)->ReceiveBall(this);
{ auto cs_target = ball; pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(require(ball)->flag_, 1);}); require(cs_target)->flag_ = cs_value; }
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(require(tGroupArea_)->older_vec), num4);});
require(tGroupArea_)->trainingWait_ = 50;
pls::cs::Int32 direct = 0;
if (trainingId_[1] % 2 == 1) {
direct = 2;
}
{ pls::cs::Int32 cs_arg0 = pls::cs::to_int32(require(require(tGroupArea_)->traPos_.get_Item(1))->x_); pls::cs::Int32 cs_arg1 = pls::cs::to_int32(require(require(tGroupArea_)->traPos_.get_Item(1))->z_); AddCommandTrainigMoveGoalPosSet(cs_arg0, cs_arg1); }
AddCommandChangeDirect(direct);
AddCommandWait(12);
AddCommandShoot();
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else {
Move(goalPos_, -1);
}
}
} else if ((recoveredScriptCommand == 29)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(require(tGroupArea_)->older_vec), pls::cs::box(this));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 30)) {
{
for (pls::cs::Int32 k = 0; k < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(tGroupArea_)->tBallList_));}); ++k) {
pls::cs::Ref<TBall> tBall3 = pls::cs::unbox<pls::cs::Ref<TBall>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(tGroupArea_)->tBallList_), k);}));
if (!require(tBall3)->ChBallDirectHere(this)) {
continue;
}
pls::cs::Int32 toGoalLineTime = require(tBall3)->GetToGoalLineTime(this);
if (toGoalLineTime > 0) {
if (toGoalLineTime < Player::SEB_H_SAVING_ANIME()[0] * 5 / 10) {
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(flag_, 8);});
AddCommandChangeSeb(14);
AddCommandTraSaving();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(seb_startPos)->Set(pos_);});
{ auto cs_target = seb_v; pls::cs::Single cs_value = GameUtil::SetVStop(10.0f, Player::SEB_H_SAVING_ANIME()[0] / 2); require(cs_target)->y_ = cs_value; }
seb_ay = GameUtil::SetAStop(10.0f, Player::SEB_H_SAVING_ANIME()[0] / 2);
{ auto cs_target = seb_v; auto cs_left_99 = (require(require(tBall3)->g1_TBall)->x_ - require(pos_)->x_); auto cs_right_99 = pls::cs::Single((Player::SEB_H_SAVING_ANIME()[0] / 2));
pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_99 / cs_right_99); require(cs_target)->x_ = cs_value; }
require(seb_v)->z_ = 0.0f;
pls::cs::Single num17 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::Sqrt(require(seb_v)->x_ * require(seb_v)->x_ + require(seb_v)->z_ * require(seb_v)->z_);}));
pls::cs::Single num18 = data::PlayerData::GetKeeperJampMax(this) / 2.0f;
if (num17 > num18) {
require(seb_v)->x_ = require(seb_v)->x_ * num18 / num17;
require(seb_v)->z_ = require(seb_v)->z_ * num18 / num17;
}
if (num17 < 1.5f) {
if (require(require(tGroupArea_)->tArea_)->pId_ == 2) {
direct_ = 2;
} else {
direct_ = 0;
}
} else if (require(seb_v)->x_ < 0.0f) {
direct_ = 3;
} else {
direct_ = 1;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
break;
}
}
}
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 8);})) {
IntArray collisionData13 = require(Player::udat_())->GetCollisionData(0, 5);
IntArray collisionData14 = require(Player::udat_())->GetCollisionData(1, 5);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kl_util3d::Vector3D> cs_arg0 = require(tGroupArea_)->traPos_.get_Item(2); require(goalPos_)->Set(cs_arg0); }());});
if (require(require(tGroupArea_)->tArea_)->pId_ == 2) {
require(goalPos_)->z_ = require(goalPos_)->z_ + -30.0f;
} else {
require(goalPos_)->z_ = require(goalPos_)->z_ + 30.0f;
}
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData13[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData13[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData13[2]; pls::cs::Single cs_arg3 = collisionData13[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->x_; auto cs_right = pls::cs::Single(collisionData14[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->z_; auto cs_right = pls::cs::Single(collisionData14[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData14[2]; pls::cs::Single cs_arg7 = collisionData14[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
if (require(require(tGroupArea_)->tArea_)->pId_ == 2) {
direct_ = 2;
} else {
direct_ = 0;
}
} else {
Move(goalPos_, -1);
}
}
}
} else if ((recoveredScriptCommand == 31)) {
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 8);}) && !pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 4);})) {
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(tGroupArea_)->tBallList_));}); ++i) {
pls::cs::Ref<TBall> tBall = pls::cs::unbox<pls::cs::Ref<TBall>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(tGroupArea_)->tBallList_), i);}));
if (!require(tBall)->ChBallDirectHere(this)) {
continue;
}
CollisionSaving(tBall);
}
}
if ([&]() -> bool { auto cs_left = sebCnt_; auto cs_right = Player::SEB_H_SAVING_ANIME()[0]; return cs_left < cs_right; }()) {
require(pos_)->x_ = require(seb_startPos)->x_ + require(seb_v)->x_ * pls::cs::Single(sebCnt_);
require(pos_)->z_ = require(seb_startPos)->z_ + require(seb_v)->z_ * pls::cs::Single(sebCnt_);
require(pos_)->y_ = require(seb_v)->y_ * pls::cs::Single(sebCnt_) + seb_ay * pls::cs::Single(sebCnt_) * pls::cs::Single((sebCnt_ + 1)) / 2.0f;
} else {
{ auto cs_target = pos_; auto cs_left_100 = ([&]() -> pls::cs::FloatEval { auto cs_left_100 = require(seb_startPos)->x_; auto cs_right_100 = ([&]() -> pls::cs::FloatEval { auto cs_left_100 = require(seb_v)->x_; auto cs_right_100 = pls::cs::Single(Player::SEB_H_SAVING_ANIME()[0]); return cs_left_100 * cs_right_100; }()); return cs_left_100 + cs_right_100; }()); auto cs_right_100 = ([&]() -> pls::cs::FloatEval { auto cs_left_100 = require(seb_v)->x_ / 3.0f; auto cs_right_100 = pls::cs::Single((([&]() -> pls::cs::Int32 { auto cs_left_100 = sebCnt_; auto cs_right_100 = Player::SEB_H_SAVING_ANIME()[0]; return cs_left_100 - cs_right_100; }()))); return cs_left_100 * cs_right_100; }());
pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_100 + cs_right_100); require(cs_target)->x_ = cs_value; }
{ auto cs_target = pos_; auto cs_left_101 = ([&]() -> pls::cs::FloatEval { auto cs_left_101 = require(seb_startPos)->z_; auto cs_right_101 = ([&]() -> pls::cs::FloatEval { auto cs_left_101 = require(seb_v)->z_; auto cs_right_101 = pls::cs::Single(Player::SEB_H_SAVING_ANIME()[0]); return cs_left_101 * cs_right_101; }()); return cs_left_101 + cs_right_101; }()); auto cs_right_101 = ([&]() -> pls::cs::FloatEval { auto cs_left_101 = require(seb_v)->z_ / 3.0f; auto cs_right_101 = pls::cs::Single((([&]() -> pls::cs::Int32 { auto cs_left_101 = sebCnt_; auto cs_right_101 = Player::SEB_H_SAVING_ANIME()[0]; return cs_left_101 - cs_right_101; }()))); return cs_left_101 * cs_right_101; }());
pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_101 + cs_right_101); require(cs_target)->z_ = cs_value; }
require(pos_)->y_ = require(seb_v)->y_ * pls::cs::Single(sebCnt_) + seb_ay * pls::cs::Single(sebCnt_) * pls::cs::Single((sebCnt_ + 1)) / 2.0f;
if (require(pos_)->y_ < 0.0f) {
require(pos_)->y_ = 0.0f;
}
}
pls::cs::Ref<TBall> tBall2 = pls::cs::Ref<TBall>{};
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 4);})) {
for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(tGroupArea_)->tBallList_));}); ++j) {
tBall2 = pls::cs::unbox<pls::cs::Ref<TBall>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(tGroupArea_)->tBallList_), j);}));
if (!is_null(require(tBall2)->t_owner_) && ([&]() -> bool { auto cs_left = require(require(tBall2)->t_owner_)->trainingId_[0]; auto cs_right = trainingId_[0]; return cs_left == cs_right; }())) {
break;
}
}
}
if ([&]() -> bool { auto cs_left = sebCnt_; auto cs_right = Player::SEB_H_SAVING_ANIME()[pls::cs::Int32(Player::SEB_H_SAVING_ANIME().length()) - 1]; return cs_left >= cs_right; }()) {
AddCommandGetTPoint();
if (!is_null(tBall2)) {
require(tBall2)->ReleaseBall(this);
}
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(flag_, 8);});
AddCommandChangeSeb(0);
AddCommandShootGK();
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
}
} else if ((recoveredScriptCommand == 32)) {
{
seb_ = 10;
pls::cs::Int32 num13 = 0;
pls::cs::Int32 num14 = 0;
if (require(pos_)->x_ >= require(require(tGroupArea_)->centerPos_)->x_ + require(tGroupArea_)->coatW_ / 2.0f) {
num13 = 2;
} else if (require(pos_)->x_ > require(require(tGroupArea_)->centerPos_)->x_ - require(tGroupArea_)->coatW_ / 2.0f) {
num13 = 1;
} else {
num13 = 0;
}
if (require(pos_)->z_ >= require(require(tGroupArea_)->centerPos_)->z_ + require(tGroupArea_)->coatH_ / 2.0f) {
num14 = 0;
} else if (require(pos_)->z_ > require(require(tGroupArea_)->centerPos_)->z_ - require(tGroupArea_)->coatH_ / 2.0f) {
num14 = 1;
} else {
num14 = 2;
}
if ((num13 == 0)) {
require(goalPos_)->x_ = require(require(tGroupArea_)->centerPos_)->x_ - require(tGroupArea_)->coatW_ / 2.0f;
} else if ((num13 == 1)) {
require(goalPos_)->x_ = require(pos_)->x_;
} else {
require(goalPos_)->x_ = require(require(tGroupArea_)->centerPos_)->x_ + require(tGroupArea_)->coatW_ / 2.0f;
}
if ((num14 == 0)) {
require(goalPos_)->z_ = require(require(tGroupArea_)->centerPos_)->z_ + require(tGroupArea_)->coatH_ / 2.0f;
} else if ((num14 == 1)) {
require(goalPos_)->z_ = require(pos_)->z_;
} else {
require(goalPos_)->z_ = require(require(tGroupArea_)->centerPos_)->z_ - require(tGroupArea_)->coatH_ / 2.0f;
}
IntArray collisionData11 = require(Player::udat_())->GetCollisionData(0, 5);
IntArray collisionData12 = require(Player::udat_())->GetCollisionData(1, 5);
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData11[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData11[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData11[2]; pls::cs::Single cs_arg3 = collisionData11[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->x_; auto cs_right = pls::cs::Single(collisionData12[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->z_; auto cs_right = pls::cs::Single(collisionData12[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData12[2]; pls::cs::Single cs_arg7 = collisionData12[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
pls::cs::Int32 num15 = num13 + num14 * 3;
pls::cs::Int32 num16 = 0;
if ((num15 == 1) || (num15 == 2)) {
num16 = 0;
} else if ((num15 == 0) || (num15 == 3)) {
num16 = 3;
} else if ((num15 == 6) || (num15 == 7)) {
num16 = 2;
} else if ((num15 == 8) || (num15 == 5)) {
num16 = 1;
} else {
num16 = GameUtil::Random(4);
}
if ((num16 == 0)) {
AddCommandTrainigMoveGoalPosSet(pls::cs::to_int32(require(pos_)->x_), pls::cs::to_int32((require(require(tGroupArea_)->centerPos_)->z_ + require(tGroupArea_)->coatH_ / 2.0f)));
} else if ((num16 == 1)) {
AddCommandTrainigMoveGoalPosSet(pls::cs::to_int32((require(require(tGroupArea_)->centerPos_)->x_ + require(tGroupArea_)->coatW_ / 2.0f)), pls::cs::to_int32(require(pos_)->z_));
} else if ((num16 == 2)) {
AddCommandTrainigMoveGoalPosSet(pls::cs::to_int32(require(pos_)->x_), pls::cs::to_int32((require(require(tGroupArea_)->centerPos_)->z_ - require(tGroupArea_)->coatH_ / 2.0f)));
} else if ((num16 == 3)) {
AddCommandTrainigMoveGoalPosSet(pls::cs::to_int32((require(require(tGroupArea_)->centerPos_)->x_ - require(tGroupArea_)->coatW_ / 2.0f)), pls::cs::to_int32(require(pos_)->z_));
}
AddCommandRunning(num16);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
Move(goalPos_, -1);
}
} else if ((recoveredScriptCommand == 33)) {
{
if (firstScript[1] == 0) {
require(goalPos_)->x_ = require(require(tGroupArea_)->centerPos_)->x_ - require(tGroupArea_)->coatW_ / 2.0f;
require(goalPos_)->z_ = require(require(tGroupArea_)->centerPos_)->z_ + require(tGroupArea_)->coatH_ / 2.0f;
} else if (firstScript[1] == 1) {
require(goalPos_)->x_ = require(require(tGroupArea_)->centerPos_)->x_ + require(tGroupArea_)->coatW_ / 2.0f;
require(goalPos_)->z_ = require(require(tGroupArea_)->centerPos_)->z_ + require(tGroupArea_)->coatH_ / 2.0f;
} else if (firstScript[1] == 2) {
require(goalPos_)->x_ = require(require(tGroupArea_)->centerPos_)->x_ + require(tGroupArea_)->coatW_ / 2.0f;
require(goalPos_)->z_ = require(require(tGroupArea_)->centerPos_)->z_ - require(tGroupArea_)->coatH_ / 2.0f;
} else if (firstScript[1] == 3) {
require(goalPos_)->x_ = require(require(tGroupArea_)->centerPos_)->x_ - require(tGroupArea_)->coatW_ / 2.0f;
require(goalPos_)->z_ = require(require(tGroupArea_)->centerPos_)->z_ - require(tGroupArea_)->coatH_ / 2.0f;
}
IntArray collisionData3 = require(Player::udat_())->GetCollisionData(0, 5);
IntArray collisionData4 = require(Player::udat_())->GetCollisionData(1, 5);
if ([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData3[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData3[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData3[2]; pls::cs::Single cs_arg3 = collisionData3[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->x_; auto cs_right = pls::cs::Single(collisionData4[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(goalPos_)->z_; auto cs_right = pls::cs::Single(collisionData4[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData4[2]; pls::cs::Single cs_arg7 = collisionData4[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) {
pls::cs::Int32 next_point = (firstScript[1] - 1 + 4) % 4;
AddCommandGetTPoint();
AddCommandRunning(next_point);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
Move(goalPos_, -1);
}
} else if ((recoveredScriptCommand == 34)) {
{
pls::cs::Ref<data::PlayerData> playerData = require(Player::apdat_())->pData_.get_Item(pData_id_);
pls::cs::Int32 lv_ = require(playerData)->lv_;
pls::cs::Int32 num5 = require(playerData)->UpdateStockExp();
if (num5 > 0) {
{ auto cs_receiver = Player::apdat_(); pls::cs::Int32 cs_arg0 = trainingId_[0]; require(cs_receiver)->AddEffectExpUp(cs_arg0, num5); }
}
if (lv_ != require(playerData)->lv_) {
{ auto cs_receiver = Player::apdat_(); pls::cs::Int32 cs_arg0 = main::AppData::EFF_EXPUP_TIME()[1]; pls::cs::Int32 cs_arg1 = trainingId_[0]; require(cs_receiver)->AddEffectLvUp(cs_arg0, cs_arg1); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
} else if ((recoveredScriptCommand == 35)) {
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(flag_, 1);});
require(Player::udat_())->SetTenantIn(this);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
} else if ((recoveredScriptCommand == 36)) {
{
pls::cs::Int32 num = GameUtil::Random(100);
pls::cs::Single cs_arg3_102 = require(MapMain::MOVE_POINT().get_Item(8))->x_; pls::cs::Single cs_arg4_102 = require(MapMain::MOVE_POINT().get_Item(9))->x_;
pls::cs::Single num2 = GameUtil::RateConvertFloat(num, 0.0f, 99.0f, cs_arg3_102, cs_arg4_102, true);
pls::cs::Single cs_arg3_103 = require(MapMain::MOVE_POINT().get_Item(8))->z_; pls::cs::Single cs_arg4_103 = require(MapMain::MOVE_POINT().get_Item(9))->z_;
pls::cs::Single num3 = GameUtil::RateConvertFloat(num, 0.0f, 99.0f, cs_arg3_103, cs_arg4_103, true);
AddCommandTrainigMoveGoalPosSet(pls::cs::to_int32(num2), pls::cs::to_int32(num3));
AddCommandWait(25 + GameUtil::Random(30));
if (GameUtil::Random(100) < 30) {
AddCommandChangeDirect(GameUtil::Random(4));
AddCommandWait(20 + GameUtil::Random(10));
}
AddCommandSvisorAct();
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(script_), 0);});
return pls::cs::flow_continue(11570);
}
}
return pls::cs::flow_break(11570);
} return {};}, [&]() {
insertScriptIndex_ = -1;
});
if (cs_flow_101.is_continue(11570)) continue;
if (cs_flow_101.is_break(11570)) break;
return cs_flow_101.value();
}
}
return false;

}
}

// M:game.TPlayer.Update_trainings
void TPlayer::Update_trainings() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.Update_trainings",game);
{
frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
sebCnt_ = ((sebCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
this->Script();
Camera::ConvertGlobalToScreen(pos_, screen_pos_);
}
}

// M:game.TPlayer.Draw_training(kairo.unity.ui.Graphics)
void TPlayer::Draw_training(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.Draw_training(kairo.unity.ui.Graphics)",game);
{
form::GameForm::ensure_initialized();
Player::ensure_initialized();

if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 1);})) {
return;
}
Camera::ConvertGlobalToCamera(pos_, camera_pos);
require(shadowPos_)->x_ = require(pos_)->x_;
require(shadowPos_)->z_ = require(pos_)->z_;
Camera::ConvertGlobalToCamera(shadowPos_, TPlayer::camera_pos_shadow());
if (!GameUtil::ChRectHitRect(camera_pos[0] - 7, camera_pos[1] - 20, 14, 20, form::GameForm::VIEW_X(), form::GameForm::VIEW_Y(), form::GameForm::VIEW_W(), form::GameForm::VIEW_H(), false)) {
return;
}
pls::cs::Int32 depth = TPlayer::camera_pos_shadow()[1] + 1;
bool dark = false;
pls::cs::Int32 num = flag_;
pls::cs::Int32 num2 = 1;
if (seb_ == 11) {
num2 = 0;
}
{ auto cs_receiver = Player::apdat_(); pls::cs::Int32 cs_arg6 = TPlayer::camera_pos_shadow()[0]; pls::cs::Int32 cs_arg7 = TPlayer::camera_pos_shadow()[1] + num2; require(cs_receiver)->InsertGameObject(8, 0, depth, 2, 0, 4, cs_arg6, cs_arg7, dark, 0); }
if (seb_ == 5) {
pls::cs::Int32 num3 = sebCnt_ / 3;
if (num3 <= 2) {
Camera::ConvertGlobalToCamera(seb_startPos, TPlayer::camera_pos_sliding());
{ auto cs_receiver = Player::apdat_(); pls::cs::Int32 cs_arg6 = TPlayer::camera_pos_sliding()[0]; pls::cs::Int32 cs_arg7 = TPlayer::camera_pos_sliding()[1] + num2; require(cs_receiver)->InsertGameObject(8, 0, depth, 10, 7, num3, cs_arg6, cs_arg7, dark, 0); }
}
}
pls::cs::Int32 layer = SetDrawParam(seb_, -1);
{ auto cs_receiver = Player::apdat_(); pls::cs::Int32 cs_arg1 = trainingId_[0]; pls::cs::Int32 cs_arg6 = camera_pos[0]; pls::cs::Int32 cs_arg7 = camera_pos[1]; require(cs_receiver)->InsertGameObject(2, cs_arg1, depth, 0, 0, 0, cs_arg6, cs_arg7, dark, layer); }

}
}

// M:game.TPlayer.Draw_svisor(kairo.unity.ui.Graphics)
void TPlayer::Draw_svisor(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.Draw_svisor(kairo.unity.ui.Graphics)",game);
{
form::GameForm::ensure_initialized();
Player::ensure_initialized();

if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 1);})) {
return;
}
{
Camera::ConvertGlobalToCamera(pos_, camera_pos);
require(shadowPos_)->x_ = require(pos_)->x_;
require(shadowPos_)->z_ = require(pos_)->z_;
Camera::ConvertGlobalToCamera(shadowPos_, TPlayer::camera_pos_shadow());
if (!(GameUtil::ChRectHitRect(camera_pos[0] - 7, camera_pos[1] - 20, 14, 20, form::GameForm::VIEW_X(), form::GameForm::VIEW_Y(), form::GameForm::VIEW_W(), form::GameForm::VIEW_H(), false))) {
return;
}
{
pls::cs::Int32 depth = TPlayer::camera_pos_shadow()[1] + 1;
bool dark = false;
pls::cs::Int32 num = 1;
{ auto cs_receiver = Player::apdat_(); pls::cs::Int32 cs_arg6 = TPlayer::camera_pos_shadow()[0]; pls::cs::Int32 cs_arg7 = TPlayer::camera_pos_shadow()[1] + num; require(cs_receiver)->InsertGameObject(8, 0, depth, 2, 0, 4, cs_arg6, cs_arg7, dark, 0); }
pls::cs::Int32 layer = SetDrawParam(faceImg_, bodyImg_, seb_, -1);
{ auto cs_receiver = Player::apdat_(); pls::cs::Int32 cs_arg1 = trainingId_[0]; pls::cs::Int32 cs_arg6 = camera_pos[0]; pls::cs::Int32 cs_arg7 = camera_pos[1]; require(cs_receiver)->InsertGameObject(3, cs_arg1, depth, 0, 0, 0, cs_arg6, cs_arg7, dark, layer); }
}
}

}
}

// M:game.TPlayer.CollisionSaving(game.TBall)
void TPlayer::CollisionSaving(pls::cs::Ref<TBall> tball) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.CollisionSaving(game.TBall)",game);
{
Player::ensure_initialized();

IntArray collisionData = require(Player::udat_())->GetCollisionData(0, 0);
IntArray collisionData2 = require(Player::udat_())->GetCollisionData(1, 1);
if (([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->x_; auto cs_right = pls::cs::Single(collisionData[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(pos_)->z_; auto cs_right = pls::cs::Single(collisionData[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData[2]; pls::cs::Single cs_arg3 = collisionData[3]; pls::cs::Single cs_arg4 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(require(tball)->pos_)->x_; auto cs_right = pls::cs::Single(collisionData2[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg5 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(require(tball)->pos_)->z_; auto cs_right = pls::cs::Single(collisionData2[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg6 = collisionData2[2]; pls::cs::Single cs_arg7 = collisionData2[3]; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, true); }()) && pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 8);})) {
pls::cs::Int32 recoveredSavingChoice = GameUtil::Random(3);
if (recoveredSavingChoice == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(tball)->v_)->Set(0.0f, 0.0f, 0.0f);});
require(tball)->ReceiveBall(this);
} else if (recoveredSavingChoice == 1) {
auto cs_left_110 = GameUtil::Random(180); auto cs_right_110 = team_id_ * 180;
pls::cs::Int32 angle2 = cs_left_110 + cs_right_110;
pls::cs::Single recoveredUnusedX2, recoveredUnusedY2;
pls::cs::Single num2 = GameUtil::RateConvertFloat(GameUtil::Random(100), 0.0f, 99.0f, 5.0f, 10.0f, true);
pls::cs::Int32 x2 = GameUtil::Random(100);
pls::cs::Single dis2 = GameUtil::RateConvert(x2, 0, 99, 5, 20, true);
pls::cs::Int32 t2 = GameUtil::RateConvert(x2, 0, 99, 5, 10, true);
require(tball)->ReceiveBall(this);
require(tball)->ReleaseBall(this);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = require(tball)->v_; pls::cs::Single cs_arg0 = num2 * GameUtil::Cos(angle2); pls::cs::Single cs_arg2 = num2 * GameUtil::Sin(angle2); require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
{ auto cs_target = require(tball)->v_; pls::cs::Single cs_value = GameUtil::SetVStop(dis2, t2); require(cs_target)->y_ = cs_value; }
{ auto cs_target = require(tball)->a_; pls::cs::Single cs_value = GameUtil::SetAStop(dis2, t2); require(cs_target)->y_ = cs_value; }
} else {
auto cs_left_111 = GameUtil::Random(90) + 45; auto cs_right_111 = (1 - team_id_) * 180;
pls::cs::Int32 angle = cs_left_111 + cs_right_111;
pls::cs::Single recoveredUnusedX, recoveredUnusedY;
pls::cs::Single num = GameUtil::RateConvertFloat(GameUtil::Random(100), 0.0f, 99.0f, 2.5f, 5.0f, true);
pls::cs::Int32 x = GameUtil::Random(100);
pls::cs::Single dis = GameUtil::RateConvert(x, 0, 99, 2, 10, true);
pls::cs::Int32 t = GameUtil::RateConvert(x, 0, 99, 5, 10, true);
require(tball)->ReceiveBall(this);
require(tball)->ReleaseBall(this);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = require(tball)->v_; pls::cs::Single cs_arg0 = num * GameUtil::Cos(angle); pls::cs::Single cs_arg2 = num * GameUtil::Sin(angle); require(cs_receiver)->Set(cs_arg0, 0.0f, cs_arg2); }());});
{ auto cs_target = require(tball)->v_; pls::cs::Single cs_value = GameUtil::SetVStop(dis, t); require(cs_target)->y_ = cs_value; }
{ auto cs_target = require(tball)->a_; pls::cs::Single cs_value = GameUtil::SetAStop(dis, t); require(cs_target)->y_ = cs_value; }
}
}

}
}

// M:game.TPlayer.EndTrainingScript
void TPlayer::EndTrainingScript() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.EndTrainingScript",game);
{
pls::cs::Int32 num = GameUtil::Random(100);
pls::cs::Int32 num2 = GameUtil::Random(100);
if (require(require(tGroupArea_)->tArea_)->tMode_ == 4) {
require(goalPos_)->x_ = require(pos_)->x_;
require(goalPos_)->z_ = require(pos_)->z_;
} else {
{ auto cs_target = goalPos_; pls::cs::Single cs_value = GameUtil::RateConvertFloat(num, 0.0f, 99.0f, require(require(tGroupArea_)->centerPos_)->x_ - require(tGroupArea_)->coatW_ * 10.0f / 100.0f, require(require(tGroupArea_)->centerPos_)->x_ + require(tGroupArea_)->coatW_ * 10.0f / 100.0f, true); require(cs_target)->x_ = cs_value; }
{ auto cs_target = goalPos_; pls::cs::Single cs_value = GameUtil::RateConvertFloat(num2, 0.0f, 99.0f, require(require(tGroupArea_)->centerPos_)->z_ + require(tGroupArea_)->coatH_ * 5.0f / 100.0f, require(require(tGroupArea_)->centerPos_)->z_ - require(tGroupArea_)->coatH_ * 5.0f / 100.0f, true); require(cs_target)->z_ = cs_value; }
}
ClearScript();
AddCommandChangeSeb(0);
AddCommandFlagOn(2);
AddCommandTrainigMoveGoalPos();
}
}

// M:game.TPlayer.StopTraining
void TPlayer::StopTraining() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TPlayer.StopTraining",game);
{
seb_ = 0;
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(flag_, 12);});
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(flag_, 2);});
if (require(pos_)->y_ > 0.0f) {
require(pos_)->y_ = 0.0f;
}
ClearScript();
}
}
} // namespace game
}
