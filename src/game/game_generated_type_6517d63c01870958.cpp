// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_6517d63c01870958.hpp"
#include "generated/portable_generated_type_67cd241ab51652f1.hpp"
#include "generated/portable_generated_type_67cd241ab51652f1_templates.hpp"
namespace pls::game {

void cs_6517d63c01870958::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_e751c7c04a2d6904,visitor);pls::cs::trace_value(cs_0ae43c28ac9b9a7a,visitor);pls::cs::trace_value(cs_9581916698464411,visitor);pls::cs::trace_value(cs_bc3ed6e7ac2c682a,visitor);pls::cs::trace_value(cs_b5f7390e18875f50,visitor);pls::cs::trace_value(cs_907bdb29f23c20f6,visitor);pls::cs::trace_value(cs_f1365c978e9c4cae,visitor);pls::cs::trace_value(cs_58d9bdebab2ca99e,visitor);pls::cs::trace_value(cs_4be9171376316f3b,visitor);pls::cs::trace_value(cs_c71933e9bca11daa,visitor);pls::cs::trace_value(cs_a404a90eff0aeb13,visitor);pls::cs::trace_value(cs_4d04dab5735542a9,visitor);}

void cs_6517d63c01870958::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_e751c7c04a2d6904);pls::cs::release_value(cs_0ae43c28ac9b9a7a);pls::cs::release_value(cs_9581916698464411);pls::cs::release_value(cs_bc3ed6e7ac2c682a);pls::cs::release_value(cs_b5f7390e18875f50);pls::cs::release_value(cs_907bdb29f23c20f6);pls::cs::release_value(cs_f1365c978e9c4cae);pls::cs::release_value(cs_58d9bdebab2ca99e);pls::cs::release_value(cs_4be9171376316f3b);pls::cs::release_value(cs_c71933e9bca11daa);pls::cs::release_value(cs_a404a90eff0aeb13);pls::cs::release_value(cs_4d04dab5735542a9);}

static pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>> cs_6cb933168d711678_value{};

void cs_init_6517d63c01870958(){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(cs_6cb933168d711678_value,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.surface.TouchOption",[](){
cs_6cb933168d711678_value = pls::cs::evaluate_type_initializer_field("F:kairo.unity.surface.TouchOption.buffer",[&](){return pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.SurfaceManagerBase.BeginTouchRegist(kairo.unity.ui.Graphics):997",([&]() -> pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>> { return pls::generated::cs_f349692afe9e225e<pls::cs::Ref<cs_6517d63c01870958>>(); }()));});

});}

pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>& cs_6cb933168d711678(){cs_init_6517d63c01870958();return cs_6cb933168d711678_value;}

// M:kairo.unity.surface.TouchOption.#ctor
pls::cs::Ref<cs_6517d63c01870958> cs_8d483d962b875686() { cs_init_6517d63c01870958();
{ auto cs_this = pls::cs::make_ref<cs_6517d63c01870958>(); cs_8d483d962b875686_init(cs_this); return cs_this; }
}

void cs_8d483d962b875686_init(pls::cs::Ref<cs_6517d63c01870958> cs_this) {
cs_this->cs_c71933e9bca11daa = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.#ctor:886",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull))));
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.#ctor",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_aeddbf9e363c37fe(cs_receiver); }());
}
}
}

// M:kairo.unity.surface.TouchOption.#ctor(kairo.unity.surface.TouchOption)
pls::cs::Ref<cs_6517d63c01870958> cs_a791f152e6170c69(pls::cs::Ref<cs_6517d63c01870958> v_copy) { cs_init_6517d63c01870958();
{ auto cs_this = pls::cs::make_ref<cs_6517d63c01870958>(); cs_a791f152e6170c69_init(cs_this,v_copy); return cs_this; }
}

void cs_a791f152e6170c69_init(pls::cs::Ref<cs_6517d63c01870958> cs_this,pls::cs::Ref<cs_6517d63c01870958> v_copy) {
cs_this->cs_c71933e9bca11daa = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.#ctor(kairo.unity.surface.TouchOption):886",pls::cs::Array<std::int32_t>::make(pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull))));
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.#ctor(kairo.unity.surface.TouchOption)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_aeddbf9e363c37fe(cs_receiver); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e751c7c04a2d6904; }()); pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0ae43c28ac9b9a7a; }())); pls::game::cs_require(cs_target)->cs_0ae43c28ac9b9a7a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_9581916698464411; }())); pls::game::cs_require(cs_target)->cs_9581916698464411 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_f1365c978e9c4cae; }()); pls::game::cs_require(cs_target)->cs_f1365c978e9c4cae = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = true; pls::game::cs_require(cs_target)->cs_a404a90eff0aeb13 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.#ctor(kairo.unity.surface.TouchOption):1314",pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }())).length())); pls::game::cs_require(cs_target)->cs_bc3ed6e7ac2c682a = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_source = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_dest = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }()); auto cs_count = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_bc3ed6e7ac2c682a; }())).length(); pls::cs::Array<std::int32_t>::copy(cs_source,0,cs_dest,0,cs_count); }());});
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.#ctor(kairo.unity.surface.TouchOption):1450",pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }())).length())); pls::game::cs_require(cs_target)->cs_b5f7390e18875f50 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_source = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_dest = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }()); auto cs_count = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b5f7390e18875f50; }())).length(); pls::cs::Array<std::int32_t>::copy(cs_source,0,cs_dest,0,cs_count); }());});
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_907bdb29f23c20f6; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.#ctor(kairo.unity.surface.TouchOption):1574",pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_907bdb29f23c20f6; }())).length())); pls::game::cs_require(cs_target)->cs_907bdb29f23c20f6 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_source = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_907bdb29f23c20f6; }()); auto cs_dest = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_907bdb29f23c20f6; }()); auto cs_count = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_907bdb29f23c20f6; }())).length(); pls::cs::Array<std::int32_t>::copy(cs_source,0,cs_dest,0,cs_count); }());});
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58d9bdebab2ca99e; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.#ctor(kairo.unity.surface.TouchOption):1718",pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58d9bdebab2ca99e; }())).length())); pls::game::cs_require(cs_target)->cs_58d9bdebab2ca99e = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_source = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58d9bdebab2ca99e; }()); auto cs_dest = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58d9bdebab2ca99e; }()); auto cs_count = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_58d9bdebab2ca99e; }())).length(); pls::cs::Array<std::int32_t>::copy(cs_source,0,cs_dest,0,cs_count); }());});
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.#ctor(kairo.unity.surface.TouchOption):1870",pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }())).length())); pls::game::cs_require(cs_target)->cs_4be9171376316f3b = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() { auto cs_source = ([&]() { auto cs_receiver = v_copy; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }()); auto cs_dest = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }()); auto cs_count = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_4be9171376316f3b; }())).length(); pls::cs::Array<std::int32_t>::copy(cs_source,0,cs_dest,0,cs_count); }());});
}
}
}
}

// M:kairo.unity.surface.TouchOption.Create
pls::cs::Ref<cs_6517d63c01870958> cs_4b4ad350b14ef767() { cs_init_6517d63c01870958();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.Create",kairo);
{
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_2240 = pls::cs::Ref<cs_6517d63c01870958>{};
for (std::int32_t v_i_2272 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_2272; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678_value); if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_66a816fe45ab90e7(cs_receiver); }());}); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_2272; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_2272 = cs_new; return cs_old; }())) {
if ((!(([&]() { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678_value); std::int32_t cs_arg0 = v_i_2272; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());}); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a404a90eff0aeb13; }())))) {
([&]() { auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678_value); std::int32_t cs_arg0 = v_i_2272; if(!cs_receiver)throw pls::cs::NullReferenceException(); return pls::generated::cs_4b357a5c06369f9d(cs_receiver,cs_arg0); }());}); v_touchOption_2240 = cs_value; return cs_value; }());
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_6517d63c01870958>>(v_touchOption_2240); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_aeddbf9e363c37fe(cs_receiver); }());
break;
}
}
if (([&]() { auto cs_left = pls::cs::box(v_touchOption_2240); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<pls::generated::cs_67cd241ab51652f1<pls::cs::Ref<cs_6517d63c01870958>>>>(cs_6cb933168d711678_value); pls::cs::Ref<cs_6517d63c01870958> cs_arg0 = ([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.Create:2499",([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_8d483d962b875686(); }())); v_touchOption_2240 = cs_value; return cs_value; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); pls::generated::cs_7969ffc067486ca6(cs_receiver,cs_arg0); }());});
}
([&]() { auto cs_target = v_touchOption_2240; auto cs_value = true; pls::game::cs_require(cs_target)->cs_a404a90eff0aeb13 = cs_value; return cs_value; }());
return v_touchOption_2240;
}
}
}

// M:kairo.unity.surface.TouchOption.Create(System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_93c9e5f80bde9aac(std::int32_t v_flag) { cs_init_6517d63c01870958();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.Create(System.Int32)",kairo);
{
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_2974 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }());
([&]() { auto cs_target = v_touchOption_2974; auto cs_value = v_flag; pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
return v_touchOption_2974;
}
}
}

// M:kairo.unity.surface.TouchOption.Create(System.Int32[])
pls::cs::Ref<cs_6517d63c01870958> cs_7ff4169f9e726138(pls::cs::Array<std::int32_t> v_args) { cs_init_6517d63c01870958();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.Create(System.Int32[])",kairo);
{
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_2646 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }());
([&]() { auto cs_target = v_touchOption_2646; auto cs_value = v_args; pls::game::cs_require(cs_target)->cs_b5f7390e18875f50 = cs_value; return cs_value; }());
return v_touchOption_2646;
}
}
}

// M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_5620e4317abf431d(std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_xcells,std::int32_t v_ycells,std::int32_t v_flag) { cs_init_6517d63c01870958();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",kairo);
{
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_3638 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }());
([&]() { auto cs_target = v_touchOption_3638; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32):3688",([&](){auto cs_initial_array_701=pls::cs::Array<std::int32_t>::make(6);cs_initial_array_701.at(0)=v_x;cs_initial_array_701.at(1)=v_y;cs_initial_array_701.at(2)=v_w;cs_initial_array_701.at(3)=v_h;cs_initial_array_701.at(4)=v_xcells;cs_initial_array_701.at(5)=v_ycells;return cs_initial_array_701;}())); pls::game::cs_require(cs_target)->cs_bc3ed6e7ac2c682a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchOption_3638; auto cs_value = v_flag; pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
return v_touchOption_3638;
}
}
}

// M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_6e486801eeb083a6(std::int32_t v_x,std::int32_t v_y,std::int32_t v_w,std::int32_t v_h,std::int32_t v_xcells,std::int32_t v_ycells) { cs_init_6517d63c01870958();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",kairo);
{
return ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { std::int32_t cs_arg0 = v_x; std::int32_t cs_arg1 = v_y; std::int32_t cs_arg2 = v_w; std::int32_t cs_arg3 = v_h; std::int32_t cs_arg4 = v_xcells; std::int32_t cs_arg5 = v_ycells; std::int32_t cs_arg6 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_5620e4317abf431d(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4,cs_arg5,cs_arg6); }());
}
}
}

// M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_b9a90c33bc9435da(std::int32_t v_gridX,std::int32_t v_gridY,std::int32_t v_flag) { cs_init_6517d63c01870958();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32,System.Int32)",kairo);
{
pls::cs::Ref<cs_6517d63c01870958> v_touchOption_3235 = ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { return cs_4b4ad350b14ef767(); }());
([&]() { auto cs_target = v_touchOption_3235; auto cs_value = static_cast<float>(v_gridX); pls::game::cs_require(cs_target)->cs_0ae43c28ac9b9a7a = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchOption_3235; auto cs_value = static_cast<float>(v_gridY); pls::game::cs_require(cs_target)->cs_9581916698464411 = cs_value; return cs_value; }());
([&]() { auto cs_target = v_touchOption_3235; auto cs_value = v_flag; pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
return v_touchOption_3235;
}
}
}

// M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_7d332928f9262a01(std::int32_t v_gridX,std::int32_t v_gridY) { cs_init_6517d63c01870958();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.Drag(System.Int32,System.Int32)",kairo);
{
return ([&]() -> pls::cs::Ref<cs_6517d63c01870958> { std::int32_t cs_arg0 = v_gridX; std::int32_t cs_arg1 = v_gridY; std::int32_t cs_arg2 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return cs_b9a90c33bc9435da(cs_arg0,cs_arg1,cs_arg2); }());
}
}
}

// M:kairo.unity.surface.TouchOption.ExtendValues(System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_6f3af12bb51c6a25(pls::cs::Ref<cs_6517d63c01870958> cs_this,std::int32_t v_value) { cs_init_6517d63c01870958();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.ExtendValues(System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.ExtendValues(System.Int32):4365",([&](){auto cs_initial_array_659=pls::cs::Array<std::int32_t>::make(1);cs_initial_array_659.at(0)=v_value;return cs_initial_array_659;}())); pls::game::cs_require(cs_target)->cs_58d9bdebab2ca99e = cs_value; return cs_value; }());
return cs_this;
}
}
}
}

// M:kairo.unity.surface.TouchOption.Flag(System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_f8d0ca2ad798adff(pls::cs::Ref<cs_6517d63c01870958> cs_this,std::int32_t v_flag) { cs_init_6517d63c01870958();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.Flag(System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_flag; pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
return cs_this;
}
}
}
}

// M:kairo.unity.surface.TouchOption.Init
void cs_aeddbf9e363c37fe(pls::cs::Ref<cs_6517d63c01870958> cs_this) { cs_init_6517d63c01870958();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.Init",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_e751c7c04a2d6904 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(pls::game::cs_f32(0x00000000u)); pls::game::cs_require(cs_target)->cs_0ae43c28ac9b9a7a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = static_cast<float>(pls::game::cs_f32(0x00000000u)); pls::game::cs_require(cs_target)->cs_9581916698464411 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_bc3ed6e7ac2c682a = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_b5f7390e18875f50 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_907bdb29f23c20f6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_f1365c978e9c4cae = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_58d9bdebab2ca99e = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>{}; pls::game::cs_require(cs_target)->cs_4be9171376316f3b = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = false; pls::game::cs_require(cs_target)->cs_a404a90eff0aeb13 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::game::cs_require(cs_target)->cs_4d04dab5735542a9 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.surface.TouchOption.Margin(System.Int32,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<cs_6517d63c01870958> cs_de6cd246e5da5ce1(pls::cs::Ref<cs_6517d63c01870958> cs_this,std::int32_t v_left,std::int32_t v_right,std::int32_t v_top,std::int32_t v_bottom) { cs_init_6517d63c01870958();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.TouchOption.Margin(System.Int32,System.Int32,System.Int32,System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_array","src/KairoLibrary/kairo/unity/surface/TouchOption.cs:M:kairo.unity.surface.TouchOption.Margin(System.Int32,System.Int32,System.Int32,System.Int32):4045",([&](){auto cs_initial_array_658=pls::cs::Array<std::int32_t>::make(4);cs_initial_array_658.at(0)=v_left;cs_initial_array_658.at(1)=v_right;cs_initial_array_658.at(2)=v_top;cs_initial_array_658.at(3)=v_bottom;return cs_initial_array_658;}())); pls::game::cs_require(cs_target)->cs_907bdb29f23c20f6 = cs_value; return cs_value; }());
return cs_this;
}
}
}
}
}
