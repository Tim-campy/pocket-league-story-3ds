// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.WrappedSystemStream.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace java::io {

void InputStream::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(Wrapped,visitor);pls::cs::trace_value(BaseStream,visitor);}

static PLS_NOINLINE void cs_init_e7a5499b363ef51b_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.io.InputStream",flag,[](){

});}

void InputStream::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_e7a5499b363ef51b_slow(flag);}

void InputStream::create_init(pls::cs::Ref<InputStream> self) {
InputStream::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.#ctor",kairo);
{}

}

pls::cs::Int32 InputStream::Available(pls::cs::Ref<InputStream> self) { return require(self)->InputStream::Available(); }

void InputStream::Close(pls::cs::Ref<InputStream> self) { require(self)->InputStream::Close(); }

void InputStream::Mark(pls::cs::Ref<InputStream> self,pls::cs::Int32 readlimit) { require(self)->InputStream::Mark(readlimit); }

bool InputStream::MarkSupported(pls::cs::Ref<InputStream> self) { return require(self)->InputStream::MarkSupported(); }

pls::cs::Int32 InputStream::Read_2(pls::cs::Ref<InputStream> self) { return require(self)->InputStream::Read(); }

pls::cs::Int32 InputStream::Read(pls::cs::Ref<InputStream> self,ByteArray b,pls::cs::Int32 off,pls::cs::Int32 len) { return require(self)->InputStream::Read(b,off,len); }

pls::cs::Int32 InputStream::Read(pls::cs::Ref<InputStream> self,ByteArray buf) { return require(self)->InputStream::Read(buf); }

void InputStream::Reset(pls::cs::Ref<InputStream> self) { require(self)->InputStream::Reset(); }

pls::cs::Int64 InputStream::Skip(pls::cs::Ref<InputStream> self,pls::cs::Int64 cnt) { return require(self)->InputStream::Skip(cnt); }

// M:java.io.InputStream.#ctor
pls::cs::Ref<InputStream> InputStream::create() {
InputStream::ensure_initialized();
 auto self = pls::cs::make_ref<InputStream>(); InputStream::create_init(self); return self; 
}

// M:java.io.InputStream.op_Implicit(java.io.InputStream)~System.IO.Stream
pls::cs::Ref<pls::cs::Stream> InputStream::op_Implicit(pls::cs::Ref<InputStream> s) {
InputStream::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.op_Implicit(java.io.InputStream)~System.IO.Stream",kairo);
{
return require(s)->GetWrappedStream();
}

}

// M:java.io.InputStream.Available
pls::cs::Int32 InputStream::Available() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Available",kairo);
{
if (is_instance<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped))) {
return require(WrappedSystemStream::get_InputStream((pls::cs::unbox<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped)))))->Available();
}
return 0;
}
}

// M:java.io.InputStream.Close
void InputStream::Close() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Close",kairo);
{
if (!is_null(Wrapped)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(Wrapped)->Close();});
}
}
}

// M:java.io.InputStream.Mark(System.Int32)
void InputStream::Mark(pls::cs::Int32 readlimit) {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Mark(System.Int32)",kairo);
{
if (is_instance<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped))) {
require(WrappedSystemStream::get_InputStream((pls::cs::unbox<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped)))))->Mark(readlimit);
return;
}
if (is_instance<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(BaseStream))) {
require((pls::cs::unbox<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(BaseStream))))->OnMark(readlimit);
}
if (!is_null(Wrapped)) {
mark = require(Wrapped)->get_Position();
}
}
}

// M:java.io.InputStream.MarkSupported
bool InputStream::MarkSupported() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.MarkSupported",kairo);
{
if (is_instance<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped))) {
return require(WrappedSystemStream::get_InputStream((pls::cs::unbox<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped)))))->MarkSupported();
}
if (!is_null(Wrapped)) {
return require(Wrapped)->get_CanSeek();
}
return false;
}
}

// M:java.io.InputStream.Read
pls::cs::Int32 InputStream::Read() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Read",kairo);
{
if (is_null(Wrapped)) {
throw pls::cs::NotImplementedException();
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(Wrapped)->ReadByte();});
}
}

// M:java.io.InputStream.Read(System.Byte[])
pls::cs::Int32 InputStream::Read(ByteArray buf) {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Read(System.Byte[])",kairo);
{
return this->Read(buf, 0, buf.length());
}
}

// M:java.io.InputStream.Read(System.Byte[],System.Int32,System.Int32)
pls::cs::Int32 InputStream::Read(ByteArray b,pls::cs::Int32 off,pls::cs::Int32 len) {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Read(System.Byte[],System.Int32,System.Int32)",kairo);
{
if (is_instance<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped))) {
return require(WrappedSystemStream::get_InputStream((pls::cs::unbox<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped)))))->Read(b, off, len);
}
if (!is_null(Wrapped)) {
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(Wrapped)->Read(b, off, len);});
if (num > 0) {
return num;
}
return -1;
}
pls::cs::Int32 i;
for (([&]() { pls::cs::Int32 cs_value = 0; i = cs_value; return cs_value; }()); i < len; ++i) {
pls::cs::Int32 num2 = this->Read();
if (num2 == -1) {
return -1;
}
b[off + i] = pls::cs::cast_integral<std::uint8_t>(num2);
}
return i;
}
}

// M:java.io.InputStream.Reset
void InputStream::Reset() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Reset",kairo);
{
if (is_instance<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped))) {
require(WrappedSystemStream::get_InputStream((pls::cs::unbox<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped)))))->Reset();
return;
}
if (is_null(Wrapped)) {
throw pls::cs::IOException();
}
require(Wrapped)->set_Position(mark);
}
}

// M:java.io.InputStream.Skip(System.Int64)
pls::cs::Int64 InputStream::Skip(pls::cs::Int64 cnt) {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.Skip(System.Int64)",kairo);
{
if (is_instance<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped))) {
return require(WrappedSystemStream::get_InputStream((pls::cs::unbox<pls::cs::Ref<WrappedSystemStream>>(pls::cs::box(Wrapped)))))->Skip(cnt);
}
pls::cs::Int64 num;
for (([&]() { pls::cs::Int64 cs_value = cnt; num = cs_value; return cs_value; }()); num > pls::cs::cast_integral<pls::cs::Int64>(0); --num) {
if (this->Read() == -1) {
return cnt - num;
}
}
return cnt - num;
}
}

// M:java.io.InputStream.GetWrappedStream
pls::cs::Ref<pls::cs::Stream> InputStream::GetWrappedStream() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.GetWrappedStream",kairo);
{
return WrappedSystemStream::create(this);
}
}

// M:java.io.InputStream.CanSeek
bool InputStream::CanSeek() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.CanSeek",kairo);
{
if (!is_null(Wrapped)) {
return require(Wrapped)->get_CanSeek();
}
return false;
}
}

// M:java.io.InputStream.get_Position
pls::cs::Int64 InputStream::get_Position(pls::cs::Ref<InputStream> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.get_Position",kairo);
{
if (!is_null(self->Wrapped)) {
return require(self->Wrapped)->get_Position();
}
throw pls::cs::NotSupportedException();
}

}

// M:java.io.InputStream.set_Position(System.Int64)
void InputStream::set_Position(pls::cs::Ref<InputStream> self,pls::cs::Int64 value) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.InputStream.set_Position(System.Int64)",kairo);
{
if (!is_null(self->Wrapped)) {
require(self->Wrapped)->set_Position(value);
return;
}
throw pls::cs::NotSupportedException();
}

}
} // namespace java::io
}
