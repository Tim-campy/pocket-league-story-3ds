// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_64732f8c8acf2fd3.hpp"
namespace pls::generated {

void cs_64732f8c8acf2fd3::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::ExceptionObject::trace_edges(visitor);}

static PLS_NOINLINE void cs_init_64732f8c8acf2fd3_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("java.io.EOFException",flag,[](){

});}

void cs_init_64732f8c8acf2fd3(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_64732f8c8acf2fd3_slow(flag);}

// M:java.io.EOFException.#ctor(System.String)
pls::cs::Ref<cs_64732f8c8acf2fd3> cs_a8c0bbab413528f7(pls::cs::String v_s) { cs_init_64732f8c8acf2fd3();
{ auto cs_this = pls::cs::make_ref<cs_64732f8c8acf2fd3>(); cs_a8c0bbab413528f7_init(cs_this,v_s); return cs_this; }
}

void cs_a8c0bbab413528f7_init(pls::cs::Ref<cs_64732f8c8acf2fd3> cs_this,pls::cs::String v_s) {
cs_init_64732f8c8acf2fd3();
([&](){ pls::cs::String cs_arg0 = v_s; cs_this->source_ctor("System.IO.EndOfStreamException",cs_arg0);}());
{PLS_METHOD_SCOPE("KairoLibrary","M:java.io.EOFException.#ctor(System.String)",kairo);
{

}
}
}
}
