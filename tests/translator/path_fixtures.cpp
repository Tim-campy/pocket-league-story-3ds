#include "managed_path.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace pls::cs;
std::string S(const String& s){if(s.is_null())return "null";std::ostringstream o;o<<std::hex<<std::setfill('0');for(auto c:s.code_units())o<<std::setw(4)<<unsigned(c);return o.str();}
int main(int argc,char**argv){runtime_profile=argc>1&&std::string(argv[1])=="dotnet"?RuntimeProfile::DotNet:RuntimeProfile::UnityMono265;managed_path_platform=PathPlatform::Windows;
    std::vector<String> values={{},u"",u"own",u"own.ext",u"dir.x/own",u"dir/own.x",u".x",u"own.",u".",u"..",u"own.tar.gz",u"dir\\own.x",u"dir.x\\own",u"f.x:y",u"f:x.y",u"f.x/",String(std::u16string{u'o',u'w',u'n',u'.',u'x',0}),u"own<.x",u"own.x\n",u"own.x ",String(std::u16string{0xd800,u'.',u'x'})};
    for(std::size_t i=0;i<values.size();++i){try{auto result=RuntimePath::GetExtension(values[i]);std::cout<<"extension"<<i<<"="<<S(result)<<"\n";}catch(const Exception&e){std::cout<<"extension"<<i<<"="<<e.type_name()<<"\n";}}
    for(std::size_t i=0;i<values.size();++i){try{auto result=RuntimePath::GetFileName(values[i]);std::cout<<"filename"<<i<<"="<<S(result)<<"\n";}catch(const Exception&e){std::cout<<"filename"<<i<<"="<<e.type_name()<<"\n";}}
    for(std::size_t i=0;i<values.size();++i){try{auto result=RuntimePath::GetFileNameWithoutExtension(values[i]);std::cout<<"withoutExtension"<<i<<"="<<S(result)<<"\n";}catch(const Exception&e){std::cout<<"withoutExtension"<<i<<"="<<e.type_name()<<"\n";}}
    std::vector<String> extensions={{},u"",u"txt",u".txt",u".",u"x/y"};
    for(std::size_t i=0;i<values.size();++i)for(std::size_t j=0;j<extensions.size();++j){try{auto result=RuntimePath::ChangeExtension(values[i],extensions[j]);std::cout<<"change"<<i<<"_"<<j<<"="<<S(result)<<"\n";}catch(const Exception&e){std::cout<<"change"<<i<<"_"<<j<<"="<<e.type_name()<<"\n";}}
}
