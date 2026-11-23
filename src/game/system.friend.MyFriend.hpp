// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
#include "system.friend.ui.FriendData.hpp"
namespace pls::game {
namespace system::friend_ {

struct MyFriend : ui::FriendData {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(FriendData,
    {"M:system.friend.ui.FriendData.PlayBonus(System.Int32)", "M:system.friend.MyFriend.PlayBonus(System.Int32)"},
    {"M:system.friend.ui.FriendData.CgiGetFriendList", "M:system.friend.MyFriend.CgiGetFriendList"});
PLS_MANAGED_CLASS("system.friend.MyFriend", MyFriend, FriendData)
void PlayBonus(pls::cs::Int32 value) override;
pls::cs::Ref<generated::java::util::Vector> CgiGetFriendList() override;

static void ensure_initialized();

static void create_init(pls::cs::Ref<MyFriend> self);

static pls::cs::Ref<MyFriend> create();

static pls::cs::Ref<MyFriend> GetInstance();
};
} // namespace system::friend_
}
