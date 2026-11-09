// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_130519c307b90f46.hpp"
#include "game_generated_type_381ecfc7910ffbab.hpp"
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_57e2b41d1ee1c149.hpp"
#include "game_generated_type_5841296a01607078.hpp"
#include "game_generated_type_6517d63c01870958.hpp"
#include "game_generated_type_68277163e843ed70.hpp"
#include "game_generated_type_72d9658ed61145d6.hpp"
#include "game_generated_type_87fb4d668ea5580b.hpp"
#include "game_generated_type_89c0d586cfe20341.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_96c54d9323f24f8e.hpp"
#include "game_generated_type_9896b6da0c305f81.hpp"
#include "game_generated_type_b0a790cec818ceb0.hpp"
#include "game_generated_type_b489b0d33bb37bb8.hpp"
#include "game_generated_type_b728593e3dcffe31.hpp"
#include "game_generated_type_b89c480114cef140.hpp"
#include "game_generated_type_c8e1f3d3f96670c6.hpp"
#include "game_generated_type_d37bccc1c3814fc6.hpp"
#include "game_generated_type_dc09c88a279424b5.hpp"
#include "game_generated_type_dd50df46561f4be9.hpp"
#include "game_generated_type_e7d772862db62924.hpp"
#include "game_generated_type_ed8eabc614ddcf9e.hpp"
#include "game_generated_type_f1dd8f2aa583774c.hpp"
#include "game_generated_type_fbfef5c19ac20749.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
#include "generated/portable_generated_type_42d69496680e17fc.hpp"
#include "generated/portable_generated_type_52158c8b20364c2b.hpp"
#include "generated/portable_generated_type_72d9658ed61145d6.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
#include "managed_math.hpp"
namespace pls::game {

static pls::cs::Ref<pls::kairo::Font> cs_9c0205d7c9701bff_value{};

void cs_init_ed8eabc614ddcf9e(){static pls::cs::TypeInitState state;state.run("PlsPortGeneratedBootstrap.Source",[](){

});}

pls::cs::Ref<pls::kairo::Font>& cs_9c0205d7c9701bff(){cs_init_ed8eabc614ddcf9e();return cs_9c0205d7c9701bff_value;}

// M:PlsPortGeneratedBootstrap.Source.AdjustCreateArea(System.Int32)
void cs_a08cf6e8e956e572(std::int32_t v_delta) { cs_init_ed8eabc614ddcf9e();
{
([&]() { auto cs_old = cs_ae88aadf0313d525(); auto cs_rhs = v_delta; auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); cs_ae88aadf0313d525() = cs_value; return cs_value; }());
}
}

// M:PlsPortGeneratedBootstrap.Source.BeginImageTasks(kairo.unity.ui.Image)
pls::cs::Ref<pls::cs::Object> cs_15ad2768062dc729(pls::cs::Ref<pls::kairo::Image> v_image) { cs_init_ed8eabc614ddcf9e();
{
pls::cs::Ref<cs_57e2b41d1ee1c149> v_saved_9864 = ([&]() -> pls::cs::Ref<cs_57e2b41d1ee1c149> { return cs_c80013d97cddb420(); }());
([&]() { auto cs_target = v_saved_9864; auto cs_value = ([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_text_tasks<cs_fbfef5c19ac20749>(); }()); pls::game::cs_require(cs_target)->cs_927abfca5c112b44 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_saved_9864; auto cs_value = ([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_balloon_tasks<cs_9896b6da0c305f81>(); }()); pls::game::cs_require(cs_target)->cs_0eb66d6a46162d0d = cs_value; return cs_value; }());
([&]() { auto cs_target = v_saved_9864; auto cs_value = ([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_touch_tasks<cs_5841296a01607078>(); }()); pls::game::cs_require(cs_target)->cs_5484e79983101cbd = cs_value; return cs_value; }());
([&]() { auto cs_target = v_image; auto cs_value = pls::cs::List<cs_fbfef5c19ac20749>::make(); pls::game::cs_require(cs_target)->source_text_tasks<cs_fbfef5c19ac20749>() = cs_value; return cs_value; }());
([&]() { auto cs_target = v_image; auto cs_value = pls::cs::List<cs_9896b6da0c305f81>::make(); pls::game::cs_require(cs_target)->source_balloon_tasks<cs_9896b6da0c305f81>() = cs_value; return cs_value; }());
([&]() { auto cs_target = v_image; auto cs_value = pls::cs::List<cs_5841296a01607078>::make(); pls::game::cs_require(cs_target)->source_touch_tasks<cs_5841296a01607078>() = cs_value; return cs_value; }());
return pls::cs::box(v_saved_9864);
}
}

// M:PlsPortGeneratedBootstrap.Source.CheckCount
std::int32_t cs_268e4c8a5c5e1aa9() { cs_init_ed8eabc614ddcf9e();
{
return cs_56b87a4889a075c1();
}
}

// M:PlsPortGeneratedBootstrap.Source.CloseJarCache
void cs_88dfc436b791ac1f() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { cs_a5f9622df7c35c0c(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.Collect
void cs_81322bc33105f5ac() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_42d69496680e17fc>>(([&]() -> pls::cs::Ref<pls::generated::cs_42d69496680e17fc> { return pls::generated::cs_232fa563e68dcabb(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_b8f5dfbc2bf26f5f(cs_receiver); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.CountEnabled
bool cs_9eef28fe38c56936() { cs_init_ed8eabc614ddcf9e();
{
return pls::generated::cs_7d035d79ab9d9082();
}
}

// M:PlsPortGeneratedBootstrap.Source.CreateConfig
void cs_e3fca2af61411098() { cs_init_ed8eabc614ddcf9e();
{
([&]() { auto cs_value = cs_bf1ac74b7c638067(); pls::generated::cs_b0827224162a4f93() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_5e6bd6b93ec86676(); pls::generated::cs_137686a1e7856340() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_89f7eb250e2141b9(); pls::generated::cs_7d035d79ab9d9082() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_3534afc4e1f18664(); pls::generated::cs_4cc76a7a43706693() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_2e0da33461dc09c9(); pls::generated::cs_e8e122e44197f378() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_afbbab26806e9431(); pls::generated::cs_0dc92919b1751224() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_b265e4c3bc796f66(); pls::generated::cs_98a039c4edacf2e2() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_851355584e1d8ae4(); pls::generated::cs_c85047b12129912e() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_b1c98a140c1251bd(); pls::generated::cs_c57b75ba2c108877() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_ba545d89ce55d6c2(); pls::generated::cs_89a30a814542a913() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_c1a0a612cd012a95(); pls::generated::cs_9ac7702677443627() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_0a0de18cce44e379(); pls::generated::cs_1ce7e3797101a750() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_3d4ffbeaa2cdf318(); pls::generated::cs_acfe0d20af2323a8() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_660241f7af9ec11f(); pls::generated::cs_f15c6a3105cad248() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_ae446073dbdb5d58(); pls::generated::cs_d058affcdd0b23a7() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_66cdbdd75ac1eff7(); pls::generated::cs_55b9773d40ef294f() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_cd31f9dcf1ba6d3b(); pls::generated::cs_19a8f436a39a237f() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_8a7ef2d0171a5e76(); pls::generated::cs_3420b9de46d631e2() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_8f32708756424e8c(); pls::generated::cs_641d09da1fd4cb6f() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_5a3c5ec73378d868(); pls::generated::cs_01d5980f91155b3c() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_c0e35a41bca952fb(); pls::generated::cs_49795a9b1ce2f0ca() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_3446c841631299d2(); pls::generated::cs_ec57416f7acf6303() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_a25d5841bad96750(); pls::generated::cs_383c676f92bb4305() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_c81f69daa2faf6a7(); pls::generated::cs_191c63b05b3afe39() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_76f285f900f0a1ce(); pls::generated::cs_efcdf5d0d7b2cdc2() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_369b0c33d1c6e37e(); pls::generated::cs_3403795577da603c() = cs_value; return cs_value; }());
([&]() { auto cs_value = cs_519a9ee3e60a5c6c(); pls::generated::cs_f43ec1743d6637fa() = cs_value; return cs_value; }());
}
}

// M:PlsPortGeneratedBootstrap.Source.DebugFlag
bool cs_7a0a1ee1a93eff71() { cs_init_ed8eabc614ddcf9e();
{
return pls::generated::cs_b0827224162a4f93();
}
}

// M:PlsPortGeneratedBootstrap.Source.DisableAds
void cs_1d5c3f31dd63adfb() { cs_init_ed8eabc614ddcf9e();
{
([&]() { auto cs_value = false; pls::generated::cs_641d09da1fd4cb6f() = cs_value; return cs_value; }());
}
}

// M:PlsPortGeneratedBootstrap.Source.DrawCounters
void cs_e3da4b7ee9f51788() { cs_init_ed8eabc614ddcf9e();
{
if (pls::generated::cs_7d035d79ab9d9082()) {
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_64c23caca1e41663() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_5c6d8357da0c0aaf() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_220e04776206e9cc() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_f970055179afa1e0() = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_3b6b8ce3637f0d5a() = cs_value; return cs_value; }());
}
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = cs_56b87a4889a075c1(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); cs_56b87a4889a075c1() = cs_value; return cs_value; }());
}
}

// M:PlsPortGeneratedBootstrap.Source.DrawGraphicsText(kairo.unity.ui.Graphics,kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32)
void cs_5d2f1075652c16f2(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_dc09c88a279424b5> v_lf,pls::cs::String v_str,float v_x,float v_y,std::int32_t v_anchor) { cs_init_ed8eabc614ddcf9e();
{try{
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_str; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }()); v_str = cs_value; return cs_value; }());
if ((((([&]() -> bool { return pls::kairo::Graphics::PeekAutoTextLayout(); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_str; auto cs_arg1 = char16_t(60); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))) || ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { return cs_734e0f1de4f940e6(); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_arg0 = v_str; auto cs_arg1 = char16_t(10); return pls::game::cs_index_char1(cs_arg0,cs_arg1); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()))))) {
([&]() -> void { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::Ref<pls::kairo::Graphics> cs_arg1 = v_g; pls::cs::String cs_arg2 = v_str; float cs_arg3 = v_x; float cs_arg4 = v_y; std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }()); std::int32_t cs_arg6 = v_anchor; cs_7650135bd7080a26(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
throw pls::cs::ReturnFlow<void>{};
}
pls::cs::Ref<pls::kairo::Font> v_font_6159 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; return pls::kairo::native_graphics_read_font(cs_arg0); }());
std::int32_t v_previous_6193 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
if (((!(([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }()))) && ([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
if ((([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }()) && ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_previous_6193 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
}
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_x; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4a7882bb12bfce3f(cs_receiver,cs_arg0); }()); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); float cs_arg0 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_a6f2c13fea15a192(cs_receiver,cs_arg0); }()); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); std::int32_t cs_arg0 = v_anchor; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_cb4539652f78b54c(cs_receiver,cs_arg0); }()); v_anchor = cs_value; return cs_value; }());
}
bool v_localize_6411 = (((([&]() { auto cs_left = pls::cs::box(v_lf); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_dc09c88a279424b5>>(v_lf); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_5222c35a27bca506(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }()))) && ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsNeedLocalizeScale(); }()));
if (v_localize_6411) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetSize(); }()); v_previous_6193 = cs_value; return cs_value; }());
std::int32_t v_height_6522 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); std::int32_t cs_arg0 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetLocalizeScale(); }()); auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
if (([&]() -> bool { auto cs_left = (([&]() -> std::int32_t { auto cs_left = v_anchor; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x60ull)); return (cs_left & cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) ([&]() { auto cs_old = v_y; auto cs_rhs = ([&]() -> float { auto cs_left = static_cast<float>((([&]() -> std::int32_t { auto cs_left = v_height_6522; auto cs_right = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }()); return pls::cs::sub_i32(cs_left,cs_right); }()))); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); auto cs_value = (cs_old + cs_rhs); v_y = cs_value; return cs_value; }());
([&]() -> void { pls::kairo::Font::LockLocalizeSetting(); }());
}
pls::cs::run_finally([&]() {{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = v_str; float cs_arg2 = v_x; float cs_arg3 = v_y; std::int32_t cs_arg4 = v_anchor; pls::kairo::native_graphics_draw_prepared(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}}, [&]() {
if (v_localize_6411) ([&]() -> void { pls::kairo::Font::UnlockLocalizeSetting(); }());
if (([&]() -> bool { auto cs_left = v_previous_6193; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }())) ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_6159); std::int32_t cs_arg0 = v_previous_6193; auto cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
});
}catch(const pls::cs::ReturnFlow<void>& cs_return){return;}}
}

// M:PlsPortGeneratedBootstrap.Source.DrawImageBalloons(kairo.unity.ui.Graphics,kairo.unity.ui.Image,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
void cs_25cd80ff3c11c438(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<pls::kairo::Image> v_image,float v_dx,float v_dy,float v_width,float v_height,float v_sx,float v_sy,float v_sw,float v_sh) { cs_init_ed8eabc614ddcf9e();
{try{
if ((([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsGUI(); }()) && ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_text_tasks<cs_fbfef5c19ac20749>(); }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }()))) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = v_dx; float cs_arg1 = v_dy; float cs_arg2 = v_width; float cs_arg3 = v_height; auto cs_arg4 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClipRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
std::int32_t v_oldColor_12640 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }());
pls::cs::Ref<pls::kairo::Font> v_oldFont_12667 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }());
pls::cs::run_finally([&]() {{
([&]() -> void { bool cs_arg0 = false; pls::kairo::Font::PushLocalizeSetting(cs_arg0); }());
for (std::int32_t v_i_12736 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_12736; auto cs_right = (([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_text_tasks<cs_fbfef5c19ac20749>(); }())).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_12736; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_12736 = cs_new; return cs_old; }())) {
cs_fbfef5c19ac20749 v_task_12786 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_text_tasks<cs_fbfef5c19ac20749>(); }()); auto cs_index = v_i_12736; return cs_array.get_Item(cs_index); }());
float v_ratio_12823 = ([&]() -> float { auto cs_arg0 = ([&]() -> float { auto cs_left = v_width; auto cs_right = v_sw; return (cs_left / cs_right); }()); auto cs_arg1 = ([&]() -> float { auto cs_left = v_height; auto cs_right = v_sh; return (cs_left / cs_right); }()); return pls::cs::math_min_single(cs_arg0,cs_arg1); }());
if (([&]() { auto cs_left = pls::cs::box(cs_9c0205d7c9701bff()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<pls::kairo::Font> { return pls::cs::make_ref<pls::kairo::Font>(); }()); cs_9c0205d7c9701bff() = cs_value; return cs_value; }());
pls::cs::Ref<pls::kairo::Font> v_font_12913 = cs_9c0205d7c9701bff();
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_12913); pls::cs::Ref<pls::kairo::Font> cs_arg0 = (v_task_12786).cs_0915461b6b8b6552; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Copy(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_12913); std::int32_t cs_arg0 = pls::cs::conv_i32((([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_12913); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); auto cs_right = v_ratio_12823; return (cs_left * cs_right); }()); auto cs_right = pls::game::cs_f32(0x3c23d70au); return (cs_left + cs_right); }()))); bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Font> cs_arg0 = v_font_12913; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetFont(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = (v_task_12786).cs_a44884f8becb8e1b; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = (v_task_12786).cs_d610593762120cde; float cs_arg1 = ([&]() -> float { auto cs_left = v_dx; auto cs_right = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = (v_task_12786).cs_ede9b012c16594d4; auto cs_right = v_sx; return (cs_left - cs_right); }())); auto cs_right = v_ratio_12823; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_dy; auto cs_right = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = (v_task_12786).cs_11096a2934652136; auto cs_right = v_sy; return (cs_left - cs_right); }())); auto cs_right = v_ratio_12823; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); std::int32_t cs_arg3 = (v_task_12786).cs_aed8d166cc394ada; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}}, [&]() {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_oldColor_12640; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Font> cs_arg0 = v_oldFont_12667; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetFont(cs_arg0); }());
([&]() -> void { pls::kairo::Font::PopLocalizeSetting(); }());
});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopClip(); }());
}
if (((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsGUI(); }()))) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_balloon_tasks<cs_9896b6da0c305f81>(); }())).get_Count(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) throw pls::cs::ReturnFlow<void>{};
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = v_dx; float cs_arg1 = v_dy; float cs_arg2 = v_width; float cs_arg3 = v_height; auto cs_arg4 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClipRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }());
([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }());
pls::cs::run_finally([&]() {{
([&]() -> void { bool cs_arg0 = false; pls::kairo::Font::PushLocalizeSetting(cs_arg0); }());
for (std::int32_t v_i_13412 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_13412; auto cs_right = (([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_balloon_tasks<cs_9896b6da0c305f81>(); }())).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_13412; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_13412 = cs_new; return cs_old; }())) {
cs_9896b6da0c305f81 v_task_13465 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_balloon_tasks<cs_9896b6da0c305f81>(); }()); auto cs_index = v_i_13412; return cs_array.get_Item(cs_index); }());
float v_scale_13505 = ([&]() -> float { auto cs_arg0 = ([&]() -> float { auto cs_left = v_width; auto cs_right = v_sw; return (cs_left / cs_right); }()); auto cs_arg1 = ([&]() -> float { auto cs_left = v_height; auto cs_right = v_sh; return (cs_left / cs_right); }()); return pls::cs::math_min_single(cs_arg0,cs_arg1); }());
pls::kairo::Matrix4x4 v_matrix_13568 = ([&]() -> pls::kairo::Matrix4x4 { return pls::kairo::Matrix4x4::identity(); }());
if (([&]() { auto cs_left = pls::cs::box((v_task_13465).cs_f2b81922ca17726a); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() { auto cs_value = ([&]() { auto cs_receiver = (v_task_13465).cs_f2b81922ca17726a; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->dynamicTransform_; }()); v_matrix_13568 = cs_value; return cs_value; }());
([&]() { auto cs_value = (-((v_matrix_13568).m13)); v_matrix_13568.m13 = cs_value; return cs_value; }());
}
float v_previous_13713 = ([&]() { auto cs_receiver = (v_task_13465).cs_7009afdd236d49cc; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_621b880d085468ff; }());
([&]() { auto cs_target = (v_task_13465).cs_7009afdd236d49cc; auto cs_old = pls::game::cs_require(cs_target)->cs_621b880d085468ff; auto cs_rhs = v_scale_13505; auto cs_value = (cs_old * cs_rhs); pls::game::cs_require(cs_target)->cs_621b880d085468ff = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_96c54d9323f24f8e>>((v_task_13465).cs_7009afdd236d49cc); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = ([&]() -> float { auto cs_left = v_dx; auto cs_right = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = (v_task_13465).cs_2d6d88bceda5ea1c; auto cs_right = v_sx; return (cs_left - cs_right); }())); auto cs_right = v_scale_13505; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); float cs_arg2 = ([&]() -> float { auto cs_left = v_dy; auto cs_right = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = (v_task_13465).cs_43d3fd031666ba13; auto cs_right = v_sy; return (cs_left - cs_right); }())); auto cs_right = v_scale_13505; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); pls::kairo::Matrix4x4 cs_arg3 = v_matrix_13568; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_97aa074fb6571df9(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() { auto cs_target = (v_task_13465).cs_7009afdd236d49cc; auto cs_value = v_previous_13713; pls::game::cs_require(cs_target)->cs_621b880d085468ff = cs_value; return cs_value; }());
}
}}, [&]() {
([&]() -> void { pls::kairo::Font::PopLocalizeSetting(); }());
});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopClip(); }());
}catch(const pls::cs::ReturnFlow<void>& cs_return){return;}}
}

// M:PlsPortGeneratedBootstrap.Source.DrawImageTouches(kairo.unity.ui.Graphics,kairo.unity.ui.Image,System.Single,System.Single)
void cs_52c66805c16a07aa(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<pls::kairo::Image> v_image,float v_dx,float v_dy) { cs_init_ed8eabc614ddcf9e();
{
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsGUI(); }())))) return;
for (std::int32_t v_i_11853 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_11853; auto cs_right = (([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_touch_tasks<cs_5841296a01607078>(); }())).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_11853; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_11853 = cs_new; return cs_old; }())) {
cs_5841296a01607078 v_task_11892 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_touch_tasks<cs_5841296a01607078>(); }()); auto cs_index = v_i_11853; return cs_array.get_Item(cs_index); }());
if ((!(([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>((v_task_11892).cs_63acdf6f06552078); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = (v_task_11892).cs_eb9196b880538867; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_932865f2d762e1e3(cs_receiver,cs_arg0); }())))) {
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_11981 = ([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = (v_task_11892).cs_eb9196b880538867; return cs_beb950d6aeeb844b(cs_arg0); }());
([&]() { auto cs_target = v_component_11981; auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_receiver = v_component_11981; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_830652d422733c85; }())); auto cs_right = v_dx; return (cs_left + cs_right); }()))); pls::game::cs_require(cs_target)->cs_830652d422733c85 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_component_11981; auto cs_value = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(([&]() { auto cs_receiver = v_component_11981; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1ec368037b30316d; }())); auto cs_right = v_dy; return (cs_left + cs_right); }()))); pls::game::cs_require(cs_target)->cs_1ec368037b30316d = cs_value; return cs_value; }());
([&]() { auto cs_target = v_component_11981; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_48f24d93a00e0ab4 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_component_11981; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ([&]() { auto cs_target = ([&]() { auto cs_receiver = v_component_11981; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_1d1d519d3428e730; }()); auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4d04dab5735542a9 = cs_value; return cs_value; }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>((v_task_11892).cs_63acdf6f06552078); pls::cs::Ref<cs_3a3d09f9e75a32d2> cs_arg0 = v_component_11981; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c015426253e69b27(cs_receiver,cs_arg0); }());
}
}
}
}

// M:PlsPortGeneratedBootstrap.Source.FinishImageTasks(kairo.unity.ui.Image,System.Object,kairo.unity.graphics.Offscreen,System.Boolean)
void cs_f0aa7840ff3afc96(pls::cs::Ref<pls::kairo::Image> v_image,pls::cs::Ref<pls::cs::Object> v_value,pls::cs::Ref<pls::kairo::Offscreen> v_offscreen,bool v_commit) { cs_init_ed8eabc614ddcf9e();
{
pls::cs::Ref<cs_57e2b41d1ee1c149> v_saved_10391 = pls::cs::unbox<pls::cs::Ref<cs_57e2b41d1ee1c149>>(v_value);
if ((!(v_commit))) {
([&]() { auto cs_target = v_image; auto cs_value = ([&]() { auto cs_receiver = v_saved_10391; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_927abfca5c112b44; }()); pls::game::cs_require(cs_target)->source_text_tasks<cs_fbfef5c19ac20749>() = cs_value; return cs_value; }());
([&]() { auto cs_target = v_image; auto cs_value = ([&]() { auto cs_receiver = v_saved_10391; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0eb66d6a46162d0d; }()); pls::game::cs_require(cs_target)->source_balloon_tasks<cs_9896b6da0c305f81>() = cs_value; return cs_value; }());
([&]() { auto cs_target = v_image; auto cs_value = ([&]() { auto cs_receiver = v_saved_10391; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5484e79983101cbd; }()); pls::game::cs_require(cs_target)->source_touch_tasks<cs_5841296a01607078>() = cs_value; return cs_value; }());
return;
}
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = v_saved_10391; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_927abfca5c112b44; }()); cs_receiver.Clear(); }());
for (std::int32_t v_i_10583 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_10583; auto cs_right = (([&]() { auto cs_receiver = v_saved_10391; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5484e79983101cbd; }())).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_10583; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_10583 = cs_new; return cs_old; }())) ([&]() { auto cs_target = (([&]() { auto cs_array = ([&]() { auto cs_receiver = v_saved_10391; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5484e79983101cbd; }()); auto cs_index = v_i_10583; return cs_array.get_Item(cs_index); }())).cs_eb9196b880538867; auto cs_old = pls::game::cs_require(cs_target)->cs_48f24d93a00e0ab4; auto cs_new = pls::cs::sub_i32(cs_old,1); pls::game::cs_require(cs_target)->cs_48f24d93a00e0ab4 = cs_new; return cs_old; }());
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = v_saved_10391; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5484e79983101cbd; }()); cs_receiver.Clear(); }());
for (std::int32_t v_i_10685 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_10685; auto cs_right = (([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_text_tasks<cs_fbfef5c19ac20749>(); }())).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_10685; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_10685 = cs_new; return cs_old; }())) {
cs_fbfef5c19ac20749 v_task_10729 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_text_tasks<cs_fbfef5c19ac20749>(); }()); auto cs_index = v_i_10685; return cs_array.get_Item(cs_index); }());
pls::kairo::Vector3 v_point_10764 = ([&](){auto cs_value_storage_759_owner=v_offscreen;auto& cs_value_storage_759=pls::game::cs_require(cs_value_storage_759_owner)->dynamicTransform_;auto cs_arg0=([&]() { auto cs_arg0 = (v_task_10729).cs_ede9b012c16594d4; auto cs_arg1 = (-((v_task_10729).cs_11096a2934652136)); auto cs_arg2 = pls::game::cs_f32(0x00000000u); return pls::kairo::Vector3(cs_arg0,cs_arg1,cs_arg2); }());return cs_value_storage_759.MultiplyPoint(cs_arg0);}());
([&]() { auto cs_value = (v_point_10764).x; (v_task_10729).cs_ede9b012c16594d4 = cs_value; return cs_value; }());
([&]() { auto cs_value = (-((v_point_10764).y)); (v_task_10729).cs_11096a2934652136 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_text_tasks<cs_fbfef5c19ac20749>(); }()); auto cs_index = v_i_10685; auto cs_value = v_task_10729; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
for (std::int32_t v_i_10931 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_10931; auto cs_right = (([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_balloon_tasks<cs_9896b6da0c305f81>(); }())).get_Count(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_10931; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_10931 = cs_new; return cs_old; }())) {
cs_9896b6da0c305f81 v_task_10978 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_balloon_tasks<cs_9896b6da0c305f81>(); }()); auto cs_index = v_i_10931; return cs_array.get_Item(cs_index); }());
pls::kairo::Vector3 v_point_11016 = ([&](){auto cs_value_storage_762_owner=v_offscreen;auto& cs_value_storage_762=pls::game::cs_require(cs_value_storage_762_owner)->dynamicTransform_;auto cs_arg0=([&]() { auto cs_arg0 = (v_task_10978).cs_2d6d88bceda5ea1c; auto cs_arg1 = (-((v_task_10978).cs_43d3fd031666ba13)); auto cs_arg2 = pls::game::cs_f32(0x00000000u); return pls::kairo::Vector3(cs_arg0,cs_arg1,cs_arg2); }());return cs_value_storage_762.MultiplyPoint(cs_arg0);}());
([&]() { auto cs_value = (v_point_11016).x; (v_task_10978).cs_2d6d88bceda5ea1c = cs_value; return cs_value; }());
([&]() { auto cs_value = (-((v_point_11016).y)); (v_task_10978).cs_43d3fd031666ba13 = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = v_image; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_balloon_tasks<cs_9896b6da0c305f81>(); }()); auto cs_index = v_i_10931; auto cs_value = v_task_10978; cs_target.set_Item(cs_index,cs_value); return cs_value; }());
}
}
}

// M:PlsPortGeneratedBootstrap.Source.FreeHeapMemory
std::int64_t cs_8c256740f2071d41() { cs_init_ed8eabc614ddcf9e();
{
return pls::cs::unbox<std::int64_t>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = ([&](){struct cs_closure_c6a64f8ef06f48c0 : pls::cs::Object{void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);}void release_edges()override{pls::cs::Object::release_edges();}pls::cs::Ref<pls::cs::Object> Invoke(){{ return pls::cs::box(([&]() -> std::int64_t { return pls::kairo::native_heap_free(); }())); }}};auto cs_closure=pls::cs::make_ref<cs_closure_c6a64f8ef06f48c0>();return pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::bind_identity(cs_closure,nullptr,std::string("M:PlsPortGeneratedBootstrap.Source.FreeHeapMemory:4519"),[weak=std::weak_ptr<cs_closure_c6a64f8ef06f48c0>(cs_closure)]()->pls::cs::Ref<pls::cs::Object>{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();return target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }()));
}
}

// M:PlsPortGeneratedBootstrap.Source.GetApplicationResource(kairo.unity.ui.IApplication)
pls::cs::Ref<cs_b728593e3dcffe31> cs_910a62f2dd3a48eb(pls::cs::Ref<pls::kairo::IApplication> v_app) { cs_init_ed8eabc614ddcf9e();
{
return pls::cs::unbox<pls::cs::Ref<cs_b728593e3dcffe31>>(([&]() -> pls::cs::Ref<pls::cs::Object> { pls::cs::Ref<pls::kairo::IApplication> cs_arg0 = v_app; return pls::kairo::native_application_resource(cs_arg0); }()));
}
}

// M:PlsPortGeneratedBootstrap.Source.GetFep
pls::cs::Ref<cs_d37bccc1c3814fc6> cs_35c6d0bf39ebc561() { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> pls::cs::Ref<cs_d37bccc1c3814fc6> { return cs_17329e66670990a9(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.GetGraphicsLocalMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_5186306036e04c97(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(v_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { return cs_d1ef6eff6523bffb(); }()); v_value = cs_value; return cs_value; }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_value); pls::cs::Array<float> cs_arg0 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::kairo::native_graphics_read_matrix(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ae09ad7913e5d182(cs_receiver,cs_arg0); }());
return v_value;
}
}

// M:PlsPortGeneratedBootstrap.Source.GetGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_ba0c4bb4e6b47a8a(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(v_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { return cs_d1ef6eff6523bffb(); }()); v_value = cs_value; return cs_value; }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_value); pls::cs::Array<float> cs_arg0 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::kairo::native_graphics_read_matrix(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ae09ad7913e5d182(cs_receiver,cs_arg0); }());
return v_value;
}
}

// M:PlsPortGeneratedBootstrap.Source.GetGraphicsScreenMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_73f9b6da48f845fd(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(v_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { return cs_d1ef6eff6523bffb(); }()); v_value = cs_value; return cs_value; }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_value); pls::cs::Array<float> cs_arg0 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::kairo::native_graphics_read_matrix(cs_arg0,cs_arg1); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ae09ad7913e5d182(cs_receiver,cs_arg0); }());
return v_value;
}
}

// M:PlsPortGeneratedBootstrap.Source.GetGraphicsTransRectGUI(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,kairo.unity.graphics.RectangleF)
pls::cs::Ref<cs_f1dd8f2aa583774c> cs_6b2275fd3b361511(pls::cs::Ref<pls::kairo::Graphics> v_g,float v_x,float v_y,float v_width,float v_height,pls::cs::Ref<cs_f1dd8f2aa583774c> v_dst) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(v_dst); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_f1dd8f2aa583774c> { return cs_811ec9500127b493(); }()); v_dst = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_f1dd8f2aa583774c>>(v_dst); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = ([&]() -> float { auto cs_left = v_x; auto cs_right = v_width; return (cs_left + cs_right); }()); float cs_arg3 = ([&]() -> float { auto cs_left = v_y; auto cs_right = v_height; return (cs_left + cs_right); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_20c48a456cf53f6e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
float v_left_7787 = ([&]() { auto cs_receiver = v_dst; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_046578c7b896a653; }()), v_top_7801 = ([&]() { auto cs_receiver = v_dst; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c8b58e9490836581; }()), v_right_7813 = ([&]() { auto cs_receiver = v_dst; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_06ef4703cb291a79; }()), v_bottom_7829 = ([&]() { auto cs_receiver = v_dst; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_8d4cf7374fb757c0; }());
pls::cs::Ref<cs_c8e1f3d3f96670c6> v_matrix_7851 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<cs_c8e1f3d3f96670c6>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_73f9b6da48f845fd(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_matrix_7851); auto& cs_arg0 = v_left_7787; auto& cs_arg1 = v_top_7801; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_76f083d6ddd878de(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_matrix_7851); auto& cs_arg0 = v_right_7813; auto& cs_arg1 = v_bottom_7829; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_76f083d6ddd878de(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_f1dd8f2aa583774c>>(v_dst); float cs_arg0 = v_left_7787; float cs_arg1 = v_top_7801; float cs_arg2 = v_right_7813; float cs_arg3 = v_bottom_7829; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_20c48a456cf53f6e(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
pls::cs::Array<float> v_clip_7995 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; return pls::kairo::native_graphics_read_clip(cs_arg0); }());
([&]() { auto cs_target = v_dst; auto cs_old = pls::game::cs_require(cs_target)->cs_046578c7b896a653; auto cs_rhs = ([&]() { auto cs_array = v_clip_7995; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = (cs_old - cs_rhs); pls::game::cs_require(cs_target)->cs_046578c7b896a653 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_dst; auto cs_old = pls::game::cs_require(cs_target)->cs_06ef4703cb291a79; auto cs_rhs = ([&]() { auto cs_array = v_clip_7995; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = (cs_old - cs_rhs); pls::game::cs_require(cs_target)->cs_06ef4703cb291a79 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_dst; auto cs_old = pls::game::cs_require(cs_target)->cs_c8b58e9490836581; auto cs_rhs = ([&]() { auto cs_array = v_clip_7995; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = (cs_old - cs_rhs); pls::game::cs_require(cs_target)->cs_c8b58e9490836581 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_dst; auto cs_old = pls::game::cs_require(cs_target)->cs_8d4cf7374fb757c0; auto cs_rhs = ([&]() { auto cs_array = v_clip_7995; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_value = (cs_old - cs_rhs); pls::game::cs_require(cs_target)->cs_8d4cf7374fb757c0 = cs_value; return cs_value; }());
return v_dst;
}
}

// M:PlsPortGeneratedBootstrap.Source.GetKairo
pls::cs::Ref<cs_b489b0d33bb37bb8> cs_c4936eb85a4204af() { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.GetReserve(kairo.unity.system.KairoBase)
std::int32_t cs_24c32f1e4193a152(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() { auto cs_receiver = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a3decda7a4670291; }());
}
}

// M:PlsPortGeneratedBootstrap.Source.GetReserveEnabled(kairo.unity.system.KairoBase)
bool cs_819b3ebc516bd932(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() { auto cs_receiver = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb15809d7dd758fd; }());
}
}

// M:PlsPortGeneratedBootstrap.Source.InitializeLanguage
void cs_53006aec72e26706() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { cs_a56548cef82c6906(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.InitializePlatform
void cs_d9ce38f50244c191() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { std::int32_t cs_arg0 = ([&]() -> std::int32_t { return pls::generated::cs_f2f74213ca1ea9bc(); }()); bool cs_arg1 = pls::generated::cs_4cc76a7a43706693(); pls::cs::String cs_arg2 = pls::generated::cs_1ce7e3797101a750(); pls::kairo::native_plugin_init(cs_arg0,cs_arg1,cs_arg2); }());
([&]() -> void { bool cs_arg0 = true; bool cs_arg1 = false; cs_749d49646f9339d3(cs_arg0,cs_arg1); }());
([&]() -> void { bool cs_arg0 = false; cs_b0502ca03ca03061(cs_arg0); }());
([&]() -> void { cs_dc20b22a3922530e(); }());
if ((!(pls::generated::cs_c85047b12129912e()))) ([&]() -> void { bool cs_arg0 = false; cs_933c73fabeb9213d(cs_arg0); }());
pls::cs::Ref<pls::kairo::DisplayMetrics> v_metrics_3844 = ([&]() -> pls::cs::Ref<pls::kairo::DisplayMetrics> { return pls::cs::make_ref<pls::kairo::DisplayMetrics>(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() -> pls::cs::Ref<pls::kairo::Canvas> { return pls::kairo::Canvas::GetInstance(); }())); pls::cs::Ref<pls::kairo::IApplication> cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetDisplayCurrent(cs_arg0); }());
([&]() -> void { pls::game::native_install_bootstrap_bindings(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.IsPlaying(kairo.unity.system.KairoBase)
bool cs_14404b0409612e0e(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ab34005322458eed(cs_receiver); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.Japanese
bool cs_714ae7bf22940094() { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> bool { return pls::generated::cs_ce0912b8167f3504(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.LoadLibraryResources
pls::cs::Ref<pls::cs::Object> cs_e9e5fbc4cd3f1ed8() { cs_init_ed8eabc614ddcf9e();
{
pls::cs::Ref<cs_b728593e3dcffe31> v_manager_4038 = ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_arg0 = pls::cs::String{}; auto cs_arg1 = pls::cs::String{}; auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; auto cs_arg4 = pls::cs::String{}; auto cs_arg5 = pls::cs::String{}; auto cs_arg6 = pls::cs::String{}; return cs_63b2bd45669dab69(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(v_manager_4038); pls::cs::Array<std::uint8_t> cs_arg0 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = pls::cs::String(std::u16string(u"\x006b" u"\x0061" u"\x0069" u"\x0072" u"\x006f" u"\x006c" u"\x0069" u"\x0062" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",12)); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6ec7ac2b50afb0b0(cs_receiver,cs_arg0,cs_arg1); }());
{ auto cs_each797 = ([&]() { auto cs_receiver = v_manager_4038; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); for (std::int32_t cs_i797=0; cs_i797<cs_each797.length(); ++cs_i797) { pls::cs::Ref<pls::kairo::Image> v_image_4127 = cs_each797.get_Item(cs_i797); {
if (([&]() { auto cs_left = pls::cs::box(v_image_4127); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Image>>(v_image_4127); bool cs_arg0 = true; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetExpiration(cs_arg0,cs_arg1); }());
} } }
return pls::cs::box(v_manager_4038);
}
}

// M:PlsPortGeneratedBootstrap.Source.LocalizeScale
bool cs_7c911f55fe4ce22d() { cs_init_ed8eabc614ddcf9e();
{
return pls::generated::cs_89a30a814542a913();
}
}

// M:PlsPortGeneratedBootstrap.Source.MarkupDraw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32)
void cs_08ee9b873c770db5(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_value,float v_x,float v_y,std::int32_t v_anchor) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::Ref<pls::kairo::Graphics> cs_arg1 = v_g; pls::cs::String cs_arg2 = v_value; float cs_arg3 = v_x; float cs_arg4 = v_y; std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }()); std::int32_t cs_arg6 = v_anchor; cs_7650135bd7080a26(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.MarkupWidth(kairo.unity.ui.Font,System.String)
float cs_6e94a0e98a66cd1e(pls::cs::Ref<pls::kairo::Font> v_font,pls::cs::String v_value) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> float { pls::cs::Ref<cs_dc09c88a279424b5> cs_arg0 = pls::cs::Ref<cs_dc09c88a279424b5>{}; pls::cs::Ref<pls::kairo::Font> cs_arg1 = v_font; pls::cs::String cs_arg2 = v_value; return cs_73930d73c766bf02(cs_arg0,cs_arg1,cs_arg2); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.MatrixValues(kairo.unity.ui.Matrix)
pls::cs::Array<float> cs_5b92f2ba5b09b02c(pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(v_value); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) return pls::cs::Array<float>{};
pls::cs::Array<float> v_values_5778 = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)));
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_value); pls::cs::Array<float> cs_arg0 = v_values_5778; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ca00577a54dd61a5(cs_receiver,cs_arg0); }());
return v_values_5778;
}
}

// M:PlsPortGeneratedBootstrap.Source.MeasureImage(System.Byte[])
pls::cs::Array<std::int32_t> cs_cdb96b9d2c43a215(pls::cs::Array<std::uint8_t> v_data) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> pls::cs::Array<std::int32_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data; return cs_4821dc8d620fb368(cs_arg0); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.Millis
std::int64_t cs_ea83d7e6880d60d0() { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> std::int64_t { return pls::generated::cs_55fcf3528750ae31(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.Pause(System.Int64)
void cs_94fed40668eb39b8(std::int64_t v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { std::int64_t cs_arg0 = v_value; cs_26244a61d0d2e16c(cs_arg0); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.PushGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
void cs_c9d946ea24c94dbc(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::Array<float> cs_arg1 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = v_value; return cs_5b92f2ba5b09b02c(cs_arg0); }()); pls::kairo::native_graphics_push_matrix(cs_arg0,cs_arg1); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.QueueImageText(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32)
void cs_b78b48822cb12fde(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_text,float v_x,float v_y,std::int32_t v_anchor) { cs_init_ed8eabc614ddcf9e();
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_render_; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) return;
pls::cs::Ref<pls::kairo::Font> v_font_11301 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { pls::cs::Ref<pls::kairo::Font> cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); auto cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }()); return pls::cs::make_ref<pls::kairo::Font>(cs_arg0); }());
pls::cs::Ref<cs_f1dd8f2aa583774c> v_rectangle_11332 = ([&]() -> pls::cs::Ref<cs_f1dd8f2aa583774c> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = pls::game::cs_f32(0x00000000u); float cs_arg1 = pls::game::cs_f32(0x00000000u); float cs_arg2 = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_11301); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_11301); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); pls::cs::Ref<cs_f1dd8f2aa583774c> cs_arg4 = pls::cs::Ref<cs_f1dd8f2aa583774c>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6b2275fd3b361511(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
float v_a_11415 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_f1dd8f2aa583774c>>(v_rectangle_11332); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bacff363ff8ad693(cs_receiver); }()); auto cs_right = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_11301); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetWidth(); }()); return (cs_left / cs_right); }()), v_b_11451 = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_f1dd8f2aa583774c>>(v_rectangle_11332); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_43d7fa04d81da9ff(cs_receiver); }()); auto cs_right = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_11301); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); return (cs_left / cs_right); }()), v_scale_11496 = (([&]() -> bool { auto cs_left = v_a_11415; auto cs_right = v_b_11451; return (cs_left < cs_right); }()) ? v_a_11415 : v_b_11451);
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_11301); std::int32_t cs_arg0 = pls::cs::conv_i32((([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_11301); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); auto cs_right = v_scale_11496; return (cs_left * cs_right); }()))); bool cs_arg1 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSize(cs_arg0,cs_arg1); }());
([&]() { auto cs_old = v_y; auto cs_rhs = ([&]() -> float { auto cs_left = (([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_11301); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); auto cs_right = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_11301); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetHeight(); }())); auto cs_right = v_scale_11496; return (cs_left * cs_right); }()); auto cs_right = v_b_11451; return (cs_left / cs_right); }()); return (cs_left - cs_right); }())); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); auto cs_value = (cs_old + cs_rhs); v_y = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_render_; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->source_text_tasks<cs_fbfef5c19ac20749>(); }()); auto cs_arg0 = ([&]() -> cs_fbfef5c19ac20749 { pls::cs::String cs_arg0 = v_text; float cs_arg1 = v_x; float cs_arg2 = v_y; std::int32_t cs_arg3 = v_anchor; std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetColor(); }()); pls::cs::Ref<pls::kairo::Font> cs_arg5 = v_font_11301; return cs_990cc4ea487d53f7(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }()); cs_receiver.Add(cs_arg0); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.ReadImageData(System.Int32,System.Int32,System.String,System.String)
pls::cs::Array<std::uint8_t> cs_bf9518b639572f74(std::int32_t v_rs,std::int32_t v_rc,pls::cs::String v_file,pls::cs::String v_palette) { cs_init_ed8eabc614ddcf9e();
{
pls::cs::Array<std::uint8_t> v_data_5313 = pls::cs::Array<std::uint8_t>{};
if (([&]() -> bool { auto cs_left = v_rs; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = v_file; return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); v_data_5313 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_palette); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data_5313; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = v_palette; return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }()); return cs_46f5e10bd3c97a4c(cs_arg0,cs_arg1); }());
} else {
pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> v_jar_5459 = ([&]() -> pls::cs::Ref<pls::generated::cs_52158c8b20364c2b> { std::int32_t cs_arg0 = v_rs; std::int32_t cs_arg1 = v_rc; return cs_f22a8aac0144b99b(cs_arg0,cs_arg1); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_5459); pls::cs::String cs_arg0 = v_file; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); v_data_5313 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_palette); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Array<std::uint8_t> cs_arg0 = v_data_5313; pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_52158c8b20364c2b>>(v_jar_5459); pls::cs::String cs_arg0 = v_palette; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_344d0f488664be89(cs_receiver,cs_arg0); }()); return cs_46f5e10bd3c97a4c(cs_arg0,cs_arg1); }());
}
return v_data_5313;
}
}

// M:PlsPortGeneratedBootstrap.Source.Save(kairo.unity.system.KairoBase)
void cs_ecb38147f2318edc(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_3481915358ac0fff(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.SaveAll(kairo.unity.system.KairoBase)
void cs_f0ab887a70f5eb9a(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_06f3c8d943914943(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.SetGameState(kairo.unity.system.KairoBase,System.Boolean)
void cs_f9382522394ab3e5(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value,bool v_playing) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_value); bool cs_arg0 = v_playing; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e63aaf6292bf7187(cs_receiver,cs_arg0); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.SetGraphicsMatrix(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)
void cs_afe22eae987dcf98(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Ref<cs_c8e1f3d3f96670c6> v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::Array<float> cs_arg1 = ([&]() -> pls::cs::Array<float> { pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = v_value; return cs_5b92f2ba5b09b02c(cs_arg0); }()); pls::kairo::native_graphics_set_matrix(cs_arg0,cs_arg1); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.SetReserve(kairo.unity.system.KairoBase,System.Int32)
void cs_51448637417220ba(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value,std::int32_t v_reserved) { cs_init_ed8eabc614ddcf9e();
{
([&]() { auto cs_target = v_value; auto cs_value = v_reserved; pls::game::cs_require(cs_target)->cs_a3decda7a4670291 = cs_value; return cs_value; }());
}
}

// M:PlsPortGeneratedBootstrap.Source.SetReserveEnabled(kairo.unity.system.KairoBase,System.Boolean)
void cs_28b9303ca50ae96a(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value,bool v_enabled) { cs_init_ed8eabc614ddcf9e();
{
([&]() { auto cs_target = v_value; auto cs_value = v_enabled; pls::game::cs_require(cs_target)->cs_bb15809d7dd758fd = cs_value; return cs_value; }());
}
}

// M:PlsPortGeneratedBootstrap.Source.SetWindowFullscreen(System.Boolean)
void cs_933c73fabeb9213d(bool v_enabled) { cs_init_ed8eabc614ddcf9e();
{
pls::cs::Ref<pls::cs::Cell<bool>> v_enabled_cell=pls::cs::make_ref<pls::cs::Cell<bool>>(v_enabled);
{
if (pls::generated::cs_c85047b12129912e()) return;
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_01a2e3d249a2a9fb : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<bool>> v_enabled_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_enabled_cell,v);}void release_edges()override{pls::cs::Object::release_edges();v_enabled_cell.reset();}void Invoke(){{
([&]() -> void { bool cs_arg0 = v_enabled_cell->value; pls::kairo::native_window_fullscreen(cs_arg0); }());
}}};auto cs_closure=pls::cs::make_ref<cs_closure_01a2e3d249a2a9fb>();cs_closure->v_enabled_cell=v_enabled_cell;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_enabled_cell.get(),std::string("M:PlsPortGeneratedBootstrap.Source.SetWindowFullscreen(System.Boolean):4964"),[weak=std::weak_ptr<cs_closure_01a2e3d249a2a9fb>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
}
}
}

// M:PlsPortGeneratedBootstrap.Source.ShapeDrawn
void cs_513cc3c105e057ec() { cs_init_ed8eabc614ddcf9e();
{
if (pls::generated::cs_7d035d79ab9d9082()) ([&]() { auto cs_old = cs_220e04776206e9cc(); auto cs_new = pls::cs::add_i32(cs_old,1); cs_220e04776206e9cc() = cs_new; return cs_old; }());
}
}

// M:PlsPortGeneratedBootstrap.Source.ShowToast(System.String,System.Int32)
void cs_4d9093772b7b2178(pls::cs::String v_text,std::int32_t v_duration) { cs_init_ed8eabc614ddcf9e();
{
pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_text_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(v_text);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<void()> cs_arg0 = ([&](){struct cs_closure_5d58fc5d227bbe36 : pls::cs::Object{pls::cs::Ref<pls::cs::Cell<pls::cs::String>> v_text_cell;void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);pls::cs::trace_value(v_text_cell,v);}void release_edges()override{pls::cs::Object::release_edges();v_text_cell.reset();}void Invoke(){{
([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_text_cell->value); pls::kairo::debug_log(cs_arg0); }());
}}};auto cs_closure=pls::cs::make_ref<cs_closure_5d58fc5d227bbe36>();cs_closure->v_text_cell=v_text_cell;return pls::cs::Delegate<void()>::bind_identity(cs_closure,v_text_cell.get(),std::string("M:PlsPortGeneratedBootstrap.Source.ShowToast(System.String,System.Int32):4783"),[weak=std::weak_ptr<cs_closure_5d58fc5d227bbe36>(cs_closure)]()->void{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }());
}
}
}

// M:PlsPortGeneratedBootstrap.Source.TerminateApplication
void cs_d77afa4a6ff2b7fb() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { pls::kairo::AppEventType cs_arg0 = static_cast<pls::kairo::AppEventType>(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull))); pls::cs::Array<pls::cs::Ref<pls::cs::Object>> cs_arg1 = pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))); pls::kairo::FormManagerBase::ProcessEvent(cs_arg0,cs_arg1); }());
pls::cs::Ref<cs_b489b0d33bb37bb8> v_kairo_5138 = ([&]() -> pls::cs::Ref<cs_b489b0d33bb37bb8> { return cs_3eff1227bb0de063(); }());
if (([&]() { auto cs_left = pls::cs::box(v_kairo_5138); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_kairo_5138); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_706bcbd9776cf6ef(); }());
([&]() -> void { cs_252b02044b3d6557(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.TotalHeapMemory
std::int64_t cs_e4c8e8c5d833899f() { cs_init_ed8eabc614ddcf9e();
{
return pls::cs::unbox<std::int64_t>(([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }())); pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()> cs_arg0 = ([&](){struct cs_closure_b0fcc6112c9df641 : pls::cs::Object{void trace_edges(const pls::cs::EdgeVisitor&v)const override{pls::cs::Object::trace_edges(v);}void release_edges()override{pls::cs::Object::release_edges();}pls::cs::Ref<pls::cs::Object> Invoke(){{ return pls::cs::box(([&]() -> std::int64_t { return pls::kairo::native_heap_total(); }())); }}};auto cs_closure=pls::cs::make_ref<cs_closure_b0fcc6112c9df641>();return pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>::bind_identity(cs_closure,nullptr,std::string("M:PlsPortGeneratedBootstrap.Source.TotalHeapMemory:4648"),[weak=std::weak_ptr<cs_closure_b0fcc6112c9df641>(cs_closure)]()->pls::cs::Ref<pls::cs::Object>{auto target=weak.lock();if(!target)throw pls::cs::NullReferenceException();return target->Invoke();});}()); bool cs_arg1 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->RunOnUiThread(cs_arg0,cs_arg1); }()));
}
}

// M:PlsPortGeneratedBootstrap.Source.Translate(System.String)
pls::cs::String cs_99bb8e5b618e57bb(pls::cs::String v_value) { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = v_value; auto cs_arg1 = true; return pls::generated::cs_519a2204b16d0770(cs_arg0,cs_arg1); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.UpdateFep
bool cs_2eb79b51879e59c7() { cs_init_ed8eabc614ddcf9e();
{
return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_d37bccc1c3814fc6>>(([&]() -> pls::cs::Ref<cs_d37bccc1c3814fc6> { return cs_17329e66670990a9(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c54513f5ba5b96e8(cs_receiver); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.UpdateKairo(kairo.unity.system.KairoBase)
void cs_762af1e562b96b8a(pls::cs::Ref<cs_b489b0d33bb37bb8> v_value) { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b489b0d33bb37bb8>>(v_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->cs_virtual_9ca5e184bd541bee(); }());
}
}

// M:PlsPortGeneratedBootstrap.Source.Yield
void cs_d4ade149898c4a1b() { cs_init_ed8eabc614ddcf9e();
{
([&]() -> void { cs_012506043193cb2a(); }());
}
}
}
