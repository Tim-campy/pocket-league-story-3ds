#pragma once
#include "forms_callbacks.hpp"
namespace synthetic_surface {
class Canvas:public pls::cs::Object {
    pls::cs::Ref<pls::cs::Object> source_;
    pls::cs::Ref<pls::kairo::CanvasSurface> adapter_;
public:
    void host_source_surface(pls::cs::Ref<pls::cs::Object> source,pls::cs::Ref<pls::kairo::CanvasSurface> adapter){source_=std::move(source);adapter_=std::move(adapter);}
    pls::cs::Ref<pls::cs::Object> GetSourceSurfaceManager(){return source_;}
    bool OnTouchEvent(pls::cs::Ref<pls::kairo::MotionEvent> event){if(adapter_)adapter_->Touch(event);return true;}
    void trace_edges(const pls::cs::EdgeVisitor& visitor)const override{pls::cs::trace_value(source_,visitor);pls::cs::trace_value(adapter_,visitor);}
    void release_edges()override{source_.reset();adapter_.reset();}
};
}
