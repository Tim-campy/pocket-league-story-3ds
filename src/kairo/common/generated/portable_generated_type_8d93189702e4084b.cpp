// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_8d93189702e4084b.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
namespace pls::generated {

void cs_8d93189702e4084b::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_e7a5499b363ef51b::trace_edges(visitor);pls::cs::trace_value(cs_783a5dc8c7385bc4,visitor);}

void cs_8d93189702e4084b::release_edges(){cs_e7a5499b363ef51b::release_edges();pls::cs::release_value(cs_783a5dc8c7385bc4);}

void cs_8d93189702e4084b::cs_virtual_4546aef6e4846446() {cs_5b229bc3548b08c7(std::static_pointer_cast<cs_8d93189702e4084b>(shared_from_this()));}

void cs_init_8d93189702e4084b(){static pls::cs::TypeInitState state;state.run("java.io.DataInputStream",[](){

});}

// M:java.io.DataInputStream.#ctor(java.io.InputStream)
pls::cs::Ref<cs_8d93189702e4084b> cs_606370a03155bf34(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_8d93189702e4084b();
{ auto cs_this = pls::cs::make_ref<cs_8d93189702e4084b>(); cs_606370a03155bf34_init(cs_this,v_stream); return cs_this; }
}

void cs_606370a03155bf34_init(pls::cs::Ref<cs_8d93189702e4084b> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) {
([&]() { cs_7c187221d1d7c346_init(std::static_pointer_cast<cs_e7a5499b363ef51b>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.DataInputStream.#ctor(java.io.InputStream)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_value = v_stream; return cs_010114ded9156773(cs_value); }()); pls::generated::cs_require(cs_target)->cs_e65a8825426ed7a3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_arg0 = ([&]() { auto cs_value = v_stream; return cs_010114ded9156773(cs_value); }()); return pls::cs::make_ref<pls::cs::BinaryReader>(cs_arg0); }()); pls::generated::cs_require(cs_target)->cs_783a5dc8c7385bc4 = cs_value; return cs_value; }());
}
}
}

// M:java.io.DataInputStream.Close
void cs_5b229bc3548b08c7(pls::cs::Ref<cs_8d93189702e4084b> cs_this) { cs_init_8d93189702e4084b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.DataInputStream.Close",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_783a5dc8c7385bc4; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_783a5dc8c7385bc4; }()); pls::generated::cs_require(cs_receiver)->Close(); }());});
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<pls::cs::BinaryReader>{}; pls::generated::cs_require(cs_target)->cs_783a5dc8c7385bc4 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(std::static_pointer_cast<cs_e7a5499b363ef51b>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4546aef6e4846446(cs_receiver); }());
}
}
}
}

// M:java.io.DataInputStream.ReadInt
std::int32_t cs_d79f36f4078735fb(pls::cs::Ref<cs_8d93189702e4084b> cs_this) { cs_init_8d93189702e4084b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.DataInputStream.ReadInt",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_783a5dc8c7385bc4; }()); return pls::generated::cs_require(cs_receiver)->ReadInt32(); }());}); return pls::generated::cs_network_to_host<std::int32_t>(cs_arg0); }());});
}
}
}
}
}
