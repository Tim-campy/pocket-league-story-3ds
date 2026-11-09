#include "capture.hpp"
#include <fstream>
#include <filesystem>
#include <sstream>
#include "diagnostic_output.hpp"
namespace pls::kairo {
namespace {
std::filesystem::path root;
std::uint64_t serial=0;
struct Job:cs::Object {
 cs::Ref<FormManagerBase> manager;int x,y,w,h;bool pause,tmp;cs::Array<cs::String> tables;CaptureCompleted completed;
 void trace_edges(const cs::EdgeVisitor&v)const override{cs::trace_value(manager,v);cs::trace_value(tables,v);completed.trace_edges(v);}
 void release_edges()override{manager.reset();cs::release_value(tables);completed.release_edges();}
};
std::vector<cs::Ref<Job>> jobs;
void be(std::vector<std::uint8_t>&v,std::uint32_t n){for(int i=24;i>=0;i-=8)v.push_back(std::uint8_t(n>>i));}
void chunk(std::vector<std::uint8_t>&out,const char*name,const std::vector<std::uint8_t>&data){be(out,std::uint32_t(data.size()));auto start=out.size();out.insert(out.end(),name,name+4);out.insert(out.end(),data.begin(),data.end());std::uint32_t crc=~0u;for(auto i=start;i<out.size();++i){crc^=out[i];for(int b=0;b<8;++b)crc=(crc>>1)^((crc&1)?0xedb88320u:0);}be(out,~crc);}
}
void write_capture_png(const std::filesystem::path&path,const Image&image){
 const auto w=image.GetWidth(),h=image.GetHeight();const auto&rgba=image.pixels();std::vector<std::uint8_t> scan;scan.reserve(rgba.size()+h);
 for(int y=0;y<h;++y){scan.push_back(0);scan.insert(scan.end(),rgba.begin()+std::size_t(y)*w*4,rgba.begin()+std::size_t(y+1)*w*4);}
 std::vector<std::uint8_t> z{0x78,0x01};std::uint32_t a=1,b=0;for(auto c:scan){a=(a+c)%65521;b=(b+a)%65521;}
 for(std::size_t p=0;p<scan.size();){auto n=std::min<std::size_t>(65535,scan.size()-p);z.push_back(p+n==scan.size()?1:0);z.push_back(std::uint8_t(n));z.push_back(std::uint8_t(n>>8));auto inverse=std::uint16_t(~n);z.push_back(std::uint8_t(inverse));z.push_back(std::uint8_t(inverse>>8));z.insert(z.end(),scan.begin()+p,scan.begin()+p+n);p+=n;}be(z,(b<<16)|a);
 std::vector<std::uint8_t> png{137,80,78,71,13,10,26,10},ihdr;be(ihdr,w);be(ihdr,h);ihdr.insert(ihdr.end(),{8,6,0,0,0});chunk(png,"IHDR",ihdr);chunk(png,"IDAT",z);chunk(png,"IEND",{});
 std::ofstream file(path,std::ios::binary);file.write(reinterpret_cast<const char*>(png.data()),png.size());if(!file)throw cs::IOException("Capture file could not be written");
}
void configure_capture(const std::filesystem::path&path){if(path.empty())throw cs::ArgumentException("Capture output directory is required");root=std::filesystem::absolute(path);std::filesystem::create_directories(root);}
void queue_capture(cs::Ref<FormManagerBase> manager,int x,int y,int w,int h,cs::Array<cs::String>tables,CaptureCompleted completed,bool tmp){
 cs::nonnull(manager);if(root.empty())throw cs::InvalidOperationException("Capture backend was not configured");if(w<=0||h<=1)throw cs::ArgumentException("Capture surface extent is invalid");
 auto job=cs::make_ref<Job>();job->manager=manager;job->x=x;job->y=y;job->w=w;job->h=h;job->tables=tables;job->completed=std::move(completed);job->pause=manager->IsPause();job->tmp=tmp;
 jobs.push_back(job);manager->capturing_=true;manager->SetPause(true);
}
void finish_captures(cs::Ref<Image>display){
 auto pending=std::move(jobs);jobs.clear();for(auto&job:pending){
 try{cs::run_finally([&]{auto files=cs::List<cs::String>::make();auto tables=job->tables;
   for(int i=0;i<tables.length();++i){auto text=tables.at(i).utf8();const auto comma=text.find(',');auto dims=text.substr(0,comma);int w=job->w,h=job->h-1;
    if(!dims.empty()){const auto colon=dims.find(':');if(colon==std::string::npos)throw cs::FormatException();try{std::size_t n=0;w=std::stoi(dims.substr(0,colon),&n);if(n!=colon)throw cs::FormatException();auto rest=dims.substr(colon+1);h=std::stoi(rest,&n);if(n!=rest.size())throw cs::FormatException();}catch(const std::invalid_argument&){throw cs::FormatException();}catch(const std::out_of_range&){throw cs::OverflowException();}}
    if(w<=0||h<=0||w>8192||h>8192)throw cs::ArgumentOutOfRangeException();std::vector<std::uint8_t> pixels(std::size_t(w)*h*4);const auto&source=display->pixels();
    for(int yy=0;yy<h;++yy)for(int xx=0;xx<w;++xx){const auto sx=std::clamp(job->x+int((double(xx)+.5)*job->w/w),0,display->GetWidth()-1),sy=std::clamp(job->y+int((double(yy)+.5)*(job->h-1)/h),0,display->GetHeight()-1);const auto from=(std::size_t(sy)*display->GetWidth()+sx)*4,to=(std::size_t(yy)*w+xx)*4;std::copy_n(source.data()+from,4,pixels.data()+to);}
    auto image=Image::FromRgba(w,h,std::move(pixels));
    auto folder=root/(job->tmp?"temporary":"saved");std::filesystem::create_directories(folder);std::filesystem::path path;
    do{path=folder/("capture-"+std::to_string(++serial)+".png");}while(std::filesystem::exists(path));write_capture_png(path,*image);files.Add(cs::String::from_utf8(path.u8string()));
   }
   if(job->completed)job->completed(files.ToArray());
 },[&]{if(!job->pause)job->manager->SetPause(false);job->manager->capturing_=false;});}
 catch(const cs::Exception&error){std::lock_guard<std::mutex>lock(debug_log_mutex);std::fprintf(stderr,"PLS_CAPTURE_ERROR=%s\n",error.what());}
 catch(const std::exception&error){std::lock_guard<std::mutex>lock(debug_log_mutex);std::fprintf(stderr,"PLS_CAPTURE_ERROR=%s\n",error.what());}}
}
}
