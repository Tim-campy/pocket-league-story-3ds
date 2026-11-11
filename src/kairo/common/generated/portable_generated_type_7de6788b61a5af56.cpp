// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_7de6788b61a5af56.hpp"
namespace pls::generated {

void cs_7de6788b61a5af56::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_159529d7b41663da,visitor);}

void cs_7de6788b61a5af56::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_159529d7b41663da);}

std::int32_t cs_7de6788b61a5af56::GetHashCode() {return cs_16762e09ddce2966(pls::cs::static_pointer_cast<cs_7de6788b61a5af56>(shared_from_this()));}

bool cs_7de6788b61a5af56::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_ebd756e2a16440e5(pls::cs::static_pointer_cast<cs_7de6788b61a5af56>(shared_from_this()),v_obj);}

pls::cs::String cs_7de6788b61a5af56::ToString() {return cs_044a765a6989d563(pls::cs::static_pointer_cast<cs_7de6788b61a5af56>(shared_from_this()));}

void cs_init_7de6788b61a5af56(){static pls::cs::TypeInitState state;state.run("java.lang.JInteger",[](){

});}

// M:java.lang.JInteger.#ctor(System.Int32)
pls::cs::Ref<cs_7de6788b61a5af56> cs_6ebf505bf86af890(std::int32_t v_value) { cs_init_7de6788b61a5af56();
{ auto cs_this = pls::cs::make_ref<cs_7de6788b61a5af56>(); cs_6ebf505bf86af890_init(cs_this,v_value); return cs_this; }
}

void cs_6ebf505bf86af890_init(pls::cs::Ref<cs_7de6788b61a5af56> cs_this,std::int32_t v_value) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.#ctor(System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::generated::cs_require(cs_target)->cs_159529d7b41663da = cs_value; return cs_value; }());
}
}
}

// M:java.lang.JInteger.Equals(System.Object)
bool cs_ebd756e2a16440e5(pls::cs::Ref<cs_7de6788b61a5af56> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_7de6788b61a5af56();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.Equals(System.Object)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_7de6788b61a5af56>>(pls::cs::box(v_obj))) {
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_159529d7b41663da; }()); auto cs_right = ([&]() { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_7de6788b61a5af56>>(v_obj)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_159529d7b41663da; }()); return (cs_left == cs_right); }());
}
return ([&]() { auto cs_left = pls::cs::box(cs_this); auto cs_right = pls::cs::box(v_obj); return cs_left == cs_right; }());
}
}
}
}

// M:java.lang.JInteger.GetHashCode
std::int32_t cs_16762e09ddce2966(pls::cs::Ref<cs_7de6788b61a5af56> cs_this) { cs_init_7de6788b61a5af56();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_159529d7b41663da; }()); return pls::generated::cs_value_hash(cs_arg0); }());});
}
}
}
}

// M:java.lang.JInteger.IntValue
std::int32_t cs_b1fe1ec0a394cd44(pls::cs::Ref<cs_7de6788b61a5af56> cs_this) { cs_init_7de6788b61a5af56();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.IntValue",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_159529d7b41663da; }());
}
}
}
}

// M:java.lang.JInteger.op_Implicit(java.lang.JInteger)~System.Int32
std::int32_t cs_9c23d908aa6dc449(pls::cs::Ref<cs_7de6788b61a5af56> v_s) { cs_init_7de6788b61a5af56();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.op_Implicit(java.lang.JInteger)~System.Int32",kairo);
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_7de6788b61a5af56>>(v_s); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b1fe1ec0a394cd44(cs_receiver); }());
}
}
}

// M:java.lang.JInteger.ParseInt(System.String)
std::int32_t cs_2dbfed27c63e8b3d(pls::cs::String v_s) { cs_init_7de6788b61a5af56();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.ParseInt(System.String)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = v_s; return pls::cs::int32_parse(cs_arg0); }());});
}
}
}

// M:java.lang.JInteger.ToString
pls::cs::String cs_044a765a6989d563(pls::cs::Ref<cs_7de6788b61a5af56> cs_this) { cs_init_7de6788b61a5af56();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.ToString",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_159529d7b41663da; }()); return pls::generated::cs_integer_string(cs_arg0); }());});
}
}
}
}

// M:java.lang.JInteger.ValueOf(System.String)
pls::cs::Ref<cs_7de6788b61a5af56> cs_908687d09e1c5f78(pls::cs::String v_s) { cs_init_7de6788b61a5af56();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.lang.JInteger.ValueOf(System.String)",kairo);
{
return pls::source_allocations::completed("new_object","src/KairoLibrary/java/lang/JInteger.cs:M:java.lang.JInteger.ValueOf(System.String):540",([&]() -> pls::cs::Ref<cs_7de6788b61a5af56> { std::int32_t cs_arg0 = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_s; return cs_2dbfed27c63e8b3d(cs_arg0); }()); return cs_6ebf505bf86af890(cs_arg0); }()));
}
}
}
}
