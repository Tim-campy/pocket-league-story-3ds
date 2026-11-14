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
    // Synchronous KairoPlugin.ShowFepPanel ({confirm ? non-null : null, text}).
    // No game call site uses it (all use the asynchronous panel). Default: the
    // "cancelled by the user" result, immediately, without waiting on a thread.
    // Phase 3 (3DS text input design) replaces the presenter, not the game.
    virtual cs::Array<cs::String> ShowPanel(const TextPanelRequest& request){
        auto result=cs::Array<cs::String>::make(2);result.at(1)=request.text;return result;
    }
};
// KairoPlugin.StartLanguagePanel / IsLanguagePanelFinish / GetLanguagePanelResult.
// Result is {selected index as text | null (cancel), extra | null}. Phase 3
// designs the 3DS screen; until then the default presenter finishes at once
// with the current index (the game keeps its language pack and pops the form).
struct LanguagePanelRequest {cs::Array<cs::String> languages;std::int32_t index{};cs::String custom_pack_location;std::int32_t mode{};};
class LanguagePanelPresenter : public cs::Object {
public:
    virtual void Begin(const LanguagePanelRequest& request){index_=request.index;finished_=true;}
    virtual bool Finished()const{return finished_;}
    virtual cs::Array<cs::String> Result()const{
        auto result=cs::Array<cs::String>::make(2);result.at(0)=cs::String::from_utf8(std::to_string(index_));return result;
    }
private:
    std::int32_t index_{};bool finished_{false};
};
void install_language_panel(cs::Ref<LanguagePanelPresenter>);
void start_language_panel(cs::Array<cs::String>,std::int32_t,cs::String,std::int32_t);
bool language_panel_finished();
cs::Array<cs::String> language_panel_result();
cs::Array<cs::String> show_text_panel(cs::String,cs::String,std::int32_t,cs::String,cs::String,std::int32_t);
void install_text_input(cs::Ref<TextInputPresenter>);
// PC development policy: start an asynchronous simple field, return initial
// text immediately after UI dispatch. Existing two consumers discard it.
cs::String request_text_input(cs::String,std::int32_t,std::int32_t);
void start_text_panel(cs::String,cs::String,std::int32_t,cs::String,cs::String,std::int32_t);
bool text_panel_finished();
cs::Array<cs::String> text_panel_result();
}
