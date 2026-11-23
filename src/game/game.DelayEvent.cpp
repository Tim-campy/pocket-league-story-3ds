// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "game.DelayEvent.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace game {

void DelayEvent::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(args_,visitor);pls::cs::trace_value(argi_,visitor);}

static PLS_NOINLINE void cs_init_456d3d004decc356_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("game.DelayEvent",flag,[](){

});}

void DelayEvent::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_456d3d004decc356_slow(flag);}

void DelayEvent::create_init(pls::cs::Ref<DelayEvent> self) {
DelayEvent::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:game.DelayEvent.#ctor",game);
{
self->delayId_ = -1;
self->line_ = 0;
self->wait_ = 0;
self->hour_ = -1;
self->rideChara_ = -1;
self->args_ = pls::cs::String(u"");
}

}

void DelayEvent::create_init(pls::cs::Ref<DelayEvent> self,pls::cs::Int32 delayId,pls::cs::Int32 line,pls::cs::Int32 wait,pls::cs::Int32 hour,pls::cs::Int32 rideChara,pls::cs::String args,IntArray argi) {
DelayEvent::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:game.DelayEvent.#ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.Int32[])",game);
{
self->delayId_ = delayId;
self->line_ = line;
self->wait_ = wait;
self->hour_ = hour;
self->rideChara_ = rideChara;
self->args_ = args;
self->argi_ = IntArray{};
if ([&]() { auto cs_left = pls::cs::box(argi); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
self->argi_ = IntArray::make(argi.length());
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(argi), 0, pls::cs::box(self->argi_), 0, self->argi_.length());});
}
}

}

// M:game.DelayEvent.#ctor
pls::cs::Ref<DelayEvent> DelayEvent::create() {
DelayEvent::ensure_initialized();
 auto self = pls::cs::make_ref<DelayEvent>(); DelayEvent::create_init(self); return self; 
}

// M:game.DelayEvent.#ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.Int32[])
pls::cs::Ref<DelayEvent> DelayEvent::create(pls::cs::Int32 delayId,pls::cs::Int32 line,pls::cs::Int32 wait,pls::cs::Int32 hour,pls::cs::Int32 rideChara,pls::cs::String args,IntArray argi) {
DelayEvent::ensure_initialized();
 auto self = pls::cs::make_ref<DelayEvent>(); DelayEvent::create_init(self,delayId,line,wait,hour,rideChara,args,argi); return self; 
}

// M:game.DelayEvent.Serialize(java.io.OutputStream)
void DelayEvent::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.DelayEvent.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(os, delayId_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(os, line_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(os, wait_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(os, hour_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(os, rideChara_);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteStringString(os, (is_null(args_)) ? (pls::cs::String(u"")) : (args_));});
if ([&]() { auto cs_left = pls::cs::box(argi_); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(os, 0);});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(os, argi_.length());});
for (pls::cs::Int32 i = 0; i < argi_.length(); ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::WriteInt(os, argi_[i]);});
}
}
}
}

// M:game.DelayEvent.Deserialize(java.io.InputStream)
void DelayEvent::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:game.DelayEvent.Deserialize(java.io.InputStream)",game);
{
delayId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);});
line_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);});
wait_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);});
hour_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);});
rideChara_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);});
args_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadString(stream);});
argi_ = IntArray::make(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);}));
for (pls::cs::Int32 i = 0; i < argi_.length(); ++i) {
{ auto cs_target = argi_; auto cs_index = i; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StreamUtil::ReadInt(stream);});cs_target.set_Item(cs_index,cs_value);}
}
}
}
} // namespace game
}
