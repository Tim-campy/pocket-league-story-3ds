// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "java.util.IVector.hpp"
#include "java.util.Vector_1.hpp"
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace java::util {

struct Vector : Vector_2<pls::cs::Ref<pls::cs::Object>> {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(Vector_2<pls::cs::Ref<pls::cs::Object>>,
    {"Equals", "M:java.util.Vector.Equals(System.Object)"});
PLS_MANAGED_CLASS("java.util.Vector", Vector, Vector_2<pls::cs::Ref<pls::cs::Object>>, IVector)
bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;

static bool Equals(pls::cs::Ref<Vector> self,pls::cs::Ref<pls::cs::Object> obj);

static void ensure_initialized();

static void create_init(pls::cs::Ref<Vector> self);

static pls::cs::Ref<Vector> create();
};
} // namespace java::util
}
