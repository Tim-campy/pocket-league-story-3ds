// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_3c64e1d398f2e00f.hpp"
#include "portable_generated_type_5098bfda9cf65745.hpp"
#include "portable_generated_type_c4521f4960c4f908.hpp"
#include "portable_generated_type_e7a5499b363ef51b.hpp"
#include "portable_generated_type_ea324a0bbfe717fe.hpp"
namespace pls::generated {

void cs_3c64e1d398f2e00f::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_5940b7db44d7fcc3,visitor);pls::cs::trace_value(cs_3f971496b3e90e07,visitor);pls::cs::trace_value(cs_992193a3ad58af68,visitor);}

void cs_3c64e1d398f2e00f::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_5940b7db44d7fcc3);pls::cs::release_value(cs_3f971496b3e90e07);pls::cs::release_value(cs_992193a3ad58af68);}

void cs_3c64e1d398f2e00f::cs_virtual_f2ab7f0a88763f04(pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) {cs_d64267dcdc138fe0(pls::cs::static_pointer_cast<cs_3c64e1d398f2e00f>(shared_from_this()),v_stream);}

void cs_3c64e1d398f2e00f::cs_virtual_8d925e3b30750eb6(pls::cs::Ref<cs_ea324a0bbfe717fe> v_stream) {cs_086b1f406f360542(pls::cs::static_pointer_cast<cs_3c64e1d398f2e00f>(shared_from_this()),v_stream);}

void cs_init_3c64e1d398f2e00f(){static pls::cs::TypeInitState state;state.run("kairo.unity.m3d4.util3d.Vector3D",[](){

});}

// M:kairo.unity.m3d4.util3d.Vector3D.#ctor
pls::cs::Ref<cs_3c64e1d398f2e00f> cs_f0250768de698879() { cs_init_3c64e1d398f2e00f();
{ auto cs_this = pls::cs::make_ref<cs_3c64e1d398f2e00f>(); cs_f0250768de698879_init(cs_this); return cs_this; }
}

void cs_f0250768de698879_init(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.#ctor",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = (([&]() { auto cs_target = cs_this; auto cs_value = pls::generated::cs_f32(0x00000000u); pls::generated::cs_require(cs_target)->cs_992193a3ad58af68 = cs_value; return cs_value; }())); pls::generated::cs_require(cs_target)->cs_3f971496b3e90e07 = cs_value; return cs_value; }())); pls::generated::cs_require(cs_target)->cs_5940b7db44d7fcc3 = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.#ctor(System.Single,System.Single,System.Single)
pls::cs::Ref<cs_3c64e1d398f2e00f> cs_4df100a3a5400345(float v_x,float v_y,float v_z) { cs_init_3c64e1d398f2e00f();
{ auto cs_this = pls::cs::make_ref<cs_3c64e1d398f2e00f>(); cs_4df100a3a5400345_init(cs_this,v_x,v_y,v_z); return cs_this; }
}

void cs_4df100a3a5400345_init(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_x,float v_y,float v_z) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.#ctor(System.Single,System.Single,System.Single)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(cs_this); float cs_arg0 = v_x; float cs_arg1 = v_y; float cs_arg2 = v_z; if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_eab8c2f1c1ba14e9(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Add(kairo.unity.m3d4.util3d.Vector3D)
void cs_b222f1bce980230f(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,pls::cs::Ref<cs_3c64e1d398f2e00f> v_v) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Add(kairo.unity.m3d4.util3d.Vector3D)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(cs_this); float cs_arg0 = ([&]() { auto cs_receiver = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5940b7db44d7fcc3; }()); float cs_arg1 = ([&]() { auto cs_receiver = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3f971496b3e90e07; }()); float cs_arg2 = ([&]() { auto cs_receiver = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_992193a3ad58af68; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_c44a23edacd04c43(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Add(System.Single,System.Single,System.Single)
void cs_c44a23edacd04c43(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_x,float v_y,float v_z) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Add(System.Single,System.Single,System.Single)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_5940b7db44d7fcc3; auto cs_rhs = v_x; auto cs_value = (cs_old + cs_rhs); pls::generated::cs_require(cs_target)->cs_5940b7db44d7fcc3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_3f971496b3e90e07; auto cs_rhs = v_y; auto cs_value = (cs_old + cs_rhs); pls::generated::cs_require(cs_target)->cs_3f971496b3e90e07 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_old = pls::generated::cs_require(cs_target)->cs_992193a3ad58af68; auto cs_rhs = v_z; auto cs_value = (cs_old + cs_rhs); pls::generated::cs_require(cs_target)->cs_992193a3ad58af68 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Deserialize(java.io.InputStream)
void cs_d64267dcdc138fe0(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,pls::cs::Ref<cs_e7a5499b363ef51b> v_stream) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Deserialize(java.io.InputStream)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> float { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_92c2775ee2dbf38f(cs_arg0); }()); pls::generated::cs_require(cs_target)->cs_5940b7db44d7fcc3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> float { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_92c2775ee2dbf38f(cs_arg0); }()); pls::generated::cs_require(cs_target)->cs_3f971496b3e90e07 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> float { pls::cs::Ref<cs_e7a5499b363ef51b> cs_arg0 = v_stream; return cs_92c2775ee2dbf38f(cs_arg0); }()); pls::generated::cs_require(cs_target)->cs_992193a3ad58af68 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.GetX
float cs_057460bc67f561ff(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.GetX",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5940b7db44d7fcc3; }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.GetY
float cs_b09e372c7963bada(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.GetY",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3f971496b3e90e07; }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.GetZ
float cs_8c6fe63f0a32cc25(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.GetZ",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_992193a3ad58af68; }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Serialize(java.io.OutputStream)
void cs_086b1f406f360542(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,pls::cs::Ref<cs_ea324a0bbfe717fe> v_stream) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Serialize(java.io.OutputStream)",kairo);
{
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_stream; float cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5940b7db44d7fcc3; }()); cs_07583f591da8d9cb(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_stream; float cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3f971496b3e90e07; }()); cs_07583f591da8d9cb(cs_arg0,cs_arg1); }());
([&]() -> void { pls::cs::Ref<cs_ea324a0bbfe717fe> cs_arg0 = v_stream; float cs_arg1 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_992193a3ad58af68; }()); cs_07583f591da8d9cb(cs_arg0,cs_arg1); }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Set(kairo.unity.m3d4.util3d.Vector3D)
void cs_cdf43d81dba1e3fb(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,pls::cs::Ref<cs_3c64e1d398f2e00f> v_v) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Set(kairo.unity.m3d4.util3d.Vector3D)",kairo);
{
([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<cs_3c64e1d398f2e00f>>(cs_this); float cs_arg0 = ([&]() { auto cs_receiver = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5940b7db44d7fcc3; }()); float cs_arg1 = ([&]() { auto cs_receiver = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_3f971496b3e90e07; }()); float cs_arg2 = ([&]() { auto cs_receiver = v_v; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_992193a3ad58af68; }()); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_eab8c2f1c1ba14e9(cs_receiver,cs_arg0,cs_arg1,cs_arg2); }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Set(System.Single,System.Single,System.Single)
void cs_eab8c2f1c1ba14e9(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_x,float v_y,float v_z) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Set(System.Single,System.Single,System.Single)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::generated::cs_require(cs_target)->cs_5940b7db44d7fcc3 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::generated::cs_require(cs_target)->cs_3f971496b3e90e07 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_z; pls::generated::cs_require(cs_target)->cs_992193a3ad58af68 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.SetX(System.Single)
void cs_456e4aca00a0b62a(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_x) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.SetX(System.Single)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_x; pls::generated::cs_require(cs_target)->cs_5940b7db44d7fcc3 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.SetY(System.Single)
void cs_229657731d66863f(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_y) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.SetY(System.Single)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_y; pls::generated::cs_require(cs_target)->cs_3f971496b3e90e07 = cs_value; return cs_value; }());
}
}
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.SetZ(System.Single)
void cs_ed44f0a0e2f6832a(pls::cs::Ref<cs_3c64e1d398f2e00f> cs_this,float v_z) { cs_init_3c64e1d398f2e00f();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.SetZ(System.Single)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_z; pls::generated::cs_require(cs_target)->cs_992193a3ad58af68 = cs_value; return cs_value; }());
}
}
}
}
}
