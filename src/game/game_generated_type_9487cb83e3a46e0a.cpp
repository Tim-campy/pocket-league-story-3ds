// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_9487cb83e3a46e0a.hpp"
#include "game_generated_type_ab1b1085a7ab32b9.hpp"
#include "generated/portable_generated_type_9487cb83e3a46e0a.hpp"
#include "generated/portable_generated_type_ab1b1085a7ab32b9.hpp"
namespace pls::game {

void cs_init_9487cb83e3a46e0a(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Language.LangPackRecord",[](){

});}

// M:kairo.unity.util.Language.LangPackRecord.#ctor(System.Int32,System.String,System.String)
pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> cs_3b2d98b947053d2a(std::int32_t v_id,pls::cs::String v_file,pls::cs::String v_text) { cs_init_9487cb83e3a46e0a();
{ auto cs_this = pls::cs::make_ref<pls::generated::cs_9487cb83e3a46e0a>(); cs_3b2d98b947053d2a_init(cs_this,v_id,v_file,v_text); return cs_this; }
}

void cs_3b2d98b947053d2a_init(pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> cs_this,std::int32_t v_id,pls::cs::String v_file,pls::cs::String v_text) {
cs_this->cs_11bb01ff7e196717 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LangPackRecord.#ctor(System.Int32,System.String,System.String):1199",pls::cs::List<pls::generated::cs_ab1b1085a7ab32b9>::make());
cs_this->cs_eacffaa0f8c3f949 = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LangPackRecord.#ctor(System.Int32,System.String,System.String):1252",pls::cs::List<pls::cs::String>::make());
cs_this->cs_da40773ef2f3923c = pls::source_allocations::completed("new_object","src/KairoLibrary/kairo/unity/util/Language.cs:M:kairo.unity.util.Language.LangPackRecord.#ctor(System.Int32,System.String,System.String):1301",pls::cs::List<pls::cs::String>::make());
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.LangPackRecord.#ctor(System.Int32,System.String,System.String)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_id; pls::game::cs_require(cs_target)->cs_c85df0bf60809784 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_file; pls::game::cs_require(cs_target)->cs_05293b75838ad9b4 = cs_value; return cs_value; }());
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_eacffaa0f8c3f949; }()); auto cs_arg0 = v_text; cs_receiver.Add(cs_arg0); }());});
}
}
}

// M:kairo.unity.util.Language.LangPackRecord.AddPosition(System.Int32,System.Int32)
void cs_ef461dafc6d09069(pls::cs::Ref<pls::generated::cs_9487cb83e3a46e0a> cs_this,std::int32_t v_line,std::int32_t v_segment) { cs_init_9487cb83e3a46e0a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.LangPackRecord.AddPosition(System.Int32,System.Int32)",kairo);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_11bb01ff7e196717; }()); auto cs_arg0 = ([&]() -> pls::generated::cs_ab1b1085a7ab32b9 { std::int32_t cs_arg0 = v_line; std::int32_t cs_arg1 = v_segment; return cs_f7e443d43797a1e8(cs_arg0,cs_arg1); }()); cs_receiver.Add(cs_arg0); }());});
}
}
}
}
}
