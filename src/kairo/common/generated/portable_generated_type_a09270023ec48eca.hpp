// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_a09270023ec48eca : pls::cs::Stream {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_a09270023ec48eca)||target==typeid(pls::cs::Stream)||pls::cs::Stream::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Close")return "M:java.io.WrappedSystemStream.Close";if(slot=="Flush")return "M:java.io.WrappedSystemStream.Flush";if(slot=="Read")return "M:java.io.WrappedSystemStream.Read(System.Byte[],System.Int32,System.Int32)";if(slot=="ReadByte")return "M:java.io.WrappedSystemStream.ReadByte";if(slot=="Seek")return "M:java.io.WrappedSystemStream.Seek(System.Int64,System.IO.SeekOrigin)";if(slot=="SetLength")return "M:java.io.WrappedSystemStream.SetLength(System.Int64)";if(slot=="Write")return "M:java.io.WrappedSystemStream.Write(System.Byte[],System.Int32,System.Int32)";if(slot=="WriteByte")return "M:java.io.WrappedSystemStream.WriteByte(System.Byte)";if(slot=="get_CanRead")return "M:java.io.WrappedSystemStream.get_CanRead";if(slot=="get_CanSeek")return "M:java.io.WrappedSystemStream.get_CanSeek";if(slot=="get_CanWrite")return "M:java.io.WrappedSystemStream.get_CanWrite";if(slot=="get_Length")return "M:java.io.WrappedSystemStream.get_Length";if(slot=="get_Position")return "M:java.io.WrappedSystemStream.get_Position";if(slot=="set_Position")return "M:java.io.WrappedSystemStream.set_Position(System.Int64)";return pls::cs::Stream::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.io.WrappedSystemStream";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_e7a5499b363ef51b> cs_39cd957faf78264b{};
pls::cs::Ref<cs_ea324a0bbfe717fe> cs_929af7514695a90d{};
std::int32_t cs_5e4e8e9b761e8c94{};
std::int32_t cs_668a4a3de037eca3{};
virtual void Close();
virtual void Flush();
virtual std::int32_t Read(pls::cs::Array<std::uint8_t> v_buffer,std::int32_t v_offset,std::int32_t v_count);
virtual std::int32_t ReadByte();
virtual std::int64_t Seek(std::int64_t v_offset,pls::cs::SeekOrigin v_origin);
virtual void SetLength(std::int64_t v_value);
virtual void Write(pls::cs::Array<std::uint8_t> v_buffer,std::int32_t v_offset,std::int32_t v_count);
virtual void WriteByte(std::uint8_t v_value);
virtual bool get_CanRead();
virtual bool get_CanSeek();
virtual bool get_CanWrite();
virtual std::int64_t get_Length();
virtual std::int64_t get_Position();
virtual void set_Position(std::int64_t v_value);
};

void cs_init_a09270023ec48eca();

pls::cs::Ref<cs_a09270023ec48eca> cs_f4af9cf35590567d(pls::cs::Ref<cs_e7a5499b363ef51b> v_ist);

void cs_f4af9cf35590567d_init(pls::cs::Ref<cs_a09270023ec48eca> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_ist);

void cs_3f2440e57ef29f1e(pls::cs::Ref<cs_a09270023ec48eca> cs_this);

void cs_6c7bbca4c29839c1(pls::cs::Ref<cs_a09270023ec48eca> cs_this);

bool cs_0ad1ba7c0fd9d02e(pls::cs::Ref<cs_a09270023ec48eca> cs_this);

bool cs_4aca7975001a4e6b(pls::cs::Ref<cs_a09270023ec48eca> cs_this);

bool cs_6f3b40a37d8f526a(pls::cs::Ref<cs_a09270023ec48eca> cs_this);

pls::cs::Ref<cs_e7a5499b363ef51b> cs_fde8a8ea457737fa(pls::cs::Ref<cs_a09270023ec48eca> cs_this);

std::int64_t cs_c8a570aac49067da(pls::cs::Ref<cs_a09270023ec48eca> cs_this);

pls::cs::Ref<cs_ea324a0bbfe717fe> cs_362ad6b68823aeb0(pls::cs::Ref<cs_a09270023ec48eca> cs_this);

std::int64_t cs_8acc9ec5371d8299(pls::cs::Ref<cs_a09270023ec48eca> cs_this);

void cs_6050dd00fcef65a8(pls::cs::Ref<cs_a09270023ec48eca> cs_this,std::int32_t v_nb);

std::int32_t cs_7a3b85e65662d47c(pls::cs::Ref<cs_a09270023ec48eca> cs_this,pls::cs::Array<std::uint8_t> v_buffer,std::int32_t v_offset,std::int32_t v_count);

std::int32_t cs_ad4fa1e286b44f3a(pls::cs::Ref<cs_a09270023ec48eca> cs_this);

std::int64_t cs_e1435e7e4b074f26(pls::cs::Ref<cs_a09270023ec48eca> cs_this,std::int64_t v_offset,pls::cs::SeekOrigin v_origin);

void cs_0cc5bcdc262d1e1f(pls::cs::Ref<cs_a09270023ec48eca> cs_this,std::int64_t v_value);

void cs_a78c59b4469863e5(pls::cs::Ref<cs_a09270023ec48eca> cs_this,std::int64_t v_value);

void cs_399352675683031c(pls::cs::Ref<cs_a09270023ec48eca> cs_this,pls::cs::Array<std::uint8_t> v_buffer,std::int32_t v_offset,std::int32_t v_count);

void cs_b58a5f8e785cf771(pls::cs::Ref<cs_a09270023ec48eca> cs_this,std::uint8_t v_value);
}
