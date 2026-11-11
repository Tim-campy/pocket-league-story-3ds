#pragma once
#include "semantic_runtime.hpp"
#include <chrono>

namespace pls::cs {
enum class DateTimeKind:std::int32_t {Unspecified=0,Utc=1,Local=2};
class TimeSpan {
    std::int64_t ticks_=0;
public:
    static constexpr std::int64_t TicksPerMillisecond=10000,TicksPerSecond=10000000,TicksPerMinute=600000000,TicksPerHour=36000000000ll,TicksPerDay=864000000000ll;
    TimeSpan()=default;explicit TimeSpan(std::int64_t ticks):ticks_(ticks){}
    TimeSpan(std::int32_t days,std::int32_t hours,std::int32_t minutes,std::int32_t seconds,std::int32_t milliseconds){
        if(runtime_profile==RuntimeProfile::UnityMono265){
            const auto sec=add_i32(add_i32(mul_i32(hours,3600),mul_i32(minutes,60)),seconds);
            auto rest=mul_i64(add_i64(mul_i64(sec,1000),milliseconds),10000);
            const auto day_ticks=mul_i64(TicksPerDay,days);ticks_=add_i64(rest,day_ticks);
            if((days>0&&(rest<0?rest>ticks_:ticks_<0))||(days<0&&(rest<=0?ticks_>0:ticks_>rest)))throw ArgumentOutOfRangeException();
        }else{
            const auto total_ms=((((static_cast<std::int64_t>(days)*24+hours)*60+minutes)*60)+seconds)*1000+milliseconds;
            if(total_ms>std::numeric_limits<std::int64_t>::max()/10000||total_ms<std::numeric_limits<std::int64_t>::min()/10000)throw ArgumentOutOfRangeException();ticks_=total_ms*10000;
        }
    }
    TimeSpan(std::int32_t hours,std::int32_t minutes,std::int32_t seconds):TimeSpan(0,hours,minutes,seconds,0){}
    TimeSpan(std::int32_t days,std::int32_t hours,std::int32_t minutes,std::int32_t seconds):TimeSpan(days,hours,minutes,seconds,0){}
    std::int64_t get_Ticks()const{return ticks_;}
    double get_TotalMilliseconds()const{const auto value=static_cast<double>(ticks_)/10000.0;if(runtime_profile==RuntimeProfile::DotNet)return std::clamp(value,-922337203685477.0,922337203685477.0);return value;}
    double get_TotalSeconds()const{return static_cast<double>(ticks_)/10000000.0;}
    friend bool operator==(TimeSpan a,TimeSpan b){return a.ticks_==b.ticks_;}
};

inline std::function<std::int64_t()>utc_clock_ticks=[](){
    const auto elapsed=std::chrono::system_clock::now().time_since_epoch();
    return static_cast<std::int64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count()/100)+621355968000000000ll;
};
// A wall-time -> UTC conversion is supplied by the platform's timezone rules.
// Unknown local rules are never silently replaced by UTC.
inline std::function<std::int64_t(std::int64_t)>local_to_utc_ticks;

class DateTime {
    std::int64_t ticks_=0;DateTimeKind kind_=DateTimeKind::Unspecified;
    static constexpr int months_[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    static std::int64_t days_before_year(std::int32_t year){const auto y=static_cast<std::int64_t>(year)-1;return y*365+y/4-y/100+y/400;}
    static std::int32_t days_in_month(std::int32_t year,std::int32_t month){return months_[month-1]+(month==2&&IsLeapYear(year)?1:0);}
    struct Parts{std::int32_t year,month,day,year_day;};
    Parts parts()const{
        auto days=ticks_/TimeSpan::TicksPerDay;std::int32_t low=1,high=9999;
        while(low<high){const auto mid=(low+high+1)/2;if(days_before_year(mid)<=days)low=mid;else high=mid-1;}
        auto rem=static_cast<std::int32_t>(days-days_before_year(low)),year_day=rem+1;std::int32_t month=1;
        while(rem>=days_in_month(low,month)){rem-=days_in_month(low,month);++month;}
        return {low,month,rem+1,year_day};
    }
    static double round_even(double value){const auto floor=std::floor(value),fraction=value-floor;if(fraction<0.5)return floor;if(fraction>0.5)return floor+1;return std::fmod(floor,2.0)==0?floor:floor+1;}
    DateTime add_units(double value,std::int64_t unit)const{
        if(std::isnan(value)&&runtime_profile==RuntimeProfile::DotNet)return *this;
        if(!std::isfinite(value))throw ArgumentOutOfRangeException();
        const auto scaled=value*static_cast<double>(unit);
        if(!std::isfinite(scaled)||scaled>=9223372036854775808.0||scaled< -9223372036854775808.0)throw ArgumentOutOfRangeException();
        std::int64_t delta;
        if(runtime_profile==RuntimeProfile::UnityMono265)delta=conv_i64(round_even(scaled));
        else {const auto integral=std::trunc(value);const auto fraction=value-integral;delta=add_i64(mul_i64(conv_i64(integral),unit),conv_i64(fraction*unit));}
        return AddTicks(delta);
    }
public:
    static constexpr std::int64_t MaxTicks=3155378975999999999ll;
    DateTime()=default;
    explicit DateTime(std::int64_t ticks,DateTimeKind kind=DateTimeKind::Unspecified):ticks_(ticks),kind_(kind){
        if(ticks<0||ticks>MaxTicks)throw ArgumentOutOfRangeException();if(static_cast<std::int32_t>(kind)<0||static_cast<std::int32_t>(kind)>2)throw ArgumentException();
    }
    DateTime(std::int32_t year,std::int32_t month,std::int32_t day,std::int32_t hour,std::int32_t minute,std::int32_t second,DateTimeKind kind=DateTimeKind::Unspecified):kind_(kind){
        if(year<1||year>9999||month<1||month>12||day<1||day>days_in_month(year,month)||hour<0||hour>23||minute<0||minute>59||second<0||second>59)throw ArgumentOutOfRangeException();if(static_cast<std::int32_t>(kind)<0||static_cast<std::int32_t>(kind)>2)throw ArgumentException();
        auto days=days_before_year(year);for(std::int32_t m=1;m<month;++m)days+=days_in_month(year,m);days+=day-1;
        ticks_=days*TimeSpan::TicksPerDay+static_cast<std::int64_t>(hour)*TimeSpan::TicksPerHour+static_cast<std::int64_t>(minute)*TimeSpan::TicksPerMinute+static_cast<std::int64_t>(second)*TimeSpan::TicksPerSecond;
    }
    DateTime(std::int32_t year,std::int32_t month,std::int32_t day):DateTime(year,month,day,0,0,0){}
    static bool IsLeapYear(std::int32_t year){if(year<1||year>9999)throw ArgumentOutOfRangeException();return year%4==0&&(year%100!=0||year%400==0);}
    static DateTime get_UtcNow(){return DateTime(utc_clock_ticks(),DateTimeKind::Utc);}
    std::int64_t get_Ticks()const{return ticks_;}DateTimeKind get_Kind()const{return kind_;}
    std::int32_t get_Year()const{return parts().year;}std::int32_t get_Month()const{return parts().month;}std::int32_t get_Day()const{return parts().day;}
    std::int32_t get_DayOfYear()const{return parts().year_day;}
    std::int32_t get_DayOfWeek()const{return static_cast<std::int32_t>((ticks_/TimeSpan::TicksPerDay+1)%7);}
    std::int32_t get_Hour()const{return static_cast<std::int32_t>((ticks_/TimeSpan::TicksPerHour)%24);}
    std::int32_t get_Minute()const{return static_cast<std::int32_t>((ticks_/TimeSpan::TicksPerMinute)%60);}
    std::int32_t get_Second()const{return static_cast<std::int32_t>((ticks_/TimeSpan::TicksPerSecond)%60);}
    std::int32_t get_Millisecond()const{return static_cast<std::int32_t>((ticks_/TimeSpan::TicksPerMillisecond)%1000);}
    TimeSpan get_TimeOfDay()const{return TimeSpan(ticks_%TimeSpan::TicksPerDay);}
    DateTime ToUniversalTime()const{if(kind_==DateTimeKind::Utc)return *this;if(!local_to_utc_ticks)throw NotSupportedException("Platform local timezone conversion is not installed");return DateTime(local_to_utc_ticks(ticks_),DateTimeKind::Utc);}
    DateTime AddTicks(std::int64_t delta)const{if(delta< -ticks_||delta>MaxTicks-ticks_)throw ArgumentOutOfRangeException();return DateTime(ticks_+delta,kind_);}
    DateTime AddMilliseconds(double value)const{return add_units(value,10000);}
    DateTime AddSeconds(double value)const{return runtime_profile==RuntimeProfile::UnityMono265?AddMilliseconds(value*1000):add_units(value,TimeSpan::TicksPerSecond);}
    DateTime AddMinutes(double value)const{return runtime_profile==RuntimeProfile::UnityMono265?AddMilliseconds(value*60000):add_units(value,TimeSpan::TicksPerMinute);}
    DateTime AddHours(double value)const{return runtime_profile==RuntimeProfile::UnityMono265?AddMilliseconds(value*3600000):add_units(value,TimeSpan::TicksPerHour);}
    DateTime AddDays(double value)const{return runtime_profile==RuntimeProfile::UnityMono265?AddMilliseconds(round_even(value*86400000)):add_units(value,TimeSpan::TicksPerDay);}
    DateTime AddMonths(std::int32_t months)const{
        if(months< -120000||months>120000)throw ArgumentOutOfRangeException();auto p=parts();auto total=(p.year-1)*12+p.month-1+months;if(total<0||total>=9999*12)throw ArgumentOutOfRangeException();const auto year=total/12+1,month=total%12+1,day=std::min(p.day,days_in_month(year,month));return DateTime(year,month,day,0,0,0,kind_).AddTicks(ticks_%TimeSpan::TicksPerDay);
    }
    DateTime AddYears(std::int32_t years)const{if(years< -10000||years>10000)throw ArgumentOutOfRangeException();return AddMonths(years*12);}
    friend TimeSpan operator-(DateTime a,DateTime b){return TimeSpan(a.ticks_-b.ticks_);}
    friend bool operator==(DateTime a,DateTime b){return a.ticks_==b.ticks_;}
    friend bool operator!=(DateTime a,DateTime b){return !(a==b);}
    friend bool operator<(DateTime a,DateTime b){return a.ticks_<b.ticks_;}
};

class TimeZoneInfo;
inline std::function<Ref<TimeZoneInfo>()>local_timezone_provider;
inline std::function<Ref<TimeZoneInfo>(const String&)>timezone_lookup_provider;
class TimeZoneInfo:public Object {
    String id_,display_,standard_;TimeSpan offset_;
public:
    TimeZoneInfo(String id,TimeSpan offset,String display,String standard):id_(std::move(id)),display_(std::move(display)),standard_(std::move(standard)),offset_(offset){}
    static Ref<TimeZoneInfo>CreateCustomTimeZone(const String&id,TimeSpan offset,const String&display,const String&standard){
        if(id.is_null())throw ArgumentNullException();if(id.length()==0)throw ArgumentException();
        if(offset.get_Ticks()%TimeSpan::TicksPerMinute!=0)throw ArgumentException();
        if(offset.get_Ticks()< -14*TimeSpan::TicksPerHour||offset.get_Ticks()>14*TimeSpan::TicksPerHour)throw ArgumentOutOfRangeException();
        const auto fallback=runtime_profile==RuntimeProfile::UnityMono265?id:String(u"");
        return make_ref<TimeZoneInfo>(id,offset,display.is_null()?fallback:display,standard.is_null()?fallback:standard);
    }
    static Ref<TimeZoneInfo>get_Utc(){static auto value=CreateCustomTimeZone(String(u"UTC"),TimeSpan(),String(u"UTC"),String(u"UTC"));static GcRootProvider roots([](const EdgeVisitor&visitor){trace_value(value,visitor);});return value;}
    static Ref<TimeZoneInfo>get_Local(){if(!local_timezone_provider)throw NotSupportedException("Platform local timezone provider is not installed");auto result=local_timezone_provider();if(!result)throw InvalidTimeZoneException();return result;}
    static Ref<TimeZoneInfo>FindSystemTimeZoneById(const String&id){if(id.is_null())throw ArgumentNullException();if(id==String(u"UTC"))return get_Utc();if(!timezone_lookup_provider)throw NotSupportedException("Platform timezone database provider is not installed");auto value=timezone_lookup_provider(id);if(!value)throw TimeZoneNotFoundException();return value;}
    static DateTime ConvertTimeToUtc(DateTime time){return time.ToUniversalTime();}
    String get_Id()const{return id_;}String get_DisplayName()const{return display_;}String get_StandardName()const{return standard_;}
    TimeSpan get_BaseUtcOffset()const{return offset_;}
    bool get_SupportsDaylightSavingTime()const{return false;}
    String ToString()override{return display_;}
    void trace_edges(const EdgeVisitor&visitor)const override{trace_value(id_,visitor);trace_value(display_,visitor);trace_value(standard_,visitor);}
    void release_edges()override{release_value(id_);release_value(display_);release_value(standard_);}
};
} // namespace pls::cs
