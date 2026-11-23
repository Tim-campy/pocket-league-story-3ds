// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "kairo.unity.util.ISerializable.hpp"
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::m3d4::util3d {

struct Vector3D : pls::cs::Object, util::ISerializable {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"M:kairo.unity.util.ISerializable.Serialize(java.io.OutputStream)", "M:kairo.unity.m3d4.util3d.Vector3D.Serialize(java.io.OutputStream)"},
    {"M:kairo.unity.util.ISerializable.Deserialize(java.io.InputStream)", "M:kairo.unity.m3d4.util3d.Vector3D.Deserialize(java.io.InputStream)"});
PLS_MANAGED_CLASS("kairo.unity.m3d4.util3d.Vector3D", Vector3D, pls::cs::Object, ISerializable)
pls::cs::Single x_{};
pls::cs::Single y_{};
pls::cs::Single z_{};
void Serialize(pls::cs::Ref<java::io::OutputStream> stream) override;
void Deserialize(pls::cs::Ref<java::io::InputStream> stream) override;

static void ensure_initialized();

static void create_init(pls::cs::Ref<Vector3D> self);

static void create_init(pls::cs::Ref<Vector3D> self,pls::cs::Single x,pls::cs::Single y,pls::cs::Single z);

static void Deserialize(pls::cs::Ref<Vector3D> self,pls::cs::Ref<java::io::InputStream> stream);

static void Serialize(pls::cs::Ref<Vector3D> self,pls::cs::Ref<java::io::OutputStream> stream);

static pls::cs::Ref<Vector3D> create();

static pls::cs::Ref<Vector3D> create(pls::cs::Single x,pls::cs::Single y,pls::cs::Single z);

void Add(pls::cs::Ref<Vector3D> v);

void Add(pls::cs::Single x,pls::cs::Single y,pls::cs::Single z);

pls::cs::Single GetX();

pls::cs::Single GetY();

pls::cs::Single GetZ();

void Set(pls::cs::Ref<Vector3D> v);

void Set(pls::cs::Single x,pls::cs::Single y,pls::cs::Single z);

void SetX(pls::cs::Single x);

void SetY(pls::cs::Single y);

void SetZ(pls::cs::Single z);
};
} // namespace kairo::unity::m3d4::util3d
}
