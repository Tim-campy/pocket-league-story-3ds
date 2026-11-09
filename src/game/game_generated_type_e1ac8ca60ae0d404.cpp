// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_9326c27a92cfea3a.hpp"
#include "game_generated_type_e1ac8ca60ae0d404.hpp"
#include "game_generated_type_e373231f616cd1ed.hpp"
#include "generated/portable_generated_type_3af9088680f95fb3.hpp"
namespace pls::game {

void cs_e1ac8ca60ae0d404::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_7e57fb8b2c00b332,visitor);pls::cs::trace_value(cs_a07960f3828b6654,visitor);pls::cs::trace_value(cs_0c2122c67a220ad5,visitor);pls::cs::trace_value(cs_d19197b1eca33954,visitor);pls::cs::trace_value(cs_03e6582cfb7c53c4,visitor);pls::cs::trace_value(cs_b2d35947212f5095,visitor);pls::cs::trace_value(cs_767548071e1ac66d,visitor);pls::cs::trace_value(cs_5e13f1b59d6187ce,visitor);pls::cs::trace_value(cs_68e37d2551fe1039,visitor);pls::cs::trace_value(cs_445810c66b37725f,visitor);pls::cs::trace_value(cs_dca7b292fa5b4249,visitor);}

void cs_e1ac8ca60ae0d404::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_7e57fb8b2c00b332);pls::cs::release_value(cs_a07960f3828b6654);pls::cs::release_value(cs_0c2122c67a220ad5);pls::cs::release_value(cs_d19197b1eca33954);pls::cs::release_value(cs_03e6582cfb7c53c4);pls::cs::release_value(cs_b2d35947212f5095);pls::cs::release_value(cs_767548071e1ac66d);pls::cs::release_value(cs_5e13f1b59d6187ce);pls::cs::release_value(cs_68e37d2551fe1039);pls::cs::release_value(cs_445810c66b37725f);pls::cs::release_value(cs_dca7b292fa5b4249);}

static pls::cs::Ref<cs_e373231f616cd1ed> cs_994906ff6b942bc3_value{};

void cs_init_e1ac8ca60ae0d404(){static pls::cs::TypeInitState state;state.run("kairo.unity.surface.SurfaceBase.MotionEventRecord",[](){

});}

pls::cs::Ref<cs_e373231f616cd1ed>& cs_994906ff6b942bc3(){cs_init_e1ac8ca60ae0d404();return cs_994906ff6b942bc3_value;}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.#ctor
pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_ef5589b812f9d157() { cs_init_e1ac8ca60ae0d404();
{ auto cs_this = pls::cs::make_ref<cs_e1ac8ca60ae0d404>(); cs_ef5589b812f9d157_init(cs_this); return cs_this; }
}

void cs_ef5589b812f9d157_init(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.#ctor",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e1ac8ca60ae0d404>>(cs_this); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_7c055166f9b27c04(cs_receiver); }());
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Clear
void cs_7c055166f9b27c04(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Clear",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); pls::game::cs_require(cs_target)->cs_7e57fb8b2c00b332 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Copy(kairo.unity.surface.SurfaceBase,kairo.unity.surface.MotionEvent)
void cs_f1026731bc4fecf6(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,pls::cs::Ref<pls::kairo::MotionEvent> v_evt) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Copy(kairo.unity.surface.SurfaceBase,kairo.unity.surface.MotionEvent)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetAction(); }());}); pls::game::cs_require(cs_target)->cs_7e57fb8b2c00b332 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetX(); }());}); pls::game::cs_require(cs_target)->cs_a07960f3828b6654 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> float { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetY(); }());}); auto cs_right = static_cast<float>((((pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsMousePointer(); }());})) ? pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)) : (([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_9326c27a92cfea3a>>(v_surface); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_aa76afa6918aaccc(cs_receiver); }()))))); return (cs_left + cs_right); }()); pls::game::cs_require(cs_target)->cs_0c2122c67a220ad5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaX(); }());}); pls::game::cs_require(cs_target)->cs_d19197b1eca33954 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaY(); }());}); pls::game::cs_require(cs_target)->cs_03e6582cfb7c53c4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaTime(); }());}); pls::game::cs_require(cs_target)->cs_b2d35947212f5095 = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(cs_994906ff6b942bc3()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = ([&]() -> pls::cs::Ref<cs_e373231f616cd1ed> { return cs_2ec538e1b5422edb(); }()); cs_994906ff6b942bc3() = cs_value; return cs_value; }());
}
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); pls::cs::Ref<pls::kairo::MotionEvent> cs_arg0 = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_f14fdc91c7a10673(cs_receiver,cs_arg0); }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_ee485ec02dea0628(cs_receiver); }()); pls::game::cs_require(cs_target)->cs_767548071e1ac66d = cs_value; return cs_value; }());
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }()); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }())); pls::game::cs_require(cs_target)->cs_5e13f1b59d6187ce = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<float>::make(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->cs_68e37d2551fe1039 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<float>::make(([&]() -> std::int32_t { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }())); pls::game::cs_require(cs_target)->cs_445810c66b37725f = cs_value; return cs_value; }());
}
for (std::int32_t v_i_3154 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); ([&]() -> bool { auto cs_left = v_i_3154; auto cs_right = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }()); return (cs_left < cs_right); }()); ([&]() { auto cs_old = v_i_3154; auto cs_new = pls::cs::add_i32(cs_old,1); v_i_3154 = cs_new; return cs_old; }())) {
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }()); auto cs_index = v_i_3154; auto cs_value = ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_147cc5906608a16b(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_3154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_599cda2fd1d6b522(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_3154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_d831862e2b588867(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_3154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_4bab6edd4be5b5fc(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_3154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_e15d44f506415222(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
([&]() { auto cs_target = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_i_3154; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x3ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::add_i32(cs_left,cs_right); }()); auto cs_value = ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<cs_e373231f616cd1ed>>(cs_994906ff6b942bc3()); std::int32_t cs_arg0 = v_i_3154; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_bb7739e815078f77(cs_receiver,cs_arg0); }());cs_target.set_Item(cs_index,cs_value);return cs_value;}());
}
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(v_evt); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->IsMousePointer(); }());}); pls::game::cs_require(cs_target)->cs_dca7b292fa5b4249 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Copy(kairo.unity.surface.SurfaceBase,kairo.unity.surface.SurfaceBase.MotionEventRecord)
void cs_e879b926a94bdd5d(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,pls::cs::Ref<cs_9326c27a92cfea3a> v_surface,pls::cs::Ref<cs_e1ac8ca60ae0d404> v_evt) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Copy(kairo.unity.surface.SurfaceBase,kairo.unity.surface.SurfaceBase.MotionEventRecord)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); pls::game::cs_require(cs_target)->cs_7e57fb8b2c00b332 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_a07960f3828b6654; }()); pls::game::cs_require(cs_target)->cs_a07960f3828b6654 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_0c2122c67a220ad5; }()); pls::game::cs_require(cs_target)->cs_0c2122c67a220ad5 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_d19197b1eca33954; }()); pls::game::cs_require(cs_target)->cs_d19197b1eca33954 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_03e6582cfb7c53c4; }()); pls::game::cs_require(cs_target)->cs_03e6582cfb7c53c4 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b2d35947212f5095; }()); pls::game::cs_require(cs_target)->cs_b2d35947212f5095 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dca7b292fa5b4249; }()); pls::game::cs_require(cs_target)->cs_dca7b292fa5b4249 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }()); pls::game::cs_require(cs_target)->cs_767548071e1ac66d = cs_value; return cs_value; }());
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left != cs_right; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); auto cs_right = (([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<std::int32_t>::make((([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length()); pls::game::cs_require(cs_target)->cs_5e13f1b59d6187ce = cs_value; return cs_value; }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())); auto cs_right = pls::cs::box(pls::cs::Array<float>{}); return cs_left != cs_right; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())); auto cs_right = pls::cs::box(pls::cs::Array<float>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length(); auto cs_right = (([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length(); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<float>::make((([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length()); pls::game::cs_require(cs_target)->cs_68e37d2551fe1039 = cs_value; return cs_value; }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
}
if (([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())); auto cs_right = pls::cs::box(pls::cs::Array<float>{}); return cs_left != cs_right; }())) {
if ((([&]() { auto cs_left = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())); auto cs_right = pls::cs::box(pls::cs::Array<float>{}); return cs_left == cs_right; }()) || ([&]() -> bool { auto cs_left = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length(); auto cs_right = (([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length(); return (cs_left != cs_right); }()))) {
([&]() { auto cs_target = cs_this; auto cs_value = pls::cs::Array<float>::make((([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length()); pls::game::cs_require(cs_target)->cs_445810c66b37725f = cs_value; return cs_value; }());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(([&]() { auto cs_receiver = v_evt; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())); std::int32_t cs_arg1 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())); std::int32_t cs_arg3 = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); std::int32_t cs_arg4 = (([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_445810c66b37725f; }())).length(); pls::generated::cs_d7f58c7ab5ff68b6(cs_arg0,cs_arg1,cs_arg2,cs_arg3,cs_arg4); }());});
}
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetAction
std::int32_t cs_1fc22b186f83ddec(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetAction",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }());
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetPointerCount
std::int32_t cs_40ac27079aeadda5(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetPointerCount",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_767548071e1ac66d; }());
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetPointerId(System.Int32)
std::int32_t cs_4ccc696f76a5a02e(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_pointerIndex) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetPointerId(System.Int32)",kairo);
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e13f1b59d6187ce; }()); auto cs_index = v_pointerIndex; return cs_array.get_Item(cs_index); }());
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetX(System.Int32)
float cs_7be670f4053bc836(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_index) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetX(System.Int32)",kairo);
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x0ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetY(System.Int32)
float cs_f83f5dafe8eac875(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this,std::int32_t v_index) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetY(System.Int32)",kairo);
{
return ([&]() { auto cs_array = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_68e37d2551fe1039; }()); auto cs_index = ([&]() -> std::int32_t { auto cs_left = ([&]() -> std::int32_t { auto cs_left = v_index; auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x2ull)); return pls::cs::mul_i32(cs_left,cs_right); }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0x1ull)); return pls::cs::add_i32(cs_left,cs_right); }()); return cs_array.get_Item(cs_index); }());
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.IsEmpty
bool cs_75dcbdf2f80cf9d3(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.IsEmpty",kairo);
{
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7e57fb8b2c00b332; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left == cs_right); }());
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.IsMousePointer
bool cs_3f051d1070002654(pls::cs::Ref<cs_e1ac8ca60ae0d404> cs_this) { cs_init_e1ac8ca60ae0d404();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.IsMousePointer",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_dca7b292fa5b4249; }());
}
}
}
}
}
