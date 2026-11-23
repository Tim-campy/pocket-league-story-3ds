// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.unity.util.Language.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.ui.Canvas.hpp"
#include "kairo.unity.ui.Dialog.hpp"
#include "kairo.unity.ui.Graphics.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace kairo::unity::ui {

void Dialog::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(font_,visitor);pls::cs::trace_value(title_,visitor);pls::cs::trace_value(msg_,visitor);pls::cs::trace_value(cmds_,visitor);pls::cs::trace_value(url_,visitor);}

static PLS_NOINLINE void cs_init_0286a0dbe9da0b33_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.ui.Dialog",flag,[](){

});}

void Dialog::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_0286a0dbe9da0b33_slow(flag);}

void Dialog::create_init(pls::cs::Ref<Dialog> self,pls::cs::Int32 type,pls::cs::String title) {
Dialog::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Dialog.#ctor(System.Int32,System.String)",kairo);
{
self->type_ = type;
self->title_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::TranslateText(title, true);});
self->font_ = pls::cs::make_ref<pls::kairo::Font>();
self->msg_ = literal(u"");
self->background_ = Graphics::GetColorOfName(-16777216);
}

}

// M:kairo.unity.ui.Dialog.#ctor(System.Int32,System.String)
pls::cs::Ref<Dialog> Dialog::create(pls::cs::Int32 type,pls::cs::String title) {
Dialog::ensure_initialized();
 auto self = pls::cs::make_ref<Dialog>(); Dialog::create_init(self,type,title); return self; 
}

// M:kairo.unity.ui.Dialog.SetText(System.String)
void Dialog::SetText(pls::cs::String msg) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Dialog.SetText(System.String)",kairo);
{
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Split(msg, literal(u"\t"));});
msg_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::TranslateText(array[0], true);});
msg_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Replace(msg_, literal(u"<br>"), literal(u"\n"));});
url_ = pls::cs::String{};
if (1 < array.length()) {
url_ = array[1];
}
}
}

// M:kairo.unity.ui.Dialog.SetButtons(System.String[])
void Dialog::SetButtons(StringArray buttons) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Dialog.SetButtons(System.String[])",kairo);
{
cmds_ = buttons;
}
}

// M:kairo.unity.ui.Dialog.Show
pls::cs::Int32 Dialog::Show() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Dialog.Show",kairo);
{
pls::cs::String text = pls::cs::String{};
if ([&]() { auto cs_left = pls::cs::box(cmds_); auto cs_right = pls::cs::box(StringArray{}); return cs_left != cs_right; }()) {
text = literal(u"");
for (pls::cs::Int32 i = 0; i < cmds_.length(); ++i) {
if (i != 0) {
text = pls::cs::String::concat(text,literal(u","));
}
text = pls::cs::String::concat(text,cmds_[i]);
}
}
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::show_dialog(type_, title_, msg_, text);});
if (!is_null(url_) && (num == 1 || num == 4)) {
Canvas::OpenBrowser(url_);
}
return num;
}
}
} // namespace kairo::unity::ui
}
