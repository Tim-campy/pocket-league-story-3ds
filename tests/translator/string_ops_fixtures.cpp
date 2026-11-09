#include "managed_string_ops.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace pls::cs;
std::string hex(const String& value){std::ostringstream out;out<<std::hex<<std::setfill('0');for(char16_t c:value.code_units())out<<std::setw(4)<<static_cast<unsigned>(c);return out.str();}
std::string parse(const String& value,bool spaces=true){try{return std::to_string(int32_parse_hex_number(value,spaces));}catch(const Exception&e){return e.type_name();}}
template<class T>std::string replace(const String& value,T old,T to){try{auto result=string_replace(value,old,to);return hex(result)+";same="+(value.as_object()==result.as_object()?"True":"False");}catch(const Exception&e){return e.type_name();}}
std::string split(const String& value,const Array<char16_t>&separators){try{auto parts=string_split(value,separators);std::string result=std::to_string(parts.length())+";";for(std::int32_t i=0;i<parts.length();++i)result+="["+hex(parts[i])+"]"+(parts[i].as_object()==value.as_object()?"^":"");return result;}catch(const Exception&e){return e.type_name();}}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    for(int c=0;c<65536;++c){auto s=String(std::u16string{static_cast<char16_t>(c),u'X',static_cast<char16_t>(c)});std::cout<<"bmp-"<<c<<'\t'<<(string_trim(s).length()==1?'1':'0')<<(string_trim(s,Array<char16_t>{}).length()==1?'1':'0')<<(string_trim(s,Array<char16_t>::make(0)).length()==1?'1':'0')<<'\n';}
    std::vector<std::u16string>values={u"",u"XX",u" X ",std::u16string{0,u'X',0},std::u16string{0xd800,u'X',0xdc00},u" \t\r\n",u"\u200bX\ufeff",u"\u202fX\u205f",std::u16string{0xd83d,0xde00,u'X',0xd83d,0xde00}};
    std::vector<Array<char16_t>>sets={Array<char16_t>{},Array<char16_t>::make(0),Array<char16_t>::from({u'X'}),Array<char16_t>::from({u' ',0}),Array<char16_t>::from({0xd800,0xdc00}),Array<char16_t>::from({0xd83d,0xde00}),Array<char16_t>::from({u'X',u'X'})};
    for(std::size_t i=0;i<values.size();++i)for(std::size_t j=0;j<sets.size();++j){String value(values[i]);auto result=string_trim(value,sets[j]);std::cout<<"set-"<<i<<'-'<<j<<'\t'<<hex(result)<<";same="<<(value.as_object()==result.as_object()?"True":"False")<<'\n';}
    try{string_trim(String{});}catch(const Exception&e){std::cout<<"null\t"<<e.type_name()<<'\n';}
    std::vector<std::int32_t>numbers={0,1,15,16,255,256,INT32_MAX,INT32_MIN,-1,-2,-256};
    for(auto n:numbers)for(auto w:{0,1,2,7,8,9,16,99})for(bool upper:{false,true})std::cout<<"hex-"<<n<<'-'<<w<<'-'<<(upper?"True":"False")<<'\t'<<format_i32_hex(n,w,upper).utf8()<<'\n';
    for(int c=0;c<65536;++c)std::cout<<"parse-bmp-"<<c<<'\t'<<parse(String(std::u16string{static_cast<char16_t>(c),u'f',static_cast<char16_t>(c)}))<<'\n';
    for(int c=0;c<65536;++c)std::cout<<"strict-bmp-"<<c<<'\t'<<parse(String(std::u16string{static_cast<char16_t>(c),u'f',static_cast<char16_t>(c)}),false)<<'\n';
    std::vector<String>parses={String{},String(u""),String(u" "),String(u"0"),String(u"f"),String(u"FFFFFFFF"),String(u"80000000"),String(u"100000000"),String(u"100000000X"),String(u"FFFFFFFFF "),String(u"+1"),String(u"-1"),String(u"0x1"),String(u"1\0",2),String(u"1\0X",3),String(u"1\0 ",3),String(u"1 \0",3),String(u"1\0\0",3),String(u"\0",1),String(u"\0f",2),String(u" f "),String(u" f\t"),String(u"00000000000000000f"),String(u"FFFFFFFFX"),String(u"1 2"),String(u"\ufefff\ufeff")};
    for(std::size_t i=0;i<parses.size();++i)std::cout<<"parse-"<<i<<'\t'<<parse(parses[i])<<'\n';
    for(std::size_t i=0;i<parses.size();++i)std::cout<<"strict-"<<i<<'\t'<<parse(parses[i],false)<<'\n';
    std::vector<String>replace_values={String{},String(u""),String(u"aaa"),String(u"ababa"),String(std::u16string(205,u'a')),String(u"\0a\0",3),String(u"\uff21a"),String(std::u16string{u'a',0xd800,u'a'})};
    std::vector<String>old_values={String{},String(u""),String(u"a"),String(u"aa"),String(u"aba"),String(u"\0",1),String(std::u16string{0xd800}),String(u"\uff21"),String(u"longerthaninput")};std::vector<String>new_values={String{},String(u""),String(u"a"),String(u"aa"),String(u"Z"),String(u"\0",1)};
    for(std::size_t i=0;i<replace_values.size();++i)for(std::size_t j=0;j<old_values.size();++j)for(std::size_t k=0;k<new_values.size();++k)std::cout<<"replace-"<<i<<'-'<<j<<'-'<<k<<'\t'<<replace(replace_values[i],old_values[j],new_values[k])<<'\n';
    std::vector<char16_t>char_values={0,u'a',u'b',0xd800,0xff21};for(std::size_t i=0;i<replace_values.size();++i)for(std::size_t j=0;j<char_values.size();++j)for(std::size_t k=0;k<char_values.size();++k)std::cout<<"replace-char-"<<i<<'-'<<j<<'-'<<k<<'\t'<<replace(replace_values[i],char_values[j],char_values[k])<<'\n';
    for(int c=0;c<65536;++c){String value(std::u16string{u'a',static_cast<char16_t>(c),u'b'});std::cout<<"split-bmp-"<<c<<'\t'<<string_split(value,Array<char16_t>{}).length()<<','<<string_split(value,Array<char16_t>::make(0)).length()<<'\n';}
    std::vector<String>split_values={String{},String(u""),String(u"a"),String(u" a "),String(u"a,,b,"),String(u"aaa"),String(u"\r\nA\r\nB\n"),String(u"\0a\0",3),String(std::u16string{u'a',0xd800,u'b'}),String(u"a\tb c"),String(u"\u200bA\ufeff")};
    std::vector<Array<char16_t>>split_sets={Array<char16_t>{},Array<char16_t>::make(0),Array<char16_t>::from({u','}),Array<char16_t>::from({u'\r',u'\n'}),Array<char16_t>::from({u' ',u'\t'}),Array<char16_t>::from({0}),Array<char16_t>::from({0xd800})};
    for(std::size_t i=0;i<split_values.size();++i)for(std::size_t j=0;j<split_sets.size();++j)std::cout<<"split-"<<i<<'-'<<j<<'\t'<<split(split_values[i],split_sets[j])<<'\n';
}
