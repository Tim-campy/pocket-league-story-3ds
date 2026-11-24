// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.util.JLocale.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "generated/kairo.unity.util.Language.LangPackFormat.hpp"
#include "generated/kairo.unity.util.Language.LangPackRecord.hpp"
#include "generated/kairo.unity.util.Language.Position.hpp"
#include "generated/kairo.unity.util.Language.RecordPosition.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.net.URLEncoder.hpp"
#include "kairo.unity.analytics.AnalyticsTracker.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kairo.unity.util.JarInflater.hpp"
#include "kairo.unity.util.Language.LangPackFormat.hpp"
#include "kairo.unity.util.Language.LangPackRecord.hpp"
#include "kairo.unity.util.Language.LanguagePackInfo.hpp"
#include "kairo.unity.util.Language.RecordPosition.hpp"
#include "kairo.unity.util.Language.hpp"

namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;

namespace pls::game {
namespace kairo::unity::util::Language {

static pls::cs::String langPackAuthor__storage{};

static pls::cs::String langPackCode__storage{};

static pls::cs::String langPackFile__storage{};

static pls::cs::Int32 langPackScale__storage{};

static pls::cs::String langPackTitle__storage{};

static StringArray2 systemLangPackFiles__storage{};
} // namespace kairo::unity::util::Language

namespace kairo::unity::util {

static pls::cs::GcRootProvider cs_init_72d9658ed61145d6_unit_roots =
    pls::cs::GcRootProvider([](const pls::cs::EdgeVisitor& visitor) -> void {
        pls::cs::trace_value(Language::langPackAuthor__storage, visitor);
        pls::cs::trace_value(Language::langPackCode__storage, visitor);
        pls::cs::trace_value(Language::langPackFile__storage, visitor);
        pls::cs::trace_value(Language::langPackScale__storage, visitor);
        pls::cs::trace_value(Language::langPackTitle__storage, visitor);
        pls::cs::trace_value(Language::systemLangPackFiles__storage, visitor);
    });
} // namespace kairo::unity::util

namespace kairo::unity::util::Language {

pls::cs::String& langPackAuthor_() {
    kl_unity_util::Language::ensure_initialized();
    return langPackAuthor__storage;
}

pls::cs::String& langPackCode_() {
    kl_unity_util::Language::ensure_initialized();
    return langPackCode__storage;
}

pls::cs::String& langPackFile_() {
    kl_unity_util::Language::ensure_initialized();
    return langPackFile__storage;
}

pls::cs::Int32& langPackScale_() {
    kl_unity_util::Language::ensure_initialized();
    return langPackScale__storage;
}

pls::cs::String& langPackTitle_() {
    kl_unity_util::Language::ensure_initialized();
    return langPackTitle__storage;
}

StringArray2& systemLangPackFiles_() {
    kl_unity_util::Language::ensure_initialized();
    return systemLangPackFiles__storage;
}

// M:kairo.unity.util.Language.Init
void Init() {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.Init", kairo);
    {
        kl_cfg::Config::ensure_initialized();

        if ([&]() {
                auto cs_left = pls::cs::box(Language::systemLangPackFiles_());
                auto cs_right = pls::cs::box(StringArray2{});
                return cs_left == cs_right;
            }()) {
            pls::cs::String filename = literal(u"language.dat");
            pls::cs::List<StringArray> list = pls::cs::List<StringArray>::make();
            if (kl_cfg::Config::LANGUAGE() == -1) {
                if (Language::English()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            auto cs_receiver = list;
                            auto cs_arg0 =
                                StringArray::from({literal(u"English"), literal(u""), literal(u"en-US")});
                            cs_receiver.Add(cs_arg0);
                        }());
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            auto cs_receiver = list;
                            auto cs_arg0 =
                                StringArray::from({literal(u"日本語"),
                                                   kl_unity_util::Language::KAIRO_JAPANESE(), literal(u"")});
                            cs_receiver.Add(cs_arg0);
                        }());
                    });
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            auto cs_receiver = list;
                            auto cs_arg0 =
                                StringArray::from({literal(u"日本語"), literal(u""), literal(u"ja-JP")});
                            cs_receiver.Add(cs_arg0);
                        }());
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            auto cs_receiver = list;
                            auto cs_arg0 =
                                StringArray::from({literal(u"English"),
                                                   kl_unity_util::Language::KAIRO_ENGLISH(), literal(u"")});
                            cs_receiver.Add(cs_arg0);
                        }());
                    });
                }
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = list;
                        auto cs_arg0 =
                            StringArray::from({literal(u"English"), literal(u""), literal(u"en-US")});
                        cs_receiver.Add(cs_arg0);
                    }());
                });
            }
            pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
            pls::cs::run_finally(
                [&]() {
                    try {
                        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::kairo::Storage::Exists(3, filename);
                            })) {
                            jarInflater = kl_unity_util::JarInflater::create(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::kairo::Storage::Read(3, false, filename);
                                }));
                            StringArray files = JarInflater::GetFiles(require(jarInflater));
                            {
                                auto cs_each162 = files;
                                for (std::int32_t cs_i162 = 0; cs_i162 < cs_each162.length(); ++cs_i162) {
                                    pls::cs::String text = cs_each162.get_Item(cs_i162);
                                    {
                                        try {
                                            pls::cs::Ref<Language_LanguagePackInfo> languagePackInfo =
                                                Language::GetLanguagePackInfo(
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return require(jarInflater)->GetData(text);
                                                    }));
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return ([&]() -> void {
                                                    auto cs_receiver = list;
                                                    auto cs_arg0 = StringArray::from(
                                                        {require(languagePackInfo)->Title, text,
                                                         require(languagePackInfo)->Code});
                                                    cs_receiver.Add(cs_arg0);
                                                }());
                                            });
                                        } catch (const pls::cs::Exception& cs_caught_163) {
                                            pls::cs::capture_exception(cs_caught_163);
                                            {
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } catch (const pls::cs::Exception& cs_caught_164) {
                        pls::cs::capture_exception(cs_caught_164);
                        {
                        }
                    }
                },
                [&]() {
                    if ((!is_null(pls::cs::box((jarInflater))))) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require((jarInflater))->Close(); });
                    }
                    jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
                });
            Language::systemLangPackFiles_() =
                pls::diagnostic::api_call([&]() -> decltype(auto) { return list.ToArray(); });
        }
        if (kl_unity_util::Language::forceResetType_() != 0 &&
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::kairo::PlayerPrefs::HasKey(literal(u"_language_pack"));
            })) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::kairo::PlayerPrefs::DeleteKey(literal(u"_language_pack"));
            });
            if (kl_cfg::Config::PRINT()) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::Log::Info(literal(u"PlayerPrefs.DeleteKey(PREF_LANG_PACK)"),
                                                    pls::cs::Ref<pls::cs::ExceptionObject>{});
                });
            }
        }
        if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::kairo::PlayerPrefs::HasKey(literal(u"_language_pack"));
            }) &&
            kl_cfg::Config::LANGUAGE() != 0) {
            pls::cs::Ref<kl_java_util::JLocale> jLocale = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::JLocale::GetDefault(); });
            pls::cs::String text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::culture_to_lower(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(jLocale)->GetLanguage(); }));
            });
            pls::cs::String text3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::culture_to_lower(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(jLocale)->GetCountry(); }));
            });
            if (text2 == literal(u"zh")) {
                if (text3 == literal(u"sg")) {
                    text3 = literal(u"ch");
                }
                if (text3 == literal(u"hk")) {
                    text3 = literal(u"tw");
                }
                if (text3 == literal(u"mo")) {
                    text3 = literal(u"tw");
                }
            }
            StringArray array = StringArray{};
            StringArray array2 = StringArray{};
            StringArray2 array3 = Language::systemLangPackFiles_();
            {
                auto cs_each165 = array3;
                for (std::int32_t cs_i165 = 0; cs_i165 < cs_each165.length(); ++cs_i165) {
                    StringArray array4 = cs_each165.get_Item(cs_i165);
                    {
                        pls::cs::String text4 = pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return pls::cs::culture_to_lower(array4[2]); });
                        if (pls::cs::String::concat(pls::cs::String::concat(text2, literal(u"-")), text3) ==
                            text4) {
                            array = array4;
                        }
                        if (text2 == pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() {
                                    auto cs_text = text4;
                                    auto cs_separators = pls::cs::Array<char16_t>::make(1);
                                    cs_separators.at(0) = u'-';
                                    return pls::cs::string_split(cs_text, cs_separators);
                                }());
                            })[0]) {
                            array2 = array4;
                        }
                    }
                }
            }
            if (kl_unity_util::Language::forceResetType_() == 1) {
                if (kl_cfg::Config::PRINT()) {
                    if ([&]() {
                            auto cs_left = pls::cs::box(array);
                            auto cs_right = pls::cs::box(StringArray{});
                            return cs_left == cs_right;
                        }()) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::Log::Info(literal(u"bestLangPack == null"),
                                                            pls::cs::Ref<pls::cs::ExceptionObject>{});
                        });
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::Log::Info(
                                pls::cs::String::concat(literal(u"bestLangPack[1]"), array[1]),
                                pls::cs::Ref<pls::cs::ExceptionObject>{});
                        });
                    }
                    if ([&]() {
                            auto cs_left = pls::cs::box(array2);
                            auto cs_right = pls::cs::box(StringArray{});
                            return cs_left == cs_right;
                        }()) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::Log::Info(literal(u"matchLangPack == null"),
                                                            pls::cs::Ref<pls::cs::ExceptionObject>{});
                        });
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::Log::Info(
                                pls::cs::String::concat(literal(u"matchLangPack[1]"), array2[1]),
                                pls::cs::Ref<pls::cs::ExceptionObject>{});
                        });
                    }
                }
                if ((([&]() {
                         auto cs_left = pls::cs::box(array);
                         auto cs_right = pls::cs::box(StringArray{});
                         return cs_left == cs_right;
                     }()) ||
                     pls::diagnostic::api_call(
                         [&]() -> decltype(auto) { return string_equals(array[1], literal(u"")); })) &&
                    (([&]() {
                         auto cs_left = pls::cs::box(array2);
                         auto cs_right = pls::cs::box(StringArray{});
                         return cs_left == cs_right;
                     }()) ||
                     pls::diagnostic::api_call(
                         [&]() -> decltype(auto) { return string_equals(array2[1], literal(u"")); }))) {
                    array = StringArray::from(
                        {literal(u"日本語"), kl_unity_util::Language::KAIRO_JAPANESE(), literal(u"")});
                }
            }
            if ([&]() {
                    auto cs_left = pls::cs::box(array);
                    auto cs_right = pls::cs::box(StringArray{});
                    return cs_left != cs_right;
                }()) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::kairo::PlayerPrefs::SetString(literal(u"_language_pack"), array[1]);
                });
            } else if ([&]() {
                           auto cs_left = pls::cs::box(array2);
                           auto cs_right = pls::cs::box(StringArray{});
                           return cs_left != cs_right;
                       }()) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::kairo::PlayerPrefs::SetString(literal(u"_language_pack"), array2[1]);
                });
            }
        }
        ByteArray array5 = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::Storage::Read(3, false, literal(u"language_pack_format.txt"));
        });
        if ([&]() {
                auto cs_left = pls::cs::box(array5);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left != cs_right;
            }()) {
            pls::cs::String text5 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StringUtil::GetString(array5); });
            {
                auto cs_value =
                    pls::cs::Dictionary<pls::cs::String,
                                        pls::cs::Ref<kl_unity_util::Language_LangPackFormat>>::make();
                kl_unity_util::Language::langPackFormats_() = cs_value;
            }
            {
                auto cs_each166 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() {
                        auto cs_text = text5;
                        auto cs_separators = pls::cs::Array<char16_t>::make(1);
                        cs_separators.at(0) = char16_t(10);
                        return pls::cs::string_split(cs_text, cs_separators);
                    }());
                });
                for (std::int32_t cs_i166 = 0; cs_i166 < cs_each166.length(); ++cs_i166) {
                    pls::cs::String recoveredLangFormatLine = cs_each166.get_Item(cs_i166);
                    {
                        StringArray array6 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() {
                                auto cs_text = recoveredLangFormatLine;
                                auto cs_separators = pls::cs::Array<char16_t>::make(1);
                                cs_separators.at(0) = u',';
                                return pls::cs::string_split(cs_text, cs_separators);
                            }());
                        });
                        pls::cs::String cs_arg0_266 = array6[0];
                        char16_t cs_arg1_266 = pls::cs::cast_integral<char16_t>(pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return pls::cs::int32_parse(array6[1]); }));
                        char16_t cs_arg2_266 = pls::cs::cast_integral<char16_t>(pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return pls::cs::int32_parse(array6[2]); }));
                        pls::cs::Ref<kl_unity_util::Language_LangPackFormat> langPackFormat =
                            Language_LangPackFormat::create(cs_arg0_266, cs_arg1_266, cs_arg2_266);
                        {
                            auto cs_target = kl_unity_util::Language::langPackFormats_();
                            auto cs_index = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::cs::culture_to_lower(require(langPackFormat)->File);
                            });
                            auto cs_value = langPackFormat;
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                }
            }
            if (!Language::SetLanguagePack(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return pls::kairo::PlayerPrefs::GetString(
                                                   literal(u"_language_pack"), pls::cs::String{});
                                           }),
                                           ByteArray{}, false)) {
                Language::SetLanguagePack(pls::cs::String{}, ByteArray{}, true);
            }
        }
    }
}

// M:kairo.unity.util.Language.English
bool English() {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.English", kairo);
    {
        return pls::diagnostic::api_call(
                   [&]() -> decltype(auto) { return kl_unity_util::Language::Get(); }) == 1;
    }
}

// M:kairo.unity.util.Language.SetSoftLabelTable(System.String[][])
void SetSoftLabelTable(StringArray2 softlabelTable) {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.SetSoftLabelTable(System.String[][])",
                     kairo);
    {
        {
            auto cs_value = softlabelTable;
            kl_unity_util::Language::softlabelTable_() = cs_value;
        }
        if ([&]() {
                auto cs_left = pls::cs::box(kl_unity_util::Language::softlabelTable_());
                auto cs_right = pls::cs::box(StringArray2{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(kl_unity_util::Language::softlabelTable_().length());
             ++i) {
            {
                auto cs_target = kl_unity_util::Language::softlabelTable_()[i];
                auto cs_index = 0;
                auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::StringUtil::Replace(
                        kl_unity_util::Language::softlabelTable_()[i][0], literal(u"\\"), literal(u"¥"));
                });
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = kl_unity_util::Language::softlabelTable_()[i];
                auto cs_index = 1;
                auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::StringUtil::Replace(
                        kl_unity_util::Language::softlabelTable_()[i][1], literal(u"\\"), literal(u"¥"));
                });
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:kairo.unity.util.Language.SetTextTable(System.String[][])
void SetTextTable(StringArray2 textTable) {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.SetTextTable(System.String[][])", kairo);
    {
        {
            auto cs_value = pls::cs::Array<StringArray2>{};
            kl_unity_util::Language::textTable_() = cs_value;
        }
        if ([&]() {
                auto cs_left = pls::cs::box(textTable);
                auto cs_right = pls::cs::box(StringArray2{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        {
            auto cs_value = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::Language::MakeTextTable(textTable); });
            kl_unity_util::Language::textTable_() = cs_value;
        }
    }
}

// M:kairo.unity.util.Language.ClearSoftLabelTable
void ClearSoftLabelTable() {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.ClearSoftLabelTable", kairo);
    {
        {
            auto cs_value = StringArray2{};
            kl_unity_util::Language::softlabelTable_() = cs_value;
        }
    }
}

// M:kairo.unity.util.Language.ClearTextTable
void ClearTextTable() {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.ClearTextTable", kairo);
    {
        {
            auto cs_value = pls::cs::Array<StringArray2>{};
            kl_unity_util::Language::textTable_() = cs_value;
        }
    }
}

// M:kairo.unity.util.Language.LT(System.String,System.String)
pls::cs::String LT(pls::cs::String text, pls::cs::String arg) {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.LT(System.String,System.String)", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StringUtil::Replace(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                          return kl_unity_util::Language::TranslateText(text,
                                                                                                        true);
                                                      }),
                                                      arg);
        });
    }
}

// M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean)
bool SetLanguagePack(pls::cs::String file, ByteArray data, bool save) {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.Language.SetLanguagePack(System.String,System.Byte[],System.Boolean)", kairo);
    {
        kl_cfg::Config::ensure_initialized();

        if (kl_cfg::Config::DEBUG()) {
            if (is_null(file)) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::Log::Info(literal(u"SetLanguagePack[(null)]"),
                                                    pls::cs::Ref<pls::cs::ExceptionObject>{});
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::Log::Info(
                        pls::cs::String::concat(pls::cs::String::concat(literal(u"SetLanguagePack["), file),
                                                literal(u"]")),
                        pls::cs::Ref<pls::cs::ExceptionObject>{});
                });
            }
        }
        if (!is_null(file)) {
            {
                pls::cs::Int32 cs_value = -1;
                kl_unity_util::Language::priorityLanguage_() = cs_value;
            }
            if (Language::English()) {
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return string_equals(file, kl_unity_util::Language::KAIRO_JAPANESE());
                    })) {
                    {
                        pls::cs::Int32 cs_value = 0;
                        kl_unity_util::Language::priorityLanguage_() = cs_value;
                    }
                    Language::ClearSoftLabelTable();
                    Language::ClearTextTable();
                }
            } else if (pls::diagnostic::api_call(
                           [&]() -> decltype(auto) { return kl_unity_util::Language::Japanese(); })) {
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return string_equals(file, literal(u"")); }) ||
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return string_equals(file, kl_unity_util::Language::KAIRO_JAPANESE());
                    })) {
                    Language::ClearSoftLabelTable();
                    Language::ClearTextTable();
                } else {
                    {
                        pls::cs::Int32 cs_value = 1;
                        kl_unity_util::Language::priorityLanguage_() = cs_value;
                    }
                }
            }
        }
        if (!is_null(file) && (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                   return string_equals(file, kl_unity_util::Language::KAIRO_JAPANESE());
                               }) ||
                               pls::diagnostic::api_call([&]() -> decltype(auto) {
                                   return string_equals(file, kl_unity_util::Language::KAIRO_ENGLISH());
                               }))) {
            if (save) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::kairo::PlayerPrefs::SetString(literal(u"_language_pack"), file);
                });
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return pls::kairo::PlayerPrefs::Save(); });
            }
            Language::langPackFile_() = file;
            pls::cs::String id = literal(u"UA-35228877-18");
            {
                bool cs_arg0 = true;
                pls::cs::String cs_arg1 = id;
                auto cs_arg2 = StringArray::make(1);
                cs_arg2.at(0) = file;
                analytics::AnalyticsTracker::TrackPageView(cs_arg0, cs_arg1, cs_arg2);
            }
            if (save) {
                if (kl_cfg::Config::PRINT()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::Log::Info(
                            literal(u"DispatchPageView[SetLanguagePack    MultiType]"),
                            pls::cs::Ref<pls::cs::ExceptionObject>{});
                    });
                }
                analytics::AnalyticsTracker::DispatchPageView();
            }
            return true;
        }
        bool flag =
            (!is_null(file) && (file.length() > 0)) && !pls::diagnostic::api_call([&]() -> decltype(auto) {
                return pls::cs::RuntimeRegex::IsMatch(file, literal(u"^[a-zA-Z0-9_\\-]+\\.csv$"));
            });
        if (kl_cfg::Config::PRINT()) {
            if (is_null(file)) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::Log::Info(
                        pls::cs::String::concat(
                            pls::cs::String::concat(literal(u"SetLanguagePack[(null)]    custom("),
                                                    pls::cs::String(flag ? u"True" : u"False")),
                            literal(u")")),
                        pls::cs::Ref<pls::cs::ExceptionObject>{});
                });
            } else {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::Log::Info(
                        pls::cs::String::concat(
                            pls::cs::String::concat(
                                pls::cs::String::concat(
                                    pls::cs::String::concat(literal(u"SetLanguagePack["), file),
                                    literal(u"]    custom(")),
                                pls::cs::String(flag ? u"True" : u"False")),
                            literal(u")")),
                        pls::cs::Ref<pls::cs::ExceptionObject>{});
                });
            }
        }
        pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
        {
            auto cs_flow_168 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<bool> {
                    try {
                        if ((!is_null(file) && (file.length() > 0)) && ([&]() {
                                auto cs_left = pls::cs::box(data);
                                auto cs_right = pls::cs::box(ByteArray{});
                                return cs_left == cs_right;
                            }())) {
                            if (!flag) {
                                jarInflater = kl_unity_util::JarInflater::create(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::Storage::Read(3, false, literal(u"language.dat"));
                                    }));
                                data = pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return require(jarInflater)->GetData(file); });
                            } else {
                                if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::Storage::Exists(1,
                                                                           literal(u"_custom_lang_pack.csv"));
                                    })) {
                                    return pls::cs::flow_return(false);
                                }
                                data = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::kairo::Storage::Read(1, false,
                                                                     literal(u"_custom_lang_pack.csv"));
                                });
                            }
                        }
                        Language::LoadLanguagePack(data);
                        if (!flag) {
                            pls::cs::String title = Language::GetTitle(Language::langPackCode_());
                            if (!is_null(title)) {
                                Language::langPackTitle_() = title;
                            }
                            Language::langPackAuthor_() = literal(u"Kairosoft");
                        }
                        if (save) {
                            if (flag) {
                                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::PlayerPrefs::GetString(
                                            literal(u"_language_pack_location"), literal(u""));
                                    }) != file) {
                                    pls::cs::Ref<ui::Dialog> dialog =
                                        ui::Dialog::create(3, literal(u"Message"));
                                    require(dialog)->SetText(literal(
                                        u"Data downloaded.\nUpload language pack and creator's name to Kairosoft for sharing?\nNo personal data will be sent."));
                                    pls::cs::Int32 num = require(dialog)->Show();
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::PlayerPrefs::SetInt(
                                            literal(u"_language_pack_send"), (num == 4) ? 1 : 0);
                                    });
                                }
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::kairo::PlayerPrefs::SetString(
                                        literal(u"_language_pack_location"), file);
                                });
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::kairo::Storage::Write(
                                        1, false, literal(u"_custom_lang_pack.csv"), data);
                                });
                            }
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::kairo::PlayerPrefs::SetString(literal(u"_language_pack"), file);
                            });
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return pls::kairo::PlayerPrefs::Save(); });
                        }
                        bool num2 = flag && pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return pls::kairo::PlayerPrefs::GetInt(
                                                    literal(u"_language_pack_send"), 0);
                                            }) == 1;
                        pls::cs::String id2 = literal(u"UA-35228877-18");
                        if (num2) {
                            {
                                bool cs_arg0 = true;
                                pls::cs::String cs_arg1 = id2;
                                auto cs_arg2 = StringArray::make(3);
                                cs_arg2.at(0) = Language::langPackCode_();
                                cs_arg2.at(1) = Language::langPackAuthor_();
                                cs_arg2.at(2) = java::net::URLEncoder::Encode(file);
                                analytics::AnalyticsTracker::TrackPageView(cs_arg0, cs_arg1, cs_arg2);
                            }
                        } else {
                            {
                                bool cs_arg0 = true;
                                pls::cs::String cs_arg1 = id2;
                                auto cs_arg2 = StringArray::make(1);
                                cs_arg2.at(0) = Language::langPackCode_();
                                analytics::AnalyticsTracker::TrackPageView(cs_arg0, cs_arg1, cs_arg2);
                            }
                        }
                        if (save) {
                            if (kl_cfg::Config::PRINT()) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::Log::Info(
                                        literal(u"DispatchPageView[SetLanguagePack]"),
                                        pls::cs::Ref<pls::cs::ExceptionObject>{});
                                });
                            }
                            analytics::AnalyticsTracker::DispatchPageView();
                        }
                        Language::langPackFile_() = file;
                    } catch (const pls::cs::Exception& cs_caught_167) {
                        auto ex = pls::cs::capture_exception(cs_caught_167);
                        {
                            if (kl_cfg::Config::PRINT()) {
                                pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return kl_unity_util::Log::Info(ex); });
                            }
                            if (flag) {
                                pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::cs::string_trim(require(ex)->get_Message());
                                });
                                if (text.length() <= 0) {
                                    text = literal(u"An error has occurred.");
                                }
                                pls::cs::Ref<ui::Dialog> dialog2 = ui::Dialog::create(0, literal(u"Error"));
                                require(dialog2)->SetText(text);
                                require(dialog2)->Show();
                            }
                            return pls::cs::flow_return(false);
                        }
                    }
                    return {};
                },
                [&]() {
                    if ((!is_null(pls::cs::box((jarInflater))))) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require((jarInflater))->Close(); });
                    }
                    jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
                });
            if (cs_flow_168.returned())
                return cs_flow_168.value();
        }
        return true;
    }
}

// M:kairo.unity.util.Language.GetCustomLanguagePackLocation
pls::cs::String GetCustomLanguagePackLocation() {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.GetCustomLanguagePackLocation", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::kairo::PlayerPrefs::GetString(literal(u"_language_pack_location"), pls::cs::String{});
        });
    }
}

// M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[])
void LoadLanguagePack(ByteArray data) {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.LoadLanguagePack(System.Byte[])", kairo);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Int32 recoveredPdbConstInt32 = 0;
        pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
        pls::cs::Array<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>> array =
            kl_unity_util::Language::langPackRecords_();
        StringArray array2 = kl_unity_util::Language::langPackFolders_();
        pls::cs::String text = Language::langPackAuthor_();
        pls::cs::String text2 = Language::langPackCode_();
        pls::cs::String text3 = Language::langPackTitle_();
        pls::cs::Int32 num = Language::langPackScale_();
        Language::langPackCode_() = literal(u"en-US");
        Language::langPackAuthor_() = literal(u"Kairosoft");
        Language::langPackTitle_() = literal(u"English");
        Language::langPackScale_() = -1;
        if (kl_cfg::Config::LANGUAGE() == 0) {
            Language::langPackCode_() = literal(u"ja-JP");
            Language::langPackTitle_() = literal(u"日本語");
        } else if (kl_cfg::Config::LANGUAGE() == -1 && pls::diagnostic::api_call([&]() -> decltype(auto) {
                       return kl_unity_util::Language::Japanese();
                   })) {
            Language::langPackCode_() = literal(u"ja-JP");
            Language::langPackTitle_() = literal(u"日本語");
        }
        pls::cs::run_finally(
            [&]() {
                try {
                    pls::cs::Dictionary<pls::cs::String,
                                        pls::cs::List<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>>
                        dictionary = pls::cs::Dictionary<
                            pls::cs::String,
                            pls::cs::List<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>>::make();
                    if ([&]() {
                            auto cs_left = pls::cs::box(data);
                            auto cs_right = pls::cs::box(ByteArray{});
                            return cs_left == cs_right;
                        }()) {
                        {
                            auto cs_value =
                                pls::cs::Array<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>{};
                            kl_unity_util::Language::langPackRecords_() = cs_value;
                        }
                        {
                            auto cs_value = StringArray{};
                            kl_unity_util::Language::langPackFolders_() = cs_value;
                        }
                    } else {
                        ByteArray array3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Storage::Read(3, false,
                                                             literal(u"language_pack_template_en.txt"));
                        });
                        if ([&]() {
                                auto cs_left = pls::cs::box(array3);
                                auto cs_right = pls::cs::box(ByteArray{});
                                return cs_left == cs_right;
                            }()) {
                            throw pls::cs::Exception();
                        }
                        pls::cs::String text4 = pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return kl_unity_util::StringUtil::GetString(array3); });
                        {
                            auto cs_value =
                                pls::cs::Array<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>::make(0);
                            kl_unity_util::Language::langPackRecords_() = cs_value;
                        }
                        {
                            auto cs_value = StringArray{};
                            kl_unity_util::Language::langPackFolders_() = cs_value;
                        }
                        pls::cs::Ref<kl_unity_util::Language_LangPackRecord> langPackRecord =
                            pls::cs::Ref<kl_unity_util::Language_LangPackRecord>{};
                        pls::cs::Int32 num2 = 0;
                        while (num2 < text4.length()) {
                            pls::cs::Int32 num3 = pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return index_char2(text4, u',', num2); });
                            pls::cs::Int32 num4 = pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return index_char2(text4, u',', num3 + 1); });
                            pls::cs::Int32 num5 = pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return index_char2(text4, u',', num4 + 1); });
                            pls::cs::Int32 num6 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return index_char2(text4, char16_t(10), num5 + 1);
                            });
                            if (num6 == -1) {
                                num6 = text4.length();
                            }
                            pls::cs::String text5 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::cs::string_trim(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return substring2(text4, num2, num3 - num2);
                                    }));
                            });
                            pls::cs::String file = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::cs::culture_to_lower(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return substring2(text4, num3 + 1, num4 - (num3 + 1));
                                    }));
                            });
                            pls::cs::String text6 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::cs::string_trim(
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return substring2(text4, num4 + 1, num5 - (num4 + 1));
                                    }));
                            });
                            pls::cs::String text7 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return substring2(text4, num5 + 1, num6 - (num5 + 1));
                            });
                            if (text5.length() > 0) {
                                langPackRecord = Language_LangPackRecord::create(
                                    pls::diagnostic::api_call(
                                        [&]() -> decltype(auto) { return pls::cs::int32_parse(text5); }),
                                    file, text7);
                                {
                                    auto cs_each172 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return ([&]() {
                                            auto cs_text = text6;
                                            auto cs_separators = pls::cs::Array<char16_t>::make(1);
                                            cs_separators.at(0) = u'&';
                                            return pls::cs::string_split(cs_text, cs_separators);
                                        }());
                                    });
                                    for (std::int32_t cs_i172 = 0; cs_i172 < cs_each172.length(); ++cs_i172) {
                                        pls::cs::String positionText = cs_each172.get_Item(cs_i172);
                                        {
                                            StringArray array5 =
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return ([&]() {
                                                        auto cs_text = positionText;
                                                        auto cs_separators =
                                                            pls::cs::Array<char16_t>::make(1);
                                                        cs_separators.at(0) = u'-';
                                                        return pls::cs::string_split(cs_text, cs_separators);
                                                    }());
                                                });
                                            {
                                                pls::cs::Int32 cs_arg0 =
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return pls::cs::int32_parse(array5[0]);
                                                    });
                                                pls::cs::Int32 cs_arg1 =
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return pls::cs::int32_parse(array5[1]);
                                                    });
                                                Language_LangPackRecord::AddPosition(require(langPackRecord),
                                                                                     cs_arg0, cs_arg1);
                                            }
                                        }
                                    }
                                }
                                while ([&]() -> bool {
                                    auto cs_left = require(langPackRecord)->Id;
                                    auto cs_right = kl_unity_util::Language::langPackRecords_().length();
                                    return cs_left >= cs_right;
                                }()) {
                                    pls::cs::Array<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>
                                        destinationArray = pls::cs::
                                            Array<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>::make(
                                                pls::cs::Int32(
                                                    kl_unity_util::Language::langPackRecords_().length()) +
                                                512);
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return ([&]() -> void {
                                            auto cs_arg0 = pls::cs::array_cast(
                                                pls::cs::box(kl_unity_util::Language::langPackRecords_()));
                                            auto cs_arg1 = 0;
                                            auto cs_arg2 =
                                                pls::cs::array_cast(pls::cs::box(destinationArray));
                                            auto cs_arg3 = 0;
                                            auto cs_arg4 =
                                                kl_unity_util::Language::langPackRecords_().length();
                                            pls::cs::array_copy(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
                                        }());
                                    });
                                    {
                                        auto cs_value = destinationArray;
                                        kl_unity_util::Language::langPackRecords_() = cs_value;
                                    }
                                }
                                kl_unity_util::Language::langPackRecords_().set_Item(
                                    require(langPackRecord)->Id, langPackRecord);
                                pls::cs::List<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>> value =
                                    pls::cs::List<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>{};
                                if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return ([&]() {
                                            auto cs_dictionary = dictionary;
                                            auto cs_key = require(langPackRecord)->File;
                                            return cs_dictionary.TryGetValue(cs_key, value);
                                        }());
                                    })) {
                                    {
                                        auto cs_target = dictionary;
                                        auto cs_index = require(langPackRecord)->File;
                                        auto cs_value = (([&]() {
                                            auto cs_value = pls::cs::List<
                                                pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>::make();
                                            value = cs_value;
                                            return cs_value;
                                        }()));
                                        cs_target.set_Item(cs_index, cs_value);
                                    }
                                }
                                pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return value.Add(langPackRecord); });
                            } else {
                                if (!is_null(langPackRecord)) {
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return require(langPackRecord)->From.Add(text7);
                                    });
                                }
                            }
                            num2 = num6 + 1;
                        }
                        pls::cs::Int32 num7 = -1;
                        {
                            pls::cs::String text8 = pls::cs::String{};
                            {
                                pls::cs::Ref<pls::cs::MemoryStream> stream = ([&]() {
                                    auto cs_arg0 = data;
                                    return pls::cs::make_ref<pls::cs::MemoryStream>(cs_arg0);
                                }());
                                pls::cs::run_finally(
                                    [&]() {
                                        {
                                            {
                                                pls::cs::Ref<pls::cs::RuntimeStreamReader> streamReader =
                                                    ([&]() {
                                                        auto cs_arg0 = stream;
                                                        auto cs_arg1 = pls::cs::RuntimeEncoding::get_UTF8();
                                                        return pls::cs::make_ref<
                                                            pls::cs::RuntimeStreamReader>(cs_arg0, cs_arg1);
                                                    }());
                                                pls::cs::run_finally(
                                                    [&]() {
                                                        {
                                                            text8 = pls::diagnostic::api_call(
                                                                [&]() -> decltype(auto) {
                                                                    return require(streamReader)->ReadToEnd();
                                                                });
                                                        }
                                                    },
                                                    [&]() {
                                                        if (streamReader) {
                                                            require(streamReader)->Dispose();
                                                        }
                                                    });
                                            }
                                        }
                                    },
                                    [&]() {
                                        if (stream) {
                                            require(stream)->Dispose();
                                        }
                                    });
                            }
                            pls::cs::List<StringArray>::make();
                            langPackRecord = pls::cs::Ref<kl_unity_util::Language_LangPackRecord>{};
                            pls::cs::String text9 = literal(u"");
                            pls::cs::String text10 = literal(u"");
                            num2 = 0;
                            while (num2 < text8.length()) {
                                pls::cs::Int32 num8 = pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return index_char2(text8, u',', num2); });
                                pls::cs::Int32 num9 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return index_char2(text8, char16_t(10), num8 + 1);
                                });
                                if (num9 == -1) {
                                    num9 = text8.length();
                                }
                                pls::cs::Int32 num10 = num9;
                                if (pls::cs::cast_integral<pls::cs::Int32>(text8.at(num9 - 1)) ==
                                    pls::cs::cast_integral<pls::cs::Int32>(char16_t(13))) {
                                    --num9;
                                }
                                pls::cs::String text11 = pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return substring2(text8, num2, num8 - num2); });
                                pls::cs::String text12 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return substring2(text8, num8 + 1, num9 - (num8 + 1));
                                });
                                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::cs::culture_starts_with(text11, literal(u"\""));
                                    }) &&
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::cs::culture_ends_with(text11, literal(u"\""));
                                    })) {
                                    text11 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return substring2(text11, 1, pls::cs::Int32(text11.length()) - 2);
                                    });
                                }
                                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::cs::culture_starts_with(text12, literal(u"\""));
                                    }) &&
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::cs::culture_ends_with(text12, literal(u"\""));
                                    })) {
                                    text12 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return substring2(text12, 1, pls::cs::Int32(text12.length()) - 2);
                                    });
                                }
                                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::cs::culture_starts_with(text11, literal(u"@"));
                                    })) {
                                    if (text11 == literal(u"@author")) {
                                        Language::langPackAuthor_() = text12;
                                    }
                                    if (text11 == literal(u"@language")) {
                                        Language::langPackCode_() =
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return pls::cs::RuntimeRegex::Replace(
                                                    text12, literal(u"[^a-zA-Z\\-]"), literal(u""));
                                            });
                                    }
                                    if (text11 == literal(u"@title")) {
                                        Language::langPackTitle_() = text12;
                                    }
                                    if (text11 == literal(u"@scale")) {
                                        Language::langPackScale_() = 100;
                                        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return pls::cs::culture_ends_with(text12, literal(u"%"));
                                            })) {
                                            text12 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return substring2(text12, 0,
                                                                  pls::cs::Int32(text12.length()) - 1);
                                            });
                                        }
                                        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return ([&]() {
                                                    auto cs_receiver = text12;
                                                    auto cs_argument = literal(u"auto");
                                                    cs_receiver.length();
                                                    return pls::cs::culture_equals_ignore_case(cs_receiver,
                                                                                               cs_argument);
                                                }());
                                            })) {
                                            Language::langPackScale_() = -1;
                                        } else {
                                            pls::cs::Int32 result = 0;
                                            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return ([&]() {
                                                        auto cs_text = text12;
                                                        return pls::cs::int32_try_parse(cs_text, result);
                                                    }());
                                                })) {
                                                Language::langPackScale_() = result;
                                            }
                                        }
                                    }
                                    if (text11 == literal(u"@appli")) {
                                        pls::cs::Ref<pls::cs::RegexMatch> match =
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return pls::cs::RuntimeRegex::Match(text12,
                                                                                    literal(u"([0-9]+)"));
                                            });
                                        if (require(match)->get_Success()) {
                                            num7 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return pls::cs::int32_parse(
                                                    require(([&]() {
                                                        auto cs_receiver = require(match)->get_Groups();
                                                        auto cs_index = 1;
                                                        return require(cs_receiver)->get_Item(cs_index);
                                                    }()))
                                                        ->get_Value());
                                            });
                                        }
                                    }
                                } else if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return pls::cs::culture_starts_with(text11, literal(u"#"));
                                           })) {
                                    pls::cs::Int32 result2 = 0;
                                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return ([&]() {
                                                auto cs_text =
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return substring1(text11, 1);
                                                    });
                                                return pls::cs::int32_try_parse(cs_text, result2);
                                            }());
                                        })) {
                                        langPackRecord =
                                            kl_unity_util::Language::langPackRecords_().get_Item(result2);
                                        if (!is_null(langPackRecord)) {
                                            pls::cs::Ref<pls::cs::RegexMatch> match2 =
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return pls::cs::RuntimeRegex::Match(
                                                        require(langPackRecord)->From.get_Item(0),
                                                        literal(u"^<po=[^>]+>"));
                                                });
                                            text9 = ((!require(match2)->get_Success())
                                                         ? literal(u"")
                                                         : require(match2)->get_Value());
                                            match2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return pls::cs::RuntimeRegex::Match(
                                                    require(langPackRecord)->From.get_Item(0),
                                                    literal(u"</po>$"));
                                            });
                                            text10 = ((!require(match2)->get_Success())
                                                          ? literal(u"")
                                                          : require(match2)->get_Value());
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return require(langPackRecord)
                                                    ->To.Add(pls::cs::String::concat(
                                                        pls::cs::String::concat(text9, text12), text10));
                                            });
                                        }
                                    }
                                } else if (text11.length() <= 0) {
                                    if (!is_null(langPackRecord)) {
                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return require(langPackRecord)
                                                ->To.Add(pls::cs::String::concat(
                                                    pls::cs::String::concat(text9, text12), text10));
                                        });
                                    }
                                }
                                num2 = num10 + 1;
                            }
                        }
                        if (num7 != kl_cfg::Config::PID()) {
                            throw pls::cs::Exception(
                                literal(u"The language packs for different applications.").utf8());
                        }
                        if (!is_null(Language::langPackCode_()) && (Language::langPackCode_().length() > 0)) {
                            StringArray array6 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() {
                                    auto cs_text = Language::langPackCode_();
                                    auto cs_separators = pls::cs::Array<char16_t>::make(1);
                                    cs_separators.at(0) = u'-';
                                    return pls::cs::string_split(cs_text, cs_separators);
                                }());
                            });
                            if (array6.length() == 2) {
                                Language::langPackCode_() = ([&]() {
                                    auto cs_left = pls::cs::String::concat(
                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return pls::cs::culture_to_lower(array6[0]);
                                        }),
                                        literal(u"-"));
                                    auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::cs::culture_to_upper(array6[1]);
                                    });
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }());
                            }
                        }
                        if (Language::langPackTitle_().length() == 0) {
                            Language::langPackTitle_() = Language::langPackCode_();
                        }
                        {
                            auto cs_value = StringArray{};
                            kl_unity_util::Language::langPackFolders_() = cs_value;
                        }
                        if (!is_null(Language::langPackCode_())) {
                            StringArray array7 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() {
                                    auto cs_text = Language::langPackCode_();
                                    auto cs_separators = pls::cs::Array<char16_t>::make(1);
                                    cs_separators.at(0) = u'-';
                                    return pls::cs::string_split(cs_text, cs_separators);
                                }());
                            });
                            pls::cs::List<pls::cs::String> list2 = pls::cs::List<pls::cs::String>::make();
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return list2.Add(Language::langPackCode_()); });
                            if (Language::langPackCode_() == literal(u"zh-SG")) {
                                pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return list2.Add(literal(u"zh-CN")); });
                            }
                            if (Language::langPackCode_() == literal(u"zh-HK")) {
                                pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return list2.Add(literal(u"zh-TW")); });
                            }
                            if (Language::langPackCode_() == literal(u"zh-MO")) {
                                pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return list2.Add(literal(u"zh-TW")); });
                            }
                            if (array7.length() >= 2) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return ([&]() -> void {
                                        auto cs_receiver = list2;
                                        auto cs_arg0 = array7[0];
                                        cs_receiver.Add(cs_arg0);
                                    }());
                                });
                            }
                            {
                                auto cs_value = pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return list2.ToArray(); });
                                kl_unity_util::Language::langPackFolders_() = cs_value;
                            }
                        }
                        {
                            auto cs_value =
                                pls::cs::Dictionary<pls::cs::String,
                                                    pls::cs::Array<pls::cs::List<
                                                        kl_unity_util::Language_RecordPosition>>>::make();
                            kl_unity_util::Language::langPackLines_() = cs_value;
                        }
                        {
                            auto cs_list_enum175 = dictionary.GetEnumerator();
                            struct cs_list_scope175 {
                                decltype(cs_list_enum175)& e;
                                ~cs_list_scope175() { e.Dispose(); }
                            } cs_scope175{cs_list_enum175};
                            while (cs_list_enum175.MoveNext()) {
                                pls::cs::KeyValuePair<
                                    pls::cs::String,
                                    pls::cs::List<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>>
                                    item = cs_list_enum175.get_Current();
                                {
                                    pls::cs::Int32 num11 = 0;
                                    {
                                        auto cs_list_enum176 = (item.get_Value()).GetEnumerator();
                                        struct cs_list_scope176 {
                                            decltype(cs_list_enum176)& e;
                                            ~cs_list_scope176() { e.Dispose(); }
                                        } cs_scope176{cs_list_enum176};
                                        while (cs_list_enum176.MoveNext()) {
                                            pls::cs::Ref<kl_unity_util::Language_LangPackRecord> item2 =
                                                cs_list_enum176.get_Current();
                                            {
                                                {
                                                    auto cs_list_enum177 =
                                                        require(item2)->Positions.GetEnumerator();
                                                    struct cs_list_scope177 {
                                                        decltype(cs_list_enum177)& e;
                                                        ~cs_list_scope177() { e.Dispose(); }
                                                    } cs_scope177{cs_list_enum177};
                                                    while (cs_list_enum177.MoveNext()) {
                                                        kl_unity_util::Language_Position position =
                                                            cs_list_enum177.get_Current();
                                                        {
                                                            if (num11 < position.Line) {
                                                                num11 = position.Line;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    ++num11;
                                    pls::cs::Array<pls::cs::List<kl_unity_util::Language_RecordPosition>>
                                        array8 = pls::cs::Array<pls::cs::List<
                                            kl_unity_util::Language_RecordPosition>>::make(num11);
                                    {
                                        auto cs_list_enum178 = (item.get_Value()).GetEnumerator();
                                        struct cs_list_scope178 {
                                            decltype(cs_list_enum178)& e;
                                            ~cs_list_scope178() { e.Dispose(); }
                                        } cs_scope178{cs_list_enum178};
                                        while (cs_list_enum178.MoveNext()) {
                                            pls::cs::Ref<kl_unity_util::Language_LangPackRecord> item3 =
                                                cs_list_enum178.get_Current();
                                            {
                                                {
                                                    auto cs_list_enum179 =
                                                        require(item3)->Positions.GetEnumerator();
                                                    struct cs_list_scope179 {
                                                        decltype(cs_list_enum179)& e;
                                                        ~cs_list_scope179() { e.Dispose(); }
                                                    } cs_scope179{cs_list_enum179};
                                                    while (cs_list_enum179.MoveNext()) {
                                                        kl_unity_util::Language_Position position2 =
                                                            cs_list_enum179.get_Current();
                                                        {
                                                            if (is_null(array8.get_Item(position2.Line))) {
                                                                {
                                                                    auto cs_target = array8;
                                                                    auto cs_index = position2.Line;
                                                                    auto cs_value = pls::cs::List<
                                                                        kl_unity_util::
                                                                            Language_RecordPosition>::make();
                                                                    cs_target.set_Item(cs_index, cs_value);
                                                                }
                                                            }
                                                            pls::diagnostic::api_call([&]()
                                                                                          -> decltype(auto) {
                                                                return ([&]() -> void {
                                                                    auto cs_receiver =
                                                                        array8.get_Item(position2.Line);
                                                                    auto cs_arg0 =
                                                                        ([&]()
                                                                             -> kl_unity_util::
                                                                                 Language_RecordPosition {
                                                                                     pls::cs::Int32 cs_arg0 =
                                                                                         position2.Line;
                                                                                     pls::cs::Int32 cs_arg1 =
                                                                                         position2.Segment;
                                                                                     return Language_RecordPosition::
                                                                                         create(cs_arg0,
                                                                                                cs_arg1,
                                                                                                item3);
                                                                                 }());
                                                                    cs_receiver.Add(cs_arg0);
                                                                }());
                                                            });
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    pls::cs::Array<pls::cs::List<kl_unity_util::Language_RecordPosition>>
                                        array9 = array8;
                                    {
                                        auto cs_each180 = array9;
                                        for (std::int32_t cs_i180 = 0; cs_i180 < cs_each180.length();
                                             ++cs_i180) {
                                            pls::cs::List<kl_unity_util::Language_RecordPosition> list3 =
                                                cs_each180.get_Item(cs_i180);
                                            {
                                                if (is_null(list3)) {
                                                    continue;
                                                }
                                                for (pls::cs::Int32 j = 0;
                                                     j < pls::cs::Int32(list3.get_Count()) - 1; ++j) {
                                                    for (pls::cs::Int32 num12 =
                                                             pls::cs::Int32(list3.get_Count()) - 1;
                                                         num12 > j; --num12) {
                                                        if ([&]() -> bool {
                                                                auto cs_left =
                                                                    list3.get_Item(num12 - 1).Segment;
                                                                auto cs_right = list3.get_Item(num12).Segment;
                                                                return cs_left > cs_right;
                                                            }()) {
                                                            kl_unity_util::Language_RecordPosition value2 =
                                                                list3.get_Item(num12);
                                                            {
                                                                auto cs_target = list3;
                                                                auto cs_index = num12;
                                                                auto cs_value = list3.get_Item(num12 - 1);
                                                                cs_target.set_Item(cs_index, cs_value);
                                                            }
                                                            {
                                                                auto cs_target = list3;
                                                                auto cs_index = num12 - 1;
                                                                auto cs_value = value2;
                                                                cs_target.set_Item(cs_index, cs_value);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    {
                                        auto cs_target = kl_unity_util::Language::langPackLines_();
                                        auto cs_index = item.get_Key();
                                        auto cs_value = array8;
                                        cs_target.set_Item(cs_index, cs_value);
                                    }
                                }
                            }
                        }
                        pls::cs::List<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>> value3 =
                            pls::cs::List<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>{};
                        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return ([&]() {
                                    auto cs_dictionary = dictionary;
                                    auto cs_key = literal(u"lib.language");
                                    return cs_dictionary.TryGetValue(cs_key, value3);
                                }());
                            })) {
                            ByteArray array10 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::kairo::Storage::Read(3, false,
                                                                 literal(u"language_pack_template_ja.txt"));
                            });
                            if ([&]() {
                                    auto cs_left = pls::cs::box(array10);
                                    auto cs_right = pls::cs::box(ByteArray{});
                                    return cs_left == cs_right;
                                }()) {
                                throw pls::cs::Exception();
                            }
                            pls::cs::String text13 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StringUtil::GetString(array10);
                            });
                            pls::cs::Dictionary<pls::cs::String, pls::cs::List<pls::cs::Int32>> dictionary2 =
                                pls::cs::Dictionary<pls::cs::String, pls::cs::List<pls::cs::Int32>>::make();
                            num2 = 0;
                            while (num2 < text13.length()) {
                                pls::cs::Int32 num13 = pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return index_char2(text13, u',', num2); });
                                pls::cs::Int32 num14 = pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return index_char2(text13, u',', num13 + 1); });
                                pls::cs::Int32 num15 = pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return index_char2(text13, u',', num14 + 1); });
                                pls::cs::Int32 num16 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return index_char2(text13, char16_t(10), num15 + 1);
                                });
                                if (num16 == -1) {
                                    num16 = text13.length();
                                }
                                pls::cs::String text14 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::cs::string_trim(
                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return substring2(text13, num2, num13 - num2);
                                        }));
                                });
                                pls::cs::String text15 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::cs::culture_to_lower(
                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return substring2(text13, num13 + 1, num14 - (num13 + 1));
                                        }));
                                });
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::cs::string_trim(
                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return substring2(text13, num14 + 1, num15 - (num14 + 1));
                                        }));
                                });
                                pls::cs::String key = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return substring2(text13, num15 + 1, num16 - (num15 + 1));
                                });
                                if (text15 == literal(u"lib.language") && (text14.length() > 0)) {
                                    pls::cs::List<pls::cs::Int32> value4 = pls::cs::List<pls::cs::Int32>{};
                                    if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return ([&]() {
                                                auto cs_dictionary = dictionary2;
                                                auto cs_key = key;
                                                return cs_dictionary.TryGetValue(cs_key, value4);
                                            }());
                                        })) {
                                        {
                                            auto cs_target = dictionary2;
                                            auto cs_index = key;
                                            auto cs_value = (([&]() {
                                                auto cs_value = pls::cs::List<pls::cs::Int32>::make();
                                                value4 = cs_value;
                                                return cs_value;
                                            }()));
                                            cs_target.set_Item(cs_index, cs_value);
                                        }
                                    }
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return ([&]() -> void {
                                            auto cs_receiver = value4;
                                            auto cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return pls::cs::int32_parse(text14);
                                            });
                                            cs_receiver.Add(cs_arg0);
                                        }());
                                    });
                                }
                                num2 = num16 + 1;
                            }
                            pls::cs::Array<StringArray2> array11 = pls::cs::Array<StringArray2>::from(
                                {kl_unity_util::Language::BUILTIN_TRANSLATE_TABLE(),
                                 kl_unity_util::Language::BUILTIN_SOFTLABEL_TABLE()});
                            for (pls::cs::Int32 k = 0; k < array11.length(); ++k) {
                                for (pls::cs::Int32 l = 0; l < array11[k].length(); ++l) {
                                    pls::cs::String text16 = array11[k][l][1];
                                    pls::cs::Int32 num17 = -1;
                                    pls::cs::List<pls::cs::Int32> value5 = pls::cs::List<pls::cs::Int32>{};
                                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return ([&]() {
                                                auto cs_dictionary = dictionary2;
                                                auto cs_key = array11[k][l][0];
                                                return cs_dictionary.TryGetValue(cs_key, value5);
                                            }());
                                        })) {
                                        {
                                            auto cs_list_enum181 = value5.GetEnumerator();
                                            struct cs_list_scope181 {
                                                decltype(cs_list_enum181)& e;
                                                ~cs_list_scope181() { e.Dispose(); }
                                            } cs_scope181{cs_list_enum181};
                                            while (cs_list_enum181.MoveNext()) {
                                                pls::cs::Int32 item4 = cs_list_enum181.get_Current();
                                                {
                                                    for (pls::cs::Int32 m = 0; m < value3.get_Count(); ++m) {
                                                        if (require(value3.get_Item(m))->Id == item4) {
                                                            num17 = m;
                                                            break;
                                                        }
                                                    }
                                                    if (num17 == -1) {
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        for (pls::cs::Int32 num18 = pls::cs::Int32(value3.get_Count()) - 1;
                                             num18 >= 0; --num18) {
                                            pls::cs::Ref<kl_unity_util::Language_LangPackRecord>
                                                langPackRecord2 = value3.get_Item(num18);
                                            if (([&]() -> bool {
                                                    auto cs_left =
                                                        require(langPackRecord2)->From.get_Item(0).length();
                                                    auto cs_right = text16.length();
                                                    return cs_left == cs_right;
                                                }()) &&
                                                require(langPackRecord2)->From.get_Item(0) == text16 &&
                                                (require(langPackRecord2)->To.get_Count() > 0)) {
                                                num17 = num18;
                                                break;
                                            }
                                        }
                                    }
                                    if (num17 != -1) {
                                        pls::cs::Ref<kl_unity_util::Language_LangPackRecord> langPackRecord3 =
                                            value3.get_Item(num17);
                                        if (array11[k][l].length() <= 2) {
                                            StringArray array12 = StringArray::make(3);
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return pls::cs::array_copy(
                                                    pls::cs::array_cast(pls::cs::box(array11[k][l])), 0,
                                                    pls::cs::array_cast(pls::cs::box(array12)), 0, 2);
                                            });
                                            array11[k][l] = array12;
                                        }
                                        if (require(langPackRecord3)->To.get_Count() <= 0) {
                                            array11[k][l][2] = literal(u"");
                                        } else {
                                            {
                                                auto cs_target = array11[k][l];
                                                auto cs_index = 2;
                                                auto cs_value = require(langPackRecord3)->To.get_Item(0);
                                                cs_target.set_Item(cs_index, cs_value);
                                            }
                                        }
                                        if (require(langPackRecord3)->Positions.get_Count() > 0) {
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return require(langPackRecord3)->Positions.RemoveAt(0);
                                            });
                                        }
                                        if (require(langPackRecord3)->Positions.get_Count() <= 0) {
                                            pls::diagnostic::api_call(
                                                [&]() -> decltype(auto) { return value3.RemoveAt(num17); });
                                        }
                                    }
                                }
                            }
                            {
                                auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::Language::MakeTextTable(
                                        kl_unity_util::Language::BUILTIN_TRANSLATE_TABLE());
                                });
                                kl_unity_util::Language::builtInTextTable_() = cs_value;
                            }
                        }
                    }
                    StringArray array13 = StringArray{};
                    StringArray2 array14 = StringArray2{};
                    jarInflater =
                        kl_unity_util::JarInflater::create(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Storage::Read(3, false, literal(u"xls.dat"));
                        }));
                    if (JarInflater::Exist(require(jarInflater), literal(u"softkey.txt"))) {
                        array13 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StringUtil::LoadStringArray(jarInflater,
                                                                              literal(u"softkey.txt"));
                        });
                        if ([&]() {
                                auto cs_left = pls::cs::box(array13);
                                auto cs_right = pls::cs::box(StringArray{});
                                return cs_left != cs_right;
                            }()) {
                            array14 = StringArray2::make(array13.length());
                            for (pls::cs::Int32 n = 0; n < array14.length(); ++n) {
                                array14[n] = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::StringUtil::Split(array13[n], literal(u"\t"), false,
                                                                            false, false);
                                });
                            }
                            Language::SetSoftLabelTable(array14);
                        }
                    }
                    if (JarInflater::Exist(require(jarInflater), literal(u"text.txt"))) {
                        array13 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StringUtil::LoadStringArray(jarInflater,
                                                                              literal(u"text.txt"));
                        });
                        if ([&]() {
                                auto cs_left = pls::cs::box(array13);
                                auto cs_right = pls::cs::box(StringArray{});
                                return cs_left != cs_right;
                            }()) {
                            array14 = StringArray2::make(array13.length());
                            for (pls::cs::Int32 num19 = 0; num19 < array14.length(); ++num19) {
                                array13[num19] = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::StringUtil::Replace(array13[num19], literal(u"\\n"),
                                                                              literal(u"\n"));
                                });
                                array14[num19] = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::StringUtil::Split(array13[num19], literal(u"\t"),
                                                                            false, false, false);
                                });
                            }
                            Language::SetTextTable(array14);
                        }
                    }
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(jarInflater)->Close(); });
                    jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return pls::kairo::Font::SetScale(100); });
                    if ([&]() {
                            auto cs_left = pls::cs::box(kl_unity_util::Language::langPackRecords_());
                            auto cs_right = pls::cs::box(
                                pls::cs::Array<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>{});
                            return cs_left != cs_right;
                        }()) {
                        if (Language::langPackScale_() == -1 &&
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return dictionary.ContainsKey(literal(u"text"));
                            })) {
                            pls::cs::List<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>> list5 =
                                pls::cs::List<pls::cs::Ref<kl_unity_util::Language_LangPackRecord>>::make();
                            {
                                auto cs_list_enum182 = dictionary.get_Item(literal(u"text")).GetEnumerator();
                                struct cs_list_scope182 {
                                    decltype(cs_list_enum182)& e;
                                    ~cs_list_scope182() { e.Dispose(); }
                                } cs_scope182{cs_list_enum182};
                                while (cs_list_enum182.MoveNext()) {
                                    pls::cs::Ref<kl_unity_util::Language_LangPackRecord> item5 =
                                        cs_list_enum182.get_Current();
                                    {
                                        if ((require(item5)->From.get_Count() <= 1) &&
                                            (require(item5)->To.get_Count() <= 1) &&
                                            (require(item5)->To.get_Count() != 0) &&
                                            50 <= require(item5)->From.get_Item(0).length() &&
                                            (require(item5)->From.get_Item(0).length() < 200)) {
                                            pls::diagnostic::api_call(
                                                [&]() -> decltype(auto) { return list5.Add(item5); });
                                        }
                                    }
                                }
                            }
                            pls::cs::Int32 num20 = 0;
                            pls::cs::Int32 num21 = 0;
                            pls::cs::Int32 num22 = pls::cs::Int32(list5.get_Count()) / 20;
                            if (num22 <= 0) {
                                num22 = 1;
                            }
                            Language::langPackScale_() = 0;
                            pls::cs::Ref<pls::kairo::Font> font = pls::cs::make_ref<pls::kairo::Font>();
                            while (num20 < list5.get_Count()) {
                                pls::cs::Ref<kl_unity_util::Language_LangPackRecord> langPackRecord4 =
                                    list5.get_Item(num20);
                                {
                                    auto cs_old = Language::langPackScale_();
                                    auto cs_rhs = ([&]() -> pls::cs::Int32 {
                                        auto cs_left =
                                            pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return ([&]() -> pls::cs::Int32 {
                                                    pls::cs::String cs_arg0 =
                                                        require(langPackRecord4)->From.get_Item(0);
                                                    return require(font)->StringWidth(cs_arg0);
                                                }());
                                            })) *
                                            100;
                                        auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return ([&]() -> pls::cs::Int32 {
                                                pls::cs::String cs_arg0 =
                                                    require(langPackRecord4)->To.get_Item(0);
                                                return require(font)->StringWidth(cs_arg0);
                                            }());
                                        });
                                        return cs_left / cs_right;
                                    }());
                                    pls::cs::Int32 cs_value = cs_old + cs_rhs;
                                    Language::langPackScale_() = cs_value;
                                }
                                num20 += num22;
                                ++num21;
                            }
                            if (num21 <= 0) {
                                Language::langPackScale_() = 100;
                            } else {
                                {
                                    auto cs_old = Language::langPackScale_();
                                    auto cs_rhs = num21;
                                    pls::cs::Int32 cs_value = cs_old / cs_rhs;
                                    Language::langPackScale_() = cs_value;
                                }
                            }
                            if (Language::langPackScale_() > 100) {
                                Language::langPackScale_() = 100;
                            }
                        }
                        if (Language::langPackScale_() <= 0) {
                            Language::langPackScale_() = 100;
                        }
                        if (Language::langPackScale_() != 100) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::kairo::Font::SetScale(Language::langPackScale_());
                            });
                        }
                    }
                } catch (const pls::cs::Exception& cs_caught_183) {
                    auto ex = pls::cs::capture_exception(cs_caught_183);
                    {
                        {
                            auto cs_value = array;
                            kl_unity_util::Language::langPackRecords_() = cs_value;
                        }
                        {
                            auto cs_value = array2;
                            kl_unity_util::Language::langPackFolders_() = cs_value;
                        }
                        Language::langPackAuthor_() = text;
                        Language::langPackCode_() = text2;
                        Language::langPackTitle_() = text3;
                        Language::langPackScale_() = num;
                        pls::cs::throw_exception(ex);
                    }
                }
            },
            [&]() {
                if (!is_null(jarInflater)) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(jarInflater)->Close(); });
                }
                jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
            });
    }
}

// M:kairo.unity.util.Language.GetSystemLanguagePackFiles
StringArray2 GetSystemLanguagePackFiles() {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.GetSystemLanguagePackFiles", kairo);
    {
        return Language::systemLangPackFiles_();
    }
}

// M:kairo.unity.util.Language.GetLanguagePackFile
pls::cs::String GetLanguagePackFile() {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.GetLanguagePackFile", kairo);
    {
        return Language::langPackFile_();
    }
}

// M:kairo.unity.util.Language.GetLanguageCode
pls::cs::String GetLanguageCode() {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.GetLanguageCode", kairo);
    {
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::Language::Japanese(); })) {
            return literal(u"ja-JP");
        }
        return Language::langPackCode_();
    }
}

// M:kairo.unity.util.Language.GetLanguagePackInfo(System.Byte[])
pls::cs::Ref<Language_LanguagePackInfo> GetLanguagePackInfo(ByteArray data) {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.GetLanguagePackInfo(System.Byte[])", kairo);
    {
        pls::cs::Ref<Language_LanguagePackInfo> languagePackInfo = Language_LanguagePackInfo::create();
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) {
            return languagePackInfo;
        }
        {
            pls::cs::Ref<pls::cs::MemoryStream> stream = ([&]() {
                auto cs_arg0 = data;
                return pls::cs::make_ref<pls::cs::MemoryStream>(cs_arg0);
            }());
            pls::cs::run_finally(
                [&]() {
                    {
                        {
                            pls::cs::Ref<pls::cs::RuntimeStreamReader> streamReader = ([&]() {
                                auto cs_arg0 = stream;
                                auto cs_arg1 = pls::cs::RuntimeEncoding::get_UTF8();
                                return pls::cs::make_ref<pls::cs::RuntimeStreamReader>(cs_arg0, cs_arg1);
                            }());
                            pls::cs::run_finally(
                                [&]() {
                                    {
                                        while (true) {
                                            pls::cs::String text =
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return require(streamReader)->ReadLine();
                                                });
                                            if (is_null(text)) {
                                                break;
                                            }
                                            pls::cs::Int32 num = pls::diagnostic::api_call(
                                                [&]() -> decltype(auto) { return index_char1(text, u','); });
                                            if (num == -1) {
                                                break;
                                            }
                                            pls::cs::String text2 = pls::diagnostic::api_call(
                                                [&]() -> decltype(auto) { return substring2(text, 0, num); });
                                            pls::cs::String text3 =
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return substring1(text, num + 1);
                                                });
                                            pls::cs::Ref<pls::cs::RegexMatch> match =
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return pls::cs::RuntimeRegex::Match(
                                                        text2, literal(u"^\\s*\"(.*)\"\\s*$"));
                                                });
                                            if (require(match)->get_Success()) {
                                                text2 = require(([&]() {
                                                            auto cs_receiver = require(match)->get_Groups();
                                                            auto cs_index = 1;
                                                            return require(cs_receiver)->get_Item(cs_index);
                                                        }()))
                                                            ->get_Value();
                                            }
                                            text2 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return pls::cs::culture_to_lower(
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return pls::cs::string_trim(text2);
                                                    }));
                                            });
                                            match = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return pls::cs::RuntimeRegex::Match(
                                                    text3, literal(u"^\\s*\"(.*)\"\\s*$"));
                                            });
                                            if (require(match)->get_Success()) {
                                                text3 = require(([&]() {
                                                            auto cs_receiver = require(match)->get_Groups();
                                                            auto cs_index = 1;
                                                            return require(cs_receiver)->get_Item(cs_index);
                                                        }()))
                                                            ->get_Value();
                                            }
                                            if (!pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return pls::cs::culture_starts_with(text2, literal(u"@"));
                                                })) {
                                                break;
                                            }
                                            {
                                                auto cs_switch_value_63657 = text2;
                                                std::int32_t cs_switch_index_63657 = -1;
                                                if (cs_switch_value_63657 == literal(u"@title"))
                                                    cs_switch_index_63657 = 0;
                                                if (cs_switch_value_63657 == literal(u"@language"))
                                                    cs_switch_index_63657 = 1;
                                                if (cs_switch_value_63657 == literal(u"@scale"))
                                                    cs_switch_index_63657 = 2;
                                                if (cs_switch_value_63657 == literal(u"@appli"))
                                                    cs_switch_index_63657 = 3;
                                                if (cs_switch_value_63657 == literal(u"@version"))
                                                    cs_switch_index_63657 = 4;
                                                if (cs_switch_value_63657 == literal(u"@author"))
                                                    cs_switch_index_63657 = 5;
                                                switch (cs_switch_index_63657) {
                                                case 0: {
                                                    require(languagePackInfo)->Title = text3;
                                                    break;
                                                }
                                                case 1: {
                                                    {
                                                        auto cs_target = languagePackInfo;
                                                        auto cs_value = pls::diagnostic::api_call(
                                                            [&]() -> decltype(auto) {
                                                                return pls::cs::RuntimeRegex::Replace(
                                                                    text3, literal(u"[^a-zA-Z\\-]"),
                                                                    literal(u""));
                                                            });
                                                        require(cs_target)->Code = cs_value;
                                                    }
                                                    break;
                                                }
                                                case 2: {
                                                    require(languagePackInfo)->Scale = text3;
                                                    break;
                                                }
                                                case 3: {
                                                    require(languagePackInfo)->Appli = text3;
                                                    break;
                                                }
                                                case 4: {
                                                    match =
                                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                            return pls::cs::RuntimeRegex::Match(
                                                                text3, literal(u"([0-9.]+)"));
                                                        });
                                                    if (require(match)->get_Success()) {
                                                        {
                                                            auto cs_target = languagePackInfo;
                                                            auto cs_value =
                                                                require(([&]() {
                                                                    auto cs_receiver =
                                                                        require(match)->get_Groups();
                                                                    auto cs_index = 1;
                                                                    return require(cs_receiver)
                                                                        ->get_Item(cs_index);
                                                                }()))
                                                                    ->get_Value();
                                                            require(cs_target)->Version = cs_value;
                                                        }
                                                    }
                                                    break;
                                                }
                                                case 5: {
                                                    require(languagePackInfo)->Author = text3;
                                                    break;
                                                }
                                                }
                                            }
                                        }
                                    }
                                },
                                [&]() {
                                    if (streamReader) {
                                        require(streamReader)->Dispose();
                                    }
                                });
                        }
                    }
                },
                [&]() {
                    if (stream) {
                        require(stream)->Dispose();
                    }
                });
        }
        pls::cs::String title = Language::GetTitle(require(languagePackInfo)->Code);
        if (!is_null(title)) {
            require(languagePackInfo)->Title = title;
        }
        require(languagePackInfo)->Author = literal(u"Kairosoft");
        return languagePackInfo;
    }
}

// M:kairo.unity.util.Language.MakeLangPackTemplate(System.Boolean,System.Int32,System.String@,System.String@)
void MakeLangPackTemplate(bool japanese, pls::cs::Int32 version, pls::cs::String& file,
                          pls::cs::String& data) {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.Language.MakeLangPackTemplate(System.Boolean,System.Int32,System.String@,System.String@)",
        kairo);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::String filename = (japanese ? literal(u"language_pack_template_ja.txt")
                                             : literal(u"language_pack_template_en.txt"));
        pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_unity_util::StringUtil::GetString(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Storage::Read(3, false, filename); }));
        });
        pls::cs::String text2 = (japanese ? literal(u"ja-JP") : literal(u"en-US"));
        pls::cs::String text3 = (japanese ? literal(u"日本語") : literal(u"English"));
        pls::cs::Ref<pls::cs::StringBuilder> stringBuilder = ([&]() {
            return pls::cs::make_ref<pls::cs::StringBuilder>();
        }());
        pls::cs::String text4 =
            pls::cs::String::concat(pls::cs::String::concat(integer_string(version / 100), literal(u".")),
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_unity_util::StringUtil::FormatString(
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return object_string(pls::cs::box(version % 100));
                                            }),
                                            2, u'0');
                                    }));
        StringArray2 array = StringArray2::from(
            {StringArray::from({literal(u"@title"), text3}),
             StringArray::from({literal(u"@language"), text2}),
             StringArray::from({literal(u"@scale"), literal(u"auto")}),
             StringArray::from(
                 {literal(u"@appli"), pls::cs::String::concat(integer_string(kl_cfg::Config::PID()),
                                                              literal(u" - Do not change"))}),
             StringArray::from(
                 {literal(u"@version"), pls::cs::String::concat(text4, literal(u" - Do not change"))}),
             StringArray::from({literal(u"@author"), literal(u"Your Name")})});
        {
            auto cs_each270 = array;
            for (std::int32_t cs_i270 = 0; cs_i270 < cs_each270.length(); ++cs_i270) {
                StringArray array2 = cs_each270.get_Item(cs_i270);
                {
                    if (require(stringBuilder)->get_Length() > 0) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(stringBuilder)->Append(literal(u"\n"));
                        });
                    }
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> {
                            auto cs_receiver = stringBuilder;
                            auto cs_arg0 = pls::cs::String::concat(
                                ([&]() {
                                    auto cs_left = pls::cs::String::concat(
                                        pls::cs::String::concat(literal(u"\""), array2[0]),
                                        literal(u"\",\""));
                                    auto cs_right = array2[1];
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()),
                                literal(u"\""));
                            return require(cs_receiver)->Append(cs_arg0);
                        }());
                    });
                }
            }
        }
        pls::cs::Int32 num = 0;
        while (num < text.length()) {
            pls::cs::Int32 num2 =
                pls::diagnostic::api_call([&]() -> decltype(auto) { return index_char2(text, u',', num); });
            pls::cs::Int32 num3 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return index_char2(text, u',', num2 + 1); });
            pls::cs::Int32 num4 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return index_char2(text, u',', num3 + 1); });
            pls::cs::Int32 num5 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return index_char2(text, char16_t(10), num4 + 1); });
            if (num5 == -1) {
                num5 = text.length();
            }
            pls::cs::String text5 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return substring2(text, num, num2 - num); });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return substring2(text, num2 + 1, num3 - (num2 + 1)); });
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return substring2(text, num3 + 1, num4 - (num3 + 1)); });
            pls::cs::String text6 = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return substring2(text, num4 + 1, num5 - (num4 + 1)); });
            while (true) {
                pls::cs::Int32 length = text6.length();
                text6 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::cs::RuntimeRegex::Replace(text6, literal(u"^<po=[^>]+>|</po>$"),
                                                          literal(u""));
                });
                if (length == text6.length()) {
                    break;
                }
            }
            if (text6.length() > 0) {
                if (text5.length() <= 0) {
                    if (require(stringBuilder)->get_Length() > 0) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(stringBuilder)->Append(literal(u"\n"));
                        });
                    }
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> {
                            auto cs_receiver = stringBuilder;
                            auto cs_arg0 = pls::cs::String::concat(
                                pls::cs::String::concat(literal(u",\""),
                                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                            return pls::cs::string_replace(
                                                                text6, literal(u"\""), literal(u"\"\""));
                                                        })),
                                literal(u"\""));
                            return require(cs_receiver)->Append(cs_arg0);
                        }());
                    });
                } else {
                    while (text5.length() < 5) {
                        text5 = pls::cs::String::concat(literal(u"0"), text5);
                    }
                    if (require(stringBuilder)->get_Length() > 0) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(stringBuilder)->Append(literal(u"\n"));
                        });
                    }
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> pls::cs::Ref<pls::cs::StringBuilder> {
                            auto cs_receiver = stringBuilder;
                            auto cs_arg0 = pls::cs::String::concat(
                                pls::cs::String::concat(
                                    pls::cs::String::concat(pls::cs::String::concat(literal(u"\"#"), text5),
                                                            literal(u"\",\"")),
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::cs::string_replace(text6, literal(u"\""),
                                                                       literal(u"\"\""));
                                    })),
                                literal(u"\""));
                            return require(cs_receiver)->Append(cs_arg0);
                        }());
                    });
                }
            }
            num = num5 + 1;
        }
        data =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(stringBuilder)->ToString(); });
        file = pls::cs::String::concat(kl_cfg::Config::OUTPUT_CSV_NAME(),
                                       (japanese ? literal(u"_ja") : literal(u"")));
        file = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return pls::cs::RuntimeRegex::Replace(file, literal(u"[^a-zA-Z_]"), literal(u""));
        });
        file = pls::cs::String::concat(file, literal(u".csv"));
        if (kl_cfg::Config::PRINT()) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::Log::Info(
                    pls::cs::String::concat(pls::cs::String::concat(literal(u"OUTPUT_NAME    file["), file),
                                            literal(u"]")),
                    pls::cs::Ref<pls::cs::ExceptionObject>{});
            });
        }
    }
}

// M:kairo.unity.util.Language.GetTitle(System.String)
pls::cs::String GetTitle(pls::cs::String code) {
    kl_unity_util::Language::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Language.GetTitle(System.String)", kairo);
    {
        pls::cs::String result = pls::cs::String{};
        if (!is_null(code)) {
            code = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::cs::culture_to_lower(code); });
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::cs::RuntimeRegex::IsMatch(code, literal(u"^ja")); })) {
            result = literal(u"日本語");
        } else if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                       return pls::cs::RuntimeRegex::IsMatch(code, literal(u"^en(-us)?$"));
                   })) {
            result = literal(u"English");
        } else if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                       return pls::cs::RuntimeRegex::IsMatch(code, literal(u"^zh(-cn|-sg)"));
                   })) {
            result = literal(u"中文(简体)");
        } else if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                       return pls::cs::RuntimeRegex::IsMatch(code, literal(u"^zh(-tw|-hk|-mo)?"));
                   })) {
            result = literal(u"中文(繁體)");
        } else if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                       return pls::cs::RuntimeRegex::IsMatch(code, literal(u"^ko"));
                   })) {
            result = literal(u"한국어");
        }
        return result;
    }
}
} // namespace kairo::unity::util::Language
}
