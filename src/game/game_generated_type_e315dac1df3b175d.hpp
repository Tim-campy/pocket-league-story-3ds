// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
namespace pls::game {

struct cs_e315dac1df3b175d : cs_9326c27a92cfea3a {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_e315dac1df3b175d)||target==typeid(cs_9326c27a92cfea3a)||cs_9326c27a92cfea3a::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_9b7c686ee42b269b")return "M:surface.GameView.IsGameSurface";if(slot=="cs_virtual_14c25464911dc345")return "M:surface.GameView.BeginTouchRegist(kairo.unity.ui.Graphics)";if(slot=="cs_virtual_77304e19eb4e3af6")return "M:surface.GameView.EndTouchRegist(kairo.unity.ui.Graphics)";if(slot=="cs_virtual_f7a60b8dd9e85732")return "M:surface.GameView.DoEnd";if(slot=="cs_virtual_e94b5958615f0bf0")return "M:surface.GameView.OnKeyDown(System.Int32)";if(slot=="cs_virtual_9f5fde625f99aa16")return "M:surface.GameView.OnTouchEvent(kairo.unity.surface.TouchEvent)";if(slot=="cs_virtual_07a0bb2e4afc307c")return "M:surface.GameView.Draw(kairo.unity.ui.Graphics)";if(slot=="cs_virtual_acea3de130dbb7cd")return "M:surface.GameView.RotateClear";if(slot=="cs_virtual_f10884576b82823a")return "M:surface.GameView.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)";return cs_9326c27a92cfea3a::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "surface.GameView";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::kairo::IApplication> cs_dce74b5b9a4c3556{};
pls::cs::Ref<pls::kairo::Canvas> cs_57645038112781fd{};
pls::cs::Ref<cs_4e9b1f0e9e3baf25> cs_4ee8a5d8ed6fb33b{};
pls::cs::Ref<cs_6485f92c2f04639f> cs_af72b94facaef62c{};
pls::cs::Ref<pls::kairo::Image> cs_5fae25463177071f{};
pls::cs::Ref<pls::kairo::Graphics> cs_c30875eb1ac4859c{};
pls::cs::Ref<pls::kairo::Font> cs_5399805dce0daa84{};
std::int64_t cs_e303336fe5f1c8b9{};
std::int32_t cs_d50a8b4d28d66eeb{};
bool cs_62a36c68783f12ab{};
pls::cs::String cs_2b779b017115f350{};
std::int32_t cs_8c7139230b63d34c{};
pls::cs::String cs_d2aa7f489654e1a8{};
bool cs_b8ce53667520b9b8{};
std::int32_t cs_efcdbdc401b76399{};
std::int64_t cs_1a1cdb143c36e61c{};
pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Array<std::int32_t>>> cs_ac0dd82664682ea8{};
std::int32_t cs_c8b0f3ef39ceeed6{};
pls::cs::Array<std::int32_t> cs_fb778efa514fe1a4{};
virtual bool cs_virtual_9b7c686ee42b269b();
virtual void cs_virtual_14c25464911dc345(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual void cs_virtual_77304e19eb4e3af6(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual void cs_virtual_f7a60b8dd9e85732();
virtual void cs_virtual_e94b5958615f0bf0(std::int32_t v_key);
virtual void cs_virtual_9f5fde625f99aa16(pls::cs::Ref<cs_757516ce190cf813> v_e);
virtual void cs_virtual_07a0bb2e4afc307c(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual void cs_virtual_acea3de130dbb7cd();
virtual void cs_virtual_f10884576b82823a(pls::cs::Ref<pls::kairo::MotionEvent> v_evt);
};

void cs_init_e315dac1df3b175d();

pls::cs::Array<pls::cs::String>& cs_23fdb96e8da503d4();

pls::cs::Array<float>& cs_6fbe9e1ef5a2334d();

pls::cs::Array<std::int32_t>& cs_f1088522c1cb7c9e();

pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>& cs_458e967c446c2f02();

pls::cs::Ref<cs_e315dac1df3b175d>& cs_e41b3ae7bfae5fb1();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_16bdb21bbc3ccb66();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_8c8385709855299d();

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_63f4ac17c3a51a13(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_opt);

pls::cs::Ref<cs_e315dac1df3b175d> cs_99d89125e258aca0();

void cs_99d89125e258aca0_init(pls::cs::Ref<cs_e315dac1df3b175d> cs_this);

void cs_0866ebf8137ed363(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Array<std::int32_t> v_paint);

pls::cs::Ref<cs_9b21b86f0d2914e0> cs_94ba728de1847ec7(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_imgId,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_46657db897a1c20f(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,pls::cs::Ref<pls::kairo::Image> v_img,std::int32_t v_x,std::int32_t v_y,std::int32_t v_u,std::int32_t v_v,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_opt);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_5c6ce742d887c401(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,pls::cs::Ref<pls::kairo::Image> v_img,std::int32_t v_x,std::int32_t v_y,std::int32_t v_u,std::int32_t v_v,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_5249190fd61436f9(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,pls::cs::Ref<pls::kairo::Image> v_img,std::int32_t v_x,std::int32_t v_y,std::int32_t v_u,std::int32_t v_v,std::int32_t v_w,std::int32_t v_h);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_954e4192ea11d297(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,std::int32_t v_frame,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_opt);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_172796b34f9ae01c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,std::int32_t v_frame,std::int32_t v_value);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_65e8c232b743829f(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,pls::cs::Ref<cs_9cade6927d6e0bf3> v_seb,std::int32_t v_frame);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_5a06983504dd1383(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_opt);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_554ec638efacdc2e(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_b3faa2d7f2f94a22(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_id,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_3e37cd2e53d2515b(std::int32_t v_id,pls::cs::Ref<cs_6517d63c01870958> v_opt);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_a5b39994341dd6d7(std::int32_t v_id,std::int32_t v_value,pls::cs::Ref<cs_6517d63c01870958> v_opt);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_c856c18651a3dbf3(std::int32_t v_id,std::int32_t v_value);

pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_597d9c661c469083(std::int32_t v_id);

void cs_344a1e1fb645eab7(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_70aeac563b84bccd(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_w1,std::int32_t v_h1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_w2,std::int32_t v_h2);

bool cs_c09effaa5a5594b5(std::int32_t v_id,std::int32_t v_value);

bool cs_c32bdb6120b025c7(std::int64_t v_key);

void cs_dc7bfd9cd45b88ef();

void cs_c3eb1a825af8d5f9(pls::cs::Ref<cs_e315dac1df3b175d> cs_this);

void cs_7507297efd553097(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_fbcbc38ec33df44a(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,std::int32_t v_imgId);

void cs_08f39eff8cfbd63c(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,float v_w,float v_h,std::int32_t v_imgId);

pls::cs::Array<std::int32_t> cs_031ab111eb4ca5ff(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_value,std::int32_t v_maximum,std::int32_t v_largeChange,bool v_touch,std::int32_t v_type);

void cs_c536f61eec0faa4d(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

std::int32_t cs_88dab825dd82b135(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::TouchValueAccessor> v_va,std::int32_t v_type);

std::int32_t cs_9626ff1065e26bd4(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type);

pls::cs::Array<float> cs_592f5eb6ecedf86f(std::int32_t v_imgId);

pls::cs::Ref<cs_e315dac1df3b175d> cs_f32a8bd00f4461ef();

std::int32_t cs_c545d9fff10e97de(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c,std::int32_t v_defaultKey);

std::int32_t cs_ccbbf4a776947d7c(pls::cs::Ref<cs_e315dac1df3b175d> cs_this);

pls::cs::Ref<pls::kairo::TouchValueAccessor> cs_b4097d6d0948217d(pls::cs::Ref<cs_e315dac1df3b175d> cs_this);

bool cs_6da64ef97e763094(pls::cs::Ref<cs_e315dac1df3b175d> cs_this);

std::int32_t cs_b22c74454e7f3a62(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v);

void cs_e464c93271d834fa(pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar);

void cs_c6107d3d2273b65c(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_key);

void cs_c5c9b2d6ef53a83f(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::MotionEvent> v_evt);

void cs_4829fca470a89cdf(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_9e7500152d9a882a(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_05183bde71e91f92(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_7df5722f15d9103a(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_d4e5a1e089490a84(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_6a8c2fe4a5f21440(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_d234a499a2d0fedd(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_ec59059ca1eb3937(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_a1a15f07b87846c7(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_5c5d7c393357b952(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_febe94c212ee7182(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_80bc2f474a7661c0(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_4460ad3847e3a9c5(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_95948e152b24f51c(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_21a10cf0ef11fc34(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_20a2c295f3df77da(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_803a8f1cabc10a01(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_d9b98385147ebb44(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_8097b6631da89434(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_8c7afeb19f0309c4(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_aef9ac5f9063f0c9(pls::cs::Ref<cs_e315dac1df3b175d> cs_this);

void cs_624bee8cd9f911a1(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::TouchValueAccessor> v_va,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c);

void cs_e1d7840856fb3e3a(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,pls::cs::Ref<pls::kairo::TouchValueAccessor> v_va,std::int32_t v_type,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c);

void cs_7fe16b2e413fed73(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c);

void cs_cc3c4e9704a06708(pls::cs::Ref<cs_e315dac1df3b175d> cs_this,std::int32_t v_type,std::int32_t v_value,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_c);
}
