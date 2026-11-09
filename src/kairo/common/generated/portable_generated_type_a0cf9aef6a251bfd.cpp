// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_3af9088680f95fb3.hpp"
#include "portable_generated_type_a0cf9aef6a251bfd.hpp"
namespace pls::generated {

void cs_a0cf9aef6a251bfd::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_51f4a63dee24d947,visitor);}

void cs_a0cf9aef6a251bfd::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_51f4a63dee24d947);}

void cs_init_a0cf9aef6a251bfd(){static pls::cs::TypeInitState state;state.run("java.util.JRandom",[](){

});}

// M:java.util.JRandom.#ctor
pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_783c2dc4bd688739() { cs_init_a0cf9aef6a251bfd();
{ auto cs_this = pls::cs::make_ref<cs_a0cf9aef6a251bfd>(); cs_783c2dc4bd688739_init(cs_this); return cs_this; }
}

void cs_783c2dc4bd688739_init(pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_this) {
([&]() { std::int64_t cs_arg0 = ([&]() -> std::int64_t { return cs_55fcf3528750ae31(); }()); cs_8d402734b0c5f510_init(std::static_pointer_cast<cs_a0cf9aef6a251bfd>(cs_this),cs_arg0); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JRandom.#ctor",kairo);
{

}
}
}

// M:java.util.JRandom.#ctor(System.Int64)
pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_8d402734b0c5f510(std::int64_t v_seed) { cs_init_a0cf9aef6a251bfd();
{ auto cs_this = pls::cs::make_ref<cs_a0cf9aef6a251bfd>(); cs_8d402734b0c5f510_init(cs_this,v_seed); return cs_this; }
}

void cs_8d402734b0c5f510_init(pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_this,std::int64_t v_seed) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JRandom.#ctor(System.Int64)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_seed); return pls::cs::make_ref<pls::cs::Random>(cs_arg0); }()); pls::generated::cs_require(cs_target)->cs_51f4a63dee24d947 = cs_value; return cs_value; }());
}
}
}

// M:java.util.JRandom.NextInt
std::int32_t cs_1811bb4f9e389c4b(pls::cs::Ref<cs_a0cf9aef6a251bfd> cs_this) { cs_init_a0cf9aef6a251bfd();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JRandom.NextInt",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_51f4a63dee24d947; }()); return pls::generated::cs_require(cs_receiver)->Next(); }());});
}
}
}
}
}
