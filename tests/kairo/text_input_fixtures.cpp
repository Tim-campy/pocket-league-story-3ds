#include "backend.hpp"
#include "../../src/kairo/platform/sdl/text_input.hpp"
#include "application.hpp"
#include "../../src/kairo/api/debug_input.hpp"
#include <cstring>
#include <iostream>
namespace {
int assertions=0;
void check(bool value){++assertions;if(!value)throw std::runtime_error("SDL text input fixture failed");}
class OwnApp final:public pls::kairo::IApplication {
    void OnUpdate()override{}void OnDraw()override{}
public:pls::cs::Ref<pls::kairo::FormManagerBase> GetFormManager()override{return {};}
};
}
int main(){
    using namespace pls;
    cs::GcMutatorScope mutator;
    sdl::Backend backend(240,280,true);
    auto field=cs::make_ref<sdl::SimpleTextInput>();kairo::install_text_input(field);
    auto app=cs::make_ref<OwnApp>();app->source_Init(app);
    check(!field->Blocking()&&!field->Active());
    kairo::start_text_panel(cs::String(u"Own title"),cs::String(u"seed"),2,cs::String(u"Yes"),cs::String(u"No"),5);
    check(field->Active()&&!kairo::text_panel_finished()&&field->InputMode()==2);
    bool refused=false;try{(void)kairo::text_panel_result();}catch(const cs::InvalidOperationException&){refused=true;}check(refused);
    platform::Input addition{platform::Input::Kind::text_input};addition.text="x";check(field->Handle(addition));
    check(!kairo::text_panel_finished());check(field->Handle({platform::Input::Kind::key_down,0,0,SDLK_RETURN}));
    check(kairo::text_panel_finished()&&!field->Active());auto accepted=kairo::text_panel_result();
    check(accepted.length()==2&&!accepted.at(0).is_null()&&accepted.at(1)==cs::String(u"seedx"));
    kairo::start_text_panel(cs::String(u"Own cancel"),cs::String(u"second"),0,cs::String(u"Yes"),cs::String(u"No"),0);
    check(!kairo::text_panel_finished());check(field->Handle({platform::Input::Kind::key_down,0,0,SDLK_ESCAPE}));
    auto cancelled=kairo::text_panel_result();check(kairo::text_panel_finished()&&cancelled.at(0).is_null()&&cancelled.at(1)==cs::String(u"second"));
    check(kairo::request_text_input(cs::String(u"plain"),0,0)==cs::String(u"plain"));check(!kairo::text_panel_finished());field->Close();
    auto initial=cs::String(u"seed");
    check(kairo::request_text_input(initial,0,1)==initial);
    check(field->Active()&&!field->Blocking()&&SDL_IsTextInputActive()==SDL_TRUE);
    check(field->Text()==initial&&field->DisplayMode()==0&&field->InputMode()==1);
    SDL_Event e{};e.type=SDL_TEXTINPUT;std::strcpy(e.text.text,"\xc3\xa9\xf0\x9f\x98\x80");
    check(SDL_PushEvent(&e)==1);
    bool observed=false;for(const auto& event:backend.events())if(event.kind==platform::Input::Kind::text_input){observed=true;check(field->Handle(event));}
    check(observed&&field->Text()==cs::String(u"seed\u00e9\U0001f600"));
    e={};e.type=SDL_MOUSEBUTTONDOWN;e.button.button=SDL_BUTTON_LEFT;e.button.x=5;e.button.y=5;check(SDL_PushEvent(&e)==1);
    for(const auto& event:backend.events())field->Handle(event);
    check(!kairo::DebugInput::GetMouseButton(0)&&!kairo::DebugInput::GetMouseButtonDown(0));
    check(field->Handle({platform::Input::Kind::key_down,0,0,SDLK_BACKSPACE}));
    check(field->Text()==cs::String(u"seed\u00e9"));
    check(!field->Handle({platform::Input::Kind::quit}));
    check(field->Handle({platform::Input::Kind::key_down,0,0,SDLK_RETURN}));
    check(!field->Active()&&SDL_IsTextInputActive()==SDL_FALSE);
    check(!kairo::DebugInput::GetMouseButton(0));
    check(!field->Handle({platform::Input::Kind::key_down,0,0,SDLK_a}));
    check(kairo::request_text_input({},7,9).is_null());
    check(field->Text().is_null()&&field->DisplayMode()==7&&field->InputMode()==9);
    check(field->Handle({platform::Input::Kind::key_down,0,0,SDLK_ESCAPE}));
    check(!field->Blocking()&&!field->Active());
    kairo::install_text_input({});app->source_Init({});field.reset();app.reset();
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<",\"SDL_TextInput\":true,\"game_boot\":false}\n";
}
