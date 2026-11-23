// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "portable_generated_forward.hpp"
namespace pls::generated {
namespace kairo::unity::util {

struct Compressor_Node : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_MANAGED_CLASS("kairo.unity.util.Compressor+Node", Compressor_Node, pls::cs::Object)
pls::cs::Ref<Compressor_Node> parent_{};
pls::cs::Ref<Compressor_Node> left_{};
pls::cs::Ref<Compressor_Node> right_{};
pls::cs::Int32 weight_{};
pls::cs::Int32 value_{};

static void ensure_initialized();

static void create_init(pls::cs::Ref<Compressor_Node> self);

static void create_init(pls::cs::Ref<Compressor_Node> self,pls::cs::Ref<Compressor_Node> parent,pls::cs::Ref<Compressor_Node> left,pls::cs::Ref<Compressor_Node> right,pls::cs::Int32 weight,pls::cs::Int32 value);

static pls::cs::Ref<Compressor_Node> create();

static pls::cs::Ref<Compressor_Node> create(pls::cs::Ref<Compressor_Node> parent,pls::cs::Ref<Compressor_Node> left,pls::cs::Ref<Compressor_Node> right,pls::cs::Int32 weight,pls::cs::Int32 value);
};
} // namespace kairo::unity::util
}
