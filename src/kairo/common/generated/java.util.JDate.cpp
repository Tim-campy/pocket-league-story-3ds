// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.util.JDate.hpp"

namespace pls::generated {
namespace java::util {

void JDate::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
}

bool JDate::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return JDate::Equals(pls::cs::static_pointer_cast<JDate>(shared_from_this()), obj);
}

static pls::cs::DateTime JDate_UNIX_TIME_storage{};

static PLS_NOINLINE void cs_init_66dbad5679f8ab87_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots(
        [](const pls::cs::EdgeVisitor& visitor) { pls::cs::trace_value(JDate_UNIX_TIME_storage, visitor); });
    static pls::cs::TypeInitState state;
    state.run("java.util.JDate", flag, []() {
        JDate_UNIX_TIME_storage =
            pls::cs::evaluate_type_initializer_field("F:java.util.JDate.UNIX_TIME", [&]() {
                return ([&]() {
                    auto cs_arg0 = 1970;
                    auto cs_arg1 = 1;
                    auto cs_arg2 = 1;
                    auto cs_arg3 = 0;
                    auto cs_arg4 = 0;
                    auto cs_arg5 = 0;
                    auto cs_arg6 = static_cast<pls::cs::DateTimeKind>(1) /* DateTimeKind.Utc */;
                    return pls::cs::DateTime(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                }());
            });
    });
}

void JDate::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_66dbad5679f8ab87_slow(flag);
}

pls::cs::DateTime& JDate::UNIX_TIME() {
    JDate::ensure_initialized();
    return JDate_UNIX_TIME_storage;
}

void JDate::create_init(pls::cs::Ref<JDate> self) {
    JDate::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JDate.#ctor", kairo);
    {
        self->date_ = pls::cs::DateTime::get_UtcNow();
    }
}

void JDate::create_init(pls::cs::Ref<JDate> self, pls::cs::Int64 date) {
    JDate::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JDate.#ctor(System.Int64)", kairo);
    {
        self->SetTime(date);
    }
}

pls::cs::Int32 JDate::GetHashCode(pls::cs::Ref<JDate> self) {
    return require(self)->JDate::GetHashCode();
}

// M:java.util.JDate.#ctor
pls::cs::Ref<JDate> JDate::create() {
    JDate::ensure_initialized();
    auto self = pls::cs::make_ref<JDate>();
    JDate::create_init(self);
    return self;
}

// M:java.util.JDate.#ctor(System.Int64)
pls::cs::Ref<JDate> JDate::create(pls::cs::Int64 date) {
    JDate::ensure_initialized();
    auto self = pls::cs::make_ref<JDate>();
    JDate::create_init(self, date);
    return self;
}

// M:java.util.JDate.Equals(System.Object)
bool JDate::Equals(pls::cs::Ref<JDate> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JDate.Equals(System.Object)", kairo);
    {
        if (is_instance<pls::cs::Ref<JDate>>(pls::cs::box(obj))) {
            {
                auto cs_left_4 = pls::cs::to_int64((self->date_.get_TimeOfDay()).get_TotalMilliseconds());
                auto cs_right_4 = pls::cs::to_int64(
                    (require((pls::cs::unbox<pls::cs::Ref<JDate>>(obj)))->date_.get_TimeOfDay())
                        .get_TotalMilliseconds());
                return cs_left_4 == cs_right_4;
            }
        }
        return false;
    }
}

// M:java.util.JDate.GetHashCode
std::int32_t JDate::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JDate.GetHashCode", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
                return require(cs_receiver)->pls::cs::Object::GetHashCode();
            }());
        });
    }
}

// M:java.util.JDate.GetTime
pls::cs::Int64 JDate::GetTime() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JDate.GetTime", kairo);
    {
        return pls::cs::to_int64((date_ - JDate::UNIX_TIME()).get_TotalMilliseconds());
    }
}

// M:java.util.JDate.SetTime(System.Int64)
void JDate::SetTime(pls::cs::Int64 time) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JDate.SetTime(System.Int64)", kairo);
    {
        date_ = ([&]() {
            auto cs_arg0 = JDate::UNIX_TIME().get_Year();
            auto cs_arg1 = JDate::UNIX_TIME().get_Month();
            auto cs_arg2 = JDate::UNIX_TIME().get_Day();
            auto cs_arg3 = JDate::UNIX_TIME().get_Hour();
            auto cs_arg4 = JDate::UNIX_TIME().get_Minute();
            auto cs_arg5 = JDate::UNIX_TIME().get_Second();
            auto cs_arg6 = JDate::UNIX_TIME().get_Kind();
            return pls::cs::DateTime(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
        }());
        date_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> pls::cs::DateTime {
                auto cs_receiver = date_;
                auto cs_arg0 = pls::cs::Double(time);
                return cs_receiver.AddMilliseconds(cs_arg0);
            }());
        });
    }
}

// M:java.util.JDate.GetDateTime
pls::cs::DateTime JDate::GetDateTime() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JDate.GetDateTime", kairo);
    {
        return date_;
    }
}
} // namespace java::util
}
