// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_08829eb6a4df2a40.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_487b2c2b346d5c73.hpp"
#include "game_generated_type_4a8bef2ab48b32d7.hpp"
#include "game_generated_type_4e9b1f0e9e3baf25.hpp"
#include "game_generated_type_6485f92c2f04639f.hpp"
#include "game_generated_type_792a6372766eb19f.hpp"
#include "game_generated_type_7a470603d6db57af.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "game_generated_type_925b3cf054e42b78.hpp"
#include "game_generated_type_931908081ea62151.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_af32d28251411c95.hpp"
#include "game_generated_type_e315dac1df3b175d.hpp"
#include "game_generated_type_f9cfa6da3459412e.hpp"
#include "generated/portable_generated_type_51222df74ac70bab.hpp"
#include "generated/portable_generated_type_52158c8b20364c2b.hpp"
#include "generated/portable_generated_type_8c57b816bbc8fd6e.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
#include "generated/portable_generated_type_51222df74ac70bab_templates.hpp"
namespace pls::game {

void cs_f9cfa6da3459412e::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_4a8bef2ab48b32d7::trace_edges(visitor);pls::cs::trace_value(cs_c10c93ba981d563f,visitor);pls::cs::trace_value(cs_125a8b7955aca1e0,visitor);}

void cs_f9cfa6da3459412e::release_edges(){cs_4a8bef2ab48b32d7::release_edges();pls::cs::release_value(cs_c10c93ba981d563f);pls::cs::release_value(cs_125a8b7955aca1e0);}

void cs_f9cfa6da3459412e::cs_virtual_d58c9861d84c3c7d() {cs_19ab8dcddc66e785(std::static_pointer_cast<cs_f9cfa6da3459412e>(shared_from_this()));}

void cs_f9cfa6da3459412e::cs_virtual_a4fa9c8087597dcf(pls::cs::Ref<pls::kairo::Graphics> v_g) {cs_087077460d9ea2a3(std::static_pointer_cast<cs_f9cfa6da3459412e>(shared_from_this()),v_g);}

void cs_f9cfa6da3459412e::cs_virtual_fb350f55fa7620cd(pls::cs::Ref<pls::kairo::Graphics> v_g) {cs_ae992fe0dbd4a316(std::static_pointer_cast<cs_f9cfa6da3459412e>(shared_from_this()),v_g);}

static pls::cs::Ref<cs_af32d28251411c95> cs_72947298469bea4a_value{};

static pls::cs::Ref<cs_792a6372766eb19f> cs_a68df2bae0e22f44_value{};

static pls::cs::Ref<cs_f9cfa6da3459412e> cs_60a3266700f223ca_value{};

static pls::cs::Ref<cs_e315dac1df3b175d> cs_2c0cde3e5aa1e969_value{};

void cs_init_f9cfa6da3459412e(){static pls::cs::TypeInitState state;state.run("surface.SurfaceManager",[](){

});}

pls::cs::Ref<cs_af32d28251411c95>& cs_72947298469bea4a(){cs_init_f9cfa6da3459412e();return cs_72947298469bea4a_value;}

pls::cs::Ref<cs_792a6372766eb19f>& cs_a68df2bae0e22f44(){cs_init_f9cfa6da3459412e();return cs_a68df2bae0e22f44_value;}

pls::cs::Ref<cs_f9cfa6da3459412e>& cs_60a3266700f223ca(){cs_init_f9cfa6da3459412e();return cs_60a3266700f223ca_value;}

pls::cs::Ref<cs_e315dac1df3b175d>& cs_2c0cde3e5aa1e969(){cs_init_f9cfa6da3459412e();return cs_2c0cde3e5aa1e969_value;}

// M:surface.SurfaceManager.#ctor
pls::cs::Ref<cs_f9cfa6da3459412e> cs_eaf2a1260918d30d() { cs_init_f9cfa6da3459412e();
{ auto cs_this = pls::cs::make_ref<cs_f9cfa6da3459412e>(); cs_eaf2a1260918d30d_init(cs_this); return cs_this; }
}

void cs_eaf2a1260918d30d_init(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this) {
([&]() { cs_03e2f5f2e825917f_init(std::static_pointer_cast<cs_4a8bef2ab48b32d7>(cs_this)); }());
{

}
}

// M:surface.SurfaceManager.AdjustSurfaceLayout
void cs_19ab8dcddc66e785(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_1632 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
pls::cs::Ref<pls::kairo::Canvas> v_instance2_1676 = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());
pls::cs::Ref<cs_4e9b1f0e9e3baf25> v_instance3_1732 = ([&]() -> pls::cs::Ref<cs_4e9b1f0e9e3baf25> { return cs_81e284f6e842da85(); }());
pls::cs::Ref<cs_6485f92c2f04639f> v_instance4_1793 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance4_1793); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFormsNum(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
return;
}
pls::cs::Ref<pls::kairo::FormBase> v_form_1903 = ([&]() -> pls::cs::Ref<pls::kairo::FormBase> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance4_1793); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetForm(cs_arg0); }());
bool v_flag_1940 = ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_f9cfa6da3459412e>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_63c6ef254e4171fe(cs_receiver); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c8e32e6eaf380ca6(cs_receiver); }())))) {
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetStatusBarHeight(); }());
}
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_26fe694df0ae6d4f(cs_receiver); }())))) {
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetStatusBarPosition(); }());
}
pls::cs::Ref<pls::kairo::IApplication> v_currentApp_2189 = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());
std::int32_t v_num_2239 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }());
std::int32_t v_num2_2275 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
std::int32_t v_width_2313 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth2(); }());
std::int32_t v_num3_2351 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight2(); }());
if (((((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c10c93ba981d563f; }()))) && ((((!((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsSide(); }()))))) ? ((([&]() -> bool { auto cs_left = v_num_2239; auto cs_right = v_num2_2275; return (cs_left > cs_right); }()))) : ((([&]() -> bool { auto cs_left = v_num_2239; auto cs_right = v_num2_2275; return (cs_left < cs_right); }()))))))) || ((([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c10c93ba981d563f; }()) && ((((!((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsSide(); }()))))) ? ((([&]() -> bool { auto cs_left = v_num_2239; auto cs_right = v_num2_2275; return (cs_left < cs_right); }()))) : ((([&]() -> bool { auto cs_left = v_num_2239; auto cs_right = v_num2_2275; return (cs_left > cs_right); }()))))))))) {
std::int32_t v_num4_2551 = v_num_2239;
([&]() { auto cs_value = v_num2_2275; v_num_2239 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num4_2551; v_num2_2275 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_width_2313; v_num4_2551 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num3_2351; v_width_2313 = cs_value; return cs_value; }());
([&]() { auto cs_value = v_num4_2551; v_num3_2351 = cs_value; return cs_value; }());
}
if ((((([&]() -> bool { auto cs_left = pls::generated::cs_c57b75ba2c108877(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num2_2275; auto cs_right = v_num_2239; return (cs_left > cs_right); }()))) && pls::generated::cs_641d09da1fd4cb6f())) {
([&]() { auto cs_old = v_num2_2275; auto cs_rhs = ([&]() -> std::int32_t { return cs_8919cf419e6c7708(); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num2_2275 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num3_2351; auto cs_rhs = ([&]() -> std::int32_t { return cs_8919cf419e6c7708(); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num3_2351 = cs_value; return cs_value; }());
}
float v_scaleRatio_2814 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); bool cs_arg0 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }());
float v_num5_2868 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x43700000u); auto cs_right = v_scaleRatio_2814; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }());
float v_num6_2910 = pls::game::cs_f32(0x43a00000u);
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); float cs_arg0 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); bool cs_arg0 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetScaleRatio(cs_arg0); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8de8ff27e94cbce9(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); float cs_arg0 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = v_num5_2868; auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left * cs_right); }()); auto cs_right = v_num6_2910; return (cs_left / cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8de8ff27e94cbce9(cs_receiver,cs_arg0); }());
std::int32_t v_width2_3031 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }());
std::int32_t v_height_3065 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }());
std::int32_t v_width3_3100 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }());
std::int32_t v_height2_3134 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }());
float v_scaleRatio2_3172 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }());
float v_scaleRatio3_3218 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x43700000u); auto cs_right = v_scaleRatio2_3172; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); std::int32_t cs_arg1 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x43700000u); auto cs_right = v_scaleRatio2_3172; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7676075e268ec275(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); std::int32_t cs_arg1 = v_num3_2351; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7676075e268ec275(cs_receiver,cs_arg0,cs_arg1); }());
std::int32_t v_num7_3406 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(cs_229c0490d0966c6b()); auto cs_right = v_scaleRatio3_3218; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
std::int32_t v_num8_3482 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(cs_44512ae8be40448d()); auto cs_right = v_scaleRatio3_3218; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
std::int32_t v_num9_3559 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(cs_32e9b6e50499ad72()); auto cs_right = v_scaleRatio3_3218; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }())));
std::int32_t v_num10_3640 = ([&]() -> std::int32_t { auto cs_left = v_num2_2275; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); return pls::cs::sub_i32(cs_left,cs_right); }());
std::int32_t v_mode_3681 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0378d82734b4deab(cs_receiver); }());
if ((([&]() -> bool { auto cs_left = v_num10_3640; auto cs_right = v_num9_3559; return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); v_mode_3681 = cs_value; return cs_value; }());
} else {
if ((([&]() -> bool { auto cs_left = v_num10_3640; auto cs_right = v_num7_3406; return (cs_left < cs_right); }()))) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); v_mode_3681 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_value = (((((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_instance_1632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) && (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_1632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())))) ? (([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_instance_1632; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_72da38f2b646e254; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfull)); return cs_array.get_Item(cs_index); }())) : pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)))); v_mode_3681 = cs_value; return cs_value; }());
}
}
if (([&]() -> bool { auto cs_left = v_mode_3681; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0378d82734b4deab(cs_receiver); }()); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_792a6372766eb19f>>(cs_a68df2bae0e22f44()); std::int32_t cs_arg0 = v_mode_3681; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7d8c3a37df2c9c0b(cs_receiver,cs_arg0); }());
}
std::int32_t v_num11_3981 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if ((([&]() -> bool { auto cs_left = v_mode_3681; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_value = v_num7_3406; v_num11_3981 = cs_value; return cs_value; }());
} else if ((([&]() -> bool { auto cs_left = v_mode_3681; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_old = v_num10_3640; auto cs_rhs = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetStatusBarHeight(); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num10_3640 = cs_value; return cs_value; }());
([&]() { auto cs_value = (((([&]() -> bool { auto cs_left = v_num10_3640; auto cs_right = v_num8_3482; return (cs_left < cs_right); }())) ? (v_num10_3640) : (v_num8_3482))); v_num11_3981 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); std::int32_t cs_arg0 = v_num11_3981; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee0b408f6e8fa392(cs_receiver,cs_arg0); }());
bool v_flag2_4177 = false;
if (([&]() -> bool { auto cs_left = v_mode_3681; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = true; v_flag2_4177 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_flag2_4177; auto cs_right = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsFullscreen(); }()); return (cs_left != cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); bool cs_arg0 = v_flag2_4177; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_00f4f3ea699b68a8(cs_receiver,cs_arg0); }());
if (v_flag_1940) {
try {
([&]() -> void { std::int64_t cs_arg0 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x64ull)); cs_26244a61d0d2e16c(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_807) {auto cs_exception_807=pls::cs::capture_exception(cs_caught_807);
if(pls::cs::exception_is(cs_exception_807,"System.Exception")) {{

}}
else {throw;} }
}
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth2(); }()); v_width_2313 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(v_instance2_1676); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight2(); }()); v_num3_2351 = cs_value; return cs_value; }());
if ((((([&]() -> bool { auto cs_left = pls::generated::cs_c57b75ba2c108877(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return (cs_left == cs_right); }()) || ([&]() -> bool { auto cs_left = v_num2_2275; auto cs_right = v_num_2239; return (cs_left > cs_right); }()))) && pls::generated::cs_641d09da1fd4cb6f())) {
([&]() { auto cs_old = v_num3_2351; auto cs_rhs = ([&]() -> std::int32_t { return cs_8919cf419e6c7708(); }()); auto cs_value = pls::cs::sub_i32(cs_old,cs_rhs); v_num3_2351 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_mode_3681; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return (cs_left == cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = v_width_2313; std::int32_t cs_arg1 = v_num3_2351; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7676075e268ec275(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_37c74a3ab45030f2(cs_receiver,cs_arg0,cs_arg1); }());
} else {
std::int32_t v_num12_4728 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_125a8b7955aca1e0; }())) {
pls::cs::Array<std::int32_t> v_viewport_4777 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_2189); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetViewport(); }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_array = v_viewport_4777; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }())); auto cs_right = v_scaleRatio2_3172; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x42c80000u); return (cs_left / cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); v_num12_4728 = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = v_num3_2351; auto cs_right = v_num11_3981; return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee0b408f6e8fa392(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = v_num12_4728; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = v_num12_4728; return (cs_left > cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = v_num12_4728; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ee0b408f6e8fa392(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_width_2313; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = ([&]() -> std::int32_t { auto cs_left = v_num3_2351; auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); auto cs_right = v_num11_3981; return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_37c74a3ab45030f2(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); std::int32_t cs_arg0 = v_width_2313; std::int32_t cs_arg1 = v_num3_2351; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7676075e268ec275(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_width_2313; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_37c74a3ab45030f2(cs_receiver,cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left < cs_right); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_37c74a3ab45030f2(cs_receiver,cs_arg0,cs_arg1); }());
}
if ((([&]() -> bool { auto cs_left = v_width3_3100; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_height2_3134; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(v_instance3_1732); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_a68df2bae0e22f44(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_71533940ab051be6(cs_receiver,cs_arg0); }());
}
if ((([&]() -> bool { auto cs_left = v_width2_3031; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ef5e1e474cdfff4e(cs_receiver); }()); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_height_3065; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_3afc83d4646f8f54(cs_receiver); }()); return (cs_left != cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(v_instance3_1732); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = cs_2c0cde3e5aa1e969(); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_71533940ab051be6(cs_receiver,cs_arg0); }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_72947298469bea4a()); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = v_num3_2351; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_37c74a3ab45030f2(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_72947298469bea4a()); std::int32_t cs_arg0 = v_num_2239; std::int32_t cs_arg1 = ([&]() -> std::int32_t { return cs_8919cf419e6c7708(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7676075e268ec275(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}

// M:surface.SurfaceManager.Draw(kairo.unity.ui.Graphics)
void cs_087077460d9ea2a3(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::cs::Ref<pls::kairo::Canvas> v_instance_5635 = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());
pls::cs::Ref<cs_4e9b1f0e9e3baf25> v_instance2_5690 = ([&]() -> pls::cs::Ref<cs_4e9b1f0e9e3baf25> { return cs_81e284f6e842da85(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(std::static_pointer_cast<cs_4a8bef2ab48b32d7>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a4fa9c8087597dcf(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(v_instance2_5690); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_1fafefacc1319a3f(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4e9b1f0e9e3baf25>>(v_instance2_5690); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_27b32c30d93592bb(cs_receiver); }());
}
}
}

// M:surface.SurfaceManager.DrawComponents(kairo.unity.ui.Graphics)
void cs_ae992fe0dbd4a316(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
if ((([&]() { auto cs_receiver = cs_a68df2bae0e22f44(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_02d52a36c316037d; }()) && ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_a68df2bae0e22f44()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1ed6a55cc3c2bbc8(cs_receiver); }()) || ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(cs_2c0cde3e5aa1e969()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1ed6a55cc3c2bbc8(cs_receiver); }()))))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4a8bef2ab48b32d7>>(std::static_pointer_cast<cs_4a8bef2ab48b32d7>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_fb350f55fa7620cd(cs_receiver,cs_arg0); }());
}
}
}
}

// M:surface.SurfaceManager.IsLayoutMode
bool cs_da79ce6532ce348b(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_125a8b7955aca1e0; }());
}
}
}

// M:surface.SurfaceManager.SetLayoutMode(System.Boolean)
void cs_82be5e968b3bd7e2(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this,bool v_enable) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
([&]() { auto cs_target = cs_this; auto cs_value = v_enable; pls::game::cs_require(cs_target)->cs_125a8b7955aca1e0 = cs_value; return cs_value; }());
}
}
}

// M:surface.SurfaceManager.Setup
void cs_969e6cb0fe9187f1() { cs_init_f9cfa6da3459412e();
{try{
if (([&]() { auto cs_left = pls::cs::box(cs_60a3266700f223ca()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
throw pls::cs::ReturnFlow<void>{};
}
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_f9cfa6da3459412e> { return cs_eaf2a1260918d30d(); }()); cs_60a3266700f223ca() = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::IApplication> v_currentApp_721 = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_721); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsSide(); }())))) {
([&]() { auto cs_target = cs_60a3266700f223ca(); auto cs_value = ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_721); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_721); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return (cs_left > cs_right); }()); pls::game::cs_require(cs_target)->cs_c10c93ba981d563f = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_60a3266700f223ca(); auto cs_value = ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_721); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(v_currentApp_721); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return (cs_left < cs_right); }()); pls::game::cs_require(cs_target)->cs_c10c93ba981d563f = cs_value; return cs_value; }());
}
pls::cs::Ref<pls::kairo::Canvas> v_instance_971 = ([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }());
([&](){auto cs_canvas=v_instance_971;auto cs_source=cs_60a3266700f223ca();if(!cs_canvas)throw pls::cs::NullReferenceException();if(!cs_source){cs_canvas->host_source_surface({},{});return;}pls::kairo::SurfaceCallbacks cs_bindings;cs_bindings.raw_key_down=pls::cs::Delegate<void(std::int32_t,pls::cs::Ref<pls::kairo::KeyEvent>)>::bind(cs_source,"source-surface:raw_key_down",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](std::int32_t cs_key,pls::cs::Ref<pls::kairo::KeyEvent> cs_event){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_b8386c421fdf23ad(cs_source,cs_key,cs_event);});cs_bindings.key_down=pls::cs::Delegate<void(std::int32_t)>::bind(cs_source,"source-surface:key_down",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](std::int32_t cs_key){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_9082ae6a6e574dce(cs_source,cs_key);});cs_bindings.key_up=pls::cs::Delegate<void(std::int32_t)>::bind(cs_source,"source-surface:key_up",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](std::int32_t cs_key){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_a945708971ce72b3(cs_source,cs_key);});cs_bindings.clear_touch=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:clear_touch",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_1e0863d8f2b7a360(cs_source);});cs_bindings.do_events=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:do_events",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_c311823b6552fdf7(cs_source);});cs_bindings.adjust_layout=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:adjust_layout",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();pls::game::cs_require(cs_source)->cs_virtual_d58c9861d84c3c7d();});cs_bindings.begin_touch=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:begin_touch",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_919bc150e4142cc1(cs_source,cs_graphics);});cs_bindings.draw=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:draw",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();pls::game::cs_require(cs_source)->cs_virtual_a4fa9c8087597dcf(cs_graphics);});cs_bindings.end_touch=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:end_touch",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();cs_cc1a1bf7edaee778(cs_source,cs_graphics);});cs_bindings.draw_components=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::Graphics>)>::bind(cs_source,"source-surface:draw_components",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](pls::cs::Ref<pls::kairo::Graphics> cs_graphics){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();pls::game::cs_require(cs_source)->cs_virtual_fb350f55fa7620cd(cs_graphics);});cs_bindings.touch=pls::cs::Delegate<void(pls::cs::Ref<pls::kairo::MotionEvent>)>::bind(cs_source,"source-surface:touch",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](pls::cs::Ref<pls::kairo::MotionEvent> cs_event){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();auto cs_list=cs_60d968a93f42ac33(cs_source);for(std::int32_t cs_index=pls::cs::sub_i32(pls::generated::cs_c55367423dbb79a1(cs_list),1);cs_index>=0;--cs_index){auto cs_surface=pls::generated::cs_46529d25e14daec6(cs_list,cs_index);pls::game::cs_require(cs_surface)->cs_virtual_f10884576b82823a(cs_event);}});cs_bindings.clear_game_touch=pls::cs::Delegate<void()>::bind(cs_source,"source-surface:clear_game_touch",[cs_weak=std::weak_ptr<cs_4a8bef2ab48b32d7>(cs_source)](){auto cs_source=cs_weak.lock();if(!cs_source)throw pls::cs::NullReferenceException();auto cs_list=cs_60d968a93f42ac33(cs_source);for(std::int32_t cs_index=0;cs_index<pls::generated::cs_c55367423dbb79a1(cs_list);cs_index=pls::cs::add_i32(cs_index,1)){auto cs_surface=pls::generated::cs_46529d25e14daec6(cs_list,cs_index);if(pls::game::cs_require(cs_surface)->cs_virtual_9b7c686ee42b269b())cs_0a96693c31be1e15(cs_surface);}});cs_canvas->host_source_surface(pls::cs::box(cs_source),pls::cs::make_ref<pls::kairo::CallbackFormSurface>(std::move(cs_bindings)));}());
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jarInflater_1061 = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{};
pls::cs::run_finally([&]() {try {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x0073" u"\x0079" u"\x0073" u"\x0074" u"\x0065" u"\x006d" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",10)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); return pls::generated::cs_9eb68b9f4334471a(cs_arg0); }()); v_jarInflater_1061 = cs_value; return cs_value; }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_1061; cs_e464c93271d834fa(cs_arg0); }());
([&]() -> void { pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> cs_arg0 = v_jarInflater_1061; cs_2da0940ad60eef3f(cs_arg0); }());
} catch(const pls::cs::Exception& cs_caught_166) {auto cs_exception_166=pls::cs::capture_exception(cs_caught_166);
if(pls::cs::exception_is(cs_exception_166,"System.Exception")) {{

}}
else {throw;} }}, [&]() {
if (([&]() { auto cs_left = pls::cs::box(v_jarInflater_1061); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jarInflater_1061); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_22ec1e3c74812f59(cs_receiver); }());
}
([&]() { auto cs_value = pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>{}; v_jarInflater_1061 = cs_value; return cs_value; }());
});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_60a3266700f223ca(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }()); cs_2c0cde3e5aa1e969() = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_60a3266700f223ca(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_792a6372766eb19f> { return cs_a066f615d75279e2(); }()); cs_a68df2bae0e22f44() = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<cs_9326c27a92cfea3a>>>>(([&]() { auto cs_receiver = cs_60a3266700f223ca(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a384974a2464779; }())); pls::cs::Ref<cs_9326c27a92cfea3a> cs_arg0 = ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_af32d28251411c95> { return cs_cb8c524e1144420f(); }()); cs_72947298469bea4a() = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_56f64dc33bbaf552(cs_receiver,cs_arg0); }());
}catch(const pls::cs::ReturnFlow<void>& cs_return){return;}}
}

// M:surface.SurfaceManager.UpdateAdMobView
void cs_63c6ef254e4171fe(pls::cs::Ref<cs_f9cfa6da3459412e> cs_this) { cs_init_f9cfa6da3459412e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{
pls::generated::cs_641d09da1fd4cb6f()=false;
cs_44512ae8be40448d()=pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x41ull));
return;
}
}
}
}
