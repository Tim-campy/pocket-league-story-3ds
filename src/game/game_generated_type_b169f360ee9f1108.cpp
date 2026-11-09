// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_b169f360ee9f1108.hpp"
namespace pls::game {

void cs_b169f360ee9f1108::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_e0a5bfe7faf6c07e,visitor);pls::cs::trace_value(cs_47aad339f248ff81,visitor);pls::cs::trace_value(cs_6cbd485f86bf5859,visitor);pls::cs::trace_value(cs_33c621bd4fd10d07,visitor);pls::cs::trace_value(cs_5035eb310e4a8d61,visitor);pls::cs::trace_value(cs_c8cc33ddf6dcb591,visitor);pls::cs::trace_value(cs_43141e651b3c1995,visitor);}

void cs_b169f360ee9f1108::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_e0a5bfe7faf6c07e);pls::cs::release_value(cs_47aad339f248ff81);pls::cs::release_value(cs_6cbd485f86bf5859);pls::cs::release_value(cs_33c621bd4fd10d07);pls::cs::release_value(cs_5035eb310e4a8d61);pls::cs::release_value(cs_c8cc33ddf6dcb591);pls::cs::release_value(cs_43141e651b3c1995);}

std::int32_t cs_b169f360ee9f1108::GetHashCode() {return cs_bd48f39de19516d5(std::static_pointer_cast<cs_b169f360ee9f1108>(shared_from_this()));}

pls::cs::String cs_b169f360ee9f1108::ToString() {return cs_3fc374a8a3e0f24e(std::static_pointer_cast<cs_b169f360ee9f1108>(shared_from_this()));}

void cs_init_b169f360ee9f1108(){static pls::cs::TypeInitState state;state.run("system.billing.util.SkuDetails",[](){

});}

// M:system.billing.util.SkuDetails.#ctor
pls::cs::Ref<cs_b169f360ee9f1108> cs_fdfacb67cda123d7() { cs_init_b169f360ee9f1108();
{ auto cs_this = pls::cs::make_ref<cs_b169f360ee9f1108>(); cs_fdfacb67cda123d7_init(cs_this); return cs_this; }
}

void cs_fdfacb67cda123d7_init(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.#ctor",game);
{

}
}
}

// M:system.billing.util.SkuDetails.#ctor(System.String,System.String)
pls::cs::Ref<cs_b169f360ee9f1108> cs_943696d8c8e0a6d0(pls::cs::String v_itemType,pls::cs::String v_jsonSkuDetails) { cs_init_b169f360ee9f1108();
{ auto cs_this = pls::cs::make_ref<cs_b169f360ee9f1108>(); cs_943696d8c8e0a6d0_init(cs_this,v_itemType,v_jsonSkuDetails); return cs_this; }
}

void cs_943696d8c8e0a6d0_init(pls::cs::Ref<cs_b169f360ee9f1108> cs_this,pls::cs::String v_itemType,pls::cs::String v_jsonSkuDetails) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.#ctor(System.String,System.String)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_itemType; pls::game::cs_require(cs_target)->cs_e0a5bfe7faf6c07e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_jsonSkuDetails; pls::game::cs_require(cs_target)->cs_43141e651b3c1995 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x006f" u"\x0064" u"\x0075" u"\x0063" u"\x0074" u"\x0049" u"\x0064" u"",9)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_47aad339f248ff81 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x0079" u"\x0070" u"\x0065" u"",4)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_6cbd485f86bf5859 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0070" u"\x0072" u"\x0069" u"\x0063" u"\x0065" u"",5)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_33c621bd4fd10d07 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0074" u"\x0069" u"\x0074" u"\x006c" u"\x0065" u"",5)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_5035eb310e4a8d61 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); pls::cs::String cs_arg1 = pls::cs::String(std::u16string(u"\x0064" u"\x0065" u"\x0073" u"\x0063" u"\x0072" u"\x0069" u"\x0070" u"\x0074" u"\x0069" u"\x006f" u"\x006e" u"",11)); return cs_edc7a5099fbaba03(cs_arg0,cs_arg1); }()); pls::game::cs_require(cs_target)->cs_c8cc33ddf6dcb591 = cs_value; return cs_value; }());
}
}
}

// M:system.billing.util.SkuDetails.#ctor(System.String)
pls::cs::Ref<cs_b169f360ee9f1108> cs_26ea8b67da16b42f(pls::cs::String v_jsonSkuDetails) { cs_init_b169f360ee9f1108();
{ auto cs_this = pls::cs::make_ref<cs_b169f360ee9f1108>(); cs_26ea8b67da16b42f_init(cs_this,v_jsonSkuDetails); return cs_this; }
}

void cs_26ea8b67da16b42f_init(pls::cs::Ref<cs_b169f360ee9f1108> cs_this,pls::cs::String v_jsonSkuDetails) {
([&]() { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0069" u"\x006e" u"\x0061" u"\x0070" u"\x0070" u"",5)); pls::cs::String cs_arg1 = v_jsonSkuDetails; cs_943696d8c8e0a6d0_init(std::static_pointer_cast<cs_b169f360ee9f1108>(cs_this),cs_arg0,cs_arg1); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.#ctor(System.String)",game);
{

}
}
}

// M:system.billing.util.SkuDetails.GetDescription
pls::cs::String cs_007c055a377a3713(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetDescription",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8cc33ddf6dcb591; }());
}
}
}
}

// M:system.billing.util.SkuDetails.GetHashCode
std::int32_t cs_bd48f39de19516d5(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:system.billing.util.SkuDetails.GetPrice
pls::cs::String cs_f2973c21b56d3d36(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetPrice",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_33c621bd4fd10d07; }());
}
}
}
}

// M:system.billing.util.SkuDetails.GetSku
pls::cs::String cs_6f026fa24daeff2d(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetSku",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_47aad339f248ff81; }());
}
}
}
}

// M:system.billing.util.SkuDetails.GetTitle
pls::cs::String cs_35247c009c4a912a(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetTitle",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5035eb310e4a8d61; }());
}
}
}
}

// M:system.billing.util.SkuDetails.GetTypeA
pls::cs::String cs_8859afa17c7cf09c(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.GetTypeA",game);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6cbd485f86bf5859; }());
}
}
}
}

// M:system.billing.util.SkuDetails.ReadJSon(System.String,System.String)
pls::cs::String cs_edc7a5099fbaba03(pls::cs::String v_json,pls::cs::String v_key) { cs_init_b169f360ee9f1108();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.ReadJSon(System.String,System.String)",game);
{
if ((([&]() { auto cs_left = pls::cs::box(v_key); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() { auto cs_left = pls::cs::box(v_json); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()))) {
return pls::cs::String{};
}
pls::cs::Ref<pls::cs::RegexMatch> v_match_1145 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::RegexMatch> { auto cs_arg0 = v_json; auto cs_arg1 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::String(std::u16string(u"\x0022" u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"\x0022" u"\x005c" u"\x0073" u"\x002a" u"\x003a" u"\x005c" u"\x0073" u"\x002a" u"\x0028" u"\x0022" u"\x005b" u"\x005e" u"\x0022" u"\x005d" u"\x002a" u"\x0022" u"\x007c" u"\x005b" u"\x0030" u"\x002d" u"\x0039" u"\x002e" u"\x005d" u"\x002a" u"\x0029" u"",31)); auto cs_arg1 = pls::cs::String(std::u16string(u"\x003c" u"\x006b" u"\x0065" u"\x0079" u"\x003e" u"",5)); auto cs_arg2 = v_key; return pls::cs::string_replace(cs_arg0,cs_arg1,cs_arg2); }());}); return pls::cs::RuntimeRegex::Match(cs_arg0,cs_arg1); }());});
if (pls::game::cs_require(v_match_1145)->get_Success()) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=pls::game::cs_require(([&](){auto cs_receiver=pls::game::cs_require(v_match_1145)->get_Groups();auto cs_index=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));return pls::game::cs_require(cs_receiver)->get_Item(cs_index);}()))->get_Value();auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=char16_t(34);return pls::cs::string_trim(cs_text,cs_separators);}());});
}
return pls::cs::String{};
}
}
}

// M:system.billing.util.SkuDetails.ToString
pls::cs::String cs_3fc374a8a3e0f24e(pls::cs::Ref<cs_b169f360ee9f1108> cs_this) { cs_init_b169f360ee9f1108();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.SkuDetails.ToString",game);
{
return ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0053" u"\x006b" u"\x0075" u"\x0044" u"\x0065" u"\x0074" u"\x0061" u"\x0069" u"\x006c" u"\x0073" u"\x003a" u"",11)); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_43141e651b3c1995; }()); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
}
}
