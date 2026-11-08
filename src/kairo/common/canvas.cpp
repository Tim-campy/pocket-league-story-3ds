#include "canvas.hpp"
#include "application.hpp"
#include "font.hpp"
namespace pls::kairo {
Canvas::Canvas(){
    keys_.on_key_down=[this](auto key){if(surface_)surface_->KeyDown(key);};
    keys_.on_key_up=[this](auto key){if(surface_)surface_->KeyUp(key);};
    input_.on_key_down=[this](auto key,auto event){OnKeyDown(key,event);};
    input_.on_key_up=[this](auto key,auto event){OnKeyUp(key,event);};
    input_.on_touch=[this](auto event){OnTouchEvent(event);};
}
cs::Ref<Canvas> Canvas::GetInstance(bool make){if(!instance_&&make)instance_=cs::make_ref<Canvas>();return instance_;}
void Canvas::host_display(cs::Ref<Image> image,cs::Ref<Font> font){if(graphics_)throw cs::InvalidOperationException("Cannot replace a painting display");display_=std::move(image);default_font_=std::move(font);}
cs::Ref<Graphics> Canvas::BeginPaint(){return BeginPaint(graphics_);}
cs::Ref<Graphics> Canvas::BeginPaint(cs::Ref<Graphics> graphics){
    if(!graphics){if(graphics_)return {};if(!display_)throw cs::InvalidOperationException("Canvas display has not been configured");graphics=display_->GetGraphics();graphics_=graphics;}
    graphics->SetOrigin(0,0);graphics->Scale(100.0f);graphics->ClearClip();graphics->SetRenderMode();graphics->ClearRenderRect();
    if(default_font_)graphics->SetFont(default_font_);
    return graphics;
}
void Canvas::EndPaint(){if(graphics_)graphics_->Dispose(true);graphics_.reset();}
std::int32_t Canvas::GetWidth(){if(display_)return display_->GetWidth();const auto app=IApplication::GetCurrentApp();if(!app)throw cs::InvalidOperationException("Canvas display has not been configured");return app->GetWidth();}
std::int32_t Canvas::GetHeight(){if(!std::isnan(aspect_))return cs::conv_i32(static_cast<float>(GetWidth())*aspect_/100.0f+0.01f);if(display_)return display_->GetHeight();const auto app=IApplication::GetCurrentApp();if(!app)throw cs::InvalidOperationException("Canvas display has not been configured");return app->GetHeight();}
void Canvas::SetSoftLabel(cs::String a,cs::String b,cs::String c,cs::String d){labels_.at(0)=a;labels_.at(1)=b;labels_.at(2)=c;labels_.at(3)=d;}
void Canvas::SetSoftLabel(std::int32_t id,cs::String label){labels_.at(id)=label;UpdateSoftLabel();}
void Canvas::UpdateSoftLabel(){for(std::int32_t i=0;i<shown_.length();++i)if(shown_.at(i)!=labels_.at(i))shown_.at(i)=labels_.at(i);}
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
void Canvas::trace_edges(const cs::EdgeVisitor& visitor)const{cs::trace_value(display_,visitor);cs::trace_value(graphics_,visitor);cs::trace_value(default_font_,visitor);cs::trace_value(surface_,visitor);cs::trace_value(source_surface_,visitor);cs::trace_value(labels_,visitor);cs::trace_value(shown_,visitor);}
void Canvas::release_edges(){display_.reset();graphics_.reset();default_font_.reset();surface_.reset();source_surface_.reset();cs::release_value(labels_);cs::release_value(shown_);on_back={};}
}
