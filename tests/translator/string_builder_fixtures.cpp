#include "managed_text.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace pls::cs;
template<class F>std::string run(F work){try{return work();}catch(const Exception&e){return e.type_name();}}
static std::string units(const String&s){std::ostringstream r;r<<std::uppercase<<std::hex<<std::setfill('0');for(std::int32_t i=0;i<s.length();++i){if(i)r<<',';r<<std::setw(4)<<static_cast<unsigned>(s.at(i));}return r.str();}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    const std::int32_t caps[]={-1,0,1,4,16};for(std::size_t i=0;i<sizeof(caps)/sizeof(caps[0]);++i)std::cout<<"ctor-cap-"<<i<<'='<<run([&]{auto b=make_ref<StringBuilder>(caps[i]);return std::to_string(b->get_Length())+","+std::to_string(b->get_Capacity());})<<'\n';
    std::cout<<"ctor-null="<<make_ref<StringBuilder>(String())->get_Capacity()<<'\n';std::cout<<"ctor-string="<<make_ref<StringBuilder>(String(u"12345678901234567"))->get_Capacity()<<'\n';
    auto a=make_ref<StringBuilder>(2);auto chain=a->Append(u'A')->Append(String())->Append(String(u"BC"));std::cout<<"chain="<<(a==chain?"True":"False")<<','<<a->ToString().utf8()<<','<<a->get_Capacity()<<'\n';
    a->Append(char16_t(0xD800));a->Append(char16_t(0));std::cout<<"units="<<units(a->ToString())<<'\n';
    auto snapshot=a->ToString();a->set_Chars(0,u'Z');std::cout<<"snapshot="<<units(snapshot)<<','<<units(a->ToString())<<'\n';
    a->set_Length(2);std::cout<<"shrink="<<units(a->ToString())<<','<<a->get_Capacity()<<'\n';a->set_Length(6);std::cout<<"grow="<<units(a->ToString())<<','<<a->get_Capacity()<<'\n';
    std::cout<<"repeat="<<make_ref<StringBuilder>()->Append(u'q',3)->ToString().utf8()<<'\n';std::cout<<"substring="<<make_ref<StringBuilder>()->Append(String(u"abcdef"),2,3)->ToString().utf8()<<'\n';
    std::cout<<"slice="<<make_ref<StringBuilder>(String(u"abc"))->ToString(1,2).utf8()<<'\n';std::cout<<"ensure="<<make_ref<StringBuilder>(2)->EnsureCapacity(3)<<'\n';
    std::cout<<"negative-repeat="<<run([]{return make_ref<StringBuilder>()->Append(u'a',-1)->ToString().utf8();})<<'\n';
    std::cout<<"null-empty="<<run([]{return make_ref<StringBuilder>()->Append(String(),0,0)->ToString().utf8();})<<'\n';
    std::cout<<"null-range="<<run([]{return make_ref<StringBuilder>()->Append(String(),1,0)->ToString().utf8();})<<'\n';
    std::cout<<"null-negative="<<run([]{return make_ref<StringBuilder>()->Append(String(),-1,0)->ToString().utf8();})<<'\n';
    std::cout<<"outside-get="<<run([]{return String(std::u16string{make_ref<StringBuilder>()->get_Chars(0)}).utf8();})<<'\n';std::cout<<"outside-set="<<run([]{make_ref<StringBuilder>()->set_Chars(0,u'a');return std::string("none");})<<'\n';
    std::cout<<"negative-length="<<run([&]{a->set_Length(-1);return std::string("none");})<<'\n';std::cout<<"small-capacity="<<run([&]{a->set_Capacity(1);return std::string("none");})<<'\n';
    const std::int32_t indexes[]={-1,0,1,2,3,4};const String values[]={String{},String(u""),String(u"x\0\xd800",3)};
    for(std::size_t i=0;i<6;++i)for(std::size_t j=0;j<3;++j)std::cout<<"insert-"<<i<<'-'<<j<<'='<<run([&]{auto b=make_ref<StringBuilder>(String(u"202"));const bool same=b==b->Insert(indexes[i],values[j]);const auto cap=b->get_Capacity();const auto text=units(b->ToString());return std::string(same?"True":"False")+","+std::to_string(cap)+","+std::to_string(b->get_Capacity())+","+text;})<<'\n';
}
