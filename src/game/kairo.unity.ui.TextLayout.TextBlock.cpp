// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "kairo.unity.ui.Font.hpp"
#include "kairo.unity.ui.Matrix.hpp"
#include "kairo.unity.ui.Pictograph.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.ui.TextLayout.TextBlock.hpp"
#include "kairo.unity.ui.TextLayout.hpp"

namespace kl_lang = pls::generated::java::lang;

using ShortArray = pls::cs::Array<std::int16_t>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace kairo::unity::ui {

void TextLayout_TextBlock::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(parent_, visitor);
    pls::cs::trace_value(font_, visitor);
    pls::cs::trace_value(text_, visitor);
    pls::cs::trace_value(pictographParam_, visitor);
}

static PLS_NOINLINE void cs_init_43347b50b6a10e65_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ui.TextLayout.TextBlock", flag, []() {

    });
}

void TextLayout_TextBlock::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_43347b50b6a10e65_slow(flag);
}

void TextLayout_TextBlock::create_init(pls::cs::Ref<TextLayout_TextBlock> self,
                                       pls::cs::Ref<TextLayout> parent, pls::cs::Ref<pls::kairo::Font> font,
                                       pls::cs::Int32 color, pls::cs::Single x, pls::cs::Single y,
                                       pls::cs::Int32 blink) {
    TextLayout_TextBlock::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.TextLayout.TextBlock.#ctor(kairo.unity.ui.TextLayout,kairo.unity.ui.Font,System.Int32,System.Single,System.Single,System.Int32)",
        kairo);
    {
        self->parent_ = parent;
        self->font_ = pls::cs::make_ref<pls::kairo::Font>(font);
        self->color_ = color;
        self->x_ = x;
        self->y_ = y;
        self->blink_ = blink;
        self->text_ = literal(u"");
    }
}

// M:kairo.unity.ui.TextLayout.TextBlock.#ctor(kairo.unity.ui.TextLayout,kairo.unity.ui.Font,System.Int32,System.Single,System.Single,System.Int32)
pls::cs::Ref<TextLayout_TextBlock> TextLayout_TextBlock::create(pls::cs::Ref<TextLayout> parent,
                                                                pls::cs::Ref<pls::kairo::Font> font,
                                                                pls::cs::Int32 color, pls::cs::Single x,
                                                                pls::cs::Single y, pls::cs::Int32 blink) {
    TextLayout_TextBlock::ensure_initialized();
    auto self = pls::cs::make_ref<TextLayout_TextBlock>();
    TextLayout_TextBlock::create_init(self, parent, font, color, x, y, blink);
    return self;
}

// M:kairo.unity.ui.TextLayout.TextBlock.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)
pls::cs::Int32 TextLayout_TextBlock::Draw(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Single x,
                                          pls::cs::Single y, pls::cs::Single boxY, pls::cs::Single boxH,
                                          pls::cs::Int32 len) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.TextLayout.TextBlock.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,System.Int32)",
        kairo);
    {
        pls::cs::Single num = x_;
        pls::cs::Single num2 = y_;
        if (pls::diagnostic::api_call([&]() -> decltype(auto) { return require(g)->CheckLocalMatrix(); })) {
            pls::diagnostic::api_call([&]() -> decltype(auto) {
                return ([&]() -> void {
                    pls::cs::Ref<Matrix> cs_arg0 = Matrix::TranslateTemporary(num, num2);
                    PlsPortGeneratedBootstrap::Source::PushGraphicsMatrix(require(g), cs_arg0);
                }());
            });
            num2 = 0.0f;
            num = num2;
        }
        {
            auto cs_flow_94 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<pls::cs::Int32> {
                    {
                        if (isPictograph_) {
                            pls::cs::Int32 result = 1;
                            if (len == 0) {
                                return pls::cs::flow_return(0);
                            }
                            pls::cs::Ref<Pictograph> pictograph =
                                TextLayout::GetPictograph(pictographParam_[0]);
                            if (is_null(pictograph)) {
                                return pls::cs::flow_return(result);
                            }
                            pls::cs::Int32 num3 = Pictograph::get_Frame(pictograph);
                            pls::cs::Int32 num4 = Pictograph::get_Wait(pictograph);
                            pls::cs::Int32 num5 = Pictograph::get_X(pictograph);
                            pls::cs::Int32 num6 = Pictograph::get_Y(pictograph);
                            if (1 < pictographParam_.length() && (pictographParam_[1].length() > 0)) {
                                if (pictographParam_[1] == literal(u"∞")) {
                                    num3 = -1;
                                } else {
                                    num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                        return pls::cs::int32_parse(pictographParam_[1]);
                                    });
                                }
                            }
                            if (2 < pictographParam_.length() && (pictographParam_[2].length() > 0)) {
                                num4 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::cs::int32_parse(pictographParam_[2]);
                                });
                            }
                            if (3 < pictographParam_.length() && (pictographParam_[3].length() > 0)) {
                                num5 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::cs::int32_parse(pictographParam_[3]);
                                });
                            }
                            if (4 < pictographParam_.length() && (pictographParam_[4].length() > 0)) {
                                num6 = pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return pls::cs::int32_parse(pictographParam_[4]);
                                });
                            }
                            x += pls::cs::Single(num5);
                            y += pls::cs::Single(num6);
                            if (num4 < 1) {
                                num4 = 1;
                            }
                            if (num3 == -1) {
                                num3 = ([&]() -> pls::cs::Int32 {
                                    auto cs_left = require(parent_)->draw_ / num4;
                                    auto cs_right = require(Pictograph::get_Seb(pictograph))->GetMaxFrame();
                                    return cs_left % cs_right;
                                }());
                            }
                            pls::cs::Single num7 =
                                pls::cs::Single(pls::diagnostic::api_call(
                                    [&]() -> decltype(auto) { return require(font_)->GetHeight(); })) /
                                12.0f;
                            ShortArray boundingRect =
                                require(Pictograph::get_Seb(pictograph))->GetBoundingRect(num3);
                            if (boxH != -1.0f &&
                                (([&]() -> pls::cs::FloatEval {
                                     auto cs_left = y + y_;
                                     auto cs_right =
                                         pls::cs::Single((boundingRect[1] + boundingRect[3])) * num7;
                                     return cs_left + cs_right;
                                 }()) < boxY ||
                                 boxY + boxH < ([&]() -> pls::cs::FloatEval {
                                     auto cs_left = y + y_;
                                     auto cs_right = pls::cs::Single(boundingRect[1]) * num7;
                                     return cs_left + cs_right;
                                 }()))) {
                                return pls::cs::flow_return(result);
                            }
                            if (TextLayout::pictographVisible_()) {
                                IntArray2 sprites =
                                    require(Pictograph::get_Seb(pictograph))->GetSprites(num3);
                                {
                                    auto cs_each93 = sprites;
                                    for (std::int32_t cs_i93 = 0; cs_i93 < cs_each93.length(); ++cs_i93) {
                                        IntArray array = cs_each93.get_Item(cs_i93);
                                        {
                                            if (array[1] < 0) {
                                                continue;
                                            }
                                            bool flag = false;
                                            if (array[10] != 0) {
                                                flag = true;
                                            }
                                            if (flag) {
                                                pls::cs::Int32 num8 =
                                                    pls::cs::to_int32((((pls::cs::Int64(array[11]) &
                                                                         pls::cs::Int64(0xFF000000u)) >>
                                                                        24) &
                                                                       pls::cs::Int64(0xFF)));
                                                if (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return require(g)->GetRenderModeOperator();
                                                    }) == 0 &&
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return require(g)->GetRenderModeSrcRatio();
                                                    }) != 255) {
                                                    num8 = num8 *
                                                           pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                               return require(g)->GetRenderModeSrcRatio();
                                                           }) /
                                                           255;
                                                    if (num8 > 255) {
                                                        num8 = 255;
                                                    }
                                                }
                                                if (array[10] == 1) {
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return require(g)->PushRenderMode(1, num8,
                                                                                          255 - num8);
                                                    });
                                                } else if (array[10] == 2) {
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return require(g)->PushRenderMode(1, num8, 255);
                                                    });
                                                } else if (array[10] == 3) {
                                                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                        return require(g)->PushRenderMode(2, num8, 255);
                                                    });
                                                }
                                            }
                                            pls::cs::Single dx = x + num + pls::cs::Single(array[6]) * num7;
                                            pls::cs::Single dy = y + num2 + pls::cs::Single(array[7]) * num7;
                                            pls::cs::Int32 num9 =
                                                pls::cs::to_int32((pls::cs::Single(array[4]) * num7 + 0.01f));
                                            pls::cs::Int32 num10 =
                                                pls::cs::to_int32((pls::cs::Single(array[5]) * num7 + 0.01f));
                                            if (!require(Pictograph::get_Transform(pictograph))
                                                     ->IsIdentity()) {
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return ([&]() -> void {
                                                        pls::cs::Ref<Matrix> cs_arg0 =
                                                            Pictograph::get_Transform(pictograph);
                                                        PlsPortGeneratedBootstrap::Source::PushGraphicsMatrix(
                                                            require(g), cs_arg0);
                                                    }());
                                                });
                                            }
                                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return ([&]() -> void {
                                                    pls::cs::Ref<pls::kairo::Image> cs_arg0 =
                                                        require(require(Pictograph::get_Seb(pictograph))
                                                                    ->manager_)
                                                            ->img.get_Item(array[1]);
                                                    pls::cs::Int32 cs_arg5 = array[2];
                                                    pls::cs::Int32 cs_arg6 = array[3];
                                                    pls::cs::Int32 cs_arg7 = array[4];
                                                    pls::cs::Int32 cs_arg8 = array[5];
                                                    require(g)->DrawScaledImage(cs_arg0, dx, dy, num9, num10,
                                                                                cs_arg5, cs_arg6, cs_arg7,
                                                                                cs_arg8);
                                                }());
                                            });
                                            if (!require(Pictograph::get_Transform(pictograph))
                                                     ->IsIdentity()) {
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return require(g)->PopMatrix();
                                                });
                                            }
                                            if (flag) {
                                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                    return require(g)->PopRenderMode();
                                                });
                                            }
                                        }
                                    }
                                }
                            }
                            return pls::cs::flow_return(result);
                        }
                        {
                            pls::cs::Int32 num11 = len;
                            if (num11 > kl_lang::StringEx::Length(text_)) {
                                num11 = kl_lang::StringEx::Length(text_);
                            }
                            if ((blink_ > 0 && blinkCnt_ >= blink_) || len == 0) {
                                return pls::cs::flow_return(num11);
                            }
                            if (boxH != -1.0f &&
                                (([&]() -> pls::cs::FloatEval {
                                     auto cs_left = y + y_;
                                     auto cs_right = pls::cs::Single(pls::diagnostic::api_call(
                                         [&]() -> decltype(auto) { return require(font_)->GetHeight(); }));
                                     return cs_left + cs_right;
                                 }()) < boxY ||
                                 boxY + boxH < y + y_)) {
                                return pls::cs::flow_return(num11);
                            }
                            pls::diagnostic::api_call(
                                [&]() -> decltype(auto) { return require(g)->SetColor(color_); });
                            if (len >= kl_lang::StringEx::Length(text_)) {
                                Font::Draw(require(font_), g, text_, x + num, y + num2);
                            } else {
                                {
                                    auto cs_receiver = font_;
                                    pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                                    pls::cs::String cs_arg1 = pls::diagnostic::api_call(
                                        [&]() -> decltype(auto) { return substring2(text_, 0, len); });
                                    Font::Draw(require(cs_receiver), cs_arg0, cs_arg1, x + num, y + num2);
                                }
                            }
                            return pls::cs::flow_return(num11);
                        }
                    }
                    return {};
                },
                [&]() {
                    if (pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(g)->CheckLocalMatrix(); })) {
                        pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return require(g)->PopMatrix(); });
                    }
                });
            return cs_flow_94.value();
        }
    }
}

// M:kairo.unity.ui.TextLayout.TextBlock.Dispose
void TextLayout_TextBlock::Dispose() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.TextLayout.TextBlock.Dispose", kairo);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) { return require(font_)->Dispose(); });
        font_ = pls::cs::Ref<pls::kairo::Font>{};
        text_ = pls::cs::String{};
    }
}
} // namespace kairo::unity::ui
}
