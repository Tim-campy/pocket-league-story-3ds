#include "managed_collation.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <type_traits>

using namespace pls::cs;
namespace {
std::string text(const String& s){std::ostringstream out;out<<"str:"<<std::hex<<std::setfill('0');for(char16_t c:s.code_units())out<<std::setw(4)<<static_cast<unsigned>(c);return out.str();}
std::string text(bool value){return value?"True":"False";}
std::string text(std::int32_t value){return std::to_string(value);}
template<class F>void row(const std::string& id,F&& work){try{const auto result=work();std::cout<<id<<'\t'<<text(result)<<'\n';}catch(const Exception&e){std::cout<<id<<'\t'<<e.type_name()<<'\n';}}
}
int main(){
    install_mono_collation_character_data();
    const CollationCulture cultures[]={{127,{},"",false},{1033,{9},"en",false},{1055,{31},"tr",true},{1036,{12},"fr",false},{1041,{17},"ja",false},{1042,{18},"ko",false},{2052,{4},"zh-CHS",false},{1028,{31748},"zh-CHT",false}};
    const String values[]={String(u""),String(u"a"),String(u"ab"),String(u"a\0b",3),String(u"a\u00adb"),String(u"\u00e9"),String(u"e\u0301"),String(u"I"),String(u"\u0130"),String(u"i"),String(u"\u0378"),String(u"a\u0378b"),String(u"-"),String(u"a-b"),String(u"a b"),String(std::u16string{char16_t(0xd800)}),String(std::u16string{u'a',char16_t(0xd800),u'b'})};
    for(int c=0;c<8;++c){set_current_collation_culture(cultures[c]);for(int a=0;a<17;++a){const auto&s=values[a];const auto id="c"+std::to_string(c)+"a"+std::to_string(a);
        row(id+"lower",[&]{return culture_to_lower(s);});row(id+"upper",[&]{return culture_to_upper(s);});
        for(int b=0;b<17;++b){const auto&t=values[b];const auto key=id+"b"+std::to_string(b);
            row(key+"index",[&]{return culture_index_of(s,t);});row(key+"index0",[&]{return culture_index_of(s,t,0);});row(key+"index1",[&]{return culture_index_of(s,t,1);});
            row(key+"indexEmptyRange",[&]{return culture_index_of(s,t,s.length(),0);});row(key+"last",[&]{return culture_last_index_of(s,t);});row(key+"lastEnd",[&]{return culture_last_index_of(s,t,s.length());});row(key+"lastMinus1",[&]{return culture_last_index_of(s,t,-1,0);});
            row(key+"starts",[&]{return culture_starts_with(s,t);});row(key+"ends",[&]{return culture_ends_with(s,t);});row(key+"compare",[&]{return culture_compare(s,t);});row(key+"equalsCI",[&]{return culture_equals_ignore_case(s,t);});
        }
    }}
    return 0;
}
