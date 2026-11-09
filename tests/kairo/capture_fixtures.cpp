#include "capture.hpp"
#include <cassert>
#include <iostream>
int main(int argc,char**argv){using namespace pls;if(argc!=2)return 2;const auto root=std::filesystem::u8path(argv[1]);kairo::configure_capture(root);auto image=kairo::Image::FromRgba(2,3,{255,0,0,255,0,255,0,128,0,0,255,255,255,255,255,0,1,2,3,4,5,6,7,8});kairo::write_capture_png(root/"exact.png",*image);
 auto manager=cs::make_ref<kairo::FormManagerBase>();auto tables=cs::Array<cs::String>::make(1);tables.at(0)=cs::String(u"2:2");int count=0;auto callback=kairo::CaptureCompleted::from_static("own-capture",[&](cs::Array<cs::String>paths){assert(paths.length()==1&&std::filesystem::exists(std::filesystem::u8path(paths.at(0).utf8())));std::cout<<"CAPTURE_PNG="<<paths.at(0).utf8()<<'\n';++count;});
 kairo::queue_capture(manager,0,0,2,3,tables,callback,false);assert(manager->IsCapturing()&&manager->IsPause());kairo::finish_captures(image);assert(!manager->IsCapturing()&&!manager->IsPause()&&count==1);
 kairo::queue_capture(manager,0,0,2,3,tables,callback,false);kairo::queue_capture(manager,0,0,2,3,tables,callback,false);kairo::finish_captures(image);assert(!manager->IsPause()&&!manager->IsCapturing()&&count==3);
 manager->SetPause(true);auto unpause=kairo::CaptureCompleted::from_static("own-unpause",[&](cs::Array<cs::String>){manager->SetPause(false);});kairo::queue_capture(manager,0,0,2,3,tables,unpause,false);kairo::finish_captures(image);assert(!manager->IsPause()&&!manager->IsCapturing());
 tables.at(0)=cs::String(u"bad");manager->SetPause(true);kairo::queue_capture(manager,0,0,2,3,tables,{},true);kairo::finish_captures(image);assert(!manager->IsCapturing()&&manager->IsPause());std::cout<<"capture-pass\n";
}
