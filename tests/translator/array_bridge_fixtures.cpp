#include "semantic_runtime.hpp"
#include <iostream>
#include <sstream>
using namespace pls::cs;using I=std::int32_t;
struct bool_names:std::numpunct<char>{std::string do_truename()const override{return "True";}std::string do_falsename()const override{return "False";}};
template<class F>std::string error(F action){try{action();return "none";}catch(const Exception&e){return e.type_name();}}
static void copy(const Ref<Object>&a,I ai,const Ref<Object>&b,I bi,I n){auto source=array_cast(a);auto target=array_cast(b);array_copy(source,ai,target,bi,n);}
static std::string join(const Array<I>&a){std::ostringstream s;for(I i=0;i<a.length();++i){if(i)s<<',';s<<a.at(i);}return s.str();}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;std::cout.imbue(std::locale(std::cout.getloc(),new bool_names));std::cout<<std::boolalpha;
    auto a=Array<I>::from({1,2,3,4,5});copy(a.as_object(),0,a.as_object(),1,4);std::cout<<"overlap-right="<<join(a)<<'\n';copy(a.as_object(),1,a.as_object(),0,4);std::cout<<"overlap-left="<<join(a)<<'\n';
    auto refs=Array<Ref<Object>>::from({make_ref<Object>(),nullptr,box(String(u"x"))});auto target=Array<Ref<Object>>::make(3);copy(refs.as_object(),0,target.as_object(),0,3);std::cout<<"reference-identity="<<(refs.at(0)==target.at(0))<<','<<(!target.at(1))<<','<<unbox<String>(target.at(2)).utf8()<<'\n';
    std::cout<<"null-source="<<error([&]{copy(nullptr,0,a.as_object(),0,0);})<<'\n';std::cout<<"null-dest="<<error([&]{copy(a.as_object(),0,nullptr,0,0);})<<'\n';
    std::cout<<"wrong-source="<<error([]{copy(make_ref<Object>(),0,nullptr,0,0);})<<'\n';std::cout<<"wrong-dest="<<error([]{copy(nullptr,0,make_ref<Object>(),0,0);})<<'\n';
    I arguments[][3]={{-1,0,0},{0,-1,0},{0,0,-1},{5,5,0},{6,0,0},{0,6,0},{0,0,6},{std::numeric_limits<I>::max(),0,std::numeric_limits<I>::max()}};
    for(std::size_t i=0;i<sizeof(arguments)/sizeof(arguments[0]);++i)std::cout<<"bounds-"<<i<<'='<<error([&]{copy(a.as_object(),arguments[i][0],a.as_object(),arguments[i][1],arguments[i][2]);})<<'\n';
    auto strings=Array<String>::from({String(u"a"),String(),String(u"b")});auto strings2=Array<String>::make(3);copy(strings.as_object(),0,strings2.as_object(),0,3);std::cout<<"strings="<<strings2.at(0).utf8()<<','<<strings2.at(1).is_null()<<','<<strings2.at(2).utf8()<<'\n';
    auto doubles=Array<double>::from({std::numeric_limits<double>::quiet_NaN(),-std::numeric_limits<double>::infinity(),-0.0});auto doubles2=Array<double>::make(3);copy(doubles.as_object(),0,doubles2.as_object(),0,3);std::cout<<"double-bits="<<std::isnan(doubles2.at(0))<<','<<(std::isinf(doubles2.at(1))&&doubles2.at(1)<0)<<','<<bit_copy<std::int64_t>(doubles2.at(2))<<'\n';
    auto inner=Array<I>::from({9});auto jagged=Array<Array<I>>::from({inner}),jagged2=Array<Array<I>>::make(1);copy(jagged.as_object(),0,jagged2.as_object(),0,1);jagged2.at(0).at(0)=7;std::cout<<"jagged-alias="<<inner.at(0)<<'\n';
    std::cout<<"float-int="<<error([]{copy(Array<float>::from({1.25f}).as_object(),0,Array<I>::make(1).as_object(),0,1);})<<'\n';
    std::cout<<"float-int-empty="<<error([]{copy(Array<float>::make(0).as_object(),0,Array<I>::make(0).as_object(),0,0);})<<'\n';
    std::cout<<"float-int-bounds="<<error([]{copy(Array<float>::make(0).as_object(),0,Array<I>::make(0).as_object(),0,1);})<<'\n';
}
