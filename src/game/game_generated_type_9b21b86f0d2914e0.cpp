// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_9b21b86f0d2914e0.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
namespace pls::game {

void cs_9b21b86f0d2914e0::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_d5047348b0759e4e,visitor);pls::cs::trace_value(cs_104e5f6a41bc31a2,visitor);pls::cs::trace_value(cs_4f23ff2646eb23aa,visitor);pls::cs::trace_value(cs_287f9edf5a6fc99a,visitor);pls::cs::trace_value(cs_85d4a94d45c5d889,visitor);pls::cs::trace_value(cs_b766893b7bb434f0,visitor);pls::cs::trace_value(cs_95b7593873c71ecc,visitor);pls::cs::trace_value(cs_b9b3024a4bbf4537,visitor);pls::cs::trace_value(cs_4f16085a44631993,visitor);pls::cs::trace_value(cs_579f8976161c3a90,visitor);pls::cs::trace_value(cs_46524ed757f195c3,visitor);pls::cs::trace_value(cs_f9be90c450193aae,visitor);}

void cs_9b21b86f0d2914e0::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_d5047348b0759e4e);pls::cs::release_value(cs_104e5f6a41bc31a2);pls::cs::release_value(cs_4f23ff2646eb23aa);pls::cs::release_value(cs_287f9edf5a6fc99a);pls::cs::release_value(cs_85d4a94d45c5d889);pls::cs::release_value(cs_b766893b7bb434f0);pls::cs::release_value(cs_95b7593873c71ecc);pls::cs::release_value(cs_b9b3024a4bbf4537);pls::cs::release_value(cs_4f16085a44631993);pls::cs::release_value(cs_579f8976161c3a90);pls::cs::release_value(cs_46524ed757f195c3);pls::cs::release_value(cs_f9be90c450193aae);}

void cs_init_9b21b86f0d2914e0(){static pls::cs::TypeInitState state;state.run("surface.TouchEffect",[](){

});}

// M:surface.TouchEffect.#ctor
pls::cs::Ref<cs_9b21b86f0d2914e0> cs_2a1179e902640c2a() { cs_init_9b21b86f0d2914e0();
{ auto cs_this = pls::cs::make_ref<cs_9b21b86f0d2914e0>(); cs_2a1179e902640c2a_init(cs_this); return cs_this; }
}

void cs_2a1179e902640c2a_init(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffect.#ctor",game);
{}
}
}

// M:surface.TouchEffect.Draw(kairo.unity.ui.Graphics)
void cs_fb03a4148f6cc986(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_9b21b86f0d2914e0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffect.Draw(kairo.unity.ui.Graphics)",game);
{
float v_num_1767 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }());
std::int32_t v_num2_1813 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b9b3024a4bbf4537; }()); return pls::cs::sub_i64(cs_left,cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); return pls::cs::div_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> v_array_1904 = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_46524ed757f195c3; }()));
pls::cs::Ref<pls::kairo::Image> v_image_1938 = pls::cs::unbox<pls::cs::Ref<pls::kairo::Image>>(([&]() { auto cs_array = v_array_1904; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()));
pls::cs::Array<float> v_array2_1975 = pls::cs::unbox<pls::cs::Array<float>>(([&]() { auto cs_array = v_array_1904; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()));
std::int32_t v_num3_2011 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa0ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); auto cs_right = v_num2_1813; return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num3_2011; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left <= cs_right); }())) {
return;
}
float v_num4_2072 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x40200000u); auto cs_right = static_cast<float>(v_num2_1813); return (cs_left * cs_right); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
float v_num5_2111 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x40200000u); auto cs_right = static_cast<float>(v_num2_1813); return (cs_left * cs_right); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
float v_dx_2150 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_104e5f6a41bc31a2; }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num4_2072; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }());
float v_dy_2208 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5047348b0759e4e; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4f23ff2646eb23aa; }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = v_num5_2111; auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }());
float v_num6_2266 = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
float v_num7_2296 = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num_1767; return (cs_left * cs_right); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = v_num3_2011; std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); auto cs_right = v_num3_2011; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = v_image_1938; float cs_arg1 = v_dx_2150; float cs_arg2 = v_dy_2208; float cs_arg3 = ([&]() -> float { auto cs_left = v_num6_2266; auto cs_right = v_num4_2072; return (cs_left + cs_right); }()); float cs_arg4 = ([&]() -> float { auto cs_left = v_num7_2296; auto cs_right = v_num5_2111; return (cs_left + cs_right); }()); std::int32_t cs_arg5 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg6 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg7 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); std::int32_t cs_arg8 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() { auto cs_array = v_array2_1975; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::game::cs_f32(0x3f000000u); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetRenderMode(cs_arg0,cs_arg1,cs_arg2); }());});
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {

} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_579f8976161c3a90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }())) {

}
}
}
}
}

// M:surface.TouchEffect.Frame
bool cs_2b7db73fe142457a(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this) { cs_init_9b21b86f0d2914e0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffect.Frame",game);
{
std::int32_t v_num_1079 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull));
std::int32_t v_num2_1095 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b9b3024a4bbf4537; }()); return pls::cs::sub_i64(cs_left,cs_right); }()))); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); return pls::cs::div_i32(cs_left,cs_right); }());
if (([&]() -> bool { auto cs_left = v_num2_1095; auto cs_right = v_num_1079; return (cs_left >= cs_right); }())) {
return true;
}
double v_num3_1208 = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_287f9edf5a6fc99a; }()));
double v_num4_1230 = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_85d4a94d45c5d889; }()));
double v_num5_1252 = ([&]() -> double { auto cs_left = static_cast<double>((([&]() -> std::int64_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f9be90c450193aae; }()); return pls::cs::sub_i64(cs_left,cs_right); }()))); auto cs_right = pls::game::cs_f64(0x408f400000000000ull); return (cs_left / cs_right); }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_104e5f6a41bc31a2; auto cs_rhs = static_cast<float>((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_287f9edf5a6fc99a; }())); auto cs_right = v_num5_1252; return (cs_left * cs_right); }()))); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_104e5f6a41bc31a2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_4f23ff2646eb23aa; auto cs_rhs = static_cast<float>((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_85d4a94d45c5d889; }())); auto cs_right = v_num5_1252; return (cs_left * cs_right); }()))); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_4f23ff2646eb23aa = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a; auto cs_rhs = static_cast<float>((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b766893b7bb434f0; }())); auto cs_right = v_num5_1252; return (cs_left * cs_right); }()))); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889; auto cs_rhs = static_cast<float>((([&]() -> double { auto cs_left = static_cast<double>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_95b7593873c71ecc; }())); auto cs_right = v_num5_1252; return (cs_left * cs_right); }()))); auto cs_value = (cs_old + cs_rhs); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }());
if ((((([&]() -> bool { auto cs_left = v_num3_1208; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_287f9edf5a6fc99a; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left < cs_right); }()))) || ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_287f9edf5a6fc99a; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num3_1208; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
}
if ((((([&]() -> bool { auto cs_left = v_num4_1230; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_85d4a94d45c5d889; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left < cs_right); }()))) || ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_85d4a94d45c5d889; }()); auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left >= cs_right); }()) && ([&]() -> bool { auto cs_left = v_num4_1230; auto cs_right = pls::game::cs_f64(0x0000000000000000ull); return (cs_left < cs_right); }()))))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); pls::game::cs_require(cs_target)->cs_f9be90c450193aae = cs_value; return cs_value; }());
return false;
}
}
}
}

// M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)
void cs_5e534500fa7e2dfa(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component,pls::cs::Ref<pls::cs::Object> v_arg) { cs_init_9b21b86f0d2914e0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_surface; pls::game::cs_require(cs_target)->cs_d5047348b0759e4e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_id; pls::game::cs_require(cs_target)->cs_579f8976161c3a90 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::game::cs_require(cs_target)->cs_104e5f6a41bc31a2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::game::cs_require(cs_target)->cs_4f23ff2646eb23aa = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());}); pls::game::cs_require(cs_target)->cs_f9be90c450193aae = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_b9b3024a4bbf4537 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_arg; pls::game::cs_require(cs_target)->cs_46524ed757f195c3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4f16085a44631993 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_component); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_3a3d09f9e75a32d2>>(v_component); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_994ec0fb562812be(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_4f16085a44631993 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_85d4a94d45c5d889 = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_287f9edf5a6fc99a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::game::cs_f32(0x00000000u); pls::game::cs_require(cs_target)->cs_95b7593873c71ecc = cs_value; return cs_value; }())); pls::game::cs_require(cs_target)->cs_b766893b7bb434f0 = cs_value; return cs_value; }());
}
}
}
}

// M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)
void cs_e8150d06f5e6c2cc(pls::cs::Ref<cs_9b21b86f0d2914e0> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,std::int32_t v_id,float v_x,float v_y,pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component) { cs_init_9b21b86f0d2914e0();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffect.Init(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9b21b86f0d2914e0>>(cs_this); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = v_surface; std::int32_t cs_arg1 = v_id; float cs_arg2 = v_x; float cs_arg3 = v_y; pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg4 = v_component; pls::cs::Ref<pls::cs::Object> cs_arg5 = pls::cs::Ref<pls::cs::Object>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5e534500fa7e2dfa(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
}
}
}
}
