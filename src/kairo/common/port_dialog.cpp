#include "port_dialog.hpp"
#include <algorithm>
namespace pls::kairo {
PortDialog::PortDialog(const DialogRequest& request):request_(request){
    if(request_.buttons.empty())throw cs::ArgumentException("Port dialog needs at least one button");
}
void PortDialog::Handle(Command command){
    if(Done())return;
    const auto count=static_cast<std::int32_t>(request_.buttons.size());
    switch(command){
    case Command::left:selected_=(selected_+count-1)%count;break;
    case Command::right:selected_=(selected_+1)%count;break;
    case Command::confirm:chosen_=selected_;break;
    case Command::cancel:chosen_=dismissed;break;
    }
}
PortDialog::Box PortDialog::ButtonBox(std::size_t index,std::int32_t width,std::int32_t height)const{
    const auto count=static_cast<std::int32_t>(request_.buttons.size());
    const std::int32_t box_w=width-24,button_w=(box_w-8*(count+1))/count,y=height/2+30;
    return {12+8+static_cast<std::int32_t>(index)*(button_w+8),y,button_w,24};
}
std::int32_t PortDialog::hit(std::int32_t x,std::int32_t y)const{
    for(std::size_t i=0;i<request_.buttons.size();++i){const auto b=ButtonBox(i,width_,height_);if(x>=b.x&&x<b.x+b.w&&y>=b.y&&y<b.y+b.h)return static_cast<std::int32_t>(i);}
    return -1;
}
void PortDialog::PointerDown(std::int32_t x,std::int32_t y){if(Done())return;pressed_=hit(x,y);if(pressed_>=0)selected_=pressed_;}
void PortDialog::PointerUp(std::int32_t x,std::int32_t y){if(Done())return;if(pressed_>=0&&hit(x,y)==pressed_)chosen_=pressed_;pressed_=-1;}
std::int32_t PortDialog::Result()const{
    if(!Done())throw cs::InvalidOperationException("Port dialog has no chosen button yet");
    if(chosen_==dismissed)return -1;
    return request_.buttons[static_cast<std::size_t>(chosen_)].result;
}
}
