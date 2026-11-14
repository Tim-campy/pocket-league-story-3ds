// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_4c145fe8f008af05.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_5df8265429cd2423 : cs_5451b2154f09f4c5, cs_4c145fe8f008af05 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_5df8265429cd2423)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor)||target==typeid(cs_4c145fe8f008af05);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.form.BillingForm.ToString";if(slot=="Init")return "M:system.form.BillingForm.Init";if(slot=="Draw")return "M:system.form.BillingForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Finish")return "M:system.form.BillingForm.Finish";if(slot=="Resume")return "M:system.form.BillingForm.Resume";if(slot=="Update")return "M:system.form.BillingForm.Update";if(slot=="GetTouchValue")return "M:system.form.BillingForm.GetTouchValue(System.Int32,System.Int32)";if(slot=="SetTouchValue")return "M:system.form.BillingForm.SetTouchValue(System.Int32,System.Int32)";if(slot=="cs_virtual_7a6109cc91f876a5")return "M:system.form.BillingForm.OnTouchEvent(kairo.unity.surface.TouchEvent)";if(slot=="CheckMainWindow")return "M:system.form.BillingForm.CheckMainWindow";if(slot=="cs_virtual_6cb47d5f5df8e7cc")return "M:system.form.BillingForm.Run";if(slot=="GetHashCode")return "M:system.form.BillingForm.GetHashCode";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.form.BillingForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_e8d5f5c38f287b3d{};
std::int32_t cs_cebb9da49aa5808c{};
bool cs_98f193d860f6ae6d{};
std::int32_t cs_9570901a4b105259{};
std::int32_t cs_be2ef4fcd6a49514{};
std::int32_t cs_d09016f29a76e6c6{};
std::int32_t cs_0fd5138f4e59e7f2{};
std::int32_t cs_24d6518ec7a2257d{};
std::int32_t cs_86239015691f085c{};
std::int32_t cs_329e176d5279bda0{};
std::int32_t cs_0eb90bab05998a3a{};
pls::cs::Ref<cs_87fb4d668ea5580b> cs_9ba3d3d5411fb121{};
std::int32_t cs_1656a034de4e724e{};
std::int32_t cs_bcf0564d8df70171{};
std::int32_t cs_a3d2e85a37ba695a{};
pls::cs::Ref<cs_5df8265429cd2423> cs_8e2a76940a93d841{};
pls::cs::Ref<cs_feb7ae74aa59a27c> cs_9be2b990f12a9cb5{};
pls::cs::Ref<cs_931908081ea62151> cs_c5d00bd651861fba{};
pls::cs::Array<pls::cs::Ref<cs_931908081ea62151>> cs_47897dcce494b66c{};
pls::cs::Array<pls::cs::String> cs_870211302837662c{};
bool cs_2cbfc2aac034968a{};
pls::cs::String cs_56981de51764192d{};
std::int32_t cs_2f1408df5108f5c0{};
std::int32_t cs_befe970f631ca55b{};
std::int32_t cs_b3c0c2fddc9e2c47{};
std::int64_t cs_637e7589f6f6bf52{};
std::int32_t cs_901159f84f3b59e3{};
pls::cs::String cs_434791072cb977c2{};
pls::cs::Ref<cs_89c0d586cfe20341> cs_35a06400bd2d3ebf{};
pls::cs::Array<pls::cs::String> cs_5d0f043bf5ac80a6{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Finish();
virtual bool Resume();
virtual bool Update();
virtual std::int32_t GetTouchValue(std::int32_t v_type,std::int32_t v_index);
virtual void SetTouchValue(std::int32_t v_type,std::int32_t v_value);
virtual bool cs_virtual_7a6109cc91f876a5(pls::cs::Ref<cs_757516ce190cf813> v_e);
virtual bool CheckMainWindow();
virtual void cs_virtual_6cb47d5f5df8e7cc();
virtual std::int32_t GetHashCode();
};

void cs_init_5df8265429cd2423();

bool& cs_9b88f949daa3f81c();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_7193278c42da6bcc();

pls::cs::Array<std::int32_t>& cs_74505787d7d17de7();

std::int32_t& cs_198da31dcdf2c488();

std::int32_t& cs_b1b0a19f0baa24fd();

pls::cs::Ref<cs_b728593e3dcffe31>& cs_f21e72e05ec4cb79();

void cs_eb341bfe377d7469(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Ref<cs_5df8265429cd2423> cs_b1cdb422de7c19d2();

void cs_b1cdb422de7c19d2_init(pls::cs::Ref<cs_5df8265429cd2423> cs_this);

pls::cs::Ref<cs_5df8265429cd2423> cs_fea1b006f5a8844c(std::int32_t v_type,pls::cs::Ref<cs_feb7ae74aa59a27c> v_provide);

void cs_fea1b006f5a8844c_init(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type,pls::cs::Ref<cs_feb7ae74aa59a27c> v_provide);

pls::cs::Ref<cs_5df8265429cd2423> cs_e8ae3ed2ae7db752(std::int32_t v_type);

void cs_e8ae3ed2ae7db752_init(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type);

bool cs_47fb2f00c5638918(pls::cs::Ref<cs_5df8265429cd2423> cs_this);

pls::cs::String cs_0be1639bb6a05b50(std::int64_t v_value);

void cs_9bbb957b6e3a2798(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Array<std::int32_t> cs_08ca06402fc0dd58(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_dx,std::int32_t v_dy,std::int32_t v_dw,std::int32_t v_dh,std::int32_t v_frame);

pls::cs::Array<std::int32_t> cs_660ef87118d6e888(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,bool v_active,bool v_cursor);

pls::cs::Array<std::int32_t> cs_80bbb1ca8b8e175d(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,bool v_cursor);

pls::cs::Array<std::int32_t> cs_19383a9f099dd72f(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor);

void cs_976ab62a50e2937f(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_color);

void cs_885a127960e04407(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_dx,std::int32_t v_dy,std::int32_t v_sx,std::int32_t v_sy,std::int32_t v_w,std::int32_t v_h,std::int32_t v_sr,std::int32_t v_sg,std::int32_t v_sb,std::int32_t v_dr,std::int32_t v_dg,std::int32_t v_db);

void cs_a5fe62ccd8a41355(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_color);

void cs_8cca426a78ed9b99(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2);

void cs_a0f8c11dc14c72e5(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color);

void cs_ce1ebb169f71eef8(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2);

void cs_cb82918c87113401(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3);

void cs_fc12049066e10b07(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color);

void cs_1959c523be984faf(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2);

void cs_0af15e0bbd622bd2(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3);

void cs_391cd7af2b74466a(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3,std::int32_t v_color4);

void cs_00ac4a8c8f789f95(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3);

bool cs_edfb76ccf4f648e2(pls::cs::Ref<cs_5df8265429cd2423> cs_this);

std::int32_t cs_52627948895b2677(pls::cs::Ref<cs_5df8265429cd2423> cs_this);

std::int32_t cs_fdd4c1335685f6d8(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type,std::int32_t v_index);

bool cs_e4c18b596618208a(pls::cs::Ref<cs_5df8265429cd2423> cs_this);

void cs_810771d135ba3387();

bool cs_ead3618c8cf94cf7(pls::cs::Ref<cs_5df8265429cd2423> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_e);

bool cs_62252863f9b5a066(pls::cs::Ref<cs_5df8265429cd2423> cs_this);

void cs_aa594da7cb68bfa9(pls::cs::Ref<cs_5df8265429cd2423> cs_this);

void cs_5e76b9a5115ec3c6(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_num,std::int32_t v_showMax);

void cs_ac42dbacd2c8b2e5(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_num,std::int32_t v_showMax,std::int32_t v_value);

void cs_875f1f851e8f75df(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_num,std::int32_t v_showMax);

void cs_0d32f320570d6146(pls::cs::Ref<cs_5df8265429cd2423> cs_this);

void cs_1b77d58a6eb05a2c(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type,std::int32_t v_value);

void cs_b9bbd2b4e1a59f2c(pls::cs::Ref<cs_5df8265429cd2423> cs_this,std::int32_t v_type);

pls::cs::String cs_d8a792a28d79d9b9(pls::cs::Ref<cs_5df8265429cd2423> cs_this);

void cs_16641f71ed4d7f8a(pls::cs::Ref<cs_5df8265429cd2423> cs_this);
}
