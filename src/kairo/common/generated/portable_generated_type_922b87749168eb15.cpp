// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_922b87749168eb15.hpp"
namespace pls::generated {

void cs_922b87749168eb15::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_51d08ca6eed04eda,visitor);pls::cs::trace_value(cs_8e6817a8d663aa67,visitor);pls::cs::trace_value(cs_0d73049ca9cd4bf6,visitor);pls::cs::trace_value(cs_5b846f0fd1fb1aa0,visitor);pls::cs::trace_value(cs_57d6fb57c6af0de7,visitor);}

void cs_922b87749168eb15::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_51d08ca6eed04eda);pls::cs::release_value(cs_8e6817a8d663aa67);pls::cs::release_value(cs_0d73049ca9cd4bf6);pls::cs::release_value(cs_5b846f0fd1fb1aa0);pls::cs::release_value(cs_57d6fb57c6af0de7);}

void cs_init_922b87749168eb15(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Compressor.Node",[](){

});}

// M:kairo.unity.util.Compressor.Node.#ctor
pls::cs::Ref<cs_922b87749168eb15> cs_25fc81be857429d9() { cs_init_922b87749168eb15();
{ auto cs_this = pls::cs::make_ref<cs_922b87749168eb15>(); cs_25fc81be857429d9_init(cs_this); return cs_this; }
}

void cs_25fc81be857429d9_init(pls::cs::Ref<cs_922b87749168eb15> cs_this) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor.Node.#ctor",kairo);
{

}
}
}

// M:kairo.unity.util.Compressor.Node.#ctor(kairo.unity.util.Compressor.Node,kairo.unity.util.Compressor.Node,kairo.unity.util.Compressor.Node,System.Int32,System.Int32)
pls::cs::Ref<cs_922b87749168eb15> cs_87ec71db506764c9(pls::cs::Ref<cs_922b87749168eb15> v_parent,pls::cs::Ref<cs_922b87749168eb15> v_left,pls::cs::Ref<cs_922b87749168eb15> v_right,std::int32_t v_weight,std::int32_t v_value) { cs_init_922b87749168eb15();
{ auto cs_this = pls::cs::make_ref<cs_922b87749168eb15>(); cs_87ec71db506764c9_init(cs_this,v_parent,v_left,v_right,v_weight,v_value); return cs_this; }
}

void cs_87ec71db506764c9_init(pls::cs::Ref<cs_922b87749168eb15> cs_this,pls::cs::Ref<cs_922b87749168eb15> v_parent,pls::cs::Ref<cs_922b87749168eb15> v_left,pls::cs::Ref<cs_922b87749168eb15> v_right,std::int32_t v_weight,std::int32_t v_value) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Compressor.Node.#ctor(kairo.unity.util.Compressor.Node,kairo.unity.util.Compressor.Node,kairo.unity.util.Compressor.Node,System.Int32,System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_parent; pls::generated::cs_require(cs_target)->cs_51d08ca6eed04eda = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_left; pls::generated::cs_require(cs_target)->cs_8e6817a8d663aa67 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_right; pls::generated::cs_require(cs_target)->cs_0d73049ca9cd4bf6 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_weight; pls::generated::cs_require(cs_target)->cs_5b846f0fd1fb1aa0 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_value; pls::generated::cs_require(cs_target)->cs_57d6fb57c6af0de7 = cs_value; return cs_value; }());
}
}
}
}
