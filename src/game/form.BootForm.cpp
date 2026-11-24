// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.EventData.hpp"
#include "data.FanActData.hpp"
#include "data.FanBonusData.hpp"
#include "data.FormationData.hpp"
#include "data.LeagueData.hpp"
#include "data.MapchipMain.hpp"
#include "data.MapchipMatch.hpp"
#include "data.PlayerData.hpp"
#include "data.QuestMatchData.hpp"
#include "data.SponsorData.hpp"
#include "data.StadiumData.hpp"
#include "data.SupervisorData.hpp"
#include "data.TeamData.hpp"
#include "data.TenantData.hpp"
#include "data.TradeData.hpp"
#include "data.TrainingData.hpp"
#include "form.BootForm.hpp"
#include "form.DebugForm.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.RankForm.hpp"
#include "form.SoccerForm.hpp"
#include "form.SpForm.hpp"
#include "form.SubForm.hpp"
#include "form.TitleForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.DelayEvent.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.MapMain.hpp"
#include "game.MapObject.hpp"
#include "game.Player.hpp"
#include "game.TArea.hpp"
#include "game.TBall.hpp"
#include "game.TGroupArea.hpp"
#include "game.TPlayer.hpp"
#include "game.Team.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.DataInputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JLong.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.lang.JRunnable.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
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
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace form {

void BootForm::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    MyFormBase::trace_edges(visitor);
    pls::cs::trace_value(regist_, visitor);
    pls::cs::trace_value(dialog__BootForm, visitor);
    pls::cs::trace_value(error_, visitor);
    pls::cs::trace_value(th_, visitor);
    pls::cs::trace_value(e_, visitor);
    pls::cs::trace_value(resLoad_, visitor);
}

static IntArray2 BootForm_softLabels__storage{};

static PLS_NOINLINE void cs_init_3ee77977aa791047_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(BootForm_softLabels__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("form.BootForm", flag, []() {
        BootForm_softLabels__storage =
            pls::cs::evaluate_type_initializer_field("F:form.BootForm.softLabels_", [&]() {
                return IntArray2::from({IntArray::make(2), IntArray::make(2), IntArray::make(2),
                                        IntArray::make(2), IntArray::make(2), IntArray::make(2)});
            });
    });
}

void BootForm::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_3ee77977aa791047_slow(flag);
}

IntArray2& BootForm::softLabels_() {
    BootForm::ensure_initialized();
    return BootForm_softLabels__storage;
}

void BootForm::create_init(pls::cs::Ref<BootForm> self) {
    BootForm::ensure_initialized();
    MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 0);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.#ctor", game);
    {
    }
}

// M:form.BootForm.#ctor
pls::cs::Ref<BootForm> BootForm::create() {
    BootForm::ensure_initialized();
    auto self = pls::cs::make_ref<BootForm>();
    BootForm::create_init(self);
    return self;
}

// M:form.BootForm.ToString
pls::cs::String BootForm::ToString() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.ToString", game);
    {
        return pls::cs::String::concat(literal(u"BootForm:"), integer_string(state_.load()));
    }
}

// M:form.BootForm.Init
bool BootForm::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.Init", game);
    {
        MyFormBase::Init();
        if (!require(apdat_)->LoadSystem()) {
            InitApp();
        }
        PLS_API(require(canvas_)->SetKeyRepeatInterval(10));
        PLS_API(require(canvas_)->SetKeyDoubleInterval(4));
        try {
            resLoad_ = kairo::unity::ui::ResourceManager::create(
                pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                pls::cs::String{}, pls::cs::String{});
            {
                auto cs_receiver = resLoad_;
                ByteArray cs_arg0 = PLS_API(pls::kairo::Storage::Read(3, false, literal(u"load.dat")));
                require(cs_receiver)->Load(cs_arg0, 3);
            }
        } catch (const pls::cs::Exception& cs_caught_60) {
            auto t = pls::cs::capture_exception(cs_caught_60);
            {
                PLS_API(kl_unity_util::Log::Info(t));
            }
        }
        PLS_API(pls::kairo::Graphics::SetAutoTextLayout(true));
        loop_ = 0;
        {
            auto cs_target = this;
            pls::cs::Int32 cs_value = 0;
            require(cs_target)->bowWait_.store(cs_value);
        }
        ChangeState(0);
        {
            auto cs_target = this;
            auto cs_value = pls::cs::String{};
            require(cs_target)->error_.store(cs_value);
        }
        {
            auto cs_target = this;
            auto cs_value = ByteArray{};
            require(cs_target)->regist_.store(cs_value);
        }
        {
            auto cs_target = this;
            auto cs_value = java::lang::JThread::create(this);
            require(cs_target)->th_.store(cs_value);
        }
        require(th_.load())->Start();
        PLS_API(require(app_)->ResetOrientation());
        return true;
    }
}

// M:form.BootForm.Update
bool BootForm::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.Update", game);
    {
        kl_cfg::Config::ensure_initialized();
        main::AppData::ensure_initialized();

        MyFormBase::Update();
        if (!is_null(resLoad_)) {
            require(require(resLoad_)->seb.get_Item(0))->Frame();
        }
        if (PLS_API(require(canvas_)->CheckKeyPulse(2))) {
            {
                auto cs_value = !kl_cfg::Config::SHOW_DEBUG();
                kl_cfg::Config::SHOW_DEBUG() = cs_value;
            }
        }
        {
            auto cs_target = this;
            pls::cs::Int32 cs_value = (frame_wait.load() + 1) % 16;
            require(cs_target)->frame_wait.store(cs_value);
        }
        frame_main = ((frame_main + 1) % 2147483647 /* Int32.MaxValue */);
        if (state_.load() == 3) {
            if (!is_null(dialog__BootForm)) {
                PLS_API(require(formMan_)->RemoveAllForms());
                if ((pls::cs::Int32(PLS_API(require(canvas_)->GetKeypadState())) & 0x800) != 0) {
                    PLS_API(([&]() -> bool {
                        auto cs_receiver = formMan_;
                        pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = SpForm::create(e_.load());
                        return require(cs_receiver)->Push(cs_arg0);
                    }()));
                }
                return true;
            }
            if (!is_null(require(apdat_)->resCom2_)) {
                dialog__BootForm = SubForm::MakeDialog(error_.load());
                return PLS_API(require(formMan_)->Push(dialog__BootForm));
            }
            if (MyFormBase::Jp()) {
                pls::cs::Ref<kairo::unity::ui::Dialog> dialog =
                    kairo::unity::ui::Dialog::create(0, literal(u"ｴﾗｰ"));
                require(dialog)->SetText(error_.load());
                require(dialog)->Show();
            } else {
                pls::cs::Ref<kairo::unity::ui::Dialog> dialog2 =
                    kairo::unity::ui::Dialog::create(0, main::AppData::resourceString()[7]);
                require(dialog2)->SetText(error_.load());
                require(dialog2)->Show();
            }
            PLS_API(require(formMan_)->RemoveAllForms());
            if ((pls::cs::Int32(PLS_API(require(canvas_)->GetKeypadState())) & 0x800) != 0) {
                PLS_API(([&]() -> bool {
                    auto cs_receiver = formMan_;
                    pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = SpForm::create(e_.load());
                    return require(cs_receiver)->Push(cs_arg0);
                }()));
            }
            return true;
        }
        if (state_.load() == 5) {
            kairo::unity::ui::Canvas::VersionUp(kl_cfg::Config::URL_VERSIONUP());
            return PLS_API(require(formMan_)->RemoveAllForms());
        }
        if (state_.load() == 4) {
            if ([&]() {
                    auto cs_left = pls::cs::box(regist_.load());
                    auto cs_right = pls::cs::box(ByteArray{});
                    return cs_left == cs_right;
                }()) {
                PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmTitle_));
            } else {
                StringArray array = PLS_API(kl_unity_util::StringUtil::Split(
                    PLS_API(kl_lang::JString::New(regist_.load())), literal(u"\n")));
                if (PLS_API(kl_lang::JInteger::ParseInt(array[1])) > 202) {
                    require(require(apdat_)->sysSave_)->ints[5] = 1;
                    require(apdat_)->SaveSystem();
                    PLS_API(([&]() -> bool {
                        auto cs_receiver = formMan_;
                        pls::cs::Ref<pls::kairo::FormBase> cs_arg0 =
                            SubForm::MakeDialog(literal(u"ｱﾌﾟﾘのﾊﾞｰｼﾞｮﾝｱｯﾌﾟを行います"));
                        return require(cs_receiver)->Push(cs_arg0);
                    }()));
                    ChangeState(5);
                } else {
                    PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmTitle_));
                }
            }
        }
        java::lang::JThread::Sleep(50ll);
        return true;
    }
}

// M:form.BootForm.SmartBeginPaint(kairo.unity.ui.Graphics)
void BootForm::SmartBeginPaint(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.SmartBeginPaint(kairo.unity.ui.Graphics)", game);
    {
        PLS_API(require(g)->SetOrigin(0, 0));
        pls::cs::Int32 gameWidth = require(view_)->GetGameWidth();
        pls::cs::Int32 gameHeight = require(view_)->GetGameHeight();
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0))));
        PLS_API(require(g)->FillRect(0.0f, 0.0f, gameWidth, gameHeight));
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resLoad_)->img.get_Item(1);
            require(g)->DrawScaledImage(cs_arg0, 0.0f, 0.0f, gameWidth, gameHeight, 0, 0, 5, 240);
        }()));
        PLS_API(require(g)->SetOrigin((gameWidth - 240) / 2, (gameHeight - 240) / 2));
    }
}

// M:form.BootForm.Draw(kairo.unity.ui.Graphics)
void BootForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.Draw(kairo.unity.ui.Graphics)", game);
    {
        main::AppData::ensure_initialized();

        MyFormBase::Draw(g);
        SmartBeginPaint(g);
        if (state_.load() == 0) {

        } else {
            if (state_.load() == 1) {
                pls::cs::String text = MyFormBase::LT(literal(u"ｱﾌﾟﾘ起動中"));
                for (pls::cs::Int32 i = 4; i < frame_ && bowWait_.load() == 0; i += 4) {
                    text = pls::cs::String::concat(text, literal(u"."));
                }
                LoadBox(g, text, loadCnt_.load(), loadMax_.load());
            } else if (state_.load() == 2) {
                pls::cs::String empty = pls::cs::String(u"");
                if (MyFormBase::Jp()) {
                    empty = MyFormBase::LT(literal(u"認証中"));
                } else {
                    empty = main::AppData::resourceString()[6];
                }
                for (pls::cs::Int32 j = 4; j < frame_ && bowWait_.load() == 0; j += 4) {
                    empty = pls::cs::String::concat(empty, literal(u"."));
                }
                LoadBox(g, empty, 0, 0);
            }
        }
        PLS_API(require(g)->SetOrigin(0, 0));
    }
}

// M:form.BootForm.Resume
bool BootForm::Resume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.Resume", game);
    {
        MyFormBase::Resume();
        return true;
    }
}

// M:form.BootForm.Finish
bool BootForm::Finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.Finish", game);
    {
        MyFormBase::Finish();
        if (!is_null(resLoad_)) {
            require(resLoad_)->Dispose();
        }
        resLoad_ = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
        return true;
    }
}

// M:form.BootForm.LoadBox(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)
void BootForm::LoadBox(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 cnt,
                       pls::cs::Int32 num) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.BootForm.LoadBox(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32)", game);
    {
        PLS_API(([&]() -> void {
            pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(resLoad_)->img.get_Item(0);
            require(g)->DrawImage(cs_arg0, 43.0f, 90.0f);
        }()));
        {
            auto cs_receiver = require(resLoad_)->seb.get_Item(0);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resLoad_)->img;
            require(cs_receiver)->DrawFrame(g, 120.0f, 236.0f, cs_arg3, 5, -1);
        }
        pls::cs::Int32 num9, num2, num3, num4, num5;
        num2 = 91;
        anime_cnt = ((anime_cnt + 1) % 2147483647 /* Int32.MaxValue */);
        num3 = anime_cnt % 40;
        if (num3 % 20 == 0 && anime_cnt != 0) {
            anime_mode = game::GameUtil::Random(2);
            anime_ballY = -(game::GameUtil::Random(25) + 5);
        }
        if (num3 < 5) {
            {
                auto cs_receiver = require(resLoad_)->seb.get_Item(0);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resLoad_)->img;
                require(cs_receiver)->DrawFrame(g, 58.0f, num2, cs_arg3, 1, -1);
            }
        } else {
            {
                auto cs_receiver = require(resLoad_)->seb.get_Item(0);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resLoad_)->img;
                require(cs_receiver)->DrawFrame(g, 58.0f, num2, cs_arg3, 0, -1);
            }
        }
        if (num3 >= 20 && num3 < 25) {
            {
                auto cs_receiver = require(resLoad_)->seb.get_Item(0);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resLoad_)->img;
                require(cs_receiver)->DrawFrame(g, 182.0f, num2, cs_arg3, 3, -1);
            }
        } else {
            {
                auto cs_receiver = require(resLoad_)->seb.get_Item(0);
                pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resLoad_)->img;
                require(cs_receiver)->DrawFrame(g, 182.0f, num2, cs_arg3, 2, -1);
            }
        }
        num4 = game::GameUtil::RateConvert(PLS_API(kl_lang::JMath::AbsInt(num3 - 20)), 20, 0, 66, 174, true);
        num5 = num2;
        if (anime_mode == 1) {
            pls::cs::Single num6 = game::GameUtil::SetVStop(anime_ballY, 10);
            pls::cs::Single num7 = game::GameUtil::SetAStop(anime_ballY, 10);
            pls::cs::Int32 num8 = PLS_API(kl_lang::JMath::AbsInt(num3 - 20));
            num5 = pls::cs::to_int32((num6 * pls::cs::Single(num8) +
                                      num7 * pls::cs::Single(num8) * pls::cs::Single((num8 + 1)) / 2.0f)) +
                   num2;
            if (num5 > num2) {
                num5 = num2;
            }
        }
        {
            auto cs_receiver = require(resLoad_)->seb.get_Item(0);
            pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resLoad_)->img;
            require(cs_receiver)->DrawFrame(g, num4, num5, cs_arg3, 4, -1);
        }
        if (num > 0) {
            num9 = 85;
            num2 = 129;
            pls::cs::Int32 num10 = 60;
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(169, 33, 0))));
            PLS_API(([&]() -> void {
                pls::cs::Single cs_arg2 = cnt * num10 / num;
                require(g)->FillRect(num9, num2 + 1, cs_arg2, 4.0f);
            }()));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 104, 122))));
            PLS_API(([&]() -> void {
                pls::cs::Single cs_arg2 = cnt * num10 / num;
                require(g)->FillRect(num9, num2, cs_arg2, 1.0f);
            }()));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 25, 51))));
            PLS_API(([&]() -> void {
                pls::cs::Single cs_arg2 = cnt * num10 / num;
                require(g)->FillRect(num9, num2 + 1, cs_arg2, 1.0f);
            }()));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 7, 37))));
            PLS_API(([&]() -> void {
                pls::cs::Single cs_arg2 = cnt * num10 / num;
                require(g)->FillRect(num9, num2 + 2, cs_arg2, 1.0f);
            }()));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(246, 0, 29))));
            PLS_API(([&]() -> void {
                pls::cs::Single cs_arg2 = cnt * num10 / num;
                require(g)->FillRect(num9, num2 + 3, cs_arg2, 1.0f);
            }()));
        }
        num9 = 83;
        num2 = 112;
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(55, 51, 35))));
        PLS_API(require(g)->DrawString(str, num9, num2));
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(221, 221, 221))));
        PLS_API(require(g)->DrawString(str, num9, num2 - 1));
    }
}

// M:form.BootForm.ChangeState(System.Int32)
void BootForm::ChangeState(pls::cs::Int32 state) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.ChangeState(System.Int32)", game);
    {
        main::AppData::ensure_initialized();

        IntArray array = BootForm::softLabels_()[state];
        PLS_API(([&]() -> void {
            pls::cs::String cs_arg0 = main::AppData::softLabels_()[array[0]];
            pls::cs::String cs_arg1 = main::AppData::softLabels_()[array[1]];
            this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
        }()));
        {
            auto cs_target = this;
            pls::cs::Int32 cs_value = state;
            require(cs_target)->state_.store(cs_value);
        }
        {
            auto cs_target = this;
            pls::cs::Int32 cs_value = 0;
            require(cs_target)->frame_wait.store(cs_value);
        }
    }
}

// M:form.BootForm.InitApp
void BootForm::InitApp() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.InitApp", game);
    {
        PLS_API(pls::kairo::RecordStore::CreateRecordStore());
        pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
        pls::cs::run_finally(
            [&]() {
                {
                    recordStore = PLS_API(pls::kairo::RecordStore::OpenRecordStore(0));
                    PLS_API(require(recordStore)->AddRecord(8192));
                    PLS_API(require(recordStore)->AddRecord(46080));
                    PLS_API(require(recordStore)->AddRecord(46080));
                    PLS_API(require(recordStore)->AddRecord(46080));
                    PLS_API(require(recordStore)->AddRecord(46080));
                }
            },
            [&]() {
                if (!is_null(recordStore)) {
                    PLS_API(require(recordStore)->CloseRecordStore());
                }
                recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
            });
        require(apdat_)->InitSystemSaveData();
        require(apdat_)->SaveSystem();
    }
}

// M:form.BootForm.Run
void BootForm::Run() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.Run", game);
    {
        kl_cfg::Config::ensure_initialized();

        {
            auto cs_target = this;
            pls::cs::Int32 cs_value = 0;
            require(cs_target)->loadMax_.store(cs_value);
        }
        {
            auto cs_target = this;
            pls::cs::Int32 cs_value = 0;
            require(cs_target)->loadCnt_.store(cs_value);
        }
        {
            auto cs_flow_77 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<void> {
                    {
                        if (state_.load() == 0) {
                            {
                                pls::cs::GcCallSite gc_site("M:form.BootForm.Run");
                                PLS_API(kl_lang::JSystem::Gc());
                            }
                            try {
                                if (require(require(apdat_)->sysSave_)->ints[0] < 202) {
                                    require(require(apdat_)->sysSave_)->ints[0] = 202;
                                    require(apdat_)->SaveSystem();
                                }
                                pls::cs::Int32 state = 1;
                                ChangeState(state);
                                require(require(apdat_)->sysSave_)->ints[5]--;
                                require(apdat_)->SaveSystem();
                                if (require(require(apdat_)->sysSave_)->ints[5] <= 0 &&
                                    kl_cfg::Config::REGIST_ENABLE()) {
                                    ChangeState(2);
                                } else {
                                    ChangeState(1);
                                }
                            } catch (const pls::cs::Exception& cs_caught_72) {
                                auto t = pls::cs::capture_exception(cs_caught_72);
                                {
                                    if (kl_cfg::Config::PRINT()) {
                                        PLS_API(kl_unity_util::Log::Info(t));
                                    }
                                    {
                                        auto cs_target = this;
                                        auto cs_value = t;
                                        require(cs_target)->e_.store(cs_value);
                                    }
                                    {
                                        auto cs_target = this;
                                        auto cs_value = literal(u"読み込みに失敗しました。");
                                        require(cs_target)->error_.store(cs_value);
                                    }
                                    ChangeState(3);
                                    return pls::cs::flow_return();
                                }
                            }
                        }
                        if (state_.load() == 2) {
                            try {
                                {
                                    auto cs_target = this;
                                    auto cs_value = require(apdat_)->CgiRegist(literal(u"-1"), literal(u"0"));
                                    require(cs_target)->regist_.store(cs_value);
                                }
                                require(require(apdat_)->sysSave_)->ints[5] = 30;
                                require(apdat_)->SaveSystem();
                                ChangeState(1);
                            } catch (const pls::cs::Exception& cs_caught_73) {
                                auto t2 = pls::cs::capture_exception(cs_caught_73);
                                {
                                    if (kl_cfg::Config::PRINT()) {
                                        PLS_API(kl_unity_util::Log::Info(t2));
                                    }
                                    {
                                        auto cs_target = this;
                                        auto cs_value = t2;
                                        require(cs_target)->e_.store(cs_value);
                                    }
                                    {
                                        auto cs_target = this;
                                        auto cs_value = require(apdat_)->GetHttpErrorText();
                                        require(cs_target)->error_.store(cs_value);
                                    }
                                    ChangeState(3);
                                    return pls::cs::flow_return();
                                }
                            }
                        }
                        if (state_.load() == 1) {
                            try {
                                Load();
                                require(apdat_)->SaveSystem();
                            } catch (const pls::cs::Exception& cs_caught_74) {
                                auto t3 = pls::cs::capture_exception(cs_caught_74);
                                {
                                    if (kl_cfg::Config::PRINT()) {
                                        PLS_API(kl_unity_util::Log::Info(t3));
                                    }
                                    {
                                        auto cs_target = this;
                                        auto cs_value = t3;
                                        require(cs_target)->e_.store(cs_value);
                                    }
                                    {
                                        auto cs_target = this;
                                        auto cs_value = literal(u"読み込みに失敗しました。");
                                        require(cs_target)->error_.store(cs_value);
                                    }
                                    ChangeState(3);
                                    return pls::cs::flow_return();
                                }
                            }
                        }
                        try {
                            {
                                auto cs_target = this;
                                pls::cs::Int32 cs_value = 5;
                                require(cs_target)->bowWait_.store(cs_value);
                            }
                            if ([&]() {
                                    auto cs_left = pls::cs::box(regist_.load());
                                    auto cs_right = pls::cs::box(ByteArray{});
                                    return cs_left != cs_right;
                                }()) {
                                StringArray array = PLS_API(kl_unity_util::StringUtil::Split(
                                    PLS_API(kl_lang::JString::New(regist_.load())), literal(u"\n")));
                                if (PLS_API(kl_lang::JInteger::ParseInt(array[1])) > 202) {
                                    {
                                        auto cs_target = this;
                                        pls::cs::Int32 cs_value = 0;
                                        require(cs_target)->bowWait_.store(cs_value);
                                    }
                                }
                            }
                        } catch (const pls::cs::Exception& cs_caught_75) {
                            pls::cs::capture_exception(cs_caught_75);
                            {
                                {
                                    auto cs_target = this;
                                    pls::cs::Int32 cs_value = 0;
                                    require(cs_target)->bowWait_.store(cs_value);
                                }
                            }
                        }
                        while (bowWait_.load() > 0) {
                            try {
                                java::lang::JThread::Sleep(50ll);
                            } catch (const pls::cs::Exception& cs_caught_76) {
                                auto cs_exception_76 = pls::cs::capture_exception(cs_caught_76);
                                if (pls::cs::exception_is(cs_exception_76,
                                                          "System.Threading.ThreadAbortException")) {
                                    {
                                    }
                                } else {
                                    throw;
                                }
                            }
                            {
                                auto cs_target = this;
                                auto cs_old = require(cs_target)->bowWait_.load();
                                auto cs_new = cs_old - 1;
                                require(cs_target)->bowWait_.store(cs_new);
                            }
                            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                                {
                                    auto cs_target = this;
                                    pls::cs::Int32 cs_value = 0;
                                    require(cs_target)->bowWait_.store(cs_value);
                                }
                            }
                        }
                        ChangeState(4);
                    }
                    return {};
                },
                [&]() {
                    {
                        auto cs_target = this;
                        auto cs_value = pls::cs::Ref<java::lang::JThread>{};
                        require(cs_target)->th_.store(cs_value);
                    }
                });
            if (cs_flow_77.returned())
                return;
        }
    }
}

// M:form.BootForm.Download
void BootForm::Download() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.Download", game);
    {
        main::AppData::ensure_initialized();
        kl_cfg::Config::ensure_initialized();

        StringArray strDatFileName_ = main::AppData::strDatFileName_();
        pls::cs::Ref<pls::kairo::RecordStore> recordStore =
            PLS_API(pls::kairo::RecordStore::OpenRecordStore(1));
        pls::cs::Int32 num = main::AppData::dateFileHead_()[require(require(apdat_)->sysSave_)->ints[2]];
        pls::cs::Int32 num2 = PLS_API(require(recordStore)->GetNumRecords()) - num;
        for (pls::cs::Int32 i = 0; i < num2; ++i) {
            PLS_API(require(recordStore)->RemoveLastRecord());
        }
        {
            auto cs_target = this;
            pls::cs::Int32 cs_value = pls::cs::Int32(strDatFileName_.length()) * 2 + 12;
            require(cs_target)->loadMax_.store(cs_value);
        }
        {
            auto cs_target = this;
            auto cs_left_25 = require(require(apdat_)->sysSave_)->ints[2] * 2;
            auto cs_right_25 = PLS_API(require(recordStore)->GetNumRecords());
            pls::cs::Int32 cs_value = cs_left_25 + cs_right_25;
            require(cs_target)->loadCnt_.store(cs_value);
        }
        for (pls::cs::Int32 j = require(require(apdat_)->sysSave_)->ints[2]; j < strDatFileName_.length();
             ++j) {
            pls::cs::Array<ByteArray> array = ([&]() -> pls::cs::Array<ByteArray> {
                pls::cs::String cs_arg1 = strDatFileName_[j];
                return require(apdat_)->PhpDlFile(pls::cs::String{}, cs_arg1);
            }());
            {
                auto cs_target = this;
                auto cs_old = require(cs_target)->loadCnt_.load();
                auto cs_new = cs_old + 1;
                require(cs_target)->loadCnt_.store(cs_new);
            }
            for (pls::cs::Int32 k = 0; k < array.length(); ++k) {
                PLS_API(([&]() -> pls::cs::Int32 {
                    ByteArray cs_arg0 = array[k];
                    return require(recordStore)->AddRecord(cs_arg0);
                }()));
                {
                    auto cs_target = this;
                    auto cs_old = require(cs_target)->loadCnt_.load();
                    auto cs_new = cs_old + 1;
                    require(cs_target)->loadCnt_.store(cs_new);
                }
            }
            {
                auto cs_target = this;
                auto cs_old = require(cs_target)->loadCnt_.load();
                auto cs_new = cs_old + 1;
                require(cs_target)->loadCnt_.store(cs_new);
            }
            require(require(apdat_)->sysSave_)->ints[2]++;
            require(apdat_)->SaveSystem();
        }
        PLS_API(require(recordStore)->CloseRecordStore());
        {
            auto cs_target = require(require(apdat_)->sysSave_)->ints;
            auto cs_index = 1;
            auto cs_value =
                PLS_API(kl_unity_util::BitUtil::On(require(require(apdat_)->sysSave_)->ints[1], 1));
            cs_target.set_Item(cs_index, cs_value);
        }
        require(apdat_)->SaveSystem();
        java::lang::JThread::Sleep(100ll);
        if (kl_cfg::Config::PRINT()) {
            PLS_API(kl_unity_util::Log::Info(
                pls::cs::String::concat(
                    pls::cs::String::concat(
                        pls::cs::String::concat(literal(u"ダウンロード="), integer_string(loadCnt_.load())),
                        literal(u"/")),
                    integer_string(loadMax_.load())),
                pls::cs::Ref<pls::cs::ExceptionObject>{}));
        }
    }
}

// M:form.BootForm.Load
void BootForm::Load() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.Load", game);
    {
        main::AppData::ensure_initialized();
        kl_cfg::Config::ensure_initialized();

        CreateAllClass();
        {
            auto cs_target = this;
            pls::cs::Int32 cs_value = 30;
            require(cs_target)->loadMax_.store(cs_value);
        }
        {
            auto cs_target = this;
            pls::cs::Int32 cs_value = 0;
            require(cs_target)->loadCnt_.store(cs_value);
        }
        if (!is_null(require(apdat_)->resCom2_)) {
            require(require(apdat_)->resCom2_)->Dispose();
        }
        {
            auto cs_target = this;
            auto cs_old = require(cs_target)->loadCnt_.load();
            auto cs_new = cs_old + 1;
            require(cs_target)->loadCnt_.store(cs_new);
        }
        StringArray array;
        pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
        pls::cs::run_finally(
            [&]() {
                try {
                    pls::cs::Ref<pls::kairo::RecordStore> recordStore =
                        PLS_API(pls::kairo::RecordStore::OpenRecordStore(1));
                    ByteArray data = PLS_API(require(recordStore)->ReadRecord(6));
                    PLS_API(require(recordStore)->CloseRecordStore());
                    jarInflater = kl_unity_util::JarInflater::create(data);
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"player.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::PlayerData>>::make(array.length());
                        require(cs_target)->pData_ = cs_value;
                    }
                    for (pls::cs::Int32 i = 0; i < require(apdat_)->pData_.length(); ++i) {
                        {
                            auto cs_target = require(apdat_)->pData_;
                            auto cs_index = i;
                            auto cs_value = data::PlayerData::create(array[i]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"team.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::TeamData>>::make(array.length());
                        require(cs_target)->tData_ = cs_value;
                    }
                    for (pls::cs::Int32 j = 0; j < require(apdat_)->tData_.length(); ++j) {
                        {
                            auto cs_target = require(apdat_)->tData_;
                            auto cs_index = j;
                            auto cs_value = data::TeamData::create(array[j]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"supervisor.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value =
                            pls::cs::Array<pls::cs::Ref<data::SupervisorData>>::make(array.length());
                        require(cs_target)->svisorData_ = cs_value;
                    }
                    for (pls::cs::Int32 k = 0; k < require(apdat_)->svisorData_.length(); ++k) {
                        {
                            auto cs_target = require(apdat_)->svisorData_;
                            auto cs_index = k;
                            auto cs_value = data::SupervisorData::create(array[k]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"formation.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value =
                            pls::cs::Array<pls::cs::Ref<data::FormationData>>::make(array.length());
                        require(cs_target)->formationData_ = cs_value;
                    }
                    for (pls::cs::Int32 l = 0; l < require(apdat_)->formationData_.length(); ++l) {
                        {
                            auto cs_target = require(apdat_)->formationData_;
                            auto cs_index = l;
                            auto cs_value = data::FormationData::create(array[l]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(kl_unity_util::StringUtil::LoadStringArray(
                        jarInflater, literal(u"mapchip_match.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value =
                            pls::cs::Array<pls::cs::Ref<data::MapchipMatch>>::make(array.length());
                        require(cs_target)->mapchipMatch_ = cs_value;
                    }
                    for (pls::cs::Int32 m = 0; m < require(apdat_)->mapchipMatch_.length(); ++m) {
                        {
                            auto cs_target = require(apdat_)->mapchipMatch_;
                            auto cs_index = m;
                            auto cs_value = data::MapchipMatch::create(array[m]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(kl_unity_util::StringUtil::LoadStringArray(jarInflater,
                                                                               literal(u"mapchip_main.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::MapchipMain>>::make(array.length());
                        require(cs_target)->mapchipMain_ = cs_value;
                    }
                    for (pls::cs::Int32 n = 0; n < require(apdat_)->mapchipMain_.length(); ++n) {
                        {
                            auto cs_target = require(apdat_)->mapchipMain_;
                            auto cs_index = n;
                            auto cs_value = data::MapchipMain::create(array[n]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"stadium.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::StadiumData>>::make(array.length());
                        require(cs_target)->stadiumData_ = cs_value;
                    }
                    for (pls::cs::Int32 num = 0; num < require(apdat_)->stadiumData_.length(); ++num) {
                        {
                            auto cs_target = require(apdat_)->stadiumData_;
                            auto cs_index = num;
                            auto cs_value = data::StadiumData::create(array[num]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"fanActData.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::FanActData>>::make(array.length());
                        require(cs_target)->fanActData_ = cs_value;
                    }
                    for (pls::cs::Int32 num2 = 0; num2 < require(apdat_)->fanActData_.length(); ++num2) {
                        {
                            auto cs_target = require(apdat_)->fanActData_;
                            auto cs_index = num2;
                            auto cs_value = data::FanActData::create(array[num2]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"sponsorData.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::SponsorData>>::make(array.length());
                        require(cs_target)->sponsorData_ = cs_value;
                    }
                    for (pls::cs::Int32 num3 = 0; num3 < require(apdat_)->sponsorData_.length(); ++num3) {
                        {
                            auto cs_target = require(apdat_)->sponsorData_;
                            auto cs_index = num3;
                            auto cs_value = data::SponsorData::create(array[num3]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"fanBonus.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value =
                            pls::cs::Array<pls::cs::Ref<data::FanBonusData>>::make(array.length());
                        require(cs_target)->fanBonus_ = cs_value;
                    }
                    for (pls::cs::Int32 num4 = 0; num4 < require(apdat_)->fanBonus_.length(); ++num4) {
                        {
                            auto cs_target = require(apdat_)->fanBonus_;
                            auto cs_index = num4;
                            auto cs_value = data::FanBonusData::create(array[num4]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"questMatch.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value =
                            pls::cs::Array<pls::cs::Ref<data::QuestMatchData>>::make(array.length());
                        require(cs_target)->qmData_ = cs_value;
                    }
                    for (pls::cs::Int32 num5 = 0; num5 < require(apdat_)->qmData_.length(); ++num5) {
                        {
                            auto cs_target = require(apdat_)->qmData_;
                            auto cs_index = num5;
                            auto cs_value = data::QuestMatchData::create(array[num5]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"tenantData.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::TenantData>>::make(array.length());
                        require(cs_target)->tenantData_ = cs_value;
                    }
                    for (pls::cs::Int32 num6 = 0; num6 < require(apdat_)->tenantData_.length(); ++num6) {
                        {
                            auto cs_target = require(apdat_)->tenantData_;
                            auto cs_index = num6;
                            auto cs_value = data::TenantData::create(array[num6]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"tradePlayer.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::TradeData>>::make(array.length());
                        require(cs_target)->tradeData_ = cs_value;
                    }
                    for (pls::cs::Int32 num7 = 0; num7 < require(apdat_)->tradeData_.length(); ++num7) {
                        {
                            auto cs_target = require(apdat_)->tradeData_;
                            auto cs_index = num7;
                            auto cs_value = data::TradeData::create(array[num7]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(kl_unity_util::StringUtil::LoadStringArray(jarInflater,
                                                                               literal(u"trainingData.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value =
                            pls::cs::Array<pls::cs::Ref<data::TrainingData>>::make(array.length());
                        require(cs_target)->trainingData_ = cs_value;
                    }
                    for (pls::cs::Int32 num8 = 0; num8 < require(apdat_)->trainingData_.length(); ++num8) {
                        {
                            auto cs_target = require(apdat_)->trainingData_;
                            auto cs_index = num8;
                            auto cs_value = data::TrainingData::create(array[num8]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"leagueData.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::LeagueData>>::make(array.length());
                        require(cs_target)->leagueData_ = cs_value;
                    }
                    for (pls::cs::Int32 num9 = 0; num9 < require(apdat_)->leagueData_.length(); ++num9) {
                        {
                            auto cs_target = require(apdat_)->leagueData_;
                            auto cs_index = num9;
                            auto cs_value = data::LeagueData::create(array[num9]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    pls::cs::Ref<kl_io::InputStream> inputStream = pls::cs::Ref<kl_io::InputStream>{};
                    pls::cs::run_finally(
                        [&]() {
                            {
                                inputStream =
                                    PLS_API(require(jarInflater)->GetInputStream(literal(u"manual.txt")));
                                ByteArray bytes = PLS_API(kl_unity_util::StreamUtil::Read(inputStream));
                                {
                                    auto cs_target = apdat_;
                                    auto cs_value = PLS_API(kl_unity_util::StringUtil::Split(
                                        PLS_API(kl_lang::JString::New(bytes)), literal(u"|")));
                                    require(cs_target)->manualTexts_ = cs_value;
                                }
                            }
                        },
                        [&]() {
                            if (!is_null(inputStream)) {
                                PLS_API(require(inputStream)->Close());
                            }
                            inputStream = pls::cs::Ref<kl_io::InputStream>{};
                        });
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    pls::cs::run_finally(
                        [&]() {
                            {
                                inputStream =
                                    PLS_API(require(jarInflater)->GetInputStream(literal(u"talk.txt")));
                                ByteArray bytes2 = PLS_API(kl_unity_util::StreamUtil::Read(inputStream));
                                main::AppData::talks_() = PLS_API(kl_unity_util::StringUtil::Split(
                                    PLS_API(kl_lang::JString::New(bytes2)), literal(u"|")));
                            }
                        },
                        [&]() {
                            if (!is_null(inputStream)) {
                                PLS_API(require(inputStream)->Close());
                            }
                            inputStream = pls::cs::Ref<kl_io::InputStream>{};
                        });
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    pls::cs::run_finally(
                        [&]() {
                            {
                                inputStream =
                                    PLS_API(require(jarInflater)->GetInputStream(literal(u"news.txt")));
                                ByteArray bytes3 = PLS_API(kl_unity_util::StreamUtil::Read(inputStream));
                                StringArray array2 = PLS_API(kl_unity_util::StringUtil::Split(
                                    PLS_API(kl_lang::JString::New(bytes3)), literal(u"|")));
                                {
                                    auto cs_target = apdat_;
                                    auto cs_value = IntArray::make(array2.length());
                                    require(cs_target)->newsTypes_ = cs_value;
                                }
                                {
                                    auto cs_target = apdat_;
                                    auto cs_value = StringArray::make(array2.length());
                                    require(cs_target)->newsTitles_ = cs_value;
                                }
                                {
                                    auto cs_target = apdat_;
                                    auto cs_value = StringArray::make(array2.length());
                                    require(cs_target)->newsTexts_ = cs_value;
                                }
                                for (pls::cs::Int32 num10 = 0; num10 < array2.length(); ++num10) {
                                    StringArray array3 = PLS_API(
                                        kl_unity_util::StringUtil::Split(array2[num10], literal(u"\t")));
                                    {
                                        auto cs_target = require(apdat_)->newsTypes_;
                                        auto cs_index = num10;
                                        auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array3[0]));
                                        cs_target.set_Item(cs_index, cs_value);
                                    }
                                    require(apdat_)->newsTitles_[num10] = array3[1];
                                    require(apdat_)->newsTexts_[num10] = array3[2];
                                }
                            }
                        },
                        [&]() {
                            if (!is_null(inputStream)) {
                                PLS_API(require(inputStream)->Close());
                            }
                            inputStream = pls::cs::Ref<kl_io::InputStream>{};
                        });
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    pls::cs::run_finally(
                        [&]() {
                            {
                                inputStream =
                                    PLS_API(require(jarInflater)->GetInputStream(literal(u"evtmsgs.txt")));
                                ByteArray bytes4 = PLS_API(kl_unity_util::StreamUtil::Read(inputStream));
                                {
                                    auto cs_target = apdat_;
                                    auto cs_value = PLS_API(kl_unity_util::StringUtil::Split(
                                        PLS_API(kl_lang::JString::New(bytes4)), literal(u"|")));
                                    require(cs_target)->eventMsgs_ = cs_value;
                                }
                            }
                        },
                        [&]() {
                            if (!is_null(inputStream)) {
                                PLS_API(require(inputStream)->Close());
                            }
                            inputStream = pls::cs::Ref<kl_io::InputStream>{};
                        });
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    array = PLS_API(
                        kl_unity_util::StringUtil::LoadStringArray(jarInflater, literal(u"events.txt")));
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::EventData>>::make(array.length());
                        require(cs_target)->eventData_ = cs_value;
                    }
                    for (pls::cs::Int32 num11 = 0; num11 < array.length(); ++num11) {
                        {
                            auto cs_target = require(apdat_)->eventData_;
                            auto cs_index = num11;
                            auto cs_value = data::EventData::create(array[num11]);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                    }
                    {
                        auto cs_target = apdat_;
                        auto cs_value = pls::cs::Array<pls::cs::Ref<data::EventData>>::from_object(
                            pls::cs::box(require(apdat_)->AdjustDataList(
                                pls::cs::Array<pls::cs::Ref<data::BaseData>>::covariant_from<
                                    pls::cs::Ref<data::EventData>>(require(apdat_)->eventData_),
                                1)));
                        require(cs_target)->eventData_ = cs_value;
                    }
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                    pls::cs::run_finally(
                        [&]() {
                            {
                                inputStream = PLS_API(
                                    require(jarInflater)->GetInputStream(literal(u"talk_specialChara.txt")));
                                ByteArray bytes5 = PLS_API(kl_unity_util::StreamUtil::Read(inputStream));
                                StringArray array4 = PLS_API(kl_unity_util::StringUtil::Split(
                                    PLS_API(kl_lang::JString::New(bytes5)), literal(u"\n")));
                                pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
                                {
                                    auto cs_target = instance;
                                    auto cs_value = IntArray::make(array4.length());
                                    require(cs_target)->TALK_SCHARA_ID = cs_value;
                                }
                                {
                                    auto cs_target = instance;
                                    auto cs_value = StringArray::make(array4.length());
                                    require(cs_target)->TALK_SCHARA_NAME = cs_value;
                                }
                                {
                                    auto cs_target = instance;
                                    auto cs_value = IntArray::make(array4.length());
                                    require(cs_target)->TALK_SCHARA_IMGINDEX = cs_value;
                                }
                                for (pls::cs::Int32 num12 = 0; num12 < array4.length(); ++num12) {
                                    StringArray array5 = PLS_API(
                                        kl_unity_util::StringUtil::Split(array4[num12], literal(u"\t")));
                                    {
                                        auto cs_target = require(instance)->TALK_SCHARA_ID;
                                        auto cs_index = num12;
                                        auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array5[0]));
                                        cs_target.set_Item(cs_index, cs_value);
                                    }
                                    require(instance)->TALK_SCHARA_NAME[num12] = array5[1];
                                    {
                                        auto cs_target = require(instance)->TALK_SCHARA_IMGINDEX;
                                        auto cs_index = num12;
                                        auto cs_value = PLS_API(kl_lang::JInteger::ParseInt(array5[2]));
                                        cs_target.set_Item(cs_index, cs_value);
                                    }
                                }
                            }
                        },
                        [&]() {
                            if (!is_null(inputStream)) {
                                PLS_API(require(inputStream)->Close());
                            }
                            inputStream = pls::cs::Ref<kl_io::InputStream>{};
                        });
                    {
                        auto cs_target = this;
                        auto cs_old = require(cs_target)->loadCnt_.load();
                        auto cs_new = cs_old + 1;
                        require(cs_target)->loadCnt_.store(cs_new);
                    }
                } catch (const pls::cs::Exception& cs_caught_66) {
                    auto t = pls::cs::capture_exception(cs_caught_66);
                    {
                        PLS_API(kl_unity_util::Log::Info(t));
                        if (kl_cfg::Config::PRINT()) {
                            PLS_API(kl_unity_util::Log::Info(
                                pls::cs::String::concat(literal(u"■BootForm.java load() loadCnt_ = "),
                                                        integer_string(loadCnt_.load())),
                                pls::cs::Ref<pls::cs::ExceptionObject>{}));
                        }
                        if (kl_cfg::Config::PRINT()) {
                            PLS_API(kl_unity_util::Log::Info(
                                literal(u"■BootForm.java load() xlsデータの読み込みでエラー"),
                                pls::cs::Ref<pls::cs::ExceptionObject>{}));
                        }
                    }
                }
            },
            [&]() {
                if (!is_null(jarInflater)) {
                    PLS_API(require(jarInflater)->Close());
                }
                jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
            });
        try {
            if (!is_null(require(apdat_)->resCom2_)) {
                require(require(apdat_)->resCom2_)->Dispose();
            }
            {
                auto cs_target = apdat_;
                auto cs_value = kairo::unity::ui::ResourceManager::create(
                    pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                    pls::cs::String{}, pls::cs::String{}, pls::cs::String{});
                require(cs_target)->resCom2_ = cs_value;
            }
            {
                auto cs_receiver = require(apdat_)->resCom2_;
                ByteArray cs_arg0 = PLS_API(pls::kairo::RecordStore::ReadRecord(1, 1));
                require(cs_receiver)->Load(cs_arg0, 3);
            }
            {
                auto cs_target = this;
                auto cs_old = require(cs_target)->loadCnt_.load();
                auto cs_new = cs_old + 1;
                require(cs_target)->loadCnt_.store(cs_new);
            }
            if (!is_null(require(apdat_)->resHuman2_)) {
                require(require(apdat_)->resHuman2_)->Dispose();
            }
            {
                auto cs_target = apdat_;
                auto cs_value = kairo::unity::ui::ResourceManager::create(
                    pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                    pls::cs::String{}, pls::cs::String{}, pls::cs::String{});
                require(cs_target)->resHuman2_ = cs_value;
            }
            {
                auto cs_receiver = require(apdat_)->resHuman2_;
                ByteArray cs_arg0 = PLS_API(pls::kairo::RecordStore::ReadRecord(1, 9));
                require(cs_receiver)->Load(cs_arg0, 3);
            }
            {
                auto cs_target = this;
                auto cs_old = require(cs_target)->loadCnt_.load();
                auto cs_new = cs_old + 1;
                require(cs_target)->loadCnt_.store(cs_new);
            }
            if (!is_null(require(apdat_)->resHumanHead_)) {
                require(require(apdat_)->resHumanHead_)->Dispose();
            }
            {
                auto cs_target = apdat_;
                auto cs_value = kairo::unity::ui::ResourceManager::create(
                    pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                    pls::cs::String{}, pls::cs::String{}, pls::cs::String{});
                require(cs_target)->resHumanHead_ = cs_value;
            }
            {
                auto cs_receiver = require(apdat_)->resHumanHead_;
                ByteArray cs_arg0 = PLS_API(pls::kairo::RecordStore::ReadRecord(1, 10));
                require(cs_receiver)->Load(cs_arg0, 3);
            }
            {
                auto cs_target = this;
                auto cs_old = require(cs_target)->loadCnt_.load();
                auto cs_new = cs_old + 1;
                require(cs_target)->loadCnt_.store(cs_new);
            }
            if (!is_null(require(apdat_)->resEvent_)) {
                require(require(apdat_)->resEvent_)->Dispose();
            }
            {
                auto cs_target = apdat_;
                auto cs_value = kairo::unity::ui::ResourceManager::create(
                    pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                    pls::cs::String{}, pls::cs::String{}, pls::cs::String{});
                require(cs_target)->resEvent_ = cs_value;
            }
            {
                auto cs_receiver = require(apdat_)->resEvent_;
                ByteArray cs_arg0 = PLS_API(pls::kairo::RecordStore::ReadRecord(1, 3));
                require(cs_receiver)->Load(cs_arg0, 3);
            }
            {
                auto cs_target = this;
                auto cs_old = require(cs_target)->loadCnt_.load();
                auto cs_new = cs_old + 1;
                require(cs_target)->loadCnt_.store(cs_new);
            }
            {
                auto cs_target = apdat_;
                auto cs_value = kairo::unity::ui::ResourceManager::create(
                    pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{},
                    pls::cs::String{}, pls::cs::String{}, pls::cs::String{});
                require(cs_target)->resSound_ = cs_value;
            }
            {
                auto cs_receiver = require(apdat_)->resSound_;
                pls::cs::String cs_arg0 = main::AppData::RSFILENAMESS()[1][11];
                require(cs_receiver)->LoadString(cs_arg0, 3);
            }
            for (pls::cs::Int32 num13 = 0; num13 < main::AppData::BGM().length(); ++num13) {
                PLS_API(
                    require(require(require(apdat_)->resSound_)->sound.get_Item(main::AppData::BGM()[num13]))
                        ->SetLoop(-1));
                PLS_API(
                    require(require(require(apdat_)->resSound_)->sound.get_Item(main::AppData::BGM()[num13]))
                        ->SetSoundType(0));
            }
            for (pls::cs::Int32 num14 = 0; num14 < main::AppData::SE().length(); ++num14) {
                PLS_API(
                    require(require(require(apdat_)->resSound_)->sound.get_Item(main::AppData::SE()[num14]))
                        ->SetSoundType(1));
            }
        } catch (const pls::cs::Exception& cs_caught_67) {
            auto t2 = pls::cs::capture_exception(cs_caught_67);
            {
                PLS_API(kl_unity_util::Log::Info(t2));
                if (kl_cfg::Config::PRINT()) {
                    PLS_API(kl_unity_util::Log::Info(
                        literal(u"■BootForm.java load() リソースデータ読み込みでエラー"),
                        pls::cs::Ref<pls::cs::ExceptionObject>{}));
                }
            }
        }
        if (kl_cfg::Config::DEBUG_CMD()) {
            PLS_API(kl_unity_util::Log::Info(
                pls::cs::String::concat(literal(u"■BootForm.java load() loadCnt_ = "),
                                        integer_string(loadCnt_.load())),
                pls::cs::Ref<pls::cs::ExceptionObject>{}));
        }
        data::TenantData::Load2();
        data::FanBonusData::Load2();
        game::Map::Load2();
        game::MapMain::Load2();
        data::TrainingData::Load2();
        game::MapMain::CreateMap();
        require(game::UserData::GetInstance())->ProcCommonMethod();
        CreateAllClass();
    }
}

// M:form.BootForm.UpdateScoreFromNetwork
void BootForm::UpdateScoreFromNetwork() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.UpdateScoreFromNetwork", game);
    {
        pls::cs::String originalUnusedSlot0;
        ByteArray bytes = require(apdat_)->CgiGetScore(literal(u"0,1"));
        pls::cs::String text = PLS_API(
            kl_unity_util::StringUtil::Split(PLS_API(kl_lang::JString::New(bytes)), literal(u"\n")))[1];
        if (PLS_API(pls::cs::culture_starts_with(text, literal(u",")))) {
            text = pls::cs::String::concat(literal(u"0"), text);
        }
        if (PLS_API(pls::cs::culture_ends_with(text, literal(u",")))) {
            text = pls::cs::String::concat(text, char_string(u'0'));
        }
        if (PLS_API(pls::cs::culture_index_of(text, literal(u",,"))) != -1) {
            pls::cs::Int32 num = PLS_API(pls::cs::culture_index_of(text, literal(u",,")));
            text = PLS_API(kl_unity_util::StringUtil::Replace(text, literal(u",,"), literal(u",0,")));
        }
        StringArray array = PLS_API(kl_unity_util::StringUtil::Split(text, literal(u",")));
        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
            if (kl_lang::StringEx::Length(array[i]) == 0 ||
                PLS_API(kl_lang::JLong::ParseLong(array[i])) == 0ll) {
                if (i == 0) {
                    require(require(apdat_)->sysSave_)->lngs[0] = 0ll;
                    require(require(apdat_)->sysSave_)->lngs[1] = 0ll;
                } else if (i == 1) {
                    require(require(apdat_)->sysSave_)->lngs[2] = 5000ll;
                    require(require(apdat_)->sysSave_)->lngs[3] = 0ll;
                }
                continue;
            }
            pls::cs::Int64 num2 = PLS_API(kl_lang::JLong::ParseLong(array[i]));
            if (i == 0) {
                require(require(apdat_)->sysSave_)->lngs[0] = num2;
                require(require(apdat_)->sysSave_)->lngs[1] = num2;
                require(require(apdat_)->sysSave_)->strs[0] = literal(u"[以前のスコア]");
            } else if (i == 1) {
                require(require(apdat_)->sysSave_)->lngs[2] = num2;
                require(require(apdat_)->sysSave_)->lngs[3] = num2;
                require(require(apdat_)->sysSave_)->strs[1] = literal(u"[以前のスコア]");
            }
        }
        require(apdat_)->SaveSystem();
    }
}

// M:form.BootForm.DivServerData(System.String)
pls::cs::Array<ByteArray> BootForm::DivServerData(pls::cs::String url) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.DivServerData(System.String)", game);
    {
        pls::cs::Array<ByteArray> array = pls::cs::Array<ByteArray>{};
        pls::cs::Int32 num = 0;
        pls::cs::Int32 i = 0;
        bool flag = true;
        pls::cs::Ref<kl_io::DataInputStream> dataInputStream = pls::cs::Ref<kl_io::DataInputStream>{};
        pls::cs::run_finally(
            [&]() {
                try {
                    ByteArray array2 = PLS_API(pls::kairo::Storage::Read(3, false, url));
                    dataInputStream =
                        kl_io::DataInputStream::create(kl_io::ByteArrayInputStream::create(array2));
                    num = array2.length();
                    pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
                    pls::cs::Int32 chunkLength;
                    ByteArray array3;
                    for (; i < num; i += array3.length()) {
                        chunkLength = num - i;
                        if (flag) {
                            chunkLength = PLS_API(require(dataInputStream)->ReadInt());
                            i += 4;
                        }
                        array3 = ByteArray::make(chunkLength);
                        PLS_API(require(dataInputStream)->Read(array3));
                        PLS_API(kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(array3)));
                    }
                    if (PLS_API(kl_java_util::Vector_2_Size(require(vector))) == 0) {
                        array = PLS_API(kl_java_util::JTool::MakeArray<pls::cs::Array<ByteArray>>(
                            IntArray::from({1, 0})));
                    } else {
                        array = pls::cs::Array<ByteArray>::make(
                            PLS_API(kl_java_util::Vector_2_Size(require(vector))));
                    }
                    for (pls::cs::Int32 j = 0; j < PLS_API(kl_java_util::Vector_2_Size(require(vector)));
                         ++j) {
                        array[j] = pls::cs::unbox<ByteArray>(
                            PLS_API(kl_java_util::Vector_2_ElementAt(require(vector), j)));
                    }
                } catch (const pls::cs::Exception& cs_caught_49) {
                    auto t = pls::cs::capture_exception(cs_caught_49);
                    {
                        PLS_API(kl_unity_util::Log::Info(t));
                    }
                }
            },
            [&]() {
                if (!is_null(dataInputStream)) {
                    try {
                        PLS_API(require(dataInputStream)->Close());
                    } catch (const pls::cs::Exception& cs_caught_48) {
                        pls::cs::capture_exception(cs_caught_48);
                        {
                        }
                    }
                }
                dataInputStream = pls::cs::Ref<kl_io::DataInputStream>{};
            });
        return array;
    }
}

// M:form.BootForm.CreateAllClass
void BootForm::CreateAllClass() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.CreateAllClass", game);
    {
        pls::cs::Ref<data::BaseData> baseData = data::BaseData::create();
        pls::cs::Ref<data::EventData> eventData = data::EventData::create();
        pls::cs::Ref<data::FanActData> fanActData = data::FanActData::create();
        pls::cs::Ref<data::FanBonusData> fanBonusData = data::FanBonusData::create();
        pls::cs::Ref<data::FormationData> formationData = data::FormationData::create();
        pls::cs::Ref<data::LeagueData> leagueData = data::LeagueData::create();
        pls::cs::Ref<data::MapchipMain> mapchipMain = data::MapchipMain::create();
        pls::cs::Ref<data::MapchipMatch> mapchipMatch = data::MapchipMatch::create();
        pls::cs::Ref<data::PlayerData> playerData = data::PlayerData::create();
        pls::cs::Ref<data::QuestMatchData> questMatchData = data::QuestMatchData::create();
        pls::cs::Ref<data::SponsorData> sponsorData = data::SponsorData::create();
        pls::cs::Ref<data::StadiumData> stadiumData = data::StadiumData::create();
        pls::cs::Ref<data::SupervisorData> supervisorData = data::SupervisorData::create();
        pls::cs::Ref<data::TeamData> teamData = data::TeamData::create();
        pls::cs::Ref<data::TenantData> tenantData = data::TenantData::create();
        pls::cs::Ref<data::TradeData> tradeData = data::TradeData::create();
        pls::cs::Ref<data::TrainingData> trainingData = data::TrainingData::create();
        pls::cs::Ref<BootForm> bootForm = BootForm::create();
        pls::cs::Ref<DebugForm> debugForm = DebugForm::create();
        pls::cs::Ref<FormManager> formManager = FormManager::create();
        pls::cs::Ref<GameForm> gameForm = GameForm::create();
        pls::cs::Ref<RankForm> rankForm = RankForm::create();
        pls::cs::Ref<SoccerForm> soccerForm = SoccerForm::create();
        pls::cs::Ref<SubForm> subForm = SubForm::create();
        pls::cs::Ref<TitleForm> titleForm = TitleForm::create();
        pls::cs::Ref<game::Ball> ball = game::Ball::create();
        pls::cs::Ref<game::Camera> instance = game::Camera::GetInstance();
        pls::cs::Ref<game::DelayEvent> delayEvent = game::DelayEvent::create();
        pls::cs::Ref<game::GameManager> gameManager = game::GameManager::create();
        pls::cs::Ref<game::GameUtil> gameUtil = game::GameUtil::create();
        pls::cs::Ref<game::Map> map = game::Map::create();
        pls::cs::Ref<game::MapMain> mapMain = game::MapMain::create();
        pls::cs::Ref<game::MapObject> mapObject = game::MapObject::create();
        pls::cs::Ref<game::Player> player = game::Player::create(0);
        pls::cs::Ref<game::TArea> tArea = game::TArea::create();
        pls::cs::Ref<game::TBall> tBall = game::TBall::create(0);
        pls::cs::Ref<game::Team> team = game::Team::create();
        pls::cs::Ref<game::Tenant> tenant = game::Tenant::create(0);
        pls::cs::Ref<game::TGroupArea> tGroupArea = game::TGroupArea::create(0, pls::cs::Ref<game::TArea>{});
        pls::cs::Ref<game::TPlayer> tPlayer = game::TPlayer::create(1);
        pls::cs::Ref<game::UserData> instance2 = game::UserData::GetInstance();
    }
}

// M:form.BootForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t BootForm::GetTouchValue(std::int32_t type_raw, std::int32_t index_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 index = index_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.GetTouchValue(System.Int32,System.Int32)", game);
    {
        return 0;
    }
}

// M:form.BootForm.SetTouchValue(System.Int32,System.Int32)
void BootForm::SetTouchValue(std::int32_t type_raw, std::int32_t value_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 value = value_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.SetTouchValue(System.Int32,System.Int32)", game);
    {
    }
}

// M:form.BootForm.GetHashCode
std::int32_t BootForm::GetHashCode() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.BootForm.GetHashCode", game);
    {
        return PLS_API(([&]() {
            auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));
            return require(cs_receiver)->pls::cs::Object::GetHashCode();
        }()));
    }
}
} // namespace form
}
