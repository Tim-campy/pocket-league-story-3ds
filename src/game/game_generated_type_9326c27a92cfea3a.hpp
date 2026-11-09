// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_9326c27a92cfea3a : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_9326c27a92cfea3a)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_43e8c5a72fc9d69b")return "M:kairo.unity.surface.SurfaceBase.DoBegin";if(slot=="cs_virtual_f7a60b8dd9e85732")return "M:kairo.unity.surface.SurfaceBase.DoEnd";if(slot=="cs_virtual_1698aae3145703cc")return "M:kairo.unity.surface.SurfaceBase.DoEvent(kairo.unity.surface.TouchComponent)";if(slot=="cs_virtual_9f5fde625f99aa16")return "M:kairo.unity.surface.SurfaceBase.OnTouchEvent(kairo.unity.surface.TouchEvent)";if(slot=="cs_virtual_14c25464911dc345")return "M:kairo.unity.surface.SurfaceBase.BeginTouchRegist(kairo.unity.ui.Graphics)";if(slot=="cs_virtual_77304e19eb4e3af6")return "M:kairo.unity.surface.SurfaceBase.EndTouchRegist(kairo.unity.ui.Graphics)";if(slot=="cs_virtual_56dbf0b4836fa803")return "M:kairo.unity.surface.SurfaceBase.SetTouchRegistEnable(System.Boolean)";if(slot=="cs_virtual_07a0bb2e4afc307c")return "M:kairo.unity.surface.SurfaceBase.Draw(kairo.unity.ui.Graphics)";if(slot=="cs_virtual_9b7c686ee42b269b")return "M:kairo.unity.surface.SurfaceBase.IsGameSurface";if(slot=="cs_virtual_acea3de130dbb7cd")return "M:kairo.unity.surface.SurfaceBase.RotateClear";if(slot=="cs_virtual_f10884576b82823a")return "M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)";if(slot=="cs_virtual_e94b5958615f0bf0")return "M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32)";if(slot=="cs_virtual_5bc2a6aa84d89f40")return "M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32,kairo.unity.ui.KeyEvent)";if(slot=="cs_virtual_50b7ab3f6322a4ec")return "M:kairo.unity.surface.SurfaceBase.OnKeyUp(System.Int32,kairo.unity.ui.KeyEvent)";if(slot=="cs_virtual_6236178d574fe9e3")return "M:kairo.unity.surface.SurfaceBase.CanRegistComponent";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.surface.SurfaceBase";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>> cs_f7c9bda807d7eeb4{};
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_3a3d09f9e75a32d2>>> cs_da77c0d1c7c10cf5{};
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> cs_0617db512087b2ec{};
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> cs_9d67a26a33b8a0c6{};
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> cs_d8d54585ad9a7509{};
std::int32_t cs_cdfbc726afcb4394{};
bool cs_8e78aafd74ff9c93{};
bool cs_267c8d43843f9788{};
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>> cs_ef6910d6b6998a79{};
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>> cs_7fc3d16947dee37a{};
pls::cs::Array<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_757516ce190cf813>>>> cs_d8b12faa23ea1f67{};
pls::cs::Array<std::int32_t> cs_848dae40f6538a32{};
pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_2c23db509fef62bc{};
pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_1fbc2d8a4542188f{};
pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_711ed50ca021ec51{};
pls::cs::Array<pls::cs::Ref<cs_e1ac8ca60ae0d404>> cs_f376b7177e1111c6{};
std::int32_t cs_5becacd354817f23{};
bool cs_974403b828a4cbb8{};
bool cs_aa003e283f7a4976{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_ec63e4f8389b2d48{};
std::int32_t cs_9690e9ad077208d1{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_fb3d6a30817a2b3d{};
bool cs_9a72feb799163299{};
std::int32_t cs_81c662bf139f2e37{};
std::int32_t cs_c787628daa40a814{};
std::int32_t cs_2079021b1cb62f0d{};
std::int32_t cs_11dd7a86dc1ba3c2{};
float cs_78190c2307d8886c{};
pls::cs::List<float> cs_fd43e19d8c4585af{};
pls::cs::List<pls::cs::Ref<pls::kairo::Graphics>> cs_568eda1d21a5fdb4{};
pls::cs::Ref<pls::kairo::Graphics> cs_0b13306ae4757130{};
std::int32_t cs_320eb5a0949e0cfd{};
std::int32_t cs_829b7d2daa7d373f{};
std::int32_t cs_e6ef35e36e4dfee7{};
bool cs_77593d7e6503562f{};
pls::cs::Ref<pls::cs::Object> cs_b48b2a151f962449{};
pls::cs::Ref<pls::cs::Object> cs_509c67bbf073adfa{};
pls::cs::Ref<pls::cs::Object> cs_af79623c257a93fb{};
virtual void cs_virtual_43e8c5a72fc9d69b();
virtual void cs_virtual_f7a60b8dd9e85732();
virtual bool cs_virtual_1698aae3145703cc(pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c);
virtual void cs_virtual_9f5fde625f99aa16(pls::cs::Ref<cs_757516ce190cf813> v_evt)=0;
virtual void cs_virtual_14c25464911dc345(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual void cs_virtual_77304e19eb4e3af6(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual void cs_virtual_56dbf0b4836fa803(bool v_enable);
virtual void cs_virtual_07a0bb2e4afc307c(pls::cs::Ref<pls::kairo::Graphics> v_g)=0;
virtual bool cs_virtual_9b7c686ee42b269b()=0;
virtual void cs_virtual_acea3de130dbb7cd()=0;
virtual void cs_virtual_f10884576b82823a(pls::cs::Ref<pls::kairo::MotionEvent> v_evt);
virtual void cs_virtual_e94b5958615f0bf0(std::int32_t v_key);
virtual void cs_virtual_5bc2a6aa84d89f40(std::int32_t v_keyCode,pls::cs::Ref<pls::kairo::KeyEvent> v_evt);
virtual void cs_virtual_50b7ab3f6322a4ec(std::int32_t v_keyCode,pls::cs::Ref<pls::kairo::KeyEvent> v_evt);
virtual bool cs_virtual_6236178d574fe9e3();
};

void cs_init_9326c27a92cfea3a();

pls::cs::Array<std::int32_t>& cs_e2d8ee0a92b1147c();

pls::cs::Ref<cs_e1ac8ca60ae0d404>& cs_e22ec5a4a308544e();

pls::cs::Array<std::int32_t>& cs_19e8a97a219b74b4();

pls::cs::Ref<cs_9326c27a92cfea3a> cs_a1b466bc14363691();

void cs_a1b466bc14363691_init(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_c015426253e69b27(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_30e0326b36c8f3ca(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_option);

void cs_14c25464911dc345(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_6236178d574fe9e3(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

bool cs_1941f0d8c1b7225c(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id,std::int32_t v_value);

bool cs_d3954e1f034e3709(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id);

bool cs_6528c0f17d8d5769(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_x,std::int32_t v_y,std::int32_t v_rcx,std::int32_t v_rcy,std::int32_t v_rcw,std::int32_t v_rch);

bool cs_559ffe43566a7dfb(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id,std::int32_t v_value);

bool cs_aeefab6df54a6aa1(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> v_list,std::int32_t v_id);

bool cs_67202387fb4b4cca(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> v_list,std::int64_t v_key);

void cs_0a96693c31be1e15(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

pls::cs::Ref<cs_757516ce190cf813> cs_63e01a337b8c5816(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_type,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component);

pls::cs::Ref<cs_70b7974d356d68ab> cs_8636a26efe9d2eb5(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int64_t v_key,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component);

void cs_43e8c5a72fc9d69b(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

void cs_f7a60b8dd9e85732(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

bool cs_1698aae3145703cc(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c);

void cs_77304e19eb4e3af6(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_932865f2d762e1e3(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component);

bool cs_9e885a578815ee7e(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_bc6be8a193cbe380(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id,std::int32_t v_value);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_ed99a71361f12b06(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_index);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_19ca6d3dec6d9bd3(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id);

std::int32_t cs_159596982eb74639(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

std::int32_t cs_070a99c8794546df(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

std::int32_t cs_4c27f7203ac15d1e(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

std::int32_t cs_3afc83d4646f8f54(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

float cs_e739ab87bfd72b08(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

pls::cs::Ref<cs_757516ce190cf813> cs_c01d41baf2e72b63(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_id,std::int32_t v_type);

pls::cs::Ref<cs_757516ce190cf813> cs_6fe130a06a1a3f4e(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int64_t v_key,std::int32_t v_type);

std::int32_t cs_aa76afa6918aaccc(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

std::int32_t cs_ef5e1e474cdfff4e(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

std::int32_t cs_099daeab6f59a950(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

std::int32_t cs_e806cfaebaa3c9d5(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

bool cs_1ed6a55cc3c2bbc8(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this);

void cs_0979cd4f20b79179(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_5bc2a6aa84d89f40(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_keyCode,pls::cs::Ref<pls::kairo::KeyEvent> v_evt);

void cs_e94b5958615f0bf0(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_key);

void cs_50b7ab3f6322a4ec(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_keyCode,pls::cs::Ref<pls::kairo::KeyEvent> v_evt);

void cs_49999cff44002120(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_key);

void cs_f10884576b82823a(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::kairo::MotionEvent> v_evt);

void cs_77131fb79b6dc21d(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<cs_e1ac8ca60ae0d404> v_evt);

std::int32_t cs_f14e41b7fe4df878(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> v_list,std::int32_t v_id);

std::int32_t cs_f1e94a75305f273b(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_70b7974d356d68ab>>> v_list,std::int64_t v_key);

void cs_6b3ccfcb08f2d196(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,bool v_value);

void cs_ee0b408f6e8fa392(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_height);

void cs_37c74a3ab45030f2(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_x,std::int32_t v_y);

void cs_8de8ff27e94cbce9(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,float v_scale);

void cs_7676075e268ec275(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,std::int32_t v_width,std::int32_t v_height);

void cs_56dbf0b4836fa803(pls::cs::Ref<cs_9326c27a92cfea3a> cs_this,bool v_enable);
}
