// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#pragma once
#include "game_generated_type_51222df74ac70bab.hpp"
#include "generated/portable_generated_type_51222df74ac70bab.hpp"
#include "generated/portable_generated_type_51222df74ac70bab_templates.hpp"
namespace pls::game {

// M:java.util.Vector`1.Contains(`0)
template<typename T_T>
bool cs_56806ca0201c5fb9(pls::cs::Ref<pls::generated::cs_51222df74ac70bab<T_T>> cs_this,T_T v_elem) { if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.Vector\u00601.Contains(\u00600)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_056e387f40164bd6; }()); auto cs_arg0 = pls::source_allocations::completed("generic_boxing_conversion","src/KairoLibrary/java/util/Vector`1.cs:M:java.util.Vector`1.Contains(`0):1397",pls::cs::box(v_elem)); return cs_receiver.Contains(cs_arg0); }());});
}
}
}
}
