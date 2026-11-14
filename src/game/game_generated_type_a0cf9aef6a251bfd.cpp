// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_a0cf9aef6a251bfd.hpp"
#include "generated/portable_generated_type_a0cf9aef6a251bfd.hpp"
namespace pls::game {

// M:java.util.JRandom.NextInt(System.Int32)
std::int32_t cs_c4444115878f5069(pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd> cs_this,std::int32_t v_n) { pls::generated::cs_init_a0cf9aef6a251bfd();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JRandom.NextInt(System.Int32)",kairo);
{
return ([&]() -> std::int32_t { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> std::int32_t { auto cs_receiver = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_51f4a63dee24d947; }()); return pls::game::cs_require(cs_receiver)->Next(); }());}); auto cs_right = v_n; return pls::cs::mod_i32(cs_left,cs_right); }());
}
}
}
}

// M:java.util.JRandom.SetSeed(System.Int64)
void cs_dea619e5d7523aa2(pls::cs::Ref<pls::generated::cs_a0cf9aef6a251bfd> cs_this,std::int64_t v_seed) { pls::generated::cs_init_a0cf9aef6a251bfd();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:java.util.JRandom.SetSeed(System.Int64)",kairo);
{
([&]() { auto cs_target = cs_this; auto cs_value = pls::source_allocations::completed("new_object","src/KairoLibrary/java/util/JRandom.cs:M:java.util.JRandom.SetSeed(System.Int64):483",([&]() { auto cs_arg0 = pls::cs::cast_integral<std::int32_t>(v_seed); return pls::cs::make_ref<pls::cs::Random>(cs_arg0); }())); pls::game::cs_require(cs_target)->cs_51f4a63dee24d947 = cs_value; return cs_value; }());
}
}
}
}
}
