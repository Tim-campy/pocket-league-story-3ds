// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_b728593e3dcffe31 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_b728593e3dcffe31)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.ui.ResourceManager";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_0e36fb5b2228e5c2{};
pls::cs::Array<pls::cs::Ref<cs_9cade6927d6e0bf3>> cs_b957309a0939d3d1{};
pls::cs::Array<pls::cs::Ref<pls::kairo::SoundBase>> cs_d034fe7d69888987{};
pls::cs::Array<pls::cs::Array<pls::cs::String>> cs_6a7748b1a6612d58{};
pls::cs::String cs_55a3ac9e1aa7a324{};
std::int32_t cs_b2b7060a2ecd4629{};
std::int32_t cs_f9b013b52e784f8d{};
std::int32_t cs_3fe3f9fb934245ca{};
std::int32_t cs_d4e23024d8a558a1{};
bool cs_670c579b3496636a{};
std::int32_t cs_e9b5a40492d552a9{};
};

void cs_init_b728593e3dcffe31();

pls::cs::List<cs_bf56843843fb840d>& cs_6e1bce9006dd3621();

pls::cs::Array<pls::cs::String>& cs_5e2555ff8a760a8f();

pls::cs::Array<pls::cs::String>& cs_bd0c9538929cdd1c();

pls::cs::Array<pls::cs::String>& cs_b9076d2bc52fda6e();

std::int32_t& cs_97a973ae39209cad();

void cs_91c7f060c04f2ce6(pls::cs::Ref<cs_b728593e3dcffe31> cs_this);

void cs_2ad8afd403d5dfb4(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,bool v_keepFileList);

pls::cs::Ref<cs_b728593e3dcffe31> cs_63b2bd45669dab69(pls::cs::String v_imgList,pls::cs::String v_sebList,pls::cs::String v_sndList,pls::cs::String v_figList,pls::cs::String v_actList,pls::cs::String v_texList,pls::cs::String v_grpList);

void cs_63b2bd45669dab69_init(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::String v_imgList,pls::cs::String v_sebList,pls::cs::String v_sndList,pls::cs::String v_figList,pls::cs::String v_actList,pls::cs::String v_texList,pls::cs::String v_grpList);

bool cs_87c6cb7c61cb9fce(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::String v_file);

void cs_a5f9622df7c35c0c();

void cs_c9cd9f49f64199fc(pls::cs::Ref<cs_b728593e3dcffe31> cs_this);

void cs_c04a7ac90db55ca6(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,bool v_keepFileList);

void cs_cd0885d0fd01b56f(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_seb,std::int32_t v_frame);

void cs_bece04d9ec4c4353(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_seb);

std::int32_t cs_957abf979910fc61();

pls::cs::String cs_174f6b80456cfd05(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::String v_file);

void cs_75e9fafc48a8059b(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar,std::int32_t v_m3dVer);

void cs_6ec7ac2b50afb0b0(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Array<std::uint8_t> v_data,std::int32_t v_m3dVer);

void cs_8c93151a63a54026(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::String v_directory,std::int32_t v_m3dVer);

pls::cs::Ref<pls::kairo::Image> cs_11f9813c8a63b28f(pls::cs::Array<std::uint8_t> v_src,pls::kairo::Image::Format v_format,pls::kairo::Image::Filter v_filterMode);

void cs_7b258075c3f980c6(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar);

pls::cs::Ref<cs_9cade6927d6e0bf3> cs_4d944e677756a8b9(pls::cs::Array<std::uint8_t> v_src);

pls::cs::Ref<pls::kairo::SoundBase> cs_0d8dac4ae3310aea(pls::cs::String v_file,std::int32_t v_format);

void cs_57400ccf89951052(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar,std::int32_t v_m3dVer);

pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_f22a8aac0144b99b(std::int32_t v_rsId,std::int32_t v_rcId);

pls::cs::Ref<cs_b728593e3dcffe31> cs_530b5df6d7de28c3(pls::cs::Ref<cs_b728593e3dcffe31> cs_this,std::int32_t v_bits);
}
