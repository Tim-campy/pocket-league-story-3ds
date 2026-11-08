#include "managed_regex.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace pls::cs;
std::string S(const String& s){std::ostringstream o;o<<std::hex<<std::setfill('0');for(auto c:s.code_units())o<<std::setw(4)<<unsigned(c);return o.str();}
const char* B(bool b){return b?"True":"False";}
int main(int argc,char**argv){runtime_profile=argc>1&&std::string(argv[1])=="dotnet"?RuntimeProfile::DotNet:RuntimeProfile::UnityMono265;
    std::vector<String> patterns={u"<co=[0-9A-Z]+>",u"<co=([0-9A-F]+)>",u"<co=([0-9\\s]+),([0-9\\s]+),([0-9\\s]+)>",u"<(po=[a-zA-Z0-9]+|/po)>",u"<(co=[a-zA-Z0-9,]+|/co)>",u"^[a-zA-Z0-9_\\-]+\\.csv$",u"[^a-zA-Z\\-]",u"([0-9]+)",u"^<po=[^>]+>",u"</po>$",u"^\\s*\"(.*)\"\\s*$",u"([0-9.]+)",u"^<po=[^>]+>|</po>$",u"[^a-zA-Z_]",u"^ja",u"^en(-us)?$",u"^zh(-cn|-sg)",u"^zh(-tw|-hk|-mo)?",u"^ko",u"@ja\\s+([^\\s@]+)"};
    std::vector<String> inputs={u"",u"own<co=AF>tail<co=07>",u"x<co= 1,2, 3>z",u"<po=x>own</po>",u"own-file.csv\n",u"\u3000\"A\rB\"\u00a0",String(std::u16string{0xd800,u'<',u'c',u'o',u'=',u'0',u'F',u'>',0xdc00}),u"zh-cn",u"@ja\u180eown @en other"};
    for(std::size_t p=0;p<patterns.size();++p)for(std::size_t t=0;t<inputs.size();++t){
        auto matches=RuntimeRegex::Matches(inputs[t],patterns[p]);std::ostringstream r;r<<matches->get_Count();
        for(int i=0;i<matches->get_Count();++i){auto m=matches->get_Item(i);r<<"|"<<m->get_Index()<<","<<m->get_Length()<<","<<S(m->get_Value());auto groups=m->get_Groups();for(int g=1;g<groups->get_Count();++g){auto v=groups->get_Item(g);r<<";"<<B(v->get_Success())<<","<<v->get_Index()<<","<<S(v->get_Value());}}
        std::cout<<"matches"<<p<<"_"<<t<<"="<<r.str()<<"\n";
        std::cout<<"replace"<<p<<"_"<<t<<"="<<S(RuntimeRegex::Replace(inputs[t],patterns[p],u""))<<"\n";
    }
    std::vector<String> small={u"a*",u"(a)?b",u"^|$",u".",u"a$",u"(a)(b)?"};
    for(std::size_t i=0;i<small.size();++i){auto m=RuntimeRegex::Match(String(std::u16string{u'a',u'b',u'\r',u'\n',0xd800}),small[i]);std::cout<<"small"<<i<<"="<<B(m->get_Success())<<","<<m->get_Index()<<","<<m->get_Length()<<","<<S(m->get_Value())<<","<<S(m->get_Groups()->get_Item(99)->get_Value())<<"\n";std::cout<<"sub"<<i<<"="<<S(RuntimeRegex::Replace(u"ab\r\n",small[i],u"[$$:$&:$1:$2:$0]"))<<"\n";}
    auto no=RuntimeRegex::Match(u"x",u"z");std::cout<<"nomatch="<<no->get_Groups()->get_Count()<<","<<B(no->get_Groups()->get_Item(0)->get_Success())<<"\n";
    std::u16string bmp;for(std::uint32_t i=0;i<65536;++i)bmp.push_back(char16_t(i));auto spaces=RuntimeRegex::Matches(String(std::move(bmp)),u"\\s");std::string units;for(int i=0;i<spaces->get_Count();++i)units+=S(spaces->get_Item(i)->get_Value());std::cout<<"bmpWhitespace="<<units<<"\n";
    try{RuntimeRegex::Matches(u"x",u"z")->get_Item(0);}catch(const Exception&e){std::cout<<"out="<<e.type_name()<<"\n";}
    try{RuntimeRegex::Match({},u"a");}catch(const Exception&e){std::cout<<"null="<<e.type_name()<<"\n";}
}
