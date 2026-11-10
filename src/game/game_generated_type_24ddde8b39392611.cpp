// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_24ddde8b39392611.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
namespace pls::game {

void cs_24ddde8b39392611::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_86cc8a271e68cde9,visitor);pls::cs::trace_value(cs_050458c631e7a9c0,visitor);pls::cs::trace_value(cs_e9473a0af87a54bc,visitor);pls::cs::trace_value(cs_04a5436ce9dc3d38,visitor);}

void cs_24ddde8b39392611::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_86cc8a271e68cde9);pls::cs::release_value(cs_050458c631e7a9c0);pls::cs::release_value(cs_e9473a0af87a54bc);pls::cs::release_value(cs_04a5436ce9dc3d38);}

void cs_init_24ddde8b39392611(){static pls::cs::TypeInitState state;state.run("system.billing.ui.PurchaseLogView",[](){

});}

// M:system.billing.ui.PurchaseLogView.#ctor(System.String)
pls::cs::Ref<cs_24ddde8b39392611> cs_67a7684996012e79(pls::cs::String v_title) { cs_init_24ddde8b39392611();
{ auto cs_this = pls::cs::make_ref<cs_24ddde8b39392611>(); cs_67a7684996012e79_init(cs_this,v_title); return cs_this; }
}

void cs_67a7684996012e79_init(pls::cs::Ref<cs_24ddde8b39392611> cs_this,pls::cs::String v_title) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseLogView.#ctor(System.String)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_title; pls::game::cs_require(cs_target)->cs_86cc8a271e68cde9 = cs_value; return cs_value; }());
}
}
}

// M:system.billing.ui.PurchaseLogView.SetLog(System.Int32,System.String,System.Boolean)
void cs_5ff6954fb3a61a02(pls::cs::Ref<cs_24ddde8b39392611> cs_this,std::int32_t v_num,pls::cs::String v_text,bool v_log) { cs_init_24ddde8b39392611();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.ui.PurchaseLogView.SetLog(System.Int32,System.String,System.Boolean)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_num; pls::game::cs_require(cs_target)->cs_050458c631e7a9c0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_text; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x003c" u"\x0062" u"\x0072" u"\x003e" u"",4);return cs_literal;}()); pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::generated::cs_8857a152f901dbe0(cs_arg0,cs_arg1,cs_arg2); }());}); pls::game::cs_require(cs_target)->cs_e9473a0af87a54bc = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_log; pls::game::cs_require(cs_target)->cs_04a5436ce9dc3d38 = cs_value; return cs_value; }());
}
}
}
}
}
