// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_a42daea58251b089.hpp"
namespace pls::game {

void cs_a42daea58251b089::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_d753206820f21a8d,visitor);pls::cs::trace_value(cs_a5fc6a5046dc6a62,visitor);pls::cs::trace_value(cs_85b5e0881697c2a4,visitor);pls::cs::trace_value(cs_4302441eac8005bc,visitor);pls::cs::trace_value(cs_406b12762a239146,visitor);pls::cs::trace_value(cs_6490fd19ca9cf865,visitor);pls::cs::trace_value(cs_6af4ef5d58ee8876,visitor);pls::cs::trace_value(cs_1293600bd46db9ba,visitor);pls::cs::trace_value(cs_2c5a071db61acb18,visitor);pls::cs::trace_value(cs_576f47efafc565de,visitor);}

void cs_a42daea58251b089::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_d753206820f21a8d);pls::cs::release_value(cs_a5fc6a5046dc6a62);pls::cs::release_value(cs_85b5e0881697c2a4);pls::cs::release_value(cs_4302441eac8005bc);pls::cs::release_value(cs_406b12762a239146);pls::cs::release_value(cs_6490fd19ca9cf865);pls::cs::release_value(cs_6af4ef5d58ee8876);pls::cs::release_value(cs_1293600bd46db9ba);pls::cs::release_value(cs_2c5a071db61acb18);pls::cs::release_value(cs_576f47efafc565de);}

std::int32_t cs_a42daea58251b089::GetHashCode() {return cs_0d5fadde939d8f48(std::static_pointer_cast<cs_a42daea58251b089>(shared_from_this()));}

pls::cs::String cs_a42daea58251b089::ToString() {return cs_eb2c53bbee32fa6a(std::static_pointer_cast<cs_a42daea58251b089>(shared_from_this()));}

void cs_init_a42daea58251b089(){static pls::cs::TypeInitState state;state.run("system.billing.util.Purchase",[](){

});}

// M:system.billing.util.Purchase.#ctor
pls::cs::Ref<cs_a42daea58251b089> cs_a9e6857e64b08e0d() { cs_init_a42daea58251b089();
{ auto cs_this = pls::cs::make_ref<cs_a42daea58251b089>(); cs_a9e6857e64b08e0d_init(cs_this); return cs_this; }
}

void cs_a9e6857e64b08e0d_init(pls::cs::Ref<cs_a42daea58251b089> cs_this) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.#ctor",game);
{

}
}
}

// M:system.billing.util.Purchase.#ctor(System.String,System.String,System.String)
pls::cs::Ref<cs_a42daea58251b089> cs_f7abaa335be13394(pls::cs::String v_itemType,pls::cs::String v_jsonPurchaseInfo,pls::cs::String v_signature) { cs_init_a42daea58251b089();
{ auto cs_this = pls::cs::make_ref<cs_a42daea58251b089>(); cs_f7abaa335be13394_init(cs_this,v_itemType,v_jsonPurchaseInfo,v_signature); return cs_this; }
}

void cs_f7abaa335be13394_init(pls::cs::Ref<cs_a42daea58251b089> cs_this,pls::cs::String v_itemType,pls::cs::String v_jsonPurchaseInfo,pls::cs::String v_signature) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.#ctor(System.String,System.String,System.String)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_itemType; pls::game::cs_require(cs_target)->cs_d753206820f21a8d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_jsonPurchaseInfo; pls::game::cs_require(cs_target)->cs_2c5a071db61acb18 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x006f" u"\x0072" u"\x0064" u"\x0065" u"\x0072" u"\x0049" u"\x0064" u"",7)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_a5fc6a5046dc6a62 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0061" u"\x0063" u"\x006b" u"\x0061" u"\x0067" u"\x0065" u"\x004e" u"\x0061" u"\x006d" u"\x0065" u"",11)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_85b5e0881697c2a4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0064" u"",9)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_4302441eac8005bc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { auto cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x0069" u"\x006d" u"\x0065" u"",12)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); return pls::cs::int64_parse(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_406b12762a239146 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0053" u"\x0074" u"\x0061" u"\x0074" u"\x0065" u"",13)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); return pls::cs::int32_parse(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_6490fd19ca9cf865 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0064" u"\x0065" u"\x0076" u"\x0065" u"\x006c" u"\x006f" u"\x0070" u"\x0065" u"\x0072" u"\x0050" u"\x0061" u"\x0079" u"\x006c" u"\x006f" u"\x0061" u"\x0064" u"",16)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_6af4ef5d58ee8876 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",5)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_1293600bd46db9ba = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1293600bd46db9ba; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0054" u"\x006f" u"\x006b" u"\x0065" u"\x006e" u"",13)); return cs_c5dc85edf0b8af25(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_1293600bd46db9ba = cs_value; return cs_value; }());
}
if (((([&]() -> bool { auto cs_left = v_itemType; auto cs_right = pls::cs::String(std::u16string(u"\x0073" u"\x0075" u"\x0062" u"\x0073" u"",4)); return (cs_left == cs_right); }()) && ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a5fc6a5046dc6a62; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a5fc6a5046dc6a62; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())))) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1293600bd46db9ba; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1293600bd46db9ba; }()); pls::game::cs_require(cs_target)->cs_a5fc6a5046dc6a62 = cs_value; return cs_value; }());
std::int32_t v_num_1211 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a5fc6a5046dc6a62; }()); auto cs_arg1 = char16_t(46); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }());});
if (([&]() -> bool { auto cs_left = v_num_1211; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a5fc6a5046dc6a62; }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = v_num_1211; return pls::game::cs_substring2(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_a5fc6a5046dc6a62 = cs_value; return cs_value; }());
}
}
([&]() { auto cs_target = cs_this; auto cs_value = v_signature; pls::game::cs_require(cs_target)->cs_576f47efafc565de = cs_value; return cs_value; }());
}
}
}

// M:system.billing.util.Purchase.GetDeveloperPayload
pls::cs::String cs_e619522a0176fc33(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetDeveloperPayload",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6af4ef5d58ee8876; }());
}
}
}
}

// M:system.billing.util.Purchase.GetHashCode
std::int32_t cs_0d5fadde939d8f48(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:system.billing.util.Purchase.GetItemType
pls::cs::String cs_835e52407836b201(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetItemType",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d753206820f21a8d; }());
}
}
}
}

// M:system.billing.util.Purchase.GetOrderId
pls::cs::String cs_30a95d92bd1ce70c(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetOrderId",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a5fc6a5046dc6a62; }());
}
}
}
}

// M:system.billing.util.Purchase.GetOriginalJson
pls::cs::String cs_d4114f5e7f34cc57(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetOriginalJson",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }());
}
}
}
}

// M:system.billing.util.Purchase.GetPackageName
pls::cs::String cs_a07baeaaa234184e(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetPackageName",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_85b5e0881697c2a4; }());
}
}
}
}

// M:system.billing.util.Purchase.GetPurchaseState
std::int32_t cs_dd87274ce185a4e4(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetPurchaseState",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6490fd19ca9cf865; }());
}
}
}
}

// M:system.billing.util.Purchase.GetPurchaseTime
std::int64_t cs_ebb3a05c47178475(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetPurchaseTime",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_406b12762a239146; }());
}
}
}
}

// M:system.billing.util.Purchase.GetSignature
pls::cs::String cs_cedfa91be2f68a03(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetSignature",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_576f47efafc565de; }());
}
}
}
}

// M:system.billing.util.Purchase.GetSku
pls::cs::String cs_e57c9ca2bf077da0(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetSku",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4302441eac8005bc; }());
}
}
}
}

// M:system.billing.util.Purchase.GetToken
pls::cs::String cs_f88753a6a366d95c(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.GetToken",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1293600bd46db9ba; }());
}
}
}
}

// M:system.billing.util.Purchase.ReadJSon(System.String,System.String)
pls::cs::String cs_c5dc85edf0b8af25(pls::cs::String v_json,pls::cs::String v_key) { cs_init_a42daea58251b089();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.ReadJSon(System.String,System.String)",game);
{
if ((([&]() { auto cs_left = pls::cs::box(v_key); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(v_json); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
return pls::cs::String{};
}
pls::cs::Ref<pls::cs::RegexMatch> v_match_2113 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_json; auto cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0022" u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x003a" u"\x005c" u"\x0073" u"\x002a" u"\x0028" u"\x0022" u"\x005b" u"\x005e" u"\x0022" u"\x005d" u"\x002a" u"\x0022" u"\x007c" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x002e" u"\x005d" u"\x002a" u"\x0029" u"",31)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"",5)); auto cs_arg2 = v_key; return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());});
if (pls::game::cs_require(v_match_2113)->get_Success()) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_2113)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(34);return pls::cs::string_trim(cs_text,cs_separators);}());});
}
return pls::cs::String{};
}
}
}

// M:system.billing.util.Purchase.ToString
pls::cs::String cs_eb2c53bbee32fa6a(pls::cs::Ref<cs_a42daea58251b089> cs_this) { cs_init_a42daea58251b089();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Purchase.ToString",game);
{
return ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0050" u"\x0075" u"\x0072" u"\x0063" u"\x0068" u"\x0061" u"\x0073" u"\x0065" u"\x0049" u"\x006e" u"\x0066" u"\x006f" u"\x0028" u"\x0074" u"\x0079" u"\x0070" u"\x0065" u"\x003a" u"",18)); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d753206820f21a8d; }()); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0029" u"\x003a" u"",2)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2c5a071db61acb18; }()); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
}
}
