#include "semantic_runtime.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace pls::cs;
template<class F>std::string error(F action){try{action();return "none";}catch(const Exception&e){return e.type_name();}}
static std::string bytes(const Array<std::uint8_t>&data){std::ostringstream stream;stream<<std::uppercase<<std::hex<<std::setfill('0');for(std::int32_t i=0;i<data.length();++i){if(i)stream<<',';stream<<std::setw(2)<<static_cast<unsigned>(data.at(i));}return stream.str();}
static std::string units(const String&data){std::ostringstream stream;stream<<std::uppercase<<std::hex<<std::setfill('0');for(std::int32_t i=0;i<data.length();++i){if(i)stream<<',';stream<<std::setw(4)<<static_cast<unsigned>(data.at(i));}return stream.str();}
int main(int argc,char**argv){
    if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    String strings[]={String(u""),String(u"A\0Z",3),String(std::u16string{char16_t(0xD83D),char16_t(0xDE00)}),String(std::u16string{char16_t(0xD800)}),String(std::u16string{char16_t(0xDC00)}),
        String(std::u16string{char16_t(0xD800),char16_t(0xD800)}),String(std::u16string{char16_t(0xD800),u'A'}),String(std::u16string{char16_t(0xDC00),char16_t(0xD800)}),
        String(std::u16string{char16_t(0xD83D),char16_t(0xDE00),char16_t(0xD800)}),String(std::u16string{char16_t(0xFFFF)})};
    for(std::size_t i=0;i<sizeof(strings)/sizeof(strings[0]);++i)std::cout<<"encode-"<<i<<'='<<bytes(encoding_utf8_get_bytes(strings[i]))<<'\n';
    using B=Array<std::uint8_t>;
    B arrays[]={B::from({}),B::from({65,0,90}),B::from({0xC2,0xA9}),B::from({0xE2,0x82,0xAC}),B::from({0xF0,0x9F,0x98,0x80}),
        B::from({0xC0,0x80}),B::from({0xE0,0x80,0x80}),B::from({0xF0,0x80,0x80,0x80}),B::from({0x80,0xBF}),B::from({0xF5}),
        B::from({0xC2}),B::from({0xE2,0x82}),B::from({0xF0,0x9F,0x98}),B::from({0xE2,0x28,0xA1}),B::from({0xED,0xA0,0x80}),
        B::from({0xF4,0x90,0x80,0x80}),B::from({0xEF,0xBB,0xBF}),B::from({0xE2,0x82,0x41}),B::from({0xF0,0x90,0x80,0x41})};
    for(std::size_t i=0;i<sizeof(arrays)/sizeof(arrays[0]);++i)std::cout<<"decode-"<<i<<'='<<units(encoding_utf8_get_string(arrays[i]))<<'\n';
    std::cout<<"encode-null="<<error([]{encoding_utf8_get_bytes(String());})<<'\n';
    std::cout<<"decode-null="<<error([]{encoding_utf8_get_string(B());})<<'\n';
    auto slice=B::from({65,0xE2,0x82,0xAC,90});std::cout<<"slice-valid="<<units(encoding_utf8_get_string(slice,1,3))<<'\n';
    std::cout<<"slice-middle="<<units(encoding_utf8_get_string(slice,2,2))<<'\n';
    std::cout<<"slice-negative="<<error([&]{encoding_utf8_get_string(slice,-1,0);})<<'\n';
    std::cout<<"slice-outside="<<error([&]{encoding_utf8_get_string(slice,99,0);})<<'\n';
    std::cout<<"slice-overflow="<<error([&]{encoding_utf8_get_string(slice,1,std::numeric_limits<std::int32_t>::max());})<<'\n';
}
