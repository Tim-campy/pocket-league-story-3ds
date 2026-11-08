#include "managed_collation.hpp"
#include <iostream>
#include <string>

using namespace pls::cs;
namespace {
void row(const std::string& id,bool value){std::cout<<id<<'\t'<<(value?"True":"False")<<'\n';}
void row(const std::string& id,std::int32_t value){std::cout<<id<<'\t'<<value<<'\n';}
}
int main(){
    install_mono_collation_character_data();
    const CollationCulture cultures[]={{127,{},"",false},{1033,{9},"en",false},{1055,{31},"tr",true}};
    const String sources[]={String(u"abc"),String(u"I"),String(u"\u0130"),String(u"a\0b",3),String(u"a\u00adb"),String(u"\u00e9"),String(u"e\u0301"),String(std::u16string{char16_t(0xd800),u'x'})};
    const String targets[]={String(u"a"),String(u"i"),String(u"i"),String(u"ab"),String(u"ab"),String(u"e\u0301"),String(u"\u00e9"),String(std::u16string{char16_t(0xd800)})};
    try{
        for(int c=0;c<3;++c){set_current_collation_culture(cultures[c]);for(int i=0;i<8;++i){const auto id="c"+std::to_string(c)+"p"+std::to_string(i);const auto&s=sources[i];const auto&t=targets[i];
            row(id+"index",culture_index_of(s,t));row(id+"indexStart",culture_index_of(s,t,1));
            row(id+"starts",culture_starts_with(s,t));row(id+"ends",culture_ends_with(s,t));row(id+"equalsCI",culture_equals_ignore_case(s,t));
        }}
    }catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}
    return 0;
}
