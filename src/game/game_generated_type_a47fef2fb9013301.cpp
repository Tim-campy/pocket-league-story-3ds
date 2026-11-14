// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_15d0c6400449da70.hpp"
#include "game_generated_type_500cf5d961e2c3a4.hpp"
#include "game_generated_type_a47fef2fb9013301.hpp"
#include "game_generated_type_f8053a3d49df91b7.hpp"
namespace pls::game {

void cs_a47fef2fb9013301::trace_edges(const pls::cs::EdgeVisitor&visitor)const {cs_15d0c6400449da70::trace_edges(visitor);}

void cs_a47fef2fb9013301::release_edges(){cs_15d0c6400449da70::release_edges();}

void cs_init_a47fef2fb9013301(){static pls::cs::TypeInitState state;state.run("system.tapjoy.MyTapjoy",[](){

});}

// M:system.tapjoy.MyTapjoy.#ctor
pls::cs::Ref<cs_a47fef2fb9013301> cs_a4ea8d8a8cfcb812() { cs_init_a47fef2fb9013301();
{ auto cs_this = pls::cs::make_ref<cs_a47fef2fb9013301>(); cs_a4ea8d8a8cfcb812_init(cs_this); return cs_this; }
}

void cs_a4ea8d8a8cfcb812_init(pls::cs::Ref<cs_a47fef2fb9013301> cs_this) {
([&]() { pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = ([]() -> pls::cs::String {static const auto cs_literal=pls::cs::String::literal(u"\x0047" u"\x0065" u"\x0074" u"\x0046" u"\x0072" u"\x0065" u"\x0065" u"\x0054" u"\x0069" u"\x0063" u"\x006b" u"\x0065" u"\x0074" u"",13);return cs_literal;}()); bool cs_arg2 = true; cs_5b5371f22489a240_init(pls::cs::static_pointer_cast<cs_15d0c6400449da70>(cs_this),cs_arg0,cs_arg1,cs_arg2); }());
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.MyTapjoy.#ctor",game);
{

}
}
}

// M:system.tapjoy.MyTapjoy.GetInstance
pls::cs::Ref<cs_a47fef2fb9013301> cs_684884eb9c671af7() { cs_init_a47fef2fb9013301();
{PLS_METHOD_SCOPE("Assembly-CSharp","M:system.tapjoy.MyTapjoy.GetInstance",game);
{
if (([&]() { auto cs_left = pls::cs::box(cs_11c677d992410d89()); auto cs_right = pls::cs::Ref<pls::cs::Object>{}; return cs_left == cs_right; }())) {
([&]() { auto cs_value = pls::source_allocations::completed("new_object","src/Assembly-CSharp/system/tapjoy/MyTapjoy.cs:M:system.tapjoy.MyTapjoy.GetInstance:360",([&]() -> pls::cs::Ref<cs_a47fef2fb9013301> { return cs_a4ea8d8a8cfcb812(); }())); cs_11c677d992410d89() = cs_value; return cs_value; }());
}
return pls::cs::unbox<pls::cs::Ref<cs_a47fef2fb9013301>>(pls::cs::box(cs_11c677d992410d89()));
}
}
}
}
