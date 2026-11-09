// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_408ac5c74e5f3515.hpp"
namespace pls::game {

void cs_408ac5c74e5f3515::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_71dbc351ecc57982,visitor);pls::cs::trace_value(cs_fcff22ab2f484bde,visitor);pls::cs::trace_value(cs_7d56a65066430756,visitor);pls::cs::trace_value(cs_4d9cb6241cd66304,visitor);}

void cs_408ac5c74e5f3515::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_71dbc351ecc57982);pls::cs::release_value(cs_fcff22ab2f484bde);pls::cs::release_value(cs_7d56a65066430756);pls::cs::release_value(cs_4d9cb6241cd66304);}

void cs_init_408ac5c74e5f3515(){static pls::cs::TypeInitState state;state.run("system.form.HttpForm.ResultData",[](){

});}

// M:system.form.HttpForm.ResultData.#ctor
pls::cs::Ref<cs_408ac5c74e5f3515> cs_8aaa473de163f748() { cs_init_408ac5c74e5f3515();
{ auto cs_this = pls::cs::make_ref<cs_408ac5c74e5f3515>(); cs_8aaa473de163f748_init(cs_this); return cs_this; }
}

void cs_8aaa473de163f748_init(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this) {
cs_this->cs_71dbc351ecc57982 = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<pls::cs::Object>>::make();
{}
}

// M:system.form.HttpForm.ResultData.Add(System.String,System.Object)
void cs_c91786768676e5e6(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_key,pls::cs::Ref<pls::cs::Object> v_data) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_71dbc351ecc57982; }()); auto cs_index = v_key; auto cs_value = v_data; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}

// M:system.form.HttpForm.ResultData.get_Error
pls::cs::String cs_afca4e9abd6175de(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_7d56a65066430756;}
}
}

// M:system.form.HttpForm.ResultData.get_Exception
pls::cs::Ref<pls::cs::ExceptionObject> cs_6ed697c2d33e26f6(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_fcff22ab2f484bde;}
}
}

// M:system.form.HttpForm.ResultData.get_Succeed
bool cs_07512424539c2fc2(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{return cs_this->cs_4d9cb6241cd66304;}
}
}

// M:system.form.HttpForm.ResultData.Get(System.String)
pls::cs::Ref<pls::cs::Object> cs_1a4dc7b41c694d0c(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_key) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::cs::Object> v_value_746 = pls::cs::Ref<pls::cs::Object>{};
if (([&](){auto cs_dictionary=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_71dbc351ecc57982; }());auto cs_key=v_key;return cs_dictionary.TryGetValue(cs_key,v_value_746);}())) {
return v_value_746;
}
return pls::cs::Ref<pls::cs::Object>{};
}
}
}

// M:system.form.HttpForm.ResultData.HasKey(System.String)
bool cs_4d31a276865668d1(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_key) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_71dbc351ecc57982; }()); auto cs_arg0 = v_key; return cs_receiver.ContainsKey(cs_arg0); }());
}
}
}

// M:system.form.HttpForm.ResultData.set_Error(System.String)
void cs_491eae3eae7d9573(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::String v_value) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_7d56a65066430756=v_value;}
}
}

// M:system.form.HttpForm.ResultData.set_Exception(System.Exception)
void cs_8d58629cef163b32(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,pls::cs::Ref<pls::cs::ExceptionObject> v_value) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_fcff22ab2f484bde=v_value;}
}
}

// M:system.form.HttpForm.ResultData.set_Succeed(System.Boolean)
void cs_961e1edcb72ada4a(pls::cs::Ref<cs_408ac5c74e5f3515> cs_this,bool v_value) { cs_init_408ac5c74e5f3515();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{cs_this->cs_4d9cb6241cd66304=v_value;}
}
}
}
