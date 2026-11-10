// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_80d72c9d6f5bfcfe.hpp"
#include "game_generated_type_b08d770c239489bf.hpp"
#include "generated/portable_generated_type_1ff3292665c8e0c4.hpp"
#include "generated/portable_generated_type_582a926e9c7748a6.hpp"
#include "generated/portable_generated_type_7de6788b61a5af56.hpp"
namespace pls::game {

void cs_80d72c9d6f5bfcfe::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_b08d770c239489bf::trace_edges(visitor);pls::cs::trace_value(cs_1fa16b1439554e13,visitor);pls::cs::trace_value(cs_a874245b40e2af4b,visitor);pls::cs::trace_value(cs_3fa79636aa02329a,visitor);pls::cs::trace_value(cs_10e47a57597e3769,visitor);}

void cs_80d72c9d6f5bfcfe::release_edges(){cs_b08d770c239489bf::release_edges();pls::cs::release_value(cs_1fa16b1439554e13);pls::cs::release_value(cs_a874245b40e2af4b);pls::cs::release_value(cs_3fa79636aa02329a);pls::cs::release_value(cs_10e47a57597e3769);}

static pls::cs::Array<pls::cs::String> cs_a6acb1dbcdc3e821_value{};

void cs_init_80d72c9d6f5bfcfe(){static pls::cs::TypeInitState state;state.run("data.EventData",[](){

});}

pls::cs::Array<pls::cs::String>& cs_a6acb1dbcdc3e821(){cs_init_80d72c9d6f5bfcfe();return cs_a6acb1dbcdc3e821_value;}

// M:data.EventData.#ctor
pls::cs::Ref<cs_80d72c9d6f5bfcfe> cs_e4bc487b2460253c() { cs_init_80d72c9d6f5bfcfe();
{ auto cs_this = pls::cs::make_ref<cs_80d72c9d6f5bfcfe>(); cs_e4bc487b2460253c_init(cs_this); return cs_this; }
}

void cs_e4bc487b2460253c_init(pls::cs::Ref<cs_80d72c9d6f5bfcfe> cs_this) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.#ctor",game);
{

}
}
}

// M:data.EventData.#ctor(System.String)
pls::cs::Ref<cs_80d72c9d6f5bfcfe> cs_142d416c03b7e0fe(pls::cs::String v_src) { cs_init_80d72c9d6f5bfcfe();
{ auto cs_this = pls::cs::make_ref<cs_80d72c9d6f5bfcfe>(); cs_142d416c03b7e0fe_init(cs_this,v_src); return cs_this; }
}

void cs_142d416c03b7e0fe_init(pls::cs::Ref<cs_80d72c9d6f5bfcfe> cs_this,pls::cs::String v_src) {
([&]() { cs_0c4b303cde7d7a27_init(std::static_pointer_cast<cs_b08d770c239489bf>(cs_this)); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.#ctor(System.String)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_80d72c9d6f5bfcfe>>(cs_this); pls::cs::String cs_arg0 = v_src; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_8995abc98652335f(cs_receiver,cs_arg0); }());
}
}
}

// M:data.EventData.CheckScript(System.Int32[][],System.Int32)
bool cs_55b54760dec5b18e(pls::cs::Array<pls::cs::Array<std::int32_t>> v_script,std::int32_t v_scrId) { cs_init_80d72c9d6f5bfcfe();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.CheckScript(System.Int32[][],System.Int32)",game);
{
for (std::int32_t v_i_3394 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3394; auto cs_right = (v_script).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3394; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3394 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_array = ([&]() { auto cs_array = v_script; auto cs_index = v_i_3394; return cs_array.get_Item(cs_index); }()); auto cs_index = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_array.get_Item(cs_index); }()); auto cs_right = v_scrId; return (cs_left == cs_right); }())) {
return true;
}
}
return false;
}
}
}

// M:data.EventData.Load(System.String)
void cs_8995abc98652335f(pls::cs::Ref<cs_80d72c9d6f5bfcfe> cs_this,pls::cs::String v_src) { cs_init_80d72c9d6f5bfcfe();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.Load(System.String)",game);
{
std::int32_t v_num_2548 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull));
pls::cs::Array<pls::cs::String> v_array_2569 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0009" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2569; auto cs_index = ([&]() { auto cs_old = v_num_2548; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2548 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_18df8a841fecdd70 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_array = v_array_2569; auto cs_index = ([&]() { auto cs_old = v_num_2548; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2548 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); pls::game::cs_require(cs_target)->cs_1fa16b1439554e13 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2569; auto cs_index = ([&]() { auto cs_old = v_num_2548; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2548 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_a874245b40e2af4b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2569; auto cs_index = ([&]() { auto cs_old = v_num_2548; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2548 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return cs_8cff19a3e40ed58e(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_3fa79636aa02329a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Array<pls::cs::Array<std::int32_t>> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2569; auto cs_index = ([&]() { auto cs_old = v_num_2548; auto cs_new = pls::cs::add_i32(cs_old,1); v_num_2548 = cs_new; return cs_old; }()); return cs_array.get_Item(cs_index); }()); return cs_8cff19a3e40ed58e(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_10e47a57597e3769 = cs_value; return cs_value; }());
}
}
}
}

// M:data.EventData.LoadStringTable(System.String)
void cs_d260a0b06ef6b3db(pls::cs::String v_src) { cs_init_80d72c9d6f5bfcfe();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.LoadStringTable(System.String)",game);
{
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_src; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x000a" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());}); cs_a6acb1dbcdc3e821() = cs_value; return cs_value; }());
}
}
}

// M:data.EventData.ReadScript(System.String)
pls::cs::Array<pls::cs::Array<std::int32_t>> cs_8cff19a3e40ed58e(pls::cs::String v_source) { cs_init_80d72c9d6f5bfcfe();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.ReadScript(System.String)",game);
{
if ((([&]() { auto cs_left = pls::cs::box(v_source); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = ([&]() -> std::int32_t { pls::cs::String cs_arg0 = v_source; return pls::generated::cs_8eed6765a32617b7(cs_arg0); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return (cs_left == cs_right); }()))) {
return pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/EventData.cs:M:data.EventData.ReadScript(System.String):2927",pls::cs::Array<pls::cs::Array<std::int32_t>>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull))));
}
pls::cs::Array<pls::cs::String> v_array_2958 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = v_source; pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0026" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
pls::cs::Array<pls::cs::Array<std::int32_t>> v_array2_3008 = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/EventData.cs:M:data.EventData.ReadScript(System.String):3017",pls::cs::Array<pls::cs::Array<std::int32_t>>::make((v_array_2958).length()));
for (std::int32_t v_i_3054 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3054; auto cs_right = (v_array_2958).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3054; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3054 = cs_new; return cs_old; }())) {
pls::cs::Array<pls::cs::String> v_array3_3102 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Array<pls::cs::String> { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array_2958; auto cs_index = v_i_3054; return cs_array.get_Item(cs_index); }()); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x002c" u"",1);return cs_literal;}()); return pls::generated::cs_aed90764bf1359a3(cs_arg0,cs_arg1); }());});
([&]() { auto cs_target = v_array2_3008; auto cs_index = v_i_3054; auto cs_value = pls::source_allocations::completed("new_array","src/Assembly-CSharp/data/EventData.cs:M:data.EventData.ReadScript(System.String):3160",pls::cs::Array<std::int32_t>::make((v_array3_3102).length()));cs_target.set_Item(cs_index,cs_value);return cs_value;}());
for (std::int32_t v_j_3197 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_j_3197; auto cs_right = (v_array3_3102).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_j_3197; auto cs_new = pls::cs::add_i32(cs_old,1); v_j_3197 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_array = v_array2_3008; auto cs_index = v_i_3054; return cs_array.get_Item(cs_index); }()); auto cs_index = v_j_3197; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::String cs_arg0 = ([&]() { auto cs_array = v_array3_3102; auto cs_index = v_j_3197; return cs_array.get_Item(cs_index); }()); return pls::generated::cs_2dbfed27c63e8b3d(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
return v_array2_3008;
}
}
}

// M:data.EventData.Search(data.EventData[],System.Int32)
std::int32_t cs_329e10f2fd727358(pls::cs::Array<pls::cs::Ref<cs_80d72c9d6f5bfcfe>> v_events,std::int32_t v_id) { cs_init_80d72c9d6f5bfcfe();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:data.EventData.Search(data.EventData[],System.Int32)",game);
{
for (std::int32_t v_i_3589 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3589; auto cs_right = (v_events).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3589; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3589 = cs_new; return cs_old; }())) {
if (([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = ([&]() { auto cs_array = v_events; auto cs_index = v_i_3589; return cs_array.get_Item(cs_index); }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_18df8a841fecdd70; }()); auto cs_right = v_id; return (cs_left == cs_right); }())) {
return v_i_3589;
}
}
return pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull));
}
}
}
}
