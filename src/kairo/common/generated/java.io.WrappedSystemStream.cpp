// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.WrappedSystemStream.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::generated {
namespace java::io {

void WrappedSystemStream::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Stream::trace_edges(visitor);pls::cs::trace_value(ist,visitor);pls::cs::trace_value(ost,visitor);}

void WrappedSystemStream::set_Position(std::int64_t value) {WrappedSystemStream::set_Position(pls::cs::static_pointer_cast<WrappedSystemStream>(shared_from_this()),value);}

std::int64_t WrappedSystemStream::get_Position() {return WrappedSystemStream::get_Position(pls::cs::static_pointer_cast<WrappedSystemStream>(shared_from_this()));}

std::int64_t WrappedSystemStream::get_Length() {return WrappedSystemStream::get_Length(pls::cs::static_pointer_cast<WrappedSystemStream>(shared_from_this()));}

bool WrappedSystemStream::get_CanWrite() {return WrappedSystemStream::get_CanWrite(pls::cs::static_pointer_cast<WrappedSystemStream>(shared_from_this()));}

bool WrappedSystemStream::get_CanSeek() {return WrappedSystemStream::get_CanSeek(pls::cs::static_pointer_cast<WrappedSystemStream>(shared_from_this()));}

bool WrappedSystemStream::get_CanRead() {return WrappedSystemStream::get_CanRead(pls::cs::static_pointer_cast<WrappedSystemStream>(shared_from_this()));}

static PLS_NOINLINE void cs_init_a09270023ec48eca_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.io.WrappedSystemStream",flag,[](){

});}

void WrappedSystemStream::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_a09270023ec48eca_slow(flag);}

void WrappedSystemStream::create_init(pls::cs::Ref<WrappedSystemStream> self,pls::cs::Ref<InputStream> ist) {
WrappedSystemStream::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.#ctor(java.io.InputStream)",kairo);
{
self->ist = ist;
}

}

void WrappedSystemStream::Close(pls::cs::Ref<WrappedSystemStream> self) { require(self)->WrappedSystemStream::Close(); }

void WrappedSystemStream::Flush(pls::cs::Ref<WrappedSystemStream> self) { require(self)->WrappedSystemStream::Flush(); }

pls::cs::Int32 WrappedSystemStream::Read(pls::cs::Ref<WrappedSystemStream> self,ByteArray buffer,pls::cs::Int32 offset,pls::cs::Int32 count) { return require(self)->WrappedSystemStream::Read(buffer,offset,count); }

pls::cs::Int32 WrappedSystemStream::ReadByte(pls::cs::Ref<WrappedSystemStream> self) { return require(self)->WrappedSystemStream::ReadByte(); }

pls::cs::Int64 WrappedSystemStream::Seek(pls::cs::Ref<WrappedSystemStream> self,pls::cs::Int64 offset,pls::cs::SeekOrigin origin) { return require(self)->WrappedSystemStream::Seek(offset,origin); }

void WrappedSystemStream::SetLength(pls::cs::Ref<WrappedSystemStream> self,pls::cs::Int64 value) { require(self)->WrappedSystemStream::SetLength(value); }

void WrappedSystemStream::Write(pls::cs::Ref<WrappedSystemStream> self,ByteArray buffer,pls::cs::Int32 offset,pls::cs::Int32 count) { require(self)->WrappedSystemStream::Write(buffer,offset,count); }

void WrappedSystemStream::WriteByte(pls::cs::Ref<WrappedSystemStream> self,std::uint8_t value) { require(self)->WrappedSystemStream::WriteByte(value); }

// M:java.io.WrappedSystemStream.#ctor(java.io.InputStream)
pls::cs::Ref<WrappedSystemStream> WrappedSystemStream::create(pls::cs::Ref<InputStream> ist) {
WrappedSystemStream::ensure_initialized();
 auto self = pls::cs::make_ref<WrappedSystemStream>(); WrappedSystemStream::create_init(self,ist); return self; 
}

// M:java.io.WrappedSystemStream.get_InputStream
pls::cs::Ref<InputStream> WrappedSystemStream::get_InputStream(pls::cs::Ref<WrappedSystemStream> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_InputStream",kairo);
{ return self->ist; }

}

// M:java.io.WrappedSystemStream.get_OutputStream
pls::cs::Ref<OutputStream> WrappedSystemStream::get_OutputStream(pls::cs::Ref<WrappedSystemStream> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_OutputStream",kairo);
{ return self->ost; }

}

// M:java.io.WrappedSystemStream.Close
void WrappedSystemStream::Close() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.Close",kairo);
{
if (!is_null(ist)) {
require(ist)->Close();
}
if (!is_null(ost)) {
require(ost)->Close();
}
}
}

// M:java.io.WrappedSystemStream.Flush
void WrappedSystemStream::Flush() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.Flush",kairo);
{
require(ost)->Flush();
}
}

// M:java.io.WrappedSystemStream.Read(System.Byte[],System.Int32,System.Int32)
std::int32_t WrappedSystemStream::Read(ByteArray buffer,std::int32_t offset_raw,std::int32_t count_raw) {
pls::cs::Int32 offset = offset_raw;
pls::cs::Int32 count = count_raw;
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.Read(System.Byte[],System.Int32,System.Int32)",kairo);
{
pls::cs::Int32 num = require(ist)->Read(buffer, offset, count);
if (num != -1) {
position = position + num;
return num;
}
return 0;
}
}

// M:java.io.WrappedSystemStream.ReadByte
std::int32_t WrappedSystemStream::ReadByte() {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.ReadByte",kairo);
{
pls::cs::Int32 num = require(ist)->Read();
if (num != -1) {
++position;
}
return num;
}
}

// M:java.io.WrappedSystemStream.Seek(System.Int64,System.IO.SeekOrigin)
std::int64_t WrappedSystemStream::Seek(std::int64_t offset_raw,pls::cs::SeekOrigin origin) {
pls::cs::Int64 offset = offset_raw;
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.Seek(System.Int64,System.IO.SeekOrigin)",kairo);
{
if (origin == static_cast<pls::cs::SeekOrigin>(0) /* SeekOrigin.Begin */) {
require(this)->set_Position(offset);
} else if (origin == static_cast<pls::cs::SeekOrigin>(1) /* SeekOrigin.Current */) {
{ auto cs_receiver = this; auto cs_old = require(cs_receiver)->get_Position(); auto cs_rhs = offset; pls::cs::Int64 cs_value = cs_old + cs_rhs; require(cs_receiver)->set_Position(cs_value); }
} else if (origin == static_cast<pls::cs::SeekOrigin>(2) /* SeekOrigin.End */) {
require(this)->set_Position(require(this)->get_Length() + offset);
}
return require(this)->get_Position();
}
}

// M:java.io.WrappedSystemStream.SetLength(System.Int64)
void WrappedSystemStream::SetLength(std::int64_t value_raw) {
pls::cs::Int64 value = value_raw;
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.SetLength(System.Int64)",kairo);
{
throw pls::cs::NotSupportedException();
}
}

// M:java.io.WrappedSystemStream.Write(System.Byte[],System.Int32,System.Int32)
void WrappedSystemStream::Write(ByteArray buffer,std::int32_t offset_raw,std::int32_t count_raw) {
pls::cs::Int32 offset = offset_raw;
pls::cs::Int32 count = count_raw;
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.Write(System.Byte[],System.Int32,System.Int32)",kairo);
{
require(ost)->Write(buffer, offset, count);
position = position + count;
}
}

// M:java.io.WrappedSystemStream.WriteByte(System.Byte)
void WrappedSystemStream::WriteByte(std::uint8_t value) {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.WriteByte(System.Byte)",kairo);
{
require(ost)->Write(pls::cs::cast_integral<pls::cs::Int32>(value));
++position;
}
}

// M:java.io.WrappedSystemStream.get_CanRead
bool WrappedSystemStream::get_CanRead(pls::cs::Ref<WrappedSystemStream> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_CanRead",kairo);
{ return !is_null(self->ist); }

}

// M:java.io.WrappedSystemStream.get_CanSeek
bool WrappedSystemStream::get_CanSeek(pls::cs::Ref<WrappedSystemStream> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_CanSeek",kairo);
{ return true; }

}

// M:java.io.WrappedSystemStream.get_CanWrite
bool WrappedSystemStream::get_CanWrite(pls::cs::Ref<WrappedSystemStream> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_CanWrite",kairo);
{ return !is_null(self->ost); }

}

// M:java.io.WrappedSystemStream.get_Length
pls::cs::Int64 WrappedSystemStream::get_Length(pls::cs::Ref<WrappedSystemStream> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_Length",kairo);
{
throw pls::cs::NotSupportedException();
}

}

// M:java.io.WrappedSystemStream.OnMark(System.Int32)
void WrappedSystemStream::OnMark(pls::cs::Int32 nb) {PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.OnMark(System.Int32)",kairo);
{
markedPosition = position;
require(ist)->Mark(nb);
}
}

// M:java.io.WrappedSystemStream.get_Position
pls::cs::Int64 WrappedSystemStream::get_Position(pls::cs::Ref<WrappedSystemStream> self) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.get_Position",kairo);
{
if (!is_null(self->ist) && require(self->ist)->CanSeek()) {
return InputStream::get_Position(self->ist);
}
return pls::cs::cast_integral<pls::cs::Int64>(self->position);
}

}

// M:java.io.WrappedSystemStream.set_Position(System.Int64)
void WrappedSystemStream::set_Position(pls::cs::Ref<WrappedSystemStream> self,pls::cs::Int64 value) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:java.io.WrappedSystemStream.set_Position(System.Int64)",kairo);
{
if (value == pls::cs::cast_integral<pls::cs::Int64>(self->position)) {
return;
}
if (value == pls::cs::cast_integral<pls::cs::Int64>(self->markedPosition)) {
require(self->ist)->Reset();
return;
}
if (!is_null(self->ist) && require(self->ist)->CanSeek()) {
InputStream::set_Position(self->ist,value);
return;
}
throw pls::cs::NotSupportedException();
}

}
} // namespace java::io
}
