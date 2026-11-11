#include "canvas.hpp"
#include "application.hpp"
#include "font.hpp"
namespace pls::kairo {
Canvas::Canvas(){
    default_font_=cs::make_ref<Font>();
    labels_[0].store(cs::String(u""));labels_[1].store(cs::String(u""));
    keys_.on_key_down=[this](auto key){if(surface_)surface_->KeyDown(key);};
    keys_.on_key_up=[this](auto key){if(surface_)surface_->KeyUp(key);};
    input_.on_key_down=[this](auto key,auto event){OnKeyDown(key,event);};
    input_.on_key_up=[this](auto key,auto event){OnKeyUp(key,event);};
    input_.on_touch=[this](auto event){OnTouchEvent(event);};
}
cs::Ref<Canvas> Canvas::GetInstance(bool make){if(!instance_&&make)instance_=cs::make_ref<Canvas>();return instance_;}
void Canvas::host_display(cs::Ref<Image> image,cs::Ref<Font> font){if(graphics_)throw cs::InvalidOperationException("Cannot replace a painting display");display_=std::move(image);if(font)default_font_=std::move(font);}
cs::Ref<Graphics> Canvas::BeginPaint(){return BeginPaint(graphics_);}
cs::Ref<Graphics> Canvas::BeginPaint(cs::Ref<Graphics> graphics,std::int32_t mesh_id){
    if(!graphics){if(graphics_)return {};if(!display_)throw cs::InvalidOperationException("Canvas display has not been configured");
        if(!graphics_buffer_)graphics_buffer_=cs::make_ref<Graphics>(display_,true);
        graphics_=graphics_buffer_;graphics_->target_=display_;graphics=graphics_;
    }
    if(!graphics->IsRenderGUIMode()&&(mesh_id<-1||mesh_id>0))throw cs::NotSupportedException("Multiple mesh managers are not implemented by the CPU backend");
    graphics->ResetRender();graphics->SetFont(default_font_);
    // Source Canvas.BeginPaint writes this only after reset/font/mesh setup.
    Graphics::current_.store(graphics);return graphics;
}
cs::Ref<Graphics> Canvas::BeginAlterStaticRender(cs::Ref<Graphics> graphics,std::int32_t mesh_id){
    if(!graphics){if(graphics_)return {};if(!display_)throw cs::InvalidOperationException("Canvas display has not been configured");
        if(!graphics_buffer_)graphics_buffer_=cs::make_ref<Graphics>(display_,true);
        graphics_=graphics_buffer_;graphics_->target_=display_;graphics=graphics_;
    }
    graphics->ResetRender();graphics->SetFont(default_font_);
    if(!graphics->IsRenderGUIMode()&&(mesh_id<-1||mesh_id>0))throw cs::NotSupportedException("Multiple mesh managers are not implemented by the CPU backend");
    is_alter_static_rendering_=true;Graphics::current_.store(graphics);return graphics;
}
void Canvas::EndPaint(){EndPaint(graphics_);}
void Canvas::EndPaint(cs::Ref<Graphics> graphics,std::int32_t mesh_id){
    cs::nonnull(graphics);if(!graphics->IsRenderGUIMode()&&(mesh_id<-1||mesh_id>0))throw cs::NotSupportedException("Multiple mesh managers are not implemented by the CPU backend");
    graphics->EndGLRender(true);
    if(graphics==graphics_&&graphics_){graphics_->Dispose(true);pls::cs::clear_ref(graphics_);}
    is_alter_static_rendering_=false;
    // Original EndPaint does NOT clear current_ or restore an outer context.
}
void Canvas::EndAlterStaticRender(cs::Ref<Graphics> graphics,std::int32_t mesh_id){
    cs::nonnull(graphics);if(!graphics->IsRenderGUIMode()&&(mesh_id<-1||mesh_id>0))throw cs::NotSupportedException("Multiple mesh managers are not implemented by the CPU backend");
    graphics->EndGLRender(true);
    if(graphics==graphics_&&graphics_){graphics_->Dispose(true);pls::cs::clear_ref(graphics_);}
    // Source EndAlterStaticRender leaves isAlterStaticRendering_ unchanged.
}
std::int32_t Canvas::GetWidth(){if(display_)return display_->GetWidth();const auto app=IApplication::GetCurrentApp();if(!app)throw cs::InvalidOperationException("Canvas display has not been configured");return app->GetWidth();}
std::int32_t Canvas::GetHeight(){if(!std::isnan(aspect_))return cs::conv_i32(static_cast<float>(GetWidth())*aspect_/100.0f+0.01f);if(display_)return display_->GetHeight();const auto app=IApplication::GetCurrentApp();if(!app)throw cs::InvalidOperationException("Canvas display has not been configured");return app->GetHeight();}
void Canvas::SetSoftLabel(cs::String a,cs::String b,cs::String c,cs::String d){labels_[0].store(a);labels_[1].store(b);labels_[2].store(c);labels_[3].store(d);}
void Canvas::SetSoftLabel(std::int32_t id,cs::String label){if(id<0||id>=4)throw cs::IndexOutOfRangeException();labels_[static_cast<std::size_t>(id)].store(label);UpdateSoftLabel();}
void Canvas::UpdateSoftLabel(){for(std::int32_t i=0;i<shown_.length();++i){const auto shown=GetSoftLabel(i);const auto requested=labels_[static_cast<std::size_t>(i)].load();if(shown!=requested)shown_.at(i)=labels_[static_cast<std::size_t>(i)].load();}}
void Canvas::ClearKeyBuffer(){
    // Mouse desktop path has no Unity touch array. Mobile cancel construction
    // remains a separate, unimplemented platform route.
    keys_.ClearKeyBuffer();
}
bool Canvas::OnKeyDown(std::int32_t code,cs::Ref<KeyEvent> event){
    if(!event)throw cs::NullReferenceException();if(surface_)surface_->RawKeyDown(code,event);
    if(event->GetRepeatCount()==0){keys_.PhysicalDown(code);if(code==27){const auto app=IApplication::GetCurrentApp();if(!app)throw cs::NullReferenceException();if(app->IsTermination())return true;if(!on_back)throw cs::NotSupportedException("Canvas back-label/Language bridge is not installed");on_back();}}
    return true;
}
bool Canvas::OnKeyUp(std::int32_t code,cs::Ref<KeyEvent> event){if(!event)throw cs::NullReferenceException();if(event->GetRepeatCount()==0)keys_.PhysicalUp(code);return true;}
bool Canvas::OnTouchEvent(cs::Ref<MotionEvent> event){if(!event)throw cs::NullReferenceException();if(surface_)surface_->Touch(std::move(event));return true;}
void Canvas::trace_edges(const cs::EdgeVisitor& visitor)const{cs::trace_value(display_,visitor);cs::trace_value(graphics_,visitor);cs::trace_value(default_font_,visitor);cs::trace_value(surface_,visitor);cs::trace_value(source_surface_,visitor);for(const auto& label:labels_)cs::trace_value(label,visitor);cs::trace_value(shown_,visitor);keys_.trace_edges(visitor);}
void Canvas::release_edges(){pls::cs::clear_ref(display_);pls::cs::clear_ref(graphics_);pls::cs::clear_ref(default_font_);pls::cs::clear_ref(surface_);pls::cs::clear_ref(source_surface_);for(auto& label:labels_)cs::release_value(label);cs::release_value(shown_);on_back={};}
}
