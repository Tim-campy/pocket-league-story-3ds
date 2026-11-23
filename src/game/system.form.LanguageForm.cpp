// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "form.FormManager.hpp"
#include "form.MyFormBase.hpp"
#include "form.SubForm.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.surface.TouchComponent.hpp"
#include "kairo.unity.surface.TouchEvent.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.Matrix.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.util.Language.LanguagePackInfo.hpp"
#include "kairo.unity.util.Language.hpp"
#include "surface.GameView.hpp"
#include "system.form.HttpForm.ResultData.hpp"
#include "system.form.HttpForm.hpp"
#include "system.form.LanguageForm.hpp"

namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace system::form {

void LanguageForm::trace_edges(const pls::cs::EdgeVisitor&visitor)const {MyFormBase::trace_edges(visitor);pls::cs::trace_value(languages_,visitor);pls::cs::trace_value(langPackFile_,visitor);pls::cs::trace_value(langDownloadData_,visitor);}

static pls::cs::Delegate<void()> LanguageForm_callback__storage{};

static pls::cs::String LanguageForm_langDownloadUrl__storage{};

static bool LanguageForm_warningTextLayout__storage{};

static PLS_NOINLINE void cs_init_c9cd56cdd30ecf7a_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(LanguageForm_callback__storage,visitor);pls::cs::trace_value(LanguageForm_langDownloadUrl__storage,visitor);pls::cs::trace_value(LanguageForm_warningTextLayout__storage,visitor);});static pls::cs::TypeInitState state;state.run("system.form.LanguageForm",flag,[](){

});}

void LanguageForm::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_c9cd56cdd30ecf7a_slow(flag);}

pls::cs::Delegate<void()>& LanguageForm::callback_(){LanguageForm::ensure_initialized();return LanguageForm_callback__storage;}

pls::cs::String& LanguageForm::langDownloadUrl_(){LanguageForm::ensure_initialized();return LanguageForm_langDownloadUrl__storage;}

bool& LanguageForm::warningTextLayout_(){LanguageForm::ensure_initialized();return LanguageForm_warningTextLayout__storage;}

void LanguageForm::create_init(pls::cs::Ref<LanguageForm> self) {
LanguageForm::ensure_initialized();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 908);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.#ctor",game);
{

}

}

// M:system.form.LanguageForm.#ctor
pls::cs::Ref<LanguageForm> LanguageForm::create() {
LanguageForm::ensure_initialized();
 auto self = pls::cs::make_ref<LanguageForm>(); LanguageForm::create_init(self); return self; 
}

// M:system.form.LanguageForm.ToString
pls::cs::String LanguageForm::ToString() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.ToString",game);
{
return literal(u"LanguageForm");
}
}

// M:system.form.LanguageForm.Init
bool LanguageForm::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.Init",game);
{
MyFormBase::Init();
return true;
}
}

// M:system.form.LanguageForm.Update
bool LanguageForm::Update() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.Update",game);
{
MyFormBase::Update();
if (!start_) {
start_ = true;
pls::cs::List<StringArray> list = pls::cs::List<StringArray>::make();
{ auto cs_each266 = kairo::unity::util::Language::GetSystemLanguagePackFiles(); for (std::int32_t cs_i266=0; cs_i266<cs_each266.length(); ++cs_i266) { StringArray item = cs_each266.get_Item(cs_i266); {
pls::diagnostic::api_call([&]() -> decltype(auto) {return list.Add(item);});
} } }
pls::cs::String customLanguagePackLocation = kairo::unity::util::Language::GetCustomLanguagePackLocation();
if (!is_null(customLanguagePackLocation)) {
try {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Storage::Exists(1, literal(u"_custom_lang_pack.csv"));})) {
ByteArray data = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Storage::Read(1, false, literal(u"_custom_lang_pack.csv"));});
pls::cs::Ref<kairo::unity::util::Language_LanguagePackInfo> languagePackInfo = kairo::unity::util::Language::GetLanguagePackInfo(data);
pls::cs::String text = pls::cs::String(u"");
if (!is_null(require(languagePackInfo)->Title)) {
text = pls::cs::String::concat(text,require(languagePackInfo)->Title);
}
if (!is_null(require(languagePackInfo)->Author)) {
text = pls::cs::String::concat(pls::cs::String::concat(text, literal(u"@")), require(languagePackInfo)->Author);
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = list; auto cs_arg0 = StringArray::from({text, customLanguagePackLocation}); cs_receiver.Add(cs_arg0); }());});
}
} catch(const pls::cs::Exception& cs_caught_267) {pls::cs::capture_exception(cs_caught_267);
{

}}
}
languages_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return list.ToArray();});
pls::cs::Int32 index = 0;
StringArray array = StringArray::make(languages_.length());
for (pls::cs::Int32 j = 0; j < languages_.length(); ++j) {
array[j] = languages_[j][0];
if ([&]() -> bool { auto cs_left = languages_[j][1]; auto cs_right = kairo::unity::util::Language::GetLanguagePackFile(); return cs_left == cs_right; }()) {
index = j;
}
}
if (is_null(LanguageForm::langDownloadUrl_())) {
LanguageForm::langDownloadUrl_() = kairo::unity::util::Language::GetCustomLanguagePackLocation();
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::start_language_panel(array, index, LanguageForm::langDownloadUrl_(), mode_);});
return true;
}
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::language_panel_finished();})) {
return true;
}
StringArray languagePanelResult = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::language_panel_result();});
if (!is_null(languagePanelResult[0])) {
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(languagePanelResult[0]);});
if (num == -3) {
kairo::unity::ui::Canvas::OpenBrowser(literal(u"http://kairopark.jp/language_pack_en.html"));
} else if (num == -2) {
langPackJapanese_ = false;
if (languagePanelResult[1] == literal(u"ja")) {
langPackJapanese_ = true;
}
pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)> cs_arg0_303 = pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)>::from_closure(pls::cs::raw(this),std::string("M:system.form.LanguageForm.Update:2842"),[cs_outer_303=this](pls::cs::Ref<HttpForm> form,pls::cs::Ref<HttpForm_ResultData> data_2) -> void {{
pls::cs::Ref<kairo::unity::system::KairoBase> instance = kairo::unity::system::KairoBase::GetInstance();
pls::cs::String data2;
{ bool cs_arg0_303 = cs_outer_303->langPackJapanese_; pls::cs::Int32 cs_arg1_303 = 202; auto cs_value_storage_268_owner_303=cs_outer_303;auto& cs_arg2_303 = require(cs_value_storage_268_owner_303)->langPackFile_; auto& cs_arg3_303 = data2; kairo::unity::util::Language::MakeLangPackTemplate(cs_arg0_303,cs_arg1_303,cs_arg2_303,cs_arg3_303); }
pls::cs::Int32 hashCode = pls::diagnostic::api_call([&]() -> decltype(auto) {return value_hash(data2);});
{
bool recoveredCondition_3348 = require(instance)->ConnectLangPackCheck(cs_outer_303->langPackFile_, 202, hashCode);
if (recoveredCondition_3348) {
require(instance)->ConnectLangPackSet(cs_outer_303->langPackFile_, 202, hashCode, data2);
}
}
}},this); pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)> cs_arg1_303 = pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)>::from_closure(pls::cs::raw(this),std::string("M:system.form.LanguageForm.Update:3332"),[cs_outer_303=this](pls::cs::Ref<HttpForm> form_2,pls::cs::Ref<HttpForm_ResultData> data_3) -> void {{
pls::cs::Ref<kairo::unity::system::KairoBase> instance_2 = kairo::unity::system::KairoBase::GetInstance();
require(instance_2)->ConnectLangPackWeb(cs_outer_303->langPackFile_);
}},this);
pls::cs::Ref<HttpForm> languageForm = HttpForm::create(cs_arg0_303, cs_arg1_303);
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(languageForm);});
} else if (num == -1) {
LanguageForm::langDownloadUrl_() = languagePanelResult[1];
langDownloadData_ = ByteArray{};
pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)> cs_arg0_304 = pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)>::from_closure(pls::cs::raw(this),std::string("M:system.form.LanguageForm.Update:3671"),[cs_outer_304=this](pls::cs::Ref<HttpForm> form_3,pls::cs::Ref<HttpForm_ResultData> data_4) -> void {{
cs_outer_304->langDownloadData_ = kairo::unity::io::Http::Connect(LanguageForm::langDownloadUrl_(), ByteArray{}, false);
}},this); pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)> cs_arg1_304 = pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)>::from_closure(pls::cs::raw(this),std::string("M:system.form.LanguageForm.Update:3807"),[cs_outer_304=this](pls::cs::Ref<HttpForm> form_4,pls::cs::Ref<HttpForm_ResultData> data_5) -> void {{
if (HttpForm_ResultData::get_Succeed(data_5)) {
bool testedValue = kairo::unity::util::Language::SetLanguagePack(LanguageForm::langDownloadUrl_(), cs_outer_304->langDownloadData_, true);
if (testedValue && ([&](){auto cs_left_304=LanguageForm::callback_();auto cs_right_304=pls::cs::Delegate<void()>{};return cs_left_304!=cs_right_304;}())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_delegate_304=LanguageForm::callback_();cs_delegate_304();}());});
}
} else {
pls::cs::Ref<pls::game::form::FormManager> instance_3 = pls::game::form::FormManager::GetInstance();
pls::cs::Ref<LanguageForm> nextLanguageForm = LanguageForm::create();
require(nextLanguageForm)->mode_ = 1;
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(instance_3)->Push(nextLanguageForm);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::kairo::FormBase> cs_arg0_304 = pls::game::form::SubForm::MakeDialog(HttpForm_ResultData::get_Error(data_5)); return require(instance_3)->Push(cs_arg0_304); }());});
}
}},this);
pls::cs::Ref<HttpForm> httpForm = HttpForm::create(cs_arg0_304, cs_arg1_304);
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(httpForm);});
HttpForm::set_ProcessError(httpForm,false);
} else {
pls::cs::String text2 = languagePanelResult[1];
if (num != -1) {
text2 = languages_[num][1];
}
if (kairo::unity::util::Language::GetLanguagePackFile() != text2) {
bool recoveredLanguagePackChanged = kairo::unity::util::Language::SetLanguagePack(text2, ByteArray{}, true);
if (recoveredLanguagePackChanged && ([&](){auto cs_left=LanguageForm::callback_();auto cs_right=pls::cs::Delegate<void()>{};return cs_left!=cs_right;}())) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_delegate=LanguageForm::callback_();cs_delegate();}());});
}
}
}
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
}

// M:system.form.LanguageForm.Finish
bool LanguageForm::Finish() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.Finish",game);
{
MyFormBase::Finish();
return true;
}
}

// M:system.form.LanguageForm.CheckMainWindow
bool LanguageForm::CheckMainWindow() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.CheckMainWindow",game);
{
return false;
}
}

// M:system.form.LanguageForm.DrawButton(kairo.unity.ui.Graphics,System.Threading.ThreadStart,System.Int32)
void LanguageForm::DrawButton(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Delegate<void()> callback,pls::cs::Int32 anchor) {
LanguageForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.DrawButton(kairo.unity.ui.Graphics,System.Threading.ThreadStart,System.Int32)",game);
{
pls::cs::Ref<pls::game::surface::GameView> instance = pls::game::surface::GameView::GetInstance();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PushOrigin(0, 0, false);});
pls::cs::Int32 originalUnusedSlot1;
pls::cs::Int32 x = 20;
pls::cs::Int32 y = 20;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::BitUtil::Check(anchor, 2);})) {
x = require(instance)->GetGameWidth() / 2;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::BitUtil::Check(anchor, 4);})) {
x = require(instance)->GetGameWidth() - 20;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::BitUtil::Check(anchor, 32);})) {
y = require(instance)->GetGameHeight() / 2;
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::BitUtil::Check(anchor, 64);})) {
y = require(instance)->GetGameHeight() - 20;
}
LanguageForm::DrawButton(g, x, y, callback);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopOrigin();});
}

}

// M:system.form.LanguageForm.DrawButton(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Threading.ThreadStart)
void LanguageForm::DrawButton(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Delegate<void()> callback) {
LanguageForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.DrawButton(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Threading.ThreadStart)",game);
{
kl_cfg::Config::ensure_initialized();

LanguageForm::callback_() = callback;
pls::cs::Ref<pls::game::surface::GameView> instance = pls::game::surface::GameView::GetInstance();
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PushOrigin(0, 0, false);});
pls::cs::Int32 value = 20160614;
bool flag = require(instance)->CheckTouch(3, value);
pls::cs::Ref<kairo::unity::ui::ResourceManager> resource = pls::diagnostic::api_call([&]() -> decltype(auto) {return PlsPortGeneratedBootstrap::Source::GetApplicationResource(require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();})));});
IntArray sprite = require(require(resource)->seb.get_Item(0))->GetSprite(0, 0);
if (flag) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PushBlendMode(1, 255, 255, 255, 128);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::Matrix> cs_arg0 = kairo::unity::ui::Matrix::ScaleTemporary(1.1f, 1.1f, 0.0f, 0.0f); PlsPortGeneratedBootstrap::Source::PushGraphicsMatrix(require(g), cs_arg0); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::Matrix> cs_arg0 = kairo::unity::ui::Matrix::ScaleTemporary(0.5f, 0.5f, 0.0f, 0.0f); PlsPortGeneratedBootstrap::Source::PushGraphicsMatrix(require(g), cs_arg0); }());});
require(resource)->DrawSeb(g, x, y, 0);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopMatrix();});
if (flag) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopMatrix();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopBlendMode();});
}
{ pls::cs::Int32 cs_arg2 = x + sprite[6] / 2; pls::cs::Int32 cs_arg3 = y + sprite[7] / 2; pls::cs::Int32 cs_arg4 = sprite[4] / 2; pls::cs::Int32 cs_arg5 = sprite[5] / 2; pls::game::surface::GameView::AddTouch(g, 3, cs_arg2, cs_arg3, cs_arg4, cs_arg5, value);}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopOrigin();});
if (kl_cfg::Config::DEBUG() && !LanguageForm::warningTextLayout_()) {
if (!pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Graphics::IsAutoTextLayout();})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return PlsPortGeneratedBootstrap::Source::ShowToast(literal(u"自動テキストレイアウトが無効になっています。\nGraphics.SetAutoTextLayout() を使って有効にする事を推奨します。"), 0);});
}
LanguageForm::warningTextLayout_() = true;
}

}

}

// M:system.form.LanguageForm.OnTouchEvent(kairo.unity.surface.TouchEvent)
bool LanguageForm::OnTouchEventStatic(pls::cs::Ref<kairo::unity::surface::TouchEvent> e) {
LanguageForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.LanguageForm.OnTouchEvent(kairo.unity.surface.TouchEvent)",game);
{
pls::cs::Ref<kairo::unity::surface::TouchComponent> component = require(e)->component;
pls::cs::Ref<pls::game::form::FormManager> instance = pls::game::form::FormManager::GetInstance();
if ((require(component)->id == 3)) {
if (require(component)->value == 20160614) {
switch (require(e)->type) {
case 1:
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> bool { pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = LanguageForm::create(); return require(instance)->Push(cs_arg0); }());});
break;
}
}
return false;
}
}
return true;
}

}
} // namespace system::form
}
