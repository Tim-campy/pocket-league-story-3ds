// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
namespace pls::game {

struct cs_e31f80000513fe82 : cs_5451b2154f09f4c5 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_e31f80000513fe82)||target==typeid(cs_5451b2154f09f4c5)||cs_5451b2154f09f4c5::source_reference_assignable(target)||target==typeid(pls::kairo::TouchValueAccessor);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="ToString")return "M:form.TitleForm.ToString";if(slot=="Init")return "M:form.TitleForm.Init";if(slot=="Update")return "M:form.TitleForm.Update";if(slot=="Draw")return "M:form.TitleForm.Draw(kairo.unity.ui.Graphics)";if(slot=="Resume")return "M:form.TitleForm.Resume";if(slot=="Finish")return "M:form.TitleForm.Finish";if(slot=="SetTouchValue")return "M:form.TitleForm.SetTouchValue(System.Int32,System.Int32)";if(slot=="cs_virtual_7a6109cc91f876a5")return "M:form.TitleForm.OnTouchEvent(kairo.unity.surface.TouchEvent)";if(slot=="GetHashCode")return "M:form.TitleForm.GetHashCode";return cs_5451b2154f09f4c5::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "form.TitleForm";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_75707aa3f1629c85> cs_e2f93699d5fc382a{};
pls::cs::Ref<cs_b728593e3dcffe31> cs_3614cab7b10844e2{};
std::int32_t cs_34bc416d11d23a29{};
std::int32_t cs_86fa2684765ba195{};
std::int32_t cs_3bb10a543cbf142a{};
std::int32_t cs_4be6bbef52ddf0a0{};
std::int32_t cs_4b55d08c5a56b0b4{};
bool cs_77732925cd82cc52{};
std::int32_t cs_8acf09e512a322c5{};
std::int32_t cs_4b64c8f20ce88a5a{};
std::int32_t cs_2e0e13bd94dec371{};
pls::cs::String cs_bbd6dfbf06e5ad6a{};
std::int32_t cs_e95fbfcc1063a69f{};
std::int32_t cs_5e1ca41b2a953c14{};
std::int32_t cs_3984e4c8f4f19f3d{};
std::int32_t cs_1cd084998e540d5f{};
std::int32_t cs_47a70b982a4eea72{};
pls::cs::Array<std::int64_t> cs_f02219d6cab138b7{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_405ba57fedfb60a1{};
std::int32_t cs_b2735744704688be{};
std::int32_t cs_f5adf891dffd9a52{};
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_65150812641ab691{};
std::int32_t cs_28f9f42650cb29c2{};
virtual pls::cs::String ToString();
virtual bool Init();
virtual bool Update();
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> v_g);
virtual bool Resume();
virtual bool Finish();
virtual void SetTouchValue(std::int32_t v_type,std::int32_t v_value);
virtual bool cs_virtual_7a6109cc91f876a5(pls::cs::Ref<cs_757516ce190cf813> v_e);
virtual std::int32_t GetHashCode();
};

void cs_init_e31f80000513fe82();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_d4ff56b8a669fa1e();

pls::cs::String& cs_b4a1399d56549146();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_2c2c9340e0b3b5f6();

pls::cs::Array<std::int32_t>& cs_bae0556627c95732();

pls::cs::Array<std::int32_t>& cs_9a8870cc1d3fd09f();

void cs_997c4d85b05dc754(pls::cs::Ref<cs_e31f80000513fe82> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::Ref<cs_e31f80000513fe82> cs_046213c85d73180d();

void cs_046213c85d73180d_init(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

void cs_cc59c9ba70203da7(pls::cs::Ref<cs_e31f80000513fe82> cs_this,std::int32_t v_state);

void cs_bbf69fc8a7b83004(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

void cs_14a3d94757fadd38(pls::cs::Ref<cs_e31f80000513fe82> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

void cs_5d2fbec875d6b0cf(pls::cs::Ref<cs_e31f80000513fe82> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

bool cs_98e3505e1c38b93d(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

std::int32_t cs_a369b9c98e9b81ec(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

bool cs_ab52e5cd05fa2edb(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

void cs_af128fbb0fee219f(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

void cs_3695a5db00b0c6e7(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

bool cs_a3bbb54f7183a8b3(pls::cs::Ref<cs_e31f80000513fe82> cs_this,pls::cs::Ref<cs_757516ce190cf813> v_e);

void cs_f7b5dc5945c49025(pls::cs::Ref<cs_e31f80000513fe82> cs_this,std::int32_t v_index);

bool cs_157441e08e263633(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

void cs_0d8688313d58fbfb(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

void cs_baa82dca182cb994(pls::cs::Ref<cs_e31f80000513fe82> cs_this,std::int32_t v_type,std::int32_t v_value);

void cs_d1808deb025fbd5a(pls::cs::Ref<cs_e31f80000513fe82> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g);

pls::cs::String cs_c27882f05e0eaec9(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

bool cs_5326b92cc796829d(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

void cs_17b223e3f49ace02(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

void cs_3f93eb8cbc4c0c54(pls::cs::Ref<cs_e31f80000513fe82> cs_this);

void cs_a50549fcee852844(pls::cs::Ref<cs_e31f80000513fe82> cs_this,std::int32_t v_addClickNum);
}
