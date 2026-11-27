#include "mesh.hpp"
#include "map_zoom_sample.hpp"
#include <iostream>
using namespace pls;
namespace {
int checks=0;void check(bool value){++checks;if(!value)throw std::runtime_error("Own software mesh invariant failed");}
cs::Ref<kairo::Image> target(){return kairo::Image::FromRgba(16,16,std::vector<std::uint8_t>(16*16*4));}
std::array<int,4> pixel(const cs::Ref<kairo::Image>&image,int x,int y){const auto&i=image->pixels();const auto at=std::size_t(y*16+x)*4;return {i[at],i[at+1],i[at+2],i[at+3]};}
}
int main(){
 // Compare the allocation-free sampler against an explicitly expanded image.
 std::vector<std::uint8_t> pattern(7*5*4),expanded(14*10*4);
 for(std::size_t i=0;i<pattern.size();++i)pattern[i]=std::uint8_t((i*37+19)%256);
 for(int y=0;y<10;++y)for(int x=0;x<14;++x)for(int c=0;c<4;++c)
     expanded[(y*14+x)*4+c]=pattern[((y/2)*7+x/2)*4+c];
 for(int scale:{75,85,100,115,130,150,170,185,200}){
     const int width=7*scale/100,height=5*scale/100;
     for(int y=0;y<height;++y)for(int x=0;x<width;++x){
         const float tx=(float(x)+.5f)/float(width),ty=(float(y)+.5f)/float(height);
         check(kairo::map_zoom_sample(pattern.data(),7,5,0,0,7,5,tx,ty,2)==
               kairo::map_zoom_sample(expanded.data(),14,10,0,0,14,10,tx,ty,1));
     }
 }
 // Crop edges clamp to the crop, not the neighbouring image texels.
 check(kairo::map_zoom_sample(pattern.data(),7,5,2,1,1,1,0,1,2)==
       (std::array<std::uint8_t,4>{pattern[36],pattern[37],pattern[38],pattern[39]}));
 auto map_source=kairo::Image::FromRgba(2,2,{255,0,0,255,0,255,0,255,0,0,255,255,255,255,255,255});
 for(int scale:{100,200}){
     auto nearest=target(),smooth=target();
     nearest->GetGraphics()->DrawScaledImage(map_source,1,1,float(scale/50),float(scale/50),0,0,2,2);
     smooth->GetGraphics()->DrawScaledMapImage(map_source,1,1,float(scale/50),float(scale/50),0,0,2,2,scale);
     check(nearest->pixels()==smooth->pixels());
 }
 auto image=target();auto g=cs::make_ref<kairo::Graphics>(image);auto mesh=g->GetMeshManager();mesh->capture(true);g->ResetRender();
 check(mesh->current_depth()==1498976.0f);mesh->SetDepth(100);check(mesh->current_depth()==749900.0f);mesh->SetDepth(0,true);check(mesh->current_depth()==1500000.0f&&mesh->front_depth()==749900.0f);mesh->SetDepthFront();check(mesh->current_depth()==749900.0f);
 g->ResetRender();mesh->SetDepth(100);g->SetColor(255,0,0);g->FillRect(1,1,8,8);mesh->SetDepth(0);g->SetColor(0,0,255);g->FillRect(1,1,8,8);
 check(pixel(image,2,2)==std::array<int,4>{0,0,0,0});kairo::MeshManager::Render(image,mesh->commands(),{});check(pixel(image,2,2)==std::array<int,4>{255,0,0,255});
 image=target();g=cs::make_ref<kairo::Graphics>(image);mesh=g->GetMeshManager();mesh->capture(true);g->ResetRender();mesh->SetDepth(0);g->SetColor(255,0,0);g->FillRect(0,0,16,16);mesh->SetDepth(100);g->SetColor(0,0,255,128);g->FillRect(0,0,16,16);kairo::MeshManager::Render(image,mesh->commands(),{});check(pixel(image,2,2)==std::array<int,4>{127,0,128,255});
 image=target();g=cs::make_ref<kairo::Graphics>(image);mesh=g->GetMeshManager();mesh->capture(true);g->ResetRender();auto red=kairo::Image::FromRgba(1,1,{255,0,0,255}),blue=kairo::Image::FromRgba(1,1,{0,0,255,255});
 mesh->SetDepth(50);g->DrawScaledImage(red,0,0,16,16,0,0,1,1);mesh->SetDepth(50);g->DrawScaledImage(blue,0,0,16,16,0,0,1,1);kairo::MeshManager::Render(image,mesh->commands(),{});check(pixel(image,2,2)==std::array<int,4>{255,0,0,255});
 auto cutout=kairo::Image::FromRgba(2,1,{255,0,0,0,0,255,0,255});check(cutout->GetAlphaType()==1);image=target();g=cs::make_ref<kairo::Graphics>(image);mesh=g->GetMeshManager();mesh->capture(true);g->ResetRender();g->SetColor(0,0,255);g->FillRect(0,0,16,16);g->DrawScaledImage(cutout,0,0,16,16,0,0,2,1);kairo::MeshManager::Render(image,mesh->commands(),{});check(pixel(image,1,2)==std::array<int,4>{0,0,255,255});check(pixel(image,12,2)==std::array<int,4>{0,255,0,255});
 auto mixed=kairo::Image::FromRgba(2,1,{255,0,0,255,0,255,0,128});check(mixed->GetAlphaType()==3);image=target();g=cs::make_ref<kairo::Graphics>(image);mesh=g->GetMeshManager();mesh->capture(true);g->ResetRender();g->SetColor(0,0,0);g->FillRect(0,0,16,16);g->DrawScaledImage(mixed,0,0,16,16,0,0,2,1);kairo::MeshManager::Render(image,mesh->commands(),{});check(pixel(image,1,2)==std::array<int,4>{255,0,0,255});check(pixel(image,12,2)==std::array<int,4>{0,128,0,255});
 image=target();g=cs::make_ref<kairo::Graphics>(image);mesh=g->GetMeshManager();mesh->capture(true);g->ResetRender();g->SetColor(255,0,0);g->FillRect(0,0,16,16);g->SetRenderMode(1,128,64);g->SetColor(255,255,255);g->FillRect(0,0,16,16);kairo::MeshManager::Render(image,mesh->commands(),{});check(pixel(image,1,1)==std::array<int,4>{192,128,128,255});
 std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<checks<<",\"Android_raster\":\"UNKNOWN\"}\n";
}
