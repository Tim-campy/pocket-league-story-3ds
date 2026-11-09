// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_456d3d004decc356.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
#include "generated/portable_generated_type_5098bfda9cf65745.hpp"
#include "generated/portable_generated_type_e7a5499b363ef51b.hpp"
#include "generated/portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::game {

void cs_456d3d004decc356::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_c91865d620b9553c,visitor);pls::cs::trace_value(cs_9530a87060fa0532,visitor);pls::cs::trace_value(cs_338cf0660cb20211,visitor);pls::cs::trace_value(cs_3bb9a4cf3da2e687,visitor);pls::cs::trace_value(cs_ec6bc173286b73e8,visitor);pls::cs::trace_value(cs_eca097466f8cf377,visitor);pls::cs::trace_value(cs_31f2cf075b1406f9,visitor);}

void cs_456d3d004decc356::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_c91865d620b9553c);pls::cs::release_value(cs_9530a87060fa0532);pls::cs::release_value(cs_338cf0660cb20211);pls::cs::release_value(cs_3bb9a4cf3da2e687);pls::cs::release_value(cs_ec6bc173286b73e8);pls::cs::release_value(cs_eca097466f8cf377);pls::cs::release_value(cs_31f2cf075b1406f9);}

void cs_init_456d3d004decc356(){static pls::cs::TypeInitState state;state.run("game.DelayEvent",[](){

});}

// M:game.DelayEvent.#ctor
pls::cs::Ref<cs_456d3d004decc356> cs_42bd1e40ac82632c() { cs_init_456d3d004decc356();
{ auto cs_this = pls::cs::make_ref<cs_456d3d004decc356>(); cs_42bd1e40ac82632c_init(cs_this); return cs_this; }
}

void cs_42bd1e40ac82632c_init(pls::cs::Ref<cs_456d3d004decc356> cs_this) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:game.DelayEvent.#ctor",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_c91865d620b9553c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_9530a87060fa0532 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_338cf0660cb20211 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_3bb9a4cf3da2e687 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_ec6bc173286b73e8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::String(u""); pls::game::cs_require(cs_target)->cs_eca097466f8cf377 = cs_value; return cs_value; }());
}
}
}

// M:game.DelayEvent.#ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.Int32[])
pls::cs::Ref<cs_456d3d004decc356> cs_da24e0fc27feed21(std::int32_t v_delayId,std::int32_t v_line,std::int32_t v_wait,std::int32_t v_hour,std::int32_t v_rideChara,pls::cs::String v_args,pls::cs::Array<std::int32_t> v_argi) { cs_init_456d3d004decc356();
{ auto cs_this = pls::cs::make_ref<cs_456d3d004decc356>(); cs_da24e0fc27feed21_init(cs_this,v_delayId,v_line,v_wait,v_hour,v_rideChara,v_args,v_argi); return cs_this; }
}

void cs_da24e0fc27feed21_init(pls::cs::Ref<cs_456d3d004decc356> cs_this,std::int32_t v_delayId,std::int32_t v_line,std::int32_t v_wait,std::int32_t v_hour,std::int32_t v_rideChara,pls::cs::String v_args,pls::cs::Array<std::int32_t> v_argi) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:game.DelayEvent.#ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.Int32[])",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_delayId; pls::game::cs_require(cs_target)->cs_c91865d620b9553c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_line; pls::game::cs_require(cs_target)->cs_9530a87060fa0532 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_wait; pls::game::cs_require(cs_target)->cs_338cf0660cb20211 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_hour; pls::game::cs_require(cs_target)->cs_3bb9a4cf3da2e687 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_rideChara; pls::game::cs_require(cs_target)->cs_ec6bc173286b73e8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_args; pls::game::cs_require(cs_target)->cs_eca097466f8cf377 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_31f2cf075b1406f9 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(v_argi); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make((v_argi).length()); pls::game::cs_require(cs_target)->cs_31f2cf075b1406f9 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(v_argi); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_31f2cf075b1406f9; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_31f2cf075b1406f9; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
}
}
}
}

// M:game.DelayEvent.Deserialize(java.io.InputStream)
void cs_9415d955c0e9b9aa(pls::cs::Ref<cs_456d3d004decc356> cs_this,pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> v_stream) { cs_init_456d3d004decc356();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:game.DelayEvent.Deserialize(java.io.InputStream)",game);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_c91865d620b9553c = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_9530a87060fa0532 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_338cf0660cb20211 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_3bb9a4cf3da2e687 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_ec6bc173286b73e8 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_50da92fdb560017f(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_eca097466f8cf377 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());})); pls::game::cs_require(cs_target)->cs_31f2cf075b1406f9 = cs_value; return cs_value; }());
for (std::int32_t v_i_1631 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1631; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_31f2cf075b1406f9; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1631; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1631 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_31f2cf075b1406f9; }()); auto cs_index = v_i_1631; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { pls::cs::Ref<pls::generated::cs_e7a5499b363ef51b> cs_arg0 = v_stream; return pls::generated::cs_3715f8f52a079812(cs_arg0); }());});cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
}
}
}
}

// M:game.DelayEvent.Serialize(java.io.OutputStream)
void cs_4178ca56a2eb6f02(pls::cs::Ref<cs_456d3d004decc356> cs_this,pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> v_os) { cs_init_456d3d004decc356();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:game.DelayEvent.Serialize(java.io.OutputStream)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_c91865d620b9553c; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9530a87060fa0532; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_338cf0660cb20211; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3bb9a4cf3da2e687; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ec6bc173286b73e8; }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; pls::cs::String cs_arg1 = ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca097466f8cf377; }())); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) ? (pls::cs::String(u"")) : (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eca097466f8cf377; }()))); pls::generated::cs_c3baaa92859d30c1(cs_arg0,cs_arg1); }());});
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_31f2cf075b1406f9; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_31f2cf075b1406f9; }())).length(); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
for (std::int32_t v_i_1190 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_1190; auto cs_right = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_31f2cf075b1406f9; }())).length(); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_1190; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_1190 = cs_new; return cs_old; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::generated::cs_ea324a0bbfe717fe> cs_arg0 = v_os; std::int32_t cs_arg1 = ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_31f2cf075b1406f9; }()); auto cs_index = v_i_1190; return cs_array.get_Item(cs_index); }()); pls::generated::cs_b87bdf680540412f(cs_arg0,cs_arg1); }());});
}
}
}
}
}
}
}
