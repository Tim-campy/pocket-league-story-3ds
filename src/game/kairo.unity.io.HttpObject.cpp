// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.ByteArrayOutputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JCalendar.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.io.HttpObject.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kairo.unity.util.ClockTime.hpp"
#include "generated/java.util.JTool_templates.hpp"
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
namespace kairo::unity::io {

void HttpObject::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(http_, visitor);
    pls::cs::trace_value(errorUrl_, visitor);
    pls::cs::trace_value(errorText_, visitor);
    pls::cs::trace_value(errorTextOrg_, visitor);
    pls::cs::trace_value(error_, visitor);
}

static PLS_NOINLINE void cs_init_77de402a688eeb9d_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.io.HttpObject", flag, []() {

    });
}

void HttpObject::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_77de402a688eeb9d_slow(flag);
}

void HttpObject::create_init(pls::cs::Ref<HttpObject> self, bool retryEnable) {
    HttpObject::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.HttpObject.#ctor(System.Boolean)", kairo);
    {
        HttpObject::set_IsRetryEnable(self, retryEnable);
    }
}

// M:kairo.unity.io.HttpObject.#ctor(System.Boolean)
pls::cs::Ref<HttpObject> HttpObject::create(bool retryEnable) {
    HttpObject::ensure_initialized();
    auto self = pls::cs::make_ref<HttpObject>();
    HttpObject::create_init(self, retryEnable);
    return self;
}

// M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean)
ByteArray HttpObject::Connect(pls::cs::String url, ByteArray send, bool check) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean)",
                     kairo);
    {
        return Connect(url, send, check, false)[0];
    }
}

// M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean,System.Boolean)
pls::cs::Array<ByteArray> HttpObject::Connect(pls::cs::String url, ByteArray send, bool check, bool split) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.io.HttpObject.Connect(System.String,System.Byte[],System.Boolean,System.Boolean)",
        kairo);
    {
        pls::cs::Int32 num{};
        pls::cs::String title{};
        pls::cs::String text{};
        pls::cs::String text2{};
        pls::cs::Ref<ui::Dialog> dialog{};
        {
            num = 0;
            while (true) {
                try {
                    return _connect(url, send, check, split);
                } catch (const pls::cs::Exception& cs_caught_53) {
                    auto ex = pls::cs::capture_exception(cs_caught_53);
                    {
                        if (!askRetry_) {
                            goto cs_label_IL_00ab;
                        }
                        title = (PLS_API(kl_unity_util::Language::Japanese()) ? literal(u"接続確認")
                                                                              : literal(u"Connection"));
                        text =
                            (PLS_API(kl_unity_util::Language::Japanese())
                                 ? literal(
                                       u"ネットワーク接続に失敗しました。\n電波が無いか、通信が許可されていない可能性があります。")
                                 : literal(
                                       u"Failure to network connection. \nOr radio waves do not, there is a possibility that the communication is not permitted."));
                        text2 = (PLS_API(kl_unity_util::Language::Japanese()) ? literal(u"再接続,中止")
                                                                              : literal(u"Retry,Cancel"));
                        if (num > 0) {
                            java::lang::JThread::Sleep(500ll);
                        }
                        dialog = ui::Dialog::create(3, title);
                        require(dialog)->SetText(text);
                        {
                            StringArray cs_arg0 = PLS_API(([&]() {
                                auto cs_text = text2;
                                auto cs_separators = pls::cs::Array<char16_t>::make(1);
                                cs_separators.at(0) = u',';
                                return pls::cs::string_split(cs_text, cs_separators);
                            }()));
                            require(dialog)->SetButtons(cs_arg0);
                        }
                        if (require(dialog)->Show() != 4) {
                            goto cs_label_IL_00ab;
                        }
                        ++num;
                        continue;
                    cs_label_IL_00ab:;
                        pls::cs::throw_exception(ex);
                    }
                }
            }
        }
    }
}

// M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean)
pls::cs::Array<ByteArray> HttpObject::_connect(pls::cs::String url, ByteArray send, bool check, bool split) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean)",
        kairo);
    {
        pls::cs::Ref<pls::cs::Cell<pls::cs::String>> url_cell =
            pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(url);
        pls::cs::Ref<pls::cs::Cell<ByteArray>> send_cell = pls::cs::make_ref<pls::cs::Cell<ByteArray>>(send);
        pls::cs::Ref<pls::cs::Cell<bool>> check_cell = pls::cs::make_ref<pls::cs::Cell<bool>>(check);
        pls::cs::Ref<pls::cs::Cell<bool>> split_cell = pls::cs::make_ref<pls::cs::Cell<bool>>(split);
        {
            kl_cfg::Config::ensure_initialized();

            askRetry_ = false;
            if (PLS_API(pls::cs::culture_index_of(url_cell->value, literal(u"get_score.php"))) != -1) {
                return pls::cs::Array<ByteArray>::from({kl_lang::StringEx::GetBytes(literal(u"OK\n0,0"))});
            }
            errorCode_ = 0;
            errorText_ = pls::cs::String{};
            errorTextOrg_ = pls::cs::String{};
            errorUrl_ = pls::cs::String{};
            error_ = pls::cs::Ref<pls::cs::ExceptionObject>{};
            pls::cs::Ref<pls::cs::Cell<pls::cs::Array<ByteArray>>> recv_cell =
                pls::cs::make_ref<pls::cs::Cell<pls::cs::Array<ByteArray>>>(pls::cs::Array<ByteArray>{});
            pls::cs::Ref<pls::cs::Cell<pls::cs::Int32>> totalSize_cell =
                pls::cs::make_ref<pls::cs::Cell<pls::cs::Int32>>(0);
            pls::cs::Ref<pls::cs::Cell<pls::cs::Int32>> recvSize_cell =
                pls::cs::make_ref<pls::cs::Cell<pls::cs::Int32>>(0);
            if (PLS_API(pls::cs::culture_index_of(url_cell->value, literal(u"regist.php"))) != -1) {
                if (!kl_cfg::Config::REGIST_ENABLE()) {
                    return pls::cs::Array<ByteArray>::from({kl_lang::StringEx::GetBytes(literal(u"1\n100"))});
                }
                pls::cs::Int32 recoveredLicenseStatus = PLS_API(pls::kairo::removed_license_check());
                if (recoveredLicenseStatus == 0) {
                    return pls::cs::Array<ByteArray>::from({kl_lang::StringEx::GetBytes(literal(u"1\n100"))});
                }
                switch (recoveredLicenseStatus) {
                case 4: {
                    errorCode_ = -98;
                    errorText_ = PLS_API(kl_unity_util::Language::TranslateText(
                        literal(u"サーバーエラーが発生しました。"), true));
                    errorText_ = pls::cs::String::concat(errorText_, literal(u"\n"));
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->errorText_;
                        auto cs_rhs = PLS_API(kl_unity_util::Language::TranslateText(
                            literal(
                                u"認証に失敗しました。購入時のアカウントを設定し、電波状態を確認してください。"),
                            true));
                        auto cs_value = pls::cs::String::concat(cs_old, cs_rhs);
                        require(cs_target)->errorText_ = cs_value;
                    }
                    break;
                }
                case 5:
                case 257: {
                    errorCode_ = -99;
                    errorText_ = PLS_API(kl_unity_util::Language::TranslateText(
                        literal(u"通信を許可し電波状態を確認して下さい。"), true));
                    errorText_ = pls::cs::String::concat(errorText_, literal(u"\n"));
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->errorText_;
                        auto cs_rhs = PLS_API(kl_unity_util::Language::TranslateText(
                            literal(
                                u"認証に失敗しました。購入時のアカウントを設定し、電波状態を確認してください。"),
                            true));
                        auto cs_value = pls::cs::String::concat(cs_old, cs_rhs);
                        require(cs_target)->errorText_ = cs_value;
                    }
                    break;
                }
                case 1:
                case 2:
                case 3:
                default: {
                    errorCode_ = -1;
                    errorText_ = PLS_API(
                        kl_unity_util::Language::TranslateText(literal(u"認証に失敗しました。"), true));
                    errorText_ = pls::cs::String::concat(errorText_, literal(u"\n"));
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->errorText_;
                        auto cs_rhs = PLS_API(kl_unity_util::Language::TranslateText(
                            literal(u"購入時のアカウントを設定し、電波状態を確認してください。"), true));
                        auto cs_value = pls::cs::String::concat(cs_old, cs_rhs);
                        require(cs_target)->errorText_ = cs_value;
                    }
                    break;
                }
                }
                if (!is_null(errorText_)) {
                    if (PLS_API(kl_unity_util::Language::Japanese())) {
                        errorText_ = pls::cs::String::concat(
                            errorText_, literal(u"\thttp://kairopark.jp/android/faq.html#licence"));
                    } else {
                        errorText_ = pls::cs::String::concat(
                            errorText_, literal(u"\thttp://kairopark.jp/android/en/faq.html#licence"));
                    }
                }
                errorTextOrg_ = errorText_;
                throw pls::cs::IOException();
            }
            while (PLS_API(pls::cs::culture_index_of(url_cell->value, literal(u"NULLGWDOCOMO"))) != -1) {
            }
            if (PLS_API(contains_string(url_cell->value, literal(u"?")))) {
                url_cell->value = ([&]() {
                    auto cs_left = pls::cs::String::concat(url_cell->value, literal(u"&"));
                    auto cs_right = GetTimeStampParam();
                    return pls::cs::String::concat(cs_left, cs_right);
                }());
            } else {
                url_cell->value = ([&]() {
                    auto cs_left = pls::cs::String::concat(url_cell->value, literal(u"?"));
                    auto cs_right = GetTimeStampParam();
                    return pls::cs::String::concat(cs_left, cs_right);
                }());
            }
            if (kl_cfg::Config::TRACE_URL() && kl_cfg::Config::PRINT()) {
                PLS_API(kl_unity_util::Log::Info(pls::cs::String::concat(literal(u"[URL] "), url_cell->value),
                                                 pls::cs::Ref<pls::cs::ExceptionObject>{}));
            }
            if (([&]() {
                    auto cs_left = pls::cs::box(send_cell->value);
                    auto cs_right = pls::cs::box(ByteArray{});
                    return cs_left != cs_right;
                }()) &&
                kl_cfg::Config::POST_MARK()) {
                pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream =
                    kl_io::ByteArrayOutputStream::create();
                PLS_API(kl_unity_util::StreamUtil::Write(byteArrayOutputStream, send_cell->value));
                PLS_API(kl_unity_util::StreamUtil::WriteInt(
                    static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream), 1234567890));
                send_cell->value = PLS_API(require(byteArrayOutputStream)->ToByteArray());
            }
            pls::cs::Ref<pls::cs::Cell<pls::cs::Ref<kl_io::ByteArrayInputStream>>> bais_cell =
                pls::cs::make_ref<pls::cs::Cell<pls::cs::Ref<kl_io::ByteArrayInputStream>>>(
                    pls::cs::Ref<kl_io::ByteArrayInputStream>{});
            pls::cs::run_finally(
                [&]() {
                    try {
                        pls::cs::Ref<pls::cs::Cell<pls::cs::Int32>> timeout_cell =
                            pls::cs::make_ref<pls::cs::Cell<pls::cs::Int32>>(60000);
                        pls::cs::Ref<pls::cs::Cell<pls::cs::Int64>> begin_cell =
                            pls::cs::make_ref<pls::cs::Cell<pls::cs::Int64>>(
                                PLS_API(kl_lang::JSystem::CurrentTimeMillis()));
                        http_ = pls::cs::unbox<pls::cs::Ref<
                            pls::
                                kairo::OfflineWebRequest>>(PLS_API(([&]()
                                                                        -> pls::cs::
                                                                            Ref<pls::cs::Object> {
                                                                                auto cs_receiver = PLS_API(
                                                                                    pls::kairo::IApplication::
                                                                                        GetCurrentApp());
                                                                                pls::cs::Delegate<
                                                                                    pls::cs::Ref<
                                                                                        pls::cs::Object>()>
                                                                                    cs_arg0 = pls::cs::Delegate<
                                                                                        pls::cs::Ref<
                                                                                            pls::cs::
                                                                                                Object>()>::
                                                                                        from_closure(
                                                                                            pls::cs::raw(
                                                                                                send_cell),
                                                                                            std::string(
                                                                                                "M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4061") +
                                                                                                std::to_string(
                                                                                                    reinterpret_cast<
                                                                                                        std::
                                                                                                            uintptr_t>(
                                                                                                        pls::cs::raw(
                                                                                                            url_cell))),
                                                                                            [send_cell, url_cell]() -> pls::cs::
                                                                                                                        Ref<pls::cs::
                                                                                                                                Object> {
                                                                                                                            {
                                                                                                                                return pls::cs::box(
                                                                                                                                    (([&]() {
                                                                                                                                        auto cs_left =
                                                                                                                                            pls::cs::box(
                                                                                                                                                send_cell
                                                                                                                                                    ->value);
                                                                                                                                        auto cs_right =
                                                                                                                                            pls::cs::box(
                                                                                                                                                ByteArray{});
                                                                                                                                        return cs_left !=
                                                                                                                                               cs_right;
                                                                                                                                    }()))
                                                                                                                                        ? (pls::cs::make_ref<
                                                                                                                                              pls::kairo::
                                                                                                                                                  OfflineWebRequest>(
                                                                                                                                              url_cell
                                                                                                                                                  ->value,
                                                                                                                                              send_cell
                                                                                                                                                  ->value))
                                                                                                                                        : (pls::cs::make_ref<
                                                                                                                                              pls::kairo::
                                                                                                                                                  OfflineWebRequest>(
                                                                                                                                              url_cell
                                                                                                                                                  ->value)));
                                                                                                                            }
                                                                                                                        },
                                                                                            send_cell,
                                                                                            url_cell);
                                                                                return require(cs_receiver)
                                                                                    ->RunOnUiThread(cs_arg0,
                                                                                                    true);
                                                                            }())));
                        while (true) {
                            bool completed =
                                pls::cs::unbox<bool>(
                                    PLS_API(
                                        (
                                            [&]() -> pls::cs::
                                                      Ref<pls::cs::Object> {
                                                          auto cs_receiver = PLS_API(
                                                              pls::kairo::IApplication::GetCurrentApp());
                                                          pls::cs::Delegate<pls::cs::Ref<pls::cs::Object>()>
                                                              cs_arg0 = pls::cs::Delegate<
                                                                  pls::cs::Ref<pls::cs::Object>()>::
                                                                  from_closure(
                                                                      pls::cs::raw(begin_cell),
                                                                      std::string(
                                                                          "M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4224") +
                                                                          std::to_string(reinterpret_cast<
                                                                                         std::uintptr_t>(
                                                                              pls::cs::raw(timeout_cell))),
                                                                      [begin_cell,
                                                                       timeout_cell, self = this]() -> pls::
                                                                                                        cs::
                                                                                                            Ref<pls::cs::
                                                                                                                    Object> {
                                                                                                                {
                                                                                                                    if (require(
                                                                                                                            self->http_)
                                                                                                                            ->get_isDone()) {
                                                                                                                        return pls::
                                                                                                                            cs::box(
                                                                                                                                true);
                                                                                                                    }
                                                                                                                    if ([&]()
                                                                                                                            -> bool {
                                                                                                                            auto cs_left =
                                                                                                                                ([&]()
                                                                                                                                     -> pls::cs::Int64 {
                                                                                                                                    auto cs_left = PLS_API(
                                                                                                                                        kl_lang::JSystem::
                                                                                                                                            CurrentTimeMillis());
                                                                                                                                    auto cs_right =
                                                                                                                                        begin_cell
                                                                                                                                            ->value;
                                                                                                                                    return cs_left -
                                                                                                                                           cs_right;
                                                                                                                                }());
                                                                                                                            auto cs_right =
                                                                                                                                pls::cs::cast_integral<
                                                                                                                                    pls::cs::
                                                                                                                                        Int64>(
                                                                                                                                    timeout_cell
                                                                                                                                        ->value);
                                                                                                                            return cs_left >=
                                                                                                                                   cs_right;
                                                                                                                        }()) {
                                                                                                                        PLS_API(
                                                                                                                            require(
                                                                                                                                self->http_)
                                                                                                                                ->Dispose());
                                                                                                                        self->http_ =
                                                                                                                            pls::cs::Ref<
                                                                                                                                pls::kairo::
                                                                                                                                    OfflineWebRequest>{};
                                                                                                                        return pls::
                                                                                                                            cs::box(
                                                                                                                                true);
                                                                                                                    }
                                                                                                                    return pls::
                                                                                                                        cs::box(
                                                                                                                            false);
                                                                                                                }
                                                                                                            },
                                                                      begin_cell, timeout_cell, this);
                                                          return require(cs_receiver)
                                                              ->RunOnUiThread(cs_arg0, true);
                                                      }())));
                            if (completed) {
                                break;
                            }
                            java::lang::JThread::Sleep(10ll);
                        }
                        PLS_API(([&]() -> void {
                            auto cs_receiver = PLS_API(pls::kairo::IApplication::GetCurrentApp());
                            pls::cs::Delegate<void()> cs_arg0 = pls::cs::Delegate<void()>::from_closure(
                                pls::cs::raw(totalSize_cell),
                                std::string(
                                    "M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):4586") +
                                    std::to_string(
                                        reinterpret_cast<std::uintptr_t>(pls::cs::raw(bais_cell))) +
                                    std::to_string(
                                        reinterpret_cast<std::uintptr_t>(pls::cs::raw(check_cell))) +
                                    std::to_string(
                                        reinterpret_cast<std::uintptr_t>(pls::cs::raw(recvSize_cell))) +
                                    std::to_string(
                                        reinterpret_cast<std::uintptr_t>(pls::cs::raw(split_cell))) +
                                    std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(recv_cell))),
                                [totalSize_cell, bais_cell, check_cell, recvSize_cell, split_cell, recv_cell,
                                 self = this]() -> void {
                                    {
                                        kl_cfg::Config::ensure_initialized();

                                        if (is_null(self->http_)) {
                                            self->error_ = ([&]() {
                                                auto cs_arg0 = literal(u"timeout");
                                                return pls::cs::make_exception("System.IO.IOException",
                                                                               cs_arg0);
                                            }());
                                            self->askRetry_ = HttpObject::get_IsRetryEnable(self);
                                        } else if (!PLS_API(pls::cs::string_is_null_or_empty(
                                                       require(self->http_)->get_error()))) {
                                            self->error_ = ([&]() {
                                                auto cs_arg0 = require(self->http_)->get_error();
                                                return pls::cs::make_exception("System.IO.IOException",
                                                                               cs_arg0);
                                            }());
                                            self->askRetry_ = HttpObject::get_IsRetryEnable(self);
                                        } else {
                                            ByteArray bytes = require(self->http_)->get_bytes();
                                            pls::cs::Ref<kl_java_util::Vector> vector =
                                                pls::cs::Ref<kl_java_util::Vector>{};
                                            totalSize_cell->value = bytes.length();
                                            bais_cell->value = kl_io::ByteArrayInputStream::create(bytes);
                                            if (check_cell->value) {
                                                if (2 <= totalSize_cell->value) {
                                                    std::int8_t num =
                                                        PLS_API(kl_unity_util::StreamUtil::ReadByte(
                                                            bais_cell->value));
                                                    std::int8_t b =
                                                        PLS_API(kl_unity_util::StreamUtil::ReadByte(
                                                            bais_cell->value));
                                                    recvSize_cell->value = recvSize_cell->value + 2;
                                                    if (3 <= totalSize_cell->value) {
                                                        PLS_API(kl_unity_util::StreamUtil::ReadByte(
                                                            bais_cell->value));
                                                        ++recvSize_cell->value;
                                                    }
                                                    if ((pls::cs::cast_integral<pls::cs::Int32>(num) != 79) ||
                                                        (pls::cs::cast_integral<pls::cs::Int32>(b) != 75)) {
                                                        try {
                                                            self->errorTextOrg_ = PLS_API(
                                                                require(pls::cs::RuntimeEncoding::get_UTF8())
                                                                    ->GetString(bytes));
                                                        } catch (const pls::cs::Exception& cs_caught_56) {
                                                            pls::cs::capture_exception(cs_caught_56);
                                                            {
                                                            }
                                                        }
                                                        ByteArray bytes2 =
                                                            PLS_API(kl_unity_util::StreamUtil::Read(
                                                                static_cast<pls::cs::Ref<kl_io::InputStream>>(
                                                                    bais_cell->value),
                                                                totalSize_cell->value -
                                                                    recvSize_cell->value));
                                                        pls::cs::String value = PLS_API(
                                                            require(pls::cs::RuntimeEncoding::get_UTF8())
                                                                ->GetString(bytes2));
                                                        StringArray array =
                                                            PLS_API(kl_unity_util::StringUtil::Split(
                                                                value, literal(u"\n")));
                                                        try {
                                                            if (array.length() != 0) {
                                                                self->errorCode_ = PLS_API(
                                                                    kl_lang::JInteger::ParseInt(array[0]));
                                                            }
                                                            if (1 < array.length()) {
                                                                self->errorText_ =
                                                                    PLS_API(pls::cs::string_replace(
                                                                        array[1], u'|', char16_t(10)));
                                                            }
                                                        } catch (const pls::cs::Exception& cs_caught_57) {
                                                            pls::cs::capture_exception(cs_caught_57);
                                                            {
                                                                self->errorCode_ = -98;
                                                                self->errorText_ = value;
                                                                self->errorText_ = PLS_API(
                                                                    kl_unity_util::StringUtil::Replace(
                                                                        self->errorText_, literal(u"<"),
                                                                        literal(u"(")));
                                                                self->errorText_ = PLS_API(
                                                                    kl_unity_util::StringUtil::Replace(
                                                                        self->errorText_, literal(u">"),
                                                                        literal(u")")));
                                                                self->errorText_ = PLS_API(
                                                                    kl_unity_util::StringUtil::Replace(
                                                                        self->errorText_, literal(u"\n"),
                                                                        literal(u" ")));
                                                            }
                                                        }
                                                        if (kl_cfg::Config::PRINT()) {
                                                            PLS_API(kl_unity_util::Log::Info(
                                                                pls::cs::String::concat(
                                                                    pls::cs::String::concat(
                                                                        pls::cs::String::concat(
                                                                            literal(u"Http\t\t[error]"),
                                                                            integer_string(self->errorCode_)),
                                                                        literal(u":")),
                                                                    self->errorText_),
                                                                pls::cs::Ref<pls::cs::ExceptionObject>{}));
                                                        }
                                                        self->error_ = ([&]() {
                                                            return pls::cs::make_exception(
                                                                "System.IO.IOException");
                                                        }());
                                                    }
                                                } else {
                                                    self->error_ = ([&]() {
                                                        auto cs_arg0 = pls::cs::String::concat(
                                                            pls::cs::String::concat(
                                                                literal(u"response "),
                                                                integer_string(totalSize_cell->value)),
                                                            literal(u" bytes"));
                                                        return pls::cs::make_exception(
                                                            "System.IO.IOException", cs_arg0);
                                                    }());
                                                }
                                            }
                                            if (!is_null(self->error_)) {
                                                return;
                                            }
                                            {
                                                vector = kl_java_util::Vector::create();
                                                while (recvSize_cell->value < totalSize_cell->value) {
                                                    pls::cs::Int32 size =
                                                        totalSize_cell->value - recvSize_cell->value;
                                                    if (split_cell->value) {
                                                        size = PLS_API(kl_unity_util::StreamUtil::ReadInt(
                                                            bais_cell->value));
                                                        recvSize_cell->value = recvSize_cell->value + 4;
                                                    }
                                                    ByteArray array2 =
                                                        PLS_API(kl_unity_util::StreamUtil::Read(
                                                            static_cast<pls::cs::Ref<kl_io::InputStream>>(
                                                                bais_cell->value),
                                                            size));
                                                    PLS_API(kl_java_util::Vector_2_AddElement(
                                                        require(vector), pls::cs::box(array2)));
                                                    recvSize_cell->value =
                                                        recvSize_cell->value + array2.length();
                                                }
                                                if (PLS_API(kl_java_util::Vector_2_Size(require(vector))) ==
                                                    0) {
                                                    if (split_cell->value) {
                                                        recv_cell->value =
                                                            PLS_API(kl_java_util::JTool::MakeArray<
                                                                    pls::cs::Array<ByteArray>>(
                                                                IntArray::make(2)));
                                                    } else {
                                                        recv_cell->value =
                                                            PLS_API(kl_java_util::JTool::MakeArray<
                                                                    pls::cs::Array<ByteArray>>(
                                                                IntArray::from({1, 0})));
                                                    }
                                                } else {
                                                    recv_cell->value =
                                                        pls::cs::Array<ByteArray>::make(PLS_API(
                                                            kl_java_util::Vector_2_Size(require(vector))));
                                                }
                                                for (pls::cs::Int32 i = 0;
                                                     i <
                                                     PLS_API(kl_java_util::Vector_2_Size(require(vector)));
                                                     ++i) {
                                                    {
                                                        auto cs_target = recv_cell->value;
                                                        auto cs_index = i;
                                                        auto cs_value = pls::cs::unbox<ByteArray>(
                                                            PLS_API(kl_java_util::Vector_2_ElementAt(
                                                                require(vector), i)));
                                                        cs_target.set_Item(cs_index, cs_value);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                },
                                totalSize_cell, bais_cell, check_cell, recvSize_cell, split_cell, recv_cell,
                                this);
                            require(cs_receiver)->RunOnUiThread(cs_arg0, true);
                        }()));
                        if (!is_null(error_)) {
                            pls::cs::throw_exception(error_);
                        }
                    } catch (const pls::cs::Exception& cs_caught_58) {
                        auto ex = pls::cs::capture_exception(cs_caught_58);
                        {
                            errorUrl_ = url_cell->value;
                            if (errorCode_ == 0) {
                                errorCode_ = -98;
                            }
                            pls::cs::throw_exception(ex);
                        }
                    }
                },
                [&]() {
                    if (!is_null(bais_cell->value)) {
                        try {
                            PLS_API(require(bais_cell->value)->Close());
                        } catch (const pls::cs::Exception& cs_caught_54) {
                            pls::cs::capture_exception(cs_caught_54);
                            {
                            }
                        }
                    }
                    bais_cell->value = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
                    if (!is_null(http_)) {
                        PLS_API(([&]() -> void {
                            auto cs_receiver = PLS_API(pls::kairo::IApplication::GetCurrentApp());
                            pls::cs::Delegate<void()> cs_arg0 = pls::cs::Delegate<void()>::from_closure(
                                pls::cs::raw(this),
                                std::string(
                                    "M:kairo.unity.io.HttpObject._connect(System.String,System.Byte[],System.Boolean,System.Boolean):7721"),
                                [self = this]() -> void {
                                    {
                                        try {
                                            PLS_API(require(self->http_)->Dispose());
                                        } catch (const pls::cs::Exception& cs_caught_55) {
                                            pls::cs::capture_exception(cs_caught_55);
                                            {
                                            }
                                        }
                                    }
                                },
                                this);
                            require(cs_receiver)->RunOnUiThread(cs_arg0, true);
                        }()));
                    }
                    http_ = pls::cs::Ref<pls::kairo::OfflineWebRequest>{};
                });
            return recv_cell->value;
        }
    }
}

// M:kairo.unity.io.HttpObject.GetErrorCode
pls::cs::Int32 HttpObject::GetErrorCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.HttpObject.GetErrorCode", kairo);
    {
        return errorCode_;
    }
}

// M:kairo.unity.io.HttpObject.GetErrorText
pls::cs::String HttpObject::GetErrorText() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.HttpObject.GetErrorText", kairo);
    {
        if (is_null(errorText_)) {
            if (!PLS_API(kl_unity_util::Language::Japanese())) {
                return literal(u"Make sure to allow connection to network and<br>check your signal quality.");
            }
            return PLS_API(kl_unity_util::Language::TranslateText(
                literal(u"通信を許可し電波状況<br>を確認して下さい"), true));
        }
        return errorText_;
    }
}

// M:kairo.unity.io.HttpObject.GetErrorUrl
pls::cs::String HttpObject::GetErrorUrl() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.HttpObject.GetErrorUrl", kairo);
    {
        return errorUrl_;
    }
}

// M:kairo.unity.io.HttpObject.PopErrorCode
pls::cs::Int32 HttpObject::PopErrorCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.HttpObject.PopErrorCode", kairo);
    {
        pls::cs::Int32 errorCode = GetErrorCode();
        errorCode_ = 0;
        return errorCode;
    }
}

// M:kairo.unity.io.HttpObject.PopErrorText
pls::cs::String HttpObject::PopErrorText() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.HttpObject.PopErrorText", kairo);
    {
        pls::cs::String errorText = GetErrorText();
        errorText_ = pls::cs::String{};
        return errorText;
    }
}

// M:kairo.unity.io.HttpObject.GetTimeStampParam
pls::cs::String HttpObject::GetTimeStampParam() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.HttpObject.GetTimeStampParam", kairo);
    {
        pls::cs::Ref<kl_java_util::JCalendar> instance = PLS_API(kl_java_util::JCalendar::GetInstance());
        PLS_API(([&]() -> void {
            pls::cs::Int64 cs_arg0 = util::ClockTime::GetTime();
            require(instance)->SetTimeInMillis(cs_arg0);
        }()));
        pls::cs::String text = PLS_API(object_string(pls::cs::box(PLS_API(require(instance)->Get(1)))));
        pls::cs::String text2 =
            PLS_API(object_string(pls::cs::box(pls::cs::Int32(PLS_API(require(instance)->Get(2))) + 1)));
        pls::cs::String text3 = PLS_API(object_string(pls::cs::box(PLS_API(require(instance)->Get(5)))));
        pls::cs::String text4 = PLS_API(object_string(pls::cs::box(PLS_API(require(instance)->Get(11)))));
        pls::cs::String text5 = PLS_API(object_string(pls::cs::box(PLS_API(require(instance)->Get(12)))));
        pls::cs::String text6 = PLS_API(object_string(pls::cs::box(PLS_API(require(instance)->Get(13)))));
        if (text2.length() == 1) {
            text2 = pls::cs::String::concat(literal(u"0"), text2);
        }
        if (text3.length() == 1) {
            text3 = pls::cs::String::concat(literal(u"0"), text3);
        }
        if (text4.length() == 1) {
            text4 = pls::cs::String::concat(literal(u"0"), text4);
        }
        if (text5.length() == 1) {
            text5 = pls::cs::String::concat(literal(u"0"), text5);
        }
        if (text6.length() == 1) {
            text6 = pls::cs::String::concat(literal(u"0"), text6);
        }
        return pls::cs::String::concat(
            pls::cs::String::concat(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(pls::cs::String::concat(literal(u"_ts="), text), text2),
                        text3),
                    text4),
                text5),
            text6);
    }
}

// M:kairo.unity.io.HttpObject.get_IsRetryEnable
bool HttpObject::get_IsRetryEnable(pls::cs::Ref<HttpObject> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.HttpObject.get_IsRetryEnable", kairo);
    {
        return self->m_IsRetryEnable_k__BackingField;
    }
}

// M:kairo.unity.io.HttpObject.set_IsRetryEnable(System.Boolean)
void HttpObject::set_IsRetryEnable(pls::cs::Ref<HttpObject> self, bool value) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.HttpObject.set_IsRetryEnable(System.Boolean)", kairo);
    {
        self->m_IsRetryEnable_k__BackingField = value;
    }
}
} // namespace kairo::unity::io
}
