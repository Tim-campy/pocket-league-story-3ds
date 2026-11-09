// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_1815a6964debf82a.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
#include "game_generated_type_6485f92c2f04639f.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_834c8c593e682d3f.hpp"
#include "game_generated_type_8f8054b388e3f93e.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_9cade6927d6e0bf3.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "game_generated_type_b728593e3dcffe31.hpp"
#include "game_generated_type_e315dac1df3b175d.hpp"
#include "generated/portable_generated_type_51222df74ac70bab.hpp"
#include "generated/portable_generated_type_8c57b816bbc8fd6e.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
#include "generated/portable_generated_type_f8b20a4d1d9d695f.hpp"
#include "generated/portable_generated_type_51222df74ac70bab_templates.hpp"
namespace pls::game {

void cs_834c8c593e682d3f::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_5451b2154f09f4c5::trace_edges(visitor);pls::cs::trace_value(cs_c055bfbe1ac2f554,visitor);pls::cs::trace_value(cs_2581a7e6009bd9b6,visitor);pls::cs::trace_value(cs_ece80ff931788b9c,visitor);pls::cs::trace_value(cs_d9bec971965399ca,visitor);pls::cs::trace_value(cs_5b89dc10215c3470,visitor);pls::cs::trace_value(cs_ca0d47b3cd292341,visitor);pls::cs::trace_value(cs_7122a25d76f90581,visitor);}

void cs_834c8c593e682d3f::release_edges(){cs_5451b2154f09f4c5::release_edges();pls::cs::release_value(cs_c055bfbe1ac2f554);pls::cs::release_value(cs_2581a7e6009bd9b6);pls::cs::release_value(cs_ece80ff931788b9c);pls::cs::release_value(cs_d9bec971965399ca);pls::cs::release_value(cs_5b89dc10215c3470);pls::cs::release_value(cs_ca0d47b3cd292341);pls::cs::release_value(cs_7122a25d76f90581);}

void cs_834c8c593e682d3f::Draw(pls::cs::Ref<pls::kairo::Graphics> v_g) {cs_660d7ba4c4c68b54(std::static_pointer_cast<cs_834c8c593e682d3f>(shared_from_this()),v_g);}

bool cs_834c8c593e682d3f::Finish() {return cs_93c486009381ff04(std::static_pointer_cast<cs_834c8c593e682d3f>(shared_from_this()));}

std::int32_t cs_834c8c593e682d3f::GetHashCode() {return cs_dfc26b43dd564060(std::static_pointer_cast<cs_834c8c593e682d3f>(shared_from_this()));}

std::int32_t cs_834c8c593e682d3f::GetTouchValue(std::int32_t v_type,std::int32_t v_index) {return cs_7e79fe9d6b3a0ee0(std::static_pointer_cast<cs_834c8c593e682d3f>(shared_from_this()),v_type,v_index);}

bool cs_834c8c593e682d3f::Init() {return cs_9ee887a59d97f3f5(std::static_pointer_cast<cs_834c8c593e682d3f>(shared_from_this()));}

bool cs_834c8c593e682d3f::Resume() {return cs_707d993c797a341d(std::static_pointer_cast<cs_834c8c593e682d3f>(shared_from_this()));}

void cs_834c8c593e682d3f::SetTouchValue(std::int32_t v_type,std::int32_t v_value) {cs_baa0bbbca4f4ad6b(std::static_pointer_cast<cs_834c8c593e682d3f>(shared_from_this()),v_type,v_value);}

pls::cs::String cs_834c8c593e682d3f::ToString() {return cs_3eb04e00e91bbe03(std::static_pointer_cast<cs_834c8c593e682d3f>(shared_from_this()));}

bool cs_834c8c593e682d3f::Update() {return cs_124cf63141f56075(std::static_pointer_cast<cs_834c8c593e682d3f>(shared_from_this()));}

static pls::cs::Array<pls::cs::Array<std::int32_t>> cs_96890a1370dfa5a5_value{};

void cs_init_834c8c593e682d3f(){static pls::cs::TypeInitState state;state.run("form.RankForm",[](){
cs_96890a1370dfa5a5_value = pls::cs::evaluate_type_initializer_field("F:form.RankForm.softLabels_",[&](){return ([&](){auto cs_initial_array_308=pls::cs::Array<pls::cs::Array<std::int32_t>>::make(1);cs_initial_array_308.at(0)=pls::assets::baked_array<std::int32_t>("7cdcf10cc8c0b93688e904357a4dde852cf5ef34f56ad44138f7fc04a1112e54");return cs_initial_array_308;}());});

});}

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_96890a1370dfa5a5(){cs_init_834c8c593e682d3f();return cs_96890a1370dfa5a5_value;}

// M:form.RankForm._draw(kairo.unity.ui.Graphics)
void cs_43df0061ad8370e4(pls::cs::Ref<cs_834c8c593e682d3f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm._draw(kairo.unity.ui.Graphics)",game);
{
std::int32_t v_num_2260 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
pls::cs::Ref<pls::kairo::Font> v_font_2277 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::kairo::Font> { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Font> cs_arg0 = pls::cs::Ref<pls::kairo::Font>{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetFont(cs_arg0); }());});
std::int64_t v_netHighScore_2309 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_9422ea01999c2f4b(cs_receiver); }());
std::int64_t v_value_2358 = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c13ac9fb15b1936e(cs_receiver); }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ece80ff931788b9c; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_73e8db267cf0751e(cs_receiver); }()); v_netHighScore_2309 = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int64_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f9661335e04b605e(cs_receiver); }()); v_value_2358 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ca0d47b3cd292341; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (([&]() -> bool { return cs_6f798e6a602077c1(); }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc8ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaaull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg4 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x30cf" u"\x30a4" u"\x30b9" u"\x30b3" u"\x30a2" u"\x0020" u"",6)); return cs_f37fe52fbf5cb7ca(cs_arg0); }()); auto cs_right = pls::cs::String(std::u16string(u"\x0020" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ece80ff931788b9c; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(v_num_2260); return pls::cs::String::concat(cs_left,cs_right); }()); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bff8af433f297883(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
} else {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc8ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaaull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::String cs_arg4 = ([&]() { auto cs_left = ([&]() { auto cs_left = ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x30cf" u"\x30a4" u"\x30b9" u"\x30b3" u"\x30a2" u"\x0020" u"",6)); auto cs_right = pls::game::cs_integer_string((([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ece80ff931788b9c; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()))); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::cs::String(std::u16string(u"\x002f" u"",1)); return pls::cs::String::concat(cs_left,cs_right); }()); auto cs_right = pls::game::cs_integer_string(v_num_2260); return pls::cs::String::concat(cs_left,cs_right); }()); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff4ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_bff8af433f297883(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5); }());
}
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2cull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c055bfbe1ac2f554; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2aull)); pls::cs::Ref<cs_9cade6927d6e0bf3> cs_arg4 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return cs_172796b34f9ae01c(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg2 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc1ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c055bfbe1ac2f554; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::div_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2aull)); pls::cs::Ref<cs_9cade6927d6e0bf3> cs_arg4 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ca35823e7549127; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x18ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x12ull)); return cs_172796b34f9ae01c(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
pls::cs::String v_text_2961 = pls::cs::String(std::u16string(u"\x6700" u"\x9ad8" u"\x30af" u"\x30ea" u"\x30a2" u"\x30dd" u"\x30a4" u"\x30f3" u"\x30c8" u"",9));
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ece80ff931788b9c; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x003c" u"\x0030" u"\x003e" u"\x5e74" u"\x307e" u"\x3067" u"\x306e" u"\x6700" u"\x9ad8" u"\x8cc7" u"\x91d1" u"",11)); std::int64_t cs_arg1 = pls::cs::cast_integral<std::int64_t>(std::uint64_t(0x8ull)); return cs_14671e0a22aaaefd(cs_arg0,cs_arg1); }()); v_text_2961 = cs_value; return cs_value; }());
}
std::int32_t v_num2_3067 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfffffffffffffff7ull));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc8ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text_2961; float cs_arg1 = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x42f00000u); auto cs_right = ([&]() -> float { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_2277); pls::cs::String cs_arg0 = v_text_2961; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidthF(cs_arg0); }());}); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }()); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x44ull)); auto cs_right = v_num2_3067; return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());});
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4cull)); v_num2_3067 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ced2971dae7b95b3; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbull)); return cs_array.get_Item(cs_index); }()); float cs_arg1 = pls::game::cs_f32(0x41e80000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_3067; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2); }());});
pls::cs::String v_text2_3288 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_cf8366a706eb588f; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d5b37f60e20607b6; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ece80ff931788b9c; }()); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());
std::int32_t v_num3_3337 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_y_3355 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num2_3067; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x33ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num4_3383 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1aull));
pls::cs::Ref<cs_75707aa3f1629c85> v_instance_3407 = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }());
for (std::int32_t v_i_3455 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3455; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b89dc10215c3470; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3455; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3455 = cs_new; return cs_old; }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num4_3383; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = ([&]() -> std::int32_t { auto cs_left = v_num4_3383; auto cs_right = v_i_3455; return pls::cs::mul_i32(cs_left,cs_right); }()); return pls::cs::add_i32(cs_left,cs_right); }()); v_num3_3337 = cs_value; return cs_value; }());
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData_3551 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b89dc10215c3470; }())); std::int32_t cs_arg0 = v_i_3455; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
std::int32_t v_frame_3610 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c055bfbe1ac2f554; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); return pls::cs::mod_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::div_i32(cs_left,cs_right); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(v_instance_3407); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = ([&]() { auto cs_receiver = v_instance_3407; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ffca9d08cd4d3d67; }()); std::int32_t cs_arg2 = ([&]() { auto cs_receiver = v_playerData_3551; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ed4c8a89aa2713d9; }()); std::int32_t cs_arg3 = v_frame_3610; std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_ffc650d6a0f99dae(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75707aa3f1629c85>>(v_instance_3407); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = v_num3_3337; std::int32_t cs_arg2 = v_y_3355; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c68c25013635ec80(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x48ull)); v_num2_3067 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text2_3288; float cs_arg1 = ([&]() -> float { auto cs_left = pls::game::cs_f32(0x42f00000u); auto cs_right = ([&]() -> float { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_2277); pls::cs::String cs_arg0 = v_text2_3288; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidthF(cs_arg0); }());}); auto cs_right = pls::game::cs_f32(0x40000000u); return (cs_left / cs_right); }()); return (cs_left - cs_right); }()); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5eull)); auto cs_right = v_num2_3067; return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());});
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x44ull)); v_num2_3067 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc8ull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\xff8a" u"\xff72" u"\xff7d" u"\xff7a" u"\xff71" u"",5)); float cs_arg1 = pls::game::cs_f32(0x42680000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x76ull)); auto cs_right = v_num2_3067; return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());});
pls::cs::String v_text3_4038 = pls::cs::String(u"");
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ece80ff931788b9c; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x0050" u"",1)); std::int64_t cs_arg1 = v_value_2358; return cs_467f665d29a30c7d(cs_arg0,cs_arg1); }()); v_text3_4038 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ece80ff931788b9c; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = pls::cs::String(std::u16string(u"\x4e07" u"\x5186" u"",2)); std::int64_t cs_arg1 = v_value_2358; return cs_8479246d6a9e3c73(cs_arg0,cs_arg1); }()); v_text3_4038 = cs_value; return cs_value; }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xc8ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x64ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3cull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = v_text3_4038; float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbaull)); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(v_font_2277); pls::cs::String cs_arg0 = v_text3_4038; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->StringWidth(cs_arg0); }());}); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x76ull)); auto cs_right = v_num2_3067; return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2); }());});
}
}
}
}
}

// M:form.RankForm.#ctor
pls::cs::Ref<cs_834c8c593e682d3f> cs_6b785705076d0599() { cs_init_834c8c593e682d3f();
{ auto cs_this = pls::cs::make_ref<cs_834c8c593e682d3f>(); cs_6b785705076d0599_init(cs_this); return cs_this; }
}

void cs_6b785705076d0599_init(pls::cs::Ref<cs_834c8c593e682d3f> cs_this) {
cs_this->cs_5b89dc10215c3470 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.#ctor",game);
{

}
}
}

// M:form.RankForm.ChangeState(System.Int32)
void cs_d9266d0e56282574(pls::cs::Ref<cs_834c8c593e682d3f> cs_this,std::int32_t v_state) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.ChangeState(System.Int32)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_state; pls::game::cs_require(cs_target)->cs_ca0d47b3cd292341 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_834c8c593e682d3f>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_41a080d5c8269bab(cs_receiver); }());
}
}
}
}

// M:form.RankForm.Draw(kairo.unity.ui.Graphics)
void cs_660d7ba4c4c68b54(pls::cs::Ref<cs_834c8c593e682d3f> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.Draw(kairo.unity.ui.Graphics)",game);
{
std::int32_t v_num_1992 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
std::int32_t v_num2_2008 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xdull));
([&]() { auto cs_old = v_num_1992; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num_1992 = cs_value; return cs_value; }());
([&]() { auto cs_old = v_num2_2008; auto cs_rhs = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_num2_2008 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = v_num_1992; std::int32_t cs_arg1 = v_num2_2008; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());});
pls::cs::run_finally([&]() -> void { {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_834c8c593e682d3f>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_43df0061ad8370e4(cs_receiver,cs_arg0); }());
} }, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetOrigin(cs_arg0,cs_arg1); }());});
});
}
}
}
}

// M:form.RankForm.Finish
bool cs_93c486009381ff04(pls::cs::Ref<cs_834c8c593e682d3f> cs_this) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.Finish",game);
{
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7122a25d76f90581; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7122a25d76f90581; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9cd9f49f64199fc(cs_receiver); }());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Ref<cs_b728593e3dcffe31>{}; pls::game::cs_require(cs_target)->cs_7122a25d76f90581 = cs_value; return cs_value; }());
return true;
}
}
}
}

// M:form.RankForm.GetHashCode
std::int32_t cs_dfc26b43dd564060(pls::cs::Ref<cs_834c8c593e682d3f> cs_this) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:form.RankForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t cs_7e79fe9d6b3a0ee0(pls::cs::Ref<cs_834c8c593e682d3f> cs_this,std::int32_t v_type,std::int32_t v_index) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.GetTouchValue(System.Int32,System.Int32)",game);
{
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
}
}
}
}

// M:form.RankForm.Init
bool cs_9ee887a59d97f3f5(pls::cs::Ref<cs_834c8c593e682d3f> cs_this) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.Init",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
if (([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b89dc10215c3470; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left > cs_right); }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b89dc10215c3470; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_54587d7da8ff8dbc(cs_receiver); }());});
}
pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> v_vector_926 = ([&]() -> pls::cs::Ref<pls::generated::cs_f8b20a4d1d9d695f> { return pls::generated::cs_b5d75502f0a9aa7e(); }());
for (std::int32_t v_i_961 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_961; auto cs_right = (([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_961; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_961 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_playerData_1019 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ab1e9b1101610757; }()); auto cs_index = v_i_961; return cs_array.get_Item(cs_index); }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = v_playerData_1019; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77b7447583c10f78; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_926); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_playerData_1019); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
}
}
for (std::int32_t v_j_1159 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_1159; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_926); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1159; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1159 = cs_new; return cs_old; }())) {
pls::cs::Ref<cs_8f8054b388e3f93e> v_obj_1210 = pls::cs::unbox<pls::cs::Ref<cs_8f8054b388e3f93e>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_926); std::int32_t cs_arg0 = v_j_1159; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}));
std::int32_t v_num_1257 = ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_926); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_c55367423dbb79a1(cs_receiver); }());}); return cs_fd17a5b5e4e50b65(cs_arg0); }());
if (([&]() -> bool { auto cs_left = v_num_1257; auto cs_right = v_j_1159; return (cs_left == cs_right); }())) {
continue;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_926); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_926); std::int32_t cs_arg0 = v_num_1257; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}); std::int32_t cs_arg1 = v_j_1159; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_221133265c339075(cs_receiver,cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_926); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_obj_1210); std::int32_t cs_arg1 = v_num_1257; if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_221133265c339075(cs_receiver,cs_arg0,cs_arg1); }());});
}
for (std::int32_t v_k_1422 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_k_1422; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_1422; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_1422 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5b89dc10215c3470; }())); pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::cs::Object> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_51222df74ac70bab<pls::cs::Ref<pls::cs::Object>>>>(v_vector_926); std::int32_t cs_arg0 = v_k_1422; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_46529d25e14daec6(cs_receiver,cs_arg0); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_84f04a1c6da0e1ea(cs_receiver,cs_arg0); }());});
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_834c8c593e682d3f>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d9266d0e56282574(cs_receiver,cs_arg0); }());
return true;
}
}
}
}

// M:form.RankForm.Resume
bool cs_707d993c797a341d(pls::cs::Ref<cs_834c8c593e682d3f> cs_this) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.Resume",game);
{
return true;
}
}
}
}

// M:form.RankForm.SetSoftLabel
void cs_41a080d5c8269bab(pls::cs::Ref<cs_834c8c593e682d3f> cs_this) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.SetSoftLabel",game);
{
pls::cs::Array<std::int32_t> v_array_4668 = ([&]() { auto cs_array = cs_96890a1370dfa5a5(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ca0d47b3cd292341; }()); return cs_array.get_Item(cs_index); }());
if (([&]() { auto cs_left = pls::cs::box(v_array_4668); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
return;
}
{
std::int32_t v_num_4737 = ([&]() { auto cs_array = v_array_4668; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_4757 = ([&]() { auto cs_array = v_array_4668; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num_4737; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num2_4757; return cs_array.get_Item(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
}
}
}
}
}

// M:form.RankForm.SetTouchValue(System.Int32,System.Int32)
void cs_baa0bbbca4f4ad6b(pls::cs::Ref<cs_834c8c593e682d3f> cs_this,std::int32_t v_type,std::int32_t v_value) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.SetTouchValue(System.Int32,System.Int32)",game);
{

}
}
}
}

// M:form.RankForm.ToString
pls::cs::String cs_3eb04e00e91bbe03(pls::cs::Ref<cs_834c8c593e682d3f> cs_this) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.ToString",game);
{
return ([&]() { auto cs_left = pls::cs::String(std::u16string(u"\x0052" u"\x0061" u"\x006e" u"\x006b" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"\x003a" u"",9)); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ca0d47b3cd292341; }())); return pls::cs::String::concat(cs_left,cs_right); }());
}
}
}
}

// M:form.RankForm.Update
bool cs_124cf63141f56075(pls::cs::Ref<cs_834c8c593e682d3f> cs_this) { cs_init_834c8c593e682d3f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.Update",game);
{
std::int32_t v_num_1582 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c055bfbe1ac2f554; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_c055bfbe1ac2f554 = cs_value; return cs_value; }());
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ca0d47b3cd292341; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }())) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyRepeat(cs_arg0); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ece80ff931788b9c; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_num_1582; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = v_num_1582; return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_ece80ff931788b9c = cs_value; return cs_value; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x40000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyRepeat(cs_arg0); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ece80ff931788b9c; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = v_num_1582; return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_ece80ff931788b9c = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_c7994eb9bfc0f823(cs_receiver,cs_arg0); }())) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());});
}
}
return true;
}
}
}
}
}
