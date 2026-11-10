// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
#include "game_generated_type_6485f92c2f04639f.hpp"
#include "game_generated_type_757516ce190cf813.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_9cade6927d6e0bf3.hpp"
#include "game_generated_type_b728593e3dcffe31.hpp"
#include "game_generated_type_c8e1f3d3f96670c6.hpp"
#include "game_generated_type_c9cd56cdd30ecf7a.hpp"
#include "game_generated_type_e315dac1df3b175d.hpp"
#include "game_generated_type_ed8eabc614ddcf9e.hpp"
#include "generated/portable_generated_type_e7d772862db62924.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
namespace pls::game {

void cs_c9cd56cdd30ecf7a::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_5451b2154f09f4c5::trace_edges(visitor);pls::cs::trace_value(cs_8b6d6645626719c8,visitor);pls::cs::trace_value(cs_63d0f76aa2b47e31,visitor);pls::cs::trace_value(cs_ad5739001c0302dd,visitor);pls::cs::trace_value(cs_98dccec80c6f7e60,visitor);pls::cs::trace_value(cs_ea3cf9e655c6c62a,visitor);pls::cs::trace_value(cs_5622b54c56329dfa,visitor);}

void cs_c9cd56cdd30ecf7a::release_edges(){cs_5451b2154f09f4c5::release_edges();pls::cs::release_value(cs_8b6d6645626719c8);pls::cs::release_value(cs_63d0f76aa2b47e31);pls::cs::release_value(cs_ad5739001c0302dd);pls::cs::release_value(cs_98dccec80c6f7e60);pls::cs::release_value(cs_ea3cf9e655c6c62a);pls::cs::release_value(cs_5622b54c56329dfa);}

bool cs_c9cd56cdd30ecf7a::CheckMainWindow() {return cs_27c2d458904084a3(std::static_pointer_cast<cs_c9cd56cdd30ecf7a>(shared_from_this()));}

bool cs_c9cd56cdd30ecf7a::Finish() {return cs_b220f0282476e9dd(std::static_pointer_cast<cs_c9cd56cdd30ecf7a>(shared_from_this()));}

bool cs_c9cd56cdd30ecf7a::Init() {return cs_d89100ce3e5567b3(std::static_pointer_cast<cs_c9cd56cdd30ecf7a>(shared_from_this()));}

pls::cs::String cs_c9cd56cdd30ecf7a::ToString() {return cs_e349d7428c1381fa(std::static_pointer_cast<cs_c9cd56cdd30ecf7a>(shared_from_this()));}

static pls::cs::Delegate<void()> cs_169d42739a93e08e_value{};

static bool cs_40a53d57b75c7593_value{};

void cs_init_c9cd56cdd30ecf7a(){static pls::cs::TypeInitState state;state.run("system.form.LanguageForm",[](){

});}

pls::cs::Delegate<void()>& cs_169d42739a93e08e(){cs_init_c9cd56cdd30ecf7a();return cs_169d42739a93e08e_value;}

bool& cs_40a53d57b75c7593(){cs_init_c9cd56cdd30ecf7a();return cs_40a53d57b75c7593_value;}

// M:system.form.LanguageForm.#ctor
pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_b8786f8cf097476e() { cs_init_c9cd56cdd30ecf7a();
{ auto cs_this = pls::cs::make_ref<cs_c9cd56cdd30ecf7a>(); cs_b8786f8cf097476e_init(cs_this); return cs_this; }
}

void cs_b8786f8cf097476e_init(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) {
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x38cull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.#ctor",game);
{

}
}
}

// M:system.form.LanguageForm.CheckMainWindow
bool cs_27c2d458904084a3(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) { cs_init_c9cd56cdd30ecf7a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.CheckMainWindow",game);
{
return false;
}
}
}
}

// M:system.form.LanguageForm.DrawButton(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Threading.ThreadStart)
void cs_da7545682de782c6(pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,pls::cs::Delegate<void()> v_callback) { cs_init_c9cd56cdd30ecf7a();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.DrawButton(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Threading.ThreadStart)",game);
{
([&]() { auto cs_value = v_callback; cs_169d42739a93e08e() = cs_value; return cs_value; }());
pls::cs::Ref<cs_e315dac1df3b175d> v_instance_5646 = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushOrigin(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_value_5711 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x133a066ull));
bool v_flag_5737 = ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_5646); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg1 = v_value_5711; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_559ffe43566a7dfb(cs_receiver,cs_arg0,cs_arg1); }());
pls::cs::Ref<cs_b728593e3dcffe31> v_resource_5794 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::IApplication>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::IApplication> { return pls::kairo::IApplication::GetCurrentApp(); }());})); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_910a62f2dd3a48eb(cs_receiver); }());});
pls::cs::Array<std::int32_t> v_sprite_5858 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_resource_5794; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f424f89d435cbb04(cs_receiver,cs_arg0,cs_arg1); }());
if (v_flag_5737) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushBlendMode(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = pls::game::cs_f32(0x3f8ccccdu); float cs_arg1 = pls::game::cs_f32(0x3f8ccccdu); auto cs_arg2 = pls::game::cs_f32(0x00000000u); auto cs_arg3 = pls::game::cs_f32(0x00000000u); return cs_e8ceb82625f5a10e(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_arg0 = ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { float cs_arg0 = pls::game::cs_f32(0x3f000000u); float cs_arg1 = pls::game::cs_f32(0x3f000000u); auto cs_arg2 = pls::game::cs_f32(0x00000000u); auto cs_arg3 = pls::game::cs_f32(0x00000000u); return cs_e8ceb82625f5a10e(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9d946ea24c94dbc(cs_receiver,cs_arg0); }());});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(v_resource_5794); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_x); float cs_arg2 = static_cast<float>(v_y); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bece04d9ec4c4353(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());});
if (v_flag_5737) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopMatrix(); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopBlendMode(); }());});
}
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = v_x; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite_5858; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_y; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite_5858; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite_5858; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg5 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite_5858; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); std::int32_t cs_arg6 = v_value_5711; return cs_554ec638efacdc2e(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopOrigin(); }());});
if ((pls::generated::cs_b0827224162a4f93() && (!(cs_40a53d57b75c7593())))) {
if ((!(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { return pls::kairo::Graphics::IsAutoTextLayout(); }());})))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x81ea" u"\x52d5" u"\x30c6" u"\x30ad" u"\x30b9" u"\x30c8" u"\x30ec" u"\x30a4" u"\x30a2" u"\x30a6" u"\x30c8" u"\x304c" u"\x7121" u"\x52b9" u"\x306b" u"\x306a" u"\x3063" u"\x3066" u"\x3044" u"\x307e" u"\x3059" u"\x3002" u"\x000a" u"\x0047" u"\x0072" u"\x0061" u"\x0070" u"\x0068" u"\x0069" u"\x0063" u"\x0073" u"\x002e" u"\x0053" u"\x0065" u"\x0074" u"\x0041" u"\x0075" u"\x0074" u"\x006f" u"\x0054" u"\x0065" u"\x0078" u"\x0074" u"\x004c" u"\x0061" u"\x0079" u"\x006f" u"\x0075" u"\x0074" u"\x0028" u"\x0029" u"\x0020" u"\x3092" u"\x4f7f" u"\x3063" u"\x3066" u"\x6709" u"\x52b9" u"\x306b" u"\x3059" u"\x308b" u"\x4e8b" u"\x3092" u"\x63a8" u"\x5968" u"\x3057" u"\x307e" u"\x3059" u"\x3002" u"",69);return cs_literal;}()); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); cs_4d9093772b7b2178(cs_arg0,cs_arg1); }());});
}
([&]() { auto cs_value = true; cs_40a53d57b75c7593() = cs_value; return cs_value; }());
}
}
}
}

// M:system.form.LanguageForm.DrawButton(kairo.unity.ui.Graphics,System.Threading.ThreadStart,System.Int32)
void cs_eee149edf159a78f(pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::Delegate<void()> v_callback,std::int32_t v_anchor) { cs_init_c9cd56cdd30ecf7a();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.DrawButton(kairo.unity.ui.Graphics,System.Threading.ThreadStart,System.Int32)",game);
{
pls::cs::Ref<cs_e315dac1df3b175d> v_instance_5001 = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_arg2 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PushOrigin(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_originalUnusedSlot1_5083 = std::int32_t{};
std::int32_t v_x_5109 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull));
std::int32_t v_y_5124 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull));
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_5001); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); v_x_5109 = cs_value; return cs_value; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_5001); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_x_5109 = cs_value; return cs_value; }());
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_5001); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); v_y_5124 = cs_value; return cs_value; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = v_anchor; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_5001); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_y_5124 = cs_value; return cs_value; }());
}
([&]() -> void { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_x_5109; std::int32_t cs_arg2 = v_y_5124; pls::cs::Delegate<void()> cs_arg3 = v_callback; cs_da7545682de782c6(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopOrigin(); }());});
}
}
}

// M:system.form.LanguageForm.Finish
bool cs_b220f0282476e9dd(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) { cs_init_c9cd56cdd30ecf7a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.Finish",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2951e25803cf3104(cs_receiver); }());
return true;
}
}
}
}

// M:system.form.LanguageForm.Init
bool cs_d89100ce3e5567b3(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) { cs_init_c9cd56cdd30ecf7a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.Init",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
return true;
}
}
}
}

// M:system.form.LanguageForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool cs_233f6a98cc8c5aff(pls::cs::Ref<cs_757516ce190cf813> v_e) { cs_init_c9cd56cdd30ecf7a();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.OnTouchEvent(kairo.unity.surface.TouchEvent)",game);
{
pls::cs::Ref<cs_3a3d09f9e75a32d2> v_component_6624 = ([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_613db60c2c58fddc; }());
pls::cs::Ref<cs_6485f92c2f04639f> v_instance_6664 = ([&]() -> pls::cs::Ref<cs_6485f92c2f04639f> { return cs_2daa26d559c2fca8(); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_6624; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0203776c95852fed; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left == cs_right); }()))) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = v_component_6624; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bf6f23b78c4832ac; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x133a066ull)); return (cs_left == cs_right); }())) {
switch (([&]() { auto cs_receiver = v_e; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4c4f6c2ffd41c9ca; }())) {
case 1:
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(v_instance_6664); pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/form/LanguageForm.cs:M:system.form.LanguageForm.OnTouchEvent(kairo.unity.surface.TouchEvent):6812",([&]() -> pls::cs::Ref<cs_c9cd56cdd30ecf7a> { return cs_b8786f8cf097476e(); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Push(cs_arg0); }());});
break;
}
}
return false;
}
}
return true;
}
}
}

// M:system.form.LanguageForm.ToString
pls::cs::String cs_e349d7428c1381fa(pls::cs::Ref<cs_c9cd56cdd30ecf7a> cs_this) { cs_init_c9cd56cdd30ecf7a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.ToString",game);
{
return ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x004c" u"\x0061" u"\x006e" u"\x0067" u"\x0075" u"\x0061" u"\x0067" u"\x0065" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"",12);return cs_literal;}());
}
}
}
}
}
