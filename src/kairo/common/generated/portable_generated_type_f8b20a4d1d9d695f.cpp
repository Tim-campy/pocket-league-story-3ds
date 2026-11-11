// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_51222df74ac70bab.hpp"
#include "portable_generated_type_a0dc211eb3feb56d.hpp"
#include "portable_generated_type_f8b20a4d1d9d695f.hpp"
#include "portable_generated_type_51222df74ac70bab_templates.hpp"
namespace pls::generated {

void cs_f8b20a4d1d9d695f::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>::trace_edges(visitor);}

void cs_f8b20a4d1d9d695f::release_edges(){cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>::release_edges();}

bool cs_f8b20a4d1d9d695f::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_673ba145a871a846(pls::cs::static_pointer_cast<cs_f8b20a4d1d9d695f>(shared_from_this()),v_obj);}

void cs_init_f8b20a4d1d9d695f(){static pls::cs::TypeInitState state;state.run("java.util.Vector",[](){

});}

// M:java.util.Vector.#ctor
pls::cs::Ref<cs_f8b20a4d1d9d695f> cs_b5d75502f0a9aa7e() { cs_init_f8b20a4d1d9d695f();
{ auto cs_this = pls::cs::make_ref<cs_f8b20a4d1d9d695f>(); cs_b5d75502f0a9aa7e_init(cs_this); return cs_this; }
}

void cs_b5d75502f0a9aa7e_init(pls::cs::Ref<cs_f8b20a4d1d9d695f> cs_this) {
([&]() { cs_946b70ecd88b233a_init(pls::cs::static_pointer_cast<cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector.#ctor",kairo);
{

}
}
}

// M:java.util.Vector.Equals(System.Object)
bool cs_673ba145a871a846(pls::cs::Ref<cs_f8b20a4d1d9d695f> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_f8b20a4d1d9d695f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector.Equals(System.Object)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a0dc211eb3feb56d>>(pls::cs::box(v_obj))) {
return ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }())); auto cs_right = pls::cs::box(([&]() -> pls::cs::List<pls::cs::Ref<pls::cs::Object>> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a0dc211eb3feb56d>>(v_obj)); return pls::generated::cs_require(cs_receiver)->cs_virtual_60122bb6c899278e(); }())); return cs_left == cs_right; }());
}
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(pls::cs::static_pointer_cast<cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>(cs_this)); pls::cs::Ref<pls::cs::Object> cs_arg0 = v_obj; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5456805d05dd254d(cs_receiver,cs_arg0); }());
}
}
}
}
}
