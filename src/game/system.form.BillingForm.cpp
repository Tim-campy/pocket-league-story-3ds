// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.SubForm.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "java.lang.JRunnable.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.ui.TextLayout.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "system.KairoService.hpp"
#include "system.KairoText.hpp"
#include "system.billing.MyBilling.hpp"
#include "system.billing.ui.ApplyTask.hpp"
#include "system.billing.ui.BillingItem.hpp"
#include "system.billing.ui.BillingManager.hpp"
#include "system.billing.ui.PurchaseLogView.hpp"
#include "system.billing.ui.PurchaseRecord.hpp"
#include "system.billing.util.Purchase.hpp"
#include "system.form.BillingForm.hpp"
#include "system.form.ConnectForm.hpp"
#include "generated/java.util.Vector_1_templates.hpp"
#include "system.billing.ui.BillingManager_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace system::form {

void BillingForm::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    MyFormBase::trace_edges(visitor);
    pls::cs::trace_value(textLay_, visitor);
    pls::cs::trace_value(bform_, visitor);
    pls::cs::trace_value(task_, visitor);
    pls::cs::trace_value(item_, visitor);
    pls::cs::trace_value(sales_, visitor);
    pls::cs::trace_value(marketNotes_, visitor);
    pls::cs::trace_value(password_, visitor);
    pls::cs::trace_value(error_, visitor);
    pls::cs::trace_value(th_, visitor);
    pls::cs::trace_value(gift_, visitor);
}

static bool BillingForm_admobSkipPurchase__storage{};

static IntArray2 BillingForm_configData__storage{};

static IntArray BillingForm_drawAdOffButtoan_result_storage{};

static pls::cs::Int32 BillingForm_MAKET_ITEM_GET_END_FRAME_storage{};

static pls::cs::Int32 BillingForm_MAKET_ITEM_GET_END_FRAME2_storage{};

static pls::cs::Ref<kairo::unity::ui::ResourceManager> BillingForm_resBilling__storage{};

static PLS_NOINLINE void cs_init_5df8265429cd2423_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(BillingForm_admobSkipPurchase__storage, visitor);
        pls::cs::trace_value(BillingForm_configData__storage, visitor);
        pls::cs::trace_value(BillingForm_drawAdOffButtoan_result_storage, visitor);
        pls::cs::trace_value(BillingForm_MAKET_ITEM_GET_END_FRAME_storage, visitor);
        pls::cs::trace_value(BillingForm_MAKET_ITEM_GET_END_FRAME2_storage, visitor);
        pls::cs::trace_value(BillingForm_resBilling__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("system.form.BillingForm", flag, []() {
        BillingForm_configData__storage =
            pls::cs::evaluate_type_initializer_field("F:system.form.BillingForm.configData_", [&]() {
                return IntArray2::from({IntArray::from({0, 2, 13}), IntArray::from({0, 2, 13}),
                                        IntArray::from({0, 2, 13}), IntArray::from({0, 2, 13}),
                                        IntArray::from({0, 2, 13}), IntArray::from({0, 2, 13})});
            });
        BillingForm_MAKET_ITEM_GET_END_FRAME_storage = pls::cs::evaluate_type_initializer_field(
            "F:system.form.BillingForm.MAKET_ITEM_GET_END_FRAME", [&]() { return 25; });
        BillingForm_MAKET_ITEM_GET_END_FRAME2_storage = pls::cs::evaluate_type_initializer_field(
            "F:system.form.BillingForm.MAKET_ITEM_GET_END_FRAME2", [&]() { return 50; });
        BillingForm_drawAdOffButtoan_result_storage = pls::cs::evaluate_type_initializer_field(
            "F:system.form.BillingForm.drawAdOffButtoan_result", [&]() { return IntArray::make(4); });
    });
}

void BillingForm::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_5df8265429cd2423_slow(flag);
}

bool& BillingForm::admobSkipPurchase_() {
    BillingForm::ensure_initialized();
    return BillingForm_admobSkipPurchase__storage;
}

IntArray2& BillingForm::configData_() {
    BillingForm::ensure_initialized();
    return BillingForm_configData__storage;
}

IntArray& BillingForm::drawAdOffButtoan_result() {
    BillingForm::ensure_initialized();
    return BillingForm_drawAdOffButtoan_result_storage;
}

pls::cs::Int32& BillingForm::MAKET_ITEM_GET_END_FRAME() {
    BillingForm::ensure_initialized();
    return BillingForm_MAKET_ITEM_GET_END_FRAME_storage;
}

pls::cs::Int32& BillingForm::MAKET_ITEM_GET_END_FRAME2() {
    BillingForm::ensure_initialized();
    return BillingForm_MAKET_ITEM_GET_END_FRAME2_storage;
}

pls::cs::Ref<kairo::unity::ui::ResourceManager>& BillingForm::resBilling_() {
    BillingForm::ensure_initialized();
    return BillingForm_resBilling__storage;
}

void BillingForm::create_init(pls::cs::Ref<BillingForm> self) {
    BillingForm::ensure_initialized();
    self->dialogId_ = -1;
    MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 900);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.#ctor", game);
    {
        self->untilActiveHide_ = true;
    }
}

void BillingForm::create_init(pls::cs::Ref<BillingForm> self, pls::cs::Int32 type,
                              pls::cs::Ref<billing::ui::ApplyTask> provide) {
    BillingForm::ensure_initialized();
    BillingForm::create_init(pls::cs::static_pointer_cast<BillingForm>(self), type);
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.form.BillingForm.#ctor(System.Int32,system.billing.ui.ApplyTask)", game);
    {
        self->task_ = provide;
    }
}

void BillingForm::create_init(pls::cs::Ref<BillingForm> self, pls::cs::Int32 type) {
    BillingForm::ensure_initialized();
    self->dialogId_ = -1;
    MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 900);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.#ctor(System.Int32)", game);
    {
        self->type_ = type;
        self->select_ = 0;
        self->untilActiveHide_ = true;
    }
}

// M:system.form.BillingForm.#ctor
pls::cs::Ref<BillingForm> BillingForm::create() {
    BillingForm::ensure_initialized();
    auto self = pls::cs::make_ref<BillingForm>();
    BillingForm::create_init(self);
    return self;
}

// M:system.form.BillingForm.#ctor(System.Int32)
pls::cs::Ref<BillingForm> BillingForm::create(pls::cs::Int32 type) {
    BillingForm::ensure_initialized();
    auto self = pls::cs::make_ref<BillingForm>();
    BillingForm::create_init(self, type);
    return self;
}

// M:system.form.BillingForm.#ctor(System.Int32,system.billing.ui.ApplyTask)
pls::cs::Ref<BillingForm> BillingForm::create(pls::cs::Int32 type,
                                              pls::cs::Ref<billing::ui::ApplyTask> provide) {
    BillingForm::ensure_initialized();
    auto self = pls::cs::make_ref<BillingForm>();
    BillingForm::create_init(self, type, provide);
    return self;
}

// M:system.form.BillingForm.ToString
pls::cs::String BillingForm::ToString() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.ToString", game);
    {
        return pls::cs::String::concat(literal(u"BillingForm:"), integer_string(type_));
    }
}

// M:system.form.BillingForm.LoadResource
void BillingForm::LoadResource() {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.LoadResource", game);
    {
        if (!is_null(BillingForm::resBilling_())) {
            return;
        }
        try {
            BillingForm::resBilling_() =
                require(kairo::unity::ui::ResourceManager::create(
                            pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                            pls::cs::String{}, pls::cs::String{}, pls::cs::String{}))
                    ->SetRecordNameBits(0);
            {
                auto cs_receiver = BillingForm::resBilling_();
                ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::kairo::Storage::Read(3, false, literal(u"billing.dat"));
                });
                require(cs_receiver)->Load(cs_arg0, 3);
            }
        } catch (const pls::cs::Exception& cs_caught_240) {
            pls::cs::capture_exception(cs_caught_240);
            {
                BillingForm::resBilling_() = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
            }
        }
    }
}

// M:system.form.BillingForm.Init
bool BillingForm::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.Init", game);
    {
        main::AppData::ensure_initialized();
        kl_cfg::Config::ensure_initialized();

        MyFormBase::Init();
        BillingForm::LoadResource();
        frame_ = 0;
        threadState_ = 0;
        pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
        pls::cs::Int32 num = BillingForm::configData_()[type_][0];
        pls::cs::Int32 num2 = BillingForm::configData_()[type_][1];
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::String cs_arg0 = main::AppData::softLabels_()[num];
                pls::cs::String cs_arg1 = main::AppData::softLabels_()[num2];
                this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
            }());
        });
        if (type_ == 0) {
            if (kl_cfg::Config::APPLI_TYPE() == 2) {
                pls::cs::String url;
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_unity_util::Language::Japanese(); })) {
                    url = (pls::cs::String::concat(
                        pls::cs::String::concat(literal(u"http://kairopark.jp/android/policy/app_gm"),
                                                integer_string(kl_cfg::Config::PID())),
                        literal(u"_kiyaku.html")));
                } else {
                    url = (pls::cs::String::concat(
                        pls::cs::String::concat(literal(u"http://kairopark.jp/android/policy/en/app_gm"),
                                                integer_string(kl_cfg::Config::PID())),
                        literal(u"_kiyaku.html")));
                }
                if (!kairo::unity::ui::Canvas::OpenBrowser(url)) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            pls::game::form::SubForm::MakeDialog(
                                KairoText::LT(literal(u"通信に失敗しました"))));
                    });
                }
                return pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                });
            }
            textLay_ = kairo::unity::ui::TextLayout::create();
            require(textLay_)->SetSize(146.0f, 124.0f);
            require(textLay_)->SetLineSpace(6);
            require(textLay_)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30); }));
            {
                pls::cs::String cs_arg0 = marketNotes_[page_];
                require(textLay_)->SetText(cs_arg0);
            }
            require(textLay_)->Flush();
        } else if (type_ == 1) {
            pls::cs::String text;
            if (kl_cfg::Config::APPLI_TYPE() == 0) {
                text = literal(
                    u"通信を許可し電波を確認して再起動してください。\nおまかせロック等をご利用の方は解除をご確認ください。\nｷｯｽﾞiﾓｰﾄﾞﾌｨﾙﾀ設定中は一部機能がご利用頂けません。");
            } else {
                text = KairoText::LT(literal(
                    u"通信を許可し電波を確認して再起動してください。\n通信OFFの場合は一部の機能がご利用頂けない場合がございます。"));
            }
            textLay_ = kairo::unity::ui::TextLayout::create();
            require(textLay_)->SetSize(166.0f, 124.0f);
            require(textLay_)->SetLineSpace(6);
            require(textLay_)->SetColor(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return pls::kairo::Graphics::GetColorOfRGB(30, 30, 30); }));
            require(textLay_)->SetText(text);
            require(textLay_)->Flush();
        } else if (type_ == 2) {

        } else {
            if (type_ == 3) {
                pls::cs::Ref<KairoService> instance = KairoService::GetInstance();
                pls::cs::Ref<billing::MyBilling> instance2 = billing::MyBilling::GetInstance();
                if (require(instance2)->CheckPlayingGame()) {
                    if (require(instance)->Check(1048576)) {
                        ThreadStart(1);
                        SetSoftlabel();
                        return true;
                    }
                    require(instance)->On(1048576);
                    require(instance)->Save();
                }
                if (require(item_)->GetId() == 0 && BillingForm::admobSkipPurchase_()) {
                    ThreadStart(1);
                } else {
                    if (!skipUpdateSales_) {
                        ThreadStart(0);
                    }
                    select_ = 1;
                }
            } else if (type_ == 4) {
            }
        }
        SetSoftlabel();
        return true;
    }
}

// M:system.form.BillingForm.Draw(kairo.unity.ui.Graphics)
void BillingForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.Draw(kairo.unity.ui.Graphics)", game);
    {
        MyFormBase::Draw(g);
        pls::cs::Int32 num = x_;
        pls::cs::Int32 num2 = y_;
        if ([&]() {
                auto cs_left = pls::cs::box(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(formMan_)->GetForm(0); }));
                auto cs_right = pls::cs::box(require(apdat_)->frmGame_);
                return cs_left == cs_right;
            }()) {
            num2 += BillingForm::configData_()[type_][2];
        }
        if (require(view_)->GetGameWidth() > 240 || require(view_)->GetGameHeight() > 240) {
            num += (require(view_)->GetGameWidth() - 240) / 2;
            num2 += (require(view_)->GetGameHeight() - 240) / 2;
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetOrigin(num, num2); });
        pls::cs::run_finally(
            [&]() {
                try {
                    _draw(g);
                } catch (const pls::cs::Exception& cs_caught_238) {
                    pls::cs::capture_exception(cs_caught_238);
                    {
                    }
                }
            },
            [&]() {
                pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetOrigin(0, 0); });
            });
    }
}

// M:system.form.BillingForm._draw(kairo.unity.ui.Graphics)
void BillingForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm._draw(kairo.unity.ui.Graphics)", game);
    {
        MyFormBase::ensure_initialized();

        if (untilActiveHide_) {
            return;
        }
        if (!require(apdat_)->IsTopForm(this)) {
            pls::cs::Ref<pls::kairo::FormBase> topForm = pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(formMan_)->GetTopForm(); });
            if (pls::diagnostic::api_call([&]() -> decltype(auto) { return require(topForm)->GetId(); }) !=
                4) {
                return;
            }
            pls::cs::Ref<pls::game::form::SubForm> subForm =
                pls::cs::unbox<pls::cs::Ref<pls::game::form::SubForm>>(pls::cs::box(topForm));
            if (!require(subForm)->IsMenu() && require(subForm)->type_ != type_) {
                return;
            }
            for (pls::cs::Int32 num = pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                          return require(formMan_)->GetFormsNum();
                                      })) -
                                      2;
                 num >= 0; --num) {
                topForm = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(formMan_)->GetForm(num); });
                if (pls::cs::box(topForm) == pls::cs::box(this)) {
                    break;
                }
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(topForm)->GetId(); }) != 4 ||
                    !require((pls::cs::unbox<pls::cs::Ref<pls::game::form::SubForm>>(pls::cs::box(topForm))))
                         ->IsMenu()) {
                    return;
                }
            }
        }
        if (!Active()) {
            return;
        }
        if (threadState_ != 0) {
            if (threadFrame_ == 1) {
                pls::cs::Ref<pls::game::form::FormManager> instance =
                    pls::game::form::FormManager::GetInstance();
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(instance)->DrawAllForms(); });
            } else if (threadFrame_ > 1) {
                ConnectForm::DrawConnect(g);
            }
            if (threadFrame_ <= 1) {
                try {
                    java::lang::JThread::Yield();
                    java::lang::JThread::Sleep(50ll);
                } catch (const pls::cs::Exception& cs_caught_232) {
                    pls::cs::capture_exception(cs_caught_232);
                    {
                    }
                }
            }
            return;
        }
        if (type_ == 0) {
            pls::cs::Int32 num2 = (MyFormBase::WNDFLAG_LEFT_ARW() | MyFormBase::WNDFLAG_RIGHT_ARW());
            require(apdat_)->DrawBox(g, 37, 55, 203, 202);
            require(textLay_)->Draw(g, 48.0f, 70.0f);
        } else if (type_ == 1) {
            pls::cs::Int32 gWidth = 190;
            pls::cs::Int32 gHeight = 180;
            {
                auto cs_receiver = apdat_;
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                pls::cs::Int32 cs_arg1 = gWidth;
                pls::cs::Int32 cs_arg2 = gHeight;
                pls::cs::String cs_arg4 = KairoText::LT(literal(u"メッセージ"));
                require(cs_receiver)->DrawWindow(cs_arg0, cs_arg1, cs_arg2, 0, cs_arg4);
            }
            require(apdat_)->DrawBox(g, 34, 54, 206, 181);
            require(textLay_)->Draw(g, 40.0f, 68.0f);
            DrawCommand(g, KairoText::LT(literal(u"了解")), 120, 189, 2, true, true);
            pls::game::surface::GameView::AddTouch(4);
        } else {
            if (type_ == 2) {

            } else if (type_ == 3) {

            } else if (type_ == 4) {

            } else if (type_ == 5) {
                pls::cs::Int32 num3 = 174;
                pls::cs::Int32 num4 = 107;
                pls::cs::Int32 num5 = 120 - num3 / 2;
                pls::cs::Int32 num6 = 120 - num4 / 2;
                pls::cs::Int32 num7 = num5 + num3;
                pls::cs::Int32 num8 = num6 + num4;
                BillingForm::FillRect3(g, num5, num6, num3, num4,
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return pls::kairo::Graphics::GetColorOfRGB(150, 153, 225);
                                       }),
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return pls::kairo::Graphics::GetColorOfRGB(85, 87, 171);
                                       }),
                                       pls::diagnostic::api_call([&]() -> decltype(auto) {
                                           return pls::kairo::Graphics::GetColorOfRGB(253, 253, 253);
                                       }));
                require(apdat_)->DrawBox(g, num5 + 9, num6 + 24, num7 - 9, num8 - 6);
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(g)->SetColor(55, 55, 55); });
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::String cs_arg0 = KairoText::LT(literal(u"どちらに入店しますか"));
                        require(g)->DrawString(cs_arg0, 120.0f, num6 + 8, 2);
                    }());
                });
                StringArray array = StringArray::from(
                    {KairoText::LT(literal(u"パンプキン商会")), KairoText::LT(literal(u"チケットショップ"))});
                pls::cs::Int32 num9 = num6 + 30 + 5;
                for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
                    pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(g)->SetColor(55, 55, 55); });
                    pls::cs::String cs_arg1_292 = array[i];
                    bool cs_arg5_292 = select_ == i;
                    bool cs_arg7_292 = select_ == i;
                    IntArray array2 =
                        DrawCommand(g, cs_arg1_292, 125, num9 + 2, 2, cs_arg5_292, 1, cs_arg7_292);
                    pls::game::surface::GameView::AddTouch(g, 3, array2[0], array2[1], array2[2], array2[3],
                                                           0x20000 | i);
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::Single cs_arg2 = require(view_)->GetGameWidth();
                            require(g)->SetClip(0.0f, 0.0f, cs_arg2, num9 + 16);
                        }());
                    });
                    if (i == 0) {
                        require(BillingForm::resBilling_())->DrawSeb(g, num5 + 22, num9 + 24, 1, 0);
                    } else {
                        require(BillingForm::resBilling_())->DrawSeb(g, num5 + 22, num9 + 23, 1, 1);
                    }
                    pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->ClearClip(); });
                    num9 += 37;
                }
            }
        }
    }
}

// M:system.form.BillingForm.Finish
bool BillingForm::Finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.Finish", game);
    {
        MyFormBase::Finish();
        if (type_ == 3 && require(item_)->GetId() == 0) {
            BillingForm::admobSkipPurchase_() = true;
        }
        return true;
    }
}

// M:system.form.BillingForm.Resume
bool BillingForm::Resume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.Resume", game);
    {
        MyFormBase::Resume();
        return true;
    }
}

// M:system.form.BillingForm.Update
bool BillingForm::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.Update", game);
    {
        MyFormBase::Update();
        bool result = _update();
        SetSoftlabel();
        return result;
    }
}

// M:system.form.BillingForm._update
bool BillingForm::_update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm._update", game);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Ref<KairoService> instance = KairoService::GetInstance();
        untilActiveHide_ = false;
        if (threadState_ != 0) {
            if (threadState_ != 1 && threadType_ == 0) {
                pls::cs::Int64 num = pls::cs::Int64(350) - (([&]() -> pls::cs::Int64 {
                                         auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                             return kl_lang::JSystem::CurrentTimeMillis();
                                         });
                                         auto cs_right = threadBeginTime_;
                                         return cs_left - cs_right;
                                     }()));
                if (num > pls::cs::cast_integral<pls::cs::Int64>(0)) {
                    java::lang::JThread::Sleep(num);
                }
            }
            if (threadState_ == 1) {
                ++threadFrame_;
                return true;
            }
            if (threadState_ == 2) {
                threadState_ = 0;
                if (threadType_ == 0) {
                    if (type_ == 2) {
                        UpdateSaleList();
                    }
                } else {
                    if (threadType_ == 1) {
                        return pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                        });
                    }
                    if (threadType_ == 2) {
                        pls::cs::Ref<billing::ui::BillingManager> instance2 =
                            billing::ui::BillingManager::GetInstance();
                        for (pls::cs::Int32 num2 = pls::cs::Int32(gift_.length()) - 1; num2 >= 0; --num2) {
                            pls::cs::Ref<billing::ui::ApplyTask> applyTask =
                                billing::ui::ApplyTask::create(gift_[num2]);
                            if (require(applyTask)->Enable()) {
                                require(instance2)->AddApplyTask(applyTask);
                            }
                        }
                        require(instance)->SaveAll();
                        require(instance2)->UpdateApplyTask(true);
                        return true;
                    }
                }
            } else if (threadState_ == 3) {
                threadState_ = 0;
                if (kl_cfg::Config::PRINT()) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_unity_util::Log::Info(error_, pls::cs::Ref<pls::cs::ExceptionObject>{});
                    });
                }
                if (threadType_ == 0 && type_ == 2 && !require(instance)->Check(65536)) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 = KairoText::LT(literal(
                                    u"おっと…<br>本部との<co=60,100,200>通信に失敗</co>してしまいました。"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                            }()));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 = KairoText::LT(
                                    literal(u"電波や通信の状態を確認して<br>もう一回お店に来ると…"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                            }()));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 =
                                    KairoText::LT(literal(u"本来のステキな商品が陳列されますよ。"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                            }()));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 =
                                    KairoText::LT(literal(u"というわけで…<br>またお待ちしています。"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                            }()));
                    });
                    require(instance)->On(65536);
                    return pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                    });
                }
                if (threadType_ == 2 && kairo::unity::io::Http::PopErrorCode() == 210) {
                    return pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            pls::game::form::SubForm::MakeDialog(kairo::unity::io::Http::PopErrorText()));
                    });
                }
                if (threadType_ == 0) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                    });
                }
                if (threadType_ == 1) {
                    return pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                    });
                }
                return pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                        BillingForm::create(1));
                });
            }
        }
        pls::cs::Int32 num3 = 0;
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(131072); })) {
            ++num3;
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(524288); })) {
            ++num3;
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(65536); })) {
            ++num3;
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(canvas_)->CheckKeyState(262144); })) {
            ++num3;
        }
        if (num3 > 1) {
            pls::diagnostic::api_call([&]() -> decltype(auto) { return require(canvas_)->ClearKeyBuffer(); });
        }
        loopCounter_ = ((loopCounter_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (type_ == 0) {
            frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
            pls::cs::Int32 num4 = page_;
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); }) ||
                pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(262144); })) {
                page_ = (page_ + 1) % marketNotes_.length();
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(65536); })) {
                page_ = (page_ - 1 + marketNotes_.length()) % marketNotes_.length();
            }
            if (num4 != page_) {
                {
                    pls::cs::String cs_arg0 = marketNotes_[page_];
                    require(textLay_)->SetText(cs_arg0);
                }
                require(textLay_)->Flush();
            }
            if (require(apdat_)->IsPushSoftLabel(2, 1048576)) {
                return pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                });
            }
        } else if (type_ == 1) {
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); }) ||
                require(apdat_)->IsPushSoftLabel(2)) {
                return pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                });
            }
        } else if (type_ == 2) {
            if (!is_null(bform_)) {
                UpdateSaleList();
                bform_ = pls::cs::Ref<BillingForm>{};
            }
            if (mode_ == 0) {
                ++mode_;
                if (!require(instance)->Check(131072)) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 = KairoText::LT(
                                    literal(u"ここは、世界的に見て超レアな<br>｢チケット｣を売るお店ですよ。"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                            }()));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 = KairoText::LT(
                                    literal(u"なかなかの金額だからよく考えて買っていってくださいね。"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                            }()));
                    });
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 = KairoText::LT(literal(u"フフフ。"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                            }()));
                    });
                    require(instance)->On(131072);
                    try {
                        require(instance)->Save();
                    } catch (const pls::cs::Exception& cs_caught_235) {
                        pls::cs::capture_exception(cs_caught_235);
                        {
                        }
                    }
                } else {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 = KairoText::LT(literal(u"フフフ<br>いらっしゃい。"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                            }()));
                    });
                }
                return true;
            }
            if (mode_ == 1) {
                ++mode_;
                if (!skipUpdateSales_) {
                    ThreadStart(0);
                    return true;
                }
            }
            if ([&]() {
                    auto cs_left = pls::cs::box(sales_);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<billing::ui::BillingItem>>{});
                    return cs_left != cs_right;
                }()) {
                ScrollControl(sales_.length(), 6);
                if (pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); })) {
                    if (select_ < sales_.length()) {
                        pls::cs::Ref<billing::ui::BillingItem> billingItem = sales_.get_Item(select_);
                        if (require(billingItem)->GetState() == 1) {
                            return pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                                    ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                        pls::cs::String cs_arg1 = KairoText::LT(literal(
                                            u"あー、残念ながら<br>そちらは<co=60,100,200>売り切れ</co>です。<br>他の商品もご覧下さいませ。"));
                                        pls::cs::String cs_arg2 =
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return kl_lang::JString::ValueOfInt(999);
                                            });
                                        return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                                    }()));
                            });
                        }
                        if (!require(instance)->Check(524288)) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                                    ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                        pls::cs::String cs_arg1 =
                                            KairoText::LT(literal(u"おや、お目が高いですね。"));
                                        pls::cs::String cs_arg2 = pls::cs::String(u"");
                                        return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                                    }()));
                            });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                                    ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                        pls::cs::String cs_arg1 = KairoText::LT(literal(
                                            u"こちらは<co=60,100,200>現実のお金で購入する</co>ステキな商品です。"));
                                        pls::cs::String cs_arg2 = pls::cs::String(u"");
                                        return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                                    }()));
                            });
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                                    ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                        pls::cs::String cs_arg1 = KairoText::LT(literal(
                                            u"ちびっこは、<co=60,100,200>保護者の方</co>に確認してから購入するようにして下さいね。フフフ。"));
                                        pls::cs::String cs_arg2 = pls::cs::String(u"");
                                        return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                                    }()));
                            });
                            require(instance)->On(524288);
                            try {
                                require(instance)->Save();
                            } catch (const pls::cs::Exception& cs_caught_236) {
                                pls::cs::capture_exception(cs_caught_236);
                                {
                                }
                            }
                        }
                        bform_ = BillingForm::create(3);
                        require(bform_)->item_ = billingItem;
                        require(bform_)->skipUpdateSales_ = true;
                        return pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(bform_);
                        });
                    }
                } else if (require(apdat_)->IsPushSoftLabel(2)) {
                    if (!require(instance)->Check(262144)) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                                ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                    pls::cs::String cs_arg1 = KairoText::LT(
                                        literal(u"これからいつでもお店はありますからいつでも来て下さいね。"));
                                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                                    return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                                }()));
                        });
                        require(instance)->On(262144);
                        try {
                            require(instance)->Save();
                        } catch (const pls::cs::Exception& cs_caught_237) {
                            pls::cs::capture_exception(cs_caught_237);
                            {
                            }
                        }
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                                ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                    pls::cs::String cs_arg1 =
                                        KairoText::LT(literal(u"フフフ<br>また来てくださいね。"));
                                    pls::cs::String cs_arg2 = pls::cs::String(u"");
                                    return pls::game::form::SubForm::MakeTalkForm(4, cs_arg1, cs_arg2);
                                }()));
                        });
                    }
                    return pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                    });
                }
            }
            if (kl_cfg::Config::DEBUG() && pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return require(canvas_)->CheckKeyPulse(2048);
                })) {
                pls::cs::Ref<billing::MyBilling> instance3 = billing::MyBilling::GetInstance();
                if (select2_ == 0) {
                    pls::cs::Ref<kl_java_util::Vector> purchaseLog = require(instance3)->GetPurchaseLog();
                    pls::cs::String text = pls::cs::String(u"");
                    for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                   return kl_java_util::Vector_2_Size(require(purchaseLog));
                                               });
                         ++i) {
                        pls::cs::Ref<billing::ui::PurchaseRecord> purchaseRecord =
                            pls::cs::unbox<pls::cs::Ref<billing::ui::PurchaseRecord>>(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(purchaseLog), i);
                                }));
                        if (kl_lang::StringEx::Length(text) > 0) {
                            text = pls::cs::String::concat(text, literal(u"\n\n"));
                        }
                        text = concat_objects2(pls::cs::box(text), pls::cs::box(purchaseRecord));
                    }
                    pls::cs::Ref<billing::ui::PurchaseLogView> purchaseLogView =
                        billing::ui::PurchaseLogView::create(literal(u"過去の購入履歴"));
                    {
                        pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_Size(require(purchaseLog));
                        });
                        require(purchaseLogView)->SetLog(cs_arg0, text, true);
                    }
                    require(purchaseLogView)->Show();
                } else {
                    pls::cs::Array<pls::cs::Ref<billing::ui::BillingItem>> items =
                        require(instance3)->GetItems();
                    pls::cs::String text2 = pls::cs::String(u"");
                    pls::cs::Int32 num5 = 0;
                    for (pls::cs::Int32 j = 0; j < items.length(); ++j) {
                        if (is_null(items.get_Item(j))) {
                            continue;
                        }
                        if (require(items.get_Item(j))->GetState() == 1 &&
                            !is_null(require(items.get_Item(j))->GetPurchase())) {
                            if (kl_lang::StringEx::Length(text2) > 0) {
                                text2 = pls::cs::String::concat(text2, literal(u"\n\n"));
                            }
                            text2 = ([&]() {
                                auto cs_left = pls::cs::String::concat(
                                    pls::cs::String::concat(text2,
                                                            require(items.get_Item(j))->GetProductId()),
                                    literal(u"\n"));
                                auto cs_right =
                                    require(require(items.get_Item(j))->GetPurchase())->GetOrderId();
                                return pls::cs::String::concat(cs_left, cs_right);
                            }());
                            ++num5;
                        }
                    }
                    pls::cs::Ref<billing::ui::PurchaseLogView> purchaseLogView2 =
                        billing::ui::PurchaseLogView::create(literal(u"現在の購入状態"));
                    require(purchaseLogView2)->SetLog(num5, text2, false);
                    require(purchaseLogView2)->Show();
                }
            }
        } else if (type_ == 3) {
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(131072); })) {
                select_ = (select_ - 1 + 2) % 2;
            } else if (pls::diagnostic::api_call(
                           [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(524288); })) {
                select_ = (select_ + 1 + 2) % 2;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); })) {
                if (select_ == 0) {
                    return pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            BillingForm::create(0));
                    });
                }
                if (select_ == 1) {
                    ThreadStart(1);
                    return true;
                }
            } else if (require(apdat_)->IsPushSoftLabel(2)) {
                return pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                });
            }
        } else if (type_ == 4) {

        } else if (type_ == 5) {
            pls::cs::Int32 num6 = 2;
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(131072); })) {
                select_ = (select_ - 1 + num6) % num6;
            } else if (pls::diagnostic::api_call(
                           [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(524288); })) {
                select_ = (select_ + 1 + num6) % num6;
            }
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyPulse(1048576); })) {
                return pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                });
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();
                });
            }
        }
        return true;
    }
}

// M:system.form.BillingForm.ScrollControl(System.Int32,System.Int32)
void BillingForm::ScrollControl(pls::cs::Int32 num, pls::cs::Int32 showMax) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.ScrollControl(System.Int32,System.Int32)",
                     game);
    {
        if (num <= 0) {
            return;
        }
        {
            if (pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(131072); })) {
                select_ = (select_ - 1 + num) % num;
            } else if (pls::diagnostic::api_call(
                           [&]() -> decltype(auto) { return require(canvas_)->CheckKeyRepeat(524288); })) {
                select_ = (select_ + 1) % num;
            }
            ScrollUpdate(num, showMax);
        }
    }
}

// M:system.form.BillingForm.ScrollUpdate(System.Int32,System.Int32)
void BillingForm::ScrollUpdate(pls::cs::Int32 num, pls::cs::Int32 showMax) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.ScrollUpdate(System.Int32,System.Int32)",
                     game);
    {
        ScrollUpdate(num, showMax, select_);
    }
}

// M:system.form.BillingForm.ScrollUpdate(System.Int32,System.Int32,System.Int32)
void BillingForm::ScrollUpdate(pls::cs::Int32 num, pls::cs::Int32 showMax, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.form.BillingForm.ScrollUpdate(System.Int32,System.Int32,System.Int32)", game);
    {
        if (num <= 0) {
            return;
        }
        {
            if (value >= scrollValue_ + showMax) {
                scrollValue_ = value - (showMax - 1);
            }
            if (value < scrollValue_) {
                scrollValue_ = value;
            }
            while (scrollValue_ > 0 && num < scrollValue_ + showMax) {
                --scrollValue_;
            }
        }
    }
}

// M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
IntArray BillingForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 x,
                                  pls::cs::Int32 y, bool active, bool cursor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)",
        game);
    {
        return DrawCommand(g, str, x, y, 0, active, 1, cursor);
    }
}

// M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IntArray BillingForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 x,
                                  pls::cs::Int32 y, pls::cs::Int32 anchor, bool active, bool cursor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)",
        game);
    {
        return DrawCommand(g, str, x, y, anchor, active, 1, cursor);
    }
}

// M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
IntArray BillingForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 x,
                                  pls::cs::Int32 y, pls::cs::Int32 anchor, bool active, pls::cs::Int32 margin,
                                  bool cursor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)",
        game);
    {
        return IntArray{};
    }
}

// M:system.form.BillingForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t BillingForm::GetTouchValue(std::int32_t type_raw, std::int32_t index_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 index = index_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.GetTouchValue(System.Int32,System.Int32)",
                     game);
    {
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        switch (type) {
        case 131072: {
            return select_;
        }
        case 262144: {
            return scrollValue_;
        }
        default: {
            return MyFormBase::GetTouchValue(type, index);
        }
        }
    }
}

// M:system.form.BillingForm.SetTouchValue(System.Int32,System.Int32)
void BillingForm::SetTouchValue(std::int32_t type_raw, std::int32_t value_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 value = value_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.SetTouchValue(System.Int32,System.Int32)",
                     game);
    {
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        switch (type) {
        case 131072: {
            select_ = value;
            break;
        }
        case 262144: {
            scrollValue_ = value;
            break;
        }
        default: {
            MyFormBase::SetTouchValue(type, value);
            break;
        }
        }
    }
}

// M:system.form.BillingForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool BillingForm::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.form.BillingForm.OnTouchEvent(kairo.unity.surface.TouchEvent)", game);
    {
        pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
        if (type_ == 2 && require(component)->id == 4) {
            switch (require(e)->type) {
            case 2:
            cs_switch_18831_section_0:;
                {
                    goto cs_switch_18831_section_1;
                }
            case 1:
            cs_switch_18831_section_1:;
                {
                    {
                        select2_ = require(component)->value;
                        if (require(e)->type == 1) {
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(canvas_)->KeyClick(2048); });
                        }
                        break;
                    }
                }
            }
            return false;
        }
        return true;
    }
}

// M:system.form.BillingForm.CheckMainWindow
bool BillingForm::CheckMainWindow() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.CheckMainWindow", game);
    {
        return false;
    }
}

// M:system.form.BillingForm.SetSoftlabel
void BillingForm::SetSoftlabel() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.SetSoftlabel", game);
    {
        main::AppData::ensure_initialized();

        pls::cs::Int32 num = BillingForm::configData_()[type_][0];
        pls::cs::Int32 num2 = BillingForm::configData_()[type_][1];
        if (threadState_ != 0) {
            num2 = 0;
            num = num2;
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() -> void {
                pls::cs::String cs_arg0 = main::AppData::softLabels_()[num];
                pls::cs::String cs_arg1 = main::AppData::softLabels_()[num2];
                this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
            }());
        });
    }
}

// M:system.form.BillingForm.UpdateSaleList
void BillingForm::UpdateSaleList() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.UpdateSaleList", game);
    {
        pls::cs::Ref<billing::MyBilling> instance = billing::MyBilling::GetInstance();
        pls::cs::Array<pls::cs::Ref<billing::ui::BillingItem>> sales = require(instance)->GetSales();
        IntArray array = IntArray::make(sales.length());
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            array[i] = -1;
        }
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 j = 0; j < sales.length(); ++j) {
            if (array[j] != -1) {
                continue;
            }
            pls::cs::Ref<billing::ui::BillingItem> billingItem = sales.get_Item(j);
            if (require(billingItem)->GetSeriesNumber() != -1) {
                for (pls::cs::Int32 k = j + 1; k < sales.length(); ++k) {
                    if (require(sales.get_Item(k))->GetSeriesNumber() != -1 &&
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return ([&]() -> bool {
                                auto cs_arg0 = require(sales.get_Item(j))->GetSeriesName();
                                auto cs_arg1 = require(sales.get_Item(k))->GetSeriesName();
                                return string_equals(cs_arg0, cs_arg1);
                            }());
                        })) {
                        array[k] = num;
                    }
                }
            }
            array[j] = num;
            ++num;
        }
        pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
        for (pls::cs::Int32 l = 0; l < num; ++l) {
            pls::cs::Ref<billing::ui::BillingItem> billingItem2 = pls::cs::Ref<billing::ui::BillingItem>{};
            pls::cs::Ref<billing::ui::BillingItem> billingItem3 = pls::cs::Ref<billing::ui::BillingItem>{};
            pls::cs::Int32 num2 = 2147483647 /* Int32.MaxValue */;
            pls::cs::Int32 num3 = (-2147483647 - 1) /* Int32.MinValue */;
            for (pls::cs::Int32 m = 0; m < array.length(); ++m) {
                if (array[m] != l) {
                    continue;
                }
                pls::cs::Ref<billing::ui::BillingItem> billingItem4 = sales.get_Item(m);
                if (require(billingItem4)->GetState() == 0 &&
                    require(billingItem4)->GetSeriesNumber() < num2) {
                    num2 = require(billingItem4)->GetSeriesNumber();
                    billingItem2 = billingItem4;
                }
                if (require(billingItem4)->GetState() != 0 &&
                    require(billingItem4)->GetSeriesNumber() > num3) {
                    num3 = require(billingItem4)->GetSeriesNumber();
                    billingItem3 = billingItem4;
                }
            }
            if (!is_null(billingItem2)) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(billingItem2));
                });
            } else if (!is_null(billingItem3)) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(billingItem3));
                });
            }
        }
        sales_ = pls::cs::Array<pls::cs::Ref<billing::ui::BillingItem>>::make(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(vector)); }));
        for (pls::cs::Int32 n = 0; n < sales_.length(); ++n) {
            {
                auto cs_target = sales_;
                auto cs_index = n;
                auto cs_value = pls::cs::unbox<pls::cs::Ref<billing::ui::BillingItem>>(
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_ElementAt(require(vector), n);
                    }));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        if (select_ < 0) {
            select_ = 0;
        }
        if (select_ > pls::cs::Int32(sales_.length()) - 1) {
            select_ = pls::cs::Int32(sales_.length()) - 1;
        }
        ScrollUpdate(sales_.length(), 6, select_);
    }
}

// M:system.form.BillingForm.ThreadStart(System.Int32)
void BillingForm::ThreadStart(pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.ThreadStart(System.Int32)", game);
    {
        threadType_ = type;
        threadState_ = 1;
        error_ = pls::cs::String{};
        threadFrame_ = 0;
        th_ = java::lang::JThread::create(this);
        require(th_)->Start();
    }
}

// M:system.form.BillingForm.Run
void BillingForm::Run() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.Run", game);
    {
        threadBeginTime_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_lang::JSystem::CurrentTimeMillis(); });
        pls::cs::run_finally(
            [&]() {
                try {
                    pls::cs::Ref<KairoService> instance = KairoService::GetInstance();
                    pls::cs::Ref<billing::MyBilling> instance2 = billing::MyBilling::GetInstance();
                    if (threadType_ == 0) {
                        require(instance2)->UpdateBillingItems(true);
                        if (type_ == 2) {
                            try {
                                require(instance2)->UpdateApplyTask(true);
                            } catch (const pls::cs::Exception& cs_caught_241) {
                                pls::cs::capture_exception(cs_caught_241);
                                {
                                }
                            }
                        }
                    } else if (threadType_ == 1) {
                        require(instance2)->LaunchPurchaseFlow(item_);
                    } else if (threadType_ == 2) {
                        gift_ = require(instance)->ConnectGift(password_);
                    }
                    threadState_ = 2;
                } catch (const pls::cs::Exception& cs_caught_242) {
                    auto ex2 = pls::cs::capture_exception(cs_caught_242);
                    {
                        error_ = pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(ex2)->ToString(); });
                        threadState_ = 3;
                        th_ = pls::cs::Ref<java::lang::JThread>{};
                    }
                }
            },
            [&]() { th_ = pls::cs::Ref<java::lang::JThread>{}; });
    }
}

// M:system.form.BillingForm.DrawLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::DrawLine(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x1, pls::cs::Int32 y1,
                           pls::cs::Int32 x2, pls::cs::Int32 y2, pls::cs::Int32 color) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawLine(x1, y1, x2, y2, 1.0f); });
    }
}

// M:system.form.BillingForm.DrawDotLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::DrawDotLine(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x1, pls::cs::Int32 y1,
                              pls::cs::Int32 x2, pls::cs::Int32 y2, pls::cs::Int32 color) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawDotLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color); });
        for (pls::cs::Int32 i = x1; i < x2; i += 3) {
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->DrawLine(i, y1, i + 1, y2, 1.0f); });
        }
    }
}

// M:system.form.BillingForm.DrawRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::DrawRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                           pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawRect(x, y, width, height); });
    }
}

// M:system.form.BillingForm.DrawRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::DrawRect2(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                            pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                            pls::cs::Int32 color2) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color1); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawRect(x, y, width, height); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color2); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawRect(x + 1, y + 1, width - 2, height - 2); });
    }
}

// M:system.form.BillingForm.DrawRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::DrawRect3(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                            pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                            pls::cs::Int32 color2, pls::cs::Int32 color3) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color1); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawRect(x, y, width, height); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color2); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawRect(x + 1, y + 1, width - 2, height - 2); });
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color3); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->DrawRect(x + 2, y + 2, width - 4, height - 4); });
    }
}

// M:system.form.BillingForm.FillRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::FillRect(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                           pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.FillRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->SetColor(color); });
        pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return require(g)->FillRect(x, y, width, height); });
    }
}

// M:system.form.BillingForm.FillRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::FillRect2(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                            pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                            pls::cs::Int32 color2) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.FillRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        BillingForm::DrawRect(g, x, y, width - 1, height - 1, color1);
        BillingForm::FillRect(g, x + 1, y + 1, width - 2, height - 2, color2);
    }
}

// M:system.form.BillingForm.FillRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::FillRect3(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                            pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                            pls::cs::Int32 color2, pls::cs::Int32 color3) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.FillRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        BillingForm::DrawRect(g, x, y, width - 1, height - 1, color1);
        BillingForm::DrawRect(g, x + 1, y + 1, width - 3, height - 3, color2);
        BillingForm::FillRect(g, x + 2, y + 2, width - 4, height - 4, color3);
    }
}

// M:system.form.BillingForm.FillRect4(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::FillRect4(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                            pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                            pls::cs::Int32 color2, pls::cs::Int32 color3, pls::cs::Int32 color4) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.FillRect4(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        BillingForm::DrawRect(g, x, y, width - 1, height - 1, color1);
        BillingForm::DrawRect(g, x + 1, y + 1, width - 3, height - 3, color2);
        BillingForm::DrawRect(g, x + 2, y + 2, width - 5, height - 5, color3);
        BillingForm::FillRect(g, x + 3, y + 3, width - 6, height - 6, color4);
    }
}

// M:system.form.BillingForm.FillRectShadow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::FillRectShadow(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                                 pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                                 pls::cs::Int32 color2, pls::cs::Int32 color3) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.FillRectShadow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        BillingForm::DrawRect(g, x, y, width - 1, height - 1, color1);
        BillingForm::DrawLine(g, x + 1, y + (height - 2), x + (width - 2), y + (height - 2), color2);
        BillingForm::DrawLine(g, x + (width - 2), y + 1, x + (width - 2), y + (height - 2), color2);
        BillingForm::FillRect(g, x + 1, y + 1, width - 3, height - 3, color3);
    }
}

// M:system.form.BillingForm.DrawObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::DrawObi(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 x, pls::cs::Int32 y,
                          pls::cs::Int32 width, pls::cs::Int32 height, pls::cs::Int32 color1,
                          pls::cs::Int32 color2) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        BillingForm::FillRect(g, x, y, width, 1, color1);
        BillingForm::FillRect(g, x, y + 1, width, height - 2, color2);
        BillingForm::FillRect(g, x, y + height - 1, width, 1, color1);
    }
}

// M:system.form.BillingForm.DrawGradation(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void BillingForm::DrawGradation(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 dx, pls::cs::Int32 dy,
                                pls::cs::Int32 sx, pls::cs::Int32 sy, pls::cs::Int32 w, pls::cs::Int32 h,
                                pls::cs::Int32 sr, pls::cs::Int32 sg, pls::cs::Int32 sb, pls::cs::Int32 dr,
                                pls::cs::Int32 dg, pls::cs::Int32 db) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawGradation(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        if ((w <= 0) || (h <= 0)) {
            return;
        }
        pls::cs::Int32 dxAlias = dx;
        pls::cs::Int32 num = dy;
        pls::cs::Int32 num2 = dx + w;
        pls::cs::Int32 num3 = dy + h;
        pls::cs::Double num4 = pls::cs::Double((dr - sr)) / pls::cs::Double((h / 4 + 1));
        pls::cs::Double num5 = pls::cs::Double((dg - sg)) / pls::cs::Double((h / 4 + 1));
        pls::cs::Double num6 = pls::cs::Double((db - sb)) / pls::cs::Double((h / 4 + 1));
        pls::cs::Double num7 = pls::cs::Double(sr) + pls::cs::Double((sy / 4)) * num4;
        pls::cs::Double num8 = pls::cs::Double(sg) + pls::cs::Double((sy / 4)) * num5;
        pls::cs::Double num9 = pls::cs::Double(sb) + pls::cs::Double((sy / 4)) * num6;
        while (num < num3) {
            num7 = (((num7 > 255.0)) ? pls::cs::Double(255.0) : (num7));
            num7 = (((num7 < 0.0)) ? pls::cs::Double(0.0) : (num7));
            num8 = (((num8 > 255.0)) ? pls::cs::Double(255.0) : (num8));
            num8 = (((num8 < 0.0)) ? pls::cs::Double(0.0) : (num8));
            num9 = (((num9 > 255.0)) ? pls::cs::Double(255.0) : (num9));
            num9 = (((num9 < 0.0)) ? pls::cs::Double(0.0) : (num9));
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return pls::kairo::Graphics::GetColorOfRGB(
                        pls::cs::to_int32(num7), pls::cs::to_int32(num8), pls::cs::to_int32(num9));
                }));
            });
            pls::cs::Int32 num10 = 0;
            if ((num == dy && sy % 4 != 0)) {
                num10 = (sy % 4);
            } else {
                if ((num + 4 > num3)) {
                    num10 = ((num3 - num));
                } else {
                    num10 = 4;
                }
            }
            pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(g)->FillRect(dxAlias, num, w, num10); });
            num += num10;
            num7 = num7 + num4;
            num8 = num8 + num5;
            num9 = num9 + num6;
        }
    }
}

// M:system.form.BillingForm.Comma(System.Int64)
pls::cs::String BillingForm::Comma(pls::cs::Int64 value) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.Comma(System.Int64)", game);
    {
        bool flag = (value < pls::cs::cast_integral<pls::cs::Int64>(0));
        if (flag) {
            value = -value;
        }
        pls::cs::String str = pls::cs::String::concat(pls::cs::String(u""), integer_string(value));
        pls::cs::String text = pls::cs::String(u"");
        pls::cs::Int32 num = 0;
        pls::cs::Int32 num2 = kl_lang::StringEx::Length(str) - 1;
        while (num2 >= 0) {
            if (num > 0 && num % 3 == 0) {
                text = pls::cs::String::concat(char_string(u','), text);
            }
            text = pls::cs::String::concat(char_string(kl_lang::StringEx::CharAt(str, num2)), text);
            --num2;
            ++num;
        }
        if (flag) {
            text = pls::cs::String::concat(literal(u"-"), text);
        }
        return text;
    }
}

// M:system.form.BillingForm.DrawAdOffButtoan(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IntArray BillingForm::DrawAdOffButtoan(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 dx,
                                       pls::cs::Int32 dy, pls::cs::Int32 dw, pls::cs::Int32 dh,
                                       pls::cs::Int32 frame) {
    BillingForm::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.BillingForm.DrawAdOffButtoan(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        try {
            BillingForm::LoadResource();
            IntArray sprite =
                require(require(BillingForm::resBilling_())->seb.get_Item(10))->GetSprite(frame, 0);
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(BillingForm::resBilling_())->img.get_Item(sprite[1]);
                    pls::cs::Int32 cs_arg5 = sprite[2];
                    pls::cs::Int32 cs_arg6 = sprite[3];
                    pls::cs::Int32 cs_arg7 = sprite[4];
                    pls::cs::Int32 cs_arg8 = sprite[5];
                    require(g)->DrawScaledImage(cs_arg0, dx, dy, dw, dh, cs_arg5, cs_arg6, cs_arg7, cs_arg8);
                }());
            });
            IntArray array = BillingForm::drawAdOffButtoan_result();
            array[0] = dx;
            array[1] = dy;
            array[2] = dw;
            array[3] = dh;
            return array;
        } catch (const pls::cs::Exception& cs_caught_239) {
            pls::cs::capture_exception(cs_caught_239);
            {
                return IntArray{};
            }
        }
    }
}

// M:system.form.BillingForm.GetHashCode
std::int32_t BillingForm::GetHashCode() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.BillingForm.GetHashCode", game);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));
                return require(cs_receiver)->pls::cs::Object::GetHashCode();
            }());
        });
    }
}
} // namespace system::form
}
