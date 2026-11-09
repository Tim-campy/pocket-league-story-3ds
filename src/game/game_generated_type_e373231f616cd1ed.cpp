// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_e373231f616cd1ed.hpp"
namespace pls::game {

void cs_e373231f616cd1ed::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_6a3564cf80f64631,visitor);}

void cs_e373231f616cd1ed::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_6a3564cf80f64631);}

void cs_init_e373231f616cd1ed(){static pls::cs::TypeInitState state;state.run("kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch",[](){

});}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.#ctor
pls::cs::Ref<cs_e373231f616cd1ed> cs_2ec538e1b5422edb() { cs_init_e373231f616cd1ed();
{ auto cs_this = pls::cs::make_ref<cs_e373231f616cd1ed>(); cs_2ec538e1b5422edb_init(cs_this); return cs_this; }
}

void cs_2ec538e1b5422edb_init(pls::cs::Ref<cs_e373231f616cd1ed> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.#ctor",kairo);
{}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaTime(System.Int32)
float cs_bb7739e815078f77(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaTime(System.Int32)",kairo);
{
try {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaTime(cs_arg0); }());});
} catch(const pls::cs::Exception& cs_caught_193) {auto cs_exception_193=pls::cs::capture_exception(cs_caught_193);
if(pls::cs::exception_is(cs_exception_193,"System.Exception")) {{
return pls::game::cs_f32(0x00000000u);
}}
else {throw;} }
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaX(System.Int32)
float cs_4bab6edd4be5b5fc(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaX(System.Int32)",kairo);
{
try {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaX(cs_arg0); }());});
} catch(const pls::cs::Exception& cs_caught_191) {auto cs_exception_191=pls::cs::capture_exception(cs_caught_191);
if(pls::cs::exception_is(cs_exception_191,"System.Exception")) {{
return pls::game::cs_f32(0x00000000u);
}}
else {throw;} }
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaY(System.Int32)
float cs_e15d44f506415222(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetDeltaY(System.Int32)",kairo);
{
try {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetDeltaY(cs_arg0); }());});
} catch(const pls::cs::Exception& cs_caught_192) {auto cs_exception_192=pls::cs::capture_exception(cs_caught_192);
if(pls::cs::exception_is(cs_exception_192,"System.Exception")) {{
return pls::game::cs_f32(0x00000000u);
}}
else {throw;} }
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetPointerCount
std::int32_t cs_ee485ec02dea0628(pls::cs::Ref<cs_e373231f616cd1ed> cs_this) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetPointerCount",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetPointerCount(); }());});
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetPointerId(System.Int32)
std::int32_t cs_147cc5906608a16b(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetPointerId(System.Int32)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetPointerId(cs_arg0); }());});
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetX(System.Int32)
float cs_599cda2fd1d6b522(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetX(System.Int32)",kairo);
{
try {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetX(cs_arg0); }());});
} catch(const pls::cs::Exception& cs_caught_189) {auto cs_exception_189=pls::cs::capture_exception(cs_caught_189);
if(pls::cs::exception_is(cs_exception_189,"System.Exception")) {{
return pls::game::cs_f32(0x00000000u);
}}
else {throw;} }
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetY(System.Int32)
float cs_d831862e2b588867(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,std::int32_t v_index) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.GetY(System.Int32)",kairo);
{
try {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> float { auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::MotionEvent>>(([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_6a3564cf80f64631; }())); std::int32_t cs_arg0 = v_index; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->GetY(cs_arg0); }());});
} catch(const pls::cs::Exception& cs_caught_190) {auto cs_exception_190=pls::cs::capture_exception(cs_caught_190);
if(pls::cs::exception_is(cs_exception_190,"System.Exception")) {{
return pls::game::cs_f32(0x00000000u);
}}
else {throw;} }
}
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.Set(kairo.unity.surface.MotionEvent)
void cs_f14fdc91c7a10673(pls::cs::Ref<cs_e373231f616cd1ed> cs_this,pls::cs::Ref<pls::kairo::MotionEvent> v_evt) { cs_init_e373231f616cd1ed();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.Set(kairo.unity.surface.MotionEvent)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_evt; pls::game::cs_require(cs_target)->cs_6a3564cf80f64631 = cs_value; return cs_value; }());
}
}
}
}
}
