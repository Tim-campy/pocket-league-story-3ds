#include "dialog_service.hpp"
#include "application.hpp"
namespace pls::kairo {
namespace {cs::Ref<DialogPresenter> presenter{};cs::Delegate<cs::Array<cs::String>(std::int32_t)> label_provider;}
namespace {cs::GcRootProvider dialog_roots([](const cs::EdgeVisitor&visitor){cs::trace_value(presenter,visitor);label_provider.trace_edges(visitor);});}
void install_dialog_service(cs::Ref<DialogPresenter> value,cs::Delegate<cs::Array<cs::String>(std::int32_t)> labels){presenter=std::move(value);label_provider=std::move(labels);}
std::int32_t show_dialog(std::int32_t type,cs::String title,cs::String message,cs::String custom_buttons){
    if(!custom_buttons.is_null())throw cs::NotSupportedException("Custom JNI dialog button return mapping is not verified");
    if(type<0||type>4)throw cs::NotSupportedException("Dialog type is outside the original declared constants");
    const auto current=presenter;
    // Hosts without a presenter (benchmark/diagnosis) report what was asked.
    if(!current||!label_provider)throw cs::InvalidOperationException("Native dialog presenter/localized labels are not installed (type="+std::to_string(type)+", title="+(title.is_null()?std::string("null"):title.utf8())+", message="+(message.is_null()?std::string("null"):message.utf8())+", last_caught="+cs::last_captured_exception()+")");
    auto app=IApplication::GetCurrentApp();if(!app)throw cs::NullReferenceException();std::int32_t answer=-1;
    app->RunOnUiThread(cs::Delegate<void()>::from_native("native-platform-dialog",[&]{
        const auto labels=label_provider(type);const auto count=type<=2?1:type==3?2:3;
        if(labels.is_null()||labels.length()!=count)throw cs::ArgumentException("Native dialog labels do not match its declared button set");
        DialogRequest request{type,title,message,{}};const std::int32_t results[]={4,8,2};
        for(std::int32_t i=0;i<count;++i){const auto label=labels.at(i);if(label.is_null()||label.length()==0)throw cs::ArgumentException("Native dialog label is empty");request.buttons.push_back({type<=2?1:results[i],label});}
        answer=current->Present(request);
        if(answer!=-1&&std::none_of(request.buttons.begin(),request.buttons.end(),[&](const auto& button){return button.result==answer;}))throw cs::InvalidOperationException("Dialog backend returned an undeclared button ID");
    },current,title,message),true);return answer;
}
}
