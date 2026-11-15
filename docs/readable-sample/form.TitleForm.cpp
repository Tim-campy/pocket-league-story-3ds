// GENERATED (readable mode) by translator/Translator.cs from the reconstructed C#. Do not edit.
#include "cfg.MyConfig.hpp"
#include "data.PlayerData.hpp"
#include "data.TeamData.hpp"
#include "form.BootForm.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.RankForm.hpp"
#include "form.SubForm.hpp"
#include "form.TitleForm.hpp"
#include "game.GameUtil.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.ByteArrayOutputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JLong.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.ui.TextFormat.hpp"
#include "kairo.unity.util.Language.hpp"
#include "main.AppData.hpp"
#include "surface.GamePad.hpp"
#include "surface.GameView.hpp"
#include "system.form.LanguageForm.hpp"
#include "generated/java.util.JTool_templates.hpp"

namespace pls::game {
namespace form {

void TitleForm::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    MyFormBase::trace_edges(visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(resTitle_, visitor);
    pls::cs::trace_value(state_, visitor);
    pls::cs::trace_value(selMenu_, visitor);
    pls::cs::trace_value(titleY_, visitor);
    pls::cs::trace_value(titleFrame_, visitor);
    pls::cs::trace_value(POUND_PRESS_CNT, visitor);
    pls::cs::trace_value(STAR, visitor);
    pls::cs::trace_value(selectSaveType_, visitor);
    pls::cs::trace_value(selectSave_, visitor);
    pls::cs::trace_value(currentSave_, visitor);
    pls::cs::trace_value(newGameName_, visitor);
    pls::cs::trace_value(newGameFrame1_, visitor);
    pls::cs::trace_value(newGameFrame2_, visitor);
    pls::cs::trace_value(frame_, visitor);
    pls::cs::trace_value(x_, visitor);
    pls::cs::trace_value(y_, visitor);
    pls::cs::trace_value(time_, visitor);
    pls::cs::trace_value(ta_data, visitor);
    pls::cs::trace_value(APPEAR_TIME, visitor);
    pls::cs::trace_value(apeear_cnt, visitor);
    pls::cs::trace_value(zsort_mhobj, visitor);
    pls::cs::trace_value(kairoAdClickNum_, visitor);
}

void TitleForm::release_edges() {
    MyFormBase::release_edges();
    pls::cs::release_value(udat_);
    pls::cs::release_value(resTitle_);
    pls::cs::release_value(state_);
    pls::cs::release_value(selMenu_);
    pls::cs::release_value(titleY_);
    pls::cs::release_value(titleFrame_);
    pls::cs::release_value(POUND_PRESS_CNT);
    pls::cs::release_value(STAR);
    pls::cs::release_value(selectSaveType_);
    pls::cs::release_value(selectSave_);
    pls::cs::release_value(currentSave_);
    pls::cs::release_value(newGameName_);
    pls::cs::release_value(newGameFrame1_);
    pls::cs::release_value(newGameFrame2_);
    pls::cs::release_value(frame_);
    pls::cs::release_value(x_);
    pls::cs::release_value(y_);
    pls::cs::release_value(time_);
    pls::cs::release_value(ta_data);
    pls::cs::release_value(APPEAR_TIME);
    pls::cs::release_value(apeear_cnt);
    pls::cs::release_value(zsort_mhobj);
    pls::cs::release_value(kairoAdClickNum_);
}

void TitleForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    TitleForm::Draw(pls::cs::static_pointer_cast<TitleForm>(shared_from_this()), g);
}

bool TitleForm::Finish() {
    return TitleForm::Finish(pls::cs::static_pointer_cast<TitleForm>(shared_from_this()));
}

std::int32_t TitleForm::GetHashCode() {
    return TitleForm::GetHashCode(pls::cs::static_pointer_cast<TitleForm>(shared_from_this()));
}

bool TitleForm::Init() {
    return TitleForm::Init(pls::cs::static_pointer_cast<TitleForm>(shared_from_this()));
}

bool TitleForm::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    return TitleForm::OnTouchEvent(pls::cs::static_pointer_cast<TitleForm>(shared_from_this()), e);
}

bool TitleForm::Resume() {
    return TitleForm::Resume(pls::cs::static_pointer_cast<TitleForm>(shared_from_this()));
}

void TitleForm::SetTouchValue(std::int32_t type, std::int32_t value) {
    TitleForm::SetTouchValue(pls::cs::static_pointer_cast<TitleForm>(shared_from_this()), type, value);
}

pls::cs::String TitleForm::ToString() {
    return TitleForm::ToString(pls::cs::static_pointer_cast<TitleForm>(shared_from_this()));
}

bool TitleForm::Update() {
    return TitleForm::Update(pls::cs::static_pointer_cast<TitleForm>(shared_from_this()));
}

static pls::cs::Array<pls::cs::Array<std::int32_t>> TitleForm_IMG_SL_storage{};

static pls::cs::String TitleForm_kairoAdUrl_jp_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> TitleForm_softLabels__storage{};

static pls::cs::Array<std::int32_t> TitleForm_title_anime_storage{};

static pls::cs::Array<std::int32_t> TitleForm_TITLE_GUEST_storage{};

void TitleForm::ensure_initialized() {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(TitleForm_IMG_SL_storage, visitor);
        pls::cs::trace_value(TitleForm_kairoAdUrl_jp_storage, visitor);
        pls::cs::trace_value(TitleForm_softLabels__storage, visitor);
        pls::cs::trace_value(TitleForm_title_anime_storage, visitor);
        pls::cs::trace_value(TitleForm_TITLE_GUEST_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("form.TitleForm", []() {
        TitleForm_title_anime_storage =
            pls::cs::evaluate_type_initializer_field("F:form.TitleForm.title_anime", [&]() {
                return pls::assets::baked_array<std::int32_t>(
                    "cf56a59247f419c588a25431a42a85b144ae6cf64fd8e8395eec1827f90533c9");
            });
        TitleForm_softLabels__storage =
            pls::cs::evaluate_type_initializer_field("F:form.TitleForm.softLabels_", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::assets::baked_array<std::int32_t>(
                         "c662065fee5a5475251bd8b1ba442ff76653f7f5e3271db538de097ae72d1d17"),
                     pls::assets::baked_array<std::int32_t>(
                         "da643cad8c8c3e65f84a7dbae09241c6a8bbae05e77b6078fa11ae95119a407a")});
            });
        TitleForm_IMG_SL_storage = pls::cs::evaluate_type_initializer_field("F:form.TitleForm.IMG_SL", [&]() {
            return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                {pls::assets::baked_array<std::int32_t>(
                     "13ddfb915f9b2321e37976a00843a6279c2f817d4b6c28bfd2b7889d79885543"),
                 pls::assets::baked_array<std::int32_t>(
                     "e7bc1f3da378084f602729691642c9848a95009f08ce04681f68d259668fc4ae")});
        });
        TitleForm_TITLE_GUEST_storage =
            pls::cs::evaluate_type_initializer_field("F:form.TitleForm.TITLE_GUEST", [&]() {
                return pls::assets::baked_array<std::int32_t>(
                    "dc17851231e2e3745ddae750e14f07c0e5b510387b124af7c71b91a81e8750eb");
            });
        TitleForm_kairoAdUrl_jp_storage =
            pls::cs::evaluate_type_initializer_field("F:form.TitleForm.kairoAdUrl_jp", [&]() {
                return literal(
                    u"market://"
                    u"details?id=net.kairosoft.android.soccer2_ja&referrer=utm_source%3Dappli%26utm_medium%"
                    u"3Dhouse_ad%26utm_content%3soccer_ja_title%26utm_campaign%3Dbanner");
            });
    });
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& TitleForm::IMG_SL() {
    TitleForm::ensure_initialized();
    return TitleForm_IMG_SL_storage;
}

pls::cs::String& TitleForm::kairoAdUrl_jp() {
    TitleForm::ensure_initialized();
    return TitleForm_kairoAdUrl_jp_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& TitleForm::softLabels_() {
    TitleForm::ensure_initialized();
    return TitleForm_softLabels__storage;
}

pls::cs::Array<std::int32_t>& TitleForm::title_anime() {
    TitleForm::ensure_initialized();
    return TitleForm_title_anime_storage;
}

pls::cs::Array<std::int32_t>& TitleForm::TITLE_GUEST() {
    TitleForm::ensure_initialized();
    return TitleForm_TITLE_GUEST_storage;
}

// M:form.TitleForm._draw(kairo.unity.ui.Graphics)
void TitleForm::_draw(pls::cs::Ref<TitleForm> self, pls::cs::Ref<pls::kairo::Graphics> g) {
    TitleForm::ensure_initialized();

    require(self);

    pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
    TitleForm::SmartBeginPaint(self, g);
    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
        pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(self->resTitle_)->img.get_Item(0);
        float cs_arg1 = static_cast<float>(0.0f);
        float cs_arg2 = static_cast<float>(([&]() -> std::int32_t {
            auto cs_left = kairo::unity::surface::SurfaceBase::GetGameHeight(require(instance));
            auto cs_right = require(require(self->resTitle_)->img.get_Item(0))->GetHeight();
            return pls::cs::sub_i32(cs_left, cs_right);
        }()));
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2);
    }());
    std::int32_t num20 = std::int32_t{}, num = std::int32_t{}, num2 = std::int32_t{}, num3 = std::int32_t{};
    num20 = ([&]() {
        auto cs_value = ([&]() {
            auto cs_value = ([&]() {
                auto cs_value = 0;
                num3 = cs_value;
                return cs_value;
            }());
            num2 = cs_value;
            return cs_value;
        }());
        num = cs_value;
        return cs_value;
    }());
    TitleForm::Draw_titleAnime(self, g);
    main::AppData::Draw_trophy(require(self->apdat_), g, self->titleFrame_);
    if ([&]() -> bool {
            auto cs_left = self->titleFrame_;
            auto cs_right = TitleForm::title_anime().get_Item(0);
            return (cs_left >= cs_right);
        }()) {
        num3 = -111;
        num = ([&]() -> std::int32_t {
            std::int32_t cs_arg0 = self->titleFrame_;
            std::int32_t cs_arg1 = TitleForm::title_anime().get_Item(0);
            std::int32_t cs_arg2 = pls::cs::sub_i32(TitleForm::title_anime().get_Item(1), 1);
            std::int32_t cs_arg3 = 0;
            std::int32_t cs_arg4 = 134;
            bool cs_arg5 = true;
            return game::GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
        }());
        std::int32_t num4 = 6;
        std::int32_t num5 = ([&]() -> std::int32_t {
            auto cs_left = self->titleFrame_;
            auto cs_right =
                TitleForm::title_anime().get_Item(pls::cs::sub_i32((TitleForm::title_anime()).length(), 1));
            return pls::cs::sub_i32(cs_left, cs_right);
        }());
        std::int32_t num6 = pls::cs::mod_i32(num5, (pls::cs::add_i32(pls::cs::add_i32(num4, num4), 32)));
        std::int32_t num7 = 0;
        if (num6 < num4) {
            num7 = num6;
        } else if (num6 < pls::cs::add_i32(num4, num4)) {
            num7 = pls::cs::sub_i32(pls::cs::add_i32(num4, num4), num6);
        }
        std::int32_t num8 = 0;
        if (num7 > 0) {
            std::int32_t num9 =
                pls::cs::conv_i32(game::GameUtil::SetVStop(static_cast<float>(-6000.0f), num4));
            std::int32_t num10 =
                pls::cs::conv_i32(game::GameUtil::SetAStop(static_cast<float>(-6000.0f), num4));
            num8 = pls::cs::add_i32(
                pls::cs::mul_i32(num9, num7),
                pls::cs::div_i32(pls::cs::mul_i32(pls::cs::mul_i32(num10, num7), (pls::cs::add_i32(num7, 1))),
                                 2));
        }
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(self->resTitle_)->img.get_Item(2);
            float cs_arg1 = static_cast<float>(0.0f);
            float cs_arg2 = static_cast<float>(
                pls::cs::add_i32(pls::cs::add_i32(num3, num), pls::cs::div_i32(num8, 1000)));
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2);
        }());
        if ((((!(MyFormBase::Jp())) && !is_null(kairo::unity::util::Language::GetLanguageCode())) &&
             (kairo::unity::util::Language::GetLanguageCode() != literal(u"en-US"))) &&
            (!(pls::cs::culture_starts_with(kairo::unity::util::Language::GetLanguageCode(),
                                            literal(u"*"))))) {
            pls::cs::String text = MyFormBase::LT(literal(
                u"\u30B5\u30C3\u30AB\u30FC\u30AF\u30E9\u30D6\u7269\u8A9E") /* "サッカークラブ物語" */);
            require(g)->PushFont(9);
            std::int32_t num11 = main::AppData::ClampMin(require(g)->StringWidth(text), 80);
            std::int32_t num12 = pls::cs::sub_i32(pls::cs::add_i32(pls::cs::add_i32(num3, num), 120), 2);
            require(g)->SetColor(0, 0, 0, 96);
            ([&]() -> void {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                float cs_arg0 = static_cast<float>(
                    pls::cs::sub_i32(pls::cs::sub_i32(120, pls::cs::div_i32(num11, 2)), 1));
                float cs_arg1 = static_cast<float>(
                    (static_cast<double>(static_cast<float>(num12)) - static_cast<double>(0.5f)));
                float cs_arg2 = static_cast<float>(pls::cs::add_i32(num11, 2));
                float cs_arg3 = static_cast<float>(
                    pls::cs::add_i32(require(require(g)->GetFont(static_cast<pls::cs::Ref<pls::kairo::Font>>(
                                                 pls::cs::Ref<pls::kairo::Font>{})))
                                         ->GetHeight(),
                                     1));
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->FillRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }());
            require(g)->SetColor(255, 255, 255);
            require(g)->DrawString(text, static_cast<float>(120.0f), static_cast<float>(num12), 2);
            require(g)->PopFont();
        }
    }
    if (((MyFormBase::Jp() && (!(cfg::MyConfig::SMART_PASS()))) && (!(cfg::MyConfig::AMAZON()))) &&
        (self->kairoAdClickNum_ < 2)) {
        std::int32_t num13 = 60;
        num2 = -6;
        num3 = pls::cs::sub_i32(
            pls::cs::sub_i32(
                pls::cs::sub_i32(
                    pls::cs::sub_i32(kairo::unity::surface::SurfaceBase::GetGameHeight(require(instance)),
                                     372),
                    num13),
                3),
            9);
        num = pls::cs::add_i32(121, num13);
        std::int32_t num14 = 0;
        if (MyFormBase::En()) {
            num14 = -8;
        }
        num14 = pls::cs::add_i32(
            num14, pls::cs::sub_i32(require(require(self->resTitle_)->img.get_Item(2))->GetHeight(), 5));
        if (MyFormBase::En()) {
            num14 = pls::cs::add_i32(num14, -8);
        }
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(self->resTitle_)->img.get_Item(3);
            float cs_arg1 = static_cast<float>(num2);
            float cs_arg2 = static_cast<float>(pls::cs::add_i32(pls::cs::add_i32(num3, num), num14));
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2);
        }());
        surface::GameView::AddTouch(
            g, 27, num2, pls::cs::add_i32(pls::cs::add_i32(num3, num), num14), 240, 63, 1441792,
            kairo::unity::surface::TouchOption::Margin(require(kairo::unity::surface::TouchOption::Create()),
                                                       -15, -15, 0, 0));
        std::int32_t num15 = pls::cs::add_i32(pls::cs::add_i32(pls::cs::add_i32(num2, 180), 20), 3);
        std::int32_t num16 =
            pls::cs::add_i32(pls::cs::sub_i32(pls::cs::add_i32(pls::cs::add_i32(num3, num), num14), 12), 9);
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(self->resTitle_)->img.get_Item(4);
            float cs_arg1 = static_cast<float>(num15);
            float cs_arg2 = static_cast<float>(num16);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2);
        }());
        surface::GameView::AddTouch(
            g, 27, num15, num16, 30, 30, 1507328,
            kairo::unity::surface::TouchOption::Margin(require(kairo::unity::surface::TouchOption::Create()),
                                                       10, 10, 10, 10));
    }
    if (self->state_ == 0) {
        pls::cs::Array<pls::cs::String> array = pls::cs::Array<pls::cs::String>{};
        if (!((generated::kairo::common::cfg::Config::TRIAL_VERSION()))) {
            array = pls::cs::Array<pls::cs::String>::from(
                {literal(u"\u30B9\u30BF\u30FC\u30C8") /* "スタート" */,
                 literal(u"\u30CF\u30A4\u30B9\u30B3\u30A2") /* "ハイスコア" */});
        } else {
            array = pls::cs::Array<pls::cs::String>::from(
                {literal(u"\u30B9\u30BF\u30FC\u30C8") /* "スタート" */,
                 literal(u"\u6B63\u5F0F\u7248\u3078") /* "正式版へ" */});
        }
        if (self->state_ == 0) {
            std::int32_t num17 =
                pls::cs::sub_i32(kairo::unity::surface::SurfaceBase::GetGameHeight(require(instance)), 70);
            std::int32_t num18 = pls::cs::add_i32(pls::cs::sub_i32(num17, 14), 2);
            std::int32_t num19 = 22;
            num20 = 67;
            ([&]() -> void {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(self->resTitle_)->img.get_Item(1);
                float cs_arg1 = static_cast<float>(num20);
                float cs_arg2 = static_cast<float>(pls::cs::sub_i32(num18, 7));
                std::int32_t cs_arg3 = 0;
                std::int32_t cs_arg4 = 0;
                std::int32_t cs_arg5 = 106;
                std::int32_t cs_arg6 = 31;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
            }());
            ([&]() -> void {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(self->resTitle_)->img.get_Item(1);
                float cs_arg1 = static_cast<float>(num20);
                float cs_arg2 = static_cast<float>(pls::cs::add_i32(num18, 24));
                std::int32_t cs_arg3 = 0;
                std::int32_t cs_arg4 = 36;
                std::int32_t cs_arg5 = 106;
                std::int32_t cs_arg6 = 25;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
            }());
            std::int32_t num21 = 94;
            std::int32_t num22 = 0;
            for (std::int32_t i = 0; i < (array).length(); i = pls::cs::add_i32(i, 1)) {
                std::int32_t num23 = 120;
                if (i == self->selMenu_) {
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(44, 138, 255);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->SetColor(cs_arg0);
                    }());
                    require(g)->FillRect(
                        static_cast<float>(pls::cs::sub_i32(num23, pls::cs::div_i32(num21, 2))),
                        static_cast<float>(
                            pls::cs::add_i32(pls::cs::add_i32(num18, pls::cs::mul_i32(num19, i)), 4)),
                        static_cast<float>(num21), static_cast<float>(16.0f));
                    if ((generated::kairo::common::cfg::Config::TRIAL_VERSION()) &&
                        (kairo::unity::util::Language::English())) {

                    } else {
                        ([&]() -> void {
                            auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(self->apdat_);
                            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                            std::int32_t cs_arg1 = pls::cs::sub_i32(79, num22);
                            std::int32_t cs_arg2 =
                                pls::cs::add_i32(pls::cs::add_i32(num18, pls::cs::mul_i32(num19, i)), 18);
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(require(self->apdat_)->resCom2_)->seb.get_Item(0);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(require(self->apdat_)->resCom2_)->img.get_Item(2);
                            std::int32_t cs_arg5 = 0;
                            if (!cs_receiver) {
                                throw pls::cs::NullReferenceException();
                            }
                            main::AppData::DrawSeb(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4,
                                                   cs_arg5);
                        }());
                        ([&]() -> void {
                            auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(self->apdat_);
                            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                            std::int32_t cs_arg1 = pls::cs::add_i32(160, num22);
                            std::int32_t cs_arg2 =
                                pls::cs::add_i32(pls::cs::add_i32(num18, pls::cs::mul_i32(num19, i)), 18);
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(require(self->apdat_)->resCom2_)->seb.get_Item(0);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(require(self->apdat_)->resCom2_)->img.get_Item(2);
                            std::int32_t cs_arg5 = 0;
                            if (!cs_receiver) {
                                throw pls::cs::NullReferenceException();
                            }
                            main::AppData::DrawSeb(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4,
                                                   cs_arg5);
                        }());
                    }
                }
                if (i == self->selMenu_) {
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 255, 224);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->SetColor(cs_arg0);
                    }());
                } else {
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 255, 224);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->SetColor(cs_arg0);
                    }());
                }
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::String cs_arg0 = array.get_Item(i);
                    float cs_arg1 = static_cast<float>(num23);
                    float cs_arg2 = static_cast<float>(
                        pls::cs::add_i32(pls::cs::add_i32(num18, pls::cs::mul_i32(num19, i)), 6));
                    std::int32_t cs_arg3 = 2;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawString(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }());
                surface::GameView::AddTouch(
                    g, 0, pls::cs::sub_i32(num23, 50),
                    pls::cs::add_i32(pls::cs::add_i32(num18, pls::cs::mul_i32(num19, i)), 1), 100, num19, i);
            }
        }
        if ((generated::kairo::common::cfg::Config::DEBUG() &&
             generated::kairo::common::cfg::Config::SHOW_DEBUG()) &&
            (!(require(self->formMan_)->IsCapturing()))) {
            pls::cs::String text2 = kairo::unity::util::Language::GetLanguageCode();
            if (is_null(text2)) {
                text2 = literal(u" null ");
            }
            ([&]() -> void {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 0, 0);
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->SetColor(cs_arg0);
            }());
            require(g)->DrawString(
                pls::cs::String::concat(pls::cs::String::concat(literal(u"DEBUG MODE["), text2),
                                        literal(u"]")),
                static_cast<float>(2.0f), static_cast<float>(2.0f));
            ([&]() -> void {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                pls::cs::String cs_arg0 = literal(u"2017/02/03 12:01:57");
                float cs_arg1 = static_cast<float>(2.0f);
                float cs_arg2 = static_cast<float>(18.0f);
                std::int32_t cs_arg3 = pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
                std::int32_t cs_arg4 = 1;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                kairo::unity::ui::Graphics::DrawStringBold(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3,
                                                           cs_arg4);
            }());
        }
    }
    if (self->STAR) {
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 0, 0);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetColor(cs_arg0);
        }());
        require(g)->DrawString(literal(u"\u2606") /* "☆" */, static_cast<float>(2.0f),
                               static_cast<float>(16.0f));
    }
    if ((self->state_ == 1) && ((main::AppData::IsTopForm(require(self->apdat_), self) ||
                                 (((require(require(self->formMan_)->GetTopForm())->GetId() == 4) &&
                                   SubForm::IsMenu(require((pls::cs::unbox<pls::cs::Ref<SubForm>>(
                                       pls::cs::box(require(self->formMan_)->GetTopForm())))))))))) {
        std::int32_t num24 = pls::cs::div_i32(
            (pls::cs::sub_i32(kairo::unity::surface::SurfaceBase::GetGameHeight(require(instance)), 240)), 2);
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(self->apdat_);
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            std::int32_t cs_arg1 = 198;
            std::int32_t cs_arg2 = 146;
            std::int32_t cs_arg3 = num24;
            pls::cs::String cs_arg4 = MyFormBase::LT_2(
                literal(u"\u30BB\u30FC\u30D6\u30B9\u30ED\u30C3\u30C8 <0>/2") /* "セーブスロット <0>/2" */,
                pls::cs::cast_integral<std::int64_t>(pls::cs::add_i32(self->selectSave_, 1)));
            std::int32_t cs_arg5 = -12;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            main::AppData::DrawWindow(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
        }());
        if (MyFormBase::Active(self)) {
            ([&]() -> pls::cs::Ref<kairo::unity::surface::TouchComponent> {
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                std::int32_t cs_arg1 = 1;
                std::int32_t cs_arg2 =
                    pls::cs::sub_i32(34, pls::cs::div_i32(pls::cs::mod_i32(self->frame_, 20), 5));
                std::int32_t cs_arg3 = pls::cs::add_i32(54, num24);
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 =
                    require(require(self->apdat_)->resCom2_)->seb.get_Item(24);
                std::int32_t cs_arg5 = 0;
                std::int32_t cs_arg6 = 16;
                return surface::GameView::AddTouch_2(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                     cs_arg6);
            }());
            ([&]() -> pls::cs::Ref<kairo::unity::surface::TouchComponent> {
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                std::int32_t cs_arg1 = 1;
                std::int32_t cs_arg2 =
                    pls::cs::add_i32(203, pls::cs::div_i32(pls::cs::mod_i32(self->frame_, 20), 5));
                std::int32_t cs_arg3 = pls::cs::add_i32(54, num24);
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 =
                    require(require(self->apdat_)->resCom2_)->seb.get_Item(24);
                std::int32_t cs_arg5 = 1;
                std::int32_t cs_arg6 = 18;
                return surface::GameView::AddTouch_2(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5,
                                                     cs_arg6);
            }());
        }
        std::int32_t num25 = pls::cs::add_i32(pls::cs::add_i32(num24, 74), 6);
        require(g)->SetColor(60, 100, 200);
        std::int32_t dx = 42;
        std::int32_t dx2 = 199;
        std::int32_t num26 = pls::cs::add_i32(93, num24);
        require(g)->ClipRect(static_cast<float>(0.0f), static_cast<float>(pls::cs::sub_i32(num26, 28)),
                             static_cast<float>(240.0f), static_cast<float>(20.0f), true);
        SubForm::Draw_chara(g, 171, 0, 0, self->frame_, dx, num26);
        SubForm::Draw_chara(g, 172, 0, 1, self->frame_, dx2, num26);
        require(g)->PopClip();
        if (self->selectSaveType_ == 0) {
            require(g)->DrawString(
                literal(u"\u4E2D\u65AD\u30C7\u30FC\u30BF\u304B\u3089\u518D\u958B") /* "中断データから再開" */,
                static_cast<float>(120.0f), static_cast<float>(pls::cs::sub_i32(num25, 11)), 2);
        } else {
            require(g)->DrawString(
                literal(u"\u30BB\u30FC\u30D6\u30C7\u30FC\u30BF\u3092\u8AAD\u8FBC") /* "セーブデータを読込" */,
                static_cast<float>(120.0f), static_cast<float>(pls::cs::sub_i32(num25, 11)), 2);
        }
        std::int32_t num27 = 29;
        std::int32_t num28 = 181;
        std::int32_t num29 = 41;
        num25 = pls::cs::add_i32(num25, 4);
        for (std::int32_t j = 0; j < 2; j = pls::cs::add_i32(j, 1)) {
            main::AppData::DrawBox(require(self->apdat_), g, num27, pls::cs::sub_i32(num25, 12),
                                   pls::cs::add_i32(num27, num28),
                                   pls::cs::add_i32(pls::cs::sub_i32(num25, 12), num29));
            std::int32_t num30 =
                require(require(self->apdat_)->sysSave_)
                    ->ints.get_Item(pls::cs::add_i32(((((j == 0)) ? 11 : 6)), self->selectSave_));
            if ((num30 == -1) && (j == 0)) {
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(self->apdat_)->resCom2_)->img.get_Item(193);
                    float cs_arg1 = static_cast<float>(pls::cs::add_i32(
                        pls::cs::add_i32(num27, 10), TitleForm::IMG_SL().get_Item(1).get_Item(0)));
                    float cs_arg2 = static_cast<float>(pls::cs::add_i32(
                        pls::cs::add_i32(num25, 15), TitleForm::IMG_SL().get_Item(1).get_Item(1)));
                    std::int32_t cs_arg3 = TitleForm::IMG_SL().get_Item(1).get_Item(2);
                    std::int32_t cs_arg4 = TitleForm::IMG_SL().get_Item(1).get_Item(3);
                    std::int32_t cs_arg5 = TitleForm::IMG_SL().get_Item(1).get_Item(4);
                    std::int32_t cs_arg6 = TitleForm::IMG_SL().get_Item(1).get_Item(5);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                }());
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->SetColor(cs_arg0);
                }());
                require(g)->DrawString(
                    literal(u"\u4E2D\u65AD\u30C7\u30FC\u30BF\u306A\u3057") /* "中断データなし" */,
                    static_cast<float>(
                        pls::cs::add_i32(pls::cs::add_i32(7, num27), pls::cs::div_i32(num28, 2))),
                    static_cast<float>(pls::cs::add_i32(num25, 15)), 2);
                require(g)->SetRenderMode(1, 128);
                require(g)->SetColor(0, 0, 0);
                require(g)->FillRect(static_cast<float>(num27), static_cast<float>(num25),
                                     static_cast<float>(num28), static_cast<float>(num29));
                require(g)->SetRenderMode();
                if ((self->selectSaveType_ == j) && main::AppData::IsTopForm(require(self->apdat_), self)) {
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<kairo::unity::ui::Seb>>(
                            require(require(self->apdat_)->resCom2_)->seb.get_Item(61));
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        float cs_arg1 = static_cast<float>(
                            pls::cs::sub_i32(pls::cs::add_i32(pls::cs::add_i32(7, num27), num28), 40));
                        float cs_arg2 = static_cast<float>(pls::cs::add_i32(num25, 21));
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                            require(require(self->apdat_)->resCom2_)->img;
                        auto cs_arg4 = -1;
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        kairo::unity::ui::Seb::Draw(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
                    }());
                }
            } else if ((num30 == -1) && (j == 1)) {
                if (self->selectSaveType_ == j) {
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(200, 200, 255);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->SetColor(cs_arg0);
                    }());
                    require(g)->FillRect(
                        static_cast<float>(pls::cs::sub_i32(
                            pls::cs::sub_i32(
                                pls::cs::add_i32(pls::cs::add_i32(7, num27), pls::cs::div_i32(num28, 2)), 36),
                            5)),
                        static_cast<float>(pls::cs::sub_i32(pls::cs::add_i32(num25, 15), 1)),
                        static_cast<float>(82.0f), static_cast<float>(14.0f));
                }
                surface::GameView::AddTouch(g, 3, 0, pls::cs::sub_i32(num25, 5), 240,
                                            pls::cs::add_i32(num29, 10), (131072 | j));
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(self->apdat_)->resCom2_)->img.get_Item(193);
                    float cs_arg1 = static_cast<float>(pls::cs::add_i32(
                        pls::cs::add_i32(num27, 10), TitleForm::IMG_SL().get_Item(0).get_Item(0)));
                    float cs_arg2 = static_cast<float>(pls::cs::add_i32(
                        pls::cs::add_i32(num25, 15), TitleForm::IMG_SL().get_Item(0).get_Item(1)));
                    std::int32_t cs_arg3 = TitleForm::IMG_SL().get_Item(0).get_Item(2);
                    std::int32_t cs_arg4 = TitleForm::IMG_SL().get_Item(0).get_Item(3);
                    std::int32_t cs_arg5 = TitleForm::IMG_SL().get_Item(0).get_Item(4);
                    std::int32_t cs_arg6 = TitleForm::IMG_SL().get_Item(0).get_Item(5);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                }());
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->SetColor(cs_arg0);
                }());
                require(g)->DrawString(literal(u"\u7A7A\u304D\u30B9\u30ED\u30C3\u30C8") /* "空きスロット" */,
                                       static_cast<float>(pls::cs::add_i32(pls::cs::add_i32(7, num27),
                                                                           pls::cs::div_i32(num28, 2))),
                                       static_cast<float>(pls::cs::add_i32(num25, 15)), 2);
                if ((self->selectSaveType_ == j) && main::AppData::IsTopForm(require(self->apdat_), self)) {
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<kairo::unity::ui::Seb>>(
                            require(require(self->apdat_)->resCom2_)->seb.get_Item(61));
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        float cs_arg1 = static_cast<float>(
                            pls::cs::sub_i32(pls::cs::add_i32(pls::cs::add_i32(7, num27), num28), 40));
                        float cs_arg2 = static_cast<float>(pls::cs::add_i32(num25, 21));
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                            require(require(self->apdat_)->resCom2_)->img;
                        auto cs_arg4 = -1;
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        kairo::unity::ui::Seb::Draw(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
                    }());
                }
            } else {
                if (self->selectSaveType_ == j) {
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(200, 200, 255);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->SetColor(cs_arg0);
                    }());
                    require(g)->FillRect(
                        static_cast<float>(pls::cs::sub_i32(
                            pls::cs::sub_i32(pls::cs::add_i32(pls::cs::add_i32(7, num27), 90), 42), 5)),
                        static_cast<float>(pls::cs::sub_i32(pls::cs::add_i32(num25, 7), 1)),
                        static_cast<float>(94.0f), static_cast<float>(14.0f));
                }
                surface::GameView::AddTouch(g, 3, 0, pls::cs::sub_i32(num25, 5), 240,
                                            pls::cs::add_i32(num29, 10), (131072 | j));
                std::int32_t num31 = pls::cs::sub_i32(1, j);
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(self->apdat_)->resCom2_)->img.get_Item(193);
                    float cs_arg1 = static_cast<float>(pls::cs::add_i32(
                        pls::cs::add_i32(num27, 10), TitleForm::IMG_SL().get_Item(num31).get_Item(0)));
                    float cs_arg2 = static_cast<float>(pls::cs::add_i32(
                        pls::cs::add_i32(num25, 6), TitleForm::IMG_SL().get_Item(num31).get_Item(1)));
                    std::int32_t cs_arg3 = TitleForm::IMG_SL().get_Item(num31).get_Item(2);
                    std::int32_t cs_arg4 = TitleForm::IMG_SL().get_Item(num31).get_Item(3);
                    std::int32_t cs_arg5 = TitleForm::IMG_SL().get_Item(num31).get_Item(4);
                    std::int32_t cs_arg6 = TitleForm::IMG_SL().get_Item(num31).get_Item(5);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                }());
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->SetColor(cs_arg0);
                }());
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::String cs_arg0 =
                        require(require(self->apdat_)->sysSave_)
                            ->strs.get_Item(pls::cs::add_i32(((((j == 0)) ? 6 : 2)), self->selectSave_));
                    float cs_arg1 = static_cast<float>(pls::cs::add_i32(pls::cs::add_i32(7, num27), 90));
                    float cs_arg2 = static_cast<float>(pls::cs::add_i32(num25, 7));
                    std::int32_t cs_arg3 = 2;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawString(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }());
                std::int32_t num32 = pls::cs::div_i32(num30, 10000);
                std::int32_t num33 = pls::cs::div_i32(pls::cs::mod_i32(num30, 10000), 100);
                std::int32_t num34 = pls::cs::mod_i32(num30, 100);
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->SetColor(cs_arg0);
                }());
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 =
                        MyFormBase::LF(self, literal(u"10,,+2"));
                    pls::cs::String cs_arg1 = MyFormBase::LT(
                        literal(u"<0>\u5E74<1>\u6708<2>\u9031") /* "<0>年<1>月<2>週" */, ([&]() {
                            auto cs_left = pls::cs::String::concat(
                                ([&]() {
                                    auto cs_left = pls::cs::String::concat(
                                        generated::kairo::unity::util::StringUtil::FormatString(
                                            generated::java::lang::JString::ValueOf_2(
                                                pls::cs::add_i32(num32, 1)),
                                            2, u' '),
                                        literal(u"\t"));
                                    auto cs_right = generated::kairo::unity::util::StringUtil::FormatString(
                                        generated::java::lang::JString::ValueOf_2(pls::cs::add_i32(num33, 1)),
                                        2, u' ', false);
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()),
                                literal(u"\t"));
                            auto cs_right =
                                generated::java::lang::JString::ValueOf_2(pls::cs::add_i32(num34, 1));
                            return pls::cs::String::concat(cs_left, cs_right);
                        }()));
                    float cs_arg2 = static_cast<float>(
                        pls::cs::sub_i32(pls::cs::add_i32(pls::cs::add_i32(7, num27), 70), 72));
                    float cs_arg3 = static_cast<float>(pls::cs::add_i32(num25, 24));
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    kairo::unity::ui::Graphics::DrawString_2(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }());
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::String cs_arg0 =
                        MyFormBase::YEN(literal(u"\u4E07\u5186") /* "万円" */,
                                        generated::java::lang::JLong::ParseLong(
                                            require(require(self->apdat_)->sysSave_)
                                                ->strs.get_Item(pls::cs::add_i32(((((j == 0)) ? 8 : 4)),
                                                                                 self->selectSave_))));
                    float cs_arg1 = static_cast<float>(pls::cs::add_i32(num27, 172));
                    float cs_arg2 = static_cast<float>(pls::cs::add_i32(num25, 24));
                    std::int32_t cs_arg3 = 4;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawString(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }());
                if ((self->selectSaveType_ == j) && main::AppData::IsTopForm(require(self->apdat_), self)) {
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<kairo::unity::ui::Seb>>(
                            require(require(self->apdat_)->resCom2_)->seb.get_Item(61));
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        float cs_arg1 = static_cast<float>(pls::cs::add_i32(pls::cs::add_i32(7, num27), 145));
                        float cs_arg2 = static_cast<float>(pls::cs::add_i32(num25, 12));
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                            require(require(self->apdat_)->resCom2_)->img;
                        auto cs_arg4 = -1;
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        kairo::unity::ui::Seb::Draw(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
                    }());
                }
            }
            num25 = pls::cs::add_i32(num25, 47);
        }
        num25 = pls::cs::sub_i32(num25, 2);
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(125, 158, 116);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetColor(cs_arg0);
        }());
        require(g)->DrawString(literal(u"\u30C7\u30FC\u30BF\u3092\u9078\u629E\u3057\u3066\u304F\u3060\u3055"
                                       u"\u3044") /* "データを選択してください" */,
                               static_cast<float>(120.0f), static_cast<float>(num25), 2);
    }
    if (generated::kairo::common::cfg::Config::TRIAL_VERSION()) {
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetColor(cs_arg0);
        }());
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            pls::cs::String cs_arg0 = literal(u"Lite Version");
            float cs_arg1 = static_cast<float>(235.0f);
            float cs_arg2 = static_cast<float>(5.0f);
            std::int32_t cs_arg3 = pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);
            std::int32_t cs_arg4 = 4;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            kairo::unity::ui::Graphics::DrawStringBold(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3,
                                                       cs_arg4);
        }());
    }
    require(g)->SetOrigin(0, 0);
    if (!(generated::kairo::unity::util::Language::Japanese())) {
        system::form::LanguageForm::DrawButton(
            g, ([&]() {
                struct Lambda_717_32 : pls::cs::Object {
                    pls::cs::Ref<TitleForm> self;
                    void trace_edges(const pls::cs::EdgeVisitor& v) const override {
                        pls::cs::Object::trace_edges(v);
                        pls::cs::trace_value(self, v);
                    }
                    void release_edges() override {
                        pls::cs::Object::release_edges();
                        pls::cs::clear_ref(self);
                    }
                    void Invoke() {
                        {
                            require(self->formMan_)
                                ->ChangeCurrentForm(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(
                                    require(self->apdat_)->frmBoot_));
                        }
                    }
                };
                auto cs_closure = pls::cs::make_ref<Lambda_717_32>();
                cs_closure->self = self;
                return pls::cs::Delegate<void()>::bind_identity(
                    cs_closure, pls::cs::raw(self),
                    std::string("M:form.TitleForm._draw(kairo.unity.ui.Graphics):20130"),
                    [weak = pls::cs::DelegateCapture<Lambda_717_32>(cs_closure)]() -> void {
                        auto target = weak.lock();
                        if (!target) {
                            throw pls::cs::NullReferenceException();
                        }
                        target->Invoke();
                    });
            }()),
            20);
    }
}

// M:form.TitleForm.#ctor
pls::cs::Ref<TitleForm> TitleForm::create() {
    TitleForm::ensure_initialized();
    auto self = pls::cs::make_ref<TitleForm>();
    TitleForm::create_init(self);
    return self;
}

void TitleForm::create_init(pls::cs::Ref<TitleForm> self) {
    self->x_ = 60;
    self->y_ = 60;
    self->ta_data = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::assets::baked_array<std::int32_t>(
            "59c4c80f6eaa92e857040fa91fa7e8adb436ca9e20cb9bc29053c5bbfb398d92"));
    self->zsort_mhobj = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::assets::baked_array<std::int32_t>(
            "5b4798d0302196c0d4e3de595bca4d9f7a575d6fa3207c703c1cd79575503f1b"));
    ([&]() {
        std::int32_t cs_arg0 = 1;
        MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), cs_arg0);
    }());
}

// M:form.TitleForm.ChangeState(System.Int32)
void TitleForm::ChangeState(pls::cs::Ref<TitleForm> self, std::int32_t state) {
    TitleForm::ensure_initialized();

    require(self);

    pls::cs::Array<std::int32_t> array = TitleForm::softLabels_().get_Item(state);
    if ([&]() {
            auto cs_left = pls::cs::box(array);
            auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{});
            return cs_left != cs_right;
        }()) {
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self);
            pls::cs::String cs_arg0 = main::AppData::softLabels_().get_Item(array.get_Item(0));
            pls::cs::String cs_arg1 = main::AppData::softLabels_().get_Item(array.get_Item(1));
            auto cs_arg2 = pls::cs::String{};
            auto cs_arg3 = pls::cs::String{};
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetSoftLabel(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
        }());
    }
    self->state_ = state;
}

// M:form.TitleForm.ContinueGame
void TitleForm::ContinueGame(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);

    if (require(require(self->apdat_)->sysSave_)
            ->ints.get_Item(
                pls::cs::add_i32(((((self->selectSaveType_ == 0)) ? 11 : 6)), self->selectSave_)) != -1) {
        try {
            ([&]() -> void {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(self->canvas_);
                pls::cs::String cs_arg0 = pls::cs::String(u"");
                pls::cs::String cs_arg1 = pls::cs::String(u"");
                auto cs_arg2 = pls::cs::String{};
                auto cs_arg3 = pls::cs::String{};
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->SetSoftLabel(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }());
            require(self->canvas_)->UpdateSoftLabel();
            main::AppData::LoadGame(require(self->apdat_), self->selectSave_, (self->selectSaveType_ == 0));
            require(self->formMan_)
                ->ChangeCurrentForm(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(require(self->apdat_)->frmGame_));
        } catch (const pls::cs::Exception& cs_caught_123) {
            auto cs_exception_123 = pls::cs::capture_exception(cs_caught_123);
            if (pls::cs::exception_is(cs_exception_123, "System.Exception")) {
                auto t = cs_exception_123;
                {
                    require(self->apdat_)->save_ = pls::cs::Ref<generated::kairo::unity::util::Property>{};
                    if (generated::kairo::common::cfg::Config::PRINT()) {
                        generated::kairo::unity::util::Log::Info(t);
                    }
                    ([&]() -> bool {
                        auto cs_receiver =
                            static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(self->formMan_);
                        pls::cs::Ref<pls::kairo::FormBase> cs_arg0 =
                            SubForm::MakeDialog(literal(u"\u30ED\u30FC\u30C9\u306B\u5931\u6557\u3057\u307E"
                                                        u"\u3057\u305F") /* "ロードに失敗しました" */);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        return cs_receiver->Push(cs_arg0);
                    }());
                }
            } else {
                throw;
            }
        }
    } else {
        ([&]() -> bool {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(self->formMan_);
            pls::cs::Ref<pls::kairo::FormBase> cs_arg0 =
                SubForm::MakeDialog(literal(u"\u30BB\u30FC\u30D6\u30C7\u30FC\u30BF\u304C\u3042\u308A\u307E"
                                            u"\u305B\u3093") /* "セーブデータがありません" */);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            return cs_receiver->Push(cs_arg0);
        }());
    }
}

// M:form.TitleForm.Draw_titleAnime(kairo.unity.ui.Graphics)
void TitleForm::Draw_titleAnime(pls::cs::Ref<TitleForm> self, pls::cs::Ref<pls::kairo::Graphics> g) {
    TitleForm::ensure_initialized();

    require(self);

    for (std::int32_t i = 0; i < (self->ta_data).length(); i = pls::cs::add_i32(i, 1)) {
        self->zsort_mhobj.get_Item(i).set_Item(0, i);
        self->zsort_mhobj.get_Item(i).set_Item(1, self->ta_data.get_Item(i).get_Item(3));
    }
    for (std::int32_t j = 0; j < pls::cs::sub_i32((self->zsort_mhobj).length(), 1);
         j = pls::cs::add_i32(j, 1)) {
        for (std::int32_t num = pls::cs::sub_i32((self->zsort_mhobj).length(), 1); num > j;
             num = pls::cs::sub_i32(num, 1)) {
            if ([&]() -> bool {
                    auto cs_left = self->zsort_mhobj.get_Item(j).get_Item(1);
                    auto cs_right = self->zsort_mhobj.get_Item(num).get_Item(1);
                    return (cs_left > cs_right);
                }()) {
                std::int32_t num2 = self->zsort_mhobj.get_Item(num).get_Item(1);
                self->zsort_mhobj.get_Item(num).set_Item(1, self->zsort_mhobj.get_Item(j).get_Item(1));
                self->zsort_mhobj.get_Item(j).set_Item(1, num2);
                num2 = self->zsort_mhobj.get_Item(num).get_Item(0);
                self->zsort_mhobj.get_Item(num).set_Item(0, self->zsort_mhobj.get_Item(j).get_Item(0));
                self->zsort_mhobj.get_Item(j).set_Item(0, num2);
            }
        }
    }
    std::int32_t num3 =
        pls::cs::sub_i32(kairo::unity::surface::SurfaceBase::GetGameHeight(require(self->view_)), 240);
    for (std::int32_t k = 0; k < (self->zsort_mhobj).length(); k = pls::cs::add_i32(k, 1)) {
        std::int32_t num4 = self->zsort_mhobj.get_Item(k).get_Item(0);
        if (self->ta_data.get_Item(num4).get_Item(0) == 0) {
            continue;
        }
        std::int32_t seb = 0;
        std::int32_t frame =
            pls::cs::div_i32(pls::cs::mod_i32(self->ta_data.get_Item(num4).get_Item(5), 20), 5);
        std::int32_t direct = 2;
        if (self->ta_data.get_Item(num4).get_Item(4) == 1) {
            direct = 1;
        }
        pls::cs::Ref<data::PlayerData> playerData =
            require(self->apdat_)->pData_.get_Item(self->ta_data.get_Item(num4).get_Item(1));
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(self->apdat_);
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            std::int32_t cs_arg1 = pls::cs::sub_i32(self->ta_data.get_Item(num4).get_Item(2), 1);
            std::int32_t cs_arg2 =
                pls::cs::add_i32(pls::cs::add_i32(self->ta_data.get_Item(num4).get_Item(3), 1), num3);
            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                require(require(self->apdat_)->resCom2_)->seb.get_Item(0);
            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                require(require(self->apdat_)->resCom2_)->img.get_Item(2);
            std::int32_t cs_arg5 = 4;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            main::AppData::DrawSeb(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
        }());
        game::UserData::SetDispPlayerData(require(self->udat_), seb, require(self->udat_)->selectUniform_,
                                          require(playerData)->faceImg_, frame, direct);
        ([&]() -> void {
            auto cs_receiver = static_cast<pls::cs::Ref<game::UserData>>(self->udat_);
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            std::int32_t cs_arg1 = self->ta_data.get_Item(num4).get_Item(2);
            std::int32_t cs_arg2 = pls::cs::add_i32(self->ta_data.get_Item(num4).get_Item(3), num3);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            game::UserData::DrawDispPlayer(cs_receiver, cs_arg0, cs_arg1, cs_arg2);
        }());
    }
}

// M:form.TitleForm.Draw(kairo.unity.ui.Graphics)
void TitleForm::Draw(pls::cs::Ref<TitleForm> self, pls::cs::Ref<pls::kairo::Graphics> g) {
    TitleForm::ensure_initialized();

    require(self);

    try {
        TitleForm::_draw(self, g);
    } catch (const pls::cs::Exception& cs_caught_124) {
        auto cs_exception_124 = pls::cs::capture_exception(cs_caught_124);
        if (pls::cs::exception_is(cs_exception_124, "System.Exception")) {
            auto t = cs_exception_124;
            {
                generated::kairo::unity::util::Log::Info(t);
            }
        } else {
            throw;
        }
    }
}

// M:form.TitleForm.Finish
bool TitleForm::Finish(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);

    MyFormBase::Finish(pls::cs::static_pointer_cast<MyFormBase>(self));
    if (!is_null(self->resTitle_)) {
        kairo::unity::ui::ResourceManager::Dispose(require(self->resTitle_));
    }
    self->resTitle_ = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
    surface::GamePad::versionVisible_() = false;
    return true;
}

// M:form.TitleForm.GetHashCode
std::int32_t TitleForm::GetHashCode(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);

    return ([&]() {
        auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(self));
        return require(cs_receiver)->pls::cs::Object::GetHashCode();
    }());
}

// M:form.TitleForm.Init
bool TitleForm::Init(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);

    MyFormBase::Init(pls::cs::static_pointer_cast<MyFormBase>(self));
    self->udat_ = game::UserData::GetInstance();
    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(self->canvas_);
        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetBackground(cs_arg0);
    }());
    require(self->canvas_)->DecideKeyState();
    if (!is_null(require(require(self->apdat_)->frmTitle_)->resTitle_)) {
        kairo::unity::ui::ResourceManager::Dispose(
            require(require(require(self->apdat_)->frmTitle_)->resTitle_));
    }
    ([&]() {
        auto cs_target = require(self->apdat_)->frmTitle_;
        auto cs_value = kairo::unity::ui::ResourceManager::create(
            pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
            pls::cs::String{}, pls::cs::String{});
        require(cs_target)->resTitle_ = cs_value;
        return cs_value;
    }());
    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<kairo::unity::ui::ResourceManager>>(
            require(require(self->apdat_)->frmTitle_)->resTitle_);
        pls::cs::Array<std::uint8_t> cs_arg0 = pls::kairo::RecordStore::ReadRecord(1, 7);
        auto cs_arg1 = 3;
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        kairo::unity::ui::ResourceManager::Load(cs_receiver, cs_arg0, cs_arg1);
    }());
    pls::cs::Ref<data::TeamData> teamData = require(self->apdat_)->tData_.get_Item(0);
    self->newGameName_ = require(teamData)->name_;
    TitleForm::ChangeState(self, 0);
    self->titleY_ = 0;
    self->selMenu_ = 0;
    self->selectSave_ = require(require(self->apdat_)->sysSave_)->ints.get_Item(8);
    self->currentSave_ = require(require(self->apdat_)->sysSave_)->ints.get_Item(8);
    self->selectSaveType_ = 1;
    pls::cs::Ref<pls::kairo::SoundPlayer> instance = pls::kairo::SoundPlayer::GetInstance();
    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(instance);
        std::int32_t cs_arg0 = 0;
        std::int32_t cs_arg1 =
            pls::cs::mul_i32(require(require(self->apdat_)->sysSave_)->ints.get_Item(3), 51);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetVolume(cs_arg0, cs_arg1);
    }());
    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(instance);
        std::int32_t cs_arg0 = 0;
        bool cs_arg1 = (require(require(self->apdat_)->sysSave_)->ints.get_Item(3) == 0);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetMute(cs_arg0, cs_arg1);
    }());
    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(instance);
        std::int32_t cs_arg0 = 1;
        std::int32_t cs_arg1 =
            pls::cs::mul_i32(require(require(self->apdat_)->sysSave_)->ints.get_Item(4), 51);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetVolume(cs_arg0, cs_arg1);
    }());
    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(instance);
        std::int32_t cs_arg0 = 1;
        bool cs_arg1 = (require(require(self->apdat_)->sysSave_)->ints.get_Item(4) == 0);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetMute(cs_arg0, cs_arg1);
    }());
    main::AppData::PlayBgm(require(self->apdat_), 4);
    self->POUND_PRESS_CNT = 0;
    self->STAR = false;
    self->titleFrame_ = 0;
    require(self->app_)->ResetOrientation();
    std::int32_t num = 0;
    pls::cs::Ref<pls::kairo::IApplication> currentApp = pls::kairo::IApplication::GetCurrentApp();
    if ((require(currentApp)->GetWidth() <= 480) || (require(currentApp)->GetHeight() <= 480)) {
        num = 1;
    }
    kairo::unity::ui::Canvas::SetLinearFilterEnable(require(self->canvas_), (num == 1));
    if ((((!(cfg::MyConfig::SMART_PASS())) && (!(cfg::MyConfig::AMAZON()))) &&
         (!(generated::kairo::common::cfg::Config::TRIAL_VERSION()))) &&
        (!(generated::kairo::common::cfg::Config::ADMOB_ENABLE()))) {
        try {
            TitleForm::LoadKiaroAdClickNum(self);
        } catch (const pls::cs::Exception& cs_caught_125) {
            auto cs_exception_125 = pls::cs::capture_exception(cs_caught_125);
            if (pls::cs::exception_is(cs_exception_125, "System.Exception")) {
                auto t = cs_exception_125;
                {
                    generated::kairo::unity::util::Log::Info(t);
                }
            } else {
                throw;
            }
        }
    }
    return true;
}

// M:form.TitleForm.LoadKiaroAdClickNum
void TitleForm::LoadKiaroAdClickNum(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);
    try {
        if (cfg::MyConfig::SMART_PASS() || cfg::MyConfig::AMAZON()) {
            throw pls::cs::ReturnFlow<void>{};
        }
        self->kairoAdClickNum_ = 0;
        if ((require(require(self->apdat_)->sysSave_)->bins.get_Item(5)).length() > 0) {
            pls::cs::Ref<generated::java::io::ByteArrayInputStream> byteArrayInputStream =
                pls::cs::Ref<generated::java::io::ByteArrayInputStream>{};
            pls::cs::run_finally(
                [&]() {
                    {
                        byteArrayInputStream = generated::java::io::ByteArrayInputStream::create(
                            require(require(self->apdat_)->sysSave_)->bins.get_Item(5));
                        self->kairoAdClickNum_ = pls::cs::cast_integral<std::int32_t>(
                            generated::kairo::unity::util::StreamUtil::ReadShort(
                                static_cast<pls::cs::Ref<generated::java::io::InputStream>>(
                                    byteArrayInputStream)));
                    }
                },
                [&]() {
                    if (!is_null(byteArrayInputStream)) {
                        require(byteArrayInputStream)->Close();
                    }
                    byteArrayInputStream = pls::cs::Ref<generated::java::io::ByteArrayInputStream>{};
                });
        }
    } catch (const pls::cs::ReturnFlow<void>& cs_return) {
        return;
    }
}

// M:form.TitleForm.NewGame
void TitleForm::NewGame(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);

    self->dialog_ = SubForm::create(71);
    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Push(
        static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self->dialog_));
}

// M:form.TitleForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool TitleForm::OnTouchEvent(pls::cs::Ref<TitleForm> self,
                             pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    TitleForm::ensure_initialized();

    require(self);

    if (!(system::form::LanguageForm::OnTouchEvent(e))) {
        return false;
    }
    pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
    if (self->state_ == 0) {
        switch (require(component)->id) {
        case 27: {
            if (require(e)->type == 1) {
                if (((pls::cs::cast_integral<std::int64_t>(require(component)->value) &
                      pls::cs::cast_integral<std::int64_t>(4294901760u))) ==
                    pls::cs::cast_integral<std::int64_t>(1441792)) {
                    try {
                        TitleForm::UpdateKairoAdClickNum(self);
                        main::AppData::SaveSystem(require(self->apdat_));
                    } catch (const pls::cs::Exception& cs_caught_126) {
                        auto cs_exception_126 = pls::cs::capture_exception(cs_caught_126);
                        if (pls::cs::exception_is(cs_exception_126, "System.Exception")) {
                            auto t = cs_exception_126;
                            {
                                generated::kairo::unity::util::Log::Info(t);
                            }
                        } else {
                            throw;
                        }
                    }
                    if ((((!(cfg::MyConfig::SMART_PASS())) && (!(cfg::MyConfig::AMAZON()))) &&
                         (self->kairoAdClickNum_ <= 2)) &&
                        MyFormBase::Jp()) {
                        kairo::unity::ui::Canvas::OpenBrowser(TitleForm::kairoAdUrl_jp());
                    }
                } else if (((pls::cs::cast_integral<std::int64_t>(require(component)->value) &
                             pls::cs::cast_integral<std::int64_t>(4294901760u))) ==
                           pls::cs::cast_integral<std::int64_t>(1507328)) {
                    try {
                        TitleForm::UpdateKairoAdClickNum(self, 10);
                        main::AppData::SaveSystem(require(self->apdat_));
                    } catch (const pls::cs::Exception& cs_caught_127) {
                        auto cs_exception_127 = pls::cs::capture_exception(cs_caught_127);
                        if (pls::cs::exception_is(cs_exception_127, "System.Exception")) {
                            auto t2 = cs_exception_127;
                            {
                                generated::kairo::unity::util::Log::Info(t2);
                            }
                        } else {
                            throw;
                        }
                    }
                }
                return false;
            }
            break;
        }
        }
    }
    return true;
}

// M:form.TitleForm.ResetHobjExist(System.Int32)
void TitleForm::ResetHobjExist(pls::cs::Ref<TitleForm> self, std::int32_t index) {
    TitleForm::ensure_initialized();

    require(self);

    self->ta_data.get_Item(index).set_Item(0, 0);
}

// M:form.TitleForm.Resume
bool TitleForm::Resume(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);

    return MyFormBase::Resume(pls::cs::static_pointer_cast<MyFormBase>(self));
}

// M:form.TitleForm.SetAppearCnt
void TitleForm::SetAppearCnt(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);

    self->APPEAR_TIME = game::GameUtil::RateConvert(game::GameUtil::Random(100), 0, 99, 20, 70, true);
}

// M:form.TitleForm.SetTouchValue(System.Int32,System.Int32)
void TitleForm::SetTouchValue(pls::cs::Ref<TitleForm> self, std::int32_t type, std::int32_t value) {
    TitleForm::ensure_initialized();

    require(self);

    type = pls::cs::cast_integral<std::int32_t>(
        ((pls::cs::cast_integral<std::int64_t>(type) & pls::cs::cast_integral<std::int64_t>(4294901760u))));
    switch (type) {
    case 196608: {
        self->selMenu_ = value;
        break;
    }
    case 131072: {
        self->selectSaveType_ = value;
        break;
    }
    default: {
        MyFormBase::SetTouchValue(pls::cs::static_pointer_cast<MyFormBase>(self), type, value);
        break;
    }
    }
}

// M:form.TitleForm.SmartBeginPaint(kairo.unity.ui.Graphics)
void TitleForm::SmartBeginPaint(pls::cs::Ref<TitleForm> self, pls::cs::Ref<pls::kairo::Graphics> g) {
    TitleForm::ensure_initialized();

    require(self);

    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetColor(cs_arg0);
    }());
    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
        float cs_arg0 = static_cast<float>(0.0f);
        float cs_arg1 = static_cast<float>(0.0f);
        float cs_arg2 =
            static_cast<float>(kairo::unity::surface::SurfaceBase::GetGameWidth(require(self->view_)));
        float cs_arg3 =
            static_cast<float>(kairo::unity::surface::SurfaceBase::GetGameHeight(require(self->view_)));
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->FillRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
    }());
    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
        std::int32_t cs_arg0 = pls::cs::div_i32(
            (pls::cs::sub_i32(kairo::unity::surface::SurfaceBase::GetGameWidth(require(self->view_)), 240)),
            2);
        std::int32_t cs_arg1 = 0;
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetOrigin(cs_arg0, cs_arg1);
    }());
}

// M:form.TitleForm.ToString
pls::cs::String TitleForm::ToString(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);

    return pls::cs::String::concat(literal(u"TitleForm:"), integer_string(self->state_));
}

// M:form.TitleForm.Update
bool TitleForm::Update(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);
    try {
        MyFormBase::Update(pls::cs::static_pointer_cast<MyFormBase>(self));
        self->titleFrame_ = main::AppData::ClampMax(pls::cs::add_i32(self->titleFrame_, 1), 2147483646);
        self->frame_ = pls::cs::mod_i32((pls::cs::add_i32(self->frame_, 1)), 2147483647 /* Int32.MaxValue */);
        TitleForm::Update_titleAnime(self);
        std::int32_t pOUND_PRESS_CNT = self->POUND_PRESS_CNT;
        if (require(self->canvas_)->CheckKeyState(2048)) {
            self->POUND_PRESS_CNT = pls::cs::add_i32(self->POUND_PRESS_CNT, 1);
            if (self->POUND_PRESS_CNT > 40) {
                self->STAR = true;
            }
        } else {
            self->POUND_PRESS_CNT = 0;
        }
        if (self->state_ == 0) {
            if ((((generated::kairo::common::cfg::Config::DEBUG_CMD_DEV() && (self->POUND_PRESS_CNT == 0)) &&
                  (0 < pOUND_PRESS_CNT)) &&
                 (pOUND_PRESS_CNT < 20)) &&
                (!(generated::kairo::common::cfg::Config::PTW()))) {
                ([&]() {
                    auto cs_target = require(require(self->apdat_)->sysSave_)->ints;
                    auto cs_index = 1;
                    auto cs_value = generated::kairo::unity::util::BitUtil::Off(
                        require(require(self->apdat_)->sysSave_)->ints.get_Item(1), 1);
                    cs_target.set_Item(cs_index, cs_value);
                    return cs_value;
                }());
                require(require(self->apdat_)->sysSave_)->ints.set_Item(2, 0);
                pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
                pls::cs::run_finally(
                    [&]() {
                        try {
                            recordStore = pls::kairo::RecordStore::OpenRecordStore(1);
                            require(recordStore)->RemoveAllRecord();
                            main::AppData::SaveSystem(require(self->apdat_));
                        } catch (const pls::cs::Exception& cs_caught_128) {
                            auto cs_exception_128 = pls::cs::capture_exception(cs_caught_128);
                            if (pls::cs::exception_is(cs_exception_128, "System.Exception")) {
                                auto t = cs_exception_128;
                                {
                                    if (generated::kairo::common::cfg::Config::PRINT()) {
                                        generated::kairo::unity::util::Log::Info(t);
                                    }
                                }
                            } else {
                                throw;
                            }
                        }
                    },
                    [&]() {
                        if (!is_null(recordStore)) {
                            try {
                                require(recordStore)->CloseRecordStore();
                            } catch (const pls::cs::Exception& cs_caught_129) {
                                auto cs_exception_129 = pls::cs::capture_exception(cs_caught_129);
                                if (pls::cs::exception_is(cs_exception_129, "System.Exception")) {
                                    {
                                    }
                                } else {
                                    throw;
                                }
                            }
                        }
                        recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
                    });
                throw pls::cs::ReturnFlow<bool>{
                    require(self->formMan_)
                        ->ChangeCurrentForm(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(
                            require(self->apdat_)->frmBoot_))};
            }
            kairo::unity::ui::Seb::Frame(require(require(require(self->apdat_)->resCom2_)->seb.get_Item(61)));
            if (require(self->canvas_)->CheckKeyRepeat(131072)) {
                self->selMenu_ =
                    pls::cs::mod_i32((pls::cs::add_i32(pls::cs::sub_i32(self->selMenu_, 1), 2)), 2);
            }
            if (require(self->canvas_)->CheckKeyRepeat(524288)) {
                self->selMenu_ =
                    pls::cs::mod_i32((pls::cs::add_i32(pls::cs::add_i32(self->selMenu_, 1), 2)), 2);
            }
            if (!is_null(self->dialog_)) {
                if ((require(self->dialog_)->value1_ == 0) &&
                    (require(self->dialog_)->result__SubForm == 0)) {
                    self->dialog_ = pls::cs::Ref<SubForm>{};
                    throw pls::cs::ReturnFlow<bool>{require(self->formMan_)->RemoveAllForms()};
                }
                if ((require(self->dialog_)->value1_ == 1) &&
                    (require(self->dialog_)->result__SubForm == 0)) {
                    self->dialog_ = pls::cs::Ref<SubForm>{};
                    kairo::unity::ui::Canvas::OpenBrowser(generated::kairo::common::cfg::Config::URL_SITE());
                }
                self->dialog_ = pls::cs::Ref<SubForm>{};
            }
            if (main::AppData::IsPushSoftLabel(require(self->apdat_), 1)) {
                pls::cs::String buttons = literal(u"\u306F\u3044\t\u3044\u3044\u3048");
                self->dialog_ = SubForm::MakeDialog(
                    literal(
                        u"\u30B2\u30FC\u30E0\u3092\u7D42\u4E86\u3057\u307E\u3059") /* "ゲームを終了します" */,
                    buttons, 1);
                require(self->dialog_)->value1_ = 0;
                throw pls::cs::ReturnFlow<bool>{
                    require(self->formMan_)
                        ->Push(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self->dialog_))};
            }
            if (main::AppData::IsPushSoftLabel(require(self->apdat_), 5)) {
                kairo::unity::ui::Canvas::OpenBrowser(generated::kairo::common::cfg::Config::URL_SITE());
                throw pls::cs::ReturnFlow<bool>{true};
            }
            if (require(self->canvas_)->CheckKeyPulse(1048576)) {
                if (!(generated::kairo::common::cfg::Config::TRIAL_VERSION())) {
                    if (self->selMenu_ == 0) {
                        TitleForm::ChangeState(self, 1);
                    } else if (self->selMenu_ == 1) {
                        throw pls::cs::ReturnFlow<bool>{
                            static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Push(
                                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(RankForm::create()))};
                    }
                } else if (self->selMenu_ == 0) {
                    TitleForm::ChangeState(self, 1);
                } else if (self->selMenu_ == 1) {
                    pls::cs::String packageName =
                        require(pls::kairo::IApplication::GetCurrentApp())->GetPackageName();
                    packageName = generated::java::lang::StringEx::SubstringJ(
                        packageName, 0,
                        pls::cs::sub_i32(generated::java::lang::StringEx::Length(packageName), 1));
                    kairo::unity::ui::Canvas::OpenBrowser(pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(
                                pls::cs::String::concat(literal(u"market://details?id="), packageName),
                                literal(u"&referrer=utm_source%3Dappli%26utm_medium%3Dhouse_ad%26utm_content%"
                                        u"3D")),
                            packageName),
                        literal(u"_lite%26utm_campaign%3Dbanner")));
                }
            }
            if (self->STAR && require(self->canvas_)->CheckKeyPulse(2)) {
                main::AppData::currentSaveSlot_() = self->selectSave_;
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(self->apdat_);
                    pls::cs::String cs_arg0 =
                        pls::cs::String::concat(literal(u"\u9001\u4FE1SYSTEM:") /* "送信SYSTEM:" */,
                                                require(require(self->apdat_)->sysSave_)->strs.get_Item(10));
                    bool cs_arg1 = true;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    main::AppData::SendSaveData(cs_receiver, cs_arg0, cs_arg1);
                }());
            } else if ((generated::kairo::common::cfg::Config::DEBUG_CMD_DEV() &&
                        (!(generated::kairo::common::cfg::Config::PTW()))) &&
                       require(self->canvas_)->CheckKeyPulse(2)) {
                pls::cs::Ref<pls::kairo::RecordStore> recordStore2 = pls::cs::Ref<pls::kairo::RecordStore>{};
                pls::cs::String url = pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(generated::kairo::common::cfg::Config::URL_SP(),
                                                literal(u"&ver=")),
                        integer_string(202)),
                    literal(u"&load=save.bin"));
                pls::cs::run_finally(
                    [&]() {
                        try {
                            pls::cs::Array<std::uint8_t> data = kairo::unity::io::Http::Connect(
                                url,
                                static_cast<pls::cs::Array<std::uint8_t>>(pls::cs::Array<std::uint8_t>{}),
                                false);
                            recordStore2 = pls::kairo::RecordStore::OpenRecordStore(0);
                            ([&]() -> void {
                                auto cs_receiver =
                                    static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(recordStore2);
                                std::int32_t cs_arg0 = pls::cs::add_i32(1, main::AppData::currentSaveSlot_());
                                pls::cs::Array<std::uint8_t> cs_arg1 = data;
                                if (!cs_receiver) {
                                    throw pls::cs::NullReferenceException();
                                }
                                cs_receiver->WriteRecord(cs_arg0, cs_arg1);
                            }());
                            ([&]() {
                                auto cs_target = require(require(self->apdat_)->sysSave_)->ints;
                                auto cs_index = pls::cs::add_i32(6, main::AppData::currentSaveSlot_());
                                auto cs_value = 300;
                                cs_target.set_Item(cs_index, cs_value);
                                return cs_value;
                            }());
                            ([&]() {
                                auto cs_target = require(require(self->apdat_)->sysSave_)->strs;
                                auto cs_index = pls::cs::add_i32(4, main::AppData::currentSaveSlot_());
                                auto cs_value = literal(u"120");
                                cs_target.set_Item(cs_index, cs_value);
                                return cs_value;
                            }());
                            ([&]() {
                                auto cs_target = require(require(self->apdat_)->sysSave_)->strs;
                                auto cs_index = pls::cs::add_i32(2, main::AppData::currentSaveSlot_());
                                auto cs_value =
                                    literal(u"[\u53D7\u4FE1\u30C7\u30FC\u30BF]") /* "[受信データ]" */;
                                cs_target.set_Item(cs_index, cs_value);
                                return cs_value;
                            }());
                            main::AppData::SaveSystem(require(self->apdat_));
                            pls::cs::Ref<kairo::unity::ui::Dialog> dialog =
                                kairo::unity::ui::Dialog::create(0, literal(u"\u5B8C\u4E86") /* "完了" */);
                            kairo::unity::ui::Dialog::SetText(
                                require(dialog),
                                literal(u"\u30BB\u30FC\u30D6\u30C7\u30FC\u30BF\u306E\u4E0A\u66F8\u304D\u5B8C"
                                        u"\u4E86") /* "セーブデータの上書き完了" */);
                            kairo::unity::ui::Dialog::Show(require(dialog));
                        } catch (const pls::cs::Exception& cs_caught_130) {
                            auto cs_exception_130 = pls::cs::capture_exception(cs_caught_130);
                            if (pls::cs::exception_is(cs_exception_130, "System.Exception")) {
                                {
                                    pls::cs::Ref<kairo::unity::ui::Dialog> dialog2 =
                                        kairo::unity::ui::Dialog::create(
                                            0, literal(u"\u30A8\u30E9\u30FC") /* "エラー" */);
                                    kairo::unity::ui::Dialog::SetText(
                                        require(dialog2),
                                        literal(u"\u901A\u4FE1\u5931\u6557") /* "通信失敗" */);
                                    kairo::unity::ui::Dialog::Show(require(dialog2));
                                }
                            } else {
                                throw;
                            }
                        }
                    },
                    [&]() {
                        if (!is_null(recordStore2)) {
                            try {
                                require(recordStore2)->CloseRecordStore();
                            } catch (const pls::cs::Exception& cs_caught_131) {
                                auto cs_exception_131 = pls::cs::capture_exception(cs_caught_131);
                                if (pls::cs::exception_is(cs_exception_131, "System.Exception")) {
                                    {
                                    }
                                } else {
                                    throw;
                                }
                            }
                        }
                        recordStore2 = pls::cs::Ref<pls::kairo::RecordStore>{};
                    });
            }
        } else if (self->state_ == 1) {
            kairo::unity::ui::Seb::Frame(require(require(require(self->apdat_)->resCom2_)->seb.get_Item(61)));
            std::int32_t num = 2;
            if (require(self->canvas_)->CheckKeyRepeat(65536)) {
                self->selectSave_ =
                    pls::cs::mod_i32((pls::cs::add_i32(pls::cs::sub_i32(self->selectSave_, 1), num)), num);
            }
            if (require(self->canvas_)->CheckKeyRepeat(262144)) {
                self->selectSave_ =
                    pls::cs::mod_i32((pls::cs::add_i32(pls::cs::add_i32(self->selectSave_, 1), num)), num);
            }
            if (require(self->canvas_)->CheckKeyRepeat(131072)) {
                self->selectSaveType_ =
                    pls::cs::mod_i32((pls::cs::add_i32(pls::cs::sub_i32(self->selectSaveType_, 1), 2)), 2);
            }
            if (require(self->canvas_)->CheckKeyRepeat(524288)) {
                self->selectSaveType_ =
                    pls::cs::mod_i32((pls::cs::add_i32(pls::cs::add_i32(self->selectSaveType_, 1), 2)), 2);
            }
            if ((self->selectSaveType_ == 0) &&
                (require(require(self->apdat_)->sysSave_)
                     ->ints.get_Item(pls::cs::add_i32(11, self->selectSave_)) == -1)) {
                self->selectSaveType_ = 1;
            }
            if (!is_null(self->dialog_)) {
                if (require(self->dialog_)->result__SubForm == 0) {
                    TitleForm::ContinueGame(self);
                } else if (require(self->dialog_)->result__SubForm == 1) {
                    TitleForm::NewGame(self);
                } else if (require(self->dialog_)->result__SubForm == 2) {
                    require(require(self->apdat_)->sysSave_)
                        ->ints.set_Item(
                            pls::cs::add_i32(((((self->selectSaveType_ == 0)) ? 11 : 6)), self->selectSave_),
                            -1);
                    try {
                        main::AppData::SaveSystem(require(self->apdat_));
                    } catch (const pls::cs::Exception& cs_caught_132) {
                        auto cs_exception_132 = pls::cs::capture_exception(cs_caught_132);
                        if (pls::cs::exception_is(cs_exception_132, "System.Exception")) {
                            {
                            }
                        } else {
                            throw;
                        }
                    }
                }
                self->dialog_ = pls::cs::Ref<SubForm>{};
                throw pls::cs::ReturnFlow<bool>{false};
            }
            if (require(self->canvas_)->CheckKeyPulse(1048576)) {
                if (require(require(self->apdat_)->sysSave_)
                        ->ints.get_Item(pls::cs::add_i32(((((self->selectSaveType_ == 0)) ? 11 : 6)),
                                                         self->selectSave_)) != -1) {
                    if (self->selectSaveType_ == 0) {
                        TitleForm::ContinueGame(self);
                        throw pls::cs::ReturnFlow<bool>{true};
                    }
                    self->dialog_ = SubForm::create(
                        22, 136, pls::cs::add_i32(97, pls::cs::mul_i32(self->selectSaveType_, 47)));
                    require(self->dialog_)->value1_ = self->selectSave_;
                    throw pls::cs::ReturnFlow<bool>{
                        static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Push(
                            static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self->dialog_))};
                }
                TitleForm::NewGame(self);
            } else if (main::AppData::IsPushSoftLabel(require(self->apdat_), 2)) {
                TitleForm::ChangeState(self, 0);
            } else if (self->STAR && require(self->canvas_)->CheckKeyPulse(2)) {
                main::AppData::currentSaveSlot_() = self->selectSave_;
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(self->apdat_);
                    pls::cs::String cs_arg0 =
                        pls::cs::String::concat(literal(u"\u9001\u4FE1SYSTEM:") /* "送信SYSTEM:" */,
                                                require(require(self->apdat_)->sysSave_)->strs.get_Item(10));
                    bool cs_arg1 = true;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    main::AppData::SendSaveData(cs_receiver, cs_arg0, cs_arg1);
                }());
            }
        }
        if (self->STAR && require(self->canvas_)->CheckKeyPulse(1024)) {
            pls::cs::Ref<kairo::unity::ui::Dialog> dialog3 =
                kairo::unity::ui::Dialog::create(3,
                                                 literal(
                                                     u"\u30C7\u30FC\u30BF\u306E\u518D\u30C0\u30A6\u30F3\u30ED"
                                                     u"\u30FC\u30C9") /* "データの再ダウンロード" */);
            kairo::unity::ui::Dialog::SetText(
                require(dialog3), literal(u"\u30C7\u30FC\u30BF\u3092\u518D\u30C0\u30A6\u30F3\u30ED\u30FC"
                                          u"\u30C9\u3057\u307E\u3059\u304B\uFF1F\n\u203B\u30BB\u30FC\u30D6"
                                          u"\u30C7\u30FC\u30BF\u306F\u6D88\u3048\u307E\u305B\u3093"));
            if (kairo::unity::ui::Dialog::Show(require(dialog3)) == 4) {
                main::AppData::ResourceReDownload(require(self->apdat_));
                throw pls::cs::ReturnFlow<bool>{
                    require(self->formMan_)
                        ->ChangeCurrentForm(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(
                            require(self->apdat_)->frmBoot_))};
            }
        }
        throw pls::cs::ReturnFlow<bool>{true};
    } catch (const pls::cs::ReturnFlow<bool>& cs_return) {
        return cs_return.value;
    }
    return pls::cs::invalid_return_flow<bool>();
}

// M:form.TitleForm.Update_titleAnime
void TitleForm::Update_titleAnime(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);

    for (std::int32_t i = 0; i < (self->ta_data).length(); i = pls::cs::add_i32(i, 1)) {
        if (self->ta_data.get_Item(i).get_Item(0) == 0) {
            continue;
        }
        self->ta_data.get_Item(i).set_Item(
            5, pls::cs::mod_i32((pls::cs::add_i32(self->ta_data.get_Item(i).get_Item(5), 1)),
                                2147483647 /* Int32.MaxValue */));
        ([&]() {
            auto cs_target = self->ta_data.get_Item(i);
            auto cs_index = 2;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = pls::cs::add_i32(-1, pls::cs::mul_i32(2, self->ta_data.get_Item(i).get_Item(4)));
            auto cs_value = pls::cs::add_i32(cs_old, cs_rhs);
            cs_target.at(cs_index) = cs_value;
            return cs_value;
        }());
        if ((self->ta_data.get_Item(i).get_Item(2) < -10) || (self->ta_data.get_Item(i).get_Item(2) > 250)) {
            TitleForm::ResetHobjExist(self, i);
        }
    }
    self->apeear_cnt = pls::cs::add_i32(self->apeear_cnt, 1);
    if (self->apeear_cnt >= self->APPEAR_TIME) {
        self->apeear_cnt = 0;
        TitleForm::SetAppearCnt(self);
        std::int32_t num = -1;
        for (std::int32_t j = 0; j < (self->ta_data).length(); j = pls::cs::add_i32(j, 1)) {
            if (self->ta_data.get_Item(j).get_Item(0) == 0) {
                num = j;
                break;
            }
        }
        if (num != -1) {
            self->ta_data.get_Item(num).set_Item(0, 1);
            ([&]() {
                auto cs_target = self->ta_data.get_Item(num);
                auto cs_index = 1;
                auto cs_value = ([&]() {
                    auto cs_array = TitleForm::TITLE_GUEST();
                    auto cs_index = game::GameUtil::Random((TitleForm::TITLE_GUEST()).length());
                    return cs_array.get_Item(cs_index);
                }());
                cs_target.set_Item(cs_index, cs_value);
                return cs_value;
            }());
            ([&]() {
                auto cs_target = self->ta_data.get_Item(num);
                auto cs_index = 4;
                auto cs_value = game::GameUtil::Random(2);
                cs_target.set_Item(cs_index, cs_value);
                return cs_value;
            }());
            if (self->ta_data.get_Item(num).get_Item(4) == 1) {
                self->ta_data.get_Item(num).set_Item(2, 0);
                ([&]() {
                    auto cs_target = self->ta_data.get_Item(num);
                    auto cs_index = 3;
                    auto cs_value =
                        game::GameUtil::RateConvert(game::GameUtil::Random(100), 0, 99, 228, 238, true);
                    cs_target.set_Item(cs_index, cs_value);
                    return cs_value;
                }());
            } else {
                self->ta_data.get_Item(num).set_Item(2, 240);
                ([&]() {
                    auto cs_target = self->ta_data.get_Item(num);
                    auto cs_index = 3;
                    auto cs_value =
                        game::GameUtil::RateConvert(game::GameUtil::Random(100), 0, 99, 228, 238, true);
                    cs_target.set_Item(cs_index, cs_value);
                    return cs_value;
                }());
            }
        }
    }
}

// M:form.TitleForm.UpdateKairoAdClickNum
void TitleForm::UpdateKairoAdClickNum(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();

    require(self);

    TitleForm::UpdateKairoAdClickNum(self, 1);
}

// M:form.TitleForm.UpdateKairoAdClickNum(System.Int32)
void TitleForm::UpdateKairoAdClickNum(pls::cs::Ref<TitleForm> self, std::int32_t addClickNum) {
    TitleForm::ensure_initialized();

    require(self);
    try {
        if (cfg::MyConfig::SMART_PASS() || cfg::MyConfig::AMAZON()) {
            throw pls::cs::ReturnFlow<void>{};
        }
        self->kairoAdClickNum_ = pls::cs::add_i32(self->kairoAdClickNum_, addClickNum);
        pls::cs::Ref<generated::java::io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<generated::java::io::ByteArrayOutputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayOutputStream = generated::java::io::ByteArrayOutputStream::create();
                    generated::kairo::unity::util::StreamUtil::WriteShort(
                        static_cast<pls::cs::Ref<generated::java::io::OutputStream>>(byteArrayOutputStream),
                        pls::cs::cast_integral<std::int16_t>(self->kairoAdClickNum_));
                    ([&]() {
                        auto cs_target = require(require(self->apdat_)->sysSave_)->bins;
                        auto cs_index = 5;
                        auto cs_value = generated::java::io::ByteArrayOutputStream::ToByteArray(
                            require(byteArrayOutputStream));
                        cs_target.set_Item(cs_index, cs_value);
                        return cs_value;
                    }());
                }
            },
            [&]() {
                if (!is_null(byteArrayOutputStream)) {
                    require(byteArrayOutputStream)->Close();
                }
                byteArrayOutputStream = pls::cs::Ref<generated::java::io::ByteArrayOutputStream>{};
            });
    } catch (const pls::cs::ReturnFlow<void>& cs_return) {
        return;
    }
}
} // namespace form
} // namespace pls::game
