// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.BaseData.hpp"
#include "data.EventData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace data {

void EventData::trace_edges(const pls::cs::EdgeVisitor&visitor)const {BaseData::trace_edges(visitor);pls::cs::trace_value(name_,visitor);pls::cs::trace_value(termsScript_,visitor);pls::cs::trace_value(execsScript_,visitor);}

static StringArray EventData_stringTable__storage{};

static PLS_NOINLINE void cs_init_80d72c9d6f5bfcfe_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(EventData_stringTable__storage,visitor);});static pls::cs::TypeInitState state;state.run("data.EventData",flag,[](){

});}

void EventData::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_80d72c9d6f5bfcfe_slow(flag);}

StringArray& EventData::stringTable_(){EventData::ensure_initialized();return EventData_stringTable__storage;}

void EventData::create_init(pls::cs::Ref<EventData> self) {
EventData::ensure_initialized();
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.#ctor",game);
{

}

}

void EventData::create_init(pls::cs::Ref<EventData> self,pls::cs::String src) {
EventData::ensure_initialized();
BaseData::create_init(pls::cs::static_pointer_cast<BaseData>(self));
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.#ctor(System.String)",game);
{
self->Load(src);
}

}

// M:data.EventData.#ctor
pls::cs::Ref<EventData> EventData::create() {
EventData::ensure_initialized();
 auto self = pls::cs::make_ref<EventData>(); EventData::create_init(self); return self; 
}

// M:data.EventData.#ctor(System.String)
pls::cs::Ref<EventData> EventData::create(pls::cs::String src) {
EventData::ensure_initialized();
 auto self = pls::cs::make_ref<EventData>(); EventData::create_init(self,src); return self; 
}

// M:data.EventData.Load(System.String)
void EventData::Load(pls::cs::String src) {PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.Load(System.String)",game);
{
pls::cs::Int32 num = 0;
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Split(src, literal(u"\t"));});
id_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
name_ = array[num++];
type_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[num++]);});
termsScript_ = EventData::ReadScript(array[num++]);
execsScript_ = EventData::ReadScript(array[num++]);
}
}

// M:data.EventData.ReadScript(System.String)
IntArray2 EventData::ReadScript(pls::cs::String source) {
EventData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.ReadScript(System.String)",game);
{
if (is_null(source) || kl_lang::StringEx::Length(source) == 0) {
return IntArray2::make(0);
}
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Split(source, literal(u"&"));});
IntArray2 array2 = IntArray2::make(array.length());
for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
StringArray array3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Split(array[i], literal(u","));});
array2[i] = IntArray::make(array3.length());
for (pls::cs::Int32 j = 0; j < array3.length(); ++j) {
{ auto cs_target = array2[i]; auto cs_index = j; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array3[j]);});cs_target.set_Item(cs_index,cs_value);}
}
}
return array2;
}

}

// M:data.EventData.CheckScript(System.Int32[][],System.Int32)
bool EventData::CheckScript(IntArray2 script,pls::cs::Int32 scrId) {
EventData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.CheckScript(System.Int32[][],System.Int32)",game);
{
for (pls::cs::Int32 i = 0; i < script.length(); ++i) {
if (script[i][0] == scrId) {
return true;
}
}
return false;
}

}

// M:data.EventData.Search(data.EventData[],System.Int32)
pls::cs::Int32 EventData::Search(pls::cs::Array<pls::cs::Ref<EventData>> events,pls::cs::Int32 id) {
EventData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.Search(data.EventData[],System.Int32)",game);
{
for (pls::cs::Int32 i = 0; i < events.length(); ++i) {
if (require(events.get_Item(i))->id_ == id) {
return i;
}
}
return -1;
}

}

// M:data.EventData.LoadStringTable(System.String)
void EventData::LoadStringTable(pls::cs::String src) {
EventData::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.LoadStringTable(System.String)",game);
{
EventData::stringTable_() = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Split(src, literal(u"\n"));});
}

}
} // namespace data
}
