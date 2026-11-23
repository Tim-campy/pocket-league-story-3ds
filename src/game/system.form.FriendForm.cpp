// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.SubForm.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureProperty.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.graph.Graph.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.ui.TextFormat.hpp"
#include "kairo.unity.ui.TextLayout.hpp"
#include "kfw.panel.MainPanel.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "system.KairoText.hpp"
#include "system.form.ConnectForm.hpp"
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

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace system::form {

void FriendForm::trace_edges(const pls::cs::EdgeVisitor&visitor)const {MyFormBase::trace_edges(visitor);pls::cs::trace_value(next_,visitor);pls::cs::trace_value(text_,visitor);pls::cs::trace_value(text2_,visitor);pls::cs::trace_value(textLay_,visitor);pls::cs::trace_value(friendData_,visitor);pls::cs::trace_value(friend_,visitor);pls::cs::trace_value(th_,visitor);}

static pls::cs::Int32 FriendForm_COLOR_AQUA_storage{};

static pls::cs::Int32 FriendForm_COLOR_BLACK_storage{};

static pls::cs::Int32 FriendForm_COLOR_BLUE_storage{};

static pls::cs::Int32 FriendForm_COLOR_GREEN_storage{};

static pls::cs::Int32 FriendForm_COLOR_RED_storage{};

static pls::cs::Int32 FriendForm_COLOR_WHITE_storage{};

static IntArray FriendForm_drawRandomFriend_result_storage{};

static pls::cs::Ref<kairo::unity::ui::ResourceManager> FriendForm_resFriend__storage{};

static IntArray2 FriendForm_softLabels__storage{};

static PLS_NOINLINE void cs_init_7eeafe36a056776c_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(FriendForm_COLOR_AQUA_storage,visitor);pls::cs::trace_value(FriendForm_COLOR_BLACK_storage,visitor);pls::cs::trace_value(FriendForm_COLOR_BLUE_storage,visitor);pls::cs::trace_value(FriendForm_COLOR_GREEN_storage,visitor);pls::cs::trace_value(FriendForm_COLOR_RED_storage,visitor);pls::cs::trace_value(FriendForm_COLOR_WHITE_storage,visitor);pls::cs::trace_value(FriendForm_drawRandomFriend_result_storage,visitor);pls::cs::trace_value(FriendForm_resFriend__storage,visitor);pls::cs::trace_value(FriendForm_softLabels__storage,visitor);});static pls::cs::TypeInitState state;state.run("system.form.FriendForm",flag,[](){
FriendForm_softLabels__storage = pls::cs::evaluate_type_initializer_field("F:system.form.FriendForm.softLabels_",[&](){return IntArray2::from({IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2), IntArray::make(2), IntArray::make(2)});});
FriendForm_COLOR_WHITE_storage = pls::cs::evaluate_type_initializer_field("F:system.form.FriendForm.COLOR_WHITE",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);});});
FriendForm_COLOR_BLACK_storage = pls::cs::evaluate_type_initializer_field("F:system.form.FriendForm.COLOR_BLACK",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);});});
FriendForm_COLOR_RED_storage = pls::cs::evaluate_type_initializer_field("F:system.form.FriendForm.COLOR_RED",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 0, 0);});});
FriendForm_COLOR_GREEN_storage = pls::cs::evaluate_type_initializer_field("F:system.form.FriendForm.COLOR_GREEN",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 255, 0);});});
FriendForm_COLOR_BLUE_storage = pls::cs::evaluate_type_initializer_field("F:system.form.FriendForm.COLOR_BLUE",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 255);});});
FriendForm_COLOR_AQUA_storage = pls::cs::evaluate_type_initializer_field("F:system.form.FriendForm.COLOR_AQUA",[&](){return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 128, 255);});});
FriendForm_drawRandomFriend_result_storage = pls::cs::evaluate_type_initializer_field("F:system.form.FriendForm.drawRandomFriend_result",[&](){return IntArray::make(4);});

});}

void FriendForm::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_7eeafe36a056776c_slow(flag);}

pls::cs::Int32& FriendForm::COLOR_AQUA(){FriendForm::ensure_initialized();return FriendForm_COLOR_AQUA_storage;}

pls::cs::Int32& FriendForm::COLOR_BLACK(){FriendForm::ensure_initialized();return FriendForm_COLOR_BLACK_storage;}

pls::cs::Int32& FriendForm::COLOR_BLUE(){FriendForm::ensure_initialized();return FriendForm_COLOR_BLUE_storage;}

pls::cs::Int32& FriendForm::COLOR_GREEN(){FriendForm::ensure_initialized();return FriendForm_COLOR_GREEN_storage;}

pls::cs::Int32& FriendForm::COLOR_RED(){FriendForm::ensure_initialized();return FriendForm_COLOR_RED_storage;}

pls::cs::Int32& FriendForm::COLOR_WHITE(){FriendForm::ensure_initialized();return FriendForm_COLOR_WHITE_storage;}

IntArray& FriendForm::drawRandomFriend_result(){FriendForm::ensure_initialized();return FriendForm_drawRandomFriend_result_storage;}

pls::cs::Ref<kairo::unity::ui::ResourceManager>& FriendForm::resFriend_(){FriendForm::ensure_initialized();return FriendForm_resFriend__storage;}

IntArray2& FriendForm::softLabels_(){FriendForm::ensure_initialized();return FriendForm_softLabels__storage;}

void FriendForm::create_init(pls::cs::Ref<FriendForm> self) {
FriendForm::ensure_initialized();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 901);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.#ctor",game);
{

}

}

void FriendForm::create_init(pls::cs::Ref<FriendForm> self,pls::cs::Int32 type) {
FriendForm::ensure_initialized();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 901);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.#ctor(System.Int32)",game);
{
self->type_ = type;
self->select_ = 0;
}

}

// M:system.form.FriendForm.#ctor
pls::cs::Ref<FriendForm> FriendForm::create() {
FriendForm::ensure_initialized();
 auto self = pls::cs::make_ref<FriendForm>(); FriendForm::create_init(self); return self; 
}

// M:system.form.FriendForm.#ctor(System.Int32)
pls::cs::Ref<FriendForm> FriendForm::create(pls::cs::Int32 type) {
FriendForm::ensure_initialized();
 auto self = pls::cs::make_ref<FriendForm>(); FriendForm::create_init(self,type); return self; 
}

// M:system.form.FriendForm.ToString
pls::cs::String FriendForm::ToString() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.ToString",game);
{
return pls::cs::String::concat(literal(u"FriendForm:"), integer_string(type_));
}
}

// M:system.form.FriendForm.MakeErrorMsgForm(System.String,System.String)
pls::cs::Ref<FriendForm> FriendForm::MakeErrorMsgForm(pls::cs::String msg,pls::cs::String msg_sub) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.MakeErrorMsgForm(System.String,System.String)",game);
{
pls::cs::Ref<FriendForm> friendForm = FriendForm::create();
require(friendForm)->type_ = 10;
{ auto cs_target = friendForm; auto cs_value = kairo::unity::ui::TextLayout::create(); require(cs_target)->textLay_ = cs_value; }
require(require(friendForm)->textLay_)->SetSize(140.0f, 44.0f);
require(require(friendForm)->textLay_)->SetColor(FriendForm::COLOR_BLACK());
require(require(friendForm)->textLay_)->SetAnchor(34);
require(require(friendForm)->textLay_)->SetLineSpace(4);
require(require(friendForm)->textLay_)->SetText(msg);
require(require(friendForm)->textLay_)->Flush();
require(friendForm)->text_ = msg_sub;
return friendForm;
}

}

// M:system.form.FriendForm.LoadResource
void FriendForm::LoadResource() {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.LoadResource",game);
{
if (!is_null(FriendForm::resFriend_())) {
return;
}
try {
FriendForm::resFriend_() = require(kairo::unity::ui::ResourceManager::create(pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}))->SetRecordNameBits(0);
{ auto cs_receiver = FriendForm::resFriend_(); ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Storage::Read(3, false, literal(u"friend.dat"));}); require(cs_receiver)->Load(cs_arg0, 3); }
} catch(const pls::cs::Exception& cs_caught_261) {pls::cs::capture_exception(cs_caught_261);
{
FriendForm::resFriend_() = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
}}
}

}

// M:system.form.FriendForm.Init
bool FriendForm::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.Init",game);
{
main::AppData::ensure_initialized();

MyFormBase::Init();
friendData_ = friend_::ui::FriendData::GetInstance();
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[0]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[0]; static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
FriendForm::LoadResource();
pls::cs::Int32 num = FriendForm::softLabels_()[type_][0];
pls::cs::Int32 num2 = FriendForm::softLabels_()[type_][1];
if (type_ == 0) {
text_ = pls::cs::String(u"");
} else if (type_ == 1) {
text_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(require(friend_::MyFriend::GetInstance())->friSave_)->strs.get_Item(0));});
} else if (type_ == 2) {
th_ = java::lang::JThread::create_2(pls::cs::Delegate<void()>::from_closure(pls::cs::raw(this),std::string("M:system.form.FriendForm.Init:5002"),[self=this]() -> void {{
kl_cfg::Config::ensure_initialized();

pls::cs::run_finally([&]() {try {
pls::cs::Ref<kairo::unity::system::KairoBase> instance = kairo::unity::system::KairoBase::GetInstance();
require(instance)->Save();
if ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(self->friendData_)->previousUpdateMinute_)->Get();}); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(require(self->friendData_)->friSave_)->ints.get_Item(1))->Get();}); return cs_left != cs_right; }()) {
{ auto cs_receiver = self->friendData_; pls::cs::Int64 cs_arg1 = pls::cs::cast_integral<pls::cs::Int64>(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(require(self->friendData_)->friSave_)->ints.get_Item(1))->Get();})); require(cs_receiver)->CgiRegistFriend(pls::cs::String{}, cs_arg1); }
{ auto cs_target = self->friendData_; auto cs_value = kl_unity_util::SecureInt::create_2(require(require(self->friendData_)->friSave_)->ints.get_Item(1)); require(cs_target)->previousUpdateMinute_ = cs_value; }
}
require(self->friendData_)->RefreshFriendList();
} catch(const pls::cs::Exception& cs_caught_262) {auto t=pls::cs::capture_exception(cs_caught_262);
{
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Push(self->MakeErrorDialog());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(self)->Pop();});
}}}, [&]() {
self->th_ = pls::cs::Ref<java::lang::JThread>{};
});

}},this));
require(th_)->Start();
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(require(friendData_)->friSave_)->ints.get_Item(0))->Get();}), 1);})) {
{ auto cs_target = require(require(friendData_)->friSave_)->ints; auto cs_index = 0; auto cs_value = kl_unity_util::SecureInt::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::On(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(require(friendData_)->friSave_)->ints.get_Item(0))->Get();}), 1);}));cs_target.set_Item(cs_index,cs_value);}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(FriendForm::create(11));});
}
} else if (type_ == 3) {
text_ = pls::cs::String(u"");
} else if (type_ == 4) {

} else if (type_ == 5) {

} else if (type_ == 6) {

} else if (type_ == 7) {

} else if (type_ == 8) {

} else if (type_ == 9) {

} else if (type_ == 10) {

} else {
if (type_ == 11) {
pls::cs::String value = KairoText::LT(literal(u"全国に散らばるユーザーを<br>フレンドとして最大<0>人まで<br>登録できます。<br>フレンドの合計ﾌﾟﾚｲ時間に<br>よって起動時にボーナスが<br>入ります。IDを聞いて友達<br>に申請してみましょう。"));
textLay_ = kairo::unity::ui::TextLayout::create();
require(textLay_)->SetSize(204.0f, 128.0f);
require(textLay_)->SetColor(FriendForm::COLOR_BLACK());
require(textLay_)->SetAnchor(34);
require(textLay_)->SetLineSpace(4);
{ auto cs_receiver = textLay_; pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(value, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(require(friendData_)->FRIEND_MAX);}));}); require(cs_receiver)->SetText(cs_arg0); }
require(textLay_)->Flush();
} else if (type_ == 12) {

} else if (type_ == 13) {

} else if (type_ == 15) {

}
}
if ([&]() { pls::cs::Ref<java::lang::JThread> cs_left = th_; pls::cs::Ref<java::lang::JThread> cs_right = pls::cs::Ref<java::lang::JThread>{}; return java::lang::JThread::op_Inequality(cs_left,cs_right); }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[0]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[0]; static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[num]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[num2]; static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
}
return true;

}
}

// M:system.form.FriendForm.Update
bool FriendForm::Update() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.Update",game);
{
main::AppData::ensure_initialized();

{auto cs_flow_263 = pls::cs::run_finally([&]() -> pls::cs::Flow<bool> {{
return pls::cs::flow_return(_update());
} return {};}, [&]() {
if ([&]() { pls::cs::Ref<java::lang::JThread> cs_left = th_; pls::cs::Ref<java::lang::JThread> cs_right = pls::cs::Ref<java::lang::JThread>{}; return java::lang::JThread::op_Inequality(cs_left,cs_right); }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[0]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[0]; static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[FriendForm::softLabels_()[type_][0]]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[FriendForm::softLabels_()[type_][1]]; static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
}
});
return cs_flow_263.value();
}

}
}

// M:system.form.FriendForm.Draw(kairo.unity.ui.Graphics)
void FriendForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.Draw(kairo.unity.ui.Graphics)",game);
{
kl_cfg::Config::ensure_initialized();

MyFormBase::Draw(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = (require(view_)->GetGameWidth() - 240) / 2; pls::cs::Int32 cs_arg1 = (require(view_)->GetGameHeight() - 240) / 2; require(g)->SetOrigin(cs_arg0, cs_arg1); }());});
pls::cs::run_finally([&]() {try {
_draw(g);
} catch(const pls::cs::Exception& cs_caught_260) {auto t=pls::cs::capture_exception(cs_caught_260);
{
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(pls::cs::String::concat(literal(u"type_"), integer_string(type_)), pls::cs::Ref<pls::cs::ExceptionObject>{});});
}
}}}, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
});

}
}

// M:system.form.FriendForm._draw(kairo.unity.ui.Graphics)
void FriendForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm._draw(kairo.unity.ui.Graphics)",game);
{
MyFormBase::ensure_initialized();
pls::game::form::GameForm::ensure_initialized();

bool flag = false;
if (!is_null(require(apdat_)->save_)) {
flag = require(require(apdat_)->save_)->ints[12] != 0;
}
pls::cs::Ref<kairo::unity::ui::ResourceManager> resourceManager = FriendForm::resFriend_();
if ([&]() { pls::cs::Ref<java::lang::JThread> cs_left = th_; pls::cs::Ref<java::lang::JThread> cs_right = pls::cs::Ref<java::lang::JThread>{}; return java::lang::JThread::op_Inequality(cs_left,cs_right); }()) {
ConnectForm::DrawConnect(g);
return;
}
if (type_ == 0) {
pls::cs::Int32 num = 12;
pls::cs::Int32 num2 = 60;
pls::cs::Int32 num3 = 216;
pls::cs::Int32 num4 = 128;
FriendForm::FillRect2(g, num, num2, num3, num4, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(149, 149, 171);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(204, 206, 241);}));
FriendForm::DrawGradation(g, num + 2, num2 + 2, 0, 0, num3 - 4, num4 - 4, 1, 125, 255, 107, 220, 255);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(164, 168, 178);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = KairoText::LT(literal(u"ゲームの前に")); require(g)->DrawString(cs_arg0, 120.0f, num2 + 10, 2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(207, 245, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = KairoText::LT(literal(u"あなたのﾆｯｸﾈｰﾑを入力してね")); require(g)->DrawString(cs_arg0, 120.0f, num2 + 28, 2); }());});
FriendForm::FillRect2(g, num + 24, num2 + 47, 171, 24, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(184, 184, 184);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(166, 167, 179);});
pls::cs::String str = KairoText::LT(literal(u"ここをタッチ"));
if (!is_null(text_) && kl_lang::StringEx::Length(text_) > 0) {
str = text_;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(str, 120.0f, num2 + 53, 2);});
pls::game::surface::GameView::AddTouch(g, 3, num + 24, num2 + 47, 171, 24, 131072, require(kairo::unity::surface::TouchOption::Create())->Margin(5, 5, 10, 10));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(207, 245, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = KairoText::LT(literal(u"※あとで変更できます※")); require(g)->DrawString(cs_arg0, 120.0f, num2 + 77, 2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(70, 70, 70);}));});
pls::cs::Ref<pls::kairo::Graphics> cs_arg0_293 = g; pls::cs::String cs_arg1_293 = KairoText::LT(literal(u"OK")); bool cs_arg7_293 = select_ == 1;
IntArray array = DrawCommand(cs_arg0_293, cs_arg1_293, 120, num2 + num4 - 25, 2, true, 20, cs_arg7_293);
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = array[0]; pls::cs::Int32 cs_arg3 = array[1]; pls::cs::Int32 cs_arg4 = array[2]; pls::cs::Int32 cs_arg5 = array[3]; pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(40, 40, 10, 20); pls::game::surface::GameView::AddTouch(cs_arg0, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 131073, cs_arg7);}
{ auto cs_receiver = require(FriendForm::resFriend_())->seb.get_Item(2); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(FriendForm::resFriend_())->img; require(cs_receiver)->DrawFrame(g, num + 142, num2 + 109, cs_arg3, 0, -1); }
} else if (type_ == 1) {
pls::cs::Int32 num5 = 12;
pls::cs::Int32 num6 = 60;
pls::cs::Int32 num7 = 216;
pls::cs::Int32 num8 = 128;
FriendForm::FillRect2(g, num5, num6, num7, num8, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(149, 149, 171);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(204, 206, 241);}));
FriendForm::DrawGradation(g, num5 + 2, num6 + 2, 0, 0, num7 - 4, num8 - 4, 1, 125, 255, 107, 220, 255);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(207, 245, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = KairoText::LT(literal(u"新しいﾆｯｸﾈｰﾑを入力してね")); require(g)->DrawString(cs_arg0, 120.0f, num6 + 28, 2); }());});
FriendForm::FillRect2(g, num5 + 24, num6 + 47, 171, 24, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(184, 184, 184);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(166, 167, 179);});
pls::cs::String str2 = KairoText::LT(literal(u"ここをタッチ"));
if (!is_null(text_) && kl_lang::StringEx::Length(text_) > 0) {
str2 = text_;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(str2, 120.0f, num6 + 53, 2);});
pls::game::surface::GameView::AddTouch(g, 3, num5 + 24, num6 + 47, 171, 24, 131072, require(kairo::unity::surface::TouchOption::Create())->Margin(5, 5, 10, 10));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(207, 245, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = KairoText::LT(literal(u"※あとで変更できます※")); require(g)->DrawString(cs_arg0, 120.0f, num6 + 77, 2); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(70, 70, 70);}));});
pls::cs::Ref<pls::kairo::Graphics> cs_arg0_294 = g; pls::cs::String cs_arg1_294 = KairoText::LT(literal(u"OK")); bool cs_arg7_294 = select_ == 1;
IntArray array2 = DrawCommand(cs_arg0_294, cs_arg1_294, 120, num6 + num8 - 25, 2, true, 20, cs_arg7_294);
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = array2[0]; pls::cs::Int32 cs_arg3 = array2[1]; pls::cs::Int32 cs_arg4 = array2[2]; pls::cs::Int32 cs_arg5 = array2[3]; pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(40, 40, 10, 20); pls::game::surface::GameView::AddTouch(cs_arg0, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 131073, cs_arg7);}
{ auto cs_receiver = require(FriendForm::resFriend_())->seb.get_Item(2); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(FriendForm::resFriend_())->img; require(cs_receiver)->DrawFrame(g, num5 + 142, num6 + 109, cs_arg3, 0, -1); }
} else if (type_ == 2) {
pls::cs::Int32 num9 = 224;
pls::cs::Int32 num10 = 224;
pls::cs::Int32 num11 = (require(friendData_)->FRIEND_MAX + 5 - 1) / 5;
pls::cs::String text = KairoText::LT(literal(u"<0>  <1>時間 <2>分"), ([&]() { auto cs_left = pls::cs::String::concat(([&]() { auto cs_left = ([&]() { auto cs_value = (([&]() { pls::cs::Ref<kl_unity_util::SecureString> cs_left = require(require(friendData_)->friSave_)->strs.get_Item(0); pls::cs::String cs_right = literal(u"\t"); return kl_unity_util::SecureString::op_Addition(cs_left,cs_right); }())); return kl_unity_util::SecureString::op_Implicit(cs_value); }()); auto cs_right = integer_string(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(require(friendData_)->friSave_)->ints.get_Item(1))->Get();})) / 60); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"\t")); auto cs_right = integer_string(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(require(friendData_)->friSave_)->ints.get_Item(1))->Get();})) % 60); return pls::cs::String::concat(cs_left,cs_right); }()));
IntArray array3 = IntArray{};
pls::cs::Int32 num12 = array3[MyFormBase::WNDRET_BOX_TOP()] + 5;
pls::cs::Int32 num13 = array3[MyFormBase::WNDRET_BOX_LEFT()] + 6;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_BLACK());});
{ pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LT(literal(u"前回起動時")); kairo::unity::ui::Graphics::DrawStringTextFormatStringFloat(require(g), cs_arg0, cs_arg1, num13, num12); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_BLUE());});
{ pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LT(literal(u"累計")); pls::cs::Single cs_arg2 = array3[MyFormBase::WNDRET_BOX_LEFT()] + 91; kairo::unity::ui::Graphics::DrawStringTextFormatStringFloat(require(g), cs_arg0, cs_arg1, cs_arg2, num12); }
pls::cs::Int32 num14 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(require(friendData_)->friSave_)->ints.get_Item(2))->Get();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LT(literal(u"<0>時間<1>分"), pls::cs::String::concat(pls::cs::String::concat(integer_string(num14 / 60), literal(u"\t")), integer_string(num14 % 60))); pls::cs::Single cs_arg2 = array3[MyFormBase::WNDRET_BOX_RIGHT()] - 5; PlsPortGeneratedBootstrap::Source::DrawGraphicsText(require(g), cs_arg0, cs_arg1, cs_arg2, num12, 4); }());});
pls::cs::Int32 num15 = array3[MyFormBase::WNDRET_BOX_LEFT()] + 10;
pls::cs::Int32 num16 = 120;
pls::cs::Int32 num17 = array3[MyFormBase::WNDRET_BOX_RIGHT()] - 10;
num12 = array3[MyFormBase::WNDRET_BOX_TOP()] + 20;
for (pls::cs::Int32 i = 0; i < 5; ++i) {
pls::cs::Int32 num18 = page_ * 5 + i;
if (num18 < require(friendData_)->FRIEND_MAX) {
pls::cs::Ref<friend_::ui::Friend> friend_ = pls::cs::Ref<friend_::ui::Friend>{};
bool flag2 = false;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(friendData_)->applyList_));}) > 0 && ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(friendData_)->friendList_));}); auto cs_right = require(friendData_)->FRIEND_MAX; return cs_left < cs_right; }())) {
if (require(friendData_)->FRIEND_MAX <= 5) {
if (num18 == require(friendData_)->FRIEND_MAX - 1) {
flag2 = true;
} else if (num18 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(friendData_)->friendList_));})) {
friend_ = pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(friendData_)->friendList_), num18);}));
}
} else if (num18 == 0) {
flag2 = true;
} else if (num18 - 1 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(friendData_)->friendList_));})) {
friend_ = pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(friendData_)->friendList_), num18 - 1);}));
}
} else if (num18 < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(friendData_)->friendList_));})) {
friend_ = pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(require(friendData_)->friendList_), num18);}));
}
pls::cs::Int32 num19 = num12 + 2;
pls::cs::Int32 num20 = num12 + 18;
pls::cs::Int32 num21 = num12 + 10;
if (!is_null(friend_)) {
FriendForm::FillRect2(g, array3[MyFormBase::WNDRET_BOX_LEFT()] + 3, num12, 196, 32, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(31, 80, 75);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LT(literal(u"<0>さん"), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(friend_)->name_);})); PlsPortGeneratedBootstrap::Source::DrawGraphicsText(require(g), cs_arg0, cs_arg1, num15, num21, 1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_RED());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LT(literal(u"<0>時間<1>分"), ([&]() { auto cs_left = pls::cs::String::concat(integer_string(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(friend_)->minute_)->Get();})) / 60), literal(u"\t")); auto cs_right = integer_string(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(friend_)->minute_)->Get();})) % 60); return pls::cs::String::concat(cs_left,cs_right); }())); PlsPortGeneratedBootstrap::Source::DrawGraphicsText(require(g), cs_arg0, cs_arg1, num17, num21, 4); }());});
} else if (flag2) {
FriendForm::FillRect2(g, array3[MyFormBase::WNDRET_BOX_LEFT()] + 3, num12, 196, 32, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(31, 80, 75);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));
friend_ = pls::cs::unbox<pls::cs::Ref<friend_::ui::Friend>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_FirstElement(require(require(friendData_)->applyList_));}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LT(literal(u"<0>さん"), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(friend_)->name_);})); PlsPortGeneratedBootstrap::Source::DrawGraphicsText(require(g), cs_arg0, cs_arg1, num15, num19, 1); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LT(literal(u"<0>時間<1>分"), ([&]() { auto cs_left = pls::cs::String::concat(integer_string(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(friend_)->minute_)->Get();})) / 60), literal(u"\t")); auto cs_right = integer_string(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(friend_)->minute_)->Get();})) % 60); return pls::cs::String::concat(cs_left,cs_right); }())); PlsPortGeneratedBootstrap::Source::DrawGraphicsText(require(g), cs_arg0, cs_arg1, num17, num19, 4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LT(literal(u"から申請があります。")); PlsPortGeneratedBootstrap::Source::DrawGraphicsText(require(g), cs_arg0, cs_arg1, num15, num20, 1); }());});
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(friendData_)->applyList_));}) - 1 > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LTInt(literal(u"他<0>件"), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(friendData_)->applyList_));}) - 1); PlsPortGeneratedBootstrap::Source::DrawGraphicsText(require(g), cs_arg0, cs_arg1, num17, num20, 4); }());});
}
} else {
FriendForm::FillRect2(g, array3[MyFormBase::WNDRET_BOX_LEFT()] + 3, num12, 196, 32, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(31, 80, 75);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(89, 167, 153);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_WHITE());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LT(literal(u"フレンドを探す")); PlsPortGeneratedBootstrap::Source::DrawGraphicsText(require(g), cs_arg0, cs_arg1, num16, num21, 2); }());});
}
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = array3[MyFormBase::WNDRET_BOX_LEFT()] + 3; pls::cs::Int32 cs_arg3 = num12; pls::cs::Int32 cs_arg6 = (0x20000 | i); pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(5, 5, 0, 0); pls::game::surface::GameView::AddTouch(cs_arg0, 3, cs_arg2, cs_arg3, 196, 32, cs_arg6, cs_arg7);}
}
num12 += 32;
}
} else if (type_ == 3) {
pls::cs::Int32 num22 = 12;
pls::cs::Int32 num23 = 60;
pls::cs::Int32 num24 = 216;
pls::cs::Int32 num25 = 128;
FriendForm::FillRect2(g, num22, num23, num24, num25, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(149, 149, 171);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(204, 206, 241);}));
FriendForm::DrawGradation(g, num22 + 2, num23 + 2, 0, 0, num24 - 4, num25 - 4, 1, 125, 255, 107, 220, 255);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(207, 245, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = KairoText::LT(literal(u"あなたのIDはこちら(ﾀｯﾁしてね)")); require(g)->DrawString(cs_arg0, 120.0f, num23 + 10, 2); }());});
FriendForm::FillRect2(g, num22 + 24, num23 + 25, 171, 24, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(106, 106, 106);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(152, 152, 152);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_WHITE());});
pls::cs::String friendID = require(friendData_)->GetFriendID();
pls::cs::String text2 = pls::cs::String(u"");
try {
for (pls::cs::Int32 num26 = kl_lang::StringEx::Length(friendID) - 1; num26 >= 0; --num26) {
text2 = pls::cs::String::concat(kl_lang::StringEx::SubstringJ(friendID, num26, num26 + 1), text2);
pls::cs::Int32 num27 = kl_lang::StringEx::Length(friendID) - 1 - num26;
if (num26 != 0 && num27 % 3 == 2) {
text2 = pls::cs::String::concat(literal(u","), text2);
}
}
} catch(const pls::cs::Exception& cs_caught_243) {pls::cs::capture_exception(cs_caught_243);
{
text2 = pls::cs::String(u"");
}}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(text2, 120.0f, num23 + 32, 2);});
pls::game::surface::GameView::AddTouch(g, 3, num22 + 24, num23 + 25, 171, 24, 65536001, require(kairo::unity::surface::TouchOption::Create())->Margin(40, 40, 10, 10));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(207, 245, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = KairoText::LT(literal(u"検索はこちら")); require(g)->DrawString(cs_arg0, 120.0f, num23 + 56, 2); }());});
FriendForm::FillRect2(g, num22 + 24, num23 + 71, 171, 24, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(184, 184, 184);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(166, 167, 179);});
pls::cs::String str3 = KairoText::LT(literal(u"ここに入力"));
if (!is_null(text_) && kl_lang::StringEx::Length(text_) > 0) {
str3 = text_;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(str3, 120.0f, num23 + 77, 2);});
pls::game::surface::GameView::AddTouch(g, 3, num22 + 24, num23 + 71, 171, 24, 131072, require(kairo::unity::surface::TouchOption::Create())->Margin(5, 5, 20, 5));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(70, 70, 70);}));});
pls::cs::Ref<pls::kairo::Graphics> cs_arg0_295 = g; pls::cs::String cs_arg1_295 = KairoText::LT(literal(u"検索")); bool cs_arg7_295 = select_ == 1;
IntArray array4 = DrawCommand(cs_arg0_295, cs_arg1_295, 120, num23 + num25 - 25, 2, true, 10, cs_arg7_295);
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = array4[0]; pls::cs::Int32 cs_arg3 = array4[1]; pls::cs::Int32 cs_arg4 = array4[2]; pls::cs::Int32 cs_arg5 = array4[3]; pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(40, 40, 10, 20); pls::game::surface::GameView::AddTouch(cs_arg0, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 131073, cs_arg7);}
} else {
if (type_ == 4) {

} else if (type_ == 5) {

} else if (type_ == 6) {

} else if (type_ == 7) {

} else if (type_ == 8) {

} else if (type_ == 9) {

} else if (type_ == 10) {

} else if (type_ == 11) {

} else if (type_ == 12) {
if (flag) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(1, 48, 207);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::cs::Int32 originX = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();});
pls::cs::Int32 originY = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(pls::game::form::GameForm::VIEW_X(), pls::game::form::GameForm::VIEW_Y(), pls::game::form::GameForm::VIEW_W(), pls::game::form::GameForm::VIEW_H());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(originX, originY);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
}
pls::cs::Int32 originX2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();});
pls::cs::Int32 originY2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, originY2);});
pls::cs::Int32 num28 = pls::game::form::GameForm::VIEW_W() / 2;
pls::cs::Int32 num29 = (pls::cs::Int32(240) - pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();})) / 2;
pls::cs::Int32 num30 = 4;
pls::cs::Int32 num31 = 8;
pls::cs::Int32 length = 8;
pls::cs::Int32 num32 = 16;
pls::cs::Int32 num33 = 8;
pls::cs::Int32 vIEW_W = pls::game::form::GameForm::VIEW_W();
pls::cs::Int32 num34 = 66;
pls::cs::Int32 num35 = 0;
pls::cs::Int32 num36 = 0;
pls::cs::Int32 num37 = 60;
pls::cs::Int32 num38 = 12;
num37 = ([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = ((vIEW_W - 60) / num30); return cs_left * cs_right; }());
if (num37 > vIEW_W) {
num37 = vIEW_W;
}
num38 = ([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = ((num34 - 12) / num30); return cs_left * cs_right; }());
if (num38 > num34) {
num38 = num34;
}
num35 = 0;
num36 = num29 - num38 / 2;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(1, 192, 63);});
FriendForm::DrawBonusObi(g, num35, num36, num37, num38, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(241, 178, 50);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(234, 215, 12);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(246, 222, 12);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
if (frame_ >= num31) {
num37 = 153;
num38 = 19;
num35 = kairo::unity::graph::Graph::Easing(-num37, (pls::game::form::GameForm::VIEW_W() - num37) / 2, length, frame_ - num31, 80);
num36 = num29 - 39;
FriendForm::FillRect3(g, num35, num36, num37, num38, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 210, 25);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 224, 72);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 250, 226);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_BLACK());});
pls::cs::String str4 = KairoText::LT(literal(u"ﾌﾚﾝﾄﾞﾎﾞｰﾅｽ(<0>分毎)"), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(require(friendData_)->PLAY_BONUS_INTERVAL_MINUTE);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); PlsPortGeneratedBootstrap::Source::DrawGraphicsText(require(g), cs_arg0, str4, num35 + num37 / 2, num36 + 3, 2); }());});
}
if (frame_ >= num32) {
num37 = 204;
num38 = 54;
num35 = kairo::unity::graph::Graph::Easing(-num37, (pls::game::form::GameForm::VIEW_W() - num37) / 2, num33, frame_ - num32, 80);
num36 = num29 - 16;
FriendForm::FillRect2(g, num35, num36, num37, num38, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(7, 56, 158);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(206, 217, 152);}));
FriendForm::DrawGradation(g, num35 + 2, num36 + 2, 0, 0, num37 - 4, num38 - 4, 114, 142, 176, 80, 86, 155);
pls::cs::Int32 num39 = num32 + num33;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetClip(num35 + 2, num36 + 2, num37 - 4, num38 - 4);});
if (frame_ < num39) {
pls::cs::Int32 maxFrame = require(require(resourceManager)->seb.get_Item(9))->GetMaxFrame();
{ auto cs_receiver = require(resourceManager)->seb.get_Item(11); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; pls::cs::Int32 cs_arg4 = frame_ % maxFrame; require(cs_receiver)->DrawFrame(g, num35 + 16, num36 + 57, cs_arg3, cs_arg4, -1); }
{ auto cs_receiver = require(resourceManager)->seb.get_Item(8); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; pls::cs::Int32 cs_arg4 = frame_ % maxFrame; require(cs_receiver)->DrawFrame(g, num35 + 190, num36 + 57, cs_arg3, cs_arg4, -1); }
} else {
pls::cs::Int32 maxFrame2 = require(require(resourceManager)->seb.get_Item(13))->GetMaxFrame();
{ auto cs_receiver = require(resourceManager)->seb.get_Item(15); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; pls::cs::Int32 cs_arg4 = (frame_ - num39) % maxFrame2; require(cs_receiver)->DrawFrame(g, num35 + 16, num36 + 57, cs_arg3, cs_arg4, -1); }
{ auto cs_receiver = require(resourceManager)->seb.get_Item(12); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; pls::cs::Int32 cs_arg4 = (frame_ - num39) % maxFrame2; require(cs_receiver)->DrawFrame(g, num35 + 190, num36 + 57, cs_arg3, cs_arg4, -1); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClearClip();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_WHITE());});
pls::cs::String text3 = KairoText::LT(literal(u"ﾌﾚﾝﾄﾞから <co=254,233,1><0></co>時間<co=254,233,1><1></co>分 取得"), ([&]() { auto cs_left = pls::cs::String::concat(integer_string(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(require(friendData_)->friSave_)->ints.get_Item(3))->Get();})) / 60), literal(u"\t")); auto cs_right = integer_string(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(require(friendData_)->friSave_)->ints.get_Item(3))->Get();})) % 60); return pls::cs::String::concat(cs_left,cs_right); }()));
{ pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); kairo::unity::ui::TextLayout::Draw(cs_arg0, g, text3, num35 + num37 / 2, num36 + 5, FriendForm::COLOR_WHITE(), 2); }
require(resourceManager)->DrawSeb(g, num35 + 59, num36 + 9 + 9, 16);
pls::cs::Int32 playBonus = require(friendData_)->GetPlayBonus();
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::String cs_arg2 = pls::cs::String(u""); pls::cs::Int64 cs_arg3 = pls::cs::cast_integral<pls::cs::Int64>(playBonus); pls::cs::String cs_arg4 = pls::cs::String(u""); require(cs_receiver)->DrawNumImage(cs_arg0, 17, cs_arg2, cs_arg3, cs_arg4, num35 + 80 + 7, num36 + 12 + 9, 0, 2); }
{ auto cs_receiver = require(resourceManager)->seb.get_Item(18); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; require(cs_receiver)->DrawFrame(g, num35 + 98, num36 + 11 + 9, cs_arg3, 0, -1); }
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_WHITE());});
if ([&]() -> bool { auto cs_left = require(friendData_)->GetPlayBonus(); auto cs_right = require(friendData_)->PLAY_BONUS_MAX; return cs_left >= cs_right; }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::TextFormat> cs_arg0 = LF(literal(u"10,,+1")); pls::cs::String cs_arg1 = KairoText::LT(literal(u"(最大)")); PlsPortGeneratedBootstrap::Source::DrawGraphicsText(require(g), cs_arg0, cs_arg1, num35 + 133, num36 + 12 + 9, 1); }());});
}
}
if (frame_ >= 24) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_WHITE());});
pls::cs::Ref<pls::kairo::Graphics> cs_arg0_296 = g; pls::cs::String cs_arg1_296 = KairoText::LT(literal(u"受け取る")); bool cs_arg5_296 = select_ == 0; bool cs_arg7_296 = select_ == 0;
IntArray array5 = DrawCommand(cs_arg0_296, cs_arg1_296, num35 + 67, num36 + 37, 2, cs_arg5_296, 10, cs_arg7_296);
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = array5[0]; pls::cs::Int32 cs_arg3 = array5[1]; pls::cs::Int32 cs_arg4 = array5[2]; pls::cs::Int32 cs_arg5 = array5[3]; pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(20, 10, 15, 15); pls::game::surface::GameView::AddTouch(cs_arg0, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 131072, cs_arg7);}
array5 = ([&]() -> IntArray { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::String cs_arg1 = KairoText::LT(literal(u"また次回")); bool cs_arg5 = select_ == 1; bool cs_arg7 = select_ == 1; return DrawCommand(cs_arg0, cs_arg1, num35 + 139, num36 + 37, 2, cs_arg5, 10, cs_arg7); }());
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = array5[0]; pls::cs::Int32 cs_arg3 = array5[1]; pls::cs::Int32 cs_arg4 = array5[2]; pls::cs::Int32 cs_arg5 = array5[3]; pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(10, 20, 15, 15); pls::game::surface::GameView::AddTouch(cs_arg0, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 131073, cs_arg7);}
}
} else if (type_ == 13) {
if (flag) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(1, 48, 207);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::cs::Int32 originX3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();});
pls::cs::Int32 originY3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(pls::game::form::GameForm::VIEW_X(), pls::game::form::GameForm::VIEW_Y(), pls::game::form::GameForm::VIEW_W(), pls::game::form::GameForm::VIEW_H());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(originX3, originY3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
}
} else if (type_ == 14) {
if (flag) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(1, 48, 207);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::cs::Int32 originX4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();});
pls::cs::Int32 originY4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(pls::game::form::GameForm::VIEW_X(), pls::game::form::GameForm::VIEW_Y(), pls::game::form::GameForm::VIEW_W(), pls::game::form::GameForm::VIEW_H());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(originX4, originY4);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
}
pls::cs::Int32 originX5 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();});
pls::cs::Int32 originY5 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, originY5);});
pls::cs::Int32 num40 = pls::game::form::GameForm::VIEW_W() / 2;
pls::cs::Int32 num41 = (pls::cs::Int32(240) - pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();})) / 2;
pls::cs::Int32 num42 = 4;
pls::cs::Int32 num43 = 8;
pls::cs::Int32 length2 = 8;
pls::cs::Int32 num44 = 16;
pls::cs::Int32 num45 = 8;
pls::cs::Int32 vIEW_W2 = pls::game::form::GameForm::VIEW_W();
pls::cs::Int32 num46 = 66;
pls::cs::Int32 num47 = 0;
pls::cs::Int32 num48 = 0;
pls::cs::Int32 num49 = 60;
pls::cs::Int32 num50 = 12;
num49 = ([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = ((vIEW_W2 - 60) / num42); return cs_left * cs_right; }());
if (num49 > vIEW_W2) {
num49 = vIEW_W2;
}
num50 = ([&]() -> pls::cs::Int32 { auto cs_left = frame_; auto cs_right = ((num46 - 12) / num42); return cs_left * cs_right; }());
if (num50 > num46) {
num50 = num46;
}
num47 = 0;
num48 = num41 - num50 / 2;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(1, 192, 63);});
FriendForm::DrawBonusObi(g, num47, num48, num49, num50, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(241, 178, 50);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(234, 215, 12);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(246, 222, 12);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
if (frame_ >= num43) {
num49 = 153;
num50 = 19;
num47 = kairo::unity::graph::Graph::Easing(-num49, (pls::game::form::GameForm::VIEW_W() - num49) / 2, length2, frame_ - num43, 80);
num48 = num41 - 39;
FriendForm::FillRect3(g, num47, num48, num49, num50, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 210, 25);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 224, 72);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 250, 226);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_BLACK());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = KairoText::LT(literal(u"ﾌﾚﾝﾄﾞﾎﾞｰﾅｽ")); require(g)->DrawString(cs_arg0, num47 + num49 / 2, num48 + 3, 2); }());});
}
if (frame_ >= num44) {
num49 = 204;
num50 = 54;
num47 = kairo::unity::graph::Graph::Easing(-num49, (pls::game::form::GameForm::VIEW_W() - num49) / 2, num45, frame_ - num44, 80);
num48 = num41 - 16;
FriendForm::FillRect2(g, num47, num48, num49, num50, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(7, 56, 158);}), pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(206, 217, 152);}));
FriendForm::DrawGradation(g, num47 + 2, num48 + 2, 0, 0, num49 - 4, num50 - 4, 114, 142, 176, 80, 86, 155);
pls::cs::Int32 num51 = num44 + num45;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetClip(num47 + 2, num48 + 2, num49 - 4, num50 - 4);});
if (frame_ < num51) {
pls::cs::Int32 maxFrame3 = require(require(resourceManager)->seb.get_Item(9))->GetMaxFrame();
{ auto cs_receiver = require(resourceManager)->seb.get_Item(11); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; pls::cs::Int32 cs_arg4 = frame_ % maxFrame3; require(cs_receiver)->DrawFrame(g, num47 + 16, num48 + 57, cs_arg3, cs_arg4, -1); }
{ auto cs_receiver = require(resourceManager)->seb.get_Item(8); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; pls::cs::Int32 cs_arg4 = frame_ % maxFrame3; require(cs_receiver)->DrawFrame(g, num47 + 190, num48 + 57, cs_arg3, cs_arg4, -1); }
} else {
pls::cs::Int32 maxFrame4 = require(require(resourceManager)->seb.get_Item(13))->GetMaxFrame();
{ auto cs_receiver = require(resourceManager)->seb.get_Item(15); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; pls::cs::Int32 cs_arg4 = (frame_ - num51) % maxFrame4; require(cs_receiver)->DrawFrame(g, num47 + 16, num48 + 57, cs_arg3, cs_arg4, -1); }
{ auto cs_receiver = require(resourceManager)->seb.get_Item(12); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; pls::cs::Int32 cs_arg4 = (frame_ - num51) % maxFrame4; require(cs_receiver)->DrawFrame(g, num47 + 190, num48 + 57, cs_arg3, cs_arg4, -1); }
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->ClearClip();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_WHITE());});
pls::cs::String text4 = KairoText::LT(literal(u"フレンドが<co=254,233,1><0>人</co>増えました!"), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(friendData_)->newFriendList_));}));}));
kairo::unity::ui::TextLayout::Draw(g, text4, num47 + num49 / 2, num48 + 5, FriendForm::COLOR_WHITE(), 2);
require(resourceManager)->DrawSeb(g, num47 + 59, num48 + 9 + 9, 16);
auto cs_left_297 = require(friendData_)->PLAY_NEW_FRIEND_BONUS; auto cs_right_297 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(require(friendData_)->newFriendList_));});
pls::cs::Int32 num52 = cs_left_297 * cs_right_297;
DrawNumImage(g, 17, pls::cs::cast_integral<pls::cs::Int64>(num52), num47 + 80 + 7, num48 + 12 + 9, 0, 2);
{ auto cs_receiver = require(resourceManager)->seb.get_Item(18); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; require(cs_receiver)->DrawFrame(g, num47 + 98, num48 + 11 + 9, cs_arg3, 0, -1); }
}
if (frame_ >= 24) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(FriendForm::COLOR_WHITE());});
pls::cs::Ref<pls::kairo::Graphics> cs_arg0_298 = g; pls::cs::String cs_arg1_298 = KairoText::LT(literal(u"受け取る")); bool cs_arg5_298 = select_ == 0; bool cs_arg7_298 = select_ == 0;
IntArray array6 = DrawCommand(cs_arg0_298, cs_arg1_298, num47 + 67, num48 + 37, 2, cs_arg5_298, 10, cs_arg7_298);
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = array6[0]; pls::cs::Int32 cs_arg3 = array6[1]; pls::cs::Int32 cs_arg4 = array6[2]; pls::cs::Int32 cs_arg5 = array6[3]; pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(20, 10, 15, 15); pls::game::surface::GameView::AddTouch(cs_arg0, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 131072, cs_arg7);}
array6 = ([&]() -> IntArray { pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::String cs_arg1 = KairoText::LT(literal(u"また次回")); bool cs_arg5 = select_ == 1; bool cs_arg7 = select_ == 1; return DrawCommand(cs_arg0, cs_arg1, num47 + 139, num48 + 37, 2, cs_arg5, 10, cs_arg7); }());
{ pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::Int32 cs_arg2 = array6[0]; pls::cs::Int32 cs_arg3 = array6[1]; pls::cs::Int32 cs_arg4 = array6[2]; pls::cs::Int32 cs_arg5 = array6[3]; pls::cs::Ref<kairo::unity::surface::TouchOption> cs_arg7 = require(kairo::unity::surface::TouchOption::Create())->Margin(10, 20, 15, 15); pls::game::surface::GameView::AddTouch(cs_arg0, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, 131073, cs_arg7);}
}
} else if (type_ == 15 && flag) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(1, 48, 207);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::cs::Int32 originX6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginX();});
pls::cs::Int32 originY6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetOriginY();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(pls::game::form::GameForm::VIEW_X(), pls::game::form::GameForm::VIEW_Y(), pls::game::form::GameForm::VIEW_W(), pls::game::form::GameForm::VIEW_H());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(originX6, originY6);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
}
}

}
}

// M:system.form.FriendForm.Resume
bool FriendForm::Resume() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.Resume",game);
{
{
bool recoveredReturn = MyFormBase::Resume();
return recoveredReturn;
}
}
}

// M:system.form.FriendForm.Finish
bool FriendForm::Finish() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.Finish",game);
{
MyFormBase::Finish();
return true;
}
}

// M:system.form.FriendForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t FriendForm::GetTouchValue(std::int32_t type_raw,std::int32_t index_raw) {
pls::cs::Int32 type = type_raw;
pls::cs::Int32 index = index_raw;
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.GetTouchValue(System.Int32,System.Int32)",game);
{
type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
switch (type) {
case 131072:
{
return select_;
}
case 65536000:
{
return select2_;
}
default:
{
return MyFormBase::GetTouchValue(type, index);
}
}
}
}

// M:system.form.FriendForm.SetTouchValue(System.Int32,System.Int32)
void FriendForm::SetTouchValue(std::int32_t type_raw,std::int32_t value_raw) {
pls::cs::Int32 type = type_raw;
pls::cs::Int32 value = value_raw;
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.SetTouchValue(System.Int32,System.Int32)",game);
{
type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
switch (type) {
case 131072:
{
select_ = value;
if (type_ == 2 && value >= 5) {
select2_ = value - 5;
select_ = 5;
}
break;
}
case 65536000:
{
select2_ = value;
break;
}
default:
{
MyFormBase::SetTouchValue(type, value);
break;
}
}
}
}

// M:system.form.FriendForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool FriendForm::OnTouchEvent(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.OnTouchEvent(kairo.unity.surface.TouchEvent)",game);
{
pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
return true;
}
}

// M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
IntArray FriendForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,bool active,bool cursor) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)",game);
{
return DrawCommand(g, str, x, y, 0, active, 1, cursor);
}
}

// M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IntArray FriendForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 anchor,bool active,bool cursor) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)",game);
{
return DrawCommand(g, str, x, y, anchor, active, 1, cursor);
}
}

// M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)
IntArray FriendForm::DrawCommand(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 anchor,bool active,pls::cs::Int32 margin,bool cursor) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean)",game);
{
return IntArray{};
}
}

// M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IntArray FriendForm::DrawCommandIntBool(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String str,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 anchor,bool active,bool cursor) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawCommand(kairo.unity.ui.Graphics,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)",game);
{
return IntArray{};
}
}

// M:system.form.FriendForm.SetSoftLabel(System.Int32,System.Int32)
void FriendForm::SetSoftLabel(pls::cs::Int32 left,pls::cs::Int32 right) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.SetSoftLabel(System.Int32,System.Int32)",game);
{
main::AppData::ensure_initialized();

pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[left]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[right]; static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});

}
}

// M:system.form.FriendForm.DrawLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::DrawLine(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x1,pls::cs::Int32 y1,pls::cs::Int32 x2,pls::cs::Int32 y2,pls::cs::Int32 color) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(color);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(x1, y1, x2, y2, 1.0f);});
}

}

// M:system.form.FriendForm.DrawDotLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::DrawDotLine(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x1,pls::cs::Int32 y1,pls::cs::Int32 x2,pls::cs::Int32 y2,pls::cs::Int32 color) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawDotLine(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(color);});
for (pls::cs::Int32 i = x1; i < x2; i += 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawLine(i, y1, i + 1, y2, 1.0f);});
}
}

}

// M:system.form.FriendForm.DrawRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::DrawRect(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(color);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(x, y, width, height);});
}

}

// M:system.form.FriendForm.DrawRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::DrawRect2(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(color1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(x, y, width, height);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(color2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(x + 1, y + 1, width - 2, height - 2);});
}

}

// M:system.form.FriendForm.DrawRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::DrawRect3(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2,pls::cs::Int32 color3) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(color1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(x, y, width, height);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(color2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(x + 1, y + 1, width - 2, height - 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(color3);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(x + 2, y + 2, width - 4, height - 4);});
}

}

// M:system.form.FriendForm.FillRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::FillRect(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.FillRect(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(color);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(x, y, width, height);});
}

}

// M:system.form.FriendForm.FillRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::FillRect2(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.FillRect2(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
FriendForm::DrawRect(g, x, y, width - 1, height - 1, color1);
FriendForm::FillRect(g, x + 1, y + 1, width - 2, height - 2, color2);
}

}

// M:system.form.FriendForm.FillRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::FillRect3(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2,pls::cs::Int32 color3) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.FillRect3(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
FriendForm::DrawRect(g, x, y, width - 1, height - 1, color1);
FriendForm::DrawRect(g, x + 1, y + 1, width - 3, height - 3, color2);
FriendForm::FillRect(g, x + 2, y + 2, width - 4, height - 4, color3);
}

}

// M:system.form.FriendForm.FillRect4(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::FillRect4(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2,pls::cs::Int32 color3,pls::cs::Int32 color4) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.FillRect4(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
FriendForm::DrawRect(g, x, y, width - 1, height - 1, color1);
FriendForm::DrawRect(g, x + 1, y + 1, width - 3, height - 3, color2);
FriendForm::DrawRect(g, x + 2, y + 2, width - 5, height - 5, color3);
FriendForm::FillRect(g, x + 3, y + 3, width - 6, height - 6, color4);
}

}

// M:system.form.FriendForm.FillRectShadow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::FillRectShadow(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2,pls::cs::Int32 color3) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.FillRectShadow(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
FriendForm::DrawRect(g, x, y, width - 1, height - 1, color1);
FriendForm::DrawLine(g, x + 1, y + (height - 2), x + (width - 2), y + (height - 2), color2);
FriendForm::DrawLine(g, x + (width - 2), y + 1, x + (width - 2), y + (height - 2), color2);
FriendForm::FillRect(g, x + 1, y + 1, width - 3, height - 3, color3);
}

}

// M:system.form.FriendForm.DrawObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::DrawObi(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
FriendForm::FillRect(g, x, y, width, 1, color1);
FriendForm::FillRect(g, x, y + 1, width, height - 2, color2);
FriendForm::FillRect(g, x, y + height - 1, width, 1, color1);
}

}

// M:system.form.FriendForm.DrawGradation(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::DrawGradation(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 dx,pls::cs::Int32 dy,pls::cs::Int32 sx,pls::cs::Int32 sy,pls::cs::Int32 w,pls::cs::Int32 h,pls::cs::Int32 sr,pls::cs::Int32 sg,pls::cs::Int32 sb,pls::cs::Int32 dr,pls::cs::Int32 dg,pls::cs::Int32 db) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawGradation(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
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
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(pls::cs::to_int32(num7), pls::cs::to_int32(num8), pls::cs::to_int32(num9));}));});
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
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->FillRect(dxAlias, num, w, num10);});
num += num10;
num7 = num7 + num4;
num8 = num8 + num5;
num9 = num9 + num6;
}
}

}

// M:system.form.FriendForm.DrawBonusObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::DrawBonusObi(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 width,pls::cs::Int32 height,pls::cs::Int32 color1,pls::cs::Int32 color2,pls::cs::Int32 color3) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawBonusObi(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
if (height > 5) {
FriendForm::FillRect(g, x, y, width, 5, color1);
}
if (height > 6) {
FriendForm::FillRect(g, x, y + 5, width, 1, color2);
}
if (height > 12) {
FriendForm::FillRect(g, x, y + 6, width, height - 12, color3);
}
if (height > 6) {
FriendForm::FillRect(g, x, y + height - 6, width, 1, color2);
}
if (height > 5) {
FriendForm::FillRect(g, x, y + height - 5, width, 5, color1);
}
}

}

// M:system.form.FriendForm.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32)
void FriendForm::DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 value,pls::cs::Int32 x,pls::cs::Int32 y) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32)",game);
{
DrawNumImage(g, seb, value, x, y, 0, 1);
}
}

// M:system.form.FriendForm.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32)
void FriendForm::DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32)",game);
{
DrawNumImage(g, seb, value, x, y, padding, 1);
}
}

// M:system.form.FriendForm.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendForm::DrawNumImage(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 seb,pls::cs::Int64 value,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 padding,pls::cs::Int32 anchor) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawNumImage(kairo.unity.ui.Graphics,System.Int32,System.Int64,System.Int32,System.Int32,System.Int32,System.Int32)",game);
{
pls::cs::Ref<kairo::unity::ui::ResourceManager> resourceManager = FriendForm::resFriend_();
IntArray sprite = require(require(resourceManager)->seb.get_Item(seb))->GetSprite(0, 0);
pls::cs::Int32 num = sprite[4];
pls::cs::Int32 num2 = sprite[5];
bool flag = (value < pls::cs::cast_integral<pls::cs::Int64>(0));
if (value < pls::cs::cast_integral<pls::cs::Int64>(0)) {
value = value * -1;
}
pls::cs::Int64 num3 = 1ll;
pls::cs::Int64 num4 = 1ll;
pls::cs::Int64 num5 = value;
while (num5 / pls::cs::Int64(10) > pls::cs::cast_integral<pls::cs::Int64>(0)) {
num5 = num5 / 10;
num4 = num4 * 10;
++num3;
}
pls::cs::Int64 num6 = num3;
if (flag) {
++num6;
}
num6 = num6 * pls::cs::Int64((num + padding)) - pls::cs::Int64(padding);
if ((anchor & 2) != 0) {
x -= pls::cs::to_int32(num6) / 2;
} else if ((anchor & 4) != 0) {
x -= pls::cs::to_int32(num6);
}
if ((anchor & 0x20) != 0) {
y -= num2 / 2;
} else if ((anchor & 0x40) != 0) {
y -= num2;
}
if (flag) {
if (45 < require(require(resourceManager)->seb.get_Item(seb))->GetMaxFrame()) {
{ auto cs_receiver = require(resourceManager)->seb.get_Item(seb); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, 45, -1); }
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"-"), x + 1, y + 1);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 0);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"-"), x, y);});
}
x += num + padding;
}
num5 = value;
for (pls::cs::Int32 i = 0; pls::cs::cast_integral<pls::cs::Int64>(i) < num3; ++i) {
{ auto cs_receiver = require(resourceManager)->seb.get_Item(seb); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(resourceManager)->img; pls::cs::Int32 cs_arg4 = pls::cs::to_int32((num5 / num4)); require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, cs_arg4, -1); }
num5 = num5 % num4;
num4 = num4 / 10;
x += num + padding;
}
}
}

// M:system.form.FriendForm.MakeErrorDialog
pls::cs::Ref<pls::kairo::FormBase> FriendForm::MakeErrorDialog() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.MakeErrorDialog",game);
{
return MakeErrorDialog(pls::cs::String{}, pls::cs::String{});
}
}

// M:system.form.FriendForm.MakeErrorDialog(System.String,System.String)
pls::cs::Ref<pls::kairo::FormBase> FriendForm::MakeErrorDialog(pls::cs::String msg,pls::cs::String args) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.MakeErrorDialog(System.String,System.String)",game);
{
if (is_null(msg) || kl_lang::StringEx::Length(msg) == 0) {
msg = KairoText::LT(literal(u"通信できませんでした。|設定を確認し時間を|おいて挑戦して下さい。&ﾌﾚﾝﾄﾞは<friend_max>人まで登録できます"));
}
msg = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(msg, literal(u"<friend_max>"), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(require(friendData_)->FRIEND_MAX);}));});
if (!is_null(args)) {
msg = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(msg, args);});
}
msg = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Replace(msg, literal(u"|"), pls::cs::String(u""));});
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(msg, literal(u"&"));});
if (array.length() == 1) {
return pls::game::form::SubForm::MakeDialog(array[0]);
}
return FriendForm::MakeErrorMsgForm(array[0], array[1]);
}
}

// M:system.form.FriendForm.DrawRandomFriend(kairo.unity.ui.Graphics,System.Int32,System.Int32)
IntArray FriendForm::DrawRandomFriend(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 center,pls::cs::Int32 top) {
FriendForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.DrawRandomFriend(kairo.unity.ui.Graphics,System.Int32,System.Int32)",game);
{
FriendForm::LoadResource();
pls::cs::Ref<friend_::ui::FriendData> instance = friend_::MyFriend::GetInstance();
if (is_null(FriendForm::resFriend_()) || !require(instance)->ExistRandomFriend()) {
return IntArray{};
}
pls::cs::Ref<friend_::ui::Friend> randomFriend = require(instance)->GetRandomFriend();
pls::cs::Int32 num = 150;
pls::cs::Int32 num2 = 53;
pls::cs::Int32 num3 = center - num / 2;
pls::cs::Int32 topAlias = top;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(1, 200, 55);});
FriendForm::DrawGradation(g, num3 + 1, topAlias + 1, 0, 0, num - 2, num2 - 2, 99, 84, 149, 159, 128, 186);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetRenderMode(0, 255, 0);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(92, 50, 104);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawRect(num3, topAlias, num - 2, num2 - 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 255, 255);}));});
pls::cs::String str = KairoText::LT(literal(u"<0>さん"), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::SecureString::ToStringSecureStringStatic(require(randomFriend)->name_);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(str, center, topAlias + 4, 2);});
pls::cs::String str2 = KairoText::LT(literal(u"ﾌﾟﾚｲ <0>時間<1>分"), ([&]() { auto cs_left = pls::cs::String::concat(integer_string(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(randomFriend)->minute_)->Get();})) / 60), literal(u"\t")); auto cs_right = integer_string(pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(require(randomFriend)->minute_)->Get();})) % 60); return pls::cs::String::concat(cs_left,cs_right); }()));
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(str2, center, topAlias + 20, 2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(85, 50, 16);}));});
{ pls::cs::String cs_arg0 = KairoText::LT(literal(u"申請してみる")); kairo::unity::ui::Graphics::DrawStringBold(require(g), cs_arg0, center, topAlias + 37, pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(255, 246, 222);}), 2); }
{ auto cs_receiver = require(FriendForm::resFriend_())->seb.get_Item(1); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(FriendForm::resFriend_())->img; require(cs_receiver)->DrawFrame(g, num3 + 4, topAlias + 50, cs_arg3, 2, -1); }
{ auto cs_receiver = require(FriendForm::resFriend_())->seb.get_Item(1); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(FriendForm::resFriend_())->img; require(cs_receiver)->DrawFrame(g, num3 + 129, topAlias + 50, cs_arg3, 1, -1); }
{ auto cs_receiver = require(FriendForm::resFriend_())->seb.get_Item(0); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = require(FriendForm::resFriend_())->img; require(cs_receiver)->DrawFrame(g, num3 + 42, topAlias - 11, cs_arg3, 0, -1); }
FriendForm::drawRandomFriend_result()[0] = num3;
FriendForm::drawRandomFriend_result()[1] = topAlias;
FriendForm::drawRandomFriend_result()[2] = num;
FriendForm::drawRandomFriend_result()[3] = num2;
return FriendForm::drawRandomFriend_result();
}

}

// M:system.form.FriendForm.GetHashCode
std::int32_t FriendForm::GetHashCode() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.FriendForm.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
} // namespace system::form
}
