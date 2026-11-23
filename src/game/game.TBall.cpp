// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.PlayerData.hpp"
#include "form.GameForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameUtil.hpp"
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

void TBall::trace_edges(const pls::cs::EdgeVisitor&visitor)const {Ball::trace_edges(visitor);pls::cs::trace_value(tGroupArea_,visitor);pls::cs::trace_value(t_owner_,visitor);pls::cs::trace_value(t_lastOwner_,visitor);pls::cs::trace_value(g1_TBall,visitor);pls::cs::trace_value(shoot_goalPos_TBall,visitor);}

static IntArray TBall_camera_pos_dribble_2_storage{};

static IntArray TBall_camera_pos_shadow_2_storage{};

static PLS_NOINLINE void cs_init_0f74b892eb1cdde4_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(TBall_camera_pos_dribble_2_storage,visitor);pls::cs::trace_value(TBall_camera_pos_shadow_2_storage,visitor);});static pls::cs::TypeInitState state;state.run("game.TBall",flag,[](){
TBall_camera_pos_shadow_2_storage = pls::cs::evaluate_type_initializer_field("F:game.TBall.camera_pos_shadow",[&](){return IntArray::make(2);});
TBall_camera_pos_dribble_2_storage = pls::cs::evaluate_type_initializer_field("F:game.TBall.camera_pos_dribble",[&](){return IntArray::make(2);});

});}

void TBall::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_0f74b892eb1cdde4_slow(flag);}

IntArray& TBall::camera_pos_dribble_2(){TBall::ensure_initialized();return TBall_camera_pos_dribble_2_storage;}

IntArray& TBall::camera_pos_shadow_2(){TBall::ensure_initialized();return TBall_camera_pos_shadow_2_storage;}

void TBall::create_init(pls::cs::Ref<TBall> self,pls::cs::Int32 tId) {
TBall::ensure_initialized();
self->g1_TBall = kl_util3d::Vector3D::create();
self->shoot_goalPos_TBall = kl_util3d::Vector3D::create();
Ball::create_init(pls::cs::static_pointer_cast<Ball>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.#ctor(System.Int32)",game);
{
self->tId_ = tId;
}

}

// M:game.TBall.#ctor(System.Int32)
pls::cs::Ref<TBall> TBall::create(pls::cs::Int32 tId) {
TBall::ensure_initialized();
 auto self = pls::cs::make_ref<TBall>(); TBall::create_init(self,tId); return self; 
}

// M:game.TBall.Init_training(game.TGroupArea)
void TBall::Init_training(pls::cs::Ref<TGroupArea> tGroupArea) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.Init_training(game.TGroupArea)",game);
{
tGroupArea_ = tGroupArea;
}
}

// M:game.TBall.Serialize(java.io.OutputStream)
void TBall::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(tId_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, frame_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(direct_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteVector3D(os, pos_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteVector3D(os, shadowPos_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteVector3D(os, v_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteVector3D(os, a_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, screen_pos_[0]);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, screen_pos_[1]);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, screen_shadowPos_[0]);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, screen_shadowPos_[1]);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, camera_pos_[0]);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, camera_pos_[1]);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteFloat(os, v_len_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, flag_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteInt(os, stateCnt_);});
if (is_null(t_owner_)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(-1));});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(require(t_owner_)->trainingId_[0]));});
}
if (is_null(t_lastOwner_)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(-1));});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(require(t_lastOwner_)->trainingId_[0]));});
}
}
}

// M:game.TBall.Deserialize(java.io.InputStream)
void TBall::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.Deserialize(java.io.InputStream)",game);
{
tId_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
frame_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
direct_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
pos_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadVector3D(stream);});
shadowPos_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadVector3D(stream);});
v_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadVector3D(stream);});
a_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadVector3D(stream);});
{ auto cs_target = screen_pos_; auto cs_index = 0; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = screen_pos_; auto cs_index = 1; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = screen_shadowPos_; auto cs_index = 0; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = screen_shadowPos_; auto cs_index = 1; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = camera_pos_; auto cs_index = 0; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = camera_pos_; auto cs_index = 1; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
v_len_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(kl_unity_util::StreamUtil::ReadFloat(stream));});
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
state_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
stateCnt_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadInt(stream);});
ownerId_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
lastOwnerId_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
t_owner_ = pls::cs::Ref<TPlayer>{};
t_lastOwner_ = pls::cs::Ref<TPlayer>{};
}
}

// M:game.TBall.Deserialize2
void TBall::Deserialize2() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.Deserialize2",game);
{
if (ownerId_ != -1) {
t_owner_ = require(UserData::GetInstance())->tPlayers_.get_Item(ownerId_);
}
if (lastOwnerId_ != -1) {
t_lastOwner_ = require(UserData::GetInstance())->tPlayers_.get_Item(lastOwnerId_);
}
}
}

// M:game.TBall.Update_training
void TBall::Update_training() {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.Update_training",game);
{
frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
savePosFrame_ = ((savePosFrame_ + 1) % 2147483647 /* Int32.MaxValue */);
bool flag = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 64);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(old_pos)->Set(pos_);});
if (!is_null(t_owner_)) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(t_owner_)->flag_, 131072);})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(v_)->Add(a_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pos_)->Add(v_);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pos_)->Set(require(t_owner_)->pos_);});
}
} else {
pls::cs::Single num;
pls::cs::Single num2;
if (require(a_)->y_ == 0.0f || require(v_)->y_ == 0.0f || require(pos_)->y_ <= 0.0f) {
num = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, 60.0f, 0.99f, 0.93f, true);
num2 = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, 60.0f, 0.99f, 0.93f, true);
require(v_)->x_ = require(v_)->x_ * num;
require(v_)->z_ = require(v_)->z_ * num2;
} else if (!flag) {
if (require(a_)->y_ == -0.25f) {
num = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, fallTime_ * 100 / 100, 0.995f, 0.96f, true);
num2 = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, fallTime_ * 100 / 100, 0.995f, 0.96f, true);
} else {
num = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, fallTime_ * 100 / 100, 0.995f, 0.97f, true);
num2 = GameUtil::RateConvertFloat(savePosFrame_, 0.0f, fallTime_ * 100 / 100, 0.995f, 0.97f, true);
}
require(v_)->x_ = require(v_)->x_ * num;
require(v_)->y_ = require(v_)->y_ * 0.995f;
require(v_)->z_ = require(v_)->z_ * num2;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(v_)->Add(a_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pos_)->Add(v_);});
v_len_ = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::Sqrt(require(v_)->x_ * require(v_)->x_ + require(v_)->z_ * require(v_)->z_);}));
if (require(require(tGroupArea_)->tArea_)->tMode_ == 3) {
bool flag2 = false;
pls::cs::Single recoveredUnusedSingle;
IntArray collisionData = require(udat_)->GetCollisionData(0, 1);
pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>> goal_gpos = require(tGroupArea_)->goal_gpos;
if (require(require(tGroupArea_)->tArea_)->pId_ == 2) {
if (([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(old_pos)->x_; auto cs_right = pls::cs::Single(collisionData[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(old_pos)->z_; auto cs_right = pls::cs::Single(collisionData[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData[2]; pls::cs::Single cs_arg3 = collisionData[3]; pls::cs::Single cs_arg4 = require(goal_gpos.get_Item(3))->x_; pls::cs::Single cs_arg5 = require(goal_gpos.get_Item(3))->z_; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 80.0f, 24.0f, true); }()) && require(old_pos)->y_ < 15.0f) {
flag2 = true;
}
} else if (([&]() -> bool { pls::cs::Single cs_arg0 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(old_pos)->x_; auto cs_right = pls::cs::Single(collisionData[0]); return cs_left + cs_right; }()); pls::cs::Single cs_arg1 = ([&]() -> pls::cs::FloatEval { auto cs_left = require(old_pos)->z_; auto cs_right = pls::cs::Single(collisionData[1]); return cs_left + cs_right; }()); pls::cs::Single cs_arg2 = collisionData[2]; pls::cs::Single cs_arg3 = collisionData[3]; pls::cs::Single cs_arg4 = require(goal_gpos.get_Item(0))->x_; pls::cs::Single cs_arg5 = require(goal_gpos.get_Item(0))->z_; return GameUtil::ChRectHitRectFloat(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 80.0f, 24.0f, true); }()) && require(old_pos)->y_ < 15.0f) {
flag2 = true;
}
if (flag2 && ([&]() -> bool { auto cs_left = require(old_pos)->x_; auto cs_right = require(goal_gpos.get_Item(0))->x_; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = require(old_pos)->x_; auto cs_right = require(goal_gpos.get_Item(1))->x_; return cs_left <= cs_right; }()) && (([&]() -> bool { auto cs_left = require(pos_)->x_; auto cs_right = require(goal_gpos.get_Item(0))->x_; return cs_left < cs_right; }()) || ([&]() -> bool { auto cs_left = require(pos_)->x_; auto cs_right = require(goal_gpos.get_Item(1))->x_; return cs_left > cs_right; }()))) {
if ([&]() -> bool { auto cs_left = require(pos_)->x_; auto cs_right = require(goal_gpos.get_Item(0))->x_; return cs_left < cs_right; }()) {
{ auto cs_target = pos_; pls::cs::Single cs_value = require(goal_gpos.get_Item(0))->x_; require(cs_target)->x_ = cs_value; }
}
if ([&]() -> bool { auto cs_left = require(pos_)->x_; auto cs_right = require(goal_gpos.get_Item(1))->x_; return cs_left > cs_right; }()) {
{ auto cs_target = pos_; pls::cs::Single cs_value = require(goal_gpos.get_Item(1))->x_; require(cs_target)->x_ = cs_value; }
}
}
if (flag2 && require(require(tGroupArea_)->tArea_)->pId_ == 2) {
if (([&]() -> bool { auto cs_left = require(old_pos)->z_; auto cs_right = require(goal_gpos.get_Item(3))->z_; return cs_left <= cs_right; }()) && ([&]() -> bool { auto cs_left = require(pos_)->z_; auto cs_right = require(goal_gpos.get_Item(3))->z_; return cs_left > cs_right; }())) {
{ auto cs_target = pos_; pls::cs::Single cs_value = require(goal_gpos.get_Item(3))->z_; require(cs_target)->z_ = cs_value; }
}
} else if (([&]() -> bool { auto cs_left = require(old_pos)->z_; auto cs_right = require(goal_gpos.get_Item(3))->z_; return cs_left >= cs_right; }()) && ([&]() -> bool { auto cs_left = require(pos_)->z_; auto cs_right = require(goal_gpos.get_Item(3))->z_; return cs_left < cs_right; }())) {
{ auto cs_target = pos_; pls::cs::Single cs_value = require(goal_gpos.get_Item(3))->z_; require(cs_target)->z_ = cs_value; }
}
if (flag2 && require(pos_)->y_ > 15.0f) {
require(pos_)->y_ = 15.0f;
}
}
}
if (receive_wait >= 0) {
--receive_wait;
if (receive_wait <= 0) {
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(flag_, 8);});
}
}
if (require(pos_)->y_ < 0.0f) {
++boundNum_;
require(pos_)->y_ = require(pos_)->y_ * -1.0f;
require(v_)->y_ = (-require(v_)->y_) / 2.0f;
require(v_)->x_ = require(v_)->x_ * 0.9f;
require(v_)->z_ = require(v_)->z_ * 0.9f;
if (require(v_)->y_ < 0.3f) {
SetStop();
} else {
SetSavePos(pos_, v_, a_);
}
targetPId = -1;
}
Camera::ConvertGlobalToAddress(pos_, address_);
Camera::ConvertGlobalToScreen(pos_, screen_pos_);
require(shadowPos_)->x_ = require(pos_)->x_;
require(shadowPos_)->z_ = require(pos_)->z_;
Camera::ConvertGlobalToScreen(shadowPos_, screen_shadowPos_);
}
}

// M:game.TBall.Draw_training(kairo.unity.ui.Graphics)
void TBall::Draw_training(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.Draw_training(kairo.unity.ui.Graphics)",game);
{
form::GameForm::ensure_initialized();
Ball::ensure_initialized();

if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 1);})) {
return;
}
Camera::ConvertGlobalToCamera(pos_, camera_pos_);
Camera::ConvertGlobalToCamera(shadowPos_, TBall::camera_pos_shadow_2());
if (!([&]() -> bool { pls::cs::Int32 cs_arg0 = TBall::camera_pos_shadow_2()[0] - 5; pls::cs::Int32 cs_arg1 = TBall::camera_pos_shadow_2()[1] - 11; return GameUtil::ChRectHitRect(cs_arg0, cs_arg1, 11, 11, form::GameForm::VIEW_X(), form::GameForm::VIEW_Y(), form::GameForm::VIEW_W(), form::GameForm::VIEW_H(), false); }())) {
return;
}
pls::cs::Int32 num = TBall::camera_pos_shadow_2()[1];
bool dark = false;
pls::cs::Int32 frame = frame_ % 12 / 6;
if (!is_null(t_owner_)) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(t_owner_)->flag_, 131072);})) {
num += 3;
} else if (require(t_owner_)->seb_ == 14) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pos_)->Set(require(t_owner_)->pos_);});
direct_ = require(t_owner_)->direct_;
num += 3;
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pos_)->Set(require(t_owner_)->pos_);});
direct_ = require(t_owner_)->direct_;
pls::cs::Single num2 = 50.0f;
pls::cs::Single x = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::Sqrt(require(require(t_owner_)->v_)->x_ * require(require(t_owner_)->v_)->x_ + require(require(t_owner_)->v_)->z_ * require(require(t_owner_)->v_)->z_);}));
num2 = GameUtil::RateConvertFloat(x, 0.0f, 10.0f, 0.0f, 100.0f, true);
pls::cs::Int32 c2min = pls::cs::to_int32(([&]() -> pls::cs::Single { pls::cs::Single cs_arg3 = Ball::DRIBBLE_DIRECT_DIS()[direct_][0][0]; pls::cs::Single cs_arg4 = Ball::DRIBBLE_DIRECT_DIS()[direct_][1][0]; return GameUtil::RateConvertFloat(num2, 0.0f, 100.0f, cs_arg3, cs_arg4, true); }()));
pls::cs::Int32 c2max = pls::cs::to_int32(([&]() -> pls::cs::Single { pls::cs::Single cs_arg3 = Ball::DRIBBLE_DIRECT_DIS()[direct_][2][0]; pls::cs::Single cs_arg4 = Ball::DRIBBLE_DIRECT_DIS()[direct_][3][0]; return GameUtil::RateConvertFloat(num2, 0.0f, 100.0f, cs_arg3, cs_arg4, true); }()));
pls::cs::Int32 c2min2 = pls::cs::to_int32(([&]() -> pls::cs::Single { pls::cs::Single cs_arg3 = Ball::DRIBBLE_DIRECT_DIS()[direct_][0][1]; pls::cs::Single cs_arg4 = Ball::DRIBBLE_DIRECT_DIS()[direct_][1][1]; return GameUtil::RateConvertFloat(num2, 0.0f, 100.0f, cs_arg3, cs_arg4, true); }()));
pls::cs::Int32 c2max2 = pls::cs::to_int32(([&]() -> pls::cs::Single { pls::cs::Single cs_arg3 = Ball::DRIBBLE_DIRECT_DIS()[direct_][2][1]; pls::cs::Single cs_arg4 = Ball::DRIBBLE_DIRECT_DIS()[direct_][3][1]; return GameUtil::RateConvertFloat(num2, 0.0f, 100.0f, cs_arg3, cs_arg4, true); }()));
pls::cs::Int32 num3 = frame_ % 16;
pls::cs::Int32 num4 = GameUtil::RateConvert(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::AbsInt(num3 - 8);}), 8, 0, c2min, c2max, true);
pls::cs::Int32 num5 = GameUtil::RateConvert(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::AbsInt(num3 - 8);}), 8, 0, c2min2, c2max2, true);
pls::cs::Single num6 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::Sqrt(([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = (TBall::camera_pos_dribble_2()[0] - num4); auto cs_right = (TBall::camera_pos_dribble_2()[0] - num4); return cs_left * cs_right; }()); auto cs_right = ([&]() -> pls::cs::Int32 { auto cs_left = (TBall::camera_pos_dribble_2()[1] - num5); auto cs_right = (TBall::camera_pos_dribble_2()[1] - num5); return cs_left * cs_right; }()); return cs_left + cs_right; }()));}));
pls::cs::Int32 num7 = num4 * 3 / 4;
pls::cs::Int32 num8 = num5 * 3 / 4;
TBall::camera_pos_dribble_2()[0] = num7;
TBall::camera_pos_dribble_2()[1] = num8;
{ auto cs_target = camera_pos_; auto cs_index = 0; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num7; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
{ auto cs_target = camera_pos_; auto cs_index = 1; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num8; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
{ auto cs_target = TBall::camera_pos_shadow_2(); auto cs_index = 0; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num7; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
{ auto cs_target = TBall::camera_pos_shadow_2(); auto cs_index = 1; auto cs_old = cs_target.at(cs_index); auto cs_rhs = num8; pls::cs::Int32 cs_value = cs_old + cs_rhs; cs_target.at(cs_index) = cs_value; }
if (rotate_ == 0 || num3 == 0) {
rotate_ = pls::cs::to_int32(GameUtil::RateConvertFloat(num2, 0.0f, 100.0f, 8.0f, 2.0f, true));
}
frame = ([&]() -> pls::cs::Int32 { auto cs_left = frame_ % (rotate_ * 4); auto cs_right = rotate_; return cs_left / cs_right; }());
num = camera_pos_[1];
}
}
pls::cs::Single originalUnusedSlot15;
pls::cs::Int32 num9 = 0;
pls::cs::Int32 num10 = 0;
if (!is_null(t_owner_)) {
if (require(t_owner_)->seb_ == 14) {
if (require(t_owner_)->team_id_ == 0) {
num = (num + -1);
} else {
num = (num + 1);
}
pls::cs::Int32 num11 = 0;
if (require(t_owner_)->team_id_ == 0) {
if (require(t_owner_)->direct_ == 3) {
num11 = 0;
} else if (require(t_owner_)->direct_ == 0) {
num11 = 1;
} else if (require(t_owner_)->direct_ == 1) {
num11 = 2;
}
} else if (require(t_owner_)->direct_ == 3) {
num11 = 0;
} else if (require(t_owner_)->direct_ == 2) {
num11 = 1;
} else if (require(t_owner_)->direct_ == 1) {
num11 = 2;
}
num9 = Ball::SAVING_OFF()[require(t_owner_)->team_id_][num11][0];
num10 = Ball::SAVING_OFF()[require(t_owner_)->team_id_][num11][1];
} else {
if (((require(t_owner_)->direct_ == 0) || (require(t_owner_)->direct_ == 3))) {
num = ((num - 1));
} else {
num = ((num + 1));
}
}
}
if (is_null(t_owner_)) {
{ pls::cs::Int32 cs_arg6 = TBall::camera_pos_shadow_2()[0]; pls::cs::Int32 cs_arg7 = TBall::camera_pos_shadow_2()[1] + 1; require(apdat_)->InsertGameObject(8, 0, num, 2, 0, 4, cs_arg6, cs_arg7, dark, 0); }
}
{ pls::cs::Int32 cs_arg6 = camera_pos_[0] + num9; pls::cs::Int32 cs_arg7 = camera_pos_[1] + num10; require(apdat_)->InsertGameObject(9, 0, num, 2, 0, frame, cs_arg6, cs_arg7, dark, 0); }

}
}

// M:game.TBall.ReceiveBall(game.TPlayer)
void TBall::ReceiveBall(pls::cs::Ref<TPlayer> player) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.ReceiveBall(game.TPlayer)",game);
{
require(a_)->x_ = 0.0f;
require(a_)->z_ = 0.0f;
{ auto cs_target = player; pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(require(player)->flag_, 4);}); require(cs_target)->flag_ = cs_value; }
require(player)->ballHaveTime_ = 0;
require(player)->ballDribbleTime_ = 0;
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(flag_, 4);});
t_owner_ = player;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pos_)->Set(require(t_owner_)->pos_);});
receive_wait = 0;
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(flag_, 8);});
boundNum_ = 0;
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(flag_, 112);});
targetPId = -1;
}
}

// M:game.TBall.ReleaseBall(game.TPlayer)
void TBall::ReleaseBall(pls::cs::Ref<TPlayer> player) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.ReleaseBall(game.TPlayer)",game);
{
Ball::ensure_initialized();

if (!(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 4);}))) {
return;
}
{
{ auto cs_target = player; pls::cs::Int32 cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(require(player)->flag_, 4);}); require(cs_target)->flag_ = cs_value; }
require(player)->ballHaveTime_ = 0;
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(flag_, 4);});
t_lastOwner_ = t_owner_;
t_owner_ = pls::cs::Ref<TPlayer>{};
receive_wait = Ball::RECEIVE_WAIT_MIN();
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Off(flag_, 8);});
boundNum_ = 0;
}

}
}

// M:game.TBall.SetPassDataTraining(game.TPlayer,System.Int32,System.Boolean)
void TBall::SetPassDataTraining(pls::cs::Ref<TPlayer> player,pls::cs::Int32 pass_mode,bool jamp) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.SetPassDataTraining(game.TPlayer,System.Int32,System.Boolean)",game);
{
Ball::ensure_initialized();

pls::diagnostic::api_call([&]() -> decltype(auto) {return require(v_)->Set(0.0f, 0.0f, 0.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(a_)->Set(0.0f, 0.0f, 0.0f);});
pls::cs::Ref<TPlayer> tPlayer = pls::cs::unbox<pls::cs::Ref<TPlayer>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = require(require(player)->tGroupArea_)->tPlayerList_; pls::cs::Int32 cs_arg0 = 1 - require(player)->trainingId_[4]; return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0); }());}));
require(temp_pos)->x_ = require(require(tPlayer)->pos_)->x_;
require(temp_pos)->z_ = require(require(tPlayer)->pos_)->z_;
pls::cs::Single num = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::Sqrt((require(temp_pos)->x_ - require(pos_)->x_) * (require(temp_pos)->x_ - require(pos_)->x_) + (require(temp_pos)->z_ - require(pos_)->z_) * (require(temp_pos)->z_ - require(pos_)->z_));}));
pls::cs::Single passSpeed = data::PlayerData::GetPassSpeed(player);
require(v_)->x_ = passSpeed * (require(temp_pos)->x_ - require(pos_)->x_) / num;
require(v_)->y_ = 0.0f;
require(v_)->z_ = passSpeed * (require(temp_pos)->z_ - require(pos_)->z_) / num;
SetSavePos(pos_, v_, a_);
receive_wait = Ball::RECEIVE_WAIT_MIN();

}
}

// M:game.TBall.SetShoot(game.Player,kairo.unity.m3d4.util3d.Vector3D)
void TBall::SetShoot(pls::cs::Ref<Player> player,pls::cs::Ref<kl_util3d::Vector3D> goal_center) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.SetShoot(game.Player,kairo.unity.m3d4.util3d.Vector3D)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(v_)->Set(0.0f, 0.0f, 0.0f);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(a_)->Set(0.0f, 0.0f, 0.0f);});
pls::cs::Int32 num = GameUtil::Random(100);
{ auto cs_target = g1_TBall; pls::cs::Single cs_value = GameUtil::RateConvertFloat(num, 0.0f, 99.0f, require(goal_center)->x_ - 40.0f, require(goal_center)->x_ + 40.0f, true); require(cs_target)->x_ = cs_value; }
require(g1_TBall)->z_ = require(goal_center)->z_;
pls::cs::Int32 playerBodyPoseEva = data::PlayerData::GetPlayerBodyPoseEva(player, 10);
pls::cs::Single shootSpeed = data::PlayerData::GetShootSpeed(player, playerBodyPoseEva);
pls::cs::Single num2 = pls::cs::Single(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JMath::Sqrt((require(g1_TBall)->x_ - require(pos_)->x_) * (require(g1_TBall)->x_ - require(pos_)->x_) + (require(g1_TBall)->z_ - require(pos_)->z_) * (require(g1_TBall)->z_ - require(pos_)->z_));}));
require(v_)->x_ = shootSpeed * (require(g1_TBall)->x_ - require(pos_)->x_) / num2;
require(v_)->z_ = shootSpeed * (require(g1_TBall)->z_ - require(pos_)->z_) / num2;
pls::cs::Int32 eva = playerBodyPoseEva;
pls::cs::Single shootV0y = data::PlayerData::GetShootV0y(player, eva);
require(v_)->y_ = shootV0y;
require(a_)->y_ = -0.1f;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(shoot_goalPos_TBall)->Set(g1_TBall);});
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(flag_, 48);});
SetSavePos(pos_, v_, a_);
}
}

// M:game.TBall.ChBallDirectHere(game.TPlayer)
bool TBall::ChBallDirectHere(pls::cs::Ref<TPlayer> tPlayer) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.ChBallDirectHere(game.TPlayer)",game);
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 32);})) {
if (require(require(require(tPlayer)->tGroupArea_)->tArea_)->pId_ == 2) {
if (require(pos_)->z_ < require(require(tPlayer)->pos_)->z_ && require(v_)->z_ > 0.0f) {
return true;
}
} else if (require(pos_)->z_ > require(require(tPlayer)->pos_)->z_ && require(v_)->z_ < 0.0f) {
return true;
}
}
return false;
}
}

// M:game.TBall.GetToGoalLineTime(game.Player)
pls::cs::Int32 TBall::GetToGoalLineTime(pls::cs::Ref<Player> player) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.TBall.GetToGoalLineTime(game.Player)",game);
{
if (require(v_)->z_ == 0.0f) {
return -1;
}
return pls::cs::to_int32(((require(g1_TBall)->z_ - require(pos_)->z_) / require(v_)->z_));
}
}
} // namespace game
}
