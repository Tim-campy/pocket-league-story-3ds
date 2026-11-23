// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.util.Compressor.Node.hpp"
namespace pls::generated {
namespace kairo::unity::util {

void Compressor_Node::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(parent_,visitor);pls::cs::trace_value(left_,visitor);pls::cs::trace_value(right_,visitor);}

static PLS_NOINLINE void cs_init_922b87749168eb15_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Compressor.Node",flag,[](){

});}

void Compressor_Node::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_922b87749168eb15_slow(flag);}

void Compressor_Node::create_init(pls::cs::Ref<Compressor_Node> self) {
Compressor_Node::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor.Node.#ctor",kairo);
{

}

}

void Compressor_Node::create_init(pls::cs::Ref<Compressor_Node> self,pls::cs::Ref<Compressor_Node> parent,pls::cs::Ref<Compressor_Node> left,pls::cs::Ref<Compressor_Node> right,pls::cs::Int32 weight,pls::cs::Int32 value) {
Compressor_Node::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor.Node.#ctor(kairo.unity.util.Compressor.Node,kairo.unity.util.Compressor.Node,kairo.unity.util.Compressor.Node,System.Int32,System.Int32)",kairo);
{
self->parent_ = parent;
self->left_ = left;
self->right_ = right;
self->weight_ = weight;
self->value_ = value;
}

}

// M:kairo.unity.util.Compressor.Node.#ctor
pls::cs::Ref<Compressor_Node> Compressor_Node::create() {
Compressor_Node::ensure_initialized();
 auto self = pls::cs::make_ref<Compressor_Node>(); Compressor_Node::create_init(self); return self; 
}

// M:kairo.unity.util.Compressor.Node.#ctor(kairo.unity.util.Compressor.Node,kairo.unity.util.Compressor.Node,kairo.unity.util.Compressor.Node,System.Int32,System.Int32)
pls::cs::Ref<Compressor_Node> Compressor_Node::create(pls::cs::Ref<Compressor_Node> parent,pls::cs::Ref<Compressor_Node> left,pls::cs::Ref<Compressor_Node> right,pls::cs::Int32 weight,pls::cs::Int32 value) {
Compressor_Node::ensure_initialized();
 auto self = pls::cs::make_ref<Compressor_Node>(); Compressor_Node::create_init(self,parent,left,right,weight,value); return self; 
}
} // namespace kairo::unity::util
}
