// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "portable_generated_type_64732f8c8acf2fd3.hpp"
namespace pls::generated {

void cs_64732f8c8acf2fd3::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::ExceptionObject::trace_edges(visitor);}

void cs_64732f8c8acf2fd3::release_edges(){pls::cs::ExceptionObject::release_edges();}

void cs_init_64732f8c8acf2fd3(){static pls::cs::TypeInitState state;state.run("java.io.EOFException",[](){

});}

// M:java.io.EOFException.#ctor(System.String)
pls::cs::Ref<cs_64732f8c8acf2fd3> cs_a8c0bbab413528f7(pls::cs::String v_s) { cs_init_64732f8c8acf2fd3();
{ auto cs_this = pls::cs::make_ref<cs_64732f8c8acf2fd3>(); cs_a8c0bbab413528f7_init(cs_this,v_s); return cs_this; }
}

void cs_a8c0bbab413528f7_init(pls::cs::Ref<cs_64732f8c8acf2fd3> cs_this,pls::cs::String v_s) {
([&](){ pls::cs::String cs_arg0 = v_s; cs_this->source_ctor("System.IO.EndOfStreamException",cs_arg0);}());
{

}
}
}
