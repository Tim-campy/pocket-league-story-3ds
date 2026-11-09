// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_d0b7ac4933bed3ac : cs_5451b2154f09f4c5 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_d0b7ac4933bed3ac)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:form.GameForm.ToString";if(slot=="Init")return "M:form.GameForm.Init";if(slot=="Resume")return "M:form.GameForm.Resume";if(slot=="Finish")return "M:form.GameForm.Finish";if(slot=="Update")return "M:form.GameForm.Update";if(slot=="Draw")return "M:form.GameForm.Draw(kairo.unity.ui.Graphics)";if(slot=="GetTouchValue")return "M:form.GameForm.GetTouchValue(System.Int32,System.Int32)";if(slot=="SetTouchValue")return "M:form.GameForm.SetTouchValue(System.Int32,System.Int32)";if(slot=="cs_virtual_7a6109cc91f876a5")return "M:form.GameForm.OnTouchEvent(kairo.unity.surface.TouchEvent)";if(slot=="GetHashCode")return "M:form.GameForm.GetHashCode";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "form.GameForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_d652ab2052351880{};
std::int32_t cs_c62caebd843bc0dc{};
pls::cs::Ref<cs_75707aa3f1629c85> cs_debeb08e809ddaf3{};
std::int32_t cs_49797e0c87c221ef{};
std::int32_t cs_7b5c13e88a2cbb62{};
std::int32_t cs_c1965511f8dc0775{};
pls::cs::Ref<cs_a2cea92715051fa5> cs_00c0d37b8e60374e{};
pls::cs::Ref<cs_a2cea92715051fa5> cs_9022e9620ba70087{};
std::int32_t cs_d86122eeeeafcfb8{};
pls::cs::Ref<cs_76884ad002dceb7a> cs_0e6265d862003df8{};
std::int64_t cs_70db0e7947d6dfa9{};
std::int64_t cs_54e64f1636b953c3{};
std::int64_t cs_4ec285eb734e00a7{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_12a3817b967e8717{};
std::int32_t cs_4637d6ae0d5d4fee{};
std::int32_t cs_cd3df97a2a373e9e{};
std::int32_t cs_a807af50fd2a194f{};
std::int64_t cs_8f29644f5a795c4c{};
std::int32_t cs_49594ab9fa9406d7{};
std::int32_t cs_d590690f0c95d9fb{};
std::int32_t cs_ec2bda8a78d92303{};
bool cs_bb24ea924f47c395{};
bool cs_e9c41a94ee2133a5{};
bool cs_bf3e3642c862ccb4{};
std::int32_t cs_f7bdff6690327475{};
std::int32_t cs_48993006efde44c1{};
bool cs_e733bd27683c65b5{};
std::int32_t cs_d3f5f6ff84a7d58b{};
bool cs_9433e3b630854b9c{};
std::int32_t cs_df05cf6c33637a6b{};
std::int32_t cs_d1927f06444244d0{};
bool cs_8244d0c6420f94b7{};
std::int32_t cs_fe2154bee4ecd817{};
bool cs_c47fb378f01b0ffd{};
std::int32_t cs_6e2ae8ebf5f68b83{};
pls::cs::String cs_1e9c49d20ed33025{};
std::int64_t cs_fbbe3edf08ca6b71{};
pls::cs::String cs_16684d7e921f7fb4{};
pls::cs::Array<std::int32_t> cs_6e6e05bb399e2294{};
bool cs_41d3b13c4b7c9177{};
pls::cs::String cs_8caf273e6f349f43{};
std::int32_t cs_ad2add191c014b7c{};
pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_cda9d3e978ce24ce{};
pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_675d47bc43d2fe9e{};
pls::cs::Ref<pls::generated::cs_15e3f7b692b3f380> cs_0c63861fd9636d7c{};
bool cs_7e2d045da6f9afe2{};
bool cs_f5feff5dc7f0192f{};
pls::cs::Array<std::int32_t> cs_9bd237eef63c9ab3{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual bool Resume();
virtual bool Finish();
virtual bool Update();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual std::int32_t GetTouchValue(std::int32_t v_type,std::int32_t v_index);
virtual void SetTouchValue(std::int32_t v_type,std::int32_t v_value);
virtual bool cs_virtual_7a6109cc91f876a5(pls::cs::Ref<cs_757516ce190cf813> v_e);
virtual std::int32_t GetHashCode();
};

void cs_init_d0b7ac4933bed3ac();

std::int32_t& cs_ae4b8eafa9b05135();

std::int32_t& cs_273e73bbf4b53aa1();

std::int32_t& cs_4e8e8b204ecea952();

std::int32_t& cs_62ae0f8e3fe0cfb3();

pls::cs::Array<std::int32_t>& cs_26d01f973bb8ec69();

pls::cs::Ref<pls::kairo::Offscreen>& cs_49b1dd2c7bcf8b59();

bool& cs_764acc212cc4c635();

std::int32_t& cs_13b9e61bc19bf851();

std::int32_t& cs_4a6cd1f4b451c292();

std::int32_t& cs_305d367e48773e1a();

std::int32_t& cs_61c8a6020746066c();

std::int32_t& cs_6adcce4d54e66067();

std::int32_t& cs_fbb2dcc8210267ca();

std::int32_t& cs_55d2acabb869a6f6();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_05d8bf9ad16f6efd();

pls::cs::Array<std::int32_t>& cs_9aa0c433ed66397a();

pls::cs::Array<std::int32_t>& cs_21f2f0f3b2664aec();

pls::cs::Array<std::int32_t>& cs_05c951cb1e6322c2();

pls::cs::Array<std::int32_t>& cs_1b88d0749479a95b();

pls::cs::Array<std::int32_t>& cs_ce8cb172c24a5270();

std::int32_t& cs_b24578c9b91b1673();

pls::cs::Array<std::int32_t>& cs_c2f0bcda47ad6378();

std::int32_t& cs_c2e996830778e0de();

std::int32_t& cs_f4ef1996d644dfd1();

std::int32_t& cs_f277b5aa54fb7636();

std::int32_t& cs_8e6f0b55ae0ed8f8();

void cs_2f5e5e8b2eadfc56(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_5a161ac09add0691(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_frameCount);

pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_10943ab7d88fab29();

void cs_10943ab7d88fab29_init(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_76c53fd7ee96deb8(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_evtId);

void cs_92b6ca7741dbd7e4(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_on);

void cs_a8f47810d392facd(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Array<std::int32_t> v_arg);

void cs_ab36209b39e21c75(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_wait);

void cs_5b30530e8c9f72c4(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_state);

void cs_b2e3cc872f108dba(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_5ee37bced3a398b3(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_dy,std::int32_t v_centerX);

void cs_4bbb41751591f8ea(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_type,std::int32_t v_dx,std::int32_t v_w);

void cs_82a7d2bd46e7243b(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_cx,std::int32_t v_cy,double v_len,std::int32_t v_angle);

void cs_b47b9f223803c75e(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_4a1ff202225f1daf(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_265227f85333ad79(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t& v_width,std::int32_t& v_height,pls::kairo::Image::Format& v_format,pls::kairo::Image::Filter& v_filterMode);

pls::cs::Array<std::int32_t> cs_5e6e08b9aae9507a(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

std::int32_t cs_45606fb27d86475f(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

std::int32_t cs_fe6026dd45d80139(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

std::int32_t cs_9ca337bd8438da73(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

std::int32_t cs_69d2838ac255f02f(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

std::int32_t cs_6406cdd02c44a3cd(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

pls::cs::Array<std::int32_t> cs_629323ce6c93b593(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

std::int32_t cs_0920d346f854990b(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_month);

std::int32_t cs_775ee5aed72880a4(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

std::int32_t cs_d0198efe72f00584(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

std::int32_t cs_723dc51df445ab2a(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

std::int32_t cs_31d00564715a79b8(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_type,std::int32_t v_index);

bool cs_aaf1b5127695b2e7(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_6276d2a0126a7c09(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_521907a49d3e6026(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

pls::cs::Ref<cs_a2cea92715051fa5> cs_44e130df5f5707b2(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_1ca78dd4e3c94d08(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_type,std::int32_t v_v,pls::cs::Ref<cs_757516ce190cf813> v_e);

bool cs_3abdf9a4844132f6(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_6f949f421cc4ee74(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_add,std::int32_t v_frameCount);

bool cs_b41966ca1f680946(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<pls::kairo::Offscreen> v_offscreen);

void cs_87a88179306ecb15(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

bool cs_48b0c339ae28a97d(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_49a7e82b937ea546(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_29383d2c05591321(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_ebc65248ede488c3(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_fc44a24109e43dbd(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::String v_str,std::int32_t v_cnt);

void cs_6330d76c8e753c94(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_x,std::int32_t v_y);

void cs_4b975ffec839e539(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_x,std::int32_t v_y);

void cs_d0410a4a62cb8de4(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_scale);

void cs_47fda1ccc4dc7bca(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,std::int32_t v_type,std::int32_t v_value);

bool cs_ce6958820f13a7b4(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<pls::kairo::Offscreen> v_offscreen);

pls::cs::String cs_a20d3d4d705fb05f(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

bool cs_ba8b5ba0971d8a14(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this);

void cs_98abd7349ce62c71(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_f6da1db7a67a489d(pls::cs::Ref<cs_d0b7ac4933bed3ac> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,bool v_all_update);
}
