// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_a09270023ec48eca.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::generated {

void cs_ea324a0bbfe717fe::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_f48613bc1c6327b8,visitor);}

void cs_ea324a0bbfe717fe::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_f48613bc1c6327b8);}

void cs_ea324a0bbfe717fe::cs_virtual_eeffa75bcd0cd73d(pls::cs::Array<std::uint8_t> v_b,std::int32_t v_offset,std::int32_t v_len) {cs_eeffa75bcd0cd73d(std::static_pointer_cast<cs_ea324a0bbfe717fe>(shared_from_this()),v_b,v_offset,v_len);}

void cs_ea324a0bbfe717fe::cs_virtual_109456b2dd9e2d77(pls::cs::Array<std::uint8_t> v_b) {cs_109456b2dd9e2d77(std::static_pointer_cast<cs_ea324a0bbfe717fe>(shared_from_this()),v_b);}

void cs_ea324a0bbfe717fe::cs_virtual_a2a7e1a6575cae4c(std::int32_t v_b) {cs_a2a7e1a6575cae4c(std::static_pointer_cast<cs_ea324a0bbfe717fe>(shared_from_this()),v_b);}

void cs_ea324a0bbfe717fe::cs_virtual_2adf924bd0d7d65a() {cs_2adf924bd0d7d65a(std::static_pointer_cast<cs_ea324a0bbfe717fe>(shared_from_this()));}

void cs_ea324a0bbfe717fe::cs_virtual_0d912191800a0b86() {cs_0d912191800a0b86(std::static_pointer_cast<cs_ea324a0bbfe717fe>(shared_from_this()));}

void cs_init_ea324a0bbfe717fe(){static pls::cs::TypeInitState state;state.run("java.io.OutputStream",[](){

});}

// M:java.io.OutputStream.#ctor
pls::cs::Ref<cs_ea324a0bbfe717fe> cs_60f0f6dd217b8877() { cs_init_ea324a0bbfe717fe();
{ auto cs_this = pls::cs::make_ref<cs_ea324a0bbfe717fe>(); cs_60f0f6dd217b8877_init(cs_this); return cs_this; }
}

void cs_60f0f6dd217b8877_init(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.OutputStream.#ctor",kairo);
{}
}
}

// M:java.io.OutputStream.Close
void cs_0d912191800a0b86(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this) { cs_init_ea324a0bbfe717fe();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.OutputStream.Close",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }()); pls::generated::cs_require(cs_receiver)->Close(); }());});
}
}
}
}
}

// M:java.io.OutputStream.Flush
void cs_2adf924bd0d7d65a(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this) { cs_init_ea324a0bbfe717fe();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.OutputStream.Flush",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }()); pls::generated::cs_require(cs_receiver)->Flush(); }());});
}
}
}
}
}

// M:java.io.OutputStream.Write(System.Byte[],System.Int32,System.Int32)
void cs_eeffa75bcd0cd73d(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this,pls::cs::Array<std::uint8_t> v_b,std::int32_t v_offset,std::int32_t v_len) { cs_init_ea324a0bbfe717fe();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.OutputStream.Write(System.Byte[],System.Int32,System.Int32)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(([&]() -> pls::cs::Ref<cs_ea324a0bbfe717fe> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }())))); return cs_362ad6b68823aeb0(static_cast<pls::cs::Ref<cs_a09270023ec48eca>>(cs_receiver)); }())); pls::cs::Array<std::uint8_t> cs_arg0 = v_b; std::int32_t cs_arg1 = v_offset; std::int32_t cs_arg2 = v_len; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_eeffa75bcd0cd73d(cs_arg0,cs_arg1,cs_arg2); }());
return;
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }()); auto cs_arg0 = v_b; auto cs_arg1 = v_offset; auto cs_arg2 = v_len; pls::generated::cs_require(cs_receiver)->Write(cs_arg0,cs_arg1,cs_arg2); }());});
return;
}
for (std::int32_t v_i_1171 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1171; auto cs_right = v_len; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1171; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1171 = cs_new; return cs_old; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(([&]() { auto cs_array = v_b; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_i_1171; auto cs_right = v_offset; return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
}
}
}
}
}

// M:java.io.OutputStream.Write(System.Byte[])
void cs_109456b2dd9e2d77(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this,pls::cs::Array<std::uint8_t> v_b) { cs_init_ea324a0bbfe717fe();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.OutputStream.Write(System.Byte[])",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_b; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = (v_b).length(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_eeffa75bcd0cd73d(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:java.io.OutputStream.Write(System.Int32)
void cs_a2a7e1a6575cae4c(pls::cs::Ref<cs_ea324a0bbfe717fe> cs_this,std::int32_t v_b) { cs_init_ea324a0bbfe717fe();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.OutputStream.Write(System.Int32)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(([&]() -> pls::cs::Ref<cs_ea324a0bbfe717fe> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }())))); return cs_362ad6b68823aeb0(static_cast<pls::cs::Ref<cs_a09270023ec48eca>>(cs_receiver)); }())); std::int32_t cs_arg0 = v_b; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
return;
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
throw pls::cs::NotImplementedException();
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f48613bc1c6327b8; }()); auto cs_arg0 = pls::cs::cast_integral<std::uint8_t>(v_b); pls::generated::cs_require(cs_receiver)->WriteByte(cs_arg0); }());});
}
}
}
}
}
