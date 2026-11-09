#include "text_input.hpp"
#include "graphics.hpp"
#include "../../api/font.hpp"
#include "../../api/canvas.hpp"
#include "debug_input.hpp"
#include <SDL.h>
namespace pls::sdl {
void SimpleTextInput::check_thread()const{if(std::this_thread::get_id()!=owner_)throw cs::InvalidOperationException("SDL text field requires its UI thread");}
SimpleTextInput::~SimpleTextInput(){if(active_&&std::this_thread::get_id()==owner_&&SDL_WasInit(SDL_INIT_VIDEO))SDL_StopTextInput();}
void SimpleTextInput::Begin(cs::String initial,std::int32_t display_mode,std::int32_t input_mode){
    check_thread();panel_=accepted_=panel_finished_=false;panel_request_={};text_=initial;display_mode_=display_mode;input_mode_=input_mode;active_=true;
    debug_input_capture(true);if(auto canvas=kairo::Canvas::GetInstance(false))canvas->host_text_input_focus();
    SDL_SetHint(SDL_HINT_IME_SHOW_UI,"0");SDL_StartTextInput();
}
void SimpleTextInput::Close(){check_thread();if(!active_)return;SDL_StopTextInput();active_=false;if(panel_)panel_finished_=true;debug_input_capture(false);if(auto canvas=kairo::Canvas::GetInstance(false))canvas->host_text_input_focus();}
void SimpleTextInput::BeginPanel(const kairo::TextPanelRequest&request){Begin(request.text,0,request.mode);panel_=true;panel_request_=request;}
bool SimpleTextInput::PanelFinished()const{check_thread();return panel_&&panel_finished_;}
cs::Array<cs::String> SimpleTextInput::PanelResult()const{
    check_thread();if(!panel_||!panel_finished_)throw cs::InvalidOperationException("Text panel result requested before completion");
    return cs::Array<cs::String>::from({accepted_?cs::String(u"1"):cs::String{},text_});
}
bool SimpleTextInput::Handle(const platform::Input& event){
    check_thread();if(!active_)return false;
    using Kind=platform::Input::Kind;
    if(event.kind==Kind::quit)return false;
    if(event.kind==Kind::text_input){
        const auto input=cs::String::from_utf8(event.text);
        text_=cs::String((text_.is_null()?std::u16string{}:text_.code_units())+input.code_units());return true;
    }
    if(event.kind==Kind::key_down){
        if(event.key==SDLK_ESCAPE||event.key==SDLK_RETURN||event.key==SDLK_KP_ENTER){accepted_=event.key!=SDLK_ESCAPE;Close();return true;}
        if(event.key==SDLK_BACKSPACE&&!text_.is_null()&&text_.length()){
            auto value=text_.code_units();const auto last=value.back();value.pop_back();
            if(last>=0xdc00&&last<=0xdfff&&!value.empty()&&value.back()>=0xd800&&value.back()<=0xdbff)value.pop_back();
            text_=cs::String(std::move(value));
        }
    }
    // Keyboard/touch events belong to this focused PC field, not the game.
    return true;
}
void SimpleTextInput::Draw(cs::Ref<kairo::Image> target){
    check_thread();if(!active_)return;
    const auto w=target->GetWidth(),h=target->GetHeight();
    auto g=cs::make_ref<kairo::Graphics>(target,true);g->ResetRender();
    g->SetColor(24,24,24);g->FillRect(0.0f,float(h-58),float(w),58.0f);
    g->SetColor(230,230,230);g->DrawRect(1.0f,float(h-57),float(w-2),55.0f);
    auto font=cs::make_ref<kairo::Font>();font->SetSize(10);g->SetFont(font);
    g->SetClip(3.0f,float(h-55),float(w-6),51.0f);
    g->DrawPreparedString(panel_?panel_request_.title:cs::String(u"PC text input - Enter/Esc closes"),3.0f,float(h-54),0);
    g->DrawPreparedString(text_.is_null()?cs::String(u""):text_,3.0f,float(h-40),0);
    if(panel_){g->DrawPreparedString(panel_request_.positive,3.0f,float(h-26),0);g->DrawPreparedString(panel_request_.negative,float(w-3),float(h-26),4);}
}
}
