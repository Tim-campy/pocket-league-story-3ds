// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace system::friend_::ui {

struct FriendPlayTimeData : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("system.friend.ui.FriendPlayTimeData", FriendPlayTimeData, pls::cs::Object)
pls::cs::Ref<generated::kairo::unity::util::SecureString> friendId_{};
pls::cs::Ref<generated::kairo::unity::util::SecureInt> minute_{};
pls::cs::Ref<generated::kairo::unity::util::SecureInt> state_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<FriendPlayTimeData> self);

static void create_init(pls::cs::Ref<FriendPlayTimeData> self,pls::cs::String friendId,pls::cs::Int32 minute,pls::cs::Int32 state);

static pls::cs::Ref<FriendPlayTimeData> create();

static pls::cs::Ref<FriendPlayTimeData> create(pls::cs::String friendId,pls::cs::Int32 minute,pls::cs::Int32 state);

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);
};
} // namespace system::friend_::ui
}
