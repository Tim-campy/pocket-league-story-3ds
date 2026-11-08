#include "semantic_runtime.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace pls::cs;
template<class F>std::string error(F action){try{return action();}catch(const Exception&e){return e.type_name();}}
static std::string bytes(const Array<std::uint8_t>&data){std::ostringstream stream;stream<<std::uppercase<<std::hex<<std::setfill('0');for(std::int32_t i=0;i<data.length();++i){if(i)stream<<',';stream<<std::setw(2)<<static_cast<unsigned>(data.at(i));}return stream.str();}
int main(int argc,char**argv){
    if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    using B=Array<std::uint8_t>;B arrays[]={B::from({}),B::from({0}),B::from({0,1}),B::from({0,1,2}),B::from({0,1,2,3}),B::from({255,254,253,252,251})};
    for(std::size_t i=0;i<sizeof(arrays)/sizeof(arrays[0]);++i)std::cout<<"base64-encode-"<<i<<'='<<convert_to_base64_string(arrays[i]).utf8()<<'\n';
    String strings[]={String(u""),String(u"AA=="),String(u"AAE="),String(u"AAEC"),String(u"AAECAw=="),String(u"//79/Ps="),String(u" A A E C \t\r\n"),String(u"AA== "),String(u"AA= ="),String(u"AB=="),String(u"AAF="),String(u"A"),String(u"AA"),String(u"AAA"),String(u"===="),String(u"A==="),String(u"=AAA"),String(u"AA=A"),String(u"AA==AA=="),String(u"AAEC="),String(u"AAEC!!!!"),String(u"AAEC\0",5),String(u"AAEC\v"),String(u"AAEC\f"),String(u"AAEC\u0085"),String(u"AAEC\u00A0"),String(u"AAEC\u2003"),String(u"AAEC\uFEFF"),String(u"\t\n\r "),String(u"AAEC\u2028")};
    for(std::size_t i=0;i<sizeof(strings)/sizeof(strings[0]);++i)std::cout<<"base64-decode-"<<i<<'='<<error([&]{return bytes(convert_from_base64_string(strings[i]));})<<'\n';
    std::cout<<"base64-encode-null="<<error([]{return convert_to_base64_string(B()).utf8();})<<'\n';
    std::cout<<"base64-decode-null="<<error([]{return bytes(convert_from_base64_string(String()));})<<'\n';
}
