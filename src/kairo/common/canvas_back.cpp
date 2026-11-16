// Escape/back key of kairo.unity.ui.Canvas.OnKeyDown (Canvas.cs:1169-1226).
// Canvas.Init registers the back soft labels "戻る" and "Back" through
// RegistBackSoftLabel (label.ToLower(), Canvas.cs:338-339, 1678-1685); the
// game registers no others. The shown labels are lowered with the current
// culture (string.ToLower()) and compared ordinally; a match presses that soft
// key, otherwise the form manager processes the back key (which ends in the
// termination dialog when no form takes it).
#include "canvas_back.hpp"
#include "application.hpp"
#include "forms.hpp"
#include "managed_collation.hpp"
namespace pls::kairo {
namespace {
bool same(const cs::String& left,const cs::String& right){return !left.is_null()&&left.code_units()==right.code_units();}
cs::String lower(cs::String value){return value.is_null()?value:cs::culture_to_lower(value);}
}
void install_canvas_back_key(){
    auto canvas=Canvas::GetInstance();
    canvas->on_back=[]{
        auto canvas=Canvas::GetInstance();auto app=IApplication::GetCurrentApp();if(!app)throw cs::NullReferenceException();
        const auto text=lower(canvas->GetSoftLabelL()),text2=lower(canvas->GetSoftLabelR()),text3=lower(canvas->GetSoftLabel(2)),text4=lower(canvas->GetSoftLabel(3));
        const cs::String back_labels[]={cs::culture_to_lower(cs::String(u"\x623b\x308b")),cs::culture_to_lower(cs::String(u"Back"))};
        std::int32_t num=-1;
        for(const auto& item:back_labels){
            if(same(text,item))num=2097152;
            else if(same(text2,item))num=4194304;
            else if(same(text3,item))num=8388608;
            else if(same(text4,item))num=16777216;
            if(num!=-1)break;
        }
        if(num!=-1)canvas->KeyDown(num);
        else if(auto manager=app->GetFormManager())manager->ProcessBackKey();
    };
}
}
