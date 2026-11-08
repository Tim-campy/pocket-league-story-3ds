#include "semantic_runtime.hpp"
#include <iostream>
using namespace pls::cs;
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    const double numbers[]={0.0,-0.0,1.9,-1.9,std::numeric_limits<double>::quiet_NaN(),std::numeric_limits<double>::infinity(),-std::numeric_limits<double>::infinity(),2147483647.0,2147483648.0,-2147483648.0,-2147483649.0,4294967295.0,1e100,-1e100,9223372036854775808.0,-9223372036854775808.0,bit_copy<double>(std::uint64_t(0x43DFFFFFFFFFFFFF)),bit_copy<double>(std::uint64_t(0xC3E0000000000001)),std::numeric_limits<double>::denorm_min(),-std::numeric_limits<double>::denorm_min(),2147483647.999,-2147483648.999};
    for(std::size_t i=0;i<sizeof(numbers)/sizeof(numbers[0]);++i){std::cout<<"double-i32-"<<i<<'='<<conv_i32(numbers[i])<<'\n';std::cout<<"double-i64-"<<i<<'='<<conv_i64(numbers[i])<<'\n';}
    const float singles[]={0.0f,-0.0f,1.9f,-1.9f,std::numeric_limits<float>::quiet_NaN(),std::numeric_limits<float>::infinity(),-std::numeric_limits<float>::infinity(),2147483520.0f,2147483648.0f,-2147483648.0f,-2147483904.0f,4294967296.0f,1e30f,-1e30f,9223372036854775808.0f,-9223372036854775808.0f,std::numeric_limits<float>::denorm_min(),-std::numeric_limits<float>::denorm_min()};
    for(std::size_t i=0;i<sizeof(singles)/sizeof(singles[0]);++i){std::cout<<"float-i32-"<<i<<'='<<conv_i32(singles[i])<<'\n';std::cout<<"float-i64-"<<i<<'='<<conv_i64(singles[i])<<'\n';}
}
