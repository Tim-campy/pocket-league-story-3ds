#pragma once
#include "semantic_runtime.hpp"
namespace pls::kairo {
struct TextPanelRequest {cs::String title,text,positive,negative;std::int32_t mode{},max_length{};};
class TextInputPresenter : public cs::Object {
public:
    virtual void Begin(cs::String,std::int32_t display_mode,std::int32_t input_mode)=0;
    virtual bool Blocking()const=0;
    virtual void BeginPanel(const TextPanelRequest&){throw cs::NotSupportedException("Text panel backend is not installed");}
    virtual bool PanelFinished()const{throw cs::NotSupportedException();}
    virtual cs::Array<cs::String> PanelResult()const{throw cs::NotSupportedException();}
};
void install_text_input(cs::Ref<TextInputPresenter>);
// PC development policy: start an asynchronous simple field, return initial
// text immediately after UI dispatch. Existing two consumers discard it.
cs::String request_text_input(cs::String,std::int32_t,std::int32_t);
void start_text_panel(cs::String,cs::String,std::int32_t,cs::String,cs::String,std::int32_t);
bool text_panel_finished();
cs::Array<cs::String> text_panel_result();
}
