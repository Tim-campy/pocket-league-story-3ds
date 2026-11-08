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
    bool japanese=false;int translations=0;
    kairo::install_text_services({[&](cs::String s){++translations;return s;},[&]{return japanese;},[]{return false;},[]{return 100.0f;}});
    font->SetSize(1);auto width=font->StringWidthF(cs::String(u"A A"));require(width==font->raster().measure_utf16(u"A.A"));require(translations==1);font->StringWidth(cs::String(u"A A"));require(translations==3);
    int text_frames=0;
    for(int language=0;language<2;++language)for(int style=0;style<3;++style){japanese=language!=0;font->SetStyle(style);auto canvas=Image::CreateImage(200,64,Image::Format::ARGB32);auto drawing=canvas->GetGraphics();drawing->SetFont(font);drawing->SetColor(0,255,0);drawing->DrawString(cs::String(u"Fixture A<1"),2,2);
        auto& pixels=canvas->pixels();std::size_t ink=0;for(std::size_t i=0;i<pixels.size();i+=4)if(pixels[i+3]){++ink;require(pixels[i]==0&&pixels[i+2]==0&&pixels[i+1]>0);}require(ink>0);++text_frames;}
    kairo::install_text_services({});
    std::cout<<"{\"native_assertions\":"<<checks<<",\"png_occurrences_loaded\":"<<loaded<<",\"text_frames\":"<<text_frames<<",\"game_boot\":false}\n";
}
