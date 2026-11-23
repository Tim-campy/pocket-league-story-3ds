// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::system {

struct GameDataRecord : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"ToString", "M:kairo.unity.system.GameDataRecord.ToString"},
    {"GetHashCode", "M:kairo.unity.system.GameDataRecord.GetHashCode"});
PLS_MANAGED_CLASS("kairo.unity.system.GameDataRecord", GameDataRecord, pls::cs::Object)
pls::cs::Ref<generated::kairo::unity::util::SecureInt> userId_{};
pls::cs::Ref<generated::kairo::unity::util::SecureInt> friendId_{};
pls::cs::Ref<generated::kairo::unity::util::SecureInt> number_{};
pls::cs::Ref<generated::java::util::Vector> dataSet_{};
bool exist_{};
bool isInsert_{};
pls::cs::String ToString() override;
std::int32_t GetHashCode() override;

static void ensure_initialized();

static void create_init(pls::cs::Ref<GameDataRecord> self);

static void create_init(pls::cs::Ref<GameDataRecord> self,pls::cs::Int32 number,bool insert);

static void create_init(pls::cs::Ref<GameDataRecord> self,pls::cs::Int32 friendId,pls::cs::Int32 number,bool insert);

static pls::cs::Ref<GameDataRecord> create();

static pls::cs::Ref<GameDataRecord> create(pls::cs::Int32 number,bool insert);

static pls::cs::Ref<GameDataRecord> create(pls::cs::Int32 friendId,pls::cs::Int32 number,bool insert);

void Add(pls::cs::String name,pls::cs::String value);

void Add(pls::cs::String name);

void AddLong(pls::cs::String name,pls::cs::Int64 value);

void AddByteArray(pls::cs::String name,pls::cs::Array<std::uint8_t> data);

void Acquire(pls::cs::String name,pls::cs::Array<std::uint8_t> data);

pls::cs::Int64 GetValue(pls::cs::String name);

pls::cs::String GetString(pls::cs::String name);

pls::cs::Array<std::uint8_t> GetData(pls::cs::String name);

void Pack(pls::cs::Ref<generated::java::io::OutputStream> os);

pls::cs::Ref<GameDataRecord> Copy(bool to_set);

pls::cs::Ref<GameDataRecord> Clone();

pls::cs::Int32 GetFriendId();

pls::cs::Int32 GetNumber();
};
} // namespace kairo::unity::system
}
