// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.InputStream.hpp"
#include "java.lang.JInteger.hpp"
#include "java.lang.JString.hpp"
#include "java.lang.StringEx.hpp"
#include "kairo.common.cfg.Config.hpp"
#include "kairo.unity.util.FastVector.hpp"
#include "kairo.unity.util.FastVector_1.hpp"
#include "kairo.unity.util.JarInflater.hpp"
#include "kairo.unity.util.Language.hpp"
#include "kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.util.FastVector_1_templates.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::generated {
namespace kairo::unity::util::StringUtil {

static PLS_NOINLINE void cs_init_1ff3292665c8e0c4_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.StringUtil", flag, []() {

    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_1ff3292665c8e0c4_slow(flag);
}

// M:kairo.unity.util.StringUtil.Replace(System.String,System.String)
pls::cs::String Replace(pls::cs::String value, pls::cs::String args) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StringUtil.Replace(System.String,System.String)",
                     kairo);
    {
        StringArray array = StringUtil::Split(args, literal(u"\t"), false, false, false);
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            value = StringUtil::Replace(
                value,
                pls::cs::String::concat(pls::cs::String::concat(literal(u"<"), integer_string(i)),
                                        literal(u">")),
                Language::TranslateText(array[i], false));
        }
        return value;
    }
}

// M:kairo.unity.util.StringUtil.Replace(System.String,System.String,System.String)
pls::cs::String Replace(pls::cs::String value, pls::cs::String oldStr, pls::cs::String newStr) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StringUtil.Replace(System.String,System.String,System.String)",
                     kairo);
    {
        while (true) {
            pls::cs::Int32 num = PLS_API(pls::cs::culture_index_of(value, oldStr));
            if (num == -1) {
                break;
            }
            value = ([&]() {
                auto cs_left =
                    pls::cs::String::concat(java::lang::StringEx::SubstringJ(value, 0, num), newStr);
                auto cs_right =
                    java::lang::StringEx::SubstringJ(value, num + java::lang::StringEx::Length(oldStr));
                return pls::cs::String::concat(cs_left, cs_right);
            }());
        }
        return value;
    }
}

// M:kairo.unity.util.StringUtil.Split(System.String,System.String)
StringArray Split(pls::cs::String value, pls::cs::String sep) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StringUtil.Split(System.String,System.String)",
                     kairo);
    {
        return StringUtil::Split(value, sep, true, false, false);
    }
}

// M:kairo.unity.util.StringUtil.Split(System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
StringArray Split(pls::cs::String text, pls::cs::String sep, bool trim, bool excludeZeroLength, bool escape) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.StringUtil.Split(System.String,System.String,System.Boolean,System.Boolean,System.Boolean)",
        kairo);
    {
        pls::cs::Ref<FastVector> fastVector{};
        pls::cs::Int32 num{};
        pls::cs::String text2{};
        StringArray array{};
        pls::cs::Int32 num2{};
        bool flag{};
        pls::cs::Int32 num3{};
        pls::cs::Int32 i{};
        pls::cs::Int32 num4{};
        pls::cs::Int32 j{};
        {
            if (is_null(text) || java::lang::StringEx::Length(text) == 0) {
                return StringArray::make(0);
            }
            fastVector = pls::cs::Ref<FastVector>{};
            num = pls::cs::Int32{};
            text2 = pls::cs::String{};
            array = StringArray{};
            num2 = pls::cs::Int32{};
            fastVector = FastVector::create();
            num = 0;
            text2 = literal(u"");
            do {
            cs_label_IL_0020:;
                num2 = PLS_API(pls::cs::culture_index_of(text, sep, num));
                if (num2 == -1) {
                    text2 = pls::cs::String::concat(text2, PLS_API(substring1(text, num)));
                } else {
                    if (escape) {
                        flag = true;
                        num3 = num2 - 1;
                        while (num3 >= num) {
                            if (pls::cs::cast_integral<pls::cs::Int32>(java::lang::StringEx::CharAt(
                                    text, num3)) != pls::cs::cast_integral<pls::cs::Int32>(u'\\')) {
                                break;
                            }
                            flag = !flag;
                            --num3;
                        }
                        if (!flag) {
                            text2 = pls::cs::String::concat(
                                pls::cs::String::concat(
                                    text2, java::lang::StringEx::SubstringJ(text, num, num2 - 1)),
                                sep);
                            num = num2 + java::lang::StringEx::Length(sep);
                            goto cs_label_IL_0020;
                        }
                    }
                    text2 = pls::cs::String::concat(text2, java::lang::StringEx::SubstringJ(text, num, num2));
                    num = num2 + java::lang::StringEx::Length(sep);
                }
                if (escape) {
                    text2 = StringUtil::Escape(text2);
                }
                if (trim) {
                    i = pls::cs::Int32{};
                    for (([&]() {
                             pls::cs::Int32 cs_value = 0;
                             i = cs_value;
                             return cs_value;
                         }());
                         i < text2.length(); ++i) {
                        if (pls::cs::cast_integral<pls::cs::Int32>(text2.at(i)) >
                            pls::cs::cast_integral<pls::cs::Int32>(u' ')) {
                            break;
                        }
                    }
                    num4 = pls::cs::Int32(text2.length()) - 1;
                    while (num4 >= 0) {
                        if (pls::cs::cast_integral<pls::cs::Int32>(text2.at(num4)) >
                            pls::cs::cast_integral<pls::cs::Int32>(u' ')) {
                            break;
                        }
                        --num4;
                    }
                    if (num4 - i < 0) {
                        text2 = literal(u"");
                    } else {
                        text2 = PLS_API(substring2(text2, i, num4 - i + 1));
                    }
                }
                if (!excludeZeroLength || java::lang::StringEx::Length(text2) > 0) {
                    util::FastVector_2_AddElement(require(fastVector), pls::cs::box(text2));
                }
                text2 = literal(u"");
            } while (num2 != -1);
            array = StringArray::make(util::FastVector_2_Size(require(fastVector)));
            for (j = 0; j < array.length(); ++j) {
                array[j] =
                    pls::cs::unbox<pls::cs::String>(util::FastVector_2_ElementAt(require(fastVector), j));
            }
            return array;
        }
    }
}

// M:kairo.unity.util.StringUtil.Escape(System.String)
pls::cs::String Escape(pls::cs::String text) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StringUtil.Escape(System.String)", kairo);
    {
        pls::cs::Ref<pls::cs::StringBuilder> stringBuilder = ([&]() {
            return pls::cs::make_ref<pls::cs::StringBuilder>();
        }());
        pls::cs::Int32 num = 0;
        while (num < java::lang::StringEx::Length(text)) {
            pls::cs::Int32 num2 = PLS_API(index_char2(text, u'\\', num));
            if (num2 == -1) {
                PLS_API(([&]() -> pls::cs::Ref<pls::cs::StringBuilder> {
                    auto cs_receiver = stringBuilder;
                    auto cs_arg0 = PLS_API(substring1(text, num));
                    return require(cs_receiver)->Append(cs_arg0);
                }()));
                break;
            }
            PLS_API(([&]() -> pls::cs::Ref<pls::cs::StringBuilder> {
                auto cs_receiver = stringBuilder;
                auto cs_arg0 = java::lang::StringEx::SubstringJ(text, num, num2);
                return require(cs_receiver)->Append(cs_arg0);
            }()));
            if (num2 + 1 < java::lang::StringEx::Length(text)) {
                char16_t c = java::lang::StringEx::CharAt(text, num2 + 1);
                if (pls::cs::cast_integral<pls::cs::Int32>(c) ==
                    pls::cs::cast_integral<pls::cs::Int32>(u'\\')) {
                    PLS_API(require(stringBuilder)->Append(u'\\'));
                } else if (pls::cs::cast_integral<pls::cs::Int32>(c) ==
                           pls::cs::cast_integral<pls::cs::Int32>(u't')) {
                    PLS_API(require(stringBuilder)->Append(char16_t(9)));
                } else if (pls::cs::cast_integral<pls::cs::Int32>(c) ==
                           pls::cs::cast_integral<pls::cs::Int32>(u'n')) {
                    PLS_API(require(stringBuilder)->Append(char16_t(10)));
                }
            }
            num = num2 + 2;
        }
        return PLS_API(require(stringBuilder)->ToString());
    }
}

// M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32)
pls::cs::String FormatString(pls::cs::String value, pls::cs::Int32 len) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32)",
                     kairo);
    {
        return StringUtil::FormatString(value, len, u' ', false);
    }
}

// M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32,System.Char)
pls::cs::String FormatString(pls::cs::String value, pls::cs::Int32 len, char16_t padding) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32,System.Char)",
                     kairo);
    {
        return StringUtil::FormatString(value, len, padding, false);
    }
}

// M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32,System.Char,System.Boolean)
pls::cs::String FormatString(pls::cs::String value, pls::cs::Int32 len, char16_t padding, bool left) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.StringUtil.FormatString(System.String,System.Int32,System.Char,System.Boolean)",
        kairo);
    {
        pls::cs::String text = literal(u"");
        pls::cs::Int32 num = java::lang::StringEx::GetBytes(java::lang::JString::ValueOf(padding)).length();
        pls::cs::Int32 num2 = len - java::lang::StringEx::GetBytes(value).length();
        for (pls::cs::Int32 i = 0; i < num2; i += num) {
            text = pls::cs::String::concat(text, char_string(padding));
        }
        if (left) {
            return pls::cs::String::concat(value, text);
        }
        return pls::cs::String::concat(text, value);
    }
}

// M:kairo.unity.util.StringUtil.LoadStringArray(kairo.unity.util.JarInflater,System.String)
StringArray LoadStringArray(pls::cs::Ref<JarInflater> jar, pls::cs::String fileName) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.StringUtil.LoadStringArray(kairo.unity.util.JarInflater,System.String)", kairo);
    {
        return StringUtil::LoadStringArray(jar, fileName, false);
    }
}

// M:kairo.unity.util.StringUtil.LoadStringArray(kairo.unity.util.JarInflater,System.String,System.Boolean)
StringArray LoadStringArray(pls::cs::Ref<JarInflater> jar, pls::cs::String fileName, bool zeroSkip) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.StringUtil.LoadStringArray(kairo.unity.util.JarInflater,System.String,System.Boolean)",
        kairo);
    {
        pls::cs::Ref<java::io::InputStream> inputStream = pls::cs::Ref<java::io::InputStream>{};
        {
            auto cs_flow_24 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<StringArray> {
                    {
                        inputStream = require(jar)->GetInputStream(fileName);
                        if (is_null(inputStream)) {
                            return pls::cs::flow_return(StringArray{});
                        }
                        return pls::cs::flow_return(
                            StringUtil::LoadStringArrayInputStreamBool(inputStream, zeroSkip));
                    }
                    return {};
                },
                [&]() {
                    ([&]() -> void {
                        auto cs_conditional = inputStream;
                        if (!cs_conditional)
                            return;
                        ([&]() -> void {
                            auto cs_receiver =
                                static_cast<pls::cs::Ref<java::io::InputStream>>(cs_conditional);
                            if (!cs_receiver)
                                throw pls::cs::NullReferenceException();
                            cs_receiver->Close();
                        }());
                    }());
                    inputStream = pls::cs::Ref<java::io::InputStream>{};
                });
            return cs_flow_24.value();
        }
    }
}

// M:kairo.unity.util.StringUtil.LoadStringArray(java.io.InputStream,System.Boolean)
StringArray LoadStringArrayInputStreamBool(pls::cs::Ref<java::io::InputStream> stream, bool zeroSkip) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StringUtil.LoadStringArray(java.io.InputStream,System.Boolean)",
                     kairo);
    {
        return StringUtil::Split(java::lang::JString::New(StreamUtil::Read(stream)), literal(u"\n"), false,
                                 zeroSkip, false);
    }
}

// M:kairo.unity.util.StringUtil.SplitIntegers(System.String,System.String)
IntArray SplitIntegers(pls::cs::String src, pls::cs::String sep) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.StringUtil.SplitIntegers(System.String,System.String)", kairo);
    {
        StringArray array = StringUtil::Split(src, sep, true, true, false);
        IntArray array2 = IntArray::make(array.length());
        for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
            array2[i] = java::lang::JInteger::ParseInt(array[i]);
        }
        return array2;
    }
}

// M:kairo.unity.util.StringUtil.GetString(System.Byte[])
pls::cs::String GetString(ByteArray bytes) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StringUtil.GetString(System.Byte[])", kairo);
    {
        pls::cs::String code = StringUtil::GetCode(bytes);
        if (!is_null(code)) {
            try {
                return java::lang::JString::New(bytes, code);
            } catch (const pls::cs::Exception& cs_caught_21) {
                pls::cs::capture_exception(cs_caught_21);
                {
                }
            }
        }
        return java::lang::JString::New(bytes);
    }
}

// M:kairo.unity.util.StringUtil.GetCode(System.Byte[])
pls::cs::String GetCode(ByteArray bytes) {
    StringUtil::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.StringUtil.GetCode(System.Byte[])", kairo);
    {
        common::cfg::Config::ensure_initialized();

        std::uint8_t recoveredPdbConstByte = pls::cs::cast_integral<std::uint8_t>(0);
        StringArray array = StringArray::from({literal(u"UTF-8"), literal(u"Shift_JIS")});
        if (bytes.length() == 0) {
            return array[0];
        }
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            pls::cs::String str = java::lang::JString::New(bytes, array[i]);
            if (java::lang::StringEx::Length(str) == 0) {
                continue;
            }
            bool flag = false;
            for (pls::cs::Int32 j = 0; j < java::lang::StringEx::Length(str); ++j) {
                if (pls::cs::cast_integral<pls::cs::Int32>(java::lang::StringEx::CharAt(str, j)) ==
                    pls::cs::cast_integral<pls::cs::Int32>(char16_t(65533))) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                return array[i];
            }
        }
        pls::cs::Int32 num = bytes.length();
        pls::cs::Int32 num2, num3, num4, num5;
        bool flag2 = false;
        for (pls::cs::Int32 k = 0; k < num; ++k) {
            num2 = (bytes[k] & 0xFF);
            if (num2 <= 6 || num2 == 127 || num2 == 255) {
                flag2 = true;
                if (num2 == 0 && k < num - 1 && (bytes[k + 1] & 0xFF) <= 127) {
                    return literal(u"UTF-16");
                }
            }
        }
        if (flag2) {
            return pls::cs::String{};
        }
        bool flag3 = true;
        for (pls::cs::Int32 l = 0; l < num; ++l) {
            num2 = (bytes[l] & 0xFF);
            if (num2 == 27 || 128 <= num2) {
                flag3 = false;
                break;
            }
        }
        if (flag3) {
            return literal(u"ASCII");
        }
        for (pls::cs::Int32 m = 0; m < num - 2; ++m) {
            num2 = (bytes[m] & 0xFF);
            num3 = (bytes[m + 1] & 0xFF);
            num4 = (bytes[m + 2] & 0xFF);
            if (num2 != 27) {
                continue;
            }
            if (num3 == 36 && num4 == 64) {
                return literal(u"JIS");
            }
            if (num3 == 36 && num4 == 66) {
                return literal(u"JIS");
            }
            if (num3 == 40 && (num4 == 66 || num4 == 74)) {
                return literal(u"JIS");
            }
            if (num3 == 40 && num4 == 73) {
                return literal(u"JIS");
            }
            if (m < num - 3) {
                num5 = (bytes[m + 3] & 0xFF);
                if (num3 == 36 && num4 == 40 && num5 == 68) {
                    return literal(u"JIS");
                }
                if (m < num - 5 && num3 == 38 && num4 == 64 && num5 == 27 && (bytes[m + 4] & 0xFF) == 36 &&
                    (bytes[m + 5] & 0xFF) == 66) {
                    return literal(u"JIS");
                }
            }
        }
        pls::cs::Int32 num6 = 0;
        pls::cs::Int32 num7 = 0;
        pls::cs::Int32 num8 = 0;
        for (pls::cs::Int32 n = 0; n < num - 1; ++n) {
            num2 = (bytes[n] & 0xFF);
            num3 = (bytes[n + 1] & 0xFF);
            if (((129 <= num2 && num2 <= 159) || (224 <= num2 && num2 <= 252)) &&
                ((64 <= num3 && num3 <= 126) || (128 <= num3 && num3 <= 252))) {
                num6 += 2;
                ++n;
            }
        }
        for (pls::cs::Int32 num9 = 0; num9 < num - 1; ++num9) {
            num2 = (bytes[num9] & 0xFF);
            num3 = (bytes[num9 + 1] & 0xFF);
            if ((161 <= num2 && num2 <= 254 && 161 <= num3 && num3 <= 254) ||
                (num2 == 142 && 161 <= num3 && num3 <= 223)) {
                num7 += 2;
                ++num9;
            } else if (num9 < num - 2) {
                num4 = (bytes[num9 + 2] & 0xFF);
                if (num2 == 143 && 161 <= num3 && num3 <= 254 && 161 <= num4 && num4 <= 254) {
                    num7 += 3;
                    num9 += 2;
                }
            }
        }
        for (pls::cs::Int32 num10 = 0; num10 < num - 1; ++num10) {
            num2 = (bytes[num10] & 0xFF);
            num3 = (bytes[num10 + 1] & 0xFF);
            if (192 <= num2 && num2 <= 223 && 128 <= num3 && num3 <= 191) {
                num8 += 2;
                ++num10;
            } else if (num10 < num - 2) {
                num4 = (bytes[num10 + 2] & 0xFF);
                if (224 <= num2 && num2 <= 239 && 128 <= num3 && num3 <= 191 && 128 <= num4 && num4 <= 191) {
                    num8 += 3;
                    num10 += 2;
                }
            }
        }
        IntArray array2 = IntArray::from({num8 * 10, num6 * 10});
        StringArray array3 = StringArray::from({literal(u"UTF-8"), literal(u"Shift_JIS")});
        if (common::cfg::Config::APPLI_TYPE() == 2) {
            array2[0]++;
        } else if (common::cfg::Config::APPLI_TYPE() == 3) {
            array2[0]++;
        } else {
            array2[1]++;
        }
        for (pls::cs::Int32 num11 = 0; num11 < pls::cs::Int32(array2.length()) - 1; ++num11) {
            for (pls::cs::Int32 num12 = pls::cs::Int32(array2.length()) - 1; num12 > num11; --num12) {
                if (array2[num12 - 1] < array2[num12]) {
                    pls::cs::Int32 num13 = array2[num12];
                    array2[num12] = array2[num12 - 1];
                    array2[num12 - 1] = num13;
                    pls::cs::String text = array3[num12];
                    array3[num12] = array3[num12 - 1];
                    array3[num12 - 1] = text;
                }
            }
        }
        for (pls::cs::Int32 num14 = 0; num14 < array3.length(); ++num14) {
            bool flag4 = false;
            pls::cs::String str2 = java::lang::JString::New(bytes, array3[num14]);
            for (pls::cs::Int32 num15 = 0; num15 < java::lang::StringEx::Length(str2); ++num15) {
                if (pls::cs::cast_integral<pls::cs::Int32>(java::lang::StringEx::CharAt(str2, num15)) ==
                    pls::cs::cast_integral<pls::cs::Int32>(char16_t(65533))) {
                    flag4 = true;
                    break;
                }
            }
            if (!flag4) {
                return array3[num14];
            }
        }
        return pls::cs::String{};
    }
}
} // namespace kairo::unity::util::StringUtil
}
