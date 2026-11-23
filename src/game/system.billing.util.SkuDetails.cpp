// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "system.billing.util.SkuDetails.hpp"
namespace pls::game {
namespace system::billing::util {

void SkuDetails::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(mItemType,visitor);pls::cs::trace_value(mSku,visitor);pls::cs::trace_value(mType,visitor);pls::cs::trace_value(mPrice,visitor);pls::cs::trace_value(mTitle,visitor);pls::cs::trace_value(mDescription,visitor);pls::cs::trace_value(mJson,visitor);}

static PLS_NOINLINE void cs_init_b169f360ee9f1108_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.billing.util.SkuDetails",flag,[](){

});}

void SkuDetails::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_b169f360ee9f1108_slow(flag);}

void SkuDetails::create_init(pls::cs::Ref<SkuDetails> self) {
SkuDetails::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.#ctor",game);
{

}

}

void SkuDetails::create_init(pls::cs::Ref<SkuDetails> self,pls::cs::String itemType,pls::cs::String jsonSkuDetails) {
SkuDetails::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.#ctor(System.String,System.String)",game);
{
self->mItemType = itemType;
self->mJson = jsonSkuDetails;
self->mSku = SkuDetails::ReadJSon(self->mJson, literal(u"productId"));
self->mType = SkuDetails::ReadJSon(self->mJson, literal(u"type"));
self->mPrice = SkuDetails::ReadJSon(self->mJson, literal(u"price"));
self->mTitle = SkuDetails::ReadJSon(self->mJson, literal(u"title"));
self->mDescription = SkuDetails::ReadJSon(self->mJson, literal(u"description"));
}

}

void SkuDetails::create_init(pls::cs::Ref<SkuDetails> self,pls::cs::String jsonSkuDetails) {
SkuDetails::ensure_initialized();
SkuDetails::create_init(pls::cs::static_pointer_cast<SkuDetails>(self), literal(u"inapp"), jsonSkuDetails);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.#ctor(System.String)",game);
{

}

}

// M:system.billing.util.SkuDetails.#ctor
pls::cs::Ref<SkuDetails> SkuDetails::create() {
SkuDetails::ensure_initialized();
 auto self = pls::cs::make_ref<SkuDetails>(); SkuDetails::create_init(self); return self; 
}

// M:system.billing.util.SkuDetails.#ctor(System.String)
pls::cs::Ref<SkuDetails> SkuDetails::create(pls::cs::String jsonSkuDetails) {
SkuDetails::ensure_initialized();
 auto self = pls::cs::make_ref<SkuDetails>(); SkuDetails::create_init(self,jsonSkuDetails); return self; 
}

// M:system.billing.util.SkuDetails.#ctor(System.String,System.String)
pls::cs::Ref<SkuDetails> SkuDetails::create(pls::cs::String itemType,pls::cs::String jsonSkuDetails) {
SkuDetails::ensure_initialized();
 auto self = pls::cs::make_ref<SkuDetails>(); SkuDetails::create_init(self,itemType,jsonSkuDetails); return self; 
}

// M:system.billing.util.SkuDetails.GetSku
pls::cs::String SkuDetails::GetSku() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetSku",game);
{
return mSku;
}
}

// M:system.billing.util.SkuDetails.GetTypeA
pls::cs::String SkuDetails::GetTypeA() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetTypeA",game);
{
return mType;
}
}

// M:system.billing.util.SkuDetails.GetPrice
pls::cs::String SkuDetails::GetPrice() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetPrice",game);
{
return mPrice;
}
}

// M:system.billing.util.SkuDetails.GetTitle
pls::cs::String SkuDetails::GetTitle() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetTitle",game);
{
return mTitle;
}
}

// M:system.billing.util.SkuDetails.GetDescription
pls::cs::String SkuDetails::GetDescription() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetDescription",game);
{
return mDescription;
}
}

// M:system.billing.util.SkuDetails.ReadJSon(System.String,System.String)
pls::cs::String SkuDetails::ReadJSon(pls::cs::String json,pls::cs::String key) {
SkuDetails::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.ReadJSon(System.String,System.String)",game);
{
if (is_null(key) || is_null(json)) {
return pls::cs::String{};
}
pls::cs::Ref<pls::cs::RegexMatch> match = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::RuntimeRegex::Match(json, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_replace(literal(u"\"<key>\"\\s*:\\s*(\"[^\"]*\"|[0-9.]*)"), literal(u"<key>"), key);}));});
if (require(match)->get_Success()) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=require(([&](){auto cs_receiver=require(match)->get_Groups();auto cs_index=1;return require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=u'"';return pls::cs::string_trim(cs_text,cs_separators);}());});
}
return pls::cs::String{};
}

}

// M:system.billing.util.SkuDetails.ToString
pls::cs::String SkuDetails::ToString() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.ToString",game);
{
return pls::cs::String::concat(literal(u"SkuDetails:"), mJson);
}
}

// M:system.billing.util.SkuDetails.GetHashCode
std::int32_t SkuDetails::GetHashCode() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
} // namespace system::billing::util
}
