// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_52158c8b20364c2b : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_52158c8b20364c2b)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.JarInflater";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<cs_bfe2a01361163e7a>> cs_6f69af47bcfae216{};
pls::cs::Array<std::uint8_t> cs_8f27992211ad5e96{};
pls::cs::String cs_578ed5fb729c9567{};
};

void cs_init_52158c8b20364c2b();

void cs_e488b26211313625(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream);

pls::cs::Ref<cs_bfe2a01361163e7a> cs_642a65c689c877cf(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_name);

pls::cs::Ref<cs_52158c8b20364c2b> cs_9eb68b9f4334471a(pls::cs::Array<std::uint8_t> v_data);

void cs_9eb68b9f4334471a_init(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::Array<std::uint8_t> v_data);

void cs_22ec1e3c74812f59(pls::cs::Ref<cs_52158c8b20364c2b> cs_this);

pls::cs::String cs_cfa0bd9ae3912c7e(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_file);

pls::cs::Array<std::uint8_t> cs_344d0f488664be89(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_name);

pls::cs::Ref<cs_e7a5499b363ef51b> cs_f410f19385e7fe89(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_name);

pls::cs::Ref<cs_e7a5499b363ef51b> cs_c147457aef6fbe27(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_file);

std::int64_t cs_95ade8baca7a8831(pls::cs::Ref<cs_52158c8b20364c2b> cs_this,pls::cs::String v_name);
}
