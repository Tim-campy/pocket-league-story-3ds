// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_51fd12cb14e568f9.hpp"
#include "game_generated_type_a42daea58251b089.hpp"
#include "game_generated_type_b169f360ee9f1108.hpp"
namespace pls::game {

void cs_51fd12cb14e568f9::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_707c7a72abb82ec1,visitor);pls::cs::trace_value(cs_3bdfea24b8fa4dd4,visitor);}

void cs_init_51fd12cb14e568f9(){static pls::cs::TypeInitState state;state.run("system.billing.util.Inventory",[](){

});}

// M:system.billing.util.Inventory.#ctor
pls::cs::Ref<cs_51fd12cb14e568f9> cs_711d8c323ca1c807() { cs_init_51fd12cb14e568f9();
{ auto cs_this = pls::cs::make_ref<cs_51fd12cb14e568f9>(); cs_711d8c323ca1c807_init(cs_this); return cs_this; }
}

void cs_711d8c323ca1c807_init(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this) {
cs_init_51fd12cb14e568f9();
cs_this->cs_707c7a72abb82ec1 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/util/Inventory.cs:M:system.billing.util.Inventory.#ctor:165",pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_b169f360ee9f1108>>::make());
cs_this->cs_3bdfea24b8fa4dd4 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/util/Inventory.cs:M:system.billing.util.Inventory.#ctor:259",pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_a42daea58251b089>>::make());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.#ctor",game);
{

}
}
}

// M:system.billing.util.Inventory.AddPurchase(system.billing.util.Purchase)
void cs_83123998486200aa(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_p) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.AddPurchase(system.billing.util.Purchase)",game);
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_index = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_a42daea58251b089>>(v_p); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e57c9ca2bf077da0(cs_receiver); }()); auto cs_value = v_p; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}
}

// M:system.billing.util.Inventory.AddSkuDetails(system.billing.util.SkuDetails)
void cs_8655b0acd5de2cab(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::Ref<cs_b169f360ee9f1108> v_d) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.AddSkuDetails(system.billing.util.SkuDetails)",game);
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_707c7a72abb82ec1; }()); auto cs_index = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_b169f360ee9f1108>>(v_d); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6f026fa24daeff2d(cs_receiver); }()); auto cs_value = v_d; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}
}

// M:system.billing.util.Inventory.ErasePurchase(System.String)
void cs_dbd8e782b8e382eb(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.ErasePurchase(System.String)",game);
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_arg0 = v_sku; return cs_receiver.ContainsKey(cs_arg0); }());})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_arg0 = v_sku; return cs_receiver.Remove(cs_arg0); }());});
}
}
}
}
}

// M:system.billing.util.Inventory.GetAllOwnedSkus
pls::cs::List<pls::cs::String> cs_eb8c73cf06afa4ca(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.GetAllOwnedSkus",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }());auto cs_items=cs_dictionary.KeysToArray();auto cs_list=pls::cs::List<pls::cs::String>::make(cs_items.length());for(std::int32_t cs_i=0;cs_i<cs_items.length();++cs_i)cs_list.Add(cs_items.at(cs_i));return cs_list;}());});
}
}
}
}

// M:system.billing.util.Inventory.GetAllOwnedSkus(System.String)
pls::cs::List<pls::cs::String> cs_e6ff2e06fe427587(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_itemType) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.GetAllOwnedSkus(System.String)",game);
{
pls::cs::List<pls::cs::String> v_list_1056 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/billing/util/Inventory.cs:M:system.billing.util.Inventory.GetAllOwnedSkus(System.String):1063",pls::cs::List<pls::cs::String>::make());
{auto cs_view_enum861=(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }())).GetEnumerator();struct cs_view_scope861{decltype(cs_view_enum861)&e;~cs_view_scope861(){e.Dispose();}} cs_scope861{cs_view_enum861};while(cs_view_enum861.MoveNext()){ pls::cs::Ref<cs_a42daea58251b089> v_value_1086=cs_view_enum861.get_Current().get_Value(); {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_a42daea58251b089>>(v_value_1086); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_835e52407836b201(cs_receiver); }()); auto cs_arg1 = v_itemType; return pls::game::cs_string_equals(cs_arg0,cs_arg1); }());})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = v_list_1056; auto cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_a42daea58251b089>>(v_value_1086); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e57c9ca2bf077da0(cs_receiver); }()); cs_receiver.Add(cs_arg0); }());});
}
} }}
return v_list_1056;
}
}
}
}

// M:system.billing.util.Inventory.GetAllPurchases
pls::cs::List<pls::cs::Ref<cs_a42daea58251b089>> cs_bcfec96e51e3fd81(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.GetAllPurchases",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }());auto cs_items=cs_dictionary.ValuesToArray();auto cs_list=pls::cs::List<pls::cs::Ref<cs_a42daea58251b089>>::make(cs_items.length());for(std::int32_t cs_i=0;cs_i<cs_items.length();++cs_i)cs_list.Add(cs_items.at(cs_i));return cs_list;}());});
}
}
}
}

// M:system.billing.util.Inventory.GetPurchase(System.String)
pls::cs::Ref<cs_a42daea58251b089> cs_a38e4a52b899543e(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.GetPurchase(System.String)",game);
{
pls::cs::Ref<cs_a42daea58251b089> v_value_519 = pls::cs::Ref<cs_a42daea58251b089>{};
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }());auto cs_key=v_sku;return cs_dictionary.TryGetValue(cs_key,v_value_519);}());});
return v_value_519;
}
}
}
}

// M:system.billing.util.Inventory.GetSkuDetails(System.String)
pls::cs::Ref<cs_b169f360ee9f1108> cs_dd2b0d12cb37519c(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.GetSkuDetails(System.String)",game);
{
pls::cs::Ref<cs_b169f360ee9f1108> v_value_392 = pls::cs::Ref<cs_b169f360ee9f1108>{};
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_707c7a72abb82ec1; }());auto cs_key=v_sku;return cs_dictionary.TryGetValue(cs_key,v_value_392);}());});
return v_value_392;
}
}
}
}

// M:system.billing.util.Inventory.HasDetails(System.String)
bool cs_490b3ef94c6ce903(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.HasDetails(System.String)",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_707c7a72abb82ec1; }()); auto cs_arg0 = v_sku; return cs_receiver.ContainsKey(cs_arg0); }());});
}
}
}
}

// M:system.billing.util.Inventory.HasPurchase(System.String)
bool cs_8976c462d0b51676(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.billing.util.Inventory.HasPurchase(System.String)",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_arg0 = v_sku; return cs_receiver.ContainsKey(cs_arg0); }());});
}
}
}
}
}
