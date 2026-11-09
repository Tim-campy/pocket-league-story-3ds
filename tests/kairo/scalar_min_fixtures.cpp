#include "managed_math.hpp"
#include <iomanip>
#include <iostream>
int main(int argc,char**argv){
    if(argc!=2)return 2;
    pls::cs::runtime_profile=std::string(argv[1])=="dotnet"?pls::cs::RuntimeProfile::DotNet:pls::cs::RuntimeProfile::UnityMono265;
    const std::uint32_t bits[]={0U,0x80000000U,0x3f800000U,0xbf800000U,0x7f800000U,0xff800000U,0x7fc01234U,0xffc05678U,1U,0x80000001U};
    for(auto a:bits)for(auto b:bits){auto value=pls::cs::math_min_single(pls::cs::bit_copy<float>(a),pls::cs::bit_copy<float>(b));std::cout<<std::hex<<std::uppercase<<std::setfill('0')<<std::setw(8)<<pls::cs::bit_copy<std::uint32_t>(value)<<'\n';}
}
