// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_3b41638e424b9ee0.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
namespace pls::generated {

void cs_3b41638e424b9ee0::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_e7a5499b363ef51b::trace_edges(visitor);}

void cs_3b41638e424b9ee0::release_edges(){cs_e7a5499b363ef51b::release_edges();}

std::int32_t cs_3b41638e424b9ee0::cs_virtual_bb7347310506b971() {return cs_67338973d6c3b7c6(std::static_pointer_cast<cs_3b41638e424b9ee0>(shared_from_this()));}

void cs_init_3b41638e424b9ee0(){static pls::cs::TypeInitState state;state.run("java.io.ByteArrayInputStream",[](){

});}

// M:java.io.ByteArrayInputStream.#ctor(System.Byte[])
pls::cs::Ref<cs_3b41638e424b9ee0> cs_c3a84083a67ee263(pls::cs::Array<std::uint8_t> v_data) { cs_init_3b41638e424b9ee0();
{ auto cs_this = pls::cs::make_ref<cs_3b41638e424b9ee0>(); cs_c3a84083a67ee263_init(cs_this,v_data); return cs_this; }
}

void cs_c3a84083a67ee263_init(pls::cs::Ref<cs_3b41638e424b9ee0> cs_this,pls::cs::Array<std::uint8_t> v_data) {
([&]() { cs_7c187221d1d7c346_init(std::static_pointer_cast<cs_e7a5499b363ef51b>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.ByteArrayInputStream.#ctor(System.Byte[])",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_arg0 = v_data; return pls::cs::make_ref<pls::cs::MemoryStream>(cs_arg0); }()); pls::generated::cs_require(cs_target)->cs_e65a8825426ed7a3 = cs_value; return cs_value; }());
}
}
}

// M:java.io.ByteArrayInputStream.Available
std::int32_t cs_67338973d6c3b7c6(pls::cs::Ref<cs_3b41638e424b9ee0> cs_this) { cs_init_3b41638e424b9ee0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.ByteArrayInputStream.Available",kairo);
{
pls::cs::Ref<pls::cs::MemoryStream> v_memoryStream_350 = pls::cs::unbox<pls::cs::Ref<pls::cs::MemoryStream>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())));
return pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::generated::cs_require(v_memoryStream_350)->get_Length(); auto cs_right = pls::generated::cs_require(v_memoryStream_350)->get_Position(); return pls::cs::sub_i64(cs_left,cs_right); }())));
}
}
}
}
}
