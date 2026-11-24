// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#pragma once
#include "portable_generated_forward.hpp"

namespace pls::generated {
namespace java::util {

struct JCalendar : pls::cs::Object {
    void trace_edges(const pls::cs::EdgeVisitor& visitor) const override;
    PLS_DELEGATE_SLOTS(pls::cs::Object, {"Equals", "M:java.util.JCalendar.Equals(System.Object)"},
                       {"GetHashCode", "M:java.util.JCalendar.GetHashCode"});
    PLS_MANAGED_CLASS("java.util.JCalendar", JCalendar, pls::cs::Object)
    pls::cs::Ref<JDate> date_{};
    pls::cs::Ref<JTimeZone> timezone_{};
    bool Equals(pls::cs::Ref<pls::cs::Object> const& obj) override;
    std::int32_t GetHashCode() override;
    static constexpr pls::cs::Int32 YEAR = 1;
    static constexpr pls::cs::Int32 MONTH = 2;
    static constexpr pls::cs::Int32 DATE = 5;
    static constexpr pls::cs::Int32 DAY_OF_MONTH = 5;
    static constexpr pls::cs::Int32 DAY_OF_YEAR = 6;
    static constexpr pls::cs::Int32 DAY_OF_WEEK = 7;
    static constexpr pls::cs::Int32 AM_PM = 9;
    static constexpr pls::cs::Int32 HOUR = 10;
    static constexpr pls::cs::Int32 HOUR_OF_DAY = 11;
    static constexpr pls::cs::Int32 MINUTE = 12;
    static constexpr pls::cs::Int32 SECOND = 13;
    static constexpr pls::cs::Int32 MILLISECOND = 14;
    static constexpr pls::cs::Int32 SUNDAY = 1;
    static constexpr pls::cs::Int32 MONDAY = 2;
    static constexpr pls::cs::Int32 TUESDAY = 3;
    static constexpr pls::cs::Int32 WEDNESDAY = 4;
    static constexpr pls::cs::Int32 THURSDAY = 5;
    static constexpr pls::cs::Int32 FRIDAY = 6;
    static constexpr pls::cs::Int32 SATURDAY = 7;
    static constexpr pls::cs::Int32 JANUARY = 0;
    static constexpr pls::cs::Int32 FEBRUARY = 1;
    static constexpr pls::cs::Int32 MARCH = 2;
    static constexpr pls::cs::Int32 APRIL = 3;
    static constexpr pls::cs::Int32 MAY = 4;
    static constexpr pls::cs::Int32 JUNE = 5;
    static constexpr pls::cs::Int32 JULY = 6;
    static constexpr pls::cs::Int32 AUGUST = 7;
    static constexpr pls::cs::Int32 SEPTEMBER = 8;
    static constexpr pls::cs::Int32 OCTOBER = 9;
    static constexpr pls::cs::Int32 NOVEMBER = 10;
    static constexpr pls::cs::Int32 DECEMBER = 11;
    static constexpr pls::cs::Int32 AM = 0;
    static constexpr pls::cs::Int32 PM = 1;
    static bool Equals(pls::cs::Ref<JCalendar> self, pls::cs::Ref<pls::cs::Object> obj);

    static void ensure_initialized();

    static void create_init(pls::cs::Ref<JCalendar> self);

    static pls::cs::Int32 GetHashCode(pls::cs::Ref<JCalendar> self);

    static pls::cs::Ref<JCalendar> create();

    static pls::cs::Ref<JCalendar> GetInstance();

    pls::cs::Int32 Get(pls::cs::Int32 field);

    void SetTime(pls::cs::Ref<JDate> date);

    void SetTimeInMillis(pls::cs::Int64 millis);

    pls::cs::Int64 GetTimeInMillis();
};
} // namespace java::util
}
