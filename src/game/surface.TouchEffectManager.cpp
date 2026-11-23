// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.FastVector_1.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "surface.TouchEffect.hpp"
#include "surface.TouchEffectManager.hpp"
#include "generated/kairo.unity.util.FastVector_1_templates.hpp"

namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace surface {

void TouchEffectManager::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(effects,visitor);pls::cs::trace_value(effectsBuffer_,visitor);}

static pls::cs::Ref<TouchEffectManager> TouchEffectManager_instance__storage{};

static PLS_NOINLINE void cs_init_4e9b1f0e9e3baf25_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(TouchEffectManager_instance__storage,visitor);});static pls::cs::TypeInitState state;state.run("surface.TouchEffectManager",flag,[](){

});}

void TouchEffectManager::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_4e9b1f0e9e3baf25_slow(flag);}

pls::cs::Ref<TouchEffectManager>& TouchEffectManager::instance_(){TouchEffectManager::ensure_initialized();return TouchEffectManager_instance__storage;}

void TouchEffectManager::create_init(pls::cs::Ref<TouchEffectManager> self) {
TouchEffectManager::ensure_initialized();
self->effects = kl_util::FastVector_2_create<pls::cs::Ref<TouchEffect>>();
self->effectsBuffer_ = kl_util::FastVector_2_create<pls::cs::Ref<TouchEffect>>();
PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.#ctor",game);
{

}

}

// M:surface.TouchEffectManager.#ctor
pls::cs::Ref<TouchEffectManager> TouchEffectManager::create() {
TouchEffectManager::ensure_initialized();
 auto self = pls::cs::make_ref<TouchEffectManager>(); TouchEffectManager::create_init(self); return self; 
}

// M:surface.TouchEffectManager.GetInstance
pls::cs::Ref<TouchEffectManager> TouchEffectManager::GetInstance() {
TouchEffectManager::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.GetInstance",game);
{
if (!is_null(TouchEffectManager::instance_())) {
return TouchEffectManager::instance_();
}
TouchEffectManager::instance_() = TouchEffectManager::create();
return TouchEffectManager::instance_();
}

}

// M:surface.TouchEffectManager.Add(surface.TouchEffect)
void TouchEffectManager::Add(pls::cs::Ref<TouchEffect> effect) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.Add(surface.TouchEffect)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->Add(effect);});
}
}

// M:surface.TouchEffectManager.Frame
void TouchEffectManager::Frame() {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.Frame",game);
{
for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->Size();}) - 1; num >= 0; --num) {
{
bool recoveredCondition_793 = require(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->ElementAt(num);}))->Frame();
if (recoveredCondition_793) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->RemoveElementAt(num);});
}
}
}
}
}

// M:surface.TouchEffectManager.Draw(kairo.unity.ui.Graphics)
void TouchEffectManager::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.Draw(kairo.unity.ui.Graphics)",game);
{
kl_cfg::Config::ensure_initialized();

for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->Size();}); ++i) {
try {
require(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->ElementAt(i);}))->Draw(g);
} catch(const pls::cs::Exception& cs_caught_195) {auto t=pls::cs::capture_exception(cs_caught_195);
{
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Log::Info(t);});
}
}}
}

}
}

// M:surface.TouchEffectManager.Clear
void TouchEffectManager::Clear() {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.Clear",game);
{
for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->Size();}) - 1; num >= 0; --num) {
RemoveEffectInt(num);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->RemoveAllElementsKeep();});
}
}

// M:surface.TouchEffectManager.RemoveEffect(surface.TouchEffect)
void TouchEffectManager::RemoveEffect(pls::cs::Ref<TouchEffect> effect) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveEffect(surface.TouchEffect)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->RemoveElement(effect);});
}
}

// M:surface.TouchEffectManager.RemoveEffect(System.Int32)
void TouchEffectManager::RemoveEffectInt(pls::cs::Int32 index) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveEffect(System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->RemoveElementAt(index);});
}
}

// M:surface.TouchEffectManager.RemoveSurface(kairo.unity.surface.SurfaceBase)
void TouchEffectManager::RemoveSurface(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveSurface(kairo.unity.surface.SurfaceBase)",game);
{
for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->Size();}) - 1; num >= 0; --num) {
if (pls::cs::box(require(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->ElementAt(num);}))->surface_) == pls::cs::box(surface)) {
RemoveEffectInt(num);
}
}
}
}

// M:surface.TouchEffectManager.RemoveId(System.Int32)
void TouchEffectManager::RemoveId(pls::cs::Int32 id) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveId(System.Int32)",game);
{
for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->Size();}) - 1; num >= 0; --num) {
if (require(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->ElementAt(num);}))->id_ == id) {
RemoveEffectInt(num);
}
}
}
}

// M:surface.TouchEffectManager.RemoveComponentId(kairo.unity.surface.SurfaceBase,System.Int32)
void TouchEffectManager::RemoveComponentId(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface,pls::cs::Int32 componentId) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveComponentId(kairo.unity.surface.SurfaceBase,System.Int32)",game);
{
for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->Size();}) - 1; num >= 0; --num) {
pls::cs::Ref<TouchEffect> touchEffect = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->ElementAt(num);});
if (pls::cs::box(require(touchEffect)->surface_) == pls::cs::box(surface) && kairo::unity::surface::TouchComponent::GetId(require(touchEffect)->key_) == componentId) {
RemoveEffectInt(num);
}
}
}
}

// M:surface.TouchEffectManager.RemoveComponentKey(kairo.unity.surface.SurfaceBase,System.Int64)
void TouchEffectManager::RemoveComponentKey(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface,pls::cs::Int64 componentKey) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.RemoveComponentKey(kairo.unity.surface.SurfaceBase,System.Int64)",game);
{
for (pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->Size();}) - 1; num >= 0; --num) {
pls::cs::Ref<TouchEffect> touchEffect = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->ElementAt(num);});
if (pls::cs::box(require(touchEffect)->surface_) == pls::cs::box(surface) && require(touchEffect)->key_ == componentKey) {
RemoveEffectInt(num);
}
}
}
}

// M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)
pls::cs::Ref<TouchEffect> TouchEffectManager::AddEffect(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface,pls::cs::Int32 id,pls::cs::Single x,pls::cs::Single y,pls::cs::Ref<kairo::unity::surface::TouchComponent> component) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent)",game);
{
return AddEffect(surface, id, x, y, component, pls::cs::Ref<pls::cs::Object>{});
}
}

// M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)
pls::cs::Ref<TouchEffect> TouchEffectManager::AddEffect(pls::cs::Ref<kairo::unity::surface::SurfaceBase> surface,pls::cs::Int32 id,pls::cs::Single x,pls::cs::Single y,pls::cs::Ref<kairo::unity::surface::TouchComponent> component,pls::cs::Ref<pls::cs::Object> arg) {PLS_METHOD_SCOPE("Assembly-CSharp","M:surface.TouchEffectManager.AddEffect(kairo.unity.surface.SurfaceBase,System.Int32,System.Single,System.Single,kairo.unity.surface.TouchComponent,System.Object)",game);
{
pls::cs::Ref<TouchEffect> touchEffect = pls::cs::Ref<TouchEffect>{};
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effectsBuffer_)->Size();}); ++i) {
pls::cs::Ref<TouchEffect> touchEffect2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effectsBuffer_)->ElementAt(i);});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(effects)->Contains(touchEffect2);})) {
continue;
}
touchEffect = touchEffect2;
break;
}
if (is_null(touchEffect)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = effectsBuffer_; pls::cs::Ref<TouchEffect> cs_arg0 = ([&]() { auto cs_value = TouchEffect::create(); touchEffect = cs_value; return cs_value; }()); require(cs_receiver)->Add(cs_arg0); }());});
}
require(touchEffect)->Init(surface, id, x, y, component, arg);
Add(touchEffect);
return touchEffect;
}
}
} // namespace surface
}
