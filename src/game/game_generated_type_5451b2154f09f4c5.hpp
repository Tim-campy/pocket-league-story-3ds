// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_5451b2154f09f4c5 : pls::kairo::FormBase {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_5451b2154f09f4c5)||target==typeid(pls::kairo::FormBase)||pls::kairo::FormBase::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Init")return "M:form.MyFormBase.Init";if(slot=="Update")return "M:form.MyFormBase.Update";if(slot=="Draw")return "M:form.MyFormBase.Draw(kairo.unity.ui.Graphics)";if(slot=="Resume")return "M:form.MyFormBase.Resume";if(slot=="Finish")return "M:form.MyFormBase.Finish";if(slot=="GetTouchValue")return "M:form.MyFormBase.GetTouchValue(System.Int32,System.Int32)";if(slot=="SetTouchValue")return "M:form.MyFormBase.SetTouchValue(System.Int32,System.Int32)";if(slot=="cs_virtual_7a6109cc91f876a5")return "M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)";return pls::kairo::FormBase::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "form.MyFormBase";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<pls::kairo::IApplication> cs_1e37c37ca9666a4f{};
pls::cs::Ref<cs_2ffa6f51468590ea> cs_2bb3a4488f925b87{};
pls::cs::Ref<pls::kairo::Canvas> cs_bb75efee16cbae19{};
pls::cs::Ref<cs_6485f92c2f04639f> cs_4887f44792cc883c{};
pls::cs::Ref<cs_e315dac1df3b175d> cs_0bf30d2ac84a3b2d{};
pls::cs::Ref<cs_792a6372766eb19f> cs_92e1e4a444ddae70{};
std::int32_t cs_7efd0fcbf08316a7{};
std::int32_t cs_867fcab045b7058a{};
pls::cs::Ref<cs_a2cea92715051fa5> cs_75d2af5160f66bf4{};
std::int32_t cs_15e2ffc127d2f4c2{};
std::int32_t cs_b6ba515ab1a989af{};
pls::cs::Array<std::int32_t> cs_26262afc817421a1{};
virtual bool Init();
virtual bool Update();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Resume();
virtual bool Finish();
virtual std::int32_t GetTouchValue(std::int32_t v_type,std::int32_t v_index);
virtual void SetTouchValue(std::int32_t v_type,std::int32_t v_value);
virtual bool cs_virtual_7a6109cc91f876a5(pls::cs::Ref<cs_757516ce190cf813> v_e);
};

void cs_init_5451b2154f09f4c5();

std::int32_t& cs_c3399590d71503ae();

std::int32_t& cs_ec3066b8c5d4780d();

std::int32_t& cs_9c86e05bddfdb37d();

std::int32_t& cs_d300032e2a41690b();

std::int32_t& cs_04e42c75b0be7e7f();

std::int32_t& cs_8df5cf54a7ccff5f();

std::int32_t& cs_aaf938f65d980adc();

std::int32_t& cs_5f21ec3a03035ae3();

std::int32_t& cs_4552c7863c9e5897();

std::int32_t& cs_8af0529eaa9e3582();

std::int32_t& cs_9ee90d0e6c247261();

std::int32_t& cs_06793759231a4333();

std::int32_t& cs_8c159bade3fd6c11();

pls::cs::Ref<cs_5451b2154f09f4c5> cs_1980f3b6859ab3da(std::int32_t v_id);

void cs_1980f3b6859ab3da_init(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,std::int32_t v_id);

bool cs_0092f5ccddba18bf(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this);

void cs_c59f8e9df35b3608(pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_dbe0992e64383c31(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,std::int32_t v_flag,std::int32_t v_bit);

pls::cs::String cs_43bd90b0a6c512a3(std::int64_t v_value);

void cs_d85e674b28736422(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Array<std::int32_t> cs_306639bc3bbcbaee(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_width,std::int32_t v_height,pls::cs::String v_title,std::int32_t v_sideSpace,std::int32_t v_topSpace,std::int32_t v_bottomSpace,std::int32_t v_barArwSpace,std::int32_t v_flag);

pls::cs::Array<std::int32_t> cs_682303a319778e5f(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_width,std::int32_t v_height,pls::cs::String v_title,std::int32_t v_sideSpace,std::int32_t v_topSpace,std::int32_t v_bottomSpace,std::int32_t v_barArwSpace,std::int32_t v_flag,std::int32_t v_ay);

bool cs_6f798e6a602077c1();

bool cs_2951e25803cf3104(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this);

pls::cs::String cs_5804ad37c4daa2d9(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,std::int32_t v_v,std::int32_t v_len,char16_t v_padding);

pls::cs::String cs_b36716b6d1edbb95(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,std::int32_t v_v,std::int32_t v_len);

pls::cs::String cs_defdfef0f76f90b8(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,std::int64_t v_v,std::int32_t v_len,char16_t v_padding);

pls::cs::String cs_2a67b6753ce194b0(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,std::int64_t v_v,std::int32_t v_len);

pls::cs::String cs_f3d5f8eac4227aa7(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::String v_str,std::int32_t v_len,char16_t v_padding);

pls::cs::String cs_cc4084fca44e5055(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::String v_str,std::int32_t v_len);

std::int32_t cs_1884c819ea959ed5(std::int32_t v_boxBottom);

std::int32_t cs_82ab4d6bf14922c4(std::int32_t v_boxTop);

std::int32_t cs_f0ea1319d9b511eb(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,std::int32_t v_type,std::int32_t v_index);

bool cs_f2be821373eb0add(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this);

bool cs_a49b19e2c67187e3();

pls::cs::Ref<cs_dc09c88a279424b5> cs_56d2ec1c1ce5e030(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::String v_format);

pls::cs::String cs_14671e0a22aaaefd(pls::cs::String v_text,std::int64_t v_arg);

pls::cs::String cs_13c2d0b40b2bbff7(pls::cs::String v_text,pls::cs::String v_arg);

pls::cs::String cs_f37fe52fbf5cb7ca(pls::cs::String v_text);

pls::cs::String cs_3628bec075463377(std::int64_t v_value,bool v_omit,bool v_cs);

pls::cs::String cs_9869943ec1b6162e(std::int64_t v_value,bool v_omit);

pls::cs::String cs_a34dc906f6c730be(std::int64_t v_value);

bool cs_7a6109cc91f876a5(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_e);

bool cs_b6f901398ebc4376(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,std::int32_t v_result);

bool cs_7ee0b70b76ab6eed(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::String v_text,pls::cs::String v_cmds,std::int32_t v_defaultSelect);

bool cs_3a13914a876f4ae4(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::String v_text,pls::cs::String v_cmds);

bool cs_d659571885cb8cb8(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::String v_text);

void cs_c91dd49daad1c45c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_size);

pls::cs::String cs_373a9dd86e523b7e(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,pls::cs::String v_text,pls::cs::String v_oldStr,pls::cs::String v_newStr);

pls::cs::String cs_ee9c23ebc8767b84(pls::cs::String v_text,pls::cs::String v_arg);

bool cs_f6039316248c9637(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this);

void cs_3d1ead99a7eb01b8(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,std::int32_t v_type,std::int32_t v_value);

std::int32_t cs_27feab6de540a5d5(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this,std::int32_t v_type,std::int32_t v_value);

pls::cs::String cs_287ba81ffa50d9d9(pls::cs::String v_text,std::int64_t v_value,bool v_comma);

pls::cs::String cs_467f665d29a30c7d(pls::cs::String v_text,std::int64_t v_value);

pls::cs::String cs_463df879214f8dac(std::int64_t v_value,bool v_cs);

bool cs_25913418bfe51bb8(pls::cs::Ref<cs_5451b2154f09f4c5> cs_this);

pls::cs::String cs_bb0d2e21d9f06644(std::int64_t v_value,bool v_cs);

pls::cs::String cs_7e11fd20a13d2014(std::int64_t v_value);

pls::cs::String cs_288c9ed6219bc392(pls::cs::String v_text,std::int64_t v_value,bool v_comma);

pls::cs::String cs_8479246d6a9e3c73(pls::cs::String v_text,std::int64_t v_value);
}
