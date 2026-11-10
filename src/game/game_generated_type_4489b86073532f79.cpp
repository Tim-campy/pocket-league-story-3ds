// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated_type_4489b86073532f79.hpp"
#include "game_generated_type_75707aa3f1629c85.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
#include "generated/portable_generated_type_cbac662a28aa40b1.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
#include "generated/portable_generated_type_f3ea616d36334b95.hpp"
#include "generated/portable_generated_type_cbac662a28aa40b1_templates.hpp"
namespace pls::game {

void cs_4489b86073532f79::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_33497b4bf95ea17d,visitor);pls::cs::trace_value(cs_fac79ffb07acaaa9,visitor);pls::cs::trace_value(cs_615b022e6d4f3411,visitor);pls::cs::trace_value(cs_7ef89a4385d82e88,visitor);pls::cs::trace_value(cs_06b59428a9b9dfa2,visitor);pls::cs::trace_value(cs_6f534bf5e33e413b,visitor);pls::cs::trace_value(cs_e09416a0f920ad4d,visitor);pls::cs::trace_value(cs_6b0563ed7fd65c34,visitor);pls::cs::trace_value(cs_9b228d050db54a04,visitor);}

void cs_4489b86073532f79::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_33497b4bf95ea17d);pls::cs::release_value(cs_fac79ffb07acaaa9);pls::cs::release_value(cs_615b022e6d4f3411);pls::cs::release_value(cs_7ef89a4385d82e88);pls::cs::release_value(cs_06b59428a9b9dfa2);pls::cs::release_value(cs_6f534bf5e33e413b);pls::cs::release_value(cs_e09416a0f920ad4d);pls::cs::release_value(cs_6b0563ed7fd65c34);pls::cs::release_value(cs_9b228d050db54a04);}

static pls::cs::Ref<cs_2ffa6f51468590ea> cs_5f399ea9f5649963_value{};

static std::int32_t cs_5559eb56fc750675_value{};

static pls::cs::Array<std::int32_t> cs_a6d46787f3454c35_value{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> cs_7212096907b82ef3_value{};

static pls::cs::Array<std::int32_t> cs_b9530d25c36c1b9e_value{};

static std::int32_t cs_b0a9eba788d7c363_value{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> cs_d8a965f8fa560531_value{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> cs_011fe1a6332af6ab_value{};

static pls::cs::Ref<cs_75707aa3f1629c85> cs_9377a45754031ea8_value{};

void cs_init_4489b86073532f79(){static pls::cs::TypeInitState state;state.run("data.TrainingData",[](){
cs_b9530d25c36c1b9e_value = pls::cs::evaluate_type_initializer_field("F:data.TrainingData.TRA_PLAYER",[&](){return pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TrainingData.cs:M:data.TrainingData.ChangeState(System.Int32):1386",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull))));});
cs_b0a9eba788d7c363_value = pls::cs::evaluate_type_initializer_field("F:data.TrainingData.TRA_SELECT_TRA",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));});
cs_d8a965f8fa560531_value = pls::cs::evaluate_type_initializer_field("F:data.TrainingData.TRA_UPPARAM",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TrainingData.cs:M:data.TrainingData.ChangeState(System.Int32):1503",pls::assets::baked_array<std::int32_t>("c951490c6de85b82174ce3d222144d4ec2b6cbe06bc46cbc6ae2a1280392328a")); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());});});
cs_7212096907b82ef3_value = pls::cs::evaluate_type_initializer_field("F:data.TrainingData.TRA_ADD",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TrainingData.cs:M:data.TrainingData.ChangeState(System.Int32):1585",pls::assets::baked_array<std::int32_t>("c70fddf9a8562816acae493b48d52abe43c03b92d0c2381513e9d0747dc95d0f")); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());});});
cs_011fe1a6332af6ab_value = pls::cs::evaluate_type_initializer_field("F:data.TrainingData.TRA_UPPARAM_DISP",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TrainingData.cs:M:data.TrainingData.ChangeState(System.Int32):1676",pls::assets::baked_array<std::int32_t>("97a192962affc66a9e53366bdf0bad3c053fd6d70df2cc8e78d3c6f32b01b5ca")); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());});});
cs_a6d46787f3454c35_value = pls::cs::evaluate_type_initializer_field("F:data.TrainingData.FARESULT_RATE",[&](){return pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TrainingData.cs:M:data.TrainingData.ChangeState(System.Int32):1746",pls::assets::baked_array<std::int32_t>("550809b7410358dda2ef503c05c0631fc1461d7b8f234e95ab24f8be422b53ce"));});
cs_5559eb56fc750675_value = pls::cs::evaluate_type_initializer_field("F:data.TrainingData.fa_result",[&](){return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));});

});}

pls::cs::Ref<cs_2ffa6f51468590ea>& cs_5f399ea9f5649963(){cs_init_4489b86073532f79();return cs_5f399ea9f5649963_value;}

std::int32_t& cs_5559eb56fc750675(){cs_init_4489b86073532f79();return cs_5559eb56fc750675_value;}

pls::cs::Array<std::int32_t>& cs_a6d46787f3454c35(){cs_init_4489b86073532f79();return cs_a6d46787f3454c35_value;}

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_7212096907b82ef3(){cs_init_4489b86073532f79();return cs_7212096907b82ef3_value;}

pls::cs::Array<std::int32_t>& cs_b9530d25c36c1b9e(){cs_init_4489b86073532f79();return cs_b9530d25c36c1b9e_value;}

std::int32_t& cs_b0a9eba788d7c363(){cs_init_4489b86073532f79();return cs_b0a9eba788d7c363_value;}

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_d8a965f8fa560531(){cs_init_4489b86073532f79();return cs_d8a965f8fa560531_value;}

pls::cs::Array<pls::cs::Array<std::int32_t>>& cs_011fe1a6332af6ab(){cs_init_4489b86073532f79();return cs_011fe1a6332af6ab_value;}

pls::cs::Ref<cs_75707aa3f1629c85>& cs_9377a45754031ea8(){cs_init_4489b86073532f79();return cs_9377a45754031ea8_value;}

// M:data.TrainingData.#ctor
pls::cs::Ref<cs_4489b86073532f79> cs_ba0b2666b0bd54f7() { cs_init_4489b86073532f79();
{ auto cs_this = pls::cs::make_ref<cs_4489b86073532f79>(); cs_ba0b2666b0bd54f7_init(cs_this); return cs_this; }
}

void cs_ba0b2666b0bd54f7_init(pls::cs::Ref<cs_4489b86073532f79> cs_this) {
cs_this->cs_7ef89a4385d82e88 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TrainingData.cs:M:data.TrainingData.#ctor:1212",pls::assets::baked_array<std::int32_t>("1c4b2e289dcb3f55cf79c1255f45b55ddc3d57b73e6857a5c8842a601253acb8")); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());});
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.#ctor",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_5f399ea9f5649963() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_9377a45754031ea8() = cs_value; return cs_value; }());
}
}
}

// M:data.TrainingData.#ctor(System.String)
pls::cs::Ref<cs_4489b86073532f79> cs_07a2366478a6bbe4(pls::cs::String v_src) { cs_init_4489b86073532f79();
{ auto cs_this = pls::cs::make_ref<cs_4489b86073532f79>(); cs_07a2366478a6bbe4_init(cs_this,v_src); return cs_this; }
}

void cs_07a2366478a6bbe4_init(pls::cs::Ref<cs_4489b86073532f79> cs_this,pls::cs::String v_src) {
cs_this->cs_7ef89a4385d82e88 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::Array<std::int32_t> cs_arg0 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/TrainingData.cs:M:data.TrainingData.#ctor(System.String):1212",pls::assets::baked_array<std::int32_t>("1c4b2e289dcb3f55cf79c1255f45b55ddc3d57b73e6857a5c8842a601253acb8")); return pls::generated::cs_e958ba3e955da10a<pls::cs::Array<pls::cs::Array<std::int32_t>>>(cs_arg0); }());});
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.#ctor(System.String)",game);
{
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }()); cs_5f399ea9f5649963() = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_75707aa3f1629c85> { return cs_d576d2e4fbb2127f(); }()); cs_9377a45754031ea8() = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_5c67c62b72274748(cs_receiver); }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_4c83acf089199fdb(cs_receiver,cs_arg0); }());
}
}
}

// M:data.TrainingData.ChangeState(System.Int32)
void cs_2fae0b3104f15757(pls::cs::Ref<cs_4489b86073532f79> cs_this,std::int32_t v_state) { cs_init_4489b86073532f79();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.ChangeState(System.Int32)",game);
{
if ((([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6b0563ed7fd65c34; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()) && ([&]() -> bool { auto cs_left = v_state; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return (cs_left == cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_9b228d050db54a04 = cs_value; return cs_value; }());
}
([&]() { auto cs_target = cs_this; auto cs_value = v_state; pls::game::cs_require(cs_target)->cs_6b0563ed7fd65c34 = cs_value; return cs_value; }());
}
}
}
}

// M:data.TrainingData.Deserialize(java.io.InputStream)
void cs_509e7280c21e82b2(pls::cs::Ref<cs_4489b86073532f79> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_4489b86073532f79();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.Deserialize(java.io.InputStream)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int16_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_1368899db48b4fc9(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_6b0563ed7fd65c34 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_5cff189cd1a7d066(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_9b228d050db54a04 = cs_value; return cs_value; }());
}
}
}
}

// M:data.TrainingData.GetTrainingAddParamNum(System.Int32)
std::int32_t cs_e6dc988e67f249da(std::int32_t v_eva) { cs_init_4489b86073532f79();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.GetTrainingAddParamNum(System.Int32)",game);
{
if (([&]() -> bool { auto cs_left = v_eva; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x5ull)); return (cs_left <= cs_right); }())) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull));
}
if (([&]() -> bool { auto cs_left = v_eva; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xaull)); return (cs_left <= cs_right); }())) {
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull));
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull));
}
}
}

// M:data.TrainingData.Init
void cs_5c67c62b72274748(pls::cs::Ref<cs_4489b86073532f79> cs_this) { cs_init_4489b86073532f79();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.Init",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_6b0563ed7fd65c34 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_9b228d050db54a04 = cs_value; return cs_value; }());
}
}
}
}

// M:data.TrainingData.IsExistNew
bool cs_0cbbaa6d32d59194() { cs_init_4489b86073532f79();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.IsExistNew",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_3540 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_3586 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3586; auto cs_right = (([&]() { auto cs_receiver = v_instance_3540; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3586; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3586 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_3540; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }()); auto cs_index = v_i_3586; return cs_array.get_Item(cs_index); }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_577663212c2a26b1(cs_receiver); }())) {
return true;
}
}
return false;
}
}
}

// M:data.TrainingData.IsNew
bool cs_577663212c2a26b1(pls::cs::Ref<cs_4489b86073532f79> cs_this) { cs_init_4489b86073532f79();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.IsNew",game);
{
if (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9b228d050db54a04; }())) {
return true;
}
return false;
}
}
}
}

// M:data.TrainingData.Load(System.String)
void cs_4c83acf089199fdb(pls::cs::Ref<cs_4489b86073532f79> cs_this,pls::cs::String v_src) { cs_init_4489b86073532f79();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.Load(System.String)",game);
{
std::int32_t v_num_2155 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_2176 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2176; auto cs_index = ([&]() { auto cs_old = v_num_2155; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2155 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_2176; auto cs_index = ([&]() { auto cs_old = v_num_2155; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2155 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_33497b4bf95ea17d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2176; auto cs_index = ([&]() { auto cs_old = v_num_2155; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2155 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_fac79ffb07acaaa9 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2176; auto cs_index = ([&]() { auto cs_old = v_num_2155; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2155 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_615b022e6d4f3411 = cs_value; return cs_value; }());
for (std::int32_t v_i_2381 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2381; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7ef89a4385d82e88; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2381; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2381 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7ef89a4385d82e88; }()); auto cs_index = v_i_2381; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2176; auto cs_index = ([&]() { auto cs_old = v_num_2155; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2155 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7ef89a4385d82e88; }()); auto cs_index = v_i_2381; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2176; auto cs_index = ([&]() { auto cs_old = v_num_2155; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2155 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2176; auto cs_index = ([&]() { auto cs_old = v_num_2155; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2155 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_06b59428a9b9dfa2 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2176; auto cs_index = ([&]() { auto cs_old = v_num_2155; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2155 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_6f534bf5e33e413b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_2176; auto cs_index = ([&]() { auto cs_old = v_num_2155; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2155 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_e09416a0f920ad4d = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2176; auto cs_index = ([&]() { auto cs_old = v_num_2155; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2155 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_77b7447583c10f78 = cs_value; return cs_value; }());
}
}
}
}

// M:data.TrainingData.Load2
void cs_e9345014443797ef() { cs_init_4489b86073532f79();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.Load2",game);
{
for (std::int32_t v_i_2734 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2734; auto cs_right = (cs_b9530d25c36c1b9e()).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2734; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2734 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = cs_b9530d25c36c1b9e(); auto cs_index = v_i_2734; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}

// M:data.TrainingData.NewGame
void cs_9b3e704be722e0bd(pls::cs::Ref<cs_4489b86073532f79> cs_this) { cs_init_4489b86073532f79();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.NewGame",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_6b0563ed7fd65c34 = cs_value; return cs_value; }());
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { std::int32_t cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77b7447583c10f78; }()); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::generated::cs_0bb436a75579d50a(cs_arg0,cs_arg1); }());})) {
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_4489b86073532f79>>(cs_this); std::int32_t cs_arg0 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_2fae0b3104f15757(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_9b228d050db54a04 = cs_value; return cs_value; }());
}
}
}
}
}

// M:data.TrainingData.RemoveNew
void cs_9a6a2d927c588c93() { cs_init_4489b86073532f79();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.RemoveNew",game);
{
pls::cs::Ref<cs_2ffa6f51468590ea> v_instance_3786 = ([&]() -> pls::cs::Ref<cs_2ffa6f51468590ea> { return cs_6b283e61fdac2d16(); }());
for (std::int32_t v_i_3832 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3832; auto cs_right = (([&]() { auto cs_receiver = v_instance_3786; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3832; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3832 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = ([&]() { auto cs_receiver = v_instance_3786; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca53bbf868877b6; }()); auto cs_index = v_i_3832; return cs_array.get_Item(cs_index); }()); auto cs_value = false; pls::game::cs_require(cs_target)->cs_9b228d050db54a04 = cs_value; return cs_value; }());
}
}
}
}

// M:data.TrainingData.Serialize(java.io.OutputStream)
void cs_4feb02c73e4cf20f(pls::cs::Ref<cs_4489b86073532f79> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_4489b86073532f79();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.TrainingData.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int16_t cs_arg1 = pls::cs::cast_integral<std::int16_t>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6b0563ed7fd65c34; }())); pls::generated::cs_74e8efcd697e2e61(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; bool cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9b228d050db54a04; }()); pls::generated::cs_7c02733ae541274e(cs_arg0,cs_arg1); }());});
}
}
}
}
}
