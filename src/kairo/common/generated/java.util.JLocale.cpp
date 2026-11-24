// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.util.JLocale.hpp"
using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::generated {
namespace java::util {

void JLocale::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(language_, visitor);
    pls::cs::trace_value(country_, visitor);
}

bool JLocale::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return JLocale::Equals(pls::cs::static_pointer_cast<JLocale>(shared_from_this()), obj);
}

static pls::cs::Ref<JLocale> JLocale_CANADA_storage{};

static pls::cs::Ref<JLocale> JLocale_CANADA_FRENCH_storage{};

static pls::cs::Ref<JLocale> JLocale_CHINA_storage{};

static pls::cs::Ref<JLocale> JLocale_CHINESE_storage{};

static pls::cs::Ref<JLocale> JLocale_defaultLocale_storage{};

static pls::cs::Ref<JLocale> JLocale_ENGLISH_storage{};

static pls::cs::Ref<JLocale> JLocale_FRANCE_storage{};

static pls::cs::Ref<JLocale> JLocale_FRENCH_storage{};

static pls::cs::Ref<JLocale> JLocale_GERMAN_storage{};

static pls::cs::Ref<JLocale> JLocale_GERMANY_storage{};

static pls::cs::Ref<JLocale> JLocale_ITALIAN_storage{};

static pls::cs::Ref<JLocale> JLocale_ITALY_storage{};

static pls::cs::Ref<JLocale> JLocale_JAPAN_storage{};

static pls::cs::Ref<JLocale> JLocale_JAPANESE_storage{};

static pls::cs::Ref<JLocale> JLocale_KOREA_storage{};

static pls::cs::Ref<JLocale> JLocale_KOREAN_storage{};

static pls::cs::Ref<JLocale> JLocale_PRC_storage{};

static pls::cs::Ref<JLocale> JLocale_ROOT_storage{};

static pls::cs::Ref<JLocale> JLocale_SIMPLIFIED_CHINESE_storage{};

static pls::cs::Ref<JLocale> JLocale_TAIWAN_storage{};

static pls::cs::Ref<JLocale> JLocale_TRADITIONAL_CHINESE_storage{};

static pls::cs::Ref<JLocale> JLocale_UK_storage{};

static pls::cs::Ref<JLocale> JLocale_US_storage{};

static PLS_NOINLINE void cs_init_c0fae45144034cf9_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(JLocale_CANADA_storage, visitor);
        pls::cs::trace_value(JLocale_CANADA_FRENCH_storage, visitor);
        pls::cs::trace_value(JLocale_CHINA_storage, visitor);
        pls::cs::trace_value(JLocale_CHINESE_storage, visitor);
        pls::cs::trace_value(JLocale_defaultLocale_storage, visitor);
        pls::cs::trace_value(JLocale_ENGLISH_storage, visitor);
        pls::cs::trace_value(JLocale_FRANCE_storage, visitor);
        pls::cs::trace_value(JLocale_FRENCH_storage, visitor);
        pls::cs::trace_value(JLocale_GERMAN_storage, visitor);
        pls::cs::trace_value(JLocale_GERMANY_storage, visitor);
        pls::cs::trace_value(JLocale_ITALIAN_storage, visitor);
        pls::cs::trace_value(JLocale_ITALY_storage, visitor);
        pls::cs::trace_value(JLocale_JAPAN_storage, visitor);
        pls::cs::trace_value(JLocale_JAPANESE_storage, visitor);
        pls::cs::trace_value(JLocale_KOREA_storage, visitor);
        pls::cs::trace_value(JLocale_KOREAN_storage, visitor);
        pls::cs::trace_value(JLocale_PRC_storage, visitor);
        pls::cs::trace_value(JLocale_ROOT_storage, visitor);
        pls::cs::trace_value(JLocale_SIMPLIFIED_CHINESE_storage, visitor);
        pls::cs::trace_value(JLocale_TAIWAN_storage, visitor);
        pls::cs::trace_value(JLocale_TRADITIONAL_CHINESE_storage, visitor);
        pls::cs::trace_value(JLocale_UK_storage, visitor);
        pls::cs::trace_value(JLocale_US_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("java.util.JLocale", flag, []() {
        JLocale_CANADA_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.CANADA", [&]() { return JLocale::create(literal(u"en"), literal(u"CA")); });
        JLocale_CANADA_FRENCH_storage =
            pls::cs::evaluate_type_initializer_field("F:java.util.JLocale.CANADA_FRENCH", [&]() {
                return JLocale::create(literal(u"fr"), literal(u"CA"));
            });
        JLocale_CHINA_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.CHINA", [&]() { return JLocale::create(literal(u"zh"), literal(u"CN")); });
        JLocale_CHINESE_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.CHINESE", [&]() { return JLocale::create(literal(u"zh"), literal(u"")); });
        JLocale_ENGLISH_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.ENGLISH", [&]() { return JLocale::create(literal(u"en"), literal(u"")); });
        JLocale_FRANCE_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.FRANCE", [&]() { return JLocale::create(literal(u"fr"), literal(u"FR")); });
        JLocale_FRENCH_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.FRENCH", [&]() { return JLocale::create(literal(u"fr"), literal(u"")); });
        JLocale_GERMAN_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.GERMAN", [&]() { return JLocale::create(literal(u"de"), literal(u"")); });
        JLocale_GERMANY_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.GERMANY", [&]() { return JLocale::create(literal(u"de"), literal(u"DE")); });
        JLocale_ITALIAN_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.ITALIAN", [&]() { return JLocale::create(literal(u"it"), literal(u"")); });
        JLocale_ITALY_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.ITALY", [&]() { return JLocale::create(literal(u"it"), literal(u"IT")); });
        JLocale_JAPAN_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.JAPAN", [&]() { return JLocale::create(literal(u"ja"), literal(u"JP")); });
        JLocale_JAPANESE_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.JAPANESE", [&]() { return JLocale::create(literal(u"ja"), literal(u"")); });
        JLocale_KOREA_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.KOREA", [&]() { return JLocale::create(literal(u"ko"), literal(u"KR")); });
        JLocale_KOREAN_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.KOREAN", [&]() { return JLocale::create(literal(u"ko"), literal(u"")); });
        JLocale_PRC_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.PRC", [&]() { return JLocale::create(literal(u"zh"), literal(u"CN")); });
        JLocale_ROOT_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.ROOT", [&]() { return JLocale::create(literal(u""), literal(u"")); });
        JLocale_SIMPLIFIED_CHINESE_storage =
            pls::cs::evaluate_type_initializer_field("F:java.util.JLocale.SIMPLIFIED_CHINESE", [&]() {
                return JLocale::create(literal(u"zh"), literal(u"CN"));
            });
        JLocale_TAIWAN_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.TAIWAN", [&]() { return JLocale::create(literal(u"zh"), literal(u"TW")); });
        JLocale_TRADITIONAL_CHINESE_storage =
            pls::cs::evaluate_type_initializer_field("F:java.util.JLocale.TRADITIONAL_CHINESE", [&]() {
                return JLocale::create(literal(u"zh"), literal(u"TW"));
            });
        JLocale_UK_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.UK", [&]() { return JLocale::create(literal(u"en"), literal(u"GB")); });
        JLocale_US_storage = pls::cs::evaluate_type_initializer_field(
            "F:java.util.JLocale.US", [&]() { return JLocale::create(literal(u"en"), literal(u"US")); });
    });
}

void JLocale::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_c0fae45144034cf9_slow(flag);
}

pls::cs::Ref<JLocale>& JLocale::CANADA() {
    JLocale::ensure_initialized();
    return JLocale_CANADA_storage;
}

pls::cs::Ref<JLocale>& JLocale::CANADA_FRENCH() {
    JLocale::ensure_initialized();
    return JLocale_CANADA_FRENCH_storage;
}

pls::cs::Ref<JLocale>& JLocale::CHINA() {
    JLocale::ensure_initialized();
    return JLocale_CHINA_storage;
}

pls::cs::Ref<JLocale>& JLocale::CHINESE() {
    JLocale::ensure_initialized();
    return JLocale_CHINESE_storage;
}

pls::cs::Ref<JLocale>& JLocale::defaultLocale() {
    JLocale::ensure_initialized();
    return JLocale_defaultLocale_storage;
}

pls::cs::Ref<JLocale>& JLocale::ENGLISH() {
    JLocale::ensure_initialized();
    return JLocale_ENGLISH_storage;
}

pls::cs::Ref<JLocale>& JLocale::FRANCE() {
    JLocale::ensure_initialized();
    return JLocale_FRANCE_storage;
}

pls::cs::Ref<JLocale>& JLocale::FRENCH() {
    JLocale::ensure_initialized();
    return JLocale_FRENCH_storage;
}

pls::cs::Ref<JLocale>& JLocale::GERMAN() {
    JLocale::ensure_initialized();
    return JLocale_GERMAN_storage;
}

pls::cs::Ref<JLocale>& JLocale::GERMANY() {
    JLocale::ensure_initialized();
    return JLocale_GERMANY_storage;
}

pls::cs::Ref<JLocale>& JLocale::ITALIAN() {
    JLocale::ensure_initialized();
    return JLocale_ITALIAN_storage;
}

pls::cs::Ref<JLocale>& JLocale::ITALY() {
    JLocale::ensure_initialized();
    return JLocale_ITALY_storage;
}

pls::cs::Ref<JLocale>& JLocale::JAPAN() {
    JLocale::ensure_initialized();
    return JLocale_JAPAN_storage;
}

pls::cs::Ref<JLocale>& JLocale::JAPANESE() {
    JLocale::ensure_initialized();
    return JLocale_JAPANESE_storage;
}

pls::cs::Ref<JLocale>& JLocale::KOREA() {
    JLocale::ensure_initialized();
    return JLocale_KOREA_storage;
}

pls::cs::Ref<JLocale>& JLocale::KOREAN() {
    JLocale::ensure_initialized();
    return JLocale_KOREAN_storage;
}

pls::cs::Ref<JLocale>& JLocale::PRC() {
    JLocale::ensure_initialized();
    return JLocale_PRC_storage;
}

pls::cs::Ref<JLocale>& JLocale::ROOT() {
    JLocale::ensure_initialized();
    return JLocale_ROOT_storage;
}

pls::cs::Ref<JLocale>& JLocale::SIMPLIFIED_CHINESE() {
    JLocale::ensure_initialized();
    return JLocale_SIMPLIFIED_CHINESE_storage;
}

pls::cs::Ref<JLocale>& JLocale::TAIWAN() {
    JLocale::ensure_initialized();
    return JLocale_TAIWAN_storage;
}

pls::cs::Ref<JLocale>& JLocale::TRADITIONAL_CHINESE() {
    JLocale::ensure_initialized();
    return JLocale_TRADITIONAL_CHINESE_storage;
}

pls::cs::Ref<JLocale>& JLocale::UK() {
    JLocale::ensure_initialized();
    return JLocale_UK_storage;
}

pls::cs::Ref<JLocale>& JLocale::US() {
    JLocale::ensure_initialized();
    return JLocale_US_storage;
}

void JLocale::create_init(pls::cs::Ref<JLocale> self, pls::cs::String language, pls::cs::String country) {
    JLocale::ensure_initialized();
    self->language_ = literal(u"");
    self->country_ = literal(u"");
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JLocale.#ctor(System.String,System.String)", kairo);
    {
        self->language_ = language;
        self->country_ = country;
    }
}

pls::cs::Int32 JLocale::GetHashCode(pls::cs::Ref<JLocale> self) {
    return require(self)->JLocale::GetHashCode();
}

// M:java.util.JLocale.op_Equality(java.util.JLocale,java.util.JLocale)
bool JLocale::op_Equality(pls::cs::Ref<JLocale> obj1, pls::cs::Ref<JLocale> obj2) {
    JLocale::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JLocale.op_Equality(java.util.JLocale,java.util.JLocale)",
                     kairo);
    {
        if (is_null(pls::cs::box(obj1)) || is_null(pls::cs::box(obj2))) {
            return pls::cs::box(pls::cs::box(obj1)) == pls::cs::box(obj2);
        }
        return require(obj1)->Equals(pls::cs::box(obj2));
    }
}

// M:java.util.JLocale.op_Inequality(java.util.JLocale,java.util.JLocale)
bool JLocale::op_Inequality(pls::cs::Ref<JLocale> obj1, pls::cs::Ref<JLocale> obj2) {
    JLocale::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JLocale.op_Inequality(java.util.JLocale,java.util.JLocale)",
                     kairo);
    {
        return !(([&]() {
            pls::cs::Ref<JLocale> cs_left = obj1;
            pls::cs::Ref<JLocale> cs_right = obj2;
            return JLocale::op_Equality(cs_left, cs_right);
        }()));
    }
}

// M:java.util.JLocale.#ctor(System.String,System.String)
pls::cs::Ref<JLocale> JLocale::create(pls::cs::String language, pls::cs::String country) {
    JLocale::ensure_initialized();
    auto self = pls::cs::make_ref<JLocale>();
    JLocale::create_init(self, language, country);
    return self;
}

// M:java.util.JLocale.GetDefault
pls::cs::Ref<JLocale> JLocale::GetDefault() {
    JLocale::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JLocale.GetDefault", kairo);
    {
        if ([&]() {
                pls::cs::Ref<JLocale> cs_left = JLocale::defaultLocale();
                pls::cs::Ref<JLocale> cs_right = pls::cs::Ref<JLocale>{};
                return JLocale::op_Equality(cs_left, cs_right);
            }()) {
            StringArray array =
                pls::diagnostic::api_call([&]() -> decltype(auto) { return pls::kairo::native_locale(); });
            JLocale::defaultLocale() = JLocale::create(array[0], array[1]);
        }
        return JLocale::defaultLocale();
    }
}

// M:java.util.JLocale.GetLanguage
pls::cs::String JLocale::GetLanguage() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JLocale.GetLanguage", kairo);
    {
        return language_;
    }
}

// M:java.util.JLocale.GetCountry
pls::cs::String JLocale::GetCountry() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JLocale.GetCountry", kairo);
    {
        return country_;
    }
}

// M:java.util.JLocale.Equals(System.Object)
bool JLocale::Equals(pls::cs::Ref<JLocale> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JLocale.Equals(System.Object)", kairo);
    {
        if (!is_null(obj) && is_instance<pls::cs::Ref<JLocale>>(pls::cs::box(obj))) {
            if ([&]() -> bool {
                    auto cs_left = self->language_;
                    auto cs_right = require((pls::cs::unbox<pls::cs::Ref<JLocale>>(obj)))->language_;
                    return cs_left == cs_right;
                }()) {
                {
                    auto cs_left_7 = self->country_;
                    auto cs_right_7 = require((pls::cs::unbox<pls::cs::Ref<JLocale>>(obj)))->country_;
                    return cs_left_7 == cs_right_7;
                }
            }
            return false;
        }
        return pls::cs::box(self) == pls::cs::box(obj);
    }
}

// M:java.util.JLocale.GetHashCode
std::int32_t JLocale::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.util.JLocale.GetHashCode", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
                return require(cs_receiver)->pls::cs::Object::GetHashCode();
            }());
        });
    }
}
} // namespace java::util
}
