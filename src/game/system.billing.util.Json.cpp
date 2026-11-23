// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "UnityEngine.Purchasing.Product.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "system.billing.util.Json.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;

namespace pls::game {
namespace system::billing::util {

void Json::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_e6ed65290db381ba_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.billing.util.Json",flag,[](){

});}

void Json::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_e6ed65290db381ba_slow(flag);}

void Json::create_init(pls::cs::Ref<Json> self) {
Json::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Json.#ctor",game);
{}

}

// M:system.billing.util.Json.#ctor
pls::cs::Ref<Json> Json::create() {
Json::ensure_initialized();
 auto self = pls::cs::make_ref<Json>(); Json::create_init(self); return self; 
}

// M:system.billing.util.Json.ReadJSon(System.String,System.String)
pls::cs::String Json::ReadJSon(pls::cs::String json,pls::cs::String key) {
Json::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Json.ReadJSon(System.String,System.String)",game);
{
if (is_null(key) || is_null(json)) {
return pls::cs::String{};
}
pls::cs::Ref<pls::cs::RegexMatch> match = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::RuntimeRegex::Match(json, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_replace(literal(u"\"<key>\"\\s*:\\s*(\"[^\"]*\"|[0-9.]*)"), literal(u"<key>"), key);}));});
if (require(match)->get_Success()) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=require(([&](){auto cs_receiver=require(match)->get_Groups();auto cs_index=1;return require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=u'"';return pls::cs::string_trim(cs_text,cs_separators);}());});
}
match = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::RuntimeRegex::Match(json, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_replace(literal(u"\"<key>\"\\s*=\\s*(\"[^\"]*\"|[0-9.]*)"), literal(u"<key>"), key);}));});
if (require(match)->get_Success()) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=require(([&](){auto cs_receiver=require(match)->get_Groups();auto cs_index=1;return require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=u'"';return pls::cs::string_trim(cs_text,cs_separators);}());});
}
return pls::cs::String{};
}

}

// M:system.billing.util.Json.GetDetailJson(UnityEngine.Purchasing.Product)
pls::cs::String Json::GetDetailJson(pls::cs::Ref<UnityEngine::Purchasing::Product> p) {
Json::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Json.GetDetailJson(UnityEngine.Purchasing.Product)",game);
{
return pls::cs::String{};
}

}

// M:system.billing.util.Json.Record(System.String,System.String)
pls::cs::String Json::Record(pls::cs::String type,pls::cs::String value) {
Json::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Json.Record(System.String,System.String)",game);
{
return pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"\""), type), literal(u"\":\"")), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Escape(value);})), literal(u"\""));
}

}

// M:system.billing.util.Json.MakeJson(System.String[])
pls::cs::String Json::MakeJson(StringArray records) {
Json::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Json.MakeJson(System.String[])",game);
{
pls::cs::String text = literal(u"{");
for (pls::cs::Int32 i = 0; i < records.length(); ++i) {
text = pls::cs::String::concat(text,records[i]);
if (i != pls::cs::Int32(records.length()) - 1) {
text = pls::cs::String::concat(text,literal(u","));
}
}
text = pls::cs::String::concat(text,literal(u"}"));
return text;
}

}

// M:system.billing.util.Json.AdjustJson(UnityEngine.Purchasing.Product)
pls::cs::String Json::AdjustJson(pls::cs::Ref<UnityEngine::Purchasing::Product> p) {
Json::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Json.AdjustJson(UnityEngine.Purchasing.Product)",game);
{
return pls::cs::String{};
}

}

// M:system.billing.util.Json.AdjustJson(System.String,System.String,System.String)
pls::cs::String Json::AdjustJson(pls::cs::String receipt,pls::cs::String productID,pls::cs::String iOSPurchaseTime) {
Json::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Json.AdjustJson(System.String,System.String,System.String)",game);
{
pls::cs::String json = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_replace(receipt, literal(u"\\"), pls::cs::String(u""));});
StringArray2 array = StringArray2::from({StringArray::from({literal(u"orderId"), pls::cs::String(u"")}), StringArray::from({literal(u"packageName"), pls::cs::String(u"")}), StringArray::from({literal(u"productId"), pls::cs::String(u"")}), StringArray::from({literal(u"purchaseTime"), pls::cs::String(u"")}), StringArray::from({literal(u"purchaseState"), pls::cs::String(u"")}), StringArray::from({literal(u"developerPayload"), pls::cs::String(u"")}), StringArray::from({literal(u"token"), pls::cs::String(u"")}), StringArray::from({literal(u"purchaseToken"), pls::cs::String(u"")}), StringArray::from({literal(u"signature"), pls::cs::String(u"")})});
for (pls::cs::Int32 spriteIndex = 0; spriteIndex < array.length(); ++spriteIndex) {
StringArray array2 = array[spriteIndex];
array2[1] = Json::ReadJSon(json, array2[0]);
}
pls::cs::List<pls::cs::String> list = pls::cs::List<pls::cs::String>::make();
for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
if ((is_null(array[j][1])) || ((array[j][1].length() <= 0))) {
continue;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = list; auto cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = array[j][0]; pls::cs::String cs_arg1 = array[j][1]; return Json::Record(cs_arg0, cs_arg1); }()); cs_receiver.Add(cs_arg0); }());});
}
return Json::MakeJson(pls::diagnostic::api_call([&]() -> decltype(auto) {return list.ToArray();}));
}

}
} // namespace system::billing::util
}
