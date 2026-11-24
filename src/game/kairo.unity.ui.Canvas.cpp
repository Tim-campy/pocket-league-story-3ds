// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "kairo.unity.ad.AdMobView.hpp"
#include "kairo.unity.io.HttpObject.hpp"
#include "kairo.unity.system.KairoBase.ConnectObject.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.system.appli.GameAppli.hpp"
#include "kairo.unity.system.payment.PaymentDataRecord.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kairo.unity.util.Language.hpp"

namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::ui::Canvas {

// M:kairo.unity.ui.Canvas.Vibrator(System.Int64)
void Vibrator(pls::cs::Int64 ms) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Canvas.Vibrator(System.Int64)", kairo);
    {
        return;
    }
}

// M:kairo.unity.ui.Canvas.OpenBrowser(System.String)
bool OpenBrowser(pls::cs::String url) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Canvas.OpenBrowser(System.String)", kairo);
    {
        pls::cs::Ref<pls::cs::Cell<pls::cs::String>> url_cell =
            pls::cs::make_ref<pls::cs::Cell<pls::cs::String>>(url);
        {
            kl_cfg::Config::ensure_initialized();

            try {
                if (kl_cfg::Config::APPLI_TYPE() == 3) {
                    pls::cs::Ref<system::KairoBase> instance = system::KairoBase::GetInstance();
                    if (!is_null(instance)) {
                        pls::cs::Ref<pls::cs::RegexMatch> match =
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return pls::cs::RuntimeRegex::Match(
                                    url_cell->value, literal(u"market://details\\?id=([\\w.]+)"));
                            });
                        if (require(match)->get_Success()) {
                            pls::cs::String value = require(([&]() {
                                                        auto cs_receiver = require(match)->get_Groups();
                                                        auto cs_index = 1;
                                                        return require(cs_receiver)->get_Item(cs_index);
                                                    }()))
                                                        ->get_Value();
                            system::appli::GameAppli gameAppli = system::appli::GameAppli{};
                            pls::cs::Int32 num = 0;
                            pls::cs::Array<system::appli::GameAppli> appList =
                                require(instance)->GetAppList(false, false);
                            for (pls::cs::Int32 i = 0; i < appList.length(); ++i) {
                                system::appli::GameAppli gameAppli2 = appList[i];
                                if ((!is_null(gameAppli2.IOSId) && ((gameAppli2.IOSId).length() > 0)) &&
                                    (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                         return ([&]() {
                                             auto cs_receiver = gameAppli2.AndPkg;
                                             auto cs_argument = value;
                                             cs_receiver.length();
                                             return pls::cs::culture_equals_ignore_case(cs_receiver,
                                                                                        cs_argument);
                                         }());
                                     }) ||
                                     pls::diagnostic::api_call([&]() -> decltype(auto) {
                                         return ([&]() {
                                             auto cs_receiver = gameAppli2.IOSPkg;
                                             auto cs_argument = value;
                                             cs_receiver.length();
                                             return pls::cs::culture_equals_ignore_case(cs_receiver,
                                                                                        cs_argument);
                                         }());
                                     }))) {
                                    pls::cs::Int32 num2 = 1;
                                    if ([&]() -> bool {
                                            auto cs_left = (gameAppli2.Language == literal(u"ja"));
                                            auto cs_right =
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return kl_util::Language::Japanese();
                                                });
                                            return cs_left == cs_right;
                                        }()) {
                                        ++num2;
                                    }
                                    if (num2 > num) {
                                        num = num2;
                                        gameAppli = gameAppli2;
                                    }
                                }
                            }
                            if (num == 0 && kl_cfg::Config::DEBUG()) {
                                pls::cs::Ref<Dialog> dialog = Dialog::create(2, literal(u"OpenBrowser"));
                                require(dialog)->SetText(pls::cs::String::concat(
                                    pls::cs::String::concat(literal(u"ﾊﾟｯｹｰｼﾞ「"), value),
                                    literal(
                                        u"」からAppleIdへの変換に失敗しました。\n共有DBに登録されているか確認してください。")));
                                require(dialog)->Show();
                                return false;
                            }
                            if (gameAppli.Language == literal(u"ja")) {
                                url_cell->value = pls::cs::String::concat(
                                    pls::cs::String::concat(literal(u"https://itunes.apple.com/jp/app/id"),
                                                            gameAppli.IOSId),
                                    literal(u"?mt=8"));
                            } else {
                                url_cell->value = pls::cs::String::concat(
                                    pls::cs::String::concat(literal(u"https://itunes.apple.com/app/id"),
                                                            gameAppli.IOSId),
                                    literal(u"?mt=8"));
                            }
                        }
                    }
                }
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        auto cs_receiver = pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return pls::kairo::IApplication::GetCurrentApp(); });
                        pls::cs::Delegate<void()> cs_arg0 = pls::cs::Delegate<void()>::from_closure(
                            pls::cs::raw(url_cell),
                            std::string("M:kairo.unity.ui.Canvas.OpenBrowser(System.String):32082"),
                            [url_cell]() -> void {
                                {
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return ([&]() -> void {
                                            pls::kairo::AppEventType cs_arg0 =
                                                static_cast<pls::kairo::AppEventType>(
                                                    2) /* AppEventType.Browser */;
                                            auto cs_arg1 =
                                                pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(1);
                                            cs_arg1.at(0) = pls::cs::box(url_cell->value);
                                            pls::kairo::FormManagerBase::ProcessEvent(cs_arg0, cs_arg1);
                                        }());
                                    });
                                    {
                                        pls::cs::Int32 cs_value =
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return require(
                                                           pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                               return pls::kairo::IApplication::
                                                                   GetCurrentApp();
                                                           }))
                                                    ->GetTotalFrames();
                                            });
                                        pls::kairo::Canvas::source_last_browser_frame() = cs_value;
                                    }
                                    pls::cs::String text = pls::cs::String::concat(
                                        literal(u"_lh="), util::Language::GetLanguageCode());
                                    if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return contains_string(url_cell->value, literal(u"?"));
                                        })) {
                                        text = (pls::cs::String::concat(literal(u"&"), text));
                                    } else {
                                        text = (pls::cs::String::concat(literal(u"?"), text));
                                    }
                                    pls::cs::Int32 num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return last_index_char1(url_cell->value, u'#');
                                    });
                                    if (num3 != -1) {
                                        url_cell->value = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return pls::cs::string_insert(url_cell->value, num3, text);
                                        });
                                    } else {
                                        url_cell->value = pls::cs::String::concat(url_cell->value, text);
                                    }
                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::kairo::UnityApplication::OpenURL(url_cell->value);
                                    });
                                }
                            },
                            url_cell);
                        require(cs_receiver)->RunOnUiThread(cs_arg0, true);
                    }());
                });
                return true;
            } catch (const pls::cs::Exception& cs_caught_33) {
                pls::cs::capture_exception(cs_caught_33);
                {
                    if (kl_cfg::Config::PRINT()) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_util::Log::Info(
                                pls::cs::String::concat(literal(u"ブラウザの起動に失敗しました。"),
                                                        url_cell->value),
                                pls::cs::Ref<pls::cs::ExceptionObject>{});
                        });
                    }
                }
            }
            return false;
        }
    }
}

// M:kairo.unity.ui.Canvas.VersionUp(System.String)
void VersionUp(pls::cs::String url) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Canvas.VersionUp(System.String)", kairo);
    {
    }
}

// M:kairo.unity.ui.Canvas.ImeOnBlock(System.String,System.Int32,System.Int32)
pls::cs::String ImeOnBlock(pls::cs::Ref<pls::kairo::Canvas> self, pls::cs::String text,
                           pls::cs::Int32 displayMode, pls::cs::Int32 inputMode) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Canvas.ImeOnBlock(System.String,System.Int32,System.Int32)", kairo);
    {
        return pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return pls::kairo::request_text_input(text, displayMode, inputMode); });
    }
}

// M:kairo.unity.ui.Canvas.Fullscreen(System.Boolean)
void Fullscreen(pls::cs::Ref<pls::kairo::Canvas> self, bool enable) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Canvas.Fullscreen(System.Boolean)", kairo);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(require(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                   return pls::kairo::IApplication::GetCurrentApp();
                               }))->GetFormManager())
                    ->IsCapturing();
            })) {
            return;
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return PlsPortGeneratedBootstrap::Source::SetWindowFullscreen(enable);
        });
    }
}

// M:kairo.unity.ui.Canvas.IsGetStatusBarHeight
bool IsGetStatusBarHeight(pls::cs::Ref<pls::kairo::Canvas> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Canvas.IsGetStatusBarHeight", kairo);
    {
        return true;
    }
}

// M:kairo.unity.ui.Canvas.SetLinearFilterEnable(System.Boolean)
void SetLinearFilterEnable(pls::cs::Ref<pls::kairo::Canvas> self, bool enable) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Canvas.SetLinearFilterEnable(System.Boolean)", kairo);
    {
    }
}

// M:kairo.unity.ui.Canvas.IsLinearFilterEnable
bool IsLinearFilterEnable(pls::cs::Ref<pls::kairo::Canvas> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Canvas.IsLinearFilterEnable", kairo);
    {
        return pls::kairo::QualitySettings::get_antiAliasing() != 0;
    }
}

// M:kairo.unity.ui.Canvas.IsGetStatusBarPosition
bool IsGetStatusBarPosition(pls::cs::Ref<pls::kairo::Canvas> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Canvas.IsGetStatusBarPosition", kairo);
    {
        return self->source_status_bar_position != -1;
    }
}

// M:kairo.unity.ui.Canvas.GetAdMobView
pls::cs::Ref<ad::AdMobView> GetAdMobView(pls::cs::Ref<pls::kairo::Canvas> self) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Canvas.GetAdMobView", kairo);
    {
        return pls::cs::Ref<ad::AdMobView>{};
    }
}
} // namespace kairo::unity::ui::Canvas
}
