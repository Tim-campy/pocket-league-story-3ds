// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.surface.SurfaceBase.TouchPoint.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.util.BitUtil.hpp"
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::surface {

void SurfaceBase_TouchPoint::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(component,visitor);}

static PLS_NOINLINE void cs_init_70b7974d356d68ab_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.surface.SurfaceBase.TouchPoint",flag,[](){

});}

void SurfaceBase_TouchPoint::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_70b7974d356d68ab_slow(flag);}

void SurfaceBase_TouchPoint::create_init(pls::cs::Ref<SurfaceBase_TouchPoint> self) {
SurfaceBase_TouchPoint::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.TouchPoint.#ctor",kairo);
{}

}

// M:kairo.unity.surface.SurfaceBase.TouchPoint.#ctor
pls::cs::Ref<SurfaceBase_TouchPoint> SurfaceBase_TouchPoint::create() {
SurfaceBase_TouchPoint::ensure_initialized();
 auto self = pls::cs::make_ref<SurfaceBase_TouchPoint>(); SurfaceBase_TouchPoint::create_init(self); return self; 
}

// M:kairo.unity.surface.SurfaceBase.TouchPoint.Init(System.Int64,System.Single,System.Single,kairo.unity.surface.TouchComponent)
void SurfaceBase_TouchPoint::Init(pls::cs::Int64 key,pls::cs::Single x,pls::cs::Single y,pls::cs::Ref<TouchComponent> component) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.TouchPoint.Init(System.Int64,System.Single,System.Single,kairo.unity.surface.TouchComponent)",kairo);
{
IntArray array = util::BitUtil::Split(key);
this->key = key;
this->x = x;
this->y = y;
id = array[0];
value = array[1];
dragBaseX = x;
dragBaseY = y;
this->component = component;
}
}
} // namespace kairo::unity::surface
}
