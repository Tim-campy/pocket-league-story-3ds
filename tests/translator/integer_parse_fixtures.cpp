#include "semantic_runtime.hpp"
#include <iostream>
using namespace pls::cs;
template<class F>std::string trace(F action){try{return std::to_string(action());}catch(const Exception&e){return e.type_name();}}
int main(int argc,char**argv){
    if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    String text[]={String(),String(u""),String(u" "),String(u"0"),String(u"-0"),String(u"+42"),String(u"-42"),String(u" \t\r\n42\v\f "),String(u"2147483647"),String(u"-2147483648"),String(u"2147483648"),String(u"-2147483649"),String(u"9223372036854775807"),String(u"-9223372036854775808"),String(u"9223372036854775808"),String(u"-9223372036854775809"),String(u"9999999999999999999999999999x"),String(u"00000000000000000000000000000000000000000001"),String(u"1,234"),String(u"1.0"),String(u"1e2"),String(u"1 2"),String(u"+ 1"),String(u"--1"),String(u"42\0",3),String(u"42\0\0",4),String(u"42\0 ",4),String(u"42\u00A0"),String(u"\u00A042"),String(u"\u008542"),String(u"\u200342"),String(u"\u0661"),String(u"\uFF11"),String(u"42-"),String(u"0x10")};
    std::vector<String>texts(std::begin(text),std::end(text));for(const auto&extra:{String(u"42\0x",4),String(u"42 \0",4),String(u"2147483640x"),String(u"9223372036854775800x"),String(u"\0",1),String(u"+\0",2),String(u"42 4")})texts.push_back(extra);
    for(std::size_t i=0;i<texts.size();++i){std::cout<<"parse32-"<<i<<'='<<trace([&]{return int32_parse(texts[i]);})<<'\n';std::cout<<"parse64-"<<i<<'='<<trace([&]{return int64_parse(texts[i]);})<<'\n';}
    String hex[]={String(),String(u""),String(u"0"),String(u"7fffffff"),String(u"80000000"),String(u"ffffffff"),String(u"100000000"),String(u"7fffffffffffffff"),String(u"8000000000000000"),String(u"ffffffffffffffff"),String(u"10000000000000000"),String(u" ff"),String(u"ff "),String(u"+ff"),String(u"-ff"),String(u"0xff"),String(u"FF\0",3),String(u"FF\0\0",4),String(u"00000000000000000000000000000000FF"),String(u"9999999999999999999999999999x")};
    for(std::size_t i=0;i<sizeof(hex)/sizeof(hex[0]);++i){std::cout<<"hex32-"<<i<<'='<<trace([&]{return int32_parse(hex[i],true);})<<'\n';std::cout<<"hex64-"<<i<<'='<<trace([&]{return int64_parse(hex[i],true);})<<'\n';}
    const char16_t whites[]={0x09,0x0A,0x0B,0x0C,0x0D,0x1C,0x20,0x85,0xA0,0x1680,0x180E,0x2000,0x2001,0x2002,0x2003,0x2004,0x2005,0x2006,0x2007,0x2008,0x2009,0x200A,0x200B,0x2028,0x2029,0x202F,0x205F,0x2060,0x3000,0xFEFF};
    for(std::size_t i=0;i<sizeof(whites)/sizeof(whites[0]);++i)std::cout<<"space-"<<i<<'='<<trace([&]{return int32_parse(String(std::u16string{whites[i],u'4',u'2'}));})<<'\n';
    integer_number_format.positive_sign=String(u"up");integer_number_format.negative_sign=String(u"dn");
    std::cout<<"custom-positive="<<trace([]{return int32_parse(String(u"up42"));})<<'\n';std::cout<<"custom-negative="<<trace([]{return int32_parse(String(u"dn42"));})<<'\n';std::cout<<"custom-old-sign="<<trace([]{return int32_parse(String(u"-42"));})<<'\n';
}
