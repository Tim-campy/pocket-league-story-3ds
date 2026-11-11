// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_ec7e2b4042d2be7d.hpp"
namespace pls::game {

void cs_ec7e2b4042d2be7d::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_5b36d01ce9e9d318,visitor);}

void cs_ec7e2b4042d2be7d::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_5b36d01ce9e9d318);}

pls::cs::String cs_ec7e2b4042d2be7d::ToString() {return cs_178189360649c175(pls::cs::static_pointer_cast<cs_ec7e2b4042d2be7d>(shared_from_this()));}

bool cs_ec7e2b4042d2be7d::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_38be50a793b5c23d(pls::cs::static_pointer_cast<cs_ec7e2b4042d2be7d>(shared_from_this()),v_obj);}

std::int32_t cs_ec7e2b4042d2be7d::GetHashCode() {return cs_efd0cba326e67ad0(pls::cs::static_pointer_cast<cs_ec7e2b4042d2be7d>(shared_from_this()));}

void cs_init_ec7e2b4042d2be7d(){static pls::cs::TypeInitState state;state.run("java.lang.JShort",[](){

});}

// M:java.lang.JShort.#ctor(System.Int16)
pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_99b0e4c5e8c0b01f(std::int16_t v_value) { cs_init_ec7e2b4042d2be7d();
{ auto cs_this = pls::cs::make_ref<cs_ec7e2b4042d2be7d>(); cs_99b0e4c5e8c0b01f_init(cs_this,v_value); return cs_this; }
}

void cs_99b0e4c5e8c0b01f_init(pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_this,std::int16_t v_value) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JShort.#ctor(System.Int16)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_5b36d01ce9e9d318 = cs_value; return cs_value; }());
}
}
}

// M:java.lang.JShort.Equals(System.Object)
bool cs_38be50a793b5c23d(pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_ec7e2b4042d2be7d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JShort.Equals(System.Object)",kairo);
{
if (pls::game::cs_is<pls::cs::Ref<cs_ec7e2b4042d2be7d>>(pls::cs::box(v_obj))) {
return ([&]() -> bool { auto cs_left = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b36d01ce9e9d318; }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_ec7e2b4042d2be7d>>(v_obj)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b36d01ce9e9d318; }())); return (cs_left == cs_right); }());
}
return ([&]() { auto cs_left = pls::cs::box(cs_this); auto cs_right = pls::cs::box(v_obj); return cs_left == cs_right; }());
}
}
}
}

// M:java.lang.JShort.GetHashCode
std::int32_t cs_efd0cba326e67ad0(pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_this) { cs_init_ec7e2b4042d2be7d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JShort.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b36d01ce9e9d318; }()); return pls::game::cs_value_hash(cs_arg0); }());});
}
}
}
}

// M:java.lang.JShort.ShortValue
std::int16_t cs_f049644ef5a1dd50(pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_this) { cs_init_ec7e2b4042d2be7d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JShort.ShortValue",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b36d01ce9e9d318; }());
}
}
}
}

// M:java.lang.JShort.ToString
pls::cs::String cs_178189360649c175(pls::cs::Ref<cs_ec7e2b4042d2be7d> cs_this) { cs_init_ec7e2b4042d2be7d();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JShort.ToString",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b36d01ce9e9d318; }()); return pls::game::cs_integer_string(cs_arg0); }());});
}
}
}
}
}
