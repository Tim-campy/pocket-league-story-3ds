// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.util.JTimeZone.hpp"

namespace pls::generated {
namespace java::util {

void JTimeZone::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(id_, visitor);
    pls::cs::trace_value(timezone_, visitor);
}

static PLS_NOINLINE void cs_init_f59223d2c773f078_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.util.JTimeZone", flag, []() {

    });
}

void JTimeZone::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_f59223d2c773f078_slow(flag);
}

void JTimeZone::create_init(pls::cs::Ref<JTimeZone> self, pls::cs::String id) {
    JTimeZone::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JTimeZone.#ctor(System.String)", kairo);
    {
        self->id_ = id;
        self->utcOffset_ = pls::cs::cast_integral<pls::cs::Int64>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::native_timezone_raw_offset(self->id_); }));
        pls::cs::Int32 milliseconds = pls::cs::to_int32((self->utcOffset_ % pls::cs::Int64(1000)));
        self->utcOffset_ = self->utcOffset_ / 1000ll;
        pls::cs::Int32 seconds = pls::cs::to_int32((self->utcOffset_ % pls::cs::Int64(60)));
        self->utcOffset_ = self->utcOffset_ / 60ll;
        pls::cs::Int32 minutes = pls::cs::to_int32((self->utcOffset_ % pls::cs::Int64(60)));
        self->utcOffset_ = self->utcOffset_ / 60ll;
        pls::cs::Int32 hours = pls::cs::to_int32((self->utcOffset_ % pls::cs::Int64(24)));
        self->utcOffset_ = self->utcOffset_ / 24ll;
        pls::cs::Int32 days = pls::cs::to_int32(self->utcOffset_);
        self->timezone_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> pls::cs::Ref<pls::cs::TimeZoneInfo> {
                auto cs_arg0 = self->id_;
                auto cs_arg1 = ([&]() {
                    auto cs_arg0 = days;
                    auto cs_arg1 = hours;
                    auto cs_arg2 = minutes;
                    auto cs_arg3 = seconds;
                    auto cs_arg4 = milliseconds;
                    return pls::cs::TimeSpan(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
                }());
                auto cs_arg2 = self->id_;
                auto cs_arg3 = self->id_;
                return pls::cs::TimeZoneInfo::CreateCustomTimeZone(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }());
        });
    }
}

// M:java.util.JTimeZone.#ctor(System.String)
pls::cs::Ref<JTimeZone> JTimeZone::create(pls::cs::String id) {
    JTimeZone::ensure_initialized();
    auto self = pls::cs::make_ref<JTimeZone>();
    JTimeZone::create_init(self, id);
    return self;
}

// M:java.util.JTimeZone.GetDefault
pls::cs::Ref<JTimeZone> JTimeZone::GetDefault() {
    JTimeZone::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JTimeZone.GetDefault", kairo);
    {
        return JTimeZone::create(
            pls::diagnostic::api_call([&]() -> decltype(auto) { return pls::kairo::native_timezone_id(); }));
    }
}

// M:java.util.JTimeZone.GetTimeZoneInfo
pls::cs::Ref<pls::cs::TimeZoneInfo> JTimeZone::GetTimeZoneInfo() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JTimeZone.GetTimeZoneInfo", kairo);
    {
        return timezone_;
    }
}
} // namespace java::util
}
