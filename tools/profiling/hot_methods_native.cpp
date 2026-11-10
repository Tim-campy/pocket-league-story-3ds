// Links the existing Release game objects; never substitutes the hot bodies.
#include "game_generated_type_ca6f5bbc06a496a9.hpp"
#include "game_generated_type_403f4e6631bd3667.hpp"
#include "game_generated_type_2ffa6f51468590ea.hpp"
#include "game_generated.hpp"
#include "portable_generated_type_3c64e1d398f2e00f.hpp"
#include "asset_catalog.hpp"
#include "graphics.hpp"
#include <windows.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <filesystem>
using namespace pls::game;
using namespace pls::cs;
struct Case {std::function<void()> reset,call;std::function<void(std::ostream&)> dump;};
static int integer(std::istream&r){int v;r.read(reinterpret_cast<char*>(&v),4);if(!r)throw std::runtime_error("capture truncated");return v;}
static float real(std::istream&r){float v;r.read(reinterpret_cast<char*>(&v),4);if(!r)throw std::runtime_error("capture truncated");return v;}
static Array<int> ints(std::istream&r){int n=integer(r);if(n<0)return {};auto a=Array<int>::make(n);for(int i=0;i<n;++i)a.at(i)=integer(r);return a;}
static Array<float> floats(std::istream&r){int n=integer(r);if(n<0)return {};auto a=Array<float>::make(n);for(int i=0;i<n;++i)a.at(i)=real(r);return a;}
static Array<Array<int>> grid(std::istream&r){int n=integer(r);if(n<0)return {};auto a=Array<Array<int>>::make(n);for(int i=0;i<n;++i)a.at(i)=ints(r);return a;}
static void put(std::ostream&w,int v){w.write(reinterpret_cast<const char*>(&v),4);}
template<class T>static void put(std::ostream&w,const Array<T>&a){put(w,a.is_null()?-1:a.length());if(!a.is_null())for(int i=0;i<a.length();++i)put(w,a.at(i));}
template<class T>static Array<T> clone(const Array<T>&a){if(a.is_null())return {};auto b=Array<T>::make(a.length());for(int i=0;i<a.length();++i)b.at(i)=a.at(i);return b;}
static Array<Array<int>> clone(const Array<Array<int>>&a){auto b=Array<Array<int>>::make(a.length());for(int i=0;i<a.length();++i)b.at(i)=clone(a.at(i));return b;}
template<class T>static void copy(const Array<T>&a,const Array<T>&b){for(int i=0;i<a.length();++i)b.at(i)=a.at(i);}
static void copy(const Array<Array<int>>&a,const Array<Array<int>>&b){for(int i=0;i<a.length();++i)if(!a.at(i).is_null())copy(a.at(i),b.at(i));}
static Case load(const std::filesystem::path&path,int kind){
    std::ifstream r(path,std::ios::binary);Case c;
    if(kind==0){
        auto screen=ints(r),initial=ints(r),output=clone(initial);int x=integer(r),y=integer(r),vy=integer(r),h=integer(r);float px=real(r),py=real(r);
        auto pos=make_ref<pls::generated::cs_3c64e1d398f2e00f>();
        c.reset=[=]{copy(initial,output);cs_9bf7f8f14a7b18c8()=x;cs_0b895d788cf303f2()=y;cs_56196b1ca040e8ab()=vy;cs_011e7ba02b8a8647()=h;cs_026b8db91320700d()=pos;pos->cs_5940b7db44d7fcc3=px;pos->cs_3f971496b3e90e07=py;};
        c.call=[=]{cs_ce67d59af0bdb552(screen,output);};c.dump=[=](std::ostream&w){put(w,output);};
    }else if(kind==1||kind==2){
        auto initial=grid(r),data=clone(initial);int cx=integer(r),cy=integer(r);bool div=false;Array<float> mul;if(kind==1)mul=floats(r);else div=integer(r)!=0;
        auto offsets=grid(r);auto weights=kind==2?floats(r):Array<float>{};int width=integer(r),height=integer(r);auto team=make_ref<cs_403f4e6631bd3667>();auto result=std::make_shared<int>(0);
        if(kind==2)team->cs_86f9bdd77df832c7=weights;
        c.reset=[=]{copy(initial,data);cs_ad318f24aaa1750d()=offsets;cs_4f935210abbc9091()=width;cs_3618bfacb06c987c()=height;};
        if(kind==1){c.call=[=]{cs_440a39169e42578b(team,data,cx,cy,mul);};c.dump=[=](std::ostream&w){put(w,data);};}
        else{c.call=[=]{*result=cs_885d2f23113de984(team,data,cx,cy,div);};c.dump=[=](std::ostream&w){put(w,*result);};}
    }else if(kind==3){
        std::array<float,8>a;for(auto&v:a)v=real(r);bool mode=integer(r)!=0;auto result=std::make_shared<bool>(false);
        c.reset=[]{};c.call=[=]{*result=cs_75873ce2f7c043dd(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],mode);};c.dump=[=](std::ostream&w){put(w,*result?1:0);};
    }else{
        std::array<int,10>a;for(auto&v:a)v=integer(r);int index=integer(r);auto pool0=grid(r);auto counts=ints(r);auto sort0=grid(r);int start=integer(r),last=integer(r);
        auto app=make_ref<cs_2ffa6f51468590ea>();auto pool=clone(pool0),sort=clone(sort0);auto count=Array<std::uint8_t>::make(counts.length());
        app->cs_64448a7513b68aab=pool;app->cs_a983c6db567ab7de=sort;app->cs_797d22d4c2c75df4=count;
        c.reset=[=]{copy(pool0,pool);copy(sort0,sort);for(int i=0;i<counts.length();++i)count.at(i)=static_cast<std::uint8_t>(counts.at(i));app->cs_dcc4c8afca6eace7=index;app->cs_6de10b92fdc859b0=start;app->cs_3d3b5753ef643c4e=last;};
        c.call=[=]{cs_e2cc7be9866cb657(app,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]!=0,a[9]);};
        c.dump=[=](std::ostream&w){put(w,app->cs_dcc4c8afca6eace7);put(w,pool);put(w,count);put(w,sort);put(w,app->cs_6de10b92fdc859b0);put(w,app->cs_3d3b5753ef643c4e);};
    }
    if(r.peek()!=std::char_traits<char>::eof())throw std::runtime_error("Capture trailing bytes");return c;
}
static long long tick(){LARGE_INTEGER t;QueryPerformanceCounter(&t);return t.QuadPart;}
int main(int argc,char**argv){try{
    if(argc!=4)return 2;GcMutatorScope mutator;pls::assets::Catalog assets(std::filesystem::u8path(argv[3]));pls::kairo::install_asset_catalog(&assets);std::filesystem::create_directories(argv[2]);LARGE_INTEGER freq;QueryPerformanceFrequency(&freq);std::cout<<std::setprecision(17)<<"frequency="<<freq.QuadPart<<'\n';
    std::function<void()>empty=[]{};long long overhead=0;for(int i=0;i<1250;++i){auto t=tick();for(int j=0;j<16;++j)empty();overhead+=tick()-t;}std::cout<<"empty_ns="<<overhead*1e9/freq.QuadPart/20000<<'\n';
    for(int kind=0;kind<5;++kind){
        std::vector<Case>cases;for(int i=0;i<16;++i)cases.push_back(load(std::filesystem::path(argv[1])/(std::to_string(kind)+"-"+std::to_string(i)+".bin"),kind));
        for(int k=0;k<10;++k)for(auto&c:cases){c.reset();c.call();}
        for(int i=0;i<16;++i){cases[i].reset();cases[i].call();std::ofstream w(std::filesystem::path(argv[2])/(std::to_string(kind)+"-"+std::to_string(i)+".bin"),std::ios::binary);cases[i].dump(w);}
        for(int batch=0;batch<5;++batch){long long total=0;for(int k=0;k<1000;++k){for(auto&c:cases)c.reset();auto t=tick();for(auto&c:cases)c.call();total+=tick()-t;}std::cout<<"method="<<kind<<" batch="<<batch<<" calls=16000 gross_ns="<<total*1e9/freq.QuadPart/16000<<'\n';}
    }
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
