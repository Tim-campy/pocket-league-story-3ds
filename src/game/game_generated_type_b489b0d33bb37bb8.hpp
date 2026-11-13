// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_b489b0d33bb37bb8 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_b489b0d33bb37bb8)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_7a0d5be4ca3b1254")return "M:kairo.unity.system.KairoBase.OnInit";if(slot=="cs_virtual_51f84c16de790570")return "M:kairo.unity.system.KairoBase.OnStart";if(slot=="cs_virtual_4e3c4bf49c24e27d")return "M:kairo.unity.system.KairoBase.OnLoad(java.io.InputStream)";if(slot=="cs_virtual_e634eb1896b92689")return "M:kairo.unity.system.KairoBase.OnWrite(java.io.OutputStream)";if(slot=="cs_virtual_7ebfee2a92c0d37e")return "M:kairo.unity.system.KairoBase.OnNewGame(System.Boolean)";if(slot=="cs_virtual_10a01b9d900fa6c0")return "M:kairo.unity.system.KairoBase.OnLoadGame(java.io.InputStream)";if(slot=="cs_virtual_9a7c0378d22d6bd5")return "M:kairo.unity.system.KairoBase.OnWriteGame(java.io.OutputStream)";if(slot=="cs_virtual_706bcbd9776cf6ef")return "M:kairo.unity.system.KairoBase.Finish";if(slot=="cs_virtual_a6a3a2dac688088b")return "M:kairo.unity.system.KairoBase.Connected(System.String,System.Byte[],System.Boolean)";if(slot=="cs_virtual_9ca5e184bd541bee")return "M:kairo.unity.system.KairoBase.Update";if(slot=="cs_virtual_3481915358ac0fff")return "M:kairo.unity.system.KairoBase.Save";if(slot=="cs_virtual_06f3c8d943914943")return "M:kairo.unity.system.KairoBase.SaveAll";if(slot=="cs_virtual_89868493b44dd8bd")return "M:kairo.unity.system.KairoBase.HandleActivityResult(System.Int32,System.Int32,System.Object)";if(slot=="cs_virtual_7226942a83482c7a")return "M:kairo.unity.system.KairoBase.OnSaveGameBegin";if(slot=="cs_virtual_486e7c39f05ac1d6")return "M:kairo.unity.system.KairoBase.OnSaveGameEnd";return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "kairo.unity.system.KairoBase";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_a3decda7a4670291{};
bool cs_bb15809d7dd758fd{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_fe5c5a440152445e{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_675e01745bf2ff64{};
std::int32_t cs_23f814b97b0cdf1c{};
std::int32_t cs_3803cd72992c3762{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_ac9d14d8fd218a0c{};
pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_efb4aeef5c6f7590{};
std::int32_t cs_a051b3620098d255{};
std::int32_t cs_b0faf2c47f9ac8ae{};
bool cs_a1c9fd0398fc101a{};
bool cs_ca174d10ffdcf6e9{};
std::int32_t cs_b28b626edc40d63d{};
pls::cs::Ref<pls::generated::cs_7fd3b635ed6929d0> cs_284cc3cac7606c94{};
bool cs_a93f8b0e2caf329a{};
bool cs_98f6c84566bf4254{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_a491890168e60b87{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_cc1025ec243f7ac6{};
std::int64_t cs_60f22a64c143004f{};
std::int32_t cs_36d9dd4afd7f06af{};
bool cs_3daead10b8062e0b{};
bool cs_213a6e42cc559d34{};
pls::cs::Array<pls::cs::String> cs_6fe9af9a0c00d125{};
pls::cs::Array<std::int32_t> cs_bbeeaad9491d7958{};
pls::cs::String cs_25a8ca82b2553566{};
bool cs_77c315e5b65bf792{};
pls::cs::Dictionary<pls::cs::String,std::int32_t> cs_f534ca76cfc62abb{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_d8c919de6b5bfad1{};
pls::cs::Array<cs_c87dc3d2d0f9440a> cs_3f3b83b6a44bdc33{};
std::int32_t cs_241b6f9cd68962e5{};
pls::cs::String cs_4cd5b2fa578372a4{};
pls::cs::Array<std::int32_t> cs_bc8b4cc170dd0946{};
pls::cs::Stack<pls::cs::Ref<cs_2c2ce8625d613473>> cs_1f2ecebcf07a4a8b{};
pls::cs::List<pls::cs::Ref<cs_8e2bf0f8fe011785>> cs_4170a278138fe06e{};
pls::cs::List<pls::cs::String> cs_c9f1f5e90f89763b{};
virtual void cs_virtual_7a0d5be4ca3b1254();
virtual void cs_virtual_51f84c16de790570();
virtual void cs_virtual_4e3c4bf49c24e27d(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);
virtual void cs_virtual_e634eb1896b92689(pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
virtual void cs_virtual_7ebfee2a92c0d37e(bool v_take);
virtual void cs_virtual_10a01b9d900fa6c0(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);
virtual void cs_virtual_9a7c0378d22d6bd5(pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
virtual void cs_virtual_706bcbd9776cf6ef();
virtual void cs_virtual_a6a3a2dac688088b(pls::cs::String v_cgi,pls::cs::Array<std::uint8_t> v_send,bool v_split);
virtual void cs_virtual_9ca5e184bd541bee();
virtual void cs_virtual_3481915358ac0fff()=0;
virtual void cs_virtual_06f3c8d943914943()=0;
virtual bool cs_virtual_89868493b44dd8bd(std::int32_t v_requestCode,std::int32_t v_resultCode,pls::cs::Ref<pls::cs::Object> v_data);
virtual void cs_virtual_7226942a83482c7a();
virtual void cs_virtual_486e7c39f05ac1d6();
};

void cs_init_b489b0d33bb37bb8();

pls::cs::Array<std::int32_t>& cs_eb4b193093fe2ed1();

pls::cs::Ref<cs_50c5a567a6876ee3>& cs_0d794b0205468f6a();

pls::cs::Ref<cs_b489b0d33bb37bb8>& cs_11e5ce60ddaa567b();

pls::cs::Ref<cs_b489b0d33bb37bb8> cs_d710b4eaf3ab212a();

void cs_d710b4eaf3ab212a_init(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

void cs_b70446c7450e6993(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,std::int32_t v_type,pls::cs::String v_name,std::int32_t v_up,bool v_save);

bool cs_f13bfb412c6bef66(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,std::int32_t v_bit);

bool cs_312c009a993a1e26(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

void cs_706bcbd9776cf6ef(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

pls::cs::Array<cs_c87dc3d2d0f9440a> cs_7e52a7f62521b1ee(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,bool v_languageOnly,bool v_releaseOnly);

pls::cs::String cs_6fa713935dfcd76c(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

pls::cs::String cs_047c3ab4bcca9557(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

pls::cs::Ref<cs_b489b0d33bb37bb8> cs_3eff1227bb0de063();

std::int32_t cs_033269c53e74ac43(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

pls::cs::String cs_f878e2def0687b14(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

pls::cs::String cs_923493c18d90485c();

pls::cs::String cs_87f9285131d0cba9(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

bool cs_89868493b44dd8bd(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,std::int32_t v_requestCode,std::int32_t v_resultCode,pls::cs::Ref<pls::cs::Object> v_data);

pls::cs::Array<std::uint8_t> cs_b8b48b1495fef228(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::String v_url,pls::cs::Array<std::uint8_t> v_send,bool v_check);

bool cs_ab34005322458eed(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

bool cs_09868bc9a4810065(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

void cs_b2a7adc10d3ecb29(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

pls::cs::Array<cs_c87dc3d2d0f9440a> cs_bf2fb5b5178771c9(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::Array<std::uint8_t> v_data,std::int32_t& v_date);

pls::cs::String cs_e458c0b11b9d98e1(pls::cs::String v_query,pls::cs::String v_param);

void cs_11a43a7110c29351(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,std::int32_t v_bit);

void cs_7a0d5be4ca3b1254(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

void cs_4e3c4bf49c24e27d(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_10a01b9d900fa6c0(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_7ebfee2a92c0d37e(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,bool v_take);

void cs_7226942a83482c7a(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

void cs_486e7c39f05ac1d6(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

void cs_51f84c16de790570(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);

void cs_e634eb1896b92689(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_9a7c0378d22d6bd5(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_e63aaf6292bf7187(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,bool v_playing);

void cs_5d101ae71ba29127(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this,bool v_enable);

void cs_9ca5e184bd541bee(pls::cs::Ref<cs_b489b0d33bb37bb8> cs_this);
}
