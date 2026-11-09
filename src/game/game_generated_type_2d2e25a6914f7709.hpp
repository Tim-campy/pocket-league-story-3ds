// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_2d2e25a6914f7709 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_2d2e25a6914f7709)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_d865bbafdeb43983")return "M:system.friend.ui.FriendData.CgiGetFriendList";if(slot=="cs_virtual_9401fb4f0ec784c5")return "M:system.friend.ui.FriendData.PlayBonus(System.Int32)";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.friend.ui.FriendData";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_96e8baf9470c6eef{};
pls::cs::String cs_4e08203868786b3e{};
pls::cs::String cs_6bcda45671e82301{};
pls::cs::String cs_cf93b6d0c87591a9{};
pls::cs::String cs_604e4b1ef0997a4e{};
pls::cs::Ref<pls::generated::cs_c20c229ea63037d8> cs_dc19769b18c674e0{};
std::int32_t cs_52a8e080b7bfd117{};
std::int32_t cs_28588b55de39809d{};
std::int32_t cs_86537e9773f89c90{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_265901ac3e38e5a5{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_c8c9d3daa8567fa6{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_60d30afb5a438553{};
pls::cs::Ref<cs_9465f7541f51c47e> cs_91d5244f0e476cfe{};
bool cs_f0ec3f768b4c70c3{};
bool cs_1bddb24fb5cf7315{};
bool cs_daf9583746fd0c6a{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_be1d7f91510795ac{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_c384965fc0d4bd25{};
std::int64_t cs_ab8cb0b69ebcac70{};
std::int64_t cs_cee7c1140c10ee97{};
virtual pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_virtual_d865bbafdeb43983();
virtual void cs_virtual_9401fb4f0ec784c5(std::int32_t v_value)=0;
};

void cs_init_2d2e25a6914f7709();

pls::cs::Array<pls::cs::Array<std::uint8_t>>& cs_01b07286e746610e();

pls::cs::Array<std::int32_t>& cs_e2d16fab426c5d2f();

pls::cs::Array<std::int64_t>& cs_2f2e8e46132e7fcc();

pls::cs::Array<pls::cs::Ref<pls::generated::cs_c20c229ea63037d8>>& cs_4d39e0560b934a4f();

pls::cs::Array<pls::cs::String>& cs_1633c4562f4c40eb();

pls::cs::Ref<cs_2d2e25a6914f7709>& cs_52166bbebe634258();

pls::cs::Ref<cs_2d2e25a6914f7709> cs_7a28af13c1c2f5ac();

void cs_7a28af13c1c2f5ac_init(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

bool cs_dae07ea79e855f60(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

void cs_c8383603f8c4d277(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_dx,std::int32_t v_dy,std::int32_t v_sx,std::int32_t v_sy,std::int32_t v_w,std::int32_t v_h,std::int32_t v_sr,std::int32_t v_sg,std::int32_t v_sb,std::int32_t v_dr,std::int32_t v_dg,std::int32_t v_db);

bool cs_fe0d11dfa92eb303(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

pls::cs::Ref<cs_7eeafe36a056776c> cs_3fa9688c0681c440(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

pls::cs::Ref<cs_7eeafe36a056776c> cs_aa0325ad66b87a4e(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,pls::cs::Ref<cs_9465f7541f51c47e> v_friend);

pls::cs::String cs_9ab9c500b6159399(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

pls::cs::String cs_caa414870501fd01(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

pls::cs::Ref<cs_2d2e25a6914f7709> cs_7c54a1a29559a8d9();

std::int32_t cs_57ce211197b23477(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

pls::cs::Ref<cs_9465f7541f51c47e> cs_d0254afaa80460c4(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

void cs_f0e539e34f25bb12(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

void cs_0bc5119046170c54(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

bool cs_4a40f2f39745d124(pls::cs::String v_name,std::int32_t v_max);

bool cs_ff0c06237c9b0726(pls::cs::String v_name);

bool cs_1b640c255f09c648(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

void cs_bae36d1c229dfff8(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,pls::cs::Array<std::uint8_t> v_data);

void cs_54f11f2e695dcaff(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,pls::cs::Array<std::uint8_t> v_data);

void cs_576c42e42f2dbf1d(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,bool v_take);

void cs_e7c4ad65df297928(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

void cs_2bce05baf892a620(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this,pls::cs::String v_name);

void cs_48e169a17c41b95f(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

void cs_0f1705dcc62b5add(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

pls::cs::Array<std::uint8_t> cs_017d03dcf50da0a1(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);

pls::cs::Array<std::uint8_t> cs_d21f2be38b215e49(pls::cs::Ref<cs_2d2e25a6914f7709> cs_this);
}
