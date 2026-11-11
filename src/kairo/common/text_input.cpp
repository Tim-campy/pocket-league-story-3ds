#include "text_input.hpp"
#include "application.hpp"
namespace pls::kairo {
namespace {std::mutex presenter_mutex;cs::Ref<TextInputPresenter> presenter{};}
namespace {cs::GcRootProvider presenter_roots([](const cs::EdgeVisitor&visitor){cs::trace_value(presenter,visitor);});}
namespace {cs::Ref<TextInputPresenter> current_presenter(){std::lock_guard<std::mutex> lock(presenter_mutex);if(!presenter)throw cs::InvalidOperationException("SDL text input is not installed");return presenter;}}
void install_text_input(cs::Ref<TextInputPresenter> value){std::lock_guard<std::mutex> lock(presenter_mutex);presenter=std::move(value);}
cs::String request_text_input(cs::String initial,std::int32_t display_mode,std::int32_t input_mode){
    cs::Ref<TextInputPresenter> current{};{std::lock_guard<std::mutex> lock(presenter_mutex);current=presenter;}
    if(!current)throw cs::InvalidOperationException("SDL text input is not installed");
    auto app=IApplication::GetCurrentApp();if(!app)throw cs::NullReferenceException();
    app->RunOnUiThread(cs::Delegate<void()>::from_native("PC-nonblocking-text-input",[current,initial,display_mode,input_mode]{
        current->Begin(initial,display_mode,input_mode);
        if(current->Blocking())throw cs::InvalidOperationException("PC text input must not block gameplay");
    },current,initial),true);
    return initial;
}
void start_text_panel(cs::String title,cs::String text,std::int32_t mode,cs::String positive,cs::String negative,std::int32_t max_length){
    auto current=current_presenter();auto app=cs::nonnull(IApplication::GetCurrentApp());
    app->RunOnUiThread(cs::Delegate<void()>::from_native("PC-asynchronous-text-panel",[current,title,text,mode,positive,negative,max_length]{current->BeginPanel({title,text,positive,negative,mode,max_length});},current,title,text,positive,negative),true);
}
bool text_panel_finished(){
    auto current=current_presenter();auto app=cs::nonnull(IApplication::GetCurrentApp());
    bool result=false;app->RunOnUiThread(cs::Delegate<void()>::from_native("PC-text-panel-finished",[current,&result]{result=current->PanelFinished();},current),true);return result;
}
cs::Array<cs::String> text_panel_result(){
    auto current=current_presenter();auto app=cs::nonnull(IApplication::GetCurrentApp());
    auto value=app->RunOnUiThread(cs::Delegate<cs::Ref<cs::Object>()>::from_native("PC-text-panel-result",[current]{return current->PanelResult().as_object();},current),true);return cs::Array<cs::String>::from_object(value);
}
}
