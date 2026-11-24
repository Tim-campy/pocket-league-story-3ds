// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "generated/kairo.unity.util.Language.hpp"
#include "kairo.unity.ui.Graphics.hpp"
#include "kairo.unity.ui.TextFormat.hpp"
#include "kairo.unity.ui.TextLayout.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace kairo::unity::ui::Graphics {

// M:kairo.unity.ui.Graphics.DrawRect2(System.Single,System.Single,System.Single,System.Single)
void DrawRect2(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::Single x, pls::cs::Single y,
               pls::cs::Single width, pls::cs::Single height) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Graphics.DrawRect2(System.Single,System.Single,System.Single,System.Single)",
        kairo);
    {
        PLS_API(self->DrawRect(x, y, width - 1.0f, height - 1.0f));
    }
}

// M:kairo.unity.ui.Graphics.DrawString(System.Int64,System.Single,System.Single)
void DrawString(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::Int64 v, pls::cs::Single x,
                pls::cs::Single y) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Graphics.DrawString(System.Int64,System.Single,System.Single)", kairo);
    {
        PLS_API(PlsPortGeneratedBootstrap::Source::DrawGraphicsText(
            self, static_cast<pls::cs::Ref<TextFormat>>(pls::cs::Ref<TextFormat>{}),
            PLS_API(integer_string(v)), x, y, 17));
    }
}

// M:kairo.unity.ui.Graphics.DrawString(System.Int64,System.Single,System.Single,System.Int32)
void DrawString(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::Int64 v, pls::cs::Single x,
                pls::cs::Single y, pls::cs::Int32 anchor) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Graphics.DrawString(System.Int64,System.Single,System.Single,System.Int32)", kairo);
    {
        PLS_API(PlsPortGeneratedBootstrap::Source::DrawGraphicsText(
            self, static_cast<pls::cs::Ref<TextFormat>>(pls::cs::Ref<TextFormat>{}),
            PLS_API(integer_string(v)), x, y, anchor));
    }
}

// M:kairo.unity.ui.Graphics.DrawString(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single)
void DrawStringTextFormatStringFloat(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::Ref<TextFormat> lf,
                                     pls::cs::String str, pls::cs::Single x, pls::cs::Single y) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Graphics.DrawString(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single)",
        kairo);
    {
        PLS_API(PlsPortGeneratedBootstrap::Source::DrawGraphicsText(self, lf, str, x, y, 17));
    }
}

// M:kairo.unity.ui.Graphics.DrawText(System.String,System.Single,System.Single,System.Single,System.Int32)
void DrawText(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::String str, pls::cs::Single x,
              pls::cs::Single y, pls::cs::Single width, pls::cs::Int32 anchor) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Graphics.DrawText(System.String,System.Single,System.Single,System.Single,System.Int32)",
        kairo);
    {
        Graphics::DrawText(self, pls::cs::Ref<TextFormat>{}, str, x, y, width, anchor);
    }
}

// M:kairo.unity.ui.Graphics.DrawText(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Single,System.Int32)
void DrawText(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::Ref<TextFormat> lf, pls::cs::String str,
              pls::cs::Single x, pls::cs::Single y, pls::cs::Single width, pls::cs::Int32 anchor) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Graphics.DrawText(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Single,System.Int32)",
        kairo);
    {
        pls::cs::Int32 num = anchor;
        if ((anchor & 0x70) == 0) {
            anchor = (anchor | 0x20);
        }
        pls::cs::Int32 num2 = -1;
        if (!PLS_API(kl_util::Language::Japanese()) && !is_null(lf)) {
            if (require(lf)->GetFont() != -1 && ([&]() -> bool {
                    auto cs_left = require(lf)->GetFont();
                    auto cs_right = PLS_API(require(self->source_font())->GetSize());
                    return cs_left != cs_right;
                }())) {
                num2 = PLS_API(require(self->source_font())->GetSize());
                PLS_API(([&]() -> void {
                    auto cs_receiver = self->source_font();
                    pls::cs::Int32 cs_arg0 = require(lf)->GetFont();
                    require(cs_receiver)->SetSize(cs_arg0, true);
                }()));
            }
            x = require(lf)->GetX(x);
            y = require(lf)->GetY(y);
            anchor = require(lf)->GetAnchor(anchor);
        }
        bool num3 = (is_null(lf) || require(lf)->GetFont() == -1) &&
                    PLS_API(require(self->source_font())->IsNeedLocalizeScale());
        if (num3) {
            num2 = PLS_API(require(self->source_font())->GetSize());
            pls::cs::Int32 height = PLS_API(require(self->source_font())->GetHeight());
            PLS_API(([&]() -> void {
                auto cs_receiver = self->source_font();
                pls::cs::Int32 cs_arg0 = PLS_API(require(self->source_font())->GetLocalizeScale());
                require(cs_receiver)->SetSize(cs_arg0, true);
            }()));
            if ((anchor & 0x60) == 0) {
                y += pls::cs::Single((height - PLS_API(require(self->source_font())->GetHeight()))) / 2.0f;
            }
            PLS_API(pls::kairo::Font::LockLocalizeSetting());
        }
        if ((num & 0x20) != 0) {
            y -= pls::cs::Single((pls::cs::Int32(PLS_API(require(self->source_font())->GetHeight())) / 2));
        } else if ((num & 0x40) != 0) {
            y -= pls::cs::Single(PLS_API(require(self->source_font())->GetHeight()));
        }
        {
            pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = self;
            pls::cs::String cs_arg1 = str;
            pls::cs::Single cs_arg2 = x;
            pls::cs::Single cs_arg3 = y;
            pls::cs::Single cs_arg4 = width;
            pls::cs::Single cs_arg5 = PLS_API(require(self->source_font())->GetHeight());
            pls::cs::Int32 cs_arg6 = PLS_API(self->GetColor());
            pls::cs::Int32 cs_arg7 = pls::kairo::Graphics::lineSpacing_;
            TextLayout::Draw(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5, cs_arg6, cs_arg7, anchor);
        }
        if (num3) {
            PLS_API(pls::kairo::Font::UnlockLocalizeSetting());
        }
        if (num2 != -1) {
            PLS_API(require(self->source_font())->SetSize(num2, true));
        }
    }
}

// M:kairo.unity.ui.Graphics.DrawString2(System.String,System.Single,System.Single)
void DrawString2(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::String str, pls::cs::Single x,
                 pls::cs::Single y) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Graphics.DrawString2(System.String,System.Single,System.Single)",
                     kairo);
    {
        Graphics::DrawString2(self, pls::cs::Ref<TextFormat>{}, str, x, y, 17);
    }
}

// M:kairo.unity.ui.Graphics.DrawString2(System.String,System.Single,System.Single,System.Int32)
void DrawString2(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::String str, pls::cs::Single x,
                 pls::cs::Single y, pls::cs::Int32 anchor) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Graphics.DrawString2(System.String,System.Single,System.Single,System.Int32)",
        kairo);
    {
        Graphics::DrawString2(self, pls::cs::Ref<TextFormat>{}, str, x, y, anchor);
    }
}

// M:kairo.unity.ui.Graphics.DrawString2(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32)
void DrawString2(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::Ref<TextFormat> lf, pls::cs::String str,
                 pls::cs::Single x, pls::cs::Single y, pls::cs::Int32 anchor) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Graphics.DrawString2(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32)",
        kairo);
    {
        TextLayout::Draw(lf, self, str, x, y, PLS_API(self->GetColor()), anchor);
    }
}

// M:kairo.unity.ui.Graphics.DrawStringBold(System.String,System.Single,System.Single,System.Int32,System.Int32)
void DrawStringBold(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::String str, pls::cs::Single x,
                    pls::cs::Single y, pls::cs::Int32 color, pls::cs::Int32 anchor) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Graphics.DrawStringBold(System.String,System.Single,System.Single,System.Int32,System.Int32)",
        kairo);
    {
        Graphics::DrawStringBold(self, pls::cs::Ref<TextFormat>{}, str, x, y, color, anchor);
    }
}

// M:kairo.unity.ui.Graphics.DrawStringBold(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32,System.Int32)
void DrawStringBold(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::Ref<TextFormat> lf, pls::cs::String str,
                    pls::cs::Single x, pls::cs::Single y, pls::cs::Int32 color, pls::cs::Int32 anchor) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Graphics.DrawStringBold(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32,System.Int32)",
        kairo);
    {
        pls::cs::Int32 color2 = self->source_color();
        pls::cs::Int32 num = -1;
        str = PLS_API(kl_util::Language::TranslateText(str, true));
        if (PLS_API(pls::kairo::Graphics::PeekAutoTextLayout()) && PLS_API(index_char1(str, u'<')) != -1) {
            Graphics::DrawStringBold2(self, lf, str, x, y, color, anchor);
            return;
        }
        if (!PLS_API(kl_util::Language::Japanese()) && !is_null(lf)) {
            if (require(lf)->GetFont() != -1 && ([&]() -> bool {
                    auto cs_left = require(lf)->GetFont();
                    auto cs_right = PLS_API(require(self->source_font())->GetSize());
                    return cs_left != cs_right;
                }())) {
                num = PLS_API(require(self->source_font())->GetSize());
                PLS_API(([&]() -> void {
                    auto cs_receiver = self->source_font();
                    pls::cs::Int32 cs_arg0 = require(lf)->GetFont();
                    require(cs_receiver)->SetSize(cs_arg0, true);
                }()));
            }
            x = require(lf)->GetX(x);
            y = require(lf)->GetY(y);
            anchor = require(lf)->GetAnchor(anchor);
        }
        bool flag = (is_null(lf) || require(lf)->GetFont() == -1) &&
                    PLS_API(require(self->source_font())->IsNeedLocalizeScale());
        if (flag) {
            num = PLS_API(require(self->source_font())->GetSize());
            pls::cs::Int32 height = PLS_API(require(self->source_font())->GetHeight());
            PLS_API(([&]() -> void {
                auto cs_receiver = self->source_font();
                pls::cs::Int32 cs_arg0 = PLS_API(require(self->source_font())->GetLocalizeScale());
                require(cs_receiver)->SetSize(cs_arg0, true);
            }()));
            if ((anchor & 0x60) == 0) {
                y += pls::cs::Single((height - PLS_API(require(self->source_font())->GetHeight()))) / 2.0f;
            }
            PLS_API(pls::kairo::Font::LockLocalizeSetting());
        }
        PLS_API(self->SetColor(color));
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(pls::kairo::Graphics::outlineQuality_) + 1; ++i) {
            auto cs_left_246 = pls::kairo::Graphics::outlineWidth_ * pls::cs::Single((i + 1));
            auto cs_right_246 = pls::cs::Single((pls::cs::Int32(pls::kairo::Graphics::outlineQuality_) + 1));
            pls::cs::Single num2 = cs_left_246 / cs_right_246;
            PLS_API(self->DrawString(str, x - num2, y - num2, anchor));
            PLS_API(self->DrawString(str, x + 0.0f, y - num2, anchor));
            PLS_API(self->DrawString(str, x + num2, y - num2, anchor));
            PLS_API(self->DrawString(str, x - num2, y + 0.0f, anchor));
            PLS_API(self->DrawString(str, x + num2, y + 0.0f, anchor));
            PLS_API(self->DrawString(str, x - num2, y + num2, anchor));
            PLS_API(self->DrawString(str, x + 0.0f, y + num2, anchor));
            PLS_API(self->DrawString(str, x + num2, y + num2, anchor));
        }
        PLS_API(self->SetColor(color2));
        PLS_API(self->DrawString(str, x, y, anchor));
        if (flag) {
            PLS_API(pls::kairo::Font::UnlockLocalizeSetting());
        }
        if (num != -1) {
            PLS_API(require(self->source_font())->SetSize(num, true));
        }
    }
}

// M:kairo.unity.ui.Graphics.DrawStringBold2(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32,System.Int32)
void DrawStringBold2(pls::cs::Ref<pls::kairo::Graphics> self, pls::cs::Ref<TextFormat> lf,
                     pls::cs::String str, pls::cs::Single x, pls::cs::Single y, pls::cs::Int32 color,
                     pls::cs::Int32 anchor) {
    require(self);
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Graphics.DrawStringBold2(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32,System.Int32)",
        kairo);
    {
        pls::cs::Int32 color2 = self->source_color();
        pls::cs::Int32 num = -1;
        if (!PLS_API(kl_util::Language::Japanese()) && !is_null(lf)) {
            if (require(lf)->GetFont() != -1 && ([&]() -> bool {
                    auto cs_left = require(lf)->GetFont();
                    auto cs_right = PLS_API(require(self->source_font())->GetSize());
                    return cs_left != cs_right;
                }())) {
                num = PLS_API(require(self->source_font())->GetSize());
                PLS_API(([&]() -> void {
                    auto cs_receiver = self->source_font();
                    pls::cs::Int32 cs_arg0 = require(lf)->GetFont();
                    require(cs_receiver)->SetSize(cs_arg0, true);
                }()));
            }
            x = require(lf)->GetX(x);
            y = require(lf)->GetY(y);
            anchor = require(lf)->GetAnchor(anchor);
        }
        bool flag = (is_null(lf) || require(lf)->GetFont() == -1) &&
                    PLS_API(require(self->source_font())->IsNeedLocalizeScale());
        if (flag) {
            num = PLS_API(require(self->source_font())->GetSize());
            pls::cs::Int32 height = PLS_API(require(self->source_font())->GetHeight());
            PLS_API(([&]() -> void {
                auto cs_receiver = self->source_font();
                pls::cs::Int32 cs_arg0 = PLS_API(require(self->source_font())->GetLocalizeScale());
                require(cs_receiver)->SetSize(cs_arg0, true);
            }()));
            if ((anchor & 0x60) == 0) {
                y += pls::cs::Single((height - PLS_API(require(self->source_font())->GetHeight()))) / 2.0f;
            }
            PLS_API(pls::kairo::Font::LockLocalizeSetting());
        }
        PLS_API(self->SetColor(color));
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(pls::kairo::Graphics::outlineQuality_) + 1; ++i) {
            auto cs_left_247 = pls::kairo::Graphics::outlineWidth_ * pls::cs::Single((i + 1));
            auto cs_right_247 = pls::cs::Single((pls::cs::Int32(pls::kairo::Graphics::outlineQuality_) + 1));
            pls::cs::Single num2 = cs_left_247 / cs_right_247;
            pls::cs::String str2 = TextLayout::RemoveColorTag(str);
            Graphics::DrawString2(self, str2, x - num2, y - num2, anchor);
            Graphics::DrawString2(self, str2, x + 0.0f, y - num2, anchor);
            Graphics::DrawString2(self, str2, x + num2, y - num2, anchor);
            Graphics::DrawString2(self, str2, x - num2, y + 0.0f, anchor);
            Graphics::DrawString2(self, str2, x + num2, y + 0.0f, anchor);
            Graphics::DrawString2(self, str2, x - num2, y + num2, anchor);
            Graphics::DrawString2(self, str2, x + 0.0f, y + num2, anchor);
            Graphics::DrawString2(self, str2, x + num2, y + num2, anchor);
        }
        PLS_API(self->SetColor(color2));
        Graphics::DrawString2(self, str, x, y, anchor);
        if (flag) {
            PLS_API(pls::kairo::Font::UnlockLocalizeSetting());
        }
        if (num != -1) {
            PLS_API(require(self->source_font())->SetSize(num, true));
        }
    }
}

// M:kairo.unity.ui.Graphics.GetColorOfName(System.Int32)
pls::cs::Int32 GetColorOfName(pls::cs::Int32 name) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Graphics.GetColorOfName(System.Int32)", kairo);
    {
        return name;
    }
}

// M:kairo.unity.ui.Graphics.GetLineSpace
pls::cs::Int32 GetLineSpace() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Graphics.GetLineSpace", kairo);
    {
        return pls::kairo::Graphics::lineSpacing_;
    }
}
} // namespace kairo::unity::ui::Graphics
}
