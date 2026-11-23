// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.BaseData.hpp"
#include "data.FormationData.hpp"
#include "data.PlayerData.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace data {

void FormationData::trace_edges(const pls::cs::EdgeVisitor&visitor)const {BaseData::trace_edges(visitor);pls::cs::trace_value(name_,visitor);pls::cs::trace_value(formation_,visitor);pls::cs::trace_value(explain_,visitor);}

static pls::cs::Ref<main::AppData> FormationData_apdat__storage{};

static pls::cs::Ref<game::UserData> FormationData_udat__storage{};

static PLS_NOINLINE void cs_init_5beb6285da308d06_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(FormationData_apdat__storage,visitor);pls::cs::trace_value(FormationData_udat__storage,visitor);});static pls::cs::TypeInitState state;state.run("data.FormationData",flag,[](){

});}

void FormationData::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_5beb6285da308d06_slow(flag);}

pls::cs::Ref<main::AppData>& FormationData::apdat_(){FormationData::ensure_initialized();return FormationData_apdat__storage;}

pls::cs::Ref<game::UserData>& FormationData::udat_(){FormationData::ensure_initialized();return FormationData_udat__storage;}

void FormationData::create_init(pls::cs::Ref<FormationData> self) {
FormationData::ensure_initialized();
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.#ctor",game);
{
FormationData::apdat_() = main::AppData::GetInstance();
FormationData::udat_() = game::UserData::GetInstance();
}

}

void FormationData::create_init(pls::cs::Ref<FormationData> self,pls::cs::String src) {
FormationData::ensure_initialized();
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.#ctor(System.String)",game);
{
FormationData::apdat_() = main::AppData::GetInstance();
FormationData::udat_() = game::UserData::GetInstance();
self->Init();
self->Load(src);
}

}

// M:data.FormationData.#ctor
pls::cs::Ref<FormationData> FormationData::create() {
FormationData::ensure_initialized();
 auto self = pls::cs::make_ref<FormationData>(); FormationData::create_init(self); return self; 
}

// M:data.FormationData.#ctor(System.String)
pls::cs::Ref<FormationData> FormationData::create(pls::cs::String src) {
FormationData::ensure_initialized();
 auto self = pls::cs::make_ref<FormationData>(); FormationData::create_init(self,src); return self; 
}

// M:data.FormationData.Init
void FormationData::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.Init",game);
{
state_ = 0;
new_ = false;
}
}

// M:data.FormationData.Load(System.String)
void FormationData::Load(pls::cs::String src) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.Load(System.String)",game);
{
pls::cs::Int32 num = 0;
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(src, literal(u"\t"));});
id_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
name_ = array[num++];
pls::cs::String src2 = array[num++];
IntArray array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::SplitIntegers(src2, literal(u","));});
formation_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({11, 2}));});
for (pls::cs::Int32 i = 0; i < formation_.length(); ++i) {
formation_[i][0] = array2[i * 2];
formation_[i][1] = array2[i * 2 + 1];
}
explain_ = array[num++];
flag_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
}
}

// M:data.FormationData.NewGame
void FormationData::NewGame() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.NewGame",game);
{
state_ = 0;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(flag_, 1);})) {
state_ = 1;
}
}
}

// M:data.FormationData.Serialize(java.io.OutputStream)
void FormationData::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(state_));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteBoolean(os, new_);});
for (pls::cs::Int32 i = 0; i < formation_.length(); ++i) {
for (pls::cs::Int32 j = 0; j < formation_[i].length(); ++j) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteShort(os, pls::cs::cast_integral<std::int16_t>(formation_[i][j]));});
}
}
}
}

// M:data.FormationData.Deserialize(java.io.InputStream)
void FormationData::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.Deserialize(java.io.InputStream)",game);
{
state_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));
new_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBoolean(stream);});
for (pls::cs::Int32 i = 0; i < formation_.length(); ++i) {
for (pls::cs::Int32 j = 0; j < formation_[i].length(); ++j) {
{ auto cs_target = formation_[i]; auto cs_index = j; auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadShort(stream);}));cs_target.set_Item(cs_index,cs_value);}
}
}
}
}

// M:data.FormationData.ChangeState(System.Int32)
void FormationData::ChangeState(pls::cs::Int32 state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.ChangeState(System.Int32)",game);
{
if (state_ == 0 && state == 1) {
new_ = true;
}
state_ = state;
}
}

// M:data.FormationData.UpdateStamemRole
void FormationData::UpdateStamemRole() {
FormationData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.UpdateStamemRole",game);
{
pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
pls::cs::Ref<FormationData> formationData = require(main::AppData::GetInstance())->formationData_.get_Item(require(instance)->selectFormationId_);
for (pls::cs::Int32 i = 0; i < 11; ++i) {
pls::cs::Ref<PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(instance)->memberPDataist_), i);}));
if (i == 0) {
require(playerData)->role_ = 0;
} else if (require(formationData)->formation_[i][1] <= 2) {
require(playerData)->role_ = 3;
} else if (require(formationData)->formation_[i][1] <= 5) {
require(playerData)->role_ = 2;
} else if (require(formationData)->formation_[i][1] <= 8) {
require(playerData)->role_ = 1;
}
}
}

}

// M:data.FormationData.IsExistNew
bool FormationData::IsExistNew() {
FormationData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.IsExistNew",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
for (pls::cs::Int32 i = 0; i < require(instance)->formationData_.length(); ++i) {
if (require(require(instance)->formationData_.get_Item(i))->IsNew()) {
return true;
}
}
return false;
}

}

// M:data.FormationData.RemoveNew
void FormationData::RemoveNew() {
FormationData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.RemoveNew",game);
{
pls::cs::Ref<main::AppData> instance = main::AppData::GetInstance();
for (pls::cs::Int32 i = 0; i < require(instance)->formationData_.length(); ++i) {
require(require(instance)->formationData_.get_Item(i))->new_ = false;
}
}

}

// M:data.FormationData.IsNew
bool FormationData::IsNew() {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.FormationData.IsNew",game);
{
if (new_) {
return true;
}
return false;
}
}
} // namespace data
}
