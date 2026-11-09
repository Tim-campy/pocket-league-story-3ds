// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_c87dc3d2d0f9440a.hpp"
namespace pls::game {

void cs_c87dc3d2d0f9440a::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::trace_value(cs_153fdaae746575f6,visitor);pls::cs::trace_value(cs_3f97f246a7d4b8ee,visitor);pls::cs::trace_value(cs_b455953d5d99c95c,visitor);pls::cs::trace_value(cs_ad6910b7b897b250,visitor);pls::cs::trace_value(cs_618ea558ebfe77c3,visitor);pls::cs::trace_value(cs_77e1513fb44fb202,visitor);pls::cs::trace_value(cs_7a8e84cb54b27614,visitor);pls::cs::trace_value(cs_055616eacd82bf39,visitor);pls::cs::trace_value(cs_e9266e43c90692ac,visitor);pls::cs::trace_value(cs_38927e554bfc845e,visitor);}

void cs_c87dc3d2d0f9440a::release_edges(){pls::cs::release_value(cs_153fdaae746575f6);pls::cs::release_value(cs_3f97f246a7d4b8ee);pls::cs::release_value(cs_b455953d5d99c95c);pls::cs::release_value(cs_ad6910b7b897b250);pls::cs::release_value(cs_618ea558ebfe77c3);pls::cs::release_value(cs_77e1513fb44fb202);pls::cs::release_value(cs_7a8e84cb54b27614);pls::cs::release_value(cs_055616eacd82bf39);pls::cs::release_value(cs_e9266e43c90692ac);pls::cs::release_value(cs_38927e554bfc845e);}

void cs_init_c87dc3d2d0f9440a(){static pls::cs::TypeInitState state;state.run("kairo.unity.system.appli.GameAppli",[](){

});}

// M:kairo.unity.system.appli.GameAppli.IsReleaseAndroid
bool cs_273c34670c40021b(cs_c87dc3d2d0f9440a* cs_this) { cs_init_c87dc3d2d0f9440a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.appli.GameAppli.IsReleaseAndroid",kairo);
{
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_77e1513fb44fb202; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }());
}
}
}
}

// M:kairo.unity.system.appli.GameAppli.IsReleaseIOS
bool cs_71a196f792672514(cs_c87dc3d2d0f9440a* cs_this) { cs_init_c87dc3d2d0f9440a();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.appli.GameAppli.IsReleaseIOS",kairo);
{
return ([&]() -> bool { auto cs_left = ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_38927e554bfc845e; }()); auto cs_right = pls::cs::cast_integral<std::int32_t>(std::uint64_t(0xffffffffffffffffull)); return (cs_left != cs_right); }());
}
}
}
}
}
