// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace system::friend_::ui {

struct Friend : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("system.friend.ui.Friend", Friend, pls::cs::Object)
pls::cs::Ref<generated::kairo::unity::util::SecureString> friendId_{};
pls::cs::Ref<generated::kairo::unity::util::SecureString> name_{};
pls::cs::Ref<generated::kairo::unity::util::SecureInt> state_{};
pls::cs::Ref<generated::kairo::unity::util::SecureInt> minute_{};
pls::cs::Ref<generated::kairo::unity::util::SecureInt> updated_{};
static constexpr pls::cs::Int32 STATE_APPLY = 1;static constexpr pls::cs::Int32 STATE_APPLY_WAIT = 2;static constexpr pls::cs::Int32 STATE_FRIEND = 3;
static void ensure_initialized();

static void create_init(pls::cs::Ref<Friend> self);

static void create_init(pls::cs::Ref<Friend> self,pls::cs::Array<std::uint8_t> src);

static void create_init(pls::cs::Ref<Friend> self,pls::cs::String friendId,pls::cs::String name,pls::cs::Int32 state,pls::cs::Int32 minute,pls::cs::Int32 updated);

static void create_2_init(pls::cs::Ref<Friend> self,pls::cs::String src);

static pls::cs::Ref<Friend> create();

static pls::cs::Ref<Friend> create(pls::cs::Array<std::uint8_t> src);

static pls::cs::Ref<Friend> create(pls::cs::String friendId,pls::cs::String name,pls::cs::Int32 state,pls::cs::Int32 minute,pls::cs::Int32 updated);

static pls::cs::Ref<Friend> create_2(pls::cs::String src);

void Serialize(pls::cs::Ref<generated::java::io::OutputStream> os);

void Deserialize(pls::cs::Ref<generated::java::io::InputStream> stream);
};
} // namespace system::friend_::ui
}
