// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
#include "game_generated_type_b489b0d33bb37bb8.hpp"
namespace pls::game {

struct cs_925b3cf054e42b78 : cs_b489b0d33bb37bb8 {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_925b3cf054e42b78)||target==typeid(cs_b489b0d33bb37bb8)||cs_b489b0d33bb37bb8::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{if(slot=="cs_virtual_7a0d5be4ca3b1254")return "M:system.KairoService.OnInit";if(slot=="cs_virtual_51f84c16de790570")return "M:system.KairoService.OnStart";if(slot=="cs_virtual_a6a3a2dac688088b")return "M:system.KairoService.Connected(System.String,System.Byte[],System.Boolean)";if(slot=="cs_virtual_9ca5e184bd541bee")return "M:system.KairoService.Update";if(slot=="cs_virtual_706bcbd9776cf6ef")return "M:system.KairoService.Finish";if(slot=="cs_virtual_4e3c4bf49c24e27d")return "M:system.KairoService.OnLoad(java.io.InputStream)";if(slot=="cs_virtual_e634eb1896b92689")return "M:system.KairoService.OnWrite(java.io.OutputStream)";if(slot=="cs_virtual_7ebfee2a92c0d37e")return "M:system.KairoService.OnNewGame(System.Boolean)";if(slot=="cs_virtual_10a01b9d900fa6c0")return "M:system.KairoService.OnLoadGame(java.io.InputStream)";if(slot=="cs_virtual_9a7c0378d22d6bd5")return "M:system.KairoService.OnWriteGame(java.io.OutputStream)";if(slot=="cs_virtual_3481915358ac0fff")return "M:system.KairoService.Save";if(slot=="cs_virtual_06f3c8d943914943")return "M:system.KairoService.SaveAll";return cs_b489b0d33bb37bb8::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "system.KairoService";}
std::string managed_type_name()const override{return source_managed_type_name();}
pls::cs::Ref<cs_89c0d586cfe20341> cs_0f9909df8253bfe0{};
bool cs_42ee6ef0eb7e8761{};
std::int32_t cs_25150d256e75d102{};
virtual void cs_virtual_7a0d5be4ca3b1254();
virtual void cs_virtual_51f84c16de790570();
virtual void cs_virtual_a6a3a2dac688088b(pls::cs::String v_cgi,pls::cs::Array<std::uint8_t> v_send,bool v_split);
virtual void cs_virtual_9ca5e184bd541bee();
virtual void cs_virtual_706bcbd9776cf6ef();
virtual void cs_virtual_4e3c4bf49c24e27d(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);
virtual void cs_virtual_e634eb1896b92689(pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
virtual void cs_virtual_7ebfee2a92c0d37e(bool v_take);
virtual void cs_virtual_10a01b9d900fa6c0(pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);
virtual void cs_virtual_9a7c0378d22d6bd5(pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);
virtual void cs_virtual_3481915358ac0fff();
virtual void cs_virtual_06f3c8d943914943();
};

void cs_init_925b3cf054e42b78();

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_79b2a93539dda8c5();

pls::cs::Ref<cs_08829eb6a4df2a40>& cs_4fd143d9a5ab23f5();

pls::cs::Ref<cs_ec8ac507fb495e84>& cs_1cc9a669b732975f();

pls::cs::Ref<cs_e00832a42e12ec3b>& cs_859633da82a2fd50();

pls::cs::Ref<cs_925b3cf054e42b78> cs_f6c1ebd73ba5dcdc();

void cs_f6c1ebd73ba5dcdc_init(pls::cs::Ref<cs_925b3cf054e42b78> cs_this);

void cs_15b3a4a01f584c1b(pls::cs::Ref<cs_925b3cf054e42b78> cs_this);

pls::cs::Ref<cs_925b3cf054e42b78> cs_fd047093624d8d65();

void cs_6e4860eac11a2eaf(pls::cs::Ref<cs_925b3cf054e42b78> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream);

void cs_ee25274aa8cb5d52(pls::cs::Ref<cs_925b3cf054e42b78> cs_this,bool v_take);

void cs_aae6871b403a2662(pls::cs::Ref<cs_925b3cf054e42b78> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_5ebe1d2502f4ce47(pls::cs::Ref<cs_925b3cf054e42b78> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os);

void cs_9006c280cca35190(pls::cs::Ref<cs_925b3cf054e42b78> cs_this);

void cs_87141379d7c66315(pls::cs::Ref<cs_925b3cf054e42b78> cs_this);

void cs_5e6fee4146930115(pls::cs::Ref<cs_925b3cf054e42b78> cs_this);
}
