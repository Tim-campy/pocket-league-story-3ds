// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util::StreamUtil {

void ensure_initialized();

pls::cs::Array<std::uint8_t> ReadBool(pls::cs::Ref<java::io::InputStream> stream,bool size);

pls::cs::Array<std::uint8_t> Read(pls::cs::Ref<java::io::InputStream> stream,pls::cs::Int32 size);

pls::cs::Array<std::uint8_t> Read(pls::cs::Ref<java::io::InputStream> stream);

bool ReadBoolean(pls::cs::Ref<java::io::InputStream> stream);

std::int8_t ReadByte(pls::cs::Ref<java::io::InputStream> stream);

pls::cs::Single ReadFloat(pls::cs::Ref<java::io::InputStream> stream);

pls::cs::Int32 ReadInt(pls::cs::Ref<java::io::InputStream> stream);

pls::cs::Int64 ReadLong(pls::cs::Ref<java::io::InputStream> stream);

std::int16_t ReadShort(pls::cs::Ref<java::io::InputStream> stream);

pls::cs::String ReadString(pls::cs::Ref<java::io::InputStream> stream);

pls::cs::Ref<m3d4::util3d::Vector3D> ReadVector3D(pls::cs::Ref<java::io::InputStream> stream);

void Write(pls::cs::Ref<java::io::OutputStream> os,pls::cs::Array<std::uint8_t> data,bool size);

void Write(pls::cs::Ref<java::io::OutputStream> os,pls::cs::Array<std::uint8_t> data);

void WriteBoolean(pls::cs::Ref<java::io::OutputStream> os,bool data);

void WriteByteByte(pls::cs::Ref<java::io::OutputStream> os,std::uint8_t data);

void WriteByte(pls::cs::Ref<java::io::OutputStream> os,std::int8_t data);

void WriteFloat(pls::cs::Ref<java::io::OutputStream> os,pls::cs::Single data);

void WriteInt(pls::cs::Ref<java::io::OutputStream> os,pls::cs::Int32 data);

void WriteLong(pls::cs::Ref<java::io::OutputStream> os,pls::cs::Int64 data);

void WriteShort(pls::cs::Ref<java::io::OutputStream> os,std::int16_t data);

void WriteString(pls::cs::Ref<java::io::OutputStream> os,pls::cs::Ref<SecureString> data);

void WriteStringString(pls::cs::Ref<java::io::OutputStream> os,pls::cs::String data);

void WriteVector3D(pls::cs::Ref<java::io::OutputStream> os,pls::cs::Ref<m3d4::util3d::Vector3D> value);
} // namespace kairo::unity::util::StreamUtil
}
