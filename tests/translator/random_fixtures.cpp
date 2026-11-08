#include "managed_random.hpp"
#include <iostream>
#include <sstream>
using namespace pls::cs;using I=std::int32_t;
template<class F>std::string run(F action){try{return action();}catch(const Exception&e){return e.type_name();}}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    const I seeds[]={0,1,-1,42,-42,161803398,std::numeric_limits<I>::max(),std::numeric_limits<I>::min(),std::numeric_limits<I>::min()+1,1234567890};
    for(std::size_t i=0;i<sizeof(seeds)/sizeof(seeds[0]);++i)std::cout<<"sequence-"<<i<<'='<<run([&]{Random r(seeds[i]);std::ostringstream s;for(int j=0;j<24;++j){if(j)s<<',';s<<r.Next();}return s.str();})<<'\n';
    for(std::size_t i=0;i<sizeof(seeds)/sizeof(seeds[0]);++i)std::cout<<"double-"<<i<<'='<<run([&]{Random r(seeds[i]);std::ostringstream s;for(int j=0;j<8;++j){if(j)s<<',';s<<bit_copy<std::int64_t>(r.NextDouble());}return s.str();})<<'\n';
    const I bounds[][2]={{0,0},{0,1},{-1,0},{-10,10},{std::numeric_limits<I>::min(),std::numeric_limits<I>::max()},{std::numeric_limits<I>::min(),0},{0,std::numeric_limits<I>::max()},{2,1}};
    for(std::size_t i=0;i<sizeof(bounds)/sizeof(bounds[0]);++i)std::cout<<"range-"<<i<<'='<<run([&]{Random r(42);std::ostringstream s;for(int j=0;j<8;++j){if(j)s<<',';s<<r.Next(bounds[i][0],bounds[i][1]);}s<<';'<<r.Next();return s.str();})<<'\n';
    std::cout<<"next-zero="<<run([]{Random r(42);auto a=r.Next(0);return std::to_string(a)+","+std::to_string(r.Next());})<<'\n';
    std::cout<<"next-negative="<<run([]{return std::to_string(Random(42).Next(-1));})<<'\n';
    std::cout<<"bytes="<<run([]{Random r(42);auto b=Array<std::uint8_t>::make(32);r.NextBytes(b);return convert_to_base64_string(b).utf8()+";"+std::to_string(r.Next());})<<'\n';
    std::cout<<"bytes-empty="<<run([]{Random r(42);r.NextBytes(Array<std::uint8_t>::make(0));return std::to_string(r.Next());})<<'\n';
    std::cout<<"bytes-null="<<run([]{Random(42).NextBytes(Array<std::uint8_t>());return std::string("none");})<<'\n';
    std::cout<<"mixed="<<run([]{Random r(42);const auto a=r.Next(),b=r.Next(10),c=r.Next(-8,17);const auto d=bit_copy<std::int64_t>(r.NextDouble());const auto e=r.Next();return std::to_string(a)+","+std::to_string(b)+","+std::to_string(c)+","+std::to_string(d)+","+std::to_string(e);})<<'\n';
}
