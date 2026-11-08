#include "dialog.hpp"
#include <SDL.h>
namespace pls::sdl {
namespace {
class MessageBoxPresenter : public kairo::DialogPresenter {
    SDL_Window* parent_;
    cs::Delegate<void(bool)> modal_;
public:
    MessageBoxPresenter(SDL_Window* parent,cs::Delegate<void(bool)> modal):parent_(parent),modal_(std::move(modal)){}
    std::int32_t Present(const kairo::DialogRequest& request)override{
        if(!modal_)throw cs::InvalidOperationException("Native modal audio/input scope is not installed");
        std::vector<std::string> labels;labels.reserve(request.buttons.size());for(const auto& button:request.buttons)labels.push_back(button.label.utf8());
        std::vector<SDL_MessageBoxButtonData> buttons(request.buttons.size());
        for(std::size_t i=0;i<buttons.size();++i){buttons[i].buttonid=request.buttons[i].result;buttons[i].text=labels[i].c_str();buttons[i].flags=0;
            if(i==0)buttons[i].flags|=SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT;
            if(i+1==buttons.size())buttons[i].flags|=SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT;}
        const auto title=request.title.is_null()?std::string{}:request.title.utf8();const auto message=request.message.is_null()?std::string{}:request.message.utf8();
        const Uint32 flags=request.type==1?SDL_MESSAGEBOX_WARNING:request.type==2?SDL_MESSAGEBOX_ERROR:SDL_MESSAGEBOX_INFORMATION;
        SDL_MessageBoxData data{flags,parent_,title.c_str(),message.c_str(),static_cast<int>(buttons.size()),buttons.data(),nullptr};
        std::int32_t answer=-1;modal_(true);
        return cs::run_finally([&]{
            int result=-1,status=0;std::string error;
            {
                // Every SDL input above is an owning native copy. While the OS
                // dialog blocks, the registered host must not stop another
                // managed worker from collecting. No managed access, callback
                // or allocation occurs until this scope has resumed us.
                cs::GcNativeBlockingScope blocked;
                status=SDL_ShowMessageBox(&data,&result);
                if(status!=0)error=SDL_GetError();
            }
            if(status!=0)throw cs::IOException(error);
            answer=result;return answer;
        },[&]{modal_(false);});
    }
    void trace_edges(const cs::EdgeVisitor& v)const override{cs::trace_value(modal_,v);}void release_edges()override{cs::release_value(modal_);}
};
}
cs::Ref<kairo::DialogPresenter> make_dialog_presenter(SDL_Window* parent,cs::Delegate<void(bool)> modal_scope){return cs::make_ref<MessageBoxPresenter>(parent,std::move(modal_scope));}
}
