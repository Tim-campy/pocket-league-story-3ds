// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.SubForm.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JLong.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.lang.JRunnable.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.system.GameDataRecord.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "system.KairoService.hpp"
#include "system.form.ConnectForm.hpp"
#include "system.form.MatchForm.UserRecord.hpp"
#include "system.form.MatchForm.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

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

void MatchForm::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    MyFormBase::trace_edges(visitor);
    pls::cs::trace_value(userList_, visitor);
    pls::cs::trace_value(dlUser_, visitor);
    pls::cs::trace_value(rankList_, visitor);
    pls::cs::trace_value(error_, visitor);
    pls::cs::trace_value(th_, visitor);
}

static IntArray2 MatchForm_configData__storage{};

static ByteArray MatchForm_upload__storage{};

static PLS_NOINLINE void cs_init_c63e265fb6ff73e9_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(MatchForm_configData__storage, visitor);
        pls::cs::trace_value(MatchForm_upload__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("system.form.MatchForm", flag, []() {
        MatchForm_configData__storage =
            pls::cs::evaluate_type_initializer_field("F:system.form.MatchForm.configData_", [&]() {
                return IntArray2::from({IntArray::from({0, 2, 13}), IntArray::from({0, 2, 13})});
            });
    });
}

void MatchForm::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_c63e265fb6ff73e9_slow(flag);
}

IntArray2& MatchForm::configData_() {
    MatchForm::ensure_initialized();
    return MatchForm_configData__storage;
}

ByteArray& MatchForm::upload_() {
    MatchForm::ensure_initialized();
    return MatchForm_upload__storage;
}

void MatchForm::create_init(pls::cs::Ref<MatchForm> self) {
    MatchForm::ensure_initialized();
    self->userList_ = pls::cs::Array<pls::cs::Ref<MatchForm_UserRecord>>::make(0);
    self->USER_MAX = 3;
    self->TOPRANK_MAX = 7;
    self->rankList_ = PLS_API(
        kl_java_util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<pls::cs::Ref<MatchForm_UserRecord>>>>(
            IntArray::from({2, 0})));
    MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 904);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.#ctor", game);
    {
        self->untilActiveHide_ = true;
    }
}

void MatchForm::create_init(pls::cs::Ref<MatchForm> self, pls::cs::Int32 type) {
    MatchForm::ensure_initialized();
    self->userList_ = pls::cs::Array<pls::cs::Ref<MatchForm_UserRecord>>::make(0);
    self->USER_MAX = 3;
    self->TOPRANK_MAX = 7;
    self->rankList_ = PLS_API(
        kl_java_util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<pls::cs::Ref<MatchForm_UserRecord>>>>(
            IntArray::from({2, 0})));
    MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 904);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.#ctor(System.Int32)", game);
    {
        self->type_ = type;
        self->select_ = 0;
        self->untilActiveHide_ = true;
    }
}

// M:system.form.MatchForm.#ctor
pls::cs::Ref<MatchForm> MatchForm::create() {
    MatchForm::ensure_initialized();
    auto self = pls::cs::make_ref<MatchForm>();
    MatchForm::create_init(self);
    return self;
}

// M:system.form.MatchForm.#ctor(System.Int32)
pls::cs::Ref<MatchForm> MatchForm::create(pls::cs::Int32 type) {
    MatchForm::ensure_initialized();
    auto self = pls::cs::make_ref<MatchForm>();
    MatchForm::create_init(self, type);
    return self;
}

// M:system.form.MatchForm.ToString
pls::cs::String MatchForm::ToString() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.ToString", game);
    {
        return pls::cs::String::concat(literal(u"MatchForm:"), integer_string(type_));
    }
}

// M:system.form.MatchForm.Init
bool MatchForm::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.Init", game);
    {
        MyFormBase::Init();
        if (type_ == 0) {

        } else if ((type_ == 1)) {
            ThreadStart(1);
        }
        SetSoftlabel();
        return true;
    }
}

// M:system.form.MatchForm.Draw(kairo.unity.ui.Graphics)
void MatchForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.Draw(kairo.unity.ui.Graphics)", game);
    {
        MyFormBase::Draw(g);
        pls::cs::Int32 num = x_;
        pls::cs::Int32 num2 = y_;
        if ([&]() {
                auto cs_left = pls::cs::box(PLS_API(require(formMan_)->GetForm(0)));
                auto cs_right = pls::cs::box(require(apdat_)->frmGame_);
                return cs_left == cs_right;
            }()) {
            num2 += MatchForm::configData_()[type_][2];
        }
        if (require(view_)->GetGameWidth() > 240 || require(view_)->GetGameHeight() > 240) {
            num += (require(view_)->GetGameWidth() - 240) / 2;
            num2 += (require(view_)->GetGameHeight() - 240) / 2;
        }
        PLS_API(require(g)->SetOrigin(num, num2));
        pls::cs::run_finally(
            [&]() {
                try {
                    _draw(g);
                } catch (const pls::cs::Exception& cs_caught_271) {
                    pls::cs::capture_exception(cs_caught_271);
                    {
                    }
                }
            },
            [&]() { PLS_API(require(g)->SetOrigin(0, 0)); });
    }
}

// M:system.form.MatchForm._draw(kairo.unity.ui.Graphics)
void MatchForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm._draw(kairo.unity.ui.Graphics)", game);
    {
        if (untilActiveHide_) {
            return;
        }
        if (!require(apdat_)->IsTopForm(this)) {
            pls::cs::Ref<pls::kairo::FormBase> topForm = PLS_API(require(formMan_)->GetTopForm());
            if (PLS_API(require(topForm)->GetId()) != 4) {
                return;
            }
            pls::cs::Ref<pls::game::form::SubForm> subForm =
                pls::cs::unbox<pls::cs::Ref<pls::game::form::SubForm>>(pls::cs::box(topForm));
            if (!require(subForm)->IsMenu() && require(subForm)->type_ != type_) {
                return;
            }
            for (pls::cs::Int32 num = pls::cs::Int32(PLS_API(require(formMan_)->GetFormsNum())) - 2; num >= 0;
                 --num) {
                topForm = PLS_API(require(formMan_)->GetForm(num));
                if (pls::cs::box(topForm) == pls::cs::box(this)) {
                    break;
                }
                if (PLS_API(require(topForm)->GetId()) != 4 ||
                    !require((pls::cs::unbox<pls::cs::Ref<pls::game::form::SubForm>>(pls::cs::box(topForm))))
                         ->IsMenu()) {
                    return;
                }
            }
        }
        if (!Active()) {
            return;
        }
        if (threadState_ != 0 && !draw__MatchForm) {
            ConnectForm::DrawConnect(g);
            return;
        }
        draw__MatchForm = true;
        if (type_ == 0) {

        } else if (type_ == 1) {
        }
    }
}

// M:system.form.MatchForm.Finish
bool MatchForm::Finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.Finish", game);
    {
        MyFormBase::Finish();
        return true;
    }
}

// M:system.form.MatchForm.Resume
bool MatchForm::Resume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.Resume", game);
    {
        MyFormBase::Resume();
        return true;
    }
}

// M:system.form.MatchForm.Update
bool MatchForm::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.Update", game);
    {
        MyFormBase::Update();
        bool result = _update();
        SetSoftlabel();
        return result;
    }
}

// M:system.form.MatchForm._update
bool MatchForm::_update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm._update", game);
    {
        kl_cfg::Config::ensure_initialized();

        untilActiveHide_ = false;
        if (threadState_ != 0) {
            if (threadState_ == 1) {
                return true;
            }
            if (threadState_ == 2) {
                threadState_ = 0;
                if (threadType_ == 2) {
                    require(require(apdat_)->frmGame_)->Init();
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                }
            } else if (threadState_ == 3) {
                threadState_ = 0;
                if (kl_cfg::Config::PRINT()) {
                    PLS_API(kl_unity_util::Log::Info(error_, pls::cs::Ref<pls::cs::ExceptionObject>{}));
                }
                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                    pls::game::form::SubForm::MakeDialog(error_)));
                if (type_ == 1) {
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                }
            }
        }
        loopCounter_ = ((loopCounter_ + 1) % 2147483647 /* Int32.MaxValue */);
        require(require(require(apdat_)->resCom2_)->seb.get_Item(61))->Frame();
        require(require(require(apdat_)->resCom2_)->seb.get_Item(60))->Frame();
        if (type_ == 0) {
            pls::cs::Int32 num = USER_MAX + 1;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num) % num;
            } else if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num) % num;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if (select_ == num - 1) {
                    if (command_ == 0) {
                        ThreadStart(0);
                    } else if (command_ == 1) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            MatchForm::create(1)));
                    }
                } else if (select_ < userList_.length()) {
                    dlUser_ = userList_.get_Item(select_);
                    ThreadStart(2);
                }
            } else if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 1 && require(apdat_)->IsPushSoftLabel(2)) {
            return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
        }
        return true;
    }
}

// M:system.form.MatchForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
IntArray MatchForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String str, pls::cs::Int32 x,
                                pls::cs::Int32 y, pls::cs::Int32 anchor, bool active, pls::cs::Int32 margin,
                                bool cursor) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.form.MatchForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)",
        game);
    {
        return require(apdat_)->DrawCommand(g, str, x, y, anchor, active, margin, cursor, this, loopCounter_);
    }
}

// M:system.form.MatchForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t MatchForm::GetTouchValue(std::int32_t type_raw, std::int32_t index_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 index = index_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.GetTouchValue(System.Int32,System.Int32)",
                     game);
    {
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        switch (type) {
        case 131072: {
            return select_;
        }
        case 196608: {
            return command_;
        }
        default: {
            return MyFormBase::GetTouchValue(type, index);
        }
        }
    }
}

// M:system.form.MatchForm.SetTouchValue(System.Int32,System.Int32)
void MatchForm::SetTouchValue(std::int32_t type_raw, std::int32_t value_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 value = value_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.SetTouchValue(System.Int32,System.Int32)",
                     game);
    {
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        switch (type) {
        case 131072: {
            select_ = value;
            break;
        }
        case 196608: {
            command_ = value;
            break;
        }
        default: {
            MyFormBase::SetTouchValue(type, value);
            break;
        }
        }
    }
}

// M:system.form.MatchForm.CheckMainWindow
bool MatchForm::CheckMainWindow() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.CheckMainWindow", game);
    {
        return false;
    }
}

// M:system.form.MatchForm.SetSoftlabel
void MatchForm::SetSoftlabel() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.SetSoftlabel", game);
    {
        main::AppData::ensure_initialized();

        pls::cs::Int32 num = MatchForm::configData_()[type_][0];
        pls::cs::Int32 num2 = MatchForm::configData_()[type_][1];
        if (threadState_ != 0) {
            num2 = 0;
            num = num2;
        }
        PLS_API(([&]() -> void {
            pls::cs::String cs_arg0 = main::AppData::softLabels_()[num];
            pls::cs::String cs_arg1 = main::AppData::softLabels_()[num2];
            this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
        }()));
    }
}

// M:system.form.MatchForm.ThreadStart(System.Int32)
void MatchForm::ThreadStart(pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.ThreadStart(System.Int32)", game);
    {
        threadType_ = type;
        threadState_ = 1;
        error_ = pls::cs::String{};
        th_ = java::lang::JThread::create(this);
        require(th_)->Start();
    }
}

// M:system.form.MatchForm.Run
void MatchForm::Run() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.Run", game);
    {
        main::AppData::ensure_initialized();
        kl_cfg::Config::ensure_initialized();

        pls::cs::run_finally(
            [&]() {
                try {
                    pls::cs::Ref<KairoService> instance = KairoService::GetInstance();
                    if (!require(instance)->IsLogin()) {
                        require(instance)->ConnectLogin(true, false);
                    }
                    if ([&]() {
                            auto cs_left = pls::cs::box(MatchForm::upload_());
                            auto cs_right = pls::cs::box(ByteArray{});
                            return cs_left != cs_right;
                        }()) {
                        auto cs_left_307 = pls::cs::String::concat(
                            ([&]() {
                                auto cs_left_307 = pls::cs::String::concat(
                                    integer_string(require(require(apdat_)->save_)->ints[1]), literal(u","));
                                auto cs_right_307 = integer_string(require(require(apdat_)->save_)->ints[2]);
                                return pls::cs::String::concat(cs_left_307, cs_right_307);
                            }()),
                            literal(u","));
                        auto cs_right_307 = integer_string(require(require(apdat_)->save_)->ints[3]);
                        pls::cs::String text = pls::cs::String::concat(cs_left_307, cs_right_307);
                        pls::cs::Ref<kairo::unity::system::GameDataRecord> gameDataRecord =
                            kairo::unity::system::GameDataRecord::create(0, true);
                        {
                            pls::cs::Int64 cs_arg1 = pls::cs::cast_integral<pls::cs::Int64>(
                                require(require(apdat_)->save_)->ints[1]);
                            require(gameDataRecord)->AddLong(literal(u"v0"), cs_arg1);
                        }
                        {
                            pls::cs::String cs_arg1 = require(require(apdat_)->save_)->strs[0];
                            require(gameDataRecord)->Add(literal(u"s0"), cs_arg1);
                        }
                        {
                            pls::cs::String cs_arg1 = pls::cs::String::concat(
                                pls::cs::String::concat(text, literal(u",")),
                                integer_string(require(require(apdat_)->save_)->lngs[0]));
                            require(gameDataRecord)->Add(literal(u"s1"), cs_arg1);
                        }
                        require(gameDataRecord)->AddByteArray(literal(u"d0"), MatchForm::upload_());
                        {
                            ByteArray cs_arg1 = PLS_API(pls::kairo::RecordStore::ReadRecord(
                                0, 1 + main::AppData::currentSaveSlot_()));
                            require(gameDataRecord)->AddByteArray(literal(u"d1"), cs_arg1);
                        }
                        require(gameDataRecord)->AddLong(literal(u"is_alive"), 1ll);
                        require(instance)->ConnectGameData(gameDataRecord);
                        MatchForm::upload_() = ByteArray{};
                    }
                    if (threadType_ == 0) {
                        pls::cs::String get = literal(u"friendid, number, v0");
                        pls::cs::String text2 = pls::cs::String::concat(
                            pls::cs::String::concat(literal(u"pid="), integer_string(kl_cfg::Config::PID())),
                            literal(u", ban=0, is_alive=1, reg_friend=1"));
                        pls::cs::Array<pls::cs::Ref<kairo::unity::system::GameDataRecord>> array =
                            ([&]() -> pls::cs::Array<pls::cs::Ref<kairo::unity::system::GameDataRecord>> {
                                pls::cs::Int64 cs_arg4 = pls::cs::cast_integral<pls::cs::Int64>(
                                    require(require(apdat_)->save_)->ints[1]);
                                pls::cs::Int64 cs_arg5 = pls::cs::cast_integral<pls::cs::Int64>(
                                    require(require(apdat_)->save_)->ints[1] - 5);
                                pls::cs::Int64 cs_arg6 = pls::cs::cast_integral<pls::cs::Int64>(
                                    require(require(apdat_)->save_)->ints[1] + 5);
                                return require(instance)->ConnectGameDataSearch(
                                    get, text2, pls::cs::String{}, literal(u"v0"), cs_arg4, cs_arg5, cs_arg6,
                                    literal(u"50,50"), 2);
                            }());
                        pls::cs::Int32 num =
                            PLS_API(kl_lang::JInteger::ParseInt(require(instance)->GetFriendId()));
                        IntArray array2 = IntArray::make(array.length());
                        for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
                            pls::cs::Int32 friendId = require(array.get_Item(i))->GetFriendId();
                            if (friendId == num) {
                                continue;
                            }
                            array2[i] = 100;
                        }
                        pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
                        for (pls::cs::Int32 j = 0; j < USER_MAX; ++j) {
                            pls::cs::Int32 num2 = 0;
                            for (pls::cs::Int32 k = 0; k < array2.length(); ++k) {
                                num2 += array2[k];
                            }
                            if (num2 <= 0) {
                                break;
                            }
                            pls::cs::Int32 num3 = main::AppData::Random(num2);
                            num2 = 0;
                            for (pls::cs::Int32 l = 0; l < array2.length(); ++l) {
                                num2 += array2[l];
                                if (num3 < num2) {
                                    PLS_API(([&]() -> void {
                                        pls::cs::Ref<pls::cs::Object> cs_arg0 =
                                            pls::cs::box(array.get_Item(l));
                                        kl_java_util::Vector_2_AddElement(require(vector), cs_arg0);
                                    }()));
                                    array2[l] = 0;
                                    break;
                                }
                            }
                        }
                        pls::cs::Array<pls::cs::Ref<kairo::unity::system::GameDataRecord>> array3 =
                            pls::cs::Array<pls::cs::Ref<kairo::unity::system::GameDataRecord>>::make(
                                PLS_API(kl_java_util::Vector_2_Size(require(vector))));
                        for (pls::cs::Int32 m = 0; m < PLS_API(kl_java_util::Vector_2_Size(require(vector)));
                             ++m) {
                            pls::cs::Ref<kairo::unity::system::GameDataRecord> gameDataRecord2 =
                                pls::cs::unbox<pls::cs::Ref<kairo::unity::system::GameDataRecord>>(
                                    PLS_API(kl_java_util::Vector_2_ElementAt(require(vector), m)));
                            pls::cs::Int32 cs_arg0_308 = require(gameDataRecord2)->GetFriendId();
                            pls::cs::Int32 cs_arg1_308 = require(gameDataRecord2)->GetNumber();
                            pls::cs::Ref<kairo::unity::system::GameDataRecord> gameDataRecord3 =
                                kairo::unity::system::GameDataRecord::create(cs_arg0_308, cs_arg1_308, true);
                            require(gameDataRecord3)->Add(literal(u"v1"));
                            require(gameDataRecord3)->Add(literal(u"s0"));
                            require(gameDataRecord3)->Add(literal(u"s1"));
                            require(gameDataRecord3)->Add(literal(u"d0"));
                            require(gameDataRecord3)->Add(literal(u"country"));
                            require(gameDataRecord3)->Add(literal(u"t_user.name"));
                            array3.set_Item(m, gameDataRecord3);
                        }
                        array3 = require(instance)->ConnectGameDataGameDataRecordArray(array3);
                        pls::cs::Array<pls::cs::Ref<MatchForm_UserRecord>> array4 =
                            pls::cs::Array<pls::cs::Ref<MatchForm_UserRecord>>::make(array3.length());
                        for (pls::cs::Int32 n = 0; n < array4.length(); ++n) {
                            pls::cs::Ref<kairo::unity::system::GameDataRecord> gameDataRecord4 =
                                array3.get_Item(n);
                            pls::cs::Ref<MatchForm_UserRecord> userRecord = MatchForm_UserRecord::create();
                            {
                                auto cs_target = userRecord;
                                pls::cs::Int32 cs_value = require(gameDataRecord4)->GetFriendId();
                                require(cs_target)->friendId_ = cs_value;
                            }
                            {
                                auto cs_target = userRecord;
                                pls::cs::Int32 cs_value = require(gameDataRecord4)->GetNumber();
                                require(cs_target)->number_ = cs_value;
                            }
                            {
                                auto cs_target = userRecord;
                                pls::cs::Int32 cs_value =
                                    pls::cs::to_int32(require(gameDataRecord4)->GetValue(literal(u"v1")));
                                require(cs_target)->visitor_ = cs_value;
                            }
                            {
                                auto cs_target = userRecord;
                                auto cs_value = require(gameDataRecord4)->GetString(literal(u"s0"));
                                require(cs_target)->innName_ = cs_value;
                            }
                            {
                                auto cs_target = userRecord;
                                auto cs_value = require(gameDataRecord4)->GetString(literal(u"country"));
                                require(cs_target)->country_ = cs_value;
                            }
                            {
                                auto cs_target = userRecord;
                                auto cs_value = require(gameDataRecord4)->GetString(literal(u"t_user.name"));
                                require(cs_target)->name_ = cs_value;
                            }
                            {
                                auto cs_target = userRecord;
                                auto cs_value = PLS_API(
                                    pls::kairo::Image::Load(require(gameDataRecord4)->GetData(literal(u"d0")),
                                                            static_cast<pls::kairo::Image::Format>(-1),
                                                            static_cast<pls::kairo::Image::Filter>(-1)));
                                require(cs_target)->image_ = cs_value;
                            }
                            StringArray array5 = PLS_API(kl_unity_util::StringUtil::Split(
                                require(gameDataRecord4)->GetString(literal(u"s1")), literal(u",")));
                            {
                                auto cs_target = userRecord;
                                pls::cs::Int32 cs_value = PLS_API(kl_lang::JInteger::ParseInt(array5[0]));
                                require(cs_target)->year_ = cs_value;
                            }
                            {
                                auto cs_target = userRecord;
                                pls::cs::Int64 cs_value = pls::cs::cast_integral<pls::cs::Int64>(
                                    PLS_API(kl_lang::JInteger::ParseInt(array5[1])));
                                require(cs_target)->money_ = cs_value;
                            }
                            {
                                auto cs_target = userRecord;
                                pls::cs::Int32 cs_value = PLS_API(kl_lang::JInteger::ParseInt(array5[2]));
                                require(cs_target)->week_ = cs_value;
                            }
                            {
                                auto cs_target = userRecord;
                                pls::cs::Int64 cs_value = PLS_API(kl_lang::JLong::ParseLong(array5[3]));
                                require(cs_target)->money_ = cs_value;
                            }
                            array4.set_Item(n, userRecord);
                        }
                        userList_ = array4;
                    } else if (threadType_ == 1) {
                        pls::cs::String get2 = literal(u"friendid, number, v0, t_user.name, s0");
                        pls::cs::String text3 = pls::cs::String::concat(
                            pls::cs::String::concat(literal(u"pid="), integer_string(kl_cfg::Config::PID())),
                            literal(u", ban=0, is_alive=1"));
                        pls::cs::Array<pls::cs::Array<pls::cs::Ref<kairo::unity::system::GameDataRecord>>>
                            array6 = ([&]() -> pls::cs::Array<pls::cs::Array<
                                                pls::cs::Ref<kairo::unity::system::GameDataRecord>>> {
                                pls::cs::String cs_arg0 = require(instance)->GetFriendId();
                                pls::cs::String cs_arg1 = get2;
                                pls::cs::String cs_arg2 = text3;
                                pls::cs::String cs_arg4 = PLS_API(kl_lang::JString::ValueOfInt(TOPRANK_MAX));
                                return require(instance)->ConnectGameDataRanking(cs_arg0, cs_arg1, cs_arg2,
                                                                                 literal(u"v0"), cs_arg4,
                                                                                 true, pls::cs::String{});
                            }());
                        for (pls::cs::Int32 num4 = 0; num4 < array6.length(); ++num4) {
                            {
                                auto cs_target = rankList_;
                                auto cs_index = num4;
                                auto cs_value = pls::cs::Array<pls::cs::Ref<MatchForm_UserRecord>>::make(
                                    array6[num4].length());
                                cs_target.set_Item(cs_index, cs_value);
                            }
                            for (pls::cs::Int32 num5 = 0; num5 < rankList_[num4].length(); ++num5) {
                                pls::cs::Ref<kairo::unity::system::GameDataRecord> gameDataRecord5 =
                                    array6[num4].get_Item(num5);
                                pls::cs::Ref<MatchForm_UserRecord> userRecord2 = (([&]() {
                                    auto cs_target = rankList_[num4];
                                    auto cs_index = num5;
                                    auto cs_value = MatchForm_UserRecord::create();
                                    cs_target.set_Item(cs_index, cs_value);
                                    return cs_value;
                                }()));
                                {
                                    auto cs_target = userRecord2;
                                    pls::cs::Int32 cs_value = require(gameDataRecord5)->GetFriendId();
                                    require(cs_target)->friendId_ = cs_value;
                                }
                                {
                                    auto cs_target = userRecord2;
                                    pls::cs::Int32 cs_value = require(gameDataRecord5)->GetNumber();
                                    require(cs_target)->number_ = cs_value;
                                }
                                {
                                    auto cs_target = userRecord2;
                                    pls::cs::Int32 cs_value =
                                        pls::cs::to_int32(require(gameDataRecord5)->GetValue(literal(u"v0")));
                                    require(cs_target)->visitor_ = cs_value;
                                }
                                {
                                    auto cs_target = userRecord2;
                                    auto cs_value =
                                        require(gameDataRecord5)->GetString(literal(u"t_user.name"));
                                    require(cs_target)->name_ = cs_value;
                                }
                                {
                                    auto cs_target = userRecord2;
                                    auto cs_value = require(gameDataRecord5)->GetString(literal(u"s0"));
                                    require(cs_target)->innName_ = cs_value;
                                }
                                {
                                    auto cs_target = userRecord2;
                                    pls::cs::Int32 cs_value = pls::cs::to_int32(
                                        require(gameDataRecord5)->GetValue(literal(u"_rank")));
                                    require(cs_target)->rank_ = cs_value;
                                }
                                if (is_null(require(userRecord2)->name_)) {
                                    require(userRecord2)->name_ = literal(u"--");
                                }
                            }
                        }
                    } else if (threadType_ == 2) {
                        pls::cs::Ref<kairo::unity::system::GameDataRecord> gameDataRecord6 =
                            kairo::unity::system::GameDataRecord::create(require(dlUser_)->friendId_,
                                                                         require(dlUser_)->number_, true);
                        require(gameDataRecord6)->Add(literal(u"v1"), literal(u"v1+1"));
                        require(gameDataRecord6)->Add(literal(u"d1"));
                        require(gameDataRecord6)->Add(literal(u"v1"));
                        gameDataRecord6 = require(instance)->ConnectGameData(gameDataRecord6);
                        ByteArray data = require(gameDataRecord6)->GetData(literal(u"d1"));
                        PLS_API(pls::kairo::RecordStore::WriteRecord(0, 3 + main::AppData::currentSaveSlot_(),
                                                                     data));
                        require(apdat_)->LoadGame(main::AppData::currentSaveSlot_(), true);
                    }
                    threadState_ = 2;
                } catch (const pls::cs::Exception& cs_caught_272) {
                    pls::cs::capture_exception(cs_caught_272);
                    {
                        error_ = kairo::unity::io::Http::PopErrorText();
                        threadState_ = 3;
                        th_ = pls::cs::Ref<java::lang::JThread>{};
                    }
                }
            },
            [&]() { th_ = pls::cs::Ref<java::lang::JThread>{}; });
    }
}

// M:system.form.MatchForm.GetHashCode
std::int32_t MatchForm::GetHashCode() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.MatchForm.GetHashCode", game);
    {
        return PLS_API(([&]() {
            auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));
            return require(cs_receiver)->pls::cs::Object::GetHashCode();
        }()));
    }
}
} // namespace system::form
}
