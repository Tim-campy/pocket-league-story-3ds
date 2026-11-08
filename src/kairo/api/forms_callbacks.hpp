#pragma once
#include "forms_execution.hpp"
namespace pls::kairo {
// These tables contain native/source bindings, not game implementations. Use
// Delegate::bind for managed targets so their lifetime/edges remain visible to
// GC. Installing a table does not eagerly invoke any source singleton getter.
struct KairoCallbacks {
    cs::Delegate<bool()> is_game_playing,reserve_enabled;
    cs::Delegate<void(bool)> set_game_state,set_reserve_enabled;
    cs::Delegate<std::int32_t()> reserve;
    cs::Delegate<void(std::int32_t)> set_reserve;
    cs::Delegate<void()> update,save,save_all;
    void trace_edges(const cs::EdgeVisitor& v)const{cs::trace_value(is_game_playing,v);cs::trace_value(reserve_enabled,v);cs::trace_value(set_game_state,v);cs::trace_value(set_reserve_enabled,v);cs::trace_value(reserve,v);cs::trace_value(set_reserve,v);cs::trace_value(update,v);cs::trace_value(save,v);cs::trace_value(save_all,v);}
    void release_edges(){cs::release_value(is_game_playing);cs::release_value(reserve_enabled);cs::release_value(set_game_state);cs::release_value(set_reserve_enabled);cs::release_value(reserve);cs::release_value(set_reserve);cs::release_value(update);cs::release_value(save);cs::release_value(save_all);}
};
template<class Signature>const cs::Delegate<Signature>& required_form_callback(const cs::Delegate<Signature>& callback){if(!callback)throw cs::InvalidOperationException("Generated form collaborator binding is missing");return callback;}
class CallbackFormKairo : public FormKairo {
    KairoCallbacks bindings_;
public:
    explicit CallbackFormKairo(KairoCallbacks bindings):bindings_(std::move(bindings)){}
    bool IsGamePlaying()override{return required_form_callback(bindings_.is_game_playing)();}
    void SetGameState(bool b)override{required_form_callback(bindings_.set_game_state)(b);}
    void Update()override{required_form_callback(bindings_.update)();}
    bool ReserveSaveEnabled()override{return required_form_callback(bindings_.reserve_enabled)();}
    void SetReserveSaveEnabled(bool b)override{required_form_callback(bindings_.set_reserve_enabled)(b);}
    std::int32_t ReserveSave()override{return required_form_callback(bindings_.reserve)();}
    void SetReserveSave(std::int32_t n)override{required_form_callback(bindings_.set_reserve)(n);}
    void Save()override{required_form_callback(bindings_.save)();}void SaveAll()override{required_form_callback(bindings_.save_all)();}
    void trace_edges(const cs::EdgeVisitor& v)const override{bindings_.trace_edges(v);}void release_edges()override{bindings_.release_edges();}
};
struct FormCallbacks {
    cs::Delegate<cs::Ref<FormKairo>()> kairo;
    cs::Delegate<cs::Ref<FormRecorder>()> recorder;
    cs::Delegate<cs::Ref<FormFep>()> fep;
    cs::Delegate<std::int64_t()> millis;
    cs::Delegate<void(std::int64_t)> sleep;
    cs::Delegate<void()> yield,collect,begin_draw_counters,close_jar_cache,release_expired_images;
    cs::Delegate<bool()> termination_dialog;
    cs::Delegate<void(cs::Ref<FormBase>)> resume_warning;
    cs::Delegate<void(cs::Ref<FormBase>,bool)> lifecycle_warning;
    void trace_edges(const cs::EdgeVisitor& v)const{cs::trace_value(kairo,v);cs::trace_value(recorder,v);cs::trace_value(fep,v);cs::trace_value(millis,v);cs::trace_value(sleep,v);cs::trace_value(yield,v);cs::trace_value(collect,v);cs::trace_value(begin_draw_counters,v);cs::trace_value(close_jar_cache,v);cs::trace_value(release_expired_images,v);cs::trace_value(termination_dialog,v);cs::trace_value(resume_warning,v);cs::trace_value(lifecycle_warning,v);}
    void release_edges(){cs::release_value(kairo);cs::release_value(recorder);cs::release_value(fep);cs::release_value(millis);cs::release_value(sleep);cs::release_value(yield);cs::release_value(collect);cs::release_value(begin_draw_counters);cs::release_value(close_jar_cache);cs::release_value(release_expired_images);cs::release_value(termination_dialog);cs::release_value(resume_warning);cs::release_value(lifecycle_warning);}
};
class CallbackFormRuntime : public FormRuntime {
    FormCallbacks bindings_;
public:
    explicit CallbackFormRuntime(FormCallbacks bindings):bindings_(std::move(bindings)){}
    cs::Ref<FormKairo> Kairo()override{return required_form_callback(bindings_.kairo)();}
    cs::Ref<FormRecorder> Recorder()override{return required_form_callback(bindings_.recorder)();}
    cs::Ref<FormFep> Fep()override{return required_form_callback(bindings_.fep)();}
    std::int64_t Millis()override{return required_form_callback(bindings_.millis)();}
    void Sleep(std::int64_t n)override{required_form_callback(bindings_.sleep)(n);}
    void Yield()override{required_form_callback(bindings_.yield)();}void Collect()override{required_form_callback(bindings_.collect)();}
    bool TerminationDialog()override{return required_form_callback(bindings_.termination_dialog)();}
    void ResumeWarning(cs::Ref<FormBase> f)override{required_form_callback(bindings_.resume_warning)(std::move(f));}
    void LifecycleWarning(cs::Ref<FormBase> f,bool init)override{required_form_callback(bindings_.lifecycle_warning)(std::move(f),init);}
    void BeginDrawCounters()override{required_form_callback(bindings_.begin_draw_counters)();}
    void CloseJarCache()override{required_form_callback(bindings_.close_jar_cache)();}
    void ReleaseExpiredImages()override{required_form_callback(bindings_.release_expired_images)();}
    void trace_edges(const cs::EdgeVisitor& v)const override{bindings_.trace_edges(v);}void release_edges()override{bindings_.release_edges();}
};
class CallbackFormFep : public FormFep {
    cs::Delegate<bool()> update_;
public:
    explicit CallbackFormFep(cs::Delegate<bool()> update):update_(std::move(update)){}
    bool Update()override{return required_form_callback(update_)();}
    void trace_edges(const cs::EdgeVisitor& v)const override{cs::trace_value(update_,v);}void release_edges()override{cs::release_value(update_);}
};
struct SurfaceCallbacks {
    cs::Delegate<void(std::int32_t,cs::Ref<KeyEvent>)> raw_key_down;
    cs::Delegate<void(std::int32_t)> key_down,key_up;
    cs::Delegate<void(cs::Ref<MotionEvent>)> touch;
    cs::Delegate<void()> clear_touch,clear_game_touch,do_events,adjust_layout;
    cs::Delegate<void(cs::Ref<Graphics>)> begin_touch,draw,end_touch,draw_components;
    void trace_edges(const cs::EdgeVisitor& v)const{cs::trace_value(raw_key_down,v);cs::trace_value(key_down,v);cs::trace_value(key_up,v);cs::trace_value(touch,v);cs::trace_value(clear_touch,v);cs::trace_value(clear_game_touch,v);cs::trace_value(do_events,v);cs::trace_value(adjust_layout,v);cs::trace_value(begin_touch,v);cs::trace_value(draw,v);cs::trace_value(end_touch,v);cs::trace_value(draw_components,v);}
    void release_edges(){cs::release_value(raw_key_down);cs::release_value(key_down);cs::release_value(key_up);cs::release_value(touch);cs::release_value(clear_touch);cs::release_value(clear_game_touch);cs::release_value(do_events);cs::release_value(adjust_layout);cs::release_value(begin_touch);cs::release_value(draw);cs::release_value(end_touch);cs::release_value(draw_components);}
};
class CallbackFormSurface : public FormSurface {
    SurfaceCallbacks bindings_;
public:
    explicit CallbackFormSurface(SurfaceCallbacks bindings):bindings_(std::move(bindings)){}
    void RawKeyDown(std::int32_t key,cs::Ref<KeyEvent> event)override{required_form_callback(bindings_.raw_key_down)(key,std::move(event));}
    void KeyDown(std::int32_t key)override{required_form_callback(bindings_.key_down)(key);}void KeyUp(std::int32_t key)override{required_form_callback(bindings_.key_up)(key);}
    void Touch(cs::Ref<MotionEvent> event)override{required_form_callback(bindings_.touch)(std::move(event));}
    void ClearTouch()override{required_form_callback(bindings_.clear_touch)();}void ClearGameTouch()override{required_form_callback(bindings_.clear_game_touch)();}
    void DoEvents()override{required_form_callback(bindings_.do_events)();}void AdjustSurfaceLayout()override{required_form_callback(bindings_.adjust_layout)();}
    void BeginTouchRegist(cs::Ref<Graphics> g)override{required_form_callback(bindings_.begin_touch)(std::move(g));}
    void Draw(cs::Ref<Graphics> g)override{required_form_callback(bindings_.draw)(std::move(g));}
    void EndTouchRegist(cs::Ref<Graphics> g)override{required_form_callback(bindings_.end_touch)(std::move(g));}
    void DrawComponents(cs::Ref<Graphics> g)override{required_form_callback(bindings_.draw_components)(std::move(g));}
    void trace_edges(const cs::EdgeVisitor& v)const override{bindings_.trace_edges(v);}void release_edges()override{bindings_.release_edges();}
};
}
