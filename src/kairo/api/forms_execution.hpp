#pragma once
#include "forms.hpp"
namespace pls::kairo {
class FormKairo : public FormGameState {
public:
    virtual void Update()=0;
    virtual bool ReserveSaveEnabled()=0;virtual void SetReserveSaveEnabled(bool)=0;
    virtual std::int32_t ReserveSave()=0;virtual void SetReserveSave(std::int32_t)=0;
    virtual void Save()=0;virtual void SaveAll()=0;
};
class FormRecorder : public cs::Object {
public:virtual void Lock()=0;virtual void Unlock(bool forced)=0;
};
class FormFep : public cs::Object {
public:virtual bool Update()=0;
};
class FormSurface : public CanvasSurface {
public:
    virtual void DoEvents()=0;virtual void AdjustSurfaceLayout()=0;
    virtual void BeginTouchRegist(cs::Ref<Graphics>)=0;virtual void Draw(cs::Ref<Graphics>)=0;
    virtual void EndTouchRegist(cs::Ref<Graphics>)=0;virtual void DrawComponents(cs::Ref<Graphics>)=0;
};
// Each getter resolves the actual source singleton/current collaborator. A
// missing binding must throw, rather than manufacturing a null singleton.
class FormRuntime : public cs::Object {
public:
    virtual cs::Ref<FormKairo> Kairo()=0;
    virtual cs::Ref<FormRecorder> Recorder()=0;
    virtual cs::Ref<FormFep> Fep()=0;
    virtual std::int64_t Millis()=0;virtual void Sleep(std::int64_t)=0;virtual void Yield()=0;virtual void Collect()=0;
    virtual bool TerminationDialog()=0;
    virtual void ResumeWarning(cs::Ref<FormBase>)=0;
    virtual void LifecycleWarning(cs::Ref<FormBase>,bool initializing)=0;
    // Config counters, resource cache and image expiration remain real leaves.
    virtual void BeginDrawCounters()=0;virtual void CloseJarCache()=0;virtual void ReleaseExpiredImages()=0;
};
class SourceFormExecution : public FormExecutionBridge {
    cs::Ref<FormRuntime> runtime_;
    cs::Ref<FormSurface> surface(cs::Ref<Canvas>);
    void save_finally(cs::Ref<FormKairo>);
public:
    explicit SourceFormExecution(cs::Ref<FormRuntime> runtime):runtime_(std::move(runtime)){if(!runtime_)throw cs::ArgumentNullException();}
    bool ExecuteStep(cs::Ref<FormManagerBase>)override;
    void OnDraw(cs::Ref<FormManagerBase>)override;
    void trace_edges(const cs::EdgeVisitor& v)const override{cs::trace_value(runtime_,v);}
    void release_edges()override{runtime_.reset();}
};
// Install before generated FormManager construction. Existing managers are not
// retroactively replaced. Passing null removes the factory for isolated tests.
void install_form_runtime(cs::Ref<FormRuntime>);
}
