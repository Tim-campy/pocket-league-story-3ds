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

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace form {

void TitleForm::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    MyFormBase::trace_edges(visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(resTitle_, visitor);
    pls::cs::trace_value(newGameName_, visitor);
    pls::cs::trace_value(time_, visitor);
    pls::cs::trace_value(ta_data, visitor);
    pls::cs::trace_value(zsort_mhobj, visitor);
}

void TitleForm::release_edges() {
    MyFormBase::release_edges();
    pls::cs::release_value(udat_);
    pls::cs::release_value(resTitle_);
    pls::cs::release_value(newGameName_);
    pls::cs::release_value(time_);
    pls::cs::release_value(ta_data);
    pls::cs::release_value(zsort_mhobj);
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
                return pls::cs::Array<std::int32_t>::from({10, 53, 78});
            });
        TitleForm_softLabels__storage =
            pls::cs::evaluate_type_initializer_field("F:form.TitleForm.softLabels_", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::cs::Array<std::int32_t>::from({5, 1}), pls::cs::Array<std::int32_t>::from({0, 2})});
            });
        TitleForm_IMG_SL_storage = pls::cs::evaluate_type_initializer_field("F:form.TitleForm.IMG_SL", [&]() {
            return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                {pls::cs::Array<std::int32_t>::from({0, 0, 6, 3, 16, 16}),
                 pls::cs::Array<std::int32_t>::from({-4, -2, 2, 23, 25, 20})});
        });
        TitleForm_TITLE_GUEST_storage =
            pls::cs::evaluate_type_initializer_field("F:form.TitleForm.TITLE_GUEST", [&]() {
                return pls::cs::Array<std::int32_t>::from({22, 23, 24, 25, 26, 27, 28, 29, 30, 31});
            });
        TitleForm_kairoAdUrl_jp_storage =
            pls::cs::evaluate_type_initializer_field("F:form.TitleForm.kairoAdUrl_jp", [&]() {
                return literal(
                    u"market://details?id=net.kairosoft.android.soccer2_ja&referrer=utm_source%3Dappli%26utm_medium%3Dhouse_ad%26utm_content%3soccer_ja_title%26utm_campaign%3Dbanner");
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

void TitleForm::create_init(pls::cs::Ref<TitleForm> self) {
    TitleForm::ensure_initialized();
    self->x_ = 60;
    self->y_ = 60;
    self->ta_data = kl_java_util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::cs::Array<std::int32_t>::from({20, 6}));
    self->zsort_mhobj = kl_java_util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::cs::Array<std::int32_t>::from({20, 2}));
    ([&]() {
        std::int32_t cs_arg0 = 1;
        MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), cs_arg0);
    }());
}

// M:form.TitleForm.#ctor
pls::cs::Ref<TitleForm> TitleForm::create() {
    TitleForm::ensure_initialized();
    auto self = pls::cs::make_ref<TitleForm>();
    TitleForm::create_init(self);
    return self;
}

// M:form.TitleForm.ToString
pls::cs::String TitleForm::ToString() {
    return pls::cs::String::concat(literal(u"TitleForm:"), integer_string(state_));
}

// M:form.TitleForm.Init
bool TitleForm::Init() {
    MyFormBase::Init();
    udat_ = game::UserData::GetInstance();
    {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(canvas_);
        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetBackground(cs_arg0);
    }
    require(canvas_)->DecideKeyState();
    if (!is_null(require(require(apdat_)->frmTitle_)->resTitle_)) {
        require(require(require(apdat_)->frmTitle_)->resTitle_)->Dispose();
    }
    {
        auto cs_target = require(apdat_)->frmTitle_;
        auto cs_value = kairo::unity::ui::ResourceManager::create(
            pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
            pls::cs::String{}, pls::cs::String{});
        require(cs_target)->resTitle_ = cs_value;
    }
    {
        auto cs_receiver = static_cast<pls::cs::Ref<kairo::unity::ui::ResourceManager>>(
            require(require(apdat_)->frmTitle_)->resTitle_);
        pls::cs::Array<std::uint8_t> cs_arg0 = pls::kairo::RecordStore::ReadRecord(1, 7);
        auto cs_arg1 = 3;
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->Load(cs_arg0, cs_arg1);
    }
    pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
    newGameName_ = require(teamData)->name_;
    TitleForm::ChangeState(0);
    titleY_ = 0;
    selMenu_ = 0;
    selectSave_ = require(require(apdat_)->sysSave_)->ints[8];
    currentSave_ = require(require(apdat_)->sysSave_)->ints[8];
    selectSaveType_ = 1;
    pls::cs::Ref<pls::kairo::SoundPlayer> instance = pls::kairo::SoundPlayer::GetInstance();
    {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(instance);
        std::int32_t cs_arg0 = 0;
        std::int32_t cs_arg1 = pls::cs::mul_i32(require(require(apdat_)->sysSave_)->ints[3], 51);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetVolume(cs_arg0, cs_arg1);
    }
    {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(instance);
        std::int32_t cs_arg0 = 0;
        bool cs_arg1 = (require(require(apdat_)->sysSave_)->ints[3] == 0);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetMute(cs_arg0, cs_arg1);
    }
    {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(instance);
        std::int32_t cs_arg0 = 1;
        std::int32_t cs_arg1 = pls::cs::mul_i32(require(require(apdat_)->sysSave_)->ints[4], 51);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetVolume(cs_arg0, cs_arg1);
    }
    {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::SoundPlayer>>(instance);
        std::int32_t cs_arg0 = 1;
        bool cs_arg1 = (require(require(apdat_)->sysSave_)->ints[4] == 0);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetMute(cs_arg0, cs_arg1);
    }
    require(apdat_)->PlayBgm(4);
    POUND_PRESS_CNT = 0;
    STAR = false;
    titleFrame_ = 0;
    require(app_)->ResetOrientation();
    pls::cs::Int32 num = 0;
    pls::cs::Ref<pls::kairo::IApplication> currentApp = pls::kairo::IApplication::GetCurrentApp();
    if ((require(currentApp)->GetWidth() <= 480) || (require(currentApp)->GetHeight() <= 480)) {
        num = 1;
    }
    kairo::unity::ui::Canvas::SetLinearFilterEnable(require(canvas_), (num == 1));
    if ((((!(cfg::MyConfig::SMART_PASS())) && (!(cfg::MyConfig::AMAZON()))) &&
         (!(kl_cfg::Config::TRIAL_VERSION()))) &&
        (!(kl_cfg::Config::ADMOB_ENABLE()))) {
        try {
            TitleForm::LoadKiaroAdClickNum();
        } catch (const pls::cs::Exception& cs_caught_133) {
            auto t = pls::cs::capture_exception(cs_caught_133);
            {
                kl_unity_util::Log::Info(t);
            }
        }
    }
    return true;
}

// M:form.TitleForm.Update
bool TitleForm::Update() {
    MyFormBase::Update();
    titleFrame_ = main::AppData::ClampMax(pls::cs::add_i32(titleFrame_, 1), 2147483646);
    frame_ = pls::cs::mod_i32((pls::cs::add_i32(frame_, 1)), 2147483647 /* Int32.MaxValue */);
    TitleForm::Update_titleAnime();
    pls::cs::Int32 pOUND_PRESS_CNT = POUND_PRESS_CNT;
    if (require(canvas_)->CheckKeyState(2048)) {
        POUND_PRESS_CNT = pls::cs::add_i32(POUND_PRESS_CNT, 1);
        if (POUND_PRESS_CNT > 40) {
            STAR = true;
        }
    } else {
        POUND_PRESS_CNT = 0;
    }
    if (state_ == 0) {
        if ((((kl_cfg::Config::DEBUG_CMD_DEV() && (POUND_PRESS_CNT == 0)) && (0 < pOUND_PRESS_CNT)) &&
             (pOUND_PRESS_CNT < 20)) &&
            (!(kl_cfg::Config::PTW()))) {
            {
                auto cs_target = require(require(apdat_)->sysSave_)->ints;
                auto cs_index = 1;
                auto cs_value = kl_unity_util::BitUtil::Off(require(require(apdat_)->sysSave_)->ints[1], 1);
                cs_target.set_Item(cs_index, cs_value);
            }
            require(require(apdat_)->sysSave_)->ints[2] = 0;
            pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
            pls::cs::run_finally(
                [&]() {
                    try {
                        recordStore = pls::kairo::RecordStore::OpenRecordStore(1);
                        require(recordStore)->RemoveAllRecord();
                        require(apdat_)->SaveSystem();
                    } catch (const pls::cs::Exception& cs_caught_137) {
                        auto t = pls::cs::capture_exception(cs_caught_137);
                        {
                            if (kl_cfg::Config::PRINT()) {
                                kl_unity_util::Log::Info(t);
                            }
                        }
                    }
                },
                [&]() {
                    if (!is_null(recordStore)) {
                        try {
                            require(recordStore)->CloseRecordStore();
                        } catch (const pls::cs::Exception& cs_caught_136) {
                            pls::cs::capture_exception(cs_caught_136);
                            {
                            }
                        }
                    }
                    recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
                });
            return require(formMan_)->ChangeCurrentForm(
                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(require(apdat_)->frmBoot_));
        }
        require(require(require(apdat_)->resCom2_)->seb.get_Item(61))->Frame();
        if (require(canvas_)->CheckKeyRepeat(131072)) {
            selMenu_ = pls::cs::mod_i32((pls::cs::add_i32(pls::cs::sub_i32(selMenu_, 1), 2)), 2);
        }
        if (require(canvas_)->CheckKeyRepeat(524288)) {
            selMenu_ = pls::cs::mod_i32((pls::cs::add_i32(pls::cs::add_i32(selMenu_, 1), 2)), 2);
        }
        if (!is_null(dialog_)) {
            if ((require(dialog_)->value1_ == 0) && (require(dialog_)->result__SubForm == 0)) {
                dialog_ = pls::cs::Ref<SubForm>{};
                return require(formMan_)->RemoveAllForms();
            }
            if ((require(dialog_)->value1_ == 1) && (require(dialog_)->result__SubForm == 0)) {
                dialog_ = pls::cs::Ref<SubForm>{};
                kairo::unity::ui::Canvas::OpenBrowser(kl_cfg::Config::URL_SITE());
            }
            dialog_ = pls::cs::Ref<SubForm>{};
        }
        if (require(apdat_)->IsPushSoftLabel(1)) {
            pls::cs::String buttons = literal(u"\u306F\u3044\t\u3044\u3044\u3048");
            dialog_ = SubForm::MakeDialog(
                literal(u"\u30B2\u30FC\u30E0\u3092\u7D42\u4E86\u3057\u307E\u3059") /* "ゲームを終了します" */,
                buttons, 1);
            require(dialog_)->value1_ = 0;
            return require(formMan_)->Push(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(dialog_));
        }
        if (require(apdat_)->IsPushSoftLabel(5)) {
            kairo::unity::ui::Canvas::OpenBrowser(kl_cfg::Config::URL_SITE());
            return true;
        }
        if (require(canvas_)->CheckKeyPulse(1048576)) {
            if (!(kl_cfg::Config::TRIAL_VERSION())) {
                if (selMenu_ == 0) {
                    TitleForm::ChangeState(1);
                } else if (selMenu_ == 1) {
                    return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                        static_cast<pls::cs::Ref<pls::kairo::FormBase>>(RankForm::create()));
                }
            } else if (selMenu_ == 0) {
                TitleForm::ChangeState(1);
            } else if (selMenu_ == 1) {
                pls::cs::String packageName =
                    require(pls::kairo::IApplication::GetCurrentApp())->GetPackageName();
                packageName = kl_lang::StringEx::SubstringJ(
                    packageName, 0, pls::cs::sub_i32(kl_lang::StringEx::Length(packageName), 1));
                kairo::unity::ui::Canvas::OpenBrowser(pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(
                            pls::cs::String::concat(literal(u"market://details?id="), packageName),
                            literal(
                                u"&referrer=utm_source%3Dappli%26utm_medium%3Dhouse_ad%26utm_content%3D")),
                        packageName),
                    literal(u"_lite%26utm_campaign%3Dbanner")));
            }
        }
        if (STAR && require(canvas_)->CheckKeyPulse(2)) {
            main::AppData::currentSaveSlot_() = selectSave_;
            {
                auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(apdat_);
                pls::cs::String cs_arg0 =
                    pls::cs::String::concat(literal(u"\u9001\u4FE1SYSTEM:") /* "送信SYSTEM:" */,
                                            require(require(apdat_)->sysSave_)->strs[10]);
                bool cs_arg1 = true;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->SendSaveData(cs_arg0, cs_arg1);
            }
        } else if ((kl_cfg::Config::DEBUG_CMD_DEV() && (!(kl_cfg::Config::PTW()))) &&
                   require(canvas_)->CheckKeyPulse(2)) {
            pls::cs::Ref<pls::kairo::RecordStore> recordStore2 = pls::cs::Ref<pls::kairo::RecordStore>{};
            pls::cs::String url = pls::cs::String::concat(
                pls::cs::String::concat(pls::cs::String::concat(kl_cfg::Config::URL_SP(), literal(u"&ver=")),
                                        integer_string(202)),
                literal(u"&load=save.bin"));
            pls::cs::run_finally(
                [&]() {
                    try {
                        pls::cs::Array<std::uint8_t> data = kairo::unity::io::Http::Connect(
                            url, static_cast<pls::cs::Array<std::uint8_t>>(pls::cs::Array<std::uint8_t>{}),
                            false);
                        recordStore2 = pls::kairo::RecordStore::OpenRecordStore(0);
                        {
                            auto cs_receiver =
                                static_cast<pls::cs::Ref<pls::kairo::RecordStore>>(recordStore2);
                            std::int32_t cs_arg0 = pls::cs::add_i32(1, main::AppData::currentSaveSlot_());
                            pls::cs::Array<std::uint8_t> cs_arg1 = data;
                            if (!cs_receiver) {
                                throw pls::cs::NullReferenceException();
                            }
                            cs_receiver->WriteRecord(cs_arg0, cs_arg1);
                        }
                        {
                            auto cs_target = require(require(apdat_)->sysSave_)->ints;
                            auto cs_index = pls::cs::add_i32(6, main::AppData::currentSaveSlot_());
                            auto cs_value = 300;
                            cs_target.set_Item(cs_index, cs_value);
                        }
                        {
                            auto cs_target = require(require(apdat_)->sysSave_)->strs;
                            auto cs_index = pls::cs::add_i32(4, main::AppData::currentSaveSlot_());
                            auto cs_value = literal(u"120");
                            cs_target.set_Item(cs_index, cs_value);
                        }
                        {
                            auto cs_target = require(require(apdat_)->sysSave_)->strs;
                            auto cs_index = pls::cs::add_i32(2, main::AppData::currentSaveSlot_());
                            auto cs_value = literal(u"[\u53D7\u4FE1\u30C7\u30FC\u30BF]") /* "[受信データ]" */;
                            cs_target.set_Item(cs_index, cs_value);
                        }
                        require(apdat_)->SaveSystem();
                        pls::cs::Ref<kairo::unity::ui::Dialog> dialog =
                            kairo::unity::ui::Dialog::create(0, literal(u"\u5B8C\u4E86") /* "完了" */);
                        require(dialog)->SetText(literal(
                            u"\u30BB\u30FC\u30D6\u30C7\u30FC\u30BF\u306E\u4E0A\u66F8\u304D\u5B8C\u4E86") /* "セーブデータの上書き完了" */);
                        require(dialog)->Show();
                    } catch (const pls::cs::Exception& cs_caught_139) {
                        pls::cs::capture_exception(cs_caught_139);
                        {
                            pls::cs::Ref<kairo::unity::ui::Dialog> dialog2 = kairo::unity::ui::Dialog::create(
                                0, literal(u"\u30A8\u30E9\u30FC") /* "エラー" */);
                            require(dialog2)->SetText(literal(u"\u901A\u4FE1\u5931\u6557") /* "通信失敗" */);
                            require(dialog2)->Show();
                        }
                    }
                },
                [&]() {
                    if (!is_null(recordStore2)) {
                        try {
                            require(recordStore2)->CloseRecordStore();
                        } catch (const pls::cs::Exception& cs_caught_138) {
                            pls::cs::capture_exception(cs_caught_138);
                            {
                            }
                        }
                    }
                    recordStore2 = pls::cs::Ref<pls::kairo::RecordStore>{};
                });
        }
    } else if (state_ == 1) {
        require(require(require(apdat_)->resCom2_)->seb.get_Item(61))->Frame();
        pls::cs::Int32 num = 2;
        if (require(canvas_)->CheckKeyRepeat(65536)) {
            selectSave_ = (((pls::cs::sub_i32(selectSave_, 1) + num)) % num);
        }
        if (require(canvas_)->CheckKeyRepeat(262144)) {
            selectSave_ = (((pls::cs::add_i32(selectSave_, 1) + num)) % num);
        }
        if (require(canvas_)->CheckKeyRepeat(131072)) {
            selectSaveType_ =
                pls::cs::mod_i32((pls::cs::add_i32(pls::cs::sub_i32(selectSaveType_, 1), 2)), 2);
        }
        if (require(canvas_)->CheckKeyRepeat(524288)) {
            selectSaveType_ =
                pls::cs::mod_i32((pls::cs::add_i32(pls::cs::add_i32(selectSaveType_, 1), 2)), 2);
        }
        if ((selectSaveType_ == 0) &&
            (require(require(apdat_)->sysSave_)->ints[pls::cs::add_i32(11, selectSave_)] == -1)) {
            selectSaveType_ = 1;
        }
        if (!is_null(dialog_)) {
            if (require(dialog_)->result__SubForm == 0) {
                TitleForm::ContinueGame();
            } else if (require(dialog_)->result__SubForm == 1) {
                TitleForm::NewGame();
            } else if (require(dialog_)->result__SubForm == 2) {
                require(require(apdat_)->sysSave_)
                    ->ints[pls::cs::add_i32(((((selectSaveType_ == 0)) ? 11 : 6)), selectSave_)] = -1;
                try {
                    require(apdat_)->SaveSystem();
                } catch (const pls::cs::Exception& cs_caught_140) {
                    pls::cs::capture_exception(cs_caught_140);
                    {
                    }
                }
            }
            dialog_ = pls::cs::Ref<SubForm>{};
            return false;
        }
        if (require(canvas_)->CheckKeyPulse(1048576)) {
            if (require(require(apdat_)->sysSave_)
                    ->ints[pls::cs::add_i32(((((selectSaveType_ == 0)) ? 11 : 6)), selectSave_)] != -1) {
                if (selectSaveType_ == 0) {
                    TitleForm::ContinueGame();
                    return true;
                }
                dialog_ =
                    SubForm::create(22, 136, pls::cs::add_i32(97, pls::cs::mul_i32(selectSaveType_, 47)));
                require(dialog_)->value1_ = selectSave_;
                return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(dialog_));
            }
            TitleForm::NewGame();
        } else if (require(apdat_)->IsPushSoftLabel(2)) {
            TitleForm::ChangeState(0);
        } else if (STAR && require(canvas_)->CheckKeyPulse(2)) {
            main::AppData::currentSaveSlot_() = selectSave_;
            {
                auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(apdat_);
                pls::cs::String cs_arg0 =
                    pls::cs::String::concat(literal(u"\u9001\u4FE1SYSTEM:") /* "送信SYSTEM:" */,
                                            require(require(apdat_)->sysSave_)->strs[10]);
                bool cs_arg1 = true;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->SendSaveData(cs_arg0, cs_arg1);
            }
        }
    }
    if (STAR && require(canvas_)->CheckKeyPulse(1024)) {
        pls::cs::Ref<kairo::unity::ui::Dialog> dialog3 = kairo::unity::ui::Dialog::create(
            3,
            literal(
                u"\u30C7\u30FC\u30BF\u306E\u518D\u30C0\u30A6\u30F3\u30ED\u30FC\u30C9") /* "データの再ダウンロード" */);
        require(dialog3)->SetText(literal(
            u"\u30C7\u30FC\u30BF\u3092\u518D\u30C0\u30A6\u30F3\u30ED\u30FC\u30C9\u3057\u307E\u3059\u304B\uFF1F\n\u203B\u30BB\u30FC\u30D6\u30C7\u30FC\u30BF\u306F\u6D88\u3048\u307E\u305B\u3093"));
        if (require(dialog3)->Show() == 4) {
            require(apdat_)->ResourceReDownload();
            return require(formMan_)->ChangeCurrentForm(
                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(require(apdat_)->frmBoot_));
        }
    }
    return true;
}

// M:form.TitleForm.ContinueGame
void TitleForm::ContinueGame() {
    if (require(require(apdat_)->sysSave_)
            ->ints[pls::cs::add_i32(((((selectSaveType_ == 0)) ? 11 : 6)), selectSave_)] != -1) {
        try {
            {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Canvas>>(canvas_);
                pls::cs::String cs_arg0 = pls::cs::String(u"");
                pls::cs::String cs_arg1 = pls::cs::String(u"");
                auto cs_arg2 = pls::cs::String{};
                auto cs_arg3 = pls::cs::String{};
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->SetSoftLabel(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }
            require(canvas_)->UpdateSoftLabel();
            require(apdat_)->LoadGame(selectSave_, (selectSaveType_ == 0));
            require(formMan_)->ChangeCurrentForm(
                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(require(apdat_)->frmGame_));
        } catch (const pls::cs::Exception& cs_caught_131) {
            auto t = pls::cs::capture_exception(cs_caught_131);
            {
                require(apdat_)->save_ = pls::cs::Ref<kl_unity_util::Property>{};
                if (kl_cfg::Config::PRINT()) {
                    kl_unity_util::Log::Info(t);
                }
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(formMan_);
                    pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = SubForm::MakeDialog(literal(
                        u"\u30ED\u30FC\u30C9\u306B\u5931\u6557\u3057\u307E\u3057\u305F") /* "ロードに失敗しました" */);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->Push(cs_arg0);
                }
            }
        }
    } else {
        {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormManagerBase>>(formMan_);
            pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = SubForm::MakeDialog(literal(
                u"\u30BB\u30FC\u30D6\u30C7\u30FC\u30BF\u304C\u3042\u308A\u307E\u305B\u3093") /* "セーブデータがありません" */);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->Push(cs_arg0);
        }
    }
}

// M:form.TitleForm.NewGame
void TitleForm::NewGame() {
    dialog_ = SubForm::create(71);
    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
        static_cast<pls::cs::Ref<pls::kairo::FormBase>>(dialog_));
}

// M:form.TitleForm.SmartBeginPaint(kairo.unity.ui.Graphics)
void TitleForm::SmartBeginPaint(pls::cs::Ref<pls::kairo::Graphics> g) {
    {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetColor(cs_arg0);
    }
    {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
        float cs_arg0 = 0.0f;
        float cs_arg1 = 0.0f;
        float cs_arg2 = static_cast<float>(require(view_)->GetGameWidth());
        float cs_arg3 = static_cast<float>(require(view_)->GetGameHeight());
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->FillRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
    }
    {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
        std::int32_t cs_arg0 = pls::cs::div_i32((pls::cs::sub_i32(require(view_)->GetGameWidth(), 240)), 2);
        std::int32_t cs_arg1 = 0;
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->SetOrigin(cs_arg0, cs_arg1);
    }
}

// M:form.TitleForm.Draw(kairo.unity.ui.Graphics)
void TitleForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    try {
        TitleForm::_draw(g);
    } catch (const pls::cs::Exception& cs_caught_132) {
        auto t = pls::cs::capture_exception(cs_caught_132);
        {
            kl_unity_util::Log::Info(t);
        }
    }
}

// M:form.TitleForm._draw(kairo.unity.ui.Graphics)
void TitleForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    pls::cs::Ref<surface::GameView> instance = surface::GameView::GetInstance();
    TitleForm::SmartBeginPaint(g);
    ([&]() -> void {
        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
        pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resTitle_)->img.get_Item(0);
        float cs_arg1 = 0.0f;
        float cs_arg2 = static_cast<float>(([&]() -> std::int32_t {
            auto cs_left = require(instance)->GetGameHeight();
            auto cs_right = require(require(resTitle_)->img.get_Item(0))->GetHeight();
            return pls::cs::sub_i32(cs_left, cs_right);
        }()));
        if (!cs_receiver) {
            throw pls::cs::NullReferenceException();
        }
        cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2);
    }());
    pls::cs::Int32 num20 = pls::cs::Int32{}, num = pls::cs::Int32{}, num2 = pls::cs::Int32{},
                   num3 = pls::cs::Int32{};
    num3 = 0;
    num2 = num3;
    num = num2;
    num20 = num;
    TitleForm::Draw_titleAnime(g);
    require(apdat_)->Draw_trophy(g, titleFrame_);
    if ([&]() -> bool {
            auto cs_left = titleFrame_;
            auto cs_right = TitleForm::title_anime()[0];
            return (cs_left >= cs_right);
        }()) {
        num3 = -111;
        num = ([&]() -> std::int32_t {
            std::int32_t cs_arg0 = titleFrame_;
            std::int32_t cs_arg1 = TitleForm::title_anime()[0];
            std::int32_t cs_arg2 = pls::cs::sub_i32(TitleForm::title_anime()[1], 1);
            std::int32_t cs_arg3 = 0;
            std::int32_t cs_arg4 = 134;
            bool cs_arg5 = true;
            return game::GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
        }());
        pls::cs::Int32 num4 = 6;
        auto cs_left_148 = titleFrame_;
        auto cs_right_148 =
            TitleForm::title_anime()[pls::cs::sub_i32((TitleForm::title_anime()).length(), 1)];
        pls::cs::Int32 num5 = pls::cs::sub_i32(cs_left_148, cs_right_148);
        pls::cs::Int32 num6 = (num5 % (((num4 + num4) + 32)));
        pls::cs::Int32 num7 = 0;
        if (num6 < num4) {
            num7 = num6;
        } else if (num6 < (num4 + num4)) {
            num7 = ((num4 + num4) - num6);
        }
        pls::cs::Int32 num8 = 0;
        if (num7 > 0) {
            pls::cs::Int32 num9 =
                pls::cs::conv_i32(game::GameUtil::SetVStop(static_cast<float>(-6000.0f), num4));
            pls::cs::Int32 num10 =
                pls::cs::conv_i32(game::GameUtil::SetAStop(static_cast<float>(-6000.0f), num4));
            num8 = ((num9 * num7) + (((num10 * num7) * ((num7 + 1))) / 2));
        }
        {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resTitle_)->img.get_Item(2);
            float cs_arg1 = 0.0f;
            float cs_arg2 = static_cast<float>(((num3 + num) + (num8 / 1000)));
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2);
        }
        if ((((!(MyFormBase::Jp())) && !is_null(kairo::unity::util::Language::GetLanguageCode())) &&
             (kairo::unity::util::Language::GetLanguageCode() != literal(u"en-US"))) &&
            (!(pls::cs::culture_starts_with(kairo::unity::util::Language::GetLanguageCode(),
                                            literal(u"*"))))) {
            pls::cs::String text = MyFormBase::LT(literal(
                u"\u30B5\u30C3\u30AB\u30FC\u30AF\u30E9\u30D6\u7269\u8A9E") /* "サッカークラブ物語" */);
            require(g)->PushFont(9);
            pls::cs::Int32 num11 = main::AppData::ClampMin(require(g)->StringWidth(text), 80);
            pls::cs::Int32 num12 = (((num3 + num) + 120) - 2);
            require(g)->SetColor(0, 0, 0, 96);
            {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                float cs_arg0 = static_cast<float>(((120 - (num11 / 2)) - 1));
                float cs_arg1 = static_cast<float>(
                    (static_cast<double>(static_cast<float>(num12)) - static_cast<double>(0.5f)));
                float cs_arg2 = static_cast<float>((num11 + 2));
                float cs_arg3 = static_cast<float>(
                    pls::cs::add_i32(require(require(g)->GetFont(static_cast<pls::cs::Ref<pls::kairo::Font>>(
                                                 pls::cs::Ref<pls::kairo::Font>{})))
                                         ->GetHeight(),
                                     1));
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->FillRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }
            require(g)->SetColor(255, 255, 255);
            require(g)->DrawString(text, 120.0f, static_cast<float>(num12), 2);
            require(g)->PopFont();
        }
    }
    if (((MyFormBase::Jp() && (!(cfg::MyConfig::SMART_PASS()))) && (!(cfg::MyConfig::AMAZON()))) &&
        (kairoAdClickNum_ < 2)) {
        pls::cs::Int32 num13 = 60;
        num2 = -6;
        num3 = (((pls::cs::sub_i32(require(instance)->GetGameHeight(), 372) - num13) - 3) - 9);
        num = (121 + num13);
        pls::cs::Int32 num14 = 0;
        if (MyFormBase::En()) {
            num14 = -8;
        }
        num14 += pls::cs::sub_i32(require(require(resTitle_)->img.get_Item(2))->GetHeight(), 5);
        if (MyFormBase::En()) {
            num14 += -8;
        }
        {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resTitle_)->img.get_Item(3);
            float cs_arg1 = static_cast<float>(num2);
            float cs_arg2 = static_cast<float>(((num3 + num) + num14));
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2);
        }
        surface::GameView::AddTouch(
            g, 27, num2, ((num3 + num) + num14), 240, 63, 1441792,
            require(kairo::unity::surface::TouchOption::Create())->Margin(-15, -15, 0, 0));
        pls::cs::Int32 num15 = (((num2 + 180) + 20) + 3);
        pls::cs::Int32 num16 = ((((num3 + num) + num14) - 12) + 9);
        {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resTitle_)->img.get_Item(4);
            float cs_arg1 = static_cast<float>(num15);
            float cs_arg2 = static_cast<float>(num16);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2);
        }
        surface::GameView::AddTouch(
            g, 27, num15, num16, 30, 30, 1507328,
            require(kairo::unity::surface::TouchOption::Create())->Margin(10, 10, 10, 10));
    }
    if (state_ == 0) {
        pls::cs::Array<pls::cs::String> array = pls::cs::Array<pls::cs::String>{};
        if (!((kl_cfg::Config::TRIAL_VERSION()))) {
            array = pls::cs::Array<pls::cs::String>::from(
                {literal(u"\u30B9\u30BF\u30FC\u30C8") /* "スタート" */,
                 literal(u"\u30CF\u30A4\u30B9\u30B3\u30A2") /* "ハイスコア" */});
        } else {
            array = pls::cs::Array<pls::cs::String>::from(
                {literal(u"\u30B9\u30BF\u30FC\u30C8") /* "スタート" */,
                 literal(u"\u6B63\u5F0F\u7248\u3078") /* "正式版へ" */});
        }
        if (state_ == 0) {
            pls::cs::Int32 num17 = pls::cs::sub_i32(require(instance)->GetGameHeight(), 70);
            pls::cs::Int32 num18 = ((num17 - 14) + 2);
            pls::cs::Int32 num19 = 22;
            num20 = 67;
            {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resTitle_)->img.get_Item(1);
                float cs_arg1 = static_cast<float>(num20);
                float cs_arg2 = static_cast<float>((num18 - 7));
                std::int32_t cs_arg3 = 0;
                std::int32_t cs_arg4 = 0;
                std::int32_t cs_arg5 = 106;
                std::int32_t cs_arg6 = 31;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
            }
            {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resTitle_)->img.get_Item(1);
                float cs_arg1 = static_cast<float>(num20);
                float cs_arg2 = static_cast<float>((num18 + 24));
                std::int32_t cs_arg3 = 0;
                std::int32_t cs_arg4 = 36;
                std::int32_t cs_arg5 = 106;
                std::int32_t cs_arg6 = 25;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
            }
            pls::cs::Int32 num21 = 94;
            pls::cs::Int32 num22 = 0;
            for (pls::cs::Int32 i = 0; i < (array).length(); ++i) {
                pls::cs::Int32 num23 = 120;
                if (i == selMenu_) {
                    {
                        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(44, 138, 255);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->SetColor(cs_arg0);
                    }
                    require(g)->FillRect(static_cast<float>((num23 - (num21 / 2))),
                                         static_cast<float>(((num18 + (num19 * i)) + 4)),
                                         static_cast<float>(num21), 16.0f);
                    if ((kl_cfg::Config::TRIAL_VERSION()) && (kairo::unity::util::Language::English())) {

                    } else {
                        {
                            auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(apdat_);
                            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                            std::int32_t cs_arg1 = (79 - num22);
                            std::int32_t cs_arg2 = ((num18 + (num19 * i)) + 18);
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(require(apdat_)->resCom2_)->seb.get_Item(0);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(require(apdat_)->resCom2_)->img.get_Item(2);
                            std::int32_t cs_arg5 = 0;
                            if (!cs_receiver) {
                                throw pls::cs::NullReferenceException();
                            }
                            cs_receiver->DrawSeb(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                        }
                        {
                            auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(apdat_);
                            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                            std::int32_t cs_arg1 = (160 + num22);
                            std::int32_t cs_arg2 = ((num18 + (num19 * i)) + 18);
                            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                                require(require(apdat_)->resCom2_)->seb.get_Item(0);
                            pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                                require(require(apdat_)->resCom2_)->img.get_Item(2);
                            std::int32_t cs_arg5 = 0;
                            if (!cs_receiver) {
                                throw pls::cs::NullReferenceException();
                            }
                            cs_receiver->DrawSeb(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                        }
                    }
                }
                if (i == selMenu_) {
                    {
                        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 255, 224);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->SetColor(cs_arg0);
                    }
                } else {
                    {
                        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 255, 224);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->SetColor(cs_arg0);
                    }
                }
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::String cs_arg0 = array[i];
                    float cs_arg1 = static_cast<float>(num23);
                    float cs_arg2 = static_cast<float>(((num18 + (num19 * i)) + 6));
                    std::int32_t cs_arg3 = 2;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawString(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }
                surface::GameView::AddTouch(g, 0, (num23 - 50), ((num18 + (num19 * i)) + 1), 100, num19, i);
            }
        }
        if ((kl_cfg::Config::DEBUG() && kl_cfg::Config::SHOW_DEBUG()) &&
            (!(require(formMan_)->IsCapturing()))) {
            pls::cs::String text2 = kairo::unity::util::Language::GetLanguageCode();
            if (is_null(text2)) {
                text2 = literal(u" null ");
            }
            {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 0, 0);
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->SetColor(cs_arg0);
            }
            require(g)->DrawString(
                pls::cs::String::concat(pls::cs::String::concat(literal(u"DEBUG MODE["), text2),
                                        literal(u"]")),
                2.0f, 2.0f);
            {
                auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                pls::cs::String cs_arg0 = literal(u"2017/02/03 12:01:57");
                float cs_arg1 = 2.0f;
                float cs_arg2 = 18.0f;
                std::int32_t cs_arg3 = pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
                std::int32_t cs_arg4 = 1;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                kairo::unity::ui::Graphics::DrawStringBold(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3,
                                                           cs_arg4);
            }
        }
    }
    if (STAR) {
        {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 0, 0);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetColor(cs_arg0);
        }
        require(g)->DrawString(literal(u"\u2606") /* "☆" */, 2.0f, 16.0f);
    }
    if ((state_ == 1) &&
        ((require(apdat_)->IsTopForm(this) ||
          (((require(require(formMan_)->GetTopForm())->GetId() == 4) &&
            require((pls::cs::unbox<pls::cs::Ref<SubForm>>(pls::cs::box(require(formMan_)->GetTopForm()))))
                ->IsMenu()))))) {
        pls::cs::Int32 num24 =
            pls::cs::div_i32((pls::cs::sub_i32(require(instance)->GetGameHeight(), 240)), 2);
        {
            auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(apdat_);
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            std::int32_t cs_arg1 = 198;
            std::int32_t cs_arg2 = 146;
            std::int32_t cs_arg3 = num24;
            pls::cs::String cs_arg4 = MyFormBase::LTLong(
                literal(u"\u30BB\u30FC\u30D6\u30B9\u30ED\u30C3\u30C8 <0>/2") /* "セーブスロット <0>/2" */,
                pls::cs::cast_integral<std::int64_t>(pls::cs::add_i32(selectSave_, 1)));
            std::int32_t cs_arg5 = -12;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->DrawWindow(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
        }
        if (MyFormBase::Active()) {
            {
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                std::int32_t cs_arg1 = 1;
                std::int32_t cs_arg2 =
                    pls::cs::sub_i32(34, pls::cs::div_i32(pls::cs::mod_i32(frame_, 20), 5));
                std::int32_t cs_arg3 = (54 + num24);
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(24);
                std::int32_t cs_arg5 = 0;
                std::int32_t cs_arg6 = 16;
                surface::GameView::AddTouchSeb(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
            }
            {
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                std::int32_t cs_arg1 = 1;
                std::int32_t cs_arg2 =
                    pls::cs::add_i32(203, pls::cs::div_i32(pls::cs::mod_i32(frame_, 20), 5));
                std::int32_t cs_arg3 = (54 + num24);
                pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 =
                    require(require(apdat_)->resCom2_)->seb.get_Item(24);
                std::int32_t cs_arg5 = 1;
                std::int32_t cs_arg6 = 18;
                surface::GameView::AddTouchSeb(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
            }
        }
        pls::cs::Int32 num25 = ((num24 + 74) + 6);
        require(g)->SetColor(60, 100, 200);
        pls::cs::Int32 dx = 42;
        pls::cs::Int32 dx2 = 199;
        pls::cs::Int32 num26 = (93 + num24);
        require(g)->ClipRect(0.0f, static_cast<float>((num26 - 28)), 240.0f, 20.0f, true);
        SubForm::Draw_chara(g, 171, 0, 0, frame_, dx, num26);
        SubForm::Draw_chara(g, 172, 0, 1, frame_, dx2, num26);
        require(g)->PopClip();
        if (selectSaveType_ == 0) {
            require(g)->DrawString(
                literal(u"\u4E2D\u65AD\u30C7\u30FC\u30BF\u304B\u3089\u518D\u958B") /* "中断データから再開" */,
                120.0f, static_cast<float>((num25 - 11)), 2);
        } else {
            require(g)->DrawString(
                literal(u"\u30BB\u30FC\u30D6\u30C7\u30FC\u30BF\u3092\u8AAD\u8FBC") /* "セーブデータを読込" */,
                120.0f, static_cast<float>((num25 - 11)), 2);
        }
        pls::cs::Int32 num27 = 29;
        pls::cs::Int32 num28 = 181;
        pls::cs::Int32 num29 = 41;
        num25 += 4;
        for (pls::cs::Int32 j = 0; j < 2; ++j) {
            require(apdat_)->DrawBox(g, num27, (num25 - 12), (num27 + num28), ((num25 - 12) + num29));
            pls::cs::Int32 num30 = require(require(apdat_)->sysSave_)
                                       ->ints[pls::cs::add_i32(((((j == 0)) ? 11 : 6)), selectSave_)];
            if ((num30 == -1) && (j == 0)) {
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(193);
                    float cs_arg1 = static_cast<float>(((num27 + 10) + TitleForm::IMG_SL()[1][0]));
                    float cs_arg2 = static_cast<float>(((num25 + 15) + TitleForm::IMG_SL()[1][1]));
                    std::int32_t cs_arg3 = TitleForm::IMG_SL()[1][2];
                    std::int32_t cs_arg4 = TitleForm::IMG_SL()[1][3];
                    std::int32_t cs_arg5 = TitleForm::IMG_SL()[1][4];
                    std::int32_t cs_arg6 = TitleForm::IMG_SL()[1][5];
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                }
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->SetColor(cs_arg0);
                }
                require(g)->DrawString(
                    literal(u"\u4E2D\u65AD\u30C7\u30FC\u30BF\u306A\u3057") /* "中断データなし" */,
                    static_cast<float>(((7 + num27) + (num28 / 2))), static_cast<float>((num25 + 15)), 2);
                require(g)->SetRenderMode(1, 128);
                require(g)->SetColor(0, 0, 0);
                require(g)->FillRect(static_cast<float>(num27), static_cast<float>(num25),
                                     static_cast<float>(num28), static_cast<float>(num29));
                require(g)->SetRenderMode();
                if ((selectSaveType_ == j) && require(apdat_)->IsTopForm(this)) {
                    {
                        auto cs_receiver = static_cast<pls::cs::Ref<kairo::unity::ui::Seb>>(
                            require(require(apdat_)->resCom2_)->seb.get_Item(61));
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        float cs_arg1 = static_cast<float>((((7 + num27) + num28) - 40));
                        float cs_arg2 = static_cast<float>((num25 + 21));
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                            require(require(apdat_)->resCom2_)->img;
                        auto cs_arg4 = -1;
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->Draw(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
                    }
                }
            } else if ((num30 == -1) && (j == 1)) {
                if (selectSaveType_ == j) {
                    {
                        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(200, 200, 255);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->SetColor(cs_arg0);
                    }
                    require(g)->FillRect(static_cast<float>(((((7 + num27) + (num28 / 2)) - 36) - 5)),
                                         static_cast<float>(((num25 + 15) - 1)), 82.0f, 14.0f);
                }
                surface::GameView::AddTouch(g, 3, 0, (num25 - 5), 240, (num29 + 10), (0x20000 | j));
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(193);
                    float cs_arg1 = static_cast<float>(((num27 + 10) + TitleForm::IMG_SL()[0][0]));
                    float cs_arg2 = static_cast<float>(((num25 + 15) + TitleForm::IMG_SL()[0][1]));
                    std::int32_t cs_arg3 = TitleForm::IMG_SL()[0][2];
                    std::int32_t cs_arg4 = TitleForm::IMG_SL()[0][3];
                    std::int32_t cs_arg5 = TitleForm::IMG_SL()[0][4];
                    std::int32_t cs_arg6 = TitleForm::IMG_SL()[0][5];
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                }
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->SetColor(cs_arg0);
                }
                require(g)->DrawString(literal(u"\u7A7A\u304D\u30B9\u30ED\u30C3\u30C8") /* "空きスロット" */,
                                       static_cast<float>(((7 + num27) + (num28 / 2))),
                                       static_cast<float>((num25 + 15)), 2);
                if ((selectSaveType_ == j) && require(apdat_)->IsTopForm(this)) {
                    {
                        auto cs_receiver = static_cast<pls::cs::Ref<kairo::unity::ui::Seb>>(
                            require(require(apdat_)->resCom2_)->seb.get_Item(61));
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        float cs_arg1 = static_cast<float>((((7 + num27) + num28) - 40));
                        float cs_arg2 = static_cast<float>((num25 + 21));
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                            require(require(apdat_)->resCom2_)->img;
                        auto cs_arg4 = -1;
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->Draw(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
                    }
                }
            } else {
                if (selectSaveType_ == j) {
                    {
                        auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                        std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(200, 200, 255);
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->SetColor(cs_arg0);
                    }
                    require(g)->FillRect(static_cast<float>(((((7 + num27) + 90) - 42) - 5)),
                                         static_cast<float>(((num25 + 7) - 1)), 94.0f, 14.0f);
                }
                surface::GameView::AddTouch(g, 3, 0, (num25 - 5), 240, (num29 + 10), (0x20000 | j));
                pls::cs::Int32 num31 = (1 - j);
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                        require(require(apdat_)->resCom2_)->img.get_Item(193);
                    float cs_arg1 = static_cast<float>(((num27 + 10) + TitleForm::IMG_SL()[num31][0]));
                    float cs_arg2 = static_cast<float>(((num25 + 6) + TitleForm::IMG_SL()[num31][1]));
                    std::int32_t cs_arg3 = TitleForm::IMG_SL()[num31][2];
                    std::int32_t cs_arg4 = TitleForm::IMG_SL()[num31][3];
                    std::int32_t cs_arg5 = TitleForm::IMG_SL()[num31][4];
                    std::int32_t cs_arg6 = TitleForm::IMG_SL()[num31][5];
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawImage(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6);
                }
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->SetColor(cs_arg0);
                }
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::String cs_arg0 =
                        require(require(apdat_)->sysSave_)
                            ->strs[pls::cs::add_i32(((((j == 0)) ? 6 : 2)), selectSave_)];
                    float cs_arg1 = static_cast<float>(((7 + num27) + 90));
                    float cs_arg2 = static_cast<float>((num25 + 7));
                    std::int32_t cs_arg3 = 2;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawString(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }
                pls::cs::Int32 num32 = (num30 / 10000);
                pls::cs::Int32 num33 = ((num30 % 10000) / 100);
                pls::cs::Int32 num34 = (num30 % 100);
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(30, 30, 30);
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->SetColor(cs_arg0);
                }
                ([&]() -> void {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = MyFormBase::LF(literal(u"10,,+2"));
                    pls::cs::String cs_arg1 = MyFormBase::LT(
                        literal(u"<0>\u5E74<1>\u6708<2>\u9031") /* "<0>年<1>月<2>週" */, ([&]() {
                            auto cs_left = pls::cs::String::concat(
                                ([&]() {
                                    auto cs_left = pls::cs::String::concat(
                                        kl_unity_util::StringUtil::FormatString(
                                            kl_lang::JString::ValueOfInt((num32 + 1)), 2, u' '),
                                        literal(u"\t"));
                                    auto cs_right = kl_unity_util::StringUtil::FormatString(
                                        kl_lang::JString::ValueOfInt((num33 + 1)), 2, u' ', false);
                                    return pls::cs::String::concat(cs_left, cs_right);
                                }()),
                                literal(u"\t"));
                            auto cs_right = kl_lang::JString::ValueOfInt((num34 + 1));
                            return pls::cs::String::concat(cs_left, cs_right);
                        }()));
                    float cs_arg2 = static_cast<float>((((7 + num27) + 70) - 72));
                    float cs_arg3 = static_cast<float>((num25 + 24));
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    kairo::unity::ui::Graphics::DrawStringTextFormatStringFloat(cs_receiver, cs_arg0, cs_arg1,
                                                                                cs_arg2, cs_arg3);
                }());
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::String cs_arg0 = MyFormBase::YEN(
                        literal(u"\u4E07\u5186") /* "万円" */,
                        kl_lang::JLong::ParseLong(
                            require(require(apdat_)->sysSave_)
                                ->strs[pls::cs::add_i32(((((j == 0)) ? 8 : 4)), selectSave_)]));
                    float cs_arg1 = static_cast<float>((num27 + 172));
                    float cs_arg2 = static_cast<float>((num25 + 24));
                    std::int32_t cs_arg3 = 4;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawString(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }
                if ((selectSaveType_ == j) && require(apdat_)->IsTopForm(this)) {
                    {
                        auto cs_receiver = static_cast<pls::cs::Ref<kairo::unity::ui::Seb>>(
                            require(require(apdat_)->resCom2_)->seb.get_Item(61));
                        pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                        float cs_arg1 = static_cast<float>(((7 + num27) + 145));
                        float cs_arg2 = static_cast<float>((num25 + 12));
                        pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 =
                            require(require(apdat_)->resCom2_)->img;
                        auto cs_arg4 = -1;
                        if (!cs_receiver) {
                            throw pls::cs::NullReferenceException();
                        }
                        cs_receiver->Draw(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
                    }
                }
            }
            num25 += 47;
        }
        num25 -= 2;
        {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(125, 158, 116);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetColor(cs_arg0);
        }
        require(g)->DrawString(
            literal(
                u"\u30C7\u30FC\u30BF\u3092\u9078\u629E\u3057\u3066\u304F\u3060\u3055\u3044") /* "データを選択してください" */
            ,
            120.0f, static_cast<float>(num25), 2);
    }
    if (kl_cfg::Config::TRIAL_VERSION()) {
        {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            std::int32_t cs_arg0 = pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetColor(cs_arg0);
        }
        {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
            pls::cs::String cs_arg0 = literal(u"Lite Version");
            float cs_arg1 = 235.0f;
            float cs_arg2 = 5.0f;
            std::int32_t cs_arg3 = pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);
            std::int32_t cs_arg4 = 4;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            kairo::unity::ui::Graphics::DrawStringBold(cs_receiver, cs_arg0, cs_arg1, cs_arg2, cs_arg3,
                                                       cs_arg4);
        }
    }
    require(g)->SetOrigin(0, 0);
    if (!(kl_unity_util::Language::Japanese())) {
        system::form::LanguageForm::DrawButton(
            g,
            pls::cs::Delegate<void()>::from_closure(
                pls::cs::raw(this), std::string("M:form.TitleForm._draw(kairo.unity.ui.Graphics):20130"),
                [self = this]() -> void {
                    {
                        require(self->formMan_)
                            ->ChangeCurrentForm(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(
                                require(self->apdat_)->frmBoot_));
                    }
                },
                this),
            20);
    }
}

// M:form.TitleForm.Resume
bool TitleForm::Resume() {
    return MyFormBase::Resume();
}

// M:form.TitleForm.Finish
bool TitleForm::Finish() {
    MyFormBase::Finish();
    if (!is_null(resTitle_)) {
        require(resTitle_)->Dispose();
    }
    resTitle_ = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
    surface::GamePad::versionVisible_() = false;
    return true;
}

// M:form.TitleForm.ChangeState(System.Int32)
void TitleForm::ChangeState(pls::cs::Int32 state) {
    pls::cs::Array<std::int32_t> array = TitleForm::softLabels_()[state];
    if ([&]() {
            auto cs_left = pls::cs::box(array);
            auto cs_right = pls::cs::box(pls::cs::Array<std::int32_t>{});
            return cs_left != cs_right;
        }()) {
        {
            auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this);
            pls::cs::String cs_arg0 = main::AppData::softLabels_()[array[0]];
            pls::cs::String cs_arg1 = main::AppData::softLabels_()[array[1]];
            auto cs_arg2 = pls::cs::String{};
            auto cs_arg3 = pls::cs::String{};
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetSoftLabel(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
        }
    }
    state_ = state;
}

// M:form.TitleForm.Update_titleAnime
void TitleForm::Update_titleAnime() {
    for (pls::cs::Int32 i = 0; i < (ta_data).length(); ++i) {
        if (ta_data[i][0] == 0) {
            continue;
        }
        ta_data[i][5] =
            pls::cs::mod_i32((pls::cs::add_i32(ta_data[i][5], 1)), 2147483647 /* Int32.MaxValue */);
        {
            auto cs_target = ta_data[i];
            auto cs_index = 2;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = pls::cs::add_i32(-1, pls::cs::mul_i32(2, ta_data[i][4]));
            auto cs_value = pls::cs::add_i32(cs_old, cs_rhs);
            cs_target.at(cs_index) = cs_value;
        }
        if ((ta_data[i][2] < -10) || (ta_data[i][2] > 250)) {
            TitleForm::ResetHobjExist(i);
        }
    }
    apeear_cnt = pls::cs::add_i32(apeear_cnt, 1);
    if (apeear_cnt >= APPEAR_TIME) {
        apeear_cnt = 0;
        TitleForm::SetAppearCnt();
        pls::cs::Int32 num = -1;
        for (pls::cs::Int32 j = 0; j < (ta_data).length(); ++j) {
            if (ta_data[j][0] == 0) {
                num = j;
                break;
            }
        }
        if (num != -1) {
            ta_data[num][0] = 1;
            ([&]() {
                auto cs_target = ta_data[num];
                auto cs_index = 1;
                auto cs_value = ([&]() {
                    auto cs_array = TitleForm::TITLE_GUEST();
                    auto cs_index = game::GameUtil::Random((TitleForm::TITLE_GUEST()).length());
                    return cs_array.get_Item(cs_index);
                }());
                cs_target.set_Item(cs_index, cs_value);
                return cs_value;
            }());
            {
                auto cs_target = ta_data[num];
                auto cs_index = 4;
                auto cs_value = game::GameUtil::Random(2);
                cs_target.set_Item(cs_index, cs_value);
            }
            if (ta_data[num][4] == 1) {
                ta_data[num][2] = 0;
                {
                    auto cs_target = ta_data[num];
                    auto cs_index = 3;
                    auto cs_value =
                        game::GameUtil::RateConvert(game::GameUtil::Random(100), 0, 99, 228, 238, true);
                    cs_target.set_Item(cs_index, cs_value);
                }
            } else {
                ta_data[num][2] = 240;
                {
                    auto cs_target = ta_data[num];
                    auto cs_index = 3;
                    auto cs_value =
                        game::GameUtil::RateConvert(game::GameUtil::Random(100), 0, 99, 228, 238, true);
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        }
    }
}

// M:form.TitleForm.SetAppearCnt
void TitleForm::SetAppearCnt() {
    APPEAR_TIME = game::GameUtil::RateConvert(game::GameUtil::Random(100), 0, 99, 20, 70, true);
}

// M:form.TitleForm.ResetHobjExist(System.Int32)
void TitleForm::ResetHobjExist(pls::cs::Int32 index) {
    ta_data[index][0] = 0;
}

// M:form.TitleForm.Draw_titleAnime(kairo.unity.ui.Graphics)
void TitleForm::Draw_titleAnime(pls::cs::Ref<pls::kairo::Graphics> g) {
    for (pls::cs::Int32 i = 0; i < (ta_data).length(); ++i) {
        zsort_mhobj[i][0] = i;
        zsort_mhobj[i][1] = ta_data[i][3];
    }
    for (pls::cs::Int32 j = 0; j < pls::cs::sub_i32((zsort_mhobj).length(), 1); ++j) {
        for (pls::cs::Int32 num = pls::cs::sub_i32((zsort_mhobj).length(), 1); num > j; --num) {
            if ([&]() -> bool {
                    auto cs_left = zsort_mhobj[j][1];
                    auto cs_right = zsort_mhobj[num][1];
                    return (cs_left > cs_right);
                }()) {
                pls::cs::Int32 num2 = zsort_mhobj[num][1];
                zsort_mhobj[num][1] = zsort_mhobj[j][1];
                zsort_mhobj[j][1] = num2;
                num2 = zsort_mhobj[num][0];
                zsort_mhobj[num][0] = zsort_mhobj[j][0];
                zsort_mhobj[j][0] = num2;
            }
        }
    }
    pls::cs::Int32 num3 = pls::cs::sub_i32(require(view_)->GetGameHeight(), 240);
    for (pls::cs::Int32 k = 0; k < (zsort_mhobj).length(); ++k) {
        pls::cs::Int32 num4 = zsort_mhobj[k][0];
        if (ta_data[num4][0] == 0) {
            continue;
        }
        pls::cs::Int32 seb = 0;
        pls::cs::Int32 frame = pls::cs::div_i32(pls::cs::mod_i32(ta_data[num4][5], 20), 5);
        pls::cs::Int32 direct = 2;
        if (ta_data[num4][4] == 1) {
            direct = 1;
        }
        pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(ta_data[num4][1]);
        {
            auto cs_receiver = static_cast<pls::cs::Ref<main::AppData>>(apdat_);
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            std::int32_t cs_arg1 = pls::cs::sub_i32(ta_data[num4][2], 1);
            std::int32_t cs_arg2 = (pls::cs::add_i32(ta_data[num4][3], 1) + num3);
            pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 = require(require(apdat_)->resCom2_)->seb.get_Item(0);
            pls::cs::Ref<pls::kairo::Image> cs_arg4 = require(require(apdat_)->resCom2_)->img.get_Item(2);
            std::int32_t cs_arg5 = 4;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->DrawSeb(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
        }
        require(udat_)->SetDispPlayerData(seb, require(udat_)->selectUniform_, require(playerData)->faceImg_,
                                          frame, direct);
        {
            auto cs_receiver = static_cast<pls::cs::Ref<game::UserData>>(udat_);
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
            std::int32_t cs_arg1 = ta_data[num4][2];
            std::int32_t cs_arg2 = (ta_data[num4][3] + num3);
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->DrawDispPlayer(cs_arg0, cs_arg1, cs_arg2);
        }
    }
}

// M:form.TitleForm.SetTouchValue(System.Int32,System.Int32)
void TitleForm::SetTouchValue(std::int32_t type, std::int32_t value) {
    type = pls::cs::cast_integral<std::int32_t>(
        ((pls::cs::cast_integral<std::int64_t>(type) & pls::cs::cast_integral<std::int64_t>(0xFFFF0000u))));
    switch (type) {
    case 196608: {
        selMenu_ = value;
        break;
    }
    case 131072: {
        selectSaveType_ = value;
        break;
    }
    default: {
        MyFormBase::SetTouchValue(type, value);
        break;
    }
    }
}

// M:form.TitleForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool TitleForm::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    if (!(system::form::LanguageForm::OnTouchEvent(e))) {
        return false;
    }
    pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
    if (state_ == 0) {
        switch (require(component)->id) {
        case 27: {
            if (require(e)->type == 1) {
                if (((pls::cs::cast_integral<std::int64_t>(require(component)->value) &
                      pls::cs::cast_integral<std::int64_t>(0xFFFF0000u))) ==
                    pls::cs::cast_integral<std::int64_t>(1441792)) {
                    try {
                        TitleForm::UpdateKairoAdClickNum();
                        require(apdat_)->SaveSystem();
                    } catch (const pls::cs::Exception& cs_caught_134) {
                        auto t = pls::cs::capture_exception(cs_caught_134);
                        {
                            kl_unity_util::Log::Info(t);
                        }
                    }
                    if ((((!(cfg::MyConfig::SMART_PASS())) && (!(cfg::MyConfig::AMAZON()))) &&
                         (kairoAdClickNum_ <= 2)) &&
                        MyFormBase::Jp()) {
                        kairo::unity::ui::Canvas::OpenBrowser(TitleForm::kairoAdUrl_jp());
                    }
                } else if (((pls::cs::cast_integral<std::int64_t>(require(component)->value) &
                             pls::cs::cast_integral<std::int64_t>(0xFFFF0000u))) ==
                           pls::cs::cast_integral<std::int64_t>(1507328)) {
                    try {
                        TitleForm::UpdateKairoAdClickNum(10);
                        require(apdat_)->SaveSystem();
                    } catch (const pls::cs::Exception& cs_caught_135) {
                        auto t2 = pls::cs::capture_exception(cs_caught_135);
                        {
                            kl_unity_util::Log::Info(t2);
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

// M:form.TitleForm.LoadKiaroAdClickNum
void TitleForm::LoadKiaroAdClickNum() {
    if (cfg::MyConfig::SMART_PASS() || cfg::MyConfig::AMAZON()) {
        return;
    }
    kairoAdClickNum_ = 0;
    if ((require(require(apdat_)->sysSave_)->bins[5]).length() > 0) {
        pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<kl_io::ByteArrayInputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayInputStream =
                        kl_io::ByteArrayInputStream::create(require(require(apdat_)->sysSave_)->bins[5]);
                    kairoAdClickNum_ =
                        pls::cs::cast_integral<std::int32_t>(kl_unity_util::StreamUtil::ReadShort(
                            static_cast<pls::cs::Ref<kl_io::InputStream>>(byteArrayInputStream)));
                }
            },
            [&]() {
                if (!is_null(byteArrayInputStream)) {
                    require(byteArrayInputStream)->Close();
                }
                byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            });
    }
}

// M:form.TitleForm.UpdateKairoAdClickNum
void TitleForm::UpdateKairoAdClickNum() {
    TitleForm::UpdateKairoAdClickNum(1);
}

// M:form.TitleForm.UpdateKairoAdClickNum(System.Int32)
void TitleForm::UpdateKairoAdClickNum(pls::cs::Int32 addClickNum) {
    if (cfg::MyConfig::SMART_PASS() || cfg::MyConfig::AMAZON()) {
        return;
    }
    kairoAdClickNum_ = pls::cs::add_i32(kairoAdClickNum_, addClickNum);
    pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream =
        pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
    pls::cs::run_finally(
        [&]() {
            {
                byteArrayOutputStream = kl_io::ByteArrayOutputStream::create();
                kl_unity_util::StreamUtil::WriteShort(
                    static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                    pls::cs::cast_integral<std::int16_t>(kairoAdClickNum_));
                {
                    auto cs_target = require(require(apdat_)->sysSave_)->bins;
                    auto cs_index = 5;
                    auto cs_value = require(byteArrayOutputStream)->ToByteArray();
                    cs_target.set_Item(cs_index, cs_value);
                }
            }
        },
        [&]() {
            if (!is_null(byteArrayOutputStream)) {
                require(byteArrayOutputStream)->Close();
            }
            byteArrayOutputStream = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        });
}

// M:form.TitleForm.GetHashCode
std::int32_t TitleForm::GetHashCode() {
    {
        auto cs_receiver_150 = pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));
        return require(cs_receiver_150)->pls::cs::Object::GetHashCode();
    }
}
} // namespace form
} // namespace pls::game
