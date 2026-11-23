// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/kairo.unity.util.Language.hpp"
#include "kairo.unity.panel.Component.hpp"
#include "kairo.unity.panel.Label.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::panel {

void Label::trace_edges(const pls::cs::EdgeVisitor&visitor)const {Component::trace_edges(visitor);pls::cs::trace_value(text_,visitor);}

static PLS_NOINLINE void cs_init_4c00a0e0c6e6e2e5_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("kairo.unity.panel.Label",flag,[](){

});}

void Label::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_4c00a0e0c6e6e2e5_slow(flag);}

void Label::create_init(pls::cs::Ref<Label> self,pls::cs::String text) {
Label::ensure_initialized();
Component::create_init(pls::cs::static_pointer_cast<Component>(self));
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Label.#ctor(System.String)",kairo);
{
self->text_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Language::TranslateText(text, true);});
}

}

// M:kairo.unity.panel.Label.#ctor(System.String)
pls::cs::Ref<Label> Label::create(pls::cs::String text) {
Label::ensure_initialized();
 auto self = pls::cs::make_ref<Label>(); Label::create_init(self,text); return self; 
}

// M:kairo.unity.panel.Label.GetWidth
pls::cs::Int32 Label::GetWidth() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Label.GetWidth",kairo);
{
return 240;
}
}

// M:kairo.unity.panel.Label.GetHeight
pls::cs::Int32 Label::GetHeight() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Label.GetHeight",kairo);
{
return 12;
}
}

// M:kairo.unity.panel.Label.SetLocation(System.Int32,System.Int32)
void Label::SetLocation(pls::cs::Int32 x,pls::cs::Int32 y) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.panel.Label.SetLocation(System.Int32,System.Int32)",kairo);
{

}
}
} // namespace kairo::unity::panel
}
