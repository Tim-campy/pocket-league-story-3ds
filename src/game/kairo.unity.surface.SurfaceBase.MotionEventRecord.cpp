// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.lang.JSystem.hpp"
#include "kairo.unity.surface.SurfaceBase.MotionEventRecord.MultiTouch.hpp"
#include "kairo.unity.surface.SurfaceBase.MotionEventRecord.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"

namespace kl_lang = pls::generated::java::lang;

using FloatArray = pls::cs::Array<pls::cs::Single>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::surface {

void SurfaceBase_MotionEventRecord::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(pointerIds,visitor);pls::cs::trace_value(pointerPos,visitor);pls::cs::trace_value(pointerDelta,visitor);}

static pls::cs::Ref<SurfaceBase_MotionEventRecord_MultiTouch> SurfaceBase_MotionEventRecord_multiTouch__storage{};

static PLS_NOINLINE void cs_init_e1ac8ca60ae0d404_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(SurfaceBase_MotionEventRecord_multiTouch__storage,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.surface.SurfaceBase.MotionEventRecord",flag,[](){

});}

void SurfaceBase_MotionEventRecord::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_e1ac8ca60ae0d404_slow(flag);}

pls::cs::Ref<SurfaceBase_MotionEventRecord_MultiTouch>& SurfaceBase_MotionEventRecord::multiTouch_(){SurfaceBase_MotionEventRecord::ensure_initialized();return SurfaceBase_MotionEventRecord_multiTouch__storage;}

void SurfaceBase_MotionEventRecord::create_init(pls::cs::Ref<SurfaceBase_MotionEventRecord> self) {
SurfaceBase_MotionEventRecord::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.#ctor",kairo);
{
self->Clear();
}

}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.#ctor
pls::cs::Ref<SurfaceBase_MotionEventRecord> SurfaceBase_MotionEventRecord::create() {
SurfaceBase_MotionEventRecord::ensure_initialized();
 auto self = pls::cs::make_ref<SurfaceBase_MotionEventRecord>(); SurfaceBase_MotionEventRecord::create_init(self); return self; 
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.IsEmpty
bool SurfaceBase_MotionEventRecord::IsEmpty() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.IsEmpty",kairo);
{
return action == -1;
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Clear
void SurfaceBase_MotionEventRecord::Clear() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Clear",kairo);
{
action = -1;
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Copy(kairo.unity.surface.SurfaceBase,kairo.unity.surface.MotionEvent)
void SurfaceBase_MotionEventRecord::Copy(pls::cs::Ref<SurfaceBase> surface,pls::cs::Ref<pls::kairo::MotionEvent> evt) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Copy(kairo.unity.surface.SurfaceBase,kairo.unity.surface.MotionEvent)",kairo);
{
action = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(evt)->GetAction();});
x = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(evt)->GetX());});
y = ([&]() -> pls::cs::FloatEval { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(evt)->GetY());}); auto cs_right = pls::cs::Single(((pls::diagnostic::api_call([&]() -> decltype(auto) {return require(evt)->IsMousePointer();})) ? pls::cs::Int32(0) : (require(surface)->GetTouchOffset()))); return cs_left + cs_right; }());
deltaX = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(evt)->GetDeltaX());});
deltaY = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(evt)->GetDeltaY());});
deltaTime = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(evt)->GetDeltaTime());});
if (is_null(SurfaceBase_MotionEventRecord::multiTouch_())) {
SurfaceBase_MotionEventRecord::multiTouch_() = SurfaceBase_MotionEventRecord_MultiTouch::create();
}
require(SurfaceBase_MotionEventRecord::multiTouch_())->Set(evt);
pointerCount = require(SurfaceBase_MotionEventRecord::multiTouch_())->GetPointerCount();
if (([&]() { auto cs_left = pls::cs::box(pointerIds); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }()) || (pointerIds.length() != pointerCount)) {
pointerIds = IntArray::make(pointerCount);
pointerPos = FloatArray::make(pointerCount * 2);
pointerDelta = FloatArray::make(pointerCount * 3);
}
for (pls::cs::Int32 i = 0; i < pointerCount; ++i) {
{ auto cs_target = pointerIds; auto cs_index = i; auto cs_value = require(SurfaceBase_MotionEventRecord::multiTouch_())->GetPointerId(i);cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = pointerPos; auto cs_index = i * 2 + 0; auto cs_value = require(SurfaceBase_MotionEventRecord::multiTouch_())->GetX(i);cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = pointerPos; auto cs_index = i * 2 + 1; auto cs_value = require(SurfaceBase_MotionEventRecord::multiTouch_())->GetY(i);cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = pointerDelta; auto cs_index = i * 3 + 0; auto cs_value = require(SurfaceBase_MotionEventRecord::multiTouch_())->GetDeltaX(i);cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = pointerDelta; auto cs_index = i * 3 + 1; auto cs_value = require(SurfaceBase_MotionEventRecord::multiTouch_())->GetDeltaY(i);cs_target.set_Item(cs_index,cs_value);}
{ auto cs_target = pointerDelta; auto cs_index = i * 3 + 2; auto cs_value = require(SurfaceBase_MotionEventRecord::multiTouch_())->GetDeltaTime(i);cs_target.set_Item(cs_index,cs_value);}
}
isMousePointer = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(evt)->IsMousePointer();});
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Copy(kairo.unity.surface.SurfaceBase,kairo.unity.surface.SurfaceBase.MotionEventRecord)
void SurfaceBase_MotionEventRecord::CopyMotionEventRecord(pls::cs::Ref<SurfaceBase> surface,pls::cs::Ref<SurfaceBase_MotionEventRecord> evt) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.Copy(kairo.unity.surface.SurfaceBase,kairo.unity.surface.SurfaceBase.MotionEventRecord)",kairo);
{
action = require(evt)->action;
x = require(evt)->x;
y = require(evt)->y;
deltaX = require(evt)->deltaX;
deltaY = require(evt)->deltaY;
deltaTime = require(evt)->deltaTime;
isMousePointer = require(evt)->isMousePointer;
pointerCount = require(evt)->pointerCount;
if ([&]() { auto cs_left = pls::cs::box(require(evt)->pointerIds); auto cs_right = pls::cs::box(IntArray{}); return cs_left != cs_right; }()) {
if (([&]() { auto cs_left = pls::cs::box(pointerIds); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }()) || (pointerIds.length() != require(evt)->pointerIds.length())) {
pointerIds = IntArray::make(require(evt)->pointerIds.length());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(require(evt)->pointerIds), 0, pls::cs::box(pointerIds), 0, pointerIds.length());});
}
if ([&]() { auto cs_left = pls::cs::box(require(evt)->pointerPos); auto cs_right = pls::cs::box(FloatArray{}); return cs_left != cs_right; }()) {
if (([&]() { auto cs_left = pls::cs::box(pointerPos); auto cs_right = pls::cs::box(FloatArray{}); return cs_left == cs_right; }()) || (pointerPos.length() != require(evt)->pointerPos.length())) {
pointerPos = FloatArray::make(require(evt)->pointerPos.length());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(require(evt)->pointerPos), 0, pls::cs::box(pointerPos), 0, pointerPos.length());});
}
if ([&]() { auto cs_left = pls::cs::box(require(evt)->pointerDelta); auto cs_right = pls::cs::box(FloatArray{}); return cs_left != cs_right; }()) {
if (([&]() { auto cs_left = pls::cs::box(pointerDelta); auto cs_right = pls::cs::box(FloatArray{}); return cs_left == cs_right; }()) || (pointerDelta.length() != require(evt)->pointerDelta.length())) {
pointerDelta = FloatArray::make(require(evt)->pointerDelta.length());
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(require(evt)->pointerDelta), 0, pls::cs::box(pointerDelta), 0, pointerDelta.length());});
}
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetAction
pls::cs::Int32 SurfaceBase_MotionEventRecord::GetAction() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetAction",kairo);
{
return action;
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.IsMousePointer
bool SurfaceBase_MotionEventRecord::IsMousePointer() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.IsMousePointer",kairo);
{
return isMousePointer;
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetPointerCount
pls::cs::Int32 SurfaceBase_MotionEventRecord::GetPointerCount() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetPointerCount",kairo);
{
return pointerCount;
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetPointerId(System.Int32)
pls::cs::Int32 SurfaceBase_MotionEventRecord::GetPointerId(pls::cs::Int32 pointerIndex) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetPointerId(System.Int32)",kairo);
{
return pointerIds[pointerIndex];
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetX(System.Int32)
pls::cs::Single SurfaceBase_MotionEventRecord::GetX(pls::cs::Int32 index) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetX(System.Int32)",kairo);
{
return pointerPos[index * 2 + 0];
}
}

// M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetY(System.Int32)
pls::cs::Single SurfaceBase_MotionEventRecord::GetY(pls::cs::Int32 index) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.surface.SurfaceBase.MotionEventRecord.GetY(System.Int32)",kairo);
{
return pointerPos[index * 2 + 1];
}
}
} // namespace kairo::unity::surface
}
