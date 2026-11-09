// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_ab1b1085a7ab32b9.hpp"
#include "generated/portable_generated_type_ab1b1085a7ab32b9.hpp"
namespace pls::game {

void cs_init_ab1b1085a7ab32b9(){static pls::cs::TypeInitState state;state.run("kairo.unity.util.Language.Position",[](){

});}

// M:kairo.unity.util.Language.Position.#ctor(System.Int32,System.Int32)
pls::generated::cs_ab1b1085a7ab32b9 cs_f7e443d43797a1e8(std::int32_t v_line,std::int32_t v_segment) { cs_init_ab1b1085a7ab32b9();
{ pls::generated::cs_ab1b1085a7ab32b9 cs_this{}; cs_f7e443d43797a1e8_init(&cs_this,v_line,v_segment);return cs_this;}
}

void cs_f7e443d43797a1e8_init(pls::generated::cs_ab1b1085a7ab32b9* cs_this,std::int32_t v_line,std::int32_t v_segment) {
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.Language.Position.#ctor(System.Int32,System.Int32)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = v_line; pls::game::cs_require(cs_target)->cs_1bd11544863adf53 = cs_value; return cs_value; }());
([&]() { auto cs_target = cs_this; auto cs_value = v_segment; pls::game::cs_require(cs_target)->cs_2525b3344f53d974 = cs_value; return cs_value; }());
}
}
}
}
