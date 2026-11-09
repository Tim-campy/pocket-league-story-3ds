// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_d01bf6d528df5d3e : cs_5451b2154f09f4c5 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_d01bf6d528df5d3e)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:system.form.LineupForm.ToString";if(slot=="Init")return "M:system.form.LineupForm.Init";if(slot=="Draw")return "M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Finish")return "M:system.form.LineupForm.Finish";if(slot=="Resume")return "M:system.form.LineupForm.Resume";if(slot=="Update")return "M:system.form.LineupForm.Update";if(slot=="GetTouchValue")return "M:system.form.LineupForm.GetTouchValue(System.Int32,System.Int32)";if(slot=="SetTouchValue")return "M:system.form.LineupForm.SetTouchValue(System.Int32,System.Int32)";if(slot=="CheckMainWindow")return "M:system.form.LineupForm.CheckMainWindow";if(slot=="GetHashCode")return "M:system.form.LineupForm.GetHashCode";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.form.LineupForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_dc1c42d4d7e082e0{};
std::int32_t cs_e5f85072dd4bae90{};
std::int32_t cs_b8a6cd3430fb5981{};
std::int32_t cs_3a238febfe0fec26{};
pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>> cs_abcd3f40ba2c255e{};
pls::cs::Ref<cs_87fb4d668ea5580b> cs_5d81c03afa7f452c{};
pls::cs::Array<std::int32_t> cs_5145f5183f9e37e4{};
bool cs_e13125ff785351a8{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Finish();
virtual bool Resume();
virtual bool Update();
virtual std::int32_t GetTouchValue(std::int32_t v_type,std::int32_t v_index);
virtual void SetTouchValue(std::int32_t v_type,std::int32_t v_value);
virtual bool CheckMainWindow();
virtual std::int32_t GetHashCode();
};

void cs_init_d01bf6d528df5d3e();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_4ed30b03deb528a2();

pls::cs::Ref<cs_b728593e3dcffe31>& cs_a251c18c9d0f913d();

pls::cs::Ref<cs_d01bf6d528df5d3e> cs_54b9e88b29d65e8e();

void cs_54b9e88b29d65e8e_init(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this);

pls::cs::Ref<cs_d01bf6d528df5d3e> cs_bde331d144b7e233(std::int32_t v_type);

void cs_bde331d144b7e233_init(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,std::int32_t v_type);

bool cs_3ce550173a351902(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this);

void cs_bcecdee954fd1704(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Array<std::int32_t> cs_1445009bb757ae06(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor);

bool cs_4cbf34065e9c29cc(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this);

std::int32_t cs_424cc8dfa482f7f5(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this);

std::int32_t cs_f2e4ff8d5073c2eb(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,std::int32_t v_type,std::int32_t v_index);

bool cs_fd09666c1ad0b529(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this);

bool cs_2a2e46575659084c(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this);

void cs_a6e481b168e6fc62(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this);

void cs_784b75a2e8fe91ae(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,std::int32_t v_type,std::int32_t v_value);

pls::cs::String cs_83e48a5feada74ed(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this);

bool cs_6ee8d12c93887b93(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this);
}
