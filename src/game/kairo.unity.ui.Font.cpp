// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "kairo.unity.ui.Font.hpp"

namespace pls::game {
namespace kairo::unity::ui::Font {

// M:kairo.unity.ui.Font.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single)
void Draw(pls::cs::Ref<pls::kairo::Font> self, pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::String text,
          pls::cs::Single x, pls::cs::Single y) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Font.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single)",
        kairo);
    {
        pls::cs::Ref<pls::kairo::Font> font = PLS_API(require(g)->GetFont(pls::cs::Ref<pls::kairo::Font>{}));
        PLS_API(require(g)->SetFont(self));
        PLS_API(require(g)->DrawString(text, x, y));
        PLS_API(require(g)->SetFont(font));
    }
}
} // namespace kairo::unity::ui::Font
}
