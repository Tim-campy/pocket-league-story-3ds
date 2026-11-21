// GENERATED per declaring type by translator/EmissionUnits.cs. Do not edit.
#include "game_generated_type_cd97eee87b3216c4.hpp"
namespace pls::game {

void cs_cd97eee87b3216c4::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::ExceptionObject::trace_edges(visitor);pls::cs::trace_value(cs_5e52c7bad466e5ea,visitor);}

static PLS_NOINLINE void cs_init_cd97eee87b3216c4_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.util.KairoException",flag,[](){

});}

void cs_init_cd97eee87b3216c4(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_cd97eee87b3216c4_slow(flag);}

// M:kairo.unity.util.KairoException.get_DisplayMessage
pls::cs::String cs_1b62bb3466e191a0(pls::cs::Ref<cs_cd97eee87b3216c4> cs_this) { cs_init_cd97eee87b3216c4();
{ if(!cs_this)throw pls::cs::NullReferenceException();
{PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.util.KairoException.get_DisplayMessage",kairo);
{ return ([&]() { auto cs_receiver = cs_this; if(!cs_receiver)throw pls::cs::NullReferenceException(); return cs_receiver->cs_5e52c7bad466e5ea; }()); }
}
}
}
}
