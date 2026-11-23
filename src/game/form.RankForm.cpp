// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "data.BaseData.hpp"
#include "data.PlayerData.hpp"
#include "form.FormManager.hpp"
#include "form.MyFormBase.hpp"
#include "form.RankForm.hpp"
#include "game.GameUtil.hpp"
#include "game.UserData.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_java_util = pls::generated::java::util;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace form {

void RankForm::trace_edges(const pls::cs::EdgeVisitor&visitor)const {MyFormBase::trace_edges(visitor);pls::cs::trace_value(charaList_,visitor);pls::cs::trace_value(resEvent_,visitor);}

static IntArray2 RankForm_softLabels__storage{};

static PLS_NOINLINE void cs_init_834c8c593e682d3f_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(RankForm_softLabels__storage,visitor);});static pls::cs::TypeInitState state;state.run("form.RankForm",flag,[](){
RankForm_softLabels__storage = pls::cs::evaluate_type_initializer_field("F:form.RankForm.softLabels_",[&](){return IntArray2::from({IntArray::from({0, 2})});});

});}

void RankForm::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_834c8c593e682d3f_slow(flag);}

IntArray2& RankForm::softLabels_(){RankForm::ensure_initialized();return RankForm_softLabels__storage;}

void RankForm::create_init(pls::cs::Ref<RankForm> self) {
RankForm::ensure_initialized();
self->charaList_ = kl_java_util::Vector::create();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 3);
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.#ctor",game);
{

}

}

// M:form.RankForm.#ctor
pls::cs::Ref<RankForm> RankForm::create() {
RankForm::ensure_initialized();
 auto self = pls::cs::make_ref<RankForm>(); RankForm::create_init(self); return self; 
}

// M:form.RankForm.ToString
pls::cs::String RankForm::ToString() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.ToString",game);
{
return pls::cs::String::concat(literal(u"RankForm:"), integer_string(state_));
}
}

// M:form.RankForm.Init
bool RankForm::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.Init",game);
{
MyFormBase::Init();
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(charaList_));}) > 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_RemoveAllElements(require(charaList_));});
}
pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
for (pls::cs::Int32 i = 0; i < require(apdat_)->pData_.length(); ++i) {
pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(i);
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::BitUtil::Check(require(playerData)->flag_, 1);})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(playerData));});
}
}
for (pls::cs::Int32 j = 0; j < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));}); ++j) {
pls::cs::Ref<data::PlayerData> obj = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector), j);}));
pls::cs::Int32 num = game::GameUtil::Random(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(vector));}));
if (num == j) {
continue;
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector), num);}); kl_java_util::Vector_2_SetElementAt(require(vector), cs_arg0, j); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_SetElementAt(require(vector), pls::cs::box(obj), num);});
}
for (pls::cs::Int32 k = 0; k < 5; ++k) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = charaList_; pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(vector), k);}); kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0); }());});
}
ChangeState(0);
return true;
}
}

// M:form.RankForm.Update
bool RankForm::Update() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.Update",game);
{
pls::cs::Int32 num = 2;
frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
if (state_ == 0) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(65536);})) {
page_ = (page_ - 1 + num) % num;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(canvas_)->CheckKeyRepeat(262144);})) {
page_ = (page_ + 1) % num;
} else if (require(apdat_)->IsPushSoftLabel(2)) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return require(formMan_)->Pop();});
}
}
return true;
}
}

// M:form.RankForm.Draw(kairo.unity.ui.Graphics)
void RankForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.Draw(kairo.unity.ui.Graphics)",game);
{
pls::cs::Int32 num = 0;
pls::cs::Int32 num2 = 13;
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

// M:form.RankForm._draw(kairo.unity.ui.Graphics)
void RankForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm._draw(kairo.unity.ui.Graphics)",game);
{
pls::cs::Int32 num = 2;
pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
pls::cs::Int64 netHighScore = require(apdat_)->GetNetHighScore();
pls::cs::Int64 value = require(apdat_)->GetHighScore();
if (page_ == 1) {
netHighScore = require(apdat_)->GettMoneyNetHighScore();
value = require(apdat_)->GetMoneyHighScore();
}
if (state_ == 0) {
if (MyFormBase::En()) {
{ auto cs_receiver = apdat_; pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g; pls::cs::String cs_arg4 = pls::cs::String::concat(pls::cs::String::concat(([&]() { auto cs_left = pls::cs::String::concat(MyFormBase::LT(literal(u"ハイスコア ")), literal(u" ")); auto cs_right = integer_string((page_ + 1)); return pls::cs::String::concat(cs_left,cs_right); }()), literal(u"/")), integer_string(num)); require(cs_receiver)->DrawWindow(cs_arg0, 200, 170, 0, cs_arg4, -12); }
} else {
require(apdat_)->DrawWindow(g, 200, 170, 0, pls::cs::String::concat(pls::cs::String::concat(pls::cs::String::concat(literal(u"ハイスコア "), integer_string((page_ + 1))), literal(u"/")), integer_string(num)), -12);
}
{ pls::cs::Int32 cs_arg2 = 44 - frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 42, cs_arg4, 0, 16);}
{ pls::cs::Int32 cs_arg2 = 193 + frame_ % 20 / 5; pls::cs::Ref<kairo::unity::ui::Seb> cs_arg4 = require(require(apdat_)->resCom2_)->seb.get_Item(24); surface::GameView::AddTouchSeb(g, 1, cs_arg2, 42, cs_arg4, 1, 18);}
pls::cs::String text = literal(u"最高クリアポイント");
if (page_ == 1) {
text = MyFormBase::LTLong(literal(u"<0>年までの最高資金"), 8ll);
}
pls::cs::Int32 num2 = -9;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(60, 100, 200);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = text; pls::cs::Single cs_arg1 = 120.0f - pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(font)->StringWidthF(text));}) / 2.0f; require(g)->DrawString(cs_arg0, cs_arg1, 68 + num2); }());});
num2 = 76;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = require(require(apdat_)->resEvent_)->img.get_Item(11); require(g)->DrawImage(cs_arg0, 29.0f, num2 + 2); }());});
pls::cs::String text2 = require(require(apdat_)->sysSave_)->strs[0 + page_];
pls::cs::Int32 num3 = 0;
pls::cs::Int32 y = num2 + 51 + 20;
pls::cs::Int32 num4 = 26;
pls::cs::Ref<game::UserData> instance = game::UserData::GetInstance();
for (pls::cs::Int32 i = 0; i < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_Size(require(charaList_));}); ++i) {
num3 = 120 - num4 * 2 + num4 * i;
pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::Vector_2_ElementAt(require(charaList_), i);}));
pls::cs::Int32 frame = frame_ % 20 / 5;
require(instance)->SetDispPlayerData(0, require(instance)->selectUniform_, require(playerData)->faceImg_, frame, 1);
require(instance)->DrawDispPlayer(g, num3, y);
}
num2 = 72;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(0, 0, 60);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = text2; pls::cs::Single cs_arg1 = 120.0f - pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::Single(require(font)->StringWidthF(text2));}) / 2.0f; require(g)->DrawString(cs_arg0, cs_arg1, 94 + num2); }());});
num2 = 68;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(60, 100, 200);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(literal(u"ﾊｲｽｺｱ"), 58.0f, 118 + num2);});
pls::cs::String text3 = pls::cs::String(u"");
if (page_ == 0) {
text3 = MyFormBase::UNI(literal(u"P"), value);
} else if (page_ == 1) {
text3 = MyFormBase::YEN(literal(u"万円"), value);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::GetColorOfRGB(200, 100, 60);}));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = text3; pls::cs::Single cs_arg1 = pls::cs::Int32(186) - pls::diagnostic::api_call([&]() -> decltype(auto) {return require(font)->StringWidth(text3);}); require(g)->DrawString(cs_arg0, cs_arg1, 118 + num2); }());});
}
}
}

// M:form.RankForm.Resume
bool RankForm::Resume() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.Resume",game);
{
return true;
}
}

// M:form.RankForm.Finish
bool RankForm::Finish() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.Finish",game);
{
if (!is_null(resEvent_)) {
require(resEvent_)->Dispose();
}
resEvent_ = pls::cs::Ref<kairo::unity::ui::ResourceManager>{};
return true;
}
}

// M:form.RankForm.ChangeState(System.Int32)
void RankForm::ChangeState(pls::cs::Int32 state) {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.ChangeState(System.Int32)",game);
{
state_ = state;
SetSoftLabel();
}
}

// M:form.RankForm.SetSoftLabel
void RankForm::SetSoftLabel() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.SetSoftLabel",game);
{
main::AppData::ensure_initialized();

IntArray array = RankForm::softLabels_()[state_];
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

// M:form.RankForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t RankForm::GetTouchValue(std::int32_t type_raw,std::int32_t index_raw) {
pls::cs::Int32 type = type_raw;
pls::cs::Int32 index = index_raw;
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.GetTouchValue(System.Int32,System.Int32)",game);
{
return 0;
}
}

// M:form.RankForm.SetTouchValue(System.Int32,System.Int32)
void RankForm::SetTouchValue(std::int32_t type_raw,std::int32_t value_raw) {
pls::cs::Int32 type = type_raw;
pls::cs::Int32 value = value_raw;
PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.SetTouchValue(System.Int32,System.Int32)",game);
{

}
}

// M:form.RankForm.GetHashCode
std::int32_t RankForm::GetHashCode() {PLS_METHOD_SCOPE("Assembly-CSharp","M:form.RankForm.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
} // namespace form
}
