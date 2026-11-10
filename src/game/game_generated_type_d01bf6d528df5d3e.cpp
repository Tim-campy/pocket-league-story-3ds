// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_1ab688350081022a.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_3a3d09f9e75a32d2.hpp"
#include "game_generated_type_487b2c2b346d5c73.hpp"
#include "game_generated_type_5451b2154f09f4c5.hpp"
#include "game_generated_type_6485f92c2f04639f.hpp"
#include "game_generated_type_6517d63c01870958.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_851a96be86c28dd2.hpp"
#include "game_generated_type_87fb4d668ea5580b.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_9cade6927d6e0bf3.hpp"
#include "game_generated_type_b728593e3dcffe31.hpp"
#include "game_generated_type_d01bf6d528df5d3e.hpp"
#include "game_generated_type_e00832a42e12ec3b.hpp"
#include "game_generated_type_e315dac1df3b175d.hpp"
#include "game_generated_type_fd683372658feff4.hpp"
namespace pls::game {

void cs_d01bf6d528df5d3e::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_5451b2154f09f4c5::trace_edges(visitor);pls::cs::trace_value(cs_dc1c42d4d7e082e0,visitor);pls::cs::trace_value(cs_e5f85072dd4bae90,visitor);pls::cs::trace_value(cs_b8a6cd3430fb5981,visitor);pls::cs::trace_value(cs_3a238febfe0fec26,visitor);pls::cs::trace_value(cs_abcd3f40ba2c255e,visitor);pls::cs::trace_value(cs_5d81c03afa7f452c,visitor);pls::cs::trace_value(cs_5145f5183f9e37e4,visitor);pls::cs::trace_value(cs_e13125ff785351a8,visitor);}

void cs_d01bf6d528df5d3e::release_edges(){cs_5451b2154f09f4c5::release_edges();pls::cs::release_value(cs_dc1c42d4d7e082e0);pls::cs::release_value(cs_e5f85072dd4bae90);pls::cs::release_value(cs_b8a6cd3430fb5981);pls::cs::release_value(cs_3a238febfe0fec26);pls::cs::release_value(cs_abcd3f40ba2c255e);pls::cs::release_value(cs_5d81c03afa7f452c);pls::cs::release_value(cs_5145f5183f9e37e4);pls::cs::release_value(cs_e13125ff785351a8);}

bool cs_d01bf6d528df5d3e::CheckMainWindow() {return cs_3ce550173a351902(std::static_pointer_cast<cs_d01bf6d528df5d3e>(shared_from_this()));}

void cs_d01bf6d528df5d3e::Draw(pls::cs::Ref<pls::kairo::Graphics> v_g) {cs_bcecdee954fd1704(std::static_pointer_cast<cs_d01bf6d528df5d3e>(shared_from_this()),v_g);}

bool cs_d01bf6d528df5d3e::Finish() {return cs_4cbf34065e9c29cc(std::static_pointer_cast<cs_d01bf6d528df5d3e>(shared_from_this()));}

std::int32_t cs_d01bf6d528df5d3e::GetHashCode() {return cs_424cc8dfa482f7f5(std::static_pointer_cast<cs_d01bf6d528df5d3e>(shared_from_this()));}

std::int32_t cs_d01bf6d528df5d3e::GetTouchValue(std::int32_t v_type,std::int32_t v_index) {return cs_f2e4ff8d5073c2eb(std::static_pointer_cast<cs_d01bf6d528df5d3e>(shared_from_this()),v_type,v_index);}

bool cs_d01bf6d528df5d3e::Init() {return cs_fd09666c1ad0b529(std::static_pointer_cast<cs_d01bf6d528df5d3e>(shared_from_this()));}

bool cs_d01bf6d528df5d3e::Resume() {return cs_2a2e46575659084c(std::static_pointer_cast<cs_d01bf6d528df5d3e>(shared_from_this()));}

void cs_d01bf6d528df5d3e::SetTouchValue(std::int32_t v_type,std::int32_t v_value) {cs_784b75a2e8fe91ae(std::static_pointer_cast<cs_d01bf6d528df5d3e>(shared_from_this()),v_type,v_value);}

pls::cs::String cs_d01bf6d528df5d3e::ToString() {return cs_83e48a5feada74ed(std::static_pointer_cast<cs_d01bf6d528df5d3e>(shared_from_this()));}

bool cs_d01bf6d528df5d3e::Update() {return cs_6ee8d12c93887b93(std::static_pointer_cast<cs_d01bf6d528df5d3e>(shared_from_this()));}

static pls::cs::Array<pls::cs::Array<std::int32_t>> cs_4ed30b03deb528a2_value{};

static pls::cs::Ref<cs_b728593e3dcffe31> cs_a251c18c9d0f913d_value{};

void cs_init_d01bf6d528df5d3e(){static pls::cs::TypeInitState state;state.run("system.form.LineupForm",[](){
cs_4ed30b03deb528a2_value = pls::cs::evaluate_type_initializer_field("F:system.form.LineupForm.configData_",[&](){return pls::source_allocations::completed("new_array","src/Assembly-CSharp/system/form/LineupForm.cs:M:system.form.LineupForm.#ctor:425",([&](){auto cs_initial_array_885=pls::cs::Array<pls::cs::Array<std::int32_t>>::make(1);cs_initial_array_885.at(0)=pls::source_allocations::completed("new_array","src/Assembly-CSharp/system/form/LineupForm.cs:M:system.form.LineupForm.#ctor:440",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull))));return cs_initial_array_885;}()));});

});}

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_4ed30b03deb528a2(){cs_init_d01bf6d528df5d3e();return cs_4ed30b03deb528a2_value;}

pls::cs::Ref<cs_b728593e3dcffe31>& cs_a251c18c9d0f913d(){cs_init_d01bf6d528df5d3e();return cs_a251c18c9d0f913d_value;}

// M:system.form.LineupForm.#ctor
pls::cs::Ref<cs_d01bf6d528df5d3e> cs_54b9e88b29d65e8e() { cs_init_d01bf6d528df5d3e();
{ auto cs_this = pls::cs::make_ref<cs_d01bf6d528df5d3e>(); cs_54b9e88b29d65e8e_init(cs_this); return cs_this; }
}

void cs_54b9e88b29d65e8e_init(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) {
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x387ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.#ctor",game);
{

}
}
}

// M:system.form.LineupForm.#ctor(System.Int32)
pls::cs::Ref<cs_d01bf6d528df5d3e> cs_bde331d144b7e233(std::int32_t v_type) { cs_init_d01bf6d528df5d3e();
{ auto cs_this = pls::cs::make_ref<cs_d01bf6d528df5d3e>(); cs_bde331d144b7e233_init(cs_this,v_type); return cs_this; }
}

void cs_bde331d144b7e233_init(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,std::int32_t v_type) {
([&]() { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x387ull)); cs_1980f3b6859ab3da_init(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this),cs_arg0); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.#ctor(System.Int32)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_type; pls::game::cs_require(cs_target)->cs_dc1c42d4d7e082e0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_e5f85072dd4bae90 = cs_value; return cs_value; }());
}
}
}

// M:system.form.LineupForm.CheckMainWindow
bool cs_3ce550173a351902(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.CheckMainWindow",game);
{
return false;
}
}
}
}

// M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics)
void cs_bcecdee954fd1704(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_d85e674b28736422(cs_receiver,cs_arg0); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { bool cs_arg0 = false; pls::kairo::Font::PushLocalizeSetting(cs_arg0); }());});
pls::cs::Array<std::int32_t> v_sprite_1420 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_9cade6927d6e0bf3>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_a251c18c9d0f913d(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b957309a0939d3d1; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f424f89d435cbb04(cs_receiver,cs_arg0,cs_arg1); }());
std::int32_t v_num_1477 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xf0ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
std::int32_t v_num2_1524 = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_070a99c8794546df(cs_receiver); }()); auto cs_right = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1eull)); return pls::cs::add_i32(cs_left,cs_right); }())); return pls::cs::sub_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x30aa" u"\x30b9" u"\x30b9" u"\x30e1" u"\x30a2" u"\x30d7" u"\x30ea" u"\x60c5" u"\x5831" u"",9);return cs_literal;}()); return cs_f54ac89fce23e89b(cs_arg0); }()); float cs_arg1 = pls::game::cs_f32(0x42f00000u); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_1524; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1full)); return pls::cs::sub_i32(cs_left,cs_right); }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawString(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_a251c18c9d0f913d(); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0e36fb5b2228e5c2; }()); auto cs_index = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); return cs_array.get_Item(cs_index); }()); float cs_arg1 = pls::game::cs_f32(0x00000000u); float cs_arg2 = static_cast<float>(v_num2_1524); float cs_arg3 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }())); float cs_arg4 = static_cast<float>(([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }())); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg7 = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg8 = ([&]() { auto cs_array = v_sprite_1420; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawScaledImage(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8); }());});
pls::cs::Ref<cs_fd683372658feff4> v_lineupData_1829 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); pls::cs::Ref<pls::kairo::Image> cs_arg0 = ([&]() -> pls::cs::Ref<pls::kairo::Image> { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(v_lineupData_1829); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aeee5b62db0f8f41(cs_receiver); }()); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num_1477; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num2_1524; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)); return pls::cs::add_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawImage(cs_arg0,cs_arg1,cs_arg2); }());});
std::int32_t v_num3_1919 = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_1477; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x28ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x21ull)); return pls::cs::add_i32(cs_left,cs_right); }());
std::int32_t v_num4_1948 = ([&]() -> std::int32_t { auto cs_left = v_num2_1524; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xcull)); return pls::cs::add_i32(cs_left,cs_right); }());
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); return (cs_left < cs_right); }()) && ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e13125ff785351a8; }()))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xbbull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4cull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(v_num3_1919); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num4_1948; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x16ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1aull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = pls::game::cs_f32(0x43200000u); float cs_arg3 = pls::game::cs_f32(0x42740000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
pls::cs::String v_explain_2158 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(v_lineupData_1829); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_0ee8c20531783d1b(cs_receiver); }());
std::int32_t v_num5_2201 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3aull));
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/form/LineupForm.cs:M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics):2223",([&]() -> pls::cs::Ref<cs_87fb4d668ea5580b> { return cs_049b13b83157cd05(); }())); pls::game::cs_require(cs_target)->cs_5d81c03afa7f452c = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); float cs_arg0 = pls::game::cs_f32(0x43200000u); float cs_arg1 = static_cast<float>(v_num5_2201); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_33bd53255618fce1(cs_receiver,cs_arg0,cs_arg1); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x22ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2be5ebb4744281a0(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); std::int32_t cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0,cs_arg1,cs_arg2); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_57d9a00224068c1c(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6c80e48b0bf350ca(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); pls::cs::String cs_arg0 = v_explain_2158; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_e3fe9411871b8a7e(cs_receiver,cs_arg0); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a0d538f5ac080fc1(cs_receiver); }());
std::int32_t v_height_2432 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_42908a7b6fab813f(cs_receiver); }());
if (([&]() -> bool { auto cs_left = v_height_2432; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num5_2201; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/system/form/LineupForm.cs:M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics):2514",pls::assets::baked_array<std::int32_t>("d51e48762bddbcdf57a692a84699c60601ff47656b993f41ed325e808706e8a4")); pls::game::cs_require(cs_target)->cs_5145f5183f9e37e4 = cs_value; return cs_value; }());
} else if (([&]() -> bool { auto cs_left = v_height_2432; auto cs_right = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num5_2201; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::div_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x10ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return (cs_left <= cs_right); }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/system/form/LineupForm.cs:M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics):2608",pls::assets::baked_array<std::int32_t>("b7cfac5dfb1a2d763e6170856ae228c3725c081ee5767083aedd9af53a88dbe5")); pls::game::cs_require(cs_target)->cs_5145f5183f9e37e4 = cs_value; return cs_value; }());
} else {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/system/form/LineupForm.cs:M:system.form.LineupForm.Draw(kairo.unity.ui.Graphics):2665",pls::assets::baked_array<std::int32_t>("a70e770ed15a63930146415eac3c9c49dedae9aa2574d0f7ff8b90ea0d3c9188")); pls::game::cs_require(cs_target)->cs_5145f5183f9e37e4 = cs_value; return cs_value; }());
}
}
std::int32_t v_num6_2710 = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a238febfe0fec26; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::sub_i32(cs_left,cs_right); }());
if ((([&]() -> bool { auto cs_left = v_num6_2710; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left >= cs_right); }()) && ([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()))) {
std::int32_t v_num7_2777 = ([&]() -> std::int32_t { auto cs_left = v_num6_2710; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return pls::cs::div_i32(cs_left,cs_right); }());
if (((!(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e13125ff785351a8; }()))) && ([&]() -> bool { auto cs_left = v_num7_2777; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5145f5183f9e37e4; }())).length(); return (cs_left >= cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_e13125ff785351a8 = cs_value; return cs_value; }());
}
if (([&]() -> bool { auto cs_left = v_num7_2777; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5145f5183f9e37e4; }())).length(); return (cs_left >= cs_right); }())) {
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5145f5183f9e37e4; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); v_num7_2777 = cs_value; return cs_value; }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = pls::game::cs_f32(0x00000000u); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num4_1948; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }())); float cs_arg3 = static_cast<float>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5145f5183f9e37e4; }()); auto cs_index = v_num7_2777; return cs_array.get_Item(cs_index); }())); auto cs_arg4 = true; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->ClipRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_87fb4d668ea5580b>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5d81c03afa7f452c; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; float cs_arg1 = static_cast<float>(v_num3_1919); float cs_arg2 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num4_1948; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::sub_i32(cs_left,cs_right); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d92f78fee96bd83(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->PopClip(); }());});
}
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e13125ff785351a8; }())) {
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg3 = v_num2_1524; std::int32_t cs_arg4 = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0bf30d2ac84a3b2d; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4c27f7203ac15d1e(cs_receiver); }()); std::int32_t cs_arg5 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4dull)); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); return cs_554ec638efacdc2e(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
std::int32_t v_num8_3162 = ([&]() -> std::int32_t { auto cs_left = v_num2_1524; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6dull)); return pls::cs::add_i32(cs_left,cs_right); }());
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e13125ff785351a8; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4full)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4full)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4full)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num_1477; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x31ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(v_num8_3162); float cs_arg2 = pls::game::cs_f32(0x43140000u); float cs_arg3 = pls::game::cs_f32(0x42140000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xd9ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xedull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_1477; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x31ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num8_3162; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = pls::game::cs_f32(0x43120000u); float cs_arg3 = pls::game::cs_f32(0x3f800000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6cull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xa7ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); float cs_arg0 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_num_1477; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x31ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg1 = static_cast<float>(([&]() -> std::int32_t { auto cs_left = v_num8_3162; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }())); float cs_arg2 = pls::game::cs_f32(0x43120000u); float cs_arg3 = pls::game::cs_f32(0x42080000u); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->FillRect(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xfeull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetColor(cs_arg0,cs_arg1,cs_arg2); }());});
pls::cs::Array<std::int32_t> v_array_3475 = ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_d01bf6d528df5d3e>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = ([&]() -> pls::cs::String { pls::cs::String cs_arg0 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x30bf" u"\x30a4" u"\x30c8" u"\x30eb" u"\x753b" u"\x9762" u"\x3078" u"",7);return cs_literal;}()); return cs_f54ac89fce23e89b(cs_arg0); }()); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x78ull)); std::int32_t cs_arg3 = ([&]() -> std::int32_t { auto cs_left = v_num8_3162; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xeull)); return pls::cs::add_i32(cs_left,cs_right); }()); std::int32_t cs_arg4 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); bool cs_arg5 = ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); return (cs_left == cs_right); }()); std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); bool cs_arg7 = false; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_1445009bb757ae06(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
pls::cs::Ref<cs_6517d63c01870958> v_opt_3596 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(([&]() -> pls::cs::Ref<cs_6517d63c01870958> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100ull)); return cs_93c9e5f80bde9aac(cs_arg0); }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x32ull)); std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x14ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_de6cd246e5da5ce1(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
([&]() -> pls::cs::Ref<cs_3a3d09f9e75a32d2> { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); std::int32_t cs_arg2 = ([&]() { auto cs_array = v_array_3475; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg3 = ([&]() { auto cs_array = v_array_3475; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg4 = ([&]() { auto cs_array = v_array_3475; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg5 = ([&]() { auto cs_array = v_array_3475; auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); std::int32_t cs_arg6 = ([&]() -> std::int32_t { auto cs_left = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); return (cs_left | cs_right); }()); pls::cs::Ref<cs_6517d63c01870958> cs_arg7 = v_opt_3596; return cs_5a06983504dd1383(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7); }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::kairo::Font::PopLocalizeSetting(); }());});
}
}
}
}

// M:system.form.LineupForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
pls::cs::Array<std::int32_t> cs_1445009bb757ae06(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,pls::cs::String v_str,std::int32_t v_x,std::int32_t v_y,std::int32_t v_anchor,bool v_active,std::int32_t v_margin,bool v_cursor) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)",game);
{
return ([&]() -> pls::cs::Array<std::int32_t> { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = v_g; pls::cs::String cs_arg1 = v_str; std::int32_t cs_arg2 = v_x; std::int32_t cs_arg3 = v_y; std::int32_t cs_arg4 = v_anchor; bool cs_arg5 = v_active; std::int32_t cs_arg6 = v_margin; bool cs_arg7 = v_cursor; pls::cs::Ref<pls::kairo::FormBase> cs_arg8 = cs_this; std::int32_t cs_arg9 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b8a6cd3430fb5981; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_03a81c0c58f1d2f9(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6,cs_arg7,cs_arg8,cs_arg9); }());
}
}
}
}

// M:system.form.LineupForm.Finish
bool cs_4cbf34065e9c29cc(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.Finish",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2951e25803cf3104(cs_receiver); }());
if (([&]() { auto cs_left = pls::cs::box(cs_a251c18c9d0f913d()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }())) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_a251c18c9d0f913d()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c9cd9f49f64199fc(cs_receiver); }());
}
([&]() { auto cs_value = pls::cs::Ref<cs_b728593e3dcffe31>{}; cs_a251c18c9d0f913d() = cs_value; return cs_value; }());
pls::cs::Ref<cs_e00832a42e12ec3b> v_instance_3959 = ([&]() -> pls::cs::Ref<cs_e00832a42e12ec3b> { return cs_9cfcc2afb24b5e63(); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_1ab688350081022a>>(v_instance_3959); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_04c28d155861f704(cs_receiver); }());
return true;
}
}
}
}

// M:system.form.LineupForm.GetHashCode
std::int32_t cs_424cc8dfa482f7f5(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:system.form.LineupForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t cs_f2e4ff8d5073c2eb(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,std::int32_t v_type,std::int32_t v_index) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.GetTouchValue(System.Int32,System.Int32)",game);
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
std::int32_t v_num_5023 = v_type;
if (([&]() -> bool { auto cs_left = v_num_5023; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); return (cs_left != cs_right); }())) {

} else {
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }());
}
return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f0ea1319d9b511eb(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}

// M:system.form.LineupForm.Init
bool cs_fd09666c1ad0b529(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.Init",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f2be821373eb0add(cs_receiver); }());
pls::cs::Ref<cs_e00832a42e12ec3b> v_instance_965 = ([&]() -> pls::cs::Ref<cs_e00832a42e12ec3b> { return cs_9cfcc2afb24b5e63(); }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/form/LineupForm.cs:M:system.form.LineupForm.Init:1022",([&]() -> pls::cs::Ref<cs_b728593e3dcffe31> { pls::cs::String cs_arg0 = pls::cs::String{}; pls::cs::String cs_arg1 = pls::cs::String{}; pls::cs::String cs_arg2 = pls::cs::String{}; pls::cs::String cs_arg3 = pls::cs::String{}; pls::cs::String cs_arg4 = pls::cs::String{}; pls::cs::String cs_arg5 = pls::cs::String{}; pls::cs::String cs_arg6 = pls::cs::String{}; return cs_63b2bd45669dab69(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }()))); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_530b5df6d7de28c3(cs_receiver,cs_arg0); }()); cs_a251c18c9d0f913d() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_b728593e3dcffe31>>(cs_a251c18c9d0f913d()); pls::cs::Array<std::uint8_t> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<std::uint8_t> { std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); bool cs_arg1 = false; pls::cs::String cs_arg2 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x006c" u"\x0069" u"\x006e" u"\x0065" u"\x0075" u"\x0070" u"\x005f" u"\x006c" u"\x0061" u"\x0079" u"\x006f" u"\x0075" u"\x0074" u"\x002e" u"\x0064" u"\x0061" u"\x0074" u"",17);return cs_literal;}()); return pls::kairo::Storage::Read(cs_arg0,cs_arg1,cs_arg2); }());}); auto cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_6ec7ac2b50afb0b0(cs_receiver,cs_arg0,cs_arg1); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Ref<cs_fd683372658feff4>> { auto cs_receiver = static_cast<pls::cs::Ref<cs_1ab688350081022a>>(v_instance_965); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_39cb7b83aa99de82(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_abcd3f40ba2c255e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); pls::game::cs_require(cs_target)->cs_e5f85072dd4bae90 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_2ffa6f51468590ea>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_2bb3a4488f925b87; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_38f421ed8909306b(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d01bf6d528df5d3e>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a6e481b168e6fc62(cs_receiver); }());
return true;
}
}
}
}

// M:system.form.LineupForm.Resume
bool cs_2a2e46575659084c(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.Resume",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_f6039316248c9637(cs_receiver); }());
return true;
}
}
}
}

// M:system.form.LineupForm.SetSoftlabel
void cs_a6e481b168e6fc62(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.SetSoftlabel",game);
{
std::int32_t v_num_5456 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_4ed30b03deb528a2(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc1c42d4d7e082e0; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }());
std::int32_t v_num2_5492 = ([&]() { auto cs_array = ([&]() { auto cs_array = cs_4ed30b03deb528a2(); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc1c42d4d7e082e0; }()); return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); pls::cs::String cs_arg0 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num_5456; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([&]() { auto cs_array = cs_60b089466589d9c6(); auto cs_index = v_num2_5492; return cs_array.get_Item(cs_index); }()); auto cs_arg2 = pls::cs::String{}; auto cs_arg3 = pls::cs::String{}; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->SetSoftLabel(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());});
}
}
}
}

// M:system.form.LineupForm.SetTouchValue(System.Int32,System.Int32)
void cs_784b75a2e8fe91ae(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this,std::int32_t v_type,std::int32_t v_value) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.SetTouchValue(System.Int32,System.Int32)",game);
{
([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>((([&]() -> std::int64_t { auto cs_left = pls::cs::cast_integral<std::int64_t>(v_type); auto cs_right = pls::cs::cast_integral<std::int64_t>(pls::cs::cast_integral<std::uint32_t>(std::uint64_t(0xffff0000ull))); return (cs_left & cs_right); }()))); v_type = cs_value; return cs_value; }());
switch (v_type) {
case 131072:
{
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::game::cs_require(cs_target)->cs_e5f85072dd4bae90 = cs_value; return cs_value; }());
break;
}
default:
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); std::int32_t cs_arg0 = v_type; std::int32_t cs_arg1 = v_value; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_3d1ead99a7eb01b8(cs_receiver,cs_arg0,cs_arg1); }());
break;
}
}
}
}
}
}

// M:system.form.LineupForm.ToString
pls::cs::String cs_83e48a5feada74ed(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.ToString",game);
{
return pls::source_allocations::completed("concat_operator","src/Assembly-CSharp/system/form/LineupForm.cs:M:system.form.LineupForm.ToString:875",([&]() { auto cs_left = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x004c" u"\x0069" u"\x006e" u"\x0065" u"\x0075" u"\x0070" u"\x0046" u"\x006f" u"\x0072" u"\x006d" u"\x003a" u"",11);return cs_literal;}()); auto cs_right = pls::game::cs_integer_string(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dc1c42d4d7e082e0; }())); return pls::cs::String::concat(cs_left,cs_right); }()));
}
}
}
}

// M:system.form.LineupForm.Update
bool cs_6ee8d12c93887b93(pls::cs::Ref<cs_d01bf6d528df5d3e> cs_this) { cs_init_d01bf6d528df5d3e();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LineupForm.Update",game);
{
([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_5451b2154f09f4c5>>(std::static_pointer_cast<cs_5451b2154f09f4c5>(cs_this)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_25913418bfe51bb8(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3a238febfe0fec26; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7fffffffull)); return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_3a238febfe0fec26 = cs_value; return cs_value; }());
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e13125ff785351a8; }())) {
std::int32_t v_num_4239 = ([&]() -> std::int32_t { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x20000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::sub_i32(cs_left,cs_right); }()); auto cs_right = v_num_4239; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = v_num_4239; return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_e5f85072dd4bae90 = cs_value; return cs_value; }());
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x80000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }());})) {
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_left = (([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_right = v_num_4239; return pls::cs::add_i32(cs_left,cs_right); }())); auto cs_right = v_num_4239; return pls::cs::mod_i32(cs_left,cs_right); }()); pls::game::cs_require(cs_target)->cs_e5f85072dd4bae90 = cs_value; return cs_value; }());
}
if ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bb75efee16cbae19; }())); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x100000ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->CheckKeyPulse(cs_arg0); }());}))) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }())).length(); return (cs_left < cs_right); }())) {
([&]() -> bool { pls::cs::String cs_arg0 = ([&]() -> pls::cs::String { auto cs_receiver = static_cast<pls::cs::Ref<cs_fd683372658feff4>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abcd3f40ba2c255e; }()); auto cs_index = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e5f85072dd4bae90; }()); return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_93bf009f197e5d4a(cs_receiver); }()); return cs_25bba6e14d51039b(cs_arg0); }());
} else {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->Pop(); }());});
}
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4887f44792cc883c; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->DrawAllForms(); }());});
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_d01bf6d528df5d3e>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a6e481b168e6fc62(cs_receiver); }());
return true;
}
}
}
}
}
