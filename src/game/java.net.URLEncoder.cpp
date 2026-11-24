// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.net.URLEncoder.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace java::net::URLEncoder {

static pls::cs::Dictionary<char16_t, pls::cs::String> convertTable__storage{};

static PLS_NOINLINE void cs_init_1406fd70a8ee6f2f_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots(
        [](const pls::cs::EdgeVisitor& visitor) { pls::cs::trace_value(convertTable__storage, visitor); });
    static pls::cs::TypeInitState state;
    state.run("java.net.URLEncoder", flag, []() {
        {
            URLEncoder::convertTable_() = pls::cs::Dictionary<char16_t, pls::cs::String>::make();
            PLS_API(URLEncoder::convertTable_().Clear());
            PLS_API(URLEncoder::convertTable_().Add(u' ', literal(u"+")));
            PLS_API(URLEncoder::convertTable_().Add(u'*', literal(u"*")));
            PLS_API(URLEncoder::convertTable_().Add(u'-', literal(u"-")));
            PLS_API(URLEncoder::convertTable_().Add(u'.', literal(u".")));
            PLS_API(URLEncoder::convertTable_().Add(u'_', literal(u"_")));
        }
    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_1406fd70a8ee6f2f_slow(flag);
}

pls::cs::Dictionary<char16_t, pls::cs::String>& convertTable_() {
    URLEncoder::ensure_initialized();
    return convertTable__storage;
}

// M:java.net.URLEncoder.Encode(System.String)
pls::cs::String Encode(pls::cs::String s) {
    URLEncoder::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.net.URLEncoder.Encode(System.String)", kairo);
    {
        return URLEncoder::Encode(s, literal(u"UTF-8"));
    }
}

// M:java.net.URLEncoder.Encode(System.String,System.String)
pls::cs::String Encode(pls::cs::String s, pls::cs::String enc) {
    URLEncoder::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.net.URLEncoder.Encode(System.String,System.String)", kairo);
    {
        pls::cs::Ref<pls::cs::RuntimeEncoding> encoding = PLS_API(pls::cs::RuntimeEncoding::GetEncoding(enc));
        pls::cs::Ref<pls::cs::StringBuilder> stringBuilder = ([&]() {
            return pls::cs::make_ref<pls::cs::StringBuilder>();
        }());
        pls::cs::Array<char16_t> array = PLS_API(to_chars(s));
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            char16_t c = array[i];
            pls::cs::String value = pls::cs::String{};
            if (PLS_API(([&]() {
                    auto cs_dictionary = URLEncoder::convertTable_();
                    auto cs_key = c;
                    return cs_dictionary.TryGetValue(cs_key, value);
                }()))) {
                PLS_API(require(stringBuilder)->Append(c));
                continue;
            }
            ByteArray bytes = PLS_API(([&]() -> ByteArray {
                auto cs_receiver = encoding;
                auto cs_arg0 = PLS_API(char_string(c));
                return require(cs_receiver)->GetBytes(cs_arg0);
            }()));
            for (pls::cs::Int32 j = 0; j < bytes.length(); ++j) {
                PLS_API(([&]() -> pls::cs::Ref<pls::cs::StringBuilder> {
                    auto cs_receiver = stringBuilder;
                    auto cs_arg0 = pls::cs::String::concat(
                        literal(u"%"), PLS_API(([&]() {
                            auto cs_value = bytes[j];
                            return pls::cs::format_i32_hex(static_cast<std::int32_t>(cs_value), 2, true);
                        }())));
                    return require(cs_receiver)->Append(cs_arg0);
                }()));
            }
        }
        return PLS_API(require(stringBuilder)->ToString());
    }
}
} // namespace java::net::URLEncoder
}
