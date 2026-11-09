#pragma once
#include "../../api/text_input.hpp"
#include "platform.hpp"
#include <thread>
namespace pls::kairo {class Image;}
namespace pls::sdl {
class SimpleTextInput final:public kairo::TextInputPresenter {
    std::thread::id owner_=std::this_thread::get_id();
    cs::String text_;
    bool active_{};
    bool panel_{},accepted_{},panel_finished_{};
    kairo::TextPanelRequest panel_request_;
    std::int32_t display_mode_{},input_mode_{};
    void check_thread()const;
public:
    ~SimpleTextInput()override;
    void Begin(cs::String,std::int32_t,std::int32_t)override;
    bool Blocking()const override{return false;}
    void BeginPanel(const kairo::TextPanelRequest&)override;
    bool PanelFinished()const override;
    cs::Array<cs::String> PanelResult()const override;
    bool Handle(const platform::Input&);
    void Draw(cs::Ref<kairo::Image>);
    void Close();
    bool Active()const{return active_;}
    cs::String Text()const{return text_;}
    std::int32_t DisplayMode()const{return display_mode_;}
    std::int32_t InputMode()const{return input_mode_;}
    void trace_edges(const cs::EdgeVisitor& v)const override{cs::trace_value(text_,v);cs::trace_value(panel_request_.title,v);cs::trace_value(panel_request_.text,v);cs::trace_value(panel_request_.positive,v);cs::trace_value(panel_request_.negative,v);}
    void release_edges()override{cs::release_value(text_);panel_request_={};}
};
}
