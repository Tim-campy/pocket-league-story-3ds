// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.FormationData.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.SoccerForm.hpp"
#include "form.SpForm.hpp"
#include "form.SubForm.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureProperty.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.SurfaceManagerBase.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.TextFormat.hpp"
#include "kairo.unity.util.Language.hpp"
#include "kfw.panel.MainPanel.hpp"
#include "main.AppData.hpp"
#include "surface.GamePad.hpp"
#include "surface.GameView.hpp"
#include "surface.SurfaceManager.hpp"
#include "surface.TouchEffectManager.hpp"
#include "system.KairoText.hpp"
#include "system.form.FriendForm.hpp"
#include "system.friend.MyFriend.hpp"
#include "system.friend.ui.Friend.hpp"
#include "system.friend.ui.FriendData.hpp"
#include "system.panel.InputPanel.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace form {

void MyFormBase::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::kairo::FormBase::trace_edges(visitor);
    pls::cs::trace_value(app_, visitor);
    pls::cs::trace_value(apdat_, visitor);
    pls::cs::trace_value(canvas_, visitor);
    pls::cs::trace_value(formMan_, visitor);
    pls::cs::trace_value(view_, visitor);
    pls::cs::trace_value(pad_, visitor);
    pls::cs::trace_value(dialog_, visitor);
    pls::cs::trace_value(drawWindow_tmp, visitor);
}

static pls::cs::Int32 MyFormBase_fontSize__storage{};

static pls::cs::Int32 MyFormBase_WNDFLAG_BOX_storage{};

static pls::cs::Int32 MyFormBase_WNDFLAG_LEFT_ARW_storage{};

static pls::cs::Int32 MyFormBase_WNDFLAG_RIGHT_ARW_storage{};

static pls::cs::Int32 MyFormBase_WNDRET_BOTTOM_storage{};

static pls::cs::Int32 MyFormBase_WNDRET_BOX_BOTTOM_storage{};

static pls::cs::Int32 MyFormBase_WNDRET_BOX_END_storage{};

static pls::cs::Int32 MyFormBase_WNDRET_BOX_LEFT_storage{};

static pls::cs::Int32 MyFormBase_WNDRET_BOX_RIGHT_storage{};

static pls::cs::Int32 MyFormBase_WNDRET_BOX_TOP_storage{};

static pls::cs::Int32 MyFormBase_WNDRET_LEFT_storage{};

static pls::cs::Int32 MyFormBase_WNDRET_RIGHT_storage{};

static pls::cs::Int32 MyFormBase_WNDRET_TOP_storage{};

static PLS_NOINLINE void cs_init_5451b2154f09f4c5_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(MyFormBase_fontSize__storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDFLAG_BOX_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDFLAG_LEFT_ARW_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDFLAG_RIGHT_ARW_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDRET_BOTTOM_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDRET_BOX_BOTTOM_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDRET_BOX_END_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDRET_BOX_LEFT_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDRET_BOX_RIGHT_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDRET_BOX_TOP_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDRET_LEFT_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDRET_RIGHT_storage, visitor);
        pls::cs::trace_value(MyFormBase_WNDRET_TOP_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("form.MyFormBase", flag, []() {
        MyFormBase_WNDFLAG_LEFT_ARW_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.MyFormBase.WNDFLAG_LEFT_ARW", [&]() { return 1; });
        MyFormBase_WNDFLAG_RIGHT_ARW_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.MyFormBase.WNDFLAG_RIGHT_ARW", [&]() { return 2; });
        MyFormBase_WNDFLAG_BOX_storage =
            pls::cs::evaluate_type_initializer_field("F:form.MyFormBase.WNDFLAG_BOX", [&]() { return 4; });
        MyFormBase_WNDRET_RIGHT_storage =
            pls::cs::evaluate_type_initializer_field("F:form.MyFormBase.WNDRET_RIGHT", [&]() { return 1; });
        MyFormBase_WNDRET_BOTTOM_storage =
            pls::cs::evaluate_type_initializer_field("F:form.MyFormBase.WNDRET_BOTTOM", [&]() { return 2; });
        MyFormBase_WNDRET_LEFT_storage =
            pls::cs::evaluate_type_initializer_field("F:form.MyFormBase.WNDRET_LEFT", [&]() { return 3; });
        MyFormBase_WNDRET_BOX_TOP_storage =
            pls::cs::evaluate_type_initializer_field("F:form.MyFormBase.WNDRET_BOX_TOP", [&]() { return 4; });
        MyFormBase_WNDRET_BOX_RIGHT_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.MyFormBase.WNDRET_BOX_RIGHT", [&]() { return 5; });
        MyFormBase_WNDRET_BOX_BOTTOM_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.MyFormBase.WNDRET_BOX_BOTTOM", [&]() { return 6; });
        MyFormBase_WNDRET_BOX_LEFT_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.MyFormBase.WNDRET_BOX_LEFT", [&]() { return 7; });
        MyFormBase_WNDRET_BOX_END_storage =
            pls::cs::evaluate_type_initializer_field("F:form.MyFormBase.WNDRET_BOX_END", [&]() { return 8; });
    });
}

void MyFormBase::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_5451b2154f09f4c5_slow(flag);
}

pls::cs::Int32& MyFormBase::fontSize_() {
    MyFormBase::ensure_initialized();
    return MyFormBase_fontSize__storage;
}

pls::cs::Int32& MyFormBase::WNDFLAG_BOX() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDFLAG_BOX_storage;
}

pls::cs::Int32& MyFormBase::WNDFLAG_LEFT_ARW() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDFLAG_LEFT_ARW_storage;
}

pls::cs::Int32& MyFormBase::WNDFLAG_RIGHT_ARW() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDFLAG_RIGHT_ARW_storage;
}

pls::cs::Int32& MyFormBase::WNDRET_BOTTOM() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDRET_BOTTOM_storage;
}

pls::cs::Int32& MyFormBase::WNDRET_BOX_BOTTOM() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDRET_BOX_BOTTOM_storage;
}

pls::cs::Int32& MyFormBase::WNDRET_BOX_END() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDRET_BOX_END_storage;
}

pls::cs::Int32& MyFormBase::WNDRET_BOX_LEFT() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDRET_BOX_LEFT_storage;
}

pls::cs::Int32& MyFormBase::WNDRET_BOX_RIGHT() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDRET_BOX_RIGHT_storage;
}

pls::cs::Int32& MyFormBase::WNDRET_BOX_TOP() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDRET_BOX_TOP_storage;
}

pls::cs::Int32& MyFormBase::WNDRET_LEFT() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDRET_LEFT_storage;
}

pls::cs::Int32& MyFormBase::WNDRET_RIGHT() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDRET_RIGHT_storage;
}

pls::cs::Int32& MyFormBase::WNDRET_TOP() {
    MyFormBase::ensure_initialized();
    return MyFormBase_WNDRET_TOP_storage;
}

void MyFormBase::create_init(pls::cs::Ref<MyFormBase> self, pls::cs::Int32 id) {
    MyFormBase::ensure_initialized();
    pls::cs::static_pointer_cast<pls::kairo::FormBase>(self)->source_construct(id);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.#ctor(System.Int32)", game);
    {
    }
}

// M:form.MyFormBase.#ctor(System.Int32)
pls::cs::Ref<MyFormBase> MyFormBase::create(pls::cs::Int32 id) {
    MyFormBase::ensure_initialized();
    auto self = pls::cs::make_ref<MyFormBase>();
    MyFormBase::create_init(self, id);
    return self;
}

// M:form.MyFormBase.Init
bool MyFormBase::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Init", game);
    {
        surface::SurfaceManager::ensure_initialized();

        app_ = PLS_API(pls::kairo::IApplication::GetCurrentApp());
        apdat_ = main::AppData::GetInstance();
        canvas_ = PLS_API(pls::kairo::Canvas::GetInstance());
        formMan_ = FormManager::GetInstance();
        view_ = surface::SurfaceManager::view_();
        pad_ = surface::SurfaceManager::gpad_();
        result_ = -1;
        PLS_API(require(canvas_)->DecideKeyState());
        {
            auto cs_receiver = surface::TouchEffectManager::GetInstance();
            pls::cs::Ref<kairo::unity::surface::SurfaceBase> cs_arg0 = view_;
            require(cs_receiver)->RemoveSurface(cs_arg0);
        }
        return true;
    }
}

// M:form.MyFormBase.Update
bool MyFormBase::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Update", game);
    {
        update_ = ((update_ + 1) % 2147483647 /* Int32.MaxValue */);
        return true;
    }
}

// M:form.MyFormBase.Draw(kairo.unity.ui.Graphics)
void MyFormBase::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Draw(kairo.unity.ui.Graphics)", game);
    {
        draw_ = ((draw_ + 1) % 2147483647 /* Int32.MaxValue */);
    }
}

// M:form.MyFormBase.Resume
bool MyFormBase::Resume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Resume", game);
    {
        return true;
    }
}

// M:form.MyFormBase.Finish
bool MyFormBase::Finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Finish", game);
    {
        {
            auto cs_receiver = surface::TouchEffectManager::GetInstance();
            pls::cs::Ref<kairo::unity::surface::SurfaceBase> cs_arg0 = view_;
            require(cs_receiver)->RemoveSurface(cs_arg0);
        }
        return true;
    }
}

// M:form.MyFormBase.Yen(System.Int64)
pls::cs::String MyFormBase::Yen(pls::cs::Int64 value) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Yen(System.Int64)", game);
    {
        return MyFormBase::Yen(value, true);
    }
}

// M:form.MyFormBase.Yen(System.Int64,System.Boolean)
pls::cs::String MyFormBase::Yen(pls::cs::Int64 value, bool cs) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Yen(System.Int64,System.Boolean)", game);
    {
        return pls::cs::String::concat(MyFormBase::Unit(value, cs), literal(u"円"));
    }
}

// M:form.MyFormBase.Manyen(System.Int64)
pls::cs::String MyFormBase::Manyen(pls::cs::Int64 value) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Manyen(System.Int64)", game);
    {
        return MyFormBase::Yen(value, true);
    }
}

// M:form.MyFormBase.Manyen(System.Int64,System.Boolean)
pls::cs::String MyFormBase::Manyen(pls::cs::Int64 value, bool omit) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Manyen(System.Int64,System.Boolean)", game);
    {
        return MyFormBase::Yen(value, true);
    }
}

// M:form.MyFormBase.Manyen(System.Int64,System.Boolean,System.Boolean)
pls::cs::String MyFormBase::Manyen(pls::cs::Int64 value, bool omit, bool cs) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.MyFormBase.Manyen(System.Int64,System.Boolean,System.Boolean)", game);
    {
        if (omit) {
            return pls::cs::String::concat(MyFormBase::Unit(value, cs), literal(u"万"));
        }
        return pls::cs::String::concat(MyFormBase::Unit(value, cs), literal(u"万円"));
    }
}

// M:form.MyFormBase.Unit(System.Int64,System.Boolean)
pls::cs::String MyFormBase::Unit(pls::cs::Int64 value, bool cs) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Unit(System.Int64,System.Boolean)", game);
    {
        bool flag = (value < pls::cs::cast_integral<pls::cs::Int64>(0));
        pls::cs::String text =
            PLS_API(kl_lang::JString::ValueOfLong(PLS_API(kl_lang::JMath::AbsLong(value))));
        if (cs) {
            pls::cs::String str = text;
            text = pls::cs::String(u"");
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
        }
        if (flag) {
            text = pls::cs::String::concat(literal(u"-"), text);
        }
        return text;
    }
}

// M:form.MyFormBase.Comma(System.Int64)
pls::cs::String MyFormBase::Comma(pls::cs::Int64 value) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Comma(System.Int64)", game);
    {
        return MyFormBase::Unit(value, true);
    }
}

// M:form.MyFormBase.Format(System.String,System.Int32)
pls::cs::String MyFormBase::Format(pls::cs::String str, pls::cs::Int32 len) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Format(System.String,System.Int32)", game);
    {
        return PLS_API(kl_unity_util::StringUtil::FormatString(str, len));
    }
}

// M:form.MyFormBase.Format(System.String,System.Int32,System.Char)
pls::cs::String MyFormBase::Format(pls::cs::String str, pls::cs::Int32 len, char16_t padding) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Format(System.String,System.Int32,System.Char)",
                     game);
    {
        return PLS_API(kl_unity_util::StringUtil::FormatString(str, len, padding));
    }
}

// M:form.MyFormBase.Format(System.Int32,System.Int32)
pls::cs::String MyFormBase::FormatInt(pls::cs::Int32 v, pls::cs::Int32 len) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Format(System.Int32,System.Int32)", game);
    {
        return PLS_API(
            kl_unity_util::StringUtil::FormatString(PLS_API(kl_lang::JString::ValueOfInt(v)), len));
    }
}

// M:form.MyFormBase.Format(System.Int32,System.Int32,System.Char)
pls::cs::String MyFormBase::FormatInt(pls::cs::Int32 v, pls::cs::Int32 len, char16_t padding) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Format(System.Int32,System.Int32,System.Char)",
                     game);
    {
        return PLS_API(
            kl_unity_util::StringUtil::FormatString(PLS_API(kl_lang::JString::ValueOfInt(v)), len, padding));
    }
}

// M:form.MyFormBase.Format(System.Int64,System.Int32)
pls::cs::String MyFormBase::FormatLong(pls::cs::Int64 v, pls::cs::Int32 len) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Format(System.Int64,System.Int32)", game);
    {
        return PLS_API(
            kl_unity_util::StringUtil::FormatString(PLS_API(kl_lang::JString::ValueOfLong(v)), len));
    }
}

// M:form.MyFormBase.Format(System.Int64,System.Int32,System.Char)
pls::cs::String MyFormBase::FormatLong(pls::cs::Int64 v, pls::cs::Int32 len, char16_t padding) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Format(System.Int64,System.Int32,System.Char)",
                     game);
    {
        return PLS_API(
            kl_unity_util::StringUtil::FormatString(PLS_API(kl_lang::JString::ValueOfLong(v)), len, padding));
    }
}

// M:form.MyFormBase.Replace(System.String,System.String)
pls::cs::String MyFormBase::Replace(pls::cs::String text, pls::cs::String arg) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Replace(System.String,System.String)", game);
    {
        return PLS_API(kl_unity_util::StringUtil::Replace(text, arg));
    }
}

// M:form.MyFormBase.Replace(System.String,System.String,System.String)
pls::cs::String MyFormBase::Replace(pls::cs::String text, pls::cs::String oldStr, pls::cs::String newStr) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.MyFormBase.Replace(System.String,System.String,System.String)", game);
    {
        return PLS_API(kl_unity_util::StringUtil::Replace(text, oldStr, newStr));
    }
}

// M:form.MyFormBase.Active
bool MyFormBase::Active() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Active", game);
    {
        pls::cs::Ref<FormManager> instance = FormManager::GetInstance();
        return pls::cs::box(this) == pls::cs::box(PLS_API(require(instance)->GetTopForm())) &&
               PLS_API(require(app_)->Focus());
    }
}

// M:form.MyFormBase.Push(System.String)
bool MyFormBase::Push(pls::cs::String text) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Push(System.String)", game);
    {
        return PLS_API(
            static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::MakeDialog(text)));
    }
}

// M:form.MyFormBase.Push(System.String,System.String)
bool MyFormBase::Push(pls::cs::String text, pls::cs::String cmds) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Push(System.String,System.String)", game);
    {
        dialog_ = SubForm::MakeDialog(text, cmds);
        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(dialog_));
    }
}

// M:form.MyFormBase.Push(System.String,System.String,System.Int32)
bool MyFormBase::Push(pls::cs::String text, pls::cs::String cmds, pls::cs::Int32 defaultSelect) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Push(System.String,System.String,System.Int32)",
                     game);
    {
        dialog_ = SubForm::MakeDialog(text, cmds, defaultSelect);
        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(dialog_));
    }
}

// M:form.MyFormBase.Pop(System.Int32)
bool MyFormBase::Pop(pls::cs::Int32 result) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Pop(System.Int32)", game);
    {
        result_ = result;
        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
    }
}

// M:form.MyFormBase.Check(System.Int32,System.Int32)
bool MyFormBase::Check(pls::cs::Int32 flag, pls::cs::Int32 bit) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Check(System.Int32,System.Int32)", game);
    {
        return (flag & bit) != 0;
    }
}

// M:form.MyFormBase.Jp
bool MyFormBase::Jp() {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Jp", game);
    {
        return PLS_API(kl_unity_util::Language::Japanese());
    }
}

// M:form.MyFormBase.En
bool MyFormBase::En() {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.En", game);
    {
        return kairo::unity::util::Language::English();
    }
}

// M:form.MyFormBase.GetTouchValue(System.Int32,System.Int32)
std::int32_t MyFormBase::GetTouchValue(std::int32_t type_raw, std::int32_t index_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 index = index_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.GetTouchValue(System.Int32,System.Int32)", game);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        switch (type) {
        case 65536: {
            return 0;
        }
        case 393216: {
            return require(require(apdat_)->save_)->ints[12];
        }
        case 458752: {
            return require(require(apdat_)->save_)->ints[13];
        }
        case 524288: {
            return require(require(apdat_)->sysSave_)->ints[3];
        }
        case 589824: {
            return require(require(apdat_)->sysSave_)->ints[4];
        }
        case 655360: {
            return require(require(apdat_)->sysSave_)->ints[14];
        }
        case 720896: {
            return require(require(apdat_)->sysSave_)->ints[13];
        }
        case 131072: {
            return require(require(apdat_)->frmSoccer_)->select_;
        }
        case 262144: {
            return require(require(apdat_)->frmSoccer_)->scrollValue_;
        }
        case 786432: {
            return require(instance)->et_cur[0];
        }
        case 851968: {
            return require(instance)->et_cur[1];
        }
        case 917504: {
            return require(instance)->et_cur[2];
        }
        case 983040: {
            return require(instance)->et_cur[3];
        }
        case 1048576: {
            return require(instance)->et_cur[4];
        }
        case 1114112: {
            return require(instance)->et_cur[5];
        }
        case 1179648: {
            return require(instance)->et_cur[6];
        }
        case 1441792: {
            return 0;
        }
        case 1507328: {
            return 0;
        }
        default: {
            if (kl_cfg::Config::PRINT()) {
                throw pls::cs::ArgumentException(
                    pls::cs::String::concat(
                        pls::cs::String::concat(literal(u"getTouchValue() : not found value type ("),
                                                integer_string(type)),
                        literal(u")"))
                        .utf8());
            }
            break;
        }
        }
        return 0;
    }
}

// M:form.MyFormBase.SetTouchValue(System.Int32,System.Int32)
void MyFormBase::SetTouchValue(std::int32_t type_raw, std::int32_t value_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 value = value_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.SetTouchValue(System.Int32,System.Int32)", game);
    {
        kl_cfg::Config::ensure_initialized();
        main::AppData::ensure_initialized();

        pls::cs::Ref<pls::kairo::SoundPlayer> instance = PLS_API(pls::kairo::SoundPlayer::GetInstance());
        pls::cs::Ref<game::UserData> instance2 = game::UserData::GetInstance();
        type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
        switch (type) {
        case 65536: {
            PLS_API(require(canvas_)->KeyClick(pls::cs::Int32(1) << value));
            break;
        }
        case 393216: {
            require(require(apdat_)->save_)->ints[12] = value;
            kairo::unity::ui::Canvas::SetLinearFilterEnable(require(canvas_), false);
            PLS_API(require(formMan_)->DrawAllForms());
            break;
        }
        case 458752: {
            require(require(apdat_)->save_)->ints[13] = value;
            break;
        }
        case 524288: {
            if (require(require(apdat_)->sysSave_)->ints[3] == value) {
                break;
            }
            require(require(apdat_)->sysSave_)->ints[3] = value;
            PLS_API(([&]() -> void {
                pls::cs::Int32 cs_arg1 = require(require(apdat_)->sysSave_)->ints[3] * 51;
                require(instance)->SetVolume(0, cs_arg1);
            }()));
            PLS_API(([&]() -> void {
                bool cs_arg1 = require(require(apdat_)->sysSave_)->ints[3] == 0;
                require(instance)->SetMute(0, cs_arg1);
            }()));
            PLS_API(require(instance)->ReflectVolumeAndMute());
            break;
        }
        case 589824: {
            if (require(require(apdat_)->sysSave_)->ints[4] == value) {
                break;
            }
            require(require(apdat_)->sysSave_)->ints[4] = value;
            PLS_API(([&]() -> void {
                pls::cs::Int32 cs_arg1 = require(require(apdat_)->sysSave_)->ints[4] * 51;
                require(instance)->SetVolume(1, cs_arg1);
            }()));
            PLS_API(([&]() -> void {
                bool cs_arg1 = require(require(apdat_)->sysSave_)->ints[4] == 0;
                require(instance)->SetMute(1, cs_arg1);
            }()));
            PLS_API(require(instance)->ReflectVolumeAndMute());
            break;
        }
        case 655360: {
            require(require(apdat_)->sysSave_)->ints[14] = value;
            require(require(apdat_)->frmGame_)->offYear_ = -1;
            require(require(apdat_)->frmGame_)->offMonth_ = -1;
            require(require(apdat_)->frmGame_)->offHour_ = -1;
            require(require(apdat_)->frmGame_)->offMoney_ = -1ll;
            require(require(apdat_)->frmGame_)->offSeason_ = -1;
            PLS_API(require(formMan_)->DrawAllForms());
            require(require(apdat_)->frmGame_)->SetAllDraw();
            break;
        }
        case 720896: {
            if (kl_cfg::Config::ADMOB_ENABLE()) {

            } else {
                require(require(apdat_)->sysSave_)->ints[13] = value;
                if (value == -1) {
                    PLS_API(require(app_)->SetOrientation(-1));
                } else {
                    PLS_API(([&]() -> void {
                        auto cs_receiver = app_;
                        pls::cs::Int32 cs_arg0 = PLS_API(require(app_)->GetOrientation());
                        require(cs_receiver)->SetOrientation(cs_arg0);
                    }()));
                }
                PLS_API(require(formMan_)->DrawAllForms());
                if (!is_null(PLS_API(([&]() -> pls::cs::Ref<kairo::unity::surface::SurfaceManagerBase> {
                        auto cs_canvas = canvas_;
                        return pls::cs::unbox<pls::cs::Ref<kairo::unity::surface::SurfaceManagerBase>>(
                            require(cs_canvas)->GetSourceSurfaceManager());
                    }())))) {
                    require(PLS_API(([&]() -> pls::cs::Ref<kairo::unity::surface::SurfaceManagerBase> {
                        auto cs_canvas = canvas_;
                        return pls::cs::unbox<pls::cs::Ref<kairo::unity::surface::SurfaceManagerBase>>(
                            require(cs_canvas)->GetSourceSurfaceManager());
                    }())))
                        ->CheckScreenRotation(true);
                }
            }
            break;
        }
        case 786432: {
            require(instance2)->et_cur[0] = value;
            break;
        }
        case 851968: {
            {
                pls::cs::Int32 num = require(instance2)->et_cur[1];
                require(instance2)->et_cur[1] = value;
                if ([&]() -> bool {
                        auto cs_left = require(instance2)->et_cur[1];
                        auto cs_right = PLS_API(
                            kl_java_util::Vector_2_Size(require(require(instance2)->editTest_formation)));
                        return cs_left >= cs_right;
                    }()) {
                    {
                        auto cs_target = require(instance2)->et_cur;
                        auto cs_index = 1;
                        auto cs_value = PLS_API(kl_java_util::Vector_2_Size(
                                            require(require(instance2)->editTest_formation))) -
                                        1;
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                if (num != require(instance2)->et_cur[1]) {
                    require(instance2)->SetEditForPos(require(instance2)->isSoccerForm_);
                    pls::cs::Ref<data::FormationData> formationData =
                        pls::cs::unbox<pls::cs::Ref<data::FormationData>>(
                            PLS_API(([&]() -> pls::cs::Ref<pls::cs::Object> {
                                auto cs_receiver = require(instance2)->editTest_formation;
                                pls::cs::Int32 cs_arg0 = require(instance2)->et_cur[1];
                                return kl_java_util::Vector_2_ElementAt(require(cs_receiver), cs_arg0);
                            }())));
                    if (PLS_API(kl_unity_util::BitUtil::Check(require(formationData)->flag_, 2))) {
                        pls::cs::Ref<pls::kairo::FormBase> topForm = PLS_API(require(formMan_)->GetTopForm());
                        PLS_API(([&]() -> void {
                            pls::cs::String cs_arg0 = main::AppData::softLabels_()[12];
                            pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                            require(topForm)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{},
                                                           pls::cs::String{});
                        }()));
                    } else {
                        pls::cs::Ref<pls::kairo::FormBase> topForm2 =
                            PLS_API(require(formMan_)->GetTopForm());
                        PLS_API(([&]() -> void {
                            pls::cs::String cs_arg0 = main::AppData::softLabels_()[13];
                            pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
                            require(topForm2)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{},
                                                            pls::cs::String{});
                        }()));
                    }
                }
                break;
            }
        }
        case 917504: {
            require(instance2)->et_cur[2] = value;
            break;
        }
        case 983040: {
            require(instance2)->et_cur[3] = value;
            break;
        }
        case 1048576: {
            require(instance2)->et_cur[4] = value;
            break;
        }
        case 1114112: {
            require(instance2)->et_cur[5] = value;
            break;
        }
        case 1179648: {
            require(instance2)->et_cur[6] = value;
            break;
        }
        case 131072: {
            require(require(apdat_)->frmSoccer_)->select_ = value;
            break;
        }
        case 262144: {
            require(require(apdat_)->frmSoccer_)->scrollValue_ = value;
            break;
        }
        case 1441792: {
            break;
        }
        case 1507328: {
            break;
        }
        default: {
            if (kl_cfg::Config::PRINT()) {
                throw pls::cs::ArgumentException(
                    pls::cs::String::concat(
                        pls::cs::String::concat(literal(u"setTouchValue() : not found value type ("),
                                                integer_string(type)),
                        literal(u")"))
                        .utf8());
            }
            break;
        }
        }
    }
}
} // namespace form

namespace system::form {

// M:system.form.FriendForm._update
bool FriendForm::_update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.form.FriendForm._update", game);
    {
        kl_cfg::Config::ensure_initialized();

        MyFormBase::Update();
        pls::cs::Ref<pls::game::form::FormManager> instance = pls::game::form::FormManager::GetInstance();
        loopCounter_ = ((loopCounter_ + 1) % 2147483647 /* Int32.MaxValue */);
        if ([&]() {
                pls::cs::Ref<java::lang::JThread> cs_left = th_;
                pls::cs::Ref<java::lang::JThread> cs_right = pls::cs::Ref<java::lang::JThread>{};
                return java::lang::JThread::op_Inequality(cs_left, cs_right);
            }()) {
            return true;
        }
        if (type_ == 0) {
            pls::cs::Int32 num = 2;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num) % num;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1) % num;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if (select_ == 0) {
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = pls::cs::String(u"");
                        pls::cs::String cs_arg1 = pls::cs::String(u"");
                        static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->SetSoftLabel(
                            cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
                    }()));
                    PLS_API(require(canvas_)->UpdateSoftLabel());
                    pls::cs::run_finally(
                        [&]() {
                            {
                                pls::cs::Ref<panel::InputPanel> inputPanel =
                                    ([&]() -> pls::cs::Ref<panel::InputPanel> {
                                        pls::cs::String cs_arg0 = KairoText::LT(literal(u"ﾆｯｸﾈｰﾑ"));
                                        pls::cs::String cs_arg1 = text_;
                                        return panel::InputPanel::create(cs_arg0, cs_arg1, 12, 2,
                                                                         pls::cs::String{});
                                    }());
                                {
                                    pls::cs::String cs_arg0 =
                                        PLS_API(pls::cs::string_trim(KairoText::LT(literal(u"ﾆｯｸﾈｰﾑ "))));
                                    require(inputPanel)->SetItemName(cs_arg0);
                                }
                                {
                                    pls::cs::Ref<pls::kairo::Canvas> cs_arg0 = canvas_;
                                    pls::cs::Delegate<void(pls::cs::String)> cs_arg1 =
                                        pls::cs::Delegate<void(pls::cs::String)>::from_closure(
                                            pls::cs::raw(this),
                                            std::string("M:system.form.FriendForm._update:7953"),
                                            [self = this](pls::cs::String ret) -> void {
                                                {
                                                    if (!is_null(ret) && kl_lang::StringEx::Length(ret) > 0) {
                                                        self->text_ = ret;
                                                    }
                                                }
                                            },
                                            this);
                                    require(inputPanel)->Show(cs_arg0, cs_arg1);
                                }
                            }
                        },
                        [&]() {
                            {
                                pls::cs::Int32 cs_arg0 = FriendForm::softLabels_()[type_][0];
                                pls::cs::Int32 cs_arg1 = FriendForm::softLabels_()[type_][1];
                                SetSoftLabel(cs_arg0, cs_arg1);
                            }
                            PLS_API(require(formMan_)->DrawAllForms());
                        });
                } else if (select_ == 1) {
                    if (kl_lang::StringEx::Length(text_) == 0) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            pls::game::form::SubForm::MakeDialog(
                                KairoText::LT(literal(u"ﾆｯｸﾈｰﾑを入力してください")))));
                    }
                    if (kl_lang::StringEx::Length(PLS_API(pls::cs::string_trim(text_))) == 0) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            pls::game::form::SubForm::MakeDialog(
                                KairoText::LT(literal(u"空白以外で入力してください")))));
                    }
                    if (!friend_::ui::FriendData::IsEffectiveRegistName(text_)) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            pls::game::form::SubForm::MakeDialog(
                                KairoText::LT(literal(u"利用できない文字があります")))));
                    }
                    th_ = java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(
                        pls::cs::raw(this), std::string("M:system.form.FriendForm._update:8668"),
                        [self = this]() -> void {
                            {
                                kl_cfg::Config::ensure_initialized();

                                pls::cs::run_finally(
                                    [&]() {
                                        try {
                                            {
                                                auto cs_receiver = self->friendData_;
                                                pls::cs::String cs_arg0 = self->text_;
                                                pls::cs::Int64 cs_arg1 =
                                                    pls::cs::cast_integral<pls::cs::Int64>(PLS_API(
                                                        require(require(require(self->friendData_)->friSave_)
                                                                    ->ints.get_Item(1))
                                                            ->Get()));
                                                require(cs_receiver)->CgiRegistFriend(cs_arg0, cs_arg1);
                                            }
                                            require(self->friendData_)->SetFriendName(self->text_);
                                            pls::cs::Ref<kairo::unity::system::KairoBase> instance7 =
                                                kairo::unity::system::KairoBase::GetInstance();
                                            require(instance7)->Save();
                                            bool flag9 = false;
                                            pls::cs::Ref<pls::game::form::FormManager> instance8 =
                                                pls::game::form::FormManager::GetInstance();
                                            for (pls::cs::Int32 i = 0;
                                                 i < PLS_API(require(instance8)->GetFormsNum()); ++i) {
                                                if (PLS_API(require(PLS_API(require(instance8)->GetForm(i)))
                                                                ->GetId()) == 0) {
                                                    flag9 = true;
                                                    break;
                                                }
                                            }
                                            if (!flag9) {
                                                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                            ->Push(FriendForm::create(2)));
                                            }
                                            PLS_API(
                                                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Pop());
                                        } catch (const pls::cs::Exception& cs_caught_244) {
                                            auto t2 = pls::cs::capture_exception(cs_caught_244);
                                            {
                                                if (kl_cfg::Config::PRINT()) {
                                                    PLS_API(kl_unity_util::Log::Info(t2));
                                                }
                                                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                            ->Push(self->MakeErrorDialog()));
                                            }
                                        }
                                    },
                                    [&]() { self->th_ = pls::cs::Ref<java::lang::JThread>{}; });
                            }
                        },
                        this));
                    require(th_)->Start();
                    return true;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 1) {
            pls::cs::Int32 num2 = 2;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num2) % num2;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1) % num2;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if (select_ == 0) {
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = pls::cs::String(u"");
                        pls::cs::String cs_arg1 = pls::cs::String(u"");
                        static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->SetSoftLabel(
                            cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
                    }()));
                    PLS_API(require(canvas_)->UpdateSoftLabel());
                    pls::cs::run_finally(
                        [&]() {
                            {
                                pls::cs::Ref<panel::InputPanel> inputPanel2 =
                                    ([&]() -> pls::cs::Ref<panel::InputPanel> {
                                        pls::cs::String cs_arg0 = KairoText::LT(literal(u"ﾆｯｸﾈｰﾑ"));
                                        pls::cs::String cs_arg1 = text_;
                                        return panel::InputPanel::create(cs_arg0, cs_arg1, 12, 2,
                                                                         pls::cs::String{});
                                    }());
                                {
                                    pls::cs::String cs_arg0 =
                                        PLS_API(pls::cs::string_trim(KairoText::LT(literal(u"ﾆｯｸﾈｰﾑ "))));
                                    require(inputPanel2)->SetItemName(cs_arg0);
                                }
                                {
                                    pls::cs::Ref<pls::kairo::Canvas> cs_arg0 = canvas_;
                                    pls::cs::Delegate<void(pls::cs::String)> cs_arg1 =
                                        pls::cs::Delegate<void(pls::cs::String)>::from_closure(
                                            pls::cs::raw(this),
                                            std::string("M:system.form.FriendForm._update:10202"),
                                            [self = this](pls::cs::String ret_2) -> void {
                                                {
                                                    if (!is_null(ret_2) &&
                                                        kl_lang::StringEx::Length(ret_2) > 0) {
                                                        self->text_ = ret_2;
                                                    }
                                                }
                                            },
                                            this);
                                    require(inputPanel2)->Show(cs_arg0, cs_arg1);
                                }
                            }
                        },
                        [&]() {
                            {
                                pls::cs::Int32 cs_arg0 = FriendForm::softLabels_()[type_][0];
                                pls::cs::Int32 cs_arg1 = FriendForm::softLabels_()[type_][1];
                                SetSoftLabel(cs_arg0, cs_arg1);
                            }
                            PLS_API(require(formMan_)->DrawAllForms());
                        });
                } else if (select_ == 1) {
                    if (kl_lang::StringEx::Length(text_) == 0) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            pls::game::form::SubForm::MakeDialog(
                                KairoText::LT(literal(u"ﾆｯｸﾈｰﾑを入力してください")))));
                    }
                    if (kl_lang::StringEx::Length(PLS_API(pls::cs::string_trim(text_))) == 0) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            pls::game::form::SubForm::MakeDialog(
                                KairoText::LT(literal(u"空白以外で入力してください")))));
                    }
                    if (!friend_::ui::FriendData::IsEffectiveRegistName(text_)) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            pls::game::form::SubForm::MakeDialog(
                                KairoText::LT(literal(u"利用できない文字があります")))));
                    }
                    if (PLS_API(([&]() -> bool {
                            auto cs_arg0 = text_;
                            auto cs_arg1 = PLS_API(kl_unity_util::SecureString::ToStringSecureStringStatic(
                                require(require(friendData_)->friSave_)->strs.get_Item(0)));
                            return string_equals(cs_arg0, cs_arg1);
                        }()))) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                    }
                    th_ = java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(
                        pls::cs::raw(this), std::string("M:system.form.FriendForm._update:11031"),
                        [self = this]() -> void {
                            {
                                kl_cfg::Config::ensure_initialized();

                                pls::cs::run_finally(
                                    [&]() {
                                        try {
                                            require(self->friendData_)->CgiRegistFriend(self->text_, -1ll);
                                            {
                                                auto cs_target =
                                                    require(require(self->friendData_)->friSave_)->strs;
                                                auto cs_index = 0;
                                                auto cs_value = PLS_API(
                                                    kl_unity_util::SecureString::ValueOf(self->text_));
                                                cs_target.set_Item(cs_index, cs_value);
                                            }
                                            pls::cs::Ref<kairo::unity::system::KairoBase> instance7_2 =
                                                kairo::unity::system::KairoBase::GetInstance();
                                            require(instance7_2)->Save();
                                            PLS_API(
                                                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Pop());
                                        } catch (const pls::cs::Exception& cs_caught_245) {
                                            auto t2_2 = pls::cs::capture_exception(cs_caught_245);
                                            {
                                                if (kl_cfg::Config::PRINT()) {
                                                    PLS_API(kl_unity_util::Log::Info(t2_2));
                                                }
                                                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                            ->Push(self->MakeErrorDialog()));
                                            }
                                        }
                                    },
                                    [&]() { self->th_ = pls::cs::Ref<java::lang::JThread>{}; });
                            }
                        },
                        this));
                    require(th_)->Start();
                    return true;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 2) {
            pls::cs::Int32 num3 = 6;
            if (PLS_API(require(canvas_)->CheckKeyPulse(131072))) {
                select_ = (select_ - 1 + num3) % num3;
                if (select_ < 5 && page_ * 5 + select_ >= require(friendData_)->FRIEND_MAX) {
                    select_ = (require(friendData_)->FRIEND_MAX - 1) % 5;
                }
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(524288))) {
                select_ = (select_ + 1 + num3) % num3;
                if (select_ < 5 && page_ * 5 + select_ >= require(friendData_)->FRIEND_MAX) {
                    select_ = 5;
                }
            }
            if (select_ < 5) {
                pls::cs::Int32 num4 = (require(friendData_)->FRIEND_MAX + 5 - 1) / 5;
                if (PLS_API(require(canvas_)->CheckKeyPulse(65536))) {
                    page_ = (page_ - 1 + num4) % num4;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(262144))) {
                    page_ = (page_ + 1) % num4;
                }
                if (select_ < 5 && page_ * 5 + select_ >= require(friendData_)->FRIEND_MAX) {
                    select_ = (require(friendData_)->FRIEND_MAX - 1) % 5;
                }
            } else {
                pls::cs::Int32 num5 = 2;
                if (PLS_API(require(canvas_)->CheckKeyPulse(65536))) {
                    select2_ = (select2_ - 1 + num5) % num5;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(262144))) {
                    select2_ = (select2_ + 1) % num5;
                }
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if (select_ < 5) {
                    pls::cs::Int32 num6 = page_ * 5 + select_;
                    pls::cs::Ref<friend_::ui::Friend> friend_ = pls::cs::Ref<friend_::ui::Friend>{};
                    bool flag = false;
                    if (PLS_API(kl_java_util::Vector_2_Size(require(require(friendData_)->applyList_))) > 0 &&
                        ([&]() -> bool {
                            auto cs_left = PLS_API(
                                kl_java_util::Vector_2_Size(require(require(friendData_)->friendList_)));
                            auto cs_right = require(friendData_)->FRIEND_MAX;
                            return cs_left < cs_right;
                        }())) {
                        if (require(friendData_)->FRIEND_MAX <= 5) {
                            if (num6 == require(friendData_)->FRIEND_MAX - 1) {
                                flag = true;
                            } else if (num6 < PLS_API(kl_java_util::Vector_2_Size(
                                                  require(require(friendData_)->friendList_)))) {
                                friend_ = pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(
                                    PLS_API(kl_java_util::Vector_2_ElementAt(
                                        require(require(friendData_)->friendList_), num6)));
                            }
                        } else if (num6 == 0) {
                            flag = true;
                        } else if (num6 - 1 < PLS_API(kl_java_util::Vector_2_Size(
                                                  require(require(friendData_)->friendList_)))) {
                            friend_ = pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(friendData_)->friendList_), num6 - 1)));
                        }
                    } else if (num6 < PLS_API(kl_java_util::Vector_2_Size(
                                          require(require(friendData_)->friendList_)))) {
                        friend_ = pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(
                            PLS_API(kl_java_util::Vector_2_ElementAt(
                                require(require(friendData_)->friendList_), num6)));
                    }
                    if (!is_null(friend_)) {
                        pls::cs::Ref<FriendForm> friendForm = FriendForm::create(8);
                        require(friendForm)->friend_ = friend_;
                        return PLS_API(
                            static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(friendForm));
                    }
                    if (flag) {
                        pls::cs::Ref<FriendForm> friendForm2 = FriendForm::create(6);
                        {
                            auto cs_target = friendForm2;
                            auto cs_value = pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(
                                PLS_API(kl_java_util::Vector_2_FirstElement(
                                    require(require(friendData_)->applyList_))));
                            require(cs_target)->friend_ = cs_value;
                        }
                        return PLS_API(
                            static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(friendForm2));
                    }
                    if (num6 < require(friendData_)->FRIEND_MAX) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            FriendForm::create(3)));
                    }
                } else {
                    if (select2_ == 0) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            FriendForm::create(11)));
                    }
                    if (select2_ == 1) {
                        try {
                            {
                                pls::cs::String cs_arg0 = require(friendData_)->INTRODUCTION_SUBJECT;
                                pls::cs::String cs_arg1 = PLS_API(([&]() -> pls::cs::String {
                                    pls::cs::String cs_arg0 = require(friendData_)->INTRODUCTION_TEXT;
                                    pls::cs::String cs_arg1 = require(friendData_)->GetFriendID();
                                    return kl_unity_util::StringUtil::Replace(cs_arg0, cs_arg1);
                                }()));
                                friend_::ui::FriendData::ActionSendMail(cs_arg0, cs_arg1);
                            }
                        } catch (const pls::cs::Exception& cs_caught_246) {
                            pls::cs::capture_exception(cs_caught_246);
                            {
                                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                                    MakeErrorDialog()));
                            }
                        }
                    }
                }
            } else if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 3) {
            pls::cs::Int32 num7 = 2;
            if (PLS_API(require(canvas_)->CheckKeyPulse(131072))) {
                select_ = (select_ - 1 + num7) % num7;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(524288))) {
                select_ = (select_ + 1) % num7;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if (select2_ != 0) {
                    select2_ = 0;
                    try {
                        pls::cs::String friendID = require(friendData_)->GetFriendID();
                        {
                            pls::cs::String cs_arg0 = require(friendData_)->INTRODUCTION_SUBJECT;
                            pls::cs::String cs_arg1 = PLS_API(kl_unity_util::StringUtil::Replace(
                                require(friendData_)->INTRODUCTION_TEXT, friendID));
                            friend_::ui::FriendData::ActionSendMail(cs_arg0, cs_arg1);
                        }
                    } catch (const pls::cs::Exception& cs_caught_247) {
                        pls::cs::capture_exception(cs_caught_247);
                        {
                            return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                                MakeErrorDialog()));
                        }
                    }
                } else if (select_ == 0) {
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = pls::cs::String(u"");
                        pls::cs::String cs_arg1 = pls::cs::String(u"");
                        static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->SetSoftLabel(
                            cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
                    }()));
                    PLS_API(require(canvas_)->UpdateSoftLabel());
                    pls::cs::run_finally(
                        [&]() {
                            {
                                pls::cs::String cs_arg0_300 = KairoText::LT(literal(u"フレンドのID"));
                                pls::cs::String cs_arg1_300 = text_;
                                pls::cs::String cs_arg4_300 =
                                    PLS_API(pls::cs::string_trim(KairoText::LT(literal(u"フレンドのID "))));
                                pls::cs::Ref<panel::InputPanel> inputPanel3 =
                                    panel::InputPanel::create(cs_arg0_300, cs_arg1_300, 9, 0, cs_arg4_300);
                                {
                                    pls::cs::Ref<pls::kairo::Canvas> cs_arg0 = canvas_;
                                    pls::cs::Delegate<void(pls::cs::String)> cs_arg1 =
                                        pls::cs::Delegate<void(pls::cs::String)>::from_closure(
                                            pls::cs::raw(this),
                                            std::string("M:system.form.FriendForm._update:15510"),
                                            [self = this](pls::cs::String ret_3) -> void {
                                                {
                                                    if (!is_null(ret_3) &&
                                                        kl_lang::StringEx::Length(ret_3) > 0) {
                                                        self->text_ = ret_3;
                                                    }
                                                }
                                            },
                                            this);
                                    require(inputPanel3)->Show(cs_arg0, cs_arg1);
                                }
                            }
                        },
                        [&]() {
                            {
                                pls::cs::Int32 cs_arg0 = FriendForm::softLabels_()[type_][0];
                                pls::cs::Int32 cs_arg1 = FriendForm::softLabels_()[type_][1];
                                SetSoftLabel(cs_arg0, cs_arg1);
                            }
                            PLS_API(require(formMan_)->DrawAllForms());
                        });
                } else if (select_ == 1) {
                    text2_ = text_;
                    text2_ = PLS_API(([&]() -> pls::cs::String {
                        pls::cs::String cs_arg0 = text2_;
                        pls::cs::String cs_arg2 = pls::cs::String(u"");
                        return kl_unity_util::StringUtil::Replace(cs_arg0, literal(u","), cs_arg2);
                    }()));
                    if (kl_lang::StringEx::Length(text2_) == 0) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            pls::game::form::SubForm::MakeDialog(
                                KairoText::LT(literal(u"フレンドIDを入力してください")))));
                    }
                    th_ = java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(
                        pls::cs::raw(this), std::string("M:system.form.FriendForm._update:16046"),
                        [self = this]() -> void {
                            {
                                kl_cfg::Config::ensure_initialized();

                                pls::cs::run_finally(
                                    [&]() {
                                        try {
                                            pls::cs::Ref<friend_::ui::Friend> friend2 =
                                                require(self->friendData_)->CgiSearchFriend(self->text2_);
                                            pls::cs::Ref<FriendForm> createdValue = FriendForm::create(4);
                                            require(createdValue)->friend_ = friend2;
                                            PLS_API(
                                                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Push(
                                                    createdValue));
                                        } catch (const pls::cs::Exception& cs_caught_248) {
                                            auto t2_3 = pls::cs::capture_exception(cs_caught_248);
                                            {
                                                if (kl_cfg::Config::PRINT()) {
                                                    PLS_API(kl_unity_util::Log::Info(t2_3));
                                                }
                                                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                            ->Push(self->MakeErrorDialog(
                                                                kairo::unity::io::Http::PopErrorText(),
                                                                pls::cs::String{})));
                                            }
                                        }
                                    },
                                    [&]() { self->th_ = pls::cs::Ref<java::lang::JThread>{}; });
                            }
                        },
                        this));
                    require(th_)->Start();
                    return true;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 4) {
            pls::cs::Int32 num8 = 2;
            if (PLS_API(require(canvas_)->CheckKeyPulse(65536))) {
                select_ = (select_ - 1 + num8) % num8;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(262144))) {
                select_ = (select_ + 1) % num8;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if (select_ == 0) {
                    th_ = java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(
                        pls::cs::raw(this), std::string("M:system.form.FriendForm._update:16966"),
                        [self = this]() -> void {
                            {
                                kl_cfg::Config::ensure_initialized();

                                pls::cs::run_finally(
                                    [&]() {
                                        try {
                                            {
                                                auto cs_receiver = self->friendData_;
                                                pls::cs::String cs_arg0 = PLS_API(
                                                    kl_unity_util::SecureString::ToStringSecureStringStatic(
                                                        require(self->friend_)->friendId_));
                                                require(cs_receiver)->CgiApplyFriend(cs_arg0);
                                            }
                                            pls::cs::Ref<FriendForm> createdValue_2 = FriendForm::create(5);
                                            require(createdValue_2)->friend_ = self->friend_;
                                            PLS_API(
                                                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Push(
                                                    createdValue_2));
                                            PLS_API(
                                                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Pop());
                                        } catch (const pls::cs::Exception& cs_caught_249) {
                                            auto t2_4 = pls::cs::capture_exception(cs_caught_249);
                                            {
                                                if (kl_cfg::Config::PRINT()) {
                                                    PLS_API(kl_unity_util::Log::Info(t2_4));
                                                }
                                                PLS_API(
                                                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                        ->Push(([&]() -> pls::cs::Ref<pls::kairo::FormBase> {
                                                            pls::cs::String cs_arg0 =
                                                                kairo::unity::io::Http::PopErrorText();
                                                            pls::cs::String cs_arg1 = PLS_API(
                                                                kl_unity_util::SecureString::
                                                                    ToStringSecureStringStatic(
                                                                        require(self->friend_)->name_));
                                                            return self->MakeErrorDialog(cs_arg0, cs_arg1);
                                                        }())));
                                            }
                                        }
                                    },
                                    [&]() { self->th_ = pls::cs::Ref<java::lang::JThread>{}; });
                            }
                        },
                        this));
                    require(th_)->Start();
                    return true;
                }
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 5) {
            pls::cs::Int32 num9 = 2;
            if (PLS_API(require(canvas_)->CheckKeyPulse(65536))) {
                select_ = (select_ - 1 + num9) % num9;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(262144))) {
                select_ = (select_ + 1) % num9;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if (select_ == 0) {
                    friend_::ui::FriendData::ActionSendMail(require(friendData_)->INTRODUCTION_APPLY_SUBJECT,
                                                            require(friendData_)->INTRODUCTION_APPLY_TEXT);
                } else {
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 6) {
            if (!is_null(next_)) {
                if (require(next_)->type_ == 8) {
                    if (PLS_API(kl_java_util::Vector_2_Size(require(require(friendData_)->applyList_))) > 0) {
                        friend_ = pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(PLS_API(
                            kl_java_util::Vector_2_FirstElement(require(require(friendData_)->applyList_))));
                    } else {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                    }
                } else {
                    th_ = java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(
                        pls::cs::raw(this), std::string("M:system.form.FriendForm._update:18417"),
                        [self = this]() -> void {
                            {
                                kl_cfg::Config::ensure_initialized();

                                pls::cs::run_finally(
                                    [&]() {
                                        try {
                                            require(self->friendData_)->RefreshFriendList();
                                            if (PLS_API(kl_java_util::Vector_2_Size(
                                                    require(require(self->friendData_)->applyList_))) > 0) {
                                                self->friend_ =
                                                    pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(
                                                        PLS_API(kl_java_util::Vector_2_FirstElement(require(
                                                            require(self->friendData_)->applyList_))));
                                            } else {
                                                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                            ->Pop());
                                            }
                                        } catch (const pls::cs::Exception& cs_caught_250) {
                                            auto t2_5 = pls::cs::capture_exception(cs_caught_250);
                                            {
                                                if (kl_cfg::Config::PRINT()) {
                                                    PLS_API(kl_unity_util::Log::Info(t2_5));
                                                }
                                                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                            ->Push(self->MakeErrorDialog(
                                                                kairo::unity::io::Http::PopErrorText(),
                                                                pls::cs::String{})));
                                            }
                                        }
                                    },
                                    [&]() { self->th_ = pls::cs::Ref<java::lang::JThread>{}; });
                            }
                        },
                        this));
                    require(th_)->Start();
                    if (PLS_API(kl_java_util::Vector_2_Size(require(require(friendData_)->applyList_))) ==
                        0) {
                        return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                    }
                }
                next_ = pls::cs::Ref<FriendForm>{};
                return true;
            }
            pls::cs::Int32 num10 = 2;
            if (PLS_API(require(canvas_)->CheckKeyPulse(65536))) {
                select_ = (select_ - 1 + num10) % num10;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(262144))) {
                select_ = (select_ + 1) % num10;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if (select_ == 0) {
                    th_ = java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(
                        pls::cs::raw(this), std::string("M:system.form.FriendForm._update:19378"),
                        [self = this]() -> void {
                            {
                                kl_cfg::Config::ensure_initialized();

                                pls::cs::run_finally(
                                    [&]() {
                                        try {
                                            {
                                                auto cs_receiver = self->friendData_;
                                                pls::cs::String cs_arg0 = PLS_API(
                                                    kl_unity_util::SecureString::ToStringSecureStringStatic(
                                                        require(self->friend_)->friendId_));
                                                require(cs_receiver)->CgiApproveFriend(cs_arg0);
                                            }
                                            self->next_ = FriendForm::create(7);
                                            require(self->next_)->friend_ = self->friend_;
                                            PLS_API(
                                                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Push(
                                                    self->next_));
                                        } catch (const pls::cs::Exception& cs_caught_251) {
                                            auto t2_6 = pls::cs::capture_exception(cs_caught_251);
                                            {
                                                if (kl_cfg::Config::PRINT()) {
                                                    PLS_API(kl_unity_util::Log::Info(t2_6));
                                                }
                                                PLS_API(
                                                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                        ->Push(([&]() -> pls::cs::Ref<pls::kairo::FormBase> {
                                                            pls::cs::String cs_arg0 =
                                                                kairo::unity::io::Http::PopErrorText();
                                                            pls::cs::String cs_arg1 = PLS_API(
                                                                kl_unity_util::SecureString::
                                                                    ToStringSecureStringStatic(
                                                                        require(self->friend_)->name_));
                                                            return self->MakeErrorDialog(cs_arg0, cs_arg1);
                                                        }())));
                                            }
                                        }
                                    },
                                    [&]() { self->th_ = pls::cs::Ref<java::lang::JThread>{}; });
                            }
                        },
                        this));
                    require(th_)->Start();
                    return true;
                }
                next_ = FriendForm::create(8);
                require(next_)->friend_ = friend_;
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(next_));
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 7) {
            frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
            if (frame_ >= 24) {
                bool flag2 = false;
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    flag2 = true;
                }
                if (require(apdat_)->IsPushSoftLabel(2)) {
                    flag2 = true;
                }
                if (flag2) {
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                }
            }
        } else if (type_ == 8) {
            pls::cs::Int32 num11 = 2;
            if (PLS_API(require(canvas_)->CheckKeyPulse(65536))) {
                select_ = (select_ - 1 + num11) % num11;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(262144))) {
                select_ = (select_ + 1) % num11;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if (select_ == 0) {
                    if (PLS_API(require(require(friend_)->state_)->Get()) == 3) {
                        pls::cs::Ref<FriendForm> friendForm3 = FriendForm::create(9);
                        require(friendForm3)->friend_ = friend_;
                        PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(friendForm3));
                    } else {
                        th_ = java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(
                            pls::cs::raw(this), std::string("M:system.form.FriendForm._update:20899"),
                            [self = this]() -> void {
                                {
                                    kl_cfg::Config::ensure_initialized();

                                    pls::cs::run_finally(
                                        [&]() {
                                            try {
                                                {
                                                    auto cs_receiver = self->friendData_;
                                                    pls::cs::String cs_arg0 =
                                                        PLS_API(kl_unity_util::SecureString::
                                                                    ToStringSecureStringStatic(
                                                                        require(self->friend_)->friendId_));
                                                    require(cs_receiver)->CgiRefuseFriend(cs_arg0);
                                                }
                                                require(self->friendData_)->RefreshFriendList();
                                                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                            ->Pop());
                                            } catch (const pls::cs::Exception& cs_caught_252) {
                                                auto t2_7 = pls::cs::capture_exception(cs_caught_252);
                                                {
                                                    if (kl_cfg::Config::PRINT()) {
                                                        PLS_API(kl_unity_util::Log::Info(t2_7));
                                                    }
                                                    PLS_API(
                                                        static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                            ->Push(([&]() -> pls::cs::Ref<
                                                                              pls::kairo::FormBase> {
                                                                pls::cs::String cs_arg0 =
                                                                    kairo::unity::io::Http::PopErrorText();
                                                                pls::cs::String cs_arg1 = PLS_API(
                                                                    kl_unity_util::SecureString::
                                                                        ToStringSecureStringStatic(
                                                                            require(self->friend_)->name_));
                                                                return self->MakeErrorDialog(cs_arg0,
                                                                                             cs_arg1);
                                                            }())));
                                                }
                                            }
                                        },
                                        [&]() { self->th_ = pls::cs::Ref<java::lang::JThread>{}; });
                                }
                            },
                            this));
                        require(th_)->Start();
                        return true;
                    }
                }
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 9) {
            pls::cs::Int32 num12 = 2;
            if (PLS_API(require(canvas_)->CheckKeyPulse(65536))) {
                select_ = (select_ - 1 + num12) % num12;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(262144))) {
                select_ = (select_ + 1) % num12;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                if (select_ == 0) {
                    th_ = java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(
                        pls::cs::raw(this), std::string("M:system.form.FriendForm._update:21846"),
                        [self = this]() -> void {
                            {
                                kl_cfg::Config::ensure_initialized();

                                pls::cs::run_finally(
                                    [&]() {
                                        try {
                                            {
                                                auto cs_receiver = self->friendData_;
                                                pls::cs::String cs_arg0 = PLS_API(
                                                    kl_unity_util::SecureString::ToStringSecureStringStatic(
                                                        require(self->friend_)->friendId_));
                                                require(cs_receiver)->CgiRefuseFriend(cs_arg0);
                                            }
                                            require(self->friendData_)->RefreshFriendList();
                                            PLS_API(
                                                static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Pop());
                                        } catch (const pls::cs::Exception& cs_caught_253) {
                                            auto t2_8 = pls::cs::capture_exception(cs_caught_253);
                                            {
                                                if (kl_cfg::Config::PRINT()) {
                                                    PLS_API(kl_unity_util::Log::Info(t2_8));
                                                }
                                                PLS_API(
                                                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)
                                                        ->Push(([&]() -> pls::cs::Ref<pls::kairo::FormBase> {
                                                            pls::cs::String cs_arg0 =
                                                                kairo::unity::io::Http::PopErrorText();
                                                            pls::cs::String cs_arg1 = PLS_API(
                                                                kl_unity_util::SecureString::
                                                                    ToStringSecureStringStatic(
                                                                        require(self->friend_)->name_));
                                                            return self->MakeErrorDialog(cs_arg0, cs_arg1);
                                                        }())));
                                            }
                                        }
                                    },
                                    [&]() { self->th_ = pls::cs::Ref<java::lang::JThread>{}; });
                            }
                        },
                        this));
                    require(th_)->Start();
                    return true;
                }
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 10) {
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 11) {
            if (require(apdat_)->IsPushSoftLabel(2, 1048576)) {
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
        } else if (type_ == 12) {
            frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
            PLS_API(require(formMan_)->DrawAllForms());
            if (frame_ >= 24) {
                bool flag3 = false;
                bool flag4 = false;
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    select_ = (select_ - 1 + 2) % 2;
                } else if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    select_ = (select_ + 1 + 2) % 2;
                } else if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    if (select_ == 0) {
                        flag4 = true;
                    }
                    flag3 = true;
                }
                if (require(apdat_)->IsPushSoftLabel(2)) {
                    flag3 = true;
                }
                if (flag3) {
                    if (flag4) {
                        pls::cs::Ref<FriendForm> friendForm4 = FriendForm::create(13);
                        {
                            auto cs_target = friendForm4;
                            pls::cs::Int32 cs_value = require(friendData_)->GetPlayBonus();
                            require(cs_target)->value1_ = cs_value;
                        }
                        {
                            auto cs_target = require(require(friendData_)->friSave_)->ints;
                            auto cs_index = 3;
                            auto cs_value = kl_unity_util::SecureInt::create(0);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                        try {
                            pls::cs::Ref<kairo::unity::system::KairoBase> instance2 =
                                kairo::unity::system::KairoBase::GetInstance();
                            require(instance2)->SaveAll();
                        } catch (const pls::cs::Exception& cs_caught_254) {
                            pls::cs::capture_exception(cs_caught_254);
                            {
                            }
                        }
                        PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(friendForm4));
                    } else {
                        require(friendData_)->alreadyCheckPlayTimeBonus_ = true;
                    }
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                }
            }
        } else if (type_ == 13) {
            frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
            PLS_API(require(formMan_)->DrawAllForms());
            if (frame_ >= 50) {
                bool flag5 = false;
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    flag5 = true;
                }
                if (require(apdat_)->IsPushSoftLabel(2)) {
                    flag5 = true;
                }
                if (flag5) {
                    pls::cs::Ref<friend_::MyFriend> instance3 = friend_::MyFriend::GetInstance();
                    require(instance3)->PlayBonus(value1_);
                    pls::cs::Ref<kairo::unity::system::KairoBase> instance4 =
                        kairo::unity::system::KairoBase::GetInstance();
                    require(instance4)->SaveAll();
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                }
            } else if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                frame_ = 50;
            }
        } else if (type_ == 14) {
            frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
            PLS_API(require(formMan_)->DrawAllForms());
            if (frame_ >= 24) {
                bool flag6 = false;
                bool flag7 = false;
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    select_ = (select_ - 1 + 2) % 2;
                } else if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    select_ = (select_ + 1 + 2) % 2;
                } else if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    if (select_ == 0) {
                        flag7 = true;
                    }
                    flag6 = true;
                }
                if (require(apdat_)->IsPushSoftLabel(2)) {
                    flag6 = true;
                }
                if (flag6) {
                    if (flag7) {
                        PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 = KairoText::LT(literal(
                                    u"おめでとうございます!<br>新しい<co=60,100,200>フレンド</co>が登録されボーナスが入りました!"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(0, cs_arg1, cs_arg2);
                            }())));
                        PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 = KairoText::LT(
                                    literal(u"一緒にプレイしていれば今後もボーナスが入っていきますよ!"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(0, cs_arg1, cs_arg2);
                            }())));
                        PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(
                            ([&]() -> pls::cs::Ref<pls::game::form::SubForm> {
                                pls::cs::String cs_arg1 = KairoText::LT(literal(
                                    u"ちなみに<co=255,0,0>アプリは削除しないで</co>下さいね。削除するとフレンドが全部消えて戻せなくなってしまいます。"));
                                pls::cs::String cs_arg2 = pls::cs::String(u"");
                                return pls::game::form::SubForm::MakeTalkForm(0, cs_arg1, cs_arg2);
                            }())));
                        for (pls::cs::Int32 num13 = 0; num13 < PLS_API(kl_java_util::Vector_2_Size(require(
                                                                   require(friendData_)->newFriendList_)));
                             ++num13) {
                            pls::cs::Ref<FriendForm> friendForm5 = FriendForm::create(15);
                            {
                                auto cs_target = friendForm5;
                                auto cs_value = pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(
                                    PLS_API(kl_java_util::Vector_2_ElementAt(
                                        require(require(friendData_)->newFriendList_), num13)));
                                require(cs_target)->friend_ = cs_value;
                            }
                            PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(friendForm5));
                        }
                    } else {
                        require(friendData_)->alreadyCheckNewFriendBonus_ = true;
                    }
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                }
            }
        } else if (type_ == 15) {
            frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
            PLS_API(require(formMan_)->DrawAllForms());
            if (frame_ >= 50) {
                bool flag8 = false;
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    flag8 = true;
                }
                if (require(apdat_)->IsPushSoftLabel(2)) {
                    flag8 = true;
                }
                if (flag8) {
                    pls::cs::Ref<friend_::MyFriend> instance5 = friend_::MyFriend::GetInstance();
                    require(instance5)->PlayBonus(require(friendData_)->PLAY_NEW_FRIEND_BONUS);
                    PLS_API(kl_java_util::Vector_2_RemoveElement(
                        require(require(friendData_)->newFriendList_), pls::cs::box(friend_)));
                    try {
                        pls::cs::Ref<kairo::unity::system::KairoBase> instance6 =
                            kairo::unity::system::KairoBase::GetInstance();
                        require(instance6)->SaveAll();
                    } catch (const pls::cs::Exception& cs_caught_255) {
                        auto t = pls::cs::capture_exception(cs_caught_255);
                        {
                            if (kl_cfg::Config::PRINT()) {
                                PLS_API(kl_unity_util::Log::Info(t));
                            }
                        }
                    }
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                }
            } else if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                frame_ = 50;
            }
        }
        return true;
    }
}
} // namespace system::form

namespace form {

// M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool MyFormBase::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.OnTouchEvent(kairo.unity.surface.TouchEvent)",
                     game);
    {
        return true;
    }
}

// M:form.MyFormBase.Tv(System.Int32,System.Int32)
pls::cs::Int32 MyFormBase::Tv(pls::cs::Int32 type, pls::cs::Int32 value) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.Tv(System.Int32,System.Int32)", game);
    {
        return type | ((pls::cs::cast_integral<std::int16_t>(value) & 0xFFFF));
    }
}

// M:form.MyFormBase.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IntArray MyFormBase::DrawWindow(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 width,
                                pls::cs::Int32 height, pls::cs::String title, pls::cs::Int32 sideSpace,
                                pls::cs::Int32 topSpace, pls::cs::Int32 bottomSpace,
                                pls::cs::Int32 barArwSpace, pls::cs::Int32 flag) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.MyFormBase.DrawWindow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        return MyFormBase::DrawWindow2(g, width, height, title, sideSpace, topSpace, bottomSpace, barArwSpace,
                                       flag, 0);
    }
}

// M:form.MyFormBase.DrawWindow2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IntArray MyFormBase::DrawWindow2(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 width,
                                 pls::cs::Int32 height, pls::cs::String title, pls::cs::Int32 sideSpace,
                                 pls::cs::Int32 topSpace, pls::cs::Int32 bottomSpace,
                                 pls::cs::Int32 barArwSpace, pls::cs::Int32 flag, pls::cs::Int32 ay) {
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:form.MyFormBase.DrawWindow2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        pls::cs::Int32 num = 16;
        if ([&]() {
                auto cs_left = pls::cs::box(drawWindow_tmp);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            drawWindow_tmp = IntArray::make(MyFormBase::WNDRET_BOX_END());
        }
        require(apdat_)->DrawWindow(g, width, height, 0, title, (-12 + ay));
        if (require(apdat_)->IsTopForm(this)) {
            arwFrame_ = ((arwFrame_ + 1) % 2147483647 /* Int32.MaxValue */);
        }
        drawWindow_tmp[MyFormBase::WNDRET_TOP()] = 120 - height / 2 + num;
        drawWindow_tmp[MyFormBase::WNDRET_LEFT()] = 120 - width / 2;
        drawWindow_tmp[MyFormBase::WNDRET_RIGHT()] = drawWindow_tmp[MyFormBase::WNDRET_LEFT()] + width;
        drawWindow_tmp[MyFormBase::WNDRET_BOTTOM()] = drawWindow_tmp[MyFormBase::WNDRET_TOP()] + height - num;
        drawWindow_tmp[MyFormBase::WNDRET_BOX_LEFT()] = drawWindow_tmp[MyFormBase::WNDRET_LEFT()] + sideSpace;
        drawWindow_tmp[MyFormBase::WNDRET_BOX_RIGHT()] =
            drawWindow_tmp[MyFormBase::WNDRET_RIGHT()] - sideSpace;
        drawWindow_tmp[MyFormBase::WNDRET_BOX_TOP()] = drawWindow_tmp[MyFormBase::WNDRET_TOP()] + topSpace;
        drawWindow_tmp[MyFormBase::WNDRET_BOX_BOTTOM()] =
            drawWindow_tmp[MyFormBase::WNDRET_BOTTOM()] - bottomSpace;
        if (PLS_API(kl_unity_util::BitUtil::Check(flag, MyFormBase::WNDFLAG_BOX()))) {
            {
                pls::cs::Int32 cs_arg1 = drawWindow_tmp[MyFormBase::WNDRET_BOX_LEFT()];
                pls::cs::Int32 cs_arg2 = drawWindow_tmp[MyFormBase::WNDRET_BOX_TOP()] - 12 + ay;
                pls::cs::Int32 cs_arg3 = drawWindow_tmp[MyFormBase::WNDRET_BOX_RIGHT()];
                pls::cs::Int32 cs_arg4 = drawWindow_tmp[MyFormBase::WNDRET_BOX_BOTTOM()] - 12 + ay;
                require(apdat_)->DrawBox(g, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
            }
        }
        return drawWindow_tmp;
    }
}

// M:form.MyFormBase.GetBoxHeaderY(System.Int32)
pls::cs::Int32 MyFormBase::GetBoxHeaderY(pls::cs::Int32 boxTop) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.GetBoxHeaderY(System.Int32)", game);
    {
        return boxTop - 16;
    }
}

// M:form.MyFormBase.GetBoxFooterY(System.Int32)
pls::cs::Int32 MyFormBase::GetBoxFooterY(pls::cs::Int32 boxBottom) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.GetBoxFooterY(System.Int32)", game);
    {
        return boxBottom + 4;
    }
}

// M:form.MyFormBase.LT(System.String)
pls::cs::String MyFormBase::LT(pls::cs::String text) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.LT(System.String)", game);
    {
        return PLS_API(kl_unity_util::Language::TranslateText(text, true));
    }
}

// M:form.MyFormBase.LT(System.String,System.String)
pls::cs::String MyFormBase::LT(pls::cs::String text, pls::cs::String arg) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.LT(System.String,System.String)", game);
    {
        return MyFormBase::Replace(PLS_API(kl_unity_util::Language::TranslateText(text, true)), arg);
    }
}

// M:form.MyFormBase.LT(System.String,System.Int64)
pls::cs::String MyFormBase::LTLong(pls::cs::String text, pls::cs::Int64 arg) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.LT(System.String,System.Int64)", game);
    {
        {
            pls::cs::String cs_arg0_126 = PLS_API(kl_unity_util::Language::TranslateText(text, true));
            pls::cs::String cs_arg1_126 = PLS_API(kl_lang::JString::ValueOfLong(arg));
            return MyFormBase::Replace(cs_arg0_126, cs_arg1_126);
        }
    }
}

// M:form.MyFormBase.LF(System.String)
pls::cs::Ref<kairo::unity::ui::TextFormat> MyFormBase::LF(pls::cs::String format) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.LF(System.String)", game);
    {
        return kairo::unity::ui::TextFormat::Create(format);
    }
}

// M:form.MyFormBase.YEN(System.String,System.Int64)
pls::cs::String MyFormBase::YEN(pls::cs::String text, pls::cs::Int64 value) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.YEN(System.String,System.Int64)", game);
    {
        return MyFormBase::YEN(text, value, true);
    }
}

// M:form.MyFormBase.YEN(System.String,System.Int64,System.Boolean)
pls::cs::String MyFormBase::YEN(pls::cs::String text, pls::cs::Int64 value, bool comma) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.YEN(System.String,System.Int64,System.Boolean)",
                     game);
    {
        if (kairo::unity::util::Language::GetLanguageCode() != literal(u"ja-JP") &&
            kairo::unity::util::Language::GetLanguageCode() != literal(u"en-US") &&
            !PLS_API(pls::cs::culture_starts_with(kairo::unity::util::Language::GetLanguageCode(),
                                                  literal(u"*")))) {
            value = value * 10;
            return pls::cs::String::concat(
                ((comma) ? (MyFormBase::Comma(value))
                         : ((pls::cs::String::concat(pls::cs::String(u""), integer_string(value))))),
                literal(u"G"));
        }
        bool flag = require(require(main::AppData::GetInstance())->sysSave_)->ints[14] == 1;
        if (PLS_API(string_equals(text, literal(u"万円"))) || PLS_API(string_equals(text, literal(u"万")))) {
            if (flag) {
                return pls::cs::String::concat(
                    ([&]() {
                        auto cs_left = pls::cs::String::concat(
                            pls::cs::String::concat(
                                literal(u"$"), ((comma) ? (MyFormBase::Comma(value / pls::cs::Int64(10)))
                                                        : ((pls::cs::String::concat(
                                                              pls::cs::String(u""),
                                                              integer_string(value / pls::cs::Int64(10))))))),
                            literal(u"."));
                        auto cs_right =
                            integer_string(PLS_API(kl_lang::JMath::AbsLong(value)) % pls::cs::Int64(10));
                        return pls::cs::String::concat(cs_left, cs_right);
                    }()),
                    literal(u"K"));
            }
            if (!MyFormBase::Jp()) {
                return pls::cs::String::concat(
                    pls::cs::String::concat(
                        literal(u"¥"),
                        ((comma) ? (MyFormBase::Comma(value * pls::cs::Int64(10)))
                                 : ((pls::cs::String::concat(pls::cs::String(u""),
                                                             integer_string(value * pls::cs::Int64(10))))))),
                    literal(u"K"));
            }
        } else if (PLS_API(string_equals(text, literal(u"円")))) {
            if (flag) {
                return pls::cs::String::concat(
                    literal(u"$"),
                    ((comma) ? (MyFormBase::Comma(value / pls::cs::Int64(100)))
                             : ((pls::cs::String::concat(pls::cs::String(u""),
                                                         integer_string(value / pls::cs::Int64(100)))))));
            }
            if (!MyFormBase::Jp()) {
                return pls::cs::String::concat(
                    literal(u"¥"),
                    ((comma) ? (MyFormBase::Comma(value))
                             : ((pls::cs::String::concat(pls::cs::String(u""), integer_string(value))))));
            }
        } else if (PLS_API(string_equals(text, literal(u"\\")))) {
            if (flag) {
                return pls::cs::String::concat(
                    literal(u"$"),
                    ((comma) ? (MyFormBase::Comma(value / pls::cs::Int64(100)))
                             : ((pls::cs::String::concat(pls::cs::String(u""),
                                                         integer_string(value / pls::cs::Int64(100)))))));
            }
            if (!MyFormBase::Jp()) {
                return pls::cs::String::concat(
                    literal(u"¥"),
                    ((comma) ? (MyFormBase::Comma(value))
                             : ((pls::cs::String::concat(pls::cs::String(u""), integer_string(value))))));
            }
            return pls::cs::String::concat(
                literal(u"\\"),
                ((comma) ? (MyFormBase::Comma(value))
                         : ((pls::cs::String::concat(pls::cs::String(u""), integer_string(value))))));
        }
        if (flag) {
            return pls::cs::String::concat(
                ((comma) ? (MyFormBase::Comma(value / pls::cs::Int64(100)))
                         : ((pls::cs::String::concat(pls::cs::String(u""),
                                                     integer_string(value / pls::cs::Int64(100)))))),
                text);
        }
        return pls::cs::String::concat(
            ((comma) ? (MyFormBase::Comma(value))
                     : ((pls::cs::String::concat(pls::cs::String(u""), integer_string(value))))),
            text);
    }
}

// M:form.SpForm._draw(kairo.unity.ui.Graphics)
void SpForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.SpForm._draw(kairo.unity.ui.Graphics)", game);
    {
        MyFormBase::ensure_initialized();

        if (!require(apdat_)->IsTopForm(this)) {
            return;
        }
        pls::cs::Int32 num = 48;
        for (pls::cs::Int32 i = 0; i < PLS_API(kl_java_util::Vector_2_Size(require(commands_))); ++i) {
            StringArray array =
                pls::cs::unbox<StringArray>(PLS_API(kl_java_util::Vector_2_ElementAt(require(commands_), i)));
            pls::cs::Int32 num2 = PLS_API(kl_lang::JInteger::ParseInt(array[0]));
            if (num2 >= 0) {
                num = (num + 35);
            } else {
                num = (num + 19);
            }
        }
        IntArray array2 = IntArray{};
        try {
            array2 = MyFormBase::DrawWindow(g, 220, num, literal(u"セーブデータの送信"), 6, 6, 21, 80,
                                            MyFormBase::WNDFLAG_BOX());
        } catch (const pls::cs::Exception& cs_caught_107) {
            pls::cs::capture_exception(cs_caught_107);
            {
                array2 = IntArray::make(MyFormBase::WNDRET_BOX_END());
                array2[MyFormBase::WNDRET_TOP()] = 120 - num / 2 + 15;
                array2[MyFormBase::WNDRET_LEFT()] = 10;
                array2[MyFormBase::WNDRET_RIGHT()] = array2[MyFormBase::WNDRET_LEFT()] + 220;
                array2[MyFormBase::WNDRET_BOTTOM()] = array2[MyFormBase::WNDRET_TOP()] + num - 15;
                array2[MyFormBase::WNDRET_BOX_LEFT()] = array2[MyFormBase::WNDRET_LEFT()] + 6;
                array2[MyFormBase::WNDRET_BOX_RIGHT()] = array2[MyFormBase::WNDRET_RIGHT()] - 6;
                array2[MyFormBase::WNDRET_BOX_TOP()] = array2[MyFormBase::WNDRET_TOP()] + 6;
                array2[MyFormBase::WNDRET_BOX_BOTTOM()] = array2[MyFormBase::WNDRET_BOTTOM()] - 21;
            }
        }
        pls::cs::Int32 num3 = array2[MyFormBase::WNDRET_BOX_LEFT()] + 10;
        pls::cs::Int32 num4 = 0;
        num4 = array2[MyFormBase::WNDRET_BOX_TOP()] + 6;
        if (state_ == 0) {
            pls::cs::Int32 num5 = 0;
            while (num5 < PLS_API(kl_java_util::Vector_2_Size(require(commands_)))) {
                StringArray array3 = pls::cs::unbox<StringArray>(
                    PLS_API(kl_java_util::Vector_2_ElementAt(require(commands_), num5)));
                bool flag = (array3.length() > 2);
                pls::cs::Int32 num6 = PLS_API(kl_lang::JInteger::ParseInt(array3[0]));
                pls::cs::String str = array3[1];
                pls::cs::Int32 num7 = array2[MyFormBase::WNDRET_BOX_LEFT()] + 10;
                pls::cs::Int32 num8 = ([&]() -> pls::cs::Int32 {
                                          auto cs_left = array2[MyFormBase::WNDRET_BOX_RIGHT()];
                                          auto cs_right = array2[MyFormBase::WNDRET_BOX_LEFT()];
                                          return cs_left - cs_right;
                                      }()) -
                                      20;
                pls::cs::Int32 num9 = 0;
                if (select_ == num5) {
                    PLS_API(require(g)->SetColor(200, 200, 255));
                    PLS_API(require(g)->FillRect(num7 - 6, num4 - 2, num8 + 12, num9 + 16));
                }
                surface::GameView::AddTouch(
                    g, 3, num7 - 6, num4 - 2, num8 + 12, 16, 0x20000 | num5,
                    require(kairo::unity::surface::TouchOption::Create())->Margin(0, 0, 10, num9 + 10));
                if (flag) {
                    PLS_API(require(g)->SetColor(30, 30, 30));
                } else {
                    PLS_API(require(g)->SetColor(128, 128, 128));
                }
                if (MyFormBase::En()) {
                    PLS_API(require(g)->DrawString(str, num3 + 3, num4));
                } else {
                    PLS_API(require(g)->DrawString(str, num3 + 20, num4));
                }
                if (flag && PLS_API(kl_lang::JInteger::ParseInt(array3[2])) != -1) {
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = pls::cs::String::concat(
                            integer_string((PLS_API(kl_lang::JInteger::ParseInt(array3[2])) + 1023) / 1024),
                            literal(u"k"));
                        pls::cs::Single cs_arg1 = array2[MyFormBase::WNDRET_BOX_RIGHT()] - 10;
                        require(g)->DrawString(cs_arg0, cs_arg1, num4, 4);
                    }()));
                }
                if (num6 >= 0) {
                    pls::cs::Int32 num10 = 0;
                    if (MyFormBase::En()) {
                        num10 = (num7 + 22 + 60);
                    } else {
                        num10 = (num7 + 20 + 60);
                    }
                    pls::cs::Int32 num11 = array2[MyFormBase::WNDRET_BOX_RIGHT()] - 10 - 24;
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = ((flag) ? (array3[3]) : (pls::cs::String(u"")));
                        require(g)->DrawString(cs_arg0, num10 + (num11 - num10) / 2, num4, 2);
                    }()));
                }
                pls::cs::Int32 num12 = num4 - 2;
                if (num6 >= 0) {
                    num12 += 8;
                }
                if (select_ != num5 || Active()) {
                }
                if (num5 < PLS_API(kl_java_util::Vector_2_Size(require(commands_))) - 1) {
                    PLS_API(
                        require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(206, 187, 153))));
                    PLS_API(([&]() -> void {
                        pls::cs::Single cs_arg0 = array2[MyFormBase::WNDRET_BOX_LEFT()] + 2;
                        pls::cs::Single cs_arg2 = array2[MyFormBase::WNDRET_BOX_RIGHT()] - 3;
                        require(g)->DrawLine(cs_arg0, num4 + 15, cs_arg2, num4 + 15, 1.0f);
                    }()));
                    num4 += 3;
                }
                ++num5;
                num4 += 16;
            }
            num4 = MyFormBase::GetBoxFooterY(array2[MyFormBase::WNDRET_BOX_BOTTOM()]);
            PLS_API(require(g)->SetColor(60, 100, 200));
            PLS_API(require(g)->DrawString(literal(u"送る内容を選んでください"), 120.0f, num4, 2));
        } else if (state_ == 1) {
            num4 = ([&]() -> pls::cs::Int32 {
                auto cs_left = array2[MyFormBase::WNDRET_BOX_TOP()];
                auto cs_right = (([&]() -> pls::cs::Int32 {
                                     auto cs_left = array2[MyFormBase::WNDRET_BOX_BOTTOM()];
                                     auto cs_right = array2[MyFormBase::WNDRET_BOX_TOP()];
                                     return cs_left - cs_right;
                                 }()) -
                                 28) /
                                2;
                return cs_left + cs_right;
            }());
            pls::cs::Ref<pls::kairo::Font> font =
                PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
            PLS_API(require(g)->SetColor(30, 30, 30));
            pls::cs::String text = MyFormBase::LT(literal(u"データの送信中"));
            pls::cs::String text2 = pls::cs::String(u"");
            for (pls::cs::Int32 j = 4; j < frame_ % 16; j += 4) {
                text2 = pls::cs::String::concat(text2, literal(u"."));
            }
            pls::cs::Int32 num13 = 0;
            if (taskMax_ != 0) {
                num13 = ([&]() -> pls::cs::Int32 {
                    auto cs_left =
                        (([&]() -> pls::cs::Int32 {
                            auto cs_left = taskMax_;
                            auto cs_right = (((([&]() {
                                pls::cs::Ref<kl_java_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left =
                                    task_;
                                pls::cs::Ref<kl_java_util::Vector> cs_right =
                                    pls::cs::Ref<kl_java_util::Vector>{};
                                return kl_java_util::Vector_2_op_Equality(cs_left, cs_right);
                            }())))
                                                 ? pls::cs::Int32(0)
                                                 : (PLS_API(kl_java_util::Vector_2_Size(require(task_)))));
                            return cs_left - cs_right;
                        }())) *
                        100;
                    auto cs_right = taskMax_;
                    return cs_left / cs_right;
                }());
            }
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 = pls::cs::String::concat(text, text2);
                pls::cs::Single cs_arg1 =
                    105.0f - PLS_API(pls::cs::Single(require(font)->StringWidthF(text))) / 2.0f;
                require(g)->DrawString(cs_arg0, cs_arg1, num4);
            }()));
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 = pls::cs::String::concat(integer_string(num13), literal(u"%"));
                pls::cs::Single cs_arg1 =
                    105.0f + PLS_API(pls::cs::Single(require(font)->StringWidthF(text))) / 2.0f + 19.0f;
                require(g)->DrawString(cs_arg0, cs_arg1, num4);
            }()));
            text = literal(u"電源キーを押さないでください。");
            PLS_API(require(g)->DrawString(text, 120.0f, num4 + 16, 2));
        } else if (state_ == 2) {
            num4 = ([&]() -> pls::cs::Int32 {
                auto cs_left = array2[MyFormBase::WNDRET_BOX_TOP()];
                auto cs_right = (([&]() -> pls::cs::Int32 {
                                     auto cs_left = array2[MyFormBase::WNDRET_BOX_BOTTOM()];
                                     auto cs_right = array2[MyFormBase::WNDRET_BOX_TOP()];
                                     return cs_left - cs_right;
                                 }()) -
                                 28) /
                                2;
                return cs_left + cs_right;
            }());
            pls::cs::Ref<pls::kairo::Font> font2 =
                PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
            PLS_API(require(g)->SetColor(30, 30, 30));
            pls::cs::String text3 = MyFormBase::LT(literal(u"データの受信中"));
            pls::cs::String text4 = pls::cs::String(u"");
            for (pls::cs::Int32 k = 4; k < frame_ % 16; k += 4) {
                text4 = pls::cs::String::concat(text4, literal(u"."));
            }
            pls::cs::Int32 num14 = 0;
            if (taskMax_ != 0) {
                num14 = ([&]() -> pls::cs::Int32 {
                    auto cs_left =
                        (([&]() -> pls::cs::Int32 {
                            auto cs_left = taskMax_;
                            auto cs_right = (((([&]() {
                                pls::cs::Ref<kl_java_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left =
                                    task_;
                                pls::cs::Ref<kl_java_util::Vector> cs_right =
                                    pls::cs::Ref<kl_java_util::Vector>{};
                                return kl_java_util::Vector_2_op_Equality(cs_left, cs_right);
                            }())))
                                                 ? pls::cs::Int32(0)
                                                 : (PLS_API(kl_java_util::Vector_2_Size(require(task_)))));
                            return cs_left - cs_right;
                        }())) *
                        100;
                    auto cs_right = taskMax_;
                    return cs_left / cs_right;
                }());
            }
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 = pls::cs::String::concat(text3, text4);
                pls::cs::Single cs_arg1 =
                    105 - pls::cs::Int32(PLS_API(require(font2)->StringWidth(text3))) / 2;
                require(g)->DrawString(cs_arg0, cs_arg1, num4);
            }()));
            PLS_API(([&]() -> void {
                pls::cs::String cs_arg0 = pls::cs::String::concat(integer_string(num14), literal(u"%"));
                pls::cs::Single cs_arg1 =
                    105 + pls::cs::Int32(PLS_API(require(font2)->StringWidth(text3))) / 2 + 19;
                require(g)->DrawString(cs_arg0, cs_arg1, num4);
            }()));
            text3 = literal(u"電源キーを押さないでください。");
            PLS_API(require(g)->DrawString(text3, 120.0f, num4 + 16, 2));
        }
    }
}

// M:form.MyFormBase.UNI(System.String,System.Int64)
pls::cs::String MyFormBase::UNI(pls::cs::String text, pls::cs::Int64 value) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.UNI(System.String,System.Int64)", game);
    {
        return MyFormBase::UNI(text, value, true);
    }
}

// M:form.MyFormBase.UNI(System.String,System.Int64,System.Boolean)
pls::cs::String MyFormBase::UNI(pls::cs::String text, pls::cs::Int64 value, bool comma) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.UNI(System.String,System.Int64,System.Boolean)",
                     game);
    {
        pls::cs::String text2 = literal(u"K");
        if (MyFormBase::Jp()) {
            return pls::cs::String::concat(
                PLS_API(kl_lang::JString::ValueOfObject(static_cast<pls::cs::Ref<pls::cs::Object>>(
                    pls::cs::box((comma) ? (MyFormBase::Comma(value))
                                         : ((pls::cs::String::concat(pls::cs::String(u""),
                                                                     integer_string(value)))))))),
                text);
        }
        if (PLS_API(contains_string(text, literal(u"万")))) {
            return pls::cs::String::concat(
                ((comma) ? (MyFormBase::Comma(value * pls::cs::Int64(10)))
                         : ((pls::cs::String::concat(pls::cs::String(u""),
                                                     integer_string(value * pls::cs::Int64(10)))))),
                literal(u"k"));
        }
        return PLS_API(
            kl_lang::JString::ValueOfObject(static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(
                (comma) ? (MyFormBase::Comma(value))
                        : ((pls::cs::String::concat(pls::cs::String(u""), integer_string(value))))))));
    }
}

// M:form.MyFormBase.PushFontSize(kairo.unity.ui.Graphics,System.Int32)
void MyFormBase::PushFontSize(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 size) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.MyFormBase.PushFontSize(kairo.unity.ui.Graphics,System.Int32)", game);
    {
        if (MyFormBase::En()) {
            pls::cs::Ref<pls::kairo::Font> font =
                PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
            MyFormBase::fontSize_() = PLS_API(require(font)->GetSize());
            PLS_API(require(font)->SetSize(size, true));
            PLS_API(require(g)->SetFont(font));
        }
    }
}

// M:form.MyFormBase.BackFontSize(kairo.unity.ui.Graphics)
void MyFormBase::BackFontSize(pls::cs::Ref<pls::kairo::Graphics> g) {
    MyFormBase::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.MyFormBase.BackFontSize(kairo.unity.ui.Graphics)", game);
    {
        if (MyFormBase::En()) {
            pls::cs::Ref<pls::kairo::Font> font =
                PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
            PLS_API(require(font)->SetSize(MyFormBase::fontSize_(), true));
            PLS_API(require(g)->SetFont(font));
        }
    }
}
} // namespace form
}
