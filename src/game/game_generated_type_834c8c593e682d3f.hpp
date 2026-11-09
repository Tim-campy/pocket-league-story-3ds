// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_834c8c593e682d3f : cs_5451b2154f09f4c5 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_834c8c593e682d3f)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:form.RankForm.ToString";if(slot=="Init")return "M:form.RankForm.Init";if(slot=="Update")return "M:form.RankForm.Update";if(slot=="Draw")return "M:form.RankForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Resume")return "M:form.RankForm.Resume";if(slot=="Finish")return "M:form.RankForm.Finish";if(slot=="GetTouchValue")return "M:form.RankForm.GetTouchValue(System.Int32,System.Int32)";if(slot=="SetTouchValue")return "M:form.RankForm.SetTouchValue(System.Int32,System.Int32)";if(slot=="GetHashCode")return "M:form.RankForm.GetHashCode";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "form.RankForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
std::int32_t cs_c055bfbe1ac2f554{};
std::int32_t cs_2581a7e6009bd9b6{};
std::int32_t cs_ece80ff931788b9c{};
std::int32_t cs_d9bec971965399ca{};
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> cs_5b89dc10215c3470{};
std::int32_t cs_ca0d47b3cd292341{};
pls::cs::Ref<cs_b728593e3dcffe31> cs_7122a25d76f90581{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual bool Update();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Resume();
virtual bool Finish();
virtual std::int32_t GetTouchValue(std::int32_t v_type,std::int32_t v_index);
virtual void SetTouchValue(std::int32_t v_type,std::int32_t v_value);
virtual std::int32_t GetHashCode();
};

void cs_init_834c8c593e682d3f();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_96890a1370dfa5a5();

void cs_43df0061ad8370e4(pls::cs::Ref<cs_834c8c593e682d3f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Ref<cs_834c8c593e682d3f> cs_6b785705076d0599();

void cs_6b785705076d0599_init(pls::cs::Ref<cs_834c8c593e682d3f> cs_this);

void cs_d9266d0e56282574(pls::cs::Ref<cs_834c8c593e682d3f> cs_this,std::int32_t v_state);

void cs_660d7ba4c4c68b54(pls::cs::Ref<cs_834c8c593e682d3f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_93c486009381ff04(pls::cs::Ref<cs_834c8c593e682d3f> cs_this);

std::int32_t cs_dfc26b43dd564060(pls::cs::Ref<cs_834c8c593e682d3f> cs_this);

std::int32_t cs_7e79fe9d6b3a0ee0(pls::cs::Ref<cs_834c8c593e682d3f> cs_this,std::int32_t v_type,std::int32_t v_index);

bool cs_9ee887a59d97f3f5(pls::cs::Ref<cs_834c8c593e682d3f> cs_this);

bool cs_707d993c797a341d(pls::cs::Ref<cs_834c8c593e682d3f> cs_this);

void cs_41a080d5c8269bab(pls::cs::Ref<cs_834c8c593e682d3f> cs_this);

void cs_baa0bbbca4f4ad6b(pls::cs::Ref<cs_834c8c593e682d3f> cs_this,std::int32_t v_type,std::int32_t v_value);

pls::cs::String cs_3eb04e00e91bbe03(pls::cs::Ref<cs_834c8c593e682d3f> cs_this);

bool cs_124cf63141f56075(pls::cs::Ref<cs_834c8c593e682d3f> cs_this);
}
