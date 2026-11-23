// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "form.MyFormBase.hpp"
#include "form.SpForm.hpp"
#include "form.SubForm.hpp"
#include "game.UserData.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JCalendar.hpp"
#include "generated/java.util.JDate.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.io.ByteListOutputStream.hpp"
#include "generated/kairo.unity.io.ConnectionException.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "java.lang.JRunnable.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.io.ScratchPad.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchOption.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.UIException.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_java_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_io = pls::generated::kairo::unity::io;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace form {

void SpForm::trace_edges(const pls::cs::EdgeVisitor&visitor)const {MyFormBase::trace_edges(visitor);pls::cs::trace_value(text_,visitor);pls::cs::trace_value(date_,visitor);pls::cs::trace_value(commands_,visitor);pls::cs::trace_value(th_,visitor);pls::cs::trace_value(task_,visitor);pls::cs::trace_value(recv_,visitor);}

static IntArray2 SpForm_softLabels__storage{};

static PLS_NOINLINE void cs_init_7eb0a1119bc141dc_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(SpForm_softLabels__storage,visitor);});static pls::cs::TypeInitState state;state.run("form.SpForm",flag,[](){
SpForm_softLabels__storage = pls::cs::evaluate_type_initializer_field("F:form.SpForm.softLabels_",[&](){return IntArray2::from({IntArray::from({0, 2}), IntArray::make(2), IntArray::make(2)});});

});}

void SpForm::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_7eb0a1119bc141dc_slow(flag);}

IntArray2& SpForm::softLabels_(){SpForm::ensure_initialized();return SpForm_softLabels__storage;}

void SpForm::create_init(pls::cs::Ref<SpForm> self) {
SpForm::ensure_initialized();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 3);
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.#ctor",game);
{

}

}

void SpForm::create_init(pls::cs::Ref<SpForm> self,pls::cs::Ref<pls::cs::ExceptionObject> th) {
SpForm::ensure_initialized();
kl_cfg::Config::ensure_initialized();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 3);
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.#ctor(System.Exception)",game);
{
self->text_ = pls::cs::String{};
if (!is_null(th)) {
if (kl_cfg::Config::PTW()) {
self->text_ = pls::cs::String(u"");
}
if (!is_null(kairo::unity::io::Http::GetErrorUrl())) {
pls::cs::String text = kairo::unity::io::Http::GetErrorUrl();
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(text, u'/');});
if (num != -1) {
text = kl_lang::StringEx::SubstringJ(text, num + 1);
}
num = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(text, u'.');});
if (num != -1) {
text = kl_lang::StringEx::SubstringJ(text, 0, num);
}
{ auto cs_target = self; auto cs_old = require(cs_target)->text_; auto cs_rhs = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text, literal(u",")), integer_string(kairo::unity::io::Http::GetErrorCode())), literal(u"\n")); auto cs_value = pls::cs::String::concat(cs_old,cs_rhs); require(cs_target)->text_ = cs_value; }
}
pls::cs::String text3 = pls::cs::String::concat(pls::cs::String(u""), object_string(pls::cs::box(th)));
pls::cs::String text4 = require(pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(th);return pls::cs::RuntimeType::for_name(require(cs_receiver)->managed_type_name());}());}))->get_Name();
pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(text4, u'.');});
if (num2 != -1) {
text4 = kl_lang::StringEx::SubstringJ(text4, num2 + 1);
}
num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_index_of(text3, text4);});
if (num2 != -1) {
text3 = kl_lang::StringEx::SubstringJ(text3, num2);
}
if (is_instance<pls::cs::Ref<kl_unity_io::ConnectionException>>(pls::cs::box(th))) {
text3 = pls::cs::String::concat(pls::cs::String::concat(text3, literal(u",")), integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return require((pls::cs::unbox<pls::cs::Ref<kl_unity_io::ConnectionException>>(pls::cs::box(th))))->GetStatus();})));
}
if (is_instance<pls::cs::Ref<kairo::unity::ui::UIException>>(pls::cs::box(th))) {
text3 = pls::cs::String::concat(pls::cs::String::concat(text3, literal(u",")), integer_string(require((pls::cs::unbox<pls::cs::Ref<kairo::unity::ui::UIException>>(pls::cs::box(th))))->GetStatus()));
}
self->text_ = pls::cs::String::concat(self->text_,text3);
}
}

}

// M:form.SpForm.#ctor
pls::cs::Ref<SpForm> SpForm::create() {
SpForm::ensure_initialized();
 auto self = pls::cs::make_ref<SpForm>(); SpForm::create_init(self); return self; 
}

// M:form.SpForm.#ctor(System.Exception)
pls::cs::Ref<SpForm> SpForm::create(pls::cs::Ref<pls::cs::ExceptionObject> th) {
SpForm::ensure_initialized();
 auto self = pls::cs::make_ref<SpForm>(); SpForm::create_init(self,th); return self; 
}

// M:form.SpForm.ToString
pls::cs::String SpForm::ToString() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.ToString",game);
{
return pls::cs::String::concat(literal(u"SpForm:"), integer_string(state_));
}
}

// M:form.SpForm.Init
bool SpForm::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.Init",game);
{
kl_cfg::Config::ensure_initialized();

MyFormBase::Init();
ChangeState(0);
bool flag = kl_cfg::Config::APPLI_TYPE() == 0 || kl_cfg::Config::APPLI_TYPE() == 1;
commands_ = kl_java_util::Vector::create();
if (!flag) {
AddCommand(10, MyFormBase::LT(literal(u"中断ﾃﾞｰﾀ<0>"), literal(u"1")));
}
AddCommand(0, MyFormBase::LT(literal(u"ｾｰﾌﾞﾃﾞｰﾀ<0>"), literal(u"1")));
if (!flag) {
AddCommand(11, MyFormBase::LT(literal(u"中断ﾃﾞｰﾀ<0>"), literal(u"2")));
}
AddCommand(1, MyFormBase::LT(literal(u"ｾｰﾌﾞﾃﾞｰﾀ<0>"), literal(u"2")));
AddCommand(-1, literal(u"全てのﾃﾞｰﾀを送信"));
if (kl_cfg::Config::APPLI_TYPE() == 0) {
AddCommand(-2, literal(u"まるごと送信"));
}
if (!is_null(text_)) {
AddCommand(-3, literal(u"エラー内容を表示する"));
}
if (kl_cfg::Config::DEBUG() && !kl_cfg::Config::PTW()) {
AddCommand(-4, literal(u"セーブデータを受信する"));
}
pls::cs::Ref<kl_java_util::JCalendar> instance = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JCalendar::GetInstance();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kl_java_util::JDate> cs_arg0 = kl_java_util::JDate::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();})); require(instance)->SetTime(cs_arg0); }());});
auto cs_left_187 = pls::cs::String(u""); auto cs_right_187 = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(1);}));
pls::cs::String text = pls::cs::String::concat(cs_left_187,cs_right_187);
auto cs_left_188 = pls::cs::String(u""); auto cs_right_188 = integer_string((pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(2);})) + 1));
pls::cs::String text2 = pls::cs::String::concat(cs_left_188,cs_right_188);
if (kl_lang::StringEx::Length(text2) == 1) {
text2 = pls::cs::String::concat(literal(u"0"), text2);
}
auto cs_left_189 = pls::cs::String(u""); auto cs_right_189 = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(5);}));
pls::cs::String text3 = pls::cs::String::concat(cs_left_189,cs_right_189);
if (kl_lang::StringEx::Length(text3) == 1) {
text3 = pls::cs::String::concat(literal(u"0"), text3);
}
auto cs_left_190 = pls::cs::String(u""); auto cs_right_190 = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(11);}));
pls::cs::String text4 = pls::cs::String::concat(cs_left_190,cs_right_190);
if (kl_lang::StringEx::Length(text4) == 1) {
text4 = pls::cs::String::concat(literal(u"0"), text4);
}
auto cs_left_191 = pls::cs::String(u""); auto cs_right_191 = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(12);}));
pls::cs::String text5 = pls::cs::String::concat(cs_left_191,cs_right_191);
if (kl_lang::StringEx::Length(text5) == 1) {
text5 = pls::cs::String::concat(literal(u"0"), text5);
}
auto cs_left_192 = pls::cs::String(u""); auto cs_right_192 = integer_string(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance)->Get(13);}));
pls::cs::String text6 = pls::cs::String::concat(cs_left_192,cs_right_192);
if (kl_lang::StringEx::Length(text6) == 1) {
text6 = pls::cs::String::concat(literal(u"0"), text6);
}
date_ = ([&]() { auto cs_left = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String(u""), text), literal(u".")), text2), literal(u".")), text3), literal(u"_")), text4), literal(u".")), text5), literal(u".")), text6); auto cs_right = pls::cs::String(u""); return pls::cs::String::concat(cs_left,cs_right); }());
return true;

}
}

// M:form.SpForm.AddCommand(System.Int32,System.String)
void SpForm::AddCommand(pls::cs::Int32 id,pls::cs::String str) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.AddCommand(System.Int32,System.String)",game);
{
kl_cfg::Config::ensure_initialized();

pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::Int32 num = 0;
if (id >= 0) {
bool flag = id / 10 == 1;
pls::cs::Int32 num2 = id % 10;
pls::cs::String text = require(require(apdat_)->sysSave_)->strs[(flag ? 6 : 2) + num2];
pls::cs::String text2 = require(require(apdat_)->sysSave_)->strs[(flag ? 8 : 4) + num2];
pls::cs::Int32 num3 = require(require(apdat_)->sysSave_)->ints[(flag ? 11 : 6) + num2];
if (num3 == -1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = commands_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(StringArray::from({pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(id);}), str})); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
} else {
pls::cs::run_finally([&]() {try {
recordStore = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::RecordStore::OpenRecordStore(0);});
num = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->GetRecordSize((flag ? 3 : 1) + num2);});
} catch(const pls::cs::Exception& cs_caught_109) {pls::cs::capture_exception(cs_caught_109);
{

}}}, [&]() {
if (!is_null(recordStore)) {
try {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->CloseRecordStore();});
} catch(const pls::cs::Exception& cs_caught_108) {pls::cs::capture_exception(cs_caught_108);
{

}}
}
});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = commands_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(StringArray::from({pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(id);}), str, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(num);}), text, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(num3);}), text2})); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
}
} else {
if (id == -1) {
pls::cs::run_finally([&]() {try {
if (kl_cfg::Config::APPLI_TYPE() == 0) {
num = kairo::unity::io::ScratchPad::GetSPSize(0);
} else {
recordStore = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::RecordStore::OpenRecordStore(0);});
pls::cs::Int32 numRecords = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->GetNumRecords();});
for (pls::cs::Int32 i = 0; i < numRecords; ++i) {
num += pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->GetRecordSize(i);});
}
}
} catch(const pls::cs::Exception& cs_caught_111) {pls::cs::capture_exception(cs_caught_111);
{

}}}, [&]() {
if (!is_null(recordStore)) {
try {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->CloseRecordStore();});
} catch(const pls::cs::Exception& cs_caught_110) {pls::cs::capture_exception(cs_caught_110);
{

}}
}
});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = commands_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(StringArray::from({pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(id);}), str, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(num);})})); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
} else if (id == -2) {
try {
num = ([&]() -> pls::cs::Int32 { auto cs_left = kairo::unity::io::ScratchPad::GetSPSize(0); auto cs_right = kairo::unity::io::ScratchPad::GetSPSize(1); return cs_left + cs_right; }());
} catch(const pls::cs::Exception& cs_caught_112) {pls::cs::capture_exception(cs_caught_112);
{

}}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = commands_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(StringArray::from({pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(id);}), str, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(num);})})); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
} else {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = commands_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(StringArray::from({pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(id);}), str, pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(-1);})})); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
}
}

}
}

// M:form.SpForm.Update
bool SpForm::Update() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.Update",game);
{
main::AppData::ensure_initialized();
kl_cfg::Config::ensure_initialized();

if (!is_null(dialog_)) {
if (state_ == 0 && require(dialog_)->result__SubForm == 0) {
StringArray array = pls::cs::unbox<StringArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(commands_), select_);}));
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[0]);});
send_ = select_;
task_ = pls::cs::Ref<kl_java_util::Vector>{};
taskMax_ = 0;
if (num == -4) {
ChangeState(2);
} else {
ChangeState(1);
}
th_ = java::lang::JThread::create(this);
require(th_)->Start();
} else if (state_ == 1 || state_ == 2) {
if (require(dialog_)->result__SubForm == 0) {
th_ = java::lang::JThread::create(this);
require(th_)->Start();
} else {
if ([&]() { pls::cs::Ref<kl_java_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = task_; pls::cs::Ref<kl_java_util::Vector> cs_right = pls::cs::Ref<kl_java_util::Vector>{}; return kl_java_util::Vector_2_op_Inequality(cs_left,cs_right); }()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveAllElements(require(task_));});
}
task_ = pls::cs::Ref<kl_java_util::Vector>{};
ChangeState(0);
}
}
dialog_ = pls::cs::Ref<SubForm>{};
}
frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
if (state_ == 0) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(131072);})) {
select_ = ([&]() -> pls::cs::Int32 { auto cs_left = (([&]() -> pls::cs::Int32 { auto cs_left = select_ - 1; auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(commands_));}); return cs_left + cs_right; }())); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(commands_));}); return cs_left % cs_right; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(524288);})) {
select_ = ([&]() -> pls::cs::Int32 { auto cs_left = (select_ + 1); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(commands_));}); return cs_left % cs_right; }());
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyPulse(1048576);})) {
StringArray array2 = pls::cs::unbox<StringArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(commands_), select_);}));
if (array2.length() > 2) {
pls::cs::String empty = pls::cs::String(u"");
pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array2[0]);});
if (num2 == -3) {
kairo::unity::ui::Canvas::ImeOnBlock(require(canvas_), text_, 0, 1);
} else {
if (num2 == -4) {
ShowDialog(literal(u"セーブデータを受信します"), literal(u"はい\tいいえ"));
return true;
} else if (num2 == -1) {
ShowDialog(literal(u"全てのデータを送信します"), literal(u"はい\tいいえ"));
} else if (num2 == -2) {
ShowDialog(literal(u"まるごと送信します"), literal(u"はい\tいいえ"));
} else {
pls::cs::Int32 i = num2 % 10 + 1;
if (num2 / 10 == 1) {
ShowDialog(MyFormBase::LT(literal(u"中断データ<0> を送信します"), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(i);})), literal(u"はい\tいいえ"));
} else {
ShowDialog(MyFormBase::LT(literal(u"セーブデータ<0> を送信します"), pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(i);})), literal(u"はい\tいいえ"));
}
}
cs_label_coalescedSwitchExit7380: ;
;
return true;
}
}
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
} else {
if (state_ == 1) {
if ([&]() { pls::cs::Ref<java::lang::JThread> cs_left = th_; pls::cs::Ref<java::lang::JThread> cs_right = pls::cs::Ref<java::lang::JThread>{}; return java::lang::JThread::op_Inequality(cs_left,cs_right); }()) {
return true;
}
if (succeed_) {
{ auto cs_target = require(require(apdat_)->sysSave_)->strs; auto cs_index = 10; auto cs_value = pls::cs::String(u"");cs_target.set_Item(cs_index,cs_value);}
try {
require(apdat_)->SaveSystem();
} catch(const pls::cs::Exception& cs_caught_116) {pls::cs::capture_exception(cs_caught_116);
{

}}
pls::cs::Ref<kairo::unity::ui::Dialog> dialog = kairo::unity::ui::Dialog::create(0, literal(u"完了"));
require(dialog)->SetText(literal(u"送信を完了しました。\nご協力ありがとうございます。\n今後もカイロパークを宜しくお願い致します。"));
require(dialog)->Show();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
ShowDialog(literal(u"エラーが発生しました\nリトライしますか？"), literal(u"はい\tいいえ"));
return true;
}
if (state_ == 2) {
if ([&]() { pls::cs::Ref<java::lang::JThread> cs_left = th_; pls::cs::Ref<java::lang::JThread> cs_right = pls::cs::Ref<java::lang::JThread>{}; return java::lang::JThread::op_Inequality(cs_left,cs_right); }()) {
return true;
}
if (succeed_) {
try {
if (7 <= recv_.length() && (pls::cs::cast_integral<pls::cs::Int32>(recv_[0]) == 115) && (pls::cs::cast_integral<pls::cs::Int32>(recv_[1]) == 97) && (pls::cs::cast_integral<pls::cs::Int32>(recv_[2]) == 118) && (pls::cs::cast_integral<pls::cs::Int32>(recv_[3]) == 101)) {
pls::cs::Ref<kl_java_io::ByteArrayInputStream> byteArrayInputStream = kl_java_io::ByteArrayInputStream::create(recv_);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(byteArrayInputStream)->Skip(4ll);});
pls::cs::Int32 num3 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadByte(byteArrayInputStream);}));
pls::cs::Int32 num4 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadByte(byteArrayInputStream);}));
pls::cs::Int32 num5 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadByte(byteArrayInputStream);}));
ByteArray saveDataBytes;
if (num5 >= 0) {
saveDataBytes = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBool(static_cast<pls::cs::Ref<kl_java_io::InputStream>>(byteArrayInputStream), true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::RecordStore::WriteRecord(0, 1, saveDataBytes);});
try {
pls::cs::Ref<kl_unity_util::Property> property = kl_unity_util::Property::create(main::AppData::defSaveP_(), main::AppData::defSaveI_(), main::AppData::defSaveL_(), main::AppData::defSaveS_(), main::AppData::defSaveB_());
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(property)->Load(saveDataBytes);});
require(require(apdat_)->sysSave_)->ints[6] = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = require(property)->ints[1] * 100 * 100; auto cs_right = require(property)->ints[2] * 100; return cs_left + cs_right; }()); auto cs_right = require(property)->ints[3]; return cs_left + cs_right; }());
{ auto cs_target = require(require(apdat_)->sysSave_)->strs; auto cs_index = 4; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfLong(require(property)->lngs[0]);});cs_target.set_Item(cs_index,cs_value);}
require(require(apdat_)->sysSave_)->strs[2] = require(property)->strs[0];
require(apdat_)->SaveSystem();
} catch(const pls::cs::Exception& cs_caught_117) {pls::cs::capture_exception(cs_caught_117);
{

}}
}
if (num5 == -1) {
if (kl_cfg::Config::APPLI_TYPE() == 0) {
saveDataBytes = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBool(static_cast<pls::cs::Ref<kl_java_io::InputStream>>(byteArrayInputStream), true);});
kairo::unity::io::ScratchPad::WriteByteArray(0, 0, saveDataBytes);
} else {
pls::cs::Ref<kairo::unity::ui::Dialog> unusedOriginalDialog13 = pls::cs::Ref<kairo::unity::ui::Dialog>{};
pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::run_finally([&]() {{
recordStore = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::RecordStore::OpenRecordStore(0);});
pls::cs::Int32 numRecords = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->GetNumRecords();});
for (pls::cs::Int32 j = 0; j < numRecords; ++j) {
saveDataBytes = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBool(static_cast<pls::cs::Ref<kl_java_io::InputStream>>(byteArrayInputStream), true);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->WriteRecord(j, saveDataBytes);});
if (j == 0) {
continue;
}
{
try {
pls::cs::Ref<kl_unity_util::Property> property2 = kl_unity_util::Property::create(main::AppData::defSaveP_(), main::AppData::defSaveI_(), main::AppData::defSaveL_(), main::AppData::defSaveS_(), main::AppData::defSaveB_());
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(property2)->Load(saveDataBytes);});
bool flag = j == 3 || j == 4;
pls::cs::Int32 num6 = ((j == 3 || j == 1) ? 0 : 1);
require(require(apdat_)->sysSave_)->ints[(flag ? 11 : 6) + num6] = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = require(property2)->ints[1] * 100 * 100; auto cs_right = require(property2)->ints[2] * 100; return cs_left + cs_right; }()); auto cs_right = require(property2)->ints[3]; return cs_left + cs_right; }());
{ auto cs_target = require(require(apdat_)->sysSave_)->strs; auto cs_index = (flag ? 8 : 4) + num6; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfLong(require(property2)->lngs[0]);});cs_target.set_Item(cs_index,cs_value);}
require(require(apdat_)->sysSave_)->strs[(flag ? 6 : 2) + num6] = require(property2)->strs[0];
} catch(const pls::cs::Exception& cs_caught_118) {pls::cs::capture_exception(cs_caught_118);
{

}}
}
}
}}, [&]() {
if (!is_null(recordStore)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->CloseRecordStore();});
}
recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
});
try {
require(apdat_)->SaveSystem();
} catch(const pls::cs::Exception& cs_caught_119) {pls::cs::capture_exception(cs_caught_119);
{

}}
}
}
if (num5 == -2) {
saveDataBytes = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBool(static_cast<pls::cs::Ref<kl_java_io::InputStream>>(byteArrayInputStream), true);});
kairo::unity::io::ScratchPad::WriteByteArray(0, 0, saveDataBytes);
saveDataBytes = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::ReadBool(static_cast<pls::cs::Ref<kl_java_io::InputStream>>(byteArrayInputStream), true);});
kairo::unity::io::ScratchPad::WriteByteArray(1, 0, saveDataBytes);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(byteArrayInputStream)->Close();});
} else {
if (recv_.length() == 0) {
pls::cs::Ref<kairo::unity::ui::Dialog> dialog2 = kairo::unity::ui::Dialog::create(0, literal(u"失敗"));
require(dialog2)->SetText(literal(u"ファイルが見つかりません。"));
require(dialog2)->Show();
ChangeState(0);
return true;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::RecordStore::WriteRecord(0, 1, recv_);});
try {
pls::cs::Ref<kl_unity_util::Property> property3 = kl_unity_util::Property::create(main::AppData::defSaveP_(), main::AppData::defSaveI_(), main::AppData::defSaveL_(), main::AppData::defSaveS_(), main::AppData::defSaveB_());
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(property3)->Load(recv_);});
require(require(apdat_)->sysSave_)->ints[6] = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = require(property3)->ints[1] * 100 * 100; auto cs_right = require(property3)->ints[2] * 100; return cs_left + cs_right; }()); auto cs_right = require(property3)->ints[3]; return cs_left + cs_right; }());
{ auto cs_target = require(require(apdat_)->sysSave_)->strs; auto cs_index = 4; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfLong(require(property3)->lngs[0]);});cs_target.set_Item(cs_index,cs_value);}
require(require(apdat_)->sysSave_)->strs[2] = require(property3)->strs[0];
require(apdat_)->SaveSystem();
} catch(const pls::cs::Exception& cs_caught_120) {pls::cs::capture_exception(cs_caught_120);
{

}}
}
} catch(const pls::cs::Exception& cs_caught_121) {pls::cs::capture_exception(cs_caught_121);
{

}}
pls::cs::Ref<kairo::unity::ui::Dialog> dialog3 = kairo::unity::ui::Dialog::create(0, literal(u"完了"));
require(dialog3)->SetText(literal(u"受信完了しました。"));
require(dialog3)->Show();
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
ShowDialog(literal(u"エラーが発生しました\nリトライしますか？"), literal(u"はい\tいいえ"));
return true;
}
}
return true;

}
}

// M:form.SpForm.Draw(kairo.unity.ui.Graphics)
void SpForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.Draw(kairo.unity.ui.Graphics)",game);
{
pls::cs::Int32 num = 0;
pls::cs::Int32 num2 = 0;
num += (require(view_)->GetGameWidth() - 240) / 2;
num2 += (require(view_)->GetGameHeight() - 240) / 2;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(num, num2);});
pls::cs::run_finally([&]() {{
_draw(g);
}}, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
});
}
}

// M:form.SpForm.Resume
bool SpForm::Resume() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.Resume",game);
{
return true;
}
}

// M:form.SpForm.Finish
bool SpForm::Finish() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.Finish",game);
{
return true;
}
}

// M:form.SpForm.ChangeState(System.Int32)
void SpForm::ChangeState(pls::cs::Int32 state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.ChangeState(System.Int32)",game);
{
state_ = state;
SetSoftLabel();
}
}

// M:form.SpForm.SetSoftLabel
void SpForm::SetSoftLabel() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.SetSoftLabel",game);
{
main::AppData::ensure_initialized();

IntArray array = SpForm::softLabels_()[state_];
if ([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }()) {
return;
}
{
pls::cs::Int32 num = array[0];
pls::cs::Int32 num2 = array[1];
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = main::AppData::softLabels_()[num]; pls::cs::String cs_arg1 = main::AppData::softLabels_()[num2]; static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
}

}
}

// M:form.SpForm.ShowDialog(System.String,System.String)
void SpForm::ShowDialog(pls::cs::String text,pls::cs::String buttons) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.ShowDialog(System.String,System.String)",game);
{
if (!is_null(require(apdat_)->resCom2_)) {
Push(text, buttons);
} else {
pls::cs::Int32 num = 0;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return index_char1(buttons, char16_t(9));}) != -1) {
num = 3;
}
pls::cs::Ref<kairo::unity::ui::Dialog> dialog = kairo::unity::ui::Dialog::create(num, literal(u"メッセージ"));
require(dialog)->SetText(text);
pls::cs::Int32 num2 = require(dialog)->Show();
if (num == 3) {
dialog_ = SubForm::create(1);
if (num2 == 4) {
require(dialog_)->result__SubForm = 0;
} else {
require(dialog_)->result__SubForm = 1;
}
}
}
}
}

// M:form.SpForm.Run
void SpForm::Run() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.Run",game);
{
kl_cfg::Config::ensure_initialized();

try {
java::lang::JThread::Sleep(100ll);
} catch(const pls::cs::Exception& cs_caught_114) {auto cs_exception_114=pls::cs::capture_exception(cs_caught_114);
if(pls::cs::exception_is(cs_exception_114,"System.Threading.ThreadAbortException")) {{

}}
else {throw;} }
try {
if (state_ == 1) {
pls::cs::String text = pls::cs::String::concat(pls::cs::String::concat(kl_cfg::Config::URL_SP(), literal(u"&ver=")), integer_string(202));
if ([&]() { pls::cs::Ref<kl_java_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = task_; pls::cs::Ref<kl_java_util::Vector> cs_right = pls::cs::Ref<kl_java_util::Vector>{}; return kl_java_util::Vector_2_op_Equality(cs_left,cs_right); }()) {
MakeSendDataTask();
}
while (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(task_));}) > 0) {
pls::cs::Array<pls::cs::Ref<pls::cs::Object>> array = pls::cs::unbox<pls::cs::Array<pls::cs::Ref<pls::cs::Object>>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(task_), 0);}));
{ pls::cs::String cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::String { auto cs_arg0 = pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::make(8); cs_arg0.at(0) = pls::cs::box(text); cs_arg0.at(1) = pls::cs::box(literal(u"&file=")); cs_arg0.at(2) = array.get_Item(1); cs_arg0.at(3) = pls::cs::box(literal(u"&index=")); cs_arg0.at(4) = array.get_Item(2); cs_arg0.at(5) = pls::cs::box(literal(u"&date=(")); cs_arg0.at(6) = pls::cs::box(date_); cs_arg0.at(7) = pls::cs::box(literal(u")")); return concat_object_array(cs_arg0); }());}); ByteArray cs_arg1 = pls::cs::unbox<ByteArray>(array.get_Item(0)); kairo::unity::io::Http::Connect(cs_arg0, cs_arg1, true);}
array.set_Item(0, pls::cs::Ref<pls::cs::Object>{});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(task_), 0);});
}
} else if (state_ == 2) {
pls::cs::String text2 = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(kl_cfg::Config::URL_SP(), literal(u"&ver=")), integer_string(202)), literal(u"&load=save.bin"));
pls::cs::Int32 num = 51200;
if ([&]() { pls::cs::Ref<kl_java_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = task_; pls::cs::Ref<kl_java_util::Vector> cs_right = pls::cs::Ref<kl_java_util::Vector>{}; return kl_java_util::Vector_2_op_Equality(cs_left,cs_right); }()) {
ByteArray array2 = kairo::unity::io::Http::Connect(pls::cs::String::concat(text2, literal(u"&size=1")), ByteArray{}, false);
if (1 < array2.length() && (pls::cs::cast_integral<pls::cs::Int32>(array2[0]) == 78) && (pls::cs::cast_integral<pls::cs::Int32>(array2[1]) == 71)) {
throw pls::cs::IOException();
}
pls::cs::Int32 num2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::New(array2);}));});
task_ = kl_java_util::Vector::create();
for (pls::cs::Int32 i = 0; i < num2; i += num) {
pls::cs::Int32 num3 = num;
if (i + num3 > num2) {
num3 = num2 - i;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = task_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({i, num3})); kl_java_util::Vector_2_Add(require(cs_receiver), cs_arg0); }());});
}
taskMax_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(task_));});
recv_ = ByteArray::make(num2);
}
while (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(task_));}) > 0) {
IntArray array3 = pls::cs::unbox<IntArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(task_), 0);}));
ByteArray array4 = kairo::unity::io::Http::Connect(([&]() { auto cs_left = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text2, literal(u"&pos=")), integer_string(array3[0])), literal(u"&len=")); auto cs_right = integer_string(array3[1]); return pls::cs::String::concat(cs_left,cs_right); }()), ByteArray{}, false);
if (1 < array4.length() && (pls::cs::cast_integral<pls::cs::Int32>(array4[0]) == 78) && (pls::cs::cast_integral<pls::cs::Int32>(array4[1]) == 71)) {
throw pls::cs::IOException();
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(recv_); pls::cs::Int32 cs_arg3 = array3[0]; pls::cs::Int32 cs_arg4 = array4.length(); kl_lang::JSystem::Arraycopy(pls::cs::box(array4), 0, cs_arg2, cs_arg3, cs_arg4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveElementAt(require(task_), 0);});
}
}
succeed_ = true;
} catch(const pls::cs::Exception& cs_caught_115) {auto t=pls::cs::capture_exception(cs_caught_115);
{
succeed_ = false;
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(t);});
}
}}
th_ = pls::cs::Ref<java::lang::JThread>{};

}
}

// M:form.SpForm.MakeSendDataTask
void SpForm::MakeSendDataTask() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.MakeSendDataTask",game);
{
kl_cfg::Config::ensure_initialized();

StringArray array = pls::cs::unbox<StringArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(commands_), send_);}));
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array[0]);});
pls::cs::String text = pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"dev="), require(apdat_)->platform_), literal(u"\nver")), integer_string(202)), literal(u"\nerr=")); auto cs_right = require(require(apdat_)->sysSave_)->strs[10]; return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"\n"));
if ((num == -1)) {
text = pls::cs::String::concat(text,literal(u"system"));
} else if ((num == -2)) {
text = pls::cs::String::concat(text,literal(u"all"));
} else {
if (num / 10 == 1) {
text = (pls::cs::String::concat(pls::cs::String::concat(text, literal(u"auto")), integer_string((num % 10 + 1))));
} else {
text = (pls::cs::String::concat(pls::cs::String::concat(text, literal(u"save")), integer_string((num % 10 + 1))));
}
}
pls::cs::Ref<kl_unity_io::ByteListOutputStream> byteListOutputStream = kl_unity_io::ByteListOutputStream::create();
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteByte(static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteListOutputStream), pls::cs::cast_integral<std::int8_t>(115));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteByte(static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteListOutputStream), pls::cs::cast_integral<std::int8_t>(97));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteByte(static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteListOutputStream), pls::cs::cast_integral<std::int8_t>(118));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteByte(static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteListOutputStream), pls::cs::cast_integral<std::int8_t>(101));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteByte(static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteListOutputStream), pls::cs::cast_integral<std::int8_t>(48));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteByte(static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteListOutputStream), pls::cs::cast_integral<std::int8_t>(kl_cfg::Config::APPLI_TYPE()));});
if (num >= 0) {
bool flag = num / 10 == 1;
pls::cs::Int32 num2 = num % 10;
try {
ByteArray data = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::RecordStore::ReadRecord(0, ((flag) ? 3 : 1) + num2);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteByte(static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteListOutputStream), pls::cs::cast_integral<std::int8_t>(num));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(byteListOutputStream, data, true);});
} catch(const pls::cs::Exception& cs_caught_113) {auto ex=pls::cs::capture_exception(cs_caught_113);
{
text = pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(text, literal(u"\nfailed-read[")), pls::diagnostic::api_call([&]() -> decltype(auto) {return require(ex)->ToString();})), literal(u"]"));
num = -1;
}}
}
if (num == -1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteByte(static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteListOutputStream), pls::cs::cast_integral<std::int8_t>(num));});
if (kl_cfg::Config::APPLI_TYPE() == 0) {
ByteArray data2 = kairo::unity::io::ScratchPad::ReadByteArray(0, 0, kairo::unity::io::ScratchPad::GetSPSize(0));
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(byteListOutputStream, data2, true);});
} else {
pls::cs::Ref<pls::kairo::RecordStore> recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
pls::cs::run_finally([&]() {{
recordStore = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::RecordStore::OpenRecordStore(0);});
pls::cs::Int32 numRecords = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->GetNumRecords();});
for (pls::cs::Int32 i = 0; i < numRecords; ++i) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(byteListOutputStream, pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->ReadRecord(i);}), true);});
}
}}, [&]() {
if (!is_null(recordStore)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(recordStore)->CloseRecordStore();});
}
recordStore = pls::cs::Ref<pls::kairo::RecordStore>{};
});
}
}
if (num == -2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::WriteByte(static_cast<pls::cs::Ref<kl_java_io::OutputStream>>(byteListOutputStream), pls::cs::cast_integral<std::int8_t>(num));});
ByteArray array2 = ByteArray{};
array2 = kairo::unity::io::ScratchPad::ReadByteArray(0, 0, kairo::unity::io::ScratchPad::GetSPSize(0));
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(byteListOutputStream, array2, true);});
array2 = ByteArray{};
array2 = kairo::unity::io::ScratchPad::ReadByteArray(1, 0, kairo::unity::io::ScratchPad::GetSPSize(1));
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StreamUtil::Write(byteListOutputStream, array2, true);});
}
pls::cs::Int32 num3 = 51200;
task_ = kl_java_util::Vector::create();
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = task_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::from({pls::cs::box(kl_lang::StringEx::GetBytes(text)), pls::cs::box(literal(u"info")), pls::cs::box(literal(u"0"))})); kl_java_util::Vector_2_Add(require(cs_receiver), cs_arg0); }());});
pls::cs::Int32 num4 = 0;
pls::cs::Int32 num5 = 0;
while (num4 < pls::diagnostic::api_call([&]() -> decltype(auto) {return require(byteListOutputStream)->Size();})) {
pls::cs::Int32 num6 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(byteListOutputStream)->Size();}) - num4;
if (num6 > num3) {
num6 = num3;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = task_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::cs::Array<pls::cs::Ref<pls::cs::Object>>::from({pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(byteListOutputStream)->ToByteArray(num4, num6);})), pls::cs::box(literal(u"save")), pls::cs::box(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JString::ValueOfInt(num5);}))})); kl_java_util::Vector_2_Add(require(cs_receiver), cs_arg0); }());});
num4 += num3;
++num5;
}
taskMax_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(task_));});

}
}

// M:form.SpForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t SpForm::GetTouchValue(std::int32_t type_raw,std::int32_t index_raw) {
pls::cs::Int32 type = type_raw;
pls::cs::Int32 index = index_raw;
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.GetTouchValue(System.Int32,System.Int32)",game);
{
type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
pls::cs::Int32 num = type;
if (num != 131072) {

} else {
return select_;
}
return MyFormBase::GetTouchValue(type, index);
}
}

// M:form.SpForm.SetTouchValue(System.Int32,System.Int32)
void SpForm::SetTouchValue(std::int32_t type_raw,std::int32_t value_raw) {
pls::cs::Int32 type = type_raw;
pls::cs::Int32 value = value_raw;
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.SetTouchValue(System.Int32,System.Int32)",game);
{
type = pls::cs::to_int32((pls::cs::Int64(type) & pls::cs::Int64(0xFFFF0000u)));
switch (type) {
case 131072:
{
select_ = value;
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

// M:form.SpForm.GetHashCode
std::int32_t SpForm::GetHashCode() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.SpForm.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
} // namespace form
}
