// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.ByteArrayOutputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JRandom.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Compressor.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.util.JRandom.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.system.lineup.ui.LineupData.hpp"
#include "kairo.unity.system.lineup.ui.LineupManager.hpp"
#include "kairo.unity.util.JarInflater.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::system::lineup::ui {

void LineupManager::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(appliLinkUrl_, visitor);
    pls::cs::trace_value(lineupList_, visitor);
    pls::cs::trace_value(showCount_, visitor);
    pls::cs::trace_value(showLineups_, visitor);
}

static pls::cs::Ref<LineupManager> LineupManager_instance__storage{};

static PLS_NOINLINE void cs_init_1ab688350081022a_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(LineupManager_instance__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.system.lineup.ui.LineupManager", flag, []() {

    });
}

void LineupManager::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_1ab688350081022a_slow(flag);
}

pls::cs::Ref<LineupManager>& LineupManager::instance_() {
    LineupManager::ensure_initialized();
    return LineupManager_instance__storage;
}

void LineupManager::create_init(pls::cs::Ref<LineupManager> self) {
    LineupManager::ensure_initialized();
    self->lineupList_ = pls::cs::Array<pls::cs::Ref<LineupData>>::make(0);
    self->showCount_ = IntArray::make(0);
    self->showLineups_ = pls::cs::Array<pls::cs::Ref<LineupData>>::make(0);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.lineup.ui.LineupManager.#ctor", kairo);
    {
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.#ctor
pls::cs::Ref<LineupManager> LineupManager::create() {
    LineupManager::ensure_initialized();
    auto self = pls::cs::make_ref<LineupManager>();
    LineupManager::create_init(self);
    return self;
}

// M:kairo.unity.system.lineup.ui.LineupManager.Init
void LineupManager::Init() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.lineup.ui.LineupManager.Init", kairo);
    {
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.Load(System.Byte[])
void LineupManager::Load(ByteArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.lineup.ui.LineupManager.Load(System.Byte[])",
                     kairo);
    {
        pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<kl_io::ByteArrayInputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayInputStream = kl_io::ByteArrayInputStream::create(data);
                    pls::cs::Int32 num = pls::cs::cast_integral<pls::cs::Int32>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::ReadShort(byteArrayInputStream);
                        }));
                    showCount_ = IntArray::make(num);
                    for (pls::cs::Int32 i = 0; i < showCount_.length(); ++i) {
                        {
                            auto cs_target = showCount_;
                            auto cs_index = i;
                            auto cs_value = pls::cs::cast_integral<pls::cs::Int32>(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_unity_util::StreamUtil::ReadByte(byteArrayInputStream);
                                }));
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                }
            },
            [&]() {
                ([&]() -> void {
                    auto cs_conditional = byteArrayInputStream;
                    if (!cs_conditional)
                        return;
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<kl_io::InputStream>>(cs_conditional);
                        if (!cs_receiver)
                            throw pls::cs::NullReferenceException();
                        cs_receiver->Close();
                    }());
                }());
                byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            });
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.Write
ByteArray LineupManager::Write() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.lineup.ui.LineupManager.Write", kairo);
    {
        pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        {
            auto cs_flow_297 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<ByteArray> {
                    {
                        byteArrayOutputStream = kl_io::ByteArrayOutputStream::create();
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_unity_util::StreamUtil::WriteShort(
                                static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                pls::cs::cast_integral<std::int16_t>(showCount_.length()));
                        });
                        for (pls::cs::Int32 i = 0; i < showCount_.length(); ++i) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StreamUtil::WriteByteByte(
                                    static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                                    pls::cs::cast_integral<std::uint8_t>(showCount_[i]));
                            });
                        }
                        return pls::cs::flow_return(pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return require(byteArrayOutputStream)->ToByteArray();
                        }));
                    }
                    return {};
                },
                [&]() {
                    ([&]() -> void {
                        auto cs_conditional = byteArrayOutputStream;
                        if (!cs_conditional)
                            return;
                        ([&]() -> void {
                            auto cs_receiver =
                                static_cast<pls::cs::Ref<kl_io::ByteArrayOutputStream>>(cs_conditional);
                            if (!cs_receiver)
                                throw pls::cs::NullReferenceException();
                            cs_receiver->Close();
                        }());
                    }());
                    byteArrayOutputStream = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
                });
            return cs_flow_297.value();
        }
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.LoadLineupList(System.Byte[])
void LineupManager::LoadLineupList(ByteArray data) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.system.lineup.ui.LineupManager.LoadLineupList(System.Byte[])", kairo);
    {
        kl_cfg::Config::ensure_initialized();

        try {
            data = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::Compressor::Expand(data); });
            pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
            StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_unity_util::StringUtil::Split(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                            return kl_lang::JString::New(data,
                                                                                         literal(u"UTF-8"));
                                                        }),
                                                        literal(u"\n"));
            });
            pls::cs::Array<pls::cs::Array<pls::cs::Ref<LineupData>>> array2 =
                pls::cs::Array<pls::cs::Array<pls::cs::Ref<LineupData>>>::make(array.length());
            for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
                StringArray array3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::StringUtil::Split(array[i], literal(u"\t"));
                });
                pls::cs::Int32 gameId = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_lang::JInteger::ParseInt(array3[0]); });
                pls::cs::Array<pls::cs::Ref<LineupData>> array4 =
                    pls::cs::Array<pls::cs::Ref<LineupData>>::make(pls::cs::Int32(array3.length()) - 1);
                for (pls::cs::Int32 j = 1; j < array3.length(); ++j) {
                    pls::cs::Ref<LineupData> lineupData = LineupData::create();
                    {
                        pls::cs::String cs_arg1 = array3[j];
                        require(lineupData)->Load(gameId, cs_arg1);
                    }
                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::cs::culture_index_of(require(lineupData)->url_, literal(u"http://"));
                        }) == -1) {
                        {
                            auto cs_target = lineupData;
                            auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_unity_util::StringUtil::Replace(appliLinkUrl_,
                                                                          require(lineupData)->url_);
                            });
                            require(cs_target)->url_ = cs_value;
                        }
                    }
                    if (require(lineupData)->GetRatio() > 0) {
                        array4.set_Item(j - 1, lineupData);
                    }
                }
                array2[i] = array4;
            }
            for (pls::cs::Int32 num = pls::diagnostic::api_call(
                     [&]() -> decltype(auto) { return kl_unity_util::Language::Get(); });
                 num >= 0; --num) {
                for (pls::cs::Int32 k = 0; k < array2.length(); ++k) {
                    if (([&]() {
                            auto cs_left = pls::cs::box(array2[k]);
                            auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<LineupData>>{});
                            return cs_left != cs_right;
                        }()) &&
                        num < array2[k].length() && !is_null(array2[k].get_Item(num))) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> void {
                                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(array2[k].get_Item(num));
                                kl_java_util::Vector_2_AddElement(require(vector), cs_arg0);
                            }());
                        });
                    }
                }
                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_Size(require(vector));
                    }) > 0) {
                    break;
                }
            }
            lineupList_ = pls::cs::Array<pls::cs::Ref<LineupData>>::make(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(vector)); }));
            for (pls::cs::Int32 l = 0; l < lineupList_.length(); ++l) {
                {
                    auto cs_target = lineupList_;
                    auto cs_index = l;
                    auto cs_value = pls::cs::unbox<pls::cs::Ref<LineupData>>(
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_ElementAt(require(vector), l);
                        }));
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        } catch (const pls::cs::Exception& cs_caught_295) {
            auto t = pls::cs::capture_exception(cs_caught_295);
            {
                if (kl_cfg::Config::PRINT()) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_unity_util::Log::Info(t); });
                }
            }
        }
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32)
void LineupManager::Start(pls::cs::Int32 num) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.lineup.ui.LineupManager.Start(System.Int32)",
                     kairo);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Ref<KairoBase> instance = KairoBase::GetInstance();
        pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {
            return require(pls::diagnostic::api_call(
                               [&]() -> decltype(auto) { return pls::kairo::IApplication::GetCurrentApp(); }))
                ->GetPackageName();
        });
        pls::cs::Int32 num2 =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return last_index_char1(text, u'.'); });
        if (num2 != -1) {
            text = kl_lang::StringEx::SubstringJ(text, num2 + 1);
        }
        appliLinkUrl_ = pls::cs::String::concat(
            pls::cs::String::concat(
                literal(
                    u"market://details?id=<0>&referrer=utm_source%3Dappli%26utm_medium%3Dhouse_ad%26utm_content%3D"),
                text),
            literal(u"_title%26utm_campaign%3Dbanner"));
        pls::cs::String key = literal(u"update.txt");
        pls::cs::String key2 = literal(u"list.bin");
        pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
        {
            auto cs_flow_294 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<void> {
                    try {
                        ByteArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return pls::kairo::Storage::Read(3, false, literal(u"lineup.dat"));
                        });
                        if (!is_null(pls::cs::box(array))) {
                            jarInflater = kl_unity_util::JarInflater::create(array);
                            pls::cs::String time = literal(u"");
                            try {
                                ByteArray preferences = LineupManager::GetPreferences(key);
                                if ([&]() {
                                        auto cs_left = pls::cs::box(preferences);
                                        auto cs_right = pls::cs::box(ByteArray{});
                                        return cs_left != cs_right;
                                    }()) {
                                    time = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_lang::JString::New(preferences);
                                    });
                                }
                            } catch (const pls::cs::Exception& cs_caught_288) {
                                auto t = pls::cs::capture_exception(cs_caught_288);
                                {
                                    if (kl_cfg::Config::PRINT()) {
                                        pls::diagnostic::api_call(
                                            [&]() -> decltype(auto) { return kl_unity_util::Log::Info(t); });
                                    }
                                }
                            }
                            try {
                                pls::cs::Array<ByteArray> array2 = require(instance)->ConnectLineupList(time);
                                if ([&]() {
                                        auto cs_left = pls::cs::box(array2);
                                        auto cs_right = pls::cs::box(pls::cs::Array<ByteArray>{});
                                        return cs_left != cs_right;
                                    }()) {
                                    LineupManager::PutPreferences(key2, array2[0]);
                                    LineupManager::PutPreferences(key, array2[1]);
                                }
                            } catch (const pls::cs::Exception& cs_caught_289) {
                                auto t2 = pls::cs::capture_exception(cs_caught_289);
                                {
                                    if (kl_cfg::Config::PRINT()) {
                                        pls::diagnostic::api_call(
                                            [&]() -> decltype(auto) { return kl_unity_util::Log::Info(t2); });
                                    }
                                }
                            }
                            ByteArray array3 = ByteArray{};
                            try {
                                array3 = LineupManager::GetPreferences(key2);
                            } catch (const pls::cs::Exception& cs_caught_290) {
                                auto t3 = pls::cs::capture_exception(cs_caught_290);
                                {
                                    if (kl_cfg::Config::PRINT()) {
                                        pls::diagnostic::api_call(
                                            [&]() -> decltype(auto) { return kl_unity_util::Log::Info(t3); });
                                    }
                                }
                            }
                            if ([&]() {
                                    auto cs_left = pls::cs::box(array3);
                                    auto cs_right = pls::cs::box(ByteArray{});
                                    return cs_left == cs_right;
                                }()) {
                                try {
                                    array3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return require(jarInflater)->GetData(literal(u"list.bin"));
                                    });
                                } catch (const pls::cs::Exception& cs_caught_291) {
                                    auto t4 = pls::cs::capture_exception(cs_caught_291);
                                    {
                                        if (kl_cfg::Config::PRINT()) {
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return kl_unity_util::Log::Info(t4);
                                            });
                                        }
                                    }
                                }
                            }
                            if ([&]() {
                                    auto cs_left = pls::cs::box(array3);
                                    auto cs_right = pls::cs::box(ByteArray{});
                                    return cs_left == cs_right;
                                }()) {
                                return pls::cs::flow_return();
                            }
                            LoadLineupList(array3);
                            pls::cs::Int32 num3 = 0;
                            for (pls::cs::Int32 i = 0; i < lineupList_.length(); ++i) {
                                if (num3 < require(lineupList_.get_Item(i))->gameId_) {
                                    num3 = require(lineupList_.get_Item(i))->gameId_;
                                }
                            }
                            pls::cs::Int32 num4 = num3 + 1;
                            if (num4 < showCount_.length()) {
                                num4 = showCount_.length();
                            }
                            IntArray dst = IntArray::make(num4);
                            if (showCount_.length() != 0) {
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_lang::JSystem::Arraycopy(pls::cs::box(showCount_), 0,
                                                                       pls::cs::box(dst), 0,
                                                                       showCount_.length());
                                });
                            }
                            showCount_ = dst;
                            IntArray array4 = IntArray::make(lineupList_.length());
                            for (pls::cs::Int32 j = 0; j < lineupList_.length(); ++j) {
                                pls::cs::Ref<LineupData> lineupData = lineupList_.get_Item(j);
                                array4[j] = require(lineupData)->GetRatio();
                                if (showCount_[require(lineupData)->gameId_] == 0 &&
                                    require(lineupData)->GetPriority() > 0) {
                                    {
                                        auto cs_target = array4;
                                        auto cs_index = j;
                                        auto cs_old = cs_target.at(cs_index);
                                        auto cs_rhs = 10000000;
                                        pls::cs::Int32 cs_value = cs_old + cs_rhs;
                                        cs_target.at(cs_index) = cs_value;
                                    }
                                }
                                if (([&]() -> bool {
                                        auto cs_left = require(lineupData)->gameId_;
                                        auto cs_right = kl_cfg::Config::PID();
                                        return cs_left == cs_right;
                                    }()) &&
                                    !kl_cfg::Config::TRIAL_VERSION()) {
                                    array4[j] = 0;
                                }
                            }
                            pls::cs::Ref<kl_java_util::JRandom> jRandom = kl_java_util::JRandom::create();
                            {
                                pls::cs::Int64 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_lang::JSystem::CurrentTimeMillis();
                                });
                                java::util::JRandom::SetSeed(require(jRandom), cs_arg0);
                            }
                            pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
                            while (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                       return kl_java_util::Vector_2_Size(require(vector));
                                   }) < num) {
                                pls::cs::Ref<LineupData> lineupData2 = pls::cs::Ref<LineupData>{};
                                pls::cs::Int32 num5 = 0;
                                for (pls::cs::Int32 k = 0; k < array4.length(); ++k) {
                                    num5 += array4[k];
                                }
                                if (num5 <= 0) {
                                    break;
                                }
                                pls::cs::Int32 num6 = java::util::JRandom::NextInt(require(jRandom), num5);
                                num2 = -1;
                                num5 = 0;
                                for (pls::cs::Int32 l = 0; l < array4.length(); ++l) {
                                    num5 += array4[l];
                                    if (num6 < num5) {
                                        num2 = l;
                                        break;
                                    }
                                }
                                if (num2 == -1) {
                                    break;
                                }
                                lineupData2 = lineupList_.get_Item(num2);
                                try {
                                    pls::cs::String fileName = require(lineupData2)->GetFileName();
                                    if (util::JarInflater::Exist(require(jarInflater), fileName)) {
                                        {
                                            auto cs_target = lineupData2;
                                            auto cs_value =
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return pls::kairo::Image::Load(
                                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                            return require(jarInflater)->GetData(fileName);
                                                        }),
                                                        static_cast<pls::kairo::Image::Format>(-1),
                                                        static_cast<pls::kairo::Image::Filter>(-1));
                                                });
                                            require(cs_target)->image_ = cs_value;
                                        }
                                    } else if (LineupManager::ExistPreferences(fileName)) {
                                        {
                                            auto cs_target = lineupData2;
                                            auto cs_value =
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return pls::kairo::Image::Load(
                                                        LineupManager::GetPreferences(fileName),
                                                        static_cast<pls::kairo::Image::Format>(-1),
                                                        static_cast<pls::kairo::Image::Filter>(-1));
                                                });
                                            require(cs_target)->image_ = cs_value;
                                        }
                                    } else {
                                        pls::cs::Array<ByteArray> array5 =
                                            require(instance)->ConnectLineupImage(fileName);
                                        if (array5.length() != 0) {
                                            LineupManager::PutPreferences(fileName, array5[0]);
                                            {
                                                auto cs_target = lineupData2;
                                                auto cs_value =
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return pls::kairo::Image::Load(
                                                            array5[0],
                                                            static_cast<pls::kairo::Image::Format>(-1),
                                                            static_cast<pls::kairo::Image::Filter>(-1));
                                                    });
                                                require(cs_target)->image_ = cs_value;
                                            }
                                        }
                                    }
                                } catch (const pls::cs::Exception& cs_caught_292) {
                                    auto t5 = pls::cs::capture_exception(cs_caught_292);
                                    {
                                        if (kl_cfg::Config::PRINT()) {
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return kl_unity_util::Log::Info(t5);
                                            });
                                        }
                                    }
                                }
                                if (!is_null(require(lineupData2)->image_)) {
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return kl_java_util::Vector_2_AddElement(require(vector),
                                                                                 pls::cs::box(lineupData2));
                                    });
                                }
                                array4[num2] = 0;
                            }
                            if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_Size(require(vector));
                                }) < num) {
                                UnloadImage();
                                return pls::cs::flow_return();
                            }
                            showLineups_ = pls::cs::Array<pls::cs::Ref<LineupData>>::make(num);
                            for (pls::cs::Int32 m = 0; m < showLineups_.length(); ++m) {
                                {
                                    auto cs_target = showLineups_;
                                    auto cs_index = m;
                                    auto cs_value = pls::cs::unbox<pls::cs::Ref<LineupData>>(
                                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return kl_java_util::Vector_2_ElementAt(require(vector), m);
                                        }));
                                    cs_target.set_Item(cs_index, cs_value);
                                }
                                pls::cs::Int32 gameId_ = require(showLineups_.get_Item(m))->gameId_;
                                if (gameId_ < showCount_.length()) {
                                    showCount_[gameId_]++;
                                }
                            }
                        }
                    } catch (const pls::cs::Exception& cs_caught_293) {
                        auto t6 = pls::cs::capture_exception(cs_caught_293);
                        {
                            if (kl_cfg::Config::PRINT()) {
                                pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return kl_unity_util::Log::Info(t6); });
                            }
                        }
                    }
                    return {};
                },
                [&]() {
                    if (!is_null(pls::cs::box(jarInflater))) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(jarInflater)->Close(); });
                    }
                    jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
                });
            if (cs_flow_294.returned())
                return;
        }
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.UnloadImage
void LineupManager::UnloadImage() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.lineup.ui.LineupManager.UnloadImage", kairo);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(lineupList_);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<LineupData>>{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        for (pls::cs::Int32 i = 0; i < lineupList_.length(); ++i) {
            if (!is_null(lineupList_.get_Item(i)) && !is_null(require(lineupList_.get_Item(i))->image_)) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(require(lineupList_.get_Item(i))->image_)->Dispose();
                });
                require(lineupList_.get_Item(i))->image_ = pls::cs::Ref<pls::kairo::Image>{};
            }
        }
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.CheckShowableLineup
bool LineupManager::CheckShowableLineup() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.lineup.ui.LineupManager.CheckShowableLineup",
                     kairo);
    {
        return (showLineups_.length() != 0);
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.GetShowableLineups
pls::cs::Array<pls::cs::Ref<LineupData>> LineupManager::GetShowableLineups() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.system.lineup.ui.LineupManager.GetShowableLineups",
                     kairo);
    {
        return showLineups_;
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.PutPreferences(System.String,System.Byte[])
void LineupManager::PutPreferences(pls::cs::String key, ByteArray data) {
    LineupManager::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.system.lineup.ui.LineupManager.PutPreferences(System.String,System.Byte[])", kairo);
    {
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::IApplication::GetCurrentApp(); });
        key = pls::cs::String::concat(literal(u"lineup/"), key);
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) {
            data = ByteArray::make(0);
        }
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::Storage::Write(1, true, key, data); });
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.GetPreferences(System.String)
ByteArray LineupManager::GetPreferences(pls::cs::String key) {
    LineupManager::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.system.lineup.ui.LineupManager.GetPreferences(System.String)", kairo);
    {
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::IApplication::GetCurrentApp(); });
        key = pls::cs::String::concat(literal(u"lineup/"), key);
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::Storage::Read(1, true, key); });
    }
}

// M:kairo.unity.system.lineup.ui.LineupManager.ExistPreferences(System.String)
bool LineupManager::ExistPreferences(pls::cs::String key) {
    LineupManager::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.system.lineup.ui.LineupManager.ExistPreferences(System.String)", kairo);
    {
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::IApplication::GetCurrentApp(); });
        key = pls::cs::String::concat(literal(u"lineup/"), key);
        pls::cs::Ref<pls::kairo::Storage> storage =
            pls::diagnostic::api_call([&]() -> decltype(auto) { return pls::kairo::Storage::Open(1, true); });
        {
            auto cs_flow_296 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<bool> {
                    {
                        return pls::cs::flow_return(pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(storage)->Exists(key); }));
                    }
                    return {};
                },
                [&]() {
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return require(storage)->Close(); });
                });
            return cs_flow_296.value();
        }
    }
}
} // namespace kairo::unity::system::lineup::ui
}
