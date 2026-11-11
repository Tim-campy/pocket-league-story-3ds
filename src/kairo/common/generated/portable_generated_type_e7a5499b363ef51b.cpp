// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_a09270023ec48eca.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::generated {

void cs_e7a5499b363ef51b::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_8aa92818c04571d3,visitor);pls::cs::trace_value(cs_e65a8825426ed7a3,visitor);pls::cs::trace_value(cs_0f6af5e5e6987974,visitor);}

void cs_e7a5499b363ef51b::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_8aa92818c04571d3);pls::cs::release_value(cs_e65a8825426ed7a3);pls::cs::release_value(cs_0f6af5e5e6987974);}

std::int64_t cs_e7a5499b363ef51b::cs_virtual_c6a293635ddab59b(std::int64_t v_cnt) {return cs_c6a293635ddab59b(pls::cs::static_pointer_cast<cs_e7a5499b363ef51b>(shared_from_this()),v_cnt);}

void cs_e7a5499b363ef51b::cs_virtual_a1f672a1edc7446d() {cs_a1f672a1edc7446d(pls::cs::static_pointer_cast<cs_e7a5499b363ef51b>(shared_from_this()));}

std::int32_t cs_e7a5499b363ef51b::cs_virtual_4614e302bc22aa99(pls::cs::Array<std::uint8_t> v_b,std::int32_t v_off,std::int32_t v_len) {return cs_4614e302bc22aa99(pls::cs::static_pointer_cast<cs_e7a5499b363ef51b>(shared_from_this()),v_b,v_off,v_len);}

std::int32_t cs_e7a5499b363ef51b::cs_virtual_e3637c1f0ab57ef5(pls::cs::Array<std::uint8_t> v_buf) {return cs_e3637c1f0ab57ef5(pls::cs::static_pointer_cast<cs_e7a5499b363ef51b>(shared_from_this()),v_buf);}

std::int32_t cs_e7a5499b363ef51b::cs_virtual_d49800fd6633bd98() {return cs_d49800fd6633bd98(pls::cs::static_pointer_cast<cs_e7a5499b363ef51b>(shared_from_this()));}

bool cs_e7a5499b363ef51b::cs_virtual_7dfe14f35a6a22dd() {return cs_7dfe14f35a6a22dd(pls::cs::static_pointer_cast<cs_e7a5499b363ef51b>(shared_from_this()));}

void cs_e7a5499b363ef51b::cs_virtual_baf1496cdc1c93d8(std::int32_t v_readlimit) {cs_baf1496cdc1c93d8(pls::cs::static_pointer_cast<cs_e7a5499b363ef51b>(shared_from_this()),v_readlimit);}

void cs_e7a5499b363ef51b::cs_virtual_4546aef6e4846446() {cs_4546aef6e4846446(pls::cs::static_pointer_cast<cs_e7a5499b363ef51b>(shared_from_this()));}

std::int32_t cs_e7a5499b363ef51b::cs_virtual_bb7347310506b971() {return cs_bb7347310506b971(pls::cs::static_pointer_cast<cs_e7a5499b363ef51b>(shared_from_this()));}

void cs_init_e7a5499b363ef51b(){static pls::cs::TypeInitState state;state.run("java.io.InputStream",[](){

});}

// M:java.io.InputStream.#ctor
pls::cs::Ref<cs_e7a5499b363ef51b> cs_7c187221d1d7c346() { cs_init_e7a5499b363ef51b();
{ auto cs_this = pls::cs::make_ref<cs_e7a5499b363ef51b>(); cs_7c187221d1d7c346_init(cs_this); return cs_this; }
}

void cs_7c187221d1d7c346_init(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.#ctor",kairo);
{}
}
}

// M:java.io.InputStream.Available
std::int32_t cs_bb7347310506b971(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Available",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))) {
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))); return cs_fde8a8ea457737fa(static_cast<pls::cs::Ref<cs_a09270023ec48eca>>(cs_receiver)); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_bb7347310506b971(); }());
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
}
}

// M:java.io.InputStream.CanSeek
bool cs_134fe7a07d721941(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.CanSeek",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return pls::generated::cs_require(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }()))->get_CanSeek();
}
return false;
}
}
}
}

// M:java.io.InputStream.Close
void cs_4546aef6e4846446(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Close",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }()); pls::generated::cs_require(cs_receiver)->Close(); }());});
}
}
}
}
}

// M:java.io.InputStream.get_Position
std::int64_t cs_9dac93bf518080bf(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.get_Position",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return pls::generated::cs_require(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }()))->get_Position();
}
throw pls::cs::NotSupportedException();
}
}
}
}

// M:java.io.InputStream.GetWrappedStream
pls::cs::Ref<pls::cs::Stream> cs_a8c261103d5c33e8(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.GetWrappedStream",kairo);
{
return pls::source_allocations::completed("new_object","src/KairoLibrary/java/io/InputStream.cs:M:java.io.InputStream.GetWrappedStream:2565",([&]() -> pls::cs::Ref<cs_a09270023ec48eca> { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = cs_this; return cs_f4af9cf35590567d(cs_arg0); }()));
}
}
}
}

// M:java.io.InputStream.Mark(System.Int32)
void cs_baf1496cdc1c93d8(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this,std::int32_t v_readlimit) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Mark(System.Int32)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))); return cs_fde8a8ea457737fa(static_cast<pls::cs::Ref<cs_a09270023ec48eca>>(cs_receiver)); }())); std::int32_t cs_arg0 = v_readlimit; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_baf1496cdc1c93d8(cs_arg0); }());
return;
}
if (pls::generated::cs_is<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0f6af5e5e6987974; }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_a09270023ec48eca>>((pls::cs::unbox<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0f6af5e5e6987974; }()))))); std::int32_t cs_arg0 = v_readlimit; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6050dd00fcef65a8(cs_receiver,cs_arg0); }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::generated::cs_require(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }()))->get_Position(); pls::generated::cs_require(cs_target)->cs_8aa92818c04571d3 = cs_value; return cs_value; }());
}
}
}
}
}

// M:java.io.InputStream.MarkSupported
bool cs_7dfe14f35a6a22dd(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.MarkSupported",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))) {
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))); return cs_fde8a8ea457737fa(static_cast<pls::cs::Ref<cs_a09270023ec48eca>>(cs_receiver)); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_7dfe14f35a6a22dd(); }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
return pls::generated::cs_require(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }()))->get_CanSeek();
}
return false;
}
}
}
}

// M:java.io.InputStream.op_Implicit(java.io.InputStream)~System.IO.Stream
pls::cs::Ref<pls::cs::Stream> cs_010114ded9156773(pls::cs::Ref<cs_e7a5499b363ef51b> v_s) { cs_init_e7a5499b363ef51b();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.op_Implicit(java.io.InputStream)~System.IO.Stream",kairo);
{
return ([&]() -> pls::cs::Ref<pls::cs::Stream> { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(v_s); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a8c261103d5c33e8(cs_receiver); }());
}
}
}

// M:java.io.InputStream.Read
std::int32_t cs_d49800fd6633bd98(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Read",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
throw pls::cs::NotImplementedException();
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }()); return pls::generated::cs_require(cs_receiver)->ReadByte(); }());});
}
}
}
}

// M:java.io.InputStream.Read(System.Byte[],System.Int32,System.Int32)
std::int32_t cs_4614e302bc22aa99(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this,pls::cs::Array<std::uint8_t> v_b,std::int32_t v_off,std::int32_t v_len) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Read(System.Byte[],System.Int32,System.Int32)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))) {
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))); return cs_fde8a8ea457737fa(static_cast<pls::cs::Ref<cs_a09270023ec48eca>>(cs_receiver)); }())); pls::cs::Array<std::uint8_t> cs_arg0 = v_b; std::int32_t cs_arg1 = v_off; std::int32_t cs_arg2 = v_len; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_4614e302bc22aa99(cs_arg0,cs_arg1,cs_arg2); }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
std::int32_t v_num_1705 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }()); auto cs_arg0 = v_b; auto cs_arg1 = v_off; auto cs_arg2 = v_len; return pls::generated::cs_require(cs_receiver)->Read(cs_arg0,cs_arg1,cs_arg2); }());});
if (([&]() -> bool { auto cs_left = v_num_1705; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
return v_num_1705;
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
std::int32_t v_i_1811 = std::int32_t{};
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_i_1811 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_i_1811; auto cs_right = v_len; return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1811; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1811 = cs_new; return cs_old; }())) {
std::int32_t v_num2_1856 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_d49800fd6633bd98(); }());
if (([&]() -> bool { auto cs_left = v_num2_1856; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
([&]() { auto cs_target = v_b; auto cs_index = ([&]() -> std::int32_t { auto cs_left = v_off; auto cs_right = v_i_1811; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::cast_integral<std::uint8_t>(v_num2_1856);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
return v_i_1811;
}
}
}
}

// M:java.io.InputStream.Read(System.Byte[])
std::int32_t cs_e3637c1f0ab57ef5(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this,pls::cs::Array<std::uint8_t> v_buf) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Read(System.Byte[])",kairo);
{
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(cs_this); pls::cs::Array<std::uint8_t> cs_arg0 = v_buf; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = (v_buf).length(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_4614e302bc22aa99(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:java.io.InputStream.Reset
void cs_a1f672a1edc7446d(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Reset",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))); return cs_fde8a8ea457737fa(static_cast<pls::cs::Ref<cs_a09270023ec48eca>>(cs_receiver)); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a1f672a1edc7446d(); }());
return;
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
throw pls::cs::IOException();
}
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }()); auto cs_rhs = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8aa92818c04571d3; }()); auto cs_value = cs_rhs; pls::generated::cs_require(cs_receiver)->set_Position(cs_value); return cs_value; }());
}
}
}
}

// M:java.io.InputStream.set_Position(System.Int64)
void cs_a87ef7d127bf115f(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this,std::int64_t v_value) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.set_Position(System.Int64)",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }()); auto cs_rhs = v_value; auto cs_value = cs_rhs; pls::generated::cs_require(cs_receiver)->set_Position(cs_value); return cs_value; }());
return;
}
throw pls::cs::NotSupportedException();
}
}
}
}

// M:java.io.InputStream.Skip(System.Int64)
std::int64_t cs_c6a293635ddab59b(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this,std::int64_t v_cnt) { cs_init_e7a5499b363ef51b();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Skip(System.Int64)",kairo);
{
if (pls::generated::cs_is<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))) {
return ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() -> pls::cs::Ref<cs_e7a5499b363ef51b> { auto cs_receiver = (pls::cs::unbox<pls::cs::Ref<cs_a09270023ec48eca>>(pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e65a8825426ed7a3; }())))); return cs_fde8a8ea457737fa(static_cast<pls::cs::Ref<cs_a09270023ec48eca>>(cs_receiver)); }())); std::int64_t cs_arg0 = v_cnt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_c6a293635ddab59b(cs_arg0); }());
}
std::int64_t v_num_2381 = std::int64_t{};
for (([&]() { auto cs_value = v_cnt; v_num_2381 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_num_2381; auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left > cs_right); }()); ([&]() { auto cs_old = v_num_2381; auto cs_new = pls::cs::sub_i64(cs_old,1); v_num_2381 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_d49800fd6633bd98(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
return ([&]() -> std::int64_t { auto cs_left = v_cnt; auto cs_right = v_num_2381; return pls::cs::sub_i64(cs_left,cs_right); }());
}
}
return ([&]() -> std::int64_t { auto cs_left = v_cnt; auto cs_right = v_num_2381; return pls::cs::sub_i64(cs_left,cs_right); }());
}
}
}
}
}
