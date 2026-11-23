// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.panel.Component.hpp"
#include "kairo.unity.panel.TextBox.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::panel {

void TextBox::trace_edges(const pls::cs::EdgeVisitor&visitor)const {Component::trace_edges(visitor);pls::cs::trace_value(text_,visitor);}

static PLS_NOINLINE void cs_init_4ccab99c775ca4c5_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.panel.TextBox",flag,[](){

});}

void TextBox::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_4ccab99c775ca4c5_slow(flag);}

void TextBox::create_init(pls::cs::Ref<TextBox> self,pls::cs::String text,pls::cs::Int32 columns,pls::cs::Int32 rows,pls::cs::Int32 mode) {
TextBox::ensure_initialized();
Component::create_init(pls::cs::static_pointer_cast<Component>(self));
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.#ctor(System.String,System.Int32,System.Int32,System.Int32)",kairo);
{
self->text_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::StringUtil::Replace(text, literal(u"\010"), literal(u""));});
self->columns_ = columns;
self->mode_ = 2;
}

}

// M:kairo.unity.panel.TextBox.#ctor(System.String,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<TextBox> TextBox::create(pls::cs::String text,pls::cs::Int32 columns,pls::cs::Int32 rows,pls::cs::Int32 mode) {
TextBox::ensure_initialized();
 auto self = pls::cs::make_ref<TextBox>(); TextBox::create_init(self,text,columns,rows,mode); return self; 
}

// M:kairo.unity.panel.TextBox.GetWidth
pls::cs::Int32 TextBox::GetWidth() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.GetWidth",kairo);
{
return 240;
}
}

// M:kairo.unity.panel.TextBox.GetHeight
pls::cs::Int32 TextBox::GetHeight() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.GetHeight",kairo);
{
return 12;
}
}

// M:kairo.unity.panel.TextBox.SetLocation(System.Int32,System.Int32)
void TextBox::SetLocation(pls::cs::Int32 x,pls::cs::Int32 y) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.SetLocation(System.Int32,System.Int32)",kairo);
{

}
}

// M:kairo.unity.panel.TextBox.SetInputMode(System.Int32)
void TextBox::SetInputMode(pls::cs::Int32 mode) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.SetInputMode(System.Int32)",kairo);
{
mode_ = mode;
}
}

// M:kairo.unity.panel.TextBox.SetMaxLength(System.Int32)
void TextBox::SetMaxLength(pls::cs::Int32 length) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.SetMaxLength(System.Int32)",kairo);
{
maxLength_ = length;
}
}

// M:kairo.unity.panel.TextBox.GetText
pls::cs::String TextBox::GetText() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.TextBox.GetText",kairo);
{
return text_;
}
}
} // namespace kairo::unity::panel
}
