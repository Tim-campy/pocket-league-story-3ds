// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "kairo.unity.util.ISerializable.hpp"
#include "kairo.unity.util.StreamUtil.hpp"
namespace pls::generated {
namespace kairo::unity::m3d4::util3d {

void Vector3D::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_3c64e1d398f2e00f_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.m3d4.util3d.Vector3D",flag,[](){

});}

void Vector3D::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_3c64e1d398f2e00f_slow(flag);}

void Vector3D::create_init(pls::cs::Ref<Vector3D> self) {
Vector3D::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.#ctor",kairo);
{
self->z_ = 0.0f;
self->y_ = self->z_;
self->x_ = self->y_;
}

}

void Vector3D::create_init(pls::cs::Ref<Vector3D> self,pls::cs::Single x,pls::cs::Single y,pls::cs::Single z) {
Vector3D::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.#ctor(System.Single,System.Single,System.Single)",kairo);
{
self->Set(x, y, z);
}

}

void Vector3D::Deserialize(pls::cs::Ref<Vector3D> self,pls::cs::Ref<java::io::InputStream> stream) { require(self)->Vector3D::Deserialize(stream); }

void Vector3D::Serialize(pls::cs::Ref<Vector3D> self,pls::cs::Ref<java::io::OutputStream> stream) { require(self)->Vector3D::Serialize(stream); }

// M:kairo.unity.m3d4.util3d.Vector3D.#ctor
pls::cs::Ref<Vector3D> Vector3D::create() {
Vector3D::ensure_initialized();
 auto self = pls::cs::make_ref<Vector3D>(); Vector3D::create_init(self); return self; 
}

// M:kairo.unity.m3d4.util3d.Vector3D.#ctor(System.Single,System.Single,System.Single)
pls::cs::Ref<Vector3D> Vector3D::create(pls::cs::Single x,pls::cs::Single y,pls::cs::Single z) {
Vector3D::ensure_initialized();
 auto self = pls::cs::make_ref<Vector3D>(); Vector3D::create_init(self,x,y,z); return self; 
}

// M:kairo.unity.m3d4.util3d.Vector3D.Add(System.Single,System.Single,System.Single)
void Vector3D::Add(pls::cs::Single x,pls::cs::Single y,pls::cs::Single z) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Add(System.Single,System.Single,System.Single)",kairo);
{
x_ = x_ + x;
y_ = y_ + y;
z_ = z_ + z;
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Add(kairo.unity.m3d4.util3d.Vector3D)
void Vector3D::Add(pls::cs::Ref<Vector3D> v) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Add(kairo.unity.m3d4.util3d.Vector3D)",kairo);
{
Add(require(v)->x_, require(v)->y_, require(v)->z_);
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.GetX
pls::cs::Single Vector3D::GetX() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.GetX",kairo);
{
return x_;
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.GetY
pls::cs::Single Vector3D::GetY() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.GetY",kairo);
{
return y_;
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.GetZ
pls::cs::Single Vector3D::GetZ() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.GetZ",kairo);
{
return z_;
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Set(System.Single,System.Single,System.Single)
void Vector3D::Set(pls::cs::Single x,pls::cs::Single y,pls::cs::Single z) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Set(System.Single,System.Single,System.Single)",kairo);
{
x_ = x;
y_ = y;
z_ = z;
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Set(kairo.unity.m3d4.util3d.Vector3D)
void Vector3D::Set(pls::cs::Ref<Vector3D> v) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Set(kairo.unity.m3d4.util3d.Vector3D)",kairo);
{
Set(require(v)->x_, require(v)->y_, require(v)->z_);
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.SetX(System.Single)
void Vector3D::SetX(pls::cs::Single x) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.SetX(System.Single)",kairo);
{
x_ = x;
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.SetY(System.Single)
void Vector3D::SetY(pls::cs::Single y) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.SetY(System.Single)",kairo);
{
y_ = y;
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.SetZ(System.Single)
void Vector3D::SetZ(pls::cs::Single z) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.SetZ(System.Single)",kairo);
{
z_ = z;
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Serialize(java.io.OutputStream)
void Vector3D::Serialize(pls::cs::Ref<java::io::OutputStream> stream) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Serialize(java.io.OutputStream)",kairo);
{
util::StreamUtil::WriteFloat(stream, x_);
util::StreamUtil::WriteFloat(stream, y_);
util::StreamUtil::WriteFloat(stream, z_);
}
}

// M:kairo.unity.m3d4.util3d.Vector3D.Deserialize(java.io.InputStream)
void Vector3D::Deserialize(pls::cs::Ref<java::io::InputStream> stream) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.m3d4.util3d.Vector3D.Deserialize(java.io.InputStream)",kairo);
{
x_ = util::StreamUtil::ReadFloat(stream);
y_ = util::StreamUtil::ReadFloat(stream);
z_ = util::StreamUtil::ReadFloat(stream);
}
}
} // namespace kairo::unity::m3d4::util3d
}
