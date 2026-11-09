// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_e7a5499b363ef51b : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_e7a5499b363ef51b)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_bb7347310506b971")return "M:java.io.InputStream.Available";if(slot=="cs_virtual_4546aef6e4846446")return "M:java.io.InputStream.Close";if(slot=="cs_virtual_baf1496cdc1c93d8")return "M:java.io.InputStream.Mark(System.Int32)";if(slot=="cs_virtual_7dfe14f35a6a22dd")return "M:java.io.InputStream.MarkSupported";if(slot=="cs_virtual_d49800fd6633bd98")return "M:java.io.InputStream.Read";if(slot=="cs_virtual_e3637c1f0ab57ef5")return "M:java.io.InputStream.Read(System.Byte[])";if(slot=="cs_virtual_4614e302bc22aa99")return "M:java.io.InputStream.Read(System.Byte[],System.Int32,System.Int32)";if(slot=="cs_virtual_a1f672a1edc7446d")return "M:java.io.InputStream.Reset";if(slot=="cs_virtual_c6a293635ddab59b")return "M:java.io.InputStream.Skip(System.Int64)";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "java.io.InputStream";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int64_t cs_8aa92818c04571d3{};
pls::cs::Ref<pls::cs::Stream> cs_e65a8825426ed7a3{};
pls::cs::Ref<pls::cs::Stream> cs_0f6af5e5e6987974{};
virtual std::int32_t cs_virtual_bb7347310506b971();
virtual void cs_virtual_4546aef6e4846446();
virtual void cs_virtual_baf1496cdc1c93d8(std::int32_t v_readlimit);
virtual bool cs_virtual_7dfe14f35a6a22dd();
virtual std::int32_t cs_virtual_d49800fd6633bd98();
virtual std::int32_t cs_virtual_e3637c1f0ab57ef5(pls::cs::Array<std::uint8_t> v_buf);
virtual std::int32_t cs_virtual_4614e302bc22aa99(pls::cs::Array<std::uint8_t> v_b,std::int32_t v_off,std::int32_t v_len);
virtual void cs_virtual_a1f672a1edc7446d();
virtual std::int64_t cs_virtual_c6a293635ddab59b(std::int64_t v_cnt);
};

void cs_init_e7a5499b363ef51b();

pls::cs::Ref<cs_e7a5499b363ef51b> cs_7c187221d1d7c346();

void cs_7c187221d1d7c346_init(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this);

std::int32_t cs_bb7347310506b971(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this);

bool cs_134fe7a07d721941(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this);

void cs_4546aef6e4846446(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this);

std::int64_t cs_9dac93bf518080bf(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this);

pls::cs::Ref<pls::cs::Stream> cs_a8c261103d5c33e8(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this);

void cs_baf1496cdc1c93d8(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this,std::int32_t v_readlimit);

bool cs_7dfe14f35a6a22dd(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this);

pls::cs::Ref<pls::cs::Stream> cs_010114ded9156773(pls::cs::Ref<cs_e7a5499b363ef51b> v_s);

std::int32_t cs_d49800fd6633bd98(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this);

std::int32_t cs_4614e302bc22aa99(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this,pls::cs::Array<std::uint8_t> v_b,std::int32_t v_off,std::int32_t v_len);

std::int32_t cs_e3637c1f0ab57ef5(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this,pls::cs::Array<std::uint8_t> v_buf);

void cs_a1f672a1edc7446d(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this);

void cs_a87ef7d127bf115f(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this,std::int64_t v_value);

std::int64_t cs_c6a293635ddab59b(pls::cs::Ref<cs_e7a5499b363ef51b> cs_this,std::int64_t v_cnt);
}
