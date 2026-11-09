// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_0db347231f2257f9 : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_0db347231f2257f9)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "game.GameManager";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_34f95d58f5f1c65f{};
std::int32_t cs_83d4b011c7ebc237{};
std::int32_t cs_1524127138638669{};
std::int32_t cs_883bebcb298048c3{};
std::int32_t cs_6926754a1a83e222{};
std::int32_t cs_c8e314936ee51a94{};
float cs_58d7e662a8984856{};
pls::cs::Array<std::int32_t> cs_759d3fbb8e1c6be6{};
pls::cs::Array<std::int32_t> cs_1dc6ad81a01b35ba{};
bool cs_8421e12383d7afde{};
std::int32_t cs_021cc3c760e47efd{};
pls::cs::Array<std::int32_t> cs_4f89237a08ace829{};
pls::cs::Array<std::int32_t> cs_eb6d32a37734e0cd{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_d335011b49781d59{};
std::int32_t cs_1312b220b70932da{};
std::int32_t cs_69fe7c467840f06e{};
std::int32_t cs_36e9be91d6af4534{};
std::int32_t cs_fc321302552f8da9{};
};

void cs_init_0db347231f2257f9();

float& cs_3b50dc05f8cda6a0();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_b09ed8c04aa52945();

pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f>& cs_306a90f62e6a5769();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_7046400e80c950c9();

pls::cs::Array<pls::cs::String>& cs_61dda273944cdd61();

std::int32_t& cs_56f018c4e52d3584();

pls::cs::Ref<cs_0db347231f2257f9>& cs_408d1d9bcb645a59();

pls::cs::Ref<cs_75707aa3f1629c85>& cs_86191fb165bd74e6();

pls::cs::Array<std::int32_t>& cs_5f3f96cf46cbc47d();

pls::cs::Array<std::int32_t>& cs_6aa7bf7445947442();

pls::cs::Array<std::int32_t>& cs_ac4fa7e44314cfa3();

pls::cs::Array<std::int32_t>& cs_0e20806db5c3305e();

pls::cs::Array<std::int32_t>& cs_6cae9cacf677a17f();

pls::cs::Ref<cs_0db347231f2257f9> cs_af08075d2d2d0bdc();

void cs_af08075d2d2d0bdc_init(pls::cs::Ref<cs_0db347231f2257f9> cs_this);

void cs_44432181dfb363fa(pls::cs::Ref<cs_0db347231f2257f9> cs_this,std::int32_t v_next_state);

void cs_1f29a756029e9713(pls::cs::Ref<cs_0db347231f2257f9> cs_this,std::int32_t v_next_state);

void cs_48d36895375979fd(pls::cs::Ref<cs_0db347231f2257f9> cs_this,pls::cs::Ref<cs_2ef6641b828546ac> v_p1,pls::cs::Ref<cs_2ef6641b828546ac> v_p2);

void cs_aee392a1a6d1e4ee(pls::cs::Ref<cs_0db347231f2257f9> cs_this,pls::cs::Ref<cs_2ef6641b828546ac> v_player);

void cs_b87c854d982c64d4(pls::cs::Ref<cs_0db347231f2257f9> cs_this,pls::cs::Ref<cs_2ef6641b828546ac> v_player);

void cs_d7f88568664fe4ad(pls::cs::Ref<cs_0db347231f2257f9> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_oy,std::int32_t v_W,std::int32_t v_index,std::int32_t v_centerX);

void cs_b99afcfcb25f3390(pls::cs::Ref<cs_0db347231f2257f9> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Ref<cs_0db347231f2257f9> cs_518d0abdf0ba15ec();

void cs_996340e06b5074af(pls::cs::Ref<cs_0db347231f2257f9> cs_this,std::int32_t v_team_id);

void cs_5817029d3644d381(pls::cs::Ref<cs_0db347231f2257f9> cs_this,std::int32_t v_tId1,std::int32_t v_tId2,std::int32_t v_homeAway);

void cs_7479e4a7fa536c77(pls::cs::Ref<cs_0db347231f2257f9> cs_this,bool v_isUserBattle);

void cs_f3066f6606fa256c(pls::cs::Ref<cs_0db347231f2257f9> cs_this);

void cs_9cb4cbf4f96249f8(pls::cs::Ref<cs_0db347231f2257f9> cs_this);

void cs_547781f5a9ed86aa(pls::cs::Ref<cs_0db347231f2257f9> cs_this);

void cs_1f7ac88c9cef5cf5(pls::cs::Ref<cs_0db347231f2257f9> cs_this);
}
