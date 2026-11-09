// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_51fd12cb14e568f9.hpp"
#include "game_generated_type_a42daea58251b089.hpp"
#include "game_generated_type_b169f360ee9f1108.hpp"
namespace pls::game {

void cs_51fd12cb14e568f9::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_707c7a72abb82ec1,visitor);pls::cs::trace_value(cs_3bdfea24b8fa4dd4,visitor);}

void cs_51fd12cb14e568f9::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_707c7a72abb82ec1);pls::cs::release_value(cs_3bdfea24b8fa4dd4);}

void cs_init_51fd12cb14e568f9(){static pls::cs::TypeInitState state;state.run("system.billing.util.Inventory",[](){

});}

// M:system.billing.util.Inventory.#ctor
pls::cs::Ref<cs_51fd12cb14e568f9> cs_711d8c323ca1c807() { cs_init_51fd12cb14e568f9();
{ auto cs_this = pls::cs::make_ref<cs_51fd12cb14e568f9>(); cs_711d8c323ca1c807_init(cs_this); return cs_this; }
}

void cs_711d8c323ca1c807_init(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this) {
cs_this->cs_707c7a72abb82ec1 = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_b169f360ee9f1108>>::make();
cs_this->cs_3bdfea24b8fa4dd4 = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_a42daea58251b089>>::make();
{

}
}

// M:system.billing.util.Inventory.AddPurchase(system.billing.util.Purchase)
void cs_83123998486200aa(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::Ref<cs_a42daea58251b089> v_p) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_index = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_a42daea58251b089>>(v_p); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e57c9ca2bf077da0(cs_receiver); }()); auto cs_value = v_p; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}

// M:system.billing.util.Inventory.AddSkuDetails(system.billing.util.SkuDetails)
void cs_8655b0acd5de2cab(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::Ref<cs_b169f360ee9f1108> v_d) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_707c7a72abb82ec1; }()); auto cs_index = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_b169f360ee9f1108>>(v_d); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6f026fa24daeff2d(cs_receiver); }()); auto cs_value = v_d; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}

// M:system.billing.util.Inventory.ErasePurchase(System.String)
void cs_dbd8e782b8e382eb(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if (([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_arg0 = v_sku; return cs_receiver.ContainsKey(cs_arg0); }())) {
([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_arg0 = v_sku; return cs_receiver.Remove(cs_arg0); }());
}
}
}
}

// M:system.billing.util.Inventory.GetPurchase(System.String)
pls::cs::Ref<cs_a42daea58251b089> cs_a38e4a52b899543e(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_a42daea58251b089> v_value_519 = pls::cs::Ref<cs_a42daea58251b089>{};
([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }());auto cs_key=v_sku;return cs_dictionary.TryGetValue(cs_key,v_value_519);}());
return v_value_519;
}
}
}

// M:system.billing.util.Inventory.GetSkuDetails(System.String)
pls::cs::Ref<cs_b169f360ee9f1108> cs_dd2b0d12cb37519c(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_b169f360ee9f1108> v_value_392 = pls::cs::Ref<cs_b169f360ee9f1108>{};
([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_707c7a72abb82ec1; }());auto cs_key=v_sku;return cs_dictionary.TryGetValue(cs_key,v_value_392);}());
return v_value_392;
}
}
}

// M:system.billing.util.Inventory.HasDetails(System.String)
bool cs_490b3ef94c6ce903(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_707c7a72abb82ec1; }()); auto cs_arg0 = v_sku; return cs_receiver.ContainsKey(cs_arg0); }());
}
}
}

// M:system.billing.util.Inventory.HasPurchase(System.String)
bool cs_8976c462d0b51676(pls::cs::Ref<cs_51fd12cb14e568f9> cs_this,pls::cs::String v_sku) { cs_init_51fd12cb14e568f9();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bdfea24b8fa4dd4; }()); auto cs_arg0 = v_sku; return cs_receiver.ContainsKey(cs_arg0); }());
}
}
}
}
