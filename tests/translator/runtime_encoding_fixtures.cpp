#include "managed_encoding.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace pls::cs;
std::string text(const String& s){std::ostringstream o;o<<std::hex<<std::setfill('0');for(auto c:s.code_units())o<<std::setw(4)<<unsigned(c);return o.str();}
std::string bytes(const Array<std::uint8_t>& b){std::ostringstream o;o<<std::hex<<std::uppercase<<std::setfill('0');for(int i=0;i<b.length();++i){if(i)o<<"-";o<<std::setw(2)<<unsigned(b.at(i));}return o.str();}
int main(int argc,char**argv){runtime_profile=argc>1&&std::string(argv[1])=="dotnet"?RuntimeProfile::DotNet:RuntimeProfile::UnityMono265;
    std::vector<Ref<RuntimeEncoding>> codecs={RuntimeEncoding::get_UTF8(),RuntimeEncoding::get_Unicode(),RuntimeEncoding::get_BigEndianUnicode(),RuntimeEncoding::get_ASCII()};
    std::vector<String> texts={String(u""),String(std::u16string{u'a',0,u'z'}),String(u"\u00e9\u3042"),String(std::u16string{0xd83d,0xde00}),String(std::u16string{0xd800,u'x',0xdc00}),String(std::u16string{0xd800,0xd800,0xdc00})};
    for(std::size_t i=0;i<codecs.size();++i)for(std::size_t j=0;j<texts.size();++j){auto b=codecs[i]->GetBytes(texts[j]);std::cout<<"round"<<i<<"_"<<j<<"="<<bytes(b)<<","<<text(codecs[i]->GetString(b))<<"\n";}
    std::vector<Array<std::uint8_t>> arrays={{255,254,65,0},{0,216},{0,220},{0,216,65,0},{0,216,0,220},{0,216,255},{128,255,127},{1}};
    for(std::size_t i=1;i<codecs.size();++i)for(std::size_t j=0;j<arrays.size();++j)std::cout<<"decode"<<i<<"_"<<j<<"="<<text(codecs[i]->GetString(arrays[j]))<<"\n";
    std::cout<<"slice="<<text(RuntimeEncoding::get_Unicode()->GetString({99,65,0,66,0,99},1,4))<<"\n";
    std::vector<String> names={u"utf-8",u"UTF8",u"utf-16",u"unicode",u"utf-16BE",u"unicodeFFFE",u"ascii",u"us-ascii",u"",u"own",u" UTF-8",String(std::u16string{0}),u"-own-unknown"};
    for(std::size_t i=0;i<names.size();++i){try{auto b=RuntimeEncoding::GetEncoding(names[i])->GetBytes(u"A");std::cout<<"name"<<i<<"="<<bytes(b)<<"\n";}catch(const Exception& e){std::cout<<"name"<<i<<"="<<e.type_name()<<"\n";}}
    std::vector<std::function<void()>> bad={[]{RuntimeEncoding::get_UTF8()->GetBytes({});},[]{RuntimeEncoding::get_Unicode()->GetString({});},[]{RuntimeEncoding::get_Unicode()->GetString(Array<std::uint8_t>::make(2),-1,1);},[]{RuntimeEncoding::get_Unicode()->GetString(Array<std::uint8_t>::make(2),1,2);},[]{RuntimeEncoding::GetEncoding({});}};
    for(std::size_t i=0;i<bad.size();++i){try{bad[i]();std::cout<<"bad"<<i<<"=none\n";}catch(const Exception& e){std::cout<<"bad"<<i<<"="<<e.type_name()<<"\n";}}
}
