// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_3e4aca89edcc9a80.hpp"
#include "game_generated_type_75beb3a42e16f9bd.hpp"
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_e315dac1df3b175d.hpp"
namespace pls::game {

void cs_75beb3a42e16f9bd::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

void cs_75beb3a42e16f9bd::release_edges(){pls::cs::Object::release_edges();}

void cs_init_75beb3a42e16f9bd(){static pls::cs::TypeInitState state;state.run("main.WebBox",[](){

});}

// M:main.WebBox.#ctor
pls::cs::Ref<cs_75beb3a42e16f9bd> cs_f09852df11161a25() { cs_init_75beb3a42e16f9bd();
{ auto cs_this = pls::cs::make_ref<cs_75beb3a42e16f9bd>(); cs_f09852df11161a25_init(cs_this); return cs_this; }
}

void cs_f09852df11161a25_init(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this) {
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.WebBox.#ctor",game);
{
([&]() -> bool { return cs_3a9f80bb9d4c67b0(); }());
}
}
}

// M:main.WebBox.Create
pls::cs::Ref<cs_75beb3a42e16f9bd> cs_be5f253170ce03cf() { cs_init_75beb3a42e16f9bd();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.WebBox.Create",game);
{
{
bool v_recoveredCondition_200_192 = ([&]() -> bool { return cs_3a9f80bb9d4c67b0(); }());
if ((!(v_recoveredCondition_200_192))) {
return pls::cs::Ref<cs_75beb3a42e16f9bd>{};
}
}
return pls::source_allocations::completed("new_object","src/Assembly-CSharp/main/WebBox.cs:M:main.WebBox.Create:308",([&]() -> pls::cs::Ref<cs_75beb3a42e16f9bd> { return cs_f09852df11161a25(); }()));
}
}
}

// M:main.WebBox.Dispose
void cs_3b025ec44cfe2687(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this) { cs_init_75beb3a42e16f9bd();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.WebBox.Dispose",game);
{
([&]() -> void { cs_989654af49418085(); }());
}
}
}
}

// M:main.WebBox.LoadUrl(System.String)
void cs_60f5bf4308fff459(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this,pls::cs::String v_url) { cs_init_75beb3a42e16f9bd();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.WebBox.LoadUrl(System.String)",game);
{
([&]() -> void { pls::cs::String cs_arg0 = v_url; cs_9880f60df5ac958b(cs_arg0); }());
}
}
}
}

// M:main.WebBox.SetViewRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)
void cs_a222e1b8747d341d(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this,pls::cs::Ref<pls::kairo::Graphics> v_g,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height) { cs_init_75beb3a42e16f9bd();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.WebBox.SetViewRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
([&]() { auto cs_old = v_x; auto cs_rhs = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginX(); }());}); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_x = cs_value; return cs_value; }());
([&]() { auto cs_old = v_y; auto cs_rhs = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(v_g); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetOriginY(); }());}); auto cs_value = pls::cs::add_i32(cs_old,cs_rhs); v_y = cs_value; return cs_value; }());
pls::cs::Ref<cs_e315dac1df3b175d> v_instance_581 = ([&]() -> pls::cs::Ref<cs_e315dac1df3b175d> { return cs_f32a8bd00f4461ef(); }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_581); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_099daeab6f59a950(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(static_cast<float>(v_x)); auto cs_right = static_cast<double>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_581); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }())); return (cs_left * cs_right); }())); auto cs_right = static_cast<double>(pls::game::cs_f32(0x42c80000u)); return (cs_left / cs_right); }())); auto cs_right = static_cast<double>(pls::game::cs_f32(0x3c23d70au)); return (cs_left + cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }()); v_x = cs_value; return cs_value; }());
([&]() { auto cs_value = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_581); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e806cfaebaa3c9d5(cs_receiver); }()); auto cs_right = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(static_cast<float>(v_y)); auto cs_right = static_cast<double>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_581); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }())); return (cs_left * cs_right); }())); auto cs_right = static_cast<double>(pls::game::cs_f32(0x42c80000u)); return (cs_left / cs_right); }())); auto cs_right = static_cast<double>(pls::game::cs_f32(0x3c23d70au)); return (cs_left + cs_right); }()))); return pls::cs::add_i32(cs_left,cs_right); }()); v_y = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(static_cast<float>(v_width)); auto cs_right = static_cast<double>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_581); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }())); return (cs_left * cs_right); }())); auto cs_right = static_cast<double>(pls::game::cs_f32(0x42c80000u)); return (cs_left / cs_right); }())); auto cs_right = static_cast<double>(pls::game::cs_f32(0x3c23d70au)); return (cs_left + cs_right); }()))); v_width = cs_value; return cs_value; }());
([&]() { auto cs_value = pls::cs::conv_i32((([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(([&]() -> double { auto cs_left = static_cast<double>(static_cast<float>(v_height)); auto cs_right = static_cast<double>(([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_instance_581); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e739ab87bfd72b08(cs_receiver); }())); return (cs_left * cs_right); }())); auto cs_right = static_cast<double>(pls::game::cs_f32(0x42c80000u)); return (cs_left / cs_right); }())); auto cs_right = static_cast<double>(pls::game::cs_f32(0x3c23d70au)); return (cs_left + cs_right); }()))); v_height = cs_value; return cs_value; }());
([&]() -> void { std::int32_t cs_arg0 = v_x; std::int32_t cs_arg1 = v_y; std::int32_t cs_arg2 = v_width; std::int32_t cs_arg3 = v_height; cs_2680807108af04f2(cs_arg0,cs_arg1,cs_arg2,cs_arg3); }());
}
}
}
}

// M:main.WebBox.SetViewRect(System.Int32,System.Int32,System.Int32,System.Int32)
void cs_f59a8fb575fe1f95(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this,std::int32_t v_x,std::int32_t v_y,std::int32_t v_width,std::int32_t v_height) { cs_init_75beb3a42e16f9bd();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.WebBox.SetViewRect(System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_75beb3a42e16f9bd>>(cs_this); pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = pls::cs::Ref<pls::kairo::Graphics>{}; std::int32_t cs_arg1 = v_x; std::int32_t cs_arg2 = v_y; std::int32_t cs_arg3 = v_width; std::int32_t cs_arg4 = v_height; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_a222e1b8747d341d(cs_receiver,cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());
}
}
}
}

// M:main.WebBox.SetVisible(System.Boolean)
void cs_c43dd1186ee5b9ae(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this,bool v_visible) { cs_init_75beb3a42e16f9bd();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.WebBox.SetVisible(System.Boolean)",game);
{
([&]() -> void { bool cs_arg0 = v_visible; cs_236610a33a42d135(cs_arg0); }());
}
}
}
}

// M:main.WebBox.Visible
bool cs_887b431bb9fdd04e(pls::cs::Ref<cs_75beb3a42e16f9bd> cs_this) { cs_init_75beb3a42e16f9bd();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:main.WebBox.Visible",game);
{
return ([&]() -> bool { return cs_10e91865cda7ff2c(); }());
}
}
}
}
}
