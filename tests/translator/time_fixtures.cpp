#include "managed_time.hpp"
#include <iostream>
#include <sstream>
using namespace pls::cs;using I=std::int32_t;
template<class F>std::string run(F work){try{return work();}catch(const Exception&e){return e.type_name();}}
static std::string parts(DateTime t){std::ostringstream s;s<<t.get_Ticks()<<','<<static_cast<I>(t.get_Kind())<<','<<t.get_Year()<<','<<t.get_Month()<<','<<t.get_Day()<<','<<t.get_Hour()<<','<<t.get_Minute()<<','<<t.get_Second()<<','<<t.get_Millisecond()<<','<<t.get_DayOfYear()<<','<<t.get_DayOfWeek();return s.str();}
int main(int argc,char**argv){if(argc>1&&std::string(argv[1])=="dotnet")runtime_profile=RuntimeProfile::DotNet;
    const I dates[][6]={{1,1,1,0,0,0},{1970,1,1,0,0,0},{2000,2,29,23,59,59},{1900,2,28,12,34,56},{9999,12,31,23,59,59},{2024,2,29,1,2,3},{1900,2,29,0,0,0},{0,1,1,0,0,0}};
    for(std::size_t i=0;i<sizeof(dates)/sizeof(dates[0]);++i)std::cout<<"date-"<<i<<'='<<run([&]{return parts(DateTime(dates[i][0],dates[i][1],dates[i][2],dates[i][3],dates[i][4],dates[i][5],DateTimeKind::Utc));})<<'\n';
    DateTime epoch(1970,1,1,0,0,0,DateTimeKind::Utc);
    const double delta[]={0,0.00001,0.00005,0.00015,-0.00005,-0.00015,0.25,0.5,-0.5,1.25,1234567890123.25,std::numeric_limits<double>::quiet_NaN(),std::numeric_limits<double>::infinity(),-std::numeric_limits<double>::infinity(),1e20};
    for(std::size_t i=0;i<sizeof(delta)/sizeof(delta[0]);++i)std::cout<<"add-ms-"<<i<<'='<<run([&]{return std::to_string(epoch.AddMilliseconds(delta[i]).get_Ticks()-epoch.get_Ticks());})<<'\n';
    const double daydelta[]={0.000000001,0.00000001,-0.00000001,1.25,-1.25};for(std::size_t i=0;i<sizeof(daydelta)/sizeof(daydelta[0]);++i)std::cout<<"add-day-"<<i<<'='<<run([&]{return std::to_string(epoch.AddDays(daydelta[i]).get_Ticks()-epoch.get_Ticks());})<<'\n';
    DateTime jan(2024,1,31,13,14,15,DateTimeKind::Utc);const I offsets[]={1,-1,13,-13,120001};for(std::size_t i=0;i<sizeof(offsets)/sizeof(offsets[0]);++i)std::cout<<"months-"<<i<<'='<<run([&]{return parts(jan.AddMonths(offsets[i]));})<<'\n';
    std::cout<<"years="<<parts(DateTime(2024,2,29,1,2,3,DateTimeKind::Utc).AddYears(1))<<'\n';std::cout<<"utc-kind="<<static_cast<I>(epoch.ToUniversalTime().get_Kind())<<'\n';std::cout<<"kind-ignored="<<(DateTime(epoch.get_Ticks(),DateTimeKind::Utc)==DateTime(epoch.get_Ticks(),DateTimeKind::Local)?"True":"False")<<'\n';
    std::cout<<"min-underflow="<<run([]{return std::to_string(DateTime().AddTicks(-1).get_Ticks());})<<'\n';std::cout<<"max-overflow="<<run([]{return std::to_string(DateTime(DateTime::MaxTicks).AddTicks(1).get_Ticks());})<<'\n';std::cout<<"bad-kind="<<run([]{return std::to_string(DateTime(0,static_cast<DateTimeKind>(3)).get_Ticks());})<<'\n';
    const std::int64_t ticks[]={0,1,-1,9999,-9999,12345678901234567ll,std::numeric_limits<std::int64_t>::max(),std::numeric_limits<std::int64_t>::min()};for(std::size_t i=0;i<sizeof(ticks)/sizeof(ticks[0]);++i){TimeSpan span(ticks[i]);std::cout<<"span-"<<i<<'='<<span.get_Ticks()<<','<<bit_copy<std::int64_t>(span.get_TotalMilliseconds())<<'\n';}
    const I spans[][5]={{1,2,3,4,5},{-1,-2,-3,-4,-5},{0,1000000,0,0,0},{std::numeric_limits<I>::max(),0,0,0,0}};for(std::size_t i=0;i<sizeof(spans)/sizeof(spans[0]);++i)std::cout<<"span-parts-"<<i<<'='<<run([&]{return std::to_string(TimeSpan(spans[i][0],spans[i][1],spans[i][2],spans[i][3],spans[i][4]).get_Ticks());})<<'\n';
    std::cout<<"time-of-day="<<DateTime(2024,2,29,13,14,15,DateTimeKind::Utc).get_TimeOfDay().get_Ticks()<<'\n';utc_clock_ticks=[](){return 638500000000123456ll;};std::cout<<"injected-clock="<<parts(DateTime::get_UtcNow())<<'\n';
}
