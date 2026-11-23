// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.lang.JString.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "system.KairoText.hpp"
#include "system.friend.MyFriend.hpp"
#include "system.friend.ui.Friend.hpp"
#include "system.friend.ui.FriendData.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace system::friend_ {

void MyFriend::trace_edges(const pls::cs::EdgeVisitor&visitor)const {FriendData::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_ec8ac507fb495e84_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.friend.MyFriend",flag,[](){

});}

void MyFriend::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_ec8ac507fb495e84_slow(flag);}

void MyFriend::create_init(pls::cs::Ref<MyFriend> self) {
MyFriend::ensure_initialized();
kl_cfg::Config::ensure_initialized();
FriendData::create_init(pls::cs::static_pointer_cast<FriendData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.friend.MyFriend.#ctor",game);
{
self->FRIEND_MAX = 5;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Language::Japanese();})) {
self->INTRODUCTION_SUBJECT = KairoText::LT(literal(u"フレンド申請 お住まい夢物語"));
self->INTRODUCTION_APPLY_SUBJECT = self->INTRODUCTION_SUBJECT;
self->INTRODUCTION_APPLY_TEXT = KairoText::LT(literal(u"お住まい夢物語for Androidで\nフレンド申請したよ!\n承認してね。"));
self->INTRODUCTION_TEXT = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(KairoText::LT(literal(u"お住まい夢物語for Androidをインストールして\nフレンドで\nID：「<0>」\nを探してね。\n\nDLはこっちだよ\n")), literal(u"http://kairopark.jp/friend/?gm=")); auto cs_right = integer_string(kl_cfg::Config::PID()); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"&dl=store"));
} else {
self->INTRODUCTION_SUBJECT = KairoText::LT(literal(u"Friend Request (Dream House Days)"));
self->INTRODUCTION_APPLY_SUBJECT = self->INTRODUCTION_SUBJECT;
self->INTRODUCTION_APPLY_TEXT = KairoText::LT(literal(u"I'd like to be friends in Dream House Days for Android. Please approve my request!"));
self->INTRODUCTION_TEXT = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(KairoText::LT(literal(u"Try Dream House Days for Android and search for the ID \"<0>\" to find me.<br><br>You can download the app here:<br>")), literal(u"http://kairopark.jp/friend/?gm=")); auto cs_right = integer_string(kl_cfg::Config::PID()); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"&dl=store"));
}
self->PLAY_BONUS_INTERVAL_MINUTE = 40;
self->PLAY_BONUS_MAX = 20;
self->PLAY_NEW_FRIEND_BONUS = 7;
}

}

// M:system.friend.MyFriend.#ctor
pls::cs::Ref<MyFriend> MyFriend::create() {
MyFriend::ensure_initialized();
 auto self = pls::cs::make_ref<MyFriend>(); MyFriend::create_init(self); return self; 
}

// M:system.friend.MyFriend.PlayBonus(System.Int32)
void MyFriend::PlayBonus(pls::cs::Int32 value) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.friend.MyFriend.PlayBonus(System.Int32)",game);
{

}
}

// M:system.friend.MyFriend.GetInstance
pls::cs::Ref<MyFriend> MyFriend::GetInstance() {
MyFriend::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.friend.MyFriend.GetInstance",game);
{
FriendData::ensure_initialized();

if (is_null(FriendData::instance_())) {
FriendData::instance_() = MyFriend::create();
}
return pls::cs::unbox<pls::cs::Ref<MyFriend>>(pls::cs::box(FriendData::instance_()));

}

}

// M:system.friend.MyFriend.CgiGetFriendList
pls::cs::Ref<kl_java_util::Vector> MyFriend::CgiGetFriendList() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.friend.MyFriend.CgiGetFriendList",game);
{
bool useCustomFriendList = false;
if (!useCustomFriendList) {
return FriendData::CgiGetFriendList();
}
pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
pls::cs::Ref<kl_java_util::Vector> vector2 = kl_java_util::Vector::create();
ByteArray array = kairo::unity::system::KairoBase::Connect(literal(u"friend/friend_get.php"));
if (array.length() == 0) {
return friendList_;
}
StringArray array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::New(array);}), literal(u","));});
pls::cs::Int32 num = 0;
while (num < array2.length()) {
pls::cs::Ref<ui::Friend> friend_ = ui::Friend::create_2(array2[num]);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(friend_)->state_)->Get();}) == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(vector2), pls::cs::box(friend_));});
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(friend_)->state_)->Get();}) == 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(friend_));});
}
++num;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveAllElements(require(friendList_));});
pls::cs::Int32 num2 = 0;
while (num2 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = friendList_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector), num2);}); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
++num2;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveAllElements(require(applyList_));});
pls::cs::Int32 num3 = 0;
while (num3 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector2));})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = applyList_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector2), num3);}); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
++num3;
}
return friendList_;
}
}
} // namespace system::friend_
}
