// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "system.friend.ui.FriendPlayTimeData.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace system::friend_::ui {

void FriendPlayTimeData::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(friendId_,visitor);pls::cs::trace_value(minute_,visitor);pls::cs::trace_value(state_,visitor);}

static PLS_NOINLINE void cs_init_22115ea4236d0eaa_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.friend.ui.FriendPlayTimeData",flag,[](){

});}

void FriendPlayTimeData::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_22115ea4236d0eaa_slow(flag);}

void FriendPlayTimeData::create_init(pls::cs::Ref<FriendPlayTimeData> self) {
FriendPlayTimeData::ensure_initialized();
self->minute_ = kl_util::SecureInt::create();
self->state_ = kl_util::SecureInt::create();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.friend.ui.FriendPlayTimeData.#ctor",game);
{

}

}

void FriendPlayTimeData::create_init(pls::cs::Ref<FriendPlayTimeData> self,pls::cs::String friendId,pls::cs::Int32 minute,pls::cs::Int32 state) {
FriendPlayTimeData::ensure_initialized();
self->minute_ = kl_util::SecureInt::create();
self->state_ = kl_util::SecureInt::create();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.friend.ui.FriendPlayTimeData.#ctor(System.String,System.Int32,System.Int32)",game);
{
self->friendId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::SecureString::ValueOf(friendId);});
self->minute_ = kl_util::SecureInt::create(minute);
self->state_ = kl_util::SecureInt::create(state);
}

}

// M:system.friend.ui.FriendPlayTimeData.#ctor
pls::cs::Ref<FriendPlayTimeData> FriendPlayTimeData::create() {
FriendPlayTimeData::ensure_initialized();
 auto self = pls::cs::make_ref<FriendPlayTimeData>(); FriendPlayTimeData::create_init(self); return self; 
}

// M:system.friend.ui.FriendPlayTimeData.#ctor(System.String,System.Int32,System.Int32)
pls::cs::Ref<FriendPlayTimeData> FriendPlayTimeData::create(pls::cs::String friendId,pls::cs::Int32 minute,pls::cs::Int32 state) {
FriendPlayTimeData::ensure_initialized();
 auto self = pls::cs::make_ref<FriendPlayTimeData>(); FriendPlayTimeData::create_init(self,friendId,minute,state); return self; 
}

// M:system.friend.ui.FriendPlayTimeData.Serialize(java.io.OutputStream)
void FriendPlayTimeData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.friend.ui.FriendPlayTimeData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteStringString(os, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::SecureString::ToStringSecureStringStatic(friendId_);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {return require(minute_)->Get();}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(os, pls::diagnostic::api_call([&]() -> decltype(auto) {return require(state_)->Get();}));});
}
}

// M:system.friend.ui.FriendPlayTimeData.Deserialize(java.io.InputStream)
void FriendPlayTimeData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.friend.ui.FriendPlayTimeData.Deserialize(java.io.InputStream)",game);
{
friendId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::SecureString::ValueOf(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadString(stream);}));});
minute_ = kl_util::SecureInt::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);}));
state_ = kl_util::SecureInt::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);}));
}
}
} // namespace system::friend_::ui
}
