// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_bcccbac2bf72843d.hpp"
#include "game_generated_type_c8e1f3d3f96670c6.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
namespace pls::game {

void cs_c8e1f3d3f96670c6::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_d48b2c060366a193,visitor);pls::cs::trace_value(cs_00f172d916ac1eda,visitor);pls::cs::trace_value(cs_5911c1aef793c754,visitor);}

void cs_c8e1f3d3f96670c6::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_d48b2c060366a193);pls::cs::release_value(cs_00f172d916ac1eda);pls::cs::release_value(cs_5911c1aef793c754);}

bool cs_c8e1f3d3f96670c6::Equals(pls::cs::Ref<pls::cs::Object> const& v_obj) {return cs_e4546eba7825f981(std::static_pointer_cast<cs_c8e1f3d3f96670c6>(shared_from_this()),v_obj);}

std::int32_t cs_c8e1f3d3f96670c6::GetHashCode() {return cs_f80b20705650c56f(std::static_pointer_cast<cs_c8e1f3d3f96670c6>(shared_from_this()));}

static pls::cs::Array<float> cs_973a19e093bc0fda_value{};

static pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_70333ca9b184d4ad_value{};

static pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_abf3d394789f023c_value{};

static pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_b377fd1b9ba4be2d_value{};

void cs_init_c8e1f3d3f96670c6(){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.Matrix",[](){
cs_973a19e093bc0fda_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ui.Matrix.identityMatrix_",[&](){return ([&](){auto cs_initial_array_269=pls::cs::Array<float>::make(9);cs_initial_array_269.at(0)=pls::game::cs_f32(0x3f800000u);cs_initial_array_269.at(1)=pls::game::cs_f32(0x00000000u);cs_initial_array_269.at(2)=pls::game::cs_f32(0x00000000u);cs_initial_array_269.at(3)=pls::game::cs_f32(0x00000000u);cs_initial_array_269.at(4)=pls::game::cs_f32(0x3f800000u);cs_initial_array_269.at(5)=pls::game::cs_f32(0x00000000u);cs_initial_array_269.at(6)=pls::game::cs_f32(0x00000000u);cs_initial_array_269.at(7)=pls::game::cs_f32(0x00000000u);cs_initial_array_269.at(8)=pls::game::cs_f32(0x3f800000u);return cs_initial_array_269;}());});
cs_70333ca9b184d4ad_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ui.Matrix.RotateTempMatrix_",[&](){return ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { return cs_d1ef6eff6523bffb(); }());});
cs_abf3d394789f023c_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ui.Matrix.ScaleTemporaryMatrix_",[&](){return ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { return cs_d1ef6eff6523bffb(); }());});
cs_b377fd1b9ba4be2d_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ui.Matrix.TranslateTempMatrix_",[&](){return ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { return cs_d1ef6eff6523bffb(); }());});

});}

pls::cs::Array<float>& cs_973a19e093bc0fda(){cs_init_c8e1f3d3f96670c6();return cs_973a19e093bc0fda_value;}

pls::cs::Ref<cs_c8e1f3d3f96670c6>& cs_70333ca9b184d4ad(){cs_init_c8e1f3d3f96670c6();return cs_70333ca9b184d4ad_value;}

pls::cs::Ref<cs_c8e1f3d3f96670c6>& cs_abf3d394789f023c(){cs_init_c8e1f3d3f96670c6();return cs_abf3d394789f023c_value;}

pls::cs::Ref<cs_c8e1f3d3f96670c6>& cs_b377fd1b9ba4be2d(){cs_init_c8e1f3d3f96670c6();return cs_b377fd1b9ba4be2d_value;}

// M:kairo.unity.ui.Matrix.#ctor
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_d1ef6eff6523bffb() { cs_init_c8e1f3d3f96670c6();
{ auto cs_this = pls::cs::make_ref<cs_c8e1f3d3f96670c6>(); cs_d1ef6eff6523bffb_init(cs_this); return cs_this; }
}

void cs_d1ef6eff6523bffb_init(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this) {
cs_this->cs_d48b2c060366a193 = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)));
cs_this->cs_00f172d916ac1eda = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)));
cs_this->cs_5911c1aef793c754 = pls::cs::Array<float>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x9ull)));
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.#ctor",kairo);
{
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6d52e21bbbc1b83b(cs_receiver); }());
}
}
}

// M:kairo.unity.ui.Matrix.Equals(System.Object)
bool cs_e4546eba7825f981(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Ref<pls::cs::Object> v_obj) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.Equals(System.Object)",kairo);
{
if ((([&]() { auto cs_left = pls::cs::box(v_obj); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left != cs_right; }()) && pls::game::cs_is<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(pls::cs::box(v_obj)))) {
pls::cs::Ref<cs_c8e1f3d3f96670c6> v_matrix_7374 = pls::cs::unbox<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(v_obj);
for (std::int32_t v_i_7409 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_7409; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_7409; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_7409 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = v_i_7409; return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_matrix_7374; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = v_i_7409; return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) {
return false;
}
}
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_receiver = pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this)); auto cs_argument = v_obj; return pls::game::cs_require(cs_receiver)->pls::cs::Object::Equals(cs_argument); }());});
}
}
}
}

// M:kairo.unity.ui.Matrix.GetHashCode
std::int32_t cs_f80b20705650c56f(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(std::static_pointer_cast<pls::cs::Object>(cs_this));return pls::game::cs_require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
}
}

// M:kairo.unity.ui.Matrix.GetValues(System.Single[])
void cs_ca00577a54dd61a5(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Array<float> v_matrix) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.GetValues(System.Single[])",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(v_matrix); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (v_matrix).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
}
}
}
}

// M:kairo.unity.ui.Matrix.IsIdentity
bool cs_46250df91aacb52a(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.IsIdentity",kairo);
{
for (std::int32_t v_i_1148 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1148; auto cs_right = (cs_973a19e093bc0fda()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1148; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1148 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = cs_973a19e093bc0fda(); auto cs_index = v_i_1148; return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = v_i_1148; return cs_array.get_Item(cs_index); }()); return (cs_left != cs_right); }())) {
return false;
}
}
return true;
}
}
}
}

// M:kairo.unity.ui.Matrix.MapPoints(System.Single@,System.Single@)
void cs_76f083d6ddd878de(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float& v_x,float& v_y) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.MapPoints(System.Single@,System.Single@)",kairo);
{
float v_num_6787 = v_x;
float v_num2_6805 = v_y;
([&]() { auto cs_value = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num_6787; return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num2_6805; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); return cs_array.get_Item(cs_index); }()); return (cs_left + cs_right); }()); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num_6787; return (cs_left * cs_right); }()); auto cs_right = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_num2_6805; return (cs_left * cs_right); }()); return (cs_left + cs_right); }()); auto cs_right = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); return cs_array.get_Item(cs_index); }()); return (cs_left + cs_right); }()); v_y = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.ui.Matrix.PostConcat(System.Single[])
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_b0fd4c69e3e79001(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Array<float> v_transform) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.PostConcat(System.Single[])",kairo);
{
if (([&]() { auto cs_left = pls::cs::box(v_transform); auto cs_right = pls::cs::box(pls::cs::Array<float>{}); return cs_left == cs_right; }())) {
throw pls::cs::NullReferenceException();
}
std::int32_t v_j_1422 = std::int32_t{}, v_k_1425 = std::int32_t{}, v_l_1428 = std::int32_t{};
for (std::int32_t v_i_1443 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1443; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_00f172d916ac1eda; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1443; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1443 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_00f172d916ac1eda; }()); auto cs_index = v_i_1443; auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_j_1422 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_j_1422; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_1422; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_1422 = cs_new; return cs_old; }())) {
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_k_1425 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_k_1425; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_k_1425; auto cs_new = pls::cs::add_i32(cs_old,1); v_k_1425 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_00f172d916ac1eda; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_j_1422; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_k_1425; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
for (([&]() { auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); v_l_1428 = cs_value; return cs_value; }()); ([&]() -> bool { auto cs_left = v_l_1428; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_l_1428; auto cs_new = pls::cs::add_i32(cs_old,1); v_l_1428 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_00f172d916ac1eda; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_j_1422; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_k_1425; return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_j_1422; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_l_1428; return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); auto cs_right = ([&]() { auto cs_array = v_transform; auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_l_1428; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = v_k_1425; return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }()); return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
}
}
}
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); pls::cs::Array<float> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_00f172d916ac1eda; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ae09ad7913e5d182(cs_receiver,cs_arg0); }());
return cs_this;
}
}
}
}

// M:kairo.unity.ui.Matrix.PostRotate(System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_dfcfe6d3804d0059(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_angle,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.PostRotate(System.Single,System.Single,System.Single)",kairo);
{
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_angle; return std::isnan(cs_arg0); }());})) {
throw pls::cs::ArgumentException();
}
if ((([&]() -> bool { auto cs_left = v_px; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_py; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()))) {
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = (-(v_px)); float cs_arg1 = (-(v_py)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b097c9e7de4a816(cs_receiver,cs_arg0,cs_arg1); }());
}
float v_single_2880 = ([&]() -> float { float cs_arg0 = v_angle; return cs_87ef3d6d0d364edc(cs_arg0); }());
float v_single1_2919 = ([&]() -> float { float cs_arg0 = v_angle; return cs_82e90932e565633e(cs_arg0); }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = v_single1_2919;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = v_single_2880;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_value = (-(v_single_2880));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_value = v_single1_2919;cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_value = pls::game::cs_f32(0x00000000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); auto cs_value = pls::game::cs_f32(0x3f800000u);cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); pls::cs::Array<float> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5911c1aef793c754; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_b0fd4c69e3e79001(cs_receiver,cs_arg0); }());
if ((([&]() -> bool { auto cs_left = v_px; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_py; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()))) {
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = v_px; float cs_arg1 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b097c9e7de4a816(cs_receiver,cs_arg0,cs_arg1); }());
}
return cs_this;
}
}
}
}

// M:kairo.unity.ui.Matrix.PostScale(System.Single,System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_abaf734dcf45a64b(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.PostScale(System.Single,System.Single,System.Single,System.Single)",kairo);
{
if ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_x; return std::isnan(cs_arg0); }());}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_y; return std::isnan(cs_arg0); }());}))) {
throw pls::cs::ArgumentException();
}
if ((([&]() -> bool { auto cs_left = v_px; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_py; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()))) {
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = (-(v_px)); float cs_arg1 = (-(v_py)); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b097c9e7de4a816(cs_receiver,cs_arg0,cs_arg1); }());
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_x; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_y; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_x; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_y; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_x; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = v_y; auto cs_value = (cs_old * cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
if ((([&]() -> bool { auto cs_left = v_px; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()) || ([&]() -> bool { auto cs_left = v_py; auto cs_right = pls::game::cs_f32(0x00000000u); return (cs_left != cs_right); }()))) {
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = v_px; float cs_arg1 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b097c9e7de4a816(cs_receiver,cs_arg0,cs_arg1); }());
}
return cs_this;
}
}
}
}

// M:kairo.unity.ui.Matrix.PostTranslate(System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_2b097c9e7de4a816(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.PostTranslate(System.Single,System.Single)",kairo);
{
if ((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_x; return std::isnan(cs_arg0); }());}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_arg0 = v_y; return std::isnan(cs_arg0); }());}))) {
throw pls::cs::ArgumentException();
}
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_x; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_y; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_x; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x4ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_y; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x6ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_x; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x7ull)); auto cs_old = cs_target.at(cs_index); auto cs_rhs = ([&]() -> float { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x8ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_y; return (cs_left * cs_right); }()); auto cs_value = (cs_old + cs_rhs); cs_target.at(cs_index) = cs_value; return cs_value; }());
return cs_this;
}
}
}
}

// M:kairo.unity.ui.Matrix.Reset
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_6d52e21bbbc1b83b(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.Reset",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(cs_973a19e093bc0fda()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (cs_973a19e093bc0fda()).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
return cs_this;
}
}
}
}

// M:kairo.unity.ui.Matrix.RotateTemporary(System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_54df3686b06bf8e3(float v_angle,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.RotateTemporary(System.Single,System.Single,System.Single)",kairo);
{
return ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_70333ca9b184d4ad()); float cs_arg0 = v_angle; float cs_arg1 = v_px; float cs_arg2 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d59f8e10788ab6cd(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}

// M:kairo.unity.ui.Matrix.ScaleTemporary(System.Single,System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_e8ceb82625f5a10e(float v_x,float v_y,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.ScaleTemporary(System.Single,System.Single,System.Single,System.Single)",kairo);
{
return ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_abf3d394789f023c()); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = v_px; float cs_arg3 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_097036b885de5d99(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}

// M:kairo.unity.ui.Matrix.SetRotate(System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_d59f8e10788ab6cd(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_angle,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.SetRotate(System.Single,System.Single,System.Single)",kairo);
{
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6d52e21bbbc1b83b(cs_receiver); }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = v_angle; float cs_arg1 = v_px; float cs_arg2 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_dfcfe6d3804d0059(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
return cs_this;
}
}
}
}

// M:kairo.unity.ui.Matrix.SetScale(System.Single,System.Single,System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_097036b885de5d99(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y,float v_px,float v_py) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.SetScale(System.Single,System.Single,System.Single,System.Single)",kairo);
{
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6d52e21bbbc1b83b(cs_receiver); }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = v_px; float cs_arg3 = v_py; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_abaf734dcf45a64b(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
return cs_this;
}
}
}
}

// M:kairo.unity.ui.Matrix.SetTranslate(System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_54ed94bf2309b437(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,float v_x,float v_y) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.SetTranslate(System.Single,System.Single)",kairo);
{
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_6d52e21bbbc1b83b(cs_receiver); }());
([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_this); float cs_arg0 = v_x; float cs_arg1 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_2b097c9e7de4a816(cs_receiver,cs_arg0,cs_arg1); }());
return cs_this;
}
}
}
}

// M:kairo.unity.ui.Matrix.SetValues(System.Single[])
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_ae09ad7913e5d182(pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_this,pls::cs::Array<float> v_matrix) { cs_init_c8e1f3d3f96670c6();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.SetValues(System.Single[])",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_matrix); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d48b2c060366a193; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (v_matrix).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
return cs_this;
}
}
}
}

// M:kairo.unity.ui.Matrix.TranslateTemporary(System.Single,System.Single)
pls::cs::Ref<cs_c8e1f3d3f96670c6> cs_726b189f0fed2c17(float v_x,float v_y) { cs_init_c8e1f3d3f96670c6();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Matrix.TranslateTemporary(System.Single,System.Single)",kairo);
{
return ([&]() -> pls::cs::Ref<cs_c8e1f3d3f96670c6> { auto cs_receiver = static_cast<pls::cs::Ref<cs_c8e1f3d3f96670c6>>(cs_b377fd1b9ba4be2d()); float cs_arg0 = v_x; float cs_arg1 = v_y; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_54ed94bf2309b437(cs_receiver,cs_arg0,cs_arg1); }());
}
}
}
}
