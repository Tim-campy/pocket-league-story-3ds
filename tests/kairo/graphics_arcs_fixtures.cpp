#include "graphics.hpp"
#include <iostream>
#include <stdexcept>
using namespace pls;
namespace {
int checks=0;
void check(bool yes){++checks;if(!yes)throw std::runtime_error("Own CPU arc API invariant failed");}
cs::Ref<kairo::Image> image(){return kairo::Image::FromRgba(24,24,std::vector<std::uint8_t>(24*24*4));}
cs::Ref<kairo::Graphics> graphics(cs::Ref<kairo::Image> target,bool gui=true){auto g=cs::make_ref<kairo::Graphics>(target,gui);g->ResetRender();return g;}
int alpha(const cs::Ref<kairo::Image>&target,int x,int y){return target->pixels()[(y*24+x)*4+3];}
std::size_t painted(const cs::Ref<kairo::Image>&target){std::size_t n=0;for(std::size_t i=3;i<target->pixels().size();i+=4)n+=target->pixels()[i]!=0;return n;}
bool same(cs::Array<float>a,cs::Array<float>b){if(a.length()!=b.length())return false;for(int i=0;i<a.length();++i)if(a.at(i)!=b.at(i))return false;return true;}
}
int main(){
    int count=0;bool enabled=true;
    kairo::GraphicsRuntimeBindings runtime;runtime.shape_drawn=cs::Delegate<void()>::from_static("own-arc-counter",[&]{if(enabled)++count;});kairo::install_graphics_runtime(std::move(runtime));
    auto full=image();auto g=graphics(full);g->SetColor(255,0,0,128);g->FillArc(2,2,16,16,0,360);
    check(count==1);check(alpha(full,10,10)==128);check(alpha(full,0,0)==0&&alpha(full,2,2)==0);check(painted(full)>100);
    bool one_pass=true;for(std::size_t i=3;i<full->pixels().size();i+=4)if(full->pixels()[i]&&full->pixels()[i]!=128)one_pass=false;check(one_pass);
    auto ring=image();auto r=graphics(ring);r->SetColor(0,255,0);r->DrawArc(2,2,16,16,0,360,2);check(count==2);check(alpha(ring,10,10)==0&&painted(ring)>0);
    auto a=image(),b=image();auto ga=graphics(a),gb=graphics(b);ga->SetColor(4,8,12);gb->SetColor(4,8,12);ga->DrawArc2(2,3,17,15,-10,120);gb->DrawArc(2,3,16,14,-10,120);check(a->pixels()==b->pixels());check(count==4);
    auto empty=image();auto z=graphics(empty);z->FillArc(1,2,10,12,0,0);z->DrawArc(1,2,10,12,0,0);check(painted(empty)==0&&count==6);
    enabled=false;z->FillArc(1,2,10,12,0,0);check(count==6);enabled=true;
    auto clipped=image();auto c=graphics(clipped);c->SetOrigin(8,0);c->SetClip(1,0,3,24);const auto matrix=c->GetMatrixValues(0);c->FillArc(0,0,12,12,0,360);
    bool bounds=true;for(int y=0;y<24;++y)for(int x=0;x<24;++x)if(alpha(clipped,x,y)&&(x<9||x>=12))bounds=false;
    check(bounds&&painted(clipped)>0);check(c->GetOriginX()==8&&c->GetOriginY()==0&&same(matrix,c->GetMatrixValues(0)));
    auto lines=image(),mesh=image();auto gl=graphics(lines),gm=graphics(mesh,false);gl->DrawArc(2,2,16,16,0,180,0);gm->DrawArc(2,2,16,16,0,180,0);check(painted(lines)>0&&painted(mesh)==0);
    const auto saved=c->GetMatrixValues(0);const auto before=count;bool rejected=false;try{c->DrawArc(1,2,-100,-100,0,90);}catch(const cs::NotSupportedException&){rejected=true;}
    check(rejected&&count==before&&same(saved,c->GetMatrixValues(0)));
    auto fail=cs::Delegate<void()>::from_static("own-counter-failure",[]{throw cs::InvalidOperationException();});kairo::install_graphics_runtime({fail});
    rejected=false;try{c->FillArc(0,0,4,4,0,90);}catch(const cs::InvalidOperationException&){rejected=true;}check(rejected&&same(saved,c->GetMatrixValues(0)));
    kairo::install_graphics_runtime({});
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<checks<<",\"game_executed\":false,\"Android_raster_equivalence\":\"UNKNOWN\"}\n";
}
