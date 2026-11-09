// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {

struct cs_1815a6964debf82a : pls::cs::Object {
static bool source_reference_assignable(const std::type_info&target){return target==typeid(cs_1815a6964debf82a)||target==typeid(pls::cs::Object)||pls::cs::Object::source_reference_assignable(target);}
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
void release_edges()override;
std::string managed_delegate_method_id(const std::string&slot)const override{return pls::cs::Object::managed_delegate_method_id(slot);}
static std::string source_managed_type_name(){return "game.GameUtil";}
std::string managed_type_name()const override{return source_managed_type_name();}
};

void cs_init_1815a6964debf82a();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_1c31fe45df80f4b5();

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_5204a88dda76acde();

std::int32_t& cs_2d25254bef3155c0();

std::int32_t& cs_78945d8f8b96607d();

std::int32_t& cs_bc9db9ca02d28789();

float& cs_77a3b5c6eafc0a36();

float& cs_fb25b237830632f3();

float& cs_98de7f371d3bbf79();

float& cs_1552fe1fe2b3df6f();

float& cs_8506593809629a79();

float& cs_2c0befec187062ff();

pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd>& cs_374c9d6158f5ebec();

pls::cs::Array<float>& cs_9a7c211135939d32();

pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>& cs_88715b48e2db5a90();

pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>& cs_1cd51cefa82814c0();

pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f>& cs_8fa89d8624a60727();

pls::cs::Array<std::int32_t>& cs_c06d9a82d58db3c1();

pls::cs::Array<std::int32_t>& cs_73dd1fbd29cab95d();

pls::cs::Ref<cs_1815a6964debf82a> cs_8583931b461c8c9c();

void cs_8583931b461c8c9c_init(pls::cs::Ref<cs_1815a6964debf82a> cs_this);

float cs_658ac0f2f5e5e571(pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_a,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_b);

std::int32_t cs_16b2883c5a37922e(std::int32_t v_value,std::int32_t v_rand_min,std::int32_t v_rand_max,std::int32_t v_ret_min,std::int32_t v_ret_max);

pls::cs::Array<std::int32_t> cs_394ffd1d9bf8d568(pls::cs::Ref<cs_1815a6964debf82a> cs_this,std::int64_t v_x1,std::int64_t v_y1,std::int64_t v_x2,std::int64_t v_y2,std::int64_t v_x3,std::int64_t v_y3,std::int32_t v_t,pls::cs::Array<std::int32_t> v_result);

bool cs_fb6ab8574bba70c4(pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_a1,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_a2,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_b1,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_b2);

bool cs_85f3f2bca0d0eefc(pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_p1,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_p2,float v_h,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_target_pos);

bool cs_5ca529c0c05eff8a(pls::cs::Array<std::int32_t> v_p1,pls::cs::Array<std::int32_t> v_p2,std::int32_t v_h,pls::cs::Array<std::int32_t> v_target_pos);

bool cs_586ebb76ce4869d2(std::int32_t v_leftTopX,std::int32_t v_leftTopY,std::int32_t v_w,std::int32_t v_h,std::int32_t v_p1X,std::int32_t v_p1Y,std::int32_t v_p2X,std::int32_t v_p2Y);

bool cs_21fc4c74739d0ba4(std::int32_t v_x1,std::int32_t v_y1,std::int32_t v_w1,std::int32_t v_h1,std::int32_t v_x2,std::int32_t v_y2,std::int32_t v_w2,std::int32_t v_h2,bool v_directUp);

bool cs_75873ce2f7c043dd(float v_x1,float v_y1,float v_w1,float v_h1,float v_x2,float v_y2,float v_w2,float v_h2,bool v_directUp);

std::int32_t cs_1d87b2ef6fcd40f8(std::int32_t v_val,std::int32_t v_min,std::int32_t v_max);

std::int64_t cs_72e3f5317968dc6b(std::int64_t v_val,std::int64_t v_min,std::int64_t v_max);

std::int32_t cs_24a51f6f0c9996ec(std::int32_t v_val,std::int32_t v_max);

std::int64_t cs_d196085d96457744(std::int64_t v_val,std::int64_t v_max);

std::int32_t cs_103d6f43ac64b2cb(std::int32_t v_val,std::int32_t v_min);

std::int64_t cs_e1b3e8406a3d6c53(std::int64_t v_val,std::int64_t v_min);

float cs_18520eaca65216fc(float v_time,std::int32_t v_TIME,float v_DIS);

std::int32_t cs_79db2cc1c025efba(std::int32_t v_param);

std::int32_t cs_87142f5f73d6ca0f(std::int32_t v_input_key);

float cs_a60c3c6b906d0485(std::int32_t v_angle);

float cs_5c6b7744822894b9(pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_a,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_b);

float cs_559b14f7aca1f887(pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_a,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_b);

float cs_0e66a3fb3e9b4ab9(float v_v0,float v_DIS,std::int32_t v_TIME);

pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_010b93f5baed27bc(pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_a1,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_a2,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_b1,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_b2);

pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> cs_ed314aba2654320c(pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_a,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_b,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_c,bool v_limit);

float cs_ebeb72a74a004d3c(pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_a,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_b,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_c);

std::int32_t cs_3438b9bc3910dd17(pls::cs::Ref<cs_1815a6964debf82a> cs_this,std::int32_t v_x,std::int32_t v_y);

std::int32_t cs_fd17a5b5e4e50b65(std::int32_t v_n);

float cs_d2f6b297c0ad38b7(float v_a2,float v_b2,float v_X);

float cs_b3927d80351b365e(float v_a2,float v_b2,float v_X);

std::int32_t cs_c2e72dbaa2066493(std::int32_t v_x,std::int32_t v_c1min,std::int32_t v_c1max,std::int32_t v_c2min,std::int32_t v_c2max,bool v_ch_limit);

std::int64_t cs_185119d0d957c3fe(std::int64_t v_x,std::int64_t v_c1min,std::int64_t v_c1max,std::int64_t v_c2min,std::int64_t v_c2max,bool v_ch_limit);

float cs_85c9153b9c99cccf(float v_x,float v_c1min,float v_c1max,float v_c2min,float v_c2max,bool v_ch_limit);

std::int32_t cs_c054175086776870(std::int32_t v_x,std::int32_t v_c1min,std::int32_t v_c1max,std::int32_t v_c2min,std::int32_t v_c2max,bool v_ch_limit);

float cs_9f0960c271522c41(float v_decre_rate,float v_DIS,std::int32_t v_TIME);

float cs_89a133957f8a0d73(float v_dis,std::int32_t v_t1,std::int32_t v_t2);

float cs_1965ccf3371ee516(float v_dis,std::int32_t v_t);

float cs_546689cbdcc8fcf7(float v_dis,std::int32_t v_t);

float cs_9121a39b84b94c04(float v_dis,std::int32_t v_t);

float cs_a1ce3ea5baeda644(float v_a,float v_DIS,std::int32_t v_TIME);

float cs_2ea0426bda01fed3(float v_decre_rate,float v_DIS,std::int32_t v_TIME);

float cs_67a59e186f15c614(float v_dis,std::int32_t v_t);

float cs_07c786b53599514c(float v_dis,std::int32_t v_t);

float cs_be0d65b78fe6ce35(float v_dis,std::int32_t v_t);

float cs_273cfc0690f640dc(std::int32_t v_angle);

void cs_08c8222d7017b866(pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_a,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_b,pls::cs::Ref<pls::generated::cs_3c64e1d398f2e00f> v_var_out);
}
