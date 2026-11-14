// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_7eeafe36a056776c : cs_5451b2154f09f4c5 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_7eeafe36a056776c)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.form.FriendForm.ToString";if(slot=="Init")return "M:system.form.FriendForm.Init";if(slot=="Update")return "M:system.form.FriendForm.Update";if(slot=="Draw")return "M:system.form.FriendForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Resume")return "M:system.form.FriendForm.Resume";if(slot=="Finish")return "M:system.form.FriendForm.Finish";if(slot=="GetTouchValue")return "M:system.form.FriendForm.GetTouchValue(System.Int32,System.Int32)";if(slot=="SetTouchValue")return "M:system.form.FriendForm.SetTouchValue(System.Int32,System.Int32)";if(slot=="cs_virtual_7a6109cc91f876a5")return "M:system.form.FriendForm.OnTouchEvent(kairo.unity.surface.TouchEvent)";if(slot=="GetHashCode")return "M:system.form.FriendForm.GetHashCode";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.form.FriendForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_d6d8eb7d72b9b8de{};
std::int32_t cs_2367124edfe6c3cd{};
std::int32_t cs_360ae5878ac698fb{};
std::int32_t cs_4535dd5fc188a436{};
std::int32_t cs_4b5b9a7b753dbd5b{};
std::int32_t cs_6247913d59cce9c1{};
std::int32_t cs_1925e996a4216cd6{};
pls::cs::Ref<cs_7eeafe36a056776c> cs_69932e998753f0f8{};
pls::cs::String cs_86329b9069df920d{};
pls::cs::String cs_84197564a8128fb8{};
pls::cs::Ref<cs_87fb4d668ea5580b> cs_1dc765cc4cfa5d31{};
pls::cs::Ref<cs_2d2e25a6914f7709> cs_9af5d3a1e7852653{};
pls::cs::Ref<cs_9465f7541f51c47e> cs_0684a6bc733d8cca{};
pls::cs::Ref<cs_89c0d586cfe20341> cs_bf175fafb4adf626{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual bool Update();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Resume();
virtual bool Finish();
virtual std::int32_t GetTouchValue(std::int32_t v_type,std::int32_t v_index);
virtual void SetTouchValue(std::int32_t v_type,std::int32_t v_value);
virtual bool cs_virtual_7a6109cc91f876a5(pls::cs::Ref<cs_757516ce190cf813> v_e);
virtual std::int32_t GetHashCode();
};

void cs_init_7eeafe36a056776c();

std::int32_t& cs_9fe18db1f61da800();

std::int32_t& cs_135df1f37fd59950();

std::int32_t& cs_799ed27f91c744c4();

std::int32_t& cs_d3716d8a90d66236();

std::int32_t& cs_395bd8211173f942();

std::int32_t& cs_9e9f3d99e4fddcd2();

pls::cs::Array<std::int32_t>& cs_c367fac6300f8cee();

pls::cs::Ref<cs_b728593e3dcffe31>& cs_6ecb190a724b1910();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_4f1e4b27200eabc7();

void cs_9e356fc109624d82(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Ref<cs_7eeafe36a056776c> cs_7ed3e1be6e3844e2();

void cs_7ed3e1be6e3844e2_init(pls::cs::Ref<cs_7eeafe36a056776c> cs_this);

pls::cs::Ref<cs_7eeafe36a056776c> cs_933732b97e1e3022(std::int32_t v_type);

void cs_933732b97e1e3022_init(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,std::int32_t v_type);

void cs_60833b1af0d05697(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_618419fdd827986d(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3);

pls::cs::Array<std::int32_t> cs_32b5130fdbba8e53(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,bool v_active,bool v_cursor);

pls::cs::Array<std::int32_t> cs_78fce2126cbd70e0(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,bool v_cursor);

pls::cs::Array<std::int32_t> cs_717fcad96e6b058f(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor);

pls::cs::Array<std::int32_t> cs_0de262acdc40a158(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_anchor,bool v_active,bool v_cursor);

void cs_62ff81d3bbe8f047(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_color);

void cs_94dcd111b8ee4921(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_dx,std::int32_t v_dy,std::int32_t v_sx,std::int32_t v_sy,std::int32_t v_w,std::int32_t v_h,std::int32_t v_sr,std::int32_t v_sg,std::int32_t v_sb,std::int32_t v_dr,std::int32_t v_dg,std::int32_t v_db);

void cs_399e3725ef656158(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_color);

void cs_4f6229a34a386872(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_seb,std::int64_t v_value,std::int32_t v_x,std::int32_t v_y,std::int32_t v_padding,std::int32_t v_anchor);

void cs_949e82e12c99b348(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_seb,std::int64_t v_value,std::int32_t v_x,std::int32_t v_y,std::int32_t v_padding);

void cs_36ab60c3bd163638(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_seb,std::int64_t v_value,std::int32_t v_x,std::int32_t v_y);

void cs_0c8972864e696b8c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2);

pls::cs::Array<std::int32_t> cs_0135d43d4cb4564e(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_center,std::int32_t v_top);

void cs_212cdafe66855f8f(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color);

void cs_ec22813d171c1d4c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2);

void cs_7bccde6e8ea6f480(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3);

void cs_cb87f98dd032e227(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color);

void cs_69ee200125093993(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2);

void cs_b8a79edd415baa1c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3);

void cs_9dd3a910c5a8997d(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3,std::int32_t v_color4);

void cs_e4a26c59beed8f2c(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height,std::int32_t v_color1,std::int32_t v_color2,std::int32_t v_color3);

bool cs_700199628a5d3944(pls::cs::Ref<cs_7eeafe36a056776c> cs_this);

std::int32_t cs_bbd44ad53610e27c(pls::cs::Ref<cs_7eeafe36a056776c> cs_this);

std::int32_t cs_cfa914e2f676e2a8(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,std::int32_t v_type,std::int32_t v_index);

bool cs_5225d59512713f09(pls::cs::Ref<cs_7eeafe36a056776c> cs_this);

void cs_1d17a4b2334bbb84();

pls::cs::Ref<pls::kairo::FormBase> cs_bdd6740f5b4600f8(pls::cs::Ref<cs_7eeafe36a056776c> cs_this);

pls::cs::Ref<pls::kairo::FormBase> cs_e33fb17009a2cbc9(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::String v_msg,pls::cs::String v_args);

pls::cs::Ref<cs_7eeafe36a056776c> cs_6365b6907852f094(pls::cs::String v_msg,pls::cs::String v_msg_sub);

bool cs_2e8467cceed75e07(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_e);

bool cs_50194a8436c518b8(pls::cs::Ref<cs_7eeafe36a056776c> cs_this);

void cs_dcfbcce06a015340(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,std::int32_t v_left,std::int32_t v_right);

void cs_6b3d79cf80d0d155(pls::cs::Ref<cs_7eeafe36a056776c> cs_this,std::int32_t v_type,std::int32_t v_value);

pls::cs::String cs_7b5204c0798583ad(pls::cs::Ref<cs_7eeafe36a056776c> cs_this);
}
