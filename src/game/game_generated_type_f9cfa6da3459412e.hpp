// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_4a8bef2ab48b32d7.hpp"
namespace pls::game {

struct cs_f9cfa6da3459412e : cs_4a8bef2ab48b32d7 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_f9cfa6da3459412e)||target==typeid(cs_4a8bef2ab48b32d7)||cs_4a8bef2ab48b32d7::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_d58c9861d84c3c7d")return "M:surface.SurfaceManager.AdjustSurfaceLayout";if(slot=="cs_virtual_a4fa9c8087597dcf")return "M:surface.SurfaceManager.Draw(kairo.unity.ui.Graphics)";if(slot=="cs_virtual_fb350f55fa7620cd")return "M:surface.SurfaceManager.DrawComponents(kairo.unity.ui.Graphics)";return cs_4a8bef2ab48b32d7::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "surface.SurfaceManager";}
std::string managed_type_name()const override{return source_managed_type_name();}
bool cs_c10c93ba981d563f{};
bool cs_125a8b7955aca1e0{};
virtual void cs_virtual_d58c9861d84c3c7d();
virtual void cs_virtual_a4fa9c8087597dcf(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual void cs_virtual_fb350f55fa7620cd(pls::cs::Ref<pls::kairo::Graphics> v_g);
};

void cs_init_f9cfa6da3459412e();

pls::cs::Ref<cs_af32d28251411c95>& cs_72947298469bea4a();

pls::cs::Ref<cs_792a6372766eb19f>& cs_a68df2bae0e22f44();

pls::cs::Ref<cs_f9cfa6da3459412e>& cs_60a3266700f223ca();

pls::cs::Ref<cs_e315dac1df3b175d>& cs_2c0cde3e5aa1e969();

pls::cs::Ref<cs_f9cfa6da3459412e> cs_eaf2a1260918d30d();

void cs_eaf2a1260918d30d_init(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this);

void cs_19ab8dcddc66e785(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this);

void cs_087077460d9ea2a3(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_ae992fe0dbd4a316(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_da79ce6532ce348b(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this);

void cs_82be5e968b3bd7e2(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this,bool v_enable);

void cs_969e6cb0fe9187f1();

void cs_63c6ef254e4171fe(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this);
}
