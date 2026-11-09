// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {

struct cs_c20c229ea63037d8 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_c20c229ea63037d8)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.util.SecureProperty";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>> cs_3a492b4165f9d5db{};
pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>> cs_6747c51e21a34296{};
pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>> cs_1393912ba87bd2f6{};
pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>> cs_4e32a5d73d9793f0{};
pls::cs::Array<pls::cs::Array<std::uint8_t>> cs_26072971e2305223{};
};

void cs_init_c20c229ea63037d8();

pls::cs::Ref<cs_c20c229ea63037d8> cs_5d0efd71eb31c332(pls::cs::Ref<cs_c20c229ea63037d8> v_property);

void cs_5d0efd71eb31c332_init(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Ref<cs_c20c229ea63037d8> v_property);

pls::cs::Ref<cs_c20c229ea63037d8> cs_1ec84b4dfcd94394(pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>> v_pros,pls::cs::Array<std::int32_t> v_ints,pls::cs::Array<std::int64_t> v_lngs,pls::cs::Array<pls::cs::String> v_strs,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_bins);

void cs_1ec84b4dfcd94394_init(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>> v_pros,pls::cs::Array<std::int32_t> v_ints,pls::cs::Array<std::int64_t> v_lngs,pls::cs::Array<pls::cs::String> v_strs,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_bins);

std::int32_t cs_38e558d47271c1b8(pls::cs::Ref<cs_c20c229ea63037d8> cs_this);

void cs_99629a76ecf66de7(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream);

void cs_f3dde7064a66be23(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<std::uint8_t> v_data);

void cs_4a85f8f915bb71be(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream,std::int32_t v_type,std::int32_t v_size,pls::cs::Array<std::uint8_t> v_ids);

void cs_2b44d4f7409d5877(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Ref<cs_7fd3b635ed6929d0>> v_data);

void cs_c010944179b54e7f(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Ref<cs_924db3d974bae2af>> v_data);

void cs_200d272a8eaa4ac4(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Ref<cs_c20c229ea63037d8>> v_data);

void cs_efb9e536801e85d4(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Ref<cs_bb652fbb61000386>> v_data);

void cs_bfb5dba687727afb(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::Array<std::uint8_t>> v_data);

void cs_e2efbe60a722c41f(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<std::int32_t> v_data);

void cs_4c0e8a7c7f726363(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<std::int64_t> v_data);

void cs_80cc4827894ac539(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Array<pls::cs::String> v_data);

std::int32_t cs_c3f290ad9c4c778b(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,std::int32_t v_type);

pls::cs::Array<std::uint8_t> cs_1dc2914985e48e1c(pls::cs::Ref<cs_c20c229ea63037d8> cs_this);

void cs_d22c20b5f1d8a8cf(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Ref<cs_ea324a0bbfe717fe> v_os);

void cs_1235f27d1e326536(pls::cs::Ref<cs_c20c229ea63037d8> cs_this,pls::cs::Ref<cs_ea324a0bbfe717fe> v_os,std::int32_t v_type);
}
