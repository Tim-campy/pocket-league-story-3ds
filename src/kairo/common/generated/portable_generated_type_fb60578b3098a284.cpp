// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
#include "portable_generated_type_fb60578b3098a284.hpp"
namespace pls::generated {

void cs_fb60578b3098a284::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_ea324a0bbfe717fe::trace_edges(visitor);}

void cs_fb60578b3098a284::release_edges(){cs_ea324a0bbfe717fe::release_edges();}

pls::cs::String cs_fb60578b3098a284::ToString() {return cs_576830aae6220bdb(std::static_pointer_cast<cs_fb60578b3098a284>(shared_from_this()));}

void cs_fb60578b3098a284::cs_virtual_0d912191800a0b86() {cs_939f1d17e9442852(std::static_pointer_cast<cs_fb60578b3098a284>(shared_from_this()));}

void cs_init_fb60578b3098a284(){static pls::cs::TypeInitState state;state.run("java.io.ByteArrayOutputStream",[](){

});}

// M:java.io.ByteArrayOutputStream.#ctor
pls::cs::Ref<cs_fb60578b3098a284> cs_10f86e0fa81e1b57() { cs_init_fb60578b3098a284();
{ auto cs_this = pls::cs::make_ref<cs_fb60578b3098a284>(); cs_10f86e0fa81e1b57_init(cs_this); return cs_this; }
}

void cs_10f86e0fa81e1b57_init(pls::cs::Ref<cs_fb60578b3098a284> cs_this) {
([&]() { cs_60f0f6dd217b8877_init(std::static_pointer_cast<cs_ea324a0bbfe717fe>(cs_this)); }());
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.ByteArrayOutputStream.#ctor",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/java/io/ByteArrayOutputStream.cs:M:java.io.ByteArrayOutputStream.#ctor:161",([&]() { return pls::cs::make_ref<pls::cs::MemoryStream>(); }())); pls::generated::cs_require(cs_target)->cs_f48613bc1c6327b8 = cs_value; return cs_value; }());
}
}
}

// M:java.io.ByteArrayOutputStream.Close
void cs_939f1d17e9442852(pls::cs::Ref<cs_fb60578b3098a284> cs_this) { cs_init_fb60578b3098a284();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.ByteArrayOutputStream.Close",kairo);
{

}
}
}
}

// M:java.io.ByteArrayOutputStream.ToByteArray
pls::cs::Array<std::uint8_t> cs_c875afd29ab2966c(pls::cs::Ref<cs_fb60578b3098a284> cs_this) { cs_init_fb60578b3098a284();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.ByteArrayOutputStream.ToByteArray",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<pls::cs::MemoryStream>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }())))); return pls::generated::cs_require(cs_receiver)->ToArray(); }());});
}
}
}
}

// M:java.io.ByteArrayOutputStream.ToString
pls::cs::String cs_576830aae6220bdb(pls::cs::Ref<cs_fb60578b3098a284> cs_this) { cs_init_fb60578b3098a284();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.ByteArrayOutputStream.ToString",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_receiver = pls::cs::RuntimeEncoding::get_UTF8(); auto cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fb60578b3098a284>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c875afd29ab2966c(cs_receiver); }()); return pls::generated::cs_require(cs_receiver)->GetString(cs_arg0); }());});
}
}
}
}
}
