#pragma once
#include "graphics.hpp"
#include "input.hpp"
#include "debug_input.hpp"
#include "system.hpp"
namespace pls::kairo {
class IApplication;
// A native surface bridge must implement these routes; defaults deliberately
// reject calls instead of silently dropping game events.
class CanvasSurface : public cs::Object {
public:
    virtual void RawKeyDown(std::int32_t,cs::Ref<KeyEvent>)=0;
    virtual void KeyDown(std::int32_t)=0;
    virtual void KeyUp(std::int32_t)=0;
    virtual void Touch(cs::Ref<MotionEvent>)=0;
    virtual void ClearTouch()=0;
    virtual void ClearGameTouch()=0; // Init/Finish clear game surfaces only.
};
class Canvas : public cs::Object {
    inline static cs::Ref<Canvas> instance_{};
    inline static cs::Ref<Graphics> graphics_buffer_{};
    inline static std::int32_t last_browser_frame_{-1}; // Canvas.lastOpenBrowserFrame_ initializer.
    cs::Ref<Image> display_{};
    cs::Ref<Graphics> graphics_{};
    bool is_alter_static_rendering_{};
    cs::Ref<Font> default_font_{};
    cs::Ref<CanvasSurface> surface_{};
    cs::Ref<cs::Object> source_surface_{};
    std::array<cs::SharedField<cs::String>,4> labels_;
    cs::Array<cs::String> shown_=cs::Array<cs::String>::from({cs::String(u""),cs::String(u""),{}, {}});
    std::int32_t background_{};
    float aspect_=std::numeric_limits<float>::quiet_NaN();
    CanvasKeyState keys_;
    PcInputAdapter input_{keys_};
public:
    static constexpr std::int32_t KEY_LEFT=65536,KEY_RIGHT=262144,KEY_UP=131072,KEY_DOWN=524288,KEY_SELECT=1048576,KEY_SOFT1=2097152,KEY_SOFT2=4194304;
    static void trace_static_roots(const cs::EdgeVisitor&visitor){cs::trace_value(instance_,visitor);cs::trace_value(graphics_buffer_,visitor);}
    Canvas();
    std::int32_t source_status_bar_position{-1}; // Original field; no source assignments after its initializer.
    static std::int32_t& source_last_browser_frame(){return last_browser_frame_;}
    bool IsFullscreen()const{return DebugInput::get_fullScreen();}
    std::int32_t GetStatusBarHeight()const{return native_status_bar_height();}
    std::int32_t GetStatusBarPosition()const{return native_status_bar_position();}
    static cs::Ref<Canvas> GetInstance(bool make=true);
    // Explicit PC display dependency, not an alternative game screen design.
    void host_display(cs::Ref<Image>,cs::Ref<Font>);
    void host_input_config(std::function<bool()> reader){if(!reader)throw cs::ArgumentException("Canvas Config.DEBUG reader must be nonempty");const bool initial=reader();input_.initialize_config(initial,std::move(reader));}
    void host_event(const platform::Input& event){input_.feed(event);}
    void host_text_input_focus(){input_.cancel_focus();if(surface_)surface_->ClearTouch();}
    void SetDisplayCurrent(cs::Ref<IApplication>){} // Original body is empty.
    void SetSurfaceManager(cs::Ref<CanvasSurface> value){source_surface_=value;surface_=std::move(value);}
    // Generated source keeps its original SurfaceManagerBase object/Vector.
    // Native scheduling uses the adapter; C# getter lowering uses this source
    // identity instead of exposing an unrelated native wrapper as the object.
    void host_source_surface(cs::Ref<cs::Object> source,cs::Ref<CanvasSurface> adapter){if(bool(source)!=bool(adapter))throw cs::InvalidOperationException("Surface source and adapter must be installed together");source_surface_=std::move(source);surface_=std::move(adapter);}
    cs::Ref<cs::Object> GetSourceSurfaceManager(){return source_surface_;}
    cs::Ref<CanvasSurface> GetSurfaceManager(){return surface_;}
    cs::Ref<Graphics> GetGraphicsInstance(){return graphics_;}
    cs::Ref<Graphics> BeginPaint();
    cs::Ref<Graphics> BeginPaint(cs::Ref<Graphics>,std::int32_t mesh_id=-1);
    cs::Ref<Graphics> BeginAlterStaticRender(cs::Ref<Graphics>,std::int32_t mesh_id=-1);
    void EndPaint();
    void EndPaint(cs::Ref<Graphics>,std::int32_t mesh_id=-1);
    void EndAlterStaticRender(cs::Ref<Graphics>,std::int32_t mesh_id=-1);
    bool source_IsAlterStaticRendering()const{return is_alter_static_rendering_;}
    void SetBackground(std::int32_t c){SetBackColor(c);}
    void SetBackColor(std::int32_t c){background_=c;}
    std::int32_t GetBackColor(){return background_;}
    std::int32_t GetWidth();std::int32_t GetHeight();
    std::int32_t GetWidth2(){return GetWidth();}std::int32_t GetHeight2(){return GetHeight();}
    void SetAspectRatio(std::int32_t width,std::int32_t height){aspect_=static_cast<float>(height)*100.0f/static_cast<float>(width);}
    void SetAspectRatio(){aspect_=std::numeric_limits<float>::quiet_NaN();}
    void SetSoftLabel(cs::String,cs::String,cs::String={},cs::String={});
    void SetSoftLabel(std::int32_t,cs::String);
    cs::String GetSoftLabelL(){return shown_.at(0);}cs::String GetSoftLabelR(){return shown_.at(1);}
    cs::String GetSoftLabel(std::int32_t id){return shown_.at(id);}
    void UpdateSoftLabel();
    CanvasKeyState& key_state(){return keys_;}
    void DecideKeyState(){input_.decide_frame();}
    void ClearKeyBuffer();
    std::int32_t GetKeyState(){return keys_.GetKeyState();}std::int32_t GetKeypadState(){return keys_.GetKeypadState();}
    bool CheckKeyState(std::int32_t k){return keys_.CheckKeyState(k);}bool CheckKeyPulse(std::int32_t k){return keys_.CheckKeyPulse(k);}
    bool CheckKeyRepeat(std::int32_t k){return keys_.CheckKeyRepeat(k);}bool CheckKeyRepeat(std::int32_t k,std::int32_t i){return keys_.CheckKeyRepeat(k,i);}
    bool CheckKeyDouble(std::int32_t k){return keys_.CheckKeyDouble(k);}bool CheckKeyDouble(std::int32_t k,std::int32_t i){return keys_.CheckKeyDouble(k,i);}
    void SetKeyRepeatInterval(std::int32_t i){keys_.SetKeyRepeatInterval(i);}std::int32_t GetKeyRepeatInterval(){return keys_.GetKeyRepeatInterval();}
    void SetKeyDoubleInterval(std::int32_t i){keys_.SetKeyDoubleInterval(i);}std::int32_t GetKeyDoubleInterval(){return keys_.GetKeyDoubleInterval();}
    void KeyDown(std::int32_t k,bool p=true){keys_.KeyDown(k,p);}void KeyUp(std::int32_t k){keys_.KeyUp(k);}void KeyClick(std::int32_t k){keys_.KeyClick(k);}
    bool OnKeyDown(std::int32_t,cs::Ref<KeyEvent>);bool OnKeyUp(std::int32_t,cs::Ref<KeyEvent>);
    bool OnTouchEvent(cs::Ref<MotionEvent>);
    // Escape handling requires Language/soft-key/back-label comparison. The host
    // cannot claim this route until that source-derived bridge is installed.
    std::function<void()> on_back;
    std::int32_t GetSyncMillSecound(std::int32_t){return 0;} // Original spelling/body.
    void trace_edges(const cs::EdgeVisitor&)const override;
    void release_edges()override;
};
inline cs::GcRootProvider canvas_roots([](const cs::EdgeVisitor&visitor){Canvas::trace_static_roots(visitor);});
}
