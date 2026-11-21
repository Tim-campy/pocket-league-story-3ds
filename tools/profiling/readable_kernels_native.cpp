// Readable-mode twin of hot_methods_native.cpp (item B, 2026-11-21): the same
// captured inputs of the five FP kernels, called through the readable game code
// (numeric types Int32/Single/FloatEval), results dumped for comparison with the
// ARM (Android) observations. Links the whole readable game; edits nothing.
#include "game_generated.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "asset_catalog.hpp"
#include "graphics.hpp"
#include <windows.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <filesystem>
#include <functional>
using namespace pls::cs;
namespace g = pls::game::game;
namespace m = pls::game::main;
using Vector3D = pls::generated::kairo::unity::m3d4::util3d::Vector3D;
struct Case {std::function<void()> reset,call;std::function<void(std::ostream&)> dump;};
static int integer(std::istream&r){int v;r.read(reinterpret_cast<char*>(&v),4);if(!r)throw std::runtime_error("capture truncated");return v;}
static float real(std::istream&r){float v;r.read(reinterpret_cast<char*>(&v),4);if(!r)throw std::runtime_error("capture truncated");return v;}
static Array<std::int32_t> ints(std::istream&r){int n=integer(r);if(n<0)return {};auto a=Array<std::int32_t>::make(n);for(int i=0;i<n;++i)a.at(i)=integer(r);return a;}
static Array<Single> floats(std::istream&r){int n=integer(r);if(n<0)return {};auto a=Array<Single>::make(n);for(int i=0;i<n;++i)a.at(i)=real(r);return a;}
static Array<Array<std::int32_t>> grid(std::istream&r){int n=integer(r);if(n<0)return {};auto a=Array<Array<std::int32_t>>::make(n);for(int i=0;i<n;++i)a.at(i)=ints(r);return a;}
static void put(std::ostream&w,int v){w.write(reinterpret_cast<const char*>(&v),4);}
static void put(std::ostream&w,std::uint8_t v){put(w,int(v));}
template<class T>static void put(std::ostream&w,const Array<T>&a){put(w,a.is_null()?-1:a.length());if(!a.is_null())for(int i=0;i<a.length();++i)put(w,a.at(i));}
template<class T>static Array<T> clone(const Array<T>&a){if(a.is_null())return {};auto b=Array<T>::make(a.length());for(int i=0;i<a.length();++i)b.at(i)=a.at(i);return b;}
static Array<Array<std::int32_t>> clone(const Array<Array<std::int32_t>>&a){auto b=Array<Array<std::int32_t>>::make(a.length());for(int i=0;i<a.length();++i)b.at(i)=clone(a.at(i));return b;}
template<class T>static void copy(const Array<T>&a,const Array<T>&b){for(int i=0;i<a.length();++i)b.at(i)=a.at(i);}
static void copy(const Array<Array<std::int32_t>>&a,const Array<Array<std::int32_t>>&b){for(int i=0;i<a.length();++i)if(!a.at(i).is_null())copy(a.at(i),b.at(i));}
static Case load(const std::filesystem::path&path,int kind){
    std::ifstream r(path,std::ios::binary);Case c;
    if(kind==0){
        auto screen=ints(r),initial=ints(r),output=clone(initial);int x=integer(r),y=integer(r),vy=integer(r),h=integer(r);float px=real(r),py=real(r);
        auto pos=make_ref<Vector3D>();
        c.reset=[=]{copy(initial,output);g::Camera::DRAW_CENTER_X()=x;g::Camera::DRAW_CENTER_Y()=y;g::Camera::DRAW_VIEW_Y()=vy;g::Camera::DRAW_VIEW_H()=h;g::Camera::pos()=pos;pos->x_=px;pos->y_=py;};
        c.call=[=]{g::Camera::ConvertScreenToCameraIntArray(screen,output);};c.dump=[=](std::ostream&w){put(w,output);};
    }else if(kind==1||kind==2){
        auto initial=grid(r),data=clone(initial);int cx=integer(r),cy=integer(r);bool div=false;Array<Single> mul;if(kind==1)mul=floats(r);else div=integer(r)!=0;
        auto offsets=grid(r);auto weights=kind==2?floats(r):Array<Single>{};int width=integer(r),height=integer(r);auto team=make_ref<g::Team>();auto result=std::make_shared<int>(0);
        if(kind==2)team->CEVA_PASSER_MP2=weights;
        c.reset=[=]{copy(initial,data);g::Team::PANEL_DIRECT_R_9BLOCK()=offsets;g::Map::MAPCHIP_COAT_WNUM()=width;g::Map::MAPCHIP_COAT_HNUM()=height;};
        if(kind==1){c.call=[=]{team->Cal_evaCoatMulti9block(data,cx,cy,mul);};c.dump=[=](std::ostream&w){put(w,data);};}
        else{c.call=[=]{*result=team->GetSum(data,cx,cy,div);};c.dump=[=](std::ostream&w){put(w,*result);};}
    }else if(kind==3){
        std::array<float,8>a;for(auto&v:a)v=real(r);bool mode=integer(r)!=0;auto result=std::make_shared<bool>(false);
        c.reset=[]{};c.call=[=]{*result=g::GameUtil::ChRectHitRectFloat(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],mode);};c.dump=[=](std::ostream&w){put(w,*result?1:0);};
    }else{
        std::array<int,10>a;for(auto&v:a)v=integer(r);int index=integer(r);auto pool0=grid(r);auto counts=ints(r);auto sort0=grid(r);int start=integer(r),last=integer(r);
        auto app=make_ref<m::AppData>();auto pool=clone(pool0),sort=clone(sort0);auto count=Array<std::uint8_t>::make(counts.length());
        app->gameObjectPool_=pool;app->zsortObjects_=sort;app->zsortObjectCount_=count;
        c.reset=[=]{copy(pool0,pool);copy(sort0,sort);for(int i=0;i<counts.length();++i)count.at(i)=static_cast<std::uint8_t>(counts.at(i));app->gameObjectPoolIndex_=index;app->zsortObjectStart_=start;app->zsortObjectLast_=last;};
        c.call=[=]{app->InsertGameObject(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]!=0,a[9]);};
        c.dump=[=](std::ostream&w){put(w,app->gameObjectPoolIndex_);put(w,pool);put(w,count);put(w,sort);put(w,app->zsortObjectStart_);put(w,app->zsortObjectLast_);};
    }
    if(r.peek()!=std::char_traits<char>::eof())throw std::runtime_error("Capture trailing bytes");return c;
}
int main(int argc,char**argv){try{
    if(argc!=4)return 2;GcMutatorScope mutator;pls::assets::Catalog assets(std::filesystem::u8path(argv[3]));pls::kairo::install_asset_catalog(&assets);std::filesystem::create_directories(argv[2]);
    for(int kind=0;kind<5;++kind){
        int count=0;while(std::filesystem::exists(std::filesystem::path(argv[1])/(std::to_string(kind)+"-"+std::to_string(count)+".bin")))++count;if(!count)throw std::runtime_error("Missing captured cases");
        std::vector<Case>cases;for(int i=0;i<count;++i)cases.push_back(load(std::filesystem::path(argv[1])/(std::to_string(kind)+"-"+std::to_string(i)+".bin"),kind));
        for(int i=0;i<count;++i){cases[i].reset();cases[i].call();std::ofstream w(std::filesystem::path(argv[2])/(std::to_string(kind)+"-"+std::to_string(i)+".bin"),std::ios::binary);cases[i].dump(w);}
        std::cout<<"observations kind="<<kind<<" count="<<count<<'\n';
    }
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
