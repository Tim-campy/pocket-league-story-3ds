// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "kairo.unity.ui.Font.hpp"
namespace pls::game {
namespace kairo::unity::ui::Font {

// M:kairo.unity.ui.Font.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single)
void Draw(pls::cs::Ref<pls::kairo::Font> self,pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::String text,pls::cs::Single x,pls::cs::Single y) {
require(self);
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Font.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single)",kairo);
{
pls::cs::Ref<pls::kairo::Font> font = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{});});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetFont(self);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(text, x, y);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetFont(font);});
}

}
} // namespace kairo::unity::ui::Font
}
