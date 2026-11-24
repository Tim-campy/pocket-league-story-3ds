// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.net.URLDecoder.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace java::net::URLDecoder {

static PLS_NOINLINE void cs_init_c0d8fc3e635445ff_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("java.net.URLDecoder", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_c0d8fc3e635445ff_slow(flag);
}

// M:java.net.URLDecoder.Decode(System.String)
pls::cs::String Decode(pls::cs::String s) {
    URLDecoder::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.net.URLDecoder.Decode(System.String)", kairo);
    {
        return URLDecoder::Decode(s, literal(u"UTF-8"));
    }
}

// M:java.net.URLDecoder.Decode(System.String,System.String)
pls::cs::String Decode(pls::cs::String s, pls::cs::String enc) {
    URLDecoder::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.net.URLDecoder.Decode(System.String,System.String)", kairo);
    {
        pls::cs::Ref<pls::cs::RuntimeEncoding> encoding = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::cs::RuntimeEncoding::GetEncoding(enc); });
        pls::cs::String text = literal(u"");
        ByteArray bytes = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(encoding)->GetBytes(literal(u" ")); });
        for (pls::cs::Int32 i = 0; i < bytes.length(); ++i) {
            text = pls::cs::String::concat(pls::cs::String::concat(text, literal(u"%")),
                                           pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return ([&]() {
                                                   auto cs_value = bytes[i];
                                                   return pls::cs::format_i32_hex(
                                                       static_cast<std::int32_t>(cs_value), 2, true);
                                               }());
                                           }));
        }
        s = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::cs::string_replace(s, literal(u"+"), text); });
        {
            pls::cs::Ref<pls::cs::MemoryStream> memoryStream = ([&]() {
                return pls::cs::make_ref<pls::cs::MemoryStream>();
            }());
            auto cs_flow_257 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<pls::cs::String> {
                    {
                        pls::cs::Int32 num = 0;
                        while (num < s.length()) {
                            if (pls::cs::cast_integral<pls::cs::Int32>(s.at(num)) ==
                                pls::cs::cast_integral<pls::cs::Int32>(u'%')) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        auto cs_receiver = memoryStream;
                                        auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return ([&]() {
                                                auto cs_value =
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return substring2(s, num + 1, 2);
                                                    });
                                                return pls::cs::byte_parse_hex_number(cs_value, true);
                                            }());
                                        });
                                        require(cs_receiver)->WriteByte(cs_arg0);
                                    }());
                                });
                                num += 3;
                            } else {
                                bytes = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> ByteArray {
                                        auto cs_receiver = encoding;
                                        auto cs_arg0 = pls::diagnostic::api_call(
                                            [&]() -> decltype(auto) { return char_string(s.at(num)); });
                                        return require(cs_receiver)->GetBytes(cs_arg0);
                                    }());
                                });
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return require(memoryStream)->Write(bytes, 0, bytes.length());
                                });
                                ++num;
                            }
                        }
                        return pls::cs::flow_return(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> pls::cs::String {
                                auto cs_receiver = encoding;
                                auto cs_arg0 = pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return require(memoryStream)->ToArray(); });
                                return require(cs_receiver)->GetString(cs_arg0);
                            }());
                        }));
                    }
                    return {};
                },
                [&]() {
                    if (memoryStream) {
                        require(memoryStream)->Dispose();
                    }
                });
            return cs_flow_257.value();
        }
    }
}
} // namespace java::net::URLDecoder
}
