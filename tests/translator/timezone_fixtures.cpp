#include "managed_time.hpp"
#include <iostream>
using namespace pls::cs;
template<class F>std::string run(F work){try{return work();}catch(const Exception&e){return e.type_name();}}
static std::string create(const String&id,std::int64_t ticks,const String&display,const String&standard){auto z=TimeZoneInfo::CreateCustomTimeZone(id,TimeSpan(ticks),display,standard);return std::to_string(z->get_Id().length())+","+std::to_string(z->get_BaseUtcOffset().get_Ticks())+","+(z->get_DisplayName().is_null()?"null":z->get_DisplayName().utf8())+","+(z->get_StandardName().is_null()?"null":z->get_StandardName().utf8())+","+(z->get_SupportsDaylightSavingTime()?"True":"False");}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    const std::int64_t ticks[]={0,1,-1,TimeSpan::TicksPerMinute,-TimeSpan::TicksPerMinute,14*TimeSpan::TicksPerHour,-14*TimeSpan::TicksPerHour,14*TimeSpan::TicksPerHour+TimeSpan::TicksPerMinute,-14*TimeSpan::TicksPerHour-TimeSpan::TicksPerMinute};
    for(std::size_t i=0;i<sizeof(ticks)/sizeof(ticks[0]);++i)std::cout<<"offset-"<<i<<'='<<run([&]{return create(String(u"synthetic"),ticks[i],String(u"display"),String(u"standard"));})<<'\n';
    const String ids[]={String(),String(u""),String(u"x"),String(u"a\0b",3),String(std::u16string(300,u'a'))};for(std::size_t i=0;i<sizeof(ids)/sizeof(ids[0]);++i)std::cout<<"id-"<<i<<'='<<run([&]{return create(ids[i],0,String(),String());})<<'\n';
    auto z=TimeZoneInfo::get_Utc();std::cout<<"utc="<<z->get_Id().utf8()<<','<<z->get_BaseUtcOffset().get_Ticks()<<','<<(z->get_SupportsDaylightSavingTime()?"True":"False")<<'\n';std::cout<<"utc-convert="<<TimeZoneInfo::ConvertTimeToUtc(DateTime(621355968000000000ll,DateTimeKind::Utc)).get_Ticks()<<'\n';
}
