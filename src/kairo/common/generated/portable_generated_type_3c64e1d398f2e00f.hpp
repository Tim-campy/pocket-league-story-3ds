// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "portable_generated_forward.hpp"
#include "portable_generated_type_c4521f4960c4f908.hpp"
namespace pls::generated {

struct cs_3c64e1d398f2e00f : pls::cs::Object, cs_c4521f4960c4f908 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_3c64e1d398f2e00f)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target)||target==typeid(cs_c4521f4960c4f908);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_8d925e3b30750eb6")return "M:kairo.unity.m3d4.util3d.Vector3D.Serialize(java.io.OutputStream)";if(slot=="cs_virtual_f2ab7f0a88763f04")return "M:kairo.unity.m3d4.util3d.Vector3D.Deserialize(java.io.InputStream)";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.m3d4.util3d.Vector3D";}
std::string managed_type_name()const override{return source_managed_type_name();}
float cs_5940b7db44d7fcc3{};
float cs_3f971496b3e90e07{};
float cs_992193a3ad58af68{};
virtual void cs_virtual_8d925e3b30750eb6(pls::cs::Ref<cs_ea324a0bbfe717fe> v_stream);
virtual void cs_virtual_f2ab7f0a88763f04(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream);
};

void cs_init_3c64e1d398f2e00f();

pls::cs::Ref<cs_3c64e1d398f2e00f> cs_f0250768de698879();

void cs_f0250768de698879_init(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this);

pls::cs::Ref<cs_3c64e1d398f2e00f> cs_4df100a3a5400345(float v_x,float v_y,float v_z);

void cs_4df100a3a5400345_init(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_x,float v_y,float v_z);

void cs_b222f1bce980230f(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,pls::cs::Ref<cs_3c64e1d398f2e00f> v_v);

void cs_c44a23edacd04c43(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_x,float v_y,float v_z);

void cs_d64267dcdc138fe0(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream);

float cs_057460bc67f561ff(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this);

float cs_b09e372c7963bada(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this);

float cs_8c6fe63f0a32cc25(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this);

void cs_086b1f406f360542(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,pls::cs::Ref<cs_ea324a0bbfe717fe> v_stream);

void cs_cdf43d81dba1e3fb(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,pls::cs::Ref<cs_3c64e1d398f2e00f> v_v);

void cs_eab8c2f1c1ba14e9(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_x,float v_y,float v_z);

void cs_456e4aca00a0b62a(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_x);

void cs_229657731d66863f(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_y);

void cs_ed44f0a0e2f6832a(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_z);
}
