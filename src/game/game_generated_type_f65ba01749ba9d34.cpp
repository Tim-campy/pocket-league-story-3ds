// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_91b71e223c6a5085.hpp"
#include "game_generated_type_f65ba01749ba9d34.hpp"
#include "generated/portable_generated_type_bb652fbb61000386.hpp"
namespace pls::game {

void cs_f65ba01749ba9d34::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_ac47dab08454a832,visitor);pls::cs::trace_value(cs_e3cc350442bf2617,visitor);pls::cs::trace_value(cs_b485e3aec4989e77,visitor);pls::cs::trace_value(cs_abeb2739082898db,visitor);}

void cs_f65ba01749ba9d34::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_ac47dab08454a832);pls::cs::release_value(cs_e3cc350442bf2617);pls::cs::release_value(cs_b485e3aec4989e77);pls::cs::release_value(cs_abeb2739082898db);}

void cs_init_f65ba01749ba9d34(){static pls::cs::TypeInitState state;state.run("kairo.unity.system.GameDataRecord.Data",[](){

});}

// M:kairo.unity.system.GameDataRecord.Data.#ctor(System.String,System.Byte[],System.Boolean)
pls::cs::Ref<cs_f65ba01749ba9d34> cs_e166ffa7af3293c0(pls::cs::String v_name,pls::cs::Array<std::uint8_t> v_value,bool v_toset) { cs_init_f65ba01749ba9d34();
{ auto cs_this = pls::cs::make_ref<cs_f65ba01749ba9d34>(); cs_e166ffa7af3293c0_init(cs_this,v_name,v_value,v_toset); return cs_this; }
}

void cs_e166ffa7af3293c0_init(pls::cs::Ref<cs_f65ba01749ba9d34> cs_this,pls::cs::String v_name,pls::cs::Array<std::uint8_t> v_value,bool v_toset) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Data.#ctor(System.String,System.Byte[],System.Boolean)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Ref<pls::generated::cs_bb652fbb61000386> { pls::cs::String cs_arg0 = v_name; return pls::generated::cs_376859ff51e2fc37(cs_arg0); }());}); pls::game::cs_require(cs_target)->cs_ac47dab08454a832 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = ([&]() -> pls::cs::Ref<cs_91b71e223c6a5085> { pls::cs::Array<std::uint8_t> cs_arg0 = v_value; return cs_afd97ff1c93f8bf4(cs_arg0); }()); pls::game::cs_require(cs_target)->cs_e3cc350442bf2617 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_toset; pls::game::cs_require(cs_target)->cs_b485e3aec4989e77 = cs_value; return cs_value; }());
}
}
}

// M:kairo.unity.system.GameDataRecord.Data.Clone
pls::cs::Ref<cs_f65ba01749ba9d34> cs_23754ab97f073ec8(pls::cs::Ref<cs_f65ba01749ba9d34> cs_this) { cs_init_f65ba01749ba9d34();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.GameDataRecord.Data.Clone",kairo);
{
return pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/system/GameDataRecord.cs:M:kairo.unity.system.GameDataRecord.Data.Clone:556",([&](){auto cs_init=([&]() -> pls::cs::Ref<cs_f65ba01749ba9d34> { pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { pls::cs::Ref<pls::generated::cs_bb652fbb61000386> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_ac47dab08454a832; }()); return pls::generated::cs_1192c1f2378de3bb(cs_arg0); }());}); pls::cs::Array<std::uint8_t> cs_arg1 = ([&]() -> pls::cs::Array<std::uint8_t> { pls::cs::Ref<cs_91b71e223c6a5085> cs_arg0 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_e3cc350442bf2617; }()); return cs_fe020e7913ef1e99(cs_arg0); }()); bool cs_arg2 = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_b485e3aec4989e77; }()); return cs_e166ffa7af3293c0(cs_arg0,cs_arg1,cs_arg2); }());cs_init->cs_abeb2739082898db=([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_abeb2739082898db; }());return cs_init;}()));
}
}
}
}
}
