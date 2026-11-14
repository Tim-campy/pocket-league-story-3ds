// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_2d2e25a6914f7709.hpp"
namespace pls::game {

struct cs_ec8ac507fb495e84 : cs_2d2e25a6914f7709 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_ec8ac507fb495e84)||target==typeid(cs_2d2e25a6914f7709)||cs_2d2e25a6914f7709::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_9401fb4f0ec784c5")return "M:system.friend.MyFriend.PlayBonus(System.Int32)";if(slot=="cs_virtual_d865bbafdeb43983")return "M:system.friend.MyFriend.CgiGetFriendList";return cs_2d2e25a6914f7709::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.friend.MyFriend";}
std::string managed_type_name()const override{return source_managed_type_name();}
virtual void cs_virtual_9401fb4f0ec784c5(std::int32_t v_value);
virtual pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_virtual_d865bbafdeb43983();
};

void cs_init_ec8ac507fb495e84();

pls::cs::Ref<cs_ec8ac507fb495e84> cs_f0504e3d15ead28a();

void cs_f0504e3d15ead28a_init(pls::cs::Ref<cs_ec8ac507fb495e84> cs_this);

pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_c5779f8fec16f545(pls::cs::Ref<cs_ec8ac507fb495e84> cs_this);

pls::cs::Ref<cs_ec8ac507fb495e84> cs_b3ac47ebcf5c05fb();

void cs_c9feed9f197e9812(pls::cs::Ref<cs_ec8ac507fb495e84> cs_this,std::int32_t v_value);
}
