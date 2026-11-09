// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_a09270023ec48eca.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::generated {

void cs_a09270023ec48eca::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Stream::trace_edges(visitor);pls::cs::trace_value(cs_39cd957faf78264b,visitor);pls::cs::trace_value(cs_929af7514695a90d,visitor);pls::cs::trace_value(cs_5e4e8e9b761e8c94,visitor);pls::cs::trace_value(cs_668a4a3de037eca3,visitor);}

void cs_a09270023ec48eca::release_edges(){pls::cs::Stream::release_edges();pls::cs::release_value(cs_39cd957faf78264b);pls::cs::release_value(cs_929af7514695a90d);pls::cs::release_value(cs_5e4e8e9b761e8c94);pls::cs::release_value(cs_668a4a3de037eca3);}

void cs_a09270023ec48eca::set_Position(std::int64_t v_value) {cs_0cc5bcdc262d1e1f(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()),v_value);}

std::int64_t cs_a09270023ec48eca::get_Position() {return cs_8acc9ec5371d8299(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()));}

std::int64_t cs_a09270023ec48eca::get_Length() {return cs_c8a570aac49067da(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()));}

bool cs_a09270023ec48eca::get_CanWrite() {return cs_6f3b40a37d8f526a(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()));}

bool cs_a09270023ec48eca::get_CanSeek() {return cs_4aca7975001a4e6b(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()));}

bool cs_a09270023ec48eca::get_CanRead() {return cs_0ad1ba7c0fd9d02e(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()));}

void cs_a09270023ec48eca::WriteByte(std::uint8_t v_value) {cs_b58a5f8e785cf771(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()),v_value);}

void cs_a09270023ec48eca::Write(pls::cs::Array<std::uint8_t> v_buffer,std::int32_t v_offset,std::int32_t v_count) {cs_399352675683031c(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()),v_buffer,v_offset,v_count);}

void cs_a09270023ec48eca::SetLength(std::int64_t v_value) {cs_a78c59b4469863e5(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()),v_value);}

std::int64_t cs_a09270023ec48eca::Seek(std::int64_t v_offset,pls::cs::SeekOrigin v_origin) {return cs_e1435e7e4b074f26(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()),v_offset,v_origin);}

std::int32_t cs_a09270023ec48eca::ReadByte() {return cs_ad4fa1e286b44f3a(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()));}

std::int32_t cs_a09270023ec48eca::Read(pls::cs::Array<std::uint8_t> v_buffer,std::int32_t v_offset,std::int32_t v_count) {return cs_7a3b85e65662d47c(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()),v_buffer,v_offset,v_count);}

void cs_a09270023ec48eca::Flush() {cs_6c7bbca4c29839c1(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()));}

void cs_a09270023ec48eca::Close() {cs_3f2440e57ef29f1e(std::static_pointer_cast<cs_a09270023ec48eca>(shared_from_this()));}

void cs_init_a09270023ec48eca(){static pls::cs::TypeInitState state;state.run("java.io.WrappedSystemStream",[](){

});}

// M:java.io.WrappedSystemStream.#ctor(java.io.InputStream)
pls::cs::Ref<cs_a09270023ec48eca> cs_f4af9cf35590567d(pls::cs::Ref<cs_e7a5499b363ef51b> v_ist) { cs_init_a09270023ec48eca();
{ auto cs_this = pls::cs::make_ref<cs_a09270023ec48eca>(); cs_f4af9cf35590567d_init(cs_this,v_ist); return cs_this; }
}

void cs_f4af9cf35590567d_init(pls::cs::Ref<cs_a09270023ec48eca> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_ist) {
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.#ctor(java.io.InputStream)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_ist; pls::generated::cs_require(cs_target)->cs_39cd957faf78264b = cs_value; return cs_value; }());
}
}
}

// M:java.io.WrappedSystemStream.Close
void cs_3f2440e57ef29f1e(pls::cs::Ref<cs_a09270023ec48eca> cs_this) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.Close",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_4546aef6e4846446(); }());
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_929af7514695a90d; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_929af7514695a90d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_0d912191800a0b86(); }());
}
}
}
}
}

// M:java.io.WrappedSystemStream.Flush
void cs_6c7bbca4c29839c1(pls::cs::Ref<cs_a09270023ec48eca> cs_this) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.Flush",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_929af7514695a90d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_2adf924bd0d7d65a(); }());
}
}
}
}

// M:java.io.WrappedSystemStream.get_CanRead
bool cs_0ad1ba7c0fd9d02e(pls::cs::Ref<cs_a09270023ec48eca> cs_this) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_CanRead",kairo);
{ return ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()); }
}
}
}

// M:java.io.WrappedSystemStream.get_CanSeek
bool cs_4aca7975001a4e6b(pls::cs::Ref<cs_a09270023ec48eca> cs_this) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_CanSeek",kairo);
{ return true; }
}
}
}

// M:java.io.WrappedSystemStream.get_CanWrite
bool cs_6f3b40a37d8f526a(pls::cs::Ref<cs_a09270023ec48eca> cs_this) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_CanWrite",kairo);
{ return ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_929af7514695a90d; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()); }
}
}
}

// M:java.io.WrappedSystemStream.get_InputStream
pls::cs::Ref<cs_e7a5499b363ef51b> cs_fde8a8ea457737fa(pls::cs::Ref<cs_a09270023ec48eca> cs_this) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_InputStream",kairo);
{ return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }()); }
}
}
}

// M:java.io.WrappedSystemStream.get_Length
std::int64_t cs_c8a570aac49067da(pls::cs::Ref<cs_a09270023ec48eca> cs_this) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_Length",kairo);
{
throw pls::cs::NotSupportedException();
}
}
}
}

// M:java.io.WrappedSystemStream.get_OutputStream
pls::cs::Ref<cs_ea324a0bbfe717fe> cs_362ad6b68823aeb0(pls::cs::Ref<cs_a09270023ec48eca> cs_this) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_OutputStream",kairo);
{ return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_929af7514695a90d; }()); }
}
}
}

// M:java.io.WrappedSystemStream.get_Position
std::int64_t cs_8acc9ec5371d8299(pls::cs::Ref<cs_a09270023ec48eca> cs_this) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_Position",kairo);
{
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_134fe7a07d721941(cs_receiver); }()))) {
return ([&]() -> std::int64_t { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }()); return cs_9dac93bf518080bf(static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(cs_receiver)); }());
}
return pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e4e8e9b761e8c94; }()));
}
}
}
}

// M:java.io.WrappedSystemStream.OnMark(System.Int32)
void cs_6050dd00fcef65a8(pls::cs::Ref<cs_a09270023ec48eca> cs_this,std::int32_t v_nb) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.OnMark(System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e4e8e9b761e8c94; }()); pls::generated::cs_require(cs_target)->cs_668a4a3de037eca3 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); std::int32_t cs_arg0 = v_nb; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_baf1496cdc1c93d8(cs_arg0); }());
}
}
}
}

// M:java.io.WrappedSystemStream.Read(System.Byte[],System.Int32,System.Int32)
std::int32_t cs_7a3b85e65662d47c(pls::cs::Ref<cs_a09270023ec48eca> cs_this,pls::cs::Array<std::uint8_t> v_buffer,std::int32_t v_offset,std::int32_t v_count) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.Read(System.Byte[],System.Int32,System.Int32)",kairo);
{
std::int32_t v_num_714 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); pls::cs::Array<std::uint8_t> cs_arg0 = v_buffer; std::int32_t cs_arg1 = v_offset; std::int32_t cs_arg2 = v_count; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_4614e302bc22aa99(cs_arg0,cs_arg1,cs_arg2); }());
if (([&]() -> bool { auto cs_left = v_num_714; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_5e4e8e9b761e8c94; auto cs_rhs = v_num_714; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::generated::cs_require(cs_target)->cs_5e4e8e9b761e8c94 = cs_value; return cs_value; }());
return v_num_714;
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
}
}

// M:java.io.WrappedSystemStream.ReadByte
std::int32_t cs_ad4fa1e286b44f3a(pls::cs::Ref<cs_a09270023ec48eca> cs_this) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.ReadByte",kairo);
{
std::int32_t v_num_880 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_virtual_d49800fd6633bd98(); }());
if (([&]() -> bool { auto cs_left = v_num_880; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_5e4e8e9b761e8c94; auto cs_new = pls::cs::add_i32(cs_old,1); pls::generated::cs_require(cs_target)->cs_5e4e8e9b761e8c94 = cs_new; return cs_old; }());
}
return v_num_880;
}
}
}
}

// M:java.io.WrappedSystemStream.Seek(System.Int64,System.IO.SeekOrigin)
std::int64_t cs_e1435e7e4b074f26(pls::cs::Ref<cs_a09270023ec48eca> cs_this,std::int64_t v_offset,pls::cs::SeekOrigin v_origin) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.Seek(System.Int64,System.IO.SeekOrigin)",kairo);
{
if (([&]() -> bool { auto cs_left = v_origin; auto cs_right = static_cast<pls::cs::SeekOrigin>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); return (cs_left == cs_right); }())) {
([&]() { auto cs_receiver = cs_this; auto cs_rhs = v_offset; auto cs_value = cs_rhs; pls::generated::cs_require(cs_receiver)->set_Position(cs_value); return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_origin; auto cs_right = static_cast<pls::cs::SeekOrigin>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull))); return (cs_left == cs_right); }())) {
([&]() { auto cs_receiver = cs_this; auto cs_old = pls::generated::cs_require(cs_receiver)->get_Position(); auto cs_rhs = v_offset; auto cs_value = pls::cs::add_i64(cs_old,cs_rhs); pls::generated::cs_require(cs_receiver)->set_Position(cs_value); return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_origin; auto cs_right = static_cast<pls::cs::SeekOrigin>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))); return (cs_left == cs_right); }())) {
([&]() { auto cs_receiver = cs_this; auto cs_rhs = ([&]() -> std::int64_t { auto cs_left = ([&]() -> std::int64_t { auto cs_receiver = cs_this; return pls::generated::cs_require(cs_receiver)->get_Length(); }()); auto cs_right = v_offset; return pls::cs::add_i64(cs_left,cs_right); }()); auto cs_value = cs_rhs; pls::generated::cs_require(cs_receiver)->set_Position(cs_value); return cs_value; }());
}
return ([&]() -> std::int64_t { auto cs_receiver = cs_this; return pls::generated::cs_require(cs_receiver)->get_Position(); }());
}
}
}
}

// M:java.io.WrappedSystemStream.set_Position(System.Int64)
void cs_0cc5bcdc262d1e1f(pls::cs::Ref<cs_a09270023ec48eca> cs_this,std::int64_t v_value) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.set_Position(System.Int64)",kairo);
{
if (([&]() -> bool { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e4e8e9b761e8c94; }())); return (cs_left == cs_right); }())) {
return;
}
if (([&]() -> bool { auto cs_left = v_value; auto cs_right = pls::cs::cast_integral<std::int64_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_668a4a3de037eca3; }())); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a1f672a1edc7446d(); }());
return;
}
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_134fe7a07d721941(cs_receiver); }()))) {
([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_39cd957faf78264b; }()); auto cs_rhs = v_value; auto cs_value = cs_rhs; cs_a87ef7d127bf115f(static_cast<pls::cs::Ref<cs_e7a5499b363ef51b>>(cs_receiver),cs_value); return cs_value; }());
return;
}
throw pls::cs::NotSupportedException();
}
}
}
}

// M:java.io.WrappedSystemStream.SetLength(System.Int64)
void cs_a78c59b4469863e5(pls::cs::Ref<cs_a09270023ec48eca> cs_this,std::int64_t v_value) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.SetLength(System.Int64)",kairo);
{
throw pls::cs::NotSupportedException();
}
}
}
}

// M:java.io.WrappedSystemStream.Write(System.Byte[],System.Int32,System.Int32)
void cs_399352675683031c(pls::cs::Ref<cs_a09270023ec48eca> cs_this,pls::cs::Array<std::uint8_t> v_buffer,std::int32_t v_offset,std::int32_t v_count) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.Write(System.Byte[],System.Int32,System.Int32)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_929af7514695a90d; }())); pls::cs::Array<std::uint8_t> cs_arg0 = v_buffer; std::int32_t cs_arg1 = v_offset; std::int32_t cs_arg2 = v_count; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_eeffa75bcd0cd73d(cs_arg0,cs_arg1,cs_arg2); }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_5e4e8e9b761e8c94; auto cs_rhs = v_count; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); pls::generated::cs_require(cs_target)->cs_5e4e8e9b761e8c94 = cs_value; return cs_value; }());
}
}
}
}

// M:java.io.WrappedSystemStream.WriteByte(System.Byte)
void cs_b58a5f8e785cf771(pls::cs::Ref<cs_a09270023ec48eca> cs_this,std::uint8_t v_value) { cs_init_a09270023ec48eca();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.WriteByte(System.Byte)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_ea324a0bbfe717fe>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_929af7514695a90d; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_a2a7e1a6575cae4c(cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_5e4e8e9b761e8c94; auto cs_new = pls::cs::add_i32(cs_old,1); pls::generated::cs_require(cs_target)->cs_5e4e8e9b761e8c94 = cs_new; return cs_old; }());
}
}
}
}
}
