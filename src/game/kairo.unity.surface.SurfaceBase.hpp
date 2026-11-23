// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#pragma once
#include "game_generated_forward.hpp"
namespace pls::game {
namespace kairo::unity::surface {

struct SurfaceBase : pls::cs::Object {
void trace_edges(const pls::cs::EdgeVisitor&visitor)const override;
PLS_DELEGATE_SLOTS(pls::cs::Object,
    {"M:kairo.unity.surface.SurfaceBase.DoBegin", "M:kairo.unity.surface.SurfaceBase.DoBegin"},
    {"M:kairo.unity.surface.SurfaceBase.DoEnd", "M:kairo.unity.surface.SurfaceBase.DoEnd"},
    {"M:kairo.unity.surface.SurfaceBase.DoEvent(kairo.unity.surface.TouchComponent)", "M:kairo.unity.surface.SurfaceBase.DoEvent(kairo.unity.surface.TouchComponent)"},
    {"M:kairo.unity.surface.SurfaceBase.OnTouchEvent(kairo.unity.surface.TouchEvent)", "M:kairo.unity.surface.SurfaceBase.OnTouchEvent(kairo.unity.surface.TouchEvent)"},
    {"M:kairo.unity.surface.SurfaceBase.BeginTouchRegist(kairo.unity.ui.Graphics)", "M:kairo.unity.surface.SurfaceBase.BeginTouchRegist(kairo.unity.ui.Graphics)"},
    {"M:kairo.unity.surface.SurfaceBase.EndTouchRegist(kairo.unity.ui.Graphics)", "M:kairo.unity.surface.SurfaceBase.EndTouchRegist(kairo.unity.ui.Graphics)"},
    {"M:kairo.unity.surface.SurfaceBase.SetTouchRegistEnable(System.Boolean)", "M:kairo.unity.surface.SurfaceBase.SetTouchRegistEnable(System.Boolean)"},
    {"M:kairo.unity.surface.SurfaceBase.Draw(kairo.unity.ui.Graphics)", "M:kairo.unity.surface.SurfaceBase.Draw(kairo.unity.ui.Graphics)"},
    {"M:kairo.unity.surface.SurfaceBase.IsGameSurface", "M:kairo.unity.surface.SurfaceBase.IsGameSurface"},
    {"M:kairo.unity.surface.SurfaceBase.RotateClear", "M:kairo.unity.surface.SurfaceBase.RotateClear"},
    {"M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)", "M:kairo.unity.surface.SurfaceBase.OnReceiveTouchEvent(kairo.unity.surface.MotionEvent)"},
    {"M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32)", "M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32)"},
    {"M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32,kairo.unity.ui.KeyEvent)", "M:kairo.unity.surface.SurfaceBase.OnKeyDown(System.Int32,kairo.unity.ui.KeyEvent)"},
    {"M:kairo.unity.surface.SurfaceBase.OnKeyUp(System.Int32,kairo.unity.ui.KeyEvent)", "M:kairo.unity.surface.SurfaceBase.OnKeyUp(System.Int32,kairo.unity.ui.KeyEvent)"},
    {"M:kairo.unity.surface.SurfaceBase.CanRegistComponent", "M:kairo.unity.surface.SurfaceBase.CanRegistComponent"});
PLS_MANAGED_CLASS("kairo.unity.surface.SurfaceBase", SurfaceBase, pls::cs::Object)
pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<TouchComponent>>> componentBuffer_{};
pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<TouchComponent>>> components_{};
pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> startTouchList_{};
pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> lastTouchList_{};
pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> touchListBuffer_{};
pls::cs::Int32 touchDownComponentId_{};
bool delayEraseTouchDownComponentId_{};
bool touch_{};
pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<TouchEvent>>> touchEvents_{};
pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<TouchEvent>>> taskBuffer_{};
pls::cs::Array<pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<TouchEvent>>>> touchEventBuffer_{};
pls::cs::Array<pls::cs::Int32> touchEventBufferNum_{};
pls::cs::Ref<SurfaceBase_MotionEventRecord> start_{};
pls::cs::Ref<SurfaceBase_MotionEventRecord> last_{};
pls::cs::Ref<SurfaceBase_MotionEventRecord> last2_{};
pls::cs::Array<pls::cs::Ref<SurfaceBase_MotionEventRecord>> delay_{};
pls::cs::Int32 delayNum_{};
bool lock_{};
bool multiTouchEnable_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> pinchPointer_{};
pls::cs::Int32 pinchDistance_{};
pls::cs::Array<pls::cs::Array<pls::cs::Int32>> pinchStartPoint_{};
bool pinchStart_{};
pls::cs::Int32 x_{};
pls::cs::Int32 y_{};
pls::cs::Int32 width_{};
pls::cs::Int32 height_{};
pls::cs::Single scaleRatio_{};
pls::cs::List<pls::cs::Single> windowsScaleBackup_{};
pls::cs::List<pls::cs::Ref<pls::kairo::Graphics>> windowsScaleGraphics_{};
pls::cs::Ref<pls::kairo::Graphics> graphics_{};
pls::cs::Int32 touchOffset_{};
pls::cs::Int32 lastTouchX{};
pls::cs::Int32 lastTouchY{};
bool registTouch_{};
pls::cs::Ref<pls::cs::Object> OnReceiveTouchEvent_lock1{};
pls::cs::Ref<pls::cs::Object> OnReceiveTouchEvent_lock2{};
pls::cs::Ref<pls::cs::Object> OnReceiveTrackballEvent_lock{};
virtual void DoBegin();
virtual void DoEnd();
virtual bool DoEvent(pls::cs::Ref<TouchComponent> c);
virtual void OnTouchEvent(pls::cs::Ref<TouchEvent> evt)=0;
virtual void BeginTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g);
virtual void EndTouchRegist(pls::cs::Ref<pls::kairo::Graphics> g);
virtual void SetTouchRegistEnable(bool enable);
virtual void Draw(pls::cs::Ref<pls::kairo::Graphics> g)=0;
virtual bool IsGameSurface()=0;
virtual void RotateClear()=0;
virtual void OnReceiveTouchEvent(pls::cs::Ref<pls::kairo::MotionEvent> evt);
virtual void OnKeyDown(pls::cs::Int32 key);
virtual void OnKeyDown(pls::cs::Int32 keyCode,pls::cs::Ref<pls::kairo::KeyEvent> evt);
virtual void OnKeyUp(pls::cs::Int32 keyCode,pls::cs::Ref<pls::kairo::KeyEvent> evt);
virtual bool CanRegistComponent();

static pls::cs::Ref<SurfaceBase> create();

static void ensure_initialized();

static pls::cs::Array<pls::cs::Int32>& localTouchToScreen_result();

static pls::cs::Ref<SurfaceBase_MotionEventRecord>& onReceiveTouchEvent_tmp();

static pls::cs::Array<pls::cs::Int32>& screenTouchToLocal_result();

static void set_registTouch(pls::cs::Ref<SurfaceBase> self,bool value);

static bool get_registTouch(pls::cs::Ref<SurfaceBase> self);

static void create_init(pls::cs::Ref<SurfaceBase> self);

pls::cs::Ref<TouchComponent> AddTouchComponent(pls::cs::Ref<TouchComponent> component);

pls::cs::Ref<TouchComponent> AddTouchComponent(pls::cs::Int32 id,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 value,pls::cs::Ref<TouchOption> option);

bool ExistTouchComponent(pls::cs::Ref<TouchComponent> component);

void ClearTouchComponent();

pls::cs::Ref<SurfaceBase_TouchPoint> CreateTouchPoint(pls::cs::Int64 key,pls::cs::Single x,pls::cs::Single y,pls::cs::Ref<TouchComponent> component);

void OnDraw(pls::cs::Ref<pls::kairo::Graphics> g);

bool IsTouch();

pls::cs::Int32 GetComponentLength();

pls::cs::Ref<TouchComponent> GetComponent(pls::cs::Int32 id,pls::cs::Int32 value);

pls::cs::Ref<TouchComponent> GetComponent(pls::cs::Int32 index);

pls::cs::Ref<TouchComponent> GetComponentId(pls::cs::Int32 id);

bool CheckTouch(pls::cs::Int32 id,pls::cs::Int32 value);

bool CheckFirstTouch(pls::cs::Int32 id,pls::cs::Int32 value);

bool CheckFirstTouch(pls::cs::Int32 id);

pls::cs::Int32 SearchTouchKey(pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> list,pls::cs::Int64 key);

pls::cs::Int32 SearchTouchId(pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> list,pls::cs::Int32 id);

bool CheckTouchKey(pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> list,pls::cs::Int64 key);

bool CheckTouchId(pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<SurfaceBase_TouchPoint>>> list,pls::cs::Int32 id);

pls::cs::Ref<TouchEvent> GetTouchEventId(pls::cs::Int32 id,pls::cs::Int32 type);

pls::cs::Ref<TouchEvent> GetTouchEventKey(pls::cs::Int64 key,pls::cs::Int32 type);

pls::cs::Ref<TouchEvent> CreateTouchEvent(pls::cs::Int32 type,pls::cs::Ref<TouchComponent> component);

void SetScaleRatio(pls::cs::Single scale);

pls::cs::Single GetScaleRatio();

pls::cs::Int32 GetX();

pls::cs::Int32 GetY();

pls::cs::Int32 GetWidth();

void SetHeight(pls::cs::Int32 height);

pls::cs::Int32 GetHeight();

void SetLocation(pls::cs::Int32 x,pls::cs::Int32 y);

void SetSize(pls::cs::Int32 width,pls::cs::Int32 height);

pls::cs::Int32 GetGameWidth();

pls::cs::Int32 GetGameHeight();

bool CheckHitPointRect(pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 rcx,pls::cs::Int32 rcy,pls::cs::Int32 rcw,pls::cs::Int32 rch);

void OnReceiveTouchEvent_2(pls::cs::Ref<SurfaceBase_MotionEventRecord> evt);

void OnKeyUp(pls::cs::Int32 key);

pls::cs::Int32 GetTouchOffset();
};
} // namespace kairo::unity::surface
}
