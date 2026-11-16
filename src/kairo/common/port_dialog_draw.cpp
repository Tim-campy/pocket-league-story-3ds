// Drawing of the port dialog through the common Graphics API (PC and 3DS).
#include "port_dialog.hpp"
#include "font.hpp"
namespace pls::kairo {
void PortDialog::Draw(cs::Ref<Image> target)const{
    const auto w=target->GetWidth(),h=target->GetHeight();
    auto g=cs::make_ref<Graphics>(target,true);g->ResetRender();
    g->SetColor(0,0,0,140);g->FillRect(0.0f,0.0f,float(w),float(h));
    const float box_x=12.0f,box_y=float(h/2-70),box_w=float(w-24),box_h=140.0f;
    g->SetColor(32,40,56);g->FillRect(box_x,box_y,box_w,box_h);
    g->SetColor(220,226,236);g->DrawRect(box_x,box_y,box_w-1.0f,box_h-1.0f);
    auto font=cs::make_ref<Font>();font->SetSize(10);g->SetFont(font);
    g->SetClip(box_x+4.0f,box_y+4.0f,box_w-8.0f,box_h-8.0f);
    g->DrawPreparedString(request_.title.is_null()?cs::String(u""):request_.title,box_x+6.0f,box_y+6.0f,0);
    // Message: the source already turned <br> into line breaks (Dialog.SetText).
    std::u16string text=request_.message.is_null()?std::u16string():request_.message.code_units();
    float line_y=box_y+24.0f;std::size_t start=0;
    for(int line=0;line<5&&start<=text.size();++line){
        const auto end=text.find(u'\n',start);const auto piece=text.substr(start,end==std::u16string::npos?std::u16string::npos:end-start);
        g->DrawPreparedString(cs::String(piece),box_x+6.0f,line_y,0);line_y+=13.0f;
        if(end==std::u16string::npos)break;start=end+1;
    }
    g->ClearClip();
    for(std::size_t i=0;i<request_.buttons.size();++i){
        const auto b=ButtonBox(i,w,h);const bool on=static_cast<std::int32_t>(i)==selected_;
        if(on)g->SetColor(236,180,60);else g->SetColor(70,80,100);
        g->FillRect(float(b.x),float(b.y),float(b.w),float(b.h));
        g->SetColor(240,240,240);g->DrawRect(float(b.x),float(b.y),float(b.w-1),float(b.h-1));
        g->DrawPreparedString(request_.buttons[i].label,float(b.x+b.w/2),float(b.y+6),1);
    }
}
}
