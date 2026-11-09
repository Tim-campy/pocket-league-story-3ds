#include "graphics.hpp"
#include "sha256.hpp"
#include "font.hpp"
#include "../../src/kairo/platform/sdl/font.hpp"
#include <iostream>
#include <stdexcept>
#include <limits>
int main(int argc,char** argv){
    using namespace pls;using kairo::Image;using kairo::Graphics;
    if(argc!=2)throw std::invalid_argument("Authenticated local asset root required");
    int values[]={std::numeric_limits<int>::min(),-1,0,1,255,256,std::numeric_limits<int>::max()};
    for(int i=0;i<128;++i){auto r=values[i%7],g=values[(i/7)%7],b=values[(i*3)%7],a=values[(i*5)%7];
        std::cout<<"c"<<i<<"="<<std::uint32_t(Graphics::GetColorOfRGB(r,g,b,a))<<","<<std::uint32_t(Graphics::GetColorOfRGB(r,g,b))<<"\n";}
    for(int i=0;i<128;++i){auto result=Graphics::GetAnchorPosition(values[i%7],values[(i*2)%7],values[(i*3)%7],values[(i*4)%7],i);
        std::cout<<"a"<<i<<"="<<result.at(0)<<","<<result.at(1)<<"\n";}
    auto image=Image::CreateImage(8,8,Image::Format::ARGB32);auto g=image->GetGraphics();
    try{g->GetRenderRect();throw std::runtime_error("Original Array.Copy failure disappeared");}catch(const cs::ArrayTypeMismatchException& e){std::cout<<"renderrect="<<e.type_name()<<"\n";}
    int checks=0;auto require=[&](bool b){if(!b)throw std::runtime_error("Graphics native fixture mismatch");++checks;};
    g->SetColor(255,0,0);g->SetClip(1,1,2,2);g->FillRect(0,0,8,8);auto p=image->pixels();
    for(int y=0;y<8;++y)for(int x=0;x<8;++x)require(p[(y*8+x)*4+3]==((x>=1&&x<3&&y>=1&&y<3)?255:0));
    g->ClearClip();g->PushOrigin(3,2);g->PushOrigin(1,1,true);require(g->GetOriginX()==4&&g->GetOriginY()==3);g->PopOrigin();require(g->GetOriginX()==3);g->PopOrigin();g->PopOrigin();require(g->GetOriginY()==0);
    g->SetRenderMode(1,128,128);require(g->GetRenderModeDstRatio()==127);g->PushRenderMode(0,255,0);g->PopRenderMode();require(g->GetRenderModeSrcRatio()==128);g->SetRenderMode();
    image->SetAlpha(17);require(image->GetAlpha()==255);image->SetTransparentColor(Graphics::GetColorOfRGB(255,0,0));image->SetTransparentEnabled(true);require(image->pixels()[(1*8+1)*4+3]==0);image->SetTransparentEnabled(false);require(image->pixels()[3]==255);
    auto before=image->pixels();g->CopyArea(0,0,4,4,2,2);require(before==image->pixels());
    auto source=Image::FromRgba(2,2,{255,0,0,255,0,255,0,255,0,0,255,255,255,255,255,255});
    g->DrawImage(source,4,4);require(image->pixels()[(5*8+5)*4+1]==255);
    auto blend=Image::FromRgba(1,1,{0,0,255,255});auto bg=blend->GetGraphics();bg->SetColor(255,0,0);bg->SetRenderMode(1,128);bg->FillRect(0,0,1,1);require(blend->pixels()[0]==128&&blend->pixels()[2]==127);
    bg->SetRenderMode(0,128);bg->FillRect(0,0,1,1);require(blend->pixels()[0]==128&&blend->pixels()[2]==0);
    assets::Catalog catalog(std::filesystem::u8path(argv[1]));kairo::install_asset_catalog(&catalog);std::size_t loaded{};
    for(auto* member:catalog.entries(assets::Kind::member)){
        auto bytes=catalog.read(*member);if(bytes.size()<8||bytes[0]!=137||bytes[1]!='P'||bytes[2]!='N'||bytes[3]!='G')continue;
        auto data=cs::Array<std::uint8_t>::make(std::int32_t(bytes.size()));for(int i=0;i<data.length();++i)data.at(i)=bytes[std::size_t(i)];
        auto entry=catalog.find(assets::Kind::image,assets::sha256(bytes));auto decoded=Image::Load(data);require(decoded->GetWidth()==std::int32_t(entry->width)&&decoded->GetHeight()==std::int32_t(entry->height));require(decoded->pixels()==catalog.read(*entry));
        decoded->Dispose();require(!decoded->GetGraphics());++loaded;
    }
    require(loaded==718);image->Dispose();require(!image->GetGraphics());
    auto font=cs::make_ref<kairo::Font>();int sizes[]={-1,0,1,2,3,12,30,std::numeric_limits<int>::max(),std::numeric_limits<int>::min()};
    for(int i=0;i<9;++i)for(int p=0;p<2;++p){std::string error="none";try{font->SetSize(sizes[i],p!=0);}catch(const cs::Exception& e){error=e.type_name();}
        std::cout<<"f"<<i<<p<<"="<<font->GetSize()<<","<<font->GetHeight()<<","<<cs::bit_copy<std::uint32_t>(font->GetWidth())<<","<<error<<"\n";}
    font->SetSize(1);int scales[]={50,100,125,200,100};for(auto scale:scales){kairo::Font::SetScale(scale);std::cout<<"scale-pending-"<<scale<<'='<<font->GetHeight()<<'\n';font->AdjustFontSize(100);std::cout<<"scale-applied-"<<scale<<'='<<font->GetHeight()<<'\n';}
    auto matrix_graphics=Image::CreateImage(16,16,Image::Format::ARGB32)->GetGraphics();
    auto trace_matrix=[&](int stage){for(int mode=0;mode<3;++mode){auto values=matrix_graphics->GetMatrixValues(mode);std::cout<<"matrix-"<<stage<<'-'<<mode<<'='<<(matrix_graphics->CheckLocalMatrix()?1:0);for(int i=0;i<9;++i)std::cout<<','<<cs::bit_copy<std::uint32_t>(values.at(i));std::cout<<'\n';}};
    trace_matrix(0);matrix_graphics->SetOrigin(3,-2);matrix_graphics->Scale(125);trace_matrix(1);
    auto matrix_values=cs::Array<float>::make(9);matrix_values.at(0)=matrix_values.at(4)=matrix_values.at(8)=1;matrix_values.at(6)=4;matrix_values.at(7)=7;
    matrix_graphics->PushMatrixValues(matrix_values);trace_matrix(2);matrix_values.at(0)=-2;matrix_values.at(1)=matrix_values.at(2)=-0.0f;matrix_values.at(4)=3;matrix_values.at(6)=matrix_values.at(7)=0;
    matrix_graphics->PushMatrixValues(matrix_values);trace_matrix(3);matrix_graphics->PushMatrixValues();trace_matrix(4);matrix_graphics->PopMatrix();trace_matrix(5);
    matrix_graphics->SetMatrixValues();trace_matrix(6);matrix_graphics->PopMatrix();trace_matrix(7);matrix_graphics->ClearLocalMatrix();trace_matrix(8);matrix_graphics->PopMatrix();trace_matrix(9);
    matrix_values=cs::Array<float>::from({1,0,0,0,1,0,2,3,1});matrix_graphics->PushMatrixValues(matrix_values);float local_x=4,local_y=5;matrix_graphics->BeginLocalCoordination(local_x,local_y);trace_matrix(10);std::cout<<"local1="<<local_x<<','<<local_y<<'\n';
    local_x=6;local_y=7;matrix_graphics->BeginLocalCoordination(local_x,local_y);trace_matrix(11);std::cout<<"local2="<<local_x<<','<<local_y<<'\n';matrix_graphics->EndLocalCoordination();trace_matrix(12);matrix_graphics->EndLocalCoordination();trace_matrix(13);
    auto boolean=[](bool value){return value?"True":"False";};Graphics::SetAutoTextLayout(true);std::cout<<"auto0="<<boolean(Graphics::PeekAutoTextLayout())<<'\n';Graphics::PushAutoTextLayout(false);std::cout<<"auto1="<<boolean(Graphics::PeekAutoTextLayout())<<','<<boolean(Graphics::IsAutoTextLayout())<<'\n';Graphics::PushAutoTextLayout(true);std::cout<<"auto2="<<boolean(Graphics::PeekAutoTextLayout())<<'\n';std::cout<<"auto3="<<boolean(Graphics::PopAutoTextLayout())<<'\n';std::cout<<"auto4="<<boolean(Graphics::PeekAutoTextLayout())<<'\n';std::cout<<"auto5="<<boolean(Graphics::PopAutoTextLayout())<<'\n';std::cout<<"auto6="<<boolean(Graphics::PopAutoTextLayout())<<'\n';Graphics::SetAutoTextLayout(false);
    auto blend_trace=[&](int stage){std::cout<<"blend"<<stage<<'='<<matrix_graphics->GetBlendMode()<<','<<matrix_graphics->GetBlendColor()<<'\n';};matrix_graphics->SetBlendMode(2,37);blend_trace(0);matrix_graphics->PushBlendMode(1,255,255,255,128);blend_trace(1);matrix_graphics->PushBlendMode(0);blend_trace(2);matrix_graphics->PopBlendMode();blend_trace(3);matrix_graphics->PopBlendMode();blend_trace(4);matrix_graphics->PopBlendMode();blend_trace(5);try{matrix_graphics->PushBlendMode(4);}catch(const cs::Exception& e){std::cout<<"blend-error="<<e.type_name()<<'\n';}matrix_graphics->PopBlendMode();
    // Own asymmetric pixels verify rotation, inverse affine sampling and flips.
    auto affine_target=Image::CreateImage(4,4,Image::Format::ARGB32);auto affine=affine_target->GetGraphics();
    matrix_values.at(0)=0;matrix_values.at(1)=1;matrix_values.at(3)=-1;matrix_values.at(4)=0;matrix_values.at(6)=2;matrix_values.at(7)=0;
    affine->SetMatrixValues(matrix_values);affine->DrawImage(source,0,0);require(affine_target->pixels()[0]==0&&affine_target->pixels()[2]==255);require(affine_target->pixels()[4]==255&&affine_target->pixels()[5]==0);
    affine->SetMatrixValues();affine->SetFlipMode(1);affine->DrawImage(source,0,2);require(affine_target->pixels()[(2*4)*4+1]==255);affine->SetFlipMode(2);affine->DrawImage(source,2,2);require(affine_target->pixels()[(2*4+2)*4+2]==255);
    auto tint_target=Image::CreateImage(1,1,Image::Format::ARGB32);auto tint_graphics=tint_target->GetGraphics();auto red=Image::FromRgba(1,1,{255,0,0,255});tint_graphics->SetBlendMode(1,255,255,255,128);tint_graphics->DrawImage(red,0,0);require(tint_target->pixels()[0]==255&&tint_target->pixels()[1]==128&&tint_target->pixels()[2]==128);tint_graphics->SetBlendMode(2,128,255,255,128);tint_graphics->DrawImage(red,0,0);require(tint_target->pixels()[0]==64&&tint_target->pixels()[1]==0);tint_graphics->SetBlendMode(3);tint_graphics->DrawImage(red,0,0);require(tint_target->pixels()[0]==85&&tint_target->pixels()[1]==85&&tint_target->pixels()[2]==85);
    bool japanese=false;int translations=0;
    kairo::install_text_services({[&](cs::String s){++translations;return s;},[&]{return japanese;},[]{return false;},[]{return 100.0f;}});
    font->SetSize(1);auto width=font->StringWidthF(cs::String(u"A A"));require(width==font->raster().measure_utf16(u"A.A"));require(translations==1);font->StringWidth(cs::String(u"A A"));require(translations==3);
    int text_frames=0;
    for(int language=0;language<2;++language)for(int style=0;style<3;++style){japanese=language!=0;font->SetStyle(style);auto canvas=Image::CreateImage(200,64,Image::Format::ARGB32);auto drawing=cs::make_ref<Graphics>(canvas,true);drawing->SetFont(font);drawing->SetColor(0,255,0);drawing->DrawString(cs::String(u"Fixture A<1"),2,2);
        auto& pixels=canvas->pixels();std::size_t ink=0;for(std::size_t i=0;i<pixels.size();i+=4)if(pixels[i+3]){++ink;require(pixels[i]==0&&pixels[i+2]==0&&pixels[i+1]>0);}require(ink>0);++text_frames;}
    int markup_calls=0;kairo::TextServices text_services;
    text_services.translate=[](cs::String value){return value;};text_services.japanese=[](){return false;};text_services.localize_scale=[](){return false;};text_services.application_scale=[](){return 100.0f;};
    text_services.markup_width=[&](cs::Ref<kairo::Font> target,cs::String value){require(target==font&&value==cs::String(u"<fixture>"));++markup_calls;return 37.25f;};
    text_services.markup_draw=[&](cs::Ref<Graphics> target,cs::String value,float x,float y,std::int32_t anchor){require(target==g&&value==cs::String(u"<fixture>")&&x==1&&y==2&&anchor==17);++markup_calls;};
    kairo::install_text_services(std::move(text_services));Graphics::SetAutoTextLayout(true);require(font->StringWidthF(cs::String(u"<fixture>"))==37.25f);g->DrawString(cs::String(u"<fixture>"),1,2,17);require(markup_calls==2);Graphics::SetAutoTextLayout(false);
    kairo::install_text_services({});
    std::cout<<"{\"native_assertions\":"<<checks<<",\"png_occurrences_loaded\":"<<loaded<<",\"text_frames\":"<<text_frames<<",\"game_boot\":false}\n";
}
