// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_66eb7014769dfe80 : cs_5451b2154f09f4c5 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_66eb7014769dfe80)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="Init")return "M:form.DebugForm.Init";if(slot=="Finish")return "M:form.DebugForm.Finish";if(slot=="Update")return "M:form.DebugForm.Update";if(slot=="Draw")return "M:form.DebugForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Resume")return "M:form.DebugForm.Resume";if(slot=="GetTouchValue")return "M:form.DebugForm.GetTouchValue(System.Int32,System.Int32)";if(slot=="SetTouchValue")return "M:form.DebugForm.SetTouchValue(System.Int32,System.Int32)";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "form.DebugForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_75707aa3f1629c85> cs_4c48425abd4d3e5b{};
std::int32_t cs_27afd7f8c66ba984{};
std::int32_t cs_0773e10dddc85f24{};
std::int32_t cs_58e2939b3620a324{};
std::int32_t cs_bf70c0187a10881d{};
pls::cs::Array<pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>> cs_b0521b83f0f3a6a7{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_c57bf6dde87b94b8{};
pls::cs::Ref<cs_2ef6641b828546ac> cs_d9fcc9a27717968b{};
std::int32_t cs_9ee14d468984ec7e{};
std::int32_t cs_71846d6248caac4d{};
std::int32_t cs_2c3c4b4302801190{};
std::int32_t cs_11dda8fa8b2b529a{};
std::int32_t cs_59b799b3f8e7bd1e{};
std::int32_t cs_24fae39bccc90242{};
std::int32_t cs_efbcdc17ce419b3e{};
std::int32_t cs_0e5ed3601f44b6cc{};
std::int32_t cs_9a49b5fcf597a33b{};
std::int32_t cs_3492228f44882e47{};
std::int32_t cs_0920748b5fc48e0e{};
std::int32_t cs_0f25005cb64a12e6{};
std::int32_t cs_ff3e19682a960592{};
std::int32_t cs_43c6c2dbaa6fb06d{};
std::int32_t cs_f618720b4f8ea904{};
std::int32_t cs_1185d33edea05265{};
std::int32_t cs_01eb29622fc73a26{};
std::int32_t cs_9b9b92ac1d0d4c32{};
std::int32_t cs_83684a01468a5f96{};
std::int32_t cs_ab9575ff5dc71fe8{};
std::int32_t cs_0b76a744de7dc494{};
std::int32_t cs_a79dadc886261b72{};
std::int32_t cs_a19cd1b837db4887{};
std::int32_t cs_c8ef2ca7c00fca8a{};
pls::cs::Array<std::int32_t> cs_fde1b61c7e518e20{};
pls::cs::Array<std::int32_t> cs_b4a20b4cf1ba958f{};
std::int32_t cs_306db0db8ace3487{};
std::int32_t cs_5820400b429c4637{};
std::int32_t cs_256f614df8751da7{};
std::int32_t cs_8a69004d39dff5b2{};
std::int32_t cs_a823cbe77339201e{};
std::int32_t cs_2404e57e55e133d8{};
std::int32_t cs_99d0261e5f02dea6{};
pls::cs::Array<pls::cs::String> cs_eab85cdaa664d8f2{};
pls::cs::Array<pls::cs::String> cs_893bc3846d80c88e{};
pls::cs::Array<pls::cs::String> cs_8b4bd5950a16f5a2{};
pls::cs::Array<pls::cs::String> cs_834f547c4821847a{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_3ca042dd7d48b90e{};
pls::cs::Array<std::int32_t> cs_2d06138591570bc1{};
virtual bool Init();
virtual bool Finish();
virtual bool Update();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Resume();
virtual std::int32_t GetTouchValue(std::int32_t v_type,std::int32_t v_index);
virtual void SetTouchValue(std::int32_t v_type,std::int32_t v_value);
};

void cs_init_66eb7014769dfe80();

std::int32_t& cs_5da1e267574dbe43();

std::int32_t& cs_848ede5362f6ed75();

std::int32_t& cs_8dd0e1347c6db246();

std::int32_t& cs_68010cdefe567f8a();

std::int32_t& cs_6d85ecde245d4099();

std::int32_t& cs_3daed0abe9321f97();

std::int32_t& cs_cdcddb5fed93af4b();

std::int32_t& cs_07102ce0776bbf92();

std::int32_t& cs_240905aec8e74294();

std::int32_t& cs_c7fc0431e18cfb42();

std::int32_t& cs_d8e5143711cea2cd();

std::int32_t& cs_192b0be58bdb5b00();

pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>& cs_952321c348b94c86();

pls::cs::Array<std::int32_t>& cs_66d0b7e5cdd07259();

std::int32_t& cs_1d651fed90f9394a();

std::int32_t& cs_38d337aa2991f8e6();

std::int32_t& cs_0b5cc5bd2a8c6d91();

std::int32_t& cs_af32fc1790ff7767();

std::int32_t& cs_097746805289dc43();

std::int32_t& cs_f9b76c887f23ee2b();

std::int32_t& cs_6b9bf3ea8c952916();

std::int32_t& cs_e263b226f6d85c40();

std::int32_t& cs_3b54bd448810f8cc();

std::int32_t& cs_7e819ca49178a69e();

std::int32_t& cs_81ecd5643a826081();

std::int32_t& cs_12db9d83012abbea();

std::int32_t& cs_4d85b0527f554a35();

std::int32_t& cs_aab07243b50f12ba();

std::int32_t& cs_6222b2a0c8b415ac();

std::int32_t& cs_667e16d3123931bd();

std::int32_t& cs_035f30f34391dc10();

std::int32_t& cs_4a10ad7a53783984();

std::int32_t& cs_2a810069f8bde935();

std::int32_t& cs_24db94f546b106ed();

std::int32_t& cs_da6818128f0b88a7();

std::int32_t& cs_3ea894779428eaef();

std::int32_t& cs_37e7361626c592d3();

std::int32_t& cs_23331584939e8c41();

std::int32_t& cs_3b6e98877e75d462();

pls::cs::Ref<cs_66eb7014769dfe80> cs_e74ea43aa478ba48();

void cs_e74ea43aa478ba48_init(pls::cs::Ref<cs_66eb7014769dfe80> cs_this);

void cs_0a11fd78e6567fcd(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_c92b7df67bd593dd(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_0ae3f38ec01829a3(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_a2440b8612f1f3f1(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_15fffade25236ba2(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_team_id,std::int32_t v_p_id);

void cs_81b563e46918cb92(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_3e9ce280f631a423(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_3165d91b6d85f50f(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_ff15b40961059ad1(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_d40bc8a5de1313c3(pls::cs::Ref<cs_66eb7014769dfe80> cs_this);

std::int32_t cs_86b2e1b03710100b(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,std::int32_t v_type,std::int32_t v_index);

bool cs_8bf79fa12ce81995(pls::cs::Ref<cs_66eb7014769dfe80> cs_this);

bool cs_5458cbea2e5cbe26(pls::cs::Ref<cs_66eb7014769dfe80> cs_this);

void cs_25706b4a1c777ca4(pls::cs::Ref<cs_66eb7014769dfe80> cs_this,std::int32_t v_type,std::int32_t v_value);

bool cs_950759a7fe6bb7b6(pls::cs::Ref<cs_66eb7014769dfe80> cs_this);

bool cs_3f04c63c04aac77c(pls::cs::Ref<cs_66eb7014769dfe80> cs_this);

bool cs_728a7893da121244(pls::cs::Ref<cs_66eb7014769dfe80> cs_this);

bool cs_586e8f06bb3bc603(pls::cs::Ref<cs_66eb7014769dfe80> cs_this);

void cs_5c355f18e945c4f7(pls::cs::Ref<cs_66eb7014769dfe80> cs_this);
}
