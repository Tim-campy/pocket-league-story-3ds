// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_fd683372658feff4.hpp"
namespace pls::game {

void cs_fd683372658feff4::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(cs_468796fb9827f5e6,visitor);pls::cs::trace_value(cs_7b5ebddf22953059,visitor);pls::cs::trace_value(cs_7033e8b866a8dda2,visitor);pls::cs::trace_value(cs_2f097db5779cd511,visitor);pls::cs::trace_value(cs_8f7f3ca9485bb4f8,visitor);pls::cs::trace_value(cs_de1509021f22ef65,visitor);pls::cs::trace_value(cs_de2327fcc8b4451b,visitor);}

void cs_fd683372658feff4::release_edges(){pls::cs::Object::release_edges();pls::cs::release_value(cs_468796fb9827f5e6);pls::cs::release_value(cs_7b5ebddf22953059);pls::cs::release_value(cs_7033e8b866a8dda2);pls::cs::release_value(cs_2f097db5779cd511);pls::cs::release_value(cs_8f7f3ca9485bb4f8);pls::cs::release_value(cs_de1509021f22ef65);pls::cs::release_value(cs_de2327fcc8b4451b);}

void cs_init_fd683372658feff4(){static pls::cs::TypeInitState state;state.run("kairo.unity.system.lineup.ui.LineupData",[](){

});}

// M:kairo.unity.system.lineup.ui.LineupData.GetExplain
pls::cs::String cs_0ee8c20531783d1b(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetExplain",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7b5ebddf22953059; }());
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetImage
pls::cs::Ref<pls::kairo::Image> cs_aeee5b62db0f8f41(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetImage",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_de2327fcc8b4451b; }());
}
}
}
}

// M:kairo.unity.system.lineup.ui.LineupData.GetURL
pls::cs::String cs_93bf009f197e5d4a(pls::cs::Ref<cs_fd683372658feff4> cs_this) { cs_init_fd683372658feff4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.system.lineup.ui.LineupData.GetURL",kairo);
{
return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_7033e8b866a8dda2; }());
}
}
}
}
}
