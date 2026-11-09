#include "mesh.hpp"
#include <iostream>
using namespace pls;
namespace {
int checks=0;void check(bool value){++checks;if(!value)throw std::runtime_error("Own software mesh invariant failed");}
cs::Ref<kairo::Image> target(){return kairo::Image::FromRgba(16,16,std::vector<std::uint8_t>(16*16*4));}
std::array<int,4> pixel(const cs::Ref<kairo::Image>&image,int x,int y){const auto&i=image->pixels();const auto at=std::size_t(y*16+x)*4;return {i[at],i[at+1],i[at+2],i[at+3]};}
}
int main(){
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
